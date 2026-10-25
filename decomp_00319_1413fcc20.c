// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1413fcc20 FUN_1413fcc20 body=376 status=ok
// SIG undefined FUN_1413fcc20(void)

void FUN_1413fcc20(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  cVar1 = (**(code **)(*param_1 + 0xb00))
                    (param_1,local_28[0],local_res20[0],local_res10[0],local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetCurrentWeapon_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xb08))(param_1,local_28[0],local_res20[0],local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 1413fcda0 FUN_1413fcda0 body=249 status=ok
// SIG undefined FUN_1413fcda0(void)

void FUN_1413fcda0(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0xb20))(param_1,local_res10,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSetEquippedTrinket_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xb28))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 1413fcea0 FUN_1413fcea0 body=499 status=ok
// SIG undefined FUN_1413fcea0(void)

void FUN_1413fcea0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  undefined2 local_10;
  
  _guard_xfg_dispatch_icall_nop(local_68,0,0x60);
  local_10 = 1;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xaa8))(param_1,local_68,local_res8,local_78,local_88,local_98);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSpawnDroppedPickup_Validate");
  }
  else {
    (**(code **)(*param_1 + 0xab0))(param_1,local_68,local_res8,local_78,local_88,local_98);
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (local_30 != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (local_48);
  return;
}



// FUNCTION 1413fd0a0 FUN_1413fd0a0 body=313 status=ok
// SIG undefined FUN_1413fd0a0(void)

void FUN_1413fd0a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  int local_res20 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
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
  bVar2 = local_res20[0] != 0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xae8))(param_1,local_res8[0],local_res10[0],bVar2);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerStopWeaponActions_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xaf0))(param_1,local_res8[0],local_res10[0],bVar2);
  return;
}



// FUNCTION 1413fd1e0 FUN_1413fd1e0 body=181 status=ok
// SIG undefined FUN_1413fd1e0(void)

void FUN_1413fd1e0(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0xb30))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerUnequipInventorySlot_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xb38))(param_1,local_res8);
  return;
}



// FUNCTION 1413fd2a0 FUN_1413fd2a0 body=248 status=ok
// SIG undefined FUN_1413fd2a0(void)

void FUN_1413fd2a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 local_res8 [2];
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0xab8))(param_1,local_res10,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerUnlockActiveWeaponActions_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xac0))(param_1,local_res10,local_res8[0]);
  return;
}



// FUNCTION 1413fd3a0 FUN_1413fd3a0 body=128 status=ok
// SIG undefined FUN_1413fd3a0(void)

void FUN_1413fd3a0(undefined8 param_1,longlong param_2)

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
  FUN_140c57510(param_1,local_res10);
  return;
}



// FUNCTION 1413fd420 FUN_1413fd420 body=191 status=ok
// SIG undefined FUN_1413fd420(void)

void FUN_1413fd420(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140c57580(param_1,bVar1,local_res20);
  return;
}



// FUNCTION 1413fd4e0 FUN_1413fd4e0 body=197 status=ok
// SIG undefined FUN_1413fd4e0(void)

void FUN_1413fd4e0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140c57710(param_1,local_res10[0],local_res20);
  return;
}



// FUNCTION 1413fd5b0 FUN_1413fd5b0 body=322 status=ok
// SIG undefined FUN_1413fd5b0(void)

void FUN_1413fd5b0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
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
  FUN_140c57740(param_1,local_10,local_18,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1413fd700 FUN_1413fd700 body=322 status=ok
// SIG undefined FUN_1413fd700(void)

void FUN_1413fd700(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
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
  FUN_140c57820(param_1,local_10,local_18,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1413fd850 FUN_1413fd850 body=122 status=ok
// SIG undefined FUN_1413fd850(void)

void FUN_1413fd850(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  
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
  (**(code **)(*param_1 + 0xbc8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1413fd8d0 FUN_1413fd8d0 body=128 status=ok
// SIG undefined FUN_1413fd8d0(void)

void FUN_1413fd8d0(undefined8 param_1,longlong param_2)

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
  FUN_140c58600(param_1,local_res10);
  return;
}



// FUNCTION 1413fd950 FUN_1413fd950 body=130 status=ok
// SIG undefined FUN_1413fd950(void)

void FUN_1413fd950(undefined8 param_1,longlong param_2)

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
  FUN_140c58e20(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1413fd9e0 FUN_1413fd9e0 body=130 status=ok
// SIG undefined FUN_1413fd9e0(void)

void FUN_1413fd9e0(undefined8 param_1,longlong param_2)

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
  FUN_140c58e50(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1413fda70 FUN_1413fda70 body=48 status=ok
// SIG undefined FUN_1413fda70(void)

void FUN_1413fda70(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0xb10))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413fdaa0 FUN_1413fdaa0 body=128 status=ok
// SIG undefined FUN_1413fdaa0(void)

void FUN_1413fdaa0(undefined8 param_1,longlong param_2)

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
  FUN_140c596a0(param_1,local_res10);
  return;
}



// FUNCTION 1413fdb40 FUN_1413fdb40 body=128 status=ok
// SIG undefined FUN_1413fdb40(void)

void FUN_1413fdb40(undefined8 param_1,longlong param_2)

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
  FUN_140c59ea0(param_1,local_res10);
  return;
}



// FUNCTION 1413fdbc0 FUN_1413fdbc0 body=128 status=ok
// SIG undefined FUN_1413fdbc0(void)

void FUN_1413fdbc0(undefined8 param_1,longlong param_2)

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
  FUN_140c59ef0(param_1,local_res10);
  return;
}



// FUNCTION 1413fdc60 execLockAIResources body=194 status=ok
// SIG undefined execLockAIResources(void)

void UAnimInstance::execLockAIResources(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
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
  FUN_140c5a150(param_1,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 1413fdd30 FUN_1413fdd30 body=389 status=ok
// SIG undefined FUN_1413fdd30(void)

void FUN_1413fdd30(longlong *param_1,longlong param_2)

{
  bool bVar1;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar1 = local_res8[0] != 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_38 = local_58;
  local_28 = local_48;
  local_30 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_40;
  (**(code **)(*param_1 + 0xa98))(param_1,&local_28,&local_38,bVar1,local_res10[0] != 0);
  return;
}



// FUNCTION 1413fdec0 FUN_1413fdec0 body=71 status=ok
// SIG undefined FUN_1413fdec0(void)

void FUN_1413fdec0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = FUN_140c469d0();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001413fdef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x8e0))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001413fdf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x8d8))(param_1,0);
  return;
}



// FUNCTION 1413fdf10 FUN_1413fdf10 body=130 status=ok
// SIG undefined FUN_1413fdf10(void)

void FUN_1413fdf10(undefined8 param_1,longlong param_2)

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
  FUN_140c5adb0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1413fdfc0 FUN_1413fdfc0 body=130 status=ok
// SIG undefined FUN_1413fdfc0(void)

void FUN_1413fdfc0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xb68))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1413fe050 FUN_1413fe050 body=130 status=ok
// SIG undefined FUN_1413fe050(void)

void FUN_1413fe050(undefined8 param_1,longlong param_2)

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
  FUN_140c5b130(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1413fe0e0 FUN_1413fe0e0 body=249 status=ok
// SIG undefined FUN_1413fe0e0(void)

void FUN_1413fe0e0(longlong param_1,longlong param_2)

{
  int local_res8 [2];
  undefined4 local_res10 [4];
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
  (**(code **)(*(longlong *)(param_1 + 0xd88) + 0x108))
            ((longlong *)(param_1 + 0xd88),local_res20,local_res10[0],local_res8[0] != 0);
  return;
}



// FUNCTION 1413fe200 FUN_1413fe200 body=143 status=ok
// SIG undefined FUN_1413fe200(void)

void FUN_1413fe200(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140c5d8e0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413fe290 FUN_1413fe290 body=43 status=ok
// SIG undefined FUN_1413fe290(void)

void FUN_1413fe290(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140c5d910();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1413fe320 FUN_1413fe320 body=128 status=ok
// SIG undefined FUN_1413fe320(void)

void FUN_1413fe320(undefined8 param_1,longlong param_2)

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
  FUN_140c5def0(param_1,local_res10);
  return;
}



// FUNCTION 1413fe3a0 FUN_1413fe3a0 body=194 status=ok
// SIG undefined FUN_1413fe3a0(void)

void FUN_1413fe3a0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
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
  FUN_140c5e000(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 1413fe470 FUN_1413fe470 body=194 status=ok
// SIG undefined FUN_1413fe470(void)

void FUN_1413fe470(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
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
  FUN_140c5e030(param_1,local_res20,local_res10[0] != 0);
  return;
}



// FUNCTION 1413fe540 FUN_1413fe540 body=47 status=ok
// SIG undefined FUN_1413fe540(void)

longlong FUN_1413fe540(void)

{
  if (DAT_14688ef70 == 0) {
    FUN_141786a30(&DAT_14688ef70,&PTR_FUN_1463a7bc0);
  }
  return DAT_14688ef70;
}



// FUNCTION 1413fe570 FUN_1413fe570 body=47 status=ok
// SIG undefined FUN_1413fe570(void)

longlong FUN_1413fe570(void)

{
  if (DAT_14688f0e8 == 0) {
    FUN_141786440(&DAT_14688f0e8,&PTR_FUN_144a07030);
  }
  return DAT_14688f0e8;
}



// FUNCTION 1413fe5a0 FUN_1413fe5a0 body=47 status=ok
// SIG undefined FUN_1413fe5a0(void)

longlong FUN_1413fe5a0(void)

{
  if (DAT_14688efa8 == 0) {
    FUN_141786a30(&DAT_14688efa8,&PTR_FUN_1463a7d90);
  }
  return DAT_14688efa8;
}



// FUNCTION 1413fe5d0 FUN_1413fe5d0 body=47 status=ok
// SIG undefined FUN_1413fe5d0(void)

longlong FUN_1413fe5d0(void)

{
  if (DAT_14688efb0 == 0) {
    FUN_141786a30(&DAT_14688efb0,&PTR_FUN_1463a7e10);
  }
  return DAT_14688efb0;
}



// FUNCTION 1413fe600 FUN_1413fe600 body=47 status=ok
// SIG undefined FUN_1413fe600(void)

longlong FUN_1413fe600(void)

{
  if (DAT_14688efb8 == 0) {
    FUN_141786a30(&DAT_14688efb8,&PTR_FUN_1463a7e50);
  }
  return DAT_14688efb8;
}



// FUNCTION 1413fe630 FUN_1413fe630 body=47 status=ok
// SIG undefined FUN_1413fe630(void)

longlong FUN_1413fe630(void)

{
  if (DAT_14688efc0 == 0) {
    FUN_141786a30(&DAT_14688efc0,&PTR_FUN_1463a7ed0);
  }
  return DAT_14688efc0;
}



// FUNCTION 1413fe660 FUN_1413fe660 body=47 status=ok
// SIG undefined FUN_1413fe660(void)

longlong FUN_1413fe660(void)

{
  if (DAT_14688efc8 == 0) {
    FUN_141786a30(&DAT_14688efc8,&PTR_FUN_1463a7f50);
  }
  return DAT_14688efc8;
}



// FUNCTION 1413fe690 FUN_1413fe690 body=47 status=ok
// SIG undefined FUN_1413fe690(void)

longlong FUN_1413fe690(void)

{
  if (DAT_14688efd0 == 0) {
    FUN_141786a30(&DAT_14688efd0,&PTR_FUN_1463a8010);
  }
  return DAT_14688efd0;
}



// FUNCTION 1413fe6c0 FUN_1413fe6c0 body=47 status=ok
// SIG undefined FUN_1413fe6c0(void)

longlong FUN_1413fe6c0(void)

{
  if (DAT_14688efd8 == 0) {
    FUN_141786a30(&DAT_14688efd8,&PTR_FUN_1463a80d0);
  }
  return DAT_14688efd8;
}



// FUNCTION 1413fe6f0 FUN_1413fe6f0 body=47 status=ok
// SIG undefined FUN_1413fe6f0(void)

longlong FUN_1413fe6f0(void)

{
  if (DAT_14688efe0 == 0) {
    FUN_141786a30(&DAT_14688efe0,&PTR_FUN_1463a81d0);
  }
  return DAT_14688efe0;
}



// FUNCTION 1413fe720 FUN_1413fe720 body=47 status=ok
// SIG undefined FUN_1413fe720(void)

longlong FUN_1413fe720(void)

{
  if (DAT_14688efe8 == 0) {
    FUN_141786a30(&DAT_14688efe8,&PTR_FUN_1463a8250);
  }
  return DAT_14688efe8;
}



// FUNCTION 1413fe750 FUN_1413fe750 body=47 status=ok
// SIG undefined FUN_1413fe750(void)

longlong FUN_1413fe750(void)

{
  if (DAT_14688eff0 == 0) {
    FUN_141786a30(&DAT_14688eff0,&PTR_FUN_1463a82d0);
  }
  return DAT_14688eff0;
}



// FUNCTION 1413fe780 FUN_1413fe780 body=47 status=ok
// SIG undefined FUN_1413fe780(void)

longlong FUN_1413fe780(void)

{
  if (DAT_14688eff8 == 0) {
    FUN_141786a30(&DAT_14688eff8,&PTR_FUN_1463a8350);
  }
  return DAT_14688eff8;
}



// FUNCTION 1413fe7b0 FUN_1413fe7b0 body=47 status=ok
// SIG undefined FUN_1413fe7b0(void)

longlong FUN_1413fe7b0(void)

{
  if (DAT_14688f000 == 0) {
    FUN_141786a30(&DAT_14688f000,&PTR_FUN_1463a8410);
  }
  return DAT_14688f000;
}



// FUNCTION 1413fe7e0 FUN_1413fe7e0 body=47 status=ok
// SIG undefined FUN_1413fe7e0(void)

longlong FUN_1413fe7e0(void)

{
  if (DAT_14688f008 == 0) {
    FUN_141786a30(&DAT_14688f008,&PTR_FUN_1463a8450);
  }
  return DAT_14688f008;
}



// FUNCTION 1413fe810 FUN_1413fe810 body=47 status=ok
// SIG undefined FUN_1413fe810(void)

longlong FUN_1413fe810(void)

{
  if (DAT_14688f010 == 0) {
    FUN_141786a30(&DAT_14688f010,&PTR_FUN_1463a84e0);
  }
  return DAT_14688f010;
}



// FUNCTION 1413fe840 FUN_1413fe840 body=47 status=ok
// SIG undefined FUN_1413fe840(void)

longlong FUN_1413fe840(void)

{
  if (DAT_14688f018 == 0) {
    FUN_141786a30(&DAT_14688f018,&PTR_FUN_1463a85f0);
  }
  return DAT_14688f018;
}



// FUNCTION 1413fe870 FUN_1413fe870 body=47 status=ok
// SIG undefined FUN_1413fe870(void)

longlong FUN_1413fe870(void)

{
  if (DAT_14688f020 == 0) {
    FUN_141786a30(&DAT_14688f020,&PTR_FUN_1463a8700);
  }
  return DAT_14688f020;
}



// FUNCTION 1413fe8a0 FUN_1413fe8a0 body=47 status=ok
// SIG undefined FUN_1413fe8a0(void)

longlong FUN_1413fe8a0(void)

{
  if (DAT_14688f028 == 0) {
    FUN_141786a30(&DAT_14688f028,&PTR_FUN_1463a8740);
  }
  return DAT_14688f028;
}



// FUNCTION 1413fe8d0 FUN_1413fe8d0 body=47 status=ok
// SIG undefined FUN_1413fe8d0(void)

longlong FUN_1413fe8d0(void)

{
  if (DAT_14688f030 == 0) {
    FUN_141786a30(&DAT_14688f030,&PTR_FUN_1463a8780);
  }
  return DAT_14688f030;
}



// FUNCTION 1413fe900 FUN_1413fe900 body=47 status=ok
// SIG undefined FUN_1413fe900(void)

longlong FUN_1413fe900(void)

{
  if (DAT_14688f038 == 0) {
    FUN_141786a30(&DAT_14688f038,&PTR_FUN_1463a87c0);
  }
  return DAT_14688f038;
}



// FUNCTION 1413fe930 FUN_1413fe930 body=47 status=ok
// SIG undefined FUN_1413fe930(void)

longlong FUN_1413fe930(void)

{
  if (DAT_14688f040 == 0) {
    FUN_141786a30(&DAT_14688f040,&PTR_FUN_1463a8800);
  }
  return DAT_14688f040;
}



// FUNCTION 1413fe960 FUN_1413fe960 body=47 status=ok
// SIG undefined FUN_1413fe960(void)

longlong FUN_1413fe960(void)

{
  if (DAT_14688f048 == 0) {
    FUN_141786a30(&DAT_14688f048,&PTR_FUN_1463a8880);
  }
  return DAT_14688f048;
}



// FUNCTION 1413fe990 FUN_1413fe990 body=47 status=ok
// SIG undefined FUN_1413fe990(void)

longlong FUN_1413fe990(void)

{
  if (DAT_14688f050 == 0) {
    FUN_141786a30(&DAT_14688f050,&PTR_FUN_1463a8900);
  }
  return DAT_14688f050;
}



// FUNCTION 1413fe9c0 FUN_1413fe9c0 body=47 status=ok
// SIG undefined FUN_1413fe9c0(void)

longlong FUN_1413fe9c0(void)

{
  if (DAT_14688f058 == 0) {
    FUN_141786a30(&DAT_14688f058,&PTR_FUN_1463a8940);
  }
  return DAT_14688f058;
}



// FUNCTION 1413fe9f0 FUN_1413fe9f0 body=47 status=ok
// SIG undefined FUN_1413fe9f0(void)

longlong FUN_1413fe9f0(void)

{
  if (DAT_14688f060 == 0) {
    FUN_141786a30(&DAT_14688f060,&PTR_FUN_1463a8a00);
  }
  return DAT_14688f060;
}



// FUNCTION 1413fea20 FUN_1413fea20 body=47 status=ok
// SIG undefined FUN_1413fea20(void)

longlong FUN_1413fea20(void)

{
  if (DAT_14688f068 == 0) {
    FUN_141786a30(&DAT_14688f068,&PTR_FUN_1463a8ac0);
  }
  return DAT_14688f068;
}



// FUNCTION 1413fea50 FUN_1413fea50 body=47 status=ok
// SIG undefined FUN_1413fea50(void)

longlong FUN_1413fea50(void)

{
  if (DAT_14688f070 == 0) {
    FUN_141786a30(&DAT_14688f070,&PTR_FUN_1463a8b00);
  }
  return DAT_14688f070;
}



// FUNCTION 1413fea80 FUN_1413fea80 body=47 status=ok
// SIG undefined FUN_1413fea80(void)

longlong FUN_1413fea80(void)

{
  if (DAT_14688f078 == 0) {
    FUN_141786a30(&DAT_14688f078,&PTR_FUN_1463a8b80);
  }
  return DAT_14688f078;
}



// FUNCTION 1413feab0 FUN_1413feab0 body=47 status=ok
// SIG undefined FUN_1413feab0(void)

longlong FUN_1413feab0(void)

{
  if (DAT_14688f080 == 0) {
    FUN_141786a30(&DAT_14688f080,&PTR_FUN_1463a8c00);
  }
  return DAT_14688f080;
}



// FUNCTION 1413feae0 FUN_1413feae0 body=47 status=ok
// SIG undefined FUN_1413feae0(void)

longlong FUN_1413feae0(void)

{
  if (DAT_14688f088 == 0) {
    FUN_141786a30(&DAT_14688f088,&PTR_FUN_1463a8c90);
  }
  return DAT_14688f088;
}



// FUNCTION 1413feb10 FUN_1413feb10 body=47 status=ok
// SIG undefined FUN_1413feb10(void)

longlong FUN_1413feb10(void)

{
  if (DAT_14688f090 == 0) {
    FUN_141786a30(&DAT_14688f090,&PTR_FUN_1463a8cd0);
  }
  return DAT_14688f090;
}



// FUNCTION 1413feb40 FUN_1413feb40 body=47 status=ok
// SIG undefined FUN_1413feb40(void)

longlong FUN_1413feb40(void)

{
  if (DAT_14688f098 == 0) {
    FUN_141786a30(&DAT_14688f098,&PTR_FUN_1463a8d10);
  }
  return DAT_14688f098;
}



// FUNCTION 1413feb70 FUN_1413feb70 body=47 status=ok
// SIG undefined FUN_1413feb70(void)

longlong FUN_1413feb70(void)

{
  if (DAT_14688f0a0 == 0) {
    FUN_141786a30(&DAT_14688f0a0,&PTR_FUN_1463a8dd0);
  }
  return DAT_14688f0a0;
}



// FUNCTION 1413feba0 FUN_1413feba0 body=47 status=ok
// SIG undefined FUN_1413feba0(void)

longlong FUN_1413feba0(void)

{
  if (DAT_14688f0a8 == 0) {
    FUN_141786a30(&DAT_14688f0a8,&PTR_FUN_1463a8ec0);
  }
  return DAT_14688f0a8;
}



// FUNCTION 1413febd0 FUN_1413febd0 body=47 status=ok
// SIG undefined FUN_1413febd0(void)

longlong FUN_1413febd0(void)

{
  if (DAT_14688f0b0 == 0) {
    FUN_141786a30(&DAT_14688f0b0,&PTR_FUN_1463a8f70);
  }
  return DAT_14688f0b0;
}



// FUNCTION 1413fec00 FUN_1413fec00 body=47 status=ok
// SIG undefined FUN_1413fec00(void)

longlong FUN_1413fec00(void)

{
  if (DAT_14688f0b8 == 0) {
    FUN_141786a30(&DAT_14688f0b8,&PTR_FUN_1463a8fb0);
  }
  return DAT_14688f0b8;
}



// FUNCTION 1413fec30 FUN_1413fec30 body=47 status=ok
// SIG undefined FUN_1413fec30(void)

longlong FUN_1413fec30(void)

{
  if (DAT_14688f0c0 == 0) {
    FUN_141786a30(&DAT_14688f0c0,&PTR_FUN_1463a8ff0);
  }
  return DAT_14688f0c0;
}



// FUNCTION 1413fec60 FUN_1413fec60 body=47 status=ok
// SIG undefined FUN_1413fec60(void)

longlong FUN_1413fec60(void)

{
  if (DAT_14688f0c8 == 0) {
    FUN_141786a30(&DAT_14688f0c8,&PTR_FUN_1463a9030);
  }
  return DAT_14688f0c8;
}



// FUNCTION 1413fec90 FUN_1413fec90 body=47 status=ok
// SIG undefined FUN_1413fec90(void)

longlong FUN_1413fec90(void)

{
  if (DAT_14688f0d0 == 0) {
    FUN_141786a30(&DAT_14688f0d0,&PTR_FUN_1463a9070);
  }
  return DAT_14688f0d0;
}



// FUNCTION 1413fecc0 FUN_1413fecc0 body=47 status=ok
// SIG undefined FUN_1413fecc0(void)

longlong FUN_1413fecc0(void)

{
  if (DAT_14688f0d8 == 0) {
    FUN_141786a30(&DAT_14688f0d8,&PTR_FUN_1463a90b0);
  }
  return DAT_14688f0d8;
}



// FUNCTION 1413fecf0 FUN_1413fecf0 body=47 status=ok
// SIG undefined FUN_1413fecf0(void)

longlong FUN_1413fecf0(void)

{
  if (DAT_14688f0e0 == 0) {
    FUN_141786a30(&DAT_14688f0e0,&PTR_FUN_1463a90f0);
  }
  return DAT_14688f0e0;
}



// FUNCTION 1413fed20 FUN_1413fed20 body=53 status=ok
// SIG undefined FUN_1413fed20(void)

void FUN_1413fed20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144a0c2e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413fed60 FUN_1413fed60 body=47 status=ok
// SIG undefined FUN_1413fed60(void)

longlong FUN_1413fed60(void)

{
  if (DAT_14688f110 == 0) {
    FUN_141786a30(&DAT_14688f110,&PTR_FUN_1463aa280);
  }
  return DAT_14688f110;
}



// FUNCTION 1413fed90 FUN_1413fed90 body=47 status=ok
// SIG undefined FUN_1413fed90(void)

longlong FUN_1413fed90(void)

{
  if (DAT_14688f368 == 0) {
    FUN_141786440(&DAT_14688f368,&PTR_FUN_144a09a90);
  }
  return DAT_14688f368;
}



// FUNCTION 1413fedc0 FUN_1413fedc0 body=47 status=ok
// SIG undefined FUN_1413fedc0(void)

longlong FUN_1413fedc0(void)

{
  if (DAT_14688f118 == 0) {
    FUN_141786a30(&DAT_14688f118,&PTR_FUN_1463aa3c0);
  }
  return DAT_14688f118;
}



// FUNCTION 1413fedf0 FUN_1413fedf0 body=47 status=ok
// SIG undefined FUN_1413fedf0(void)

longlong FUN_1413fedf0(void)

{
  if (DAT_14688f120 == 0) {
    FUN_141786a30(&DAT_14688f120,&PTR_FUN_1463aa440);
  }
  return DAT_14688f120;
}



// FUNCTION 1413fee20 FUN_1413fee20 body=47 status=ok
// SIG undefined FUN_1413fee20(void)

longlong FUN_1413fee20(void)

{
  if (DAT_14688f128 == 0) {
    FUN_141786a30(&DAT_14688f128,&PTR_FUN_1463aa480);
  }
  return DAT_14688f128;
}



// FUNCTION 1413fee50 FUN_1413fee50 body=47 status=ok
// SIG undefined FUN_1413fee50(void)

longlong FUN_1413fee50(void)

{
  if (DAT_14688f160 == 0) {
    FUN_141786a30(&DAT_14688f160,&PTR_FUN_1463aa7d0);
  }
  return DAT_14688f160;
}



// FUNCTION 1413fee80 FUN_1413fee80 body=47 status=ok
// SIG undefined FUN_1413fee80(void)

longlong FUN_1413fee80(void)

{
  if (DAT_14688f168 == 0) {
    FUN_141786a30(&DAT_14688f168,&PTR_FUN_1463aa850);
  }
  return DAT_14688f168;
}



// FUNCTION 1413feeb0 FUN_1413feeb0 body=47 status=ok
// SIG undefined FUN_1413feeb0(void)

longlong FUN_1413feeb0(void)

{
  if (DAT_14688f170 == 0) {
    FUN_141786a30(&DAT_14688f170,&PTR_FUN_1463aa890);
  }
  return DAT_14688f170;
}



// FUNCTION 1413feee0 FUN_1413feee0 body=47 status=ok
// SIG undefined FUN_1413feee0(void)

longlong FUN_1413feee0(void)

{
  if (DAT_14688f178 == 0) {
    FUN_141786a30(&DAT_14688f178,&PTR_FUN_1463aa920);
  }
  return DAT_14688f178;
}



// FUNCTION 1413fef10 FUN_1413fef10 body=47 status=ok
// SIG undefined FUN_1413fef10(void)

longlong FUN_1413fef10(void)

{
  if (DAT_14688f180 == 0) {
    FUN_141786a30(&DAT_14688f180,&PTR_FUN_1463aa9b0);
  }
  return DAT_14688f180;
}



// FUNCTION 1413fef40 FUN_1413fef40 body=47 status=ok
// SIG undefined FUN_1413fef40(void)

longlong FUN_1413fef40(void)

{
  if (DAT_14688f188 == 0) {
    FUN_141786a30(&DAT_14688f188,&PTR_FUN_1463aa9f0);
  }
  return DAT_14688f188;
}



// FUNCTION 1413fef70 FUN_1413fef70 body=47 status=ok
// SIG undefined FUN_1413fef70(void)

longlong FUN_1413fef70(void)

{
  if (DAT_14688f190 == 0) {
    FUN_141786a30(&DAT_14688f190,&PTR_FUN_1463aaa30);
  }
  return DAT_14688f190;
}



// FUNCTION 1413fefa0 FUN_1413fefa0 body=47 status=ok
// SIG undefined FUN_1413fefa0(void)

longlong FUN_1413fefa0(void)

{
  if (DAT_14688f198 == 0) {
    FUN_141786a30(&DAT_14688f198,&PTR_FUN_1463aaaf0);
  }
  return DAT_14688f198;
}



// FUNCTION 1413fefd0 FUN_1413fefd0 body=47 status=ok
// SIG undefined FUN_1413fefd0(void)

longlong FUN_1413fefd0(void)

{
  if (DAT_14688f1a0 == 0) {
    FUN_141786a30(&DAT_14688f1a0,&PTR_FUN_1463aab30);
  }
  return DAT_14688f1a0;
}



// FUNCTION 1413ff000 FUN_1413ff000 body=47 status=ok
// SIG undefined FUN_1413ff000(void)

longlong FUN_1413ff000(void)

{
  if (DAT_14688f1a8 == 0) {
    FUN_141786a30(&DAT_14688f1a8,&PTR_FUN_1463aac20);
  }
  return DAT_14688f1a8;
}



// FUNCTION 1413ff030 FUN_1413ff030 body=47 status=ok
// SIG undefined FUN_1413ff030(void)

longlong FUN_1413ff030(void)

{
  if (DAT_14688f1b0 == 0) {
    FUN_141786a30(&DAT_14688f1b0,&PTR_FUN_1463aadb0);
  }
  return DAT_14688f1b0;
}



// FUNCTION 1413ff060 FUN_1413ff060 body=47 status=ok
// SIG undefined FUN_1413ff060(void)

longlong FUN_1413ff060(void)

{
  if (DAT_14688f1b8 == 0) {
    FUN_141786a30(&DAT_14688f1b8,&PTR_FUN_1463aadf0);
  }
  return DAT_14688f1b8;
}



// FUNCTION 1413ff090 FUN_1413ff090 body=47 status=ok
// SIG undefined FUN_1413ff090(void)

longlong FUN_1413ff090(void)

{
  if (DAT_14688f1c0 == 0) {
    FUN_141786a30(&DAT_14688f1c0,&PTR_FUN_1463aae70);
  }
  return DAT_14688f1c0;
}



// FUNCTION 1413ff0c0 FUN_1413ff0c0 body=47 status=ok
// SIG undefined FUN_1413ff0c0(void)

longlong FUN_1413ff0c0(void)

{
  if (DAT_14688f1c8 == 0) {
    FUN_141786a30(&DAT_14688f1c8,&PTR_FUN_1463ab020);
  }
  return DAT_14688f1c8;
}



// FUNCTION 1413ff0f0 FUN_1413ff0f0 body=47 status=ok
// SIG undefined FUN_1413ff0f0(void)

longlong FUN_1413ff0f0(void)

{
  if (DAT_14688f1d0 == 0) {
    FUN_141786a30(&DAT_14688f1d0,&PTR_FUN_1463ab0a0);
  }
  return DAT_14688f1d0;
}



// FUNCTION 1413ff120 FUN_1413ff120 body=47 status=ok
// SIG undefined FUN_1413ff120(void)

longlong FUN_1413ff120(void)

{
  if (DAT_14688f1d8 == 0) {
    FUN_141786a30(&DAT_14688f1d8,&PTR_FUN_1463ab120);
  }
  return DAT_14688f1d8;
}



// FUNCTION 1413ff150 FUN_1413ff150 body=47 status=ok
// SIG undefined FUN_1413ff150(void)

longlong FUN_1413ff150(void)

{
  if (DAT_14688f1e0 == 0) {
    FUN_141786a30(&DAT_14688f1e0,&PTR_FUN_1463ab1e0);
  }
  return DAT_14688f1e0;
}



// FUNCTION 1413ff180 FUN_1413ff180 body=47 status=ok
// SIG undefined FUN_1413ff180(void)

longlong FUN_1413ff180(void)

{
  if (DAT_14688f1e8 == 0) {
    FUN_141786a30(&DAT_14688f1e8,&PTR_FUN_1463ab260);
  }
  return DAT_14688f1e8;
}



// FUNCTION 1413ff1b0 FUN_1413ff1b0 body=47 status=ok
// SIG undefined FUN_1413ff1b0(void)

longlong FUN_1413ff1b0(void)

{
  if (DAT_14688f1f0 == 0) {
    FUN_141786a30(&DAT_14688f1f0,&PTR_FUN_1463ab2f0);
  }
  return DAT_14688f1f0;
}



// FUNCTION 1413ff1e0 FUN_1413ff1e0 body=47 status=ok
// SIG undefined FUN_1413ff1e0(void)

longlong FUN_1413ff1e0(void)

{
  if (DAT_14688f1f8 == 0) {
    FUN_141786a30(&DAT_14688f1f8,&PTR_FUN_1463ab380);
  }
  return DAT_14688f1f8;
}



// FUNCTION 1413ff210 FUN_1413ff210 body=47 status=ok
// SIG undefined FUN_1413ff210(void)

longlong FUN_1413ff210(void)

{
  if (DAT_14688f200 == 0) {
    FUN_141786a30(&DAT_14688f200,&PTR_FUN_1463ab400);
  }
  return DAT_14688f200;
}



// FUNCTION 1413ff240 FUN_1413ff240 body=47 status=ok
// SIG undefined FUN_1413ff240(void)

longlong FUN_1413ff240(void)

{
  if (DAT_14688f208 == 0) {
    FUN_141786a30(&DAT_14688f208,&PTR_FUN_1463ab440);
  }
  return DAT_14688f208;
}



// FUNCTION 1413ff270 FUN_1413ff270 body=47 status=ok
// SIG undefined FUN_1413ff270(void)

longlong FUN_1413ff270(void)

{
  if (DAT_14688f210 == 0) {
    FUN_141786a30(&DAT_14688f210,&PTR_FUN_1463ab480);
  }
  return DAT_14688f210;
}



// FUNCTION 1413ff2a0 FUN_1413ff2a0 body=47 status=ok
// SIG undefined FUN_1413ff2a0(void)

longlong FUN_1413ff2a0(void)

{
  if (DAT_14688f218 == 0) {
    FUN_141786a30(&DAT_14688f218,&PTR_FUN_1463ab510);
  }
  return DAT_14688f218;
}



// FUNCTION 1413ff2d0 FUN_1413ff2d0 body=47 status=ok
// SIG undefined FUN_1413ff2d0(void)

longlong FUN_1413ff2d0(void)

{
  if (DAT_14688f220 == 0) {
    FUN_141786a30(&DAT_14688f220,&PTR_FUN_1463ab590);
  }
  return DAT_14688f220;
}



// FUNCTION 1413ff300 FUN_1413ff300 body=47 status=ok
// SIG undefined FUN_1413ff300(void)

longlong FUN_1413ff300(void)

{
  if (DAT_14688f228 == 0) {
    FUN_141786a30(&DAT_14688f228,&PTR_FUN_1463ab660);
  }
  return DAT_14688f228;
}



// FUNCTION 1413ff330 FUN_1413ff330 body=47 status=ok
// SIG undefined FUN_1413ff330(void)

longlong FUN_1413ff330(void)

{
  if (DAT_14688f230 == 0) {
    FUN_141786a30(&DAT_14688f230,&PTR_FUN_1463ab6a0);
  }
  return DAT_14688f230;
}



// FUNCTION 1413ff360 FUN_1413ff360 body=47 status=ok
// SIG undefined FUN_1413ff360(void)

longlong FUN_1413ff360(void)

{
  if (DAT_14688f238 == 0) {
    FUN_141786a30(&DAT_14688f238,&PTR_FUN_1463ab6e0);
  }
  return DAT_14688f238;
}



// FUNCTION 1413ff390 FUN_1413ff390 body=47 status=ok
// SIG undefined FUN_1413ff390(void)

longlong FUN_1413ff390(void)

{
  if (DAT_14688f240 == 0) {
    FUN_141786a30(&DAT_14688f240,&PTR_FUN_1463ab760);
  }
  return DAT_14688f240;
}



// FUNCTION 1413ff3c0 FUN_1413ff3c0 body=47 status=ok
// SIG undefined FUN_1413ff3c0(void)

longlong FUN_1413ff3c0(void)

{
  if (DAT_14688f248 == 0) {
    FUN_141786a30(&DAT_14688f248,&PTR_FUN_1463ab7e0);
  }
  return DAT_14688f248;
}



// FUNCTION 1413ff3f0 FUN_1413ff3f0 body=47 status=ok
// SIG undefined FUN_1413ff3f0(void)

longlong FUN_1413ff3f0(void)

{
  if (DAT_14688f250 == 0) {
    FUN_141786a30(&DAT_14688f250,&PTR_FUN_1463ab820);
  }
  return DAT_14688f250;
}



// FUNCTION 1413ff420 FUN_1413ff420 body=47 status=ok
// SIG undefined FUN_1413ff420(void)

longlong FUN_1413ff420(void)

{
  if (DAT_14688f258 == 0) {
    FUN_141786a30(&DAT_14688f258,&PTR_FUN_1463ab860);
  }
  return DAT_14688f258;
}



// FUNCTION 1413ff450 FUN_1413ff450 body=47 status=ok
// SIG undefined FUN_1413ff450(void)

longlong FUN_1413ff450(void)

{
  if (DAT_14688f260 == 0) {
    FUN_141786a30(&DAT_14688f260,&PTR_FUN_1463ab910);
  }
  return DAT_14688f260;
}



// FUNCTION 1413ff480 FUN_1413ff480 body=47 status=ok
// SIG undefined FUN_1413ff480(void)

longlong FUN_1413ff480(void)

{
  if (DAT_14688f268 == 0) {
    FUN_141786a30(&DAT_14688f268,&PTR_FUN_1463ab9c0);
  }
  return DAT_14688f268;
}



// FUNCTION 1413ff4b0 FUN_1413ff4b0 body=47 status=ok
// SIG undefined FUN_1413ff4b0(void)

longlong FUN_1413ff4b0(void)

{
  if (DAT_14688f270 == 0) {
    FUN_141786a30(&DAT_14688f270,&PTR_FUN_1463aba00);
  }
  return DAT_14688f270;
}



// FUNCTION 1413ff4e0 FUN_1413ff4e0 body=47 status=ok
// SIG undefined FUN_1413ff4e0(void)

longlong FUN_1413ff4e0(void)

{
  if (DAT_14688f278 == 0) {
    FUN_141786a30(&DAT_14688f278,&PTR_FUN_1463aba40);
  }
  return DAT_14688f278;
}



// FUNCTION 1413ff510 FUN_1413ff510 body=47 status=ok
// SIG undefined FUN_1413ff510(void)

longlong FUN_1413ff510(void)

{
  if (DAT_14688f280 == 0) {
    FUN_141786a30(&DAT_14688f280,&PTR_FUN_1463abb00);
  }
  return DAT_14688f280;
}



// FUNCTION 1413ff540 FUN_1413ff540 body=47 status=ok
// SIG undefined FUN_1413ff540(void)

longlong FUN_1413ff540(void)

{
  if (DAT_14688f288 == 0) {
    FUN_141786a30(&DAT_14688f288,&PTR_FUN_1463abb40);
  }
  return DAT_14688f288;
}



// FUNCTION 1413ff570 FUN_1413ff570 body=47 status=ok
// SIG undefined FUN_1413ff570(void)

longlong FUN_1413ff570(void)

{
  if (DAT_14688f290 == 0) {
    FUN_141786a30(&DAT_14688f290,&PTR_FUN_1463abbc0);
  }
  return DAT_14688f290;
}



// FUNCTION 1413ff5a0 FUN_1413ff5a0 body=47 status=ok
// SIG undefined FUN_1413ff5a0(void)

longlong FUN_1413ff5a0(void)

{
  if (DAT_14688f298 == 0) {
    FUN_141786a30(&DAT_14688f298,&PTR_FUN_1463abc40);
  }
  return DAT_14688f298;
}



// FUNCTION 1413ff5d0 FUN_1413ff5d0 body=47 status=ok
// SIG undefined FUN_1413ff5d0(void)

longlong FUN_1413ff5d0(void)

{
  if (DAT_14688f2a0 == 0) {
    FUN_141786a30(&DAT_14688f2a0,&PTR_FUN_1463abc80);
  }
  return DAT_14688f2a0;
}



// FUNCTION 1413ff600 FUN_1413ff600 body=47 status=ok
// SIG undefined FUN_1413ff600(void)

longlong FUN_1413ff600(void)

{
  if (DAT_14688f2a8 == 0) {
    FUN_141786a30(&DAT_14688f2a8,&PTR_FUN_1463abd40);
  }
  return DAT_14688f2a8;
}



// FUNCTION 1413ff630 FUN_1413ff630 body=47 status=ok
// SIG undefined FUN_1413ff630(void)

longlong FUN_1413ff630(void)

{
  if (DAT_14688f2b0 == 0) {
    FUN_141786a30(&DAT_14688f2b0,&PTR_FUN_1463abd80);
  }
  return DAT_14688f2b0;
}



// FUNCTION 1413ff660 FUN_1413ff660 body=47 status=ok
// SIG undefined FUN_1413ff660(void)

longlong FUN_1413ff660(void)

{
  if (DAT_14688f2b8 == 0) {
    FUN_141786a30(&DAT_14688f2b8,&PTR_FUN_1463abdc0);
  }
  return DAT_14688f2b8;
}



// FUNCTION 1413ff690 FUN_1413ff690 body=47 status=ok
// SIG undefined FUN_1413ff690(void)

longlong FUN_1413ff690(void)

{
  if (DAT_14688f2c0 == 0) {
    FUN_141786a30(&DAT_14688f2c0,&PTR_FUN_1463abe40);
  }
  return DAT_14688f2c0;
}



// FUNCTION 1413ff6c0 FUN_1413ff6c0 body=47 status=ok
// SIG undefined FUN_1413ff6c0(void)

longlong FUN_1413ff6c0(void)

{
  if (DAT_14688f2c8 == 0) {
    FUN_141786a30(&DAT_14688f2c8,&PTR_FUN_1463abe80);
  }
  return DAT_14688f2c8;
}



// FUNCTION 1413ff6f0 FUN_1413ff6f0 body=47 status=ok
// SIG undefined FUN_1413ff6f0(void)

longlong FUN_1413ff6f0(void)

{
  if (DAT_14688f2d0 == 0) {
    FUN_141786a30(&DAT_14688f2d0,&PTR_FUN_1463abf40);
  }
  return DAT_14688f2d0;
}



// FUNCTION 1413ff720 FUN_1413ff720 body=47 status=ok
// SIG undefined FUN_1413ff720(void)

longlong FUN_1413ff720(void)

{
  if (DAT_14688f2d8 == 0) {
    FUN_141786a30(&DAT_14688f2d8,&PTR_FUN_1463abfd0);
  }
  return DAT_14688f2d8;
}



// FUNCTION 1413ff750 FUN_1413ff750 body=47 status=ok
// SIG undefined FUN_1413ff750(void)

longlong FUN_1413ff750(void)

{
  if (DAT_14688f2e0 == 0) {
    FUN_141786a30(&DAT_14688f2e0,&PTR_FUN_1463ac010);
  }
  return DAT_14688f2e0;
}



// FUNCTION 1413ff780 FUN_1413ff780 body=47 status=ok
// SIG undefined FUN_1413ff780(void)

longlong FUN_1413ff780(void)

{
  if (DAT_14688f2e8 == 0) {
    FUN_141786a30(&DAT_14688f2e8,&PTR_FUN_1463ac050);
  }
  return DAT_14688f2e8;
}



// FUNCTION 1413ff7b0 FUN_1413ff7b0 body=47 status=ok
// SIG undefined FUN_1413ff7b0(void)

longlong FUN_1413ff7b0(void)

{
  if (DAT_14688f2f0 == 0) {
    FUN_141786a30(&DAT_14688f2f0,&PTR_FUN_1463ac090);
  }
  return DAT_14688f2f0;
}



// FUNCTION 1413ff7e0 FUN_1413ff7e0 body=47 status=ok
// SIG undefined FUN_1413ff7e0(void)

longlong FUN_1413ff7e0(void)

{
  if (DAT_14688f2f8 == 0) {
    FUN_141786a30(&DAT_14688f2f8,&PTR_FUN_1463ac0d0);
  }
  return DAT_14688f2f8;
}



// FUNCTION 1413ff810 FUN_1413ff810 body=47 status=ok
// SIG undefined FUN_1413ff810(void)

longlong FUN_1413ff810(void)

{
  if (DAT_14688f300 == 0) {
    FUN_141786a30(&DAT_14688f300,&PTR_FUN_1463ac160);
  }
  return DAT_14688f300;
}



// FUNCTION 1413ff840 FUN_1413ff840 body=47 status=ok
// SIG undefined FUN_1413ff840(void)

longlong FUN_1413ff840(void)

{
  if (DAT_14688f308 == 0) {
    FUN_141786a30(&DAT_14688f308,&PTR_FUN_1463ac1e0);
  }
  return DAT_14688f308;
}



// FUNCTION 1413ff870 FUN_1413ff870 body=47 status=ok
// SIG undefined FUN_1413ff870(void)

longlong FUN_1413ff870(void)

{
  if (DAT_14688f310 == 0) {
    FUN_141786a30(&DAT_14688f310,&PTR_FUN_1463ac260);
  }
  return DAT_14688f310;
}



// FUNCTION 1413ff8a0 FUN_1413ff8a0 body=47 status=ok
// SIG undefined FUN_1413ff8a0(void)

longlong FUN_1413ff8a0(void)

{
  if (DAT_14688f318 == 0) {
    FUN_141786a30(&DAT_14688f318,&PTR_FUN_1463ac2a0);
  }
  return DAT_14688f318;
}



// FUNCTION 1413ff8d0 FUN_1413ff8d0 body=47 status=ok
// SIG undefined FUN_1413ff8d0(void)

longlong FUN_1413ff8d0(void)

{
  if (DAT_14688f320 == 0) {
    FUN_141786a30(&DAT_14688f320,&PTR_FUN_1463ac2e0);
  }
  return DAT_14688f320;
}



// FUNCTION 1413ff900 FUN_1413ff900 body=47 status=ok
// SIG undefined FUN_1413ff900(void)

longlong FUN_1413ff900(void)

{
  if (DAT_14688f328 == 0) {
    FUN_141786a30(&DAT_14688f328,&PTR_FUN_1463ac3b0);
  }
  return DAT_14688f328;
}



// FUNCTION 1413ff930 FUN_1413ff930 body=47 status=ok
// SIG undefined FUN_1413ff930(void)

longlong FUN_1413ff930(void)

{
  if (DAT_14688f330 == 0) {
    FUN_141786a30(&DAT_14688f330,&PTR_FUN_1463ac500);
  }
  return DAT_14688f330;
}



// FUNCTION 1413ff960 FUN_1413ff960 body=47 status=ok
// SIG undefined FUN_1413ff960(void)

longlong FUN_1413ff960(void)

{
  if (DAT_14688f338 == 0) {
    FUN_141786a30(&DAT_14688f338,&PTR_FUN_1463ac580);
  }
  return DAT_14688f338;
}



// FUNCTION 1413ff990 FUN_1413ff990 body=47 status=ok
// SIG undefined FUN_1413ff990(void)

longlong FUN_1413ff990(void)

{
  if (DAT_14688f340 == 0) {
    FUN_141786a30(&DAT_14688f340,&PTR_FUN_1463ac600);
  }
  return DAT_14688f340;
}



// FUNCTION 1413ff9c0 FUN_1413ff9c0 body=47 status=ok
// SIG undefined FUN_1413ff9c0(void)

longlong FUN_1413ff9c0(void)

{
  if (DAT_14688f348 == 0) {
    FUN_141786a30(&DAT_14688f348,&PTR_FUN_1463ac690);
  }
  return DAT_14688f348;
}



// FUNCTION 1413ff9f0 FUN_1413ff9f0 body=47 status=ok
// SIG undefined FUN_1413ff9f0(void)

longlong FUN_1413ff9f0(void)

{
  if (DAT_14688f350 == 0) {
    FUN_141786a30(&DAT_14688f350,&PTR_FUN_1463ac7a0);
  }
  return DAT_14688f350;
}



// FUNCTION 1413ffa20 FUN_1413ffa20 body=47 status=ok
// SIG undefined FUN_1413ffa20(void)

longlong FUN_1413ffa20(void)

{
  if (DAT_14688f358 == 0) {
    FUN_141786a30(&DAT_14688f358,&PTR_FUN_1463ac820);
  }
  return DAT_14688f358;
}



// FUNCTION 1413ffa50 FUN_1413ffa50 body=47 status=ok
// SIG undefined FUN_1413ffa50(void)

longlong FUN_1413ffa50(void)

{
  if (DAT_14688f360 == 0) {
    FUN_141786a30(&DAT_14688f360,&PTR_FUN_1463ac8e0);
  }
  return DAT_14688f360;
}



// FUNCTION 1413ffa80 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGAICharacter::GetPrivateStaticClass(void)

{
  if (DAT_14688ef48 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacter_CameraMan",&DAT_14688ef48,FUN_140447710,0x2320,
                  0x10000000,0,L"Game",&LAB_1413ffec0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1413f82e0
                  ,&LAB_140447700,0);
  }
  return DAT_14688ef48;
}



// FUNCTION 1413ffb30 FUN_1413ffb30 body=53 status=ok
// SIG undefined FUN_1413ffb30(void)

void FUN_1413ffb30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144a0c978;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1413ffb90 FUN_1413ffb90 body=162 status=ok
// SIG undefined FUN_1413ffb90(void)

longlong FUN_1413ffb90(void)

{
  if (DAT_14688f108 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacter_IronCub",&DAT_14688f108,FUN_141400dd0,0x2560,
                  0x10000000,0,L"Game",&LAB_1413fff20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1413ffd50
                  ,&LAB_140447700,0);
  }
  return DAT_14688f108;
}



// FUNCTION 1413ffc40 FUN_1413ffc40 body=47 status=ok
// SIG undefined FUN_1413ffc40(void)

longlong FUN_1413ffc40(void)

{
  if (DAT_14688f100 == 0) {
    FUN_141786440(&DAT_14688f100,&PTR_FUN_144a08630);
  }
  return DAT_14688f100;
}



// FUNCTION 1413ffc70 FUN_1413ffc70 body=47 status=ok
// SIG undefined FUN_1413ffc70(void)

longlong FUN_1413ffc70(void)

{
  if (DAT_14688f0f8 == 0) {
    FUN_141786a30(&DAT_14688f0f8,&PTR_FUN_1463aa040);
  }
  return DAT_14688f0f8;
}



// FUNCTION 1413ffcb0 FUN_1413ffcb0 body=47 status=ok
// SIG undefined FUN_1413ffcb0(void)

longlong FUN_1413ffcb0(void)

{
  if (DAT_14688ef60 == 0) {
    FUN_141786440(&DAT_14688ef60,&PTR_GetPrivateStaticClass_144a08cc0);
  }
  return DAT_14688ef60;
}



// FUNCTION 1413ffce0 FUN_1413ffce0 body=47 status=ok
// SIG undefined FUN_1413ffce0(void)

longlong FUN_1413ffce0(void)

{
  if (DAT_14688ef50 == 0) {
    FUN_141786a30(&DAT_14688ef50,&PTR_FUN_1463a7950);
  }
  return DAT_14688ef50;
}



// FUNCTION 1413ffd10 FUN_1413ffd10 body=47 status=ok
// SIG undefined FUN_1413ffd10(void)

longlong FUN_1413ffd10(void)

{
  if (DAT_14688ef58 == 0) {
    FUN_141786a30(&DAT_14688ef58,&PTR_FUN_1463a7990);
  }
  return DAT_14688ef58;
}



// FUNCTION 1413ffd50 FUN_1413ffd50 body=162 status=ok
// SIG undefined FUN_1413ffd50(void)

longlong FUN_1413ffd50(void)

{
  if (DAT_14688f0f0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacter_IronBear",&DAT_14688f0f0,FUN_141400da0,0x2480,
                  0x10000000,0,L"Game",&LAB_1413fff00,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1413f82e0
                  ,&LAB_140447700,0);
  }
  return DAT_14688f0f0;
}



// FUNCTION 1413ffe00 FUN_1413ffe00 body=162 status=ok
// SIG undefined FUN_1413ffe00(void)

longlong FUN_1413ffe00(void)

{
  if (DAT_14688f370 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacter_Player",&DAT_14688f370,
                  UNiagaraComponent::StaticRegisterNativesUNiagaraComponent,0x33d0,0x10000000,0,
                  L"Game",&LAB_1413fff40,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AUGAICharacter::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_14688f370;
}



// FUNCTION 1413fff60 FUN_1413fff60 body=57 status=ok
// SIG undefined FUN_1413fff60(void)

void FUN_1413fff60(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688edc8);
                    /* WARNING: Could not recover jumptable at 0x0001413fff96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1413fffa0 FUN_1413fffa0 body=70 status=ok
// SIG undefined FUN_1413fffa0(void)

undefined8 FUN_1413fffa0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = 0;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee58);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return local_res8;
}



// FUNCTION 1413ffff0 FUN_1413ffff0 body=57 status=ok
// SIG undefined FUN_1413ffff0(void)

void FUN_1413ffff0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee68);
                    /* WARNING: Could not recover jumptable at 0x000141400026. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400030 FUN_141400030 body=57 status=ok
// SIG undefined FUN_141400030(void)

void FUN_141400030(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee70);
                    /* WARNING: Could not recover jumptable at 0x000141400066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400070 FUN_141400070 body=62 status=ok
// SIG undefined FUN_141400070(void)

void FUN_141400070(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688edd0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1414000b0 FUN_1414000b0 body=60 status=ok
// SIG undefined FUN_1414000b0(void)

void FUN_1414000b0(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee78);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 141400120 FUN_141400120 body=55 status=ok
// SIG undefined FUN_141400120(void)

void FUN_141400120(void)

{
  undefined8 uVar1;
  
  if (DAT_14688ec80 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ec80 = GetStaticEnum(FUN_141401040,uVar1,L"ECameraAttachState");
  }
  return;
}



// FUNCTION 141400160 FUN_141400160 body=55 status=ok
// SIG undefined FUN_141400160(void)

void FUN_141400160(void)

{
  undefined8 uVar1;
  
  if (DAT_14688ec60 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ec60 = GetStaticEnum(FUN_141401070,uVar1,L"EIronBearDamageLevel");
  }
  return;
}



// FUNCTION 1414001a0 FUN_1414001a0 body=55 status=ok
// SIG undefined FUN_1414001a0(void)

void FUN_1414001a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14688ec70 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ec70 = GetStaticEnum(FUN_1414010a0,uVar1,L"EIronBearExitReason");
  }
  return;
}



// FUNCTION 1414001e0 FUN_1414001e0 body=55 status=ok
// SIG undefined FUN_1414001e0(void)

void FUN_1414001e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14688ec78 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ec78 = GetStaticEnum(FUN_1414010d0,uVar1,L"EIronBearHardPointOrientation");
  }
  return;
}



// FUNCTION 141400220 FUN_141400220 body=55 status=ok
// SIG undefined FUN_141400220(void)

void FUN_141400220(void)

{
  undefined8 uVar1;
  
  if (DAT_14688ec68 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ec68 = GetStaticEnum(FUN_141401100,uVar1,L"EIronBearSpawnStyle");
  }
  return;
}



// FUNCTION 141400260 FUN_141400260 body=60 status=ok
// SIG undefined FUN_141400260(void)

void FUN_141400260(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688edd8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1414002a0 FUN_1414002a0 body=71 status=ok
// SIG undefined FUN_1414002a0(void)

undefined4 FUN_1414002a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res8 [2];
  
  lVar1 = *param_1;
  local_res8[0] = 0;
  uVar2 = FUN_14178ac60(0,DAT_14688ede0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res8);
  return local_res8[0];
}



// FUNCTION 1414002f0 FUN_1414002f0 body=70 status=ok
// SIG undefined FUN_1414002f0(void)

undefined8 FUN_1414002f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = 0;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee80);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return local_res8;
}



// FUNCTION 141400340 FUN_141400340 body=70 status=ok
// SIG undefined FUN_141400340(void)

undefined8 FUN_141400340(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = 0;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee88);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return local_res8;
}



// FUNCTION 141400390 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGAICharacter::GetPrivateStaticClass(void)

{
  if (DAT_14688ef68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakCharacter_Default",&DAT_14688ef68,FUN_141400d70,0x2320,
                  0x10000000,0,L"Game",&LAB_1413ffee0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,FUN_1413f82e0
                  ,&LAB_140447700,0);
  }
  return DAT_14688ef68;
}



// FUNCTION 141400440 FUN_141400440 body=75 status=ok
// SIG undefined FUN_141400440(void)

undefined8 FUN_141400440(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_10 = 0;
  local_18 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ede8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return local_10;
}



// FUNCTION 141400490 FUN_141400490 body=6 status=ok
// SIG undefined FUN_141400490(void)

undefined8 FUN_141400490(void)

{
  return 0xf9bd8a7a;
}



// FUNCTION 1414004a0 FUN_1414004a0 body=6 status=ok
// SIG undefined FUN_1414004a0(void)

undefined8 FUN_1414004a0(void)

{
  return 0x495347d;
}



// FUNCTION 1414004b0 FUN_1414004b0 body=6 status=ok
// SIG undefined FUN_1414004b0(void)

undefined8 FUN_1414004b0(void)

{
  return 0x3cf6b55e;
}



// FUNCTION 1414004c0 FUN_1414004c0 body=69 status=ok
// SIG undefined FUN_1414004c0(void)

bool FUN_1414004c0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char local_res8 [8];
  
  lVar1 = *param_1;
  local_res8[0] = '\0';
  uVar2 = FUN_14178ac60(param_1,DAT_14688edf0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res8);
  return local_res8[0] != '\0';
}



// FUNCTION 141400510 FUN_141400510 body=57 status=ok
// SIG undefined FUN_141400510(void)

void FUN_141400510(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688edf8);
                    /* WARNING: Could not recover jumptable at 0x000141400546. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400550 FUN_141400550 body=57 status=ok
// SIG undefined FUN_141400550(void)

void FUN_141400550(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee00);
                    /* WARNING: Could not recover jumptable at 0x000141400586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400590 FUN_141400590 body=66 status=ok
// SIG undefined FUN_141400590(void)

void FUN_141400590(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eea0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 1414006e0 FUN_1414006e0 body=57 status=ok
// SIG undefined FUN_1414006e0(void)

void FUN_1414006e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee08);
                    /* WARNING: Could not recover jumptable at 0x000141400716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400720 FUN_141400720 body=57 status=ok
// SIG undefined FUN_141400720(void)

void FUN_141400720(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee10);
                    /* WARNING: Could not recover jumptable at 0x000141400756. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400760 FUN_141400760 body=57 status=ok
// SIG undefined FUN_141400760(void)

void FUN_141400760(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee18);
                    /* WARNING: Could not recover jumptable at 0x000141400796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414007a0 FUN_1414007a0 body=57 status=ok
// SIG undefined FUN_1414007a0(void)

void FUN_1414007a0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee20);
                    /* WARNING: Could not recover jumptable at 0x0001414007d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414007e0 FUN_1414007e0 body=61 status=ok
// SIG undefined FUN_1414007e0(void)

void FUN_1414007e0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee28);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 141400820 FUN_141400820 body=57 status=ok
// SIG undefined FUN_141400820(void)

void FUN_141400820(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee40);
                    /* WARNING: Could not recover jumptable at 0x000141400856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400860 FUN_141400860 body=61 status=ok
// SIG undefined FUN_141400860(void)

void FUN_141400860(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee30);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414008a0 FUN_1414008a0 body=60 status=ok
// SIG undefined FUN_1414008a0(void)

void FUN_1414008a0(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee38);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1414008e0 FUN_1414008e0 body=57 status=ok
// SIG undefined FUN_1414008e0(void)

void FUN_1414008e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eea8);
                    /* WARNING: Could not recover jumptable at 0x000141400916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400920 FUN_141400920 body=57 status=ok
// SIG undefined FUN_141400920(void)

void FUN_141400920(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ed78);
                    /* WARNING: Could not recover jumptable at 0x000141400956. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400960 FUN_141400960 body=60 status=ok
// SIG undefined FUN_141400960(void)

void FUN_141400960(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eeb0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1414009a0 FUN_1414009a0 body=60 status=ok
// SIG undefined FUN_1414009a0(void)

void FUN_1414009a0(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eeb8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1414009e0 FUN_1414009e0 body=57 status=ok
// SIG undefined FUN_1414009e0(void)

void FUN_1414009e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eec0);
                    /* WARNING: Could not recover jumptable at 0x000141400a16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400a20 FUN_141400a20 body=57 status=ok
// SIG undefined FUN_141400a20(void)

void FUN_141400a20(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eec8);
                    /* WARNING: Could not recover jumptable at 0x000141400a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400a60 FUN_141400a60 body=61 status=ok
// SIG undefined FUN_141400a60(void)

void FUN_141400a60(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eed0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 141400aa0 FUN_141400aa0 body=57 status=ok
// SIG undefined FUN_141400aa0(void)

void FUN_141400aa0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eed8);
                    /* WARNING: Could not recover jumptable at 0x000141400ad6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400ae0 FUN_141400ae0 body=65 status=ok
// SIG undefined FUN_141400ae0(void)

void FUN_141400ae0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_18 [2];
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18[0] = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eee0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_18);
  return;
}



// FUNCTION 141400b30 FUN_141400b30 body=60 status=ok
// SIG undefined FUN_141400b30(void)

void FUN_141400b30(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eee8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 141400b70 FUN_141400b70 body=57 status=ok
// SIG undefined FUN_141400b70(void)

void FUN_141400b70(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eef0);
                    /* WARNING: Could not recover jumptable at 0x000141400ba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400bb0 FUN_141400bb0 body=57 status=ok
// SIG undefined FUN_141400bb0(void)

void FUN_141400bb0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688eef8);
                    /* WARNING: Could not recover jumptable at 0x000141400be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400bf0 FUN_141400bf0 body=57 status=ok
// SIG undefined FUN_141400bf0(void)

void FUN_141400bf0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ef00);
                    /* WARNING: Could not recover jumptable at 0x000141400c26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400c30 FUN_141400c30 body=57 status=ok
// SIG undefined FUN_141400c30(void)

void FUN_141400c30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ef08);
                    /* WARNING: Could not recover jumptable at 0x000141400c66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400c70 FUN_141400c70 body=60 status=ok
// SIG undefined FUN_141400c70(void)

void FUN_141400c70(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10 [24];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ef10);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 141400cb0 FUN_141400cb0 body=57 status=ok
// SIG undefined FUN_141400cb0(void)

void FUN_141400cb0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ef18);
                    /* WARNING: Could not recover jumptable at 0x000141400ce6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400cf0 FUN_141400cf0 body=57 status=ok
// SIG undefined FUN_141400cf0(void)

void FUN_141400cf0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ef20);
                    /* WARNING: Could not recover jumptable at 0x000141400d26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400d30 FUN_141400d30 body=57 status=ok
// SIG undefined FUN_141400d30(void)

void FUN_141400d30(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14688ee48);
                    /* WARNING: Could not recover jumptable at 0x000141400d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141400d70 FUN_141400d70 body=34 status=ok
// SIG undefined FUN_141400d70(void)

void FUN_141400d70(void)

{
  undefined8 uVar1;
  
  uVar1 = AUGAICharacter::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnStartInjured_Common_144a0c1b0,1);
  return;
}



// FUNCTION 141400da0 FUN_141400da0 body=34 status=ok
// SIG undefined FUN_141400da0(void)

void FUN_141400da0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413ffd50();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_BeginHardPointAction_144a0c400,0x1a);
  return;
}



// FUNCTION 141400dd0 FUN_141400dd0 body=34 status=ok
// SIG undefined FUN_141400dd0(void)

void FUN_141400dd0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413ffb90();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_UpdateOutlineOnWeaponChange_144a0c5a0,1);
  return;
}



// FUNCTION 141400e00 StaticRegisterNativesUNiagaraComponent body=34 status=ok
// SIG undefined StaticRegisterNativesUNiagaraComponent(void)

void UNiagaraComponent::StaticRegisterNativesUNiagaraComponent(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1413ffe00();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddHUDSkillIconWidget_144a0ca90,0x3c);
  return;
}



// FUNCTION 141400e30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ef30 == 0) {
    uVar1 = FUN_141400490();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ef30 = GetStaticStruct(FUN_141401130,uVar2,L"CameraManViewPoint",0x18,uVar1);
  }
  return;
}



// FUNCTION 141400e90 FUN_141400e90 body=82 status=ok
// SIG undefined FUN_141400e90(void)

void FUN_141400e90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688ef98 == 0) {
    uVar1 = FUN_1414004a0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688ef98 = GetStaticStruct(FUN_141401160,uVar2,L"IronBearHardPointData",0x20,uVar1);
  }
  return;
}



// FUNCTION 141400ef0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14688f150 == 0) {
    uVar1 = FUN_1414004b0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_14688f150 = GetStaticStruct(FUN_141401190,uVar2,L"PlayerPainSoundData",0x10,uVar1);
  }
  return;
}



// FUNCTION 141400f50 FUN_141400f50 body=47 status=ok
// SIG undefined FUN_141400f50(void)

longlong FUN_141400f50(void)

{
  if (DAT_14688ef40 == 0) {
    FUN_141786440(&DAT_14688ef40,&PTR_GetPrivateStaticClass_144a06220);
  }
  return DAT_14688ef40;
}



// FUNCTION 141400f80 FUN_141400f80 body=47 status=ok
// SIG undefined FUN_141400f80(void)

longlong FUN_141400f80(void)

{
  if (DAT_14688f138 == 0) {
    FUN_141786a30(&DAT_14688f138,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463aa600);
  }
  return DAT_14688f138;
}



// FUNCTION 141400fb0 FUN_141400fb0 body=47 status=ok
// SIG undefined FUN_141400fb0(void)

longlong FUN_141400fb0(void)

{
  if (DAT_14688f148 == 0) {
    FUN_141786a30(&DAT_14688f148,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463aa680);
  }
  return DAT_14688f148;
}



// FUNCTION 141400fe0 FUN_141400fe0 body=47 status=ok
// SIG undefined FUN_141400fe0(void)

longlong FUN_141400fe0(void)

{
  if (DAT_14688f140 == 0) {
    FUN_141786a30(&DAT_14688f140,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463aa640);
  }
  return DAT_14688f140;
}



// FUNCTION 141401010 FUN_141401010 body=47 status=ok
// SIG undefined FUN_141401010(void)

longlong FUN_141401010(void)

{
  if (DAT_14688f130 == 0) {
    FUN_141786a30(&DAT_14688f130,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463aa540);
  }
  return DAT_14688f130;
}



// FUNCTION 141401040 FUN_141401040 body=47 status=ok
// SIG undefined FUN_141401040(void)

longlong FUN_141401040(void)

{
  if (DAT_14688ef28 == 0) {
    FUN_1417866a0(&DAT_14688ef28,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463ade70);
  }
  return DAT_14688ef28;
}



// FUNCTION 141401070 FUN_141401070 body=47 status=ok
// SIG undefined FUN_141401070(void)

longlong FUN_141401070(void)

{
  if (DAT_14688ef78 == 0) {
    FUN_1417866a0(&DAT_14688ef78,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463adec0);
  }
  return DAT_14688ef78;
}



// FUNCTION 1414010a0 FUN_1414010a0 body=47 status=ok
// SIG undefined FUN_1414010a0(void)

longlong FUN_1414010a0(void)

{
  if (DAT_14688ef88 == 0) {
    FUN_1417866a0(&DAT_14688ef88,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463adf60);
  }
  return DAT_14688ef88;
}



// FUNCTION 1414010d0 FUN_1414010d0 body=47 status=ok
// SIG undefined FUN_1414010d0(void)

longlong FUN_1414010d0(void)

{
  if (DAT_14688ef90 == 0) {
    FUN_1417866a0(&DAT_14688ef90,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463adfb0);
  }
  return DAT_14688ef90;
}



// FUNCTION 141401100 FUN_141401100 body=47 status=ok
// SIG undefined FUN_141401100(void)

longlong FUN_141401100(void)

{
  if (DAT_14688ef80 == 0) {
    FUN_1417866a0(&DAT_14688ef80,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463adf10);
  }
  return DAT_14688ef80;
}



// FUNCTION 141401130 FUN_141401130 body=47 status=ok
// SIG undefined FUN_141401130(void)

longlong FUN_141401130(void)

{
  if (DAT_14688ef38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688ef38,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463a7690);
  }
  return DAT_14688ef38;
}



// FUNCTION 141401160 FUN_141401160 body=47 status=ok
// SIG undefined FUN_141401160(void)

longlong FUN_141401160(void)

{
  if (DAT_14688efa0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688efa0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463a7d40);
  }
  return DAT_14688efa0;
}



// FUNCTION 141401190 FUN_141401190 body=47 status=ok
// SIG undefined FUN_141401190(void)

longlong FUN_141401190(void)

{
  if (DAT_14688f158 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14688f158,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463aa740);
  }
  return DAT_14688f158;
}



// FUNCTION 1414011c0 FUN_1414011c0 body=48 status=ok
// SIG undefined FUN_1414011c0(void)

void FUN_1414011c0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0xcc0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414011f0 FUN_1414011f0 body=128 status=ok
// SIG undefined FUN_1414011f0(void)

void FUN_1414011f0(undefined8 param_1,longlong param_2)

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
  FUN_140e16430(param_1,local_res10);
  return;
}



// FUNCTION 141401270 execHandleNgheDaDestroyed body=128 status=ok
// SIG undefined execHandleNgheDaDestroyed(void)

void ATDMGameplayBase::execHandleNgheDaDestroyed(undefined8 param_1,longlong param_2)

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
  HandleNgheDaDestroyed(param_1,local_res10);
  return;
}



// FUNCTION 1414012f0 FUN_1414012f0 body=43 status=ok
// SIG undefined FUN_1414012f0(void)

void FUN_1414012f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e1a9a0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141401320 FUN_141401320 body=43 status=ok
// SIG undefined FUN_141401320(void)

void FUN_141401320(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e1ae50();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414013b0 FUN_1414013b0 body=127 status=ok
// SIG undefined FUN_1414013b0(void)

void FUN_1414013b0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0xca0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141401430 FUN_141401430 body=122 status=ok
// SIG undefined FUN_141401430(void)

void FUN_141401430(longlong *param_1,longlong param_2)

{
  undefined1 local_res8 [8];
  
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
  (**(code **)(*param_1 + 0xce8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1414014d0 FUN_1414014d0 body=263 status=ok
// SIG undefined FUN_1414014d0(void)

void FUN_1414014d0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_18 [4];
  
  local_18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
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
  FUN_140e1da90(param_1,local_18[0],local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1414015e0 execHandleNgheDaDestroyed body=128 status=ok
// SIG undefined execHandleNgheDaDestroyed(void)

void ATDMGameplayBase::execHandleNgheDaDestroyed(undefined8 param_1,longlong param_2)

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
  HandleNgheDaDestroyed(param_1,local_res10);
  return;
}



// FUNCTION 141401660 FUN_141401660 body=324 status=ok
// SIG undefined FUN_141401660(void)

void FUN_141401660(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 local_res10 [16];
  int local_res20 [2];
  int local_28 [2];
  undefined8 local_20;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar1 = local_res20[0] != 0;
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140e1df50(param_1,local_res10[0],local_20,bVar1,local_28[0] != 0);
  return;
}



// FUNCTION 1414017d0 FUN_1414017d0 body=166 status=ok
// SIG undefined FUN_1414017d0(void)

void FUN_1414017d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined1 local_res8 [8];
  
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
  cVar1 = (**(code **)(*param_1 + 0xcb0))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ExitIronBear_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xcb8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141401880 FUN_141401880 body=44 status=ok
// SIG undefined FUN_141401880(void)

void FUN_141401880(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e21bd0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414018b0 FUN_1414018b0 body=144 status=ok
// SIG undefined FUN_1414018b0(void)

void FUN_1414018b0(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_140a64690(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141401940 FUN_141401940 body=134 status=ok
// SIG undefined FUN_141401940(void)

void FUN_141401940(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
  
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
  uVar1 = FUN_140a64730(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414019d0 FUN_1414019d0 body=45 status=ok
// SIG undefined FUN_1414019d0(void)

void FUN_1414019d0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140a649c0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141401a00 FUN_141401a00 body=499 status=ok
// SIG undefined FUN_141401a00(void)

void FUN_141401a00(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_40);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
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
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_res18[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar4 = local_res10;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar5 = local_res18;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar6 = &local_48;
  if (puVar1 != (undefined8 *)0x0) {
    puVar6 = puVar1;
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar3 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = FUN_140e240e0(param_1,local_40,puVar4,puVar5,puVar6,puVar3);
  *param_3 = uVar2;
  return;
}



// FUNCTION 141401c00 FUN_141401c00 body=44 status=ok
// SIG undefined FUN_141401c00(void)

void FUN_141401c00(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140a66090();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141401c30 FUN_141401c30 body=143 status=ok
// SIG undefined FUN_141401c30(void)

void FUN_141401c30(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_140e25260(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141401ce0 FUN_141401ce0 body=43 status=ok
// SIG undefined FUN_141401ce0(void)

void FUN_141401ce0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e26250();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141401d10 FUN_141401d10 body=43 status=ok
// SIG undefined FUN_141401d10(void)

void FUN_141401d10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e26330();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141401d40 FUN_141401d40 body=181 status=ok
// SIG undefined FUN_141401d40(void)

void FUN_141401d40(longlong *param_1,longlong param_2)

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
  cVar1 = (**(code **)(*param_1 + 0xcf0))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"InterruptAndPlayNewEmote_Validate");
    return;
  }
  (**(code **)(*param_1 + 0xcf8))(param_1,local_res8);
  return;
}



// FUNCTION 141401e40 FUN_141401e40 body=190 status=ok
// SIG undefined FUN_141401e40(void)

void FUN_141401e40(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_140a67990(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141401f00 FUN_141401f00 body=133 status=ok
// SIG undefined FUN_141401f00(void)

void FUN_141401f00(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
  
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
  uVar1 = FUN_140a67a70(param_1,local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141401f90 FUN_141401f90 body=43 status=ok
// SIG undefined FUN_141401f90(void)

void FUN_141401f90(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140e27e00();
  *param_3 = uVar1;
  return;
}



// FUNCTION 141401fc0 FUN_141401fc0 body=142 status=ok
// SIG undefined FUN_141401fc0(void)

void FUN_141401fc0(longlong param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  local_res10 = local_res8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_142dafbc0(param_1 + 0x2b00,&local_res10);
  return;
}



// FUNCTION 141402050 FUN_141402050 body=195 status=ok
// SIG undefined FUN_141402050(void)

void FUN_141402050(longlong *param_1,longlong param_2)

{
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
  (**(code **)(*param_1 + 0xd50))(param_1,local_res10,local_res8);
  return;
}


