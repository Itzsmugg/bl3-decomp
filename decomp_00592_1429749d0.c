// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1429749d0 execGetAzimuthAndElevation body=467 status=ok
// SIG undefined execGetAzimuthAndElevation(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execGetAzimuthAndElevation(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined4 local_50;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = _DAT_146b20600 & _DAT_146b20610;
  uStack_24 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_20 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_1c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_78 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = &local_48;
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_74 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = &local_78;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_58 = local_70;
  puVar3 = &local_74;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_50 = local_68;
  FUN_142525d70(&local_58,puVar1,puVar2,puVar3);
  return;
}



// FUNCTION 142974bb0 execGetDate body=129 status=ok
// SIG undefined execGetDate(void)

longlong UKismetMathLibrary::execGetDate(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_res10[0] - local_res10[0] % 864000000000;
  return local_res10[0] / 864000000000;
}



// FUNCTION 142974c40 execGetDay body=122 status=ok
// SIG undefined execGetDay(void)

void UKismetMathLibrary::execGetDay(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_res18[0] = local_res10;
  uVar1 = FDateTime::GetDay(local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142974cc0 execGetDayOfYear body=122 status=ok
// SIG undefined execGetDayOfYear(void)

void UKismetMathLibrary::execGetDayOfYear(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_res18[0] = local_res10;
  uVar1 = FDateTime::GetDayOfYear(local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142974d40 execGetDays body=122 status=ok
// SIG undefined execGetDays(void)

void UKismetMathLibrary::execGetDays(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = (int)(local_res10[0] / 864000000000);
  return;
}



// FUNCTION 142974dc0 execGetDirectionUnitVector body=459 status=ok
// SIG undefined execGetDirectionUnitVector(void)

void UKismetMathLibrary::execGetDirectionUnitVector
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  
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
  local_58 = local_58 - local_48;
  fStack_54 = fStack_54 - local_44;
  local_50 = local_50 - local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  fVar1 = fStack_54 * fStack_54 + local_58 * local_58 + local_50 * local_50;
  if (fVar1 != 1.0) {
    if (fVar1 < 1e-08) {
      local_58 = DAT_1468b5d90;
      local_50 = DAT_1468b5d98;
      fStack_54 = DAT_1468b5d94;
    }
    else {
      auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
      fVar2 = auVar3._0_4_;
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      local_58 = local_58 * fVar2;
      fStack_54 = fStack_54 * fVar2;
      local_50 = local_50 * fVar2;
    }
  }
  *param_3 = CONCAT44(fStack_54,local_58);
  *(float *)(param_3 + 1) = local_50;
  return;
}



// FUNCTION 142974f90 execGetDuration body=116 status=ok
// SIG undefined execGetDuration(void)

void UKismetMathLibrary::execGetDuration(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (local_res10[0] < 0) {
    local_res10[0] = -local_res10[0];
  }
  *param_3 = local_res10[0];
  return;
}



// FUNCTION 142975010 execGetForwardVector body=149 status=ok
// SIG undefined execGetForwardVector(void)

void UKismetMathLibrary::execGetForwardVector
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  puVar1 = (undefined8 *)GetForwardVector(local_18,&local_28);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1429750b0 execGetHour12 body=122 status=ok
// SIG undefined execGetHour12(void)

void UKismetMathLibrary::execGetHour12(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_res18[0] = local_res10;
  uVar1 = FDateTime::GetHour12(local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142975130 execGetHour body=164 status=ok
// SIG undefined execGetHour(void)

longlong UKismetMathLibrary::execGetHour(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_res10[0] = local_res10[0] / 36000000000;
  *param_3 = (int)local_res10[0] + (int)(local_res10[0] / 0x18) * -0x18;
  return local_res10[0] * 0x2aaaaaaaaaaaaaab;
}



// FUNCTION 1429751e0 execGetMaxElement body=122 status=ok
// SIG undefined execGetMaxElement(void)

void UKismetMathLibrary::execGetMaxElement(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  if (local_14 <= local_18) {
    local_14 = local_18;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (local_14 <= local_10) {
    local_14 = local_10;
  }
  *param_3 = local_14;
  return;
}



// FUNCTION 142975260 execGetMillisecond body=171 status=ok
// SIG undefined execGetMillisecond(void)

void UKismetMathLibrary::execGetMillisecond(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = (int)(local_res10[0] / 10000) + (int)((local_res10[0] / 10000) / 1000) * -1000;
  return;
}



// FUNCTION 142975310 execGetMilliseconds body=174 status=ok
// SIG undefined execGetMilliseconds(void)

void UKismetMathLibrary::execGetMilliseconds
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_res10[0]),8) + local_res10[0];
  *param_3 = (int)((local_res10[0] + ((lVar1 >> 0x17) - (lVar1 >> 0x3f)) * -10000000) / 10000);
  return;
}



// FUNCTION 1429753c0 execGetMinElement body=122 status=ok
// SIG undefined execGetMinElement(void)

void UKismetMathLibrary::execGetMinElement(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  if (local_18 <= local_14) {
    local_14 = local_18;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (local_10 <= local_14) {
    local_14 = local_10;
  }
  *param_3 = local_14;
  return;
}



// FUNCTION 142975440 execGetMinute body=171 status=ok
// SIG undefined execGetMinute(void)

void UKismetMathLibrary::execGetMinute(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_res10[0] = local_res10[0] / 600000000;
  lVar1 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(local_res10[0]),8) + local_res10[0];
  *param_3 = (int)local_res10[0] + ((int)(lVar1 >> 5) - (int)(lVar1 >> 0x3f)) * -0x3c;
  return;
}



// FUNCTION 1429754f0 execGetMonth body=122 status=ok
// SIG undefined execGetMonth(void)

void UKismetMathLibrary::execGetMonth(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_res18[0] = local_res10;
  uVar1 = FDateTime::GetMonth(local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142975590 execGetPointDistanceToLine body=301 status=ok
// SIG undefined execGetPointDistanceToLine(void)

void UKismetMathLibrary::execGetPointDistanceToLine
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_28 = local_68;
  local_38 = local_58;
  local_18 = local_48;
  local_20 = local_60;
  local_30 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_40;
  uVar1 = FMath::PointDistToLine(&local_18,&local_28,&local_38);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429756c0 execGetPointDistanceToSegment body=301 status=ok
// SIG undefined execGetPointDistanceToSegment(void)

void UKismetMathLibrary::execGetPointDistanceToSegment
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_38 = local_68;
  local_28 = local_58;
  local_18 = local_48;
  local_30 = local_60;
  local_20 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_40;
  uVar1 = FMath::PointDistToSegment(&local_18,&local_28,&local_38);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1429757f0 execGetReflectionVector body=231 status=ok
// SIG undefined execGetReflectionVector(void)

void UKismetMathLibrary::execGetReflectionVector
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
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
  local_38 = local_58;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_30 = local_50;
  local_20 = local_40;
  puVar1 = (undefined8 *)GetReflectionVector(local_18,&local_28,&local_38);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1429758e0 execGetRightVector body=149 status=ok
// SIG undefined execGetRightVector(void)

void UKismetMathLibrary::execGetRightVector(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  puVar1 = (undefined8 *)GetRightVector(local_18,&local_28);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142975980 execGetSecond body=176 status=ok
// SIG undefined execGetSecond(void)

void UKismetMathLibrary::execGetSecond(undefined8 param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_res10[0] = local_res10[0] + SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(local_res10[0]),8)
  ;
  lVar2 = (local_res10[0] >> 0x17) - (local_res10[0] >> 0x3f);
  lVar1 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(lVar2),8) + lVar2;
  *param_3 = (int)lVar2 + ((int)(lVar1 >> 5) - (int)(lVar1 >> 0x3f)) * -0x3c;
  return;
}



// FUNCTION 142975a30 execGetSlopeDegreeAngles body=478 status=ok
// SIG undefined execGetSlopeDegreeAngles(void)

void UKismetMathLibrary::execGetSlopeDegreeAngles(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar6 = local_58;
  if (puVar1 != (undefined1 *)0x0) {
    puVar6 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar5 = local_48;
  if (puVar1 != (undefined1 *)0x0) {
    puVar5 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_38;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = local_res10;
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = puVar4;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar4 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  GetSlopeDegreeAngles(puVar6,puVar5,puVar2,puVar3,puVar4);
  return;
}



// FUNCTION 142975c30 execGetTimeOfDay body=123 status=ok
// SIG undefined execGetTimeOfDay(void)

longlong UKismetMathLibrary::execGetTimeOfDay(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_res10[0] % 864000000000;
  return local_res10[0] / 864000000000;
}



// FUNCTION 142975cb0 FUN_142975cb0 body=126 status=ok
// SIG undefined FUN_142975cb0(void)

void FUN_142975cb0(undefined8 param_1,longlong param_2,float *param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = (float)((double)local_res10[0] * 1.1574074074074074e-12);
  return;
}



// FUNCTION 142975d30 FUN_142975d30 body=126 status=ok
// SIG undefined FUN_142975d30(void)

void FUN_142975d30(undefined8 param_1,longlong param_2,float *param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = (float)((double)local_res10[0] * 2.7777777777777777e-11);
  return;
}



// FUNCTION 142975db0 FUN_142975db0 body=126 status=ok
// SIG undefined FUN_142975db0(void)

void FUN_142975db0(undefined8 param_1,longlong param_2,float *param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = (float)((double)local_res10[0] * 0.0001);
  return;
}



// FUNCTION 142975e30 FUN_142975e30 body=126 status=ok
// SIG undefined FUN_142975e30(void)

void FUN_142975e30(undefined8 param_1,longlong param_2,float *param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = (float)((double)local_res10[0] * 1.6666666666666667e-09);
  return;
}



// FUNCTION 142975eb0 FUN_142975eb0 body=126 status=ok
// SIG undefined FUN_142975eb0(void)

void FUN_142975eb0(undefined8 param_1,longlong param_2,float *param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = (float)((double)local_res10[0] * 1e-07);
  return;
}



// FUNCTION 142975f30 execGetUpVector body=149 status=ok
// SIG undefined execGetUpVector(void)

void UKismetMathLibrary::execGetUpVector(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  puVar1 = (undefined8 *)GetUpVector(local_18,&local_28);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142975fd0 execGetVectorArrayAverage body=179 status=ok
// SIG undefined execGetVectorArrayAverage(void)

void UKismetMathLibrary::execGetVectorArrayAverage
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_28 [16];
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
  plVar2 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)GetVectorArrayAverage(local_28,plVar2);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142976090 execGetYawPitchFromVector body=299 status=ok
// SIG undefined execGetYawPitchFromVector(void)

void UKismetMathLibrary::execGetYawPitchFromVector(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
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
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar1 = local_res10;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_18 = local_28;
  puVar2 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_20;
  GetYawPitchFromVector(&local_18,puVar1,puVar2);
  return;
}



// FUNCTION 1429761c0 execGetYear body=122 status=ok
// SIG undefined execGetYear(void)

void UKismetMathLibrary::execGetYear(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_res18[0] = local_res10;
  uVar1 = FDateTime::GetYear(local_res18);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142976240 execGreaterEqual_ByteByte body=178 status=ok
// SIG undefined execGreaterEqual_ByteByte(void)

void UKismetMathLibrary::execGreaterEqual_ByteByte
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte local_res10 [8];
  byte local_res18 [16];
  
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
  *(bool *)param_3 = local_res10[0] <= local_res18[0];
  return;
}



// FUNCTION 142976300 execGreaterEqual_DateTimeDateTime body=169 status=ok
// SIG undefined execGreaterEqual_DateTimeDateTime(void)

void UKismetMathLibrary::execGreaterEqual_DateTimeDateTime
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10;
  longlong local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  *(bool *)param_3 = local_res10 <= local_res18[0];
  return;
}



// FUNCTION 1429763b0 execGreaterEqual_FloatFloat body=186 status=ok
// SIG undefined execGreaterEqual_FloatFloat(void)

void UKismetMathLibrary::execGreaterEqual_FloatFloat
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  float local_res10 [2];
  float local_res18 [4];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(bool *)param_3 = local_res18[0] <= local_res10[0];
  return;
}



// FUNCTION 142976470 execGreaterEqual_IntInt body=184 status=ok
// SIG undefined execGreaterEqual_IntInt(void)

void UKismetMathLibrary::execGreaterEqual_IntInt
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int local_res10 [2];
  int local_res18 [2];
  
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
  *(bool *)param_3 = local_res10[0] <= local_res18[0];
  return;
}



// FUNCTION 142976530 execGreaterGreater_VectorRotator body=234 status=ok
// SIG undefined execGreaterGreater_VectorRotator(void)

void UKismetMathLibrary::execGreaterGreater_VectorRotator
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 local_58;
  undefined4 local_50;
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
  local_28 = local_58;
  local_38 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_50;
  local_30 = local_40;
  FRotator::RotateVector(&local_28,&local_18,&local_38);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 142976620 execGreater_ByteByte body=178 status=ok
// SIG undefined execGreater_ByteByte(void)

void UKismetMathLibrary::execGreater_ByteByte
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte local_res10 [8];
  byte local_res18 [16];
  
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
  *(bool *)param_3 = local_res10[0] < local_res18[0];
  return;
}



// FUNCTION 1429766e0 execGreater_DateTimeDateTime body=169 status=ok
// SIG undefined execGreater_DateTimeDateTime(void)

void UKismetMathLibrary::execGreater_DateTimeDateTime
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10;
  longlong local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  *(bool *)param_3 = local_res10 < local_res18[0];
  return;
}



// FUNCTION 142976790 execGreater_FloatFloat body=186 status=ok
// SIG undefined execGreater_FloatFloat(void)

void UKismetMathLibrary::execGreater_FloatFloat
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  float local_res10 [2];
  float local_res18 [4];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(bool *)param_3 = local_res18[0] < local_res10[0];
  return;
}



// FUNCTION 142976850 execGreater_IntInt body=184 status=ok
// SIG undefined execGreater_IntInt(void)

void UKismetMathLibrary::execGreater_IntInt(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int local_res10 [2];
  int local_res18 [2];
  
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
  *(bool *)param_3 = local_res10[0] < local_res18[0];
  return;
}



// FUNCTION 142976910 execGridSnap_Float body=256 status=ok
// SIG undefined execGridSnap_Float(void)

void UKismetMathLibrary::execGridSnap_Float(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float local_res10 [2];
  float local_res18 [4];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (local_res18[0] != 0.0) {
    fVar1 = (local_res18[0] * 0.5 + local_res10[0]) / local_res18[0];
    local_res10[0] = (float)((int)ROUND((fVar1 + fVar1) - 0.5) >> 1) * local_res18[0];
  }
  *param_3 = local_res10[0];
  return;
}



// FUNCTION 142976a10 execHSVToRGB body=365 status=ok
// SIG undefined execHSVToRGB(void)

void UKismetMathLibrary::execHSVToRGB(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_38[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_30 = local_res10[0];
  local_2c = local_res18[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = local_res20[0];
  local_24 = local_38[0];
  FLinearColor::HSVToLinearRGB(&local_30,&local_20);
  *param_3 = local_20;
  param_3[1] = uStack_18;
  return;
}



// FUNCTION 142976b80 execHSVToRGB_Vector body=213 status=ok
// SIG undefined execHSVToRGB_Vector(void)

void UKismetMathLibrary::execHSVToRGB_Vector(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar3 = local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_28 = local_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FLinearColor::HSVToLinearRGB(&local_28,local_18);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}



// FUNCTION 142976c60 execHypotenuse body=191 status=ok
// SIG undefined execHypotenuse(void)

void UKismetMathLibrary::execHypotenuse(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
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
  uVar1 = Hypotenuse(local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142976d20 execInRange_FloatFloat body=402 status=ok
// SIG undefined execInRange_FloatFloat(void)

void UKismetMathLibrary::execInRange_FloatFloat
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  local_24[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  local_28 = 0;
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
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = InRange_FloatFloat(local_24[0],local_28,local_res20[0],bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142976ec0 execInRange_IntInt body=382 status=ok
// SIG undefined execInRange_IntInt(void)

void UKismetMathLibrary::execInRange_IntInt(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  local_24[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  local_28 = 0;
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
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = InRange_IntInt(local_24[0],local_28,local_res20[0],bVar2,local_res18[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142977040 FUN_142977040 body=423 status=ok
// SIG undefined FUN_142977040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142977040(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  float local_78;
  float local_74;
  float local_70;
  float local_68 [3];
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = _DAT_146b20600 & _DAT_146b20610;
  uStack_44 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_40 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_3c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  local_68[2] = 0.0;
  uStack_5c = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pfVar1 = local_68;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar1 = *(float **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  fVar5 = *pfVar1 * _DAT_146b20660;
  fVar6 = pfVar1[1] * fRam0000000146b20664;
  fVar7 = pfVar1[2] * fRam0000000146b20668;
  fVar8 = pfVar1[3] * fRam0000000146b2066c;
  fVar2 = local_70 * fVar6 - local_74 * fVar7;
  fVar3 = local_78 * fVar7 - local_70 * fVar5;
  fVar4 = local_74 * fVar5 - local_78 * fVar6;
  fVar2 = fVar2 + fVar2;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  *param_3 = CONCAT44((fVar2 * fVar7 - fVar4 * fVar5) + fVar8 * fVar3 + local_74,
                      (fVar4 * fVar6 - fVar3 * fVar7) + fVar8 * fVar2 + local_78);
  *(float *)(param_3 + 1) = (fVar3 * fVar5 - fVar2 * fVar6) + fVar8 * fVar4 + local_70;
  return;
}



// FUNCTION 1429771f0 FUN_1429771f0 body=543 status=ok
// SIG undefined FUN_1429771f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429771f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 in_XMM5 [16];
  undefined1 auVar9 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_c8 [32];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98 [3];
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = _DAT_146b20600 & _DAT_146b20610;
  uStack_74 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_70 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_6c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_98[0] = 0.0;
  local_98[1] = 0.0;
  local_98[2] = 0.0;
  uStack_8c = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  pfVar4 = local_98;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar4 = *(float **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  auVar9 = *(undefined1 (*) [16])(pfVar4 + 8);
  fVar2 = auVar9._0_4_;
  fVar3 = auVar9._4_4_;
  fVar12 = auVar9._8_4_;
  fVar13 = *pfVar4 * _DAT_146b20660;
  fVar14 = pfVar4[1] * fRam0000000146b20664;
  fVar15 = pfVar4[2] * fRam0000000146b20668;
  fVar16 = pfVar4[3] * fRam0000000146b2066c;
  auVar9 = rcpps(in_XMM5,auVar9);
  fVar17 = (float)((uint)(local_a8 - pfVar4[4]) & _DAT_146b20610);
  fVar18 = (float)((uint)(local_a4 - pfVar4[5]) & uRam0000000146b20614);
  fVar19 = (float)((uint)(local_a0 - pfVar4[6]) & uRam0000000146b20618);
  fVar5 = fVar19 * fVar14 - fVar18 * fVar15;
  fVar6 = fVar17 * fVar15 - fVar19 * fVar13;
  fVar7 = fVar18 * fVar13 - fVar17 * fVar14;
  fVar8 = auVar9._0_4_;
  fVar10 = auVar9._4_4_;
  fVar11 = auVar9._8_4_;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar2;
  fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar3;
  fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar12;
  bVar1 = (float)((uint)fVar12 & uRam0000000146b20628) <= fRam0000000146b20658;
  fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar2;
  fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar3;
  fVar12 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar12;
  *param_3 = CONCAT44(((fVar5 * fVar15 - fVar7 * fVar13) + fVar16 * fVar6 + fVar18) *
                      (float)(-(uint)((float)((uint)fVar3 & uRam0000000146b20624) <=
                                     fRam0000000146b20654) & (uint)fVar10 ^ (uint)fVar10),
                      ((fVar7 * fVar14 - fVar6 * fVar15) + fVar16 * fVar5 + fVar17) *
                      (float)(-(uint)((float)((uint)fVar2 & _DAT_146b20620) <= _DAT_146b20650) &
                              (uint)fVar8 ^ (uint)fVar8));
  *(float *)(param_3 + 1) =
       ((fVar6 * fVar13 - fVar5 * fVar14) + fVar16 * fVar7 + fVar19) *
       (float)(-(uint)bVar1 & (uint)fVar12 ^ (uint)fVar12);
  return;
}



// FUNCTION 142977410 execInverseTransformRotation body=318 status=ok
// SIG undefined execInverseTransformRotation(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execInverseTransformRotation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = _DAT_146b20600 & _DAT_146b20610;
  uStack_34 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_30 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_2c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = &local_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_78 = local_88;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_70 = local_80;
  puVar1 = (undefined8 *)InverseTransformRotation(local_68,puVar2,&local_78);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142977550 execInvertTransform body=249 status=ok
// SIG undefined execInvertTransform(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execInvertTransform
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [48];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = _DAT_146b20600 & _DAT_146b20610;
  uStack_24 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_20 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_1c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar3 = &local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)InvertTransform(local_78,puVar3);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 142977650 execIsAfternoon body=170 status=ok
// SIG undefined execIsAfternoon(void)

void UKismetMathLibrary::execIsAfternoon(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(bool *)param_3 =
       0xb < (int)(local_res10[0] / 36000000000) +
             (int)((local_res10[0] / 36000000000) / 0x18) * -0x18;
  return;
}



// FUNCTION 142977700 execIsLeapYear body=125 status=ok
// SIG undefined execIsLeapYear(void)

void UKismetMathLibrary::execIsLeapYear(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FDateTime::IsLeapYear(local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142977780 execIsMorning body=170 status=ok
// SIG undefined execIsMorning(void)

void UKismetMathLibrary::execIsMorning(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10 [3];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(bool *)param_3 =
       (int)(local_res10[0] / 36000000000) + (int)((local_res10[0] / 36000000000) / 0x18) * -0x18 <
       0xc;
  return;
}



// FUNCTION 142977830 execIsPointInBox body=299 status=ok
// SIG undefined execIsPointInBox(void)

void UKismetMathLibrary::execIsPointInBox(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_38 = local_68;
  local_28 = local_58;
  local_18 = local_48;
  local_30 = local_60;
  local_20 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_10 = local_40;
  uVar1 = IsPointInBox(&local_18,&local_28,&local_38);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142977960 execIsPointInBoxWithTransform body=385 status=ok
// SIG undefined execIsPointInBoxWithTransform(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execIsPointInBoxWithTransform
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = _DAT_146b20600 & _DAT_146b20610;
  uStack_34 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_30 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_2c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = &local_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_78 = local_98;
  local_68 = local_88;
  local_70 = local_90;
  local_60 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = IsPointInBoxWithTransform(&local_68,puVar2,&local_78);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142977af0 execLerp body=260 status=ok
// SIG undefined execLerp(void)

void UKismetMathLibrary::execLerp(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = (local_res10[0] - local_res18[0]) * local_res20[0] + local_res18[0];
  return;
}



// FUNCTION 142977c00 execLessEqual_ByteByte body=178 status=ok
// SIG undefined execLessEqual_ByteByte(void)

void UKismetMathLibrary::execLessEqual_ByteByte
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte local_res10 [8];
  byte local_res18 [16];
  
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
  *(bool *)param_3 = local_res18[0] <= local_res10[0];
  return;
}



// FUNCTION 142977cc0 execLessEqual_DateTimeDateTime body=169 status=ok
// SIG undefined execLessEqual_DateTimeDateTime(void)

void UKismetMathLibrary::execLessEqual_DateTimeDateTime
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10;
  longlong local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  *(bool *)param_3 = local_res18[0] <= local_res10;
  return;
}



// FUNCTION 142977d70 execLessEqual_FloatFloat body=186 status=ok
// SIG undefined execLessEqual_FloatFloat(void)

void UKismetMathLibrary::execLessEqual_FloatFloat
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  float local_res10 [2];
  float local_res18 [4];
  
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(bool *)param_3 = local_res18[0] <= local_res10[0];
  return;
}



// FUNCTION 142977e30 execLessEqual_IntInt body=184 status=ok
// SIG undefined execLessEqual_IntInt(void)

void UKismetMathLibrary::execLessEqual_IntInt
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int local_res10 [2];
  int local_res18 [2];
  
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
  *(bool *)param_3 = local_res18[0] <= local_res10[0];
  return;
}



// FUNCTION 142977ef0 execLessLess_VectorRotator body=234 status=ok
// SIG undefined execLessLess_VectorRotator(void)

void UKismetMathLibrary::execLessLess_VectorRotator
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 local_58;
  undefined4 local_50;
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
  local_28 = local_58;
  local_38 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_50;
  local_30 = local_40;
  FRotator::UnrotateVector(&local_28,&local_18,&local_38);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 142977fe0 execLess_ByteByte body=178 status=ok
// SIG undefined execLess_ByteByte(void)

void UKismetMathLibrary::execLess_ByteByte(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte local_res10 [8];
  byte local_res18 [16];
  
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
  *(bool *)param_3 = local_res18[0] < local_res10[0];
  return;
}



// FUNCTION 1429780a0 execLess_DateTimeDateTime body=169 status=ok
// SIG undefined execLess_DateTimeDateTime(void)

void UKismetMathLibrary::execLess_DateTimeDateTime
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10;
  longlong local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  *(bool *)param_3 = local_res18[0] < local_res10;
  return;
}



// FUNCTION 142978150 execLess_FloatFloat body=186 status=ok
// SIG undefined execLess_FloatFloat(void)

void UKismetMathLibrary::execLess_FloatFloat(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  float local_res10 [2];
  float local_res18 [4];
  
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(bool *)param_3 = local_res18[0] < local_res10[0];
  return;
}



// FUNCTION 142978210 execLess_IntInt body=184 status=ok
// SIG undefined execLess_IntInt(void)

void UKismetMathLibrary::execLess_IntInt(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int local_res10 [2];
  int local_res18 [2];
  
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
  *(bool *)param_3 = local_res18[0] < local_res10[0];
  return;
}



// FUNCTION 1429782d0 execLinePlaneIntersection body=485 status=ok
// SIG undefined execLinePlaneIntersection(void)

void UKismetMathLibrary::execLinePlaneIntersection
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 local_res10 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar6 = local_68;
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = local_58;
  if (puVar5 != (undefined1 *)0x0) {
    puVar3 = puVar5;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar7 = local_38;
  if (puVar5 != (undefined1 *)0x0) {
    puVar7 = puVar5;
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar4 = local_res10;
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar5 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = LinePlaneIntersection(puVar6,puVar3,puVar7,puVar4,puVar5);
  *param_3 = uVar2;
  return;
}



// FUNCTION 1429784c0 execLinePlaneIntersection_OriginNormal body=539 status=ok
// SIG undefined execLinePlaneIntersection_OriginNormal(void)

void UKismetMathLibrary::execLinePlaneIntersection_OriginNormal
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 local_res10 [2];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar6 = local_78;
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar5 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = local_res10;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_48 = local_98;
  puVar4 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_38 = local_88;
  local_40 = local_90;
  local_30 = local_80;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = LinePlaneIntersection_OriginNormal(puVar6,puVar5,&local_38,&local_48,puVar3,puVar4);
  *param_3 = uVar2;
  return;
}



// FUNCTION 1429786e0 execLinearColorLerp body=352 status=ok
// SIG undefined execLinearColorLerp(void)

void UKismetMathLibrary::execLinearColorLerp(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_res10 [6];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = (local_38 - local_28) * local_res10[0] + local_28;
  param_3[1] = (local_34 - local_24) * local_res10[0] + local_24;
  param_3[2] = (local_30 - local_20) * local_res10[0] + local_20;
  param_3[3] = (local_2c - local_1c) * local_res10[0] + local_1c;
  return;
}



// FUNCTION 142978840 execLinearColorLerpUsingHSV body=288 status=ok
// SIG undefined execLinearColorLerpUsingHSV(void)

void UKismetMathLibrary::execLinearColorLerpUsingHSV
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [6];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_38 = local_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FLinearColor::LerpUsingHSV(&local_18,&local_28,&local_38,local_res10[0]);
  *param_3 = local_18;
  param_3[1] = uStack_10;
  return;
}



// FUNCTION 142978960 execLog body=191 status=ok
// SIG undefined execLog(void)

void UKismetMathLibrary::execLog(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
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
  uVar1 = Log(local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142978a20 FUN_142978a20 body=124 status=ok
// SIG undefined FUN_142978a20(void)

void FUN_142978a20(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  fVar1 = _guard_xfg_dispatch_icall_nop(local_res10[0]);
  *param_3 = fVar1;
  return;
}



// FUNCTION 142978aa0 execMakeBox2D body=207 status=ok
// SIG undefined execMakeBox2D(void)

void UKismetMathLibrary::execMakeBox2D(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 local_res10;
  undefined4 local_res14;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined4 local_18;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  local_18 = CONCAT31(local_18._1_3_,1);
  *param_3 = local_res18;
  param_3[1] = uStackX_1c;
  param_3[2] = local_res10;
  param_3[3] = local_res14;
  param_3[4] = local_18;
  return;
}



// FUNCTION 142978b70 execMakeBox body=223 status=ok
// SIG undefined execMakeBox(void)

void UKismetMathLibrary::execMakeBox(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  uStack_1c = local_38._0_4_;
  uStack_18 = local_38._4_4_;
  local_10 = CONCAT31(local_10._1_3_,1);
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = local_40;
  param_3[3] = uStack_1c;
  *(ulonglong *)(param_3 + 4) = CONCAT44(local_30,uStack_18);
  param_3[6] = local_10;
  return;
}



// FUNCTION 142978c50 execMakeColor body=349 status=ok
// SIG undefined execMakeColor(void)

void UKismetMathLibrary::execMakeColor(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28 [8];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
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
  *param_3 = local_res10[0];
  param_3[1] = local_res18[0];
  param_3[2] = local_res20[0];
  param_3[3] = local_28[0];
  return;
}



// FUNCTION 142978db0 execMakeDateTime body=489 status=ok
// SIG undefined execMakeDateTime(void)

void UKismetMathLibrary::execMakeDateTime(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [16];
  
  local_2c = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_2c);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_30);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_34);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  puVar1 = (undefined8 *)
           MakeDateTime(local_28,local_2c,local_30,local_34,local_38,local_res20[0],local_res18[0],
                        local_res10[0]);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142978fa0 execMakePlaneFromPointAndNormal body=224 status=ok
// SIG undefined execMakePlaneFromPointAndNormal(void)

void UKismetMathLibrary::execMakePlaneFromPointAndNormal
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
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
  local_38 = local_58;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_30 = local_50;
  local_20 = local_40;
  puVar2 = (undefined8 *)MakePlaneFromPointAndNormal(local_18,&local_28,&local_38);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  return;
}



// FUNCTION 142979080 execMakePulsatingValue body=259 status=ok
// SIG undefined execMakePulsatingValue(void)

void UKismetMathLibrary::execMakePulsatingValue
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  uVar1 = MakePulsatingValue(local_res20[0],local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 142979190 execMakeRandomStream body=134 status=ok
// SIG undefined execMakeRandomStream(void)

void UKismetMathLibrary::execMakeRandomStream
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  
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
  puVar1 = (undefined8 *)MakeRandomStream(local_res18,local_res10[0]);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142979220 execMakeRotFromX body=178 status=ok
// SIG undefined execMakeRotFromX(void)

void UKismetMathLibrary::execMakeRotFromX(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FRotationMatrix::MakeFromX(local_48,puVar2);
  FMatrix::Rotator(uVar1,&local_58);
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  return;
}



// FUNCTION 1429792e0 execMakeRotFromXY body=264 status=ok
// SIG undefined execMakeRotFromXY(void)

void UKismetMathLibrary::execMakeRotFromXY(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_78;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FRotationMatrix::MakeFromXY(local_48,puVar2,puVar3);
  FMatrix::Rotator(uVar1,&local_58);
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  return;
}



// FUNCTION 1429793f0 execMakeRotFromXZ body=264 status=ok
// SIG undefined execMakeRotFromXZ(void)

void UKismetMathLibrary::execMakeRotFromXZ(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_78;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FRotationMatrix::MakeFromXZ(local_48,puVar2,puVar3);
  FMatrix::Rotator(uVar1,&local_58);
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  return;
}



// FUNCTION 142979500 execMakeRotFromY body=178 status=ok
// SIG undefined execMakeRotFromY(void)

void UKismetMathLibrary::execMakeRotFromY(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FRotationMatrix::MakeFromY(local_48,puVar2);
  FMatrix::Rotator(uVar1,&local_58);
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  return;
}



// FUNCTION 1429795c0 execMakeRotFromYX body=264 status=ok
// SIG undefined execMakeRotFromYX(void)

void UKismetMathLibrary::execMakeRotFromYX(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_78;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FRotationMatrix::MakeFromYX(local_48,puVar2,puVar3);
  FMatrix::Rotator(uVar1,&local_58);
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  return;
}



// FUNCTION 1429796d0 execMakeRotFromYZ body=264 status=ok
// SIG undefined execMakeRotFromYZ(void)

void UKismetMathLibrary::execMakeRotFromYZ(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_78;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FRotationMatrix::MakeFromYZ(local_48,puVar2,puVar3);
  FMatrix::Rotator(uVar1,&local_58);
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  return;
}



// FUNCTION 1429797e0 execMakeRotFromZ body=178 status=ok
// SIG undefined execMakeRotFromZ(void)

void UKismetMathLibrary::execMakeRotFromZ(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar2 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FRotationMatrix::MakeFromZ(local_48,puVar2);
  FMatrix::Rotator(uVar1,&local_58);
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  return;
}



// FUNCTION 1429798a0 execMakeRotFromZX body=264 status=ok
// SIG undefined execMakeRotFromZX(void)

void UKismetMathLibrary::execMakeRotFromZX(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_78;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FRotationMatrix::MakeFromZX(local_48,puVar2,puVar3);
  FMatrix::Rotator(uVar1,&local_58);
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  return;
}



// FUNCTION 1429799b0 execMakeRotFromZY body=264 status=ok
// SIG undefined execMakeRotFromZY(void)

void UKismetMathLibrary::execMakeRotFromZY(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [64];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_78;
  if (puVar3 != (undefined1 *)0x0) {
    puVar2 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar3 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FRotationMatrix::MakeFromZY(local_48,puVar2,puVar3);
  FMatrix::Rotator(uVar1,&local_58);
  *param_3 = local_58;
  *(undefined4 *)(param_3 + 1) = local_50;
  return;
}



// FUNCTION 142979ac0 execMakeRotationFromAxes body=319 status=ok
// SIG undefined execMakeRotationFromAxes(void)

void UKismetMathLibrary::execMakeRotationFromAxes
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_48 = local_78;
  local_38 = local_68;
  local_28 = local_58;
  local_40 = local_70;
  local_30 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_50;
  puVar1 = (undefined8 *)MakeRotationFromAxes(local_18,&local_28,&local_38,&local_48);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 142979c00 execMakeRotator body=270 status=ok
// SIG undefined execMakeRotator(void)

void UKismetMathLibrary::execMakeRotator(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  *param_3 = CONCAT44(local_res10[0],local_res20[0]);
  *(undefined4 *)(param_3 + 1) = local_res18[0];
  return;
}



// FUNCTION 142979d10 execMakeTimespan2 body=373 status=ok
// SIG undefined execMakeTimespan2(void)

void UKismetMathLibrary::execMakeTimespan2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  
  local_24 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
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
  puVar1 = (undefined8 *)
           MakeTimespan2(local_20,local_24,local_28,local_res20[0],local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 142979e90 execMakeTimespan body=373 status=ok
// SIG undefined execMakeTimespan(void)

void UKismetMathLibrary::execMakeTimespan(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  
  local_24 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_24);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
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
  puVar1 = (undefined8 *)
           MakeTimespan(local_20,local_24,local_28,local_res20[0],local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 14297a010 execMakeTransform body=405 status=ok
// SIG undefined execMakeTransform(void)

void UKismetMathLibrary::execMakeTransform(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 local_b8 [12];
  undefined1 local_a8 [12];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_88 = local_98;
  local_80 = local_90;
  FRotator::Quaternion(&local_88,&local_78);
  *param_3 = local_78;
  param_3[1] = uStack_70;
  auVar1._12_4_ = 0;
  auVar1._0_12_ = local_b8;
  *(undefined1 (*) [16])(param_3 + 4) = auVar1;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = local_a8;
  *(undefined1 (*) [16])(param_3 + 2) = auVar2;
  return;
}



// FUNCTION 14297a1b0 execMakeVector2D body=189 status=ok
// SIG undefined execMakeVector2D(void)

void UKismetMathLibrary::execMakeVector2D(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  
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
  *param_3 = CONCAT44(local_res10[0],local_res18[0]);
  return;
}



// FUNCTION 14297a270 execMakeVector body=270 status=ok
// SIG undefined execMakeVector(void)

void UKismetMathLibrary::execMakeVector(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
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
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = CONCAT44(local_res10[0],local_res20[0]);
  *(undefined4 *)(param_3 + 1) = local_res18[0];
  return;
}



// FUNCTION 14297a380 execMapRangeClamped body=401 status=ok
// SIG undefined execMapRangeClamped(void)

void UKismetMathLibrary::execMapRangeClamped
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14 [3];
  
  local_14[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_14);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_14);
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
  uVar1 = MapRangeClamped(local_14[0],local_18,local_res20[0],local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14297a520 execMapRangeUnclamped body=401 status=ok
// SIG undefined execMapRangeUnclamped(void)

void UKismetMathLibrary::execMapRangeUnclamped
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_18;
  undefined4 local_14 [3];
  
  local_14[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_14);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_14);
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
  uVar1 = MapRangeUnclamped(local_14[0],local_18,local_res20[0],local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14297a6c0 execMax body=186 status=ok
// SIG undefined execMax(void)

void UKismetMathLibrary::execMax(undefined8 param_1,longlong param_2,int *param_3)

{
  int local_res10 [2];
  int local_res18 [2];
  
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
  if (local_res10[0] <= local_res18[0]) {
    local_res10[0] = local_res18[0];
  }
  *param_3 = local_res10[0];
  return;
}



// FUNCTION 14297a780 execMaxOfByteArray body=312 status=ok
// SIG undefined execMaxOfByteArray(void)

void UKismetMathLibrary::execMaxOfByteArray(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 local_res10 [16];
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  plVar3 = local_28;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar4 = local_res20;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar5 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  MaxOfByteArray(plVar3,puVar4,puVar5);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14297a8c0 execMaxOfFloatArray body=316 status=ok
// SIG undefined execMaxOfFloatArray(void)

void UKismetMathLibrary::execMaxOfFloatArray(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  plVar3 = local_28;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_res10;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = puVar4;
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar4 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  MaxOfFloatArray(plVar3,puVar2,puVar4);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14297aa00 execMaxOfIntArray body=311 status=ok
// SIG undefined execMaxOfIntArray(void)

void UKismetMathLibrary::execMaxOfIntArray(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  plVar2 = local_28;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = local_res10;
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = puVar4;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar4 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  MaxOfIntArray(plVar2,puVar3,puVar4);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14297ab40 execMin body=186 status=ok
// SIG undefined execMin(void)

void UKismetMathLibrary::execMin(undefined8 param_1,longlong param_2,int *param_3)

{
  int local_res10 [2];
  int local_res18 [2];
  
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
  if (local_res18[0] <= local_res10[0]) {
    local_res10[0] = local_res18[0];
  }
  *param_3 = local_res10[0];
  return;
}



// FUNCTION 14297ac00 execMinOfByteArray body=312 status=ok
// SIG undefined execMinOfByteArray(void)

void UKismetMathLibrary::execMinOfByteArray(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 local_res10 [16];
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  plVar3 = local_28;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar4 = local_res20;
  if (puVar2 != (undefined4 *)0x0) {
    puVar4 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar5 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  MinOfByteArray(plVar3,puVar4,puVar5);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14297ad40 execMinOfFloatArray body=316 status=ok
// SIG undefined execMinOfFloatArray(void)

void UKismetMathLibrary::execMinOfFloatArray(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  plVar3 = local_28;
  if (plVar1 != (longlong *)0x0) {
    plVar3 = plVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_res10;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = puVar4;
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar4 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  MinOfFloatArray(plVar3,puVar2,puVar4);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14297ae80 execMinOfIntArray body=311 status=ok
// SIG undefined execMinOfIntArray(void)

void UKismetMathLibrary::execMinOfIntArray(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  plVar2 = local_28;
  if (plVar1 != (longlong *)0x0) {
    plVar2 = plVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = local_res10;
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = puVar4;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar4 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  MinOfIntArray(plVar2,puVar3,puVar4);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14297afc0 execMinimumAreaRectangle body=684 status=ok
// SIG undefined execMinimumAreaRectangle(void)

void UKismetMathLibrary::execMinimumAreaRectangle(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  int local_98 [2];
  undefined8 local_90;
  longlong *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  longlong local_50 [3];
  
  local_90 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
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
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_88 = local_50;
  if (plVar1 != (longlong *)0x0) {
    local_88 = plVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar5 = local_80;
  if (puVar2 != (undefined1 *)0x0) {
    puVar5 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar4 = local_70;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar7 = local_60;
  if (puVar2 != (undefined1 *)0x0) {
    puVar7 = puVar2;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar6 = local_res10;
  if (puVar3 != (undefined4 *)0x0) {
    puVar6 = puVar3;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_98[0] = 0;
  puVar3 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
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
  FUN_1425308e0(local_90,local_88,puVar5,puVar4,puVar7,puVar6,puVar3,local_98[0] != 0);
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14297b270 execMirrorVectorByNormal body=234 status=ok
// SIG undefined execMirrorVectorByNormal(void)

void UKismetMathLibrary::execMirrorVectorByNormal
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 local_58;
  undefined4 local_50;
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
  local_38 = local_58;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_30 = local_50;
  local_20 = local_40;
  FMath::GetReflectionVector(&local_18,&local_28,&local_38);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 14297b360 FUN_14297b360 body=127 status=ok
// SIG undefined FUN_14297b360(void)

void FUN_14297b360(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_res10[0] * 3.1415927;
  return;
}



// FUNCTION 14297b3e0 execMultiplyMultiply_FloatFloat body=191 status=ok
// SIG undefined execMultiplyMultiply_FloatFloat(void)

void UKismetMathLibrary::execMultiplyMultiply_FloatFloat
               (undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float local_res10 [2];
  float local_res18 [4];
  
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  fVar1 = ::_guard_xfg_dispatch_icall_nop(local_res18[0],local_res10[0]);
  *param_3 = fVar1;
  return;
}



// FUNCTION 14297b4a0 execMultiply_ByteByte body=179 status=ok
// SIG undefined execMultiply_ByteByte(void)

void UKismetMathLibrary::execMultiply_ByteByte(undefined8 param_1,longlong param_2,char *param_3)

{
  char local_res10 [8];
  char local_res18 [16];
  
  local_res10[0] = '\0';
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = '\0';
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_res18[0] * local_res10[0];
  return;
}



// FUNCTION 14297b560 execMultiply_FloatFloat body=186 status=ok
// SIG undefined execMultiply_FloatFloat(void)

void UKismetMathLibrary::execMultiply_FloatFloat(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_res10 [2];
  float local_res18 [4];
  
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_res10[0] * local_res18[0];
  return;
}



// FUNCTION 14297b620 execMultiply_IntFloat body=195 status=ok
// SIG undefined execMultiply_IntFloat(void)

void UKismetMathLibrary::execMultiply_IntFloat(undefined8 param_1,longlong param_2,float *param_3)

{
  int local_res10 [2];
  float local_res18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = (float)local_res10[0] * local_res18[0];
  return;
}



// FUNCTION 14297b6f0 execMultiply_IntInt body=182 status=ok
// SIG undefined execMultiply_IntInt(void)

void UKismetMathLibrary::execMultiply_IntInt(undefined8 param_1,longlong param_2,int *param_3)

{
  int local_res10 [2];
  int local_res18 [2];
  
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
  *param_3 = local_res10[0] * local_res18[0];
  return;
}



// FUNCTION 14297b7b0 execMultiply_LinearColorFloat body=240 status=ok
// SIG undefined execMultiply_LinearColorFloat(void)

void UKismetMathLibrary::execMultiply_LinearColorFloat
               (undefined8 param_1,longlong param_2,float *param_3)

{
  float local_res10 [6];
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_18 * local_res10[0];
  param_3[1] = local_14 * local_res10[0];
  param_3[2] = local_10 * local_res10[0];
  param_3[3] = local_c * local_res10[0];
  return;
}



// FUNCTION 14297b8a0 execMultiply_LinearColorLinearColor body=233 status=ok
// SIG undefined execMultiply_LinearColorLinearColor(void)

void UKismetMathLibrary::execMultiply_LinearColorLinearColor
               (undefined8 param_1,longlong param_2,float *param_3)

{
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_28 * local_18;
  param_3[1] = local_24 * local_14;
  param_3[2] = local_20 * local_10;
  param_3[3] = local_1c * local_c;
  return;
}



// FUNCTION 14297b990 execMultiply_RotatorFloat body=222 status=ok
// SIG undefined execMultiply_RotatorFloat(void)

void UKismetMathLibrary::execMultiply_RotatorFloat
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float local_res10 [6];
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = CONCAT44(local_14 * local_res10[0],local_18 * local_res10[0]);
  *(float *)(param_3 + 1) = local_10 * local_res10[0];
  return;
}



// FUNCTION 14297ba70 execMultiply_RotatorInt body=230 status=ok
// SIG undefined execMultiply_RotatorInt(void)

void UKismetMathLibrary::execMultiply_RotatorInt
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  int local_res10 [2];
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  fVar1 = (float)local_res10[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = CONCAT44(local_14 * fVar1,local_18 * fVar1);
  *(float *)(param_3 + 1) = local_10 * fVar1;
  return;
}



// FUNCTION 14297bb60 execMultiply_TimespanFloat body=194 status=ok
// SIG undefined execMultiply_TimespanFloat(void)

void UKismetMathLibrary::execMultiply_TimespanFloat
               (undefined8 param_1,longlong param_2,longlong *param_3)

{
  float local_res10 [2];
  longlong local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = (longlong)(local_res10[0] * (float)local_res18[0]);
  return;
}



// FUNCTION 14297bc30 execMultiply_Vector2DFloat body=194 status=ok
// SIG undefined execMultiply_Vector2DFloat(void)

void UKismetMathLibrary::execMultiply_Vector2DFloat
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float local_res10 [2];
  float local_res18;
  float local_res1c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = CONCAT44(local_res1c * local_res10[0],local_res18 * local_res10[0]);
  return;
}



// FUNCTION 14297bd00 execMultiply_Vector2DVector2D body=185 status=ok
// SIG undefined execMultiply_Vector2DVector2D(void)

void UKismetMathLibrary::execMultiply_Vector2DVector2D
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = CONCAT44(local_res14 * local_res1c,local_res10 * local_res18);
  return;
}



// FUNCTION 14297bdc0 execMultiply_VectorVector body=210 status=ok
// SIG undefined execMultiply_VectorVector(void)

void UKismetMathLibrary::execMultiply_VectorVector
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = CONCAT44(local_24 * local_14,local_28 * local_18);
  *(float *)(param_3 + 1) = local_20 * local_10;
  return;
}



// FUNCTION 14297bea0 execNearlyEqual_FloatFloat body=265 status=ok
// SIG undefined execNearlyEqual_FloatFloat(void)

void UKismetMathLibrary::execNearlyEqual_FloatFloat
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res20[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(bool *)param_3 = ABS(local_res10[0] - local_res18[0]) <= local_res20[0];
  return;
}



// FUNCTION 14297bfb0 execNearlyEqual_TransformTransform body=533 status=ok
// SIG undefined execNearlyEqual_TransformTransform(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execNearlyEqual_TransformTransform
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0 [2];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = _DAT_146b20600 & _DAT_146b20610;
  uStack_84 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_80 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_7c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_58 = _DAT_146b20600 & _DAT_146b20610;
  uStack_54 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_50 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_4c = uRam0000000146b2060c & uRam0000000146b2061c;
  puVar3 = &local_a8;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = uRam0000000146b2060c;
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_b0[0] = 0;
  puVar2 = &local_78;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b0);
  }
  local_b4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  local_b8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  local_c8 = local_b8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = NearlyEqual_TransformTransform(puVar3,puVar2,local_b0[0],local_b4);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14297c1d0 execNegateRotator body=152 status=ok
// SIG undefined execNegateRotator(void)

void UKismetMathLibrary::execNegateRotator(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
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
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  FRotator::GetInverse(&local_28,&local_18);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 14297c270 execNegateVector body=158 status=ok
// SIG undefined execNegateVector(void)

void UKismetMathLibrary::execNegateVector(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong local_18;
  uint local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_18 ^ 0x8000000080000000;
  *(uint *)(param_3 + 1) = local_10 ^ 0x80000000;
  return;
}



// FUNCTION 14297c310 execNormal2D body=274 status=ok
// SIG undefined execNormal2D(void)

void UKismetMathLibrary::execNormal2D(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float local_res10;
  float local_res14;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  fVar1 = local_res14 * local_res14 + local_res10 * local_res10;
  if (fVar1 <= 1e-08) {
    local_res10 = 0.0;
    local_res14 = 0.0;
  }
  else {
    auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar2 = auVar3._0_4_;
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    local_res10 = local_res10 * fVar2;
    local_res14 = local_res14 * fVar2;
  }
  *param_3 = CONCAT44(local_res14,local_res10);
  return;
}



// FUNCTION 14297c430 execNormal body=383 status=ok
// SIG undefined execNormal(void)

void UKismetMathLibrary::execNormal(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float local_48;
  float fStack_44;
  float local_40;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  fVar1 = fStack_44 * fStack_44 + local_48 * local_48 + local_40 * local_40;
  if (fVar1 != 1.0) {
    if (fVar1 < 1e-08) {
      local_48 = DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
      fStack_44 = DAT_1468b5d94;
    }
    else {
      auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
      fVar2 = auVar3._0_4_;
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
      local_48 = local_48 * fVar2;
      fStack_44 = fStack_44 * fVar2;
      local_40 = local_40 * fVar2;
    }
  }
  *param_3 = CONCAT44(fStack_44,local_48);
  *(float *)(param_3 + 1) = local_40;
  return;
}



// FUNCTION 14297c5b0 execNormalizeAxis body=124 status=ok
// SIG undefined execNormalizeAxis(void)

void UKismetMathLibrary::execNormalizeAxis(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = NormalizeAxis(local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14297c630 execNormalizeToRange body=259 status=ok
// SIG undefined execNormalizeToRange(void)

void UKismetMathLibrary::execNormalizeToRange
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  uVar1 = NormalizeToRange(local_res20[0],local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14297c740 execNormalizedDeltaRotator body=231 status=ok
// SIG undefined execNormalizedDeltaRotator(void)

void UKismetMathLibrary::execNormalizedDeltaRotator
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
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
  local_38 = local_58;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_30 = local_50;
  local_20 = local_40;
  puVar1 = (undefined8 *)NormalizedDeltaRotator(local_18,&local_28,&local_38);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14297c830 execNotEqual_BoolBool body=200 status=ok
// SIG undefined execNotEqual_BoolBool(void)

void UKismetMathLibrary::execNotEqual_BoolBool
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] == 0;
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(bool *)param_3 = bVar1 != (local_res18[0] == 0);
  return;
}



// FUNCTION 14297c900 execNotEqual_ByteByte body=178 status=ok
// SIG undefined execNotEqual_ByteByte(void)

void UKismetMathLibrary::execNotEqual_ByteByte
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char local_res10 [8];
  char local_res18 [16];
  
  local_res18[0] = '\0';
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = '\0';
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *(bool *)param_3 = local_res18[0] != local_res10[0];
  return;
}



// FUNCTION 14297c9c0 execNotEqual_ClassClass body=188 status=ok
// SIG undefined execNotEqual_ClassClass(void)

void UKismetMathLibrary::execNotEqual_ClassClass
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10;
  longlong local_res18;
  
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
  *(bool *)param_3 = local_res18 != local_res10;
  return;
}



// FUNCTION 14297ca80 execNotEqual_DateTimeDateTime body=169 status=ok
// SIG undefined execNotEqual_DateTimeDateTime(void)

void UKismetMathLibrary::execNotEqual_DateTimeDateTime
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10;
  longlong local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  *(bool *)param_3 = local_res18[0] != local_res10;
  return;
}



// FUNCTION 14297cb30 execNotEqual_FloatFloat body=200 status=ok
// SIG undefined execNotEqual_FloatFloat(void)

void UKismetMathLibrary::execNotEqual_FloatFloat
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  float local_res10 [2];
  float local_res18 [4];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (local_res10[0] != local_res18[0]) {
    *param_3 = 1;
    return;
  }
  *param_3 = 0;
  return;
}



// FUNCTION 14297cc00 execNotEqual_IntInt body=184 status=ok
// SIG undefined execNotEqual_IntInt(void)

void UKismetMathLibrary::execNotEqual_IntInt(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int local_res10 [2];
  int local_res18 [2];
  
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
  *(bool *)param_3 = local_res18[0] != local_res10[0];
  return;
}



// FUNCTION 14297ccc0 FUN_14297ccc0 body=399 status=ok
// SIG undefined FUN_14297ccc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14297ccc0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res10 [6];
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  lVar1 = *(longlong *)(param_2 + 0x20);
  *(ulonglong *)(param_2 + 0x20) = (ulonglong)(lVar1 != 0) + lVar1;
  fVar2 = (float)DAT_146b20640;
  fVar3 = DAT_146b20640._4_4_;
  fVar4 = DAT_146b20640._8_4_;
  fVar5 = DAT_146b20640._12_4_;
  auVar7._4_4_ = local_14 - local_24;
  auVar7._0_4_ = local_18 - local_28;
  auVar7._8_4_ = local_10 - local_20;
  auVar7._12_4_ = 0;
  auVar7 = divps(auVar7,_DAT_146b20640);
  fVar9 = (local_18 - local_28) - (float)(int)auVar7._0_4_ * fVar2;
  fVar10 = (local_14 - local_24) - (float)(int)auVar7._4_4_ * fVar3;
  fVar11 = (local_10 - local_20) - (float)(int)auVar7._8_4_ * fVar4;
  fVar12 = 0.0 - (float)(int)auVar7._12_4_ * fVar5;
  fVar9 = (float)(((uint)(fVar9 + fVar2) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                 (uint)(fVar9 + fVar2));
  fVar10 = (float)(((uint)(fVar10 + fVar3) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                  (uint)(fVar10 + fVar3));
  fVar11 = (float)(((uint)(fVar11 + fVar4) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                  (uint)(fVar11 + fVar4));
  fVar12 = (float)(((uint)(fVar12 + fVar5) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                  (uint)(fVar12 + fVar5));
  auVar8._4_4_ = -(uint)(local_res10[0] <
                        (float)((((uint)(fVar10 - fVar3) ^ (uint)fVar10) &
                                 -(uint)(fRam0000000146b20634 < fVar10) ^ (uint)fVar10) &
                               uRam0000000146b20624));
  auVar8._0_4_ = -(uint)(local_res10[0] <
                        (float)((((uint)(fVar9 - fVar2) ^ (uint)fVar9) &
                                 -(uint)(_DAT_146b20630 < fVar9) ^ (uint)fVar9) & _DAT_146b20620));
  auVar8._8_4_ = -(uint)(local_res10[0] <
                        (float)((((uint)(fVar11 - fVar4) ^ (uint)fVar11) &
                                 -(uint)(fRam0000000146b20638 < fVar11) ^ (uint)fVar11) &
                               uRam0000000146b20628));
  auVar8._12_4_ =
       -(uint)(local_res10[0] <
              (float)((((uint)(fVar12 - fVar5) ^ (uint)fVar12) &
                       -(uint)(fRam0000000146b2063c < fVar12) ^ (uint)fVar12) & uRam0000000146b2062c
                     ));
  iVar6 = movmskps((int)lVar1,auVar8);
  *(bool *)param_3 = iVar6 != 0;
  return;
}



// FUNCTION 14297ce50 execNotEqual_Vector2DVector2D body=288 status=ok
// SIG undefined execNotEqual_Vector2DVector2D(void)

void UKismetMathLibrary::execNotEqual_Vector2DVector2D
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  float local_res10 [2];
  float local_res18;
  float local_res1c;
  float local_res20;
  float local_res24;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if ((ABS(local_res18 - local_res20) <= local_res10[0]) &&
     (ABS(local_res1c - local_res24) <= local_res10[0])) {
    *param_3 = 0;
    return;
  }
  *param_3 = 1;
  return;
}



// FUNCTION 14297cf70 execNotEqual_VectorVector body=308 status=ok
// SIG undefined execNotEqual_VectorVector(void)

void UKismetMathLibrary::execNotEqual_VectorVector
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  float local_res10 [6];
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (((ABS(local_28 - local_18) <= local_res10[0]) && (ABS(local_24 - local_14) <= local_res10[0]))
     && (ABS(local_20 - local_10) <= local_res10[0])) {
    *param_3 = 0;
    return;
  }
  *param_3 = 1;
  return;
}



// FUNCTION 14297d0b0 execNot_Int body=122 status=ok
// SIG undefined execNot_Int(void)

void UKismetMathLibrary::execNot_Int(undefined8 param_1,longlong param_2,uint *param_3)

{
  uint local_res10 [2];
  
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
  *param_3 = ~local_res10[0];
  return;
}



// FUNCTION 14297d130 execNot_PreBool body=124 status=ok
// SIG undefined execNot_PreBool(void)

void UKismetMathLibrary::execNot_PreBool(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_res10[0] == 0;
  return;
}



// FUNCTION 14297d1b0 execNow body=52 status=ok
// SIG undefined execNow(void)

void UKismetMathLibrary::execNow(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 local_res10 [3];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FDateTime::Now(local_res10);
  *param_3 = local_res10[0];
  return;
}



// FUNCTION 14297d1f0 execOr_IntInt body=181 status=ok
// SIG undefined execOr_IntInt(void)

void UKismetMathLibrary::execOr_IntInt(undefined8 param_1,longlong param_2,uint *param_3)

{
  uint local_res10 [2];
  uint local_res18 [2];
  
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
  *param_3 = local_res10[0] | local_res18[0];
  return;
}



// FUNCTION 14297d2b0 execPercent_ByteByte body=206 status=ok
// SIG undefined execPercent_ByteByte(void)

ulonglong UKismetMathLibrary::execPercent_ByteByte
                    (undefined8 param_1,longlong param_2,byte *param_3)

{
  ulonglong uVar1;
  byte local_res10 [8];
  byte local_res18 [16];
  
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
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (local_res10[0] == 0) {
    uVar1 = ReportError_Percent_ByteByte();
    *param_3 = 0;
    return uVar1;
  }
  *param_3 = local_res18[0] % local_res10[0];
  return (ulonglong)local_res18[0] / (ulonglong)local_res10[0];
}



// FUNCTION 14297d380 execPercent_FloatFloat body=373 status=ok
// SIG undefined execPercent_FloatFloat(void)

void UKismetMathLibrary::execPercent_FloatFloat
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  float local_res10 [4];
  float local_res20 [2];
  undefined2 *local_40;
  int local_38;
  longlong local_30 [5];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (local_res20[0] == 0.0) {
    puVar1 = (undefined8 *)FFrame::GetStackTrace(param_2,local_30);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*puVar1;
    }
    FString::PrintfImpl(&local_40,L"Modulo by zero detected: %f %% 0\n%s",(double)local_res10[0],
                        puVar2);
    puVar2 = &DAT_143f3eda8;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    FUN_141790820(puVar2,3,0);
    if (local_40 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_30[0] != 0) {
      FMemory::Free();
    }
    *param_3 = 0;
    return;
  }
  uVar3 = GenericPercent_FloatFloat(local_res10[0]);
  *param_3 = uVar3;
  return;
}



// FUNCTION 14297d500 execPercent_IntInt body=209 status=ok
// SIG undefined execPercent_IntInt(void)

ulonglong UKismetMathLibrary::execPercent_IntInt(undefined8 param_1,longlong param_2,int *param_3)

{
  ulonglong uVar1;
  int local_res10 [2];
  int local_res18 [4];
  
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
  if (local_res10[0] == 0) {
    uVar1 = ReportError_Percent_ByteByte();
    *param_3 = 0;
    return uVar1;
  }
  *param_3 = local_res18[0] % local_res10[0];
  return (longlong)local_res18[0] / (longlong)local_res10[0] & 0xffffffff;
}



// FUNCTION 14297d5e0 execPointsAreCoplanar body=246 status=ok
// SIG undefined execPointsAreCoplanar(void)

void UKismetMathLibrary::execPointsAreCoplanar
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined4 local_res10 [2];
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
  local_res10[0] = 0;
  plVar2 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
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
  uVar1 = FMath::PointsAreCoplanar(plVar2,local_res10[0]);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14297d6e0 execProjectPointOnToPlane body=361 status=ok
// SIG undefined execProjectPointOnToPlane(void)

void UKismetMathLibrary::execProjectPointOnToPlane
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  fVar1 = (local_54 - local_44) * local_34 + (local_58 - local_48) * local_38 +
          (local_50 - local_40) * local_30;
  *param_3 = CONCAT44(local_54 - local_34 * fVar1,local_58 - local_38 * fVar1);
  *(float *)(param_3 + 1) = local_50 - local_30 * fVar1;
  return;
}



// FUNCTION 14297d850 execProjectVectorOnToPlane body=286 status=ok
// SIG undefined execProjectVectorOnToPlane(void)

void UKismetMathLibrary::execProjectVectorOnToPlane
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  fVar1 = local_44 * local_34 + local_48 * local_38 + local_40 * local_30;
  *param_3 = CONCAT44(local_44 - local_34 * fVar1,local_48 - local_38 * fVar1);
  *(float *)(param_3 + 1) = local_40 - local_30 * fVar1;
  return;
}



// FUNCTION 14297d970 execProjectVectorOnToVector body=358 status=ok
// SIG undefined execProjectVectorOnToVector(void)

void UKismetMathLibrary::execProjectVectorOnToVector
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  float local_38;
  float fStack_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  fVar1 = fStack_34 * fStack_34 + local_38 * local_38 + local_30 * local_30;
  if (fVar1 <= 1e-08) {
    ReportError_ProjectVectorOnToVector();
    local_38 = DAT_1468b5d90;
    local_30 = DAT_1468b5d98;
    fStack_34 = DAT_1468b5d94;
  }
  else {
    fVar1 = (local_24 * fStack_34 + local_28 * local_38 + local_20 * local_30) / fVar1;
    local_38 = local_38 * fVar1;
    fStack_34 = fStack_34 * fVar1;
    local_30 = local_30 * fVar1;
  }
  *param_3 = CONCAT44(fStack_34,local_38);
  *(float *)(param_3 + 1) = local_30;
  return;
}



// FUNCTION 14297dae0 execREase body=555 status=ok
// SIG undefined execREase(void)

void UKismetMathLibrary::execREase(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20 [2];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_84 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_84);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_58 = local_78;
  local_48 = local_68;
  local_50 = local_70;
  local_40 = local_60;
  local_res18[0] = local_res10[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)
           REase(local_38,&local_48,&local_58,local_80[0],bVar2,local_res18,local_84,local_88);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14297dd10 execRGBToHSV body=483 status=ok
// SIG undefined execRGBToHSV(void)

void UKismetMathLibrary::execRGBToHSV(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
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
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar2 = local_res10;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar4 = local_res20;
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_64 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  puVar3 = &local_68;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  puVar1 = &local_64;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  local_38 = local_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FLinearColor::LinearRGBToHSV(&local_38,&local_60);
  *puVar2 = local_60;
  *puVar4 = local_5c;
  *puVar3 = local_58;
  *puVar1 = local_54;
  return;
}



// FUNCTION 14297df00 execRGBToHSV_Vector body=213 status=ok
// SIG undefined execRGBToHSV_Vector(void)

void UKismetMathLibrary::execRGBToHSV_Vector(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar3 = local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_28 = local_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FLinearColor::LinearRGBToHSV(&local_28,local_18);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}



// FUNCTION 14297dfe0 execRInterpTo body=369 status=ok
// SIG undefined execRInterpTo(void)

void UKismetMathLibrary::execRInterpTo(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_58;
  undefined4 local_50;
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
  local_38 = local_58;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_30 = local_50;
  local_20 = local_40;
  FMath::RInterpTo(&local_18,&local_28,&local_38,local_res18[0],local_res10[0]);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 14297e160 execRInterpTo_Constant body=369 status=ok
// SIG undefined execRInterpTo_Constant(void)

void UKismetMathLibrary::execRInterpTo_Constant
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_58;
  undefined4 local_50;
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
  local_38 = local_58;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_30 = local_50;
  local_20 = local_40;
  FMath::RInterpConstantTo(&local_18,&local_28,&local_38,local_res18[0],local_res10[0]);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 14297e2e0 execRLerp body=408 status=ok
// SIG undefined execRLerp(void)

void UKismetMathLibrary::execRLerp(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
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
  local_38 = local_58;
  local_30 = local_50;
  local_20 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = local_48;
  puVar1 = (undefined8 *)RLerp(local_18,&local_28,&local_38,local_res18[0],local_res10[0] != 0);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14297e480 FUN_14297e480 body=127 status=ok
// SIG undefined FUN_14297e480(void)

void FUN_14297e480(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_res10[0] * 57.295776;
  return;
}



// FUNCTION 14297e500 execRandomBool body=81 status=ok
// SIG undefined execRandomBool(void)

void UKismetMathLibrary::execRandomBool(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  iVar1 = rand();
  iVar2 = (int)((float)iVar1 * 3.051851e-05 + (float)iVar1 * 3.051851e-05);
  iVar1 = 1;
  if (iVar2 < 2) {
    iVar1 = iVar2;
  }
  *(bool *)param_3 = iVar1 == 1;
  return;
}



// FUNCTION 14297e560 execRandomBoolFromStream body=142 status=ok
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
  uVar1 = RandomBoolFromStream(puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14297e5f0 execRandomBoolWithWeight body=122 status=ok
// SIG undefined execRandomBoolWithWeight(void)

void UKismetMathLibrary::execRandomBoolWithWeight
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = RandomBoolWithWeight(local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14297e670 execRandomBoolWithWeightFromStream body=211 status=ok
// SIG undefined execRandomBoolWithWeightFromStream(void)

void UKismetMathLibrary::execRandomBoolWithWeightFromStream
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  puVar2 = &local_res18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = RandomBoolWithWeightFromStream(local_res10[0],puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14297e750 execRandomFloat body=59 status=ok
// SIG undefined execRandomFloat(void)

void UKismetMathLibrary::execRandomFloat(undefined8 param_1,longlong param_2,float *param_3)

{
  int iVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  iVar1 = rand();
  *param_3 = (float)iVar1 * 3.051851e-05;
  return;
}



// FUNCTION 14297e790 execRandomFloatFromStream body=144 status=ok
// SIG undefined execRandomFloatFromStream(void)

void UKismetMathLibrary::execRandomFloatFromStream
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
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
  puVar1 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = RandomFloatFromStream(puVar1);
  *param_3 = uVar2;
  return;
}



// FUNCTION 14297e820 execRandomFloatInRange body=239 status=ok
// SIG undefined execRandomFloatInRange(void)

void UKismetMathLibrary::execRandomFloatInRange(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_res10 [2];
  float local_res18 [4];
  
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  fVar2 = local_res18[0];
  fVar1 = local_res10[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  iVar3 = rand();
  *param_3 = (float)iVar3 * 3.051851e-05 * (fVar1 - fVar2) + fVar2;
  return;
}



// FUNCTION 14297e910 execRandomFloatInRangeFromStream body=265 status=ok
// SIG undefined execRandomFloatInRangeFromStream(void)

void UKismetMathLibrary::execRandomFloatInRangeFromStream
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
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
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  puVar1 = &local_res20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar2 = RandomFloatInRangeFromStream(local_res18[0],local_res10[0],puVar1);
  *param_3 = uVar2;
  return;
}



// FUNCTION 14297ea20 execRandomInteger body=179 status=ok
// SIG undefined execRandomInteger(void)

void UKismetMathLibrary::execRandomInteger(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_res10 [6];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  iVar2 = local_res10[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (0 < local_res10[0]) {
    iVar1 = rand();
    iVar3 = iVar2 + -1;
    iVar2 = (int)((float)iVar1 * 3.051851e-05 * (float)iVar2);
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
    *param_3 = iVar3;
    return;
  }
  *param_3 = 0;
  return;
}



// FUNCTION 14297eae0 execRandomIntegerFromStream body=203 status=ok
// SIG undefined execRandomIntegerFromStream(void)

void UKismetMathLibrary::execRandomIntegerFromStream
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  puVar2 = &local_res18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = RandomIntegerFromStream(local_res10[0],puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14297ebb0 execRandomIntegerInRange body=251 status=ok
// SIG undefined execRandomIntegerInRange(void)

void UKismetMathLibrary::execRandomIntegerInRange(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  iVar1 = local_res10[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  iVar3 = local_res18[0] - local_res10[0];
  if (iVar3 + 1 < 1) {
    iVar3 = 0;
  }
  else {
    iVar2 = rand();
    iVar2 = (int)((float)iVar2 * 3.051851e-05 * (float)(iVar3 + 1));
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  *param_3 = iVar3 + iVar1;
  return;
}



// FUNCTION 14297ecb0 execRandomIntegerInRangeFromStream body=249 status=ok
// SIG undefined execRandomIntegerInRangeFromStream(void)

void UKismetMathLibrary::execRandomIntegerInRangeFromStream
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  
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
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  puVar2 = &local_res20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = RandomIntegerInRangeFromStream(local_res18[0],local_res10[0],puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14297edb0 execRandomPointInBoundingBox body=403 status=ok
// SIG undefined execRandomPointInBoundingBox(void)

void UKismetMathLibrary::execRandomPointInBoundingBox
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float local_98 [4];
  float local_88 [4];
  undefined8 local_78;
  float local_70;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  float local_44;
  undefined1 local_40;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  pfVar1 = *(float **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  pfVar2 = local_98;
  if (pfVar1 != (float *)0x0) {
    pfVar2 = pfVar1;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  local_40 = 1;
  pfVar1 = local_88;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar1 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_70 = pfVar2[2] - pfVar1[2];
  local_60 = pfVar1[2] + pfVar2[2];
  local_58 = CONCAT44(pfVar2[1] - pfVar1[1],*pfVar2 - *pfVar1);
  local_4c = CONCAT44(pfVar1[1] + pfVar2[1],*pfVar1 + *pfVar2);
  local_50 = local_70;
  local_44 = local_60;
  FMath::RandPointInBox(&local_78,&local_58);
  *param_3 = local_78;
  *(float *)(param_3 + 1) = local_70;
  return;
}



// FUNCTION 14297ef50 execRandomRotator body=145 status=ok
// SIG undefined execRandomRotator(void)

void UKismetMathLibrary::execRandomRotator(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int local_res10 [2];
  undefined1 local_18 [16];
  
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
  puVar1 = (undefined8 *)RandomRotator(local_18,local_res10[0] != 0);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14297eff0 execRandomRotatorFromStream body=222 status=ok
// SIG undefined execRandomRotatorFromStream(void)

void UKismetMathLibrary::execRandomRotatorFromStream
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  int local_res10 [2];
  undefined8 local_res18 [2];
  undefined1 local_28 [16];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res18[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  puVar1 = local_res18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)RandomRotatorFromStream(local_28,bVar2,puVar1);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14297f0d0 execRandomUnitVector body=58 status=ok
// SIG undefined execRandomUnitVector(void)

void UKismetMathLibrary::execRandomUnitVector
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_18 [16];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)RandomUnitVector(local_18);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14297f110 execRandomUnitVectorFromStream body=159 status=ok
// SIG undefined execRandomUnitVectorFromStream(void)

void UKismetMathLibrary::execRandomUnitVectorFromStream
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined1 local_18 [16];
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar1 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)RandomUnitVectorFromStream(local_18,puVar1);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14297f1b0 execRandomUnitVectorInConeInDegrees body=229 status=ok
// SIG undefined execRandomUnitVectorInConeInDegrees(void)

void UKismetMathLibrary::execRandomUnitVectorInConeInDegrees
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float local_res10 [6];
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
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  FMath::VRandCone(&local_18,&local_28,local_res10[0] * 0.017453292);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 14297f2a0 execRandomUnitVectorInConeInDegreesFromStream body=309 status=ok
// SIG undefined execRandomUnitVectorInConeInDegreesFromStream(void)

void UKismetMathLibrary::execRandomUnitVectorInConeInDegreesFromStream
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  float local_res10 [2];
  undefined8 local_res18 [2];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res10[0] = 0.0;
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  puVar2 = local_res18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  RandomUnitVectorInConeInRadiansFromStream(&local_28,puVar1,local_res10[0] * 0.017453292,puVar2);
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  return;
}



// FUNCTION 14297f3e0 execRandomUnitVectorInConeInRadians body=221 status=ok
// SIG undefined execRandomUnitVectorInConeInRadians(void)

void UKismetMathLibrary::execRandomUnitVectorInConeInRadians
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [6];
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  FMath::VRandCone(&local_18,&local_28,local_res10[0]);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 14297f4c0 execRandomUnitVectorInConeInRadiansFromStream body=298 status=ok
// SIG undefined execRandomUnitVectorInConeInRadiansFromStream(void)

void UKismetMathLibrary::execRandomUnitVectorInConeInRadiansFromStream
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [2];
  undefined8 local_res18 [2];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res10[0] = 0;
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  puVar1 = local_res18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)
           RandomUnitVectorInConeInRadiansFromStream(local_28,puVar2,local_res10[0],puVar1);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14297f5f0 execRandomUnitVectorInEllipticalConeInDegrees body=304 status=ok
// SIG undefined execRandomUnitVectorInEllipticalConeInDegrees(void)

void UKismetMathLibrary::execRandomUnitVectorInEllipticalConeInDegrees
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float local_res10 [2];
  float local_res18 [4];
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
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = local_38;
  local_20 = local_30;
  RandomUnitVectorInEllipticalConeInRadians
            (&local_18,&local_28,local_res18[0] * 0.017453292,local_res10[0] * 0.017453292);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 14297f720 execRandomUnitVectorInEllipticalConeInDegreesFromStream body=404 status=ok
// SIG undefined execRandomUnitVectorInEllipticalConeInDegreesFromStream(void)

void UKismetMathLibrary::execRandomUnitVectorInEllipticalConeInDegreesFromStream
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  float local_res10 [2];
  float local_res18 [2];
  undefined8 local_res20;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined4 local_20;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res18[0] = 0.0;
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  puVar1 = &local_res20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  RandomUnitVectorInEllipticalConeInRadiansFromStream
            (&local_28,puVar2,local_res18[0] * 0.017453292,local_res10[0] * 0.017453292,puVar1);
  *param_3 = local_28;
  *(undefined4 *)(param_3 + 1) = local_20;
  return;
}



// FUNCTION 14297f8c0 execRandomUnitVectorInEllipticalConeInRadians body=285 status=ok
// SIG undefined execRandomUnitVectorInEllipticalConeInRadians(void)

void UKismetMathLibrary::execRandomUnitVectorInEllipticalConeInRadians
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  puVar1 = (undefined8 *)
           RandomUnitVectorInEllipticalConeInRadians
                     (local_18,&local_28,local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14297f9e0 execRandomUnitVectorInEllipticalConeInRadiansFromStream body=385 status=ok
// SIG undefined execRandomUnitVectorInEllipticalConeInRadiansFromStream(void)

void UKismetMathLibrary::execRandomUnitVectorInEllipticalConeInRadiansFromStream
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res18[0] = 0;
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
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
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  puVar1 = &local_res20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)
           RandomUnitVectorInEllipticalConeInRadiansFromStream
                     (local_28,puVar2,local_res18[0],local_res10[0],puVar1);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14297fb70 execResetFloatSpringState body=131 status=ok
// SIG undefined execResetFloatSpringState(void)

void UKismetMathLibrary::execResetFloatSpringState(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10 [3];
  
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
  ResetFloatSpringState(puVar1);
  return;
}



// FUNCTION 14297fc00 execResetRandomStream body=127 status=ok
// SIG undefined execResetRandomStream(void)

void UKismetMathLibrary::execResetRandomStream(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10 [3];
  
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
  ResetRandomStream(puVar1);
  return;
}



// FUNCTION 14297fc80 execResetVectorSpringState body=156 status=ok
// SIG undefined execResetVectorSpringState(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execResetVectorSpringState(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  local_28 = _DAT_1468b5d90;
  local_20 = DAT_1468b5d98;
  local_1c = _DAT_1468b5d90;
  local_14 = DAT_1468b5d98;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  ResetVectorSpringState(puVar1);
  return;
}



// FUNCTION 14297fd20 execRotateAngleAxis body=312 status=ok
// SIG undefined execRotateAngleAxis(void)

void UKismetMathLibrary::execRotateAngleAxis
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [6];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_38 = local_58;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_30 = local_50;
  local_20 = local_40;
  puVar1 = (undefined8 *)RotateAngleAxis(local_18,&local_28,local_res10[0],&local_38);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14297fe60 execRotatorFromAxisAndAngle body=218 status=ok
// SIG undefined execRotatorFromAxisAndAngle(void)

void UKismetMathLibrary::execRotatorFromAxisAndAngle
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [6];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_20 = local_30;
  puVar1 = (undefined8 *)RotatorFromAxisAndAngle(local_18,&local_28,local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 14297ff40 FUN_14297ff40 body=139 status=ok
// SIG undefined FUN_14297ff40(void)

void FUN_14297ff40(undefined8 param_1,longlong param_2,int *param_3)

{
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = (int)ROUND(local_res10[0] * 2.0 + 0.5) >> 1;
  return;
}



// FUNCTION 14297ffd0 execSeedRandomStream body=127 status=ok
// SIG undefined execSeedRandomStream(void)

void UKismetMathLibrary::execSeedRandomStream(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10 [3];
  
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
  SeedRandomStream(puVar1);
  return;
}



// FUNCTION 142980050 execSelectClass body=234 status=ok
// SIG undefined execSelectClass(void)

void UKismetMathLibrary::execSelectClass(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  if (local_res10[0] != 0) {
    local_res18 = local_res20;
  }
  *param_3 = local_res18;
  return;
}



// FUNCTION 142980140 execSelectColor body=269 status=ok
// SIG undefined execSelectColor(void)

void UKismetMathLibrary::execSelectColor(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
  puVar2 = &local_18;
  if (local_res10[0] == 0) {
    puVar2 = &local_28;
  }
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  return;
}



// FUNCTION 142980250 execSelectFloat body=258 status=ok
// SIG undefined execSelectFloat(void)

void UKismetMathLibrary::execSelectFloat(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  if (local_res10[0] != 0) {
    *param_3 = local_res18[0];
    return;
  }
  *param_3 = local_res20[0];
  return;
}



// FUNCTION 142980360 execSelectInt body=229 status=ok
// SIG undefined execSelectInt(void)

void UKismetMathLibrary::execSelectInt(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 local_res10 [2];
  int local_res18 [2];
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
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (local_res18[0] != 0) {
    local_res10[0] = local_res20[0];
  }
  *param_3 = local_res10[0];
  return;
}



// FUNCTION 142980450 execSelectRotator body=295 status=ok
// SIG undefined execSelectRotator(void)

void UKismetMathLibrary::execSelectRotator(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined8 local_38;
  undefined4 local_30;
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
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_18 = local_38;
  local_38 = local_28;
  local_10 = local_30;
  local_30 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = &local_38;
  if (local_res10[0] == 0) {
    puVar2 = &local_18;
  }
  uVar1 = *(undefined4 *)(puVar2 + 1);
  *param_3 = *puVar2;
  *(undefined4 *)(param_3 + 1) = uVar1;
  return;
}



// FUNCTION 142980580 execSelectString body=401 status=ok
// SIG undefined execSelectString(void)

void UKismetMathLibrary::execSelectString(undefined8 param_1,longlong param_2,void **param_3)

{
  void *_Src;
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined4 uVar4;
  longlong lVar5;
  int local_res10 [2];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [4];
  
  pvVar3 = (void *)0x0;
  uVar4 = 0;
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
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_48 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar2 = local_38 + 2;
  if (local_res10[0] == 0) {
    plVar2 = local_38;
  }
  local_40 = (int)plVar2[1];
  lVar5 = (longlong)local_40;
  _Src = (void *)*plVar2;
  if (local_40 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    pvVar3 = local_48;
    ::_guard_xfg_dispatch_icall_nop(local_48,_Src,lVar5 * 2);
    uVar4 = local_3c;
  }
  iVar1 = local_40;
  if (param_3 == &local_48) {
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
  }
  else {
    if (*param_3 != (void *)0x0) {
      FMemory::Free();
    }
    *param_3 = pvVar3;
    *(int *)(param_3 + 1) = iVar1;
    *(undefined4 *)((longlong)param_3 + 0xc) = uVar4;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142980720 execSelectTransform body=445 status=ok
// SIG undefined execSelectTransform(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execSelectTransform
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [32];
  int local_a8 [4];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = _DAT_146b20600 & _DAT_146b20610;
  uStack_74 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_70 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_6c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_48 = _DAT_146b20600 & _DAT_146b20610;
  uStack_44 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_40 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_3c = uRam0000000146b2060c & uRam0000000146b2061c;
  puVar6 = (undefined8 *)&local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = uRam0000000146b2060c;
  local_58 = 0;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_a8[0] = 0;
  puVar7 = (undefined8 *)&local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (local_a8[0] != 0) {
    puVar7 = puVar6;
  }
  uVar1 = puVar7[1];
  uVar2 = puVar7[2];
  uVar3 = puVar7[3];
  uVar4 = puVar7[4];
  uVar5 = puVar7[5];
  *param_3 = *puVar7;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  param_3[4] = uVar4;
  param_3[5] = uVar5;
  return;
}



// FUNCTION 1429808e0 execSetRandomStreamSeed body=201 status=ok
// SIG undefined execSetRandomStreamSeed(void)

void UKismetMathLibrary::execSetRandomStreamSeed(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  puVar1 = &local_res20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  SetRandomStreamSeed(puVar1,local_res10[0]);
  return;
}



// FUNCTION 1429809b0 execSignOfFloat body=194 status=ok
// SIG undefined execSignOfFloat(void)

void UKismetMathLibrary::execSignOfFloat(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (0.0 < local_res10[0]) {
    *param_3 = 0x3f800000;
    return;
  }
  if (local_res10[0] < 0.0) {
    *param_3 = 0xbf800000;
    return;
  }
  *param_3 = 0;
  return;
}



// FUNCTION 142980a80 execSignOfInteger body=153 status=ok
// SIG undefined execSignOfInteger(void)

void UKismetMathLibrary::execSignOfInteger(undefined8 param_1,longlong param_2,int *param_3)

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
  if (0 < local_res10[0]) {
    *param_3 = 1;
    return;
  }
  *param_3 = (-1 < local_res10[0]) - 1;
  return;
}



// FUNCTION 142980b20 FUN_142980b20 body=124 status=ok
// SIG undefined FUN_142980b20(void)

void FUN_142980b20(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  fVar1 = _guard_xfg_dispatch_icall_nop(local_res10[0]);
  *param_3 = fVar1;
  return;
}



// FUNCTION 142980ba0 execSqrt body=165 status=ok
// SIG undefined execSqrt(void)

void UKismetMathLibrary::execSqrt(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if (0.0 <= local_res10[0]) {
    *param_3 = SQRT(local_res10[0]);
    return;
  }
  ReportError_Sqrt();
  *param_3 = 0.0;
  return;
}



// FUNCTION 142980c50 execSquare body=123 status=ok
// SIG undefined execSquare(void)

void UKismetMathLibrary::execSquare(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_res10[0] * local_res10[0];
  return;
}



// FUNCTION 142980cd0 execSubtract_ByteByte body=175 status=ok
// SIG undefined execSubtract_ByteByte(void)

void UKismetMathLibrary::execSubtract_ByteByte(undefined8 param_1,longlong param_2,char *param_3)

{
  char local_res10 [8];
  char local_res18 [16];
  
  local_res10[0] = '\0';
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = '\0';
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_res10[0] - local_res18[0];
  return;
}



// FUNCTION 142980d80 execSubtract_DateTimeDateTime body=167 status=ok
// SIG undefined execSubtract_DateTimeDateTime(void)

void UKismetMathLibrary::execSubtract_DateTimeDateTime
               (undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong local_res10;
  longlong local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_res10 - local_res18[0];
  return;
}



// FUNCTION 142980e30 execSubtract_FloatFloat body=186 status=ok
// SIG undefined execSubtract_FloatFloat(void)

void UKismetMathLibrary::execSubtract_FloatFloat(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_res10 [2];
  float local_res18 [4];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_res10[0] - local_res18[0];
  return;
}



// FUNCTION 142980ef0 execSubtract_IntInt body=181 status=ok
// SIG undefined execSubtract_IntInt(void)

void UKismetMathLibrary::execSubtract_IntInt(undefined8 param_1,longlong param_2,int *param_3)

{
  int local_res10 [2];
  int local_res18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_res10[0] - local_res18[0];
  return;
}



// FUNCTION 142980fb0 execSubtract_Vector2DFloat body=194 status=ok
// SIG undefined execSubtract_Vector2DFloat(void)

void UKismetMathLibrary::execSubtract_Vector2DFloat
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float local_res10 [2];
  float local_res18;
  float local_res1c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = CONCAT44(local_res1c - local_res10[0],local_res18 - local_res10[0]);
  return;
}



// FUNCTION 142981080 execSubtract_Vector2DVector2D body=185 status=ok
// SIG undefined execSubtract_Vector2DVector2D(void)

void UKismetMathLibrary::execSubtract_Vector2DVector2D
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = CONCAT44(local_res14 - local_res1c,local_res10 - local_res18);
  return;
}



// FUNCTION 142981140 execSubtract_VectorFloat body=222 status=ok
// SIG undefined execSubtract_VectorFloat(void)

void UKismetMathLibrary::execSubtract_VectorFloat
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float local_res10 [6];
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = CONCAT44(local_14 - local_res10[0],local_18 - local_res10[0]);
  *(float *)(param_3 + 1) = local_10 - local_res10[0];
  return;
}



// FUNCTION 142981220 execSubtract_VectorInt body=230 status=ok
// SIG undefined execSubtract_VectorInt(void)

void UKismetMathLibrary::execSubtract_VectorInt
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  int local_res10 [2];
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  fVar1 = (float)local_res10[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = CONCAT44(local_14 - fVar1,local_18 - fVar1);
  *(float *)(param_3 + 1) = local_10 - fVar1;
  return;
}



// FUNCTION 142981310 execSubtract_VectorVector body=210 status=ok
// SIG undefined execSubtract_VectorVector(void)

void UKismetMathLibrary::execSubtract_VectorVector
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = CONCAT44(local_24 - local_14,local_28 - local_18);
  *(float *)(param_3 + 1) = local_20 - local_10;
  return;
}



// FUNCTION 1429813f0 execTEase body=646 status=ok
// SIG undefined execTEase(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execTEase(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined1 local_e8;
  undefined1 local_e7 [3];
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = _DAT_146b20600 & _DAT_146b20610;
  uStack_b4 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_b0 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_ac = uRam0000000146b2060c & uRam0000000146b2061c;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_88 = _DAT_146b20600 & _DAT_146b20610;
  uStack_84 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_80 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_7c = uRam0000000146b2060c & uRam0000000146b2061c;
  puVar4 = &local_d8;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = uRam0000000146b2060c;
  local_98 = 0;
  uStack_90 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_dc = 0;
  puVar3 = &local_a8;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_dc);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_dc);
  }
  local_e8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_e8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  local_e0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_e0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_e4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_e4);
  }
  local_e7[0] = local_e8;
  local_f8 = local_e4;
  local_108 = local_e7;
  local_100 = local_e0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)TEase(local_78,puVar4,puVar3,local_dc);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 142981680 execTInterpTo body=533 status=ok
// SIG undefined execTInterpTo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execTInterpTo(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 local_d4 [3];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = _DAT_146b20600 & _DAT_146b20610;
  uStack_a4 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_a0 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_9c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_78 = _DAT_146b20600 & _DAT_146b20610;
  uStack_74 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_70 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_6c = uRam0000000146b2060c & uRam0000000146b2061c;
  puVar3 = &local_c8;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = uRam0000000146b2060c;
  local_88 = 0;
  uStack_80 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_d4[0] = 0;
  puVar4 = &local_98;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_d4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_d4);
  }
  local_d8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_e8 = local_d8;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)TInterpTo(local_68,puVar3,puVar4,local_d4[0]);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 1429818a0 execTLerp body=546 status=ok
// SIG undefined execTLerp(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execTLerp(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 local_d8;
  undefined1 local_d7 [3];
  undefined4 local_d4 [3];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = _DAT_146b20600 & _DAT_146b20610;
  uStack_a4 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_a0 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_9c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_78 = _DAT_146b20600 & _DAT_146b20610;
  uStack_74 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_70 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_6c = uRam0000000146b2060c & uRam0000000146b2061c;
  puVar3 = &local_c8;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = uRam0000000146b2060c;
  local_88 = 0;
  uStack_80 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_d4[0] = 0;
  puVar4 = &local_98;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_d4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_d4);
  }
  local_d8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_d8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_d8);
  }
  local_d7[0] = local_d8;
  local_e8 = local_d7;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar2 = (undefined8 *)FUN_14253afa0(local_68,puVar3,puVar4,local_d4[0]);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 142981ad0 FUN_142981ad0 body=124 status=ok
// SIG undefined FUN_142981ad0(void)

void FUN_142981ad0(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float local_res10 [6];
  
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  fVar1 = _guard_xfg_dispatch_icall_nop(local_res10[0]);
  *param_3 = fVar1;
  return;
}



// FUNCTION 142981b50 execDateTimeFromString body=314 status=ok
// SIG undefined execDateTimeFromString(void)

void UKismetMathLibrary::execDateTimeFromString
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res10 [8];
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  _Src = local_38;
  local_28 = (void *)0x0;
  puVar3 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_30;
  local_20 = (int)local_30;
  if ((int)local_30 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_30 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop(local_28,_Src,lVar2 * 2);
  }
  uVar1 = FUN_141690730(&local_28,puVar3);
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  *param_3 = uVar1;
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142981cf0 execTimespanRatio body=213 status=ok
// SIG undefined execTimespanRatio(void)

void UKismetMathLibrary::execTimespanRatio(undefined8 param_1,longlong param_2,float *param_3)

{
  longlong local_res10;
  longlong local_res18 [2];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  if (local_res10 == 0) {
    *param_3 = 0.0;
    return;
  }
  *param_3 = (float)((double)local_res18[0] / (double)local_res10);
  return;
}



// FUNCTION 142981dd0 execToday body=71 status=ok
// SIG undefined execToday(void)

longlong UKismetMathLibrary::execToday(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar2 = (longlong *)FDateTime::Now(local_res10);
  lVar1 = *plVar2;
  *param_3 = lVar1 - lVar1 % 864000000000;
  return lVar1 / 864000000000;
}



// FUNCTION 142981e20 FUN_142981e20 body=416 status=ok
// SIG undefined FUN_142981e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142981e20(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  float local_78;
  float local_74;
  float local_70;
  float local_68 [3];
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = _DAT_146b20600 & _DAT_146b20610;
  uStack_44 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_40 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_3c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  local_68[2] = 0.0;
  uStack_5c = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pfVar5 = local_68;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar5 = *(float **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  fVar1 = *pfVar5;
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  fVar4 = pfVar5[3];
  fVar6 = local_70 * fVar2 - local_74 * fVar3;
  fVar7 = local_78 * fVar3 - local_70 * fVar1;
  fVar8 = local_74 * fVar1 - local_78 * fVar2;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  *param_3 = CONCAT44((fVar6 * fVar3 - fVar8 * fVar1) + fVar4 * fVar7 + local_74,
                      (fVar8 * fVar2 - fVar7 * fVar3) + fVar4 * fVar6 + local_78);
  *(float *)(param_3 + 1) = (fVar7 * fVar1 - fVar6 * fVar2) + fVar4 * fVar8 + local_70;
  return;
}



// FUNCTION 142981fc0 FUN_142981fc0 body=424 status=ok
// SIG undefined FUN_142981fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142981fc0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  float local_78;
  float local_74;
  float local_70;
  float local_68 [3];
  uint uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = _DAT_146b20600 & _DAT_146b20610;
  uStack_44 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_40 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_3c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  local_68[2] = 0.0;
  uStack_5c = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pfVar6 = local_68;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar6 = *(float **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_78 = local_78 * pfVar6[8];
  local_74 = local_74 * pfVar6[9];
  local_70 = local_70 * pfVar6[10];
  fVar1 = *pfVar6;
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  fVar4 = pfVar6[3];
  fVar7 = local_70 * fVar2 - local_74 * fVar3;
  fVar8 = local_78 * fVar3 - local_70 * fVar1;
  fVar9 = local_74 * fVar1 - local_78 * fVar2;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar5 = pfVar6[6];
  *param_3 = CONCAT44((fVar7 * fVar3 - fVar9 * fVar1) + fVar4 * fVar8 + local_74 + pfVar6[5],
                      (fVar9 * fVar2 - fVar8 * fVar3) + fVar4 * fVar7 + local_78 + pfVar6[4]);
  *(float *)(param_3 + 1) = (fVar8 * fVar1 - fVar7 * fVar2) + fVar4 * fVar9 + local_70 + fVar5;
  return;
}



// FUNCTION 142982170 execTransformRotation body=318 status=ok
// SIG undefined execTransformRotation(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execTransformRotation
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = _DAT_146b20600 & _DAT_146b20610;
  uStack_34 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_30 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_2c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = uRam0000000146b2060c;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = &local_58;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_78 = local_88;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_70 = local_80;
  puVar1 = (undefined8 *)TransformRotation(local_68,puVar2,&local_78);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1429822b0 execTransform_Determinant body=215 status=ok
// SIG undefined execTransform_Determinant(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execTransform_Determinant
               (undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = _DAT_146b20600 & _DAT_146b20610;
  uStack_24 = uRam0000000146b20604 & uRam0000000146b20614;
  uStack_20 = uRam0000000146b20608 & uRam0000000146b20618;
  uStack_1c = uRam0000000146b2060c & uRam0000000146b2061c;
  local_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = uRam0000000146b2060c;
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
  uVar2 = FUN_14253bf90(puVar1);
  *param_3 = uVar2;
  return;
}



// FUNCTION 142982390 execUtcNow body=52 status=ok
// SIG undefined execUtcNow(void)

void UKismetMathLibrary::execUtcNow(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 local_res10 [3];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FDateTime::UtcNow(local_res10);
  *param_3 = local_res10[0];
  return;
}



// FUNCTION 1429823d0 execVEase body=499 status=ok
// SIG undefined execVEase(void)

void UKismetMathLibrary::execVEase(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20 [2];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_78 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_48 = local_70;
  local_38 = local_60;
  local_40 = local_68;
  local_30 = local_58;
  local_res18[0] = local_res10[0];
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)
           VEase(local_28,&local_38,&local_48,local_74,local_res18,local_78,local_res20[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1429825d0 execVInterpTo body=369 status=ok
// SIG undefined execVInterpTo(void)

void UKismetMathLibrary::execVInterpTo(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_58;
  undefined4 local_50;
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
  local_38 = local_58;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_30 = local_50;
  local_20 = local_40;
  FMath::VInterpTo(&local_18,&local_28,&local_38,local_res18[0],local_res10[0]);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 142982750 execVInterpTo_Constant body=369 status=ok
// SIG undefined execVInterpTo_Constant(void)

void UKismetMathLibrary::execVInterpTo_Constant
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_58;
  undefined4 local_50;
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
  local_38 = local_58;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_30 = local_50;
  local_20 = local_40;
  FMath::VInterpConstantTo(&local_18,&local_28,&local_38,local_res18[0],local_res10[0]);
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  return;
}



// FUNCTION 1429828d0 execVLerp body=309 status=ok
// SIG undefined execVLerp(void)

void UKismetMathLibrary::execVLerp(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  float local_res10 [6];
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_res10[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = CONCAT44((local_24 - local_14) * local_res10[0] + local_14,
                      (local_28 - local_18) * local_res10[0] + local_18);
  *(float *)(param_3 + 1) = (local_20 - local_10) * local_res10[0] + local_10;
  return;
}



// FUNCTION 142982a10 execVSize2D body=135 status=ok
// SIG undefined execVSize2D(void)

void UKismetMathLibrary::execVSize2D(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_res10;
  float local_res14;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = SQRT(local_res14 * local_res14 + local_res10 * local_res10);
  return;
}



// FUNCTION 142982aa0 execVSize2DSquared body=128 status=ok
// SIG undefined execVSize2DSquared(void)

void UKismetMathLibrary::execVSize2DSquared(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_res10;
  float local_res14;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_res14 * local_res14 + local_res10 * local_res10;
  return;
}



// FUNCTION 142982b20 execVSize body=149 status=ok
// SIG undefined execVSize(void)

void UKismetMathLibrary::execVSize(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = SQRT(local_14 * local_14 + local_18 * local_18 + local_10 * local_10);
  return;
}



// FUNCTION 142982bc0 execVSizeSquared body=142 status=ok
// SIG undefined execVSizeSquared(void)

void UKismetMathLibrary::execVSizeSquared(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_18;
  float local_14;
  float local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = local_14 * local_14 + local_18 * local_18 + local_10 * local_10;
  return;
}



// FUNCTION 142982c50 execVSizeXY body=135 status=ok
// SIG undefined execVSizeXY(void)

void UKismetMathLibrary::execVSizeXY(undefined8 param_1,longlong param_2,float *param_3)

{
  float local_18;
  float local_14;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  *param_3 = SQRT(local_14 * local_14 + local_18 * local_18);
  return;
}



// FUNCTION 142982ce0 execVector2DInterpTo body=350 status=ok
// SIG undefined execVector2DInterpTo(void)

void UKismetMathLibrary::execVector2DInterpTo
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  local_20 = local_res20;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = local_28;
  FMath::Vector2DInterpTo(&local_10,&local_18,&local_20,local_res18[0],local_res10[0]);
  *param_3 = local_10;
  return;
}



// FUNCTION 142982e40 execVector2DInterpTo_Constant body=350 status=ok
// SIG undefined execVector2DInterpTo_Constant(void)

void UKismetMathLibrary::execVector2DInterpTo_Constant
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  local_20 = local_res20;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = local_28;
  FMath::Vector2DInterpConstantTo(&local_10,&local_18,&local_20,local_res18[0],local_res10[0]);
  *param_3 = local_10;
  return;
}



// FUNCTION 142982fa0 execVectorSpringInterp body=591 status=ok
// SIG undefined execVectorSpringInterp(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::execVectorSpringInterp
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_48 = _DAT_1468b5d90;
  local_40 = DAT_1468b5d98;
  local_3c = _DAT_1468b5d90;
  local_34 = DAT_1468b5d98;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_a8[0] = 0;
  puVar1 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
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
  local_78 = local_a0;
  local_68 = local_90;
  local_70 = local_98;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_60 = local_88;
  puVar1 = (undefined8 *)
           VectorSpringInterp(local_58,&local_68,&local_78,puVar1,local_a8[0],local_res20[0],
                              local_res18[0],local_res10[0]);
  *param_3 = *puVar1;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 1429831f0 execXor_IntInt body=181 status=ok
// SIG undefined execXor_IntInt(void)

void UKismetMathLibrary::execXor_IntInt(undefined8 param_1,longlong param_2,uint *param_3)

{
  uint local_res10 [2];
  uint local_res18 [2];
  
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
  *param_3 = local_res10[0] ^ local_res18[0];
  return;
}



// FUNCTION 1429832b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UKismetNodeHelperLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146b213f0 == 0) {
    FUN_14171ccd0(L"/Script/Engine",L"KismetNodeHelperLibrary",&DAT_146b213f0,
                  StaticRegisterNativesUKismetNodeHelperLibrary,0x28,0x10000000,0,L"Engine",
                  &LAB_140492340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146b213f0;
}



// FUNCTION 142983360 FUN_142983360 body=47 status=ok
// SIG undefined FUN_142983360(void)

longlong FUN_142983360(void)

{
  if (DAT_146b213e8 == 0) {
    FUN_141786440(&DAT_146b213e8,&PTR_GetPrivateStaticClass_145297b80);
  }
  return DAT_146b213e8;
}



// FUNCTION 142983390 FUN_142983390 body=47 status=ok
// SIG undefined FUN_142983390(void)

longlong FUN_142983390(void)

{
  if (DAT_146b21380 == 0) {
    FUN_141786a30(&DAT_146b21380,&PTR_FUN_1465cca90);
  }
  return DAT_146b21380;
}



// FUNCTION 1429833c0 FUN_1429833c0 body=47 status=ok
// SIG undefined FUN_1429833c0(void)

longlong FUN_1429833c0(void)

{
  if (DAT_146b21388 == 0) {
    FUN_141786a30(&DAT_146b21388,&PTR_FUN_1465ccad0);
  }
  return DAT_146b21388;
}



// FUNCTION 1429833f0 FUN_1429833f0 body=47 status=ok
// SIG undefined FUN_1429833f0(void)

longlong FUN_1429833f0(void)

{
  if (DAT_146b21390 == 0) {
    FUN_141786a30(&DAT_146b21390,&PTR_FUN_1465ccb80);
  }
  return DAT_146b21390;
}



// FUNCTION 142983420 FUN_142983420 body=47 status=ok
// SIG undefined FUN_142983420(void)

longlong FUN_142983420(void)

{
  if (DAT_146b21398 == 0) {
    FUN_141786a30(&DAT_146b21398,&PTR_FUN_1465cccb0);
  }
  return DAT_146b21398;
}



// FUNCTION 142983450 FUN_142983450 body=47 status=ok
// SIG undefined FUN_142983450(void)

longlong FUN_142983450(void)

{
  if (DAT_146b213a0 == 0) {
    FUN_141786a30(&DAT_146b213a0,&PTR_FUN_1465ccd70);
  }
  return DAT_146b213a0;
}



// FUNCTION 142983480 FUN_142983480 body=47 status=ok
// SIG undefined FUN_142983480(void)

longlong FUN_142983480(void)

{
  if (DAT_146b213a8 == 0) {
    FUN_141786a30(&DAT_146b213a8,&PTR_FUN_1465cce70);
  }
  return DAT_146b213a8;
}



// FUNCTION 1429834b0 FUN_1429834b0 body=47 status=ok
// SIG undefined FUN_1429834b0(void)

longlong FUN_1429834b0(void)

{
  if (DAT_146b213b0 == 0) {
    FUN_141786a30(&DAT_146b213b0,&PTR_FUN_1465ccf90);
  }
  return DAT_146b213b0;
}



// FUNCTION 1429834e0 FUN_1429834e0 body=47 status=ok
// SIG undefined FUN_1429834e0(void)

longlong FUN_1429834e0(void)

{
  if (DAT_146b213b8 == 0) {
    FUN_141786a30(&DAT_146b213b8,&PTR_FUN_1465cd0b0);
  }
  return DAT_146b213b8;
}



// FUNCTION 142983510 FUN_142983510 body=47 status=ok
// SIG undefined FUN_142983510(void)

longlong FUN_142983510(void)

{
  if (DAT_146b213c0 == 0) {
    FUN_141786a30(&DAT_146b213c0,&PTR_FUN_1465cd250);
  }
  return DAT_146b213c0;
}



// FUNCTION 142983540 FUN_142983540 body=47 status=ok
// SIG undefined FUN_142983540(void)

longlong FUN_142983540(void)

{
  if (DAT_146b213c8 == 0) {
    FUN_141786a30(&DAT_146b213c8,&PTR_FUN_1465cd350);
  }
  return DAT_146b213c8;
}



// FUNCTION 142983570 FUN_142983570 body=47 status=ok
// SIG undefined FUN_142983570(void)

longlong FUN_142983570(void)

{
  if (DAT_146b213d0 == 0) {
    FUN_141786a30(&DAT_146b213d0,&PTR_FUN_1465cd410);
  }
  return DAT_146b213d0;
}



// FUNCTION 1429835a0 FUN_1429835a0 body=47 status=ok
// SIG undefined FUN_1429835a0(void)

longlong FUN_1429835a0(void)

{
  if (DAT_146b213d8 == 0) {
    FUN_141786a30(&DAT_146b213d8,&PTR_FUN_1465cd540);
  }
  return DAT_146b213d8;
}


