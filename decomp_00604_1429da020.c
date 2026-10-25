// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1429da020 FUN_1429da020 body=130 status=ok
// SIG undefined FUN_1429da020(void)

void FUN_1429da020(undefined8 param_1,longlong param_2)

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
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1429da0b0 execLockAIResources body=194 status=ok
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
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 1429da180 FUN_1429da180 body=138 status=ok
// SIG undefined FUN_1429da180(void)

void FUN_1429da180(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,puVar1);
  return;
}



// FUNCTION 1429da210 execLockAIResources body=194 status=ok
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
  FUN_1426a8b90(param_1,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 1429da2e0 execSetConstrainedComponents body=322 status=ok
// SIG undefined execSetConstrainedComponents(void)

void UPhysicsConstraintComponent::execSetConstrainedComponents(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
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
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
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
  FUN_1426eaa80(param_1,local_10,local_res20,local_18,local_res10);
  return;
}



// FUNCTION 1429da430 execSetConstraintReferenceFrame body=277 status=ok
// SIG undefined execSetConstraintReferenceFrame(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UPhysicsConstraintComponent::execSetConstraintReferenceFrame
               (undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = _DAT_146b25150 & _DAT_146b25160;
  uStack_24 = uRam0000000146b25154 & uRam0000000146b25164;
  uStack_20 = uRam0000000146b25158 & uRam0000000146b25168;
  uStack_1c = uRam0000000146b2515c & uRam0000000146b2516c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146b2515c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar1 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,local_58[0],puVar1);
  return;
}



// FUNCTION 1429da550 execSetConstraintReferenceOrientation body=288 status=ok
// SIG undefined execSetConstraintReferenceOrientation(void)

void UPhysicsConstraintComponent::execSetConstraintReferenceOrientation
               (undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res10 [8];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_28;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar2 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,local_res10[0],puVar1,puVar2);
  return;
}



// FUNCTION 1429da670 execSetConstraintReferencePosition body=202 status=ok
// SIG undefined execSetConstraintReferencePosition(void)

void UPhysicsConstraintComponent::execSetConstraintReferencePosition
               (undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res10 [8];
  undefined1 local_18 [16];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1426eab20(param_1,local_res10[0],puVar1);
  return;
}



// FUNCTION 1429da740 FUN_1429da740 body=130 status=ok
// SIG undefined FUN_1429da740(void)

void FUN_1429da740(undefined8 param_1,longlong param_2)

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
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1429da7d0 FUN_1429da7d0 body=196 status=ok
// SIG undefined FUN_1429da7d0(void)

void FUN_1429da7d0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  undefined4 local_res20 [2];
  
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
  FUN_1426eb060(param_1,bVar1,local_res20[0]);
  return;
}



// FUNCTION 1429da8a0 FUN_1429da8a0 body=258 status=ok
// SIG undefined FUN_1429da8a0(void)

void FUN_1429da8a0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
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
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,local_18[0],local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1429da9b0 FUN_1429da9b0 body=275 status=ok
// SIG undefined FUN_1429da9b0(void)

void FUN_1429da9b0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res20 [2];
  int local_28 [4];
  
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
  bVar2 = local_res20[0] != 0;
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
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,bVar1,bVar2,local_28[0] != 0);
  return;
}



// FUNCTION 1429daad0 FUN_1429daad0 body=138 status=ok
// SIG undefined FUN_1429daad0(void)

void FUN_1429daad0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,puVar1);
  return;
}



// FUNCTION 1429dab60 FUN_1429dab60 body=275 status=ok
// SIG undefined FUN_1429dab60(void)

void FUN_1429dab60(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res20 [2];
  int local_28 [4];
  
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
  bVar2 = local_res20[0] != 0;
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
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,bVar1,bVar2,local_28[0] != 0);
  return;
}



// FUNCTION 1429dac80 FUN_1429dac80 body=138 status=ok
// SIG undefined FUN_1429dac80(void)

void FUN_1429dac80(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar1 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,puVar1);
  return;
}



// FUNCTION 1429dad10 FUN_1429dad10 body=187 status=ok
// SIG undefined FUN_1429dad10(void)

void FUN_1429dad10(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1426eb120(param_1,local_res10[0],local_res20[0]);
  return;
}



// FUNCTION 1429dadd0 FUN_1429dadd0 body=187 status=ok
// SIG undefined FUN_1429dadd0(void)

void FUN_1429dadd0(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1426eb140(param_1,local_res10[0],local_res20[0]);
  return;
}



// FUNCTION 1429dae90 FUN_1429dae90 body=187 status=ok
// SIG undefined FUN_1429dae90(void)

void FUN_1429dae90(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  
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
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1426eb160(param_1,local_res10[0],local_res20[0]);
  return;
}



// FUNCTION 1429daf50 FUN_1429daf50 body=130 status=ok
// SIG undefined FUN_1429daf50(void)

void FUN_1429daf50(undefined8 param_1,longlong param_2)

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
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1429dafe0 execLockAIResources body=194 status=ok
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
  UMediumSkipWidget::CanWorkWhenGamePaused(param_1,bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 1429db0b0 FUN_1429db0b0 body=128 status=ok
// SIG undefined FUN_1429db0b0(void)

void FUN_1429db0b0(undefined8 param_1,longlong param_2)

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
  FUN_1426cdaa0(param_1,local_res10);
  return;
}



// FUNCTION 1429db130 FUN_1429db130 body=123 status=ok
// SIG undefined FUN_1429db130(void)

void FUN_1429db130(undefined8 param_1,longlong param_2)

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
  FUN_1426cdb10(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429db1d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintGeneratedClass::GetPrivateStaticClass(void)

{
  if (DAT_146b25710 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PhysicsThrusterComponent",&DAT_146b25710,FUN_140447710,0x2e0,
                  0x10000000,0,L"Engine",&LAB_1429dc370,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146b25710;
}



// FUNCTION 1429db290 FUN_1429db290 body=47 status=ok
// SIG undefined FUN_1429db290(void)

longlong FUN_1429db290(void)

{
  if (DAT_146b25728 == 0) {
    FUN_141786440(&DAT_146b25728,&PTR_thunk_FUN_1429dcb20_1452fbea0);
  }
  return DAT_146b25728;
}



// FUNCTION 1429db2c0 FUN_1429db2c0 body=47 status=ok
// SIG undefined FUN_1429db2c0(void)

longlong FUN_1429db2c0(void)

{
  if (DAT_146b25718 == 0) {
    FUN_141786a30(&DAT_146b25718,&PTR_FUN_146623f30);
  }
  return DAT_146b25718;
}



// FUNCTION 1429db2f0 FUN_1429db2f0 body=47 status=ok
// SIG undefined FUN_1429db2f0(void)

longlong FUN_1429db2f0(void)

{
  if (DAT_146b25720 == 0) {
    FUN_141786a30(&DAT_146b25720,&PTR_FUN_146624030);
  }
  return DAT_146b25720;
}



// FUNCTION 1429db320 StaticClass body=151 status=ok
// SIG undefined StaticClass(void)

longlong UPhysicsConstraintTemplate::StaticClass(void)

{
  if (DAT_146b255f8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PhysicsConstraintTemplate",&DAT_146b255f8,FUN_140447710,0x2f8,
                  0x10000000,0,L"Engine",&LAB_1429dc2f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b255f8;
}



// FUNCTION 1429db3d0 FUN_1429db3d0 body=162 status=ok
// SIG undefined FUN_1429db3d0(void)

longlong FUN_1429db3d0(void)

{
  if (DAT_146b25748 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PlanarReflection",&DAT_146b25748,FUN_1429dce80,0x470,
                  0x10000000,0,L"Engine",&LAB_1429dc2b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_1429ff000,&LAB_140447700,0);
  }
  return DAT_146b25748;
}



// FUNCTION 1429db480 FUN_1429db480 body=47 status=ok
// SIG undefined FUN_1429db480(void)

longlong FUN_1429db480(void)

{
  if (DAT_146b25740 == 0) {
    FUN_141786440(&DAT_146b25740,&PTR_FUN_1452fc080);
  }
  return DAT_146b25740;
}



// FUNCTION 1429db4b0 FUN_1429db4b0 body=47 status=ok
// SIG undefined FUN_1429db4b0(void)

longlong FUN_1429db4b0(void)

{
  if (DAT_146b25738 == 0) {
    FUN_141786a30(&DAT_146b25738,&PTR_FUN_146624240);
  }
  return DAT_146b25738;
}



// FUNCTION 1429db4f0 FUN_1429db4f0 body=162 status=ok
// SIG undefined FUN_1429db4f0(void)

longlong FUN_1429db4f0(void)

{
  if (DAT_146b25758 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PlanarReflectionComponent",&DAT_146b25758,FUN_140447710,0x4a0,
                  0x10000000,0,L"Engine",&LAB_1429dc390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,FUN_142381390,thunk_FUN_1429ff0b0,
                  &LAB_140447700,0);
  }
  return DAT_146b25758;
}



// FUNCTION 1429db5b0 FUN_1429db5b0 body=162 status=ok
// SIG undefined FUN_1429db5b0(void)

longlong FUN_1429db5b0(void)

{
  if (DAT_146b25768 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PlaneReflectionCapture",&DAT_146b25768,FUN_140447710,0x460,
                  0x10000001,0,L"Engine",&LAB_1429dc2d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_14290f8a0,&LAB_140447700,0);
  }
  return DAT_146b25768;
}



// FUNCTION 1429db670 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AXBakeableSplineMesh::GetPrivateStaticClass(void)

{
  if (DAT_146b25778 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PlaneReflectionCaptureComponent",&DAT_146b25778,FUN_140447710,
                  0x360,0x10000000,0,L"Engine",&LAB_1429dc3b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429f8200,&LAB_140447700,0);
  }
  return DAT_146b25778;
}



// FUNCTION 1429db730 FUN_1429db730 body=162 status=ok
// SIG undefined FUN_1429db730(void)

longlong FUN_1429db730(void)

{
  if (DAT_146b257a8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PlatformEventsComponent",&DAT_146b257a8,FUN_1429dcf10,0x198,
                  0x10000000,0,L"Engine",&LAB_1429dc3d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b257a8;
}



// FUNCTION 1429db7e0 FUN_1429db7e0 body=47 status=ok
// SIG undefined FUN_1429db7e0(void)

longlong FUN_1429db7e0(void)

{
  if (DAT_146b25780 == 0) {
    FUN_141786a30(&DAT_146b25780,&PTR_FUN_146624750);
  }
  return DAT_146b25780;
}



// FUNCTION 1429db810 FUN_1429db810 body=47 status=ok
// SIG undefined FUN_1429db810(void)

longlong FUN_1429db810(void)

{
  if (DAT_146b257a0 == 0) {
    FUN_141786440(&DAT_146b257a0,&PTR_FUN_1452fc8c0);
  }
  return DAT_146b257a0;
}



// FUNCTION 1429db840 FUN_1429db840 body=47 status=ok
// SIG undefined FUN_1429db840(void)

longlong FUN_1429db840(void)

{
  if (DAT_146b25788 == 0) {
    FUN_141786a30(&DAT_146b25788,&PTR_FUN_146624810);
  }
  return DAT_146b25788;
}



// FUNCTION 1429db870 FUN_1429db870 body=47 status=ok
// SIG undefined FUN_1429db870(void)

longlong FUN_1429db870(void)

{
  if (DAT_146b25790 == 0) {
    FUN_141786a30(&DAT_146b25790,&PTR_FUN_1466248d0);
  }
  return DAT_146b25790;
}



// FUNCTION 1429db8a0 FUN_1429db8a0 body=47 status=ok
// SIG undefined FUN_1429db8a0(void)

longlong FUN_1429db8a0(void)

{
  if (DAT_146b25798 == 0) {
    FUN_141786a30(&DAT_146b25798,&PTR_FUN_146624990);
  }
  return DAT_146b25798;
}



// FUNCTION 1429db8e0 FUN_1429db8e0 body=53 status=ok
// SIG undefined FUN_1429db8e0(void)

void FUN_1429db8e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x110;
    *puVar1 = &PTR_FUN_1452ff3b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429db930 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong USoundSourceBus::GetPrivateStaticClass(void)

{
  if (DAT_146b25678 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PhysicsHandleComponent",&DAT_146b25678,FUN_1429dceb0,0x220,
                  0x10000000,0,L"Engine",&LAB_1429dc310,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146b25678;
}



// FUNCTION 1429db9e0 FUN_1429db9e0 body=47 status=ok
// SIG undefined FUN_1429db9e0(void)

longlong FUN_1429db9e0(void)

{
  if (DAT_146b25670 == 0) {
    FUN_141786440(&DAT_146b25670,&PTR_GetPrivateStaticClass_1452fd580);
  }
  return DAT_146b25670;
}



// FUNCTION 1429dba10 FUN_1429dba10 body=47 status=ok
// SIG undefined FUN_1429dba10(void)

longlong FUN_1429dba10(void)

{
  if (DAT_146b25600 == 0) {
    FUN_141786a30(&DAT_146b25600,&PTR_FUN_146621f10);
  }
  return DAT_146b25600;
}



// FUNCTION 1429dba40 FUN_1429dba40 body=47 status=ok
// SIG undefined FUN_1429dba40(void)

longlong FUN_1429dba40(void)

{
  if (DAT_146b25608 == 0) {
    FUN_141786a30(&DAT_146b25608,&PTR_FUN_146621fd0);
  }
  return DAT_146b25608;
}



// FUNCTION 1429dba70 FUN_1429dba70 body=47 status=ok
// SIG undefined FUN_1429dba70(void)

longlong FUN_1429dba70(void)

{
  if (DAT_146b25610 == 0) {
    FUN_141786a30(&DAT_146b25610,&PTR_FUN_146622110);
  }
  return DAT_146b25610;
}



// FUNCTION 1429dbaa0 FUN_1429dbaa0 body=47 status=ok
// SIG undefined FUN_1429dbaa0(void)

longlong FUN_1429dbaa0(void)

{
  if (DAT_146b25618 == 0) {
    FUN_141786a30(&DAT_146b25618,&PTR_FUN_146622240);
  }
  return DAT_146b25618;
}



// FUNCTION 1429dbad0 FUN_1429dbad0 body=47 status=ok
// SIG undefined FUN_1429dbad0(void)

longlong FUN_1429dbad0(void)

{
  if (DAT_146b25620 == 0) {
    FUN_141786a30(&DAT_146b25620,&PTR_FUN_146622340);
  }
  return DAT_146b25620;
}



// FUNCTION 1429dbb00 FUN_1429dbb00 body=47 status=ok
// SIG undefined FUN_1429dbb00(void)

longlong FUN_1429dbb00(void)

{
  if (DAT_146b25628 == 0) {
    FUN_141786a30(&DAT_146b25628,&PTR_FUN_146622380);
  }
  return DAT_146b25628;
}



// FUNCTION 1429dbb30 FUN_1429dbb30 body=47 status=ok
// SIG undefined FUN_1429dbb30(void)

longlong FUN_1429dbb30(void)

{
  if (DAT_146b25630 == 0) {
    FUN_141786a30(&DAT_146b25630,&PTR_FUN_146622430);
  }
  return DAT_146b25630;
}



// FUNCTION 1429dbb60 FUN_1429dbb60 body=47 status=ok
// SIG undefined FUN_1429dbb60(void)

longlong FUN_1429dbb60(void)

{
  if (DAT_146b25638 == 0) {
    FUN_141786a30(&DAT_146b25638,&PTR_FUN_146622470);
  }
  return DAT_146b25638;
}



// FUNCTION 1429dbb90 FUN_1429dbb90 body=47 status=ok
// SIG undefined FUN_1429dbb90(void)

longlong FUN_1429dbb90(void)

{
  if (DAT_146b25640 == 0) {
    FUN_141786a30(&DAT_146b25640,&PTR_FUN_146622520);
  }
  return DAT_146b25640;
}



// FUNCTION 1429dbbc0 FUN_1429dbbc0 body=47 status=ok
// SIG undefined FUN_1429dbbc0(void)

longlong FUN_1429dbbc0(void)

{
  if (DAT_146b25648 == 0) {
    FUN_141786a30(&DAT_146b25648,&PTR_FUN_146622560);
  }
  return DAT_146b25648;
}



// FUNCTION 1429dbbf0 FUN_1429dbbf0 body=47 status=ok
// SIG undefined FUN_1429dbbf0(void)

longlong FUN_1429dbbf0(void)

{
  if (DAT_146b25650 == 0) {
    FUN_141786a30(&DAT_146b25650,&PTR_FUN_146622610);
  }
  return DAT_146b25650;
}



// FUNCTION 1429dbc20 FUN_1429dbc20 body=47 status=ok
// SIG undefined FUN_1429dbc20(void)

longlong FUN_1429dbc20(void)

{
  if (DAT_146b25658 == 0) {
    FUN_141786a30(&DAT_146b25658,&PTR_FUN_146622690);
  }
  return DAT_146b25658;
}



// FUNCTION 1429dbc50 FUN_1429dbc50 body=47 status=ok
// SIG undefined FUN_1429dbc50(void)

longlong FUN_1429dbc50(void)

{
  if (DAT_146b25660 == 0) {
    FUN_141786a30(&DAT_146b25660,&PTR_FUN_146622750);
  }
  return DAT_146b25660;
}



// FUNCTION 1429dbc80 FUN_1429dbc80 body=47 status=ok
// SIG undefined FUN_1429dbc80(void)

longlong FUN_1429dbc80(void)

{
  if (DAT_146b25668 == 0) {
    FUN_141786a30(&DAT_146b25668,&PTR_FUN_1466227d0);
  }
  return DAT_146b25668;
}



// FUNCTION 1429dbcb0 FUN_1429dbcb0 body=53 status=ok
// SIG undefined FUN_1429dbcb0(void)

void FUN_1429dbcb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1452ff900;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429dbd00 FUN_1429dbd00 body=53 status=ok
// SIG undefined FUN_1429dbd00(void)

void FUN_1429dbd00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_1452ffa18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429dbd40 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAudioSettings::GetPrivateStaticClass(void)

{
  if (DAT_146b256b8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PhysicsSettings",&DAT_146b256b8,FUN_140447710,0x138,0x10000006
                  ,0,L"Engine",&LAB_1429dc330,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UDeveloperSettings::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b256b8;
}



// FUNCTION 1429dbdf0 FUN_1429dbdf0 body=53 status=ok
// SIG undefined FUN_1429dbdf0(void)

void FUN_1429dbdf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1452ffb30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429dbe40 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPlatformInterfaceWebResponse::GetPrivateStaticClass(void)

{
  if (DAT_146b25820 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PlatformInterfaceWebResponse",&DAT_146b25820,
                  StaticRegisterNativesUPlatformInterfaceWebResponse,0xb0,0x10000008,0,L"Engine",
                  &LAB_1429dc410,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b25820;
}



// FUNCTION 1429dbee0 FUN_1429dbee0 body=47 status=ok
// SIG undefined FUN_1429dbee0(void)

longlong FUN_1429dbee0(void)

{
  if (DAT_146b25818 == 0) {
    FUN_141786440(&DAT_146b25818,&PTR_GetPrivateStaticClass_1452fdd90);
  }
  return DAT_146b25818;
}



// FUNCTION 1429dbf10 FUN_1429dbf10 body=47 status=ok
// SIG undefined FUN_1429dbf10(void)

longlong FUN_1429dbf10(void)

{
  if (DAT_146b25800 == 0) {
    FUN_141786a30(&DAT_146b25800,&PTR_FUN_146624ee0);
  }
  return DAT_146b25800;
}



// FUNCTION 1429dbf40 FUN_1429dbf40 body=47 status=ok
// SIG undefined FUN_1429dbf40(void)

longlong FUN_1429dbf40(void)

{
  if (DAT_146b25808 == 0) {
    FUN_141786a30(&DAT_146b25808,&PTR_FUN_146624f90);
  }
  return DAT_146b25808;
}



// FUNCTION 1429dbf70 FUN_1429dbf70 body=47 status=ok
// SIG undefined FUN_1429dbf70(void)

longlong FUN_1429dbf70(void)

{
  if (DAT_146b25810 == 0) {
    FUN_141786a30(&DAT_146b25810,&PTR_FUN_146624fd0);
  }
  return DAT_146b25810;
}



// FUNCTION 1429dbfb0 FUN_1429dbfb0 body=53 status=ok
// SIG undefined FUN_1429dbfb0(void)

void FUN_1429dbfb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_1452ff690;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1429dc000 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGAccountPage::GetPrivateStaticClass(void)

{
  if (DAT_146b256f0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PhysicsSpringComponent",&DAT_146b256f0,
                  StaticRegisterNativesUGAccountPage,0x300,0x10000000,0,L"Engine",&LAB_1429dc350,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_146b256f0;
}



// FUNCTION 1429dc0b0 FUN_1429dc0b0 body=47 status=ok
// SIG undefined FUN_1429dc0b0(void)

longlong FUN_1429dc0b0(void)

{
  if (DAT_146b256e8 == 0) {
    FUN_141786440(&DAT_146b256e8,&PTR_GetPrivateStaticClass_1452fef30);
  }
  return DAT_146b256e8;
}



// FUNCTION 1429dc0e0 FUN_1429dc0e0 body=47 status=ok
// SIG undefined FUN_1429dc0e0(void)

longlong FUN_1429dc0e0(void)

{
  if (DAT_146b256c8 == 0) {
    FUN_141786a30(&DAT_146b256c8,&PTR_FUN_1466239d0);
  }
  return DAT_146b256c8;
}



// FUNCTION 1429dc110 FUN_1429dc110 body=47 status=ok
// SIG undefined FUN_1429dc110(void)

longlong FUN_1429dc110(void)

{
  if (DAT_146b256d0 == 0) {
    FUN_141786a30(&DAT_146b256d0,&PTR_FUN_146623a50);
  }
  return DAT_146b256d0;
}



// FUNCTION 1429dc140 FUN_1429dc140 body=47 status=ok
// SIG undefined FUN_1429dc140(void)

longlong FUN_1429dc140(void)

{
  if (DAT_146b256d8 == 0) {
    FUN_141786a30(&DAT_146b256d8,&PTR_FUN_146623ad0);
  }
  return DAT_146b256d8;
}



// FUNCTION 1429dc170 FUN_1429dc170 body=47 status=ok
// SIG undefined FUN_1429dc170(void)

longlong FUN_1429dc170(void)

{
  if (DAT_146b256e0 == 0) {
    FUN_141786a30(&DAT_146b256e0,&PTR_FUN_146623b50);
  }
  return DAT_146b256e0;
}



// FUNCTION 1429dc1b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UParticleModuleTypeDataGpu::GetPrivateStaticClass(void)

{
  if (DAT_146b25700 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PhysicsThruster",&DAT_146b25700,FUN_140447710,0x460,0x10000000
                  ,0,L"Engine",&LAB_1429dc270,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AXScriptedBotSpawner::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146b25700;
}



// FUNCTION 1429dc430 operator= body=161 status=ok
// SIG undefined operator=(void)

undefined8 * FPlatformInterfaceData::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = param_1 + 3;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  if (puVar1 != param_2 + 3) {
    iVar2 = *(int *)(param_2 + 4);
    _Src = (void *)param_2[3];
    *(int *)(param_1 + 4) = iVar2;
    if ((iVar2 == 0) && (*(int *)((longlong)param_1 + 0x24) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 2);
    }
  }
  param_1[5] = param_2[5];
  return param_1;
}



// FUNCTION 1429dc4f0 Construct body=48 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FPhysicsConstraintProfileHandle>::Construct
               (undefined8 param_1,void *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2,0,0x110);
  FConstraintProfileProperties::FConstraintProfileProperties(param_2);
  *(undefined8 *)((longlong)param_2 + 0x108) = 0;
  return;
}



// FUNCTION 1429dc560 Copy body=184 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FDelegateArray>::Copy
          (undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar5 = (int)param_3[1];
      lVar1 = *param_3;
      *(int *)(param_2 + 1) = iVar5;
      if ((iVar5 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar5);
        if (iVar5 != 0) {
          puVar3 = (undefined8 *)(lVar1 + 8);
          puVar4 = (undefined4 *)*param_2;
          do {
            *puVar4 = *(undefined4 *)(puVar3 + -1);
            puVar4[1] = *(undefined4 *)((longlong)puVar3 + -4);
            uVar2 = *puVar3;
            puVar3 = puVar3 + 2;
            *(undefined8 *)(puVar4 + 2) = uVar2;
            iVar5 = iVar5 + -1;
            puVar4 = puVar4 + 4;
          } while (iVar5 != 0);
        }
      }
    }
    param_3 = param_3 + 2;
    param_2 = param_2 + 2;
  }
  return 1;
}



// FUNCTION 1429dc860 Copy body=224 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPlatformInterfaceData>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined1 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined1 *)(param_3 + 8);
    do {
      *param_2 = *(undefined8 *)(puVar3 + -8);
      puVar1 = param_2 + 3;
      *(undefined1 *)(param_2 + 1) = *puVar3;
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(puVar3 + 4);
      *(undefined4 *)(param_2 + 2) = *(undefined4 *)(puVar3 + 8);
      if (puVar1 != (undefined8 *)(puVar3 + 0x10)) {
        iVar2 = *(int *)(puVar3 + 0x18);
        _Src = *(void **)(puVar3 + 0x10);
        *(int *)(param_2 + 4) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x24) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x24) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      puVar1 = (undefined8 *)(puVar3 + 0x20);
      puVar3 = puVar3 + 0x30;
      param_2[5] = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1429dc940 Copy body=81 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPlatformInterfaceDelegateResult>::Copy
          (undefined8 param_1,undefined1 *param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = param_2[param_3];
      FPlatformInterfaceData::operator=(param_2 + 8,param_2 + param_3 + 8);
      param_2 = param_2 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1429dc9a0 FUN_1429dc9a0 body=55 status=ok
// SIG undefined FUN_1429dc9a0(void)

void FUN_1429dc9a0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b25560 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b25560 = GetStaticEnum(FUN_1429dd300,uVar1,L"EBroadPhaseType");
  }
  return;
}



// FUNCTION 1429dc9e0 EFrictionCombineMode_StaticEnum body=55 status=ok
// SIG undefined EFrictionCombineMode_StaticEnum(void)

void EFrictionCombineMode_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b25578 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b25578 = GetStaticEnum(FUN_1429dd330,uVar1,L"EFrictionCombineMode");
  }
  return;
}



// FUNCTION 1429dca20 EPlatformInterfaceDataType_StaticEnum body=55 status=ok
// SIG undefined EPlatformInterfaceDataType_StaticEnum(void)

void EPlatformInterfaceDataType_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b25550 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b25550 = GetStaticEnum(FUN_1429dd360,uVar1,L"EPlatformInterfaceDataType");
  }
  return;
}



// FUNCTION 1429dca60 ESettingsDOF_StaticEnum body=55 status=ok
// SIG undefined ESettingsDOF_StaticEnum(void)

void ESettingsDOF_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b25570 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b25570 = GetStaticEnum(FUN_1429dd390,uVar1,L"ESettingsDOF");
  }
  return;
}



// FUNCTION 1429dcaa0 ESettingsLockedAxis_StaticEnum body=55 status=ok
// SIG undefined ESettingsLockedAxis_StaticEnum(void)

void ESettingsLockedAxis_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146b25568 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b25568 = GetStaticEnum(FUN_1429dd3c0,uVar1,L"ESettingsLockedAxis");
  }
  return;
}



// FUNCTION 1429dcae0 FUN_1429dcae0 body=55 status=ok
// SIG undefined FUN_1429dcae0(void)

void FUN_1429dcae0(void)

{
  undefined8 uVar1;
  
  if (DAT_146b25558 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146b25558 = GetStaticEnum(FUN_1429dd3f0,uVar1,L"EStaticPruningStructure");
  }
  return;
}



// FUNCTION 1429dcb20 FUN_1429dcb20 body=162 status=ok
// SIG undefined FUN_1429dcb20(void)

longlong FUN_1429dcb20(void)

{
  if (DAT_146b25730 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PhysicsVolume",&DAT_146b25730,FUN_1429dce50,0x4a0,0x10000000,0
                  ,L"Engine",&LAB_1429dc290,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1407fbfa0,&LAB_140447700,0);
  }
  return DAT_146b25730;
}



// FUNCTION 1429dcbd0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UPlatformInterfaceBase::GetPrivateStaticClass(void)

{
  if (DAT_146b257f8 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"PlatformInterfaceBase",&DAT_146b257f8,FUN_140447710,0x38,
                  0x10000008,0,L"Engine",&LAB_1429dc3f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146b257f8;
}



// FUNCTION 1429dcc70 Get_Z_Construct_UScriptStruct_FDelegateArray_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FDelegateArray_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FDelegateArray_CRC(void)

{
  return 0xdb2800e;
}



// FUNCTION 1429dcc80 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC(void)

{
  return 0x78d61df3;
}



// FUNCTION 1429dcc90 Get_Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_CRC(void)

{
  return 0x2603fb49;
}



// FUNCTION 1429dcca0 Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_CRC(void)

{
  return 0x2d7499b9;
}



// FUNCTION 1429dccb0 Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_CRC(void)

{
  return 0xe361dafa;
}



// FUNCTION 1429dcd50 Serialize body=112 status=ok
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
  FUN_1426ea670(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1429dcdc0 Serialize body=112 status=ok
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
  FUN_1423965c0(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1429dce30 thunk_FUN_1429ff000 body=5 status=ok
// SIG undefined thunk_FUN_1429ff000(void)

void thunk_FUN_1429ff000(void)

{
  FUN_1429ff000();
  return;
}



// FUNCTION 1429dce40 thunk_FUN_1429ff0b0 body=5 status=ok
// SIG undefined thunk_FUN_1429ff0b0(void)

void thunk_FUN_1429ff0b0(void)

{
  FUN_1429ff0b0();
  return;
}



// FUNCTION 1429dce50 FUN_1429dce50 body=34 status=ok
// SIG undefined FUN_1429dce50(void)

void FUN_1429dce50(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1429dcb20();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnActorEnteredVolume_1452ff830,2);
  return;
}



// FUNCTION 1429dce80 FUN_1429dce80 body=34 status=ok
// SIG undefined FUN_1429dce80(void)

void FUN_1429dce80(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1429db3d0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnInterpToggle_1452ff850,1);
  return;
}



// FUNCTION 1429dceb0 FUN_1429dceb0 body=34 status=ok
// SIG undefined FUN_1429dceb0(void)

void FUN_1429dceb0(void)

{
  undefined8 uVar1;
  
  uVar1 = USoundSourceBus::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetGrabbedComponent_1452ff4d0,0xe);
  return;
}



// FUNCTION 1429dcee0 StaticRegisterNativesUGAccountPage body=34 status=ok
// SIG undefined StaticRegisterNativesUGAccountPage(void)

void UGAccountPage::StaticRegisterNativesUGAccountPage(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GetNormalizedCompressionScalar_1452ff7f0,4);
  return;
}



// FUNCTION 1429dcf10 FUN_1429dcf10 body=34 status=ok
// SIG undefined FUN_1429dcf10(void)

void FUN_1429dcf10(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1429db730();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_IsInLaptopMode_1452ff860,3);
  return;
}



// FUNCTION 1429dcf40 StaticRegisterNativesUPlatformInterfaceWebResponse body=34 status=ok
// SIG undefined StaticRegisterNativesUPlatformInterfaceWebResponse(void)

void UPlatformInterfaceWebResponse::StaticRegisterNativesUPlatformInterfaceWebResponse(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetHeader_1452ffc48,3);
  return;
}



// FUNCTION 1429dcf70 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FDelegateArray::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b257c0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FDelegateArray_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b257c0 = GetStaticStruct(FUN_1429dd420,uVar2,L"DelegateArray",0x10,uVar1);
  }
  return;
}



// FUNCTION 1429dcfd0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPhysicalSurfaceName::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b256a0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPhysicalSurfaceName_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b256a0 = GetStaticStruct(FUN_1429dd450,uVar2,L"PhysicalSurfaceName",0x10,uVar1);
  }
  return;
}



// FUNCTION 1429dd030 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPhysicsConstraintProfileHandle::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b255e0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPhysicsConstraintProfileHandle_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b255e0 =
         GetStaticStruct(FUN_1429dd480,uVar2,L"PhysicsConstraintProfileHandle",0x110,uVar1);
  }
  return;
}



// FUNCTION 1429dd090 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPlatformInterfaceData::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b257e0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPlatformInterfaceData_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b257e0 = GetStaticStruct(FUN_1429dd4b0,uVar2,L"PlatformInterfaceData",0x30,uVar1);
  }
  return;
}



// FUNCTION 1429dd0f0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FPlatformInterfaceDelegateResult::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146b257d0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FPlatformInterfaceDelegateResult_CRC();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146b257d0 =
         GetStaticStruct(FUN_1429dd4e0,uVar2,L"PlatformInterfaceDelegateResult",0x38,uVar1);
  }
  return;
}



// FUNCTION 1429dd150 FUN_1429dd150 body=47 status=ok
// SIG undefined FUN_1429dd150(void)

longlong FUN_1429dd150(void)

{
  if (DAT_146b256f8 == 0) {
    FUN_141786440(&DAT_146b256f8,&PTR_GetPrivateStaticClass_1452ff140);
  }
  return DAT_146b256f8;
}



// FUNCTION 1429dd180 FUN_1429dd180 body=47 status=ok
// SIG undefined FUN_1429dd180(void)

longlong FUN_1429dd180(void)

{
  if (DAT_146b25760 == 0) {
    FUN_141786440(&DAT_146b25760,&PTR_FUN_1452fc4a0);
  }
  return DAT_146b25760;
}



// FUNCTION 1429dd1b0 FUN_1429dd1b0 body=47 status=ok
// SIG undefined FUN_1429dd1b0(void)

longlong FUN_1429dd1b0(void)

{
  if (DAT_146b255f0 == 0) {
    FUN_141786440(&DAT_146b255f0,&PTR_StaticClass_1452fcc00);
  }
  return DAT_146b255f0;
}



// FUNCTION 1429dd1e0 FUN_1429dd1e0 body=47 status=ok
// SIG undefined FUN_1429dd1e0(void)

longlong FUN_1429dd1e0(void)

{
  if (DAT_146b256b0 == 0) {
    FUN_141786440(&DAT_146b256b0,&PTR_GetPrivateStaticClass_1452fe5c0);
  }
  return DAT_146b256b0;
}



// FUNCTION 1429dd210 FUN_1429dd210 body=47 status=ok
// SIG undefined FUN_1429dd210(void)

longlong FUN_1429dd210(void)

{
  if (DAT_146b25708 == 0) {
    FUN_141786440(&DAT_146b25708,&PTR_GetPrivateStaticClass_1452fbc00);
  }
  return DAT_146b25708;
}



// FUNCTION 1429dd240 FUN_1429dd240 body=47 status=ok
// SIG undefined FUN_1429dd240(void)

longlong FUN_1429dd240(void)

{
  if (DAT_146b25750 == 0) {
    FUN_141786440(&DAT_146b25750,&PTR_FUN_1452fc230);
  }
  return DAT_146b25750;
}



// FUNCTION 1429dd270 FUN_1429dd270 body=47 status=ok
// SIG undefined FUN_1429dd270(void)

longlong FUN_1429dd270(void)

{
  if (DAT_146b25770 == 0) {
    FUN_141786440(&DAT_146b25770,&PTR_GetPrivateStaticClass_1452fc5d0);
  }
  return DAT_146b25770;
}



// FUNCTION 1429dd2a0 FUN_1429dd2a0 body=47 status=ok
// SIG undefined FUN_1429dd2a0(void)

longlong FUN_1429dd2a0(void)

{
  if (DAT_146b257f0 == 0) {
    FUN_141786440(&DAT_146b257f0,&PTR_GetPrivateStaticClass_1452fdb00);
  }
  return DAT_146b257f0;
}



// FUNCTION 1429dd2d0 FUN_1429dd2d0 body=47 status=ok
// SIG undefined FUN_1429dd2d0(void)

longlong FUN_1429dd2d0(void)

{
  if (DAT_146b257b0 == 0) {
    FUN_141786a30(&DAT_146b257b0,&PTR_Z_Construct_UPackage__Script_Engine_146624a90);
  }
  return DAT_146b257b0;
}



// FUNCTION 1429dd300 FUN_1429dd300 body=47 status=ok
// SIG undefined FUN_1429dd300(void)

longlong FUN_1429dd300(void)

{
  if (DAT_146b25688 == 0) {
    FUN_1417866a0(&DAT_146b25688,&PTR_Z_Construct_UPackage__Script_Engine_1466251e0);
  }
  return DAT_146b25688;
}



// FUNCTION 1429dd330 FUN_1429dd330 body=47 status=ok
// SIG undefined FUN_1429dd330(void)

longlong FUN_1429dd330(void)

{
  if (DAT_146b256c0 == 0) {
    FUN_1417866a0(&DAT_146b256c0,&PTR_Z_Construct_UPackage__Script_Engine_1466252d0);
  }
  return DAT_146b256c0;
}



// FUNCTION 1429dd360 FUN_1429dd360 body=47 status=ok
// SIG undefined FUN_1429dd360(void)

longlong FUN_1429dd360(void)

{
  if (DAT_146b257b8 == 0) {
    FUN_1417866a0(&DAT_146b257b8,&PTR_Z_Construct_UPackage__Script_Engine_146625320);
  }
  return DAT_146b257b8;
}



// FUNCTION 1429dd390 FUN_1429dd390 body=47 status=ok
// SIG undefined FUN_1429dd390(void)

longlong FUN_1429dd390(void)

{
  if (DAT_146b25698 == 0) {
    FUN_1417866a0(&DAT_146b25698,&PTR_Z_Construct_UPackage__Script_Engine_146625280);
  }
  return DAT_146b25698;
}



// FUNCTION 1429dd3c0 FUN_1429dd3c0 body=47 status=ok
// SIG undefined FUN_1429dd3c0(void)

longlong FUN_1429dd3c0(void)

{
  if (DAT_146b25690 == 0) {
    FUN_1417866a0(&DAT_146b25690,&PTR_Z_Construct_UPackage__Script_Engine_146625230);
  }
  return DAT_146b25690;
}



// FUNCTION 1429dd3f0 FUN_1429dd3f0 body=47 status=ok
// SIG undefined FUN_1429dd3f0(void)

longlong FUN_1429dd3f0(void)

{
  if (DAT_146b25680 == 0) {
    FUN_1417866a0(&DAT_146b25680,&PTR_Z_Construct_UPackage__Script_Engine_146625190);
  }
  return DAT_146b25680;
}



// FUNCTION 1429dd420 FUN_1429dd420 body=47 status=ok
// SIG undefined FUN_1429dd420(void)

longlong FUN_1429dd420(void)

{
  if (DAT_146b257c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b257c8,&PTR_Z_Construct_UPackage__Script_Engine_146624b10);
  }
  return DAT_146b257c8;
}



// FUNCTION 1429dd450 FUN_1429dd450 body=47 status=ok
// SIG undefined FUN_1429dd450(void)

longlong FUN_1429dd450(void)

{
  if (DAT_146b256a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b256a8,&PTR_Z_Construct_UPackage__Script_Engine_146622ae0);
  }
  return DAT_146b256a8;
}



// FUNCTION 1429dd480 FUN_1429dd480 body=47 status=ok
// SIG undefined FUN_1429dd480(void)

longlong FUN_1429dd480(void)

{
  if (DAT_146b255e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b255e8,&PTR_Z_Construct_UPackage__Script_Engine_146621da0);
  }
  return DAT_146b255e8;
}



// FUNCTION 1429dd4b0 FUN_1429dd4b0 body=47 status=ok
// SIG undefined FUN_1429dd4b0(void)

longlong FUN_1429dd4b0(void)

{
  if (DAT_146b257e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b257e8,&PTR_Z_Construct_UPackage__Script_Engine_146624d50);
  }
  return DAT_146b257e8;
}



// FUNCTION 1429dd4e0 FUN_1429dd4e0 body=47 status=ok
// SIG undefined FUN_1429dd4e0(void)

longlong FUN_1429dd4e0(void)

{
  if (DAT_146b257d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146b257d8,&PTR_Z_Construct_UPackage__Script_Engine_146624c50);
  }
  return DAT_146b257d8;
}



// FUNCTION 1429dd510 execGetPawnOwner body=44 status=ok
// SIG undefined execGetPawnOwner(void)

void UPawnMovementComponent::execGetPawnOwner
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1426e2440();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429dd540 FUN_1429dd540 body=341 status=ok
// SIG undefined FUN_1429dd540(void)

void FUN_1429dd540(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 local_res8 [2];
  longlong local_28 [4];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_28[2] = 0;
  local_28[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  plVar1 = local_28 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar2 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x280))(param_1,local_res8[0],plVar1,plVar2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429dd6a0 FUN_1429dd6a0 body=233 status=ok
// SIG undefined FUN_1429dd6a0(void)

void FUN_1429dd6a0(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_28 [4];
  
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
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,local_28 + 2,local_28);
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
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1429dd790 FUN_1429dd790 body=45 status=ok
// SIG undefined FUN_1429dd790(void)

void FUN_1429dd790(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_1426e24e0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429dd7c0 FUN_1429dd7c0 body=47 status=ok
// SIG undefined FUN_1429dd7c0(void)

void FUN_1429dd7c0(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = (**(code **)(*param_1 + 0x278))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429dd7f0 FUN_1429dd7f0 body=60 status=ok
// SIG undefined FUN_1429dd7f0(void)

void FUN_1429dd7f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1426e27a0(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1429dd830 FUN_1429dd830 body=60 status=ok
// SIG undefined FUN_1429dd830(void)

void FUN_1429dd830(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_142369f10(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1429dd870 FUN_1429dd870 body=60 status=ok
// SIG undefined FUN_1429dd870(void)

void FUN_1429dd870(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_1426e28b0(param_1,local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1429dd8b0 FUN_1429dd8b0 body=224 status=ok
// SIG undefined FUN_1429dd8b0(void)

void FUN_1429dd8b0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_28;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  puVar2 = local_18;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1426e2a10(param_1,puVar1,puVar2);
  return;
}



// FUNCTION 1429dd990 FUN_1429dd990 body=334 status=ok
// SIG undefined FUN_1429dd990(void)

void FUN_1429dd990(longlong *param_1,longlong param_2)

{
  int local_res8 [2];
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  (**(code **)(*param_1 + 0x3f8))(param_1,local_res20,local_res10[0],&local_28,local_res8[0] != 0);
  return;
}



// FUNCTION 1429ddae0 execGrabComponentAtLocation body=269 status=ok
// SIG undefined execGrabComponentAtLocation(void)

void UPhysicsHandleComponent::execGrabComponentAtLocation(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_1426e2e50(param_1,local_res20,local_res10,&local_18);
  return;
}



// FUNCTION 1429ddbf0 execGrabComponentAtLocationWithRotation body=371 status=ok
// SIG undefined execGrabComponentAtLocationWithRotation(void)

void UPhysicsHandleComponent::execGrabComponentAtLocationWithRotation
               (undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = local_48;
  local_20 = local_40;
  local_10 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = local_38;
  FUN_1426e2e80(param_1,local_res20,local_res10,&local_18,&local_28);
  return;
}



// FUNCTION 1429ddd70 execIsInLaptopMode body=43 status=ok
// SIG undefined execIsInLaptopMode(void)

void UPlatformEventsComponent::execIsInLaptopMode
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IsInLaptopMode();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429ddda0 execIsInTabletMode body=43 status=ok
// SIG undefined execIsInTabletMode(void)

void UPlatformEventsComponent::execIsInTabletMode
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IsInTabletMode();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429dddd0 FUN_1429dddd0 body=481 status=ok
// SIG undefined FUN_1429dddd0(void)

void FUN_1429dddd0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res8 [2];
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [12];
  undefined4 local_ac;
  
  local_c0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
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
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  bVar2 = local_res8[0] != 0;
  _guard_xfg_dispatch_icall_nop(local_b8,0,0x90);
  local_ac = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar1 = local_b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x740))(param_1,local_c0,local_c8,local_res20,local_res10[0],bVar2,puVar1)
  ;
  return;
}



// FUNCTION 1429ddfc0 FUN_1429ddfc0 body=309 status=ok
// SIG undefined FUN_1429ddfc0(void)

void FUN_1429ddfc0(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  undefined8 local_res10 [2];
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
  (**(code **)(*param_1 + 0x748))(param_1,local_28[0],local_res20,local_res10[0],local_res8[0]);
  return;
}



// FUNCTION 1429de100 FUN_1429de100 body=130 status=ok
// SIG undefined FUN_1429de100(void)

void FUN_1429de100(undefined8 param_1,longlong param_2)

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
  FUN_142393790(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1429de190 FUN_1429de190 body=123 status=ok
// SIG undefined FUN_1429de190(void)

void FUN_1429de190(undefined8 param_1,longlong param_2)

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
  FUN_1426ea930(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429de210 FUN_1429de210 body=123 status=ok
// SIG undefined FUN_1429de210(void)

void FUN_1429de210(undefined8 param_1,longlong param_2)

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
  FUN_1426ea9a0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429de290 FUN_1429de290 body=123 status=ok
// SIG undefined FUN_1429de290(void)

void FUN_1429de290(undefined8 param_1,longlong param_2)

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
  UE::MovieScene::SetSecondFogDataFogDensity(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429de310 FUN_1429de310 body=123 status=ok
// SIG undefined FUN_1429de310(void)

void FUN_1429de310(undefined8 param_1,longlong param_2)

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
  FUN_1426eb090(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429de390 FUN_1429de390 body=123 status=ok
// SIG undefined FUN_1429de390(void)

void FUN_1429de390(undefined8 param_1,longlong param_2)

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
  FUN_1426eb0e0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1429de410 execSetActorScale3D body=133 status=ok
// SIG undefined execSetActorScale3D(void)

void AActor::execSetActorScale3D(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_1426eb820(param_1,&local_18);
  return;
}



// FUNCTION 1429de4a0 execSetTargetLocationAndRotation body=212 status=ok
// SIG undefined execSetTargetLocationAndRotation(void)

void UPhysicsHandleComponent::execSetTargetLocationAndRotation(undefined8 param_1,longlong param_2)

{
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = local_48;
  local_18 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_40;
  local_10 = local_30;
  FUN_1426eb850(param_1,&local_18,&local_28);
  return;
}



// FUNCTION 1429de580 execSetActorScale3D body=133 status=ok
// SIG undefined execSetActorScale3D(void)

void AActor::execSetActorScale3D(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  FUN_1426eb8d0(param_1,&local_18);
  return;
}



// FUNCTION 1429de610 execSupportsConvertibleLaptops body=43 status=ok
// SIG undefined execSupportsConvertibleLaptops(void)

void UPlatformEventsComponent::execSupportsConvertibleLaptops
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = SupportsConvertibleLaptops();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429de650 FUN_1429de650 body=47 status=ok
// SIG undefined FUN_1429de650(void)

longlong FUN_1429de650(void)

{
  if (DAT_146b25c08 == 0) {
    FUN_141786440(&DAT_146b25c08,&PTR_FUN_145302200);
  }
  return DAT_146b25c08;
}



// FUNCTION 1429de680 FUN_1429de680 body=47 status=ok
// SIG undefined FUN_1429de680(void)

longlong FUN_1429de680(void)

{
  if (DAT_146b25b20 == 0) {
    FUN_141786a30(&DAT_146b25b20,&PTR_FUN_1466258f0);
  }
  return DAT_146b25b20;
}



// FUNCTION 1429de6b0 FUN_1429de6b0 body=47 status=ok
// SIG undefined FUN_1429de6b0(void)

longlong FUN_1429de6b0(void)

{
  if (DAT_146b25b28 == 0) {
    FUN_141786a30(&DAT_146b25b28,&PTR_FUN_1466259f0);
  }
  return DAT_146b25b28;
}



// FUNCTION 1429de6e0 FUN_1429de6e0 body=47 status=ok
// SIG undefined FUN_1429de6e0(void)

longlong FUN_1429de6e0(void)

{
  if (DAT_146b25b30 == 0) {
    FUN_141786a30(&DAT_146b25b30,&PTR_FUN_146625b70);
  }
  return DAT_146b25b30;
}



// FUNCTION 1429de710 FUN_1429de710 body=47 status=ok
// SIG undefined FUN_1429de710(void)

longlong FUN_1429de710(void)

{
  if (DAT_146b25b38 == 0) {
    FUN_141786a30(&DAT_146b25b38,&PTR_FUN_146625bb0);
  }
  return DAT_146b25b38;
}



// FUNCTION 1429de740 FUN_1429de740 body=47 status=ok
// SIG undefined FUN_1429de740(void)

longlong FUN_1429de740(void)

{
  if (DAT_146b25b40 == 0) {
    FUN_141786a30(&DAT_146b25b40,&PTR_FUN_146625cb0);
  }
  return DAT_146b25b40;
}



// FUNCTION 1429de770 FUN_1429de770 body=47 status=ok
// SIG undefined FUN_1429de770(void)

longlong FUN_1429de770(void)

{
  if (DAT_146b25b48 == 0) {
    FUN_141786a30(&DAT_146b25b48,&PTR_FUN_146625d30);
  }
  return DAT_146b25b48;
}



// FUNCTION 1429de7a0 FUN_1429de7a0 body=47 status=ok
// SIG undefined FUN_1429de7a0(void)

longlong FUN_1429de7a0(void)

{
  if (DAT_146b25b50 == 0) {
    FUN_141786a30(&DAT_146b25b50,&PTR_FUN_146625db0);
  }
  return DAT_146b25b50;
}



// FUNCTION 1429de7d0 FUN_1429de7d0 body=47 status=ok
// SIG undefined FUN_1429de7d0(void)

longlong FUN_1429de7d0(void)

{
  if (DAT_146b25b58 == 0) {
    FUN_141786a30(&DAT_146b25b58,&PTR_FUN_146625df0);
  }
  return DAT_146b25b58;
}



// FUNCTION 1429de800 FUN_1429de800 body=47 status=ok
// SIG undefined FUN_1429de800(void)

longlong FUN_1429de800(void)

{
  if (DAT_146b25b60 == 0) {
    FUN_141786a30(&DAT_146b25b60,&PTR_FUN_146625e30);
  }
  return DAT_146b25b60;
}



// FUNCTION 1429de830 FUN_1429de830 body=47 status=ok
// SIG undefined FUN_1429de830(void)

longlong FUN_1429de830(void)

{
  if (DAT_146b25b68 == 0) {
    FUN_141786a30(&DAT_146b25b68,&PTR_FUN_146625eb0);
  }
  return DAT_146b25b68;
}



// FUNCTION 1429de860 FUN_1429de860 body=47 status=ok
// SIG undefined FUN_1429de860(void)

longlong FUN_1429de860(void)

{
  if (DAT_146b25b70 == 0) {
    FUN_141786a30(&DAT_146b25b70,&PTR_FUN_146625ef0);
  }
  return DAT_146b25b70;
}



// FUNCTION 1429de890 FUN_1429de890 body=47 status=ok
// SIG undefined FUN_1429de890(void)

longlong FUN_1429de890(void)

{
  if (DAT_146b25b78 == 0) {
    FUN_141786a30(&DAT_146b25b78,&PTR_FUN_146625f30);
  }
  return DAT_146b25b78;
}



// FUNCTION 1429de8c0 FUN_1429de8c0 body=47 status=ok
// SIG undefined FUN_1429de8c0(void)

longlong FUN_1429de8c0(void)

{
  if (DAT_146b25b80 == 0) {
    FUN_141786a30(&DAT_146b25b80,&PTR_FUN_146625f70);
  }
  return DAT_146b25b80;
}



// FUNCTION 1429de8f0 FUN_1429de8f0 body=47 status=ok
// SIG undefined FUN_1429de8f0(void)

longlong FUN_1429de8f0(void)

{
  if (DAT_146b25b88 == 0) {
    FUN_141786a30(&DAT_146b25b88,&PTR_FUN_146625fb0);
  }
  return DAT_146b25b88;
}



// FUNCTION 1429de920 FUN_1429de920 body=47 status=ok
// SIG undefined FUN_1429de920(void)

longlong FUN_1429de920(void)

{
  if (DAT_146b25b90 == 0) {
    FUN_141786a30(&DAT_146b25b90,&PTR_FUN_1466260f0);
  }
  return DAT_146b25b90;
}



// FUNCTION 1429de950 FUN_1429de950 body=47 status=ok
// SIG undefined FUN_1429de950(void)

longlong FUN_1429de950(void)

{
  if (DAT_146b25b98 == 0) {
    FUN_141786a30(&DAT_146b25b98,&PTR_FUN_146626330);
  }
  return DAT_146b25b98;
}



// FUNCTION 1429de980 FUN_1429de980 body=47 status=ok
// SIG undefined FUN_1429de980(void)

longlong FUN_1429de980(void)

{
  if (DAT_146b25ba0 == 0) {
    FUN_141786a30(&DAT_146b25ba0,&PTR_FUN_1466264b0);
  }
  return DAT_146b25ba0;
}



// FUNCTION 1429de9b0 FUN_1429de9b0 body=47 status=ok
// SIG undefined FUN_1429de9b0(void)

longlong FUN_1429de9b0(void)

{
  if (DAT_146b25ba8 == 0) {
    FUN_141786a30(&DAT_146b25ba8,&PTR_FUN_1466266b0);
  }
  return DAT_146b25ba8;
}



// FUNCTION 1429de9e0 FUN_1429de9e0 body=47 status=ok
// SIG undefined FUN_1429de9e0(void)

longlong FUN_1429de9e0(void)

{
  if (DAT_146b25bb0 == 0) {
    FUN_141786a30(&DAT_146b25bb0,&PTR_FUN_146626730);
  }
  return DAT_146b25bb0;
}



// FUNCTION 1429dea10 FUN_1429dea10 body=47 status=ok
// SIG undefined FUN_1429dea10(void)

longlong FUN_1429dea10(void)

{
  if (DAT_146b25bb8 == 0) {
    FUN_141786a30(&DAT_146b25bb8,&PTR_FUN_146626830);
  }
  return DAT_146b25bb8;
}



// FUNCTION 1429dea40 FUN_1429dea40 body=47 status=ok
// SIG undefined FUN_1429dea40(void)

longlong FUN_1429dea40(void)

{
  if (DAT_146b25bc0 == 0) {
    FUN_141786a30(&DAT_146b25bc0,&PTR_FUN_146626930);
  }
  return DAT_146b25bc0;
}



// FUNCTION 1429dea70 FUN_1429dea70 body=47 status=ok
// SIG undefined FUN_1429dea70(void)

longlong FUN_1429dea70(void)

{
  if (DAT_146b25bc8 == 0) {
    FUN_141786a30(&DAT_146b25bc8,&PTR_FUN_146626ab0);
  }
  return DAT_146b25bc8;
}



// FUNCTION 1429deaa0 FUN_1429deaa0 body=47 status=ok
// SIG undefined FUN_1429deaa0(void)

longlong FUN_1429deaa0(void)

{
  if (DAT_146b25bd0 == 0) {
    FUN_141786a30(&DAT_146b25bd0,&PTR_FUN_146626b70);
  }
  return DAT_146b25bd0;
}



// FUNCTION 1429dead0 FUN_1429dead0 body=47 status=ok
// SIG undefined FUN_1429dead0(void)

longlong FUN_1429dead0(void)

{
  if (DAT_146b25bd8 == 0) {
    FUN_141786a30(&DAT_146b25bd8,&PTR_FUN_146626c30);
  }
  return DAT_146b25bd8;
}



// FUNCTION 1429deb00 FUN_1429deb00 body=47 status=ok
// SIG undefined FUN_1429deb00(void)

longlong FUN_1429deb00(void)

{
  if (DAT_146b25be0 == 0) {
    FUN_141786a30(&DAT_146b25be0,&PTR_FUN_146626d30);
  }
  return DAT_146b25be0;
}



// FUNCTION 1429deb30 FUN_1429deb30 body=47 status=ok
// SIG undefined FUN_1429deb30(void)

longlong FUN_1429deb30(void)

{
  if (DAT_146b25be8 == 0) {
    FUN_141786a30(&DAT_146b25be8,&PTR_FUN_146626e70);
  }
  return DAT_146b25be8;
}



// FUNCTION 1429deb60 FUN_1429deb60 body=47 status=ok
// SIG undefined FUN_1429deb60(void)

longlong FUN_1429deb60(void)

{
  if (DAT_146b25bf0 == 0) {
    FUN_141786a30(&DAT_146b25bf0,&PTR_FUN_146626f70);
  }
  return DAT_146b25bf0;
}



// FUNCTION 1429deb90 FUN_1429deb90 body=47 status=ok
// SIG undefined FUN_1429deb90(void)

longlong FUN_1429deb90(void)

{
  if (DAT_146b25bf8 == 0) {
    FUN_141786a30(&DAT_146b25bf8,&PTR_FUN_146626fb0);
  }
  return DAT_146b25bf8;
}



// FUNCTION 1429debc0 FUN_1429debc0 body=47 status=ok
// SIG undefined FUN_1429debc0(void)

longlong FUN_1429debc0(void)

{
  if (DAT_146b25c00 == 0) {
    FUN_141786a30(&DAT_146b25c00,&PTR_FUN_1466270b0);
  }
  return DAT_146b25c00;
}



// FUNCTION 1429debf0 FUN_1429debf0 body=53 status=ok
// SIG undefined FUN_1429debf0(void)

void FUN_1429debf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_145308130;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1429dec30 FUN_1429dec30 body=53 status=ok
// SIG undefined FUN_1429dec30(void)

void FUN_1429dec30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x670;
    *puVar1 = &PTR_FUN_145308248;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1429dec70 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimNode_RigidBody_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x660;
    *puVar1 = &PTR_FUN_145308360;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1429decc0 FUN_1429decc0 body=47 status=ok
// SIG undefined FUN_1429decc0(void)

longlong FUN_1429decc0(void)

{
  if (DAT_146b26078 == 0) {
    FUN_141786440(&DAT_146b26078,&PTR_thunk_FUN_1429e18b0_145304d00);
  }
  return DAT_146b26078;
}



// FUNCTION 1429decf0 FUN_1429decf0 body=47 status=ok
// SIG undefined FUN_1429decf0(void)

longlong FUN_1429decf0(void)

{
  if (DAT_146b25c48 == 0) {
    FUN_141786a30(&DAT_146b25c48,&PTR_FUN_146627d70);
  }
  return DAT_146b25c48;
}



// FUNCTION 1429ded20 FUN_1429ded20 body=47 status=ok
// SIG undefined FUN_1429ded20(void)

longlong FUN_1429ded20(void)

{
  if (DAT_146b25c50 == 0) {
    FUN_141786a30(&DAT_146b25c50,&PTR_FUN_146627db0);
  }
  return DAT_146b25c50;
}



// FUNCTION 1429ded50 FUN_1429ded50 body=47 status=ok
// SIG undefined FUN_1429ded50(void)

longlong FUN_1429ded50(void)

{
  if (DAT_146b25c58 == 0) {
    FUN_141786a30(&DAT_146b25c58,&PTR_FUN_146627df0);
  }
  return DAT_146b25c58;
}



// FUNCTION 1429ded80 FUN_1429ded80 body=47 status=ok
// SIG undefined FUN_1429ded80(void)

longlong FUN_1429ded80(void)

{
  if (DAT_146b25c60 == 0) {
    FUN_141786a30(&DAT_146b25c60,&PTR_FUN_146627e30);
  }
  return DAT_146b25c60;
}



// FUNCTION 1429dedb0 FUN_1429dedb0 body=47 status=ok
// SIG undefined FUN_1429dedb0(void)

longlong FUN_1429dedb0(void)

{
  if (DAT_146b25c68 == 0) {
    FUN_141786a30(&DAT_146b25c68,&PTR_FUN_146627e70);
  }
  return DAT_146b25c68;
}



// FUNCTION 1429dede0 FUN_1429dede0 body=47 status=ok
// SIG undefined FUN_1429dede0(void)

longlong FUN_1429dede0(void)

{
  if (DAT_146b25c70 == 0) {
    FUN_141786a30(&DAT_146b25c70,&PTR_FUN_146627f30);
  }
  return DAT_146b25c70;
}



// FUNCTION 1429dee10 FUN_1429dee10 body=47 status=ok
// SIG undefined FUN_1429dee10(void)

longlong FUN_1429dee10(void)

{
  if (DAT_146b25c78 == 0) {
    FUN_141786a30(&DAT_146b25c78,&PTR_FUN_146627f70);
  }
  return DAT_146b25c78;
}



// FUNCTION 1429dee40 FUN_1429dee40 body=47 status=ok
// SIG undefined FUN_1429dee40(void)

longlong FUN_1429dee40(void)

{
  if (DAT_146b25c80 == 0) {
    FUN_141786a30(&DAT_146b25c80,&PTR_FUN_146627fb0);
  }
  return DAT_146b25c80;
}



// FUNCTION 1429dee70 FUN_1429dee70 body=47 status=ok
// SIG undefined FUN_1429dee70(void)

longlong FUN_1429dee70(void)

{
  if (DAT_146b25c88 == 0) {
    FUN_141786a30(&DAT_146b25c88,&PTR_FUN_1466280b0);
  }
  return DAT_146b25c88;
}



// FUNCTION 1429deea0 FUN_1429deea0 body=47 status=ok
// SIG undefined FUN_1429deea0(void)

longlong FUN_1429deea0(void)

{
  if (DAT_146b25c90 == 0) {
    FUN_141786a30(&DAT_146b25c90,&PTR_FUN_1466280f0);
  }
  return DAT_146b25c90;
}



// FUNCTION 1429deed0 FUN_1429deed0 body=47 status=ok
// SIG undefined FUN_1429deed0(void)

longlong FUN_1429deed0(void)

{
  if (DAT_146b25c98 == 0) {
    FUN_141786a30(&DAT_146b25c98,&PTR_FUN_146628130);
  }
  return DAT_146b25c98;
}



// FUNCTION 1429def00 FUN_1429def00 body=47 status=ok
// SIG undefined FUN_1429def00(void)

longlong FUN_1429def00(void)

{
  if (DAT_146b25ca0 == 0) {
    FUN_141786a30(&DAT_146b25ca0,&PTR_FUN_146628170);
  }
  return DAT_146b25ca0;
}



// FUNCTION 1429def30 FUN_1429def30 body=47 status=ok
// SIG undefined FUN_1429def30(void)

longlong FUN_1429def30(void)

{
  if (DAT_146b25ca8 == 0) {
    FUN_141786a30(&DAT_146b25ca8,&PTR_FUN_1466281b0);
  }
  return DAT_146b25ca8;
}



// FUNCTION 1429def60 FUN_1429def60 body=47 status=ok
// SIG undefined FUN_1429def60(void)

longlong FUN_1429def60(void)

{
  if (DAT_146b25cb0 == 0) {
    FUN_141786a30(&DAT_146b25cb0,&PTR_FUN_146628270);
  }
  return DAT_146b25cb0;
}



// FUNCTION 1429def90 FUN_1429def90 body=47 status=ok
// SIG undefined FUN_1429def90(void)

longlong FUN_1429def90(void)

{
  if (DAT_146b25cb8 == 0) {
    FUN_141786a30(&DAT_146b25cb8,&PTR_FUN_1466282b0);
  }
  return DAT_146b25cb8;
}



// FUNCTION 1429defc0 FUN_1429defc0 body=47 status=ok
// SIG undefined FUN_1429defc0(void)

longlong FUN_1429defc0(void)

{
  if (DAT_146b25cc0 == 0) {
    FUN_141786a30(&DAT_146b25cc0,&PTR_FUN_1466282f0);
  }
  return DAT_146b25cc0;
}



// FUNCTION 1429deff0 FUN_1429deff0 body=47 status=ok
// SIG undefined FUN_1429deff0(void)

longlong FUN_1429deff0(void)

{
  if (DAT_146b25cc8 == 0) {
    FUN_141786a30(&DAT_146b25cc8,&PTR_FUN_146628330);
  }
  return DAT_146b25cc8;
}



// FUNCTION 1429df020 FUN_1429df020 body=47 status=ok
// SIG undefined FUN_1429df020(void)

longlong FUN_1429df020(void)

{
  if (DAT_146b25cd0 == 0) {
    FUN_141786a30(&DAT_146b25cd0,&PTR_FUN_146628430);
  }
  return DAT_146b25cd0;
}



// FUNCTION 1429df050 FUN_1429df050 body=47 status=ok
// SIG undefined FUN_1429df050(void)

longlong FUN_1429df050(void)

{
  if (DAT_146b25cd8 == 0) {
    FUN_141786a30(&DAT_146b25cd8,&PTR_FUN_146628470);
  }
  return DAT_146b25cd8;
}



// FUNCTION 1429df080 FUN_1429df080 body=47 status=ok
// SIG undefined FUN_1429df080(void)

longlong FUN_1429df080(void)

{
  if (DAT_146b25ce0 == 0) {
    FUN_141786a30(&DAT_146b25ce0,&PTR_FUN_146628530);
  }
  return DAT_146b25ce0;
}



// FUNCTION 1429df0b0 FUN_1429df0b0 body=47 status=ok
// SIG undefined FUN_1429df0b0(void)

longlong FUN_1429df0b0(void)

{
  if (DAT_146b25ce8 == 0) {
    FUN_141786a30(&DAT_146b25ce8,&PTR_FUN_1466285f0);
  }
  return DAT_146b25ce8;
}



// FUNCTION 1429df0e0 FUN_1429df0e0 body=47 status=ok
// SIG undefined FUN_1429df0e0(void)

longlong FUN_1429df0e0(void)

{
  if (DAT_146b25cf0 == 0) {
    FUN_141786a30(&DAT_146b25cf0,&PTR_FUN_146628630);
  }
  return DAT_146b25cf0;
}



// FUNCTION 1429df110 FUN_1429df110 body=47 status=ok
// SIG undefined FUN_1429df110(void)

longlong FUN_1429df110(void)

{
  if (DAT_146b25cf8 == 0) {
    FUN_141786a30(&DAT_146b25cf8,&PTR_FUN_1466286b0);
  }
  return DAT_146b25cf8;
}



// FUNCTION 1429df140 FUN_1429df140 body=47 status=ok
// SIG undefined FUN_1429df140(void)

longlong FUN_1429df140(void)

{
  if (DAT_146b25d00 == 0) {
    FUN_141786a30(&DAT_146b25d00,&PTR_FUN_146628920);
  }
  return DAT_146b25d00;
}



// FUNCTION 1429df170 FUN_1429df170 body=47 status=ok
// SIG undefined FUN_1429df170(void)

longlong FUN_1429df170(void)

{
  if (DAT_146b25d08 == 0) {
    FUN_141786a30(&DAT_146b25d08,&PTR_FUN_146628a60);
  }
  return DAT_146b25d08;
}



// FUNCTION 1429df1a0 FUN_1429df1a0 body=47 status=ok
// SIG undefined FUN_1429df1a0(void)

longlong FUN_1429df1a0(void)

{
  if (DAT_146b25d10 == 0) {
    FUN_141786a30(&DAT_146b25d10,&PTR_FUN_146628be0);
  }
  return DAT_146b25d10;
}



// FUNCTION 1429df1d0 FUN_1429df1d0 body=47 status=ok
// SIG undefined FUN_1429df1d0(void)

longlong FUN_1429df1d0(void)

{
  if (DAT_146b25d18 == 0) {
    FUN_141786a30(&DAT_146b25d18,&PTR_FUN_146628d60);
  }
  return DAT_146b25d18;
}



// FUNCTION 1429df200 FUN_1429df200 body=47 status=ok
// SIG undefined FUN_1429df200(void)

longlong FUN_1429df200(void)

{
  if (DAT_146b25d20 == 0) {
    FUN_141786a30(&DAT_146b25d20,&PTR_FUN_146628ea0);
  }
  return DAT_146b25d20;
}



// FUNCTION 1429df230 FUN_1429df230 body=47 status=ok
// SIG undefined FUN_1429df230(void)

longlong FUN_1429df230(void)

{
  if (DAT_146b25d28 == 0) {
    FUN_141786a30(&DAT_146b25d28,&PTR_FUN_146628f20);
  }
  return DAT_146b25d28;
}



// FUNCTION 1429df260 FUN_1429df260 body=47 status=ok
// SIG undefined FUN_1429df260(void)

longlong FUN_1429df260(void)

{
  if (DAT_146b25d30 == 0) {
    FUN_141786a30(&DAT_146b25d30,&PTR_FUN_146629050);
  }
  return DAT_146b25d30;
}



// FUNCTION 1429df290 FUN_1429df290 body=47 status=ok
// SIG undefined FUN_1429df290(void)

longlong FUN_1429df290(void)

{
  if (DAT_146b25d38 == 0) {
    FUN_141786a30(&DAT_146b25d38,&PTR_FUN_146629190);
  }
  return DAT_146b25d38;
}



// FUNCTION 1429df2c0 FUN_1429df2c0 body=47 status=ok
// SIG undefined FUN_1429df2c0(void)

longlong FUN_1429df2c0(void)

{
  if (DAT_146b25d40 == 0) {
    FUN_141786a30(&DAT_146b25d40,&PTR_FUN_146629290);
  }
  return DAT_146b25d40;
}



// FUNCTION 1429df2f0 FUN_1429df2f0 body=47 status=ok
// SIG undefined FUN_1429df2f0(void)

longlong FUN_1429df2f0(void)

{
  if (DAT_146b25d48 == 0) {
    FUN_141786a30(&DAT_146b25d48,&PTR_FUN_146629410);
  }
  return DAT_146b25d48;
}



// FUNCTION 1429df320 FUN_1429df320 body=47 status=ok
// SIG undefined FUN_1429df320(void)

longlong FUN_1429df320(void)

{
  if (DAT_146b25d50 == 0) {
    FUN_141786a30(&DAT_146b25d50,&PTR_FUN_146629490);
  }
  return DAT_146b25d50;
}



// FUNCTION 1429df350 FUN_1429df350 body=47 status=ok
// SIG undefined FUN_1429df350(void)

longlong FUN_1429df350(void)

{
  if (DAT_146b25d58 == 0) {
    FUN_141786a30(&DAT_146b25d58,&PTR_FUN_1466294d0);
  }
  return DAT_146b25d58;
}



// FUNCTION 1429df380 FUN_1429df380 body=47 status=ok
// SIG undefined FUN_1429df380(void)

longlong FUN_1429df380(void)

{
  if (DAT_146b25d60 == 0) {
    FUN_141786a30(&DAT_146b25d60,&PTR_FUN_146629550);
  }
  return DAT_146b25d60;
}



// FUNCTION 1429df3b0 FUN_1429df3b0 body=47 status=ok
// SIG undefined FUN_1429df3b0(void)

longlong FUN_1429df3b0(void)

{
  if (DAT_146b25d68 == 0) {
    FUN_141786a30(&DAT_146b25d68,&PTR_FUN_1466295d0);
  }
  return DAT_146b25d68;
}



// FUNCTION 1429df3e0 FUN_1429df3e0 body=47 status=ok
// SIG undefined FUN_1429df3e0(void)

longlong FUN_1429df3e0(void)

{
  if (DAT_146b25d70 == 0) {
    FUN_141786a30(&DAT_146b25d70,&PTR_FUN_146629610);
  }
  return DAT_146b25d70;
}



// FUNCTION 1429df410 FUN_1429df410 body=47 status=ok
// SIG undefined FUN_1429df410(void)

longlong FUN_1429df410(void)

{
  if (DAT_146b25d78 == 0) {
    FUN_141786a30(&DAT_146b25d78,&PTR_FUN_1466296c0);
  }
  return DAT_146b25d78;
}



// FUNCTION 1429df440 FUN_1429df440 body=47 status=ok
// SIG undefined FUN_1429df440(void)

longlong FUN_1429df440(void)

{
  if (DAT_146b25d80 == 0) {
    FUN_141786a30(&DAT_146b25d80,&PTR_FUN_146629700);
  }
  return DAT_146b25d80;
}



// FUNCTION 1429df470 FUN_1429df470 body=47 status=ok
// SIG undefined FUN_1429df470(void)

longlong FUN_1429df470(void)

{
  if (DAT_146b25d88 == 0) {
    FUN_141786a30(&DAT_146b25d88,&PTR_FUN_1466298c0);
  }
  return DAT_146b25d88;
}



// FUNCTION 1429df4a0 FUN_1429df4a0 body=47 status=ok
// SIG undefined FUN_1429df4a0(void)

longlong FUN_1429df4a0(void)

{
  if (DAT_146b25d90 == 0) {
    FUN_141786a30(&DAT_146b25d90,&PTR_FUN_146629900);
  }
  return DAT_146b25d90;
}



// FUNCTION 1429df4d0 FUN_1429df4d0 body=47 status=ok
// SIG undefined FUN_1429df4d0(void)

longlong FUN_1429df4d0(void)

{
  if (DAT_146b25d98 == 0) {
    FUN_141786a30(&DAT_146b25d98,&PTR_FUN_146629b40);
  }
  return DAT_146b25d98;
}



// FUNCTION 1429df500 FUN_1429df500 body=47 status=ok
// SIG undefined FUN_1429df500(void)

longlong FUN_1429df500(void)

{
  if (DAT_146b25da0 == 0) {
    FUN_141786a30(&DAT_146b25da0,&PTR_FUN_146629bc0);
  }
  return DAT_146b25da0;
}



// FUNCTION 1429df530 FUN_1429df530 body=47 status=ok
// SIG undefined FUN_1429df530(void)

longlong FUN_1429df530(void)

{
  if (DAT_146b25da8 == 0) {
    FUN_141786a30(&DAT_146b25da8,&PTR_FUN_146629c80);
  }
  return DAT_146b25da8;
}



// FUNCTION 1429df560 FUN_1429df560 body=47 status=ok
// SIG undefined FUN_1429df560(void)

longlong FUN_1429df560(void)

{
  if (DAT_146b25db0 == 0) {
    FUN_141786a30(&DAT_146b25db0,&PTR_FUN_146629d40);
  }
  return DAT_146b25db0;
}



// FUNCTION 1429df590 FUN_1429df590 body=47 status=ok
// SIG undefined FUN_1429df590(void)

longlong FUN_1429df590(void)

{
  if (DAT_146b25db8 == 0) {
    FUN_141786a30(&DAT_146b25db8,&PTR_FUN_146629e00);
  }
  return DAT_146b25db8;
}



// FUNCTION 1429df5c0 FUN_1429df5c0 body=47 status=ok
// SIG undefined FUN_1429df5c0(void)

longlong FUN_1429df5c0(void)

{
  if (DAT_146b25dc0 == 0) {
    FUN_141786a30(&DAT_146b25dc0,&PTR_FUN_146629ec0);
  }
  return DAT_146b25dc0;
}



// FUNCTION 1429df5f0 FUN_1429df5f0 body=47 status=ok
// SIG undefined FUN_1429df5f0(void)

longlong FUN_1429df5f0(void)

{
  if (DAT_146b25dc8 == 0) {
    FUN_141786a30(&DAT_146b25dc8,&PTR_FUN_146629f00);
  }
  return DAT_146b25dc8;
}



// FUNCTION 1429df620 FUN_1429df620 body=47 status=ok
// SIG undefined FUN_1429df620(void)

longlong FUN_1429df620(void)

{
  if (DAT_146b25dd0 == 0) {
    FUN_141786a30(&DAT_146b25dd0,&PTR_FUN_146629f80);
  }
  return DAT_146b25dd0;
}



// FUNCTION 1429df650 FUN_1429df650 body=47 status=ok
// SIG undefined FUN_1429df650(void)

longlong FUN_1429df650(void)

{
  if (DAT_146b25dd8 == 0) {
    FUN_141786a30(&DAT_146b25dd8,&PTR_FUN_14662a0c0);
  }
  return DAT_146b25dd8;
}



// FUNCTION 1429df680 FUN_1429df680 body=47 status=ok
// SIG undefined FUN_1429df680(void)

longlong FUN_1429df680(void)

{
  if (DAT_146b25de0 == 0) {
    FUN_141786a30(&DAT_146b25de0,&PTR_FUN_14662a140);
  }
  return DAT_146b25de0;
}



// FUNCTION 1429df6b0 FUN_1429df6b0 body=47 status=ok
// SIG undefined FUN_1429df6b0(void)

longlong FUN_1429df6b0(void)

{
  if (DAT_146b25de8 == 0) {
    FUN_141786a30(&DAT_146b25de8,&PTR_FUN_14662a180);
  }
  return DAT_146b25de8;
}



// FUNCTION 1429df6e0 FUN_1429df6e0 body=47 status=ok
// SIG undefined FUN_1429df6e0(void)

longlong FUN_1429df6e0(void)

{
  if (DAT_146b25df0 == 0) {
    FUN_141786a30(&DAT_146b25df0,&PTR_FUN_14662a200);
  }
  return DAT_146b25df0;
}



// FUNCTION 1429df710 FUN_1429df710 body=47 status=ok
// SIG undefined FUN_1429df710(void)

longlong FUN_1429df710(void)

{
  if (DAT_146b25df8 == 0) {
    FUN_141786a30(&DAT_146b25df8,&PTR_FUN_14662a340);
  }
  return DAT_146b25df8;
}



// FUNCTION 1429df740 FUN_1429df740 body=47 status=ok
// SIG undefined FUN_1429df740(void)

longlong FUN_1429df740(void)

{
  if (DAT_146b25e00 == 0) {
    FUN_141786a30(&DAT_146b25e00,&PTR_FUN_14662a480);
  }
  return DAT_146b25e00;
}



// FUNCTION 1429df770 FUN_1429df770 body=47 status=ok
// SIG undefined FUN_1429df770(void)

longlong FUN_1429df770(void)

{
  if (DAT_146b25e08 == 0) {
    FUN_141786a30(&DAT_146b25e08,&PTR_FUN_14662a500);
  }
  return DAT_146b25e08;
}



// FUNCTION 1429df7a0 FUN_1429df7a0 body=47 status=ok
// SIG undefined FUN_1429df7a0(void)

longlong FUN_1429df7a0(void)

{
  if (DAT_146b25e10 == 0) {
    FUN_141786a30(&DAT_146b25e10,&PTR_FUN_14662a6c0);
  }
  return DAT_146b25e10;
}



// FUNCTION 1429df7d0 FUN_1429df7d0 body=47 status=ok
// SIG undefined FUN_1429df7d0(void)

longlong FUN_1429df7d0(void)

{
  if (DAT_146b25e18 == 0) {
    FUN_141786a30(&DAT_146b25e18,&PTR_FUN_14662a740);
  }
  return DAT_146b25e18;
}



// FUNCTION 1429df800 FUN_1429df800 body=47 status=ok
// SIG undefined FUN_1429df800(void)

longlong FUN_1429df800(void)

{
  if (DAT_146b25e20 == 0) {
    FUN_141786a30(&DAT_146b25e20,&PTR_FUN_14662a780);
  }
  return DAT_146b25e20;
}



// FUNCTION 1429df830 FUN_1429df830 body=47 status=ok
// SIG undefined FUN_1429df830(void)

longlong FUN_1429df830(void)

{
  if (DAT_146b25e28 == 0) {
    FUN_141786a30(&DAT_146b25e28,&PTR_FUN_14662a7c0);
  }
  return DAT_146b25e28;
}



// FUNCTION 1429df860 FUN_1429df860 body=47 status=ok
// SIG undefined FUN_1429df860(void)

longlong FUN_1429df860(void)

{
  if (DAT_146b25e30 == 0) {
    FUN_141786a30(&DAT_146b25e30,&PTR_FUN_14662a840);
  }
  return DAT_146b25e30;
}



// FUNCTION 1429df890 FUN_1429df890 body=47 status=ok
// SIG undefined FUN_1429df890(void)

longlong FUN_1429df890(void)

{
  if (DAT_146b25e38 == 0) {
    FUN_141786a30(&DAT_146b25e38,&PTR_FUN_14662a980);
  }
  return DAT_146b25e38;
}



// FUNCTION 1429df8c0 FUN_1429df8c0 body=47 status=ok
// SIG undefined FUN_1429df8c0(void)

longlong FUN_1429df8c0(void)

{
  if (DAT_146b25e40 == 0) {
    FUN_141786a30(&DAT_146b25e40,&PTR_FUN_14662abc0);
  }
  return DAT_146b25e40;
}


