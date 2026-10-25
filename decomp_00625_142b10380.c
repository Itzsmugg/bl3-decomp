// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142b10380 FUN_142b10380 body=94 status=ok
// SIG undefined FUN_142b10380(void)

undefined8 * FUN_142b10380(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ee70;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b103e0 FUN_142b103e0 body=138 status=ok
// SIG undefined FUN_142b103e0(void)

undefined8 * FUN_142b103e0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14571eeb0;
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b10470 FUN_142b10470 body=136 status=ok
// SIG undefined FUN_142b10470(void)

undefined8 * FUN_142b10470(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14571eed0;
  iVar2 = *(int *)(param_1 + 2);
  lVar1 = param_1[1];
  if (iVar2 != 0) {
    do {
      FUN_142b0f140(lVar1);
      lVar1 = lVar1 + 0xb0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = param_1[1];
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b10500 FUN_142b10500 body=52 status=ok
// SIG undefined FUN_142b10500(void)

undefined8 FUN_142b10500(undefined8 param_1,ulonglong param_2)

{
  Chaos::FPBDSuspensionConstraints::~FPBDSuspensionConstraints();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142b10540 FUN_142b10540 body=83 status=ok
// SIG undefined FUN_142b10540(void)

undefined8 * FUN_142b10540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ef10;
  FUN_142b0ea10(param_1 + 0x10);
  FUN_142b0ee10(param_1 + 2);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142b105a0 FUN_142b105a0 body=152 status=ok
// SIG undefined FUN_142b105a0(void)

undefined8 * FUN_142b105a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ef50;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_14571ef30;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 142b10640 FUN_142b10640 body=180 status=ok
// SIG undefined FUN_142b10640(void)

undefined8 * FUN_142b10640(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14571ef70;
  iVar2 = *(int *)(param_1 + 0x16);
  plVar1 = (longlong *)param_1[0x15];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[0x15];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_142b0ea10(param_1 + 0x13);
  FUN_142b0ee10(param_1 + 5);
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 142b10700 FUN_142b10700 body=94 status=ok
// SIG undefined FUN_142b10700(void)

undefined8 * FUN_142b10700(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ef30;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b10760 FUN_142b10760 body=166 status=ok
// SIG undefined FUN_142b10760(void)

undefined8 * FUN_142b10760(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571efb0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_FUN_14571ef90;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 142b10810 FUN_142b10810 body=83 status=ok
// SIG undefined FUN_142b10810(void)

undefined8 * FUN_142b10810(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571efd0;
  FUN_142b0ea10(param_1 + 0x10);
  FUN_142b0ee10(param_1 + 2);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 142b10870 FUN_142b10870 body=122 status=ok
// SIG undefined FUN_142b10870(void)

undefined8 * FUN_142b10870(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ef90;
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142b108f0 FUN_142b108f0 body=124 status=ok
// SIG undefined FUN_142b108f0(void)

undefined8 * FUN_142b108f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f010;
  param_1[1] = &PTR_FUN_14571eff0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b10970 FUN_142b10970 body=94 status=ok
// SIG undefined FUN_142b10970(void)

undefined8 * FUN_142b10970(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571eff0;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b109d0 FUN_142b109d0 body=74 status=ok
// SIG undefined FUN_142b109d0(void)

undefined8 * FUN_142b109d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f030;
  FUN_142b0ea10(param_1 + 2);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b10a20 `scalar_deleting_destructor' body=80 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNetworkReplayStartUploadingResponse::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14571ed50;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b10a70 FUN_142b10a70 body=108 status=ok
// SIG undefined FUN_142b10a70(void)

undefined8 * FUN_142b10a70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571ed10;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 142b10ae0 FUN_142b10ae0 body=74 status=ok
// SIG undefined FUN_142b10ae0(void)

undefined8 * FUN_142b10ae0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f070;
  FUN_142b0ebe0(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b10b30 FUN_142b10b30 body=94 status=ok
// SIG undefined FUN_142b10b30(void)

undefined8 * FUN_142b10b30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f050;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b10b90 FUN_142b10b90 body=74 status=ok
// SIG undefined FUN_142b10b90(void)

undefined8 * FUN_142b10b90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f0b0;
  FUN_142b0ed00(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 142b10be0 FUN_142b10be0 body=94 status=ok
// SIG undefined FUN_142b10be0(void)

undefined8 * FUN_142b10be0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f0d0;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b10c40 FUN_142b10c40 body=74 status=ok
// SIG undefined FUN_142b10c40(void)

undefined8 * FUN_142b10c40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f0f0;
  FUN_142b0ec70(param_1 + 2);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b10c90 FUN_142b10c90 body=94 status=ok
// SIG undefined FUN_142b10c90(void)

undefined8 * FUN_142b10c90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f090;
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142b10cf0 `scalar_deleting_destructor' body=83 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FStorageListener::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14571f110;
  FUN_142b0eb40(param_1 + 4);
  FUN_142b0e820(param_1 + 2);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b10d50 FUN_142b10d50 body=138 status=ok
// SIG undefined FUN_142b10d50(void)

undefined8 * FUN_142b10d50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f150;
  param_1[1] = &PTR_FUN_14571f130;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142b10de0 FUN_142b10de0 body=108 status=ok
// SIG undefined FUN_142b10de0(void)

undefined8 * FUN_142b10de0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14571f130;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142b10e50 FUN_142b10e50 body=291 status=ok
// SIG undefined FUN_142b10e50(void)

undefined8 * FUN_142b10e50(undefined8 *param_1,ulonglong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14571f170;
  if (param_1[0x2f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2d] != 0) {
    FMemory::Free();
  }
  FUN_142b0eb40(param_1 + 0x2b);
  FUN_142b0e820(param_1 + 0x29);
  iVar1 = *(int *)(param_1 + 0x28);
  plVar2 = (longlong *)param_1[0x27];
  if (iVar1 != 0) {
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    plVar2 = (longlong *)param_1[0x27];
  }
  if (plVar2 != (longlong *)0x0) {
    FMemory::Free(plVar2);
  }
  Chaos::FPBDSuspensionConstraints::~FPBDSuspensionConstraints(param_1 + 0x1b);
  FUN_142b0ee10(param_1 + 0xd);
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  FUN_142b0ea10(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 142b10f80 FUN_142b10f80 body=342 status=ok
// SIG undefined FUN_142b10f80(void)

undefined1 FUN_142b10f80(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 3;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],3,&DAT_1456e3f94,3,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"version",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],6,"state",6,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b110e0 FUN_142b110e0 body=488 status=ok
// SIG undefined FUN_142b110e0(void)

undefined8 FUN_142b110e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_res10;
  longlong local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  if (*param_2 == 0) {
    return 0;
  }
  local_60 = 8;
  local_68 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_68,8,"country",8,0x3f);
  FUN_1416b40a0(*param_2,&local_68,param_1 + 8);
  if (local_68 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  local_60 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"eulas",0xc);
  cVar2 = FUN_1416b3850(*param_2,&local_68,&local_res10);
  if (cVar2 != '\0') {
    lVar4 = *local_res10;
    lVar5 = (longlong)(int)local_res10[1] * 0x10 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
      FStatData::FStatData(&local_58);
      local_58 = &PTR_FUN_14571ea90;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      local_50 = 0;
      cVar2 = FUN_142af74a0(lVar4,&local_58);
      if (cVar2 != '\0') {
        iVar1 = *(int *)(param_1 + 0x20);
        *(int *)(param_1 + 0x20) = iVar1 + 1;
        if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
        }
        puVar3 = (undefined8 *)((longlong)iVar1 * 0x30 + *(longlong *)(param_1 + 0x18));
        *puVar3 = &PTR_FUN_14571ea90;
        *(undefined4 *)(puVar3 + 1) = local_50;
        FString::FString(puVar3 + 2,&local_48);
        FString::FString(puVar3 + 4,&local_38);
      }
      local_58 = &PTR_FUN_14571ea90;
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_48 != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(&local_58);
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b112d0 FUN_142b112d0 body=353 status=ok
// SIG undefined FUN_142b112d0(void)

undefined1 FUN_142b112d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"success",8,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x10,"sign_agreements",0x10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"messages",0x12);
  cVar1 = FUN_1416b3850(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c770(local_res10,param_1 + 0x20);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b11440 FUN_142b11440 body=1018 status=ok
// SIG undefined FUN_142b11440(void)

undefined1 FUN_142b11440(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],6,"state",6,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xc,"in_progress",0xc,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xe,"disable_spark",0xe,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 0x19);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"timeout",8,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 0x1a);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x12,"has_shift_account",0x12,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 0x1b);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"is_confirmed",0xd,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 0x1c);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xc,"account_uid",0xc,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"display_name",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x11,"shift_service_id",0x11,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x40);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"request_id",0xb,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x50);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x12,"emergency_message",0x12,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x60);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b11840 FUN_142b11840 body=325 status=ok
// SIG undefined FUN_142b11840(void)

undefined8 FUN_142b11840(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  longlong local_28 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_28[1] = 9;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"messages",0x12);
  cVar1 = FUN_1416b3850(*param_2,local_28,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c770(local_res10,param_1 + 8);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],8,"success",8,0x3f);
  FUN_1416b3900(*param_2,local_28,param_1 + 0x18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"archway",0x10);
  cVar1 = FUN_1416b3e60(*param_2,local_28,local_res18);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res18[0],param_1 + 0x20);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b11990 FUN_142b11990 body=252 status=ok
// SIG undefined FUN_142b11990(void)

undefined8 FUN_142b11990(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0xd;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"entitlements",0x1a);
  cVar1 = FUN_1416b3e60(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10,param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"language",9,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b11a90 FUN_142b11a90 body=254 status=ok
// SIG undefined FUN_142b11a90(void)

undefined8 FUN_142b11a90(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"success",8,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"messages",0x12);
  cVar1 = FUN_1416b3850(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c770(local_res10,param_1 + 0x10);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b11b90 FUN_142b11b90 body=253 status=ok
// SIG undefined FUN_142b11b90(void)

undefined1 FUN_142b11b90(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 9;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"consumed",9,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xf,"consumed_count",0xf,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b11ca0 FUN_142b11ca0 body=766 status=ok
// SIG undefined FUN_142b11ca0(void)

undefined1 FUN_142b11ca0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x12,"consumable_amount",0x12,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"consumed",9,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 0xc);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x14,"user_entitlement_id",0x14,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x12,"string_identifier",0x12,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x10,"title_localized",0x10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x16,"description_localized",0x16,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x38);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"consumable",0xb,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 0x48);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"payload",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x50);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b11fa0 FUN_142b11fa0 body=253 status=ok
// SIG undefined FUN_142b11fa0(void)

undefined1 FUN_142b11fa0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_14571a3b4,5,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"message",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b120a0 FUN_142b120a0 body=514 status=ok
// SIG undefined FUN_142b120a0(void)

undefined1 FUN_142b120a0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"eula_id",8,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"version",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x16,"agreement_title_local",0x16,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x15,"agreement_text_local",0x15,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],10,"eula_type",10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x40);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b122b0 FUN_142b122b0 body=252 status=ok
// SIG undefined FUN_142b122b0(void)

undefined8 FUN_142b122b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"eulas",0xc);
  cVar1 = FUN_1416b3850(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c510(local_res10,param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x10,"sign_agreements",0x10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b123b0 FUN_142b123b0 body=253 status=ok
// SIG undefined FUN_142b123b0(void)

undefined1 FUN_142b123b0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 4;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],4,&DAT_1456e76e4,4,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],6,"value",6,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b124b0 FUN_142b124b0 body=253 status=ok
// SIG undefined FUN_142b124b0(void)

undefined1 FUN_142b124b0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 10;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],10,"link_code",10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x12,"seconds_to_expire",0x12,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b125b0 FUN_142b125b0 body=144 status=ok
// SIG undefined FUN_142b125b0(void)

undefined8 FUN_142b125b0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"message",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b12640 FUN_142b12640 body=497 status=ok
// SIG undefined FUN_142b12640(void)

undefined1 FUN_142b12640(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_28 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"oauth",0xc);
  cVar1 = FUN_1416b3e60(*param_2,local_28,&local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10,param_1 + 8);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],7,"job_id",7,0x3f);
  FUN_1416b40a0(*param_2,local_28,param_1 + 0x20);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0x16,"min_wait_milliseconds",0x16,0x3f);
  FUN_1416b3b00(*param_2,local_28,param_1 + 0x30);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0x16,"max_wait_milliseconds",0x16,0x3f);
  FUN_1416b3b00(*param_2,local_28,param_1 + 0x34);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0x13,"max_retry_attempts",0x13,0x3f);
  FUN_1416b3b00(*param_2,local_28,param_1 + 0x38);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b12840 FUN_142b12840 body=253 status=ok
// SIG undefined FUN_142b12840(void)

undefined1 FUN_142b12840(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0x16;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x16,"min_wait_milliseconds",0x16,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x16,"max_wait_milliseconds",0x16,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 0xc);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b12940 FUN_142b12940 body=144 status=ok
// SIG undefined FUN_142b12940(void)

undefined8 FUN_142b12940(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0xd;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"access_token",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b129d0 FUN_142b129d0 body=144 status=ok
// SIG undefined FUN_142b129d0(void)

undefined8 FUN_142b129d0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_1456f9390,5,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b12a60 FUN_142b12a60 body=342 status=ok
// SIG undefined FUN_142b12a60(void)

undefined1 FUN_142b12a60(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 9;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"in_queue",9,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],7,"status",7,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 0xc);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"poll_seconds",0xd,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b12bc0 FUN_142b12bc0 body=253 status=ok
// SIG undefined FUN_142b12bc0(void)

undefined1 FUN_142b12bc0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_145702234,5,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"language",9,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b12cc0 FUN_142b12cc0 body=767 status=ok
// SIG undefined FUN_142b12cc0(void)

undefined1 FUN_142b12cc0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_38 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_38[0] = 0;
  local_38[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],8,"success",8,0x3f);
  FUN_1416b3900(*param_2,local_38,param_1 + 8);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"entitlements",0x1a);
  cVar1 = FUN_1416b3850(*param_2,local_38,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c380(local_res10,param_1 + 0x10);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"user_offers",0x18);
  cVar1 = FUN_1416b3850(*param_2,local_38,&local_res18);
  if (cVar1 != '\0') {
    FUN_142b0c860(local_res18,param_1 + 0x20);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"messages",0x12);
  cVar1 = FUN_1416b3850(*param_2,local_38,&local_res20);
  if (cVar1 != '\0') {
    FUN_142b0c770(local_res20,param_1 + 0x30);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],7,"job_id",7,0x3f);
  FUN_1416b40a0(*param_2,local_38,param_1 + 0x40);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],0x16,"min_wait_milliseconds",0x16,0x3f);
  FUN_1416b3b00(*param_2,local_38,param_1 + 0x50);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],0x16,"max_wait_milliseconds",0x16,0x3f);
  FUN_1416b3b00(*param_2,local_38,param_1 + 0x54);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],0x13,"max_retry_attempts",0x13,0x3f);
  FUN_1416b3b00(*param_2,local_38,param_1 + 0x58);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b12fc0 FUN_142b12fc0 body=150 status=ok
// SIG undefined FUN_142b12fc0(void)

undefined8 FUN_142b12fc0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 9;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"user_nat",0x12);
  cVar1 = FUN_1416b3e60(*param_2,local_18,local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10[0],param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b13060 FUN_142b13060 body=353 status=ok
// SIG undefined FUN_142b13060(void)

undefined1 FUN_142b13060(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"success",8,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"nat_type",9,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"messages",0x12);
  cVar1 = FUN_1416b3850(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c770(local_res10,param_1 + 0x20);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b131d0 FUN_142b131d0 body=364 status=ok
// SIG undefined FUN_142b131d0(void)

undefined8 FUN_142b131d0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[0] = 0;
    local_18[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],7,"reason",7,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_18[0] = 0;
      local_18[1] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"session_id",0xb,0x3f);
      FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      local_18[0] = 0;
      local_18[1] = 0xc;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xc,"description",0xc,0x3f);
      FUN_1416b40a0(*param_2,local_18,param_1 + 0x28);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142b13340 FUN_142b13340 body=252 status=ok
// SIG undefined FUN_142b13340(void)

undefined8 FUN_142b13340(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"user",10);
  cVar1 = FUN_1416b3e60(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10,param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"language",9,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b13440 FUN_142b13440 body=254 status=ok
// SIG undefined FUN_142b13440(void)

undefined8 FUN_142b13440(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"success",8,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"messages",0x12);
  cVar1 = FUN_1416b3850(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c770(local_res10,param_1 + 0x10);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b13540 FUN_142b13540 body=144 status=ok
// SIG undefined FUN_142b13540(void)

undefined8 FUN_142b13540(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],6,"email",6,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b135d0 FUN_142b135d0 body=652 status=ok
// SIG undefined FUN_142b135d0(void)

undefined8 FUN_142b135d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *local_res10;
  longlong local_68;
  undefined8 local_60;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  if (*param_2 == 0) {
    return 0;
  }
  local_60 = 0xd;
  local_68 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_68,0xd,"service_name",0xd,0x3f);
  FUN_1416b40a0(*param_2,&local_68,param_1 + 8);
  if (local_68 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  local_60 = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_68,0x14,"configuration_group",0x14,0x3f);
  FUN_1416b40a0(*param_2,&local_68,param_1 + 0x18);
  if (local_68 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  local_60 = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_68,0x16,"configuration_version",0x16,0x3f);
  FUN_1416b40a0(*param_2,&local_68,param_1 + 0x28);
  if (local_68 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  local_60 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"parameters",0x16);
  cVar3 = FUN_1416b3850(*param_2,&local_68,&local_res10);
  if (cVar3 != '\0') {
    lVar4 = *local_res10;
    lVar5 = (longlong)(int)local_res10[1] * 0x10 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
      FStatData::FStatData(&local_58);
      local_58 = &PTR_FUN_14571f1b0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      cVar3 = FUN_142af74a0(lVar4,&local_58);
      if (cVar3 != '\0') {
        iVar1 = *(int *)(param_1 + 0x40);
        *(int *)(param_1 + 0x40) = iVar1 + 1;
        if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
          TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
        }
        lVar2 = *(longlong *)(param_1 + 0x38);
        *(undefined ***)(lVar2 + (longlong)iVar1 * 0x28) = &PTR_FUN_14571f1b0;
        lVar2 = lVar2 + (longlong)iVar1 * 0x28;
        FString::FString(lVar2 + 8,&local_50);
        FString::FString(lVar2 + 0x18,&local_40);
      }
      local_58 = &PTR_FUN_14571f1b0;
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (local_50 != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(&local_58);
    }
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b13860 FUN_142b13860 body=421 status=ok
// SIG undefined FUN_142b13860(void)

undefined8 FUN_142b13860(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_res10;
  longlong local_88;
  undefined8 local_80;
  undefined **local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*param_2 == 0) {
    return 0;
  }
  local_80 = 9;
  local_88 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"services",0x12);
  cVar2 = FUN_1416b3850(*param_2,&local_88,&local_res10);
  if (cVar2 != '\0') {
    lVar3 = *local_res10;
    lVar4 = (longlong)(int)local_res10[1] * 0x10 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x10) {
      FStatData::FStatData(&local_78);
      local_78 = &PTR_FUN_14571f1d0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      cVar2 = FUN_142af74a0(lVar3,&local_78);
      if (cVar2 != '\0') {
        iVar1 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar1 + 1;
        if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar1);
        }
        FUN_142b0dda0(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 0x48,&local_78);
      }
      local_78 = &PTR_FUN_14571f1d0;
      FUN_142b0e980(&local_40);
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
      if (local_70 != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(&local_78);
    }
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b13a10 FUN_142b13a10 body=602 status=ok
// SIG undefined FUN_142b13a10(void)

undefined1 FUN_142b13a10(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_38 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_38[0] = 0;
  local_38[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],9,"cross_id",9,0x3f);
  FUN_1416b40a0(*param_2,local_38,param_1 + 8);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],0xb,"session_id",0xb,0x3f);
  FUN_1416b40a0(*param_2,local_38,param_1 + 0x18);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],0xd,"display_name",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_38,param_1 + 0x28);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"local_service_info",0x26);
  cVar1 = FUN_1416b3e60(*param_2,local_38,&local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10,param_1 + 0x38);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"linked_service_info",0x28);
  cVar1 = FUN_1416b3e60(*param_2,local_38,&local_res18);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res18,param_1 + 0x60);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"shift_service_info",0x26);
  cVar1 = FUN_1416b3e60(*param_2,local_38,&local_res20);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res20,param_1 + 0x88);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b13c70 FUN_142b13c70 body=253 status=ok
// SIG undefined FUN_142b13c70(void)

undefined1 FUN_142b13c70(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0xb;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"service_id",0xb,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"display_name",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b13d70 FUN_142b13d70 body=253 status=ok
// SIG undefined FUN_142b13d70(void)

undefined1 FUN_142b13d70(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0xb;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"service_id",0xb,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"display_name",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b13e70 FUN_142b13e70 body=253 status=ok
// SIG undefined FUN_142b13e70(void)

undefined1 FUN_142b13e70(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0xb;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"service_id",0xb,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"display_name",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b13f70 FUN_142b13f70 body=150 status=ok
// SIG undefined FUN_142b13f70(void)

undefined8 FUN_142b13f70(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0xc;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"session_ids",0x18);
  cVar1 = FUN_1416b3850(*param_2,local_18,local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c680(local_res10[0],param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b14010 FUN_142b14010 body=501 status=ok
// SIG undefined FUN_142b14010(void)

undefined8 FUN_142b14010(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *local_res10;
  longlong local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (*param_2 == 0) {
    return 0;
  }
  local_e0 = 0x10;
  local_e8 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
  FGenericPlatformString::Memcpy(local_e8,L"session_players",0x20);
  cVar2 = FUN_1416b3850(*param_2,&local_e8,&local_res10);
  if (cVar2 != '\0') {
    lVar3 = *local_res10;
    lVar4 = (longlong)(int)local_res10[1] * 0x10 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0x10) {
      FStatData::FStatData(&local_d8);
      local_d8 = &PTR_FUN_14571ee90;
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      FStatData::FStatData(&local_a0);
      local_a0 = &PTR_FUN_14571ee50;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      FStatData::FStatData(&local_78);
      local_78 = &PTR_FUN_14571ee30;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      FStatData::FStatData(&local_50);
      local_48 = 0;
      local_50 = &PTR_FUN_14571ee70;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0;
      cVar2 = FUN_142af74a0(lVar3,&local_d8);
      if (cVar2 != '\0') {
        iVar1 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar1 + 1;
        if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
          TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow
                    (param_1 + 8,iVar1);
        }
        FUN_142b0deb0((longlong)iVar1 * 0xb0 + *(longlong *)(param_1 + 8),&local_d8);
      }
      FUN_142b0f140(&local_d8);
    }
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b14210 FUN_142b14210 body=598 status=ok
// SIG undefined FUN_142b14210(void)

undefined1 FUN_142b14210(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xc,"new_account",0xc,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x13,"display_name_error",0x13,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],6,"state",6,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x11,"shift_service_id",0x11,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"display_name",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x40);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xc,"account_uid",0xc,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x50);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b14470 FUN_142b14470 body=330 status=ok
// SIG undefined FUN_142b14470(void)

undefined8 FUN_142b14470(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  longlong local_28 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_28[1] = 8;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],8,"success",8,0x3f);
  FUN_1416b3900(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"archway",0x10);
  cVar1 = FUN_1416b3e60(*param_2,local_28,&local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10,param_1 + 0x10);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"messages",0x12);
  cVar1 = FUN_1416b3850(*param_2,local_28,local_res18);
  if (cVar1 != '\0') {
    FUN_142b0c770(local_res18[0],param_1 + 0x80);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b145c0 FUN_142b145c0 body=351 status=ok
// SIG undefined FUN_142b145c0(void)

undefined1 FUN_142b145c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"user",10);
  cVar1 = FUN_1416b3e60(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10,param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"display_name",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"language",9,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x40);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b14720 FUN_142b14720 body=605 status=ok
// SIG undefined FUN_142b14720(void)

undefined1 FUN_142b14720(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_38 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_38[0] = 0;
  local_38[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],8,"success",8,0x3f);
  FUN_1416b3900(*param_2,local_38,param_1 + 8);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],0x11,"mfa_challenge_id",0x11,0x3f);
  FUN_1416b40a0(*param_2,local_38,param_1 + 0x10);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_38[0],0xd,"mfa_required",0xd,0x3f);
  FUN_1416b3900(*param_2,local_38,param_1 + 0x20);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"archway",0x10);
  cVar1 = FUN_1416b3e60(*param_2,local_38,&local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10,param_1 + 0x28);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"messages",0x12);
  cVar1 = FUN_1416b3850(*param_2,local_38,&local_res18);
  if (cVar1 != '\0') {
    FUN_142b0c770(local_res18,param_1 + 0x98);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[0] = 0;
  local_38[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"display_names",0x1c);
  cVar1 = FUN_1416b3850(*param_2,local_38,&local_res20);
  if (cVar1 != '\0') {
    FUN_142b0c680(local_res20,param_1 + 0xa8);
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b14980 FUN_142b14980 body=253 status=ok
// SIG undefined FUN_142b14980(void)

undefined1 FUN_142b14980(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],6,"login",6,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"password",9,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b14a80 FUN_142b14a80 body=252 status=ok
// SIG undefined FUN_142b14a80(void)

undefined8 FUN_142b14a80(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"user",10);
  cVar1 = FUN_1416b3e60(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10,param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"language",9,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x50);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b14b80 FUN_142b14b80 body=330 status=ok
// SIG undefined FUN_142b14b80(void)

undefined8 FUN_142b14b80(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  longlong local_28 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_28[1] = 8;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],8,"success",8,0x3f);
  FUN_1416b3900(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"archway",0x10);
  cVar1 = FUN_1416b3e60(*param_2,local_28,&local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10,param_1 + 0x10);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"messages",0x12);
  cVar1 = FUN_1416b3850(*param_2,local_28,local_res18);
  if (cVar1 != '\0') {
    FUN_142b0c770(local_res18[0],param_1 + 0x80);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b14cd0 FUN_142b14cd0 body=430 status=ok
// SIG undefined FUN_142b14cd0(void)

undefined1 FUN_142b14cd0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],6,"email",6,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"password",9,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x16,"password_confirmation",0x16,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xf,"account_source",0xf,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x38);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b14e80 FUN_142b14e80 body=150 status=ok
// SIG undefined FUN_142b14e80(void)

undefined8 FUN_142b14e80(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"error",0xc);
  cVar1 = FUN_1416b3e60(*param_2,local_18,local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10[0],param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b14f20 FUN_142b14f20 body=253 status=ok
// SIG undefined FUN_142b14f20(void)

undefined1 FUN_142b14f20(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_1456f1594,5,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"message",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b15020 FUN_142b15020 body=254 status=ok
// SIG undefined FUN_142b15020(void)

undefined8 FUN_142b15020(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"success",8,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"messages",0x12);
  cVar1 = FUN_1416b3850(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c770(local_res10,param_1 + 0x10);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b15120 FUN_142b15120 body=144 status=ok
// SIG undefined FUN_142b15120(void)

undefined8 FUN_142b15120(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 9;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],9,"nat_type",9,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b151b0 FUN_142b151b0 body=514 status=ok
// SIG undefined FUN_142b151b0(void)

undefined1 FUN_142b151b0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xe,"date_unlocked",0xe,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x12,"has_been_notified",0x12,0x3f);
  FUN_1416b3900(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x10,"title_localized",0x10,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x16,"description_localized",0x16,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x17,"user_unlocked_offer_id",0x17,0x3f)
  ;
  FUN_1416b3b00(*param_2,local_18,param_1 + 0x40);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b153c0 FUN_142b153c0 body=168 status=ok
// SIG undefined FUN_142b153c0(void)

undefined8 FUN_142b153c0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0xc;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"service_ids",0x18);
  cVar2 = FUN_1416b3850(*param_2,local_18,local_res10);
  if ((cVar2 == '\0') || (cVar2 = FUN_142b0c680(local_res10[0],param_1 + 8), cVar2 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}



// FUNCTION 142b15470 FUN_142b15470 body=397 status=ok
// SIG undefined FUN_142b15470(void)

undefined8 FUN_142b15470(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_res10;
  longlong local_68;
  undefined8 local_60;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  if (*param_2 != 0) {
    local_60 = 0x12;
    local_68 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"shift_service_ids",0x24);
    cVar4 = FUN_1416b3850(*param_2,&local_68,&local_res10);
    if (cVar4 == '\0') {
      bVar3 = true;
    }
    else {
      lVar5 = *local_res10;
      lVar6 = (longlong)(int)local_res10[1] * 0x10 + lVar5;
      for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
        FStatData::FStatData(&local_58);
        local_58 = &PTR_FUN_14571f050;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        cVar4 = FUN_142af74a0(lVar5,&local_58);
        if (cVar4 != '\0') {
          iVar1 = *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x10) = iVar1 + 1;
          if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar1);
          }
          lVar2 = *(longlong *)(param_1 + 8);
          *(undefined ***)(lVar2 + (longlong)iVar1 * 0x28) = &PTR_FUN_14571f050;
          lVar2 = lVar2 + (longlong)iVar1 * 0x28;
          FString::FString(lVar2 + 8,&local_50);
          FString::FString(lVar2 + 0x18,&local_40);
        }
        local_58 = &PTR_FUN_14571f050;
        if (local_40 != 0) {
          FMemory::Free();
        }
        if (local_50 != 0) {
          FMemory::Free();
        }
        FJsonSerializable::~FJsonSerializable(&local_58);
      }
      bVar3 = false;
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (!bVar3) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142b15600 FUN_142b15600 body=279 status=ok
// SIG undefined FUN_142b15600(void)

undefined8 FUN_142b15600(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[0] = 0;
    local_18[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"service_id",0xb,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_18[0] = 0;
      local_18[1] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x11,"shift_service_id",0x11,0x3f);
      cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142b15720 FUN_142b15720 body=168 status=ok
// SIG undefined FUN_142b15720(void)

undefined8 FUN_142b15720(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0x12;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"shift_service_ids",0x24);
  cVar2 = FUN_1416b3850(*param_2,local_18,local_res10);
  if ((cVar2 == '\0') || (cVar2 = FUN_142b0c680(local_res10[0],param_1 + 8), cVar2 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}



// FUNCTION 142b157d0 FUN_142b157d0 body=397 status=ok
// SIG undefined FUN_142b157d0(void)

undefined8 FUN_142b157d0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_res10;
  longlong local_68;
  undefined8 local_60;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  if (*param_2 != 0) {
    local_60 = 0xf;
    local_68 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,L"platform_links",0x1e);
    cVar4 = FUN_1416b3850(*param_2,&local_68,&local_res10);
    if (cVar4 == '\0') {
      bVar3 = true;
    }
    else {
      lVar5 = *local_res10;
      lVar6 = (longlong)(int)local_res10[1] * 0x10 + lVar5;
      for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
        FStatData::FStatData(&local_58);
        local_58 = &PTR_FUN_14571f090;
        local_50 = 0;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        cVar4 = FUN_142af74a0(lVar5,&local_58);
        if (cVar4 != '\0') {
          iVar1 = *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x10) = iVar1 + 1;
          if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 8,iVar1);
          }
          lVar2 = *(longlong *)(param_1 + 8);
          *(undefined ***)(lVar2 + (longlong)iVar1 * 0x28) = &PTR_FUN_14571f090;
          lVar2 = lVar2 + (longlong)iVar1 * 0x28;
          FString::FString(lVar2 + 8,&local_50);
          FString::FString(lVar2 + 0x18,&local_40);
        }
        local_58 = &PTR_FUN_14571f090;
        if (local_40 != 0) {
          FMemory::Free();
        }
        if (local_50 != 0) {
          FMemory::Free();
        }
        FJsonSerializable::~FJsonSerializable(&local_58);
      }
      bVar3 = false;
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (!bVar3) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142b15960 FUN_142b15960 body=253 status=ok
// SIG undefined FUN_142b15960(void)

undefined1 FUN_142b15960(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0xb;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"service_id",0xb,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"display_name",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b15a60 FUN_142b15a60 body=168 status=ok
// SIG undefined FUN_142b15a60(void)

undefined8 FUN_142b15a60(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"query",0xc);
  cVar2 = FUN_1416b3e60(*param_2,local_18,local_res10);
  if ((cVar2 == '\0') ||
     (cVar2 = FLadderPlayerMode::Accept(local_res10[0],param_1 + 8), cVar2 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}



// FUNCTION 142b15b10 FUN_142b15b10 body=415 status=ok
// SIG undefined FUN_142b15b10(void)

undefined1 FUN_142b15b10(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_28 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],6,"email",6,0x3f);
  FUN_1416b40a0(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0xd,"display_name",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_28,param_1 + 0x18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0xb,"service_id",0xb,0x3f);
  FUN_1416b40a0(*param_2,local_28,param_1 + 0x28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"service_ids",0x18);
  cVar1 = FUN_1416b3850(*param_2,local_28,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c680(local_res10,param_1 + 0x38);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b15cb0 FUN_142b15cb0 body=489 status=ok
// SIG undefined FUN_142b15cb0(void)

undefined8 FUN_142b15cb0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *local_res10;
  longlong local_68;
  undefined8 local_60;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  if (*param_2 != 0) {
    local_60 = 10;
    local_68 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_68,10,"truncated",10,0x3f);
    cVar4 = FUN_1416b3900(*param_2,&local_68,param_1 + 8);
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (cVar4 != '\0') {
      local_68 = 0;
      local_60 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
      FGenericPlatformString::Memcpy(local_68,L"players",0x10);
      cVar4 = FUN_1416b3850(*param_2,&local_68,&local_res10);
      if (cVar4 == '\0') {
        bVar3 = true;
      }
      else {
        lVar5 = *local_res10;
        lVar6 = (longlong)(int)local_res10[1] * 0x10 + lVar5;
        for (; lVar5 != lVar6; lVar5 = lVar5 + 0x10) {
          FStatData::FStatData(&local_58);
          local_58 = &PTR_FUN_14571f0d0;
          local_50 = 0;
          local_48 = 0;
          local_40 = 0;
          local_38 = 0;
          cVar4 = FUN_142af74a0(lVar5,&local_58);
          if (cVar4 != '\0') {
            iVar1 = *(int *)(param_1 + 0x18);
            *(int *)(param_1 + 0x18) = iVar1 + 1;
            if (*(int *)(param_1 + 0x1c) < iVar1 + 1) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar1);
            }
            lVar2 = *(longlong *)(param_1 + 0x10);
            *(undefined ***)(lVar2 + (longlong)iVar1 * 0x28) = &PTR_FUN_14571f0d0;
            lVar2 = lVar2 + (longlong)iVar1 * 0x28;
            FString::FString(lVar2 + 8,&local_50);
            FString::FString(lVar2 + 0x18,&local_40);
          }
          local_58 = &PTR_FUN_14571f0d0;
          if (local_40 != 0) {
            FMemory::Free();
          }
          if (local_50 != 0) {
            FMemory::Free();
          }
          FJsonSerializable::~FJsonSerializable(&local_58);
        }
        bVar3 = false;
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (!bVar3) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142b15ea0 FUN_142b15ea0 body=279 status=ok
// SIG undefined FUN_142b15ea0(void)

undefined8 FUN_142b15ea0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[0] = 0;
    local_18[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xb,"service_id",0xb,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_18[0] = 0;
      local_18[1] = 0x11;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0x11,"shift_service_id",0x11,0x3f);
      cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142b15fc0 FUN_142b15fc0 body=327 status=ok
// SIG undefined FUN_142b15fc0(void)

undefined8 FUN_142b15fc0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  longlong local_28 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_28[1] = 8;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_28[0],8,"success",8,0x3f);
  FUN_1416b3900(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"entitlements",0x1a);
  cVar1 = FUN_1416b3850(*param_2,local_28,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c380(local_res10,param_1 + 0x10);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"user_offers",0x18);
  cVar1 = FUN_1416b3850(*param_2,local_28,local_res18);
  if (cVar1 != '\0') {
    FUN_142b0c860(local_res18[0],param_1 + 0x20);
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b16110 FUN_142b16110 body=150 status=ok
// SIG undefined FUN_142b16110(void)

undefined8 FUN_142b16110(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"error",0xc);
  cVar1 = FUN_1416b3e60(*param_2,local_18,local_res10);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res10[0],param_1 + 8);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b161b0 FUN_142b161b0 body=342 status=ok
// SIG undefined FUN_142b161b0(void)

undefined1 FUN_142b161b0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_14570eec4,5,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xd,"feature_code",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"message",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b16310 FUN_142b16310 body=1656 status=ok
// SIG undefined FUN_142b16310(void)

undefined1 FUN_142b16310(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [3];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_40[0] = 0;
  local_40[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Memcpy(local_40[0],L"messages",0x12);
  cVar1 = FUN_1416b3850(*param_2,local_40,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c770(local_res10,param_1 + 8);
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],0xb,"session_id",0xb,0x3f);
  FUN_1416b40a0(*param_2,local_40,param_1 + 0x18);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],8,"success",8,0x3f);
  FUN_1416b3900(*param_2,local_40,param_1 + 0x28);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],7,"banned",7,0x3f);
  FUN_1416b3900(*param_2,local_40,param_1 + 0x29);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],0xc,"ban_expires",0xc,0x3f);
  FUN_1416b40a0(*param_2,local_40,param_1 + 0x30);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],10,"suspended",10,0x3f);
  FUN_1416b3900(*param_2,local_40,param_1 + 0x40);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],0x13,"suspension_expires",0x13,0x3f);
  FUN_1416b40a0(*param_2,local_40,param_1 + 0x48);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],0xd,"user_message",0xd,0x3f);
  FUN_1416b40a0(*param_2,local_40,param_1 + 0x58);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Memcpy(local_40[0],L"archway",0x10);
  cVar1 = FUN_1416b3e60(*param_2,local_40,&local_res18);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res18,param_1 + 0x68);
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Memcpy(local_40[0],L"shift",0xc);
  cVar1 = FUN_1416b3e60(*param_2,local_40,&local_res20);
  if (cVar1 != '\0') {
    FLadderPlayerMode::Accept(local_res20,param_1 + 0xd8);
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Memcpy(local_40[0],L"platforms",0x14);
  cVar1 = FUN_1416b3850(*param_2,local_40,&local_58);
  if (cVar1 != '\0') {
    FUN_142b0c680(local_58,param_1 + 0x138);
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Memcpy(local_40[0],L"entitlements",0x1a);
  cVar1 = FUN_1416b3850(*param_2,local_40,&local_50);
  if (cVar1 != '\0') {
    FUN_142b0c380(local_50,param_1 + 0x148);
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Memcpy(local_40[0],L"user_offers",0x18);
  cVar1 = FUN_1416b3850(*param_2,local_40,&local_48);
  if (cVar1 != '\0') {
    FUN_142b0c860(local_48,param_1 + 0x158);
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],0x10,"sign_agreements",0x10,0x3f);
  FUN_1416b40a0(*param_2,local_40,param_1 + 0x168);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],9,"nat_type",9,0x3f);
  FUN_1416b40a0(*param_2,local_40,param_1 + 0x178);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],9,"in_queue",9,0x3f);
  FUN_1416b3900(*param_2,local_40,param_1 + 0x188);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],0xd,"queue_status",0xd,0x3f);
  FUN_1416b3b00(*param_2,local_40,param_1 + 0x18c);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  local_40[0] = 0;
  local_40[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_40,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_40[0],8,"warning",8,0x3f);
  FUN_1416b3900(*param_2,local_40,param_1 + 400);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b16990 FUN_142b16990 body=424 status=ok
// SIG undefined FUN_142b16990(void)

undefined8 * FUN_142b16990(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_1456edd24,6);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 8));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"version",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"state",0xc);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b16b40 FUN_142b16b40 body=364 status=ok
// SIG undefined FUN_142b16b40(void)

undefined8 * FUN_142b16b40(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"country",0x10);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"eulas",0xc);
  uVar1 = *param_2;
  uVar4 = FUN_142b0c9b0(local_18,param_1 + 0x18);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b16cb0 FUN_142b16cb0 body=446 status=ok
// SIG undefined FUN_142b16cb0(void)

undefined8 * FUN_142b16cb0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"success",0x10);
  FUN_1416b3150(*param_2,local_28,*(undefined1 *)(param_1 + 8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"sign_agreements",0x20);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x10);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"messages",0x12);
  uVar1 = *param_2;
  uVar4 = FUN_142b0d1a0(local_18,param_1 + 0x20);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b16e70 FUN_142b16e70 body=1019 status=ok
// SIG undefined FUN_142b16e70(void)

undefined8 * FUN_142b16e70(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"state",0xc);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"in_progress",0x18);
  FUN_1416b3150(*param_2,local_18,*(undefined1 *)(param_1 + 0x18));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"disable_spark",0x1c);
  FUN_1416b3150(*param_2,local_18,*(undefined1 *)(param_1 + 0x19));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"timeout",0x10);
  FUN_1416b3150(*param_2,local_18,*(undefined1 *)(param_1 + 0x1a));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"has_shift_account",0x24);
  FUN_1416b3150(*param_2,local_18,*(undefined1 *)(param_1 + 0x1b));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"is_confirmed",0x1a);
  FUN_1416b3150(*param_2,local_18,*(undefined1 *)(param_1 + 0x1c));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"account_uid",0x18);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"display_name",0x1a);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"shift_service_id",0x22);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x40);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"request_id",0x16);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x50);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"emergency_message",0x24);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x60);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b17270 FUN_142b17270 body=504 status=ok
// SIG undefined FUN_142b17270(void)

undefined8 * FUN_142b17270(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_68 [6];
  undefined1 local_38 [16];
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_68[0] = 0;
  local_68[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"messages",0x12);
  uVar4 = *param_2;
  uVar8 = FUN_142b0d1a0(local_38,param_1 + 8);
  FJsonObject::SetArrayField(uVar4,local_68,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_38);
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[2] = 0;
  local_68[3] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy(local_68[2],L"success",0x10);
  FUN_1416b3150(*param_2,local_68 + 2,*(undefined1 *)(param_1 + 0x18));
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  local_68[4] = 0;
  local_68[5] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 4,0);
  FGenericPlatformString::Memcpy(local_68[4],L"archway",0x10);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_28,param_1 + 0x20);
  FUN_1416b33f0(uVar4,local_68 + 4,uVar8);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b17470 FUN_142b17470 body=418 status=ok
// SIG undefined FUN_142b17470(void)

undefined8 * FUN_142b17470(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_38 [4];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_38[0] = 0;
  local_38[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"entitlements",0x1a);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_38,uVar8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[2] = 0;
  local_38[3] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"language",0x12);
  FJsonObject::SetStringField(*param_2,local_38 + 2,param_1 + 0x30);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b17620 FUN_142b17620 body=365 status=ok
// SIG undefined FUN_142b17620(void)

undefined8 * FUN_142b17620(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"success",0x10);
  FUN_1416b3150(*param_2,local_28,*(undefined1 *)(param_1 + 8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"messages",0x12);
  uVar1 = *param_2;
  uVar4 = FUN_142b0d1a0(local_18,param_1 + 0x10);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b17790 FUN_142b17790 body=338 status=ok
// SIG undefined FUN_142b17790(void)

undefined8 * FUN_142b17790(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"consumed",0x12);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"consumed_count",0x1e);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b178f0 FUN_142b178f0 body=188 status=ok
// SIG undefined FUN_142b178f0(void)

undefined8 * FUN_142b178f0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  TSet<TTuple<FString,TSharedRef<FBuildPatchAppManifest,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedRef<FBuildPatchAppManifest,1>,0>,FDefaultSetAllocator>
  ::operator=(*param_2,param_1 + 8);
  return param_2;
}



// FUNCTION 142b179b0 FUN_142b179b0 body=808 status=ok
// SIG undefined FUN_142b179b0(void)

undefined8 * FUN_142b179b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"consumable_amount",0x24);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 8));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"consumed",0x12);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0xc));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"user_entitlement_id",0x28);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0x10));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"string_identifier",0x24);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"title_localized",0x20);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"description_localized",0x2c);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x38);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"consumable",0x16);
  FUN_1416b3150(*param_2,local_18,*(undefined1 *)(param_1 + 0x48));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"payload",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x50);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b17ce0 FUN_142b17ce0 body=338 status=ok
// SIG undefined FUN_142b17ce0(void)

undefined8 * FUN_142b17ce0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"code",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b17e40 FUN_142b17e40 body=570 status=ok
// SIG undefined FUN_142b17e40(void)

undefined8 * FUN_142b17e40(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"eula_id",0x10);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 8));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"version",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"agreement_title_local",0x2c);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x15;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"agreement_text_local",0x2a);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"eula_type",0x14);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x40);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b18080 FUN_142b18080 body=364 status=ok
// SIG undefined FUN_142b18080(void)

undefined8 * FUN_142b18080(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"eulas",0xc);
  uVar1 = *param_2;
  uVar4 = FUN_142b0cdb0(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"sign_agreements",0x20);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b181f0 FUN_142b181f0 body=338 status=ok
// SIG undefined FUN_142b181f0(void)

undefined8 * FUN_142b181f0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],&DAT_14571c7e8,8);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"value",0xc);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b18350 FUN_142b18350 body=343 status=ok
// SIG undefined FUN_142b18350(void)

undefined8 * FUN_142b18350(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"link_code",0x14);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"seconds_to_expire",0x24);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0x18));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b184b0 FUN_142b184b0 body=257 status=ok
// SIG undefined FUN_142b184b0(void)

undefined8 * FUN_142b184b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b185c0 FUN_142b185c0 body=659 status=ok
// SIG undefined FUN_142b185c0(void)

undefined8 * FUN_142b185c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_78 [10];
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_78[0] = 0;
  local_78[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78,0);
  FGenericPlatformString::Memcpy(local_78[0],L"oauth",0xc);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_28,param_1 + 8);
  FUN_1416b33f0(uVar4,local_78,uVar8);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  local_78[2] = 0;
  local_78[3] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 2,0);
  FGenericPlatformString::Memcpy(local_78[2],L"job_id",0xe);
  FJsonObject::SetStringField(*param_2,local_78 + 2,param_1 + 0x20);
  if (local_78[2] != 0) {
    FMemory::Free();
  }
  local_78[4] = 0;
  local_78[5] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 4,0);
  FGenericPlatformString::Memcpy(local_78[4],L"min_wait_milliseconds",0x2c);
  FUN_1416b32b0(*param_2,local_78 + 4,(double)*(int *)(param_1 + 0x30));
  if (local_78[4] != 0) {
    FMemory::Free();
  }
  local_78[6] = 0;
  local_78[7] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 6,0);
  FGenericPlatformString::Memcpy(local_78[6],L"max_wait_milliseconds",0x2c);
  FUN_1416b32b0(*param_2,local_78 + 6,(double)*(int *)(param_1 + 0x34));
  if (local_78[6] != 0) {
    FMemory::Free();
  }
  local_78[8] = 0;
  local_78[9] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_78 + 8,0);
  FGenericPlatformString::Memcpy(local_78[8],L"max_retry_attempts",0x26);
  FUN_1416b32b0(*param_2,local_78 + 8,(double)*(int *)(param_1 + 0x38));
  if (local_78[8] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b18860 FUN_142b18860 body=348 status=ok
// SIG undefined FUN_142b18860(void)

undefined8 * FUN_142b18860(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"min_wait_milliseconds",0x2c);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 8));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"max_wait_milliseconds",0x2c);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0xc));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b189c0 FUN_142b189c0 body=257 status=ok
// SIG undefined FUN_142b189c0(void)

undefined8 * FUN_142b189c0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"access_token",0x1a);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b18ad0 FUN_142b18ad0 body=257 status=ok
// SIG undefined FUN_142b18ad0(void)

undefined8 * FUN_142b18ad0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"data",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b18be0 FUN_142b18be0 body=430 status=ok
// SIG undefined FUN_142b18be0(void)

undefined8 * FUN_142b18be0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"in_queue",0x12);
  FUN_1416b3150(*param_2,local_18,*(undefined1 *)(param_1 + 8));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"status",0xe);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0xc));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"poll_seconds",0x1a);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0x10));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b18d90 FUN_142b18d90 body=338 status=ok
// SIG undefined FUN_142b18d90(void)

undefined8 * FUN_142b18d90(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"code",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"language",0x12);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b18ef0 FUN_142b18ef0 body=880 status=ok
// SIG undefined FUN_142b18ef0(void)

undefined8 * FUN_142b18ef0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"success",0x10);
  FUN_1416b3150(*param_2,local_28,*(undefined1 *)(param_1 + 8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"entitlements",0x1a);
  uVar1 = *param_2;
  uVar4 = FUN_142b0cbb0(local_18,param_1 + 0x10);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"user_offers",0x18);
  uVar1 = *param_2;
  uVar4 = FUN_142b0d390(local_18,param_1 + 0x20);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"messages",0x12);
  uVar1 = *param_2;
  uVar4 = FUN_142b0d1a0(local_18,param_1 + 0x30);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"job_id",0xe);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x40);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"min_wait_milliseconds",0x2c);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 0x50));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"max_wait_milliseconds",0x2c);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 0x54));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"max_retry_attempts",0x26);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 0x58));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b19260 FUN_142b19260 body=337 status=ok
// SIG undefined FUN_142b19260(void)

undefined8 * FUN_142b19260(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"user_nat",0x12);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_28,uVar8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b193c0 FUN_142b193c0 body=446 status=ok
// SIG undefined FUN_142b193c0(void)

undefined8 * FUN_142b193c0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"success",0x10);
  FUN_1416b3150(*param_2,local_28,*(undefined1 *)(param_1 + 8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"nat_type",0x12);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x10);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"messages",0x12);
  uVar1 = *param_2;
  uVar4 = FUN_142b0d1a0(local_18,param_1 + 0x20);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b19580 FUN_142b19580 body=419 status=ok
// SIG undefined FUN_142b19580(void)

undefined8 * FUN_142b19580(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"reason",0xe);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"session_id",0x16);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"description",0x18);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b19730 FUN_142b19730 body=418 status=ok
// SIG undefined FUN_142b19730(void)

undefined8 * FUN_142b19730(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_38 [4];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_38[0] = 0;
  local_38[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"user",10);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_38,uVar8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[2] = 0;
  local_38[3] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"language",0x12);
  FJsonObject::SetStringField(*param_2,local_38 + 2,param_1 + 0x20);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b198e0 FUN_142b198e0 body=365 status=ok
// SIG undefined FUN_142b198e0(void)

undefined8 * FUN_142b198e0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"success",0x10);
  FUN_1416b3150(*param_2,local_28,*(undefined1 *)(param_1 + 8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"messages",0x12);
  uVar1 = *param_2;
  uVar4 = FUN_142b0d1a0(local_18,param_1 + 0x10);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b19a50 FUN_142b19a50 body=257 status=ok
// SIG undefined FUN_142b19a50(void)

undefined8 * FUN_142b19a50(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"email",0xc);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b19b60 FUN_142b19b60 body=513 status=ok
// SIG undefined FUN_142b19b60(void)

undefined8 * FUN_142b19b60(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"service_name",0x1a);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"configuration_group",0x28);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"configuration_version",0x2c);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"parameters",0x16);
  uVar1 = *param_2;
  uVar4 = FUN_142b0cfb0(local_18,param_1 + 0x38);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b19d70 FUN_142b19d70 body=283 status=ok
// SIG undefined FUN_142b19d70(void)

undefined8 * FUN_142b19d70(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"services",0x12);
  uVar1 = *param_2;
  uVar4 = FUN_142b0d390(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b19e90 FUN_142b19e90 body=855 status=ok
// SIG undefined FUN_142b19e90(void)

undefined8 * FUN_142b19e90(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_a8 [12];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_a8[0] = 0;
  local_a8[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy(local_a8[0],L"cross_id",0x12);
  FJsonObject::SetStringField(*param_2,local_a8,param_1 + 8);
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_a8[2] = 0;
  local_a8[3] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy(local_a8[2],L"session_id",0x16);
  FJsonObject::SetStringField(*param_2,local_a8 + 2,param_1 + 0x18);
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  local_a8[4] = 0;
  local_a8[5] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy(local_a8[4],L"display_name",0x1a);
  FJsonObject::SetStringField(*param_2,local_a8 + 4,param_1 + 0x28);
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  local_a8[6] = 0;
  local_a8[7] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 6,0);
  FGenericPlatformString::Memcpy(local_a8[6],L"local_service_info",0x26);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_48,param_1 + 0x38);
  FUN_1416b33f0(uVar4,local_a8 + 6,uVar8);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_a8[6] != 0) {
    FMemory::Free();
  }
  local_a8[8] = 0;
  local_a8[9] = 0x14;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 8,0);
  FGenericPlatformString::Memcpy(local_a8[8],L"linked_service_info",0x28);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_38,param_1 + 0x60);
  FUN_1416b33f0(uVar4,local_a8 + 8,uVar8);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_a8[8] != 0) {
    FMemory::Free();
  }
  local_a8[10] = 0;
  local_a8[0xb] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 10,0);
  FGenericPlatformString::Memcpy(local_a8[10],L"shift_service_info",0x26);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_28,param_1 + 0x88);
  FUN_1416b33f0(uVar4,local_a8 + 10,uVar8);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  if (local_a8[10] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1a1f0 FUN_142b1a1f0 body=338 status=ok
// SIG undefined FUN_142b1a1f0(void)

undefined8 * FUN_142b1a1f0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"service_id",0x16);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"display_name",0x1a);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1a350 FUN_142b1a350 body=338 status=ok
// SIG undefined FUN_142b1a350(void)

undefined8 * FUN_142b1a350(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"service_id",0x16);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"display_name",0x1a);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1a4b0 FUN_142b1a4b0 body=338 status=ok
// SIG undefined FUN_142b1a4b0(void)

undefined8 * FUN_142b1a4b0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"service_id",0x16);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"display_name",0x1a);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1a610 FUN_142b1a610 body=283 status=ok
// SIG undefined FUN_142b1a610(void)

undefined8 * FUN_142b1a610(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"session_ids",0x18);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1a730 FUN_142b1a730 body=283 status=ok
// SIG undefined FUN_142b1a730(void)

undefined8 * FUN_142b1a730(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"session_players",0x20);
  uVar1 = *param_2;
  uVar4 = FUN_142b0d580(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1a850 FUN_142b1a850 body=640 status=ok
// SIG undefined FUN_142b1a850(void)

undefined8 * FUN_142b1a850(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"new_account",0x18);
  FUN_1416b3150(*param_2,local_18,*(undefined1 *)(param_1 + 8));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"display_name_error",0x26);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"state",0xc);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"shift_service_id",0x22);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"display_name",0x1a);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x40);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"account_uid",0x18);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x50);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1aad0 FUN_142b1aad0 body=507 status=ok
// SIG undefined FUN_142b1aad0(void)

undefined8 * FUN_142b1aad0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_68 [6];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [16];
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_68[0] = 0;
  local_68[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"success",0x10);
  FUN_1416b3150(*param_2,local_68,*(undefined1 *)(param_1 + 8));
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[2] = 0;
  local_68[3] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy(local_68[2],L"archway",0x10);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_38,param_1 + 0x10);
  FUN_1416b33f0(uVar4,local_68 + 2,uVar8);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  local_68[4] = 0;
  local_68[5] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 4,0);
  FGenericPlatformString::Memcpy(local_68[4],L"messages",0x12);
  uVar4 = *param_2;
  uVar8 = FUN_142b0d1a0(local_28,param_1 + 0x80);
  FJsonObject::SetArrayField(uVar4,local_68 + 4,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1acd0 FUN_142b1acd0 body=499 status=ok
// SIG undefined FUN_142b1acd0(void)

undefined8 * FUN_142b1acd0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_48 [6];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_48[0] = 0;
  local_48[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
  FGenericPlatformString::Memcpy(local_48[0],L"user",10);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_48,uVar8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  local_48[2] = 0;
  local_48[3] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
  FGenericPlatformString::Memcpy(local_48[2],L"display_name",0x1a);
  FJsonObject::SetStringField(*param_2,local_48 + 2,param_1 + 0x30);
  if (local_48[2] != 0) {
    FMemory::Free();
  }
  local_48[4] = 0;
  local_48[5] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 4,0);
  FGenericPlatformString::Memcpy(local_48[4],L"language",0x12);
  FJsonObject::SetStringField(*param_2,local_48 + 4,param_1 + 0x40);
  if (local_48[4] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1aed0 FUN_142b1aed0 body=774 status=ok
// SIG undefined FUN_142b1aed0(void)

undefined8 * FUN_142b1aed0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_a8 [12];
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_a8[0] = 0;
  local_a8[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8,0);
  FGenericPlatformString::Memcpy(local_a8[0],L"success",0x10);
  FUN_1416b3150(*param_2,local_a8,*(undefined1 *)(param_1 + 8));
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  local_a8[2] = 0;
  local_a8[3] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 2,0);
  FGenericPlatformString::Memcpy(local_a8[2],L"mfa_challenge_id",0x22);
  FJsonObject::SetStringField(*param_2,local_a8 + 2,param_1 + 0x10);
  if (local_a8[2] != 0) {
    FMemory::Free();
  }
  local_a8[4] = 0;
  local_a8[5] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 4,0);
  FGenericPlatformString::Memcpy(local_a8[4],L"mfa_required",0x1a);
  FUN_1416b3150(*param_2,local_a8 + 4,*(undefined1 *)(param_1 + 0x20));
  if (local_a8[4] != 0) {
    FMemory::Free();
  }
  local_a8[6] = 0;
  local_a8[7] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 6,0);
  FGenericPlatformString::Memcpy(local_a8[6],L"archway",0x10);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_48,param_1 + 0x28);
  FUN_1416b33f0(uVar4,local_a8 + 6,uVar8);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if (local_a8[6] != 0) {
    FMemory::Free();
  }
  local_a8[8] = 0;
  local_a8[9] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 8,0);
  FGenericPlatformString::Memcpy(local_a8[8],L"messages",0x12);
  uVar4 = *param_2;
  uVar8 = FUN_142b0d1a0(local_38,param_1 + 0x98);
  FJsonObject::SetArrayField(uVar4,local_a8 + 8,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_38);
  if (local_a8[8] != 0) {
    FMemory::Free();
  }
  local_a8[10] = 0;
  local_a8[0xb] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_a8 + 10,0);
  FGenericPlatformString::Memcpy(local_a8[10],L"display_names",0x1c);
  uVar4 = *param_2;
  uVar8 = FUN_142af81e0(local_28,param_1 + 0xa8);
  FJsonObject::SetArrayField(uVar4,local_a8 + 10,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
  if (local_a8[10] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1b1e0 FUN_142b1b1e0 body=338 status=ok
// SIG undefined FUN_142b1b1e0(void)

undefined8 * FUN_142b1b1e0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"login",0xc);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"password",0x12);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1b340 FUN_142b1b340 body=418 status=ok
// SIG undefined FUN_142b1b340(void)

undefined8 * FUN_142b1b340(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_38 [4];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_38[0] = 0;
  local_38[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"user",10);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_38,uVar8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  local_38[2] = 0;
  local_38[3] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],L"language",0x12);
  FJsonObject::SetStringField(*param_2,local_38 + 2,param_1 + 0x50);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1b4f0 FUN_142b1b4f0 body=507 status=ok
// SIG undefined FUN_142b1b4f0(void)

undefined8 * FUN_142b1b4f0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_68 [6];
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [16];
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_68[0] = 0;
  local_68[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68,0);
  FGenericPlatformString::Memcpy(local_68[0],L"success",0x10);
  FUN_1416b3150(*param_2,local_68,*(undefined1 *)(param_1 + 8));
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  local_68[2] = 0;
  local_68[3] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 2,0);
  FGenericPlatformString::Memcpy(local_68[2],L"archway",0x10);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_38,param_1 + 0x10);
  FUN_1416b33f0(uVar4,local_68 + 2,uVar8);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  local_68[4] = 0;
  local_68[5] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_68 + 4,0);
  FGenericPlatformString::Memcpy(local_68[4],L"messages",0x12);
  uVar4 = *param_2;
  uVar8 = FUN_142b0d1a0(local_28,param_1 + 0x80);
  FJsonObject::SetArrayField(uVar4,local_68 + 4,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
  if (local_68[4] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1b6f0 FUN_142b1b6f0 body=489 status=ok
// SIG undefined FUN_142b1b6f0(void)

undefined8 * FUN_142b1b6f0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"email",0xc);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"password",0x12);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"password_confirmation",0x2c);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"account_source",0x1e);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x38);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1b8e0 FUN_142b1b8e0 body=337 status=ok
// SIG undefined FUN_142b1b8e0(void)

undefined8 * FUN_142b1b8e0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"error",0xc);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_28,uVar8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1ba40 FUN_142b1ba40 body=338 status=ok
// SIG undefined FUN_142b1ba40(void)

undefined8 * FUN_142b1ba40(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"code",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1bba0 FUN_142b1bba0 body=365 status=ok
// SIG undefined FUN_142b1bba0(void)

undefined8 * FUN_142b1bba0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"success",0x10);
  FUN_1416b3150(*param_2,local_28,*(undefined1 *)(param_1 + 8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"messages",0x12);
  uVar1 = *param_2;
  uVar4 = FUN_142b0d1a0(local_18,param_1 + 0x10);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1bd10 FUN_142b1bd10 body=257 status=ok
// SIG undefined FUN_142b1bd10(void)

undefined8 * FUN_142b1bd10(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"nat_type",0x12);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1be20 FUN_142b1be20 body=571 status=ok
// SIG undefined FUN_142b1be20(void)

undefined8 * FUN_142b1be20(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"date_unlocked",0x1c);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"has_been_notified",0x24);
  FUN_1416b3150(*param_2,local_18,*(undefined1 *)(param_1 + 0x18));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"title_localized",0x20);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x16;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"description_localized",0x2c);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x17;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"user_unlocked_offer_id",0x2e);
  FUN_1416b32b0(*param_2,local_18,(double)*(int *)(param_1 + 0x40));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1c060 FUN_142b1c060 body=283 status=ok
// SIG undefined FUN_142b1c060(void)

undefined8 * FUN_142b1c060(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"service_ids",0x18);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1c180 FUN_142b1c180 body=283 status=ok
// SIG undefined FUN_142b1c180(void)

undefined8 * FUN_142b1c180(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"shift_service_ids",0x24);
  uVar1 = *param_2;
  uVar4 = FUN_142b0cfb0(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1c2a0 FUN_142b1c2a0 body=338 status=ok
// SIG undefined FUN_142b1c2a0(void)

undefined8 * FUN_142b1c2a0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"service_id",0x16);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"shift_service_id",0x22);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1c400 FUN_142b1c400 body=283 status=ok
// SIG undefined FUN_142b1c400(void)

undefined8 * FUN_142b1c400(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"shift_service_ids",0x24);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1c520 FUN_142b1c520 body=283 status=ok
// SIG undefined FUN_142b1c520(void)

undefined8 * FUN_142b1c520(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"platform_links",0x1e);
  uVar1 = *param_2;
  uVar4 = FUN_142b0cfb0(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1c640 FUN_142b1c640 body=338 status=ok
// SIG undefined FUN_142b1c640(void)

undefined8 * FUN_142b1c640(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"service_id",0x16);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"display_name",0x1a);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1c7a0 FUN_142b1c7a0 body=337 status=ok
// SIG undefined FUN_142b1c7a0(void)

undefined8 * FUN_142b1c7a0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"query",0xc);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_28,uVar8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1c900 FUN_142b1c900 body=513 status=ok
// SIG undefined FUN_142b1c900(void)

undefined8 * FUN_142b1c900(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"email",0xc);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"display_name",0x1a);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"service_id",0x16);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"service_ids",0x18);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 0x38);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1cb10 FUN_142b1cb10 body=365 status=ok
// SIG undefined FUN_142b1cb10(void)

undefined8 * FUN_142b1cb10(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"truncated",0x14);
  FUN_1416b3150(*param_2,local_28,*(undefined1 *)(param_1 + 8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"players",0x10);
  uVar1 = *param_2;
  uVar4 = FUN_142b0cfb0(local_18,param_1 + 0x10);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1cc80 FUN_142b1cc80 body=338 status=ok
// SIG undefined FUN_142b1cc80(void)

undefined8 * FUN_142b1cc80(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"service_id",0x16);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"shift_service_id",0x22);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1cde0 FUN_142b1cde0 body=463 status=ok
// SIG undefined FUN_142b1cde0(void)

undefined8 * FUN_142b1cde0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"success",0x10);
  FUN_1416b3150(*param_2,local_28,*(undefined1 *)(param_1 + 8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"entitlements",0x1a);
  uVar1 = *param_2;
  uVar4 = FUN_142b0cbb0(local_18,param_1 + 0x10);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"user_offers",0x18);
  uVar1 = *param_2;
  uVar4 = FUN_142b0d390(local_18,param_1 + 0x20);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1cfb0 FUN_142b1cfb0 body=337 status=ok
// SIG undefined FUN_142b1cfb0(void)

undefined8 * FUN_142b1cfb0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"error",0xc);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_28,uVar8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1d110 FUN_142b1d110 body=419 status=ok
// SIG undefined FUN_142b1d110(void)

undefined8 * FUN_142b1d110(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"code",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"feature_code",0x1a);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1d2c0 FUN_142b1d2c0 body=1875 status=ok
// SIG undefined FUN_142b1d2c0(void)

undefined8 * FUN_142b1d2c0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_198 [36];
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_198[0] = 0;
  local_198[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198,0);
  FGenericPlatformString::Memcpy(local_198[0],L"messages",0x12);
  uVar4 = *param_2;
  uVar8 = FUN_142b0d1a0(local_78,param_1 + 8);
  FJsonObject::SetArrayField(uVar4,local_198,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_78);
  if (local_198[0] != 0) {
    FMemory::Free();
  }
  local_198[2] = 0;
  local_198[3] = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 2,0);
  FGenericPlatformString::Memcpy(local_198[2],L"session_id",0x16);
  FJsonObject::SetStringField(*param_2,local_198 + 2,param_1 + 0x18);
  if (local_198[2] != 0) {
    FMemory::Free();
  }
  local_198[4] = 0;
  local_198[5] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 4,0);
  FGenericPlatformString::Memcpy(local_198[4],L"success",0x10);
  FUN_1416b3150(*param_2,local_198 + 4,*(undefined1 *)(param_1 + 0x28));
  if (local_198[4] != 0) {
    FMemory::Free();
  }
  local_198[6] = 0;
  local_198[7] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 6,0);
  FGenericPlatformString::Memcpy(local_198[6],L"banned",0xe);
  FUN_1416b3150(*param_2,local_198 + 6,*(undefined1 *)(param_1 + 0x29));
  if (local_198[6] != 0) {
    FMemory::Free();
  }
  local_198[8] = 0;
  local_198[9] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 8,0);
  FGenericPlatformString::Memcpy(local_198[8],L"ban_expires",0x18);
  FJsonObject::SetStringField(*param_2,local_198 + 8,param_1 + 0x30);
  if (local_198[8] != 0) {
    FMemory::Free();
  }
  local_198[10] = 0;
  local_198[0xb] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 10,0);
  FGenericPlatformString::Memcpy(local_198[10],L"suspended",0x14);
  FUN_1416b3150(*param_2,local_198 + 10,*(undefined1 *)(param_1 + 0x40));
  if (local_198[10] != 0) {
    FMemory::Free();
  }
  local_198[0xc] = 0;
  local_198[0xd] = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0xc,0);
  FGenericPlatformString::Memcpy(local_198[0xc],L"suspension_expires",0x26);
  FJsonObject::SetStringField(*param_2,local_198 + 0xc,param_1 + 0x48);
  if (local_198[0xc] != 0) {
    FMemory::Free();
  }
  local_198[0xe] = 0;
  local_198[0xf] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0xe,0);
  FGenericPlatformString::Memcpy(local_198[0xe],L"user_message",0x1a);
  FJsonObject::SetStringField(*param_2,local_198 + 0xe,param_1 + 0x58);
  if (local_198[0xe] != 0) {
    FMemory::Free();
  }
  local_198[0x10] = 0;
  local_198[0x11] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x10,0);
  FGenericPlatformString::Memcpy(local_198[0x10],L"archway",0x10);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_68,param_1 + 0x68);
  FUN_1416b33f0(uVar4,local_198 + 0x10,uVar8);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (local_198[0x10] != 0) {
    FMemory::Free();
  }
  local_198[0x12] = 0;
  local_198[0x13] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x12,0);
  FGenericPlatformString::Memcpy(local_198[0x12],L"shift",0xc);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_58,param_1 + 0xd8);
  FUN_1416b33f0(uVar4,local_198 + 0x12,uVar8);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (local_198[0x12] != 0) {
    FMemory::Free();
  }
  local_198[0x14] = 0;
  local_198[0x15] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x14,0);
  FGenericPlatformString::Memcpy(local_198[0x14],L"platforms",0x14);
  uVar4 = *param_2;
  uVar8 = FUN_142af81e0(local_48,param_1 + 0x138);
  FJsonObject::SetArrayField(uVar4,local_198 + 0x14,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_48);
  if (local_198[0x14] != 0) {
    FMemory::Free();
  }
  local_198[0x16] = 0;
  local_198[0x17] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x16,0);
  FGenericPlatformString::Memcpy(local_198[0x16],L"entitlements",0x1a);
  uVar4 = *param_2;
  uVar8 = FUN_142b0cbb0(local_38,param_1 + 0x148);
  FJsonObject::SetArrayField(uVar4,local_198 + 0x16,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_38);
  if (local_198[0x16] != 0) {
    FMemory::Free();
  }
  local_198[0x18] = 0;
  local_198[0x19] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x18,0);
  FGenericPlatformString::Memcpy(local_198[0x18],L"user_offers",0x18);
  uVar4 = *param_2;
  uVar8 = FUN_142b0d390(local_28,param_1 + 0x158);
  FJsonObject::SetArrayField(uVar4,local_198 + 0x18,uVar8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_28);
  if (local_198[0x18] != 0) {
    FMemory::Free();
  }
  local_198[0x1a] = 0;
  local_198[0x1b] = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x1a,0);
  FGenericPlatformString::Memcpy(local_198[0x1a],L"sign_agreements",0x20);
  FJsonObject::SetStringField(*param_2,local_198 + 0x1a,param_1 + 0x168);
  if (local_198[0x1a] != 0) {
    FMemory::Free();
  }
  local_198[0x1c] = 0;
  local_198[0x1d] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x1c,0);
  FGenericPlatformString::Memcpy(local_198[0x1c],L"nat_type",0x12);
  FJsonObject::SetStringField(*param_2,local_198 + 0x1c,param_1 + 0x178);
  if (local_198[0x1c] != 0) {
    FMemory::Free();
  }
  local_198[0x1e] = 0;
  local_198[0x1f] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x1e,0);
  FGenericPlatformString::Memcpy(local_198[0x1e],L"in_queue",0x12);
  FUN_1416b3150(*param_2,local_198 + 0x1e,*(undefined1 *)(param_1 + 0x188));
  if (local_198[0x1e] != 0) {
    FMemory::Free();
  }
  local_198[0x20] = 0;
  local_198[0x21] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x20,0);
  FGenericPlatformString::Memcpy(local_198[0x20],L"queue_status",0x1a);
  FUN_1416b32b0(*param_2,local_198 + 0x20,(double)*(int *)(param_1 + 0x18c));
  if (local_198[0x20] != 0) {
    FMemory::Free();
  }
  local_198[0x22] = 0;
  local_198[0x23] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_198 + 0x22,0);
  FGenericPlatformString::Memcpy(local_198[0x22],L"warning",0x10);
  FUN_1416b3150(*param_2,local_198 + 0x22,*(undefined1 *)(param_1 + 400));
  if (local_198[0x22] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1da20 FUN_142b1da20 body=488 status=ok
// SIG undefined FUN_142b1da20(void)

longlong * FUN_142b1da20(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *param_2;
  lVar8 = (longlong)(int)param_2[1] * 0x38 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x38) {
    Chaos::operator<<<float,3,0>(&local_38,lVar7);
    if (local_38 != 0) {
      plVar4 = (longlong *)operator_new(0x20);
      plVar6 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 0;
        *plVar4 = (longlong)&PTR_AsObject_143f606d8;
        plVar4[2] = local_38;
        plVar4[3] = (longlong)local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar4 + 1) = 6;
        plVar6 = plVar4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      local_40 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f60d18;
        plVar4[2] = (longlong)plVar6;
        local_40 = plVar4;
      }
      local_48 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar6,plVar6);
      plVar4 = local_40;
      plVar6 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_1);
        *puVar5 = plVar6;
        puVar5[1] = plVar4;
      }
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_40)(local_40);
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
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142b1dc10 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_144530c58;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b1dc40 FUN_142b1dc40 body=63 status=ok
// SIG undefined FUN_142b1dc40(void)

undefined8 * FUN_142b1dc40(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc0570;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 142b1dc80 FUN_142b1dc80 body=46 status=ok
// SIG undefined FUN_142b1dc80(void)

undefined8 * FUN_142b1dc80(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_145774450;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b1dcb0 FUN_142b1dcb0 body=84 status=ok
// SIG undefined FUN_142b1dcb0(void)

undefined8 * FUN_142b1dcb0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457743f0;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_1457743d0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b1dd10 FUN_142b1dd10 body=84 status=ok
// SIG undefined FUN_142b1dd10(void)

undefined8 * FUN_142b1dd10(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_145774490;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_145774470;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b1dd70 FUN_142b1dd70 body=47 status=ok
// SIG undefined FUN_142b1dd70(void)

undefined8 * FUN_142b1dd70(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_145774430;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 142b1dda0 FUN_142b1dda0 body=222 status=ok
// SIG undefined FUN_142b1dda0(void)

undefined8 * FUN_142b1dda0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_145774410;
  FString::FString(param_1 + 1,param_2 + 8);
  param_1[3] = 0;
  iVar3 = *(int *)(param_2 + 0x20);
  puVar4 = *(undefined8 **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 3,iVar3,0);
    puVar2 = (undefined8 *)param_1[3];
    do {
      *puVar2 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FString::FString(param_1 + 5,param_2 + 0x28);
  return param_1;
}



// FUNCTION 142b1de80 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc0670;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b1deb0 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc0690;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b1dee0 FUN_142b1dee0 body=51 status=ok
// SIG undefined FUN_142b1dee0(void)

undefined8 * FUN_142b1dee0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc06b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b1df20 FUN_142b1df20 body=54 status=ok
// SIG undefined FUN_142b1df20(void)

undefined8 * FUN_142b1df20(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc06d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 142b1df60 FUN_142b1df60 body=218 status=ok
// SIG undefined FUN_142b1df60(void)

void FUN_142b1df60(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar4 = &PTR_FUN_145774410;
      if (puVar4[5] != 0) {
        FMemory::Free();
      }
      iVar3 = *(int *)(puVar4 + 4);
      plVar1 = (longlong *)puVar4[3];
      if (iVar3 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        plVar1 = (longlong *)puVar4[3];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      if (puVar4[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar4);
      puVar4 = puVar4 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar4 = (undefined8 *)*param_1;
  }
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar4);
  return;
}



// FUNCTION 142b1e040 FUN_142b1e040 body=101 status=ok
// SIG undefined FUN_142b1e040(void)

void FUN_142b1e040(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_144530c58;
  iVar2 = *(int *)(param_1 + 2);
  plVar1 = (longlong *)param_1[1];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[1];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b1e0b0 FUN_142b1e0b0 body=74 status=ok
// SIG undefined FUN_142b1e0b0(void)

void FUN_142b1e0b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143fc0570;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b1e100 FUN_142b1e100 body=129 status=ok
// SIG undefined FUN_142b1e100(void)

void FUN_142b1e100(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145774410;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 4);
  plVar1 = (longlong *)param_1[3];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[3];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b1e190 FUN_142b1e190 body=46 status=ok
// SIG undefined FUN_142b1e190(void)

void FUN_142b1e190(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143fc0670;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b1e1c0 FUN_142b1e1c0 body=46 status=ok
// SIG undefined FUN_142b1e1c0(void)

void FUN_142b1e1c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_143fc0690;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b1e1f0 FUN_142b1e1f0 body=115 status=ok
// SIG undefined FUN_142b1e1f0(void)

void FUN_142b1e1f0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143fc06b0;
  iVar2 = *(int *)(param_1 + 4);
  plVar1 = (longlong *)param_1[3];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[3];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b1e270 FUN_142b1e270 body=115 status=ok
// SIG undefined FUN_142b1e270(void)

void FUN_142b1e270(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143fc06d0;
  iVar2 = *(int *)(param_1 + 4);
  plVar1 = (longlong *)param_1[3];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[3];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  return;
}



// FUNCTION 142b1e2f0 FUN_142b1e2f0 body=138 status=ok
// SIG undefined FUN_142b1e2f0(void)

undefined8 * FUN_142b1e2f0(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145774450;
  iVar2 = *(int *)(param_1 + 3);
  plVar1 = (longlong *)param_1[2];
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)param_1[2];
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b1e380 FUN_142b1e380 body=124 status=ok
// SIG undefined FUN_142b1e380(void)

undefined8 * FUN_142b1e380(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457743f0;
  param_1[1] = &PTR_FUN_1457743d0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142b1e400 FUN_142b1e400 body=124 status=ok
// SIG undefined FUN_142b1e400(void)

undefined8 * FUN_142b1e400(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145774490;
  param_1[1] = &PTR_FUN_145774470;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142b1e480 FUN_142b1e480 body=94 status=ok
// SIG undefined FUN_142b1e480(void)

undefined8 * FUN_142b1e480(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1457743d0;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b1e4e0 FUN_142b1e4e0 body=94 status=ok
// SIG undefined FUN_142b1e4e0(void)

undefined8 * FUN_142b1e4e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145774470;
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 142b1e540 FUN_142b1e540 body=74 status=ok
// SIG undefined FUN_142b1e540(void)

undefined8 * FUN_142b1e540(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145774430;
  FUN_142b1df60(param_1 + 1);
  FJsonSerializable::~FJsonSerializable(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 142b1e590 FUN_142b1e590 body=52 status=ok
// SIG undefined FUN_142b1e590(void)

undefined8 FUN_142b1e590(undefined8 param_1,ulonglong param_2)

{
  FUN_142b1e100();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142b1e5d0 FUN_142b1e5d0 body=168 status=ok
// SIG undefined FUN_142b1e5d0(void)

undefined8 FUN_142b1e5d0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 0xc;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"service_ids",0x18);
  cVar2 = FUN_1416b3850(*param_2,local_18,local_res10);
  if ((cVar2 == '\0') || (cVar2 = FUN_142b0c680(local_res10[0],param_1 + 8), cVar2 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}



// FUNCTION 142b1e680 FUN_142b1e680 body=469 status=ok
// SIG undefined FUN_142b1e680(void)

undefined1 FUN_142b1e680(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_28 [2];
  
  if (*param_2 != 0) {
    local_28[1] = 10;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_28[0],10,"crossplay",10,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 8);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_28[0] = 0;
      local_28[1] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_28[0],0xe,"max_occupants",0xe,0x3f);
      cVar1 = FUN_1416b3d70(*param_2,local_28,param_1 + 0x18);
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        local_28[0] = 0;
        local_28[1] = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_28[0],9,"metadata",9,0x3f);
        cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 0x20);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (cVar1 != '\0') {
          local_28[0] = 0;
          local_28[1] = 8;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
          FGenericPlatformString::Convert<char,wchar_t>(local_28[0],8,"privacy",8,0x3f);
          cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 0x30);
          if (local_28[0] != 0) {
            FMemory::Free();
          }
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b1e860 FUN_142b1e860 body=302 status=ok
// SIG undefined FUN_142b1e860(void)

undefined8 FUN_142b1e860(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"enabled",8,0x3f);
  cVar2 = FUN_1416b3900(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    local_18[0] = 0;
    local_18[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"services",0x12);
    cVar2 = FUN_1416b3850(*param_2,local_18,&local_res10);
    if ((cVar2 == '\0') || (cVar2 = FUN_142b0c680(local_res10,param_1 + 0x10), cVar2 == '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (bVar1) {
      return 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142b1e990 FUN_142b1e990 body=168 status=ok
// SIG undefined FUN_142b1e990(void)

undefined8 FUN_142b1e990(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"error",0xc);
  cVar2 = FUN_1416b3e60(*param_2,local_18,local_res10);
  if ((cVar2 == '\0') ||
     (cVar2 = FLadderPlayerMode::Accept(local_res10[0],param_1 + 8), cVar2 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}



// FUNCTION 142b1ea40 FUN_142b1ea40 body=168 status=ok
// SIG undefined FUN_142b1ea40(void)

undefined8 FUN_142b1ea40(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 6;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"error",0xc);
  cVar2 = FUN_1416b3e60(*param_2,local_18,local_res10);
  if ((cVar2 == '\0') ||
     (cVar2 = FLadderPlayerMode::Accept(local_res10[0],param_1 + 8), cVar2 == '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}



// FUNCTION 142b1eaf0 FUN_142b1eaf0 body=384 status=ok
// SIG undefined FUN_142b1eaf0(void)

undefined8 FUN_142b1eaf0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[1] = 5;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_1457412d4,5,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_18[0] = 0;
      local_18[1] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xe,"internal_code",0xe,0x3f);
      cVar1 = FUN_1416b3d70(*param_2,local_18,param_1 + 0x18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        local_18[0] = 0;
        local_18[1] = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"message",8,0x3f);
        cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 0x20);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b1ec70 FUN_142b1ec70 body=384 status=ok
// SIG undefined FUN_142b1ec70(void)

undefined8 FUN_142b1ec70(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[1] = 5;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_14574f294,5,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_18[0] = 0;
      local_18[1] = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_18[0],0xe,"internal_code",0xe,0x3f);
      cVar1 = FUN_1416b3d70(*param_2,local_18,param_1 + 0x18);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (cVar1 != '\0') {
        local_18[0] = 0;
        local_18[1] = 8;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"message",8,0x3f);
        cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 0x20);
        if (local_18[0] != 0) {
          FMemory::Free();
        }
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b1edf0 FUN_142b1edf0 body=584 status=ok
// SIG undefined FUN_142b1edf0(void)

undefined8 FUN_142b1edf0(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *local_res18 [2];
  longlong local_88;
  undefined8 local_80;
  undefined **local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  
  if (*param_2 != 0) {
    local_80 = 8;
    local_88 = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
    FGenericPlatformString::Memcpy(local_88,L"friends",0x10);
    cVar2 = FUN_1416b3850(*param_2,&local_88,local_res18);
    if (cVar2 == '\0') {
      bVar1 = true;
    }
    else {
      lVar4 = *local_res18[0];
      lVar6 = (longlong)(int)local_res18[0][1] * 0x10 + lVar4;
      for (; lVar4 != lVar6; lVar4 = lVar4 + 0x10) {
        FStatData::FStatData(&local_78);
        local_78 = &PTR_FUN_145774410;
        local_70 = 0;
        local_68 = 0;
        local_60 = (longlong *)0x0;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        cVar2 = FUN_142af74a0(lVar4,&local_78);
        if (cVar2 != '\0') {
          iVar5 = *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x10) = iVar5 + 1;
          if (*(int *)(param_1 + 0x14) < iVar5 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(param_1 + 8,iVar5);
          }
          FUN_142b1dda0((longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 8),&local_78);
        }
        local_78 = &PTR_FUN_145774410;
        if (local_50 != 0) {
          FMemory::Free();
        }
        plVar3 = local_60;
        for (iVar5 = (int)local_58; iVar5 != 0; iVar5 = iVar5 + -1) {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 2;
        }
        if (local_60 != (longlong *)0x0) {
          FMemory::Free(local_60);
        }
        if (local_70 != 0) {
          FMemory::Free();
        }
        FJsonSerializable::~FJsonSerializable(&local_78);
      }
      bVar1 = false;
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (!bVar1) {
      local_88 = 0;
      local_80 = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      FGenericPlatformString::Convert<char,wchar_t>(local_88,10,"page_size",10,0x3f);
      cVar2 = FUN_1416b3d70(*param_2,&local_88,param_1 + 0x18);
      if (local_88 != 0) {
        FMemory::Free();
      }
      if (cVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142b1f040 FUN_142b1f040 body=379 status=ok
// SIG undefined FUN_142b1f040(void)

undefined1 FUN_142b1f040(longlong param_1,longlong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 local_res10;
  longlong local_28 [2];
  
  if (*param_2 != 0) {
    local_28[1] = 10;
    local_28[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_28[0],10,"friend_id",10,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 8);
    bVar2 = cVar1 == '\0';
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (!bVar2) {
      local_28[0] = 0;
      local_28[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      FGenericPlatformString::Memcpy(local_28[0],L"groups",0xe);
      cVar1 = FUN_1416b3850(*param_2,local_28,&local_res10);
      if ((cVar1 == '\0') || (cVar1 = FUN_142b0c680(local_res10,param_1 + 0x18), cVar1 == '\0')) {
        bVar2 = true;
      }
      if (local_28[0] != 0) {
        FMemory::Free();
      }
      if (!bVar2) {
        local_28[0] = 0;
        local_28[1] = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
        FGenericPlatformString::Convert<char,wchar_t>(local_28[0],7,"status",7,0x3f);
        cVar1 = FUN_1416b40a0(*param_2,local_28,param_1 + 0x28);
        if (local_28[0] != 0) {
          FMemory::Free();
        }
        if (cVar1 != '\0') {
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142b1f1c0 FUN_142b1f1c0 body=144 status=ok
// SIG undefined FUN_142b1f1c0(void)

undefined8 FUN_142b1f1c0(longlong param_1,longlong *param_2)

{
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 8;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],8,"comment",8,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b1f250 FUN_142b1f250 body=153 status=ok
// SIG undefined FUN_142b1f250(void)

undefined8 FUN_142b1f250(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[1] = 10;
    local_18[0] = 0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],10,"operation",10,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142b1f2f0 FUN_142b1f2f0 body=284 status=ok
// SIG undefined FUN_142b1f2f0(void)

undefined8 FUN_142b1f2f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 != 0) {
    local_18[0] = 0;
    local_18[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_18[0],10,"friend_id",10,0x3f);
    cVar1 = FUN_1416b40a0(*param_2,local_18,param_1 + 8);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    if (cVar1 != '\0') {
      local_18[0] = 0;
      local_18[1] = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy(local_18[0],L"groups",0xe);
      cVar1 = FUN_1416b3850(*param_2,local_18,&local_res10);
      if (cVar1 != '\0') {
        FUN_142b0c680(local_res10,param_1 + 0x18);
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142b1f410 FUN_142b1f410 body=353 status=ok
// SIG undefined FUN_142b1f410(void)

undefined1 FUN_142b1f410(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
  if (*param_2 == 0) {
    return 0;
  }
  local_18[1] = 7;
  local_18[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],7,"status",7,0x3f);
  FUN_1416b40a0(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"groups",0xe);
  cVar1 = FUN_1416b3850(*param_2,local_18,&local_res10);
  if (cVar1 != '\0') {
    FUN_142b0c680(local_res10,param_1 + 0x18);
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Convert<char,wchar_t>(local_18[0],5,&DAT_145770d74,5,0x3f);
  FUN_1416b3b00(*param_2,local_18,param_1 + 0x28);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 142b1f580 FUN_142b1f580 body=283 status=ok
// SIG undefined FUN_142b1f580(void)

undefined8 * FUN_142b1f580(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"service_ids",0x18);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1f6a0 FUN_142b1f6a0 body=494 status=ok
// SIG undefined FUN_142b1f6a0(void)

undefined8 * FUN_142b1f6a0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"crossplay",0x14);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"max_occupants",0x1c);
  FUN_1416b32b0(*param_2,local_18,(double)*(longlong *)(param_1 + 0x18));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"metadata",0x12);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"privacy",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x30);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1f890 FUN_142b1f890 body=365 status=ok
// SIG undefined FUN_142b1f890(void)

undefined8 * FUN_142b1f890(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"enabled",0x10);
  FUN_1416b3150(*param_2,local_28,*(undefined1 *)(param_1 + 8));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"services",0x12);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 0x10);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1fa00 FUN_142b1fa00 body=337 status=ok
// SIG undefined FUN_142b1fa00(void)

undefined8 * FUN_142b1fa00(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"error",0xc);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_28,uVar8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1fb60 FUN_142b1fb60 body=337 status=ok
// SIG undefined FUN_142b1fb60(void)

undefined8 * FUN_142b1fb60(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong local_28 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  puVar6 = (undefined8 *)operator_new(0x50);
  puVar7 = (undefined8 *)0x0;
  puVar9 = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    *(undefined4 *)(puVar6 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
    puVar6[8] = 0;
    *(undefined4 *)(puVar6 + 9) = 0;
    puVar9 = puVar6;
  }
  puVar6 = (undefined8 *)operator_new(0x18);
  if (puVar6 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar6 + 1) = 1;
    *puVar6 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
    puVar6[2] = puVar9;
    puVar7 = puVar6;
  }
  *param_2 = puVar9;
  param_2[1] = puVar7;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar9,puVar9);
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"error",0xc);
  uVar4 = *param_2;
  uVar8 = Chaos::operator<<<float,3,0>(local_18,param_1 + 8);
  FUN_1416b33f0(uVar4,local_28,uVar8);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1fcc0 FUN_142b1fcc0 body=424 status=ok
// SIG undefined FUN_142b1fcc0(void)

undefined8 * FUN_142b1fcc0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"code",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"internal_code",0x1c);
  FUN_1416b32b0(*param_2,local_18,(double)*(longlong *)(param_1 + 0x18));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b1fe70 FUN_142b1fe70 body=424 status=ok
// SIG undefined FUN_142b1fe70(void)

undefined8 * FUN_142b1fe70(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"code",10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"internal_code",0x1c);
  FUN_1416b32b0(*param_2,local_18,(double)*(longlong *)(param_1 + 0x18));
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"message",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 0x20);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b20020 FUN_142b20020 body=369 status=ok
// SIG undefined FUN_142b20020(void)

undefined8 * FUN_142b20020(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"friends",0x10);
  uVar1 = *param_2;
  uVar4 = FUN_142b1da20(local_18,param_1 + 8);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"page_size",0x14);
  FUN_1416b32b0(*param_2,local_28,(double)*(longlong *)(param_1 + 0x18));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b201a0 FUN_142b201a0 body=445 status=ok
// SIG undefined FUN_142b201a0(void)

undefined8 * FUN_142b201a0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"friend_id",0x14);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"groups",0xe);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 0x18);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"status",0xe);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 0x28);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b20360 FUN_142b20360 body=257 status=ok
// SIG undefined FUN_142b20360(void)

undefined8 * FUN_142b20360(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"comment",0x10);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b20470 FUN_142b20470 body=257 status=ok
// SIG undefined FUN_142b20470(void)

undefined8 * FUN_142b20470(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)operator_new(0x50);
  puVar2 = (undefined8 *)0x0;
  puVar3 = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    puVar1[8] = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = puVar1;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    puVar1[2] = puVar3;
    puVar2 = puVar1;
  }
  *param_2 = puVar3;
  param_2[1] = puVar2;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar3,puVar3);
  local_18[0] = 0;
  local_18[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
  FGenericPlatformString::Memcpy(local_18[0],L"operation",0x14);
  FJsonObject::SetStringField(*param_2,local_18,param_1 + 8);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b20580 FUN_142b20580 body=364 status=ok
// SIG undefined FUN_142b20580(void)

undefined8 * FUN_142b20580(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"friend_id",0x14);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"groups",0xe);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 0x18);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b206f0 FUN_142b206f0 body=450 status=ok
// SIG undefined FUN_142b206f0(void)

undefined8 * FUN_142b206f0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_28 [2];
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)operator_new(0x50);
  puVar3 = (undefined8 *)0x0;
  puVar5 = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
    puVar2[8] = 0;
    *(undefined4 *)(puVar2 + 9) = 0;
    puVar5 = puVar2;
  }
  puVar2 = (undefined8 *)operator_new(0x18);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar2 + 1) = 1;
    *puVar2 = &PTR_FUN_143f60d28;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    puVar2[2] = puVar5;
    puVar3 = puVar2;
  }
  *param_2 = puVar5;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,puVar5,puVar5);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"status",0xe);
  FJsonObject::SetStringField(*param_2,local_28,param_1 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"groups",0xe);
  uVar1 = *param_2;
  uVar4 = FUN_142af81e0(local_18,param_1 + 0x18);
  FJsonObject::SetArrayField(uVar1,local_28,uVar4);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_18);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"page",10);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 0x28));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142b208c0 FUN_142b208c0 body=465 status=ok
// SIG undefined FUN_142b208c0(void)

undefined8 FUN_142b208c0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined **local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  lVar4 = *param_1;
  lVar5 = (longlong)(int)param_1[1] * 0x10 + lVar4;
  for (; lVar4 != lVar5; lVar4 = lVar4 + 0x10) {
    FStatData::FStatData(&local_98);
    local_98 = &PTR_FUN_1457b14c8;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_50 = 0;
    cVar2 = FUN_142af74a0(lVar4,&local_98);
    if (cVar2 != '\0') {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                  (param_2,iVar1);
      }
      puVar3 = (undefined8 *)((longlong)iVar1 * 0x80 + *param_2);
      *puVar3 = &PTR_FUN_1457b14c8;
      FString::FString(puVar3 + 1,&local_90);
      FString::FString(puVar3 + 3,&local_80);
      FString::FString(puVar3 + 5,&local_70);
      FString::FString(puVar3 + 7,&local_60);
      *(undefined4 *)(puVar3 + 9) = local_50;
      FString::FString(puVar3 + 10,&local_48);
      FString::FString(puVar3 + 0xc,&local_38);
      FString::FString(puVar3 + 0xe,&local_28);
    }
    local_98 = &PTR_FUN_1457b14c8;
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    if (local_90 != 0) {
      FMemory::Free();
    }
    FJsonSerializable::~FJsonSerializable(&local_98);
  }
  return 1;
}



// FUNCTION 142b20aa0 FUN_142b20aa0 body=488 status=ok
// SIG undefined FUN_142b20aa0(void)

longlong * FUN_142b20aa0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *param_2;
  lVar8 = (longlong)(int)param_2[1] * 0x68 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x68) {
    Chaos::operator<<<float,3,0>(&local_38,lVar7);
    if (local_38 != 0) {
      plVar4 = (longlong *)operator_new(0x20);
      plVar6 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 0;
        *plVar4 = (longlong)&PTR_AsObject_143f606d8;
        plVar4[2] = local_38;
        plVar4[3] = (longlong)local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar4 + 1) = 6;
        plVar6 = plVar4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      local_40 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f60d18;
        plVar4[2] = (longlong)plVar6;
        local_40 = plVar4;
      }
      local_48 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar6,plVar6);
      plVar4 = local_40;
      plVar6 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_1);
        *puVar5 = plVar6;
        puVar5[1] = plVar4;
      }
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_40)(local_40);
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
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142b20c90 FUN_142b20c90 body=488 status=ok
// SIG undefined FUN_142b20c90(void)

longlong * FUN_142b20c90(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *param_2;
  lVar8 = (longlong)(int)param_2[1] * 0x40 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x40) {
    Chaos::operator<<<float,3,0>(&local_38,lVar7);
    if (local_38 != 0) {
      plVar4 = (longlong *)operator_new(0x20);
      plVar6 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 0;
        *plVar4 = (longlong)&PTR_AsObject_143f606d8;
        plVar4[2] = local_38;
        plVar4[3] = (longlong)local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar4 + 1) = 6;
        plVar6 = plVar4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      local_40 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f60d18;
        plVar4[2] = (longlong)plVar6;
        local_40 = plVar4;
      }
      local_48 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar6,plVar6);
      plVar4 = local_40;
      plVar6 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_1);
        *puVar5 = plVar6;
        puVar5[1] = plVar4;
      }
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_40)(local_40);
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
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142b20e80 FUN_142b20e80 body=488 status=ok
// SIG undefined FUN_142b20e80(void)

longlong * FUN_142b20e80(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *param_2;
  lVar8 = (longlong)(int)param_2[1] * 0x10 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x10) {
    Chaos::operator<<<float,3,0>(&local_38,lVar7);
    if (local_38 != 0) {
      plVar4 = (longlong *)operator_new(0x20);
      plVar6 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 0;
        *plVar4 = (longlong)&PTR_AsObject_143f606d8;
        plVar4[2] = local_38;
        plVar4[3] = (longlong)local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar4 + 1) = 6;
        plVar6 = plVar4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      local_40 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f60d18;
        plVar4[2] = (longlong)plVar6;
        local_40 = plVar4;
      }
      local_48 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar6,plVar6);
      plVar4 = local_40;
      plVar6 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_1);
        *puVar5 = plVar6;
        puVar5[1] = plVar4;
      }
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_40)(local_40);
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
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142b21070 FUN_142b21070 body=488 status=ok
// SIG undefined FUN_142b21070(void)

longlong * FUN_142b21070(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *param_2;
  lVar8 = (longlong)(int)param_2[1] * 0x80 + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x80) {
    Chaos::operator<<<float,3,0>(&local_38,lVar7);
    if (local_38 != 0) {
      plVar4 = (longlong *)operator_new(0x20);
      plVar6 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 0;
        *plVar4 = (longlong)&PTR_AsObject_143f606d8;
        plVar4[2] = local_38;
        plVar4[3] = (longlong)local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_30 + 1) = (int)local_30[1] + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar4 + 1) = 6;
        plVar6 = plVar4;
      }
      plVar4 = (longlong *)operator_new(0x18);
      local_40 = (longlong *)0x0;
      if (plVar4 != (longlong *)0x0) {
        *(undefined4 *)(plVar4 + 1) = 1;
        *(undefined4 *)((longlong)plVar4 + 0xc) = 1;
        *plVar4 = (longlong)&PTR_FUN_143f60d18;
        plVar4[2] = (longlong)plVar6;
        local_40 = plVar4;
      }
      local_48 = plVar6;
      SharedPointerInternals::EnableSharedFromThis(&local_48,plVar6,plVar6);
      plVar4 = local_40;
      plVar6 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_40 + 1) = (int)local_40[1] + 1;
          UNLOCK();
        }
        iVar2 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
        }
        puVar5 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_1);
        *puVar5 = plVar6;
        puVar5[1] = plVar4;
      }
      plVar6 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_40 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_40)(local_40);
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
    plVar6 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
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
  return param_1;
}



// FUNCTION 142b21260 FUN_142b21260 body=46 status=ok
// SIG undefined FUN_142b21260(void)

undefined8 * FUN_142b21260(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR__scalar_deleting_destructor__1457b1408;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b21290 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR__scalar_deleting_destructor__1457b1568;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b212c0 FUN_142b212c0 body=80 status=ok
// SIG undefined FUN_142b212c0(void)

undefined8 * FUN_142b212c0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b1668;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_1457b1648;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 142b21310 FUN_142b21310 body=80 status=ok
// SIG undefined FUN_142b21310(void)

undefined8 * FUN_142b21310(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b1388;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_1457b1368;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 142b21360 FUN_142b21360 body=75 status=ok
// SIG undefined FUN_142b21360(void)

undefined8 * FUN_142b21360(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b1588;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return param_1;
}



// FUNCTION 142b213b0 FUN_142b213b0 body=46 status=ok
// SIG undefined FUN_142b213b0(void)

undefined8 * FUN_142b213b0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b15c8;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 142b213e0 FUN_142b213e0 body=254 status=ok
// SIG undefined FUN_142b213e0(void)

undefined8 * FUN_142b213e0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_1457b15a8;
  FString::FString(param_1 + 1,param_2 + 8);
  FString::FString(param_1 + 3,param_2 + 0x18);
  FString::FString(param_1 + 5,param_2 + 0x28);
  FString::FString(param_1 + 7,param_2 + 0x38);
  param_1[9] = 0;
  iVar3 = *(int *)(param_2 + 0x50);
  puVar4 = *(undefined8 **)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 9,iVar3,0);
    puVar2 = (undefined8 *)param_1[9];
    do {
      *puVar2 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FString::FString(param_1 + 0xb,param_2 + 0x58);
  return param_1;
}



// FUNCTION 142b214e0 FRemnantCharacterStatData body=62 status=ok
// SIG undefined FRemnantCharacterStatData(void)

undefined8 * FRemnantCharacterStatData::FRemnantCharacterStatData(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b15e8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 142b21520 FUN_142b21520 body=75 status=ok
// SIG undefined FUN_142b21520(void)

undefined8 * FUN_142b21520(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b11c8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142b21570 FUN_142b21570 body=207 status=ok
// SIG undefined FUN_142b21570(void)

undefined8 * FUN_142b21570(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b13e8;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_1457b13c8;
  FStatData::FStatData(param_1 + 2);
  param_1[2] = &PTR__scalar_deleting_destructor__1457b1348;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_142b21ac0(param_1 + 10);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  FStatData::FStatData(param_1 + 0x1c);
  param_1[0x1c] = &PTR_FUN_1457b13a8;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0x20] = 0;
  return param_1;
}



// FUNCTION 142b21640 FUN_142b21640 body=195 status=ok
// SIG undefined FUN_142b21640(void)

undefined8 * FUN_142b21640(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_144c7de28;
  param_1[1] = 0;
  iVar3 = *(int *)(param_2 + 0x10);
  puVar4 = *(undefined8 **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar3,0);
    puVar2 = (undefined8 *)param_1[1];
    do {
      *puVar2 = 0;
      iVar1 = *(int *)(puVar4 + 1);
      _Src = (void *)*puVar4;
      *(int *)(puVar2 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar2,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar2,_Src,(longlong)iVar1 * 2);
      }
      puVar2 = puVar2 + 2;
      puVar4 = puVar4 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}



// FUNCTION 142b21710 FUN_142b21710 body=91 status=ok
// SIG undefined FUN_142b21710(void)

undefined8 * FUN_142b21710(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b1448;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR__scalar_deleting_destructor__1457b1428;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 142b21770 FUN_142b21770 body=62 status=ok
// SIG undefined FUN_142b21770(void)

undefined8 * FUN_142b21770(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR__scalar_deleting_destructor__1457b1428;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 142b217b0 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR__scalar_deleting_destructor__1457b1468;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b217e0 FUN_142b217e0 body=51 status=ok
// SIG undefined FUN_142b217e0(void)

undefined8 * FUN_142b217e0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b16a8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b21820 FUN_142b21820 body=47 status=ok
// SIG undefined FUN_142b21820(void)

undefined8 * FUN_142b21820(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc0590;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 142b21850 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR__scalar_deleting_destructor__1457b11e8;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b21880 FUN_142b21880 body=51 status=ok
// SIG undefined FUN_142b21880(void)

undefined8 * FUN_142b21880(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b1208;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b218c0 FUN_142b218c0 body=448 status=ok
// SIG undefined FUN_142b218c0(void)

undefined8 * FUN_142b218c0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_1457b1308;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  param_1[2] = 0;
  iVar2 = *(int *)(param_2 + 0x18);
  lVar3 = *(longlong *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar2,0);
    puVar1 = (undefined8 *)param_1[2];
    lVar3 = lVar3 + 8;
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__1457b1268;
      FString::FString(puVar1 + 1,lVar3);
      lVar3 = lVar3 + 0x18;
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[4] = 0;
  iVar2 = *(int *)(param_2 + 0x28);
  lVar3 = *(longlong *)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(param_1 + 4,iVar2,0);
    puVar1 = (undefined8 *)param_1[4];
    lVar3 = lVar3 + 0x18;
    do {
      *puVar1 = &PTR_FUN_1457b1288;
      FString::FString(puVar1 + 1,lVar3 + -0x10);
      FString::FString(puVar1 + 3,lVar3);
      FString::FString(puVar1 + 5,lVar3 + 0x10);
      lVar3 = lVar3 + 0x38;
      puVar1 = puVar1 + 7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[6] = 0;
  iVar2 = *(int *)(param_2 + 0x38);
  lVar3 = *(longlong *)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(param_1 + 6,iVar2,0);
    puVar4 = (undefined8 *)param_1[6];
    lVar3 = lVar3 + 0x28;
    puVar1 = puVar4 + 2;
    do {
      *puVar4 = &PTR_FUN_1457b12e8;
      puVar1[-1] = &PTR_FUN_1457b12c8;
      FString::FString(puVar1,lVar3 + -0x18);
      puVar1[2] = &PTR__scalar_deleting_destructor__1457b12a8;
      FString::FString(puVar1 + 3,lVar3);
      FString::FString(puVar1 + 5,lVar3 + 0x10);
      puVar1 = puVar1 + 9;
      puVar4 = puVar4 + 9;
      lVar3 = lVar3 + 0x48;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_1;
}



// FUNCTION 142b21a80 FUN_142b21a80 body=62 status=ok
// SIG undefined FUN_142b21a80(void)

undefined8 * FUN_142b21a80(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b1328;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 142b21ac0 FUN_142b21ac0 body=121 status=ok
// SIG undefined FUN_142b21ac0(void)

undefined8 * FUN_142b21ac0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_144c7de68;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_144c7de08;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6c) = 0;
  return param_1;
}



// FUNCTION 142b21b40 FUN_142b21b40 body=51 status=ok
// SIG undefined FUN_142b21b40(void)

undefined8 * FUN_142b21b40(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b1488;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b21b80 FTickAnimationPlayers body=43 status=ok
// SIG undefined FTickAnimationPlayers(void)

undefined8 * FTickAnimationPlayers::FTickAnimationPlayers(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b14a8;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 142b21bb0 FUN_142b21bb0 body=97 status=ok
// SIG undefined FUN_142b21bb0(void)

undefined8 * FUN_142b21bb0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b1508;
  param_1[1] = 0;
  param_1[2] = 0;
  FStatData::FStatData(param_1 + 3);
  param_1[3] = &PTR__scalar_deleting_destructor__1457b14e8;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  return param_1;
}



// FUNCTION 142b21c20 FUN_142b21c20 body=67 status=ok
// SIG undefined FUN_142b21c20(void)

undefined8 * FUN_142b21c20(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc05d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142b21c70 FUN_142b21c70 body=51 status=ok
// SIG undefined FUN_142b21c70(void)

undefined8 * FUN_142b21c70(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b1228;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 142b21cb0 FUN_142b21cb0 body=59 status=ok
// SIG undefined FUN_142b21cb0(void)

undefined8 * FUN_142b21cb0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc05b0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142b21cf0 FUN_142b21cf0 body=83 status=ok
// SIG undefined FUN_142b21cf0(void)

undefined8 * FUN_142b21cf0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b1548;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_1457b1528;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return param_1;
}



// FUNCTION 142b21d50 FUN_142b21d50 body=80 status=ok
// SIG undefined FUN_142b21d50(void)

undefined8 * FUN_142b21d50(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b1628;
  FStatData::FStatData(param_1 + 1);
  param_1[1] = &PTR_FUN_1457b1608;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 142b21da0 FUN_142b21da0 body=112 status=ok
// SIG undefined FUN_142b21da0(void)

undefined8 * FUN_142b21da0(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_144c7e048;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_142b21ac0(param_1 + 4);
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  return param_1;
}



// FUNCTION 142b21e10 FUN_142b21e10 body=63 status=ok
// SIG undefined FUN_142b21e10(void)

undefined8 * FUN_142b21e10(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc05f0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 142b21e50 FUN_142b21e50 body=59 status=ok
// SIG undefined FUN_142b21e50(void)

undefined8 * FUN_142b21e50(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_143fc0610;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142b21e90 FUN_142b21e90 body=59 status=ok
// SIG undefined FUN_142b21e90(void)

undefined8 * FUN_142b21e90(undefined8 *param_1)

{
  FStatData::FStatData();
  *param_1 = &PTR_FUN_1457b1248;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142b21ed0 FUN_142b21ed0 body=124 status=ok
// SIG undefined FUN_142b21ed0(void)

void FUN_142b21ed0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__1457b1268;
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 3;
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



// FUNCTION 142b21f50 FUN_142b21f50 body=152 status=ok
// SIG undefined FUN_142b21f50(void)

void FUN_142b21f50(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_1457b1288;
      if (puVar1[5] != 0) {
        FMemory::Free();
      }
      if (puVar1[3] != 0) {
        FMemory::Free();
      }
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 7;
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



// FUNCTION 142b21ff0 FUN_142b21ff0 body=232 status=ok
// SIG undefined FUN_142b21ff0(void)

void FUN_142b21ff0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    puVar1 = puVar3 + 4;
    do {
      *puVar3 = &PTR_FUN_1457b12e8;
      if (puVar1[3] != 0) {
        FMemory::Free();
      }
      puVar1[-3] = &PTR_FUN_1457b12c8;
      *puVar1 = &PTR__scalar_deleting_destructor__1457b12a8;
      if (puVar1[1] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1);
      if (puVar1[-2] != 0) {
        FMemory::Free();
      }
      FJsonSerializable::~FJsonSerializable(puVar1 + -3);
      FJsonSerializable::~FJsonSerializable(puVar3);
      puVar3 = puVar3 + 9;
      puVar1 = puVar1 + 9;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 != (undefined8 *)0x0) {
    FMemory::Free(puVar3);
    return;
  }
  return;
}



// FUNCTION 142b220e0 FUN_142b220e0 body=188 status=ok
// SIG undefined FUN_142b220e0(void)

void FUN_142b220e0(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar3 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar3 = &PTR_FUN_144c7de28;
      iVar4 = *(int *)(puVar3 + 2);
      plVar1 = (longlong *)puVar3[1];
      if (iVar4 != 0) {
        do {
          if (*plVar1 != 0) {
            FMemory::Free();
          }
          plVar1 = plVar1 + 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        plVar1 = (longlong *)puVar3[1];
      }
      if (plVar1 != (longlong *)0x0) {
        FMemory::Free(plVar1);
      }
      FJsonSerializable::~FJsonSerializable(puVar3);
      puVar3 = puVar3 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar3);
  return;
}



// FUNCTION 142b221a0 FUN_142b221a0 body=137 status=ok
// SIG undefined FUN_142b221a0(void)

void FUN_142b221a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_1457b1308;
      FUN_142b21ff0(puVar1 + 6);
      FUN_142b21f50(puVar1 + 4);
      FUN_142b21ed0(puVar1 + 2);
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 8;
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



// FUNCTION 142b22230 FUN_142b22230 body=110 status=ok
// SIG undefined FUN_142b22230(void)

void FUN_142b22230(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_144c7de48;
      FJsonSerializable::~FJsonSerializable(puVar1);
      puVar1 = puVar1 + 2;
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


