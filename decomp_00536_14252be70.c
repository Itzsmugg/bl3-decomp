// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14252be70 FUN_14252be70 body=15 status=ok
// SIG undefined FUN_14252be70(void)

void FUN_14252be70(longlong param_1)

{
  *(undefined1 *)(*(longlong *)(param_1 + 200) + 0x310) = 1;
  return;
}



// FUNCTION 14252be80 Invalidate_Guid body=10 status=ok
// SIG undefined Invalidate_Guid(void)

void UKismetGuidLibrary::Invalidate_Guid(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 14252be90 InverseTransformRotation body=233 status=ok
// SIG undefined InverseTransformRotation(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
UKismetMathLibrary::InverseTransformRotation(undefined8 param_1,float *param_2,undefined8 param_3)

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
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [32];
  
  pfVar6 = (float *)FRotator::Quaternion(param_3,local_28);
  fVar1 = param_2[3];
  fVar9 = -*param_2;
  fVar2 = *pfVar6;
  fVar3 = pfVar6[1];
  fVar4 = pfVar6[2];
  fVar5 = pfVar6[3];
  fVar7 = -param_2[1];
  fVar8 = -param_2[2];
  local_38 = fVar5 * fVar9 * _DAT_146afc5b0 + fVar1 * fVar2 + fVar4 * fVar7 * _DAT_146afc5a0 +
             fVar3 * fVar8 * _DAT_146afc590;
  fStack_34 = fVar4 * fVar9 * fRam0000000146afc5b4 + fVar1 * fVar3 +
              fVar5 * fVar7 * fRam0000000146afc5a4 + fVar2 * fVar8 * fRam0000000146afc594;
  fStack_30 = fVar3 * fVar9 * fRam0000000146afc5b8 + fVar1 * fVar4 +
              fVar2 * fVar7 * fRam0000000146afc5a8 + fVar5 * fVar8 * fRam0000000146afc598;
  fStack_2c = fVar2 * fVar9 * fRam0000000146afc5bc + fVar1 * fVar5 +
              fVar3 * fVar7 * fRam0000000146afc5ac + fVar4 * fVar8 * fRam0000000146afc59c;
  FQuat::Rotator(&local_38,param_1);
  return param_1;
}



// FUNCTION 14252bf80 IsControllerAssignedToGamepad body=6 status=ok
// SIG undefined IsControllerAssignedToGamepad(void)

bool UKismetSystemLibrary::IsControllerAssignedToGamepad(int param_1)

{
  return param_1 == 0;
}



// FUNCTION 14252bf90 IsDedicatedServer body=54 status=ok
// SIG undefined IsDedicatedServer(void)

bool UKismetSystemLibrary::IsDedicatedServer(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 != 0) {
    iVar1 = FUN_1428cf800(lVar2);
    return iVar1 == 1;
  }
  return false;
}



// FUNCTION 14252bfd0 IsInterstitialAdAvailable body=83 status=ok
// SIG undefined IsInterstitialAdAvailable(void)

void UKismetSystemLibrary::IsInterstitialAdAvailable(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,"Advertising",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014252c019. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x60))(plVar4);
    return;
  }
  return;
}



// FUNCTION 14252c030 IsInterstitialAdRequested body=83 status=ok
// SIG undefined IsInterstitialAdRequested(void)

void UKismetSystemLibrary::IsInterstitialAdRequested(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,"Advertising",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014252c079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x68))(plVar4);
    return;
  }
  return;
}



// FUNCTION 14252c090 FUN_14252c090 body=158 status=ok
// SIG undefined FUN_14252c090(void)

void FUN_14252c090(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar3 = uVar6;
  if (param_1 != (longlong *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x148))();
    lVar1 = param_1[0xa1];
    if (lVar1 != 0) {
      lVar4 = ULocalPlayer::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar6 = (ulonglong)*(uint *)(lVar1 + 0x108);
      }
    }
  }
  plVar5 = (longlong *)UOnlineEngineInterface::Get();
                    /* WARNING: Could not recover jumptable at 0x00014252c127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x2e0))(plVar5,uVar3,uVar6);
  return;
}



// FUNCTION 14252c130 FUN_14252c130 body=119 status=ok
// SIG undefined FUN_14252c130(void)

ulonglong FUN_14252c130(longlong param_1)

{
  int iVar1;
  ulonglong in_RAX;
  
  if (param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  if ((*(longlong *)(param_1 + 0x120) == 0) || (*(longlong *)(param_1 + 0x120) == 0x11a)) {
    iVar1 = FUN_142235230(param_1);
  }
  else {
    iVar1 = FUN_142235230(param_1);
  }
  if (iVar1 != 3) {
    return (ulonglong)(*(char *)(param_1 + 0x95) != '\0');
  }
  return (ulonglong)(*(char *)(param_1 + 0x128) != '\0');
}



// FUNCTION 14252c1b0 IsNumeric body=5 status=ok
// SIG undefined IsNumeric(void)

ulonglong FString::IsNumeric(undefined8 *param_1)

{
  wint_t _C;
  bool bVar1;
  int iVar2;
  undefined4 extraout_var;
  ulonglong uVar3;
  ulonglong in_RAX;
  wint_t *pwVar4;
  
  if (*(int *)(param_1 + 1) < 2) {
    return in_RAX & 0xffffffffffffff00;
  }
  pwVar4 = (wint_t *)*param_1;
  _C = *pwVar4;
  if ((_C == 0x2d) || (_C == 0x2b)) {
    _C = pwVar4[1];
    pwVar4 = pwVar4 + 1;
  }
  bVar1 = false;
  do {
    if (_C == 0) {
      return 1;
    }
    if (_C == 0x2e) {
      uVar3 = 0;
      if (bVar1) {
LAB_1415936cb:
        return uVar3 & 0xffffffffffffff00;
      }
      bVar1 = true;
    }
    else {
      iVar2 = iswdigit(_C);
      uVar3 = CONCAT44(extraout_var,iVar2);
      if (iVar2 == 0) goto LAB_1415936cb;
    }
    _C = pwVar4[1];
    pwVar4 = pwVar4 + 1;
  } while( true );
}



// FUNCTION 14252c1c0 IsPersistentLevel body=21 status=ok
// SIG undefined IsPersistentLevel(void)

undefined8 ULevel::IsPersistentLevel(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),param_1 == *(longlong *)(lVar1 + 0x30));
  }
  return 0;
}



// FUNCTION 14252c1e0 IsPointInBox body=174 status=ok
// SIG undefined IsPointInBox(void)

undefined1 UKismetMathLibrary::IsPointInBox(float *param_1,float *param_2,float *param_3)

{
  if ((((*param_2 - *param_3 <= *param_1) && (*param_1 <= *param_3 + *param_2)) &&
      (param_2[1] - param_3[1] <= param_1[1])) &&
     (((param_1[1] <= param_3[1] + param_2[1] && (param_2[2] - param_3[2] <= param_1[2])) &&
      (param_1[2] <= param_3[2] + param_2[2])))) {
    return 1;
  }
  return 0;
}



// FUNCTION 14252c290 IsPointInBoxWithTransform body=354 status=ok
// SIG undefined IsPointInBoxWithTransform(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong UKismetMathLibrary::IsPointInBoxWithTransform(float *param_1,float *param_2,float *param_3)

{
  uint7 uVar2;
  longlong lVar1;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar8;
  float fVar9;
  undefined1 in_XMM4 [16];
  undefined1 auVar7 [16];
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
  float local_4c;
  float fStack_48;
  
  auVar7 = *(undefined1 (*) [16])(param_2 + 8);
  fVar17 = auVar7._0_4_;
  fVar18 = auVar7._4_4_;
  fVar19 = auVar7._8_4_;
  fVar10 = *param_2 * _DAT_146afc580;
  fVar11 = param_2[1] * fRam0000000146afc584;
  fVar12 = param_2[2] * fRam0000000146afc588;
  fVar13 = param_2[3] * fRam0000000146afc58c;
  auVar7 = rcpps(in_XMM4,auVar7);
  fVar14 = (float)((uint)(*param_1 - param_2[4]) & _DAT_146afc530);
  fVar15 = (float)((uint)(param_1[1] - param_2[5]) & uRam0000000146afc534);
  fVar16 = (float)((uint)(param_1[2] - param_2[6]) & uRam0000000146afc538);
  fVar3 = fVar16 * fVar11 - fVar15 * fVar12;
  fVar4 = fVar14 * fVar12 - fVar16 * fVar10;
  fVar5 = fVar15 * fVar10 - fVar14 * fVar11;
  fVar6 = auVar7._0_4_;
  fVar8 = auVar7._4_4_;
  fVar9 = auVar7._8_4_;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  fVar5 = fVar5 + fVar5;
  fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar17;
  fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar18;
  fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar19;
  fVar6 = (fVar6 + fVar6) - fVar6 * fVar6 * fVar17;
  fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar18;
  fVar9 = (fVar9 + fVar9) - fVar9 * fVar9 * fVar19;
  fVar17 = ((fVar5 * fVar11 - fVar4 * fVar12) + fVar13 * fVar3 + fVar14) *
           (float)(-(uint)((float)((uint)fVar17 & _DAT_146afc540) <= _DAT_146afc570) & (uint)fVar6 ^
                  (uint)fVar6);
  fVar18 = ((fVar3 * fVar12 - fVar5 * fVar10) + fVar13 * fVar4 + fVar15) *
           (float)(-(uint)((float)((uint)fVar18 & uRam0000000146afc544) <= fRam0000000146afc574) &
                   (uint)fVar8 ^ (uint)fVar8);
  fVar19 = ((fVar4 * fVar10 - fVar3 * fVar11) + fVar13 * fVar5 + fVar16) *
           (float)(-(uint)((float)((uint)fVar19 & uRam0000000146afc548) <= fRam0000000146afc578) &
                   (uint)fVar9 ^ (uint)fVar9);
  uVar2 = (uint7)(uint3)((uint)param_3[2] >> 8);
  if ((((fVar17 < -*param_3) || (local_4c = (float)*(undefined8 *)param_3, local_4c < fVar17)) ||
      (fVar18 < -param_3[1])) ||
     (((fStack_48 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20), fStack_48 < fVar18 ||
       (fVar19 < -param_3[2])) || (param_3[2] < fVar19)))) {
    lVar1 = (ulonglong)uVar2 << 8;
  }
  else {
    lVar1 = CONCAT71(uVar2,1);
  }
  return lVar1;
}



// FUNCTION 14252c400 IsPolyglotDataValid body=25 status=ok
// SIG undefined IsPolyglotDataValid(void)

void UKismetTextLibrary::IsPolyglotDataValid
               (undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = FPolyglotTextData::IsValid(param_1,param_3);
  *param_2 = uVar1;
  return;
}



// FUNCTION 14252c420 IsReadyForFinishDestroy body=26 status=ok
// SIG undefined IsReadyForFinishDestroy(void)

bool ULevel::IsReadyForFinishDestroy(longlong param_1)

{
  char cVar1;
  
  cVar1 = FRenderCommandFence::IsFenceComplete(param_1 + 0x1d0);
  return cVar1 != '\0';
}



// FUNCTION 14252c440 IsRegisteredTableEntry body=239 status=ok
// SIG undefined IsRegisteredTableEntry(void)

undefined8 UKismetStringTableLibrary::IsRegisteredTableEntry(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  bool bVar6;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  bVar6 = false;
  uVar4 = FUN_141607d00();
  FStringTableRegistry::FindStringTable(uVar4,&local_28,param_1);
  if (local_28 != 0) {
    plVar5 = (longlong *)FStringTable::FindEntry(local_28,local_18,param_2);
    bVar6 = true;
    if (*plVar5 != 0) {
      uVar4 = 1;
      goto LAB_14252c4a0;
    }
  }
  uVar4 = 0;
LAB_14252c4a0:
  if ((bVar6) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_10 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar1 = (int *)((longlong)local_10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_20 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return uVar4;
}



// FUNCTION 14252c530 IsRegisteredTableId body=141 status=ok
// SIG undefined IsRegisteredTableId(void)

bool UKismetStringTableLibrary::IsRegisteredTableId(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_18;
  longlong *local_10;
  
  uVar5 = FUN_141607d00();
  FStringTableRegistry::FindStringTable(uVar5,&local_18,param_1);
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
    return local_18 != 0;
  }
  return local_18 != 0;
}



// FUNCTION 14252c5c0 IsServer body=59 status=ok
// SIG undefined IsServer(void)

bool UKismetSystemLibrary::IsServer(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 != 0) {
    iVar1 = FUN_1428cf800(lVar2);
    return iVar1 != 3;
  }
  return false;
}



// FUNCTION 14252c600 IsStandalone body=58 status=ok
// SIG undefined IsStandalone(void)

bool UKismetSystemLibrary::IsStandalone(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 != 0) {
    iVar1 = FUN_1428cf800(lVar2);
    return iVar1 == 0;
  }
  return false;
}



// FUNCTION 14252c640 IsValidPrimaryAssetId body=31 status=ok
// SIG undefined IsValidPrimaryAssetId(void)

undefined8 UKismetSystemLibrary::IsValidPrimaryAssetId(longlong *param_1)

{
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 14252c660 IsValidSoftClassReference body=15 status=ok
// SIG undefined IsValidSoftClassReference(void)

bool UKismetSystemLibrary::IsValidSoftClassReference(longlong param_1)

{
  return *(longlong *)(param_1 + 0x10) != 0;
}



// FUNCTION 14252c670 IsValid_Guid body=15 status=ok
// SIG undefined IsValid_Guid(void)

undefined4 UKismetGuidLibrary::IsValid_Guid(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[3] | param_1[2] | param_1[1] | *param_1;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 != 0);
}



// FUNCTION 14252c680 FUN_14252c680 body=218 status=ok
// SIG undefined FUN_14252c680(void)

void FUN_14252c680(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14252c748:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x00014252c6a3:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if ((((byte)uVar1 >> 6 & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_14252c748;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x00014252c6a3;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_14252c748;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x00014252c6a3;
}



// FUNCTION 14252c760 FUN_14252c760 body=219 status=ok
// SIG undefined FUN_14252c760(void)

void FUN_14252c760(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14252c829:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x00014252c783:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 10 & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_14252c829;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x00014252c783;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_14252c829;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x00014252c783;
}



// FUNCTION 14252c840 FUN_14252c840 body=219 status=ok
// SIG undefined FUN_14252c840(void)

void FUN_14252c840(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14252c909:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x00014252c863:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 0xc & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_14252c909;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x00014252c863;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_14252c909;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x00014252c863;
}



// FUNCTION 14252c920 FUN_14252c920 body=219 status=ok
// SIG undefined FUN_14252c920(void)

void FUN_14252c920(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14252c9e9:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x00014252c943:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 0xd & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_14252c9e9;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x00014252c943;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_14252c9e9;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x00014252c943;
}



// FUNCTION 14252ca00 FUN_14252ca00 body=219 status=ok
// SIG undefined FUN_14252ca00(void)

void FUN_14252ca00(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14252cac9:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x00014252ca23:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 0x21 & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_14252cac9;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x00014252ca23;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_14252cac9;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x00014252ca23;
}



// FUNCTION 14252cae0 FUN_14252cae0 body=219 status=ok
// SIG undefined FUN_14252cae0(void)

void FUN_14252cae0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14252cba9:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x00014252cb03:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 0x1d & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_14252cba9;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x00014252cb03;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_14252cba9;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x00014252cb03;
}



// FUNCTION 14252cbc0 FUN_14252cbc0 body=219 status=ok
// SIG undefined FUN_14252cbc0(void)

void FUN_14252cbc0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14252cc89:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x00014252cbe3:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 0xe & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_14252cc89;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x00014252cbe3;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_14252cc89;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x00014252cbe3;
}



// FUNCTION 14252cca0 FUN_14252cca0 body=219 status=ok
// SIG undefined FUN_14252cca0(void)

void FUN_14252cca0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  if (plVar4 == (longlong *)0x0) {
LAB_14252cd69:
    *param_1 = (longlong)plVar4;
    param_1[1] = lVar5;
    return;
  }
joined_r0x00014252ccc3:
  for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x28)) {
    uVar1 = *(ulonglong *)(*(longlong *)(lVar5 + 0x10) + 0xb8);
    if (((uVar1 >> 0x1e & 1) != 0) &&
       (((*(char *)((longlong)param_1 + 0x15) != '\0' || ((uVar1 >> 0xf & 1) == 0)) ||
        ((*(uint *)(lVar5 + 0x38) >> 0x1d & 1) == 0)))) goto LAB_14252cd69;
  }
  if (*(char *)((longlong)param_1 + 0x16) != '\0') {
    lVar2 = param_1[2];
    iVar3 = (int)lVar2 + 1;
    *(int *)(param_1 + 2) = iVar3;
    if (iVar3 < (int)plVar4[0x35]) {
      lVar5 = *(longlong *)(plVar4[0x34] + ((longlong)(int)lVar2 + 1) * 0x10);
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)(lVar5 + 0x38);
      }
      goto joined_r0x00014252ccc3;
    }
  }
  if ((*(char *)((longlong)param_1 + 0x14) == '\0') ||
     (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4), plVar4 == (longlong *)0x0))
  goto LAB_14252cd69;
  lVar5 = plVar4[7];
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  goto joined_r0x00014252ccc3;
}



// FUNCTION 14252cd80 JoinStringArray body=54 status=ok
// SIG undefined JoinStringArray(void)

undefined8
UKismetStringLibrary::JoinStringArray(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  if (*(int *)(param_3 + 1) != 0) {
    FString::Join<TArray<FString,FDefaultAllocator>_>(param_1,param_2,*param_3);
    return param_1;
  }
  FString::Join<TArray<FString,FDefaultAllocator>_>(param_1,param_2,&DAT_143f3eda8);
  return param_1;
}



// FUNCTION 14252cdc0 K2_ClearAndInvalidateTimerHandle body=90 status=ok
// SIG undefined K2_ClearAndInvalidateTimerHandle(void)

void UKismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 != 0) {
    lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      FUN_142880530(uVar2,param_2);
      *param_2 = 0;
    }
  }
  return;
}



// FUNCTION 14252ce20 FUN_14252ce20 body=307 status=ok
// SIG undefined FUN_14252ce20(void)

void FUN_14252ce20(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  longlong local_res10;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  longlong local_10;
  
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  if ((int)param_2[1] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FName::FName(&local_res10,puVar3,1);
  FWeakObjectPtr::operator=(&local_28,param_1);
  lVar1 = local_res10;
  local_38 = local_28;
  local_34 = local_24;
  local_20 = local_res10;
  local_30 = local_res10;
  local_res10 = 0;
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(&local_38);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,local_30);
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(&local_38);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_18 = local_38;
          local_14 = local_34;
          local_10 = local_30;
          FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_res10,&local_18);
          FUN_142880530(uVar2,&local_res10);
        }
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14252cf60 FUN_14252cf60 body=188 status=ok
// SIG undefined FUN_14252cf60(void)

void FUN_14252cf60(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 2) != 0) {
    lVar1 = FWeakObjectPtr::Get();
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 2));
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(param_1);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_18 = *param_1;
          local_14 = param_1[1];
          local_10 = *(undefined8 *)(param_1 + 2);
          FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_res8,&local_18);
          FUN_142880530(uVar2,&local_res8);
        }
      }
    }
  }
  return;
}



// FUNCTION 14252d020 K2_ClearTimerHandle body=96 status=ok
// SIG undefined K2_ClearTimerHandle(void)

void UKismetSystemLibrary::K2_ClearTimerHandle(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong local_res10 [3];
  
  if ((param_2 != 0) &&
     (local_res10[0] = param_2, lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1),
     lVar1 != 0)) {
    if (*(longlong *)(lVar1 + 400) != 0) {
      FUN_142880530(*(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90),local_res10);
      return;
    }
    FUN_142880530(*(undefined8 *)(lVar1 + 0x3f8),local_res10);
  }
  return;
}



// FUNCTION 14252d080 FUN_14252d080 body=339 status=ok
// SIG undefined FUN_14252d080(void)

undefined8 FUN_14252d080(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong local_res10;
  longlong local_res18 [2];
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  if ((int)param_2[1] == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  FName::FName(&local_res10,puVar4,1);
  FWeakObjectPtr::operator=(&local_48,param_1);
  lVar1 = local_res10;
  local_58 = local_48;
  local_54 = local_44;
  local_40 = local_res10;
  local_50 = local_res10;
  local_res10 = 0;
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(&local_58);
    uVar2 = 0;
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,local_50);
      uVar2 = 0;
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(&local_58);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        uVar2 = 0;
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_38 = local_58;
          local_34 = local_54;
          local_30 = local_50;
          FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_res10,&local_38);
          local_res18[0] = local_res10;
          uVar3 = FTimerManager::FindTimer(uVar2,local_res18,0);
          uVar2 = FTimerManager::InternalGetTimerElapsed(uVar2,uVar3);
        }
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 14252d1e0 FUN_14252d1e0 body=225 status=ok
// SIG undefined FUN_14252d1e0(void)

undefined8 FUN_14252d1e0(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 2) != 0) {
    lVar1 = FWeakObjectPtr::Get();
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 2));
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(param_1);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_18 = *param_1;
          local_14 = param_1[1];
          local_10 = *(undefined8 *)(param_1 + 2);
          FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_res8,&local_18);
          local_res10 = local_res8;
          uVar3 = FTimerManager::FindTimer(uVar2,&local_res10,0);
          uVar2 = FTimerManager::InternalGetTimerElapsed(uVar2,uVar3);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14252d2d0 K2_GetTimerElapsedTimeHandle body=125 status=ok
// SIG undefined K2_GetTimerElapsedTimeHandle(void)

undefined8 UKismetSystemLibrary::K2_GetTimerElapsedTimeHandle(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      local_res10[0] = param_2;
      uVar2 = FTimerManager::FindTimer(uVar3,local_res10,0);
      uVar3 = FTimerManager::InternalGetTimerElapsed(uVar3,uVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14252d350 FUN_14252d350 body=339 status=ok
// SIG undefined FUN_14252d350(void)

undefined8 FUN_14252d350(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong local_res10;
  longlong local_res18 [2];
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  if ((int)param_2[1] == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  FName::FName(&local_res10,puVar4,1);
  FWeakObjectPtr::operator=(&local_48,param_1);
  lVar1 = local_res10;
  local_58 = local_48;
  local_54 = local_44;
  local_40 = local_res10;
  local_50 = local_res10;
  local_res10 = 0;
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(&local_58);
    uVar2 = 0;
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,local_50);
      uVar2 = 0;
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(&local_58);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        uVar2 = 0;
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_38 = local_58;
          local_34 = local_54;
          local_30 = local_50;
          FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_res10,&local_38);
          local_res18[0] = local_res10;
          uVar3 = FTimerManager::FindTimer(uVar2,local_res18,0);
          uVar2 = FTimerManager::InternalGetTimerRemaining(uVar2,uVar3);
        }
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 14252d4b0 FUN_14252d4b0 body=225 status=ok
// SIG undefined FUN_14252d4b0(void)

undefined8 FUN_14252d4b0(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 2) != 0) {
    lVar1 = FWeakObjectPtr::Get();
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 2));
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(param_1);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_18 = *param_1;
          local_14 = param_1[1];
          local_10 = *(undefined8 *)(param_1 + 2);
          FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_res8,&local_18);
          local_res10 = local_res8;
          uVar3 = FTimerManager::FindTimer(uVar2,&local_res10,0);
          uVar2 = FTimerManager::InternalGetTimerRemaining(uVar2,uVar3);
          return uVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14252d5a0 K2_GetTimerRemainingTimeHandle body=125 status=ok
// SIG undefined K2_GetTimerRemainingTimeHandle(void)

undefined8 UKismetSystemLibrary::K2_GetTimerRemainingTimeHandle(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      local_res10[0] = param_2;
      uVar2 = FTimerManager::FindTimer(uVar3,local_res10,0);
      uVar3 = FTimerManager::InternalGetTimerRemaining(uVar3,uVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14252d620 K2_InvalidateTimerHandle body=12 status=ok
// SIG undefined K2_InvalidateTimerHandle(void)

undefined8 * UKismetSystemLibrary::K2_InvalidateTimerHandle(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14252d630 FUN_14252d630 body=328 status=ok
// SIG undefined FUN_14252d630(void)

undefined8 FUN_14252d630(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  longlong local_res10;
  longlong local_res18 [2];
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  if ((int)param_2[1] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FName::FName(&local_res10,puVar3,1);
  FWeakObjectPtr::operator=(&local_38,param_1);
  lVar1 = local_res10;
  uVar4 = 0;
  local_48 = local_38;
  local_44 = local_34;
  local_30 = local_res10;
  local_40 = local_res10;
  local_res10 = 0;
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(&local_48);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,local_40);
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(&local_48);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar4 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_28 = local_48;
          local_24 = local_44;
          local_20 = local_40;
          FTimerManager::K2_FindDynamicTimerHandle(uVar4,&local_res10,&local_28);
          local_res18[0] = local_res10;
          lVar1 = FTimerManager::FindTimer(uVar4,local_res18,0);
          if ((lVar1 == 0) || (*(char *)(lVar1 + 1) == '\x02')) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 14252d780 FUN_14252d780 body=226 status=ok
// SIG undefined FUN_14252d780(void)

undefined8 FUN_14252d780(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 2) != 0) {
    lVar1 = FWeakObjectPtr::Get();
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 2));
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(param_1);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_18 = *param_1;
          local_14 = param_1[1];
          local_10 = *(undefined8 *)(param_1 + 2);
          FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_res8,&local_18);
          local_res10 = local_res8;
          lVar1 = FTimerManager::FindTimer(uVar2,&local_res10,0);
          if ((lVar1 != 0) && (*(char *)(lVar1 + 1) != '\x02')) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14252d870 K2_IsTimerActiveHandle body=116 status=ok
// SIG undefined K2_IsTimerActiveHandle(void)

undefined8 UKismetSystemLibrary::K2_IsTimerActiveHandle(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      local_res10[0] = param_2;
      lVar1 = FTimerManager::FindTimer(uVar2,local_res10,0);
      if ((lVar1 != 0) && (*(char *)(lVar1 + 1) != '\x02')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14252d8f0 FUN_14252d8f0 body=328 status=ok
// SIG undefined FUN_14252d8f0(void)

undefined8 FUN_14252d8f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  longlong local_res10;
  longlong local_res18 [2];
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  if ((int)param_2[1] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FName::FName(&local_res10,puVar3,1);
  FWeakObjectPtr::operator=(&local_38,param_1);
  lVar1 = local_res10;
  uVar4 = 0;
  local_48 = local_38;
  local_44 = local_34;
  local_30 = local_res10;
  local_40 = local_res10;
  local_res10 = 0;
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(&local_48);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,local_40);
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(&local_48);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar4 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar4 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_28 = local_48;
          local_24 = local_44;
          local_20 = local_40;
          FTimerManager::K2_FindDynamicTimerHandle(uVar4,&local_res10,&local_28);
          local_res18[0] = local_res10;
          lVar1 = FTimerManager::FindTimer(uVar4,local_res18,0);
          if ((lVar1 == 0) || (*(char *)(lVar1 + 1) != '\x02')) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return uVar4;
}



// FUNCTION 14252da40 FUN_14252da40 body=226 status=ok
// SIG undefined FUN_14252da40(void)

undefined8 FUN_14252da40(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 2) != 0) {
    lVar1 = FWeakObjectPtr::Get();
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 2));
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(param_1);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_18 = *param_1;
          local_14 = param_1[1];
          local_10 = *(undefined8 *)(param_1 + 2);
          FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_res8,&local_18);
          local_res10 = local_res8;
          lVar1 = FTimerManager::FindTimer(uVar2,&local_res10,0);
          if ((lVar1 != 0) && (*(char *)(lVar1 + 1) == '\x02')) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14252db30 K2_IsTimerPausedHandle body=116 status=ok
// SIG undefined K2_IsTimerPausedHandle(void)

undefined8 UKismetSystemLibrary::K2_IsTimerPausedHandle(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      local_res10[0] = param_2;
      lVar1 = FTimerManager::FindTimer(uVar2,local_res10,0);
      if ((lVar1 != 0) && (*(char *)(lVar1 + 1) == '\x02')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14252dbb0 FUN_14252dbb0 body=322 status=ok
// SIG undefined FUN_14252dbb0(void)

void FUN_14252dbb0(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  ulonglong local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  if ((int)param_2[1] == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  FName::FName(&local_res10,puVar5,1);
  FWeakObjectPtr::operator=(&local_38,param_1);
  uVar1 = local_res10;
  local_48 = local_38;
  local_44 = local_34;
  local_30 = local_res10;
  local_40 = local_res10;
  local_res10 = 0;
  if (uVar1 != 0) {
    lVar2 = FWeakObjectPtr::Get(&local_48);
    if (lVar2 != 0) {
      lVar2 = UObject::FindFunction(lVar2,local_40);
      if (lVar2 != 0) {
        uVar3 = FWeakObjectPtr::Get(&local_48);
        lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar3,1);
        if (lVar2 != 0) {
          if (*(longlong *)(lVar2 + 400) == 0) {
            uVar3 = *(undefined8 *)(lVar2 + 0x3f8);
          }
          else {
            uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 400) + 0x90);
          }
          local_28 = local_48;
          local_24 = local_44;
          local_20 = local_40;
          FTimerManager::K2_FindDynamicTimerHandle(uVar3,&local_res18,&local_28);
          local_res20 = local_res18;
          uVar4 = FTimerManager::FindTimer(uVar3,&local_res20,&local_res10);
          FUN_142880730(uVar3,uVar4,local_res10 & 0xffffffff);
        }
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14252dd00 FUN_14252dd00 body=223 status=ok
// SIG undefined FUN_14252dd00(void)

void FUN_14252dd00(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 2) != 0) {
    lVar1 = FWeakObjectPtr::Get();
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 2));
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(param_1);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_18 = *param_1;
          local_14 = param_1[1];
          local_10 = *(undefined8 *)(param_1 + 2);
          FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_res10,&local_18);
          local_res18 = local_res10;
          uVar3 = FTimerManager::FindTimer(uVar2,&local_res18,&local_res8);
          FUN_142880730(uVar2,uVar3,local_res8 & 0xffffffff);
        }
      }
    }
  }
  return;
}



// FUNCTION 14252dde0 K2_PauseTimerHandle body=122 status=ok
// SIG undefined K2_PauseTimerHandle(void)

void UKismetSystemLibrary::K2_PauseTimerHandle(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_res10 [2];
  longlong local_res18 [2];
  
  if ((param_2 != 0) &&
     (lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar1 != 0)) {
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    local_res18[0] = param_2;
    uVar2 = FTimerManager::FindTimer(uVar3,local_res18,local_res10);
    FUN_142880730(uVar3,uVar2,local_res10[0]);
  }
  return;
}



// FUNCTION 14252de60 FUN_14252de60 body=583 status=ok
// SIG undefined FUN_14252de60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_14252de60(undefined8 *param_1,longlong param_2,longlong *param_3,undefined4 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong *plVar5;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if ((int)param_3[1] == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_3;
  }
  FName::FName(&local_d0,puVar4,1);
  if (param_2 != 0) {
    lVar1 = UObject::FindFunction(param_2,local_d0);
    if ((lVar1 != 0) && (*(short *)(lVar1 + 0x8e) != 0)) {
      *param_1 = 0;
      goto LAB_14252e06e;
    }
  }
  FWeakObjectPtr::operator=(&local_e0,0);
  local_d8 = 0;
  FWeakObjectPtr::operator=(&local_e0,param_2);
  local_f8 = local_e0;
  local_f4 = local_dc;
  local_d8 = local_d0;
  local_f0 = local_d0;
  *param_1 = 0;
  local_e8 = 0;
  if (local_d0 != 0) {
    lVar1 = FWeakObjectPtr::Get(&local_f8);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,local_f0);
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(&local_f8);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_c8 = local_f8;
          local_c4 = local_f4;
          local_c0 = local_f0;
          puVar3 = (undefined8 *)FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_e8,&local_c8)
          ;
          local_100 = 0xbf800000;
          local_b8 = 0;
          local_a8 = local_f8;
          local_a4 = local_f4;
          local_a0 = local_f0;
          local_98 = AK::MemoryMgr::StartProfileThreadUsage;
          *param_1 = *puVar3;
          local_108 = param_5;
          local_b0 = 0;
          local_68 = (longlong *)0x0;
          local_58 = 0;
          FUN_142880850(uVar2,param_1,&local_b8,param_4);
          if (local_58 != 0) {
            plVar5 = local_88;
            if (local_68 != (longlong *)0x0) {
              plVar5 = local_68;
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5,0);
            }
          }
          if (local_68 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
        }
      }
    }
  }
LAB_14252e06e:
  if (*param_3 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14252e0b0 FUN_14252e0b0 body=455 status=ok
// SIG undefined FUN_14252e0b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_14252e0b0(undefined8 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *param_1 = 0;
  local_d8 = 0;
  if (*(longlong *)(param_2 + 2) != 0) {
    lVar1 = FWeakObjectPtr::Get(param_2);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_2 + 2));
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(param_2);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_d0 = *param_2;
          local_cc = param_2[1];
          local_c8 = *(undefined8 *)(param_2 + 2);
          puVar3 = (undefined8 *)FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_d8,&local_d0)
          ;
          local_e0 = 0xbf800000;
          local_b8 = 0;
          *param_1 = *puVar3;
          local_a8 = *param_2;
          local_a4 = param_2[1];
          local_a0 = *(undefined8 *)(param_2 + 2);
          local_98 = AK::MemoryMgr::StartProfileThreadUsage;
          local_b0 = 0;
          local_68 = (longlong *)0x0;
          local_58 = 0;
          local_e8 = param_4;
          FUN_142880850(uVar2,param_1,&local_b8,param_3);
          if (local_58 != 0) {
            plVar4 = local_88;
            if (local_68 != (longlong *)0x0) {
              plVar4 = local_68;
            }
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 0x10))(plVar4,0);
            }
          }
          if (local_68 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 14252e280 FUN_14252e280 body=320 status=ok
// SIG undefined FUN_14252e280(void)

bool FUN_14252e280(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  bool bVar4;
  longlong local_res10;
  longlong local_res18 [2];
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  if ((int)param_2[1] == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  FName::FName(&local_res10,puVar3,1);
  FWeakObjectPtr::operator=(&local_38,param_1);
  lVar1 = local_res10;
  bVar4 = false;
  local_48 = local_38;
  local_44 = local_34;
  local_30 = local_res10;
  local_40 = local_res10;
  local_res10 = 0;
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(&local_48);
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,local_40);
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(&local_48);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_28 = local_48;
          local_24 = local_44;
          local_20 = local_40;
          FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_res10,&local_28);
          local_res18[0] = local_res10;
          lVar1 = FTimerManager::FindTimer(uVar2,local_res18,0);
          bVar4 = lVar1 != 0;
        }
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return bVar4;
}



// FUNCTION 14252e3c0 FUN_14252e3c0 body=219 status=ok
// SIG undefined FUN_14252e3c0(void)

bool FUN_14252e3c0(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 2) != 0) {
    lVar1 = FWeakObjectPtr::Get();
    if (lVar1 != 0) {
      lVar1 = UObject::FindFunction(lVar1,*(undefined8 *)(param_1 + 2));
      if (lVar1 != 0) {
        uVar2 = FWeakObjectPtr::Get(param_1);
        lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar2,1);
        if (lVar1 != 0) {
          if (*(longlong *)(lVar1 + 400) == 0) {
            uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
          }
          else {
            uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
          }
          local_18 = *param_1;
          local_14 = param_1[1];
          local_10 = *(undefined8 *)(param_1 + 2);
          FTimerManager::K2_FindDynamicTimerHandle(uVar2,&local_res8,&local_18);
          local_res10 = local_res8;
          lVar1 = FTimerManager::FindTimer(uVar2,&local_res10,0);
          return lVar1 != 0;
        }
      }
    }
  }
  return false;
}



// FUNCTION 14252e4a0 K2_TimerExistsHandle body=109 status=ok
// SIG undefined K2_TimerExistsHandle(void)

bool UKismetSystemLibrary::K2_TimerExistsHandle(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 400) == 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
      }
      else {
        uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
      }
      local_res10[0] = param_2;
      lVar1 = FTimerManager::FindTimer(uVar2,local_res10,0);
      return lVar1 != 0;
    }
  }
  return false;
}



// FUNCTION 14252e510 FUN_14252e510 body=317 status=ok
// SIG undefined FUN_14252e510(void)

void FUN_14252e510(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong local_res10;
  longlong local_res18 [2];
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  
  FWeakObjectPtr::operator=(&local_38,0);
  local_30 = 0;
  if ((int)param_2[1] == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  FName::FName(&local_res10,puVar4,1);
  FWeakObjectPtr::operator=(&local_38,param_1);
  lVar2 = local_res10;
  local_48 = local_38;
  local_44 = local_34;
  local_30 = local_res10;
  local_40 = local_res10;
  local_res10 = 0;
  if (lVar2 != 0) {
    lVar2 = FWeakObjectPtr::Get(&local_48);
    if (lVar2 != 0) {
      lVar2 = UObject::FindFunction(lVar2,local_40);
      if (lVar2 != 0) {
        uVar3 = FWeakObjectPtr::Get(&local_48);
        lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar3,1);
        if (lVar2 != 0) {
          if (*(longlong *)(lVar2 + 400) == 0) {
            lVar2 = *(longlong *)(lVar2 + 0x3f8);
          }
          else {
            lVar2 = *(longlong *)(*(longlong *)(lVar2 + 400) + 0x90);
          }
          local_28 = local_48;
          local_24 = local_44;
          local_20 = local_40;
          FTimerManager::K2_FindDynamicTimerHandle(lVar2,&local_res10,&local_28);
          local_res18[0] = local_res10;
          uVar1 = FTimerManager::FindTimerInList(lVar2,lVar2 + 0x20,local_res18);
          FUN_142880ca0(lVar2,uVar1);
        }
      }
    }
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14252e650 FUN_14252e650 body=216 status=ok
// SIG undefined FUN_14252e650(void)

void FUN_14252e650(undefined4 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_res8 = 0;
  if (*(longlong *)(param_1 + 2) != 0) {
    lVar2 = FWeakObjectPtr::Get();
    if (lVar2 != 0) {
      lVar2 = UObject::FindFunction(lVar2,*(undefined8 *)(param_1 + 2));
      if (lVar2 != 0) {
        uVar3 = FWeakObjectPtr::Get(param_1);
        lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,uVar3,1);
        if (lVar2 != 0) {
          if (*(longlong *)(lVar2 + 400) == 0) {
            lVar2 = *(longlong *)(lVar2 + 0x3f8);
          }
          else {
            lVar2 = *(longlong *)(*(longlong *)(lVar2 + 400) + 0x90);
          }
          local_18 = *param_1;
          local_14 = param_1[1];
          local_10 = *(undefined8 *)(param_1 + 2);
          FTimerManager::K2_FindDynamicTimerHandle(lVar2,&local_res8,&local_18);
          local_res10 = local_res8;
          uVar1 = FTimerManager::FindTimerInList(lVar2,lVar2 + 0x20,&local_res10);
          FUN_142880ca0(lVar2,uVar1);
        }
      }
    }
  }
  return;
}



// FUNCTION 14252e730 K2_UnPauseTimerHandle body=115 status=ok
// SIG undefined K2_UnPauseTimerHandle(void)

void UKismetSystemLibrary::K2_UnPauseTimerHandle(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_res10 [3];
  
  if ((param_2 != 0) &&
     (lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar2 != 0)) {
    if (*(longlong *)(lVar2 + 400) == 0) {
      lVar2 = *(longlong *)(lVar2 + 0x3f8);
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    local_res10[0] = param_2;
    uVar1 = FTimerManager::FindTimerInList(lVar2,lVar2 + 0x20,local_res10);
    FUN_142880ca0(lVar2,uVar1);
  }
  return;
}



// FUNCTION 14252e7b0 FUN_14252e7b0 body=32 status=ok
// SIG undefined FUN_14252e7b0(void)

undefined8 FUN_14252e7b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1417ad2a0(param_2,param_1);
  return param_1;
}



// FUNCTION 14252e7d0 IsFloatAxis body=5 status=ok
// SIG undefined IsFloatAxis(void)

undefined8 FKey::IsFloatAxis(longlong param_1)

{
  longlong lVar1;
  
  ConditionalLookupKeyDetails();
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(lVar1 + 0x21) == '\x01');
  }
  return 0;
}



// FUNCTION 14252e7e0 IsGamepadKey body=5 status=ok
// SIG undefined IsGamepadKey(void)

byte FKey::IsGamepadKey(longlong param_1)

{
  ConditionalLookupKeyDetails();
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(byte *)(*(longlong *)(param_1 + 8) + 0x20) >> 1 & 1;
  }
  return 0;
}



// FUNCTION 14252e7f0 Key_IsKeyboardKey body=58 status=ok
// SIG undefined Key_IsKeyboardKey(void)

undefined1 UKismetInputLibrary::Key_IsKeyboardKey(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_1417c87c0();
  if (cVar1 != '\0') {
    cVar1 = FKey::IsGamepadKey(param_1);
    if (cVar1 == '\0') {
      cVar1 = FKey::IsMouseButton(param_1);
      if (cVar1 == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14252e830 IsModifierKey body=5 status=ok
// SIG undefined IsModifierKey(void)

byte FKey::IsModifierKey(longlong param_1)

{
  ConditionalLookupKeyDetails();
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(byte *)(*(longlong *)(param_1 + 8) + 0x20) & 1;
  }
  return 0;
}



// FUNCTION 14252e840 IsMouseButton body=5 status=ok
// SIG undefined IsMouseButton(void)

byte FKey::IsMouseButton(longlong param_1)

{
  ConditionalLookupKeyDetails();
  if (*(longlong *)(param_1 + 8) != 0) {
    return *(byte *)(*(longlong *)(param_1 + 8) + 0x20) >> 2 & 1;
  }
  return 0;
}



// FUNCTION 14252e850 IsValid body=5 status=ok
// SIG undefined IsValid(void)

bool FKey::IsValid(longlong *param_1)

{
  if (*param_1 != 0) {
    ConditionalLookupKeyDetails();
    return param_1[1] != 0;
  }
  return false;
}



// FUNCTION 14252e860 IsVectorAxis body=5 status=ok
// SIG undefined IsVectorAxis(void)

undefined8 FKey::IsVectorAxis(longlong param_1)

{
  longlong lVar1;
  
  ConditionalLookupKeyDetails();
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(lVar1 + 0x21) == '\x02');
  }
  return 0;
}



// FUNCTION 14252e870 LaunchURL body=20 status=ok
// SIG undefined LaunchURL(void)

void UKismetSystemLibrary::LaunchURL(undefined8 *param_1)

{
  if (1 < *(int *)(param_1 + 1)) {
    FUN_1416af6e0(*param_1,0,0);
    return;
  }
  return;
}



// FUNCTION 14252e890 FUN_14252e890 body=169 status=ok
// SIG undefined FUN_14252e890(void)

undefined8 * FUN_14252e890(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  wchar_t *_Dest;
  int iVar1;
  int iVar2;
  wchar_t *_Source;
  int iVar3;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    _Source = L"";
  }
  else {
    _Source = (wchar_t *)*param_2;
  }
  iVar3 = 0;
  iVar1 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar1 = iVar3;
  }
  iVar2 = iVar3;
  if ((-1 < param_3) && (iVar2 = iVar1, param_3 < iVar1)) {
    iVar2 = param_3;
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  iVar1 = iVar2 + 1;
  if (iVar2 == 0) {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 1) = iVar1;
  if ((0 < iVar1) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0), 0 < *(int *)(param_1 + 1))) {
    _Dest = (wchar_t *)*param_1;
    wcsncpy(_Dest,_Source,(longlong)iVar2);
    _Dest[iVar2] = L'\0';
  }
  return param_1;
}



// FUNCTION 14252e940 FUN_14252e940 body=181 status=ok
// SIG undefined FUN_14252e940(void)

undefined8 * FUN_14252e940(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  wchar_t *_Dest;
  int iVar1;
  int iVar2;
  wchar_t *_Source;
  int iVar3;
  
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 == 0) {
    _Source = L"";
    iVar1 = -1;
  }
  else {
    _Source = (wchar_t *)*param_2;
    iVar1 = iVar2 + -1;
  }
  iVar3 = 0;
  if (iVar2 == 0) {
    iVar1 = iVar3;
  }
  param_3 = iVar1 - param_3;
  iVar2 = iVar3;
  if ((-1 < param_3) && (iVar2 = iVar1, param_3 < iVar1)) {
    iVar2 = param_3;
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  iVar1 = iVar2 + 1;
  if (iVar2 == 0) {
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 1) = iVar1;
  if ((0 < iVar1) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0), 0 < *(int *)(param_1 + 1))) {
    _Dest = (wchar_t *)*param_1;
    wcsncpy(_Dest,_Source,(longlong)iVar2);
    _Dest[iVar2] = L'\0';
  }
  return param_1;
}



// FUNCTION 14252ea00 LeftPad body=32 status=ok
// SIG undefined LeftPad(void)

undefined8 UKismetStringLibrary::LeftPad(undefined8 param_1,undefined8 param_2)

{
  FString::LeftPad(param_2,param_1);
  return param_1;
}



// FUNCTION 14252ea20 Len body=14 status=ok
// SIG undefined Len(void)

int UKismetStringLibrary::Len(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + -1;
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 14252ea30 LinePlaneIntersection body=277 status=ok
// SIG undefined LinePlaneIntersection(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong UKismetMathLibrary::LinePlaneIntersection
                   (float *param_1,float *param_2,float *param_3,float *param_4,undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar7 = param_2[2];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar8 = (fVar1 - fVar3) * *param_3 + (fVar2 - fVar4) * param_3[1] + (fVar7 - fVar5) * param_3[2];
  if (fVar8 == 0.0) {
    *param_4 = -1.0;
  }
  else {
    fVar8 = (param_3[3] - (param_3[1] * param_1[1] + *param_3 * *param_1 + param_3[2] * param_1[2]))
            / fVar8;
    *param_4 = fVar8;
    if ((0.0 <= fVar8) && (fVar8 <= 1.0)) {
      fVar7 = (fVar7 - fVar5) * fVar8 + param_1[2];
      *param_5 = CONCAT44((fVar2 - fVar4) * fVar8 + param_1[1],(fVar1 - fVar3) * fVar8 + *param_1);
      *(float *)(param_5 + 1) = fVar7;
      return CONCAT71((uint7)(uint3)((uint)fVar7 >> 8),1);
    }
  }
  *param_5 = _DAT_1468b5d90;
  uVar6 = DAT_1468b5d98;
  *(undefined4 *)(param_5 + 1) = DAT_1468b5d98;
  return (ulonglong)(uint3)((uint)uVar6 >> 8) << 8;
}



// FUNCTION 14252eb50 LinePlaneIntersection_OriginNormal body=296 status=ok
// SIG undefined LinePlaneIntersection_OriginNormal(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong UKismetMathLibrary::LinePlaneIntersection_OriginNormal
                   (float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                   undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar7 = param_2[2];
  fVar5 = param_1[2];
  fVar8 = (fVar1 - fVar3) * *param_4 + (fVar2 - fVar4) * param_4[1] + (fVar7 - fVar5) * param_4[2];
  if (fVar8 == 0.0) {
    *param_5 = -1.0;
  }
  else {
    fVar8 = ((param_3[1] - param_1[1]) * param_4[1] + (*param_3 - *param_1) * *param_4 +
            (param_3[2] - param_1[2]) * param_4[2]) / fVar8;
    *param_5 = fVar8;
    if ((0.0 <= fVar8) && (fVar8 <= 1.0)) {
      fVar7 = fVar8 * (fVar7 - fVar5) + param_1[2];
      *param_6 = CONCAT44(fVar8 * (fVar2 - fVar4) + param_1[1],fVar8 * (fVar1 - fVar3) + *param_1);
      *(float *)(param_6 + 1) = fVar7;
      return CONCAT71((uint7)(uint3)((uint)fVar7 >> 8),1);
    }
  }
  *param_6 = _DAT_1468b5d90;
  uVar6 = DAT_1468b5d98;
  *(undefined4 *)(param_6 + 1) = DAT_1468b5d98;
  return (ulonglong)(uint3)((uint)uVar6 >> 8) << 8;
}



// FUNCTION 14252ec80 FUN_14252ec80 body=378 status=ok
// SIG undefined FUN_14252ec80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14252ec80(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 *local_e0;
  undefined *local_d8;
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar2 = UEngineTypes::ConvertToCollisionChannel(param_4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc730) {
    _Init_thread_header(&DAT_146afc730);
    if (DAT_146afc730 == -1) {
      FName::FName(&DAT_146afc728,L"LineTraceMulti",1);
      _Init_thread_footer(&DAT_146afc730);
    }
  }
  local_e8 = CONCAT31(local_e8._1_3_,param_9);
  local_e0 = param_1;
  FUN_14251be80(local_c8,DAT_146afc728,param_5,param_6);
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    local_d8 = &DAT_146aefe68;
    local_e0 = local_c8;
    local_e8 = uVar2;
    uVar1 = UWorld::LineTraceMultiByChannel(lVar3,param_8,param_2,param_3);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14252ee00 FUN_14252ee00 body=355 status=ok
// SIG undefined FUN_14252ee00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14252ee00(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc830) {
    _Init_thread_header(&DAT_146afc830);
    if (DAT_146afc830 == -1) {
      FName::FName(&DAT_146afc828,L"LineTraceMultiByProfile",1);
      _Init_thread_footer(&DAT_146afc830);
    }
  }
  local_d8 = CONCAT71(local_d8._1_7_,param_9);
  local_d0 = param_1;
  FUN_14251be80(local_c8,DAT_146afc828,param_5,param_6);
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_d0 = local_c8;
    local_d8 = param_4;
    uVar1 = FUN_142341ef0(lVar2,param_8,param_2,param_3);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14252ef70 FUN_14252ef70 body=382 status=ok
// SIG undefined FUN_14252ef70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14252ef70(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  int *local_e8;
  undefined1 *local_e0;
  int local_d8 [4];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc7b0) {
    _Init_thread_header(&DAT_146afc7b0);
    if (DAT_146afc7b0 == -1) {
      FName::FName(&DAT_146afc7a8,L"LineTraceMultiForObjects",1);
      _Init_thread_footer(&DAT_146afc7b0);
    }
  }
  local_e8 = (int *)CONCAT71(local_e8._1_7_,param_9);
  local_e0 = param_1;
  FUN_14251be80(local_c8,DAT_146afc7a8,param_5,param_6);
  FUN_14251bd40(local_d8,param_4);
  if (local_d8[0] != 0) {
    lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar2 != 0) {
      local_e0 = local_c8;
      local_e8 = local_d8;
      uVar1 = UWorld::LineTraceMultiByObjectType(lVar2,param_8,param_2,param_3);
      goto LAB_14252f062;
    }
  }
  uVar1 = 0;
LAB_14252f062:
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14252f0f0 FUN_14252f0f0 body=378 status=ok
// SIG undefined FUN_14252f0f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14252f0f0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 *local_e0;
  undefined *local_d8;
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar2 = UEngineTypes::ConvertToCollisionChannel(param_4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc720) {
    _Init_thread_header(&DAT_146afc720);
    if (DAT_146afc720 == -1) {
      FName::FName(&DAT_146afc718,L"LineTraceSingle",1);
      _Init_thread_footer(&DAT_146afc720);
    }
  }
  local_e8 = CONCAT31(local_e8._1_3_,param_9);
  local_e0 = param_1;
  FUN_14251be80(local_c8,DAT_146afc718,param_5,param_6);
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    local_d8 = &DAT_146aefe68;
    local_e0 = local_c8;
    local_e8 = uVar2;
    uVar1 = UWorld::LineTraceSingleByChannel(lVar3,param_8,param_2,param_3);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14252f270 FUN_14252f270 body=355 status=ok
// SIG undefined FUN_14252f270(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14252f270(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc820) {
    _Init_thread_header(&DAT_146afc820);
    if (DAT_146afc820 == -1) {
      FName::FName(&DAT_146afc818,L"LineTraceSingleByProfile",1);
      _Init_thread_footer(&DAT_146afc820);
    }
  }
  local_d8 = CONCAT71(local_d8._1_7_,param_9);
  local_d0 = param_1;
  FUN_14251be80(local_c8,DAT_146afc818,param_5,param_6);
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    local_d0 = local_c8;
    local_d8 = param_4;
    uVar1 = FUN_1423420a0(lVar2,param_8,param_2,param_3);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14252f3e0 FUN_14252f3e0 body=382 status=ok
// SIG undefined FUN_14252f3e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14252f3e0(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_108 [32];
  int *local_e8;
  undefined1 *local_e0;
  int local_d8 [4];
  undefined1 local_c8 [72];
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc7a0) {
    _Init_thread_header(&DAT_146afc7a0);
    if (DAT_146afc7a0 == -1) {
      FName::FName(&DAT_146afc798,L"LineTraceSingleForObjects",1);
      _Init_thread_footer(&DAT_146afc7a0);
    }
  }
  local_e8 = (int *)CONCAT71(local_e8._1_7_,param_9);
  local_e0 = param_1;
  FUN_14251be80(local_c8,DAT_146afc798,param_5,param_6);
  FUN_14251bd40(local_d8,param_4);
  if (local_d8[0] != 0) {
    lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if (lVar2 != 0) {
      local_e0 = local_c8;
      local_e8 = local_d8;
      uVar1 = UWorld::LineTraceSingleByObjectType(lVar2,param_8,param_2,param_3);
      goto LAB_14252f4d2;
    }
  }
  uVar1 = 0;
LAB_14252f4d2:
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 14252f560 FUN_14252f560 body=261 status=ok
// SIG undefined FUN_14252f560(void)

void FUN_14252f560(undefined8 param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 400) == 0) {
      lVar4 = lVar4 + 0x400;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 400) + 0x98);
    }
    puVar5 = (undefined8 *)operator_new(0x130);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *param_3;
      uVar2 = param_3[1];
      uVar3 = *(undefined8 *)(param_3 + 2);
      FUN_1425113f0(puVar5,param_2 + 0x10,param_4);
      *puVar5 = &PTR_FUN_1450e8950;
      *(undefined4 *)(puVar5 + 0x24) = uVar1;
      *(undefined4 *)((longlong)puVar5 + 0x124) = uVar2;
      puVar5[0x25] = uVar3;
    }
    FUN_142514cf0(lVar4,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4),puVar5);
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14252f670 FUN_14252f670 body=261 status=ok
// SIG undefined FUN_14252f670(void)

void FUN_14252f670(undefined8 param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  lVar4 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar4 != 0) {
    if (*(longlong *)(lVar4 + 400) == 0) {
      lVar4 = lVar4 + 0x400;
    }
    else {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 400) + 0x98);
    }
    puVar5 = (undefined8 *)operator_new(0x130);
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *param_3;
      uVar2 = param_3[1];
      uVar3 = *(undefined8 *)(param_3 + 2);
      FUN_1425113f0(puVar5,param_2 + 0x10,param_4);
      *puVar5 = &PTR_FUN_1450e8978;
      *(undefined4 *)(puVar5 + 0x24) = uVar1;
      *(undefined4 *)((longlong)puVar5 + 0x124) = uVar2;
      puVar5[0x25] = uVar3;
    }
    FUN_142514cf0(lVar4,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4),puVar5);
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14252f780 LoadInterstitialAd body=91 status=ok
// SIG undefined LoadInterstitialAd(void)

void UKismetSystemLibrary::LoadInterstitialAd(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res10 [24];
  
  puVar2 = (undefined8 *)FName::FName(local_res10,"Advertising",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x58))(plVar4,param_1);
  }
  return;
}



// FUNCTION 14252f7e0 Log body=102 status=ok
// SIG undefined Log(void)

float UKismetMathLibrary::Log(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_2 <= 0.0) {
    FUN_141790820(L"Divide by zero: Log",3,DAT_146afc600);
    return 0.0;
  }
  fVar1 = ::_guard_xfg_dispatch_icall_nop(param_1);
  fVar2 = ::_guard_xfg_dispatch_icall_nop(param_2);
  return fVar1 / fVar2;
}



// FUNCTION 14252f850 MakeDateTime body=299 status=ok
// SIG undefined MakeDateTime(void)

undefined8
UKismetMathLibrary::MakeDateTime
          (undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined2 *puVar2;
  undefined2 *local_38;
  int local_30;
  
  cVar1 = FDateTime::Validate(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (cVar1 == '\0') {
    FString::PrintfImpl(&local_38,
                        L"DateTime in bad format (year %d, month %d, day %d, hour %d, minute %d, second %d, millisecond %d). E.g. year, month and day can\'t be zero."
                        ,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar2 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar2 = local_38;
    }
    FUN_141790820(puVar2,3,DAT_146afc618);
    if (local_38 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    param_2 = 1;
    param_8 = 0;
    param_4 = 1;
    param_7 = 0;
    param_3 = 1;
    param_6 = 0;
    param_5 = 0;
  }
  FDateTime::FDateTime(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}



// FUNCTION 14252f980 MakeImportanceTexture body=75 status=ok
// SIG undefined MakeImportanceTexture(void)

longlong UImportanceSamplingLibrary::MakeImportanceTexture
                   (longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 local_res8 [32];
  
  local_res8[0] = *param_3;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  FUN_14252b430(param_1,param_2,local_res8);
  return param_1;
}



// FUNCTION 14252f9d0 MakePlaneFromPointAndNormal body=373 status=ok
// SIG undefined MakePlaneFromPointAndNormal(void)

undefined8 *
UKismetMathLibrary::MakePlaneFromPointAndNormal
          (undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 local_58;
  float local_48;
  float fStack_44;
  
  uVar4 = *param_2;
  fVar5 = *(float *)(param_2 + 1);
  fVar1 = param_3[2];
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar7 = fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1;
  if (fVar7 == 1.0) {
    local_58 = *(undefined8 *)param_3;
    fVar10 = param_3[2];
    fVar6 = (float)((ulonglong)local_58 >> 0x20);
    fVar8 = (float)local_58;
  }
  else {
    fVar6 = DAT_1468b5d94;
    fVar10 = DAT_1468b5d98;
    fVar8 = DAT_1468b5d90;
    if (1e-08 <= fVar7) {
      auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar8 = auVar9._0_4_;
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
      fVar6 = fVar3 * fVar8;
      fVar10 = fVar1 * fVar8;
      fVar8 = fVar2 * fVar8;
    }
    local_58 = CONCAT44(fVar6,fVar8);
  }
  fStack_44 = (float)((ulonglong)uVar4 >> 0x20);
  *param_1 = local_58;
  local_48 = (float)uVar4;
  *(float *)(param_1 + 1) = fVar10;
  *(float *)((longlong)param_1 + 0xc) = fStack_44 * fVar6 + local_48 * fVar8 + fVar5 * fVar10;
  return param_1;
}



// FUNCTION 14252fb50 MakePulsatingValue body=70 status=ok
// SIG undefined MakePulsatingValue(void)

float UKismetMathLibrary::MakePulsatingValue(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  fVar1 = ::_guard_xfg_dispatch_icall_nop
                    ((param_1 * 3.1415927 + param_1 * 3.1415927) * param_2 +
                     param_3 * 3.1415927 + param_3 * 3.1415927 + 1.5707964);
  return (fVar1 + 1.0) * 0.5;
}



// FUNCTION 14252fba0 MakeRandomStream body=9 status=ok
// SIG undefined MakeRandomStream(void)

undefined4 * UKismetMathLibrary::MakeRandomStream(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 14252fbb0 MakeRotationFromAxes body=761 status=ok
// SIG undefined MakeRotationFromAxes(void)

undefined8
UKismetMathLibrary::MakeRotationFromAxes
          (undefined8 param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float local_d8;
  float local_d4;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  
  local_d8 = *param_2;
  local_d4 = param_2[1];
  local_d0 = param_2[2];
  fVar1 = local_d8 * local_d8 + local_d4 * local_d4 + local_d0 * local_d0;
  if (1e-08 < fVar1) {
    auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar2 = auVar3._0_4_;
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    local_d8 = local_d8 * fVar2;
    local_d4 = local_d4 * fVar2;
    local_d0 = local_d0 * fVar2;
  }
  local_c4 = param_3[1];
  local_c8 = *param_3;
  local_c0 = param_3[2];
  fVar1 = local_c8 * local_c8 + local_c4 * local_c4 + local_c0 * local_c0;
  if (1e-08 < fVar1) {
    auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar2 = auVar3._0_4_;
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    local_c8 = local_c8 * fVar2;
    local_c4 = local_c4 * fVar2;
    local_c0 = local_c0 * fVar2;
  }
  local_b4 = param_4[1];
  local_b8 = *param_4;
  local_b0 = param_4[2];
  fVar1 = local_b8 * local_b8 + local_b4 * local_b4 + local_b0 * local_b0;
  if (1e-08 < fVar1) {
    auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar2 = auVar3._0_4_;
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    local_b8 = local_b8 * fVar2;
    local_b4 = local_b4 * fVar2;
    local_b0 = local_b0 * fVar2;
  }
  local_a8 = DAT_1468b5d90;
  local_a4 = DAT_1468b5d94;
  local_a0 = DAT_1468b5d98;
  local_9c = 0x3f800000;
  local_cc = 0;
  local_bc = 0;
  local_ac = 0;
  FMatrix::Rotator(&local_d8,param_1);
  return param_1;
}



// FUNCTION 14252feb0 MakeSkinWeightInfo body=65 status=ok
// SIG undefined MakeSkinWeightInfo(void)

undefined4 *
UKismetRenderingLibrary::MakeSkinWeightInfo
          (undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
          undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
          undefined1 param_9)

{
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[9] = 0;
  *(undefined1 *)((longlong)param_1 + 0x21) = param_5;
  param_1[2] = param_6;
  *(undefined1 *)((longlong)param_1 + 0x22) = param_7;
  param_1[3] = param_8;
  *(undefined1 *)((longlong)param_1 + 0x23) = param_9;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 8) = param_3;
  param_1[1] = param_4;
  return param_1;
}



// FUNCTION 14252ff00 MakeSoftClassPath body=515 status=ok
// SIG undefined MakeSoftClassPath(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * UKismetSystemLibrary::MakeSoftClassPath(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110 [3];
  undefined4 local_f8;
  undefined4 local_f4;
  longlong *local_f0;
  undefined4 *local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar4 = (longlong *)FString::FString(local_c8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_110[2] = *plVar4;
  *plVar4 = 0;
  local_f8 = (undefined4)plVar4[1];
  local_f4 = *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  FUN_1417978e0(param_1,local_110 + 2);
  if (*plVar4 != 0) {
    FMemory::Free();
  }
  if ((1 < *(int *)(param_2 + 8)) && (local_118 = 0, *param_1 == 0)) {
    local_b8 = 0;
    local_88 = 0xffffffff;
    local_b0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    uVar5 = FText::AsCultureInvariant(local_e0,param_2);
    local_68[0] = 4;
    FText::FText(local_58,uVar5);
    local_40 = '\x01';
    local_110[0] = 0;
    local_110[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_110,0);
    FGenericPlatformString::Memcpy(local_110[0],L"PathString",0x16);
    local_f0 = local_110;
    local_e8 = local_68;
    FUN_1407484b0(&local_b8,&local_118,&local_f0,0);
    if (local_110[0] != 0) {
      FMemory::Free();
    }
    if (local_40 != '\0') {
      local_40 = '\0';
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d8 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    local_70 = 0;
    if (local_78 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_b8);
  }
  return param_1;
}



// FUNCTION 142530110 MakeSoftObjectPath body=515 status=ok
// SIG undefined MakeSoftObjectPath(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * UKismetSystemLibrary::MakeSoftObjectPath(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_110 [3];
  undefined4 local_f8;
  undefined4 local_f4;
  longlong *local_f0;
  undefined4 *local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68 [4];
  undefined1 local_58 [8];
  longlong *local_50;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  plVar4 = (longlong *)FString::FString(local_c8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_110[2] = *plVar4;
  *plVar4 = 0;
  local_f8 = (undefined4)plVar4[1];
  local_f4 = *(undefined4 *)((longlong)plVar4 + 0xc);
  plVar4[1] = 0;
  FUN_1417978e0(param_1,local_110 + 2);
  if (*plVar4 != 0) {
    FMemory::Free();
  }
  if ((1 < *(int *)(param_2 + 8)) && (local_118 = 0, *param_1 == 0)) {
    local_b8 = 0;
    local_88 = 0xffffffff;
    local_b0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    uVar5 = FText::AsCultureInvariant(local_e0,param_2);
    local_68[0] = 4;
    FText::FText(local_58,uVar5);
    local_40 = '\x01';
    local_110[0] = 0;
    local_110[1] = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_110,0);
    FGenericPlatformString::Memcpy(local_110[0],L"PathString",0x16);
    local_f0 = local_110;
    local_e8 = local_68;
    FUN_1407484b0(&local_b8,&local_118,&local_f0,0);
    if (local_110[0] != 0) {
      FMemory::Free();
    }
    if (local_40 != '\0') {
      local_40 = '\0';
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d8 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar1 = (int *)((longlong)local_d8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    local_70 = 0;
    if (local_78 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_b8);
  }
  return param_1;
}



// FUNCTION 142530320 MakeTimespan2 body=39 status=ok
// SIG undefined MakeTimespan2(void)

undefined8 UKismetMathLibrary::MakeTimespan2(undefined8 param_1)

{
  FTimespan::Assign();
  return param_1;
}



// FUNCTION 142530350 MakeTimespan body=43 status=ok
// SIG undefined MakeTimespan(void)

undefined8 UKismetMathLibrary::MakeTimespan(undefined8 param_1)

{
  FTimespan::Assign();
  return param_1;
}



// FUNCTION 142530380 MapRangeClamped body=107 status=ok
// SIG undefined MapRangeClamped(void)

float UKismetMathLibrary::MapRangeClamped
                (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  
  if (1e-08 < ABS(param_3 - param_2)) {
    fVar2 = 0.0;
    fVar1 = (param_1 - param_2) / (param_3 - param_2);
    if (fVar1 < 0.0) goto LAB_1425303d0;
  }
  else if (param_1 < param_3) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = 1.0;
  }
  fVar2 = fVar1;
  if (1.0 <= fVar1) {
    fVar2 = 1.0;
  }
LAB_1425303d0:
  return (param_5 - param_4) * fVar2 + param_4;
}



// FUNCTION 1425303f0 MapRangeUnclamped body=110 status=ok
// SIG undefined MapRangeUnclamped(void)

float UKismetMathLibrary::MapRangeUnclamped
                (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  if (1e-08 < ABS(param_3 - param_2)) {
    return (param_5 - param_4) * ((param_1 - param_2) / (param_3 - param_2)) + param_4;
  }
  if (param_3 <= param_1) {
    return (param_5 - param_4) * 1.0 + param_4;
  }
  return (param_5 - param_4) * 0.0 + param_4;
}



// FUNCTION 142530460 MarkBit body=13 status=ok
// SIG undefined MarkBit(void)

void UKismetNodeHelperLibrary::MarkBit(uint *param_1,uint param_2)

{
  if ((int)param_2 < 0x20) {
    *param_1 = *param_1 | 1 << (param_2 & 0x1f);
  }
  return;
}



// FUNCTION 142530470 thunk_FUN_141593930 body=5 status=ok
// SIG undefined thunk_FUN_141593930(void)

bool thunk_FUN_141593930(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  wchar_t wVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  wchar_t wVar7;
  int iVar8;
  wchar_t *pwVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  wchar_t *pwVar17;
  int iVar18;
  wchar_t *pwVar19;
  int iVar20;
  uint uVar21;
  undefined4 uVar22;
  wchar_t *pwVar23;
  longlong lVar24;
  bool bVar25;
  wchar_t *pwStackX_10;
  wchar_t *pwStackX_20;
  wchar_t *pwStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  wchar_t *pwStack_68;
  undefined8 uStack_60;
  wchar_t *pwStack_58;
  uint uStack_50;
  undefined4 uStack_4c;
  
  uStack_70 = *(uint *)(param_2 + 1);
  lVar24 = (longlong)(int)uStack_70;
  pvVar2 = (void *)*param_2;
  pwStack_78 = (wchar_t *)0x0;
  iVar4 = 0;
  if (uStack_70 == 0) {
    uStack_6c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&pwStack_78,uStack_70,0);
    _guard_xfg_dispatch_icall_nop(pwStack_78,pvVar2,lVar24 * 2);
  }
  uStack_50 = *(uint *)(param_1 + 1);
  lVar24 = (longlong)(int)uStack_50;
  pvVar2 = (void *)*param_1;
  pwStackX_10 = (wchar_t *)0x0;
  pwStack_58 = (wchar_t *)0x0;
  if (uStack_50 == 0) {
    uStack_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&pwStack_58,uStack_50,0);
    pwStackX_10 = pwStack_58;
    _guard_xfg_dispatch_icall_nop(pwStack_58,pvVar2,lVar24 * 2);
  }
  uVar16 = uStack_50;
  lVar24 = -1;
  do {
    lVar24 = lVar24 + 1;
  } while ((&DAT_144c9217c)[lVar24] != 0);
  iVar14 = (int)lVar24;
  if (iVar14 < 2) {
    iVar14 = 1;
  }
  iVar20 = uStack_70 - 1;
  if (uStack_70 == 0) {
    iVar20 = iVar4;
  }
  iVar20 = iVar20 - iVar14;
  lVar24 = (longlong)iVar20;
  if (-1 < iVar20) {
    pwVar6 = pwStack_78 + lVar24;
    do {
      wVar7 = L'*';
      lVar5 = 0;
      pwVar19 = pwVar6;
      do {
        if (*pwVar19 != wVar7) break;
        wVar7 = (&DAT_144c9217e)[lVar5];
        lVar5 = lVar5 + 1;
        pwVar19 = pwVar19 + 1;
      } while (wVar7 != L'\0');
      if ((&DAT_144c9217c)[lVar5] == 0) goto LAB_141593a60;
      iVar20 = iVar20 + -1;
      pwVar6 = pwVar6 + -1;
      lVar24 = lVar24 + -1;
    } while (-1 < lVar24);
  }
  iVar20 = -1;
LAB_141593a60:
  lVar24 = -1;
  do {
    lVar24 = lVar24 + 1;
  } while ((&DAT_144c92194)[lVar24] != 0);
  iVar14 = (int)lVar24;
  if (iVar14 < 2) {
    iVar14 = 1;
  }
  iVar18 = uStack_70 - 1;
  if (uStack_70 == 0) {
    iVar18 = iVar4;
  }
  iVar18 = iVar18 - iVar14;
  lVar24 = (longlong)iVar18;
  if (-1 < iVar18) {
    pwVar6 = pwStack_78 + lVar24;
    do {
      wVar7 = L'?';
      lVar5 = 0;
      pwVar19 = pwVar6;
      do {
        if (*pwVar19 != wVar7) break;
        wVar7 = (&DAT_144c92196)[lVar5];
        lVar5 = lVar5 + 1;
        pwVar19 = pwVar19 + 1;
      } while (wVar7 != L'\0');
      if ((&DAT_144c92194)[lVar5] == 0) goto LAB_141593adf;
      iVar18 = iVar18 + -1;
      pwVar6 = pwVar6 + -1;
      lVar24 = lVar24 + -1;
    } while (-1 < lVar24);
  }
  iVar18 = -1;
LAB_141593adf:
  if (iVar18 <= iVar20) {
    iVar18 = iVar20;
  }
  if (iVar18 == -1) {
    if (param_3 == 1) {
      pwVar6 = L"";
      if (uStack_70 != 0) {
        pwVar6 = pwStack_78;
      }
      pwVar19 = L"";
      if (uStack_50 != 0) {
        pwVar19 = pwStackX_10;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar19,pwVar6);
      bVar25 = iVar4 == 0;
    }
    else {
      pwVar6 = L"";
      if (uStack_70 != 0) {
        pwVar6 = pwStack_78;
      }
      pwVar19 = L"";
      if (uStack_50 != 0) {
        pwVar19 = pwStackX_10;
      }
      lVar24 = (longlong)pwVar6 - (longlong)pwVar19;
      do {
        wVar7 = *pwVar19;
        wVar1 = *(wchar_t *)((longlong)pwVar19 + lVar24);
        if (wVar7 != wVar1) break;
        pwVar19 = pwVar19 + 1;
      } while (wVar1 != L'\0');
      bVar25 = wVar7 == wVar1;
    }
    goto LAB_1415942ae;
  }
  iVar14 = uStack_70 - 1;
  if (uStack_70 == 0) {
    iVar14 = iVar4;
  }
  uVar21 = iVar18 + 1;
  if ((int)uVar21 < iVar14) {
    pwVar6 = (wchar_t *)0x0;
    uVar15 = iVar18 + 0x80000000;
    uVar10 = 0;
    uVar13 = uStack_70 - 1;
    if (uStack_70 == 0) {
      uVar13 = uVar10;
    }
    if (uVar21 < uVar13) {
      uVar13 = uVar21;
    }
    uVar11 = uStack_70 - 1;
    if (uStack_70 == 0) {
      uVar11 = uVar10;
    }
    uVar12 = uVar13;
    if ((uVar13 <= uVar15) && (uVar12 = uVar11, uVar15 < uVar11)) {
      uVar12 = uVar15;
    }
    pwStack_68 = (wchar_t *)0x0;
    pwVar19 = L"";
    if (uStack_70 != 0) {
      pwVar19 = pwStack_78;
    }
    iVar4 = uVar12 - uVar13;
    uVar15 = iVar4 + 1;
    if (iVar4 == 0) {
      uVar15 = uVar10;
    }
    uStack_60 = (ulonglong)uVar15;
    if (0 < (int)uVar15) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_68,0);
      pwVar6 = pwStack_68;
      uVar15 = (uint)uStack_60;
      if (0 < (int)(uint)uStack_60) {
        wcsncpy(pwStack_68,pwVar19 + (int)uVar13,(longlong)iVar4);
        pwVar6[iVar4] = L'\0';
      }
    }
    cVar3 = FString::EndsWith(&pwStack_58,&pwStack_68,param_3);
    if (cVar3 != '\0') {
      if (uStack_70 == 0) {
        pwStackX_20 = L"";
        uVar13 = 0;
      }
      else {
        uVar13 = uStack_70 - 1;
        pwStackX_20 = pwStack_78;
      }
      pwVar19 = (wchar_t *)0x0;
      uVar10 = 0;
      if ((-1 < (int)uVar21) && (uVar10 = uVar13, (int)uVar21 < (int)uVar13)) {
        uVar10 = uVar21;
      }
      pwStack_58 = (wchar_t *)0x0;
      uStack_4c = 0;
      pwVar9 = (wchar_t *)(ulonglong)(uVar10 + 1);
      if (uVar10 == 0) {
        pwVar9 = pwVar19;
      }
      uVar21 = (uint)pwVar9;
      uVar22 = 0;
      uStack_50 = uVar21;
      if ((0 < (int)uVar21) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_58), uVar22 = uStack_4c,
         uVar21 = uStack_50, pwVar19 = pwStack_58, 0 < (int)uStack_50)) {
        wcsncpy(pwStack_58,pwStackX_20,(longlong)(int)uVar10);
        pwVar19[(int)uVar10] = L'\0';
      }
      if (pwStack_78 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      pwVar9 = (wchar_t *)0x0;
      iVar14 = 0;
      iVar4 = uVar16 - 1;
      if (uVar16 == 0) {
        iVar4 = iVar14;
      }
      iVar20 = iVar14;
      if (uVar15 != 0) {
        iVar20 = uVar15 - 1;
      }
      iVar4 = iVar4 - iVar20;
      if (uVar16 == 0) {
        pwVar23 = L"";
      }
      else {
        iVar14 = uVar16 - 1;
        pwVar23 = pwStackX_10;
      }
      if (iVar4 < 0) {
        iVar14 = 0;
      }
      else if (iVar4 < iVar14) {
        iVar14 = iVar4;
      }
      pwStack_58 = (wchar_t *)0x0;
      uStack_4c = 0;
      pwVar17 = (wchar_t *)(ulonglong)(iVar14 + 1);
      if (iVar14 == 0) {
        pwVar17 = pwVar9;
      }
      uVar16 = (uint)pwVar17;
      pwStack_78 = pwVar19;
      uStack_70 = uVar21;
      uStack_6c = uVar22;
      uStack_50 = uVar16;
      if ((0 < (int)uVar16) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_58,0), uVar16 = uStack_50,
         pwVar9 = pwStack_58, 0 < (int)uStack_50)) {
        wcsncpy(pwStack_58,pwVar23,(longlong)iVar14);
        pwVar9[iVar14] = L'\0';
      }
      if (pwStackX_10 != (wchar_t *)0x0) {
        FMemory::Free(pwStackX_10);
      }
      pwStackX_10 = pwVar9;
      if (pwVar6 != (wchar_t *)0x0) {
        FMemory::Free(pwVar6);
      }
      goto LAB_141593d91;
    }
    if (pwVar6 != (wchar_t *)0x0) {
      FMemory::Free(pwVar6);
      bVar25 = false;
      goto LAB_1415942ae;
    }
  }
  else {
LAB_141593d91:
    pwVar6 = L"";
    if (uStack_70 != 0) {
      pwVar6 = pwStack_78;
    }
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar6,L"*");
    if (pwVar6 == (wchar_t *)0x0) {
      uVar21 = 0xffffffff;
    }
    else {
      pwVar19 = L"";
      if (uStack_70 != 0) {
        pwVar19 = pwStack_78;
      }
      uVar21 = (uint)((longlong)pwVar6 - (longlong)pwVar19 >> 1);
    }
    pwVar6 = L"";
    if (uStack_70 != 0) {
      pwVar6 = pwStack_78;
    }
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar6,L"?");
    if (pwVar6 == (wchar_t *)0x0) {
      uVar15 = 0xffffffff;
    }
    else {
      pwVar19 = L"";
      if (uStack_70 != 0) {
        pwVar19 = pwStack_78;
      }
      uVar15 = (uint)((longlong)pwVar6 - (longlong)pwVar19 >> 1);
    }
    if ((int)uVar15 < 0) {
      uVar15 = 0x7fffffff;
    }
    if ((int)uVar21 < 0) {
      uVar21 = 0x7fffffff;
    }
    if ((int)uVar21 <= (int)uVar15) {
      uVar15 = uVar21;
    }
    if ((int)uVar15 < 1) {
LAB_141594094:
      pwVar6 = (wchar_t *)0x0;
      wVar7 = *pwStack_78;
      iVar14 = 0;
      iVar4 = uStack_70 - 1;
      if (uStack_70 == 0) {
        iVar4 = iVar14;
      }
      if (uStack_70 == 0) {
        pwVar19 = L"";
      }
      else {
        iVar14 = uStack_70 - 1;
        pwVar19 = pwStack_78;
      }
      iVar20 = 0;
      if ((-1 < iVar4 + -1) && (iVar20 = iVar14, iVar4 <= iVar14)) {
        iVar20 = iVar4 + -1;
      }
      pwStack_58 = (wchar_t *)0x0;
      uVar21 = 0;
      uStack_4c = 0;
      pwVar19 = pwVar19 + ((longlong)iVar14 - (longlong)iVar20);
      if ((pwVar19 != (wchar_t *)0x0) && (*pwVar19 != L'\0')) {
        lVar24 = -1;
        do {
          lVar24 = lVar24 + 1;
        } while (pwVar19[lVar24] != L'\0');
        uVar15 = (int)lVar24 + 1;
        uStack_50 = uVar15;
        if (0 < (int)uVar15) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_58,0);
        }
        uVar21 = uStack_50;
        pwVar6 = pwStack_58;
        FGenericPlatformString::Memcpy(pwStack_58,pwVar19,(longlong)(int)uVar15 * 2);
      }
      uVar22 = uStack_4c;
      if (pwStack_78 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      pwStack_78 = pwVar6;
      uStack_70 = uVar21;
      uStack_6c = uVar22;
      if ((wVar7 != L'*') && (wVar7 != L'?')) {
        bVar25 = false;
        goto LAB_1415942ae;
      }
      if (((uVar21 == 0) || (uVar21 == 1)) &&
         (((wVar7 == L'*' || (uVar16 == 0)) || ((int)(uVar16 - 1) < 2)))) {
LAB_1415942a8:
        bVar25 = true;
        goto LAB_1415942ae;
      }
      iVar14 = 0;
      iVar4 = uVar16 - 1;
      if (uVar16 == 0) {
        iVar4 = 0;
      }
      iVar20 = 0x7fffffff;
      if (wVar7 == L'?') {
        iVar20 = 1;
      }
      if (iVar4 <= iVar20) {
        iVar20 = iVar4;
      }
      if (-1 < iVar20) {
        do {
          iVar18 = 0;
          iVar4 = uVar16 - 1;
          if (uVar16 == 0) {
            iVar4 = iVar18;
          }
          iVar4 = iVar4 - iVar14;
          if (uVar16 == 0) {
            pwVar6 = L"";
            iVar8 = iVar18;
          }
          else {
            pwVar6 = pwStackX_10;
            iVar8 = uVar16 - 1;
          }
          if ((-1 < iVar4) && (iVar18 = iVar8, iVar4 < iVar8)) {
            iVar18 = iVar4;
          }
          uStack_60 = 0;
          pwVar6 = pwVar6 + ((longlong)iVar8 - (longlong)iVar18);
          pwStack_68 = (wchar_t *)0x0;
          if ((pwVar6 != (wchar_t *)0x0) && (*pwVar6 != L'\0')) {
            lVar24 = -1;
            do {
              lVar5 = lVar24 + 1;
              lVar24 = lVar24 + 1;
            } while (pwVar6[lVar5] != L'\0');
            uVar21 = (int)lVar24 + 1;
            uStack_60 = (ulonglong)uVar21;
            if (0 < (int)uVar21) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_68,0);
            }
            FGenericPlatformString::Memcpy(pwStack_68,pwVar6,(longlong)(int)uVar21 * 2);
          }
          cVar3 = FUN_141593930(&pwStack_68,&pwStack_78,param_3);
          if (pwStack_68 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          if (cVar3 != '\0') goto LAB_1415942a8;
          iVar14 = iVar14 + 1;
        } while (iVar14 <= iVar20);
        bVar25 = false;
        goto LAB_1415942ae;
      }
    }
    else {
      pwVar6 = (wchar_t *)0x0;
      uVar21 = 0;
      if (uStack_70 == 0) {
        pwVar19 = L"";
      }
      else {
        uVar21 = uStack_70 - 1;
        pwVar19 = pwStack_78;
      }
      pwStack_58 = (wchar_t *)0x0;
      uStack_4c = 0;
      if ((int)uVar15 < (int)uVar21) {
        uVar21 = uVar15;
      }
      uVar13 = uVar21 + 1;
      if (uVar21 == 0) {
        uVar13 = 0;
      }
      uStack_50 = uVar13;
      if ((0 < (int)uVar13) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_58,0), uVar13 = uStack_50,
         pwVar6 = pwStack_58, 0 < (int)uStack_50)) {
        wcsncpy(pwStack_58,pwVar19,(longlong)(int)uVar21);
        pwVar6[(int)uVar21] = L'\0';
      }
      if (param_3 == 1) {
        if ((uVar13 != 0) && (0 < (int)(uVar13 - 1))) {
          pwVar19 = L"";
          if (uVar16 != 0) {
            pwVar19 = pwStackX_10;
          }
          iVar4 = _wcsnicmp(pwVar19,pwVar6,(longlong)(int)(uVar13 - 1));
joined_r0x000141593efe:
          if (iVar4 == 0) {
            uVar13 = uVar15 + 0x7fffffff;
            uVar21 = uStack_70 - 1;
            if (uStack_70 == 0) {
              uVar21 = 0;
            }
            uVar10 = uStack_70 - 1;
            if (uVar15 < uVar21) {
              uVar21 = uVar15;
            }
            if (uStack_70 == 0) {
              uVar10 = 0;
            }
            uVar11 = uVar21;
            if ((uVar21 <= uVar13) && (uVar11 = uVar10, uVar13 < uVar10)) {
              uVar11 = uVar13;
            }
            pwStack_68 = (wchar_t *)0x0;
            pwVar19 = L"";
            if (uStack_70 != 0) {
              pwVar19 = pwStack_78;
            }
            iVar4 = uVar11 - uVar21;
            uVar10 = iVar4 + 1;
            if (iVar4 == 0) {
              uVar10 = 0;
            }
            uStack_60 = (ulonglong)uVar10;
            if (0 < (int)uVar10) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_68,0);
              uVar10 = (uint)uStack_60;
              if (0 < (int)(uint)uStack_60) {
                wcsncpy(pwStack_68,pwVar19 + (int)uVar21,(longlong)iVar4);
                pwStack_68[iVar4] = L'\0';
              }
            }
            if (pwStack_78 != (wchar_t *)0x0) {
              FMemory::Free();
            }
            pwVar19 = (wchar_t *)0x0;
            uStack_6c = uStack_60._4_4_;
            uVar21 = uVar16 - 1;
            if (uVar16 == 0) {
              uVar21 = 0;
            }
            if (uVar15 < uVar21) {
              uVar21 = uVar15;
            }
            uVar15 = uVar16 - 1;
            if (uVar16 == 0) {
              uVar15 = 0;
            }
            uVar11 = uVar21;
            if ((uVar21 <= uVar13) && (uVar11 = uVar15, uVar13 < uVar15)) {
              uVar11 = uVar13;
            }
            pwStack_58 = (wchar_t *)0x0;
            uStack_4c = 0;
            pwVar9 = L"";
            if (uVar16 != 0) {
              pwVar9 = pwStackX_10;
            }
            iVar4 = uVar11 - uVar21;
            pwVar23 = (wchar_t *)(ulonglong)(iVar4 + 1);
            if (iVar4 == 0) {
              pwVar23 = pwVar19;
            }
            uVar16 = (uint)pwVar23;
            pwStack_78 = pwStack_68;
            uStack_70 = uVar10;
            uStack_50 = uVar16;
            if ((0 < (int)uVar16) &&
               (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&pwStack_58,0), uVar16 = uStack_50,
               pwVar19 = pwStack_58, 0 < (int)uStack_50)) {
              wcsncpy(pwStack_58,pwVar9 + (int)uVar21,(longlong)iVar4);
              pwVar19[iVar4] = L'\0';
            }
            if (pwStackX_10 != (wchar_t *)0x0) {
              FMemory::Free(pwStackX_10);
            }
            pwStackX_10 = pwVar19;
            if (pwVar6 != (wchar_t *)0x0) {
              FMemory::Free(pwVar6);
            }
            goto LAB_141594094;
          }
        }
      }
      else if ((uVar13 != 0) && (0 < (int)(uVar13 - 1))) {
        pwVar19 = L"";
        if (uVar16 != 0) {
          pwVar19 = pwStackX_10;
        }
        iVar4 = wcsncmp(pwVar19,pwVar6,(longlong)(int)(uVar13 - 1));
        goto joined_r0x000141593efe;
      }
      if (pwVar6 != (wchar_t *)0x0) {
        FMemory::Free(pwVar6);
      }
    }
  }
  bVar25 = false;
LAB_1415942ae:
  if (pwStackX_10 != (wchar_t *)0x0) {
    FMemory::Free(pwStackX_10);
  }
  if (pwStack_78 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return bVar25;
}



// FUNCTION 142530480 MaxOfByteArray body=138 status=ok
// SIG undefined MaxOfByteArray(void)

void UKismetMathLibrary::MaxOfByteArray(undefined8 *param_1,int *param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = -1;
    }
    *param_3 = 0;
    return;
  }
  pbVar7 = (byte *)*param_1;
  iVar5 = 0;
  iVar4 = 0;
  iVar6 = 1;
  bVar3 = *pbVar7;
  if (1 < iVar1) {
    do {
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar7;
      iVar4 = iVar6;
      if (*pbVar7 <= bVar3) {
        bVar2 = bVar3;
        iVar4 = iVar5;
      }
      bVar3 = bVar2;
      iVar6 = iVar6 + 1;
      iVar5 = iVar4;
    } while (iVar6 < iVar1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar4;
  }
  *param_3 = bVar3;
  return;
}



// FUNCTION 142530510 MaxOfFloatArray body=263 status=ok
// SIG undefined MaxOfFloatArray(void)

void UKismetMathLibrary::MaxOfFloatArray(undefined8 *param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar3 = *(int *)(param_1 + 1);
  if (iVar3 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = -1;
    }
    *param_3 = 0.0;
    return;
  }
  iVar4 = 0;
  iVar5 = 0;
  pfVar6 = (float *)*param_1;
  iVar7 = 1;
  fVar10 = *pfVar6;
  if (1 < iVar3) {
    iVar5 = iVar4;
    if (4 < iVar3) {
      pfVar8 = pfVar6 + 3;
      do {
        fVar11 = pfVar8[-1];
        fVar1 = pfVar8[-2];
        fVar2 = *pfVar8;
        fVar9 = fVar1;
        if (fVar1 <= fVar10) {
          fVar9 = fVar10;
        }
        iVar5 = iVar7;
        if (fVar1 <= fVar10) {
          iVar5 = iVar4;
        }
        fVar10 = fVar9;
        if (fVar9 <= fVar11) {
          fVar10 = fVar11;
        }
        iVar4 = iVar7 + 1;
        if (fVar11 <= fVar9) {
          iVar4 = iVar5;
        }
        fVar11 = fVar10;
        if (fVar10 <= fVar2) {
          fVar11 = fVar2;
        }
        iVar5 = iVar7 + 2;
        if (fVar2 <= fVar10) {
          iVar5 = iVar4;
        }
        iVar4 = iVar7 + 3;
        fVar10 = pfVar8[1];
        if (pfVar8[1] <= fVar11) {
          iVar4 = iVar5;
          fVar10 = fVar11;
        }
        iVar7 = iVar7 + 4;
        pfVar8 = pfVar8 + 4;
        iVar5 = iVar4;
      } while (iVar7 < iVar3 + -3);
    }
    if (iVar7 < iVar3) {
      pfVar6 = pfVar6 + iVar7;
      iVar4 = iVar5;
      do {
        fVar11 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        iVar5 = iVar7;
        if (fVar11 <= fVar10) {
          iVar5 = iVar4;
          fVar11 = fVar10;
        }
        fVar10 = fVar11;
        iVar7 = iVar7 + 1;
        iVar4 = iVar5;
      } while (iVar7 < iVar3);
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar5;
  }
  *param_3 = fVar10;
  return;
}



// FUNCTION 142530620 MaxOfIntArray body=135 status=ok
// SIG undefined MaxOfIntArray(void)

void UKismetMathLibrary::MaxOfIntArray(undefined8 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = -1;
    }
    *param_3 = 0;
    return;
  }
  piVar7 = (int *)*param_1;
  iVar4 = 0;
  iVar3 = 0;
  iVar6 = 1;
  iVar5 = *piVar7;
  if (1 < iVar1) {
    do {
      piVar7 = piVar7 + 1;
      iVar2 = *piVar7;
      iVar3 = iVar6;
      if (*piVar7 <= iVar5) {
        iVar2 = iVar5;
        iVar3 = iVar4;
      }
      iVar5 = iVar2;
      iVar6 = iVar6 + 1;
      iVar4 = iVar3;
    } while (iVar6 < iVar1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar3;
  }
  *param_3 = iVar5;
  return;
}



// FUNCTION 1425306b0 MinOfByteArray body=138 status=ok
// SIG undefined MinOfByteArray(void)

void UKismetMathLibrary::MinOfByteArray(undefined8 *param_1,int *param_2,byte *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = -1;
    }
    *param_3 = 0;
    return;
  }
  pbVar7 = (byte *)*param_1;
  iVar5 = 0;
  iVar4 = 0;
  iVar6 = 1;
  bVar3 = *pbVar7;
  if (1 < iVar1) {
    do {
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar7;
      iVar4 = iVar6;
      if (bVar3 <= *pbVar7) {
        bVar2 = bVar3;
        iVar4 = iVar5;
      }
      bVar3 = bVar2;
      iVar6 = iVar6 + 1;
      iVar5 = iVar4;
    } while (iVar6 < iVar1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar4;
  }
  *param_3 = bVar3;
  return;
}



// FUNCTION 142530740 MinOfFloatArray body=260 status=ok
// SIG undefined MinOfFloatArray(void)

void UKismetMathLibrary::MinOfFloatArray(undefined8 *param_1,int *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = -1;
    }
    *param_3 = 0.0;
    return;
  }
  iVar2 = 0;
  iVar3 = 0;
  pfVar4 = (float *)*param_1;
  iVar5 = 1;
  fVar8 = *pfVar4;
  if (1 < iVar1) {
    iVar3 = iVar2;
    if (4 < iVar1) {
      pfVar6 = pfVar4 + 3;
      do {
        fVar9 = pfVar6[-2];
        fVar7 = fVar9;
        if (fVar8 <= fVar9) {
          fVar7 = fVar8;
        }
        iVar3 = iVar5;
        if (fVar8 <= fVar9) {
          iVar3 = iVar2;
        }
        fVar8 = fVar7;
        if (pfVar6[-1] <= fVar7) {
          fVar8 = pfVar6[-1];
        }
        iVar2 = iVar5 + 1;
        if (fVar7 < pfVar6[-1] || fVar7 == pfVar6[-1]) {
          iVar2 = iVar3;
        }
        fVar9 = fVar8;
        if (*pfVar6 <= fVar8) {
          fVar9 = *pfVar6;
        }
        iVar3 = iVar5 + 2;
        if (fVar8 < *pfVar6 || fVar8 == *pfVar6) {
          iVar3 = iVar2;
        }
        iVar2 = iVar5 + 3;
        fVar8 = pfVar6[1];
        if (fVar9 <= pfVar6[1]) {
          iVar2 = iVar3;
          fVar8 = fVar9;
        }
        iVar5 = iVar5 + 4;
        pfVar6 = pfVar6 + 4;
        iVar3 = iVar2;
      } while (iVar5 < iVar1 + -3);
    }
    if (iVar5 < iVar1) {
      pfVar4 = pfVar4 + iVar5;
      iVar2 = iVar3;
      do {
        fVar9 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        iVar3 = iVar5;
        if (fVar8 <= fVar9) {
          iVar3 = iVar2;
          fVar9 = fVar8;
        }
        fVar8 = fVar9;
        iVar5 = iVar5 + 1;
        iVar2 = iVar3;
      } while (iVar5 < iVar1);
    }
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar3;
  }
  *param_3 = fVar8;
  return;
}



// FUNCTION 142530850 MinOfIntArray body=135 status=ok
// SIG undefined MinOfIntArray(void)

void UKismetMathLibrary::MinOfIntArray(undefined8 *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = -1;
    }
    *param_3 = 0;
    return;
  }
  piVar7 = (int *)*param_1;
  iVar4 = 0;
  iVar3 = 0;
  iVar6 = 1;
  iVar5 = *piVar7;
  if (1 < iVar1) {
    do {
      piVar7 = piVar7 + 1;
      iVar2 = *piVar7;
      iVar3 = iVar6;
      if (iVar5 <= *piVar7) {
        iVar2 = iVar5;
        iVar3 = iVar4;
      }
      iVar5 = iVar2;
      iVar6 = iVar6 + 1;
      iVar4 = iVar3;
    } while (iVar6 < iVar1);
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar3;
  }
  *param_3 = iVar5;
  return;
}



// FUNCTION 1425308e0 FUN_1425308e0 body=2096 status=ok
// SIG undefined FUN_1425308e0(void)

void FUN_1425308e0(undefined8 param_1,longlong *param_2,float *param_3,float *param_4,
                  undefined8 *param_5,float *param_6,float *param_7)

{
  float *pfVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  float fVar15;
  float fVar16;
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
  float local_res10;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined4 local_170;
  int *local_168;
  undefined8 local_160;
  float local_148;
  float fStack_144;
  float fStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  ulonglong uVar14;
  
  uVar9 = 0;
  iVar12 = (int)param_2[1];
  local_res10 = -1.0;
  local_168 = (int *)0x0;
  local_160 = 0;
  if (iVar12 != 0) {
    pfVar1 = (float *)*param_2;
    lVar7 = (longlong)
            (iVar12 / 3 + (iVar12 >> 0x1f) +
            (int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >> 0x1f));
    iVar12 = iVar12 * 2;
    lVar3 = (longlong)
            ((int)(((longlong)iVar12 / 3 + ((longlong)iVar12 >> 0x3f) & 0xffffffffU) >> 0x1f) +
            iVar12 / 3 + (iVar12 >> 0x1f));
    fVar16 = pfVar1[lVar3 * 3 + 1] - pfVar1[lVar7 * 3 + 1];
    fVar17 = pfVar1[lVar7 * 3 + 1] - pfVar1[1];
    fVar15 = pfVar1[lVar3 * 3 + 2] - pfVar1[lVar7 * 3 + 2];
    fVar20 = pfVar1[lVar7 * 3 + 2] - pfVar1[2];
    fVar18 = pfVar1[lVar3 * 3] - pfVar1[lVar7 * 3];
    fVar23 = pfVar1[lVar7 * 3] - *pfVar1;
    local_1a0 = fVar17 * fVar15 - fVar20 * fVar16;
    local_198 = fVar23 * fVar16 - fVar17 * fVar18;
    local_19c = fVar20 * fVar18 - fVar23 * fVar15;
    if (local_19c * param_3[1] + local_1a0 * *param_3 + local_198 * param_3[2] < 0.0) {
      local_1a0 = -local_1a0;
      local_19c = -local_19c;
      local_198 = -local_198;
    }
    local_1c8 = 0x3f800000;
    local_1c0 = 0.0;
    FRotationMatrix::MakeFromZX(&local_148,&local_1a0,&local_1c8);
    local_190 = 0;
    local_188 = 0;
    param_4[0] = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
    iVar12 = (int)param_2[1];
    local_1c0 = 0.0;
    uVar10 = uVar9;
    if (0 < iVar12) {
      fStack_1ac = 0.0;
      uVar11 = uVar9;
      uVar14 = uVar9;
      do {
        lVar3 = *param_2;
        *param_4 = *param_4 + *(float *)(uVar9 + lVar3);
        param_4[1] = *(float *)(uVar9 + 4 + lVar3) + param_4[1];
        param_4[2] = *(float *)(uVar9 + 8 + lVar3) + param_4[2];
        lVar3 = *param_2;
        FMatrix::InverseFast(&local_148,&local_108);
        local_1b8 = *(float *)(uVar9 + lVar3);
        fStack_1b4 = *(float *)(uVar9 + 4 + lVar3);
        fStack_1b0 = *(float *)(uVar9 + 8 + lVar3);
        iVar12 = (int)uVar14;
        local_178 = 0;
        local_170 = 0;
        uVar13 = iVar12 + 1;
        local_188 = CONCAT44(local_188._4_4_,uVar13);
        local_1c0 = fStack_1ac * fStack_d0 + fStack_1b0 * fStack_e0 +
                    fStack_1b4 * fStack_f0 + local_1b8 * fStack_100;
        local_1c8 = CONCAT44(fStack_1ac * fStack_d4 + fStack_1b0 * fStack_e4 +
                             fStack_1b4 * fStack_f4 + local_1b8 * fStack_104,
                             fStack_1ac * local_d8 + fStack_1b0 * local_e8 +
                             fStack_1b4 * local_f8 + local_1b8 * local_108);
        if (local_188._4_4_ < (int)uVar13) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_190,uVar14);
          uVar10 = local_190;
          uVar13 = (uint)local_188;
        }
        uVar14 = (ulonglong)uVar13;
        uVar13 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar13;
        *(undefined8 *)(uVar10 + (longlong)iVar12 * 0xc) = local_1c8;
        uVar9 = uVar9 + 0xc;
        *(float *)(uVar10 + 8 + (longlong)iVar12 * 0xc) = local_1c0;
        iVar12 = (int)param_2[1];
      } while ((int)uVar13 < iVar12);
    }
    fVar15 = 1.0 / (float)iVar12;
    *param_4 = fVar15 * *param_4;
    param_4[1] = fVar15 * param_4[1];
    param_4[2] = fVar15 * param_4[2];
    ConvexHull2D::ComputeConvexHull<FDefaultAllocator>(&local_190,&local_168);
    piVar2 = local_168;
    fVar15 = -1.0;
    fVar16 = -1.0;
    if ((longlong)((int)local_160 + -1) < 2) {
      fVar17 = -1.0;
    }
    else {
      lVar3 = 1;
      local_1a8 = -1.0;
      do {
        lVar7 = (longlong)local_168[lVar3 + -1];
        lVar4 = (longlong)local_168[lVar3];
        fVar23 = *(float *)(uVar10 + lVar4 * 0xc) - *(float *)(uVar10 + lVar7 * 0xc);
        fVar26 = *(float *)(uVar10 + 4 + lVar4 * 0xc) - *(float *)(uVar10 + 4 + lVar7 * 0xc);
        fVar17 = *(float *)(uVar10 + 8 + lVar4 * 0xc) - *(float *)(uVar10 + 8 + lVar7 * 0xc);
        fVar20 = fVar26 * fVar26 + fVar23 * fVar23 + fVar17 * fVar17;
        fVar17 = fVar23;
        fVar18 = fVar26;
        if ((fVar20 != 1.0) && (fVar17 = DAT_1468b5d90, fVar18 = DAT_1468b5d94, 1e-08 <= fVar20)) {
          auVar22 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
          fVar18 = auVar22._0_4_;
          fVar18 = fVar18 + fVar18 * (0.5 - fVar20 * 0.5 * fVar18 * fVar18);
          fVar18 = fVar18 + fVar18 * (0.5 - fVar20 * 0.5 * fVar18 * fVar18);
          fVar17 = fVar18 * fVar23;
          fVar18 = fVar18 * fVar26;
        }
        fVar26 = 0.0;
        fVar23 = 0.0;
        fVar19 = 0.0;
        fVar20 = 0.0;
        if (1 < (int)local_160) {
          uVar9 = (ulonglong)((int)local_160 - 1);
          fVar24 = fVar20;
          fVar25 = fVar23;
          piVar8 = local_168;
          do {
            piVar8 = piVar8 + 1;
            fVar20 = *(float *)(uVar10 + (longlong)*piVar8 * 0xc) -
                     *(float *)(uVar10 + (longlong)*local_168 * 0xc);
            fVar21 = *(float *)(uVar10 + 4 + (longlong)*piVar8 * 0xc) -
                     *(float *)(uVar10 + 4 + (longlong)*local_168 * 0xc);
            fVar23 = fVar18 * fVar21 + fVar17 * fVar20;
            if ((fVar25 <= fVar23) && (fVar19 <= fVar23)) {
              fVar19 = fVar23;
            }
            if (fVar25 <= fVar23) {
              fVar23 = fVar25;
            }
            fVar20 = fVar20 * -fVar18 + fVar17 * fVar21;
            if ((fVar24 <= fVar20) && (fVar26 <= fVar20)) {
              fVar26 = fVar20;
            }
            if (fVar24 <= fVar20) {
              fVar20 = fVar24;
            }
            uVar9 = uVar9 - 1;
            fVar24 = fVar20;
            fVar25 = fVar23;
          } while (uVar9 != 0);
        }
        fVar19 = fVar19 - fVar23;
        fVar26 = fVar26 - fVar20;
        if ((local_res10 < 0.0) || (fVar19 * fVar26 < local_res10)) {
          local_1d4 = fVar18 * fVar19;
          local_1d0 = 0.0;
          local_1d8 = fVar17 * fVar19;
          fVar15 = fVar26 * -fVar18;
          local_1a8 = 0.0;
          fVar16 = fVar17 * fVar26;
          local_res10 = fVar19 * fVar26;
        }
        lVar3 = lVar3 + 1;
        fVar17 = local_1a8;
      } while (lVar3 < (int)local_160 + -1);
    }
    local_178 = 0;
    local_1b8 = local_1d8;
    fStack_1b4 = local_1d4;
    fStack_1b0 = local_1d0;
    fStack_1ac = 0.0;
    local_170 = 0;
    fVar18 = local_1d4 * fStack_130;
    fVar20 = local_1d8 * fStack_144;
    fVar23 = local_1d8 * fStack_140;
    local_1d8 = local_118 * 0.0 + local_1d0 * local_128 +
                local_1d4 * local_138 + local_1d8 * local_148;
    local_1d4 = fStack_114 * 0.0 + local_1d0 * fStack_124 + local_1d4 * fStack_134 + fVar20;
    local_1d0 = fStack_110 * 0.0 + local_1d0 * fStack_120 + fVar18 + fVar23;
    fVar18 = local_118 * 0.0 + fVar17 * local_128 + fVar16 * local_138 + fVar15 * local_148;
    fVar20 = fStack_114 * 0.0 + fVar17 * fStack_124 + fVar16 * fStack_134 + fVar15 * fStack_144;
    fVar15 = fStack_110 * 0.0 + fVar17 * fStack_120 + fVar16 * fStack_130 + fVar15 * fStack_140;
    uVar5 = FRotationMatrix::MakeFromZX(&local_108,&local_1a0,&local_1d8);
    puVar6 = (undefined8 *)FMatrix::Rotator(uVar5,&local_1c8);
    *param_5 = *puVar6;
    *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar6 + 1);
    *param_6 = SQRT(local_1d8 * local_1d8 + local_1d4 * local_1d4 + local_1d0 * local_1d0);
    *param_7 = SQRT(fVar20 * fVar20 + fVar18 * fVar18 + fVar15 * fVar15);
    if (uVar10 != 0) {
      FMemory::Free(uVar10);
    }
    if (piVar2 != (int *)0x0) {
      FMemory::Free(piVar2);
    }
  }
  return;
}



// FUNCTION 142531110 FUN_142531110 body=949 status=ok
// SIG undefined FUN_142531110(void)

void FUN_142531110(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7,char *param_8,
                  undefined4 *param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined8 uVar16;
  int local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80 [2];
  int local_70;
  int iStack_6c;
  
  lVar10 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar10 == 0) {
    return;
  }
  if (*(longlong *)(lVar10 + 400) == 0) {
    plVar15 = (longlong *)(lVar10 + 0x400);
  }
  else {
    plVar15 = *(longlong **)(*(longlong *)(lVar10 + 400) + 0x98);
  }
  local_90 = *(undefined8 *)(param_9 + 4);
  iVar4 = param_9[1];
  FWeakObjectPtr::operator=(&local_88,local_90);
  local_80[0] = local_88;
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(plVar15,local_98,local_80);
  plVar13 = (longlong *)0x0;
  plVar11 = plVar13;
  if (local_98[0] != -1) {
    plVar11 = (longlong *)((longlong)local_98[0] * 0x20 + *plVar15);
  }
  plVar14 = plVar11 + 1;
  if (plVar11 == (longlong *)0x0) {
    plVar14 = plVar13;
  }
  if (plVar14 != (longlong *)0x0) {
    plVar13 = (longlong *)*plVar14;
  }
  if ((plVar13 != (longlong *)0x0) &&
     (iVar8 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
              ::Num(plVar13,iVar4), 0 < iVar8)) {
    iStack_6c = -1;
    local_70 = iVar4;
    TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
    ::ConditionalRehash(plVar13,(int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34),0);
    iVar8 = -1;
    if ((int)plVar13[9] != 0) {
      plVar11 = (longlong *)plVar13[8];
      if ((longlong *)plVar13[8] == (longlong *)0x0) {
        plVar11 = plVar13 + 7;
      }
      iVar8 = *(int *)((longlong)plVar11 + ((longlong)(int)plVar13[9] - 1U & (longlong)iVar4) * 4);
      iStack_6c = iVar8;
      if (iVar8 != -1) {
        do {
          iVar5 = *(int *)(*plVar13 + 0x10 + (longlong)iVar8 * 0x18);
          iStack_6c = iVar8;
          if (*(int *)(*plVar13 + (longlong)iVar8 * 0x18) == iVar4) break;
          iVar8 = iVar5;
          iStack_6c = iVar5;
        } while (iVar5 != -1);
      }
    }
    if (iStack_6c != -1) {
      lVar10 = *(longlong *)(*plVar13 + 8 + (longlong)iVar8 * 0x18);
      goto LAB_1425312d1;
    }
  }
  lVar10 = 0;
LAB_1425312d1:
  puVar12 = (undefined8 *)(param_1 + 0x1ec);
  if (param_1 == 0) {
    puVar12 = (undefined8 *)&DAT_1468b5d90;
  }
  uVar1 = *puVar12;
  uVar6 = *(undefined4 *)(puVar12 + 1);
  puVar12 = (undefined8 *)(param_1 + 0x1f8);
  if (param_1 == 0) {
    puVar12 = &DAT_1468b5da0;
  }
  uVar2 = *puVar12;
  uVar7 = *(undefined4 *)(puVar12 + 1);
  cVar3 = *param_8;
  if (lVar10 == 0) {
    if (cVar3 != '\0') {
      return;
    }
    puVar12 = (undefined8 *)operator_new(0x70);
    uVar16 = local_90;
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      *puVar12 = &PTR_FUN_1450e87f0;
      puVar12[3] = *(undefined8 *)(param_9 + 2);
      uVar9 = *param_9;
      *(undefined4 *)(puVar12 + 1) = param_6;
      *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
      *(undefined1 *)(puVar12 + 2) = 1;
      *(undefined4 *)(puVar12 + 4) = uVar9;
      FWeakObjectPtr::operator=((longlong)puVar12 + 0x24,local_90);
      FWeakObjectPtr::operator=((longlong)puVar12 + 0x2c,param_1);
      *(undefined1 *)((longlong)puVar12 + 0x6c) = param_5;
      *(undefined1 *)((longlong)puVar12 + 0x6d) = param_4;
      *(undefined1 *)((longlong)puVar12 + 0x6e) = param_7;
      *(undefined1 *)((longlong)puVar12 + 0x34) = 1;
      *(undefined1 *)(puVar12 + 10) = 1;
    }
    *(undefined8 *)((longlong)puVar12 + 0x54) = uVar1;
    puVar12[7] = uVar2;
    *(undefined4 *)((longlong)puVar12 + 0x5c) = uVar6;
    uVar6 = *(undefined4 *)(param_2 + 1);
    puVar12[0xc] = *param_2;
    uVar1 = *param_3;
    *(undefined4 *)(puVar12 + 0xd) = uVar6;
    uVar6 = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)((longlong)puVar12 + 0x44) = uVar1;
    *(undefined4 *)((longlong)puVar12 + 0x4c) = uVar6;
    *(undefined4 *)(puVar12 + 8) = uVar7;
    FUN_142514cf0(plVar15,uVar16,iVar4,puVar12);
    return;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(lVar10 + 8) = param_6;
    uVar9 = *(undefined4 *)(param_2 + 1);
    *(undefined8 *)(lVar10 + 0x60) = *param_2;
    uVar16 = *param_3;
    *(undefined4 *)(lVar10 + 0x68) = uVar9;
    uVar9 = *(undefined4 *)(param_3 + 1);
  }
  else {
    if (cVar3 == '\x01') {
      *(undefined1 *)(lVar10 + 0x10) = 0;
      return;
    }
    if (cVar3 != '\x02') {
      return;
    }
    *(undefined4 *)(lVar10 + 8) = *(undefined4 *)(lVar10 + 0xc);
    *(undefined8 *)(lVar10 + 0x60) = *(undefined8 *)(lVar10 + 0x54);
    uVar16 = *(undefined8 *)(lVar10 + 0x38);
    *(undefined4 *)(lVar10 + 0x68) = *(undefined4 *)(lVar10 + 0x5c);
    uVar9 = *(undefined4 *)(lVar10 + 0x40);
  }
  *(undefined8 *)(lVar10 + 0x38) = uVar2;
  *(undefined8 *)(lVar10 + 0x54) = uVar1;
  *(undefined8 *)(lVar10 + 0x44) = uVar16;
  *(undefined4 *)(lVar10 + 0x40) = uVar7;
  *(undefined4 *)(lVar10 + 0x5c) = uVar6;
  *(undefined4 *)(lVar10 + 0x4c) = uVar9;
  *(undefined4 *)(lVar10 + 0xc) = 0;
  return;
}



// FUNCTION 1425314d0 NearlyEqual_TransformTransform body=181 status=ok
// SIG undefined NearlyEqual_TransformTransform(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint UKismetMathLibrary::NearlyEqual_TransformTransform
               (float *param_1,float *param_2,float param_3,float param_4,float param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 in_EAX;
  int iVar5;
  uint uVar6;
  
  auVar1._4_4_ = -(uint)(param_4 < (float)((uint)(param_1[1] - param_2[1]) & uRam0000000146afc544));
  auVar1._0_4_ = -(uint)(param_4 < (float)((uint)(*param_1 - *param_2) & _DAT_146afc540));
  auVar1._8_4_ = -(uint)(param_4 < (float)((uint)(param_1[2] - param_2[2]) & uRam0000000146afc548));
  auVar1._12_4_ = -(uint)(param_4 < (float)((uint)(param_1[3] - param_2[3]) & uRam0000000146afc54c))
  ;
  iVar5 = movmskps(in_EAX,auVar1);
  if ((iVar5 == 0) ||
     (auVar4._4_4_ = -(uint)(param_4 <
                            (float)((uint)(param_2[1] + param_1[1]) & uRam0000000146afc544)),
     auVar4._0_4_ = -(uint)(param_4 < (float)((uint)(*param_2 + *param_1) & _DAT_146afc540)),
     auVar4._8_4_ = -(uint)(param_4 <
                           (float)((uint)(param_2[2] + param_1[2]) & uRam0000000146afc548)),
     auVar4._12_4_ =
          -(uint)(param_4 < (float)((uint)(param_2[3] + param_1[3]) & uRam0000000146afc54c)),
     uVar6 = movmskps(iVar5,auVar4), uVar6 == 0)) {
    auVar2._4_4_ = -(uint)(param_3 < (float)((uint)(param_1[5] - param_2[5]) & uRam0000000146afc544)
                          );
    auVar2._0_4_ = -(uint)(param_3 < (float)((uint)(param_1[4] - param_2[4]) & _DAT_146afc540));
    auVar2._8_4_ = -(uint)(param_3 < (float)((uint)(param_1[6] - param_2[6]) & uRam0000000146afc548)
                          );
    auVar2._12_4_ =
         -(uint)(param_3 < (float)((uint)(param_1[7] - param_2[7]) & uRam0000000146afc54c));
    uVar6 = movmskps(0,auVar2);
    if (uVar6 == 0) {
      auVar3._4_4_ = -(uint)(param_5 <
                            (float)((uint)(param_1[9] - param_2[9]) & uRam0000000146afc544));
      auVar3._0_4_ = -(uint)(param_5 < (float)((uint)(param_1[8] - param_2[8]) & _DAT_146afc540));
      auVar3._8_4_ = -(uint)(param_5 <
                            (float)((uint)(param_1[10] - param_2[10]) & uRam0000000146afc548));
      auVar3._12_4_ =
           -(uint)(param_5 < (float)((uint)(param_1[0xb] - param_2[0xb]) & uRam0000000146afc54c));
      uVar6 = movmskps(0,auVar3);
      if (uVar6 == 0) {
        return 1;
      }
    }
  }
  return uVar6 & 0xffffff00;
}



// FUNCTION 142531590 NewGuid body=23 status=ok
// SIG undefined NewGuid(void)

undefined8 UKismetGuidLibrary::NewGuid(undefined8 param_1)

{
  FGuid::NewGuid();
  return param_1;
}



// FUNCTION 1425315b0 NextSobolCell2D body=202 status=ok
// SIG undefined NextSobolCell2D(void)

undefined8
UImportanceSamplingLibrary::NextSobolCell2D
          (undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  
  uVar5 = param_3 - 1;
  if (uVar5 == 0) {
    bVar6 = 0;
  }
  else {
    cVar4 = '\x10';
    if (uVar5 < 0x10000) {
      cVar4 = '\0';
    }
    uVar3 = uVar5 >> 0x10;
    if (uVar5 < 0x10000) {
      uVar3 = uVar5;
    }
    if (0xff < uVar3) {
      uVar3 = uVar3 >> 8;
      cVar4 = cVar4 + '\b';
    }
    cVar2 = cVar4 + '\x04';
    if (uVar3 < 0x10) {
      cVar2 = cVar4;
    }
    uVar5 = uVar3 >> 4;
    if (uVar3 < 0x10) {
      uVar5 = uVar3;
    }
    cVar4 = cVar2 + '\x02';
    if (uVar5 < 4) {
      cVar4 = cVar2;
    }
    uVar3 = uVar5 >> 2;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    cVar2 = cVar4 + '\x01';
    if (uVar3 < 2) {
      cVar2 = cVar4;
    }
    if (uVar3 == 0) {
      cVar2 = '\0';
    }
    bVar6 = cVar2 + 1;
  }
  bVar6 = ~((param_3 != 0) - 1U) & bVar6;
  bVar1 = 0xf;
  if (bVar6 < 0xf) {
    bVar1 = bVar6;
  }
  FSobol::Next(param_1,param_2,bVar1,param_4);
  return param_1;
}



// FUNCTION 142531680 NextSobolCell3D body=226 status=ok
// SIG undefined NextSobolCell3D(void)

undefined8
UImportanceSamplingLibrary::NextSobolCell3D
          (undefined8 param_1,undefined4 param_2,int param_3,undefined8 *param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  undefined8 local_18;
  undefined4 local_10;
  
  uVar5 = param_3 - 1;
  if (uVar5 == 0) {
    bVar6 = 0;
  }
  else {
    cVar4 = '\x10';
    if (uVar5 < 0x10000) {
      cVar4 = '\0';
    }
    uVar3 = uVar5 >> 0x10;
    if (uVar5 < 0x10000) {
      uVar3 = uVar5;
    }
    if (0xff < uVar3) {
      uVar3 = uVar3 >> 8;
      cVar4 = cVar4 + '\b';
    }
    cVar2 = cVar4 + '\x04';
    if (uVar3 < 0x10) {
      cVar2 = cVar4;
    }
    uVar5 = uVar3 >> 4;
    if (uVar3 < 0x10) {
      uVar5 = uVar3;
    }
    cVar4 = cVar2 + '\x02';
    if (uVar5 < 4) {
      cVar4 = cVar2;
    }
    uVar3 = uVar5 >> 2;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    cVar2 = cVar4 + '\x01';
    if (uVar3 < 2) {
      cVar2 = cVar4;
    }
    if (uVar3 == 0) {
      cVar2 = '\0';
    }
    bVar6 = cVar2 + 1;
  }
  local_18 = *param_4;
  local_10 = *(undefined4 *)(param_4 + 1);
  bVar6 = ~((param_3 != 0) - 1U) & bVar6;
  bVar1 = 10;
  if (bVar6 < 10) {
    bVar1 = bVar6;
  }
  FSobol::Next(param_1,param_2,bVar1,&local_18);
  return param_1;
}



// FUNCTION 142531770 NextSobolFloat body=28 status=ok
// SIG undefined NextSobolFloat(void)

void UImportanceSamplingLibrary::NextSobolFloat(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    FUN_141631570(param_1,0);
    return;
  }
  iVar1 = 0xf;
  if (param_2 < 0xf) {
    iVar1 = param_2;
  }
  FUN_141631570(param_1,iVar1);
  return;
}



// FUNCTION 142531790 NormalizeAxis body=95 status=ok
// SIG undefined NormalizeAxis(void)

float UKismetMathLibrary::NormalizeAxis(float param_1)

{
  float fVar1;
  
  fVar1 = (float)(int)(param_1 * 0.0027777778) * 360.0;
  if (ABS(param_1) < ABS(fVar1)) {
    fVar1 = param_1;
  }
  param_1 = param_1 - fVar1;
  if (param_1 < 0.0) {
    param_1 = param_1 + 360.0;
  }
  if (180.0 < param_1) {
    param_1 = param_1 - 360.0;
  }
  return param_1;
}



// FUNCTION 1425317f0 NormalizeToRange body=53 status=ok
// SIG undefined NormalizeToRange(void)

float UKismetMathLibrary::NormalizeToRange(float param_1,float param_2,float param_3)

{
  float fVar1;
  
  if (param_2 != param_3) {
    fVar1 = param_2;
    if (param_2 <= param_3) {
      fVar1 = param_3;
      param_3 = param_2;
    }
    return (param_1 - param_3) / (fVar1 - param_3);
  }
  if (param_2 <= param_1) {
    return 1.0;
  }
  return 0.0;
}



// FUNCTION 142531830 NormalizedDeltaRotator body=166 status=ok
// SIG undefined NormalizedDeltaRotator(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * UKismetMathLibrary::NormalizedDeltaRotator(float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  
  fVar9 = *param_2 - *param_3;
  fVar6 = param_2[2] - param_3[2];
  fVar8 = param_2[1] - param_3[1];
  *param_1 = fVar9;
  param_1[2] = fVar6;
  param_1[1] = fVar8;
  fVar3 = (float)DAT_146afc560;
  fVar4 = DAT_146afc560._4_4_;
  fVar5 = DAT_146afc560._8_4_;
  auVar7._4_4_ = fVar8;
  auVar7._0_4_ = fVar9;
  auVar7._8_4_ = fVar6;
  auVar7._12_4_ = 0;
  auVar7 = divps(auVar7,_DAT_146afc560);
  fVar9 = fVar9 - (float)(int)auVar7._0_4_ * fVar3;
  fVar8 = fVar8 - (float)(int)auVar7._4_4_ * fVar4;
  fVar6 = fVar6 - (float)(int)auVar7._8_4_ * fVar5;
  fVar9 = (float)(((uint)(fVar3 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                 (uint)(fVar3 + fVar9));
  fVar8 = (float)(((uint)(fVar4 + fVar8) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                 (uint)(fVar4 + fVar8));
  fVar6 = (float)(((uint)(fVar5 + fVar6) ^ (uint)fVar6) & -(uint)(0.0 <= fVar6) ^
                 (uint)(fVar5 + fVar6));
  bVar1 = fRam0000000146afc554 < fVar8;
  bVar2 = fRam0000000146afc558 < fVar6;
  *param_1 = (float)(((uint)(fVar9 - fVar3) ^ (uint)fVar9) & -(uint)(_DAT_146afc550 < fVar9) ^
                    (uint)fVar9);
  param_1[2] = (float)(((uint)(fVar6 - fVar5) ^ (uint)fVar6) & -(uint)bVar2 ^ (uint)fVar6);
  param_1[1] = (float)(((uint)(fVar8 - fVar4) ^ (uint)fVar8) & -(uint)bVar1 ^ (uint)fVar8);
  return param_1;
}



// FUNCTION 1425318e0 NotEqual_GuidGuid body=37 status=ok
// SIG undefined NotEqual_GuidGuid(void)

undefined4 UKismetGuidLibrary::NotEqual_GuidGuid(uint *param_1,uint *param_2)

{
  return CONCAT31((int3)((*param_1 ^ *param_2) >> 8),
                  ((param_1[3] != param_2[3] || param_1[2] != param_2[2]) ||
                  param_1[1] != param_2[1]) || (*param_1 ^ *param_2) != 0);
}



// FUNCTION 142531910 NotEqual_IgnoreCase_TextText body=19 status=ok
// SIG undefined NotEqual_IgnoreCase_TextText(void)

bool UKismetTextLibrary::NotEqual_IgnoreCase_TextText(void)

{
  char cVar1;
  
  cVar1 = FText::EqualToCaseIgnored();
  return cVar1 == '\0';
}



// FUNCTION 142531930 NotEqual_SoftClassReference body=27 status=ok
// SIG undefined NotEqual_SoftClassReference(void)

bool UKismetSystemLibrary::NotEqual_SoftClassReference(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FSoftObjectPath::operator==(param_1 + 0x10,param_2 + 0x10);
  return cVar1 == '\0';
}



// FUNCTION 142531950 NotEqual_StrStr body=59 status=ok
// SIG undefined NotEqual_StrStr(void)

undefined8 UKismetStringLibrary::NotEqual_StrStr(undefined8 *param_1,undefined8 *param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  undefined2 *puVar4;
  longlong lVar5;
  
  psVar3 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 1) != 0) {
    psVar3 = (short *)*param_1;
  }
  lVar5 = (longlong)puVar4 - (longlong)psVar3;
  do {
    sVar1 = *psVar3;
    sVar2 = *(short *)((longlong)psVar3 + lVar5);
    if (sVar1 != sVar2) break;
    psVar3 = psVar3 + 1;
  } while (sVar2 != 0);
  return CONCAT71((int7)((ulonglong)psVar3 >> 8),sVar1 != sVar2);
}



// FUNCTION 142531990 NotEqual_StriStri body=52 status=ok
// SIG undefined NotEqual_StriStri(void)

bool UKismetStringLibrary::NotEqual_StriStri(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  if (*(int *)(param_1 + 1) != 0) {
    puVar2 = (undefined2 *)*param_1;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  return iVar1 != 0;
}



// FUNCTION 1425319d0 NotEqual_TextText body=22 status=ok
// SIG undefined NotEqual_TextText(void)

bool UKismetTextLibrary::NotEqual_TextText(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FText::EqualTo(param_1,param_2,0);
  return cVar1 == '\0';
}



// FUNCTION 1425319f0 FUN_1425319f0 body=144 status=ok
// SIG undefined FUN_1425319f0(void)

void FUN_1425319f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 local_res8;
  
  uVar1 = FUN_141796df0(param_1 + 8);
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x120);
    if (lVar2 != 0) {
      lVar2 = UObject::FindFunction(lVar2,*(undefined8 *)(param_1 + 0x128));
      if (lVar2 != 0) {
        local_res8 = uVar1;
        plVar3 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x120);
        uVar1 = FUN_14178ac60(plVar3,*(undefined8 *)(param_1 + 0x128));
        (**(code **)(*plVar3 + 0x208))(plVar3,uVar1,&local_res8);
      }
    }
  }
  return;
}



// FUNCTION 142531a80 OnLoaded body=83 status=ok
// SIG undefined OnLoaded(void)

void FLoadAssetActionBase::OnLoaded(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\KismetSystemLibrary.cpp",
             0x977,L"Pure virtual not implemented (%s)",L"FLoadAssetActionBase::OnLoaded");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Private\\KismetSystemLibrary.cpp",
             0x977,L"Pure virtual not implemented (%s)",L"FLoadAssetActionBase::OnLoaded");
  return;
}



// FUNCTION 142531ae0 FUN_142531ae0 body=213 status=ok
// SIG undefined FUN_142531ae0(void)

void FUN_142531ae0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong local_res8;
  
  lVar2 = FUN_141796df0(param_1 + 8);
  if (lVar2 != 0) {
    lVar3 = FUN_14171bfe0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_142531b36;
  }
  lVar2 = 0;
LAB_142531b36:
  local_res8 = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x120);
    if (lVar3 != 0) {
      lVar3 = UObject::FindFunction(lVar3,*(undefined8 *)(param_1 + 0x128));
      if (lVar3 != 0) {
        local_res8 = lVar2;
        plVar4 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x120);
        uVar5 = FUN_14178ac60(plVar4,*(undefined8 *)(param_1 + 0x128));
        (**(code **)(*plVar4 + 0x208))(plVar4,uVar5,&local_res8);
      }
    }
  }
  return;
}



// FUNCTION 142531bc0 ParseIntoArray body=59 status=ok
// SIG undefined ParseIntoArray(void)

undefined8 *
UKismetStringLibrary::ParseIntoArray(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)*param_3;
  }
  FUN_141594550(param_2,param_1,puVar1);
  return param_1;
}



// FUNCTION 142531c00 Parse_StringToGuid body=22 status=ok
// SIG undefined Parse_StringToGuid(void)

void UKismetGuidLibrary::Parse_StringToGuid
               (undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_141678c50();
  *param_3 = uVar1;
  return;
}



// FUNCTION 142531c20 FUN_142531c20 body=13 status=ok
// SIG undefined FUN_142531c20(void)

undefined8 * FUN_142531c20(undefined8 *param_1,longlong param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 142531c30 PointerEvent_GetEffectingButton body=36 status=ok
// SIG undefined PointerEvent_GetEffectingButton(void)

undefined8 *
UKismetInputLibrary::PointerEvent_GetEffectingButton(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = *(undefined8 *)(param_2 + 0x38);
  param_1[1] = *(undefined8 *)(param_2 + 0x40);
  lVar1 = *(longlong *)(param_2 + 0x48);
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 142531c60 PointerEvent_GetGestureDelta body=13 status=ok
// SIG undefined PointerEvent_GetGestureDelta(void)

undefined8 * UKismetInputLibrary::PointerEvent_GetGestureDelta(undefined8 *param_1,longlong param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 142531c70 PointerEvent_GetGestureType body=47 status=ok
// SIG undefined PointerEvent_GetGestureType(void)

undefined1 UKismetInputLibrary::PointerEvent_GetGestureType(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x5d);
  if (cVar1 == '\x01') {
    return 1;
  }
  if (cVar1 == '\x02') {
    return 2;
  }
  if (cVar1 == '\x03') {
    return 3;
  }
  if (cVar1 != '\x04') {
    if (cVar1 != '\x05') {
      return 0;
    }
    return 5;
  }
  return 4;
}



// FUNCTION 142531ca0 FUN_142531ca0 body=13 status=ok
// SIG undefined FUN_142531ca0(void)

undefined8 * FUN_142531ca0(undefined8 *param_1,longlong param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}



// FUNCTION 142531cb0 PointerEvent_GetScreenSpacePosition body=13 status=ok
// SIG undefined PointerEvent_GetScreenSpacePosition(void)

undefined8 *
UKismetInputLibrary::PointerEvent_GetScreenSpacePosition(undefined8 *param_1,longlong param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 142531cc0 FUN_142531cc0 body=6 status=ok
// SIG undefined FUN_142531cc0(void)

undefined4 FUN_142531cc0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 100);
}



// FUNCTION 142531cd0 FUN_142531cd0 body=270 status=ok
// SIG undefined FUN_142531cd0(void)

bool FUN_142531cd0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  
  plVar2 = (longlong *)param_2[2];
  lVar3 = *param_2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x30);
  iVar8 = -1;
  iVar6 = iVar8;
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar7 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar7 = plVar4 + 7;
    }
    iVar5 = *(int *)((longlong)plVar7 +
                    ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                    (longlong)(int)plVar4[9] - 1U) * 4);
    if (iVar5 != -1) {
      do {
        iVar6 = iVar5;
        if (*(longlong *)((longlong)iVar5 * 0x20 + *plVar4) == lVar3) break;
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + 0x18 + *plVar4);
        iVar6 = iVar8;
      } while (iVar5 != -1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  plVar2 = (longlong *)param_2[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return iVar6 != -1;
}



// FUNCTION 142531de0 FUN_142531de0 body=5 status=ok
// SIG undefined FUN_142531de0(void)

undefined1 FUN_142531de0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x5c);
}



// FUNCTION 142531df0 PolyglotDataToText body=32 status=ok
// SIG undefined PolyglotDataToText(void)

undefined8 UKismetTextLibrary::PolyglotDataToText(undefined8 param_1,undefined8 param_2)

{
  FUN_14160c1e0(param_2,param_1);
  return param_1;
}



// FUNCTION 142531e30 PostInitProperties body=40 status=ok
// SIG undefined PostInitProperties(void)

void ULevel::PostInitProperties(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  FUN_1417931d0();
  puVar2 = (undefined8 *)FGuid::NewGuid(local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0x1dc) = *puVar2;
  *(undefined8 *)(param_1 + 0x1e4) = uVar1;
  return;
}



// FUNCTION 142531e60 FUN_142531e60 body=2225 status=ok
// SIG undefined FUN_142531e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142531e60(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  FUN_1417931d0();
  local_48 = (longlong *)&LAB_142515710;
  iStack_40 = 0;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_48._4_4_;
    *(int *)(plVar3 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_3c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af370,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = DAT_1464af378;
    lVar4 = (longlong)DAT_1464af378;
    DAT_1464af378 = DAT_1464af378 + 1;
    if (DAT_1464af37c < DAT_1464af378) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af370,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af370);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  iStack_40 = 0;
  local_48 = (longlong *)&LAB_142515390;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_48._4_4_;
    *(int *)(plVar3 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_3c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af388,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = DAT_1464af390;
    lVar4 = (longlong)DAT_1464af390;
    DAT_1464af390 = DAT_1464af390 + 1;
    if (DAT_1464af394 < DAT_1464af390) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af388,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af388);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  iStack_40 = 0;
  local_48 = (longlong *)&LAB_142515720;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_48._4_4_;
    *(int *)(plVar3 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_3c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af3a0,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = DAT_1464af3a8;
    lVar4 = (longlong)DAT_1464af3a8;
    DAT_1464af3a8 = DAT_1464af3a8 + 1;
    if (DAT_1464af3ac < DAT_1464af3a8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af3a0,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af3a0);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  iStack_40 = 0;
  local_48 = (longlong *)&LAB_142515380;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_48._4_4_;
    *(int *)(plVar3 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_3c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af3b8,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = DAT_1464af3c0;
    lVar4 = (longlong)DAT_1464af3c0;
    DAT_1464af3c0 = DAT_1464af3c0 + 1;
    if (DAT_1464af3c4 < DAT_1464af3c0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af3b8,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af3b8);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  iStack_40 = 0;
  local_48 = (longlong *)&LAB_142515730;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_48._4_4_;
    *(int *)(plVar3 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_3c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af3d0,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = DAT_1464af3d8;
    lVar4 = (longlong)DAT_1464af3d8;
    DAT_1464af3d8 = DAT_1464af3d8 + 1;
    if (DAT_1464af3dc < DAT_1464af3d8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af3d0,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af3d0);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  iStack_40 = 0;
  local_48 = (longlong *)&LAB_142515700;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_48._4_4_;
    *(int *)(plVar3 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_3c;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar4;
    *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af400,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = DAT_1464af408;
    lVar4 = (longlong)DAT_1464af408;
    DAT_1464af408 = DAT_1464af408 + 1;
    if (DAT_1464af40c < DAT_1464af408) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af400,iVar1);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af400);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 3;
  }
  uStack_30 = 0;
  local_38 = FUN_1425155b0;
  local_48 = (longlong *)0x0;
  iStack_40 = 0;
  puVar5 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(puVar5 + 1,param_1);
    *(undefined4 *)(puVar5 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar5 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_2c;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_FUN_143fcff08;
  }
  iVar1 = iStack_40;
  plVar3 = local_48;
  if (iStack_40 == 0) {
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else if (local_48 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af418,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar2 = DAT_1464af420;
    lVar4 = (longlong)DAT_1464af420;
    DAT_1464af420 = DAT_1464af420 + 1;
    if (DAT_1464af424 < DAT_1464af420) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af418,iVar2);
    }
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af418);
    *puVar5 = plVar3;
    *(int *)(puVar5 + 1) = iVar1;
  }
  uStack_30 = 0;
  local_38 = FUN_142515630;
  local_48 = (longlong *)0x0;
  iStack_40 = 0;
  puVar5 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1450e8a20;
    FWeakObjectPtr::operator=(puVar5 + 1,param_1);
    *(undefined4 *)(puVar5 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar5 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_2c;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_FUN_1450e8a68;
  }
  iVar1 = iStack_40;
  plVar3 = local_48;
  if ((iStack_40 != 0) && (local_48 != (longlong *)0x0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af430,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar2 = DAT_1464af438;
    lVar4 = (longlong)DAT_1464af438;
    DAT_1464af438 = DAT_1464af438 + 1;
    if (DAT_1464af43c < DAT_1464af438) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af430,iVar2);
    }
    local_48 = (longlong *)0x0;
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af430);
    iStack_40 = 0;
    *puVar5 = plVar3;
    *(int *)(puVar5 + 1) = iVar1;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  local_38 = UPlatformGameInstance::ApplicationRegisteredForUserNotificationsDelegate_Handler;
  uStack_30 = 0;
  FUN_140b94210(&DAT_1464af448,local_res10,param_1,&local_38);
  uStack_30 = 0;
  local_38 = FUN_1425152a0;
  local_48 = (longlong *)0x0;
  iStack_40 = 0;
  puVar5 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1450e8ab0;
    FWeakObjectPtr::operator=(puVar5 + 1,param_1);
    *(undefined4 *)(puVar5 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar5 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_2c;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_FUN_1450e8af8;
  }
  iVar1 = iStack_40;
  plVar3 = local_48;
  if ((iStack_40 != 0) && (local_48 != (longlong *)0x0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af460,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar2 = DAT_1464af468;
    lVar4 = (longlong)DAT_1464af468;
    DAT_1464af468 = DAT_1464af468 + 1;
    if (DAT_1464af46c < DAT_1464af468) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af460,iVar2);
    }
    local_48 = (longlong *)0x0;
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af460);
    iStack_40 = 0;
    *puVar5 = plVar3;
    *(int *)(puVar5 + 1) = iVar1;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  uStack_30 = 0;
  local_38 = FUN_1425154a0;
  local_48 = (longlong *)0x0;
  iStack_40 = 0;
  puVar5 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1450e8b40;
    FWeakObjectPtr::operator=(puVar5 + 1,param_1);
    *(undefined4 *)(puVar5 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar5 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_2c;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_FUN_1450e8b88;
  }
  iVar1 = iStack_40;
  plVar3 = local_48;
  if ((iStack_40 != 0) && (local_48 != (longlong *)0x0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af478,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar2 = DAT_1464af480;
    lVar4 = (longlong)DAT_1464af480;
    DAT_1464af480 = DAT_1464af480 + 1;
    if (DAT_1464af484 < DAT_1464af480) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af478,iVar2);
    }
    local_48 = (longlong *)0x0;
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af478);
    iStack_40 = 0;
    *puVar5 = plVar3;
    *(int *)(puVar5 + 1) = iVar1;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  uStack_30 = 0;
  local_38 = FUN_1425153a0;
  local_48 = (longlong *)0x0;
  iStack_40 = 0;
  puVar5 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &PTR_FUN_1450e8bd0;
    FWeakObjectPtr::operator=(puVar5 + 1,param_1);
    *(undefined4 *)(puVar5 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar5 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_2c;
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &PTR_FUN_1450e8c18;
  }
  iVar1 = iStack_40;
  plVar3 = local_48;
  if ((iStack_40 != 0) && (local_48 != (longlong *)0x0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af490,1);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar2 = DAT_1464af498;
    lVar4 = (longlong)DAT_1464af498;
    DAT_1464af498 = DAT_1464af498 + 1;
    if (DAT_1464af49c < DAT_1464af498) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af490,iVar2);
    }
    local_48 = (longlong *)0x0;
    puVar5 = (undefined8 *)(lVar4 * 0x10 + _DAT_1464af490);
    iStack_40 = 0;
    *puVar5 = plVar3;
    *(int *)(puVar5 + 1) = iVar1;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  local_38 = UPlatformGameInstance::
             ApplicationReceivedScreenOrientationChangedNotificationDelegate_Handler;
  uStack_30 = 0;
  FUN_140b94210(&DAT_1464af4a8,local_res10,param_1,&local_38);
  return;
}



// FUNCTION 142532720 FUN_142532720 body=409 status=ok
// SIG undefined FUN_142532720(void)

void FUN_142532720(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  UObject::PostLoad();
  lVar3 = UObjectBaseUtility::GetOutermost(param_1);
  lVar3 = *(longlong *)(lVar3 + 0x18);
  if (DAT_1465332d8 != DAT_146533304) {
    puVar4 = DAT_146533310;
    if (DAT_146533310 == (undefined *)0x0) {
      puVar4 = &DAT_146533308;
    }
    iVar1 = *(int *)(puVar4 + (longlong)
                              (int)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3 &
                                   DAT_146533318 - 1U) * 4);
    while (iVar1 != -1) {
      lVar5 = (longlong)iVar1;
      if (*(longlong *)(DAT_1465332d0 + lVar5 * 0x18) == lVar3) {
        if ((iVar1 != -1) && (lVar3 = DAT_1465332d0 + lVar5 * 0x18, lVar3 != 0)) {
          local_res8 = *(undefined4 *)(lVar3 + 8);
          local_resc = *(undefined4 *)(lVar3 + 0xc);
          goto LAB_1425327b7;
        }
        break;
      }
      iVar1 = *(int *)(DAT_1465332d0 + 0x10 + lVar5 * 0x18);
    }
  }
  local_res8 = 0xffffffff;
  local_resc = 0;
LAB_1425327b7:
  lVar3 = FWeakObjectPtr::Get(&local_res8);
  *(longlong *)(param_1 + 0xc0) = lVar3;
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    lVar3 = UObjectBaseUtility::GetOutermost(param_1);
    TSet<TTuple<FName,FUniformBufferStruct_*>,TDefaultMapHashableKeyFuncs<FName,FUniformBufferStruct_*,0>,FDefaultSetAllocator>
    ::Remove(&DAT_1465332d0,*(undefined8 *)(lVar3 + 0x18));
  }
  FUN_1428d2850(param_1);
  if (*(longlong *)(param_1 + 0x250) != 0) goto LAB_14253287e;
  lVar3 = **(longlong **)(param_1 + 0xa0);
  if (lVar3 == 0) {
LAB_142532870:
    lVar3 = 0;
  }
  else {
    lVar5 = UVoipListenerSynthComponent::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142532870;
  }
  *(longlong *)(param_1 + 0x250) = lVar3;
LAB_14253287e:
  if ((*(longlong *)(param_1 + 200) == 0) || (*(int *)(*(longlong *)(param_1 + 200) + 0x314) == 0))
  {
    *(undefined4 *)(param_1 + 0x128) = 0;
    if (*(int *)(param_1 + 300) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x120,0);
      return;
    }
  }
  return;
}



// FUNCTION 1425328c0 FUN_1425328c0 body=2382 status=ok
// SIG undefined FUN_1425328c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425328c0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int *piVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  longlong lVar16;
  longlong *plVar17;
  int *piVar18;
  longlong local_res10;
  int local_res20 [2];
  int local_1e8 [2];
  uint local_1e0;
  uint uStack_1dc;
  uint *puStack_1d8;
  undefined4 local_1d0;
  int iStack_1cc;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  uint local_1c0;
  uint uStack_1bc;
  uint *puStack_1b8;
  undefined4 local_1b0;
  int iStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  uint local_1a0;
  uint uStack_19c;
  uint *puStack_198;
  undefined4 local_190;
  undefined8 uStack_18c;
  undefined4 uStack_184;
  longlong *local_180;
  undefined8 uStack_178;
  uint *puStack_170;
  undefined1 auStack_168 [16];
  undefined8 local_158;
  longlong *local_150;
  uint uStack_148;
  uint uStack_144;
  uint *puStack_140;
  uint uStack_138;
  int iStack_134;
  uint uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  longlong *local_108;
  uint uStack_100;
  uint uStack_fc;
  uint *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  longlong *local_d8;
  char local_d0;
  char cStack_cf;
  longlong *local_c8;
  uint uStack_c0;
  uint uStack_bc;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined2 local_90;
  int local_88;
  undefined1 local_84 [4];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined8 local_68;
  longlong *local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  plVar17 = (longlong *)0x0;
  local_150 = param_1 + 0x14;
  local_1e0 = 0;
  iVar12 = (int)param_1[0x19];
  puStack_1d8 = (uint *)(param_1 + 0x16);
  uStack_1dc = 1;
  iStack_1cc = 0;
  uStack_1c8 = 0;
  if (iVar12 != 0) {
    puVar15 = (uint *)param_1[0x18];
    if ((uint *)param_1[0x18] == (uint *)0x0) {
      puVar15 = puStack_1d8;
    }
    uVar1 = *puVar15;
    plVar8 = plVar17;
    plVar11 = plVar17;
    while (uVar1 == 0) {
      iVar5 = (int)plVar11;
      uStack_1c8 = (int)plVar8 + 0x20;
      plVar8 = (longlong *)(ulonglong)uStack_1c8;
      local_1e0 = iVar5 + 1;
      plVar11 = (longlong *)(ulonglong)local_1e0;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1425329b8;
      uVar1 = puVar15[(longlong)iVar5 + 1];
    }
    uStack_1dc = -uVar1 & uVar1;
    local_88 = 0x1f;
    if (uStack_1dc != 0) {
      for (; uStack_1dc >> local_88 == 0; local_88 = local_88 + -1) {
      }
    }
    if (uStack_1dc == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - local_88;
    }
    iStack_1cc = (uStack_1c8 - iVar5) + 0x1f;
    if (iVar12 < iStack_1cc) {
LAB_1425329b8:
      iStack_1cc = iVar12;
    }
  }
  local_1d0 = 0xffffffff;
  uStack_b0 = CONCAT44(iStack_1cc,0xffffffff);
  auVar2._8_4_ = uStack_1c8;
  auVar2._0_8_ = uStack_b0;
  auVar2._12_4_ = uStack_1c4;
  local_128._0_4_ = SUB84(local_150,0);
  local_128._4_4_ = (undefined4)((ulonglong)local_150 >> 0x20);
  uStack_148 = local_1e0;
  uStack_144 = uStack_1dc;
  uStack_138 = 0xffffffff;
  iStack_134 = iStack_1cc;
  local_90 = 0;
  uStack_130 = uStack_1c8;
  uStack_12c = uStack_1c4;
  local_a8._8_4_ = (undefined4)local_128;
  local_a8._0_8_ = auVar2._8_8_;
  local_a8._12_4_ = local_128._4_4_;
  iVar12 = iStack_1cc;
  local_res10 = param_2;
  puStack_140 = puStack_1d8;
  local_118 = local_150;
  local_c8 = local_150;
  local_b8 = puStack_1d8;
  local_98 = local_150;
  uStack_c0 = uStack_148;
  uStack_bc = uStack_144;
  local_128 = local_150;
  if (iStack_1cc < (int)param_1[0x19]) {
    do {
      plVar8 = local_c8;
      lVar16 = (longlong)iVar12 * 0x20;
      local_120 = *(undefined4 *)(lVar16 + *local_c8);
      local_11c = *(undefined4 *)(lVar16 + 4 + *local_c8);
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::FindId(param_1,local_res20,&local_120);
      plVar11 = plVar17;
      if (local_res20[0] != -1) {
        plVar11 = (longlong *)((longlong)local_res20[0] * 0x20 + *param_1);
      }
      plVar7 = plVar11 + 1;
      if (plVar11 == (longlong *)0x0) {
        plVar7 = plVar17;
      }
      plVar11 = plVar17;
      if (plVar7 != (longlong *)0x0) {
        plVar11 = (longlong *)*plVar7;
      }
      plVar7 = *(longlong **)(lVar16 + 0x10 + *plVar8);
      plVar8 = *(longlong **)(lVar16 + 8 + *plVar8);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      if ((plVar8 != (longlong *)0x0) && (plVar11 != (longlong *)0x0)) {
        piVar10 = (int *)*plVar8;
        piVar18 = piVar10 + (longlong)(int)plVar8[1] * 4;
        for (; piVar10 != piVar18; piVar10 = piVar10 + 4) {
          local_58 = *piVar10;
          iStack_54 = piVar10[1];
          iStack_50 = piVar10[2];
          iStack_4c = piVar10[3];
          TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(plVar11,(int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34),0);
          if ((int)plVar11[9] != 0) {
            plVar8 = (longlong *)plVar11[8];
            if ((longlong *)plVar11[8] == (longlong *)0x0) {
              plVar8 = plVar11 + 7;
            }
            iVar12 = *(int *)((longlong)plVar8 +
                             ((longlong)(int)plVar11[9] - 1U & (longlong)local_58) * 4);
            puStack_170 = (uint *)CONCAT44(puStack_170._4_4_,iVar12);
            uStack_178 = CONCAT44(iVar12,(uint)uStack_178);
            iVar5 = iVar12;
            if (iVar12 != -1) {
              uStack_178 = CONCAT44(iVar12,(uint)uStack_178);
              do {
                iVar12 = *(int *)(*plVar11 + 0x10 + (longlong)iVar5 * 0x18);
                puStack_170 = (uint *)CONCAT44(puStack_170._4_4_,iVar12);
                if (*(int *)(*plVar11 + (longlong)iVar5 * 0x18) == local_58) break;
                uStack_178 = CONCAT44(iVar12,(uint)uStack_178);
                iVar5 = iVar12;
              } while (iVar12 != -1);
            }
            if (iVar5 != -1) {
              lVar13 = *plVar11;
              plVar8 = (longlong *)CONCAT44(iStack_4c,iStack_50);
              do {
                if (*(longlong **)(lVar13 + 8 + (longlong)iVar5 * 0x18) == plVar8) {
                  TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
                  ::Remove(plVar11);
                  if (plVar8 != (longlong *)0x0) {
                    (**(code **)(*plVar8 + 0x18))(plVar8);
                    (**(code **)*plVar8)(plVar8,1);
                  }
                  break;
                }
                if (iVar12 == -1) break;
                uStack_178 = CONCAT44(iVar12,(uint)uStack_178);
                iVar5 = iVar12;
                do {
                  iVar12 = *(int *)(lVar13 + 0x10 + (longlong)iVar5 * 0x18);
                  puStack_170 = (uint *)CONCAT44(puStack_170._4_4_,iVar12);
                  if (*(int *)(lVar13 + (longlong)iVar5 * 0x18) == local_58) break;
                  uStack_178 = CONCAT44(iVar12,(uint)uStack_178);
                  iVar5 = iVar12;
                } while (iVar12 != -1);
              } while (iVar5 != -1);
            }
          }
        }
        uVar9 = FWeakObjectPtr::Get(*local_c8 + lVar16);
        bVar3 = false;
        DAT_146533334 = DAT_146533334 + 1;
        lVar16 = (longlong)(DAT_146533328 + -1);
        if (-1 < DAT_146533328 + -1) {
          lVar13 = lVar16 << 4;
          bVar3 = false;
          do {
            if ((*(int *)(lVar13 + 8 + DAT_146533320) == 0) ||
               (plVar8 = *(longlong **)(lVar13 + DAT_146533320), plVar8 == (longlong *)0x0)) {
LAB_142532c77:
              bVar3 = true;
            }
            else {
              cVar4 = (**(code **)(*plVar8 + 0x40))(plVar8,uVar9,0);
              if (cVar4 == '\0') goto LAB_142532c77;
            }
            lVar13 = lVar13 + -0x10;
            lVar16 = lVar16 + -1;
          } while (-1 < lVar16);
        }
        iVar12 = DAT_146533328;
        DAT_146533334 = DAT_146533334 + -1;
        if ((bVar3) && (DAT_146533334 < 1)) {
          plVar8 = plVar17;
          plVar11 = plVar17;
          if (0 < DAT_146533328) {
            do {
              if ((*(int *)((longlong)plVar8 + DAT_146533320 + 8) == 0) ||
                 (*(longlong **)((longlong)plVar8 + DAT_146533320) == (longlong *)0x0)) {
LAB_142532ce9:
                TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146533320,plVar11,1,1);
              }
              else {
                cVar4 = (**(code **)(**(longlong **)((longlong)plVar8 + DAT_146533320) + 0x10))();
                if (cVar4 != '\0') goto LAB_142532ce9;
                plVar11 = (longlong *)(ulonglong)((int)plVar11 + 1);
                plVar8 = plVar8 + 2;
              }
            } while ((int)plVar11 < DAT_146533328);
          }
          _DAT_146533330 = DAT_146533328 * 2;
          if (_DAT_146533330 < 3) {
            _DAT_146533330 = 2;
          }
          if ((_DAT_146533330 < iVar12) && (DAT_14653332c != DAT_146533328)) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146533320);
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        lVar16 = *plVar8;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)lVar16 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar10 = (int *)((longlong)plVar7 + 0xc);
          iVar12 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      iVar12 = uStack_b0._4_4_;
    } while (uStack_b0._4_4_ < (int)local_b8[6]);
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34),1);
    }
  }
  lVar16 = local_res10;
  TSet<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FUdpReassembledMessage,1>,0>,FDefaultSetAllocator>
  ::Reset(local_118);
  if (lVar16 == 0) {
    iVar12 = (int)param_1[5];
    puStack_1b8 = (uint *)(param_1 + 2);
    uStack_1bc = 1;
    local_1c0 = 0;
    iStack_1ac = 0;
    uStack_1a8 = 0;
    if (iVar12 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_1b8;
      }
      uVar1 = *puVar15;
      plVar8 = plVar17;
      plVar11 = plVar17;
      while (uVar1 == 0) {
        iVar5 = (int)plVar8;
        uStack_1a8 = (int)plVar11 + 0x20;
        plVar11 = (longlong *)(ulonglong)uStack_1a8;
        local_1c0 = iVar5 + 1;
        plVar8 = (longlong *)(ulonglong)local_1c0;
        if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_142532f44;
        uVar1 = puVar15[(longlong)iVar5 + 1];
      }
      uStack_1bc = -uVar1 & uVar1;
      iVar5 = 0x1f;
      if (uStack_1bc != 0) {
        for (; uStack_1bc >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      if (uStack_1bc == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0x1f - iVar5;
      }
      iStack_1ac = (uStack_1a8 - iVar5) + 0x1f;
      if (iVar12 < iStack_1ac) {
LAB_142532f44:
        iStack_1ac = iVar12;
      }
    }
    local_1b0 = 0xffffffff;
    uStack_f0 = CONCAT44(iStack_1ac,0xffffffff);
    auStack_168._8_4_ = uStack_1a8;
    auStack_168._0_8_ = uStack_f0;
    auStack_168._12_4_ = uStack_1a4;
    uStack_178._0_4_ = local_1c0;
    uStack_178._4_4_ = uStack_1bc;
    local_d0 = '\0';
    cStack_cf = '\0';
    local_158._0_4_ = SUB84(param_1,0);
    local_158._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
    local_e8._8_4_ = (undefined4)local_158;
    local_e8._0_8_ = auStack_168._8_8_;
    local_e8._12_4_ = local_158._4_4_;
    iVar12 = iStack_1ac;
    local_180 = param_1;
    puStack_170 = puStack_1b8;
    local_158 = param_1;
    local_108 = param_1;
    local_f8 = puStack_1b8;
    local_d8 = param_1;
    uStack_100 = (uint)uStack_178;
    uStack_fc = uStack_178._4_4_;
    if (iStack_1ac < (int)param_1[5]) {
      do {
        plVar8 = local_108;
        lVar16 = (longlong)iVar12 * 0x20;
        local_110 = *(undefined4 *)(lVar16 + *local_108);
        local_10c = *(undefined4 *)(lVar16 + 4 + *local_108);
        plVar11 = (longlong *)FWeakObjectPtr::Get(&local_110);
        plVar8 = *(longlong **)(*plVar8 + 8 + lVar16);
        local_60 = plVar11;
        if (plVar11 == (longlong *)0x0) {
          iVar5 = (int)plVar8[5];
          puStack_198 = (uint *)(plVar8 + 2);
          uStack_19c = 1;
          local_1a0 = 0;
          uStack_18c = 0;
          if (iVar5 != 0) {
            puVar15 = (uint *)plVar8[4];
            if ((uint *)plVar8[4] == (uint *)0x0) {
              puVar15 = puStack_198;
            }
            uVar1 = *puVar15;
            plVar11 = plVar17;
            plVar7 = plVar17;
            uVar14 = 0;
            while (uVar1 == 0) {
              iVar6 = (int)plVar11;
              uVar14 = (int)plVar7 + 0x20;
              plVar7 = (longlong *)(ulonglong)uVar14;
              local_1a0 = iVar6 + 1;
              plVar11 = (longlong *)(ulonglong)local_1a0;
              uStack_18c = (ulonglong)uVar14 << 0x20;
              if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6)
              goto LAB_1425330f3;
              uVar1 = puVar15[(longlong)iVar6 + 1];
            }
            uStack_19c = -uVar1 & uVar1;
            iVar6 = 0x1f;
            if (uStack_19c != 0) {
              for (; uStack_19c >> iVar6 == 0; iVar6 = iVar6 + -1) {
              }
            }
            if (uStack_19c == 0) {
              iVar6 = 0x20;
            }
            else {
              iVar6 = 0x1f - iVar6;
            }
            iVar6 = (uVar14 - iVar6) + 0x1f;
            uStack_18c._4_4_ = (uint)((ulonglong)uStack_18c >> 0x20);
            uStack_18c = CONCAT44(uStack_18c._4_4_,iVar6);
            if (iVar5 < iVar6) {
LAB_1425330f3:
              uStack_18c = CONCAT44(uStack_18c._4_4_,iVar5);
            }
          }
          local_190 = 0xffffffff;
          uStack_148 = local_1a0;
          uStack_144 = uStack_19c;
          auStack_168._4_4_ = (int)uStack_18c;
          auStack_168._0_4_ = 0xffffffff;
          auStack_168._8_4_ = uStack_18c._4_4_;
          auStack_168._12_4_ = uStack_184;
          uStack_130 = uStack_18c._4_4_;
          uStack_12c = uStack_184;
          uStack_138 = 0xffffffff;
          iStack_134 = (int)uStack_18c;
          local_180 = plVar8;
          puStack_170 = puStack_198;
          local_150 = plVar8;
          puStack_140 = puStack_198;
          uStack_178._0_4_ = uStack_148;
          uStack_178._4_4_ = uStack_144;
          if ((int)uStack_18c < iVar5) {
            do {
              plVar11 = *(longlong **)(*local_150 + 8 + (longlong)iStack_134 * 0x18);
              (**(code **)(*plVar11 + 0x10))(plVar11);
              (**(code **)*plVar11)(plVar11,1);
              uStack_138 = uStack_138 & ~uStack_144;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_148);
            } while (iStack_134 < (int)puStack_140[6]);
          }
          TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
          ::Reset(plVar8);
        }
        else if (0 < (int)plVar8[1] - *(int *)((longlong)plVar8 + 0x34)) {
          piVar10 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                                     (param_1 + 10,local_7c,plVar11);
          if (*piVar10 == -1) {
            FUN_14253b9d0(param_1,param_3,plVar8,plVar11);
            FUN_14058cbf0(param_1 + 10,local_78,&local_60,0);
          }
        }
        if ((int)plVar8[1] == *(int *)((longlong)plVar8 + 0x34)) {
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::Remove(local_e8._8_8_,iVar12);
          local_d0 = '\x01';
        }
        uStack_f0 = CONCAT44(uStack_f0._4_4_,(uint)uStack_f0 & ~uStack_fc);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
        iVar12 = uStack_f0._4_4_;
      } while (uStack_f0._4_4_ < (int)local_f8[6]);
      if ((local_d0 != '\0') && (cStack_cf != '\0')) {
        TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_d8,(int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34),1);
      }
    }
  }
  else {
    piVar10 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                               (param_1 + 10,local_84,lVar16);
    if (*piVar10 == -1) {
      FWeakObjectPtr::operator=(&local_74,lVar16);
      local_68 = local_74;
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::FindId(param_1,local_1e8,&local_68);
      plVar8 = plVar17;
      if (local_1e8[0] != -1) {
        plVar8 = (longlong *)((longlong)local_1e8[0] * 0x20 + *param_1);
      }
      plVar11 = plVar8 + 1;
      if (plVar8 == (longlong *)0x0) {
        plVar11 = plVar17;
      }
      if (plVar11 != (longlong *)0x0) {
        plVar17 = (longlong *)*plVar11;
      }
      if (plVar17 != (longlong *)0x0) {
        FUN_14253b9d0(param_1,param_3,plVar17,lVar16);
        FUN_14058cbf0(param_1 + 10,local_80,&local_res10,0);
      }
    }
  }
  return;
}



// FUNCTION 142533210 FUN_142533210 body=606 status=ok
// SIG undefined FUN_142533210(void)

void FUN_142533210(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong local_48;
  uint local_40;
  uint local_3c;
  
  uVar7 = 0;
  iVar8 = 0;
  uVar3 = (**(code **)(*param_2 + 0x148))(param_2);
  UWorld::GetPlayerControllerIterator(uVar3,&local_48);
  uVar14 = uVar7;
  while( true ) {
    if (((int)local_40 < 0) || (*(int *)(local_48 + 8) <= (int)local_40)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return;
    }
    plVar4 = (longlong *)FWeakObjectPtr::Get();
    iVar13 = (int)uVar14;
    if (param_2 == plVar4) break;
    uVar14 = (ulonglong)(iVar13 + 1);
    local_40 = local_40 + 1;
  }
  if (-1 < iVar13) {
    iVar5 = *(int *)(param_1 + 0x278) + -1;
    local_48 = 0;
    local_3c = 0;
    uVar14 = uVar7;
    if (-1 < iVar5) {
      plVar4 = (longlong *)(param_1 + 0x270);
      lVar11 = (longlong)iVar5 * 0xc;
      uVar9 = uVar7;
      lVar12 = lVar11;
      do {
        lVar6 = *plVar4 + lVar12;
        if (*(int *)(lVar6 + 8) == iVar13) {
          cVar2 = FWeakObjectPtr::IsValid(lVar6);
          if (cVar2 != '\0') {
            uVar3 = FWeakObjectPtr::Get(lVar6);
            iVar8 = (int)uVar9;
            local_40 = iVar8 + 1;
            if ((int)uVar7 < (int)local_40) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,uVar9);
              uVar7 = (ulonglong)local_3c;
              uVar14 = local_48;
            }
            uVar9 = (ulonglong)local_40;
            *(undefined8 *)(uVar14 + (longlong)iVar8 * 8) = uVar3;
          }
          iVar8 = *(int *)(param_1 + 0x278);
          iVar10 = (iVar8 - iVar5) + -1;
          if (0 < iVar10) {
            iVar10 = 1;
          }
          if (iVar10 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar11 + *plVar4),
                       (void *)(*plVar4 + (longlong)(iVar8 - iVar10) * 0xc),(longlong)iVar10 * 0xc);
            iVar8 = *(int *)(param_1 + 0x278);
          }
          *(int *)(param_1 + 0x278) = iVar8 + -1;
          TArray<FVector,FDefaultAllocator>::ResizeShrink(plVar4);
        }
        iVar8 = (int)uVar9;
        lVar11 = lVar11 + -0xc;
        lVar12 = lVar12 + -0xc;
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    lVar12 = (longlong)(iVar8 + -1);
    if (-1 < iVar8 + -1) {
      do {
        lVar11 = *(longlong *)(uVar14 + lVar12 * 8);
        if (lVar11 == 0) {
LAB_142533435:
          plVar4 = *(longlong **)(uVar14 + lVar12 * 8);
          (**(code **)(*plVar4 + 0x2f8))(plVar4,param_2);
        }
        else {
          lVar6 = FUN_1429d7ab0();
          if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_142533435;
          (**(code **)(*param_2 + 0x778))(param_2,lVar11);
        }
        lVar12 = lVar12 + -1;
      } while (-1 < lVar12);
    }
    if (uVar14 != 0) {
      FMemory::Free(uVar14);
    }
  }
  return;
}



// FUNCTION 142533470 FUN_142533470 body=202 status=ok
// SIG undefined FUN_142533470(void)

void FUN_142533470(undefined8 param_1,longlong *param_2,char *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong local_28 [4];
  
  if (param_2 == (longlong *)0x0) {
    param_2 = (longlong *)UGameplayStatics::GetPlayerController();
  }
  if (param_2 != (longlong *)0x0) {
    local_28[0] = 0;
    if (*param_3 == '\x01') {
      local_28[1] = 0x10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      uVar2 = 0x10;
      pcVar1 = "quit background";
    }
    else {
      local_28[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
      uVar2 = 5;
      pcVar1 = "quit";
    }
    FGenericPlatformString::Convert<char,wchar_t>(local_28[0],uVar2,pcVar1,uVar2,0x3f);
    (**(code **)(*param_2 + 0xd28))(param_2,local_28 + 2,local_28,1);
    if (local_28[2] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142533540 REase body=123 status=ok
// SIG undefined REase(void)

undefined8
UKismetMathLibrary::REase
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
          undefined1 param_5,undefined1 *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  uVar1 = FUN_142520240(param_4,*param_6,param_7,param_8);
  RLerp(param_1,&local_18,&local_28,uVar1,param_5);
  return param_1;
}



// FUNCTION 1425335c0 RLerp body=544 status=ok
// SIG undefined RLerp(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * UKismetMathLibrary::RLerp
                  (float *param_1,float *param_2,float *param_3,float param_4,char param_5)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  float *pfVar3;
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
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [48];
  
  fVar8 = param_2[1];
  fVar10 = param_3[1];
  fVar12 = param_2[2];
  fVar14 = param_3[2];
  if (param_5 == '\0') {
    *param_1 = (*param_3 - *param_2) * param_4 + *param_2;
    param_1[1] = (fVar10 - fVar8) * param_4 + fVar8;
    param_1[2] = (fVar14 - fVar12) * param_4 + fVar12;
  }
  else {
    puVar2 = (undefined4 *)FRotator::Quaternion(param_2,local_38);
    local_48 = *puVar2;
    uStack_44 = puVar2[1];
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    puVar2 = (undefined4 *)FRotator::Quaternion(param_3,local_38);
    local_58 = *puVar2;
    uStack_54 = puVar2[1];
    uStack_50 = puVar2[2];
    uStack_4c = puVar2[3];
    pfVar3 = (float *)FQuat::Slerp_NotNormalized(local_38,&local_48,&local_58,param_4);
    fVar8 = *pfVar3;
    fVar10 = pfVar3[1];
    fVar12 = pfVar3[2];
    fVar14 = pfVar3[3];
    auVar4._0_4_ = fVar8 * fVar8 + fVar12 * fVar12;
    auVar4._4_4_ = fVar10 * fVar10 + fVar14 * fVar14;
    auVar4._8_4_ = fVar12 * fVar12 + fVar8 * fVar8;
    auVar4._12_4_ = fVar14 * fVar14 + fVar10 * fVar10;
    fVar15 = auVar4._4_4_ + auVar4._0_4_;
    fVar16 = auVar4._8_4_ + auVar4._4_4_;
    fVar17 = auVar4._12_4_ + auVar4._8_4_;
    fVar18 = auVar4._0_4_ + auVar4._12_4_;
    auVar5._4_4_ = fVar16;
    auVar5._0_4_ = fVar15;
    auVar5._8_4_ = fVar17;
    auVar5._12_4_ = fVar18;
    auVar5 = rsqrtps(auVar4,auVar5);
    fVar7 = auVar5._0_4_;
    fVar9 = auVar5._4_4_;
    fVar11 = auVar5._8_4_;
    fVar13 = auVar5._12_4_;
    fVar7 = (_DAT_146afc5d0 - fVar7 * fVar7 * _DAT_146afc5d0 * fVar15) * fVar7 + fVar7;
    fVar9 = (fRam0000000146afc5d4 - fVar9 * fVar9 * fRam0000000146afc5d4 * fVar16) * fVar9 + fVar9;
    fVar11 = (fRam0000000146afc5d8 - fVar11 * fVar11 * fRam0000000146afc5d8 * fVar17) * fVar11 +
             fVar11;
    fVar13 = (fRam0000000146afc5dc - fVar13 * fVar13 * fRam0000000146afc5dc * fVar18) * fVar13 +
             fVar13;
    fVar15 = (float)(((uint)(((_DAT_146afc5d0 - fVar7 * fVar7 * _DAT_146afc5d0 * fVar15) * fVar7 +
                             fVar7) * fVar8) ^ _DAT_146afc5c0) & -(uint)(1e-08 <= fVar15) ^
                    _DAT_146afc5c0);
    fVar16 = (float)(((uint)(((fRam0000000146afc5d4 - fVar9 * fVar9 * fRam0000000146afc5d4 * fVar16)
                              * fVar9 + fVar9) * fVar10) ^ uRam0000000146afc5c4) &
                     -(uint)(1e-08 <= fVar16) ^ uRam0000000146afc5c4);
    fVar17 = (float)(((uint)(((fRam0000000146afc5d8 -
                              fVar11 * fVar11 * fRam0000000146afc5d8 * fVar17) * fVar11 + fVar11) *
                            fVar12) ^ uRam0000000146afc5c8) & -(uint)(1e-08 <= fVar17) ^
                    uRam0000000146afc5c8);
    fVar18 = (float)(((uint)(((fRam0000000146afc5dc -
                              fVar13 * fVar13 * fRam0000000146afc5dc * fVar18) * fVar13 + fVar13) *
                            fVar14) ^ uRam0000000146afc5cc) & -(uint)(1e-08 <= fVar18) ^
                    uRam0000000146afc5cc);
    auVar6._0_4_ = fVar15 * fVar15 + fVar17 * fVar17;
    auVar6._4_4_ = fVar16 * fVar16 + fVar18 * fVar18;
    auVar6._8_4_ = fVar17 * fVar17 + fVar15 * fVar15;
    auVar6._12_4_ = fVar18 * fVar18 + fVar16 * fVar16;
    fVar7 = auVar6._4_4_ + auVar6._0_4_;
    fVar9 = auVar6._8_4_ + auVar6._4_4_;
    fVar11 = auVar6._12_4_ + auVar6._8_4_;
    fVar13 = auVar6._0_4_ + auVar6._12_4_;
    auVar1._4_4_ = fVar9;
    auVar1._0_4_ = fVar7;
    auVar1._8_4_ = fVar11;
    auVar1._12_4_ = fVar13;
    auVar5 = rsqrtps(auVar6,auVar1);
    fVar8 = auVar5._0_4_;
    fVar10 = auVar5._4_4_;
    fVar12 = auVar5._8_4_;
    fVar14 = auVar5._12_4_;
    fVar8 = (_DAT_146afc5d0 - fVar8 * fVar8 * _DAT_146afc5d0 * fVar7) * fVar8 + fVar8;
    fVar10 = (fRam0000000146afc5d4 - fVar10 * fVar10 * fRam0000000146afc5d4 * fVar9) * fVar10 +
             fVar10;
    fVar12 = (fRam0000000146afc5d8 - fVar12 * fVar12 * fRam0000000146afc5d8 * fVar11) * fVar12 +
             fVar12;
    fVar14 = (fRam0000000146afc5dc - fVar14 * fVar14 * fRam0000000146afc5dc * fVar13) * fVar14 +
             fVar14;
    local_68 = ((uint)(((_DAT_146afc5d0 - fVar8 * fVar8 * _DAT_146afc5d0 * fVar7) * fVar8 + fVar8) *
                      fVar15) ^ _DAT_146afc5c0) & -(uint)(1e-08 <= fVar7) ^ _DAT_146afc5c0;
    uStack_64 = ((uint)(((fRam0000000146afc5d4 - fVar10 * fVar10 * fRam0000000146afc5d4 * fVar9) *
                         fVar10 + fVar10) * fVar16) ^ uRam0000000146afc5c4) &
                -(uint)(1e-08 <= fVar9) ^ uRam0000000146afc5c4;
    uStack_60 = ((uint)(((fRam0000000146afc5d8 - fVar12 * fVar12 * fRam0000000146afc5d8 * fVar11) *
                         fVar12 + fVar12) * fVar17) ^ uRam0000000146afc5c8) &
                -(uint)(1e-08 <= fVar11) ^ uRam0000000146afc5c8;
    uStack_5c = ((uint)(((fRam0000000146afc5dc - fVar14 * fVar14 * fRam0000000146afc5dc * fVar13) *
                         fVar14 + fVar14) * fVar18) ^ uRam0000000146afc5cc) &
                -(uint)(1e-08 <= fVar13) ^ uRam0000000146afc5cc;
    FQuat::Rotator(&local_68,param_1);
  }
  return param_1;
}



// FUNCTION 1425337e0 RandomBoolFromStream body=69 status=ok
// SIG undefined RandomBoolFromStream(void)

undefined4 UKismetMathLibrary::RandomBoolFromStream(longlong param_1)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  
  uVar1 = *(int *)(param_1 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_1 + 4) = uVar1;
  fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
  iVar3 = (int)((fVar2 - (float)(int)fVar2) * 1.99999);
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == 1);
}



// FUNCTION 142533830 RandomBoolWithWeight body=69 status=ok
// SIG undefined RandomBoolWithWeight(void)

bool UKismetMathLibrary::RandomBoolWithWeight(float param_1)

{
  int iVar1;
  
  if (param_1 <= 0.0) {
    return false;
  }
  iVar1 = rand();
  return (float)iVar1 * 3.051851e-05 <= param_1;
}



// FUNCTION 142533880 RandomBoolWithWeightFromStream body=71 status=ok
// SIG undefined RandomBoolWithWeightFromStream(void)

ulonglong UKismetMathLibrary::RandomBoolWithWeightFromStream(float param_1,longlong param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  ulonglong in_RAX;
  
  if (param_1 <= 0.0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = *(int *)(param_2 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_2 + 4) = uVar1;
  fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
  iVar3 = (int)fVar2;
  return (ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),fVar2 - (float)iVar3 <= param_1);
}



// FUNCTION 1425338d0 RandomFloatFromStream body=51 status=ok
// SIG undefined RandomFloatFromStream(void)

float UKismetMathLibrary::RandomFloatFromStream(longlong param_1)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *(int *)(param_1 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_1 + 4) = uVar1;
  fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
  return fVar2 - (float)(int)fVar2;
}



// FUNCTION 142533910 RandomFloatInRangeFromStream body=68 status=ok
// SIG undefined RandomFloatInRangeFromStream(void)

float UKismetMathLibrary::RandomFloatInRangeFromStream(float param_1,float param_2,longlong param_3)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_3 + 4) = uVar1;
  fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
  return (fVar2 - (float)(int)fVar2) * (param_2 - param_1) + param_1;
}



// FUNCTION 142533960 RandomIntegerFromStream body=81 status=ok
// SIG undefined RandomIntegerFromStream(void)

int UKismetMathLibrary::RandomIntegerFromStream(int param_1,longlong param_2)

{
  uint uVar1;
  float fVar2;
  
  if (0 < param_1) {
    uVar1 = *(int *)(param_2 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_2 + 4) = uVar1;
    fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    return (int)((fVar2 - (float)(int)fVar2) * ((float)param_1 - 1e-05));
  }
  return 0;
}



// FUNCTION 1425339c0 RandomIntegerInRangeFromStream body=91 status=ok
// SIG undefined RandomIntegerInRangeFromStream(void)

int UKismetMathLibrary::RandomIntegerInRangeFromStream(int param_1,int param_2,longlong param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (param_2 - param_1) + 1;
  if (0 < iVar3) {
    uVar1 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_3 + 4) = uVar1;
    fVar2 = (float)(uVar1 & 0x7fffff | 0x3f800000);
    return (int)((fVar2 - (float)(int)fVar2) * ((float)iVar3 - 1e-05)) + param_1;
  }
  return param_1;
}



// FUNCTION 142533a20 RandomRotator body=133 status=ok
// SIG undefined RandomRotator(void)

float * UKismetMathLibrary::RandomRotator(float *param_1,char param_2)

{
  int iVar1;
  
  iVar1 = rand();
  param_1[1] = (float)iVar1 * 0.010986663;
  iVar1 = rand();
  *param_1 = (float)iVar1 * 0.010986663;
  if (param_2 != '\0') {
    iVar1 = rand();
    param_1[2] = (float)iVar1 * 0.010986663;
    return param_1;
  }
  param_1[2] = 0.0;
  return param_1;
}



// FUNCTION 142533ab0 RandomRotatorFromStream body=214 status=ok
// SIG undefined RandomRotatorFromStream(void)

float * UKismetMathLibrary::RandomRotatorFromStream(float *param_1,char param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_3 + 4) * 0xbb38435 + 0x3619636b;
  fVar1 = (float)(uVar3 & 0x7fffff | 0x3f800000);
  uVar3 = uVar3 * 0xbb38435 + 0x3619636b;
  *(uint *)(param_3 + 4) = uVar3;
  fVar2 = (float)(uVar3 & 0x7fffff | 0x3f800000);
  param_1[1] = (fVar1 - (float)(int)fVar1) * 360.0;
  *param_1 = (fVar2 - (float)(int)fVar2) * 360.0;
  if (param_2 != '\0') {
    uVar3 = uVar3 * 0xbb38435 + 0x3619636b;
    *(uint *)(param_3 + 4) = uVar3;
    fVar1 = (float)(uVar3 & 0x7fffff | 0x3f800000);
    param_1[2] = (fVar1 - (float)(int)fVar1) * 360.0;
    return param_1;
  }
  param_1[2] = 0.0;
  return param_1;
}



// FUNCTION 142533b90 RandomSobolCell2D body=340 status=ok
// SIG undefined RandomSobolCell2D(void)

undefined8
UImportanceSamplingLibrary::RandomSobolCell2D
          (undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  float local_res8;
  float fStackX_c;
  
  uVar5 = param_3 - 1;
  if (uVar5 == 0) {
    bVar6 = 0;
  }
  else {
    cVar4 = '\x10';
    if (uVar5 < 0x10000) {
      cVar4 = '\0';
    }
    uVar3 = uVar5 >> 0x10;
    if (uVar5 < 0x10000) {
      uVar3 = uVar5;
    }
    if (0xff < uVar3) {
      uVar3 = uVar3 >> 8;
      cVar4 = cVar4 + '\b';
    }
    cVar2 = cVar4 + '\x04';
    if (uVar3 < 0x10) {
      cVar2 = cVar4;
    }
    uVar5 = uVar3 >> 4;
    if (uVar3 < 0x10) {
      uVar5 = uVar3;
    }
    cVar4 = cVar2 + '\x02';
    if (uVar5 < 4) {
      cVar4 = cVar2;
    }
    uVar3 = uVar5 >> 2;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    cVar2 = cVar4 + '\x01';
    if (uVar3 < 2) {
      cVar2 = cVar4;
    }
    if (uVar3 == 0) {
      cVar2 = '\0';
    }
    bVar6 = cVar2 + 1;
  }
  bVar6 = ~((param_3 != 0) - 1U) & bVar6;
  bVar1 = 0xf;
  if (bVar6 < 0xf) {
    bVar1 = bVar6;
  }
  local_res8 = (float)param_4;
  fStackX_c = (float)((ulonglong)param_4 >> 0x20);
  FSobol::Evaluate(param_1,param_2,bVar1,
                   CONCAT44((int)ROUND(fStackX_c * 2.0 + 0.5) >> 1,
                            (int)ROUND(local_res8 * 2.0 + 0.5) >> 1),
                   CONCAT44((int)ROUND(param_5._4_4_ * 16777216.0 + param_5._4_4_ * 16777216.0 + 0.5
                                      ) >> 1,
                            (int)ROUND((float)param_5 * 16777216.0 + (float)param_5 * 16777216.0 +
                                       0.5) >> 1));
  return param_1;
}



// FUNCTION 142533cf0 RandomSobolCell3D body=336 status=ok
// SIG undefined RandomSobolCell3D(void)

undefined8
UImportanceSamplingLibrary::RandomSobolCell3D
          (undefined8 param_1,undefined4 param_2,int param_3,float *param_4,float *param_5)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  int local_28;
  int iStack_24;
  int local_20;
  int local_18;
  int iStack_14;
  int local_10;
  
  uVar5 = param_3 - 1;
  if (uVar5 == 0) {
    bVar6 = 0;
  }
  else {
    cVar4 = '\x10';
    if (uVar5 < 0x10000) {
      cVar4 = '\0';
    }
    uVar3 = uVar5 >> 0x10;
    if (uVar5 < 0x10000) {
      uVar3 = uVar5;
    }
    if (0xff < uVar3) {
      uVar3 = uVar3 >> 8;
      cVar4 = cVar4 + '\b';
    }
    cVar2 = cVar4 + '\x04';
    if (uVar3 < 0x10) {
      cVar2 = cVar4;
    }
    uVar5 = uVar3 >> 4;
    if (uVar3 < 0x10) {
      uVar5 = uVar3;
    }
    cVar4 = cVar2 + '\x02';
    if (uVar5 < 4) {
      cVar4 = cVar2;
    }
    uVar3 = uVar5 >> 2;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    cVar2 = cVar4 + '\x01';
    if (uVar3 < 2) {
      cVar2 = cVar4;
    }
    if (uVar3 == 0) {
      cVar2 = '\0';
    }
    bVar6 = cVar2 + 1;
  }
  bVar6 = ~((param_3 != 0) - 1U) & bVar6;
  bVar1 = 10;
  if (bVar6 < 10) {
    bVar1 = bVar6;
  }
  local_10 = (int)param_4[2];
  _local_18 = CONCAT44((int)param_4[1],(int)*param_4);
  _local_28 = CONCAT44((int)(param_5[1] * 16777216.0),(int)(*param_5 * 16777216.0));
  local_20 = (int)(param_5[2] * 16777216.0);
  FSobol::Evaluate(param_1,param_2,bVar1,&local_18,&local_28);
  return param_1;
}



// FUNCTION 142533e40 RandomSobolFloat body=38 status=ok
// SIG undefined RandomSobolFloat(void)

void UImportanceSamplingLibrary::RandomSobolFloat(undefined8 param_1,int param_2,float param_3)

{
  int iVar1;
  
  if (param_2 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0xf;
    if (param_2 < 0xf) {
      iVar1 = param_2;
    }
  }
  FUN_141627320(param_1,iVar1,(int)(param_3 * 16777216.0));
  return;
}



// FUNCTION 142533e70 RandomUnitVectorFromStream body=32 status=ok
// SIG undefined RandomUnitVectorFromStream(void)

undefined8 UKismetMathLibrary::RandomUnitVectorFromStream(undefined8 param_1,undefined8 param_2)

{
  FRandomStream::GetUnitVector(param_2,param_1);
  return param_1;
}



// FUNCTION 142533e90 RandomUnitVectorInConeInRadiansFromStream body=1015 status=ok
// SIG undefined RandomUnitVectorInConeInRadiansFromStream(void)

float * UKismetMathLibrary::RandomUnitVectorInConeInRadiansFromStream
                  (float *param_1,float *param_2,float param_3,longlong param_4)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 local_f8;
  float local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [128];
  
  fVar3 = DAT_1468b5d98;
  if (param_3 <= 0.0) {
    fVar7 = param_2[1];
    fVar9 = *param_2;
    fVar1 = param_2[2];
    fVar8 = fVar9 * fVar9 + fVar7 * fVar7 + fVar1 * fVar1;
    if (fVar8 == 1.0) {
      fVar3 = param_2[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      param_1[2] = fVar3;
    }
    else if (1e-08 <= fVar8) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = CONCAT44(0,fVar8);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = CONCAT44(0,fVar8);
      auVar10 = rsqrtss(auVar11,auVar10);
      fVar3 = auVar10._0_4_;
      fVar3 = fVar3 + fVar3 * (0.5 - fVar8 * 0.5 * fVar3 * fVar3);
      fVar3 = fVar3 + fVar3 * (0.5 - fVar8 * 0.5 * fVar3 * fVar3);
      *param_1 = fVar9 * fVar3;
      param_1[1] = fVar7 * fVar3;
      param_1[2] = fVar1 * fVar3;
    }
    else {
      *(ulonglong *)param_1 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      param_1[2] = fVar3;
    }
  }
  else {
    uVar2 = (*(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_4 + 4) = uVar2;
    fVar3 = (float)(uVar2 & 0x7fffff | 0x3f800000);
    fVar3 = fVar3 - (float)(int)fVar3;
    fVar7 = (fVar3 + fVar3) - 1.0;
    fVar3 = -1.0;
    if ((-1.0 <= fVar7) && (fVar3 = fVar7, 1.0 <= fVar7)) {
      fVar3 = 1.0;
    }
    pfVar6 = param_1;
    ::_guard_xfg_dispatch_icall_nop(fVar3);
    if (ABS(param_3) <= 1e-08) {
      AK::MemoryMgr::StartProfileThreadUsage((long)pfVar6);
    }
    uVar4 = FVector::Rotation(param_2,local_d8);
    puVar5 = (undefined8 *)FRotationMatrix::FRotationMatrix(local_88,uVar4);
    local_c8 = *puVar5;
    uStack_c0 = puVar5[1];
    local_b8 = puVar5[2];
    uStack_b0 = puVar5[3];
    local_a8 = puVar5[4];
    uStack_a0 = puVar5[5];
    local_98 = *(undefined4 *)(puVar5 + 6);
    uStack_94 = *(undefined4 *)((longlong)puVar5 + 0x34);
    uStack_90 = *(undefined4 *)(puVar5 + 7);
    uStack_8c = *(undefined4 *)((longlong)puVar5 + 0x3c);
    FMatrix::GetUnitAxis(&local_c8,local_d8,1);
    FMatrix::GetUnitAxis(&local_c8,local_e8,2);
    FVector::RotateAngleAxis(param_2,&local_f8);
    puVar5 = (undefined8 *)FVector::RotateAngleAxis(&local_f8,local_e8);
    local_f8 = *puVar5;
    local_f0 = *(float *)(puVar5 + 1);
    fVar3 = (float)((ulonglong)local_f8 >> 0x20);
    fVar7 = fVar3 * fVar3 + (float)local_f8 * (float)local_f8 + local_f0 * local_f0;
    if (fVar7 != 1.0) {
      if (1e-08 <= fVar7) {
        auVar10 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
        fVar9 = auVar10._0_4_;
        fVar9 = fVar9 + fVar9 * (0.5 - fVar7 * 0.5 * fVar9 * fVar9);
        fVar9 = fVar9 + fVar9 * (0.5 - fVar7 * 0.5 * fVar9 * fVar9);
        local_f8._0_4_ = fVar9 * (float)local_f8;
        local_f0 = fVar9 * local_f0;
        fVar9 = fVar9 * fVar3;
      }
      else {
        local_f0 = DAT_1468b5d98;
        fVar9 = DAT_1468b5d94;
        local_f8._0_4_ = DAT_1468b5d90;
      }
      local_f8 = CONCAT44(fVar9,(float)local_f8);
    }
    *(undefined8 *)param_1 = local_f8;
    param_1[2] = local_f0;
  }
  return param_1;
}



// FUNCTION 142534290 RandomUnitVectorInEllipticalConeInRadians body=23 status=ok
// SIG undefined RandomUnitVectorInEllipticalConeInRadians(void)

undefined8 UKismetMathLibrary::RandomUnitVectorInEllipticalConeInRadians(undefined8 param_1)

{
  FMath::VRandCone();
  return param_1;
}



// FUNCTION 1425342b0 RandomUnitVectorInEllipticalConeInRadiansFromStream body=1115 status=ok
// SIG undefined RandomUnitVectorInEllipticalConeInRadiansFromStream(void)

float * UKismetMathLibrary::RandomUnitVectorInEllipticalConeInRadiansFromStream
                  (float *param_1,float *param_2,float param_3,float param_4,longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 local_118;
  float local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [160];
  float *pfVar6;
  
  fVar3 = DAT_1468b5d98;
  if ((param_4 <= 0.0) || (param_3 <= 0.0)) {
    fVar2 = param_2[1];
    fVar9 = *param_2;
    fVar1 = param_2[2];
    fVar10 = fVar9 * fVar9 + fVar2 * fVar2 + fVar1 * fVar1;
    if (fVar10 == 1.0) {
      fVar3 = param_2[2];
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      param_1[2] = fVar3;
    }
    else if (1e-08 <= fVar10) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar3 = auVar11._0_4_;
      fVar3 = fVar3 + fVar3 * (0.5 - fVar10 * 0.5 * fVar3 * fVar3);
      fVar3 = fVar3 + fVar3 * (0.5 - fVar10 * 0.5 * fVar3 * fVar3);
      *param_1 = fVar9 * fVar3;
      param_1[1] = fVar2 * fVar3;
      param_1[2] = fVar1 * fVar3;
    }
    else {
      *(ulonglong *)param_1 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      param_1[2] = fVar3;
    }
  }
  else {
    uVar7 = *(int *)(param_5 + 4) * 0xbb38435 + 0x3619636b;
    fVar2 = (float)(uVar7 & 0x7fffff | 0x3f800000);
    uVar7 = uVar7 * 0xbb38435 + 0x3619636b;
    *(uint *)(param_5 + 4) = uVar7;
    fVar3 = (float)(uVar7 & 0x7fffff | 0x3f800000);
    fVar3 = fVar3 - (float)(int)fVar3;
    fVar9 = (fVar3 + fVar3) - 1.0;
    fVar3 = -1.0;
    if ((-1.0 <= fVar9) && (fVar3 = fVar9, 1.0 <= fVar9)) {
      fVar3 = 1.0;
    }
    pfVar6 = param_1;
    fVar9 = ::_guard_xfg_dispatch_icall_nop(fVar3);
    lVar5 = (long)pfVar6;
    uVar8 = __libm_sse2_sincosf_();
    param_3 = (float)uVar8 / param_3;
    param_4 = (float)((ulonglong)uVar8 >> 0x20) / param_4;
    fVar3 = SQRT(1.0 / (param_3 * param_3 + param_4 * param_4));
    if (1e-08 < fVar3) {
      fVar3 = (float)(int)(fVar9 / fVar3) * fVar3;
      if (ABS(fVar9) < ABS(fVar3)) {
        fVar3 = fVar9;
      }
      fVar9 = fVar9 - fVar3;
    }
    else {
      AK::MemoryMgr::StartProfileThreadUsage(lVar5);
      fVar9 = 0.0;
    }
    uVar8 = FVector::Rotation(param_2,local_f8);
    puVar4 = (undefined8 *)FRotationMatrix::FRotationMatrix(local_a8,uVar8);
    local_e8 = *puVar4;
    uStack_e0 = puVar4[1];
    local_d8 = puVar4[2];
    uStack_d0 = puVar4[3];
    local_c8 = puVar4[4];
    uStack_c0 = puVar4[5];
    local_b8 = *(undefined4 *)(puVar4 + 6);
    uStack_b4 = *(undefined4 *)((longlong)puVar4 + 0x34);
    uStack_b0 = *(undefined4 *)(puVar4 + 7);
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 0x3c);
    FMatrix::GetUnitAxis(&local_e8,local_f8,1);
    FMatrix::GetUnitAxis(&local_e8,local_108,2);
    FVector::RotateAngleAxis(param_2,&local_118,fVar9 * 57.295776,local_108);
    puVar4 = (undefined8 *)
             FVector::RotateAngleAxis
                       (&local_118,local_108,(fVar2 - (float)(int)fVar2) * 6.2831855 * 57.295776,
                        local_f8);
    local_118 = *puVar4;
    local_110 = *(float *)(puVar4 + 1);
    fVar3 = (float)((ulonglong)local_118 >> 0x20);
    fVar2 = fVar3 * fVar3 + (float)local_118 * (float)local_118 + local_110 * local_110;
    if (fVar2 != 1.0) {
      if (1e-08 <= fVar2) {
        auVar11 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
        fVar9 = auVar11._0_4_;
        fVar9 = fVar9 + fVar9 * (0.5 - fVar2 * 0.5 * fVar9 * fVar9);
        fVar9 = fVar9 + fVar9 * (0.5 - fVar2 * 0.5 * fVar9 * fVar9);
        local_118._0_4_ = fVar9 * (float)local_118;
        local_110 = fVar9 * local_110;
        fVar9 = fVar9 * fVar3;
      }
      else {
        local_110 = DAT_1468b5d98;
        fVar9 = DAT_1468b5d94;
        local_118._0_4_ = DAT_1468b5d90;
      }
      local_118 = CONCAT44(fVar9,(float)local_118);
    }
    *(undefined8 *)param_1 = local_118;
    param_1[2] = local_110;
  }
  return param_1;
}



// FUNCTION 142534710 FUN_142534710 body=575 status=ok
// SIG undefined FUN_142534710(void)

ulonglong FUN_142534710(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                       uint param_5,uint param_6,int param_7,int param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  
  if ((param_4 == 0) || (lVar4 = FHdrImageWrapper::GetHeight(param_4), lVar4 == 0)) {
    return 0;
  }
  iVar7 = *(int *)(param_4 + 0xc0);
  uVar9 = 0;
  uVar6 = uVar9;
  if ((-1 < (int)param_5) && (uVar6 = (ulonglong)(iVar7 - 1U), (int)param_5 < (int)(iVar7 - 1U))) {
    uVar6 = (ulonglong)param_5;
  }
  iVar2 = *(int *)(param_4 + 0xc4);
  uVar8 = uVar9;
  if ((-1 < (int)param_6) && (uVar8 = (ulonglong)(iVar2 - 1U), (int)param_6 < (int)(iVar2 - 1U))) {
    uVar8 = (ulonglong)param_6;
  }
  iVar10 = 1;
  if ((0 < param_7) && (iVar10 = iVar7, param_7 < iVar7)) {
    iVar10 = param_7;
  }
  iVar11 = 1;
  if ((0 < param_8) && (iVar11 = iVar2, param_8 < iVar2)) {
    iVar11 = param_8;
  }
  local_78 = (int)uVar6;
  uStack_5c = 0x467a0000;
  iVar5 = (local_78 - iVar7) + iVar10;
  iVar7 = 0;
  if (-1 < iVar5) {
    iVar7 = iVar5;
  }
  iStack_74 = (int)uVar8;
  local_68 = 6;
  uStack_60 = CONCAT31(uStack_60._1_3_,1);
  iVar5 = (iStack_74 - iVar2) + iVar11;
  local_58 = (local_58 >> 8 & 0xff) << 8;
  iVar2 = 0;
  if (-1 < iVar5) {
    iVar2 = iVar5;
  }
  iStack_70 = local_78 + (iVar10 - iVar7);
  iStack_6c = iStack_74 + (iVar11 - iVar2);
  lVar4 = FHdrImageWrapper::GetHeight(param_4);
  uVar6 = lVar4 + 0x68;
  if (lVar4 == 0) {
    uVar6 = uVar9;
  }
  if (*(byte *)(param_4 + 0xe2) == 0) {
    uVar3 = FUN_14046e310(*(undefined1 *)(param_4 + 0xe1));
    uVar8 = (ulonglong)uVar3;
  }
  else {
    uVar8 = (ulonglong)*(byte *)(param_4 + 0xe2);
  }
  iVar7 = (iVar10 - iVar7) * (iVar11 - iVar2);
  if ((int)uVar8 == 2) {
    iVar2 = *(int *)(param_1 + 1);
    if (iVar2 < iVar7) {
      *(int *)(param_1 + 1) = iVar7;
      if (*(int *)((longlong)param_1 + 0xc) < iVar7) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
      }
    }
    else if ((iVar7 < iVar2) && (iVar7 != iVar2)) {
      *(int *)(param_1 + 1) = iVar7;
      TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1);
    }
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    local_38 = local_58;
    cVar1 = FRenderTarget::ReadPixelsPtr(uVar6,*param_1,&local_48,&local_78);
    uVar9 = uVar8;
    if (cVar1 == '\0') {
      uVar9 = 0;
    }
  }
  else if ((int)uVar8 == 10) {
    iVar2 = *(int *)(param_2 + 1);
    if (iVar2 < iVar7) {
      *(int *)(param_2 + 1) = iVar7;
      if (*(int *)((longlong)param_2 + 0xc) < iVar7) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
      }
    }
    else if ((iVar7 < iVar2) && (iVar7 != iVar2)) {
      *(int *)(param_2 + 1) = iVar7;
      TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_2);
    }
    local_48 = (undefined4)local_68;
    uStack_44 = local_68._4_4_;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    local_38 = local_58;
    cVar1 = FRenderTarget::ReadLinearColorPixelsPtr(uVar6,*param_2,&local_48,&local_78);
    if (cVar1 != '\0') {
      return uVar8;
    }
  }
  return uVar9;
}



// FUNCTION 142534950 ReadRenderTargetPixel body=220 status=ok
// SIG undefined ReadRenderTargetPixel(void)

undefined4 *
UKismetRenderingLibrary::ReadRenderTargetPixel
          (undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_28 = (undefined4 *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  iVar3 = FUN_142534710(&local_28,&local_18,param_2,param_3,param_4,param_5,1,1);
  lVar2 = local_18;
  puVar1 = local_28;
  if (iVar3 == 2) {
    *param_1 = *local_28;
    if (local_18 != 0) {
      FMemory::Free();
    }
    FMemory::Free(puVar1);
  }
  else {
    if (iVar3 == 10) {
      FLinearColor::ToFColor(local_18,param_1,1);
    }
    else {
      *param_1 = DAT_1464aa738;
    }
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
    if (local_28 != (undefined4 *)0x0) {
      FMemory::Free();
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142534a30 ReadRenderTargetRawPixel body=250 status=ok
// SIG undefined ReadRenderTargetRawPixel(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * UKismetRenderingLibrary::ReadRenderTargetRawPixel
                  (float *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  int iVar6;
  byte *local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_28 = (byte *)0x0;
  local_20 = 0;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  iVar6 = FUN_142534710(&local_28,&local_18,param_2,param_3,param_4,param_5,1,1);
  pbVar5 = local_28;
  uVar4 = uRam00000001464aa6f8;
  if (iVar6 == 2) {
    bVar1 = local_28[1];
    bVar2 = *local_28;
    *param_1 = (float)local_28[2];
    bVar3 = local_28[3];
    param_1[1] = (float)bVar1;
    param_1[2] = (float)bVar2;
    param_1[3] = (float)bVar3;
    if (local_18 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    FMemory::Free(pbVar5);
    return param_1;
  }
  if (iVar6 == 10) {
    uVar4 = local_18[1];
    *(undefined8 *)param_1 = *local_18;
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  else {
    *(undefined8 *)param_1 = _DAT_1464aa6f0;
    *(undefined8 *)(param_1 + 2) = uVar4;
    if (local_18 == (undefined8 *)0x0) goto LAB_142534aaa;
  }
  FMemory::Free();
LAB_142534aaa:
  if (local_28 == (byte *)0x0) {
    return param_1;
  }
  FMemory::Free();
  return param_1;
}



// FUNCTION 142534b30 ReadRenderTargetRawUV body=358 status=ok
// SIG undefined ReadRenderTargetRawUV(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * UKismetRenderingLibrary::ReadRenderTargetRawUV
                  (float *param_1,undefined8 param_2,longlong param_3,float param_4,float param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte *pbVar5;
  int iVar6;
  float fVar7;
  byte *local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  uVar4 = uRam00000001464aa6f8;
  if (param_3 == 0) {
    *(undefined8 *)param_1 = _DAT_1464aa6f0;
    *(undefined8 *)(param_1 + 2) = uVar4;
    return param_1;
  }
  if (0.0 <= param_4) {
    if (1.0 <= param_4) {
      param_4 = 1.0;
    }
  }
  else {
    param_4 = 0.0;
  }
  fVar7 = 0.0;
  if ((0.0 <= param_5) && (fVar7 = param_5, 1.0 <= param_5)) {
    fVar7 = 1.0;
  }
  local_28 = (byte *)0x0;
  local_20 = 0;
  local_18 = (undefined8 *)0x0;
  local_10 = 0;
  iVar6 = FUN_142534710(&local_28,&local_18,param_2,param_3,
                        (int)((float)*(int *)(param_3 + 0xc0) * param_4),
                        (int)((float)*(int *)(param_3 + 0xc4) * fVar7),1,1);
  pbVar5 = local_28;
  uVar4 = uRam00000001464aa6f8;
  if (iVar6 == 2) {
    bVar1 = local_28[1];
    bVar2 = *local_28;
    *param_1 = (float)local_28[2];
    bVar3 = local_28[3];
    param_1[1] = (float)bVar1;
    param_1[2] = (float)bVar2;
    param_1[3] = (float)bVar3;
    if (local_18 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    FMemory::Free(pbVar5);
    return param_1;
  }
  if (iVar6 == 10) {
    uVar4 = local_18[1];
    *(undefined8 *)param_1 = *local_18;
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  else {
    *(undefined8 *)param_1 = _DAT_1464aa6f0;
    *(undefined8 *)(param_1 + 2) = uVar4;
    if (local_18 == (undefined8 *)0x0) goto LAB_142534c16;
  }
  FMemory::Free();
LAB_142534c16:
  if (local_28 == (byte *)0x0) {
    return param_1;
  }
  FMemory::Free();
  return param_1;
}



// FUNCTION 142534ca0 ReadRenderTargetUV body=327 status=ok
// SIG undefined ReadRenderTargetUV(void)

undefined4 *
UKismetRenderingLibrary::ReadRenderTargetUV
          (undefined4 *param_1,undefined8 param_2,longlong param_3,float param_4,float param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  undefined4 *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (param_3 == 0) {
    *param_1 = DAT_1464aa738;
    return param_1;
  }
  if (0.0 <= param_4) {
    if (1.0 <= param_4) {
      param_4 = 1.0;
    }
  }
  else {
    param_4 = 0.0;
  }
  fVar4 = 0.0;
  if ((0.0 <= param_5) && (fVar4 = param_5, 1.0 <= param_5)) {
    fVar4 = 1.0;
  }
  local_28 = (undefined4 *)0x0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  iVar3 = FUN_142534710(&local_28,&local_18,param_2,param_3,
                        (int)((float)*(int *)(param_3 + 0xc0) * param_4),
                        (int)((float)*(int *)(param_3 + 0xc4) * fVar4),1,1);
  lVar2 = local_18;
  puVar1 = local_28;
  if (iVar3 == 2) {
    *param_1 = *local_28;
    if (local_18 != 0) {
      FMemory::Free();
    }
    FMemory::Free(puVar1);
  }
  else {
    if (iVar3 == 10) {
      FLinearColor::ToFColor(local_18,param_1,1);
    }
    else {
      *param_1 = DAT_1464aa738;
    }
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
    if (local_28 != (undefined4 *)0x0) {
      FMemory::Free();
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142534df0 FUN_142534df0 body=114 status=ok
// SIG undefined FUN_142534df0(void)

void FUN_142534df0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FWeakObjectPtr::operator=(&local_18);
  iVar2 = *(int *)(param_1 + 0x278);
  *(int *)(param_1 + 0x278) = iVar2 + 1;
  local_10 = param_3;
  if (*(int *)(param_1 + 0x27c) < iVar2 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_1 + 0x270,iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x270) + (longlong)iVar2 * 0xc);
  *puVar1 = local_18;
  puVar1[1] = local_14;
  puVar1[2] = local_10;
  return;
}



// FUNCTION 142534e70 RegisterWithGameInstance body=99 status=ok
// SIG undefined RegisterWithGameInstance(void)

void UBlueprintAsyncActionBase::RegisterWithGameInstance(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  if (param_2 != (longlong *)0x0) {
    plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x28);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x358))(plVar1,param_1);
    }
    (**(code **)(*param_2 + 0x350))(param_2,param_1);
    FWeakObjectPtr::operator=(param_1 + 0x28,param_2);
  }
  return;
}



// FUNCTION 142534ee0 FUN_142534ee0 body=68 status=ok
// SIG undefined FUN_142534ee0(void)

void FUN_142534ee0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_2,1);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 400) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000142534f17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x280))(param_1);
    return;
  }
  return;
}



// FUNCTION 142534f30 FUN_142534f30 body=10 status=ok
// SIG undefined FUN_142534f30(void)

void FUN_142534f30(longlong param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    UTexture2D::GetPrivateStaticClass();
    FUN_141ee4fb0(*(undefined8 *)(param_1 + 0x60));
    puVar1 = *(undefined8 **)(param_1 + 0x60);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  return;
}



// FUNCTION 142534f40 FUN_142534f40 body=95 status=ok
// SIG undefined FUN_142534f40(void)

void FUN_142534f40(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x148) != 0)) {
    FUN_1427142f0(*(longlong *)(param_1 + 0x148),*(undefined8 *)(lVar1 + 0x1b8));
    lVar1 = *(longlong *)(param_1 + 0xc0);
  }
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x158) != 0)) {
    FUN_1427143c0(*(longlong *)(param_1 + 0x158),*(undefined8 *)(lVar1 + 0x1b8));
    return;
  }
  return;
}



// FUNCTION 142534fa0 FUN_142534fa0 body=751 status=ok
// SIG undefined FUN_142534fa0(void)

void FUN_142534fa0(longlong *param_1,undefined4 *param_2)

{
  longlong **pplVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  uint *puVar17;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20;
  undefined4 local_res24;
  longlong *local_c8;
  longlong *local_c0;
  uint local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  int iStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  undefined8 uStack_88;
  uint *local_80;
  uint uStack_78;
  int iStack_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined4 uStack_48;
  int iStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  
  local_res20 = *param_2;
  local_res24 = param_2[1];
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId(param_1,local_res8,&local_res20);
  plVar16 = (longlong *)0x0;
  plVar14 = plVar16;
  if (local_res8[0] != -1) {
    plVar14 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
  }
  plVar11 = plVar14 + 1;
  if (plVar14 == (longlong *)0x0) {
    plVar11 = plVar16;
  }
  plVar14 = plVar16;
  if (plVar11 != (longlong *)0x0) {
    plVar14 = (longlong *)*plVar11;
  }
  if (plVar14 != (longlong *)0x0) {
    local_98 = *param_2;
    local_94 = param_2[1];
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x14,local_res10,&local_98);
    if ((local_res10[0] == -1) ||
       (lVar15 = (longlong)local_res10[0] * 0x20 + param_1[0x14], lVar15 == 0)) {
      local_68 = param_2;
      FUN_1425109b0(param_1 + 0x14,local_res18,&local_68,0);
      lVar15 = (longlong)local_res18[0] * 0x20 + param_1[0x14];
    }
    pplVar1 = (longlong **)(lVar15 + 8);
    if (*(longlong *)(lVar15 + 8) == 0) {
      plVar12 = (longlong *)operator_new(0x10);
      plVar11 = plVar16;
      if (plVar12 != (longlong *)0x0) {
        *plVar12 = 0;
        plVar12[1] = 0;
        plVar11 = plVar12;
      }
      plVar13 = (longlong *)operator_new(0x18);
      plVar12 = plVar16;
      if (plVar13 != (longlong *)0x0) {
        *(undefined4 *)(plVar13 + 1) = 1;
        *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
        *plVar13 = (longlong)&PTR_DestroyObject_14413b698;
        plVar13[2] = (longlong)plVar11;
        plVar12 = plVar13;
      }
      local_c8 = plVar11;
      local_c0 = plVar12;
      SharedPointerInternals::EnableSharedFromThis(&local_c8,plVar11,plVar11);
      if (pplVar1 != &local_c8) {
        *pplVar1 = plVar11;
        local_c8 = (longlong *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar15 + 0x10,&local_c0);
        plVar12 = local_c0;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar12 + 1;
        lVar15 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar15 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
    }
    iVar5 = (int)plVar14[5];
    puStack_b0 = (uint *)(plVar14 + 2);
    local_b8 = 0;
    uStack_b4 = 1;
    iStack_a4 = 0;
    uStack_a0 = 0;
    if (iVar5 != 0) {
      puVar17 = (uint *)plVar14[4];
      if ((uint *)plVar14[4] == (uint *)0x0) {
        puVar17 = puStack_b0;
      }
      uVar6 = *puVar17;
      plVar11 = plVar16;
      while (uVar6 == 0) {
        iVar10 = (int)plVar11;
        uStack_a0 = (int)plVar16 + 0x20;
        plVar16 = (longlong *)(ulonglong)uStack_a0;
        local_b8 = iVar10 + 1;
        plVar11 = (longlong *)(ulonglong)local_b8;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) goto LAB_1425351db;
        uVar6 = puVar17[(longlong)iVar10 + 1];
      }
      uStack_b4 = -uVar6 & uVar6;
      iVar10 = 0x1f;
      if (uStack_b4 != 0) {
        for (; uStack_b4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (uStack_b4 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      iStack_a4 = (uStack_a0 - iVar10) + 0x1f;
      if (iVar5 < iStack_a4) {
LAB_1425351db:
        iStack_a4 = iVar5;
      }
    }
    local_a8 = 0xffffffff;
    uStack_88 = CONCAT44(uStack_b4,local_b8);
    uStack_48 = 0xffffffff;
    iStack_44 = iStack_a4;
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    uStack_78 = 0xffffffff;
    iStack_74 = iStack_a4;
    local_70 = uStack_a0;
    uStack_6c = uStack_9c;
    local_90 = plVar14;
    local_80 = puStack_b0;
    local_60 = plVar14;
    uStack_58 = uStack_88;
    puStack_50 = puStack_b0;
    if (iStack_a4 < iVar5) {
      do {
        iVar10 = iStack_74;
        plVar16 = *pplVar1;
        iVar5 = (int)plVar16[1];
        lVar15 = *local_90;
        *(int *)(plVar16 + 1) = iVar5 + 1;
        if (*(int *)((longlong)plVar16 + 0xc) < iVar5 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar5);
        }
        puVar3 = (undefined4 *)(lVar15 + (longlong)iVar10 * 0x18);
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        puVar4 = (undefined4 *)(*plVar16 + (longlong)iVar5 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar7;
        puVar4[2] = uVar8;
        puVar4[3] = uVar9;
        uStack_78 = uStack_78 & ~uStack_88._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_88);
      } while (iStack_74 < (int)local_80[6]);
    }
  }
  return;
}



// FUNCTION 142535290 FUN_142535290 body=271 status=ok
// SIG undefined FUN_142535290(void)

void FUN_142535290(longlong param_1,longlong param_2)

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
  if (0 < *(int *)(param_1 + 0x240)) {
    lVar9 = 0;
    plVar1 = (longlong *)(param_1 + 0x238);
    do {
      lVar2 = *(longlong *)(lVar9 + *plVar1);
      if (lVar2 != 0) {
        if (param_2 != 0) {
          lVar5 = UAssetUserData::GetPrivateStaticClass();
          lVar8 = param_2;
          do {
            lVar6 = param_2;
            if (lVar8 == lVar5) goto LAB_142535300;
            lVar8 = *(longlong *)(lVar8 + 0x30);
          } while (lVar8 != 0);
        }
        lVar6 = 0;
LAB_142535300:
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
          iVar7 = *(int *)(param_1 + 0x240);
          iVar4 = (iVar7 - iVar10) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar10 * 8),
                       (void *)(*plVar1 + (longlong)(iVar10 + 1) * 8),(longlong)iVar4 << 3);
            iVar7 = *(int *)(param_1 + 0x240);
          }
          *(int *)(param_1 + 0x240) = iVar7 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
          return;
        }
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar10 < *(int *)(param_1 + 0x240));
  }
  return;
}



// FUNCTION 1425353a0 RenderTargetCreateStaticTexture2DEditorOnly body=265 status=ok
// SIG undefined RenderTargetCreateStaticTexture2DEditorOnly(void)

undefined8
UKismetRenderingLibrary::RenderTargetCreateStaticTexture2DEditorOnly
          (undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30 [40];
  
  FName::FName(local_res10,"Blueprint",1);
  uVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,
                     L"RenderTargetCreateStaticTexture2DEditorOnly: Can\'t create Texture2D at run time. "
                     ,L"KismetRenderingLibrary",L"Texture2D\'s cannot be created at runtime.");
  uVar6 = FUN_14161fb50(local_30,local_res10);
  FMessageLog::Error(uVar6,local_58,uVar5);
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  FMessageLog::~FMessageLog(local_30);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
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
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return 0;
}



// FUNCTION 1425354b0 Replace body=74 status=ok
// SIG undefined Replace(void)

undefined8
UKismetStringLibrary::Replace
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
          undefined4 param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = &DAT_143f3eda8;
  if (*(int *)(param_4 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_4;
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar1 = (undefined2 *)*param_3;
  }
  FString::Replace(param_2,param_1,puVar1,puVar2,param_5);
  return param_1;
}



// FUNCTION 142535500 ReplaceInline body=39 status=ok
// SIG undefined ReplaceInline(void)

void UKismetStringLibrary::ReplaceInline(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = &DAT_143f3eda8;
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  if (*(int *)(param_2 + 1) != 0) {
    puVar1 = (undefined2 *)*param_2;
  }
  FString::ReplaceInline(param_1,puVar1,puVar2);
  return;
}



// FUNCTION 142535530 ReportError_DaysInMonth body=21 status=ok
// SIG undefined ReportError_DaysInMonth(void)

void UKismetMathLibrary::ReportError_DaysInMonth(void)

{
  FUN_141790820(L"Invalid month (must be between 1 and 12): DaysInMonth",3,DAT_146afc618);
  return;
}



// FUNCTION 142535550 ReportError_Divide_ByteByte body=21 status=ok
// SIG undefined ReportError_Divide_ByteByte(void)

void UKismetMathLibrary::ReportError_Divide_ByteByte(void)

{
  FUN_141790820(L"Divide by zero: Divide_ByteByte",3,DAT_146afc600);
  return;
}



// FUNCTION 142535570 ReportError_Divide_IntInt body=21 status=ok
// SIG undefined ReportError_Divide_IntInt(void)

void UKismetMathLibrary::ReportError_Divide_IntInt(void)

{
  FUN_141790820(L"Divide by zero: Divide_IntInt",3,DAT_146afc600);
  return;
}



// FUNCTION 142535590 ReportError_Divide_Vector2DFloat body=21 status=ok
// SIG undefined ReportError_Divide_Vector2DFloat(void)

void UKismetMathLibrary::ReportError_Divide_Vector2DFloat(void)

{
  FUN_141790820(L"Divide by zero: Divide_Vector2DFloat",3,DAT_146afc600);
  return;
}



// FUNCTION 1425355b0 ReportError_Divide_Vector2DVector2D body=21 status=ok
// SIG undefined ReportError_Divide_Vector2DVector2D(void)

void UKismetMathLibrary::ReportError_Divide_Vector2DVector2D(void)

{
  FUN_141790820(L"Divide by zero: Divide_Vector2DVector2D",3,DAT_146afc600);
  return;
}



// FUNCTION 1425355d0 ReportError_Divide_VectorFloat body=21 status=ok
// SIG undefined ReportError_Divide_VectorFloat(void)

void UKismetMathLibrary::ReportError_Divide_VectorFloat(void)

{
  FUN_141790820(L"Divide by zero: Divide_VectorFloat",3,DAT_146afc600);
  return;
}



// FUNCTION 1425355f0 ReportError_Divide_VectorInt body=21 status=ok
// SIG undefined ReportError_Divide_VectorInt(void)

void UKismetMathLibrary::ReportError_Divide_VectorInt(void)

{
  FUN_141790820(L"Divide by zero: Divide_VectorInt",3,DAT_146afc600);
  return;
}



// FUNCTION 142535610 ReportError_Divide_VectorVector body=21 status=ok
// SIG undefined ReportError_Divide_VectorVector(void)

void UKismetMathLibrary::ReportError_Divide_VectorVector(void)

{
  FUN_141790820(L"Divide by zero: Divide_VectorVector",3,DAT_146afc600);
  return;
}



// FUNCTION 142535630 ReportError_Percent_ByteByte body=21 status=ok
// SIG undefined ReportError_Percent_ByteByte(void)

void UKismetMathLibrary::ReportError_Percent_ByteByte(void)

{
  FUN_141790820(L"Modulo by zero",3,DAT_146afc600);
  return;
}



// FUNCTION 142535650 ReportError_Percent_ByteByte body=21 status=ok
// SIG undefined ReportError_Percent_ByteByte(void)

void UKismetMathLibrary::ReportError_Percent_ByteByte(void)

{
  FUN_141790820(L"Modulo by zero",3,DAT_146afc600);
  return;
}



// FUNCTION 142535670 ReportError_ProjectVectorOnToVector body=21 status=ok
// SIG undefined ReportError_ProjectVectorOnToVector(void)

void UKismetMathLibrary::ReportError_ProjectVectorOnToVector(void)

{
  FUN_141790820(L"Divide by zero: ProjectVectorOnToVector with zero Target vector",3,DAT_146afc610);
  return;
}



// FUNCTION 142535690 ReportError_Sqrt body=21 status=ok
// SIG undefined ReportError_Sqrt(void)

void UKismetMathLibrary::ReportError_Sqrt(void)

{
  FUN_141790820(L"Attempt to take Sqrt() of negative number - returning 0.",3,DAT_146afc608);
  return;
}



// FUNCTION 1425356b0 ResetFloatSpringState body=6 status=ok
// SIG undefined ResetFloatSpringState(void)

void UKismetMathLibrary::ResetFloatSpringState(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 1425356c0 ResetRandomStream body=6 status=ok
// SIG undefined ResetRandomStream(void)

void UKismetMathLibrary::ResetRandomStream(undefined4 *param_1)

{
  param_1[1] = *param_1;
  return;
}



// FUNCTION 1425356d0 ResetVectorSpringState body=35 status=ok
// SIG undefined ResetVectorSpringState(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetMathLibrary::ResetVectorSpringState(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined8 *)((longlong)param_1 + 0xc) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5d98;
  *param_1 = *(undefined8 *)((longlong)param_1 + 0xc);
  *(undefined4 *)(param_1 + 1) = uVar1;
  return;
}



// FUNCTION 142535700 RetriggerableDelay body=227 status=ok
// SIG undefined RetriggerableDelay(void)

void UKismetSystemLibrary::RetriggerableDelay
               (undefined8 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 400) == 0) {
      lVar2 = lVar2 + 0x400;
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 400) + 0x98);
    }
    lVar3 = FLatentActionManager::FindExistingAction<FDelayAction>
                      (lVar2,*(undefined8 *)(param_3 + 4),param_3[1]);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)operator_new(0x28);
      if (puVar4 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        uVar1 = *(undefined8 *)(param_3 + 4);
        puVar4[2] = *(undefined8 *)(param_3 + 2);
        *(undefined4 *)(puVar4 + 3) = *param_3;
        *(undefined4 *)(puVar4 + 1) = param_2;
        *puVar4 = &PTR_FUN_1450e87d0;
        FWeakObjectPtr::operator=((longlong)puVar4 + 0x1c,uVar1);
      }
      FUN_142514cf0(lVar2,*(undefined8 *)(param_3 + 4),param_3[1],puVar4);
      return;
    }
    *(undefined4 *)(lVar3 + 8) = param_2;
  }
  return;
}



// FUNCTION 1425357f0 Reverse body=31 status=ok
// SIG undefined Reverse(void)

undefined8 UKismetStringLibrary::Reverse(undefined8 param_1)

{
  FString::FString();
  FString::ReverseString(param_1);
  return param_1;
}



// FUNCTION 142535810 Right body=174 status=ok
// SIG undefined Right(void)

undefined8 * UKismetStringLibrary::Right(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  
  iVar4 = *(int *)(param_2 + 1);
  lVar5 = -1;
  if (iVar4 == 0) {
    puVar6 = &DAT_143f3eda8;
    iVar2 = -1;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
    iVar2 = iVar4 + -1;
  }
  iVar3 = 0;
  if (iVar4 == 0) {
    iVar2 = iVar3;
  }
  if ((-1 < param_3) && (iVar3 = iVar2, param_3 < iVar2)) {
    iVar3 = param_3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  psVar1 = puVar6 + ((longlong)iVar2 - (longlong)iVar3);
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    do {
      lVar5 = lVar5 + 1;
    } while (psVar1[lVar5] != 0);
    iVar4 = (int)lVar5 + 1;
    *(int *)(param_1 + 1) = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1);
    }
    FGenericPlatformString::Memcpy(*param_1,psVar1,(longlong)iVar4 * 2);
  }
  return param_1;
}



// FUNCTION 1425358c0 RightChop body=182 status=ok
// SIG undefined RightChop(void)

undefined8 * UKismetStringLibrary::RightChop(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined2 *puVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_2 + 1);
  lVar4 = -1;
  if (iVar3 == 0) {
    puVar5 = &DAT_143f3eda8;
    iVar2 = -1;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
    iVar2 = iVar3 + -1;
  }
  iVar6 = 0;
  if (iVar3 == 0) {
    iVar2 = iVar6;
  }
  param_3 = iVar2 - param_3;
  if ((-1 < param_3) && (iVar6 = iVar2, param_3 < iVar2)) {
    iVar6 = param_3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  psVar1 = puVar5 + ((longlong)iVar2 - (longlong)iVar6);
  if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
    do {
      lVar4 = lVar4 + 1;
    } while (psVar1[lVar4] != 0);
    iVar3 = (int)lVar4 + 1;
    *(int *)(param_1 + 1) = iVar3;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,psVar1,(longlong)iVar3 * 2);
  }
  return param_1;
}



// FUNCTION 142535980 RightPad body=32 status=ok
// SIG undefined RightPad(void)

undefined8 UKismetStringLibrary::RightPad(undefined8 param_1,undefined8 param_2)

{
  FString::RightPad(param_2,param_1);
  return param_1;
}



// FUNCTION 1425359a0 RotateAngleAxis body=341 status=ok
// SIG undefined RotateAngleAxis(void)

undefined8
UKismetMathLibrary::RotateAngleAxis
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 local_58;
  float local_50;
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  local_50 = param_4[2];
  fVar3 = fVar1 * fVar1 + fVar2 * fVar2 + local_50 * local_50;
  if (fVar3 == 1.0) {
    local_58 = *(undefined8 *)param_4;
    local_50 = param_4[2];
  }
  else if (1e-08 <= fVar3) {
    auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar4 = auVar5._0_4_;
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    local_50 = local_50 * fVar4;
    local_58 = CONCAT44(fVar2 * fVar4,fVar1 * fVar4);
  }
  else {
    local_50 = DAT_1468b5d98;
    local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  FVector::RotateAngleAxis(param_2,param_1,param_3,&local_58);
  return param_1;
}



// FUNCTION 142535b00 RotatorFromAxisAndAngle body=683 status=ok
// SIG undefined RotatorFromAxisAndAngle(void)

undefined8
UKismetMathLibrary::RotatorFromAxisAndAngle(undefined8 param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_78;
  float fStack_74;
  float local_70;
  float local_6c;
  
  fVar3 = param_2[2];
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  if (fVar4 == 1.0) {
    local_78 = (float)*(undefined8 *)param_2;
    fVar5 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    local_70 = param_2[2];
  }
  else {
    fVar5 = DAT_1468b5d94;
    local_70 = DAT_1468b5d98;
    local_78 = DAT_1468b5d90;
    if (1e-08 <= fVar4) {
      auVar7 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar6 = auVar7._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
      local_78 = fVar1 * fVar6;
      fVar5 = fVar2 * fVar6;
      local_70 = fVar3 * fVar6;
    }
  }
  param_3 = param_3 * 0.008726646;
  if (param_3 < 0.0) {
    fVar3 = param_3 * 0.15915494 - 0.5;
  }
  else {
    fVar3 = param_3 * 0.15915494 + 0.5;
  }
  param_3 = param_3 - (float)(int)fVar3 * 6.2831855;
  if (param_3 <= 1.5707964) {
    if (-1.5707964 <= param_3) {
      local_6c = 1.0;
    }
    else {
      local_6c = -1.0;
      param_3 = -3.1415927 - param_3;
    }
  }
  else {
    local_6c = -1.0;
    param_3 = 3.1415927 - param_3;
  }
  fVar3 = param_3 * param_3;
  param_3 = (((((2.7525562e-06 - fVar3 * 2.3889859e-08) * fVar3 - 0.00019840874) * fVar3 +
              0.008333331) * fVar3 - 0.16666667) * fVar3 + 1.0) * param_3;
  local_70 = local_70 * param_3;
  _local_78 = CONCAT44(param_3 * fVar5,param_3 * local_78);
  local_6c = (((((2.4760495e-05 - fVar3 * 2.6051615e-07) * fVar3 - 0.0013888378) * fVar3 +
               0.041666638) * fVar3 - 0.5) * fVar3 + 1.0) * local_6c;
  FQuat::Rotator(&local_78,param_1);
  return param_1;
}



// FUNCTION 142535db0 FUN_142535db0 body=648 status=ok
// SIG undefined FUN_142535db0(void)

void FUN_142535db0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  undefined8 *local_58;
  uint local_50;
  int local_4c;
  longlong local_48 [2];
  longlong local_38 [2];
  
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar11 = 0;
    do {
      plVar1 = *(longlong **)(lVar11 + *(longlong *)(param_1 + 0xa0));
      if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 0x93) & 8) == 0)) {
        (**(code **)(*plVar1 + 0x480))();
      }
      iVar9 = iVar9 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar9 < *(int *)(param_1 + 0xa8));
  }
  cVar2 = FUN_1428cdc10(*(undefined8 *)(param_1 + 0xc0));
  puVar13 = (undefined8 *)0x0;
  iVar9 = 0;
  local_58 = (undefined8 *)0x0;
  uVar10 = 0;
  local_4c = 0;
  iVar14 = 0;
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar11 = 0;
    do {
      plVar1 = *(longlong **)(lVar11 + *(longlong *)(param_1 + 0xa0));
      if (plVar1 != (longlong *)0x0) {
        if ((*(byte *)((longlong)plVar1 + 0x93) & 8) == 0) {
          FUN_142235020(plVar1);
          (**(code **)(*plVar1 + 0x488))(plVar1);
          if ((*(byte *)((longlong)plVar1 + 0x93) & 8) == 0) {
            uVar4 = *(uint *)((longlong)plVar1 + 0xc);
            if ((int)uVar4 < (int)DAT_1469e91c4) {
              uVar8 = uVar4 & 0xffff;
              if ((int)uVar4 < 0) {
                uVar4 = uVar4 + 0xffff;
                uVar8 = uVar8 - 0x10000;
              }
              lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                      (longlong)(int)uVar8 * 0x18;
            }
            else {
              lVar5 = 0;
            }
            if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
              puVar6 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar1,local_48,0);
              if (*(int *)(puVar6 + 1) == 0) {
                puVar7 = &DAT_143f3eda8;
              }
              else {
                puVar7 = (undefined2 *)*puVar6;
              }
              LowLevelFatalErrorHandler
                        ("Unknown",0x785,
                         L"%s failed to route PostInitializeComponents.  Please call Super::PostInitializeComponents() in your <className>::PostInitializeComponents() function. "
                         ,puVar7);
              if (local_48[0] != 0) {
                FMemory::Free();
              }
              puVar6 = (undefined8 *)UObjectBaseUtility::GetFullName(plVar1,local_38,0);
              if (*(int *)(puVar6 + 1) == 0) {
                puVar7 = &DAT_143f3eda8;
              }
              else {
                puVar7 = (undefined2 *)*puVar6;
              }
              FDebug::AssertFailed
                        (&DAT_1450e148f,"Unknown",0x785,
                         L"%s failed to route PostInitializeComponents.  Please call Super::PostInitializeComponents() in your <className>::PostInitializeComponents() function. "
                         ,puVar7);
              if (local_38[0] != 0) {
                FMemory::Free();
              }
            }
          }
          if (cVar2 != '\0') {
            cVar3 = AActor::IsChildActor(plVar1);
            if (cVar3 == '\0') {
              local_50 = uVar10 + 1;
              if (iVar9 < (int)local_50) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,uVar10);
                puVar13 = local_58;
                iVar9 = local_4c;
              }
              puVar13[(int)uVar10] = plVar1;
              uVar10 = local_50;
            }
          }
        }
        FUN_142241140(plVar1,*(byte *)((longlong)plVar1 + 0x92) >> 1 & 1);
      }
      iVar14 = iVar14 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar14 < *(int *)(param_1 + 0xa8));
    if (0 < (int)uVar10) {
      uVar12 = (ulonglong)uVar10;
      puVar6 = puVar13;
      do {
        FUN_142227cf0(*puVar6);
        puVar6 = puVar6 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (puVar13 != (undefined8 *)0x0) {
      FMemory::Free(puVar13);
    }
  }
  return;
}



// FUNCTION 142536040 ScheduleLocalNotificationAtTime body=66 status=ok
// SIG undefined ScheduleLocalNotificationAtTime(void)

void UBlueprintPlatformLibrary::ScheduleLocalNotificationAtTime
               (undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  if (DAT_146afc4e8 != (longlong *)0x0) {
    (**(code **)(*DAT_146afc4e8 + 8))(DAT_146afc4e8,param_1,param_2,param_3,param_4,param_5,param_6)
    ;
  }
  return;
}



// FUNCTION 142536090 ScheduleLocalNotificationBadgeAtTime body=33 status=ok
// SIG undefined ScheduleLocalNotificationBadgeAtTime(void)

void UBlueprintPlatformLibrary::ScheduleLocalNotificationBadgeAtTime
               (undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  if (DAT_146afc4e8 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425360ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_146afc4e8 + 0x10))(DAT_146afc4e8,param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1425360c0 ScheduleLocalNotificationBadgeFromNow body=204 status=ok
// SIG undefined ScheduleLocalNotificationBadgeFromNow(void)

void UBlueprintPlatformLibrary::ScheduleLocalNotificationBadgeFromNow
               (int param_1,undefined8 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong local_res18 [2];
  
  FDateTime::Now(local_res18);
  auVar4._0_8_ = (double)param_1 * 10000000.0 + 0.5;
  lVar3 = (longlong)auVar4._0_8_;
  if (0.0 <= auVar4._0_8_) {
    if ((lVar3 == -0x8000000000000000) || ((double)lVar3 == auVar4._0_8_)) goto LAB_14253615a;
    auVar5._8_8_ = auVar4._0_8_;
    auVar5._0_8_ = auVar4._0_8_;
    uVar1 = movmskpd(0,auVar5);
    uVar2 = -(ulonglong)(uVar1 & 1);
  }
  else {
    if ((lVar3 == -0x8000000000000000) || ((double)lVar3 == auVar4._0_8_)) goto LAB_14253615a;
    auVar4._8_8_ = auVar4._0_8_;
    uVar1 = movmskpd(0,auVar4);
    uVar2 = (ulonglong)(uVar1 & 1 ^ 1);
  }
  auVar4._0_8_ = (double)(longlong)(lVar3 + uVar2);
LAB_14253615a:
  local_res18[0] = local_res18[0] + (longlong)auVar4._0_8_;
  if (DAT_146afc4e8 != (longlong *)0x0) {
    (**(code **)(*DAT_146afc4e8 + 0x10))(DAT_146afc4e8,local_res18,1,param_2);
  }
  return;
}



// FUNCTION 142536190 ScheduleLocalNotificationFromNow body=254 status=ok
// SIG undefined ScheduleLocalNotificationFromNow(void)

void UBlueprintPlatformLibrary::ScheduleLocalNotificationFromNow
               (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong local_18 [2];
  
  FDateTime::Now(local_18);
  auVar4._0_8_ = (double)param_1 * 10000000.0 + 0.5;
  lVar3 = (longlong)auVar4._0_8_;
  if (0.0 <= auVar4._0_8_) {
    if ((lVar3 == -0x8000000000000000) || ((double)lVar3 == auVar4._0_8_)) goto LAB_14253623a;
    auVar5._8_8_ = auVar4._0_8_;
    auVar5._0_8_ = auVar4._0_8_;
    uVar1 = movmskpd(0,auVar5);
    uVar2 = -(ulonglong)(uVar1 & 1);
  }
  else {
    if ((lVar3 == -0x8000000000000000) || ((double)lVar3 == auVar4._0_8_)) goto LAB_14253623a;
    auVar4._8_8_ = auVar4._0_8_;
    uVar1 = movmskpd(0,auVar4);
    uVar2 = (ulonglong)(uVar1 & 1 ^ 1);
  }
  auVar4._0_8_ = (double)(longlong)(lVar3 + uVar2);
LAB_14253623a:
  local_18[0] = local_18[0] + (longlong)auVar4._0_8_;
  if (DAT_146afc4e8 != (longlong *)0x0) {
    (**(code **)(*DAT_146afc4e8 + 8))(DAT_146afc4e8,local_18,1,param_2,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 142536290 SeedRandomStream body=26 status=ok
// SIG undefined SeedRandomStream(void)

void UKismetMathLibrary::SeedRandomStream(int *param_1)

{
  int iVar1;
  
  iVar1 = rand();
  *param_1 = iVar1;
  param_1[1] = iVar1;
  return;
}



// FUNCTION 1425362b0 FUN_1425362b0 body=1747 status=ok
// SIG undefined FUN_1425362b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425362b0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  BOOL BVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_1e8 [32];
  uint local_1c8 [2];
  undefined1 local_1c0 [8];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  undefined *local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  uint local_158;
  undefined4 local_154;
  longlong local_150;
  longlong local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined1 local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8 [4];
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8 [4];
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_1a0 = param_2;
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464af950);
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  uVar9 = 0;
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar3 = FArchive::CustomVer(param_2,&DAT_1464af950), 2 < iVar3)) {
    FUN_1408bdc30(param_2,param_1 + 0xa0);
  }
  else {
    local_1b8 = (undefined8 *)0x0;
    uStack_1b0 = 0;
    local_1a8 = param_1;
    (**(code **)(*param_2 + 0x30))(param_2,&local_1a8);
    FUN_1408bdc30(param_2,&local_1b8);
    plVar1 = (longlong *)(param_1 + 0xa0);
    if (*(int *)(param_1 + 0xac) < (int)uStack_1b0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,uStack_1b0 & 0xffffffff);
    }
    uVar5 = (ulonglong)((longlong)(local_1b8 + (int)uStack_1b0) + (7 - (longlong)local_1b8)) >> 3;
    if (local_1b8 + (int)uStack_1b0 < local_1b8) {
      uVar5 = uVar9;
    }
    puVar8 = local_1b8;
    if (uVar5 != 0) {
      do {
        iVar3 = *(int *)(param_1 + 0xa8);
        uVar2 = *puVar8;
        *(int *)(param_1 + 0xa8) = iVar3 + 1;
        if (*(int *)(param_1 + 0xac) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        uVar9 = uVar9 + 1;
        *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar2;
        puVar8 = puVar8 + 1;
        param_2 = local_1a0;
      } while (uVar9 != uVar5);
    }
    if (local_1b8 != (undefined8 *)0x0) {
      FMemory::Free(local_1b8);
    }
  }
  FUN_14289d710(param_2,param_1 + 0x30);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 200);
  FUN_1408bdc30(param_2,param_1 + 0xd0);
  if ((-1 < *(char *)((longlong)param_2 + 0x2a)) || ((int)param_2[8] < 0x143)) {
    local_1a0 = (longlong *)0x0;
    (**(code **)(*param_2 + 0x30))(param_2,&local_1a0);
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xf0);
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (iVar3 = FArchive::CustomVer(param_2,&DAT_1464b00e8), iVar3 < 3)) {
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    operator<<(param_2,local_a8);
    operator<<(param_2,local_f8);
    (**(code **)(*param_2 + 8))(param_2,local_1c0);
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      if ((*(byte *)(param_2 + 5) & 2) != 0) {
        plVar1 = (longlong *)param_2[1];
        local_1c8[0] = 0;
        if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,local_1c8,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,local_1c8,4);
          }
        }
        else {
          local_1c8[0] = *(uint *)*plVar1;
          *plVar1 = *plVar1 + 4;
        }
      }
    }
    else {
      plVar1 = (longlong *)param_2[1];
      if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
        (**(code **)(*param_2 + 0x50))(param_2,local_1c8,4);
        if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
          FArchive::ByteSwap(param_2,local_1c8,4);
        }
      }
      else {
        local_1c8[0] = *(uint *)*plVar1;
        *plVar1 = *plVar1 + 4;
      }
      lVar7 = *param_2;
      lVar6 = (**(code **)(lVar7 + 0x90))(param_2);
      (**(code **)(lVar7 + 0xa8))(param_2,(ulonglong)local_1c8[0] + lVar6);
    }
    if ((int)param_2[8] < 0xfb) {
      (**(code **)(*param_2 + 0x30))(param_2,&local_1a0);
    }
    local_188 = 0;
    uStack_180 = 0;
    local_168 = 0;
    uStack_164 = 0;
    local_160 = 0;
    uStack_15c = 0;
    local_158 = 0xffffffff;
    local_154 = 0;
    local_148 = 0;
    local_140._0_4_ = 0;
    operator<<(param_2,&local_188);
    local_140 = (ulonglong)local_140._4_4_ << 0x20;
    if (local_148 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_188);
    local_b0 = 0;
    if (local_b8 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_f8,0);
    if (local_d8 != 0) {
      FMemory::Free();
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
    local_60 = 0;
    if (local_68 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FPackageIndex,TArray<FName,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::Empty(local_a8,0);
    if (local_88 != 0) {
      FMemory::Free();
    }
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
  }
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && ((*(byte *)(param_2 + 5) & 0x40) != 0)) {
    *(byte *)((longlong)param_2 + 0x29) = *(byte *)((longlong)param_2 + 0x29) | 4;
    lVar7 = UObjectBaseUtility::GetOutermost(param_1);
    *(uint *)(lVar7 + 0x50) = *(uint *)(lVar7 + 0x50) | 0x20000;
  }
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0xf8);
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x100);
  if (((*(byte *)(param_2 + 5) & 1) != 0) &&
     (iVar3 = FArchive::CustomVer(param_2,&DAT_1464b00e8), iVar3 < 9)) {
    lVar7 = operator_new(0x160);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FPrecomputedLightVolumeData::FPrecomputedLightVolumeData(lVar7);
    }
    FUN_1426f75d0(param_2,lVar7);
    puVar8 = *(undefined8 **)(param_1 + 0x1dc);
    uVar9 = *(ulonglong *)(param_1 + 0x1e4);
    local_1b8 = puVar8;
    uStack_1b0 = uVar9;
    local_1a8 = lVar7;
    BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146533598);
    if (BVar4 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146533598);
    }
    _DAT_1465335d8 = local_1a8;
    _DAT_1465335c0 = param_1;
    _DAT_1465335c8 = puVar8;
    _DAT_1465335d0 = uVar9;
    if (((uStack_1b0._4_4_ == 0 && (int)uVar9 == 0) && local_1b8._4_4_ == 0) && (int)puVar8 == 0) {
      FUObjectAnnotationSparse<FLightComponentLegacyMapBuildData,1>::RemoveAnnotation
                (&PTR_PTR_146533540,param_1);
    }
    else {
      if (DAT_146533550 == DAT_14653357c) {
        FUObjectArray::AddUObjectDeleteListener(&DAT_1469e91a0,&PTR_PTR_146533540);
      }
      local_1a0 = (longlong *)&DAT_1465335c0;
      local_198 = &DAT_1465335c8;
      FUN_14235b9e0(&DAT_146533548,local_1c8,&local_1a0,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146533598);
  }
  FUN_142513e10(param_2,param_1 + 0x160);
  FUN_142514000(param_2,param_1 + 400);
  if ((int)param_2[8] - 0xe0U < 0x2c) {
    local_178 = 0;
    local_188 = 0;
    uStack_180 = 0;
    uStack_164 = (undefined4)_DAT_1468b5d90;
    local_160 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
    local_170 = _DAT_1468b5d90;
    uStack_15c = DAT_1468b5d98;
    local_168 = DAT_1468b5d98;
    local_158 = local_158 & 0xffffff00;
    local_150 = 0;
    local_148 = 0xe;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
    FGenericPlatformString::Memcpy(local_150,L"Uncategorized",0x1c);
    local_140 = 0;
    local_138 = 0;
    local_134 = 50000;
    local_130 = 1;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    FUN_1416e71d0(param_2,&local_188);
    if (local_110 != 0) {
      FMemory::Free();
    }
    if (local_120 != 0) {
      FMemory::Free();
    }
    if (local_150 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142536990 SetBoolPropertyByName body=237 status=ok
// SIG undefined SetBoolPropertyByName(void)

void UKismetSystemLibrary::SetBoolPropertyByName(longlong param_1,longlong param_2,char param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_1 != 0) &&
     ((local_28 = *(longlong *)(param_1 + 0x10), (int)param_2 != 0 ||
      ((int)((ulonglong)param_2 >> 0x20) != 0)))) {
    if (local_28 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(local_28 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    FUN_140cbbaf0(&local_28);
    if (local_20 != 0) {
      while (*(longlong *)(local_20 + 0x18) != param_2) {
        local_20 = *(longlong *)(local_20 + 0x28);
        FUN_140cbbaf0(&local_28);
        if (local_20 == 0) {
          return;
        }
      }
      pbVar1 = (byte *)((longlong)*(int *)(local_20 + 0x44) +
                       (ulonglong)*(byte *)(local_20 + 0x71) + param_1);
      if (param_3 == '\0') {
        bVar2 = 0;
      }
      else {
        bVar2 = *(byte *)(local_20 + 0x72);
      }
      *pbVar1 = ~*(byte *)(local_20 + 0x73) & *pbVar1 | bVar2;
    }
  }
  return;
}



// FUNCTION 142536a80 FUN_142536a80 body=335 status=ok
// SIG undefined FUN_142536a80(void)

void FUN_142536a80(longlong param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (param_1 != 0) {
    local_28 = *(longlong *)(param_1 + 0x10);
    iVar1 = (int)((ulonglong)param_2 >> 0x20);
    if (((int)param_2 != 0) || (iVar1 != 0)) {
      if (local_28 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = *(longlong *)(local_28 + 0x38);
      }
      local_18 = 0xffffffff;
      local_14 = 0x101;
      local_12 = 0;
      FUN_14252c680(&local_28);
      while (local_20 != 0) {
        if (*(longlong *)(local_20 + 0x18) == param_2) {
          *(undefined1 *)(*(int *)(local_20 + 0x44) + param_1) = param_3;
          return;
        }
        local_20 = *(longlong *)(local_20 + 0x28);
        FUN_14252c680(&local_28);
      }
    }
    local_28 = *(longlong *)(param_1 + 0x10);
    if (((int)param_2 != 0) || (iVar1 != 0)) {
      if (local_28 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = *(longlong *)(local_28 + 0x38);
      }
      local_18 = 0xffffffff;
      local_14 = 0x101;
      local_12 = 0;
      FUN_140cbbbd0(&local_28);
      while (local_20 != 0) {
        if (*(longlong *)(local_20 + 0x18) == param_2) {
          (**(code **)(**(longlong **)(local_20 + 0x70) + 0x388))
                    (*(longlong **)(local_20 + 0x70),*(int *)(local_20 + 0x44) + param_1,param_3);
          return;
        }
        local_20 = *(longlong *)(local_20 + 0x28);
        FUN_140cbbbd0(&local_28);
      }
    }
  }
  return;
}



// FUNCTION 142536bd0 FUN_142536bd0 body=364 status=ok
// SIG undefined FUN_142536bd0(void)

void FUN_142536bd0(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (param_1 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  lVar2 = UObject::GetPrivateStaticClass();
  lVar4 = param_3;
  while (lVar4 != lVar2) {
    lVar4 = *(longlong *)(lVar4 + 0x30);
    if (lVar4 == 0) {
      return;
    }
  }
  local_28 = *(longlong *)(param_1 + 0x10);
  if (((int)param_2 == 0) && ((int)((ulonglong)param_2 >> 0x20) == 0)) {
    return;
  }
  if (local_28 == 0) {
    local_20 = (longlong *)0x0;
  }
  else {
    local_20 = *(longlong **)(local_28 + 0x38);
  }
  local_18 = 0xffffffff;
  local_14 = 0x101;
  local_12 = 0;
  FUN_14252c760(&local_28);
  plVar1 = local_20;
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return;
    }
    if (plVar1[3] == param_2) break;
    local_20 = (longlong *)plVar1[5];
    FUN_14252c760(&local_28);
    plVar1 = local_20;
  }
  local_20 = plVar1;
  lVar2 = UObject::GetPrivateStaticClass();
  lVar4 = param_3;
  do {
    lVar3 = param_3;
    if (lVar4 == lVar2) break;
    lVar4 = *(longlong *)(lVar4 + 0x30);
    lVar3 = 0;
  } while (lVar4 != 0);
  if (lVar3 == 0) {
    return;
  }
  while (lVar3 != plVar1[0xf]) {
    lVar3 = *(longlong *)(lVar3 + 0x30);
    if (lVar3 == 0) {
      return;
    }
  }
  lVar2 = UObject::GetPrivateStaticClass();
  lVar4 = param_3;
  do {
    lVar3 = param_3;
    if (lVar4 == lVar2) break;
    lVar4 = *(longlong *)(lVar4 + 0x30);
    lVar3 = 0;
  } while (lVar4 != 0);
  (**(code **)(*plVar1 + 0x380))(plVar1,*(int *)((longlong)plVar1 + 0x44) + param_1,lVar3);
  return;
}



// FUNCTION 142536d40 SetCurrentAssetGroupCulture body=355 status=ok
// SIG undefined SetCurrentAssetGroupCulture(void)

undefined8
UKismetInternationalizationLibrary::SetCurrentAssetGroupCulture
          (undefined8 param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_res8;
  undefined1 local_res20 [8];
  undefined8 *local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_res8 = param_1;
  uVar3 = FInternationalization::Get();
  cVar2 = FUN_141617cf0(uVar3,&local_res8,param_2);
  if (cVar2 != '\0') {
    if (param_3 != '\0') {
      lVar4 = FConfigCacheIni::GetSectionPrivate
                        (DAT_1468b6148,L"Internationalization.AssetGroupCultures",0,0,&DAT_1468e2420
                        );
      if (lVar4 != 0) {
        TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
        ::Remove(lVar4,local_res8);
        plVar5 = (longlong *)FString::FString(local_48,param_2);
        local_38 = *plVar5;
        *plVar5 = 0;
        local_30 = (undefined4)plVar5[1];
        local_2c = *(undefined4 *)((longlong)plVar5 + 0xc);
        plVar5[1] = 0;
        local_28 = 0;
        local_20 = 0;
        cVar2 = FConfigValue::ExpandValue(&local_38,&local_28);
        if ((cVar2 == '\0') &&
           (uVar1 = local_20 >> 0x20, local_20 = local_20 & 0xffffffff00000000, (int)uVar1 != 0)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_28,0);
        }
        if (*plVar5 != 0) {
          FMemory::Free();
        }
        local_58 = &local_res8;
        local_50 = &local_38;
        FUN_1415bc5a0(lVar4,local_res20,&local_58,0);
        if (local_28 != 0) {
          FMemory::Free();
        }
        if (local_38 != 0) {
          FMemory::Free();
        }
      }
      FConfigCacheIni::Flush(DAT_1468b6148,0,&DAT_1468e2420);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142536eb0 SetCurrentCulture body=162 status=ok
// SIG undefined SetCurrentCulture(void)

undefined1 UKismetInternationalizationLibrary::SetCurrentCulture(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 *puVar3;
  
  uVar1 = FInternationalization::Get();
  cVar2 = FInternationalization::SetCurrentCulture(uVar1,param_1);
  if (cVar2 != '\0') {
    if (param_2 != '\0') {
      if (*(int *)(param_1 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*param_1;
      }
      FConfigCacheIni::SetString
                (DAT_1468b6148,L"Internationalization",L"Culture",puVar3,&DAT_1468e2420);
      FConfigCacheIni::EmptySection
                (DAT_1468b6148,L"Internationalization.AssetGroupCultures",&DAT_1468e2420);
      FConfigCacheIni::Flush(DAT_1468b6148,0,&DAT_1468e2420);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142536f60 SetCurrentLanguage body=140 status=ok
// SIG undefined SetCurrentLanguage(void)

undefined1 UKismetInternationalizationLibrary::SetCurrentLanguage(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 *puVar3;
  
  uVar1 = FInternationalization::Get();
  cVar2 = FInternationalization::SetCurrentLanguage(uVar1,param_1);
  if (cVar2 != '\0') {
    if (param_2 != '\0') {
      if (*(int *)(param_1 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*param_1;
      }
      FConfigCacheIni::SetString
                (DAT_1468b6148,L"Internationalization",L"Language",puVar3,&DAT_1468e2420);
      FConfigCacheIni::Flush(DAT_1468b6148,0,&DAT_1468e2420);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142536ff0 SetCurrentLanguageAndLocale body=204 status=ok
// SIG undefined SetCurrentLanguageAndLocale(void)

undefined1
UKismetInternationalizationLibrary::SetCurrentLanguageAndLocale(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  uVar1 = FInternationalization::Get();
  cVar2 = FInternationalization::SetCurrentLanguageAndLocale(uVar1,param_1);
  if (cVar2 != '\0') {
    if (param_2 != '\0') {
      puVar3 = &DAT_143f3eda8;
      if (*(int *)(param_1 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*param_1;
      }
      FConfigCacheIni::SetString
                (DAT_1468b6148,L"Internationalization",L"Language",puVar4,&DAT_1468e2420);
      if (*(int *)(param_1 + 1) != 0) {
        puVar3 = (undefined2 *)*param_1;
      }
      FConfigCacheIni::SetString
                (DAT_1468b6148,L"Internationalization",L"Locale",puVar3,&DAT_1468e2420);
      FConfigCacheIni::Flush(DAT_1468b6148,0,&DAT_1468e2420);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 1425370c0 SetCurrentLocale body=140 status=ok
// SIG undefined SetCurrentLocale(void)

undefined1 UKismetInternationalizationLibrary::SetCurrentLocale(undefined8 *param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined2 *puVar3;
  
  uVar1 = FInternationalization::Get();
  cVar2 = FInternationalization::SetCurrentLocale(uVar1,param_1);
  if (cVar2 != '\0') {
    if (param_2 != '\0') {
      if (*(int *)(param_1 + 1) == 0) {
        puVar3 = &DAT_143f3eda8;
      }
      else {
        puVar3 = (undefined2 *)*param_1;
      }
      FConfigCacheIni::SetString
                (DAT_1468b6148,L"Internationalization",L"Locale",puVar3,&DAT_1468e2420);
      FConfigCacheIni::Flush(DAT_1468b6148,0,&DAT_1468e2420);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142537150 SetFloatPropertyByName body=204 status=ok
// SIG undefined SetFloatPropertyByName(void)

void UKismetSystemLibrary::SetFloatPropertyByName
               (longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong local_38;
  longlong local_30;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((param_1 != 0) &&
     ((local_38 = *(longlong *)(param_1 + 0x10), (int)param_2 != 0 ||
      ((int)((ulonglong)param_2 >> 0x20) != 0)))) {
    if (local_38 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = *(longlong *)(local_38 + 0x38);
    }
    local_28 = 0xffffffff;
    local_24 = 0x101;
    local_22 = 0;
    FUN_140cbbcb0(&local_38);
    if (local_30 != 0) {
      while (*(longlong *)(local_30 + 0x18) != param_2) {
        local_30 = *(longlong *)(local_30 + 0x28);
        FUN_140cbbcb0(&local_38);
        if (local_30 == 0) {
          return;
        }
      }
      *(undefined4 *)(*(int *)(local_30 + 0x44) + param_1) = param_3;
    }
  }
  return;
}



// FUNCTION 142537220 SetIntPropertyByName body=202 status=ok
// SIG undefined SetIntPropertyByName(void)

void UKismetSystemLibrary::SetIntPropertyByName
               (longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_1 != 0) &&
     ((local_28 = *(longlong *)(param_1 + 0x10), (int)param_2 != 0 ||
      ((int)((ulonglong)param_2 >> 0x20) != 0)))) {
    if (local_28 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(local_28 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    FUN_142486be0(&local_28);
    if (local_20 != 0) {
      while (*(longlong *)(local_20 + 0x18) != param_2) {
        local_20 = *(longlong *)(local_20 + 0x28);
        FUN_142486be0(&local_28);
        if (local_20 == 0) {
          return;
        }
      }
      *(undefined4 *)(*(int *)(local_20 + 0x44) + param_1) = param_3;
    }
  }
  return;
}



// FUNCTION 1425372f0 SetInterfacePropertyByName body=231 status=ok
// SIG undefined SetInterfacePropertyByName(void)

void UKismetSystemLibrary::SetInterfacePropertyByName
               (longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_1 != 0) &&
     ((local_28 = *(longlong *)(param_1 + 0x10), (int)param_2 != 0 ||
      ((int)((ulonglong)param_2 >> 0x20) != 0)))) {
    if (local_28 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(local_28 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    FUN_14252c840(&local_28);
    lVar2 = local_20;
    while (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x18) == param_2) {
        local_20 = lVar2;
        cVar3 = UClass::ImplementsInterface
                          (*(undefined8 *)(*param_3 + 0x10),*(undefined8 *)(lVar2 + 0x70));
        if (cVar3 == '\0') {
          return;
        }
        iVar1 = *(int *)(lVar2 + 0x44);
        *(longlong *)(iVar1 + param_1) = *param_3;
        *(longlong *)((longlong)iVar1 + 8 + param_1) = param_3[1];
        return;
      }
      local_20 = *(longlong *)(lVar2 + 0x28);
      FUN_14252c840(&local_28);
      lVar2 = local_20;
    }
  }
  return;
}



// FUNCTION 1425373e0 SetKeyIn body=271 status=ok
// SIG undefined SetKeyIn(void)

ulonglong UInterpTrackFloatBase::SetKeyIn(longlong param_1,int param_2,undefined4 param_3)

{
  void *_Dst;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 local_res10 [2];
  
  uVar7 = (ulonglong)param_2;
  if (-1 < param_2) {
    iVar6 = *(int *)(param_1 + 0x50);
    if (param_2 < iVar6) {
      lVar4 = *(longlong *)(param_1 + 0x48);
      local_res10[0] = *(undefined4 *)(lVar4 + 4 + uVar7 * 0x14);
      _Dst = (void *)(lVar4 + uVar7 * 0x14);
      uVar3 = *(undefined1 *)((longlong)_Dst + 0x10);
      uVar1 = *(undefined4 *)((longlong)_Dst + 8);
      uVar2 = *(undefined4 *)((longlong)_Dst + 0xc);
      iVar5 = (iVar6 - param_2) + -1;
      if (iVar5 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (_Dst,(void *)(lVar4 + (longlong)(param_2 + 1) * 0x14),(longlong)iVar5 * 0x14);
        iVar6 = *(int *)(param_1 + 0x50);
      }
      *(int *)(param_1 + 0x50) = iVar6 + -1;
      TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1 + 0x48);
      iVar6 = FInterpCurve<float>::AddPoint(param_1 + 0x48,param_3,local_res10);
      uVar7 = (ulonglong)iVar6;
      *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x10 + uVar7 * 0x14) = uVar3;
      *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 8 + uVar7 * 0x14) = uVar1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0xc + uVar7 * 0x14) = uVar2;
    }
  }
  FInterpCurve<float>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  return uVar7 & 0xffffffff;
}



// FUNCTION 1425374f0 SetKeyIn body=260 status=ok
// SIG undefined SetKeyIn(void)

ulonglong UInterpTrackLinearColorBase::SetKeyIn(longlong param_1,int param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar10 = (ulonglong)param_2;
  if (-1 < param_2) {
    iVar8 = *(int *)(param_1 + 0x50);
    if (param_2 < iVar8) {
      _Dst = (void *)(uVar10 * 0x38 + *(longlong *)(param_1 + 0x48));
      local_48 = *(undefined4 *)((longlong)_Dst + 4);
      uStack_44 = *(undefined4 *)((longlong)_Dst + 8);
      uStack_40 = *(undefined4 *)((longlong)_Dst + 0xc);
      uStack_3c = *(undefined4 *)((longlong)_Dst + 0x10);
      uVar2 = *(undefined1 *)((longlong)_Dst + 0x34);
      uVar3 = *(undefined8 *)((longlong)_Dst + 0x14);
      uVar4 = *(undefined8 *)((longlong)_Dst + 0x1c);
      uVar5 = *(undefined8 *)((longlong)_Dst + 0x24);
      uVar6 = *(undefined8 *)((longlong)_Dst + 0x2c);
      iVar7 = (iVar8 - param_2) + -1;
      if (iVar7 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (_Dst,(void *)((longlong)(param_2 + 1) * 0x38 + *(longlong *)(param_1 + 0x48)),
                   (longlong)iVar7 * 0x38);
        iVar8 = *(int *)(param_1 + 0x50);
      }
      *(int *)(param_1 + 0x50) = iVar8 + -1;
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
      ResizeShrink(param_1 + 0x48);
      iVar8 = FInterpCurve<FLinearColor>::AddPoint(param_1 + 0x48,param_3,&local_48);
      uVar10 = (ulonglong)iVar8;
      lVar9 = uVar10 * 0x38;
      *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x34 + lVar9) = uVar2;
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x14 + lVar9);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x24 + lVar9);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
    }
  }
  FInterpCurve<FLinearColor>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  return uVar10 & 0xffffffff;
}



// FUNCTION 142537600 SetKeyIn body=140 status=ok
// SIG undefined SetKeyIn(void)

undefined4 UInterpTrackMove::SetKeyIn(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FInterpCurve<FVector>::MovePoint(param_1 + 0x48);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x90),1);
  FInterpCurve<FVector>::MovePoint(param_1 + 0x60,param_2,param_3);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x60,*(undefined4 *)(param_1 + 0x94),1);
  FInterpLookupTrack::MovePoint(param_1 + 0x78,param_2,param_3);
  return uVar1;
}



// FUNCTION 142537690 SetKeyIn body=298 status=ok
// SIG undefined SetKeyIn(void)

ulonglong UInterpTrackMoveAxis::SetKeyIn(longlong param_1,uint param_2,undefined4 param_3)

{
  void *_Dst;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 local_res10 [2];
  
  if (-1 < (int)param_2) {
    iVar6 = *(int *)(param_1 + 0x50);
    if ((int)param_2 < iVar6) {
      lVar4 = *(longlong *)(param_1 + 0x48);
      local_res10[0] = *(undefined4 *)(lVar4 + 4 + (longlong)(int)param_2 * 0x14);
      _Dst = (void *)(lVar4 + (longlong)(int)param_2 * 0x14);
      uVar3 = *(undefined1 *)((longlong)_Dst + 0x10);
      uVar1 = *(undefined4 *)((longlong)_Dst + 8);
      uVar2 = *(undefined4 *)((longlong)_Dst + 0xc);
      iVar5 = (iVar6 - param_2) + -1;
      if (iVar5 != 0) {
        ::_guard_xfg_dispatch_icall_nop
                  (_Dst,(void *)(lVar4 + (longlong)(int)(param_2 + 1) * 0x14),(longlong)iVar5 * 0x14
                  );
        iVar6 = *(int *)(param_1 + 0x50);
      }
      *(int *)(param_1 + 0x50) = iVar6 + -1;
      TArray<FInterpCurvePoint<float>,FDefaultAllocator>::ResizeShrink(param_1 + 0x48);
      iVar6 = FInterpCurve<float>::AddPoint(param_1 + 0x48,param_3,local_res10);
      uVar7 = (ulonglong)iVar6;
      *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x10 + uVar7 * 0x14) = uVar3;
      *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 8 + uVar7 * 0x14) = uVar1;
      *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0xc + uVar7 * 0x14) = uVar2;
      goto LAB_142537784;
    }
  }
  uVar7 = (ulonglong)param_2;
LAB_142537784:
  FInterpCurve<float>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  FInterpLookupTrack::MovePoint(param_1 + 0x70,param_2,param_3);
  return uVar7 & 0xffffffff;
}



// FUNCTION 1425377c0 SetKeyIn body=64 status=ok
// SIG undefined SetKeyIn(void)

undefined4 UInterpTrackVectorBase::SetKeyIn(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FInterpCurve<FVector>::MovePoint(param_1 + 0x48);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x60),1);
  return uVar1;
}



// FUNCTION 142537860 SetKeyInterpMode body=101 status=ok
// SIG undefined SetKeyInterpMode(void)

void UInterpTrackMove::SetKeyInterpMode(longlong param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x28 + (longlong)param_2 * 0x2c) = param_3;
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x90),1);
  *(undefined1 *)((longlong)param_2 * 0x2c + 0x28 + *(longlong *)(param_1 + 0x60)) = param_3;
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x60,*(undefined4 *)(param_1 + 0x94),1);
  return;
}



// FUNCTION 1425379a0 SetKeyOut body=347 status=ok
// SIG undefined SetKeyOut(void)

void UInterpTrackMove::SetKeyOut(longlong param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x98) & 8;
  if (param_2 == (uVar4 != 0) - 1) {
    *(undefined4 *)((longlong)param_3 * 0x2c + 4 + *(longlong *)(param_1 + 0x48)) = param_4;
  }
  else {
    iVar1 = 1;
    if (uVar4 == 0) {
      iVar1 = -1;
    }
    if (param_2 == iVar1) {
      *(undefined4 *)((longlong)param_3 * 0x2c + 8 + *(longlong *)(param_1 + 0x48)) = param_4;
    }
    else {
      iVar1 = 2;
      if (uVar4 == 0) {
        iVar1 = -1;
      }
      if (param_2 == iVar1) {
        lVar3 = *(longlong *)(param_1 + 0x48);
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x98) & 0x11;
        if (uVar2 == 0x10) {
          if (uVar4 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = 3;
          }
        }
        else {
          iVar1 = -1;
          uVar4 = *(uint *)(param_1 + 0x98) & 8;
        }
        if (param_2 == iVar1) {
          *(undefined4 *)((longlong)param_3 * 0x2c + 4 + *(longlong *)(param_1 + 0x60)) = param_4;
          goto LAB_142537ace;
        }
        if (uVar2 == 0x10) {
          iVar1 = 1;
          if (uVar4 != 0) {
            iVar1 = 4;
          }
        }
        else {
          iVar1 = -1;
        }
        if (param_2 == iVar1) {
          *(undefined4 *)((longlong)param_3 * 0x2c + 8 + *(longlong *)(param_1 + 0x60)) = param_4;
          goto LAB_142537ace;
        }
        if (uVar2 == 0x10) {
          iVar1 = 2;
          if (uVar4 != 0) {
            iVar1 = 5;
          }
        }
        else {
          iVar1 = -1;
        }
        if (param_2 != iVar1) goto LAB_142537ace;
        lVar3 = *(longlong *)(param_1 + 0x60);
      }
      *(undefined4 *)((longlong)param_3 * 0x2c + 0xc + lVar3) = param_4;
    }
  }
LAB_142537ace:
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x48,*(undefined4 *)(param_1 + 0x90),1);
  FInterpCurve<FVector>::AutoSetTangents(param_1 + 0x60,*(undefined4 *)(param_1 + 0x94),1);
  return;
}



// FUNCTION 142537b60 SetLinearColorPropertyByName body=98 status=ok
// SIG undefined SetLinearColorPropertyByName(void)

void UKismetSystemLibrary::SetLinearColorPropertyByName
               (longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar3 = FUN_14171a470();
    lVar4 = FindField<UStructProperty>(*(undefined8 *)(param_1 + 0x10),param_2);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x70) == lVar3)) {
      uVar2 = param_3[1];
      puVar1 = (undefined8 *)(*(int *)(lVar4 + 0x44) + param_1);
      *puVar1 = *param_3;
      puVar1[1] = uVar2;
    }
  }
  return;
}



// FUNCTION 142537bd0 SetNamePropertyByName body=206 status=ok
// SIG undefined SetNamePropertyByName(void)

void UKismetSystemLibrary::SetNamePropertyByName
               (longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_1 != 0) &&
     ((local_28 = *(longlong *)(param_1 + 0x10), (int)param_2 != 0 ||
      ((int)((ulonglong)param_2 >> 0x20) != 0)))) {
    if (local_28 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(local_28 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    FUN_14252c920(&local_28);
    if (local_20 != 0) {
      while (*(longlong *)(local_20 + 0x18) != param_2) {
        local_20 = *(longlong *)(local_20 + 0x28);
        FUN_14252c920(&local_28);
        if (local_20 == 0) {
          return;
        }
      }
      *(undefined8 *)(*(int *)(local_20 + 0x44) + param_1) = *param_3;
    }
  }
  return;
}



// FUNCTION 142537ca0 FUN_142537ca0 body=287 status=ok
// SIG undefined FUN_142537ca0(void)

void FUN_142537ca0(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  bool bVar2;
  longlong local_28;
  longlong *local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    local_28 = *(longlong *)(param_1 + 0x10);
    if (((int)param_2 == 0) && ((int)((ulonglong)param_2 >> 0x20) == 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      if (local_28 == 0) {
        local_20 = (longlong *)0x0;
      }
      else {
        local_20 = *(longlong **)(local_28 + 0x38);
      }
      local_18 = 0xffffffff;
      local_14 = 0x101;
      local_12 = 0;
      FUN_140c49360(&local_28);
      if (local_20 != (longlong *)0x0) {
        while (local_20[3] != param_2) {
          local_20 = (longlong *)local_20[5];
          FUN_140c49360(&local_28);
          if (local_20 == (longlong *)0x0) {
            return;
          }
        }
        iVar1 = *(int *)(local_20[0xe] + 0x90);
        if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < iVar1) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)iVar1 * 8)
            != local_20[0xe] + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          (**(code **)(*local_20 + 0x380))
                    (local_20,*(int *)((longlong)local_20 + 0x44) + param_1,param_3);
        }
      }
    }
  }
  return;
}



// FUNCTION 142537dc0 SetRandomStreamSeed body=6 status=ok
// SIG undefined SetRandomStreamSeed(void)

void UKismetMathLibrary::SetRandomStreamSeed(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  return;
}



// FUNCTION 142537dd0 SetReadyToDestroy body=57 status=ok
// SIG undefined SetReadyToDestroy(void)

void UBlueprintAsyncActionBase::SetReadyToDestroy(longlong param_1)

{
  longlong *plVar1;
  
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfeffffff;
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142537dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x358))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142537e10 FUN_142537e10 body=106 status=ok
// SIG undefined FUN_142537e10(void)

void FUN_142537e10(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar2 = FUN_14171a4f0();
    lVar3 = FindField<UStructProperty>(*(undefined8 *)(param_1 + 0x10),param_2);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x70) == lVar2)) {
      iVar1 = *(int *)(lVar3 + 0x44);
      *(undefined8 *)(iVar1 + param_1) = *param_3;
      *(undefined4 *)((longlong)iVar1 + 8 + param_1) = *(undefined4 *)(param_3 + 1);
    }
  }
  return;
}



// FUNCTION 142537e80 FUN_142537e80 body=1811 status=ok
// SIG undefined FUN_142537e80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142537e80(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_res18 [2];
  undefined1 auStack_298 [32];
  longlong local_278 [2];
  undefined1 local_268 [8];
  undefined1 local_260 [8];
  undefined8 local_258;
  longlong *local_250;
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong *local_230;
  longlong *local_228;
  undefined4 *local_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_178 [8];
  longlong *local_170;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_148 [8];
  longlong *local_140;
  undefined1 local_130 [8];
  longlong *local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [48];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  ulonglong local_58;
  
  if (param_2 != 0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_298;
    local_res18[0] = param_3;
    lVar7 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if ((((lVar7 != 0) && (lVar7 = FUN_1428cccb0(lVar7,param_2), lVar7 != 0)) &&
        (cVar6 = UMaterialParameterCollectionInstance::SetScalarParameterValue
                           (lVar7,local_res18[0],param_4), cVar6 == '\0')) &&
       (*(char *)(lVar7 + 0x28) == '\0')) {
      local_a8 = 0xffffffff;
      local_d8 = 0;
      local_d0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a4 = 0;
      local_98 = 0;
      local_90 = 0;
      uVar8 = FText::FromName(local_1a8,local_res18);
      local_88[0] = 4;
      FText::FText(local_78,uVar8);
      local_60 = '\x01';
      local_278[0] = 0;
      local_278[1] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_278,0);
      FGenericPlatformString::Memcpy(local_278[0],L"ParamName",0x14);
      local_228 = local_278;
      local_220 = local_88;
      FUN_1407484b0(&local_d8,local_268,&local_228,0);
      if (local_278[0] != 0) {
        FMemory::Free();
      }
      if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_70 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1a0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar2 = (int *)((longlong)local_1a0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1a0 + 8))(local_1a0,1);
          }
        }
      }
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_130,
                         L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                         ,L"KismetMaterialLibrary",L"WithInvalidParam");
      uVar8 = FTextFormat::FTextFormat(local_118,uVar8);
      uVar8 = FText::Format(local_148,uVar8,&local_d8);
      puVar9 = (undefined8 *)FUN_140973510(local_1b8,uVar8);
      local_238 = *puVar9;
      local_230 = (longlong *)puVar9[1];
      if (local_230 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_230 + 1) = (int)local_230[1] + 1;
        UNLOCK();
      }
      uVar8 = FText::FText(local_160);
      puVar9 = (undefined8 *)FUN_1416ed870(local_1c8,param_2,uVar8);
      local_248 = *puVar9;
      local_240 = (longlong *)puVar9[1];
      if (local_240 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_240 + 1) = (int)local_240[1] + 1;
        UNLOCK();
      }
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_178,L"SetScalarParameterValue called on",L"KismetMaterialLibrary",
                         L"SetScalarParamOn");
      puVar9 = (undefined8 *)FUN_140973510(local_1d8,uVar8);
      local_258 = *puVar9;
      local_250 = (longlong *)puVar9[1];
      if (local_250 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_250 + 1) = (int)local_250[1] + 1;
        UNLOCK();
      }
      FName::FName(local_260,&DAT_1450e13fc,1);
      uVar8 = FText::FText(local_190);
      uVar10 = FUN_14161fb50(local_108,local_260);
      puVar9 = (undefined8 *)FMessageLog::Warning(uVar10,local_1e8,uVar8);
      puVar9 = (undefined8 *)FUN_141621960(*puVar9,local_1f8,&local_258);
      puVar9 = (undefined8 *)FUN_141621960(*puVar9,local_208,&local_248);
      FUN_141621960(*puVar9,local_218,&local_238);
      if (local_210 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_210 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_210)(local_210);
          LOCK();
          piVar2 = (int *)((longlong)local_210 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_210 + 8))(local_210,1);
          }
        }
      }
      if (local_200 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_200 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_200)(local_200);
          LOCK();
          piVar2 = (int *)((longlong)local_200 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_200 + 8))(local_200,1);
          }
        }
      }
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1f0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1f0)(local_1f0);
          LOCK();
          piVar2 = (int *)((longlong)local_1f0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1f0 + 8))(local_1f0,1);
          }
        }
      }
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1e0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1e0)(local_1e0);
          LOCK();
          piVar2 = (int *)((longlong)local_1e0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1e0 + 8))(local_1e0,1);
          }
        }
      }
      FMessageLog::~FMessageLog(local_108);
      if (local_188 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_188 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_188)(local_188);
          LOCK();
          piVar2 = (int *)((longlong)local_188 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_188 + 8))(local_188,1);
          }
        }
      }
      plVar1 = local_250;
      if (local_250 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_250 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_250)(local_250);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1d0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1d0)(local_1d0);
          LOCK();
          piVar2 = (int *)((longlong)local_1d0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1d0 + 8))(local_1d0,1);
          }
        }
      }
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_170 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar2 = (int *)((longlong)local_170 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_170 + 8))(local_170,1);
          }
        }
      }
      plVar1 = local_240;
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_240 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1c0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar2 = (int *)((longlong)local_1c0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1c0 + 8))(local_1c0,1);
          }
        }
      }
      if (local_158 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_158 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_158)(local_158);
          LOCK();
          piVar2 = (int *)((longlong)local_158 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_158 + 8))(local_158,1);
          }
        }
      }
      plVar1 = local_230;
      if (local_230 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_230 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_230)(local_230);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1b0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar2 = (int *)((longlong)local_1b0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_140 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar2 = (int *)((longlong)local_140 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_140 + 8))(local_140,1);
          }
        }
      }
      if (local_128 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_128 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_128)(local_128);
          LOCK();
          piVar2 = (int *)((longlong)local_128 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_128 + 8))(local_128,1);
          }
        }
      }
      local_90 = 0;
      *(undefined1 *)(lVar7 + 0x28) = 1;
      if (local_98 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_d8);
    }
  }
  return;
}



// FUNCTION 1425385a0 FUN_1425385a0 body=255 status=ok
// SIG undefined FUN_1425385a0(void)

void FUN_1425385a0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (param_1 != 0) {
    local_28 = *(longlong *)(param_1 + 0x10);
    if (((int)param_2 == 0) && ((int)((ulonglong)param_2 >> 0x20) == 0)) {
      lVar2 = 0;
    }
    else {
      if (local_28 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = *(longlong *)(local_28 + 0x38);
      }
      local_18 = 0xffffffff;
      local_14 = 0x101;
      local_12 = 0;
      FUN_14252ca00(&local_28);
      while ((lVar2 = 0, local_20 != 0 &&
             (lVar2 = local_20, *(longlong *)(local_20 + 0x18) != param_2))) {
        local_20 = *(longlong *)(local_20 + 0x28);
        FUN_14252ca00(&local_28);
      }
    }
    puVar1 = (undefined4 *)(*(int *)(lVar2 + 0x44) + param_1);
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    local_28 = *(longlong *)(param_3 + 4);
    FString::FString(&local_20,param_3 + 6);
    FSoftObjectPath::operator=(puVar1 + 4,&local_28);
  }
  return;
}



// FUNCTION 1425386a0 FUN_1425386a0 body=255 status=ok
// SIG undefined FUN_1425386a0(void)

void FUN_1425386a0(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (param_1 != 0) {
    local_28 = *(longlong *)(param_1 + 0x10);
    if (((int)param_2 == 0) && ((int)((ulonglong)param_2 >> 0x20) == 0)) {
      lVar2 = 0;
    }
    else {
      if (local_28 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = *(longlong *)(local_28 + 0x38);
      }
      local_18 = 0xffffffff;
      local_14 = 0x101;
      local_12 = 0;
      FUN_14252cae0(&local_28);
      while ((lVar2 = 0, local_20 != 0 &&
             (lVar2 = local_20, *(longlong *)(local_20 + 0x18) != param_2))) {
        local_20 = *(longlong *)(local_20 + 0x28);
        FUN_14252cae0(&local_28);
      }
    }
    puVar1 = (undefined4 *)(*(int *)(lVar2 + 0x44) + param_1);
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    local_28 = *(longlong *)(param_3 + 4);
    FString::FString(&local_20,param_3 + 6);
    FSoftObjectPath::operator=(puVar1 + 4,&local_28);
  }
  return;
}



// FUNCTION 1425387a0 SetStringPropertyByName body=210 status=ok
// SIG undefined SetStringPropertyByName(void)

void UKismetSystemLibrary::SetStringPropertyByName
               (longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_1 != 0) &&
     ((local_28 = *(longlong *)(param_1 + 0x10), (int)param_2 != 0 ||
      ((int)((ulonglong)param_2 >> 0x20) != 0)))) {
    if (local_28 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(local_28 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    FUN_14252cbc0(&local_28);
    if (local_20 != 0) {
      while (*(longlong *)(local_20 + 0x18) != param_2) {
        local_20 = *(longlong *)(local_20 + 0x28);
        FUN_14252cbc0(&local_28);
        if (local_20 == 0) {
          return;
        }
      }
      FString::operator=(*(int *)(local_20 + 0x44) + param_1,param_3);
    }
  }
  return;
}



// FUNCTION 142538880 SetSuppressViewportTransitionMessage body=100 status=ok
// SIG undefined SetSuppressViewportTransitionMessage(void)

void UKismetSystemLibrary::SetSuppressViewportTransitionMessage
               (undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar1 != 0) {
    lVar2 = FUN_1428cc3e0(lVar1);
    if (lVar2 != 0) {
      lVar2 = FUN_1428cc3e0(lVar1);
      if (*(longlong *)(lVar2 + 0x70) != 0) {
        lVar1 = FUN_1428cc3e0(lVar1);
        *(undefined1 *)(*(longlong *)(lVar1 + 0x70) + 0x98) = param_2;
      }
    }
  }
  return;
}



// FUNCTION 1425389c0 SetTangents body=445 status=ok
// SIG undefined SetTangents(void)

void UInterpTrackMove::SetTangents
               (longlong param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x98) & 8;
  if (param_2 == (uVar3 != 0) - 1) {
    *(undefined4 *)((longlong)param_3 * 0x2c + 0x10 + *(longlong *)(param_1 + 0x48)) = param_4;
    *(undefined4 *)((longlong)param_3 * 0x2c + 0x1c + *(longlong *)(param_1 + 0x48)) = param_5;
    return;
  }
  iVar1 = 1;
  if (uVar3 == 0) {
    iVar1 = -1;
  }
  if (param_2 == iVar1) {
    *(undefined4 *)((longlong)param_3 * 0x2c + 0x14 + *(longlong *)(param_1 + 0x48)) = param_4;
    *(undefined4 *)((longlong)param_3 * 0x2c + 0x20 + *(longlong *)(param_1 + 0x48)) = param_5;
    return;
  }
  iVar1 = 2;
  if (uVar3 == 0) {
    iVar1 = -1;
  }
  if (param_2 == iVar1) {
    *(undefined4 *)((longlong)param_3 * 0x2c + 0x18 + *(longlong *)(param_1 + 0x48)) = param_4;
    *(undefined4 *)((longlong)param_3 * 0x2c + 0x24 + *(longlong *)(param_1 + 0x48)) = param_5;
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x98) & 0x11;
  if (uVar2 == 0x10) {
    if (uVar3 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 3;
    }
  }
  else {
    iVar1 = -1;
    uVar3 = *(uint *)(param_1 + 0x98) & 8;
  }
  if (param_2 != iVar1) {
    iVar1 = -1;
    if ((uVar2 == 0x10) && (iVar1 = 1, uVar3 != 0)) {
      iVar1 = 4;
    }
    if (param_2 != iVar1) {
      iVar1 = -1;
      if ((uVar2 == 0x10) && (iVar1 = 2, uVar3 != 0)) {
        iVar1 = 5;
      }
      if (param_2 == iVar1) {
        *(undefined4 *)((longlong)param_3 * 0x2c + 0x18 + *(longlong *)(param_1 + 0x60)) = param_4;
        *(undefined4 *)((longlong)param_3 * 0x2c + 0x24 + *(longlong *)(param_1 + 0x60)) = param_5;
      }
      return;
    }
    *(undefined4 *)((longlong)param_3 * 0x2c + 0x14 + *(longlong *)(param_1 + 0x60)) = param_4;
    *(undefined4 *)((longlong)param_3 * 0x2c + 0x20 + *(longlong *)(param_1 + 0x60)) = param_5;
    return;
  }
  *(undefined4 *)((longlong)param_3 * 0x2c + 0x10 + *(longlong *)(param_1 + 0x60)) = param_4;
  *(undefined4 *)((longlong)param_3 * 0x2c + 0x1c + *(longlong *)(param_1 + 0x60)) = param_5;
  return;
}



// FUNCTION 142538c00 SetTextPropertyByName body=210 status=ok
// SIG undefined SetTextPropertyByName(void)

void UKismetSystemLibrary::SetTextPropertyByName
               (longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if ((param_1 != 0) &&
     ((local_28 = *(longlong *)(param_1 + 0x10), (int)param_2 != 0 ||
      ((int)((ulonglong)param_2 >> 0x20) != 0)))) {
    if (local_28 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(local_28 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    FUN_14252cca0(&local_28);
    if (local_20 != 0) {
      while (*(longlong *)(local_20 + 0x18) != param_2) {
        local_20 = *(longlong *)(local_20 + 0x28);
        FUN_14252cca0(&local_28);
        if (local_20 == 0) {
          return;
        }
      }
      FText::operator=(*(int *)(local_20 + 0x44) + param_1,param_3);
    }
  }
  return;
}



// FUNCTION 142538ce0 SetTransformPropertyByName body=115 status=ok
// SIG undefined SetTransformPropertyByName(void)

void UKismetSystemLibrary::SetTransformPropertyByName
               (longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar3 = FUN_14171a670();
    lVar4 = FindField<UStructProperty>(*(undefined8 *)(param_1 + 0x10),param_2);
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x70) == lVar3)) {
      uVar2 = param_3[1];
      lVar3 = (longlong)*(int *)(lVar4 + 0x44);
      *(undefined8 *)(lVar3 + param_1) = *param_3;
      ((undefined8 *)(lVar3 + param_1))[1] = uVar2;
      uVar2 = param_3[3];
      puVar1 = (undefined8 *)(lVar3 + 0x10 + param_1);
      *puVar1 = param_3[2];
      puVar1[1] = uVar2;
      uVar2 = param_3[5];
      puVar1 = (undefined8 *)(lVar3 + 0x20 + param_1);
      *puVar1 = param_3[4];
      puVar1[1] = uVar2;
    }
  }
  return;
}



// FUNCTION 142538d60 SetUserActivity body=5 status=ok
// SIG undefined SetUserActivity(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UKismetSystemLibrary::SetUserActivity(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x10) == DAT_146b184b1) {
    FString::operator=(&DAT_146b188c8,param_1);
    DAT_146b188d8 = *(undefined1 *)(param_1 + 0x10);
    bVar2 = false;
    DAT_14653556c = DAT_14653556c + 1;
    lVar7 = (longlong)(DAT_146535560 + -1);
    if (-1 < DAT_146535560 + -1) {
      lVar6 = lVar7 << 4;
      bVar2 = false;
      do {
        if (((*(int *)(lVar6 + 8 + DAT_146535558) == 0) ||
            (plVar1 = *(longlong **)(lVar6 + DAT_146535558), plVar1 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar1 + 0x40))(plVar1,&DAT_146b188c8), cVar4 == '\0')) {
          bVar2 = true;
        }
        lVar6 = lVar6 + -0x10;
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    iVar3 = DAT_146535560;
    DAT_14653556c = DAT_14653556c + -1;
    if ((bVar2) && (DAT_14653556c < 1)) {
      iVar5 = 0;
      if (0 < DAT_146535560) {
        lVar7 = 0;
        do {
          if (((*(int *)(lVar7 + 8 + DAT_146535558) == 0) ||
              (*(longlong **)(lVar7 + DAT_146535558) == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(**(longlong **)(lVar7 + DAT_146535558) + 0x10))(), cVar4 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_146535558,iVar5,1,1);
          }
          else {
            iVar5 = iVar5 + 1;
            lVar7 = lVar7 + 0x10;
          }
        } while (iVar5 < DAT_146535560);
      }
      _DAT_146535568 = DAT_146535560 * 2;
      if (_DAT_146535568 < 3) {
        _DAT_146535568 = 2;
      }
      if ((_DAT_146535568 < iVar3) && (DAT_146535564 != DAT_146535560)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146535558);
      }
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1464af628,&DAT_146b188c8);
  }
  return;
}



// FUNCTION 142538d70 FUN_142538d70 body=1781 status=ok
// SIG undefined FUN_142538d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142538d70(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 local_res18 [2];
  undefined1 auStack_288 [32];
  longlong local_268 [2];
  undefined1 local_258 [8];
  undefined1 local_250 [8];
  undefined8 local_248;
  longlong *local_240;
  undefined8 local_238;
  longlong *local_230;
  undefined8 local_228;
  longlong *local_220;
  longlong *local_218;
  undefined4 *local_210;
  undefined1 local_208 [8];
  longlong *local_200;
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  undefined1 local_1e8 [8];
  longlong *local_1e0;
  undefined1 local_1d8 [8];
  longlong *local_1d0;
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  undefined1 local_1a8 [8];
  longlong *local_1a0;
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [48];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78 [4];
  undefined1 local_68 [8];
  longlong *local_60;
  char local_50;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_288;
    local_res18[0] = param_3;
    lVar7 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
    if ((((lVar7 != 0) && (lVar7 = FUN_1428cccb0(lVar7,param_2), lVar7 != 0)) &&
        (cVar6 = UMaterialParameterCollectionInstance::SetVectorParameterValue
                           (lVar7,local_res18[0],param_4), cVar6 == '\0')) &&
       (*(char *)(lVar7 + 0x28) == '\0')) {
      local_c8 = 0;
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_94 = 0;
      local_88 = 0;
      local_80 = 0;
      local_98 = 0xffffffff;
      uVar8 = FText::FromName(local_198,local_res18);
      local_78[0] = 4;
      FText::FText(local_68,uVar8);
      local_50 = '\x01';
      local_268[0] = 0;
      local_268[1] = 10;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_268,0);
      FGenericPlatformString::Memcpy(local_268[0],L"ParamName",0x14);
      local_218 = local_268;
      local_210 = local_78;
      FUN_1407484b0(&local_c8,local_258,&local_218,0);
      if (local_268[0] != 0) {
        FMemory::Free();
      }
      if ((local_50 != '\0') && (local_50 = '\0', local_60 != (longlong *)0x0)) {
        LOCK();
        plVar1 = local_60 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
      }
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_190 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar2 = (int *)((longlong)local_190 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_120,
                         L"with invalid ParameterName \'{ParamName}\'. This is likely due to a Blueprint error."
                         ,L"KismetMaterialLibrary",L"WithInvalidParam");
      uVar8 = FTextFormat::FTextFormat(local_108,uVar8);
      uVar8 = FText::Format(local_138,uVar8,&local_c8);
      puVar9 = (undefined8 *)FUN_140973510(local_1a8,uVar8);
      local_228 = *puVar9;
      local_220 = (longlong *)puVar9[1];
      if (local_220 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_220 + 1) = (int)local_220[1] + 1;
        UNLOCK();
      }
      uVar8 = FText::FText(local_150);
      puVar9 = (undefined8 *)FUN_1416ed870(local_1b8,param_2,uVar8);
      local_238 = *puVar9;
      local_230 = (longlong *)puVar9[1];
      if (local_230 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_230 + 1) = (int)local_230[1] + 1;
        UNLOCK();
      }
      uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_168,L"SetVectorParameterValue called on",L"KismetMaterialLibrary",
                         L"SetVectorParamOn");
      puVar9 = (undefined8 *)FUN_140973510(local_1c8,uVar8);
      local_248 = *puVar9;
      local_240 = (longlong *)puVar9[1];
      if (local_240 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_240 + 1) = (int)local_240[1] + 1;
        UNLOCK();
      }
      FName::FName(local_250,&DAT_1450e144c,1);
      uVar8 = FText::FText(local_180);
      uVar10 = FUN_14161fb50(local_f8,local_250);
      puVar9 = (undefined8 *)FMessageLog::Warning(uVar10,local_1d8,uVar8);
      puVar9 = (undefined8 *)FUN_141621960(*puVar9,local_1e8,&local_248);
      puVar9 = (undefined8 *)FUN_141621960(*puVar9,local_1f8,&local_238);
      FUN_141621960(*puVar9,local_208,&local_228);
      if (local_200 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_200 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_200)(local_200);
          LOCK();
          piVar2 = (int *)((longlong)local_200 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_200 + 8))(local_200,1);
          }
        }
      }
      if (local_1f0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1f0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1f0)(local_1f0);
          LOCK();
          piVar2 = (int *)((longlong)local_1f0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1f0 + 8))(local_1f0,1);
          }
        }
      }
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1e0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1e0)(local_1e0);
          LOCK();
          piVar2 = (int *)((longlong)local_1e0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1e0 + 8))(local_1e0,1);
          }
        }
      }
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1d0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1d0)(local_1d0);
          LOCK();
          piVar2 = (int *)((longlong)local_1d0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1d0 + 8))(local_1d0,1);
          }
        }
      }
      FMessageLog::~FMessageLog(local_f8);
      if (local_178 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_178 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_178)(local_178);
          LOCK();
          piVar2 = (int *)((longlong)local_178 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_178 + 8))(local_178,1);
          }
        }
      }
      plVar1 = local_240;
      if (local_240 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_240 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_240)(local_240);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1c0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar2 = (int *)((longlong)local_1c0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1c0 + 8))(local_1c0,1);
          }
        }
      }
      if (local_160 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_160 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_160)(local_160);
          LOCK();
          piVar2 = (int *)((longlong)local_160 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_160 + 8))(local_160,1);
          }
        }
      }
      plVar1 = local_230;
      if (local_230 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_230 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_230)(local_230);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if (local_1b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1b0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1b0)(local_1b0);
          LOCK();
          piVar2 = (int *)((longlong)local_1b0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1b0 + 8))(local_1b0,1);
          }
        }
      }
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_148 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar2 = (int *)((longlong)local_148 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_148 + 8))(local_148,1);
          }
        }
      }
      plVar1 = local_220;
      if (local_220 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_220 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_220)(local_220);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar1 + 8))(plVar1,1);
          }
        }
      }
      if (local_1a0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_1a0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_1a0)(local_1a0);
          LOCK();
          piVar2 = (int *)((longlong)local_1a0 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_1a0 + 8))(local_1a0,1);
          }
        }
      }
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_130 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar2 = (int *)((longlong)local_130 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_118 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar2 = (int *)((longlong)local_118 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
          }
        }
      }
      local_80 = 0;
      *(undefined1 *)(lVar7 + 0x28) = 1;
      if (local_88 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_c8);
    }
  }
  return;
}



// FUNCTION 142539470 FUN_142539470 body=106 status=ok
// SIG undefined FUN_142539470(void)

void FUN_142539470(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar2 = FUN_14171a6f0();
    lVar3 = FindField<UStructProperty>(*(undefined8 *)(param_1 + 0x10),param_2);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x70) == lVar2)) {
      iVar1 = *(int *)(lVar3 + 0x44);
      *(undefined8 *)(iVar1 + param_1) = *param_3;
      *(undefined4 *)((longlong)iVar1 + 8 + param_1) = *(undefined4 *)(param_3 + 1);
    }
  }
  return;
}



// FUNCTION 1425394e0 FUN_1425394e0 body=565 status=ok
// SIG undefined FUN_1425394e0(void)

void FUN_1425394e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  longlong **pplVar9;
  bool bVar10;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_30;
  longlong *local_28;
  int local_20;
  
  lVar3 = DAT_146b17150;
  if (DAT_146b17150 != 0) {
    lVar5 = FUN_142937670();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((bVar10) && (plVar2 = *(longlong **)(lVar3 + 0x11e8), plVar2 != (longlong *)0x0)) {
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
      while (!bVar10) {
        LOCK();
        bVar10 = iVar4 == (int)plVar2[1];
        if (bVar10) {
          *(int *)(plVar2 + 1) = iVar4 + 1;
        }
        UNLOCK();
        if (bVar10) {
          lVar3 = *(longlong *)(lVar3 + 0x11e0);
          if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x498) != 0)) {
            FText::FText(local_48,param_1,lVar5 + 0x88,param_4,lVar3);
            local_30 = 1;
            local_28 = (longlong *)0x0;
            local_20 = 0;
            FText::operator=(lVar3 + 0x310,local_48);
            *(undefined1 *)(lVar3 + 0x328) = local_30;
            pplVar9 = (longlong **)(lVar3 + 0x330);
            if (&local_28 != pplVar9) {
              if ((local_20 == 0) || (local_28 == (longlong *)0x0)) {
                if ((*(int *)(lVar3 + 0x338) != 0) && (plVar6 = *pplVar9, plVar6 != (longlong *)0x0)
                   ) {
                  (**(code **)(*plVar6 + 0x28))(plVar6,0);
                  if (*pplVar9 != (longlong *)0x0) {
                    plVar6 = (longlong *)FMemory::Realloc(*pplVar9,0,0);
                    *pplVar9 = plVar6;
                  }
                  *(undefined4 *)(lVar3 + 0x338) = 0;
                }
              }
              else {
                (**(code **)(*local_28 + 0x30))(local_28,pplVar9);
              }
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_40 + 1;
              lVar5 = *plVar6;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)lVar5 == 1) {
                (**(code **)*local_40)(local_40);
                LOCK();
                piVar1 = (int *)((longlong)local_40 + 0xc);
                iVar4 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                  (**(code **)(*local_40 + 8))(local_40,1);
                }
              }
            }
            plVar6 = *(longlong **)(lVar3 + 0x498);
            puVar7 = (undefined8 *)FText::ToString(param_1);
            if (*(int *)(puVar7 + 1) == 0) {
              puVar8 = &DAT_143f3eda8;
            }
            else {
              puVar8 = (undefined2 *)*puVar7;
            }
            (**(code **)(*plVar6 + 0xd0))(plVar6,puVar8);
          }
          LOCK();
          plVar6 = plVar2 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 != 1) {
            return;
          }
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 != 1) {
            return;
          }
          (**(code **)(*plVar2 + 8))(plVar2,1);
          return;
        }
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
      }
    }
  }
  return;
}



// FUNCTION 142539720 FUN_142539720 body=252 status=ok
// SIG undefined FUN_142539720(void)

void FUN_142539720(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  
  if (*(longlong *)(param_1 + 0x250) != param_2) {
    plVar1 = (longlong *)(param_1 + 0xa0);
    plVar2 = (longlong *)*plVar1;
    plVar8 = plVar2 + *(int *)(param_1 + 0xa8);
    do {
      if (plVar8 == plVar2) {
        iVar7 = -1;
        goto LAB_142539773;
      }
      plVar8 = plVar8 + -1;
    } while (*plVar8 != param_2);
    iVar7 = (int)((longlong)plVar8 - (longlong)plVar2 >> 3);
    if (iVar7 != 0) {
LAB_142539773:
      if ((*plVar2 == 0) || (cVar6 = FUN_142510e10(), cVar6 != '\0')) {
        puVar3 = (undefined8 *)*plVar1;
        uVar4 = *puVar3;
        *puVar3 = puVar3[iVar7];
        puVar3[iVar7] = uVar4;
      }
      else {
        *(undefined8 *)(*plVar1 + (longlong)iVar7 * 8) = 0;
        iVar7 = *(int *)(param_1 + 0xa8);
        *(int *)(param_1 + 0xa8) = iVar7 + 1;
        if (*(int *)(param_1 + 0xac) < iVar7 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar7);
        }
        _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + 8),(void *)*plVar1,(longlong)iVar7 << 3);
        *(longlong *)*plVar1 = param_2;
      }
    }
    lVar5 = *(longlong *)(param_1 + 0x250);
    *(longlong *)(param_1 + 0x250) = param_2;
    if (lVar5 != 0) {
      FUN_142227350(lVar5,0,1);
    }
  }
  return;
}



// FUNCTION 142539820 ShowAdBanner body=110 status=ok
// SIG undefined ShowAdBanner(void)

void UKismetSystemLibrary::ShowAdBanner(undefined4 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res18 [16];
  
  puVar2 = (undefined8 *)FName::FName(local_res18,"Advertising",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x40))(plVar4,param_2,param_1);
  }
  return;
}



// FUNCTION 142539890 ShowInterstitialAd body=83 status=ok
// SIG undefined ShowInterstitialAd(void)

void UKismetSystemLibrary::ShowInterstitialAd(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8 [32];
  
  puVar2 = (undefined8 *)FName::FName(local_res8,"Advertising",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar1);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
  if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425398d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x70))(plVar4);
    return;
  }
  return;
}



// FUNCTION 1425398f0 FUN_1425398f0 body=158 status=ok
// SIG undefined FUN_1425398f0(void)

void FUN_1425398f0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  uVar3 = uVar6;
  if (param_1 != (longlong *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x148))();
    lVar1 = param_1[0xa1];
    if (lVar1 != 0) {
      lVar4 = ULocalPlayer::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar6 = (ulonglong)*(uint *)(lVar1 + 0x108);
      }
    }
  }
  plVar5 = (longlong *)UOnlineEngineInterface::Get();
                    /* WARNING: Could not recover jumptable at 0x000142539987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x378))(plVar5,uVar3,uVar6);
  return;
}



// FUNCTION 142539990 ShowPlatformSpecificLeaderboardScreen body=37 status=ok
// SIG undefined ShowPlatformSpecificLeaderboardScreen(void)

void UKismetSystemLibrary::ShowPlatformSpecificLeaderboardScreen(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)UOnlineEngineInterface::Get();
                    /* WARNING: Could not recover jumptable at 0x0001425399ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x370))(plVar1,0,param_1);
  return;
}



// FUNCTION 1425399c0 FUN_1425399c0 body=799 status=ok
// SIG undefined FUN_1425399c0(void)

void FUN_1425399c0(longlong param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  void *pvVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong local_res18;
  ulonglong local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    uVar7 = 0;
    local_68 = 0;
    local_60 = 0;
    iVar6 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    uVar15 = uVar7;
    uVar16 = uVar7;
    if (0 < *(int *)(param_1 + 0xa8)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_68);
      uVar16 = local_68;
      uVar7 = local_60 >> 0x20;
      iVar6 = (int)local_60;
      uVar15 = 0;
      if (0 < *(int *)(param_1 + 0xa8)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_58);
        uVar15 = local_50 & 0xffffffff;
      }
    }
    iVar14 = (int)uVar15;
    uVar2 = *(undefined8 *)(param_1 + 0x250);
    iVar13 = iVar6 + 1;
    local_60._0_4_ = iVar13;
    if ((int)uVar7 < iVar13) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,iVar6);
      uVar7 = (ulonglong)local_60._4_4_;
      uVar16 = local_68;
    }
    iVar13 = (int)local_60;
    uVar5 = (uint)uVar7;
    *(undefined8 *)(uVar16 + (longlong)iVar6 * 8) = uVar2;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      FUN_1428c4d10(*(longlong *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x250));
    }
    puVar1 = (ulonglong *)(param_1 + 0xa0);
    plVar9 = (longlong *)*puVar1;
    local_res18 = 0;
    uVar11 = (longlong)*(int *)(param_1 + 0xa8) & 0x1fffffffffffffff;
    if (plVar9 + *(int *)(param_1 + 0xa8) < plVar9) {
      uVar11 = 0;
    }
    if (uVar11 != 0) {
      do {
        lVar8 = 0;
        lVar3 = *plVar9;
        if ((lVar3 != 0) && (lVar3 != *(longlong *)(param_1 + 0x250))) {
          uVar5 = *(uint *)(lVar3 + 0xc);
          if ((int)uVar5 < (int)DAT_1469e91c4) {
            uVar10 = uVar5 & 0xffff;
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 0xffff;
              uVar10 = uVar10 - 0x10000;
            }
            lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                    (longlong)(int)uVar10 * 0x18;
          }
          if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) == 0) {
            if ((*(longlong *)(lVar3 + 0x120) == 0) || (*(longlong *)(lVar3 + 0x120) == 0x11a)) {
              iVar6 = FUN_142235230(lVar3);
              if (iVar6 != 3) goto LAB_142539b7d;
LAB_142539bd3:
              cVar4 = *(char *)(lVar3 + 0x128);
            }
            else {
              iVar6 = FUN_142235230(lVar3);
              if (iVar6 == 3) goto LAB_142539bd3;
LAB_142539b7d:
              cVar4 = *(char *)(lVar3 + 0x95);
            }
            if (cVar4 == '\0') {
              local_60._0_4_ = iVar13 + 1;
              if ((int)uVar7 < (int)local_60) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,iVar13);
                uVar7 = (ulonglong)local_60._4_4_;
                uVar16 = local_68;
              }
              *(longlong *)(uVar16 + (longlong)iVar13 * 8) = lVar3;
              iVar13 = (int)local_60;
            }
            else {
              iVar6 = (int)uVar15;
              uVar5 = iVar6 + 1;
              local_50 = CONCAT44(local_50._4_4_,uVar5);
              if (local_50._4_4_ < (int)uVar5) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,uVar15);
                uVar5 = (uint)local_50;
              }
              uVar15 = (ulonglong)uVar5;
              *(longlong *)((longlong)local_58 + (longlong)iVar6 * 8) = lVar3;
              if (*(longlong *)(param_1 + 0xc0) != 0) {
                FUN_1428c4d10(*(longlong *)(param_1 + 0xc0),lVar3);
              }
            }
          }
        }
        uVar5 = (uint)uVar7;
        iVar14 = (int)uVar15;
        plVar9 = plVar9 + 1;
        local_res18 = local_res18 + 1;
      } while (local_res18 != uVar11);
    }
    pvVar12 = local_58;
    if (iVar14 != 0) {
      if ((int)uVar5 < iVar14 + iVar13) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_68);
        uVar16 = local_68;
        iVar13 = (int)local_60;
        uVar5 = local_60._4_4_;
      }
      pvVar12 = local_58;
      _guard_xfg_dispatch_icall_nop
                ((void *)(uVar16 + (longlong)iVar13 * 8),local_58,(longlong)iVar14 << 3);
      iVar13 = iVar13 + iVar14;
    }
    if (puVar1 != &local_68) {
      if (*puVar1 != 0) {
        FMemory::Free();
      }
      *puVar1 = uVar16;
      uVar16 = 0;
      *(int *)(param_1 + 0xa8) = iVar13;
      *(uint *)(param_1 + 0xac) = uVar5;
    }
    if (pvVar12 != (void *)0x0) {
      FMemory::Free(pvVar12);
    }
    if (uVar16 != 0) {
      FMemory::Free(uVar16);
    }
  }
  return;
}



// FUNCTION 142539ce0 SortActorsHierarchy body=740 status=ok
// SIG undefined SortActorsHierarchy(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void SortActorsHierarchy(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int *piVar11;
  undefined1 auStack_138 [32];
  int local_118 [2];
  longlong local_110;
  longlong *local_108;
  int local_100 [2];
  longlong local_f8;
  LARGE_INTEGER local_f0;
  longlong local_e8;
  int *local_e0;
  undefined8 local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  int local_a4;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  QueryPerformanceCounter(&local_f0);
  piVar11 = (int *)0x0;
  local_a8 = 0xffffffff;
  local_d0 = 0;
  local_a4 = 0;
  local_d8 = 0;
  local_cc = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  piVar2 = piVar11;
  piVar3 = piVar11;
  if (0 < (int)param_1[1]) {
    do {
      if ((*(longlong *)((longlong)piVar3 + *param_1) != 0) &&
         (local_f8 = FUN_14222e2a0(), local_f8 != 0)) {
        local_110 = *param_1 + (longlong)(int)piVar2 * 8;
        local_108 = &local_f8;
        FUN_140a9d130(&local_d8,local_118,&local_110,0);
      }
      uVar4 = (int)piVar2 + 1;
      piVar2 = (int *)(ulonglong)uVar4;
      piVar3 = piVar3 + 2;
    } while ((int)uVar4 < (int)param_1[1]);
  }
  if (local_d0 != local_a4) {
    local_f0.QuadPart = (LONGLONG)local_88;
    local_108 = (longlong *)0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0xffffffff;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    local_110 = 0;
    piVar2 = piVar11;
    while( true ) {
      local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
      if (((int)piVar2 < 0) && ((int)piVar2 != 0)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_110,0);
      }
      FLevelSortUtils::FindAndRemoveParentChain(&local_d8);
      lVar1 = local_110;
      iVar8 = (int)local_108;
      uVar6 = (ulonglong)local_108 & 0xffffffff;
      if (0 < (int)local_108) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(local_88,local_100,*(undefined8 *)(local_110 + (longlong)((int)local_108 + -1) * 8)
                );
        piVar2 = piVar11;
        if (local_100[0] != -1) {
          piVar2 = (int *)(local_88[0] + (longlong)local_100[0] * 0x18);
        }
        piVar3 = piVar2 + 2;
        if (piVar2 == (int *)0x0) {
          piVar3 = piVar11;
        }
        iVar7 = 0;
        if (piVar3 != (int *)0x0) {
          iVar7 = *piVar3;
        }
        if (0 < iVar8) {
          local_e0 = local_118;
          iVar8 = iVar7 + -1 + iVar8;
          lVar5 = lVar1;
          do {
            local_118[0] = iVar8;
            local_e8 = lVar5;
            FUN_1409bf4b0(local_88,&local_f8,&local_e8,0);
            iVar8 = iVar8 + -1;
            lVar5 = lVar5 + 8;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
      }
      if (local_d0 == local_a4) break;
      piVar2 = (int *)((ulonglong)local_108 >> 0x20);
    }
    TMergeSort<TRotationInPlaceMerge<TJugglingRotation<FEuclidDivisionGCD>_>,2>::
    Sort<AActor_*,FLevelSortUtils::FDepthSort>(*param_1,(int)param_1[1],&local_f0);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
    local_40 = 0;
    if (local_48 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (local_88);
  }
  QueryPerformanceCounter(&local_f0);
  iVar8 = (int)param_1[1];
  uVar6 = (ulonglong)iVar8;
  if (0 < iVar8) {
    plVar10 = (longlong *)(*param_1 + -8 + uVar6 * 8);
    uVar9 = uVar6;
    do {
      uVar4 = (uint)uVar6;
      if (*plVar10 != 0) break;
      uVar4 = uVar4 - 1;
      uVar6 = (ulonglong)uVar4;
      uVar9 = uVar9 - 1;
      plVar10 = plVar10 + -1;
    } while (0 < (longlong)uVar9);
    if ((int)uVar4 < iVar8) {
      *(uint *)(param_1 + 1) = uVar4;
      TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  local_90 = 0;
  if (local_98 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_d8);
  return;
}



// FUNCTION 142539fd0 SphereOverlapActors body=230 status=ok
// SIG undefined SphereOverlapActors(void)

bool UKismetSystemLibrary::SphereOverlapActors
               (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int iVar1;
  char cVar2;
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28 [4];
  
  *(undefined4 *)(param_7 + 8) = 0;
  if (*(int *)(param_7 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_7,0);
  }
  local_30 = *(undefined4 *)(param_2 + 1);
  local_38 = *param_2;
  local_28[0] = 0;
  local_28[1] = 0;
  cVar2 = FUN_14253a0c0(param_1,&local_38,param_3,param_4,0,param_6,local_28);
  if (cVar2 != '\0') {
    FUN_142525a60(local_28,param_5,param_7);
  }
  iVar1 = *(int *)(param_7 + 8);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return 0 < iVar1;
}



// FUNCTION 14253a0c0 FUN_14253a0c0 body=697 status=ok
// SIG undefined FUN_14253a0c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14253a0c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6,longlong *param_7)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_148 [32];
  uint *local_128;
  undefined4 *local_120;
  undefined1 *local_118;
  undefined1 local_108 [8];
  uint local_100;
  undefined1 local_fc;
  longlong local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_d8 [16];
  undefined1 local_c8;
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  iVar8 = 0;
  *(undefined4 *)(param_7 + 1) = 0;
  if (*(int *)((longlong)param_7 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_7,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146afc6e0) && (_Init_thread_header(&DAT_146afc6e0), DAT_146afc6e0 == -1))
  {
    FName::FName(&DAT_146afc6d8,"SphereOverlapComponents",1);
    _Init_thread_footer(&DAT_146afc6e0);
  }
  local_128 = (uint *)0x0;
  FUN_1422ffb20(local_d8,DAT_146afc6d8,local_108,0);
  FCollisionQueryParams::AddIgnoredActors(local_d8,param_6);
  local_c8 = 1;
  local_f8 = 0;
  local_f0 = 0;
  local_100 = 0;
  local_fc = 0;
  iVar9 = iVar8;
  while( true ) {
    if ((iVar9 < 0) || ((int)param_4[1] <= iVar9)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) break;
    uVar1 = *(undefined1 *)((longlong)iVar9 + *param_4);
    uVar5 = UCollisionProfile::Get();
    uVar4 = UCollisionProfile::ConvertToCollisionChannel(uVar5,0,uVar1);
    local_100 = local_100 | 1 << (uVar4 & 0x1f);
    iVar9 = iVar9 + 1;
  }
  lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar6 != 0) {
    local_118 = local_d8;
    local_120 = &local_e8;
    local_e8 = 2;
    local_128 = &local_100;
    local_e4 = param_3;
    UWorld::OverlapMultiByObjectType(lVar6,&local_f8,param_2,&DAT_1464aa810);
  }
  if (0 < (int)local_f0) {
    do {
      lVar6 = local_f8 + ((longlong)iVar8 * 3 + 1) * 8;
      cVar3 = FWeakObjectPtr::IsValid(lVar6);
      if (cVar3 != '\0') {
        if (param_5 != 0) {
          lVar7 = FWeakObjectPtr::Get(lVar6);
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(param_5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(param_5 + 0x90) * 8) != param_5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_14253a2c6;
        }
        uVar5 = FWeakObjectPtr::Get(lVar6);
        iVar9 = (int)param_7[1];
        *(int *)(param_7 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_7 + 0xc) < iVar9 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_7,iVar9);
        }
        *(undefined8 *)(*param_7 + (longlong)iVar9 * 8) = uVar5;
      }
LAB_14253a2c6:
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)local_f0);
  }
  lVar6 = param_7[1];
  if (local_f8 != 0) {
    FMemory::Free();
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return 0 < (int)lVar6;
}



// FUNCTION 14253a380 FUN_14253a380 body=437 status=ok
// SIG undefined FUN_14253a380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_14253a380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10)

{
  undefined1 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined8 local_110;
  undefined4 *local_108;
  undefined1 *local_100;
  undefined *local_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_d8 [72];
  longlong local_90;
  longlong local_70;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar2 = UEngineTypes::ConvertToCollisionChannel(param_5);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146afc770) {
    _Init_thread_header(&DAT_146afc770);
    if (DAT_146afc770 == -1) {
      FName::FName(&DAT_146afc768,L"SphereTraceMulti",1);
      _Init_thread_footer(&DAT_146afc770);
    }
  }
  local_118 = (undefined4 *)CONCAT71(local_118._1_7_,param_10);
  local_110 = param_1;
  FUN_14251be80(local_d8,DAT_146afc768,param_6,param_7);
  lVar3 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    local_f8 = &DAT_146aefe68;
    local_100 = local_d8;
    local_e8 = 2;
    local_108 = &local_e8;
    local_110 = CONCAT44(local_110._4_4_,uVar2);
    local_118 = &DAT_1464aa810;
    local_e4 = param_4;
    uVar1 = UWorld::SweepMultiByChannel(lVar3,param_9,param_2,param_3);
  }
  if (local_70 != 0) {
    FMemory::Free();
  }
  if (local_90 != 0) {
    FMemory::Free();
  }
  return uVar1;
}


