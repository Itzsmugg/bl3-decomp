// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142647fe0 FUN_142647fe0 body=192 status=ok
// SIG undefined FUN_142647fe0(void)

void FUN_142647fe0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x38);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"ResilienceDistribution",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x3f000000;
      *(longlong *)(param_1 + 0x68) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x70);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"ResilienceScaleOverLifeDistribution",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x3f800000;
      *(longlong *)(param_1 + 0xa0) = lVar3;
    }
  }
  return;
}



// FUNCTION 1426480a0 FUN_1426480a0 body=191 status=ok
// SIG undefined FUN_1426480a0(void)

void FUN_1426480a0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStartColor",1);
      uVar2 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
    }
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0x88);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStartAlpha",1);
      lVar4 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar4 + 0x38) = 0x3f800000;
      *(longlong *)(param_1 + 0xb8) = lVar4;
    }
  }
  return;
}



// FUNCTION 142648160 FUN_142648160 body=162 status=ok
// SIG undefined FUN_142648160(void)

void FUN_142648160(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionColorOverLife",1);
    uVar2 = NewObject<UDistributionVectorConstantCurve>(param_1,*puVar1,0,0,0,0);
    *(undefined8 *)(param_1 + 0x80) = uVar2;
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionAlphaOverLife",1);
    lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
    *(undefined4 *)(lVar3 + 0x38) = 0x3f800000;
    *(longlong *)(param_1 + 0xb8) = lVar3;
  }
  return;
}



// FUNCTION 142648210 FUN_142648210 body=344 status=ok
// SIG undefined FUN_142648210(void)

void FUN_142648210(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar4 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    iVar6 = 0;
    if (cVar4 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionColorScaleOverLife",1);
      uVar2 = NewObject<UDistributionVectorConstantCurve>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
    }
    cVar4 = FRawDistributionFloat::IsCreated(param_1 + 0x88);
    if (cVar4 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionAlphaScaleOverLifeConstant",1);
      lVar3 = NewObject<UDistributionFloatConstantCurve>(param_1,*puVar1,0,0,0,0);
      do {
        uVar5 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x58))(lVar3 + 0x28,(float)iVar6);
        (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x78))(lVar3 + 0x28,uVar5,1);
        (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x70))(lVar3 + 0x28,0,uVar5,1.0 - (float)iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
      *(longlong *)(param_1 + 0xb8) = lVar3;
    }
  }
  return;
}



// FUNCTION 142648370 FUN_142648370 body=222 status=ok
// SIG undefined FUN_142648370(void)

void FUN_142648370(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x48);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"RequiredDistributionSpawnCount",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x3f800000;
      *(longlong *)(param_1 + 0x78) = lVar3;
    }
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x88);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"RequiredDistributionInheritVelocityScale",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0x3f8000003f800000;
      *(undefined4 *)(lVar3 + 0x40) = 0x3f800000;
      *(longlong *)(param_1 + 0xd0) = lVar3;
    }
  }
  return;
}



// FUNCTION 142648450 FUN_142648450 body=252 status=ok
// SIG undefined FUN_142648450(void)

void FUN_142648450(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionLowerLeftCorner",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0xc2c80000c2c80000;
      *(undefined4 *)(lVar3 + 0x40) = 0xc2c80000;
      *(longlong *)(param_1 + 0x80) = lVar3;
    }
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x88);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionUpperRightCorner",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0x42c8000042c80000;
      *(undefined4 *)(lVar3 + 0x40) = 0x42c80000;
      *(longlong *)(param_1 + 0xd0) = lVar3;
    }
  }
  return;
}



// FUNCTION 142648550 FUN_142648550 body=107 status=ok
// SIG undefined FUN_142648550(void)

void FUN_142648550(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x38);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionHeight",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x437a0000;
      *(longlong *)(param_1 + 0x68) = lVar3;
    }
  }
  return;
}



// FUNCTION 1426485c0 FUN_1426485c0 body=107 status=ok
// SIG undefined FUN_1426485c0(void)

void FUN_1426485c0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x38);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionLifetimeConstant",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x3f800000;
      *(longlong *)(param_1 + 0x68) = lVar3;
    }
  }
  return;
}



// FUNCTION 142648630 PostInitProperties body=348 status=ok
// SIG undefined PostInitProperties(void)

void UParticleModuleLight::PostInitProperties(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_res8 [8];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionVector::IsCreated(param_1 + 0x40);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionColorScaleOverLife",1);
      uVar2 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x88) = uVar2;
    }
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0x90);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionBrightnessOverLife",1);
      uVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0xc0) = uVar2;
    }
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 200);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionRadiusScale",1);
      uVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0xf8) = uVar2;
    }
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0x100);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionLightExponent",1);
      uVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x130) = uVar2;
    }
    if (*(char *)(param_1 + 0x140) == '\0') {
      *(undefined1 *)(param_1 + 0x141) = 0;
    }
  }
  return;
}



// FUNCTION 142648790 FUN_142648790 body=182 status=ok
// SIG undefined FUN_142648790(void)

void FUN_142648790(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar1 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    if (cVar1 == '\0') {
      puVar2 = (undefined8 *)FName::FName(local_res8,L"DistributionStartLocation",1);
      lVar3 = NewObject<UDistributionVectorUniform>(param_1,*puVar2,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x44) = 0xc2480000c2480000;
      *(undefined4 *)(lVar3 + 0x4c) = 0xc2480000;
      *(undefined8 *)(lVar3 + 0x38) = 0x4248000042480000;
      *(undefined4 *)(lVar3 + 0x40) = 0x42480000;
      *(longlong *)(param_1 + 0x80) = lVar3;
    }
  }
  return;
}



// FUNCTION 142648850 FUN_142648850 body=42 status=ok
// SIG undefined FUN_142648850(void)

void FUN_142648850(longlong param_1)

{
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    FUN_142647420(param_1);
    return;
  }
  return;
}



// FUNCTION 142648880 FUN_142648880 body=377 status=ok
// SIG undefined FUN_142648880(void)

void FUN_142648880(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionLocationConstant",1);
      uVar2 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
    }
    cVar3 = FRawDistributionVector::IsCreated(param_1 + 0x88);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionLocationOffset",1);
      lVar4 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar4 + 0x38) = 0;
      *(undefined4 *)(lVar4 + 0x40) = 0;
      *(longlong *)(param_1 + 0xd0) = lVar4;
    }
    cVar3 = FRawDistributionVector::IsCreated(param_1 + 0x128);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionScaleFactorConstant",1);
      lVar4 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar4 + 0x38) = 0x3f8000003f800000;
      *(undefined4 *)(lVar4 + 0x40) = 0x3f800000;
      *(longlong *)(param_1 + 0x120) = lVar4;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionDirectionConstant",1);
      uVar2 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x170) = uVar2;
    }
  }
  return;
}



// FUNCTION 142648a00 FUN_142648a00 body=103 status=ok
// SIG undefined FUN_142648a00(void)

void FUN_142648a00(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0x58);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionManualAlpha",1);
      uVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x88) = uVar2;
    }
  }
  return;
}



// FUNCTION 142648a70 FUN_142648a70 body=107 status=ok
// SIG undefined FUN_142648a70(void)

void FUN_142648a70(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x48);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionManualAlpha",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0;
      *(longlong *)(param_1 + 0x78) = lVar3;
    }
  }
  return;
}



// FUNCTION 142648ae0 FUN_142648ae0 body=214 status=ok
// SIG undefined FUN_142648ae0(void)

void FUN_142648ae0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x40);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionVelocityScale",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x3f800000;
      *(longlong *)(param_1 + 0x70) = lVar3;
    }
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x78);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStartLocation",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0;
      *(undefined4 *)(lVar3 + 0x40) = 0;
      *(longlong *)(param_1 + 0xc0) = lVar3;
    }
  }
  return;
}



// FUNCTION 142648bc0 FUN_142648bc0 body=201 status=ok
// SIG undefined FUN_142648bc0(void)

void FUN_142648bc0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_142648ae0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0xd0);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStartRadius",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x42480000;
      *(longlong *)(param_1 + 0x100) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x108);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStartHeight",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x42480000;
      *(longlong *)(param_1 + 0x138) = lVar3;
    }
  }
  return;
}



// FUNCTION 142648c90 FUN_142648c90 body=113 status=ok
// SIG undefined FUN_142648c90(void)

void FUN_142648c90(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_142648ae0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 200);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStartRadius",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x42480000;
      *(longlong *)(param_1 + 0xf8) = lVar3;
    }
  }
  return;
}



// FUNCTION 142648d10 FUN_142648d10 body=375 status=ok
// SIG undefined FUN_142648d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142648d10(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionOffset",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = _DAT_1468b5d90;
      *(undefined4 *)(lVar3 + 0x40) = DAT_1468b5d98;
      *(longlong *)(param_1 + 0x80) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x88);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionHeight",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x42480000;
      *(longlong *)(param_1 + 0xb8) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0xc0);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionAngle",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x42b40000;
      *(longlong *)(param_1 + 0xf0) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0xf8);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionThickness",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x41c80000;
      *(longlong *)(param_1 + 0x128) = lVar3;
    }
  }
  return;
}



// FUNCTION 142648e90 FUN_142648e90 body=173 status=ok
// SIG undefined FUN_142648e90(void)

void FUN_142648e90(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar1 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    if (cVar1 == '\0') {
      puVar2 = (undefined8 *)FName::FName(local_res8,L"DistributionStartRotation",1);
      lVar3 = NewObject<UDistributionVectorUniform>(param_1,*puVar2,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x44) = 0;
      *(undefined4 *)(lVar3 + 0x4c) = 0;
      *(undefined8 *)(lVar3 + 0x38) = 0x3f8000003f800000;
      *(undefined4 *)(lVar3 + 0x40) = 0x3f800000;
      *(longlong *)(param_1 + 0x80) = lVar3;
    }
  }
  return;
}



// FUNCTION 142648f40 FUN_142648f40 body=182 status=ok
// SIG undefined FUN_142648f40(void)

void FUN_142648f40(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar1 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    if (cVar1 == '\0') {
      puVar2 = (undefined8 *)FName::FName(local_res8,L"DistributionStartRotationRate",1);
      lVar3 = NewObject<UDistributionVectorUniform>(param_1,*puVar2,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x44) = 0xbf800000bf800000;
      *(undefined4 *)(lVar3 + 0x4c) = 0xbf800000;
      *(undefined8 *)(lVar3 + 0x38) = 0x3f8000003f800000;
      *(undefined4 *)(lVar3 + 0x40) = 0x3f800000;
      *(longlong *)(param_1 + 0x80) = lVar3;
    }
  }
  return;
}



// FUNCTION 142649000 FUN_142649000 body=322 status=ok
// SIG undefined FUN_142649000(void)

void FUN_142649000(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionLifeMultiplierCurve",1);
      lVar2 = NewObject<UDistributionVectorConstantCurve>(param_1,*puVar1,0,0,0,0);
      iVar6 = 0;
      do {
        uVar4 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x58))(lVar2 + 0x28,(float)iVar6);
        iVar5 = 0;
        do {
          (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x70))
                    (lVar2 + 0x28,iVar5,uVar4,1.0 - (float)iVar6);
          iVar5 = iVar5 + 1;
        } while (iVar5 < 3);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
      *(longlong *)(param_1 + 0x80) = lVar2;
    }
  }
  return;
}



// FUNCTION 142649150 PostInitProperties body=103 status=ok
// SIG undefined PostInitProperties(void)

void UParticleModuleMeshRotationRateOverLife::PostInitProperties(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionRotRate",1);
      uVar2 = NewObject<UDistributionVectorConstantCurve>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x80) = uVar2;
    }
  }
  return;
}



// FUNCTION 1426491c0 FUN_1426491c0 body=200 status=ok
// SIG undefined FUN_1426491c0(void)

void FUN_1426491c0(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  
  FUN_1417931d0();
  uVar5 = *(uint *)(param_1 + 8);
  puVar3 = (undefined8 *)0x0;
  if ((uVar5 >> 4 & 1) == 0) {
    puVar2 = (undefined8 *)operator_new(0x48);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar2 + 1) = 4;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined1 *)(puVar2 + 5) = 0;
      puVar2[6] = 0;
      *puVar2 = &PTR__scalar_deleting_destructor__1451469c8;
      puVar2[8] = 0;
      puVar2[7] = param_1 + 0x160;
      puVar3 = puVar2;
    }
    uVar5 = *(uint *)(param_1 + 8);
    *(undefined8 **)(param_1 + 0x178) = puVar3;
  }
  if (((uVar5 & 0x410) == 0) &&
     (cVar1 = FRawDistributionFloat::IsCreated(param_1 + 0x80), cVar1 == '\0')) {
    puVar3 = (undefined8 *)FName::FName(local_res8,L"RequiredDistributionSpawnRate",1);
    uVar4 = NewObject<UDistributionFloatConstant>(param_1,*puVar3,0,0,0,0);
    *(undefined8 *)(param_1 + 0xb0) = uVar4;
  }
  return;
}



// FUNCTION 142649290 FUN_142649290 body=183 status=ok
// SIG undefined FUN_142649290(void)

void FUN_142649290(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 local_res10 [8];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0x38);
    if (cVar3 == '\0') {
      plVar1 = (longlong *)FName::FName(local_res10,L"DistributionStartRotation",1);
      lVar4 = *plVar1;
      if (lVar4 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar2 = UDistributionFloatUniform::GetPrivateStaticClass();
      lVar4 = FUN_1417985e0(uVar2,param_1,lVar4,0,0,0,0,0,0);
      *(undefined4 *)(lVar4 + 0x38) = 0;
      *(undefined4 *)(lVar4 + 0x3c) = 0x3f800000;
      *(longlong *)(param_1 + 0x68) = lVar4;
    }
  }
  return;
}



// FUNCTION 142649350 PostInitProperties body=87 status=ok
// SIG undefined PostInitProperties(void)

void UParticleModuleRotationOverLifetime::PostInitProperties(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionRotOverLife",1);
    uVar2 = NewObject<UDistributionFloatConstantCurve>(param_1,*puVar1,0,0,0,0);
    *(undefined8 *)(param_1 + 0x68) = uVar2;
  }
  return;
}



// FUNCTION 1426493b0 PostInitProperties body=100 status=ok
// SIG undefined PostInitProperties(void)

void UParticleModuleRotationRate::PostInitProperties(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0x38);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStartRotationRate",1);
      uVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x68) = uVar2;
    }
  }
  return;
}



// FUNCTION 142649420 PostInitProperties body=100 status=ok
// SIG undefined PostInitProperties(void)

void UParticleModuleRotationRateMultiplyLife::PostInitProperties(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar3 = FRawDistributionFloat::IsCreated(param_1 + 0x38);
    if (cVar3 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionLifeMultiplier",1);
      uVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(param_1 + 0x68) = uVar2;
    }
  }
  return;
}



// FUNCTION 142649490 PostInitProperties body=137 status=ok
// SIG undefined PostInitProperties(void)

void UParticleModuleVelocityInheritParent::PostInitProperties(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x38);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionSourceMovementScale",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0x3f8000003f800000;
      *(undefined4 *)(lVar3 + 0x40) = 0x3f800000;
      *(longlong *)(param_1 + 0x80) = lVar3;
    }
  }
  return;
}



// FUNCTION 142649520 PostInitProperties body=87 status=ok
// SIG undefined PostInitProperties(void)

void UParticleModuleSubUV::PostInitProperties(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionSubImage",1);
    uVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
  }
  return;
}



// FUNCTION 142649580 FUN_142649580 body=186 status=ok
// SIG undefined FUN_142649580(void)

void FUN_142649580(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    puVar2 = (undefined8 *)FName::FName(local_res8,L"DistributionSubImage",1);
    uVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar2,0,0,0,0);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
      cVar1 = FRawDistributionFloat::IsCreated(param_1 + 0x88);
      if (cVar1 == '\0') {
        puVar2 = (undefined8 *)FName::FName(local_res8,L"DistributionFrameRate",1);
        lVar4 = NewObject<UDistributionFloatConstant>(param_1,*puVar2,0,0,0,0);
        *(undefined4 *)(lVar4 + 0x38) = 0x41f00000;
        *(longlong *)(param_1 + 0xb8) = lVar4;
      }
    }
  }
  return;
}



// FUNCTION 142649640 FUN_142649640 body=102 status=ok
// SIG undefined FUN_142649640(void)

void FUN_142649640(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStackX_c;
  
  UObject::PostLoad();
  uVar3 = 0;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x98))); iVar2 = iVar2 + 1) {
    uVar1 = UEngineTypes::ConvertToCollisionChannel
                      (*(undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x90)));
    uVar3 = uVar3 | 1 << (uVar1 & 0x1f);
  }
  *(ulonglong *)(param_1 + 0xa4) = CONCAT44(uStackX_c,uVar3) & 0xffffff00ffffffff;
  return;
}



// FUNCTION 1426496b0 PostLoad body=102 status=ok
// SIG undefined PostLoad(void)

void UParticleModuleCollision::PostLoad(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStackX_c;
  
  UObject::PostLoad();
  uVar3 = 0;
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x120))); iVar2 = iVar2 + 1) {
    uVar1 = UEngineTypes::ConvertToCollisionChannel
                      (*(undefined1 *)((longlong)iVar2 + *(longlong *)(param_1 + 0x118)));
    uVar3 = uVar3 | 1 << (uVar1 & 0x1f);
  }
  *(ulonglong *)(param_1 + 0x128) = CONCAT44(uStackX_c,uVar3) & 0xffffff00ffffffff;
  return;
}



// FUNCTION 142649720 FUN_142649720 body=76 status=ok
// SIG undefined FUN_142649720(void)

void FUN_142649720(longlong param_1)

{
  UObject::PostLoad();
  if (0 < *(int *)(param_1 + 0xa0)) {
    *(undefined1 *)(param_1 + 0xfc) = 0;
    return;
  }
  if (((*(uint *)(param_1 + 0xe8) & 8) != 0) && ((*(uint *)(param_1 + 0xe8) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xfc) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0xfc) = 2;
  return;
}



// FUNCTION 142649770 FUN_142649770 body=126 status=ok
// SIG undefined FUN_142649770(void)

void FUN_142649770(longlong param_1)

{
  int iVar1;
  float fVar2;
  
  UObject::PostLoad();
  fVar2 = *(float *)(param_1 + 0x7c);
  if (fVar2 <= 180.0) {
    if (fVar2 < 0.0) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
      fVar2 = 0.0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = 0x43340000;
    fVar2 = 180.0;
  }
  fVar2 = 1.0 - fVar2 * 0.0055555557;
  *(float *)(param_1 + 0x80) = (fVar2 + fVar2) - 1.0;
  iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar1 < 0x1ab) {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffffd;
  }
  return;
}



// FUNCTION 1426497f0 FUN_1426497f0 body=102 status=ok
// SIG undefined FUN_1426497f0(void)

void FUN_1426497f0(longlong param_1)

{
  int iVar1;
  
  UObject::PostLoad();
  iVar1 = 1;
  if (0 < *(int *)(param_1 + 0xe0)) {
    iVar1 = *(int *)(param_1 + 0xe0);
  }
  *(int *)(param_1 + 0xe0) = iVar1;
  iVar1 = 1;
  if (0 < *(int *)(param_1 + 0xe4)) {
    iVar1 = *(int *)(param_1 + 0xe4);
  }
  *(int *)(param_1 + 0xe4) = iVar1;
  if ((DAT_1464c9c6c != '\0') &&
     (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x178) + 0x38) + 8) != 0)) {
    FUN_141edf270();
    return;
  }
  return;
}



// FUNCTION 142649860 PostLoad body=39 status=ok
// SIG undefined PostLoad(void)

void UParticleModuleSubUV::PostLoad(longlong param_1)

{
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1417510e0();
    return;
  }
  return;
}



// FUNCTION 142649890 PostLoad body=42 status=ok
// SIG undefined PostLoad(void)

void UParticleModuleTypeDataGpu::PostLoad(longlong param_1)

{
  int iVar1;
  
  UObject::PostLoad();
  iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar1 < 0x1b4) {
    *(uint *)(param_1 + 0x464) = *(uint *)(param_1 + 0x464) | 1;
  }
  return;
}



// FUNCTION 1426498c0 FUN_1426498c0 body=105 status=ok
// SIG undefined FUN_1426498c0(void)

void FUN_1426498c0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  UObject::PostLoad();
  plVar1 = *(longlong **)(param_1 + 0x40);
  uVar3 = 0;
  uVar2 = (longlong)*(int *)(param_1 + 0x48) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x48) < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_1417510e0();
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 1426499f0 FUN_1426499f0 body=79 status=ok
// SIG undefined FUN_1426499f0(void)

void FUN_1426499f0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000142649a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x350))(param_1,param_2,(ulonglong)uVar1 + param_3,param_1 + 0x29);
  return;
}



// FUNCTION 142649a40 FUN_142649a40 body=168 status=ok
// SIG undefined FUN_142649a40(void)

undefined8 FUN_142649a40(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_14;
  
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[8] = 0;
    iVar1 = *(int *)(param_1 + 0xf8);
    if (*(int *)(param_1 + 0xf8) <= *(int *)(param_1 + 0xa0)) {
      iVar1 = *(int *)(param_1 + 0xa0);
    }
    if (0 < iVar1) {
      uVar2 = (iVar1 + 6) * 0xc;
      param_3[3] = CONCAT44(uStack_14,iVar1);
      param_3[4] = param_3 + 9;
      param_3[5] = CONCAT44(uStack_14,iVar1);
      param_3[6] = (ulonglong)uVar2 + (longlong)param_3;
      param_3[7] = CONCAT44(uStack_14,iVar1);
      param_3[8] = (ulonglong)(uVar2 + iVar1 * 0xc) + (longlong)param_3;
    }
  }
  return 0xffffffff;
}



// FUNCTION 142649b30 FUN_142649b30 body=96 status=ok
// SIG undefined FUN_142649b30(void)

undefined8 FUN_142649b30(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uStack_14;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x60);
    *(ulonglong *)(param_3 + 0x18) = CONCAT44(uStack_14,iVar1);
    *(longlong *)(param_3 + 0x20) = param_3 + 0x48;
    *(ulonglong *)(param_3 + 0x28) = CONCAT44(uStack_14,iVar1);
    *(ulonglong *)(param_3 + 0x30) = (ulonglong)(iVar1 * 4 + 0x48) + param_3;
    *(ulonglong *)(param_3 + 0x38) = CONCAT44(uStack_14,iVar1);
    *(ulonglong *)(param_3 + 0x40) = (ulonglong)(iVar1 * 0x10 + 0x48) + param_3;
  }
  return 0xffffffff;
}



// FUNCTION 142649bd0 FUN_142649bd0 body=347 status=ok
// SIG undefined FUN_142649bd0(void)

undefined8 FUN_142649bd0(undefined8 param_1,longlong param_2,int *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_res18 [4];
  
  if (param_3 != (int *)0x0) {
    param_3[0] = 0;
    param_3[1] = 0;
    if ((((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0x18), plVar1 != (longlong *)0x0)) &&
        ((*(byte *)(param_4 + 1) & 1) != 0)) &&
       (cVar2 = (**(code **)(*plVar1 + 0x960))(plVar1,*param_4,local_res18), cVar2 == '\x01')) {
      if ((*(byte *)(param_4 + 1) & 2) == 0) {
        iVar3 = (int)ROUND(local_res18[0] * 2.0 + 0.5) >> 1;
        *param_3 = iVar3;
        param_3[1] = iVar3;
        return 0;
      }
      if (*(int *)(param_4 + 3) < 1) {
        return 0xffffffff;
      }
      iVar4 = *(int *)(param_4 + 3) + -1;
      iVar3 = (int)local_res18[0];
      if (iVar4 <= (int)local_res18[0]) {
        iVar3 = iVar4;
      }
      iVar3 = *(int *)(param_4[2] + (longlong)iVar3 * 4);
      *param_3 = iVar3;
      param_3[1] = iVar3;
      return 0;
    }
    iVar3 = *(int *)(param_4 + 3);
    if (0 < iVar3) {
      if ((*(byte *)(param_4 + 1) & 8) == 0) {
        iVar3 = *(int *)param_4[2];
        *param_3 = iVar3;
        param_3[1] = iVar3;
        return 0;
      }
      iVar4 = rand();
      iVar5 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar3);
      iVar4 = iVar3 + -1;
      if (iVar5 <= iVar3 + -1) {
        iVar4 = iVar5;
      }
      iVar3 = *(int *)(param_4[2] + (longlong)iVar4 * 4);
      *param_3 = iVar3;
      param_3[1] = iVar3;
      return 0;
    }
  }
  return 0xffffffff;
}



// FUNCTION 142649d30 ProcessParticleEvent body=116 status=ok
// SIG undefined ProcessParticleEvent(void)

undefined8
UParticleModuleEventReceiverKillParticles::ProcessParticleEvent
          (longlong param_1,longlong *param_2,uint *param_3)

{
  if ((*(longlong *)(param_3 + 2) == *(longlong *)(param_1 + 0x40)) &&
     ((*(byte *)(param_1 + 0x38) == 0 || ((uint)*(byte *)(param_1 + 0x38) == *param_3)))) {
    (**(code **)(*param_2 + 0xf0))(param_2,1);
    if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
      (**(code **)(*param_2 + 0xf8))(param_2,1);
      (**(code **)(*param_2 + 0x100))(param_2,1);
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142649db0 FUN_142649db0 body=826 status=ok
// SIG undefined FUN_142649db0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142649db0(longlong param_1,longlong *param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  float *pfVar8;
  longlong *plVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  float extraout_XMM0_Da;
  float fVar13;
  undefined8 in_stack_ffffffffffffff68;
  uint uVar14;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  uint local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar14 = (uint)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  if ((*(longlong *)(param_3 + 2) != *(longlong *)(param_1 + 0x40)) ||
     ((*(byte *)(param_1 + 0x38) != 0 && ((uint)*(byte *)(param_1 + 0x38) != *param_3)))) {
    return 0;
  }
  uVar12 = 0;
  switch(*param_3 - 1) {
  case 0:
  case 3:
switchD_142649e2e_caseD_0:
    uVar12 = param_3[4];
    break;
  case 1:
    if ((*(byte *)(param_1 + 0x80) & 1) == 0) {
      uVar12 = param_3[4];
    }
    else {
      uVar12 = param_3[0x10];
    }
    break;
  case 2:
  case 5:
    if ((*(longlong *)(param_3 + 0x1c) != 0) && (*(int *)(param_1 + 0xe0) != 0)) {
      plVar9 = *(longlong **)(param_1 + 0xd8);
      plVar6 = plVar9 + *(int *)(param_1 + 0xe0);
      for (; plVar9 != plVar6; plVar9 = plVar9 + 1) {
        if (*plVar9 == *(longlong *)(param_3 + 0x1c)) {
          uVar12 = 1;
          break;
        }
      }
      if (uVar12 != (~*(uint *)(param_1 + 0xe8) & 1)) {
        return 1;
      }
    }
    if ((*(byte *)(param_1 + 0x80) & 1) == 0) goto switchD_142649e2e_caseD_0;
    uVar12 = param_3[0x10];
    break;
  case 4:
    fVar13 = (float)FUN_1424116d0(param_1 + 0x48,param_3[4],0,0);
    uVar12 = (int)ROUND(fVar13 * 2.0 + 0.5) >> 1;
    plVar6 = (longlong *)FUN_142627a50(param_2,param_1);
    if (0 < (int)plVar6[2]) {
      *(undefined4 *)(plVar6 + 1) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar6 + 0xc)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar6,0);
      }
      *(undefined4 *)(plVar6 + 2) = 0;
    }
    if ((int)uVar12 < 1) {
      return 1;
    }
    uVar11 = (ulonglong)uVar12;
    do {
      iVar1 = (int)plVar6[1];
      *(int *)(plVar6 + 1) = iVar1 + 1;
      if (*(int *)((longlong)plVar6 + 0xc) < iVar1 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar6,iVar1);
      }
      uVar14 = (uint)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
      puVar7 = (undefined8 *)((longlong)iVar1 * 0x20 + *plVar6);
      if (puVar7 != (undefined8 *)0x0) {
        uVar5 = *(undefined8 *)(param_3 + 0x12);
        *puVar7 = *(undefined8 *)(param_3 + 0x10);
        puVar7[1] = uVar5;
        uVar2 = param_3[0x15];
        uVar3 = param_3[0x16];
        uVar4 = param_3[0x17];
        *(uint *)(puVar7 + 2) = param_3[0x14];
        *(uint *)((longlong)puVar7 + 0x14) = uVar2;
        *(uint *)(puVar7 + 3) = uVar3;
        *(uint *)((longlong)puVar7 + 0x1c) = uVar4;
      }
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    goto LAB_142649faa;
  default:
    goto switchD_142649e2e_default;
  }
  FUN_1424116d0(param_1 + 0x48,uVar12,0,0);
  uVar12 = (int)ROUND(extraout_XMM0_Da * 2.0 + 0.5) >> 1;
LAB_142649faa:
  if (0 < (int)uVar12) {
    puVar10 = (uint *)((longlong)param_2 + 0x5c);
    if ((*(uint *)(param_1 + 0x80) & 2) == 0) {
      puVar10 = param_3 + 5;
    }
    local_58 = *(undefined8 *)puVar10;
    local_50 = puVar10[2];
    if ((*(uint *)(param_1 + 0x80) & 4) == 0) {
      local_78 = _DAT_1468b5d90;
      local_60 = DAT_1468b5d98;
    }
    else {
      pfVar8 = (float *)FUN_1424118e0(param_1 + 0x88,&local_48,param_3[4],0,
                                      (ulonglong)uVar14 << 0x20,0);
      local_60 = pfVar8[2] * (float)param_3[10];
      local_78 = CONCAT44(pfVar8[1] * (float)param_3[9],*pfVar8 * (float)param_3[8]);
    }
    local_68 = local_78;
    local_78 = _DAT_1464aa6c0;
    uStack_70 = _DAT_1464aa6c8;
    local_48 = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0x3f800000;
    (**(code **)(*param_2 + 0xc0))(param_2,param_4,0,uVar12,&local_58,&local_68,&local_78,&local_48)
    ;
  }
switchD_142649e2e_default:
  return 1;
}



// FUNCTION 14264a110 FUN_14264a110 body=210 status=ok
// SIG undefined FUN_14264a110(void)

void FUN_14264a110(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0xfc) == '\x01') {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      iVar1 = FUN_14277f670(*(undefined8 *)(param_3 + 0x718));
    }
    else {
      iVar1 = FUN_1423af4d0(param_3);
    }
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0xf8)) {
      lVar2 = 0;
      do {
        fVar4 = (float)FGenericPlatformMath::SRand();
        iVar3 = iVar3 + 1;
        *(int *)(lVar2 + *(longlong *)(param_2 + 0x40)) = (int)(fVar4 * ((float)iVar1 - 0.5));
        lVar2 = lVar2 + 4;
      } while (iVar3 < *(int *)(param_1 + 0xf8));
    }
    if (((*(uint *)(param_1 + 0xe8) & 8) != 0) && ((*(uint *)(param_1 + 0xe8) & 1) == 0)) {
      FUN_142657280(param_1,param_2,param_3,0);
    }
  }
  return;
}



// FUNCTION 14264a1f0 FUN_14264a1f0 body=137 status=ok
// SIG undefined FUN_14264a1f0(void)

ulonglong FUN_14264a1f0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  ulonglong uVar5;
  
  uVar5 = FUN_1404834c0();
  puVar3 = *(undefined8 **)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (puVar3 == (undefined8 *)0x0) {
    return uVar5;
  }
  LOCK();
  puVar1 = (uint *)(puVar3 + 1);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (uVar2 == 1) {
    if ((*(char *)(puVar3 + 2) == '\0') &&
       ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0'))))
    {
      uVar5 = 0;
      LOCK();
      uVar2 = *(uint *)((longlong)puVar3 + 0xc);
      if (uVar2 == 0) {
        *(uint *)((longlong)puVar3 + 0xc) = 1;
      }
      else {
        uVar5 = (ulonglong)uVar2;
      }
      UNLOCK();
      if (uVar2 == 0) {
        uVar5 = TLockFreePointerListLIFOPad<FRHIResource,128>::Push(&DAT_146ab6940,puVar3);
        return uVar5;
      }
    }
    else {
      uVar5 = (**(code **)*puVar3)(puVar3,1);
    }
    return uVar5;
  }
  return (ulonglong)uVar2;
}



// FUNCTION 14264a300 FUN_14264a300 body=44 status=ok
// SIG undefined FUN_14264a300(void)

int FUN_14264a300(longlong *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x2a8))();
  iVar2 = 0;
  if (0 < (int)param_1[0x2c]) {
    iVar2 = 8;
  }
  return iVar1 + iVar2;
}



// FUNCTION 14264a430 FUN_14264a430 body=1149 status=ok
// SIG undefined FUN_14264a430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14264a430(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  float local_120;
  undefined1 local_118 [8];
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_e8 [72];
  longlong local_a0;
  longlong local_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  iVar3 = (**(code **)(*param_2 + 0x228))(param_2);
  if (iVar3 != 4) {
    return 1;
  }
  if (param_2[0x4b] == 0) {
    return 1;
  }
  local_130 = (undefined8 *)0x0;
  local_138 = (ulonglong)local_138._4_4_ << 0x20;
  FUN_1424118e0(param_1 + 0x38,&local_110,*(undefined4 *)((longlong)param_2 + 0x13c),param_1);
  if (*(char *)(param_1 + 0x8c) != '\0') {
    lVar4 = param_2[3];
    fVar7 = *(float *)(lVar4 + 0x210);
    fVar11 = *(float *)(lVar4 + 0x214);
    fVar1 = *(float *)(lVar4 + 0x218);
    fVar2 = *(float *)(lVar4 + 0x21c);
    fVar8 = fVar11 * local_108 - fVar1 * local_110._4_4_;
    fVar9 = fVar1 * (float)local_110 - fVar7 * local_108;
    fVar10 = fVar7 * local_110._4_4_ - fVar11 * (float)local_110;
    fVar8 = fVar8 + fVar8;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    local_110._0_4_ = (fVar11 * fVar10 - fVar1 * fVar9) + fVar8 * fVar2 + (float)local_110;
    local_110._4_4_ = (fVar1 * fVar8 - fVar7 * fVar10) + fVar9 * fVar2 + local_110._4_4_;
    local_108 = (fVar7 * fVar9 - fVar11 * fVar8) + fVar10 * fVar2 + local_108;
  }
  fVar7 = local_110._4_4_ * local_110._4_4_ + (float)local_110 * (float)local_110 +
          local_108 * local_108;
  if (fVar7 != 1.0) {
    if (fVar7 < 1e-08) {
      local_120 = DAT_1468b5d98;
      local_128 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_14264a659;
    }
    auVar12 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar11 = auVar12._0_4_;
    fVar11 = fVar11 + fVar11 * (0.5 - fVar7 * 0.5 * fVar11 * fVar11);
    fVar11 = fVar11 + fVar11 * (0.5 - fVar7 * 0.5 * fVar11 * fVar11);
    local_108 = local_108 * fVar11;
    local_110._4_4_ = local_110._4_4_ * fVar11;
    local_110._0_4_ = (float)local_110 * fVar11;
  }
  local_128 = CONCAT44(local_110._4_4_,(float)local_110);
  local_120 = local_108;
LAB_14264a659:
  local_110 = local_128;
  local_108 = local_120;
  lVar4 = FUN_142627a50(param_2,param_2[0x4b]);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b06ed8) && (_Init_thread_header(&DAT_146b06ed8), DAT_146b06ed8 == -1))
  {
    FName::FName(&DAT_146b06ed0,"ParticleCollision",1);
    _Init_thread_footer(&DAT_146b06ed8);
  }
  local_138 = 0;
  FUN_1422ffb20(local_e8,DAT_146b06ed0,local_118,1);
  uVar6 = *(uint *)(param_1 + 0xa0);
  if (((uVar6 & 6) != 0) && (lVar5 = *(longlong *)(param_2[3] + 0x118), lVar5 != 0)) {
    if ((uVar6 & 2) != 0) {
      FCollisionQueryParams::AddIgnoredActor(local_e8,lVar5);
      uVar6 = *(uint *)(param_1 + 0xa0);
    }
    if (((uVar6 & 4) != 0) && (*(longlong *)(lVar5 + 0x118) != 0)) {
      FCollisionQueryParams::AddIgnoredActor(local_e8);
    }
  }
  fVar7 = *(float *)(param_1 + 0x88);
  local_128 = CONCAT44(local_110._4_4_ * fVar7 + *(float *)(param_2 + 0xc),
                       (float)local_110 * fVar7 + *(float *)((longlong)param_2 + 0x5c));
  local_120 = local_108 * fVar7 + *(float *)((longlong)param_2 + 100);
  lVar5 = *(longlong *)(param_2[3] + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0();
  }
  local_130 = (undefined8 *)local_e8;
  local_138 = param_1 + 0xa4;
  UWorld::LineTraceSingleByObjectType(lVar5,lVar4 + 0xe0,lVar4 + 0x38,&local_128);
  if ((*(byte *)(lVar4 + 0xe0) & 1) == 0) {
    local_100 = *(undefined8 *)(lVar4 + 0x130);
    local_f8 = *(undefined4 *)(lVar4 + 0x138);
  }
  else {
    local_100 = *(undefined8 *)(lVar4 + 0xf4);
    local_f8 = *(undefined4 *)(lVar4 + 0xfc);
  }
  local_130 = &local_100;
  local_128 = 0;
  local_138 = 0;
  (**(code **)(*param_2 + 0x1b8))(param_2,1,0,0);
  if (local_80 != 0) {
    FMemory::Free();
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 14264a8b0 FUN_14264a8b0 body=319 status=ok
// SIG undefined FUN_14264a8b0(void)

void FUN_14264a8b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  char local_res18 [8];
  undefined8 local_res20;
  undefined2 *local_18;
  int local_10;
  
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_1464b00e8);
  iVar1 = FArchive::CustomVer(param_2,&DAT_1464b00e8);
  if (iVar1 < 8) {
    return;
  }
  local_res18[0] = param_2[0xe] != 0;
  (**(code **)(*param_2 + 8))(param_2,local_res18);
  if (local_res18[0] == '\0') {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      return;
    }
    local_res20 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res20,&local_18);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x488,
               L"This platform requires cooked packages, and this SubUV animation does not contain cooked data %s."
               ,puVar2);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    local_res20 = *(undefined8 *)(param_1 + 0x18);
    FName::ToString(&local_res20,&local_18);
    puVar2 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar2 = local_18;
    }
    FDebug::AssertFailed
              (&DAT_14513b3f2,"Unknown",0x488,
               L"This platform requires cooked packages, and this SubUV animation does not contain cooked data %s."
               ,puVar2);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_res18[0] == '\0') {
      return;
    }
  }
  UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(param_1 + 0x160,param_2);
  return;
}



// FUNCTION 14264a9f0 FUN_14264a9f0 body=230 status=ok
// SIG undefined FUN_14264a9f0(void)

void FUN_14264a9f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_141763960();
  bVar6 = *(byte *)(param_2 + 0x28);
  if ((bVar6 & 1) == 0) {
    return;
  }
  if (0x172 < *(int *)(param_2 + 0x40)) goto LAB_14264aab7;
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = *(undefined4 *)(param_1 + 100);
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  FUN_142642c20(param_1);
  lVar8 = *(longlong *)(param_1 + 0xb8);
  if (lVar8 == 0) {
LAB_14264aa8e:
    lVar8 = 0;
  }
  else {
    lVar7 = UDistributionVectorUniform::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14264aa8e;
  }
  uVar4 = CONCAT44(uVar2,uVar3);
  *(uint *)(lVar8 + 0x30) = *(uint *)(lVar8 + 0x30) | 2;
  *(undefined8 *)(lVar8 + 0x44) = uVar4;
  *(undefined8 *)(lVar8 + 0x38) = uVar4;
  *(undefined4 *)(lVar8 + 0x4c) = uVar1;
  *(undefined4 *)(lVar8 + 0x40) = uVar1;
  bVar6 = *(byte *)(param_2 + 0x28);
LAB_14264aab7:
  if (((bVar6 & 1) != 0) && (*(int *)(param_2 + 0x40) < 0x1df)) {
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) & 0xfffffffb;
  }
  return;
}



// FUNCTION 14264aae0 FUN_14264aae0 body=930 status=ok
// SIG undefined FUN_14264aae0(void)

void FUN_14264aae0(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float *pfVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  
  if (param_3 == (longlong *)0x0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 == '\0') {
    fVar6 = (float)param_5 / ((float)(int)param_3[0x25] - 1.0);
  }
  else {
    if (cVar1 != '\x01') {
      param_5 = 0;
      if (cVar1 == '\x02') {
        fVar6 = (float)FUN_1424116d0(param_1 + 0x48,0,0,0);
        if (0.0 <= fVar6) {
          fVar8 = fVar6;
          if (1.0 <= fVar6) {
            fVar8 = 1.0;
          }
        }
        else {
          fVar8 = 0.0;
        }
        lVar4 = param_3[0x25];
        *(float *)((longlong)param_6 + (longlong)param_4) = fVar6;
        param_5 = (int)((float)((int)lVar4 + -1) * fVar8);
      }
      goto LAB_14264abfa;
    }
    if (*(int *)(param_2 + 0x128) < 2) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = (float)param_5 / (float)(*(int *)(param_2 + 0x128) + -1);
    }
    param_5 = (int)((float)((int)param_3[0x25] + -1) * fVar6);
  }
  *(float *)((longlong)param_6 + (longlong)param_4) = fVar6;
LAB_14264abfa:
  puVar3 = (undefined8 *)(**(code **)(*param_3 + 0x108))(param_3,param_5);
  if (puVar3 != (undefined8 *)0x0) {
    param_4[2] = puVar3[2];
    *(undefined4 *)(param_4 + 3) = *(undefined4 *)(puVar3 + 3);
    param_4[4] = puVar3[2];
    *(undefined4 *)(param_4 + 5) = *(undefined4 *)(puVar3 + 3);
    *param_4 = *puVar3;
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(undefined8 *)((longlong)param_4 + 0x3c) = *(undefined8 *)((longlong)puVar3 + 0x3c);
    *(undefined4 *)((longlong)param_4 + 0x44) = *(undefined4 *)((longlong)puVar3 + 0x44);
    if (*(char *)(param_2 + 0xf4) == '\n') {
      pfVar5 = (float *)((longlong)*(int *)(param_2 + 0x50) + (longlong)param_4);
      iVar2 = (**(code **)(*param_3 + 0x228))(param_3);
      if ((iVar2 == 4) && (lVar4 = (longlong)(int)param_3[6], (int)param_3[6] != 0)) {
        fVar6 = *(float *)(lVar4 + 0x28 + (longlong)puVar3);
        fVar8 = *(float *)(lVar4 + 0x2c + (longlong)puVar3);
        fVar12 = *(float *)(lVar4 + 0x30 + (longlong)puVar3);
        fVar9 = fVar6 * fVar6 + fVar8 * fVar8 + fVar12 * fVar12;
        if (fVar9 == 1.0) {
          uVar7 = *(undefined8 *)(lVar4 + 0x28 + (longlong)puVar3);
          fVar12 = *(float *)(lVar4 + 0x30 + (longlong)puVar3);
        }
        else if (1e-08 <= fVar9) {
          auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
          fVar10 = auVar11._0_4_;
          fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
          fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
          fVar12 = fVar12 * fVar10;
          uVar7 = CONCAT44(fVar8 * fVar10,fVar6 * fVar10);
        }
        else {
          uVar7 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          fVar12 = DAT_1468b5d98;
        }
        *(undefined8 *)pfVar5 = uVar7;
        pfVar5[2] = fVar12;
      }
      if (((*pfVar5 == 0.0) && (pfVar5[1] == 0.0)) && (pfVar5[2] == 0.0)) {
        pfVar5[0] = 1.0;
        pfVar5[1] = 0.0;
        pfVar5[2] = 0.0;
      }
    }
    iVar2 = _finite((double)*(float *)(param_4 + 2));
    if ((iVar2 != 0) && (iVar2 = _finite((double)*(float *)((longlong)param_4 + 0x14)), iVar2 != 0))
    {
      _finite((double)*(float *)(param_4 + 3));
    }
    iVar2 = _finite((double)*(float *)((longlong)param_4 + 0x3c));
    if ((iVar2 != 0) && (iVar2 = _finite((double)*(float *)(param_4 + 8)), iVar2 != 0)) {
      _finite((double)*(float *)((longlong)param_4 + 0x44));
    }
  }
  return;
}



// FUNCTION 14264ae90 FUN_14264ae90 body=153 status=ok
// SIG undefined FUN_14264ae90(void)

undefined8 FUN_14264ae90(longlong *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x358))();
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) <= param_2) {
      iVar4 = (param_2 - *(int *)(lVar3 + 0x18)) + 1;
      iVar1 = *(int *)(lVar3 + 0x18);
      iVar2 = iVar1 + iVar4;
      *(int *)(lVar3 + 0x18) = iVar2;
      if (*(int *)(lVar3 + 0x1c) < iVar2) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar3 + 0x10);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar1 * 4),0,(longlong)iVar4 << 2)
      ;
    }
    lVar3 = *(longlong *)(lVar3 + 0x10);
    *(undefined4 *)(lVar3 + (longlong)param_2 * 4) = param_3;
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  return 0;
}



// FUNCTION 14264af40 FUN_14264af40 body=44 status=ok
// SIG undefined FUN_14264af40(void)

void FUN_14264af40(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xc4160000;
  return;
}



// FUNCTION 14264af70 FUN_14264af70 body=167 status=ok
// SIG undefined FUN_14264af70(void)

void FUN_14264af70(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    lVar3 = UDistributionFloatConstant::GetPrivateStaticClass();
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
      *(undefined4 *)(lVar1 + 0x38) = 0x3f400000;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xa0);
  if (lVar1 != 0) {
    lVar3 = UDistributionFloatConstant::GetPrivateStaticClass();
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
      *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    }
  }
  return;
}



// FUNCTION 14264b020 FUN_14264b020 body=116 status=ok
// SIG undefined FUN_14264b020(void)

void FUN_14264b020(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    lVar3 = UDistributionVectorConstant::GetPrivateStaticClass();
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
      *(uint *)(lVar1 + 0x30) = *(uint *)(lVar1 + 0x30) | 2;
      *(undefined8 *)(lVar1 + 0x38) = 0x3f8000003f800000;
      *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
    }
  }
  return;
}



// FUNCTION 14264b0a0 FUN_14264b0a0 body=648 status=ok
// SIG undefined FUN_14264b0a0(void)

void FUN_14264b0a0(longlong param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  iVar9 = 0;
  uVar4 = UDistributionVectorConstantCurve::GetPrivateStaticClass();
  lVar5 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x80) = lVar5;
  if (lVar5 != 0) {
    lVar6 = UDistributionVectorConstantCurve::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    iVar8 = iVar9;
    if (bVar2) {
      do {
        uVar3 = (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x58))(lVar5 + 0x28);
        (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x78))(lVar5 + 0x28,uVar3,1);
        iVar7 = iVar9;
        do {
          pcVar1 = *(code **)(*(longlong *)(lVar5 + 0x28) + 0x70);
          if (iVar8 == 0) {
            (*pcVar1)(lVar5 + 0x28,iVar7,uVar3,0x3f800000);
            (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x80))(lVar5 + 0x28,iVar7,uVar3,0,0);
          }
          else {
            (*pcVar1)(lVar5 + 0x28,iVar7,uVar3,0);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 3);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 2);
      *(uint *)(lVar5 + 0x30) = *(uint *)(lVar5 + 0x30) | 2;
    }
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar4 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
  lVar5 = FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0xb8) = lVar5;
  if (lVar5 != 0) {
    lVar6 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      do {
        uVar3 = (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x58))(lVar5 + 0x28);
        (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x78))(lVar5 + 0x28,uVar3,1);
        pcVar1 = *(code **)(*(longlong *)(lVar5 + 0x28) + 0x70);
        if (iVar9 == 0) {
          (*pcVar1)(lVar5 + 0x28,0,uVar3,0x3f800000);
          (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x80))(lVar5 + 0x28,0,uVar3,0,0);
        }
        else {
          (*pcVar1)(lVar5 + 0x28,0,uVar3,0);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < 2);
      *(uint *)(lVar5 + 0x30) = *(uint *)(lVar5 + 0x30) | 2;
    }
  }
  return;
}



// FUNCTION 14264b330 FUN_14264b330 body=380 status=ok
// SIG undefined FUN_14264b330(void)

void FUN_14264b330(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar3 = UDistributionVectorConstantCurve::GetPrivateStaticClass();
  lVar4 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x80) = lVar4;
  if (lVar4 != 0) {
    lVar5 = UDistributionVectorConstantCurve::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar7 = 0;
    if (bVar1) {
      do {
        uVar2 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x58))(lVar4 + 0x28,(float)iVar7);
        (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x78))(lVar4 + 0x28,uVar2,1);
        iVar6 = 0;
        do {
          (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x70))
                    (lVar4 + 0x28,iVar6,uVar2,1.0 - (float)iVar7);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 3);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 2);
      *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 2;
    }
  }
  return;
}



// FUNCTION 14264b4b0 FUN_14264b4b0 body=145 status=ok
// SIG undefined FUN_14264b4b0(void)

void FUN_14264b4b0(longlong param_1)

{
  int iVar1;
  undefined8 local_res8;
  undefined1 local_38 [4];
  undefined8 local_34;
  uint local_2c;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_2c = local_2c & 0xfffffff0;
  local_38[0] = 2;
  local_34 = 0;
  local_20 = 0;
  local_18 = 0;
  FName::FName(&local_res8,L"TestEvent",1);
  iVar1 = *(int *)(param_1 + 0x40);
  local_28 = local_res8;
  *(int *)(param_1 + 0x40) = iVar1 + 1;
  if (*(int *)(param_1 + 0x44) < iVar1 + 1) {
    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
  }
  FUN_14263d4e0(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 0x28,local_38);
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14264b550 FUN_14264b550 body=47 status=ok
// SIG undefined FUN_14264b550(void)

void FUN_14264b550(longlong param_1)

{
  undefined8 local_res8 [4];
  
  FName::FName(local_res8,L"TestEvent",1);
  *(undefined8 *)(param_1 + 0x40) = local_res8[0];
  return;
}



// FUNCTION 14264b580 FUN_14264b580 body=359 status=ok
// SIG undefined FUN_14264b580(void)

void FUN_14264b580(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (lVar1 != 0) {
    lVar3 = UDistributionVectorConstant::GetPrivateStaticClass();
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
      *(uint *)(lVar1 + 0x30) = *(uint *)(lVar1 + 0x30) | 2;
      *(undefined8 *)(lVar1 + 0x38) = 0x3f8000003f800000;
      *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    lVar3 = UDistributionFloatConstant::GetPrivateStaticClass();
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
      *(uint *)(lVar1 + 0x30) = *(uint *)(lVar1 + 0x30) | 2;
      *(undefined4 *)(lVar1 + 0x38) = 0x42000000;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xf8);
  if (lVar1 != 0) {
    lVar3 = UDistributionFloatConstant::GetPrivateStaticClass();
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
      *(uint *)(lVar1 + 0x30) = *(uint *)(lVar1 + 0x30) | 2;
      *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x130);
  if (lVar1 != 0) {
    lVar3 = UDistributionFloatConstant::GetPrivateStaticClass();
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
      *(uint *)(lVar1 + 0x30) = *(uint *)(lVar1 + 0x30) | 2;
      *(undefined4 *)(lVar1 + 0x38) = 0x40400000;
    }
  }
  return;
}



// FUNCTION 14264b6f0 FUN_14264b6f0 body=161 status=ok
// SIG undefined FUN_14264b6f0(void)

void FUN_14264b6f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    lVar3 = UDistributionVectorConstantCurve::GetPrivateStaticClass();
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
      FInterpCurve<FVector>::AddPoint(lVar1 + 0x38,0,&DAT_1468b5d90);
      local_18 = 0x3f800000;
      local_14 = 0x3f800000;
      local_10 = 0x3f800000;
      FInterpCurve<FVector>::AddPoint(lVar1 + 0x38,0x3f800000,&local_18);
      *(uint *)(lVar1 + 0x30) = *(uint *)(lVar1 + 0x30) | 2;
    }
  }
  return;
}



// FUNCTION 14264b7c0 FUN_14264b7c0 body=179 status=ok
// SIG undefined FUN_14264b7c0(void)

void FUN_14264b7c0(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UDistributionFloatUniform::GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x68) = lVar3;
  if (lVar3 != 0) {
    lVar4 = UDistributionFloatUniform::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(uint *)(lVar3 + 0x30) = *(uint *)(lVar3 + 0x30) | 2;
      *(undefined4 *)(lVar3 + 0x38) = 0;
      *(undefined4 *)(lVar3 + 0x3c) = 0x3f800000;
    }
  }
  return;
}



// FUNCTION 14264b880 FUN_14264b880 body=260 status=ok
// SIG undefined FUN_14264b880(void)

void FUN_14264b880(longlong param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  iVar6 = 0;
  uVar3 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
  lVar4 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x68) = lVar4;
  if (lVar4 != 0) {
    lVar5 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      do {
        uVar2 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x58))(lVar4 + 0x28,(float)iVar6);
        (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x70))(lVar4 + 0x28,0,uVar2,1.0 - (float)iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
      *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 2;
    }
  }
  return;
}



// FUNCTION 14264b990 FUN_14264b990 body=272 status=ok
// SIG undefined FUN_14264b990(void)

void FUN_14264b990(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  iVar6 = 0;
  uVar3 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
  lVar4 = FUN_1417985e0(uVar3,param_1,0,0,0,0,0,0,0);
  *(longlong *)(param_1 + 0x70) = lVar4;
  if (lVar4 != 0) {
    lVar5 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      do {
        uVar2 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x58))(lVar4 + 0x28);
        UParticleEmitter::GetLODLevel(param_2,0);
        (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x70))(lVar4 + 0x28,0,uVar2);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
      *(uint *)(lVar4 + 0x30) = *(uint *)(lVar4 + 0x30) | 2;
    }
  }
  return;
}



// FUNCTION 14264baa0 FUN_14264baa0 body=871 status=ok
// SIG undefined FUN_14264baa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14264baa0(longlong param_1,longlong param_2,uint param_3,float param_4,longlong param_5)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined8 *puVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 in_XMM4 [16];
  undefined1 auVar13 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_68 [96];
  
  pfVar7 = (float *)((ulonglong)param_3 + param_5);
  puVar6 = (undefined8 *)
           FUN_1424118e0(param_1 + 0x40,local_68,*(undefined4 *)(param_2 + 0x13c),
                         *(undefined8 *)(param_2 + 0x18),0,0);
  *(undefined8 *)pfVar7 = *puVar6;
  pfVar7[2] = *(float *)(puVar6 + 1);
  if (((*(byte *)(param_1 + 0x90) & 1) != 0) && (lVar3 = *(longlong *)(param_2 + 0x18), lVar3 != 0))
  {
    fVar9 = *(float *)(lVar3 + 0x234);
    fVar1 = *(float *)(lVar3 + 0x238);
    *pfVar7 = *(float *)(lVar3 + 0x230) * *pfVar7;
    pfVar7[1] = fVar9 * pfVar7[1];
    pfVar7[2] = fVar1 * pfVar7[2];
  }
  if (((*(byte *)(param_1 + 0x38) & 1) == 0) ||
     ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1) == 0)) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1) != 0) {
      fVar9 = *pfVar7;
      fVar1 = pfVar7[1];
      fVar2 = pfVar7[2];
      fVar4 = *(float *)(param_2 + 0xa8);
      fVar5 = *(float *)(param_2 + 0x98);
      fVar16 = *(float *)(param_2 + 0x88);
      fVar8 = *(float *)(param_2 + 0x78);
      *(ulonglong *)pfVar7 =
           CONCAT44(*(float *)(param_2 + 0xa4) * 0.0 + fVar2 * *(float *)(param_2 + 0x94) +
                    fVar1 * *(float *)(param_2 + 0x84) + fVar9 * *(float *)(param_2 + 0x74),
                    *(float *)(param_2 + 0xa0) * 0.0 + fVar2 * *(float *)(param_2 + 0x90) +
                    fVar1 * *(float *)(param_2 + 0x80) + fVar9 * *(float *)(param_2 + 0x70));
      pfVar7[2] = fVar4 * 0.0 + fVar2 * fVar5 + fVar1 * fVar16 + fVar9 * fVar8;
    }
    fVar9 = pfVar7[1];
    fVar1 = pfVar7[2];
    *(float *)(param_5 + 0x3c) = param_4 * *pfVar7 + *(float *)(param_5 + 0x3c);
    *(float *)(param_5 + 0x40) = fVar9 * param_4 + *(float *)(param_5 + 0x40);
    *(float *)(param_5 + 0x44) = fVar1 * param_4 + *(float *)(param_5 + 0x44);
    fVar9 = pfVar7[1];
    fVar1 = pfVar7[2];
    *(float *)(param_5 + 0x2c) = param_4 * *pfVar7 + *(float *)(param_5 + 0x2c);
    *(float *)(param_5 + 0x30) = fVar9 * param_4 + *(float *)(param_5 + 0x30);
    *(float *)(param_5 + 0x34) = fVar1 * param_4 + *(float *)(param_5 + 0x34);
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x18);
    fVar9 = pfVar7[2];
    fVar1 = pfVar7[1];
    auVar13 = *(undefined1 (*) [16])(lVar3 + 0x230);
    fVar4 = auVar13._0_4_;
    fVar5 = auVar13._4_4_;
    fVar16 = auVar13._8_4_;
    fVar17 = *(float *)(lVar3 + 0x210) * _DAT_146b06e10;
    fVar18 = *(float *)(lVar3 + 0x214) * fRam0000000146b06e14;
    fVar19 = *(float *)(lVar3 + 0x218) * fRam0000000146b06e18;
    fVar20 = *(float *)(lVar3 + 0x21c) * fRam0000000146b06e1c;
    auVar13 = rcpps(in_XMM4,auVar13);
    fVar2 = *pfVar7;
    fVar8 = fVar9 * fVar18 - fVar1 * fVar19;
    fVar10 = fVar2 * fVar19 - fVar9 * fVar17;
    fVar11 = fVar1 * fVar17 - fVar2 * fVar18;
    fVar12 = auVar13._0_4_;
    fVar14 = auVar13._4_4_;
    fVar15 = auVar13._8_4_;
    fVar8 = fVar8 + fVar8;
    fVar10 = fVar10 + fVar10;
    fVar11 = fVar11 + fVar11;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar5;
    fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar16;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar4;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar5;
    fVar15 = (fVar15 + fVar15) - fVar15 * fVar15 * fVar16;
    fVar16 = ((fVar10 * fVar17 - fVar8 * fVar18) + fVar20 * fVar11 + fVar9) *
             (float)(-(uint)((float)((uint)fVar16 & uRam0000000146b06e08) <= fRam0000000146b06df8) &
                     (uint)fVar15 ^ (uint)fVar15) * param_4;
    fVar9 = ((fVar11 * fVar18 - fVar10 * fVar19) + fVar20 * fVar8 + fVar2) *
            (float)(-(uint)((float)((uint)fVar4 & _DAT_146b06e00) <= _DAT_146b06df0) & (uint)fVar12
                   ^ (uint)fVar12) * param_4;
    param_4 = ((fVar8 * fVar19 - fVar11 * fVar17) + fVar20 * fVar10 + fVar1) *
              (float)(-(uint)((float)((uint)fVar5 & uRam0000000146b06e04) <= fRam0000000146b06df4) &
                      (uint)fVar14 ^ (uint)fVar14) * param_4;
    *(float *)(param_5 + 0x3c) = fVar9 + *(float *)(param_5 + 0x3c);
    *(float *)(param_5 + 0x40) = param_4 + *(float *)(param_5 + 0x40);
    *(float *)(param_5 + 0x44) = fVar16 + *(float *)(param_5 + 0x44);
    *(float *)(param_5 + 0x34) = fVar16 + *(float *)(param_5 + 0x34);
    *(float *)(param_5 + 0x2c) = fVar9 + *(float *)(param_5 + 0x2c);
    *(float *)(param_5 + 0x30) = param_4 + *(float *)(param_5 + 0x30);
  }
  return;
}



// FUNCTION 14264be10 FUN_14264be10 body=673 status=ok
// SIG undefined FUN_14264be10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14264be10(longlong param_1,longlong param_2,undefined8 param_3,float param_4,
                  longlong param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 in_XMM4 [16];
  undefined1 auVar9 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_68;
  float fStack_64;
  
  if (((*(byte *)(param_1 + 0x38) & 1) == 0) ||
     ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1) == 0)) {
    fVar5 = *(float *)(param_1 + 0x48);
    local_68 = (float)*(undefined8 *)(param_1 + 0x40);
    fStack_64 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1) != 0) {
      fVar3 = fStack_64 * *(float *)(param_2 + 0x88);
      fVar11 = local_68 * *(float *)(param_2 + 0x74);
      fVar13 = local_68 * *(float *)(param_2 + 0x78);
      local_68 = *(float *)(param_2 + 0xa0) * 0.0 + fVar5 * *(float *)(param_2 + 0x90) +
                 fStack_64 * *(float *)(param_2 + 0x80) + local_68 * *(float *)(param_2 + 0x70);
      fStack_64 = *(float *)(param_2 + 0xa4) * 0.0 + fVar5 * *(float *)(param_2 + 0x94) +
                  fStack_64 * *(float *)(param_2 + 0x84) + fVar11;
      fVar5 = *(float *)(param_2 + 0xa8) * 0.0 + fVar5 * *(float *)(param_2 + 0x98) + fVar3 + fVar13
      ;
    }
    fStack_64 = fStack_64 * param_4;
    *(float *)(param_5 + 0x3c) = local_68 * param_4 + *(float *)(param_5 + 0x3c);
    *(float *)(param_5 + 0x40) = fStack_64 + *(float *)(param_5 + 0x40);
    *(float *)(param_5 + 0x44) = fVar5 * param_4 + *(float *)(param_5 + 0x44);
    *(float *)(param_5 + 0x2c) = local_68 * param_4 + *(float *)(param_5 + 0x2c);
    *(float *)(param_5 + 0x34) = fVar5 * param_4 + *(float *)(param_5 + 0x34);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x18);
    fVar5 = *(float *)(param_1 + 0x48);
    fVar3 = *(float *)(param_1 + 0x44);
    auVar9 = *(undefined1 (*) [16])(lVar1 + 0x230);
    fVar13 = auVar9._0_4_;
    fVar2 = auVar9._4_4_;
    fVar14 = auVar9._8_4_;
    fVar15 = *(float *)(lVar1 + 0x210) * _DAT_146b06e10;
    fVar16 = *(float *)(lVar1 + 0x214) * fRam0000000146b06e14;
    fVar17 = *(float *)(lVar1 + 0x218) * fRam0000000146b06e18;
    fVar18 = *(float *)(lVar1 + 0x21c) * fRam0000000146b06e1c;
    auVar9 = rcpps(in_XMM4,auVar9);
    fVar11 = *(float *)(param_1 + 0x40);
    fVar4 = fVar5 * fVar16 - fVar3 * fVar17;
    fVar6 = fVar11 * fVar17 - fVar5 * fVar15;
    fVar7 = fVar3 * fVar15 - fVar11 * fVar16;
    fVar8 = auVar9._0_4_;
    fVar10 = auVar9._4_4_;
    fVar12 = auVar9._8_4_;
    fVar4 = fVar4 + fVar4;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar13;
    fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar2;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar14;
    fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar13;
    fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar2;
    fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar14;
    fVar14 = ((fVar6 * fVar15 - fVar4 * fVar16) + fVar18 * fVar7 + fVar5) *
             (float)(-(uint)((float)((uint)fVar14 & uRam0000000146b06e08) <= fRam0000000146b06df8) &
                     (uint)fVar12 ^ (uint)fVar12) * param_4;
    fVar5 = ((fVar7 * fVar16 - fVar6 * fVar17) + fVar18 * fVar4 + fVar11) *
            (float)(-(uint)((float)((uint)fVar13 & _DAT_146b06e00) <= _DAT_146b06df0) & (uint)fVar8
                   ^ (uint)fVar8) * param_4;
    fStack_64 = ((fVar4 * fVar17 - fVar7 * fVar15) + fVar18 * fVar6 + fVar3) *
                (float)(-(uint)((float)((uint)fVar2 & uRam0000000146b06e04) <= fRam0000000146b06df4)
                        & (uint)fVar10 ^ (uint)fVar10) * param_4;
    *(float *)(param_5 + 0x3c) = fVar5 + *(float *)(param_5 + 0x3c);
    *(float *)(param_5 + 0x40) = fStack_64 + *(float *)(param_5 + 0x40);
    *(float *)(param_5 + 0x44) = fVar14 + *(float *)(param_5 + 0x44);
    *(float *)(param_5 + 0x34) = fVar14 + *(float *)(param_5 + 0x34);
    *(float *)(param_5 + 0x2c) = fVar5 + *(float *)(param_5 + 0x2c);
  }
  *(float *)(param_5 + 0x30) = fStack_64 + *(float *)(param_5 + 0x30);
  return;
}



// FUNCTION 14264c0c0 FUN_14264c0c0 body=336 status=ok
// SIG undefined FUN_14264c0c0(void)

void FUN_14264c0c0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int *piVar7;
  float fVar8;
  
  uVar6 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x928);
    if (0 < iVar2) {
      plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x18) + 0x920);
      uVar4 = uVar6;
      while ((plVar1 = (longlong *)*plVar5, plVar1 == (longlong *)0x0 ||
             (*(longlong *)(plVar1[2] + 0x28) != *(longlong *)(param_1 + 0x38)))) {
        uVar4 = uVar4 + 1;
        plVar5 = plVar5 + 1;
        if ((longlong)iVar2 <= (longlong)uVar4) {
          return;
        }
      }
      piVar7 = (int *)((ulonglong)param_3 + param_5);
      lVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,*(undefined4 *)(param_1 + 0xc4));
      if (lVar3 == 0) {
        lVar3 = 0;
        if (*(char *)(param_1 + 0xbc) == '\0') {
          fVar8 = (float)FGenericPlatformMath::SRand();
          iVar2 = (int)(fVar8 * (float)(int)plVar1[0x25]);
          *(int *)(param_1 + 0xc4) = iVar2;
          *piVar7 = iVar2;
        }
        else if ((*(char *)(param_1 + 0xbc) == '\x01') && (0 < (int)plVar1[0x25])) {
          do {
            iVar2 = (int)uVar6;
            lVar3 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar6);
            if (lVar3 != 0) {
              *(int *)(param_1 + 0xc4) = iVar2;
              *piVar7 = iVar2;
              break;
            }
            uVar6 = (ulonglong)(iVar2 + 1U);
          } while ((int)(iVar2 + 1U) < (int)plVar1[0x25]);
        }
        piVar7[1] = (int)lVar3;
        if (lVar3 != 0) {
          *(undefined8 *)(piVar7 + 2) = *(undefined8 *)(lVar3 + 0x3c);
          piVar7[4] = *(int *)(lVar3 + 0x44);
        }
      }
      else {
        *piVar7 = *(int *)(param_1 + 0xc4);
        *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
      }
    }
  }
  return;
}



// FUNCTION 14264c210 FUN_14264c210 body=314 status=ok
// SIG undefined FUN_14264c210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14264c210(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  fVar13 = 1.0;
  param_3 = param_3 & 0xffffffff;
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_2 + 0x28);
  }
  if ((lVar5 != 0) && ((*(byte *)(*(longlong *)(lVar5 + 0x30) + 100) & 1) == 0)) {
    if (param_2 == 0) goto LAB_14264c2d9;
    lVar5 = *(longlong *)(param_2 + 0x18);
    if (lVar5 == 0) goto LAB_14264c2cc;
    if ((((*(byte *)(lVar5 + 0x71b) & 4) == 0) &&
        (cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 == '\0')) && (DAT_1468c21ae != '\0')) {
      DVar4 = GetCurrentThreadId();
      lVar6 = 0x930;
      if (DVar4 == DAT_1468c21c0) goto LAB_14264c2a2;
    }
    else {
LAB_14264c2a2:
      lVar6 = 0x210;
    }
    puVar1 = (uint *)(lVar6 + 0x20 + lVar5);
    uVar9 = *puVar1 & _DAT_146b06e00;
    uVar10 = puVar1[1] & uRam0000000146b06e04;
    uVar11 = puVar1[2] & uRam0000000146b06e08;
    uVar12 = puVar1[3] & uRam0000000146b06e0c;
    auVar14._4_4_ = uVar10;
    auVar14._0_4_ = uVar9;
    auVar14._8_4_ = uVar11;
    auVar14._12_4_ = uVar12;
    auVar15._4_4_ = uVar11;
    auVar15._0_4_ = uVar10;
    auVar15._8_4_ = uVar9;
    auVar15._12_4_ = uVar12;
    auVar15 = maxps(auVar14,auVar15);
    auVar2._4_4_ = uVar9;
    auVar2._0_4_ = uVar11;
    auVar2._8_4_ = uVar10;
    auVar2._12_4_ = uVar12;
    auVar15 = maxps(auVar15,auVar2);
    fVar13 = auVar15._0_4_;
  }
LAB_14264c2cc:
  if ((param_2 != 0) && (*(uint *)(param_2 + 0x4c) != 0)) {
    param_3 = (ulonglong)*(uint *)(param_2 + 0x4c);
  }
LAB_14264c2d9:
  pfVar7 = (float *)(param_3 + param_5);
  fVar8 = (float)FUN_1424116d0(param_1 + 0x38,*(undefined4 *)(param_5 + 0xc),
                               *(undefined8 *)(param_2 + 0x18),0);
  fVar8 = fVar8 * fVar13;
  if (*(char *)(param_1 + 0x74) == '\0') {
    *pfVar7 = fVar8;
    pfVar7[1] = fVar8;
    return;
  }
  if (*(char *)(param_1 + 0x74) != '\x01') {
    pfVar7[1] = pfVar7[1] * fVar8;
    return;
  }
  pfVar7[1] = pfVar7[1] + fVar8;
  return;
}



// FUNCTION 14264c350 FUN_14264c350 body=304 status=ok
// SIG undefined FUN_14264c350(void)

void FUN_14264c350(longlong param_1,longlong param_2,ulonglong param_3,float param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 local_28 [32];
  
  puVar2 = (undefined8 *)((param_3 & 0xffffffff) + param_5);
  puVar1 = (undefined8 *)
           FUN_1424118e0(param_1 + 0x38,local_28,*(undefined4 *)(param_2 + 0x13c),
                         *(undefined8 *)(param_2 + 0x18),0,0);
  *puVar2 = *puVar1;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
  puVar1 = (undefined8 *)
           FUN_1424118e0(param_1 + 0x88,local_28,*(undefined4 *)(param_2 + 0x13c),
                         *(undefined8 *)(param_2 + 0x18),0,0);
  *(undefined8 *)((longlong)puVar2 + 0xc) = *puVar1;
  *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)(puVar1 + 1);
  fVar3 = (float)FUN_1424116d0(param_1 + 0xd8,*(undefined4 *)(param_2 + 0x13c),
                               *(undefined8 *)(param_2 + 0x18),0);
  *(int *)(puVar2 + 3) = (int)ROUND(fVar3 * 2.0 + 0.5) >> 1;
  uVar4 = FUN_1424116d0(param_1 + 0x180,*(undefined4 *)(param_2 + 0x13c),
                        *(undefined8 *)(param_2 + 0x18),0);
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uVar4;
  *(undefined4 *)(puVar2 + 4) = 0xffffffff;
  *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  if (param_4 < *(float *)((longlong)puVar2 + 0x1c)) {
    *(uint *)(param_5 + 0x68) = *(uint *)(param_5 + 0x68) & 0x3fffffff | 0x40000000;
  }
  return;
}



// FUNCTION 14264c480 FUN_14264c480 body=33 status=ok
// SIG undefined FUN_14264c480(void)

void FUN_14264c480(void)

{
  FUN_14264e9a0();
  return;
}



// FUNCTION 14264c4b0 FUN_14264c4b0 body=167 status=ok
// SIG undefined FUN_14264c4b0(void)

void FUN_14264c4b0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_1424118e0(param_1 + 0x38,&local_18,*(undefined4 *)(param_5 + 0xc),
                *(undefined8 *)(param_2 + 0x18),0,0);
  uVar1 = FUN_1424116d0(param_1 + 0x88,*(undefined4 *)(param_5 + 0xc),
                        *(undefined8 *)(param_2 + 0x18),0);
  *(undefined4 *)(param_5 + 0x6c) = local_18;
  *(undefined4 *)(param_5 + 0x7c) = local_18;
  *(undefined4 *)(param_5 + 0x74) = local_10;
  *(undefined4 *)(param_5 + 0x84) = local_10;
  *(undefined4 *)(param_5 + 0x70) = local_14;
  *(undefined4 *)(param_5 + 0x80) = local_14;
  *(undefined4 *)(param_5 + 0x78) = uVar1;
  *(undefined4 *)(param_5 + 0x88) = uVar1;
  return;
}



// FUNCTION 14264c560 FUN_14264c560 body=219 status=ok
// SIG undefined FUN_14264c560(void)

void FUN_14264c560(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined4 uVar5;
  float local_28;
  float fStack_24;
  undefined1 local_18 [16];
  
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    puVar3 = (undefined8 *)
             FUN_1424118e0(param_1 + 0x38,local_18,*(undefined4 *)(param_5 + 0xc),
                           *(undefined8 *)(param_2 + 0x18),0,0);
    uVar5 = *(undefined4 *)(param_5 + 0xc);
  }
  else {
    puVar3 = (undefined8 *)
             FUN_1424118e0(param_1 + 0x38,local_18,*(undefined4 *)(param_2 + 0x13c),
                           *(undefined8 *)(param_2 + 0x18),0,0);
    uVar5 = *(undefined4 *)(param_2 + 0x13c);
  }
  uVar1 = *puVar3;
  fVar2 = *(float *)(puVar3 + 1);
  fVar4 = (float)FUN_1424116d0(param_1 + 0x88,uVar5,*(undefined8 *)(param_2 + 0x18),0);
  local_28 = (float)uVar1;
  fStack_24 = (float)((ulonglong)uVar1 >> 0x20);
  *(float *)(param_5 + 0x6c) = local_28 * *(float *)(param_5 + 0x6c);
  *(float *)(param_5 + 0x70) = fStack_24 * *(float *)(param_5 + 0x70);
  *(float *)(param_5 + 0x78) = fVar4 * *(float *)(param_5 + 0x78);
  *(float *)(param_5 + 0x74) = fVar2 * *(float *)(param_5 + 0x74);
  return;
}



// FUNCTION 14264c640 FUN_14264c640 body=96 status=ok
// SIG undefined FUN_14264c640(void)

void FUN_14264c640(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142627a50(param_2,param_1);
  FUN_14264e9a0(param_1,param_2,param_3,param_4,uVar1,param_5);
  return;
}



// FUNCTION 14264c6a0 FUN_14264c6a0 body=93 status=ok
// SIG undefined FUN_14264c6a0(void)

void FUN_14264c6a0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)FUN_142627a50(param_2,param_1);
  if (plVar7 != (longlong *)0x0) {
    iVar3 = (int)plVar7[2];
    if ((-1 < iVar3) && (iVar3 < (int)plVar7[1])) {
      *(int *)(plVar7 + 2) = iVar3 + 1;
      puVar1 = (undefined8 *)((longlong)iVar3 * 0x20 + *plVar7);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)iVar3 * 0x20 + 0x10 + *plVar7);
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      *(undefined8 *)(param_5 + 0x7c) = *puVar1;
      *(undefined8 *)(param_5 + 0x84) = uVar4;
      if (*(int *)(param_2 + 0x3c) != 0) {
        puVar1 = (undefined8 *)(*(int *)(param_2 + 0x3c) + param_5);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
      }
    }
  }
  return;
}



// FUNCTION 14264c700 FUN_14264c700 body=33 status=ok
// SIG undefined FUN_14264c700(void)

void FUN_14264c700(void)

{
  FUN_14264ea50();
  return;
}



// FUNCTION 14264c730 FUN_14264c730 body=96 status=ok
// SIG undefined FUN_14264c730(void)

void FUN_14264c730(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142627a50(param_2,param_1);
  FUN_14264ea50(param_1,param_2,param_3,param_4,uVar1,param_5);
  return;
}



// FUNCTION 14264c790 FUN_14264c790 body=33 status=ok
// SIG undefined FUN_14264c790(void)

void FUN_14264c790(void)

{
  FUN_14264eaf0();
  return;
}



// FUNCTION 14264c7c0 FUN_14264c7c0 body=125 status=ok
// SIG undefined FUN_14264c7c0(void)

void FUN_14264c7c0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,0);
  lVar2 = FUN_142627a50(param_2,param_1);
  FUN_14264eaf0(param_1,param_2,param_3,param_4,lVar2 + (ulonglong)uVar1,param_5);
  return;
}



// FUNCTION 14264c840 FUN_14264c840 body=38 status=ok
// SIG undefined FUN_14264c840(void)

void FUN_14264c840(longlong *param_1)

{
  (**(code **)(*param_1 + 0x380))();
  return;
}



// FUNCTION 14264c870 FUN_14264c870 body=988 status=ok
// SIG undefined FUN_14264c870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14264c870(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar9 = FUN_142627a50(param_2,param_1);
  if (lVar9 == 0) {
    return;
  }
  FUN_142646600(param_1,param_2,lVar9);
  cVar5 = FWeakObjectPtr::IsValid(lVar9);
  if (cVar5 == '\0') {
    return;
  }
  uVar10 = FWeakObjectPtr::Get(lVar9);
  iVar6 = FUN_142644a40(param_1,lVar9,uVar10);
  cVar5 = *(char *)(param_1 + 0xa8);
  puVar12 = (undefined8 *)0x0;
  if (cVar5 == '\x02') {
    fVar15 = (float)FUN_1424116d0(param_1 + 0xb0);
    iVar13 = (int)fVar15;
  }
  else if ((cVar5 == '\0') || (*(char *)(param_1 + 0xfc) == '\x01')) {
    iVar13 = *(int *)(lVar9 + 0x10);
    iVar7 = iVar13 + 1;
    if (iVar6 <= iVar7) {
      iVar7 = 0;
    }
    *(int *)(lVar9 + 0x10) = iVar7;
  }
  else {
    if (cVar5 != '\x01') {
      return;
    }
    fVar15 = (float)FGenericPlatformMath::SRand();
    iVar13 = (int)(fVar15 * ((float)iVar6 - 0.5));
    *(int *)(lVar9 + 0x10) = iVar13;
  }
  if (iVar13 == -1) {
    return;
  }
  if (iVar6 <= iVar13) {
    return;
  }
  iVar6 = (**(code **)(*param_2 + 0x150))(param_2);
  if ((iVar6 < 1) || (cVar5 = (**(code **)(*param_2 + 0x158))(param_2), cVar5 == '\0')) {
    bVar3 = false;
    bVar4 = false;
    if ((*(byte *)(param_1 + 0xe8) & 4) == 0) goto LAB_14264c9b8;
  }
  else {
    bVar4 = true;
  }
  bVar3 = bVar4;
  puVar12 = &local_48;
LAB_14264c9b8:
  piVar14 = (int *)(param_3 + param_5);
  *piVar14 = iVar13;
  cVar5 = FUN_142644c30(param_1,lVar9,param_2,uVar10,piVar14,&local_58,puVar12,
                        *(undefined4 *)(param_5 + 0xc));
  if (cVar5 == '\x01') {
    *(undefined8 *)(param_5 + 0x10) = local_58;
    *(float *)(param_5 + 0x18) = local_50;
    iVar7 = _finite((double)*(float *)(param_5 + 0x10));
    if ((iVar7 != 0) && (iVar7 = _finite((double)*(float *)(param_5 + 0x14)), iVar7 != 0)) {
      _finite((double)*(float *)(param_5 + 0x18));
    }
    *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(param_5 + 0x10);
    *(undefined4 *)(param_5 + 0x28) = *(undefined4 *)(param_5 + 0x18);
    if (((*(uint *)(param_1 + 0xe8) & 8) != 0) && ((*(uint *)(param_1 + 0xe8) & 1) == 0)) {
      fVar15 = *(float *)(param_1 + 0xec);
      lVar11 = (longlong)iVar13;
      lVar9 = *(longlong *)(lVar9 + 0x30);
      local_50 = (*(float *)(lVar9 + 8 + lVar11 * 0xc) - *(float *)(param_5 + 0x34)) * fVar15 +
                 *(float *)(param_5 + 0x34);
      *(ulonglong *)(param_5 + 0x2c) =
           CONCAT44((*(float *)(lVar9 + 4 + lVar11 * 0xc) - *(float *)(param_5 + 0x30)) * fVar15 +
                    *(float *)(param_5 + 0x30),
                    (*(float *)(lVar9 + lVar11 * 0xc) - *(float *)(param_5 + 0x2c)) * fVar15 +
                    *(float *)(param_5 + 0x2c));
      *(float *)(param_5 + 0x34) = local_50;
      iVar7 = _finite((double)*(float *)(param_5 + 0x2c));
      if ((iVar7 != 0) && (iVar7 = _finite((double)*(float *)(param_5 + 0x30)), iVar7 != 0)) {
        _finite((double)*(float *)(param_5 + 0x34));
      }
    }
    uVar8 = *(uint *)(param_1 + 0xe8);
    if (((uVar8 & 2) != 0) && (bVar3)) {
      param_5 = iVar6 + param_5;
      puVar12 = (undefined8 *)FQuat::Euler(&local_48,&local_58);
      *(undefined8 *)(param_5 + 0x18) = *puVar12;
      *(undefined4 *)(param_5 + 0x20) = *(undefined4 *)(puVar12 + 1);
      if ((*(byte *)(*(longlong *)(param_2[5] + 0x30) + 100) & 1) != 0) {
        lVar9 = param_2[3];
        fVar15 = *(float *)(param_5 + 0x20);
        fVar1 = *(float *)(param_5 + 0x1c);
        fVar19 = *(float *)(lVar9 + 0x210) * _DAT_146b06e10;
        fVar20 = *(float *)(lVar9 + 0x214) * fRam0000000146b06e14;
        fVar21 = *(float *)(lVar9 + 0x218) * fRam0000000146b06e18;
        fVar22 = *(float *)(lVar9 + 0x21c) * fRam0000000146b06e1c;
        fVar2 = *(float *)(param_5 + 0x18);
        fVar16 = fVar15 * fVar20 - fVar1 * fVar21;
        fVar17 = fVar2 * fVar21 - fVar15 * fVar19;
        fVar18 = fVar1 * fVar19 - fVar2 * fVar20;
        fVar16 = fVar16 + fVar16;
        fVar17 = fVar17 + fVar17;
        fVar18 = fVar18 + fVar18;
        *(ulonglong *)(param_5 + 0x18) =
             CONCAT44((fVar16 * fVar21 - fVar18 * fVar19) + fVar22 * fVar17 + fVar1,
                      (fVar18 * fVar20 - fVar17 * fVar21) + fVar22 * fVar16 + fVar2);
        *(float *)(param_5 + 0x20) = (fVar17 * fVar19 - fVar16 * fVar20) + fVar22 * fVar18 + fVar15;
      }
      *(undefined8 *)(param_5 + 0xc) = *(undefined8 *)(param_5 + 0x18);
      *(undefined4 *)(param_5 + 0x14) = *(undefined4 *)(param_5 + 0x20);
      uVar8 = *(uint *)(param_1 + 0xe8);
    }
    if ((uVar8 & 4) != 0) {
      *(undefined8 *)(piVar14 + 4) = local_48;
      *(undefined8 *)(piVar14 + 6) = uStack_40;
    }
  }
  return;
}



// FUNCTION 14264cc50 FUN_14264cc50 body=478 status=ok
// SIG undefined FUN_14264cc50(void)

void FUN_14264cc50(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_28;
  float local_24;
  float local_20;
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1) == 0) {
    FUN_1424118e0(param_1 + 0x38,&local_28,*(undefined4 *)(param_5 + 0xc),
                  *(undefined8 *)(param_2 + 0x18),0,0);
    lVar1 = *(longlong *)(param_2 + 0x18);
    fVar2 = *(float *)(lVar1 + 0x210);
    fVar3 = *(float *)(lVar1 + 0x214);
    fVar4 = *(float *)(lVar1 + 0x218);
    fVar5 = *(float *)(lVar1 + 0x21c);
    local_28 = local_28 * *(float *)(lVar1 + 0x230);
    local_24 = local_24 * *(float *)(lVar1 + 0x234);
    local_20 = local_20 * *(float *)(lVar1 + 0x238);
    fVar9 = local_20 * fVar3 - local_24 * fVar4;
    fVar11 = local_28 * fVar4 - local_20 * fVar2;
    fVar12 = local_24 * fVar2 - local_28 * fVar3;
    fVar9 = fVar9 + fVar9;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    fVar10 = (fVar11 * fVar2 - fVar9 * fVar3) + fVar5 * fVar12 + local_20 +
             *(float *)(lVar1 + 0x228);
    *(ulonglong *)(param_5 + 0x10) =
         CONCAT44((fVar9 * fVar4 - fVar12 * fVar2) + fVar5 * fVar11 + local_24 +
                  *(float *)(lVar1 + 0x224),
                  (fVar12 * fVar3 - fVar11 * fVar4) + fVar5 * fVar9 + local_28 +
                  *(float *)(lVar1 + 0x220));
    local_20 = fVar10;
  }
  else {
    puVar7 = (undefined8 *)
             FUN_1424118e0(param_1 + 0x38,&local_28,*(undefined4 *)(param_5 + 0xc),
                           *(undefined8 *)(param_2 + 0x18),0,0);
    *(undefined8 *)(param_5 + 0x10) = *puVar7;
    fVar10 = *(float *)(puVar7 + 1);
  }
  *(float *)(param_5 + 0x18) = fVar10;
  pfVar8 = (float *)((ulonglong)param_3 + param_5);
  puVar7 = (undefined8 *)
           FUN_1424118e0(param_1 + 0x88,&local_28,*(undefined4 *)(param_2 + 0x13c),
                         *(undefined8 *)(param_2 + 0x18),0,0);
  *(undefined8 *)pfVar8 = *puVar7;
  pfVar8[2] = *(float *)(puVar7 + 1);
  fVar10 = *pfVar8 + *(float *)(param_5 + 0x10);
  *(float *)(param_5 + 0x10) = fVar10;
  *(float *)(param_5 + 0x14) = pfVar8[1] + *(float *)(param_5 + 0x14);
  *(float *)(param_5 + 0x18) = pfVar8[2] + *(float *)(param_5 + 0x18);
  iVar6 = _finite((double)fVar10);
  if (iVar6 != 0) {
    iVar6 = _finite((double)*(float *)(param_5 + 0x14));
    if (iVar6 != 0) {
      _finite((double)*(float *)(param_5 + 0x18));
    }
  }
  *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(param_5 + 0x10);
  *(undefined4 *)(param_5 + 0x28) = *(undefined4 *)(param_5 + 0x18);
  return;
}



// FUNCTION 14264ce30 FUN_14264ce30 body=2108 status=ok
// SIG undefined FUN_14264ce30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14264ce30(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float *pfVar12;
  ulonglong uVar13;
  byte bVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  byte local_res8;
  float local_80;
  
  uVar11 = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar3 = *(int *)(param_2[3] + 0x928);
    if (0 < iVar3) {
      plVar9 = *(longlong **)(param_2[3] + 0x920);
      uVar10 = uVar11;
      do {
        plVar1 = (longlong *)*plVar9;
        if ((plVar1 != (longlong *)0x0) &&
           (*(longlong *)(plVar1[2] + 0x28) == *(longlong *)(param_1 + 0x38))) {
          uVar13 = 0;
          local_res8 = *(byte *)(*(longlong *)(plVar1[5] + 0x30) + 100) & 1;
          cVar2 = *(char *)(param_1 + 0x40);
          bVar14 = *(byte *)(*(longlong *)(param_2[5] + 0x30) + 100) & 1;
          if (cVar2 == '\0') {
            iVar3 = (int)plVar1[0x25];
            fVar15 = (float)FGenericPlatformMath::SRand();
            uVar13 = (ulonglong)(uint)(int)(fVar15 * (float)iVar3);
            if (iVar3 <= (int)(fVar15 * (float)iVar3)) {
              uVar13 = (ulonglong)(iVar3 - 1);
            }
          }
          else if (cVar2 == '\x01') {
            puVar5 = (uint *)FUN_142627a50(param_2,param_1);
            if (puVar5 != (uint *)0x0) {
              *puVar5 = *puVar5 + 1;
              uVar13 = (ulonglong)*puVar5;
              if ((int)plVar1[0x25] <= (int)*puVar5) {
                uVar13 = 0;
                *puVar5 = 0;
              }
            }
          }
          else {
            uVar13 = uVar11;
            if (cVar2 == '\x02') {
              fVar15 = (float)FUN_1424116d0(param_1 + 0x58,uVar10,0,0);
              if (0.0 <= fVar15) {
                if (1.0 <= fVar15) {
                  fVar15 = 1.0;
                }
              }
              else {
                fVar15 = 0.0;
              }
              uVar13 = (ulonglong)(uint)(int)((float)((int)plVar1[0x25] + -1) * fVar15);
            }
          }
          lVar6 = (**(code **)(*plVar1 + 0x108))(plVar1,uVar13);
          *(float *)(param_5 + param_3) = (float)(int)uVar13 / ((float)(int)plVar1[0x25] - 1.0);
          if (lVar6 == 0) goto LAB_14264d595;
          if ((((*(float *)(lVar6 + 0xc) == 0.0) && (DAT_1468b5d90 == *(float *)(lVar6 + 0x10))) &&
              (DAT_1468b5d94 == *(float *)(lVar6 + 0x14))) &&
             (DAT_1468b5d98 == *(float *)(lVar6 + 0x18))) {
            if (bVar14 == 0) {
              lVar8 = plVar1[3];
              fVar15 = *(float *)(lVar8 + 0x220);
              fVar21 = *(float *)(lVar8 + 0x224);
              local_80 = *(float *)(lVar8 + 0x228);
LAB_14264d22a:
              *(ulonglong *)(param_5 + 0x10) = CONCAT44(fVar21,fVar15);
            }
            else {
              *(ulonglong *)(param_5 + 0x10) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
              local_80 = DAT_1468b5d98;
            }
          }
          else {
            if (local_res8 != bVar14) {
              if ((local_res8 == 0) || (bVar14 != 0)) {
                lVar8 = plVar1[3];
                auVar23 = *(undefined1 (*) [16])(lVar8 + 0x230);
                fVar15 = auVar23._0_4_;
                fVar21 = auVar23._4_4_;
                fVar30 = auVar23._8_4_;
                fVar25 = *(float *)(lVar8 + 0x210) * _DAT_146b06e10;
                fVar26 = *(float *)(lVar8 + 0x214) * fRam0000000146b06e14;
                fVar27 = *(float *)(lVar8 + 0x218) * fRam0000000146b06e18;
                fVar28 = *(float *)(lVar8 + 0x21c) * fRam0000000146b06e1c;
                auVar23 = rcpps(in_XMM5,auVar23);
                fVar29 = (float)((uint)(*(float *)(lVar6 + 0x10) - *(float *)(lVar8 + 0x220)) &
                                _DAT_146b06de0);
                fVar31 = (float)((uint)(*(float *)(lVar6 + 0x14) - *(float *)(lVar8 + 0x224)) &
                                uRam0000000146b06de4);
                fVar32 = (float)((uint)(*(float *)(lVar6 + 0x18) - *(float *)(lVar8 + 0x228)) &
                                uRam0000000146b06de8);
                fVar17 = fVar32 * fVar26 - fVar31 * fVar27;
                fVar22 = fVar29 * fVar27 - fVar32 * fVar25;
                fVar18 = fVar31 * fVar25 - fVar29 * fVar26;
                fVar19 = auVar23._0_4_;
                fVar20 = auVar23._4_4_;
                fVar24 = auVar23._8_4_;
                fVar17 = fVar17 + fVar17;
                fVar22 = fVar22 + fVar22;
                fVar18 = fVar18 + fVar18;
                fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar15;
                fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar21;
                fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar30;
                fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar15;
                fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar21;
                fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar30;
                fVar15 = ((fVar18 * fVar26 - fVar22 * fVar27) + fVar28 * fVar17 + fVar29) *
                         (float)(-(uint)((float)((uint)fVar15 & _DAT_146b06e00) <= _DAT_146b06df0) &
                                 (uint)fVar19 ^ (uint)fVar19);
                fVar21 = ((fVar17 * fVar27 - fVar18 * fVar25) + fVar28 * fVar22 + fVar31) *
                         (float)(-(uint)((float)((uint)fVar21 & uRam0000000146b06e04) <=
                                        fRam0000000146b06df4) & (uint)fVar20 ^ (uint)fVar20);
                local_80 = ((fVar22 * fVar25 - fVar17 * fVar26) + fVar28 * fVar18 + fVar32) *
                           (float)(-(uint)((float)((uint)fVar30 & uRam0000000146b06e08) <=
                                          fRam0000000146b06df8) & (uint)fVar24 ^ (uint)fVar24);
              }
              else {
                lVar8 = plVar1[3];
                fVar30 = *(float *)(lVar8 + 0x210);
                fVar17 = *(float *)(lVar8 + 0x214);
                fVar21 = *(float *)(lVar8 + 0x218);
                fVar22 = *(float *)(lVar8 + 0x21c);
                fVar15 = *(float *)(lVar6 + 0x10) * *(float *)(lVar8 + 0x230);
                fVar24 = *(float *)(lVar6 + 0x14) * *(float *)(lVar8 + 0x234);
                fVar25 = *(float *)(lVar6 + 0x18) * *(float *)(lVar8 + 0x238);
                fVar18 = fVar25 * fVar17 - fVar24 * fVar21;
                fVar19 = fVar15 * fVar21 - fVar25 * fVar30;
                fVar20 = fVar24 * fVar30 - fVar15 * fVar17;
                fVar18 = fVar18 + fVar18;
                fVar19 = fVar19 + fVar19;
                fVar20 = fVar20 + fVar20;
                fVar15 = (fVar20 * fVar17 - fVar19 * fVar21) + fVar22 * fVar18 + fVar15 +
                         *(float *)(lVar8 + 0x220);
                fVar21 = (fVar18 * fVar21 - fVar20 * fVar30) + fVar22 * fVar19 + fVar24 +
                         *(float *)(lVar8 + 0x224);
                local_80 = (fVar19 * fVar30 - fVar18 * fVar17) + fVar22 * fVar20 + fVar25 +
                           *(float *)(lVar8 + 0x228);
              }
              goto LAB_14264d22a;
            }
            *(undefined8 *)(param_5 + 0x10) = *(undefined8 *)(lVar6 + 0x10);
            local_80 = *(float *)(lVar6 + 0x18);
          }
          *(float *)(param_5 + 0x18) = local_80;
          *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(param_5 + 0x10);
          *(float *)(param_5 + 0x28) = local_80;
          if ((*(byte *)(param_1 + 0x44) & 1) != 0) {
            fVar15 = *(float *)(param_1 + 0x48);
            fVar21 = *(float *)(lVar6 + 0x40);
            fVar30 = *(float *)(lVar6 + 0x44);
            *(float *)(param_5 + 0x2c) =
                 fVar15 * *(float *)(lVar6 + 0x3c) + *(float *)(param_5 + 0x2c);
            *(float *)(param_5 + 0x30) = fVar21 * fVar15 + *(float *)(param_5 + 0x30);
            *(float *)(param_5 + 0x34) = fVar30 * fVar15 + *(float *)(param_5 + 0x34);
            fVar15 = *(float *)(param_1 + 0x48);
            fVar21 = *(float *)(lVar6 + 0x40);
            fVar30 = *(float *)(lVar6 + 0x44);
            *(float *)(param_5 + 0x3c) =
                 fVar15 * *(float *)(lVar6 + 0x3c) + *(float *)(param_5 + 0x3c);
            *(float *)(param_5 + 0x40) = fVar21 * fVar15 + *(float *)(param_5 + 0x40);
            *(float *)(param_5 + 0x44) = fVar30 * fVar15 + *(float *)(param_5 + 0x44);
          }
          if ((*(byte *)(param_1 + 0x4c) & 1) != 0) {
            *(float *)(param_5 + 0x38) =
                 *(float *)(lVar6 + 0x38) * *(float *)(param_1 + 0x50) + *(float *)(param_5 + 0x38);
            iVar3 = (**(code **)(*param_2 + 0x150))(param_2);
            iVar4 = (**(code **)(*plVar1 + 0x150))(plVar1);
            if ((iVar3 != 0) && (iVar4 != 0)) {
              pfVar12 = (float *)(param_5 + iVar3);
              pfVar7 = (float *)(iVar4 + lVar6);
              pfVar12[6] = pfVar7[6] + pfVar12[6];
              pfVar12[7] = pfVar7[7] + pfVar12[7];
              pfVar12[8] = pfVar7[8] + pfVar12[8];
              *pfVar12 = *pfVar7 + *pfVar12;
              pfVar12[1] = pfVar7[1] + pfVar12[1];
              pfVar12[2] = pfVar7[2] + pfVar12[2];
            }
          }
          if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
            cVar2 = (**(code **)(*plVar1 + 0x158))(plVar1);
            uVar10 = uVar11;
            if (cVar2 != '\0') {
              iVar3 = (**(code **)(*plVar1 + 0x150))(plVar1);
              uVar10 = iVar3 + lVar6;
            }
            cVar2 = (**(code **)(*param_2 + 0x158))(param_2);
            if (cVar2 != '\0') {
              iVar3 = (**(code **)(*param_2 + 0x150))(param_2);
              uVar11 = iVar3 + param_5;
            }
            if ((uVar10 != 0) && (uVar11 != 0)) {
              *(undefined8 *)(uVar11 + 0x18) = *(undefined8 *)(uVar10 + 0x18);
              *(undefined4 *)(uVar11 + 0x20) = *(undefined4 *)(uVar10 + 0x20);
              *(undefined8 *)(uVar11 + 0xc) = *(undefined8 *)(uVar10 + 0xc);
              *(undefined4 *)(uVar11 + 0x14) = *(undefined4 *)(uVar10 + 0x14);
              *(undefined8 *)(uVar11 + 0x24) = *(undefined8 *)(uVar10 + 0x24);
              *(undefined4 *)(uVar11 + 0x2c) = *(undefined4 *)(uVar10 + 0x2c);
            }
          }
          if (*(char *)((longlong)param_2 + 0xf4) == '\n') {
            pfVar12 = (float *)((int)param_2[10] + param_5);
            iVar3 = (**(code **)(*plVar1 + 0x228))(plVar1);
            if ((iVar3 == 4) && (lVar8 = (longlong)(int)plVar1[6], (int)plVar1[6] != 0)) {
              fVar15 = *(float *)(lVar8 + 0x2c + lVar6);
              fVar21 = *(float *)(lVar8 + 0x28 + lVar6);
              fVar30 = *(float *)(lVar8 + 0x30 + lVar6);
              fVar17 = fVar21 * fVar21 + fVar15 * fVar15 + fVar30 * fVar30;
              if (fVar17 == 1.0) {
                uVar16 = *(undefined8 *)(lVar8 + 0x28 + lVar6);
                fVar30 = *(float *)(lVar8 + 0x30 + lVar6);
              }
              else if (1e-08 <= fVar17) {
                auVar23 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
                fVar22 = auVar23._0_4_;
                fVar22 = fVar22 + fVar22 * (0.5 - fVar17 * 0.5 * fVar22 * fVar22);
                fVar22 = fVar22 + fVar22 * (0.5 - fVar17 * 0.5 * fVar22 * fVar22);
                fVar30 = fVar30 * fVar22;
                uVar16 = CONCAT44(fVar15 * fVar22,fVar21 * fVar22);
              }
              else {
                uVar16 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                fVar30 = DAT_1468b5d98;
              }
              *(undefined8 *)pfVar12 = uVar16;
              pfVar12[2] = fVar30;
            }
            if (((*pfVar12 == 0.0) && (pfVar12[1] == 0.0)) && (pfVar12[2] == 0.0)) {
              pfVar12[0] = 1.0;
              pfVar12[1] = 0.0;
              pfVar12[2] = 0.0;
            }
          }
LAB_14264d595:
          iVar3 = _finite((double)*(float *)(param_5 + 0x10));
          if ((iVar3 != 0) && (iVar3 = _finite((double)*(float *)(param_5 + 0x14)), iVar3 != 0)) {
            _finite((double)*(float *)(param_5 + 0x18));
          }
          iVar3 = _finite((double)*(float *)(param_5 + 0x3c));
          if ((iVar3 != 0) && (iVar3 = _finite((double)*(float *)(param_5 + 0x40)), iVar3 != 0)) {
            _finite((double)*(float *)(param_5 + 0x44));
          }
          iVar3 = _finite((double)*(float *)(param_5 + 0x2c));
          if (iVar3 == 0) {
            return;
          }
          iVar3 = _finite((double)*(float *)(param_5 + 0x30));
          if (iVar3 == 0) {
            return;
          }
          _finite((double)*(float *)(param_5 + 0x34));
          return;
        }
        uVar10 = uVar10 + 1;
        plVar9 = plVar9 + 1;
      } while ((longlong)uVar10 < (longlong)iVar3);
    }
  }
  return;
}



// FUNCTION 14264d670 FUN_14264d670 body=143 status=ok
// SIG undefined FUN_14264d670(void)

void FUN_14264d670(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x928);
    if (0 < iVar1) {
      plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x18) + 0x920);
      lVar3 = 0;
      do {
        lVar4 = *plVar2;
        if ((lVar4 != 0) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x28) == *(longlong *)(param_1 + 0x38)))
        goto LAB_14264d6d3;
        lVar3 = lVar3 + 1;
        plVar2 = plVar2 + 1;
      } while (lVar3 < iVar1);
    }
  }
  lVar4 = 0;
LAB_14264d6d3:
  FUN_14264aae0(param_1,param_2,lVar4,param_5,*(int *)(param_2 + 0x128) + -1,param_3);
  return;
}



// FUNCTION 14264d700 FUN_14264d700 body=33 status=ok
// SIG undefined FUN_14264d700(void)

void FUN_14264d700(void)

{
  FUN_14264ef60();
  return;
}



// FUNCTION 14264d730 FUN_14264d730 body=96 status=ok
// SIG undefined FUN_14264d730(void)

void FUN_14264d730(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142627a50(param_2,param_1);
  FUN_14264ef60(param_1,param_2,param_3,param_4,uVar1,param_5);
  return;
}



// FUNCTION 14264d790 FUN_14264d790 body=33 status=ok
// SIG undefined FUN_14264d790(void)

void FUN_14264d790(void)

{
  FUN_14264fa10();
  return;
}



// FUNCTION 14264d7c0 FUN_14264d7c0 body=96 status=ok
// SIG undefined FUN_14264d7c0(void)

void FUN_14264d7c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142627a50(param_2,param_1);
  FUN_14264fa10(param_1,param_2,param_3,param_4,uVar1,param_5);
  return;
}



// FUNCTION 14264d820 FUN_14264d820 body=33 status=ok
// SIG undefined FUN_14264d820(void)

void FUN_14264d820(void)

{
  FUN_14264ff60();
  return;
}



// FUNCTION 14264d850 FUN_14264d850 body=2631 status=ok
// SIG undefined FUN_14264d850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14264d850(longlong param_1,longlong *param_2,float param_3,undefined8 param_4,
                  ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int *piVar14;
  longlong lVar15;
  int *piVar16;
  uint *puVar17;
  float *pfVar18;
  longlong lVar19;
  int iVar20;
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
  undefined4 local_108;
  char local_104;
  float local_100 [2];
  undefined8 local_f8;
  float fStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  int local_e4;
  int local_e0 [2];
  longlong local_d8;
  float local_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  
  local_100[0] = param_3;
  local_f8 = param_2;
  lVar12 = FUN_142627a50(param_2,param_1);
  if (lVar12 == 0) {
    return;
  }
  local_d8 = lVar12;
  FUN_1426468c0(param_1,param_2,lVar12);
  cVar5 = FWeakObjectPtr::IsValid(lVar12);
  if (cVar5 == '\0') {
    return;
  }
  lVar12 = FWeakObjectPtr::Get(lVar12);
  if (lVar12 == 0) {
    return;
  }
  local_c8 = lVar12;
  puVar13 = (undefined8 *)FUN_1423b08f0(lVar12);
  if (puVar13 == (undefined8 *)0x0) {
    return;
  }
  plVar3 = *(longlong **)*puVar13;
  local_108 = -1;
  local_b8 = plVar3;
  if (*(char *)(param_1 + 0x38) == '\0') {
    iVar20 = *(int *)((longlong)plVar3 + 0x16c);
    fVar21 = (float)FGenericPlatformMath::SRand();
    lVar19 = local_d8;
    iVar20 = (int)(fVar21 * (float)iVar20 - 1.0);
    *(int *)(local_d8 + 0x10) = iVar20;
    if (iVar20 == -1) {
      return;
    }
    cVar5 = FUN_142657430(param_1,param_2,lVar12,iVar20,&local_108);
    iVar7 = local_108;
    if (cVar5 == '\0') goto LAB_14264e28d;
  }
  else {
    if (*(char *)(param_1 + 0x38) != '\x01') {
      return;
    }
    lVar19 = plVar3[1];
    fVar21 = (float)FGenericPlatformMath::SRand();
    lVar12 = *plVar3;
    fVar21 = fVar21 * ((float)(int)lVar19 - 1.0);
    lVar19 = ((longlong)(int)ROUND(fVar21 + fVar21 + 0.5) >> 1) * 0x108;
    fVar21 = (float)FGenericPlatformMath::SRand();
    plVar3 = local_b8;
    iVar20 = (int)(fVar21 * (float)*(uint *)(lVar19 + 8 + lVar12)) * 3 +
             *(int *)(lVar19 + 4 + lVar12);
    *(int *)(local_d8 + 0x10) = iVar20;
    if (iVar20 == -1) {
      return;
    }
    uVar11 = (**(code **)(*(longlong *)local_b8[3] + 0x60))((longlong *)local_b8[3],iVar20);
    plVar4 = (longlong *)plVar3[3];
    local_c0 = (**(code **)(*plVar4 + 0x60))(plVar4,iVar20 + 1);
    plVar3 = (longlong *)plVar3[3];
    local_bc = (**(code **)(*plVar3 + 0x60))(plVar3,iVar20 + 2);
    lVar12 = local_c8;
    local_e4 = -1;
    local_108 = -1;
    local_e0[0] = -1;
    cVar5 = FUN_142657430(param_1,param_2,local_c8,uVar11,local_e0);
    iVar7 = -1;
    if (cVar5 == '\0') {
      cVar5 = FUN_142657430(param_1,param_2,lVar12,local_c0,&local_108);
      iVar6 = local_108;
      if ((cVar5 == '\0') &&
         (cVar5 = FUN_142657430(param_1,param_2,lVar12,local_bc,&local_e4), iVar6 = local_108,
         iVar7 = local_e4, cVar5 == '\0')) goto LAB_14264e28d;
    }
    else {
      iVar6 = -1;
    }
    if (iVar6 <= local_e0[0]) {
      iVar6 = local_e0[0];
    }
    lVar19 = local_d8;
    if (iVar7 <= iVar6) {
      iVar7 = iVar6;
    }
  }
  local_e8 = (**(code **)(*param_2 + 0x150))(param_2);
  if (local_e8 < 1) {
LAB_14264db0b:
    local_104 = '\0';
  }
  else {
    cVar5 = (**(code **)(*param_2 + 0x158))(param_2);
    local_104 = '\x01';
    if (cVar5 == '\0') goto LAB_14264db0b;
  }
  cVar5 = FUN_1426452b0(param_1,param_2,lVar12,iVar20,&local_d8,&local_a8,1);
  if (cVar5 == '\x01') {
    *(int *)((longlong)(int)local_100[0] + param_5) = iVar20;
    *(longlong *)(param_5 + 0x10) = local_d8;
    *(float *)(param_5 + 0x18) = local_d0;
    iVar6 = _finite((double)*(float *)(param_5 + 0x10));
    if ((iVar6 != 0) && (iVar6 = _finite((double)*(float *)(param_5 + 0x14)), iVar6 != 0)) {
      _finite((double)*(float *)(param_5 + 0x18));
    }
    *(undefined8 *)(param_5 + 0x20) = *(undefined8 *)(param_5 + 0x10);
    *(undefined4 *)(param_5 + 0x28) = *(undefined4 *)(param_5 + 0x18);
    if (((*(byte *)(param_1 + 0x48) & 4) != 0) && (iVar7 != -1)) {
      piVar16 = *(int **)(lVar19 + 0x20);
      for (piVar14 = piVar16; piVar14 < piVar16 + *(int *)(lVar19 + 0x18); piVar14 = piVar14 + 1) {
        if (*piVar14 == iVar7) {
          iVar7 = (int)((longlong)piVar14 - (longlong)piVar16 >> 2);
          if (iVar7 != -1) {
            fVar21 = *(float *)(param_1 + 0x4c);
            lVar15 = (longlong)iVar7;
            lVar19 = *(longlong *)(lVar19 + 0x40);
            local_d0 = (*(float *)(lVar19 + 8 + lVar15 * 0xc) - *(float *)(param_5 + 0x34)) * fVar21
                       + *(float *)(param_5 + 0x34);
            *(ulonglong *)(param_5 + 0x2c) =
                 CONCAT44((*(float *)(lVar19 + 4 + lVar15 * 0xc) - *(float *)(param_5 + 0x30)) *
                          fVar21 + *(float *)(param_5 + 0x30),
                          (*(float *)(lVar19 + lVar15 * 0xc) - *(float *)(param_5 + 0x2c)) * fVar21
                          + *(float *)(param_5 + 0x2c));
            *(float *)(param_5 + 0x34) = local_d0;
            iVar7 = _finite((double)*(float *)(param_5 + 0x2c));
            if ((iVar7 != 0) && (iVar7 = _finite((double)*(float *)(param_5 + 0x30)), iVar7 != 0)) {
              _finite((double)*(float *)(param_5 + 0x34));
            }
          }
          break;
        }
      }
    }
    plVar3 = local_b8;
    uVar8 = *(uint *)(param_1 + 0x98);
    if ((uVar8 & 1) != 0) {
      if (*(char *)(param_1 + 0x38) == '\0') {
        piVar16 = (int *)FUN_1423b2660(lVar12,local_100,iVar20,0);
        local_108 = *piVar16;
      }
      else if (*(char *)(param_1 + 0x38) == '\x01') {
        uVar11 = (**(code **)(*(longlong *)local_b8[3] + 0x60))((longlong *)local_b8[3],iVar20);
        plVar4 = (longlong *)plVar3[3];
        uVar9 = (**(code **)(*plVar4 + 0x60))(plVar4,iVar20 + 1);
        plVar3 = (longlong *)plVar3[3];
        uVar10 = (**(code **)(*plVar3 + 0x60))(plVar3,iVar20 + 2);
        puVar17 = (uint *)FUN_1423b2660(local_c8,local_100,uVar11,0);
        lVar12 = local_c8;
        uVar8 = *puVar17;
        puVar17 = (uint *)FUN_1423b2660(local_c8,local_100,uVar9,0);
        uVar1 = *puVar17;
        puVar17 = (uint *)FUN_1423b2660(lVar12,local_100,uVar10,0);
        uVar2 = *puVar17;
        local_108 = CONCAT13((char)((ulonglong)((uVar8 >> 0x18) + (uVar2 >> 0x18) + (uVar1 >> 0x18))
                                   / 3),
                             CONCAT21(CONCAT11((char)((ulonglong)
                                                      ((uVar8 >> 0x10 & 0xff) +
                                                       (uVar2 >> 0x10 & 0xff) +
                                                      (uVar1 >> 0x10 & 0xff)) / 3),
                                               (char)((ulonglong)
                                                      ((uVar8 >> 8 & 0xff) + (uVar2 >> 8 & 0xff) +
                                                      (uVar1 >> 8 & 0xff)) / 3)),
                                      (char)((ulonglong)
                                             ((uVar8 & 0xff) + (uVar2 & 0xff) + (uVar1 & 0xff)) / 3)
                                     ));
        param_2 = local_f8;
      }
      FLinearColor::FLinearColor(&local_f8,&local_108);
      *(longlong **)(param_5 + 0x6c) = local_f8;
      *(ulonglong *)(param_5 + 0x74) = CONCAT44(uStack_ec,fStack_f0);
      FLinearColor::FLinearColor(&local_f8,&local_108);
      *(longlong **)(param_5 + 0x7c) = local_f8;
      *(ulonglong *)(param_5 + 0x84) = CONCAT44(uStack_ec,fStack_f0);
      uVar8 = *(uint *)(param_1 + 0x98);
    }
    plVar3 = local_b8;
    if ((uVar8 & 2) != 0) {
      if (*(char *)(param_1 + 0x38) == '\0') {
        pfVar18 = (float *)FUN_1423b27b0(lVar12,&local_f8,iVar20,*(undefined4 *)(param_1 + 0x9c));
        fVar21 = *pfVar18;
        fVar29 = pfVar18[1];
      }
      else {
        fVar21 = local_100[0];
        fVar29 = local_100[0];
        if (*(char *)(param_1 + 0x38) == '\x01') {
          uVar11 = (**(code **)(*(longlong *)local_b8[3] + 0x60))((longlong *)local_b8[3],iVar20);
          plVar4 = (longlong *)plVar3[3];
          uVar9 = (**(code **)(*plVar4 + 0x60))(plVar4,iVar20 + 1);
          plVar3 = (longlong *)plVar3[3];
          uVar10 = (**(code **)(*plVar3 + 0x60))(plVar3,iVar20 + 2);
          lVar12 = local_c8;
          pfVar18 = (float *)FUN_1423b27b0(local_c8,&local_f8,uVar11,*(undefined4 *)(param_1 + 0x9c)
                                          );
          fVar21 = *pfVar18;
          fVar29 = pfVar18[1];
          pfVar18 = (float *)FUN_1423b27b0(lVar12,&local_f8,uVar9,*(undefined4 *)(param_1 + 0x9c));
          fVar30 = *pfVar18;
          fVar22 = pfVar18[1];
          pfVar18 = (float *)FUN_1423b27b0(lVar12,&local_f8,uVar10,*(undefined4 *)(param_1 + 0x9c));
          fVar21 = (fVar21 + fVar30 + *pfVar18) * 0.33333334;
          fVar29 = (fVar22 + fVar29 + pfVar18[1]) * 0.33333334;
        }
      }
      iVar20 = *(int *)((longlong)param_2 + 0x3c);
      if (0 < iVar20) {
        *(float *)((longlong)iVar20 + param_5) = fVar21;
        *(float *)((longlong)iVar20 + 4 + param_5) = fVar29;
      }
    }
    if (local_104 == '\0') {
      return;
    }
    lVar12 = (longlong)local_e8 + param_5;
    if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
      uVar11 = FUN_1415aad80();
      FUN_1415b61a0(param_5 & 0xffffffff);
      fVar30 = DAT_1464aa7a0;
      fVar29 = DAT_1464aa798._4_4_;
      fVar21 = (float)DAT_1464aa798;
      fVar22 = (float)FGenericPlatformMath::SRand();
      fVar22 = fVar22 * 6.2831855 * 0.5;
      if (fVar22 < 0.0) {
        fVar23 = fVar22 * 0.15915494 - 0.5;
      }
      else {
        fVar23 = fVar22 * 0.15915494 + 0.5;
      }
      fVar22 = fVar22 - (float)(int)fVar23 * 6.2831855;
      if (fVar22 <= 1.5707964) {
        if (-1.5707964 <= fVar22) {
          fVar23 = 1.0;
        }
        else {
          fVar23 = -1.0;
          fVar22 = -3.1415927 - fVar22;
        }
      }
      else {
        fVar23 = -1.0;
        fVar22 = 3.1415927 - fVar22;
      }
      fVar24 = fVar22 * fVar22;
      fVar22 = (((((2.7525562e-06 - fVar24 * 2.3889859e-08) * fVar24 - 0.00019840874) * fVar24 +
                 0.008333331) * fVar24 - 0.16666667) * fVar24 + 1.0) * fVar22;
      fVar21 = fVar21 * fVar22;
      fVar29 = fVar29 * fVar22;
      fVar30 = fVar30 * fVar22;
      fVar23 = (((((2.4760495e-05 - fVar24 * 2.6051615e-07) * fVar24 - 0.0013888378) * fVar24 +
                 0.041666638) * fVar24 - 0.5) * fVar24 + 1.0) * fVar23;
      fVar25 = fVar30 * local_a8;
      fVar26 = fVar29 * local_a8;
      fVar27 = fVar21 * local_a8;
      fVar22 = fVar21 * fStack_a4;
      fVar24 = fVar29 * fStack_a4;
      fVar28 = fVar30 * fStack_a0;
      local_a8 = fVar23 * local_a8 * _DAT_146b06ea0 + fStack_9c * fVar21 +
                 fVar30 * fStack_a4 * _DAT_146b06e90 + fVar29 * fStack_a0 * _DAT_146b06e80;
      fStack_a4 = fVar25 * fRam0000000146b06ea4 + fStack_9c * fVar29 +
                  fVar23 * fStack_a4 * fRam0000000146b06e94 +
                  fVar21 * fStack_a0 * fRam0000000146b06e84;
      fStack_a0 = fVar26 * fRam0000000146b06ea8 + fStack_9c * fVar30 + fVar22 * fRam0000000146b06e98
                  + fVar23 * fStack_a0 * fRam0000000146b06e88;
      fStack_9c = fVar27 * fRam0000000146b06eac + fStack_9c * fVar23 + fVar24 * fRam0000000146b06e9c
                  + fVar28 * fRam0000000146b06e8c;
      FUN_1415b61a0(uVar11);
    }
    FQuat::Euler(&local_a8,&local_f8);
    if ((*(byte *)(*(longlong *)(param_2[5] + 0x30) + 100) & 1) != 0) {
      lVar19 = param_2[3];
      fVar22 = *(float *)(lVar19 + 0x210) * _DAT_146b06e10;
      fVar23 = *(float *)(lVar19 + 0x214) * fRam0000000146b06e14;
      fVar24 = *(float *)(lVar19 + 0x218) * fRam0000000146b06e18;
      fVar25 = *(float *)(lVar19 + 0x21c) * fRam0000000146b06e1c;
      fVar21 = fStack_f0 * fVar23 - local_f8._4_4_ * fVar24;
      fVar29 = (float)local_f8 * fVar24 - fStack_f0 * fVar22;
      fVar30 = local_f8._4_4_ * fVar22 - (float)local_f8 * fVar23;
      fVar21 = fVar21 + fVar21;
      fVar29 = fVar29 + fVar29;
      fVar30 = fVar30 + fVar30;
      fStack_f0 = (fVar29 * fVar22 - fVar21 * fVar23) + fVar25 * fVar30 + fStack_f0;
      local_f8 = (longlong *)
                 CONCAT44((fVar21 * fVar24 - fVar30 * fVar22) + fVar25 * fVar29 + local_f8._4_4_,
                          (fVar30 * fVar23 - fVar29 * fVar24) + fVar25 * fVar21 + (float)local_f8);
    }
    *(longlong **)(lVar12 + 0x18) = local_f8;
    *(longlong **)(lVar12 + 0xc) = local_f8;
    *(float *)(lVar12 + 0x20) = fStack_f0;
    *(float *)(lVar12 + 0x14) = fStack_f0;
    return;
  }
LAB_14264e28d:
  *(undefined4 *)(param_5 + 0xc) = 0x3f8ccccd;
  return;
}



// FUNCTION 14264e2a0 FUN_14264e2a0 body=101 status=ok
// SIG undefined FUN_14264e2a0(void)

void FUN_14264e2a0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142627a50(param_2,param_1);
  (**(code **)(*param_1 + 0x380))(param_1,param_2,param_3,param_4,uVar1,param_5);
  return;
}



// FUNCTION 14264e310 FUN_14264e310 body=33 status=ok
// SIG undefined FUN_14264e310(void)

void FUN_14264e310(void)

{
  FUN_142650630();
  return;
}



// FUNCTION 14264e340 FUN_14264e340 body=33 status=ok
// SIG undefined FUN_14264e340(void)

void FUN_14264e340(void)

{
  FUN_1426507e0();
  return;
}



// FUNCTION 14264e370 Spawn body=149 status=ok
// SIG undefined Spawn(void)

void UParticleModuleMeshRotationRateMultiplyLife::Spawn
               (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  int iVar1;
  longlong lVar2;
  float local_18;
  float local_14;
  float local_10;
  
  iVar1 = (**(code **)(*param_2 + 0x150))(param_2);
  lVar2 = (longlong)iVar1;
  if (iVar1 != 0) {
    FUN_1424118e0(param_1 + 0x38,&local_18,*(undefined4 *)(param_5 + 0xc),param_2[3],0,0);
    *(float *)(lVar2 + 0x30 + param_5) = local_18 * *(float *)(lVar2 + 0x30 + param_5);
    *(float *)(lVar2 + 0x34 + param_5) = local_14 * *(float *)(lVar2 + 0x34 + param_5);
    *(float *)(lVar2 + 0x38 + param_5) = local_10 * *(float *)(lVar2 + 0x38 + param_5);
  }
  return;
}



// FUNCTION 14264e410 Spawn body=202 status=ok
// SIG undefined Spawn(void)

void UParticleModuleMeshRotationRateOverLife::Spawn
               (longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_18;
  float local_14;
  float local_10;
  
  iVar1 = (**(code **)(*param_2 + 0x150))(param_2);
  lVar2 = (longlong)iVar1;
  if (iVar1 != 0) {
    FUN_1424118e0(param_1 + 0x38,&local_18,*(undefined4 *)(param_5 + 0xc),param_2[3],0,0);
    if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
      fVar3 = local_18 * 360.0 + *(float *)(lVar2 + 0x30 + param_5);
      fVar4 = local_14 * 360.0 + *(float *)(lVar2 + 0x34 + param_5);
      fVar5 = local_10 * 360.0 + *(float *)(lVar2 + 0x38 + param_5);
    }
    else {
      fVar3 = local_18 * 360.0 * *(float *)(lVar2 + 0x30 + param_5);
      fVar4 = local_14 * 360.0 * *(float *)(lVar2 + 0x34 + param_5);
      fVar5 = local_10 * 360.0 * *(float *)(lVar2 + 0x38 + param_5);
    }
    *(float *)(lVar2 + 0x38 + param_5) = fVar5;
    *(float *)(lVar2 + 0x34 + param_5) = fVar4;
    *(float *)(lVar2 + 0x30 + param_5) = fVar3;
  }
  return;
}



// FUNCTION 14264e4e0 FUN_14264e4e0 body=96 status=ok
// SIG undefined FUN_14264e4e0(void)

void FUN_14264e4e0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142627a50(param_2,param_1);
  FUN_1426507e0(param_1,param_2,param_3,param_4,uVar1,param_5);
  return;
}



// FUNCTION 14264e540 FUN_14264e540 body=96 status=ok
// SIG undefined FUN_14264e540(void)

void FUN_14264e540(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142627a50(param_2,param_1);
  FUN_142650630(param_1,param_2,param_3,param_4,uVar1,param_5);
  return;
}



// FUNCTION 14264e5a0 FUN_14264e5a0 body=56 status=ok
// SIG undefined FUN_14264e5a0(void)

void FUN_14264e5a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  
  fVar1 = (float)FUN_1424116d0(param_1 + 0x38,*(undefined4 *)(param_2 + 0x13c),
                               *(undefined8 *)(param_2 + 0x18),0);
  *(float *)(param_5 + 0x38) = fVar1 * 6.2831855 + *(float *)(param_5 + 0x38);
  return;
}



// FUNCTION 14264e5e0 FUN_14264e5e0 body=69 status=ok
// SIG undefined FUN_14264e5e0(void)

void FUN_14264e5e0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  
  fVar1 = (float)FUN_1424116d0(param_1 + 0x38,*(undefined4 *)(param_2 + 0x13c),
                               *(undefined8 *)(param_2 + 0x18),0);
  *(float *)(param_5 + 0x58) = fVar1 * 6.2831855 + *(float *)(param_5 + 0x58);
  *(float *)(param_5 + 0x48) = fVar1 * 6.2831855 + *(float *)(param_5 + 0x48);
  return;
}



// FUNCTION 14264e630 FUN_14264e630 body=48 status=ok
// SIG undefined FUN_14264e630(void)

void FUN_14264e630(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  
  fVar1 = (float)FUN_1424116d0(param_1 + 0x38,*(undefined4 *)(param_5 + 0xc),
                               *(undefined8 *)(param_2 + 0x18),0);
  *(float *)(param_5 + 0x58) = fVar1 * *(float *)(param_5 + 0x58);
  return;
}



// FUNCTION 14264e660 FUN_14264e660 body=98 status=ok
// SIG undefined FUN_14264e660(void)

void FUN_14264e660(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_142627a50(param_2,param_1);
  fVar2 = (float)FUN_1424116d0(param_1 + 0x38,*(undefined4 *)(param_2 + 0x13c),
                               *(undefined8 *)(param_2 + 0x18),uVar1);
  *(float *)(param_5 + 0x58) = fVar2 * 6.2831855 + *(float *)(param_5 + 0x58);
  *(float *)(param_5 + 0x48) = fVar2 * 6.2831855 + *(float *)(param_5 + 0x48);
  return;
}



// FUNCTION 14264e6d0 FUN_14264e6d0 body=85 status=ok
// SIG undefined FUN_14264e6d0(void)

void FUN_14264e6d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_142627a50(param_2,param_1);
  fVar2 = (float)FUN_1424116d0(param_1 + 0x38,*(undefined4 *)(param_2 + 0x13c),
                               *(undefined8 *)(param_2 + 0x18),uVar1);
  *(float *)(param_5 + 0x38) = fVar2 * 6.2831855 + *(float *)(param_5 + 0x38);
  return;
}



// FUNCTION 14264e730 FUN_14264e730 body=171 status=ok
// SIG undefined FUN_14264e730(void)

void FUN_14264e730(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  longlong param_5)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  cVar1 = *(char *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 0xdc);
  if (((cVar1 != '\0') && (uVar2 = *(uint *)(param_2 + 0x38), uVar2 != 0)) &&
     ((plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x48), plVar3 == (longlong *)0x0 ||
      (cVar4 = (**(code **)(*plVar3 + 0x3a8))(), cVar4 != '\0')))) {
    puVar5 = (undefined4 *)((ulonglong)uVar2 + param_5);
    uVar6 = (**(code **)(*param_1 + 0x380))(param_1,param_2,param_3,param_5,cVar1,puVar5,param_4);
    *puVar5 = uVar6;
  }
  return;
}



// FUNCTION 14264e7e0 FUN_14264e7e0 body=448 status=ok
// SIG undefined FUN_14264e7e0(void)

void FUN_14264e7e0(longlong *param_1,longlong param_2,ulonglong param_3,undefined4 param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  lVar4 = *(longlong *)(param_2 + 0x28);
  param_3 = param_3 & 0xffffffff;
  cVar7 = *(char *)(*(longlong *)(lVar4 + 0x30) + 0xdc);
  if (cVar7 == '\0') {
    return;
  }
  uVar2 = *(uint *)(param_2 + 0x38);
  if (uVar2 == 0) {
    return;
  }
  if ((cVar7 != '\x01') && (cVar7 != '\x02')) {
    if (cVar7 == '\0') {
      return;
    }
    if (uVar2 == 0) {
      return;
    }
    if ((*(longlong **)(lVar4 + 0x48) != (longlong *)0x0) &&
       (cVar6 = (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x3a8))(), cVar6 == '\0')) {
      return;
    }
    puVar1 = (undefined4 *)(param_5 + (ulonglong)uVar2);
    uVar9 = (**(code **)(*param_1 + 0x380))(param_1,param_2,param_3,param_5,cVar7,puVar1,param_4);
    *puVar1 = uVar9;
    return;
  }
  if ((*(longlong **)(lVar4 + 0x48) != (longlong *)0x0) &&
     (cVar7 = (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x3a8))(), cVar7 == '\0')) {
    return;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x1b8);
  if (lVar5 == 0) {
    iVar8 = *(int *)(*(longlong *)(lVar4 + 0x30) + 0xe4) *
            *(int *)(*(longlong *)(lVar4 + 0x30) + 0xe0);
  }
  else {
    iVar8 = *(int *)(lVar5 + 0x34) * *(int *)(lVar5 + 0x30);
  }
  if (iVar8 == 0) {
    iVar8 = 1;
  }
  fVar10 = (float)FUN_1424116d0(param_1 + 0x11);
  *(undefined4 *)(param_3 + param_5) = 0;
  iVar3 = (int)param_1[0x18];
  fVar11 = 0.0;
  if (iVar3 < 2) {
    if (iVar3 != 0) goto LAB_14264e975;
    fVar11 = (float)FGenericPlatformMath::SRand();
    fVar11 = (float)(int)(fVar11 * (float)(iVar8 + -1));
  }
  else {
    fVar12 = (float)iVar3;
    if ((0.0 <= fVar12) && (fVar11 = (float)(iVar8 + -1), fVar12 <= (float)(iVar8 + -1))) {
      fVar11 = fVar12;
    }
  }
  *(float *)(param_3 + param_5) = fVar11;
LAB_14264e975:
  *(float *)((ulonglong)uVar2 + param_5) = fVar11 * fVar10;
  return;
}



// FUNCTION 14264e9a0 FUN_14264e9a0 body=167 status=ok
// SIG undefined FUN_14264e9a0(void)

void FUN_14264e9a0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_1424118e0(param_1 + 0x38,&local_18,*(undefined4 *)(param_2 + 0x13c),
                *(undefined8 *)(param_2 + 0x18),0,param_5);
  uVar1 = FUN_1424116d0(param_1 + 0x88,*(undefined4 *)(param_2 + 0x13c),
                        *(undefined8 *)(param_2 + 0x18),param_5);
  *(undefined4 *)(param_6 + 0x6c) = local_18;
  *(undefined4 *)(param_6 + 0x70) = local_14;
  *(undefined4 *)(param_6 + 0x74) = local_10;
  *(undefined4 *)(param_6 + 0x78) = uVar1;
  *(undefined4 *)(param_6 + 0x7c) = local_18;
  *(undefined4 *)(param_6 + 0x80) = local_14;
  *(undefined4 *)(param_6 + 0x84) = local_10;
  *(undefined4 *)(param_6 + 0x88) = uVar1;
  return;
}



// FUNCTION 14264ea50 FUN_14264ea50 body=145 status=ok
// SIG undefined FUN_14264ea50(void)

void FUN_14264ea50(longlong param_1,longlong param_2,undefined8 param_3,float param_4,
                  undefined8 param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1424116d0(param_1 + 0x38,*(undefined4 *)(param_2 + 0x13c),
                               *(undefined8 *)(param_2 + 0x18),param_5);
  fVar2 = 0.0;
  if (*(float *)(param_6 + 0x1c) <= 0.0) {
    if (0.0 < fVar1) {
      fVar2 = 1.0 / fVar1;
    }
  }
  else {
    fVar2 = 1.0 / (1.0 / *(float *)(param_6 + 0x1c) + fVar1);
  }
  *(float *)(param_6 + 0x1c) = fVar2;
  if (1.0 < *(float *)(param_6 + 0xc)) {
    *(float *)(param_6 + 0xc) = *(float *)(param_6 + 0xc);
    return;
  }
  *(float *)(param_6 + 0xc) = fVar2 * param_4;
  return;
}



// FUNCTION 14264eaf0 FUN_14264eaf0 body=450 status=ok
// SIG undefined FUN_14264eaf0(void)

void FUN_14264eaf0(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 local_24 [8];
  float local_1c;
  
  lVar1 = DAT_146b06e30;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    if (DVar3 != DAT_1468c21c0) {
      lVar5 = 4;
      goto LAB_14264eb49;
    }
  }
  lVar5 = 0;
LAB_14264eb49:
  if (0 < *(int *)(lVar5 + lVar1)) {
    puVar7 = (undefined8 *)((param_3 & 0xffffffff) + param_6);
    fVar8 = (float)FUN_1424116d0(param_1 + 0x90,*(undefined4 *)(param_6 + 0xc),
                                 *(undefined8 *)(param_2 + 0x18),param_5);
    pfVar6 = (float *)FUN_1424118e0(param_1 + 0x40,local_24,*(undefined4 *)(param_6 + 0xc),
                                    *(undefined8 *)(param_2 + 0x18),0,param_5);
    local_1c = fVar8 * pfVar6[2];
    *puVar7 = CONCAT44(fVar8 * pfVar6[1],fVar8 * *pfVar6);
    *(float *)(puVar7 + 1) = local_1c;
    uVar9 = FUN_1424116d0(param_1 + 200,*(undefined4 *)(param_2 + 0x13c),
                          *(undefined8 *)(param_2 + 0x18),param_5);
    *(undefined4 *)(puVar7 + 3) = uVar9;
    if (*(char *)(param_1 + 0x38) == '\0') {
      uVar9 = FUN_1424116d0(param_1 + 0x100,*(undefined4 *)(param_2 + 0x13c),
                            *(undefined8 *)(param_2 + 0x18),param_5);
    }
    else {
      uVar9 = 0;
    }
    *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar9;
    if (param_5 == 0) {
      fVar8 = (float)FGenericPlatformMath::SRand();
    }
    else {
      uVar4 = *(int *)(param_5 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_5 + 4) = uVar4;
      fVar8 = (float)(uVar4 & 0x7fffff | 0x3f800000);
      fVar8 = fVar8 - (float)(int)fVar8;
    }
    *(bool *)(puVar7 + 4) = fVar8 < *(float *)(param_1 + 0x3c);
    *(undefined1 *)((longlong)puVar7 + 0x21) = *(undefined1 *)(param_1 + 0x39);
    *(undefined1 *)((longlong)puVar7 + 0x22) = *(undefined1 *)(param_1 + 0x140);
    puVar7[2] = 0;
    *(undefined1 *)((longlong)puVar7 + 0x23) = *(undefined1 *)(param_1 + 0x142);
  }
  return;
}



// FUNCTION 14264ecc0 FUN_14264ecc0 body=659 status=ok
// SIG undefined FUN_14264ecc0(void)

void FUN_14264ecc0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_58;
  float local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  
  if ((*(float *)(param_1 + 0x88) == 0.0) || (*(float *)(param_1 + 0x88) == 1.0)) {
    puVar2 = (undefined8 *)
             FUN_1424118e0(param_1 + 0x38,&local_48,*(undefined4 *)(param_2 + 0x13c),
                           *(undefined8 *)(param_2 + 0x18),0,param_5);
    local_58 = *puVar2;
    fStack_44 = (float)((ulonglong)local_58 >> 0x20);
  }
  else {
    fVar4 = *(float *)(param_2 + 0x13c);
    fVar3 = (float)FGenericPlatformMath::SRand();
    fVar3 = fVar3 * (fVar4 - (float)(int)fVar4);
    if (fVar3 < *(float *)(param_1 + 0x8c) || fVar3 == *(float *)(param_1 + 0x8c)) {
      FUN_142410780(param_1 + 0x38,&local_48,&local_58);
      fVar3 = *(float *)(param_1 + 0x88) - 1.0;
      fVar4 = (float)FGenericPlatformMath::SRand();
      fVar3 = (float)(int)(fVar4 * fVar3 + 0.5) / fVar3;
      local_48 = ((float)local_58 - local_48) * fVar3 + local_48;
      fStack_44 = (local_58._4_4_ - fStack_44) * fVar3 + fStack_44;
      fStack_40 = (local_50 - fStack_40) * fVar3 + fStack_40;
      goto LAB_14264ee35;
    }
    puVar2 = (undefined8 *)
             FUN_1424118e0(param_1 + 0x38,&local_48,*(undefined4 *)(param_2 + 0x13c),
                           *(undefined8 *)(param_2 + 0x18),0,param_5);
    local_58 = *puVar2;
    fStack_44 = (float)((ulonglong)local_58 >> 0x20);
  }
  fStack_40 = *(float *)(puVar2 + 1);
  local_48 = (float)local_58;
LAB_14264ee35:
  uStack_3c = 0;
  local_58 = 0;
  local_50 = 0.0;
  fVar3 = *(float *)(param_2 + 0xa0) * 0.0 + fStack_40 * *(float *)(param_2 + 0x90) +
          fStack_44 * *(float *)(param_2 + 0x80) + local_48 * *(float *)(param_2 + 0x70);
  fVar5 = *(float *)(param_2 + 0xa4) * 0.0 + fStack_40 * *(float *)(param_2 + 0x94) +
          fStack_44 * *(float *)(param_2 + 0x84) + local_48 * *(float *)(param_2 + 0x74);
  fVar6 = *(float *)(param_2 + 0xa8) * 0.0 + fStack_40 * *(float *)(param_2 + 0x98) +
          fStack_44 * *(float *)(param_2 + 0x88) + local_48 * *(float *)(param_2 + 0x78);
  fVar4 = fVar3 + *(float *)(param_6 + 0x10);
  *(float *)(param_6 + 0x10) = fVar4;
  *(float *)(param_6 + 0x14) = fVar5 + *(float *)(param_6 + 0x14);
  *(float *)(param_6 + 0x18) = fVar6 + *(float *)(param_6 + 0x18);
  iVar1 = _finite((double)fVar4);
  if (iVar1 != 0) {
    iVar1 = _finite((double)*(float *)(param_6 + 0x14));
    if (iVar1 != 0) {
      _finite((double)*(float *)(param_6 + 0x18));
    }
  }
  *(float *)(param_6 + 0x20) = fVar3 + *(float *)(param_6 + 0x20);
  *(float *)(param_6 + 0x24) = fVar5 + *(float *)(param_6 + 0x24);
  *(float *)(param_6 + 0x28) = fVar6 + *(float *)(param_6 + 0x28);
  return;
}



// FUNCTION 14264ef60 FUN_14264ef60 body=2721 status=ok
// SIG undefined FUN_14264ef60(void)

/* WARNING: Removing unreachable block (ram,0x00014264f55c) */
/* WARNING: Removing unreachable block (ram,0x00014264f492) */
/* WARNING: Removing unreachable block (ram,0x00014264f351) */
/* WARNING: Removing unreachable block (ram,0x00014264f162) */
/* WARNING: Removing unreachable block (ram,0x00014264f27b) */
/* WARNING: Removing unreachable block (ram,0x00014264f474) */
/* WARNING: Removing unreachable block (ram,0x00014264f51e) */
/* WARNING: Removing unreachable block (ram,0x00014264f63c) */

void FUN_14264ef60(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined8 local_e8;
  float local_e0 [2];
  float local_d8 [4];
  float local_c8 [3];
  undefined4 uStack_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  
  if ((char)param_1[0x28] == '\0') {
    iVar6 = 2;
    bVar4 = true;
    iVar8 = 0;
  }
  else {
    iVar6 = 1;
    iVar8 = 2;
    bVar4 = false;
    if ((char)param_1[0x28] == '\x01') {
      iVar8 = 1;
      iVar6 = 2;
      bVar4 = false;
    }
  }
  FUN_1424118e0(param_1 + 0xf,&local_b8,*(undefined4 *)(param_2 + 0x13c),
                *(undefined8 *)(param_2 + 0x18),0,param_5);
  local_e8 = 0;
  local_e0[0] = 0.0;
  fVar10 = (float)FUN_1424116d0(param_1 + 0x1a,*(undefined4 *)(param_2 + 0x13c),
                                *(undefined8 *)(param_2 + 0x18),param_5);
  fVar11 = (float)FUN_1424116d0(param_1 + 0x21,*(undefined4 *)(param_2 + 0x13c),
                                *(undefined8 *)(param_2 + 0x18),param_5);
  bVar5 = false;
  fVar11 = fVar11 * 0.5;
  iVar9 = 0;
  do {
    (**(code **)(*param_1 + 0x380))(param_1,param_2,&local_a8,param_5);
    if (bVar4) {
      if (bVar4) {
        pfVar7 = local_d8 + 1;
        fVar14 = local_a4;
      }
      else {
        pfVar7 = local_d8 + 2;
        fVar14 = local_a0;
      }
    }
    else {
      pfVar7 = local_d8;
      fVar14 = local_a8;
    }
    *pfVar7 = fVar14;
    if (iVar6 == 1) {
      pfVar7 = local_d8 + 1;
      fVar14 = local_a4;
    }
    else {
      fVar14 = local_a0;
      if (iVar6 == 0) {
        pfVar7 = local_d8;
      }
      else {
        pfVar7 = local_d8 + 2;
      }
    }
    *pfVar7 = fVar14;
    if (iVar8 == 0) {
      pfVar7 = local_d8;
      fVar14 = local_a8;
    }
    else if (iVar8 == 1) {
      pfVar7 = local_d8 + 1;
      fVar14 = local_a4;
    }
    else {
      pfVar7 = local_d8 + 2;
      fVar14 = local_a0;
    }
    *pfVar7 = fVar14;
    if (iVar6 == 0) {
      pfVar7 = local_d8;
    }
    else {
      pfVar7 = local_d8 + 1;
      if (iVar6 != 1) {
        pfVar7 = local_d8 + 2;
      }
    }
    fVar14 = local_d8[1];
    if (!bVar4) {
      fVar14 = local_d8[0];
    }
    if (fVar10 * *pfVar7 * fVar10 * *pfVar7 + fVar14 * fVar10 * fVar14 * fVar10 <= fVar10 * fVar10)
    break;
    if (0x31 < iVar9) {
      bVar5 = true;
    }
    iVar9 = iVar9 + 1;
  } while (!bVar5);
  local_c8[0] = local_d8[0];
  local_c8[1] = local_d8[1];
  local_c8[2] = local_d8[2];
  fVar14 = local_d8[1] * local_d8[1] + local_d8[0] * local_d8[0] + local_d8[2] * local_d8[2];
  if (1e-08 < fVar14) {
    auVar16 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
    local_c8[2] = auVar16._0_4_;
    local_c8[2] = local_c8[2] + local_c8[2] * (0.5 - fVar14 * 0.5 * local_c8[2] * local_c8[2]);
    local_c8[2] = local_c8[2] + local_c8[2] * (0.5 - fVar14 * 0.5 * local_c8[2] * local_c8[2]);
    local_c8[0] = local_d8[0] * local_c8[2];
    local_c8[1] = local_d8[1] * local_c8[2];
    local_c8[2] = local_d8[2] * local_c8[2];
  }
  pfVar7 = local_d8 + 2;
  if (iVar6 == 1) {
    pfVar7 = local_d8 + 1;
  }
  fVar14 = local_d8[1];
  if (!bVar4) {
    fVar14 = local_d8[0];
  }
  fVar17 = *pfVar7;
  fVar13 = fVar17 * fVar17 + fVar14 * fVar14;
  if (fVar13 <= 1e-08) {
    fVar14 = 0.0;
    fVar17 = 0.0;
  }
  else {
    auVar16 = rsqrtss(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13));
    fVar15 = auVar16._0_4_;
    fVar15 = fVar15 + fVar15 * (0.5 - fVar13 * 0.5 * fVar15 * fVar15);
    fVar15 = fVar15 + fVar15 * (0.5 - fVar13 * 0.5 * fVar15 * fVar15);
    fVar14 = fVar14 * fVar15;
    fVar17 = fVar17 * fVar15;
  }
  if (iVar8 == 0) {
    pfVar7 = (float *)&local_e8;
    fVar13 = local_d8[0];
  }
  else if (iVar8 == 1) {
    pfVar7 = (float *)((longlong)&local_e8 + 4);
    fVar13 = local_d8[1];
  }
  else {
    pfVar7 = local_e0;
    fVar13 = local_d8[2];
  }
  *pfVar7 = fVar13 * fVar11;
  if (bVar4) {
    pfVar7 = local_c8 + 1;
  }
  else {
    pfVar7 = local_c8;
  }
  *pfVar7 = fVar14;
  pfVar7 = local_c8 + 2;
  if (iVar6 == 1) {
    pfVar7 = local_c8 + 1;
  }
  bVar1 = *(byte *)(param_1 + 7);
  *pfVar7 = fVar17;
  if ((bVar1 & 0x40) != 0) {
    if (iVar8 == 0) {
      fVar14 = (float)local_e8;
    }
    else {
      fVar14 = local_e0[0];
      if (iVar8 == 1) {
        fVar14 = local_e8._4_4_;
      }
    }
    if (1e-08 < ABS(ABS(fVar14) - fVar11)) {
      if (bVar4) {
        if (bVar4) {
          pfVar7 = (float *)((longlong)&local_e8 + 4);
          fVar14 = local_c8[1];
        }
        else {
          pfVar7 = local_e0;
          fVar14 = local_c8[2];
        }
      }
      else {
        pfVar7 = (float *)&local_e8;
        fVar14 = local_c8[0];
      }
      *pfVar7 = fVar14 * fVar10;
      if (iVar6 == 1) {
        local_e8 = CONCAT44(local_c8[1] * fVar10,(float)local_e8);
      }
      else {
        local_e0[0] = local_c8[2] * fVar10;
      }
      goto LAB_14264f466;
    }
  }
  if (bVar4) {
    if (bVar4) {
      pfVar7 = (float *)((longlong)&local_e8 + 4);
      fVar14 = local_d8[1];
    }
    else {
      pfVar7 = local_e0;
      fVar14 = local_d8[2];
    }
  }
  else {
    pfVar7 = (float *)&local_e8;
    fVar14 = local_d8[0];
  }
  *pfVar7 = fVar14 * fVar10;
  if (iVar6 == 1) {
    pfVar7 = (float *)((longlong)&local_e8 + 4);
    fVar14 = local_d8[1];
  }
  else {
    pfVar7 = local_e0;
    fVar14 = local_d8[2];
  }
  *pfVar7 = fVar14 * fVar10;
LAB_14264f466:
  fVar14 = local_c8[0];
  if (bVar4) {
    fVar14 = local_c8[1];
  }
  if (bVar4) {
    pfVar7 = local_d8 + 1;
  }
  else {
    pfVar7 = local_d8;
  }
  *pfVar7 = ABS(fVar14) * fVar10;
  fVar14 = local_c8[1];
  if (iVar6 != 1) {
    fVar14 = local_c8[2];
  }
  pfVar7 = local_d8 + 2;
  if (iVar6 == 1) {
    pfVar7 = local_d8 + 1;
  }
  *pfVar7 = ABS(fVar14) * fVar10;
  if (iVar8 == 0) {
    pfVar7 = local_d8;
  }
  else {
    pfVar7 = local_d8 + 1;
    if (iVar8 != 1) {
      pfVar7 = local_d8 + 2;
    }
  }
  *pfVar7 = fVar11;
  if (bVar4) {
    pfVar7 = local_d8 + 1;
    fVar10 = local_e8._4_4_;
    fVar11 = local_d8[1];
  }
  else {
    pfVar7 = local_d8;
    fVar10 = (float)local_e8;
    fVar11 = local_d8[0];
  }
  fVar14 = -fVar11;
  if ((-fVar11 <= fVar10) && (fVar14 = *pfVar7, fVar10 <= *pfVar7)) {
    fVar14 = fVar10;
  }
  if (bVar4) {
    pfVar7 = (float *)((longlong)&local_e8 + 4);
  }
  else {
    pfVar7 = (float *)&local_e8;
  }
  *pfVar7 = fVar14;
  if (iVar6 == 1) {
    pfVar7 = local_d8 + 1;
    fVar10 = local_e8._4_4_;
    fVar11 = local_d8[1];
  }
  else {
    pfVar7 = local_d8 + 2;
    fVar10 = local_e0[0];
    fVar11 = local_d8[2];
  }
  fVar14 = -fVar11;
  if ((-fVar11 <= fVar10) && (fVar14 = fVar10, *pfVar7 <= fVar10)) {
    fVar14 = *pfVar7;
  }
  pfVar7 = local_e0;
  if (iVar6 == 1) {
    pfVar7 = (float *)((longlong)&local_e8 + 4);
  }
  *pfVar7 = fVar14;
  if (iVar8 == 0) {
    pfVar7 = local_d8;
    fVar10 = local_d8[0];
    fVar11 = (float)local_e8;
  }
  else if (iVar8 == 1) {
    pfVar7 = local_d8 + 1;
    fVar10 = local_d8[1];
    fVar11 = local_e8._4_4_;
  }
  else {
    pfVar7 = local_d8 + 2;
    fVar10 = local_d8[2];
    fVar11 = local_e0[0];
  }
  fVar14 = -fVar10;
  if ((-fVar10 <= fVar11) && (fVar14 = fVar11, *pfVar7 <= fVar11)) {
    fVar14 = *pfVar7;
  }
  if (iVar8 == 0) {
    pfVar7 = (float *)&local_e8;
  }
  else {
    pfVar7 = (float *)((longlong)&local_e8 + 4);
    if (iVar8 != 1) {
      pfVar7 = local_e0;
    }
  }
  *pfVar7 = fVar14;
  if (bVar4) {
    pfVar7 = (float *)((longlong)&local_e8 + 4);
    fVar10 = local_b4;
  }
  else {
    pfVar7 = (float *)&local_e8;
    fVar10 = local_b8;
  }
  *pfVar7 = fVar10 + *pfVar7;
  if (iVar6 == 1) {
    pfVar7 = (float *)((longlong)&local_e8 + 4);
    fVar10 = local_b4;
  }
  else {
    pfVar7 = local_e0;
    fVar10 = local_b0;
  }
  *pfVar7 = fVar10 + *pfVar7;
  if (iVar8 == 0) {
    pfVar7 = (float *)&local_e8;
    fVar10 = local_b8;
  }
  else if (iVar8 == 1) {
    pfVar7 = (float *)((longlong)&local_e8 + 4);
    fVar10 = local_b4;
  }
  else {
    pfVar7 = local_e0;
    fVar10 = local_b0;
  }
  *pfVar7 = fVar10 + *pfVar7;
  iVar9 = *(int *)(param_2 + 0x58);
  if (iVar9 == 0) {
    local_d8[0] = 0.0;
    local_d8[1] = 0.0;
    local_d8[2] = 0.0;
    local_c8[0] = (float)local_e8;
    local_c8[1] = local_e8._4_4_;
    local_c8[2] = local_e0[0];
    uStack_bc = 0;
    fVar10 = *(float *)(param_2 + 0xa0);
    fVar11 = *(float *)(param_2 + 0xa8);
    fVar14 = *(float *)(param_2 + 0x90);
    fVar17 = *(float *)(param_2 + 0x98);
    fVar13 = *(float *)(param_2 + 0x80);
    fVar15 = *(float *)(param_2 + 0x88);
    fVar2 = *(float *)(param_2 + 0x70);
    fVar3 = *(float *)(param_2 + 0x78);
    *(float *)(param_6 + 0x14) =
         *(float *)(param_2 + 0xa4) * 0.0 + local_e0[0] * *(float *)(param_2 + 0x94) +
         local_e8._4_4_ * *(float *)(param_2 + 0x84) + (float)local_e8 * *(float *)(param_2 + 0x74)
         + *(float *)(param_6 + 0x14);
    *(float *)(param_6 + 0x18) =
         fVar11 * 0.0 + local_e0[0] * fVar17 + local_e8._4_4_ * fVar15 + (float)local_e8 * fVar3 +
         *(float *)(param_6 + 0x18);
    uVar12 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_6 + 0x10) >> 0x20),
                      fVar10 * 0.0 + local_e0[0] * fVar14 +
                      local_e8._4_4_ * fVar13 + (float)local_e8 * fVar2 + *(float *)(param_6 + 0x10)
                     );
    *(undefined8 *)(param_6 + 0x10) = uVar12;
    *(undefined8 *)(param_6 + 0x20) = uVar12;
    *(undefined4 *)(param_6 + 0x28) = *(undefined4 *)(param_6 + 0x18);
  }
  else {
    *(undefined8 *)((longlong)iVar9 + 4 + param_6) = local_e8;
    *(float *)((longlong)iVar9 + 0xc + param_6) = local_e0[0];
  }
  if ((*(byte *)(param_1 + 7) & 0x80) != 0) {
    if (bVar4) {
      if (bVar4) {
        pfVar7 = local_c8 + 1;
        fVar10 = local_b4;
        fVar11 = local_e8._4_4_;
      }
      else {
        pfVar7 = local_c8 + 2;
        fVar10 = local_b0;
        fVar11 = local_e0[0];
      }
    }
    else {
      pfVar7 = local_c8;
      fVar10 = local_b8;
      fVar11 = (float)local_e8;
    }
    *pfVar7 = fVar11 - fVar10;
    if (iVar6 == 1) {
      pfVar7 = local_c8 + 1;
      fVar10 = local_b4;
      fVar11 = local_e8._4_4_;
    }
    else {
      pfVar7 = local_c8 + 2;
      fVar10 = local_b0;
      fVar11 = local_e0[0];
    }
    *pfVar7 = fVar11 - fVar10;
    if (iVar8 == 0) {
      pfVar7 = local_c8;
      local_b4 = local_b8;
      fVar10 = (float)local_e8;
    }
    else if (iVar8 == 1) {
      pfVar7 = local_c8 + 1;
      fVar10 = local_e8._4_4_;
    }
    else {
      pfVar7 = local_c8 + 2;
      local_b4 = local_b0;
      fVar10 = local_e0[0];
    }
    bVar1 = *(byte *)(param_1 + 0x19);
    *pfVar7 = fVar10 - local_b4;
    if ((bVar1 & 1) != 0) {
      if (iVar8 == 0) {
        pfVar7 = local_c8;
      }
      else {
        pfVar7 = local_c8 + 1;
        if (iVar8 != 1) {
          pfVar7 = local_c8 + 2;
        }
      }
      *pfVar7 = 0.0;
    }
    fVar10 = (float)FUN_1424116d0(param_1 + 8,*(undefined4 *)(param_2 + 0x13c),
                                  *(undefined8 *)(param_2 + 0x18),param_5);
    fVar11 = local_c8[0] * fVar10;
    uStack_bc = 0;
    fVar14 = local_c8[2] * fVar10;
    local_d8[0] = 0.0;
    local_d8[1] = 0.0;
    fVar10 = local_c8[1] * fVar10;
    local_d8[2] = 0.0;
    fVar17 = *(float *)(param_2 + 0xa0) * 0.0 + fVar14 * *(float *)(param_2 + 0x90) +
             fVar10 * *(float *)(param_2 + 0x80) + fVar11 * *(float *)(param_2 + 0x70);
    fVar13 = *(float *)(param_2 + 0xa4) * 0.0 + fVar14 * *(float *)(param_2 + 0x94) +
             fVar10 * *(float *)(param_2 + 0x84) + fVar11 * *(float *)(param_2 + 0x74);
    fVar10 = *(float *)(param_2 + 0xa8) * 0.0 + fVar14 * *(float *)(param_2 + 0x98) +
             fVar10 * *(float *)(param_2 + 0x88) + fVar11 * *(float *)(param_2 + 0x78);
    *(float *)(param_6 + 0x3c) = fVar17 + *(float *)(param_6 + 0x3c);
    *(float *)(param_6 + 0x40) = fVar13 + *(float *)(param_6 + 0x40);
    *(float *)(param_6 + 0x44) = fVar10 + *(float *)(param_6 + 0x44);
    *(float *)(param_6 + 0x2c) = fVar17 + *(float *)(param_6 + 0x2c);
    *(float *)(param_6 + 0x30) = fVar13 + *(float *)(param_6 + 0x30);
    *(float *)(param_6 + 0x34) = fVar10 + *(float *)(param_6 + 0x34);
  }
  iVar6 = _finite((double)*(float *)(param_6 + 0x10));
  if ((iVar6 != 0) && (iVar6 = _finite((double)*(float *)(param_6 + 0x14)), iVar6 != 0)) {
    _finite((double)*(float *)(param_6 + 0x18));
  }
  iVar6 = _finite((double)*(float *)(param_6 + 0x3c));
  if ((iVar6 != 0) && (iVar6 = _finite((double)*(float *)(param_6 + 0x40)), iVar6 != 0)) {
    _finite((double)*(float *)(param_6 + 0x44));
  }
  return;
}



// FUNCTION 14264fa10 FUN_14264fa10 body=1346 status=ok
// SIG undefined FUN_14264fa10(void)

void FUN_14264fa10(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  
  FUN_1424118e0(param_1 + 0xf,&local_b8,*(undefined4 *)(param_2 + 0x13c),
                *(undefined8 *)(param_2 + 0x18),0,param_5);
  (**(code **)(*param_1 + 0x380))(param_1,param_2,&local_c8,param_5);
  fVar12 = local_c8 * local_c8 + local_c4 * local_c4 + local_c0 * local_c0;
  fVar9 = local_c8;
  fVar6 = local_c0;
  fVar10 = local_c4;
  if (1e-08 < fVar12) {
    auVar8 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar6 = auVar8._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar12 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar12 * 0.5 * fVar6 * fVar6);
    fVar9 = local_c8 * fVar6;
    fVar10 = local_c4 * fVar6;
    fVar6 = local_c0 * fVar6;
  }
  if (((*(byte *)(param_1 + 7) & 0x40) != 0) && (1e-08 < fVar12)) {
    auVar8 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
    fVar7 = auVar8._0_4_;
    fVar7 = fVar7 + fVar7 * (0.5 - fVar12 * 0.5 * fVar7 * fVar7);
    fVar7 = fVar7 + fVar7 * (0.5 - fVar12 * 0.5 * fVar7 * fVar7);
    local_c8 = local_c8 * fVar7;
    local_c4 = local_c4 * fVar7;
    local_c0 = local_c0 * fVar7;
  }
  fVar12 = (float)FUN_1424116d0(param_1 + 0x19,*(undefined4 *)(param_2 + 0x13c),
                                *(undefined8 *)(param_2 + 0x18),param_5);
  uVar1 = *(uint *)(param_1 + 7);
  fVar7 = ABS(fVar9) * fVar12;
  fVar11 = ABS(fVar10) * fVar12;
  fVar10 = ABS(fVar6) * fVar12;
  fVar6 = local_c8 * fVar12;
  fVar9 = local_c4 * fVar12;
  fVar12 = local_c0 * fVar12;
  if ((uVar1 & 9) == 0) {
    local_a8 = 0.0;
  }
  else {
    local_a8 = -fVar7;
    if ((-fVar7 <= fVar6) && (local_a8 = fVar6, fVar7 <= fVar6)) {
      local_a8 = fVar7;
    }
  }
  if ((uVar1 & 0x12) == 0) {
    fStack_a4 = 0.0;
  }
  else {
    fStack_a4 = -fVar11;
    if ((fStack_a4 <= fVar9) && (fStack_a4 = fVar9, fVar11 <= fVar9)) {
      fStack_a4 = fVar11;
    }
  }
  if ((uVar1 & 0x24) == 0) {
    fStack_a0 = 0.0;
  }
  else {
    fStack_a0 = -fVar10;
    if ((fStack_a0 <= fVar12) && (fStack_a0 = fVar12, fVar10 <= fVar12)) {
      fStack_a0 = fVar10;
    }
  }
  local_a8 = local_b8 + local_a8;
  iVar4 = *(int *)(param_2 + 0x58);
  fStack_a4 = local_b4 + fStack_a4;
  fStack_a0 = local_b0 + fStack_a0;
  if (iVar4 == 0) {
    local_98 = 0;
    local_90 = 0;
    uStack_9c = 0;
    fVar9 = *(float *)(param_2 + 0xa0);
    fVar6 = *(float *)(param_2 + 0xa8);
    fVar10 = *(float *)(param_2 + 0x90);
    fVar12 = *(float *)(param_2 + 0x98);
    fVar7 = *(float *)(param_2 + 0x80);
    fVar11 = *(float *)(param_2 + 0x88);
    fVar2 = *(float *)(param_2 + 0x70);
    fVar3 = *(float *)(param_2 + 0x78);
    *(float *)(param_6 + 0x14) =
         *(float *)(param_2 + 0xa4) * 0.0 + fStack_a0 * *(float *)(param_2 + 0x94) +
         fStack_a4 * *(float *)(param_2 + 0x84) + local_a8 * *(float *)(param_2 + 0x74) +
         *(float *)(param_6 + 0x14);
    *(float *)(param_6 + 0x18) =
         fVar6 * 0.0 + fStack_a0 * fVar12 + fStack_a4 * fVar11 + local_a8 * fVar3 +
         *(float *)(param_6 + 0x18);
    uVar5 = CONCAT44((int)((ulonglong)*(undefined8 *)(param_6 + 0x10) >> 0x20),
                     fVar9 * 0.0 + fStack_a0 * fVar10 + fStack_a4 * fVar7 + local_a8 * fVar2 +
                     *(float *)(param_6 + 0x10));
    *(undefined8 *)(param_6 + 0x10) = uVar5;
    *(undefined8 *)(param_6 + 0x20) = uVar5;
    *(undefined4 *)(param_6 + 0x28) = *(undefined4 *)(param_6 + 0x18);
  }
  else {
    *(ulonglong *)((longlong)iVar4 + 4 + param_6) = CONCAT44(fStack_a4,local_a8);
    *(float *)((longlong)iVar4 + 0xc + param_6) = fStack_a0;
  }
  if ((*(byte *)(param_1 + 7) & 0x80) != 0) {
    fVar6 = local_a8 - local_b8;
    fVar10 = fStack_a4 - local_b4;
    fVar7 = fStack_a0 - local_b0;
    fVar9 = (float)FUN_1424116d0(param_1 + 8,*(undefined4 *)(param_2 + 0x13c),
                                 *(undefined8 *)(param_2 + 0x18),param_5);
    fVar7 = fVar7 * fVar9;
    uStack_9c = 0;
    fVar6 = fVar9 * fVar6;
    local_98 = 0;
    fVar9 = fVar9 * fVar10;
    local_90 = 0;
    fVar10 = *(float *)(param_2 + 0xa0) * 0.0 + fVar7 * *(float *)(param_2 + 0x90) +
             fVar9 * *(float *)(param_2 + 0x80) + fVar6 * *(float *)(param_2 + 0x70);
    fVar12 = *(float *)(param_2 + 0xa4) * 0.0 + fVar7 * *(float *)(param_2 + 0x94) +
             fVar9 * *(float *)(param_2 + 0x84) + fVar6 * *(float *)(param_2 + 0x74);
    fVar9 = *(float *)(param_2 + 0xa8) * 0.0 + fVar7 * *(float *)(param_2 + 0x98) +
            fVar9 * *(float *)(param_2 + 0x88) + fVar6 * *(float *)(param_2 + 0x78);
    *(float *)(param_6 + 0x3c) = fVar10 + *(float *)(param_6 + 0x3c);
    *(float *)(param_6 + 0x40) = fVar12 + *(float *)(param_6 + 0x40);
    *(float *)(param_6 + 0x44) = fVar9 + *(float *)(param_6 + 0x44);
    *(float *)(param_6 + 0x2c) = fVar10 + *(float *)(param_6 + 0x2c);
    *(float *)(param_6 + 0x30) = fVar12 + *(float *)(param_6 + 0x30);
    *(float *)(param_6 + 0x34) = fVar9 + *(float *)(param_6 + 0x34);
  }
  iVar4 = _finite((double)*(float *)(param_6 + 0x10));
  if ((iVar4 != 0) && (iVar4 = _finite((double)*(float *)(param_6 + 0x14)), iVar4 != 0)) {
    _finite((double)*(float *)(param_6 + 0x18));
  }
  iVar4 = _finite((double)*(float *)(param_6 + 0x3c));
  if ((iVar4 != 0) && (iVar4 = _finite((double)*(float *)(param_6 + 0x40)), iVar4 != 0)) {
    _finite((double)*(float *)(param_6 + 0x44));
  }
  return;
}



// FUNCTION 14264ff60 FUN_14264ff60 body=1026 status=ok
// SIG undefined FUN_14264ff60(void)

void FUN_14264ff60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_c8;
  float local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  
  FUN_1424118e0(param_1 + 0x38,&local_c8,*(undefined4 *)(param_2 + 0x13c),
                *(undefined8 *)(param_2 + 0x18),0,param_5);
  fVar7 = (float)FUN_1424116d0(param_1 + 0x88,*(undefined4 *)(param_2 + 0x13c),
                               *(undefined8 *)(param_2 + 0x18),param_5);
  fVar8 = (float)FUN_1424116d0(param_1 + 0xc0,*(undefined4 *)(param_2 + 0x13c),
                               *(undefined8 *)(param_2 + 0x18),param_5);
  fVar9 = (float)FUN_1424116d0(param_1 + 0xf8,*(undefined4 *)(param_2 + 0x13c),
                               *(undefined8 *)(param_2 + 0x18),param_5);
  fVar8 = _guard_xfg_dispatch_icall_nop(fVar8 * 0.008726646);
  if (param_5 == 0) {
    fVar1 = (float)FGenericPlatformMath::SRand();
    fVar2 = (float)FGenericPlatformMath::SRand();
    fVar3 = (float)FGenericPlatformMath::SRand();
    fVar4 = (float)FGenericPlatformMath::SRand();
  }
  else {
    uVar6 = *(int *)(param_5 + 4) * 0xbb38435 + 0x3619636b;
    fVar1 = (float)(uVar6 & 0x7fffff | 0x3f800000);
    uVar6 = uVar6 * 0xbb38435 + 0x3619636b;
    fVar2 = (float)(uVar6 & 0x7fffff | 0x3f800000);
    uVar6 = uVar6 * 0xbb38435 + 0x3619636b;
    fVar1 = fVar1 - (float)(int)fVar1;
    fVar3 = (float)(uVar6 & 0x7fffff | 0x3f800000);
    fVar2 = fVar2 - (float)(int)fVar2;
    fVar3 = fVar3 - (float)(int)fVar3;
    uVar6 = uVar6 * 0xbb38435 + 0x3619636b;
    *(uint *)(param_5 + 4) = uVar6;
    fVar4 = (float)(uVar6 & 0x7fffff | 0x3f800000);
    fVar4 = fVar4 - (float)(int)fVar4;
  }
  iVar5 = *(int *)(param_2 + 0x58);
  local_b8 = 0;
  local_b0 = 0;
  fVar10 = fVar2 + fVar1 + fVar3;
  fVar9 = fVar4 * fVar9 - fVar9 * 0.5;
  if (fVar10 <= 0.0001) {
    fVar10 = 0.0001;
  }
  fVar10 = 1.0 / fVar10;
  fVar4 = (fVar7 * 0.5 + local_c8) * fVar10 * fVar1 + DAT_1468b5d90 +
          (fVar10 * fVar2 + fVar10 * fVar3) * (local_c8 - fVar7 * 0.5);
  fVar1 = local_c4 * fVar10 * fVar1 + DAT_1468b5d94 + fVar10 * fVar2 * (local_c4 + fVar8 * fVar7) +
          (local_c4 - fVar8 * fVar7) * fVar10 * fVar3;
  fVar7 = *(float *)(param_2 + 0xa0) * 0.0 + fVar9 * *(float *)(param_2 + 0x90) +
          fVar1 * *(float *)(param_2 + 0x80) + fVar4 * *(float *)(param_2 + 0x70);
  fVar8 = *(float *)(param_2 + 0xa4) * 0.0 + fVar9 * *(float *)(param_2 + 0x94) +
          fVar1 * *(float *)(param_2 + 0x84) + fVar4 * *(float *)(param_2 + 0x74);
  fVar9 = *(float *)(param_2 + 0xa8) * 0.0 + fVar9 * *(float *)(param_2 + 0x98) +
          fVar1 * *(float *)(param_2 + 0x88) + fVar4 * *(float *)(param_2 + 0x78);
  if (iVar5 == 0) {
    fVar7 = fVar7 + *(float *)(param_6 + 0x10);
    *(float *)(param_6 + 0x14) = fVar8 + *(float *)(param_6 + 0x14);
    *(float *)(param_6 + 0x10) = fVar7;
    *(float *)(param_6 + 0x18) = fVar9 + *(float *)(param_6 + 0x18);
    iVar5 = _finite((double)fVar7);
    if (iVar5 != 0) {
      iVar5 = _finite((double)*(float *)(param_6 + 0x14));
      if (iVar5 != 0) {
        _finite((double)*(float *)(param_6 + 0x18));
      }
    }
    *(undefined8 *)(param_6 + 0x20) = *(undefined8 *)(param_6 + 0x10);
    *(undefined4 *)(param_6 + 0x28) = *(undefined4 *)(param_6 + 0x18);
  }
  else {
    *(ulonglong *)((longlong)iVar5 + 4 + param_6) = CONCAT44(fVar8,fVar7);
    *(float *)((longlong)iVar5 + 0xc + param_6) = fVar9;
  }
  return;
}



// FUNCTION 142650370 FUN_142650370 body=704 status=ok
// SIG undefined FUN_142650370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142650370(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  uint local_98;
  float fStack_94;
  float fStack_90;
  uint uStack_8c;
  float local_88;
  uint uStack_84;
  float fStack_80;
  uint uStack_7c;
  float local_78;
  float fStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1) == 0) {
    pfVar10 = (float *)FUN_1424118e0(param_1 + 0x38,&local_b8,*(undefined4 *)(param_2 + 0x13c),lVar1
                                     ,0,param_5);
    *(float *)(param_6 + 0x10) = *pfVar10 + *(float *)(param_6 + 0x10);
    *(float *)(param_6 + 0x14) = pfVar10[1] + *(float *)(param_6 + 0x14);
    *(float *)(param_6 + 0x18) = pfVar10[2] + *(float *)(param_6 + 0x18);
  }
  else {
    fVar2 = *(float *)(lVar1 + 0x210);
    fVar3 = *(float *)(lVar1 + 0x214);
    fVar4 = *(float *)(lVar1 + 0x218);
    fVar5 = *(float *)(lVar1 + 0x21c);
    fVar11 = fVar3 + fVar3;
    fVar12 = fVar4 + fVar4;
    fVar14 = fVar2 * (fVar2 + fVar2);
    fVar13 = fVar5 * (fVar2 + fVar2);
    fVar6 = *(float *)(lVar1 + 0x230);
    fVar7 = *(float *)(lVar1 + 0x234);
    fVar8 = *(float *)(lVar1 + 0x238);
    fStack_94 = (fVar5 * fVar12 + fVar2 * fVar11) * fVar6;
    fStack_80 = (fVar13 + fVar3 * fVar12) * fVar7;
    local_78 = (fVar5 * fVar11 + fVar2 * fVar12) * fVar8;
    local_88 = fVar7 * (fVar2 * fVar11 - fVar5 * fVar12);
    fStack_74 = fVar8 * (fVar3 * fVar12 - fVar13);
    fStack_90 = fVar6 * (fVar2 * fVar12 - fVar5 * fVar11);
    local_98 = (uint)((_DAT_146b06dd0 - (fVar4 * fVar12 + fVar3 * fVar11)) * fVar6) & _DAT_146b06de0
    ;
    uStack_84 = (uint)((fRam0000000146b06dd4 - (fVar4 * fVar12 + fVar14)) * fVar7) &
                uRam0000000146b06de4;
    uStack_70 = (uint)((fRam0000000146b06dd8 - (fVar3 * fVar11 + fVar14)) * fVar8) &
                uRam0000000146b06de8;
    uStack_8c = (uint)((fRam0000000146b06ddc - (fVar14 + fVar14)) * *(float *)(lVar1 + 0x23c)) &
                uRam0000000146b06dec;
    local_68 = *(undefined4 *)(lVar1 + 0x220);
    uStack_64 = *(undefined4 *)(lVar1 + 0x224);
    uStack_60 = *(undefined4 *)(lVar1 + 0x228);
    fStack_5c = fRam0000000146b06ddc;
    uStack_7c = uStack_8c;
    uStack_6c = uStack_8c;
    FMatrix::InverseFast(&local_98,&local_58);
    FUN_1424118e0(param_1 + 0x38,&local_b8,*(undefined4 *)(param_2 + 0x13c),lVar1,0,param_5);
    uStack_ac = 0;
    local_a8 = 0;
    local_a0 = 0;
    *(float *)(param_6 + 0x10) =
         local_28 * 0.0 + fStack_b0 * local_38 + fStack_b4 * local_48 + local_b8 * local_58 +
         *(float *)(param_6 + 0x10);
    *(float *)(param_6 + 0x14) =
         fStack_24 * 0.0 + fStack_b0 * fStack_34 + fStack_b4 * fStack_44 + local_b8 * fStack_54 +
         *(float *)(param_6 + 0x14);
    *(float *)(param_6 + 0x18) =
         fStack_20 * 0.0 + fStack_b0 * fStack_30 + fStack_b4 * fStack_40 + local_b8 * fStack_50 +
         *(float *)(param_6 + 0x18);
  }
  iVar9 = _finite((double)*(float *)(param_6 + 0x10));
  if (iVar9 != 0) {
    iVar9 = _finite((double)*(float *)(param_6 + 0x14));
    if (iVar9 != 0) {
      _finite((double)*(float *)(param_6 + 0x18));
    }
  }
  *(undefined8 *)(param_6 + 0x20) = *(undefined8 *)(param_6 + 0x10);
  *(undefined4 *)(param_6 + 0x28) = *(undefined4 *)(param_6 + 0x18);
  return;
}



// FUNCTION 142650630 FUN_142650630 body=432 status=ok
// SIG undefined FUN_142650630(void)

void FUN_142650630(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 *puVar6;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  iVar3 = (**(code **)(*param_2 + 0x150))(param_2);
  if (iVar3 != 0) {
    uVar4 = FUN_1424118e0(param_1 + 0x38,&local_58,*(undefined4 *)((longlong)param_2 + 0x13c),
                          param_2[3],0,param_5);
    if ((*(byte *)(param_1 + 0x88) & 1) != 0) {
      lVar1 = param_2[3];
      local_18 = *(float *)(lVar1 + 0x210);
      fStack_14 = *(float *)(lVar1 + 0x214);
      fStack_10 = *(float *)(lVar1 + 0x218);
      fStack_c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
      iVar5 = movmskps(uVar4,auVar2);
      if (iVar5 != 0) {
        *(float *)(lVar1 + 0x250) = local_18;
        *(float *)(lVar1 + 0x254) = fStack_14;
        *(float *)(lVar1 + 600) = fStack_10;
        *(float *)(lVar1 + 0x25c) = fStack_c;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
        *(undefined8 *)(lVar1 + 0x260) = *puVar6;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      local_38 = *(undefined8 *)(lVar1 + 0x260);
      local_30 = *(undefined4 *)(lVar1 + 0x268);
      FRotator::Euler(&local_38,&local_48);
      local_58 = local_58 + local_48 * 0.0027777778;
      local_50 = local_50 + local_40 * 0.0027777778;
      local_54 = local_54 + local_44 * 0.0027777778;
    }
    param_6 = iVar3 + param_6;
    *(ulonglong *)(param_6 + 0xc) = CONCAT44(local_54 * 360.0,local_58 * 360.0);
    *(float *)(param_6 + 0x14) = local_50 * 360.0;
    *(float *)(param_6 + 0x18) = *(float *)(param_6 + 0x18) + *(float *)(param_6 + 0xc);
    *(float *)(param_6 + 0x1c) = *(float *)(param_6 + 0x10) + *(float *)(param_6 + 0x1c);
    *(float *)(param_6 + 0x20) = *(float *)(param_6 + 0x14) + *(float *)(param_6 + 0x20);
  }
  return;
}



// FUNCTION 1426507e0 FUN_1426507e0 body=219 status=ok
// SIG undefined FUN_1426507e0(void)

void FUN_1426507e0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  int iVar1;
  float local_18;
  float local_14;
  float local_10;
  
  iVar1 = (**(code **)(*param_2 + 0x150))(param_2);
  if (iVar1 != 0) {
    FUN_1424118e0(param_1 + 0x38,&local_18,*(undefined4 *)((longlong)param_2 + 0x13c),param_2[3],0,
                  param_5);
    param_6 = iVar1 + param_6;
    *(float *)(param_6 + 0x40) = local_14 * 360.0 + *(float *)(param_6 + 0x40);
    *(float *)(param_6 + 0x3c) = local_18 * 360.0 + *(float *)(param_6 + 0x3c);
    *(float *)(param_6 + 0x44) = local_10 * 360.0 + *(float *)(param_6 + 0x44);
    *(float *)(param_6 + 0x30) = local_18 * 360.0 + *(float *)(param_6 + 0x30);
    *(float *)(param_6 + 0x34) = local_14 * 360.0 + *(float *)(param_6 + 0x34);
    *(float *)(param_6 + 0x38) = local_10 * 360.0 + *(float *)(param_6 + 0x38);
  }
  return;
}



// FUNCTION 1426508c0 FUN_1426508c0 body=641 status=ok
// SIG undefined FUN_1426508c0(void)

longlong FUN_1426508c0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 local_res20;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar6 = 0;
  if ((((param_4 == 0) || (lVar2 = *(longlong *)(param_4 + 0x18), lVar2 == 0)) ||
      (lVar8 = *(longlong *)(lVar2 + 0x118), lVar8 == 0)) || ((*(byte *)(lVar8 + 0x94) & 2) != 0)) {
    return 0;
  }
  iVar1 = *(int *)(lVar8 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar7 = iVar1 >> 0x1f & 0xffff;
    uVar4 = iVar1 + uVar7;
    lVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar7) * 0x18;
  }
  if ((*(uint *)(lVar6 + 8) >> 0x1d & 1) != 0) {
    return 0;
  }
  local_res20 = 0;
  local_48 = 0;
  FUN_1417846f0(lVar8,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = UFGSoundSplineComponent::GetPrivateStaticClass();
  lVar6 = FUN_1417985e0(uVar5,lVar8,0,0x40,0,0,0,0,0);
  if (lVar6 == 0) {
    return 0;
  }
  lVar8 = *(longlong *)(lVar8 + 0x168);
  if (*(longlong *)(lVar2 + 400) == 0) {
    if (lVar8 == 0) goto LAB_142650a05;
    uVar5 = 0;
    local_res20 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar2 + 0x198);
    lVar8 = *(longlong *)(lVar2 + 400);
  }
  FUN_142399e30(lVar6,lVar8,uVar5);
LAB_142650a05:
  *(undefined1 *)(lVar6 + 0xca) = *(undefined1 *)(lVar2 + 0xca);
  *(undefined1 *)(lVar6 + 0x350) = *(undefined1 *)(param_1 + 0x138);
  *(uint *)(lVar6 + 0x450) =
       *(uint *)(lVar6 + 0x450) ^ ((uint)*(byte *)(param_1 + 0x38) ^ *(uint *)(lVar6 + 0x450)) & 1;
  *(uint *)(lVar6 + 0x2ec) =
       *(uint *)(lVar6 + 0x2ec) ^
       ((uint)*(byte *)(param_1 + 0x39) << 4 ^ *(uint *)(lVar6 + 0x2ec)) & 0x10;
  *(undefined4 *)(lVar6 + 0x2f4) = *(undefined4 *)(param_1 + 0x13c);
  FUN_142376840(lVar6,*(undefined1 *)(param_1 + 0x141));
  *(undefined1 *)(lVar6 + 0x351) = *(undefined1 *)(param_1 + 0x142);
  FUN_14234b150(lVar6);
  iVar1 = *(int *)(param_4 + 0x1d8);
  *(int *)(param_4 + 0x1d8) = iVar1 + 1;
  if (*(int *)(param_4 + 0x1dc) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4 + 0x1d0,iVar1);
  }
  *(longlong *)(*(longlong *)(param_4 + 0x1d0) + (longlong)iVar1 * 8) = lVar6;
  FUN_142628020(param_4,&local_res20,&local_48);
  local_38 = local_48;
  local_30 = local_40;
  uVar3 = FUN_14263b0c0(param_4);
  FUN_142656e50(param_1,lVar6,param_2,param_3,(undefined4)local_res20,&local_38,uVar3,0,0);
  return lVar6;
}



// FUNCTION 142650b50 FUN_142650b50 body=1725 status=ok
// SIG undefined FUN_142650b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142650b50(longlong param_1,longlong param_2,ulonglong param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ushort *puVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  undefined1 in_XMM4 [16];
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  fVar22 = fRam0000000146b06e1c;
  fVar21 = fRam0000000146b06e18;
  fVar20 = fRam0000000146b06e14;
  fVar19 = _DAT_146b06e10;
  uVar18 = uRam0000000146b06e08;
  uVar17 = uRam0000000146b06e04;
  uVar16 = _DAT_146b06e00;
  fVar15 = fRam0000000146b06df8;
  fVar2 = fRam0000000146b06df4;
  fVar1 = _DAT_146b06df0;
  if (param_2 != 0) {
    param_3 = param_3 & 0xffffffff;
    iVar4 = *(int *)(param_2 + 0x128);
    if (((0 < iVar4) && (lVar6 = *(longlong *)(param_2 + 0x100), lVar6 != 0)) &&
       (lVar7 = *(longlong *)(param_2 + 0x108), lVar7 != 0)) {
      iVar5 = *(int *)(param_2 + 0x124);
      if (((*(byte *)(param_1 + 0x38) & 1) == 0) ||
         ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1) == 0)) {
        lVar25 = (longlong)(iVar4 + -1);
        if (-1 < iVar4 + -1) {
          if (2 < lVar25) {
            uVar24 = lVar25 + 1U >> 2;
            puVar26 = (ushort *)(lVar7 + -2 + lVar25 * 2);
            lVar25 = lVar25 + uVar24 * -4;
            do {
              lVar23 = (ulonglong)((uint)puVar26[1] * iVar5) + lVar6;
              if ((*(uint *)(lVar23 + 0x68) & 0x4000000) == 0) {
                fVar1 = *(float *)(param_3 + 4 + lVar23);
                fVar2 = *(float *)(param_3 + 8 + lVar23);
                *(float *)(lVar23 + 0x3c) =
                     param_4 * *(float *)(param_3 + lVar23) + *(float *)(lVar23 + 0x3c);
                *(float *)(lVar23 + 0x40) = fVar1 * param_4 + *(float *)(lVar23 + 0x40);
                *(float *)(lVar23 + 0x44) = fVar2 * param_4 + *(float *)(lVar23 + 0x44);
                fVar1 = *(float *)(param_3 + 4 + lVar23);
                fVar2 = *(float *)(param_3 + 8 + lVar23);
                *(float *)(lVar23 + 0x2c) =
                     param_4 * *(float *)(param_3 + lVar23) + *(float *)(lVar23 + 0x2c);
                *(float *)(lVar23 + 0x30) = fVar1 * param_4 + *(float *)(lVar23 + 0x30);
                *(float *)(lVar23 + 0x34) = fVar2 * param_4 + *(float *)(lVar23 + 0x34);
              }
              lVar23 = (ulonglong)((uint)*puVar26 * iVar5) + lVar6;
              if ((*(uint *)(lVar23 + 0x68) & 0x4000000) == 0) {
                fVar1 = *(float *)(param_3 + 4 + lVar23);
                fVar2 = *(float *)(param_3 + 8 + lVar23);
                *(float *)(lVar23 + 0x3c) =
                     param_4 * *(float *)(param_3 + lVar23) + *(float *)(lVar23 + 0x3c);
                *(float *)(lVar23 + 0x40) = fVar1 * param_4 + *(float *)(lVar23 + 0x40);
                *(float *)(lVar23 + 0x44) = fVar2 * param_4 + *(float *)(lVar23 + 0x44);
                fVar1 = *(float *)(param_3 + 4 + lVar23);
                fVar2 = *(float *)(param_3 + 8 + lVar23);
                *(float *)(lVar23 + 0x2c) =
                     param_4 * *(float *)(param_3 + lVar23) + *(float *)(lVar23 + 0x2c);
                *(float *)(lVar23 + 0x30) = fVar1 * param_4 + *(float *)(lVar23 + 0x30);
                *(float *)(lVar23 + 0x34) = fVar2 * param_4 + *(float *)(lVar23 + 0x34);
              }
              lVar23 = (ulonglong)((uint)puVar26[-1] * iVar5) + lVar6;
              if ((*(uint *)(lVar23 + 0x68) & 0x4000000) == 0) {
                fVar1 = *(float *)(param_3 + 4 + lVar23);
                fVar2 = *(float *)(param_3 + 8 + lVar23);
                *(float *)(lVar23 + 0x3c) =
                     param_4 * *(float *)(param_3 + lVar23) + *(float *)(lVar23 + 0x3c);
                *(float *)(lVar23 + 0x40) = fVar1 * param_4 + *(float *)(lVar23 + 0x40);
                *(float *)(lVar23 + 0x44) = fVar2 * param_4 + *(float *)(lVar23 + 0x44);
                fVar1 = *(float *)(param_3 + 4 + lVar23);
                fVar2 = *(float *)(param_3 + 8 + lVar23);
                *(float *)(lVar23 + 0x2c) =
                     param_4 * *(float *)(param_3 + lVar23) + *(float *)(lVar23 + 0x2c);
                *(float *)(lVar23 + 0x30) = fVar1 * param_4 + *(float *)(lVar23 + 0x30);
                *(float *)(lVar23 + 0x34) = fVar2 * param_4 + *(float *)(lVar23 + 0x34);
              }
              lVar23 = (ulonglong)((uint)puVar26[-2] * iVar5) + lVar6;
              if ((*(uint *)(lVar23 + 0x68) & 0x4000000) == 0) {
                fVar1 = *(float *)(param_3 + 4 + lVar23);
                fVar2 = *(float *)(param_3 + 8 + lVar23);
                *(float *)(lVar23 + 0x3c) =
                     param_4 * *(float *)(param_3 + lVar23) + *(float *)(lVar23 + 0x3c);
                *(float *)(lVar23 + 0x40) = fVar1 * param_4 + *(float *)(lVar23 + 0x40);
                *(float *)(lVar23 + 0x44) = fVar2 * param_4 + *(float *)(lVar23 + 0x44);
                fVar1 = *(float *)(param_3 + 4 + lVar23);
                fVar2 = *(float *)(param_3 + 8 + lVar23);
                *(float *)(lVar23 + 0x2c) =
                     param_4 * *(float *)(param_3 + lVar23) + *(float *)(lVar23 + 0x2c);
                *(float *)(lVar23 + 0x30) = fVar1 * param_4 + *(float *)(lVar23 + 0x30);
                *(float *)(lVar23 + 0x34) = fVar2 * param_4 + *(float *)(lVar23 + 0x34);
              }
              puVar26 = puVar26 + -4;
              uVar24 = uVar24 - 1;
            } while (uVar24 != 0);
          }
          for (; -1 < lVar25; lVar25 = lVar25 + -1) {
            lVar23 = (ulonglong)((uint)*(ushort *)(lVar7 + lVar25 * 2) * iVar5) + lVar6;
            if ((*(uint *)(lVar23 + 0x68) & 0x4000000) == 0) {
              fVar1 = *(float *)(param_3 + 4 + lVar23);
              fVar2 = *(float *)(param_3 + 8 + lVar23);
              *(float *)(lVar23 + 0x3c) =
                   param_4 * *(float *)(param_3 + lVar23) + *(float *)(lVar23 + 0x3c);
              *(float *)(lVar23 + 0x40) = fVar1 * param_4 + *(float *)(lVar23 + 0x40);
              *(float *)(lVar23 + 0x44) = fVar2 * param_4 + *(float *)(lVar23 + 0x44);
              fVar1 = *(float *)(param_3 + 4 + lVar23);
              fVar2 = *(float *)(param_3 + 8 + lVar23);
              *(float *)(lVar23 + 0x2c) =
                   param_4 * *(float *)(param_3 + lVar23) + *(float *)(lVar23 + 0x2c);
              *(float *)(lVar23 + 0x30) = fVar1 * param_4 + *(float *)(lVar23 + 0x30);
              *(float *)(lVar23 + 0x34) = fVar2 * param_4 + *(float *)(lVar23 + 0x34);
            }
          }
        }
      }
      else {
        lVar25 = *(longlong *)(param_2 + 0x18);
        fVar11 = *(float *)(lVar25 + 0x210);
        fVar12 = *(float *)(lVar25 + 0x214);
        fVar13 = *(float *)(lVar25 + 0x218);
        fVar14 = *(float *)(lVar25 + 0x21c);
        auVar3 = *(undefined1 (*) [16])(lVar25 + 0x230);
        fVar8 = auVar3._0_4_;
        fVar9 = auVar3._4_4_;
        fVar10 = auVar3._8_4_;
        lVar25 = (longlong)(iVar4 + -1);
        if (-1 < iVar4 + -1) {
          do {
            lVar23 = (ulonglong)((uint)*(ushort *)(lVar7 + lVar25 * 2) * iVar5) + lVar6;
            if ((*(uint *)(lVar23 + 0x68) & 0x4000000) == 0) {
              fVar41 = *(float *)(param_3 + 8 + lVar23);
              fVar31 = *(float *)(param_3 + 4 + lVar23);
              fVar28 = *(float *)(param_3 + lVar23);
              fVar37 = fVar11 * fVar19;
              fVar38 = fVar12 * fVar20;
              fVar39 = fVar13 * fVar21;
              fVar40 = fVar14 * fVar22;
              auVar33 = rcpps(in_XMM4,auVar3);
              fVar27 = fVar41 * fVar38 - fVar31 * fVar39;
              fVar29 = fVar28 * fVar39 - fVar41 * fVar37;
              fVar30 = fVar31 * fVar37 - fVar28 * fVar38;
              fVar32 = auVar33._0_4_;
              fVar34 = auVar33._4_4_;
              fVar35 = auVar33._8_4_;
              fVar36 = auVar33._12_4_;
              fVar27 = fVar27 + fVar27;
              fVar29 = fVar29 + fVar29;
              fVar30 = fVar30 + fVar30;
              fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * fVar8;
              fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar9;
              fVar35 = (fVar35 + fVar35) - fVar35 * fVar35 * fVar10;
              fVar36 = (fVar36 + fVar36) - fVar36 * fVar36 * auVar3._12_4_;
              in_XMM4._0_4_ = (fVar32 + fVar32) - fVar32 * fVar32 * fVar8;
              in_XMM4._4_4_ = (fVar34 + fVar34) - fVar34 * fVar34 * fVar9;
              in_XMM4._8_4_ = (fVar35 + fVar35) - fVar35 * fVar35 * fVar10;
              in_XMM4._12_4_ = (fVar36 + fVar36) - fVar36 * fVar36 * auVar3._12_4_;
              fVar28 = ((fVar30 * fVar38 - fVar29 * fVar39) + fVar40 * fVar27 + fVar28) *
                       (float)(-(uint)((float)((uint)fVar8 & uVar16) <= fVar1) & (uint)in_XMM4._0_4_
                              ^ (uint)in_XMM4._0_4_) * param_4;
              fVar31 = ((fVar27 * fVar39 - fVar30 * fVar37) + fVar40 * fVar29 + fVar31) *
                       (float)(-(uint)((float)((uint)fVar9 & uVar17) <= fVar2) & (uint)in_XMM4._4_4_
                              ^ (uint)in_XMM4._4_4_) * param_4;
              fVar41 = ((fVar29 * fVar37 - fVar27 * fVar38) + fVar40 * fVar30 + fVar41) *
                       (float)(-(uint)((float)((uint)fVar10 & uVar18) <= fVar15) &
                               (uint)in_XMM4._8_4_ ^ (uint)in_XMM4._8_4_) * param_4;
              *(float *)(lVar23 + 0x3c) = fVar28 + *(float *)(lVar23 + 0x3c);
              *(float *)(lVar23 + 0x40) = fVar31 + *(float *)(lVar23 + 0x40);
              *(float *)(lVar23 + 0x44) = fVar41 + *(float *)(lVar23 + 0x44);
              *(float *)(lVar23 + 0x2c) = fVar28 + *(float *)(lVar23 + 0x2c);
              *(float *)(lVar23 + 0x30) = fVar31 + *(float *)(lVar23 + 0x30);
              *(float *)(lVar23 + 0x34) = fVar41 + *(float *)(lVar23 + 0x34);
            }
            lVar25 = lVar25 + -1;
          } while (-1 < lVar25);
        }
      }
    }
  }
  return;
}



// FUNCTION 142651210 FUN_142651210 body=2300 status=ok
// SIG undefined FUN_142651210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142651210(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort *puVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 in_XMM5 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_68;
  float fStack_64;
  
  if ((((param_2 != 0) && (iVar1 = *(int *)(param_2 + 0x128), 0 < iVar1)) &&
      (lVar3 = *(longlong *)(param_2 + 0x100), lVar3 != 0)) &&
     (lVar4 = *(longlong *)(param_2 + 0x108), lVar4 != 0)) {
    iVar2 = *(int *)(param_2 + 0x124);
    if (((*(byte *)(param_1 + 0x38) & 1) == 0) ||
       ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1) == 0)) {
      fVar13 = *(float *)(param_1 + 0x48);
      local_68 = (float)*(undefined8 *)(param_1 + 0x40);
      fStack_64 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20);
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1) != 0) {
        fVar12 = fStack_64 * *(float *)(param_2 + 0x88);
        fVar11 = local_68 * *(float *)(param_2 + 0x74);
        fVar17 = local_68 * *(float *)(param_2 + 0x78);
        local_68 = *(float *)(param_2 + 0xa0) * 0.0 + fVar13 * *(float *)(param_2 + 0x90) +
                   fStack_64 * *(float *)(param_2 + 0x80) + local_68 * *(float *)(param_2 + 0x70);
        fStack_64 = *(float *)(param_2 + 0xa4) * 0.0 + fVar13 * *(float *)(param_2 + 0x94) +
                    fStack_64 * *(float *)(param_2 + 0x84) + fVar11;
        fVar13 = *(float *)(param_2 + 0xa8) * 0.0 + fVar13 * *(float *)(param_2 + 0x98) +
                 fVar12 + fVar17;
      }
      lVar10 = (longlong)(iVar1 + -1);
      if (-1 < iVar1 + -1) {
        if (2 < lVar10) {
          uVar7 = lVar10 + 1U >> 2;
          puVar9 = (ushort *)(lVar4 + -2 + lVar10 * 2);
          lVar10 = lVar10 + uVar7 * -4;
          do {
            lVar8 = (ulonglong)((uint)puVar9[1] * iVar2) + lVar3;
            if ((*(uint *)(lVar8 + 0x68) & 0x4000000) == 0) {
              *(float *)(lVar8 + 0x3c) = local_68 * param_4 + *(float *)(lVar8 + 0x3c);
              *(float *)(lVar8 + 0x40) = fStack_64 * param_4 + *(float *)(lVar8 + 0x40);
              *(float *)(lVar8 + 0x44) = fVar13 * param_4 + *(float *)(lVar8 + 0x44);
              *(float *)(lVar8 + 0x2c) = local_68 * param_4 + *(float *)(lVar8 + 0x2c);
              *(float *)(lVar8 + 0x30) = fStack_64 * param_4 + *(float *)(lVar8 + 0x30);
              *(float *)(lVar8 + 0x34) = fVar13 * param_4 + *(float *)(lVar8 + 0x34);
            }
            lVar8 = (ulonglong)((uint)*puVar9 * iVar2) + lVar3;
            if ((*(uint *)(lVar8 + 0x68) & 0x4000000) == 0) {
              *(float *)(lVar8 + 0x3c) = local_68 * param_4 + *(float *)(lVar8 + 0x3c);
              *(float *)(lVar8 + 0x40) = fStack_64 * param_4 + *(float *)(lVar8 + 0x40);
              *(float *)(lVar8 + 0x44) = fVar13 * param_4 + *(float *)(lVar8 + 0x44);
              *(float *)(lVar8 + 0x2c) = local_68 * param_4 + *(float *)(lVar8 + 0x2c);
              *(float *)(lVar8 + 0x30) = fStack_64 * param_4 + *(float *)(lVar8 + 0x30);
              *(float *)(lVar8 + 0x34) = fVar13 * param_4 + *(float *)(lVar8 + 0x34);
            }
            lVar8 = (ulonglong)((uint)puVar9[-1] * iVar2) + lVar3;
            if ((*(uint *)(lVar8 + 0x68) & 0x4000000) == 0) {
              *(float *)(lVar8 + 0x3c) = local_68 * param_4 + *(float *)(lVar8 + 0x3c);
              *(float *)(lVar8 + 0x40) = fStack_64 * param_4 + *(float *)(lVar8 + 0x40);
              *(float *)(lVar8 + 0x44) = fVar13 * param_4 + *(float *)(lVar8 + 0x44);
              *(float *)(lVar8 + 0x2c) = local_68 * param_4 + *(float *)(lVar8 + 0x2c);
              *(float *)(lVar8 + 0x30) = fStack_64 * param_4 + *(float *)(lVar8 + 0x30);
              *(float *)(lVar8 + 0x34) = fVar13 * param_4 + *(float *)(lVar8 + 0x34);
            }
            lVar8 = (ulonglong)((uint)puVar9[-2] * iVar2) + lVar3;
            if ((*(uint *)(lVar8 + 0x68) & 0x4000000) == 0) {
              *(float *)(lVar8 + 0x3c) = local_68 * param_4 + *(float *)(lVar8 + 0x3c);
              *(float *)(lVar8 + 0x40) = fStack_64 * param_4 + *(float *)(lVar8 + 0x40);
              *(float *)(lVar8 + 0x44) = fVar13 * param_4 + *(float *)(lVar8 + 0x44);
              *(float *)(lVar8 + 0x2c) = local_68 * param_4 + *(float *)(lVar8 + 0x2c);
              *(float *)(lVar8 + 0x30) = fStack_64 * param_4 + *(float *)(lVar8 + 0x30);
              *(float *)(lVar8 + 0x34) = fVar13 * param_4 + *(float *)(lVar8 + 0x34);
            }
            puVar9 = puVar9 + -4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        for (; -1 < lVar10; lVar10 = lVar10 + -1) {
          lVar8 = (ulonglong)((uint)*(ushort *)(lVar4 + lVar10 * 2) * iVar2) + lVar3;
          if ((*(uint *)(lVar8 + 0x68) & 0x4000000) == 0) {
            *(float *)(lVar8 + 0x3c) = local_68 * param_4 + *(float *)(lVar8 + 0x3c);
            *(float *)(lVar8 + 0x40) = fStack_64 * param_4 + *(float *)(lVar8 + 0x40);
            *(float *)(lVar8 + 0x44) = fVar13 * param_4 + *(float *)(lVar8 + 0x44);
            *(float *)(lVar8 + 0x2c) = local_68 * param_4 + *(float *)(lVar8 + 0x2c);
            *(float *)(lVar8 + 0x30) = fStack_64 * param_4 + *(float *)(lVar8 + 0x30);
            *(float *)(lVar8 + 0x34) = fVar13 * param_4 + *(float *)(lVar8 + 0x34);
          }
        }
      }
    }
    else {
      lVar10 = *(longlong *)(param_2 + 0x18);
      fVar13 = *(float *)(param_1 + 0x48);
      fVar12 = *(float *)(param_1 + 0x44);
      fVar11 = *(float *)(param_1 + 0x40);
      fVar22 = *(float *)(lVar10 + 0x210) * _DAT_146b06e10;
      fVar23 = *(float *)(lVar10 + 0x214) * fRam0000000146b06e14;
      fVar24 = *(float *)(lVar10 + 0x218) * fRam0000000146b06e18;
      fVar25 = *(float *)(lVar10 + 0x21c) * fRam0000000146b06e1c;
      auVar19 = *(undefined1 (*) [16])(lVar10 + 0x230);
      fVar17 = auVar19._0_4_;
      fVar5 = auVar19._4_4_;
      fVar6 = auVar19._8_4_;
      auVar19 = rcpps(in_XMM5,auVar19);
      lVar10 = (longlong)(iVar1 + -1);
      fVar14 = fVar13 * fVar23 - fVar12 * fVar24;
      fVar15 = fVar11 * fVar24 - fVar13 * fVar22;
      fVar16 = fVar12 * fVar22 - fVar11 * fVar23;
      fVar18 = auVar19._0_4_;
      fVar20 = auVar19._4_4_;
      fVar21 = auVar19._8_4_;
      fVar14 = fVar14 + fVar14;
      fVar15 = fVar15 + fVar15;
      fVar16 = fVar16 + fVar16;
      fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar17;
      fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar5;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar6;
      fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar17;
      fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar5;
      fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar6;
      fVar11 = ((fVar16 * fVar23 - fVar15 * fVar24) + fVar25 * fVar14 + fVar11) *
               (float)(-(uint)((float)((uint)fVar17 & _DAT_146b06e00) <= _DAT_146b06df0) &
                       (uint)fVar18 ^ (uint)fVar18);
      fVar12 = ((fVar14 * fVar24 - fVar16 * fVar22) + fVar25 * fVar15 + fVar12) *
               (float)(-(uint)((float)((uint)fVar5 & uRam0000000146b06e04) <= fRam0000000146b06df4)
                       & (uint)fVar20 ^ (uint)fVar20);
      fVar13 = ((fVar15 * fVar22 - fVar14 * fVar23) + fVar25 * fVar16 + fVar13) *
               (float)(-(uint)((float)((uint)fVar6 & uRam0000000146b06e08) <= fRam0000000146b06df8)
                       & (uint)fVar21 ^ (uint)fVar21);
      if (-1 < iVar1 + -1) {
        if (2 < lVar10) {
          uVar7 = lVar10 + 1U >> 2;
          puVar9 = (ushort *)(lVar4 + -2 + lVar10 * 2);
          lVar10 = lVar10 + uVar7 * -4;
          do {
            lVar8 = (ulonglong)((uint)puVar9[1] * iVar2) + lVar3;
            if ((*(uint *)(lVar8 + 0x68) & 0x4000000) == 0) {
              *(float *)(lVar8 + 0x3c) = fVar11 * param_4 + *(float *)(lVar8 + 0x3c);
              *(float *)(lVar8 + 0x40) = fVar12 * param_4 + *(float *)(lVar8 + 0x40);
              *(float *)(lVar8 + 0x44) = fVar13 * param_4 + *(float *)(lVar8 + 0x44);
              *(float *)(lVar8 + 0x2c) = fVar11 * param_4 + *(float *)(lVar8 + 0x2c);
              *(float *)(lVar8 + 0x30) = fVar12 * param_4 + *(float *)(lVar8 + 0x30);
              *(float *)(lVar8 + 0x34) = fVar13 * param_4 + *(float *)(lVar8 + 0x34);
            }
            lVar8 = (ulonglong)((uint)*puVar9 * iVar2) + lVar3;
            if ((*(uint *)(lVar8 + 0x68) & 0x4000000) == 0) {
              *(float *)(lVar8 + 0x3c) = fVar11 * param_4 + *(float *)(lVar8 + 0x3c);
              *(float *)(lVar8 + 0x40) = fVar12 * param_4 + *(float *)(lVar8 + 0x40);
              *(float *)(lVar8 + 0x44) = fVar13 * param_4 + *(float *)(lVar8 + 0x44);
              *(float *)(lVar8 + 0x2c) = fVar11 * param_4 + *(float *)(lVar8 + 0x2c);
              *(float *)(lVar8 + 0x30) = fVar12 * param_4 + *(float *)(lVar8 + 0x30);
              *(float *)(lVar8 + 0x34) = fVar13 * param_4 + *(float *)(lVar8 + 0x34);
            }
            lVar8 = (ulonglong)((uint)puVar9[-1] * iVar2) + lVar3;
            if ((*(uint *)(lVar8 + 0x68) & 0x4000000) == 0) {
              *(float *)(lVar8 + 0x3c) = fVar11 * param_4 + *(float *)(lVar8 + 0x3c);
              *(float *)(lVar8 + 0x40) = fVar12 * param_4 + *(float *)(lVar8 + 0x40);
              *(float *)(lVar8 + 0x44) = fVar13 * param_4 + *(float *)(lVar8 + 0x44);
              *(float *)(lVar8 + 0x2c) = fVar11 * param_4 + *(float *)(lVar8 + 0x2c);
              *(float *)(lVar8 + 0x30) = fVar12 * param_4 + *(float *)(lVar8 + 0x30);
              *(float *)(lVar8 + 0x34) = fVar13 * param_4 + *(float *)(lVar8 + 0x34);
            }
            lVar8 = (ulonglong)((uint)puVar9[-2] * iVar2) + lVar3;
            if ((*(uint *)(lVar8 + 0x68) & 0x4000000) == 0) {
              *(float *)(lVar8 + 0x3c) = fVar11 * param_4 + *(float *)(lVar8 + 0x3c);
              *(float *)(lVar8 + 0x40) = fVar12 * param_4 + *(float *)(lVar8 + 0x40);
              *(float *)(lVar8 + 0x44) = fVar13 * param_4 + *(float *)(lVar8 + 0x44);
              *(float *)(lVar8 + 0x2c) = fVar11 * param_4 + *(float *)(lVar8 + 0x2c);
              *(float *)(lVar8 + 0x30) = fVar12 * param_4 + *(float *)(lVar8 + 0x30);
              *(float *)(lVar8 + 0x34) = fVar13 * param_4 + *(float *)(lVar8 + 0x34);
            }
            puVar9 = puVar9 + -4;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        for (; -1 < lVar10; lVar10 = lVar10 + -1) {
          lVar8 = (ulonglong)((uint)*(ushort *)(lVar4 + lVar10 * 2) * iVar2) + lVar3;
          if ((*(uint *)(lVar8 + 0x68) & 0x4000000) == 0) {
            *(float *)(lVar8 + 0x3c) = fVar11 * param_4 + *(float *)(lVar8 + 0x3c);
            *(float *)(lVar8 + 0x40) = fVar12 * param_4 + *(float *)(lVar8 + 0x40);
            *(float *)(lVar8 + 0x44) = fVar13 * param_4 + *(float *)(lVar8 + 0x44);
            *(float *)(lVar8 + 0x2c) = fVar11 * param_4 + *(float *)(lVar8 + 0x2c);
            *(float *)(lVar8 + 0x30) = fVar12 * param_4 + *(float *)(lVar8 + 0x30);
            *(float *)(lVar8 + 0x34) = fVar13 * param_4 + *(float *)(lVar8 + 0x34);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142651b10 FUN_142651b10 body=333 status=ok
// SIG undefined FUN_142651b10(void)

void FUN_142651b10(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *(longlong *)(param_2 + 0x100);
  iVar4 = *(int *)(param_2 + 0x128) + -1;
  iVar1 = *(int *)(param_2 + 0x124);
  lVar3 = *(longlong *)(param_2 + 0x108);
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      lVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + lVar6 * 2) * iVar1) + lVar2;
      if ((*(uint *)(lVar5 + 0x68) & 0x4000000) == 0) {
        fVar7 = (float)FUN_1424116d0(param_1 + 0x48,*(undefined4 *)(lVar5 + 0xc),
                                     *(undefined8 *)(param_2 + 0x18),0);
        fVar7 = -fVar7;
        fVar9 = *(float *)(lVar5 + 0x40) * fVar7 * param_4;
        fVar8 = *(float *)(lVar5 + 0x3c) * fVar7 * param_4;
        fVar7 = *(float *)(lVar5 + 0x44) * fVar7 * param_4;
        *(float *)(lVar5 + 0x40) = fVar9 + *(float *)(lVar5 + 0x40);
        *(float *)(lVar5 + 0x3c) = fVar8 + *(float *)(lVar5 + 0x3c);
        *(float *)(lVar5 + 0x44) = fVar7 + *(float *)(lVar5 + 0x44);
        *(float *)(lVar5 + 0x2c) = fVar8 + *(float *)(lVar5 + 0x2c);
        *(float *)(lVar5 + 0x30) = fVar9 + *(float *)(lVar5 + 0x30);
        *(float *)(lVar5 + 0x34) = fVar7 + *(float *)(lVar5 + 0x34);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return;
}



// FUNCTION 142651c60 FUN_142651c60 body=811 status=ok
// SIG undefined FUN_142651c60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142651c60(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 in_XMM4 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_88;
  float local_84;
  float local_80;
  
  if (((*(byte *)(param_1 + 0x38) & 1) == 0) ||
     ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1) == 0)) {
    lVar13 = *(longlong *)(param_2 + 0x100);
    iVar11 = *(int *)(param_2 + 0x128) + -1;
    iVar2 = *(int *)(param_2 + 0x124);
    lVar3 = *(longlong *)(param_2 + 0x108);
    lVar14 = (longlong)iVar11;
    if (-1 < iVar11) {
      do {
        lVar12 = (ulonglong)((uint)*(ushort *)(lVar3 + lVar14 * 2) * iVar2) + lVar13;
        if ((*(uint *)(lVar12 + 0x68) & 0x4000000) == 0) {
          FUN_1424118e0(param_1 + 0x40,&local_88,*(undefined4 *)(lVar12 + 0xc),
                        *(undefined8 *)(param_2 + 0x18),0,0);
          *(float *)(lVar12 + 0x3c) = local_88 * param_4 + *(float *)(lVar12 + 0x3c);
          *(float *)(lVar12 + 0x40) = local_84 * param_4 + *(float *)(lVar12 + 0x40);
          *(float *)(lVar12 + 0x44) = local_80 * param_4 + *(float *)(lVar12 + 0x44);
          *(float *)(lVar12 + 0x2c) = local_88 * param_4 + *(float *)(lVar12 + 0x2c);
          *(float *)(lVar12 + 0x30) = local_84 * param_4 + *(float *)(lVar12 + 0x30);
          *(float *)(lVar12 + 0x34) = local_80 * param_4 + *(float *)(lVar12 + 0x34);
        }
        lVar14 = lVar14 + -1;
      } while (-1 < lVar14);
    }
  }
  else {
    lVar13 = *(longlong *)(param_2 + 0x18);
    lVar3 = *(longlong *)(param_2 + 0x100);
    iVar2 = *(int *)(param_2 + 0x124);
    lVar14 = *(longlong *)(param_2 + 0x108);
    fVar7 = *(float *)(lVar13 + 0x210);
    fVar8 = *(float *)(lVar13 + 0x214);
    fVar9 = *(float *)(lVar13 + 0x218);
    fVar10 = *(float *)(lVar13 + 0x21c);
    auVar1 = *(undefined1 (*) [16])(lVar13 + 0x230);
    fVar4 = auVar1._0_4_;
    fVar5 = auVar1._4_4_;
    fVar6 = auVar1._8_4_;
    iVar11 = *(int *)(param_2 + 0x128) + -1;
    lVar13 = (longlong)iVar11;
    if (-1 < iVar11) {
      do {
        lVar12 = (ulonglong)((uint)*(ushort *)(lVar14 + lVar13 * 2) * iVar2) + lVar3;
        if ((*(uint *)(lVar12 + 0x68) & 0x4000000) == 0) {
          FUN_1424118e0(param_1 + 0x40,&local_88,*(undefined4 *)(lVar12 + 0xc),
                        *(undefined8 *)(param_2 + 0x18),0,0);
          fVar23 = fVar7 * _DAT_146b06e10;
          fVar24 = fVar8 * fRam0000000146b06e14;
          fVar25 = fVar9 * fRam0000000146b06e18;
          fVar26 = fVar10 * fRam0000000146b06e1c;
          auVar19 = rcpps(in_XMM4,auVar1);
          fVar15 = local_80 * fVar24 - local_84 * fVar25;
          fVar16 = local_88 * fVar25 - local_80 * fVar23;
          fVar17 = local_84 * fVar23 - local_88 * fVar24;
          fVar18 = auVar19._0_4_;
          fVar20 = auVar19._4_4_;
          fVar21 = auVar19._8_4_;
          fVar22 = auVar19._12_4_;
          fVar15 = fVar15 + fVar15;
          fVar16 = fVar16 + fVar16;
          fVar17 = fVar17 + fVar17;
          fVar18 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar4;
          fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar5;
          fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * fVar6;
          fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * auVar1._12_4_;
          in_XMM4._0_4_ = (fVar18 + fVar18) - fVar18 * fVar18 * fVar4;
          in_XMM4._4_4_ = (fVar20 + fVar20) - fVar20 * fVar20 * fVar5;
          in_XMM4._8_4_ = (fVar21 + fVar21) - fVar21 * fVar21 * fVar6;
          in_XMM4._12_4_ = (fVar22 + fVar22) - fVar22 * fVar22 * auVar1._12_4_;
          local_88 = ((fVar17 * fVar24 - fVar16 * fVar25) + fVar26 * fVar15 + local_88) *
                     (float)(-(uint)((float)((uint)fVar4 & _DAT_146b06e00) <= _DAT_146b06df0) &
                             (uint)in_XMM4._0_4_ ^ (uint)in_XMM4._0_4_);
          local_84 = ((fVar15 * fVar25 - fVar17 * fVar23) + fVar26 * fVar16 + local_84) *
                     (float)(-(uint)((float)((uint)fVar5 & uRam0000000146b06e04) <=
                                    fRam0000000146b06df4) & (uint)in_XMM4._4_4_ ^
                            (uint)in_XMM4._4_4_);
          local_80 = ((fVar16 * fVar23 - fVar15 * fVar24) + fVar26 * fVar17 + local_80) *
                     (float)(-(uint)((float)((uint)fVar6 & uRam0000000146b06e08) <=
                                    fRam0000000146b06df8) & (uint)in_XMM4._8_4_ ^
                            (uint)in_XMM4._8_4_);
          *(float *)(lVar12 + 0x3c) = local_88 * param_4 + *(float *)(lVar12 + 0x3c);
          *(float *)(lVar12 + 0x40) = local_84 * param_4 + *(float *)(lVar12 + 0x40);
          *(float *)(lVar12 + 0x44) = local_80 * param_4 + *(float *)(lVar12 + 0x44);
          *(float *)(lVar12 + 0x2c) = local_88 * param_4 + *(float *)(lVar12 + 0x2c);
          *(float *)(lVar12 + 0x30) = local_84 * param_4 + *(float *)(lVar12 + 0x30);
          *(float *)(lVar12 + 0x34) = local_80 * param_4 + *(float *)(lVar12 + 0x34);
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
  }
  return;
}



// FUNCTION 142651f90 FUN_142651f90 body=1080 status=ok
// SIG undefined FUN_142651f90(void)

void FUN_142651f90(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
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
  
  fVar16 = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x40);
  fVar17 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x3c);
  fVar19 = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x38);
  if (fVar17 * fVar17 + fVar19 * fVar19 + fVar16 * fVar16 == 0.0) {
    fVar19 = 1e-08;
    fVar17 = 1e-08;
    fVar16 = 1e-08;
  }
  fVar20 = fVar17 * fVar17 + fVar19 * fVar19 + fVar16 * fVar16;
  if (1e-08 < fVar20) {
    rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
  }
  lVar2 = *(longlong *)(param_2 + 0x100);
  iVar5 = *(int *)(param_2 + 0x128) + -1;
  iVar1 = *(int *)(param_2 + 0x124);
  lVar3 = *(longlong *)(param_2 + 0x108);
  lVar7 = (longlong)iVar5;
  if (-1 < iVar5) {
    do {
      lVar6 = (ulonglong)((uint)*(ushort *)(lVar3 + lVar7 * 2) * iVar1) + lVar2;
      if ((*(uint *)(lVar6 + 0x68) & 0x4000000) == 0) {
        lVar4 = *(longlong *)(param_2 + 0x18);
        fVar14 = *(float *)(lVar6 + 0x10) - *(float *)(lVar4 + 0x220);
        fVar18 = *(float *)(lVar6 + 0x14) - *(float *)(lVar4 + 0x224);
        fVar15 = *(float *)(lVar6 + 0x18) - *(float *)(lVar4 + 0x228);
        fVar8 = 1.0 / fVar20;
        fVar10 = (fVar18 - *(float *)(param_1 + 0x3c)) * fVar17 +
                 (fVar14 - *(float *)(param_1 + 0x38)) * fVar19 +
                 (fVar15 - *(float *)(param_1 + 0x40)) * fVar16;
        fVar9 = 0.0;
        fVar11 = 0.0;
        fVar13 = fVar19 * fVar10 * fVar8;
        fVar21 = fVar17 * fVar10 * fVar8;
        fVar8 = fVar16 * fVar10 * fVar8;
        fVar10 = 0.0;
        if (fVar19 != 0.0) {
          fVar11 = (fVar13 - *(float *)(param_1 + 0x38)) / fVar19;
        }
        if (fVar17 != 0.0) {
          fVar9 = (fVar21 - *(float *)(param_1 + 0x3c)) / fVar17;
        }
        if (fVar16 != 0.0) {
          fVar10 = (fVar8 - *(float *)(param_1 + 0x40)) / fVar16;
        }
        fVar12 = 0.0;
        if (((fVar11 == 0.0) &&
            (((fVar9 == 0.0 && (fVar10 == 0.0)) ||
             ((fVar11 == 0.0 && ((fVar11 = fVar9, fVar9 == 0.0 && (fVar11 = fVar10, fVar10 == 0.0)))
              ))))) || ((0.0 <= fVar11 && (fVar12 = fVar11, fVar11 <= 1.0)))) {
          fVar11 = (float)FUN_1424116d0(param_1 + 0x50,fVar12,lVar4,0);
          fVar14 = fVar14 - fVar13;
          fVar18 = fVar18 - fVar21;
          fVar15 = fVar15 - fVar8;
          fVar8 = SQRT(fVar18 * fVar18 + fVar14 * fVar14 + fVar15 * fVar15);
          if ((0.0 < fVar11) && (fVar8 <= fVar11)) {
            fVar11 = (float)FUN_1424116d0(param_1 + 0x88,(fVar11 - fVar8) / fVar11,
                                          *(undefined8 *)(param_2 + 0x18),0);
            *(float *)(lVar6 + 0x40) =
                 (fVar15 * fVar19 - fVar14 * fVar16) * fVar11 * param_4 + *(float *)(lVar6 + 0x40);
            *(float *)(lVar6 + 0x3c) =
                 (fVar18 * fVar16 - fVar15 * fVar17) * fVar11 * param_4 + *(float *)(lVar6 + 0x3c);
            *(float *)(lVar6 + 0x44) =
                 (fVar14 * fVar17 - fVar18 * fVar19) * fVar11 * param_4 + *(float *)(lVar6 + 0x44);
          }
        }
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  return;
}



// FUNCTION 1426523d0 FUN_1426523d0 body=1531 status=ok
// SIG undefined FUN_1426523d0(void)

void FUN_1426523d0(longlong param_1,longlong param_2,uint param_3,float param_4)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  undefined8 uVar14;
  longlong lVar15;
  byte bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  float fVar27;
  byte local_res8;
  float local_f0;
  float fStack_ec;
  float local_e0;
  float fStack_dc;
  
  lVar11 = 0;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  iVar2 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x928);
  if (iVar2 < 1) {
    return;
  }
  plVar10 = *(longlong **)(*(longlong *)(param_2 + 0x18) + 0x920);
  while ((plVar3 = (longlong *)*plVar10, plVar3 == (longlong *)0x0 ||
         (*(longlong *)(plVar3[2] + 0x28) != *(longlong *)(param_1 + 0x38)))) {
    lVar11 = lVar11 + 1;
    plVar10 = plVar10 + 1;
    if (iVar2 <= lVar11) {
      return;
    }
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar11 = *(longlong *)(param_2 + 0x108);
  lVar4 = *(longlong *)(param_2 + 0x100);
  local_res8 = *(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1;
  iVar2 = *(int *)(param_2 + 0x124);
  bVar16 = *(byte *)(*(longlong *)(plVar3[5] + 0x30) + 100) & 1;
  iVar8 = *(int *)(param_2 + 0x128) + -1;
  lVar15 = (longlong)iVar8;
  if (iVar8 < 0) {
    return;
  }
  do {
    lVar12 = (ulonglong)((uint)*(ushort *)(lVar11 + lVar15 * 2) * iVar2) + lVar4;
    if ((*(uint *)(lVar12 + 0x68) & 0x4000000) == 0) {
      piVar13 = (int *)((ulonglong)param_3 + lVar12);
      if (*piVar13 == -1) {
        if ((*(byte *)(param_1 + 0xc0) & 2) != 0) {
          *(float *)(lVar12 + 0x3c) = (float)piVar13[2] + *(float *)(lVar12 + 0x3c);
          *(float *)(lVar12 + 0x40) = (float)piVar13[3] + *(float *)(lVar12 + 0x40);
          *(float *)(lVar12 + 0x44) = (float)piVar13[4] + *(float *)(lVar12 + 0x44);
        }
      }
      else {
        uVar9 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (uVar9 != 0) {
          if (((piVar13[1] == 0) || (uVar9 == (uint)piVar13[1])) ||
             ((*(byte *)(param_1 + 0xc0) & 1) != 0)) {
            fVar17 = (float)FUN_1424116d0(param_1 + 0x40,*(undefined4 *)(uVar9 + 0xc),
                                          *(undefined8 *)(param_2 + 0x18),0);
            fVar25 = *(float *)(uVar9 + 0x18);
            local_f0 = (float)*(undefined8 *)(uVar9 + 0x10);
            fStack_ec = (float)((ulonglong)*(undefined8 *)(uVar9 + 0x10) >> 0x20);
            fVar27 = *(float *)(lVar12 + 0x18);
            if (local_res8 == bVar16) {
LAB_14265281f:
              local_e0 = (float)*(undefined8 *)(lVar12 + 0x10);
              fStack_dc = (float)((ulonglong)*(undefined8 *)(lVar12 + 0x10) >> 0x20);
            }
            else {
              if (bVar16 != 0) {
                lVar5 = *(longlong *)(param_2 + 0x18);
                fVar22 = *(float *)(lVar5 + 0x210);
                fVar6 = *(float *)(lVar5 + 0x214);
                fVar7 = *(float *)(lVar5 + 0x218);
                fVar21 = *(float *)(lVar5 + 0x21c);
                local_f0 = local_f0 * *(float *)(lVar5 + 0x230);
                fStack_ec = fStack_ec * *(float *)(lVar5 + 0x234);
                fVar25 = fVar25 * *(float *)(lVar5 + 0x238);
                fVar18 = fVar25 * fVar6 - fStack_ec * fVar7;
                fVar19 = local_f0 * fVar7 - fVar25 * fVar22;
                fVar20 = fStack_ec * fVar22 - local_f0 * fVar6;
                fVar18 = fVar18 + fVar18;
                fVar19 = fVar19 + fVar19;
                fVar20 = fVar20 + fVar20;
                local_f0 = (fVar20 * fVar6 - fVar19 * fVar7) + fVar21 * fVar18 + local_f0;
                fStack_ec = (fVar18 * fVar7 - fVar20 * fVar22) + fVar21 * fVar19 + fStack_ec;
                fVar25 = (fVar19 * fVar22 - fVar18 * fVar6) + fVar21 * fVar20 + fVar25;
              }
              if (local_res8 == 0) goto LAB_14265281f;
              lVar5 = *(longlong *)(param_2 + 0x18);
              pauVar1 = (undefined1 (*) [12])(lVar12 + 0x10);
              fVar27 = *(float *)(lVar5 + 0x210);
              fVar22 = *(float *)(lVar5 + 0x214);
              fVar6 = *(float *)(lVar5 + 0x218);
              fVar7 = *(float *)(lVar5 + 0x21c);
              fVar20 = *(float *)*pauVar1 * *(float *)(lVar5 + 0x230);
              fVar24 = (float)((ulonglong)*(undefined8 *)*pauVar1 >> 0x20) *
                       *(float *)(lVar5 + 0x234);
              fVar26 = SUB124(*pauVar1,8) * *(float *)(lVar5 + 0x238);
              fVar21 = fVar26 * fVar22 - fVar24 * fVar6;
              fVar18 = fVar20 * fVar6 - fVar26 * fVar27;
              fVar19 = fVar24 * fVar27 - fVar20 * fVar22;
              fVar21 = fVar21 + fVar21;
              fVar18 = fVar18 + fVar18;
              fVar19 = fVar19 + fVar19;
              local_e0 = (fVar19 * fVar22 - fVar18 * fVar6) + fVar7 * fVar21 + fVar20;
              fStack_dc = (fVar21 * fVar6 - fVar19 * fVar27) + fVar7 * fVar18 + fVar24;
              fVar27 = (fVar18 * fVar27 - fVar21 * fVar22) + fVar7 * fVar19 + fVar26;
            }
            fStack_ec = fStack_ec - fStack_dc;
            local_f0 = local_f0 - local_e0;
            fVar25 = fVar25 - fVar27;
            fVar27 = fStack_ec * fStack_ec + local_f0 * local_f0 + fVar25 * fVar25;
            if (SQRT(fVar27) <= fVar17) {
              if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
                fVar17 = *(float *)(uVar9 + 0xc);
                uVar14 = *(undefined8 *)(param_2 + 0x18);
              }
              else {
                uVar14 = 0;
                fVar17 = (fVar17 - SQRT(fVar27)) / fVar17;
              }
              fVar17 = (float)FUN_1424116d0(param_1 + 0x80,fVar17,uVar14,0);
              if (1e-08 < fVar27) {
                auVar23 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
                fVar22 = auVar23._0_4_;
                fVar22 = fVar22 + fVar22 * (0.5 - fVar27 * 0.5 * fVar22 * fVar22);
                fVar22 = fVar22 + fVar22 * (0.5 - fVar27 * 0.5 * fVar22 * fVar22);
                local_f0 = fVar22 * local_f0;
                fStack_ec = fVar22 * fStack_ec;
                fVar25 = fVar22 * fVar25;
              }
              fVar27 = fVar17 * local_f0 * param_4;
              fVar22 = fVar17 * fStack_ec * param_4;
              fVar17 = fVar17 * fVar25 * param_4;
              *(float *)(lVar12 + 0x3c) = fVar27 + *(float *)(lVar12 + 0x3c);
              *(float *)(lVar12 + 0x40) = fVar22 + *(float *)(lVar12 + 0x40);
              *(float *)(lVar12 + 0x44) = fVar17 + *(float *)(lVar12 + 0x44);
              *(undefined8 *)(piVar13 + 2) = *(undefined8 *)(uVar9 + 0x3c);
              piVar13[4] = *(int *)(uVar9 + 0x44);
              if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
                *(float *)(lVar12 + 0x2c) = fVar27 + *(float *)(lVar12 + 0x2c);
                *(float *)(lVar12 + 0x30) = fVar22 + *(float *)(lVar12 + 0x30);
                *(float *)(lVar12 + 0x34) = fVar17 + *(float *)(lVar12 + 0x34);
              }
            }
          }
          else {
            *piVar13 = -1;
            piVar13[1] = 0;
          }
        }
      }
    }
    lVar15 = lVar15 + -1;
    if (lVar15 < 0) {
      return;
    }
  } while( true );
}



// FUNCTION 1426529d0 FUN_1426529d0 body=1314 status=ok
// SIG undefined FUN_1426529d0(void)

void FUN_1426529d0(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float local_res8;
  float local_res10;
  float local_118;
  float local_114;
  float local_100;
  float local_fc;
  float local_f8;
  
  lVar3 = *(longlong *)(param_2 + 0x18);
  FUN_1424118e0(param_1 + 0x38,&local_100,*(undefined4 *)(param_2 + 0x13c),lVar3,0,0);
  fVar10 = (float)FUN_1424116d0(param_1 + 0x88,*(undefined4 *)(param_2 + 0x13c),lVar3,0);
  fVar19 = 1.0;
  lVar4 = *(longlong *)(param_2 + 0x28);
  fVar12 = 1.0;
  fVar11 = 1.0;
  fVar13 = 1.0;
  if (((*(byte *)(*(longlong *)(lVar4 + 0x30) + 100) & 1) == 0) &&
     ((*(byte *)(param_1 + 0xf8) & 8) == 0)) {
    fVar12 = *(float *)(lVar3 + 0x210);
    fVar11 = *(float *)(lVar3 + 0x214);
    fVar13 = *(float *)(lVar3 + 0x218);
    fVar20 = *(float *)(lVar3 + 0x21c);
    local_100 = local_100 * *(float *)(lVar3 + 0x230);
    local_fc = local_fc * *(float *)(lVar3 + 0x234);
    local_f8 = local_f8 * *(float *)(lVar3 + 0x238);
    fVar14 = local_f8 * fVar11 - local_fc * fVar13;
    fVar15 = local_100 * fVar13 - local_f8 * fVar12;
    fVar16 = local_fc * fVar12 - local_100 * fVar11;
    fVar14 = fVar14 + fVar14;
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    local_100 = (fVar16 * fVar11 - fVar15 * fVar13) + fVar20 * fVar14 + local_100 +
                *(float *)(lVar3 + 0x220);
    local_fc = (fVar14 * fVar13 - fVar16 * fVar12) + fVar20 * fVar15 + local_fc +
               *(float *)(lVar3 + 0x224);
    local_f8 = (fVar15 * fVar12 - fVar14 * fVar11) + fVar20 * fVar16 + local_f8 +
               *(float *)(lVar3 + 0x228);
    fVar12 = *(float *)(lVar3 + 0x230);
    fVar11 = *(float *)(lVar3 + 0x234);
    fVar13 = *(float *)(lVar3 + 0x238);
  }
  uVar1 = *(uint *)(param_1 + 0xf8);
  fVar20 = -1.0;
  fVar12 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13);
  fVar10 = fVar10 * fVar12;
  if ((uVar1 >> 9 & 1) == 0) {
    local_res8 = 0.0;
  }
  else {
    local_res8 = -1.0;
  }
  if ((uVar1 >> 8 & 1) == 0) {
    local_118 = 0.0;
  }
  else {
    local_118 = -1.0;
  }
  if (-1 < (char)uVar1) {
    fVar20 = 0.0;
  }
  if ((uVar1 & 0x40) == 0) {
    local_res10 = 0.0;
  }
  else {
    local_res10 = 1.0;
  }
  if ((uVar1 & 0x20) == 0) {
    local_114 = 0.0;
  }
  else {
    local_114 = 1.0;
  }
  if ((uVar1 & 0x10) == 0) {
    fVar19 = 0.0;
  }
  lVar5 = *(longlong *)(param_2 + 0x100);
  iVar7 = *(int *)(param_2 + 0x128) + -1;
  iVar2 = *(int *)(param_2 + 0x124);
  lVar6 = *(longlong *)(param_2 + 0x108);
  lVar9 = (longlong)iVar7;
  if (-1 < iVar7) {
    do {
      lVar8 = (ulonglong)((uint)*(ushort *)(lVar6 + lVar9 * 2) * iVar2) + lVar5;
      if ((*(uint *)(lVar8 + 0x68) & 0x4000000) == 0) {
        fVar14 = local_100 - *(float *)(lVar8 + 0x10);
        fVar13 = local_fc - *(float *)(lVar8 + 0x14);
        fVar11 = local_f8 - *(float *)(lVar8 + 0x18);
        fVar15 = fVar13 * fVar13 + fVar14 * fVar14 + fVar11 * fVar11;
        if (SQRT(fVar15) <= fVar10) {
          if ((*(byte *)(param_1 + 0xf8) & 1) == 0) {
            fVar16 = *(float *)(param_2 + 0x13c);
LAB_142652cfe:
            fVar16 = (float)FUN_1424116d0(param_1 + 0xc0,fVar16,lVar3,0);
          }
          else {
            if (fVar10 != 0.0) {
              fVar16 = (fVar10 - SQRT(fVar15)) / fVar10;
              goto LAB_142652cfe;
            }
            fVar16 = 0.0;
          }
          if (((*(byte *)(*(longlong *)(lVar4 + 0x30) + 100) & 1) == 0) &&
             ((*(byte *)(param_1 + 0xf8) & 8) == 0)) {
            fVar16 = fVar16 * fVar12;
          }
          if (1e-08 < fVar15) {
            auVar18 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
            fVar17 = auVar18._0_4_;
            fVar17 = fVar17 + fVar17 * (0.5 - fVar15 * 0.5 * fVar17 * fVar17);
            fVar17 = fVar17 + fVar17 * (0.5 - fVar15 * 0.5 * fVar17 * fVar17);
            fVar13 = fVar13 * fVar17;
            fVar11 = fVar11 * fVar17;
            fVar14 = fVar14 * fVar17;
          }
          if (fVar16 < 0.0) {
            fVar14 = -fVar14;
            fVar13 = -fVar13;
            fVar11 = -fVar11;
            fVar16 = -fVar16;
          }
          fVar15 = local_res8;
          if ((local_res8 <= fVar11) && (fVar15 = fVar11, local_res10 <= fVar11)) {
            fVar15 = local_res10;
          }
          fVar11 = local_118;
          if ((local_118 <= fVar13) && (fVar11 = fVar13, local_114 <= fVar13)) {
            fVar11 = local_114;
          }
          fVar13 = fVar20;
          if ((fVar20 <= fVar14) && (fVar13 = fVar14, fVar19 <= fVar14)) {
            fVar13 = fVar19;
          }
          fVar14 = fVar13 * fVar16 * param_4;
          fVar13 = fVar11 * fVar16 * param_4;
          fVar11 = fVar15 * fVar16 * param_4;
          *(float *)(lVar8 + 0x3c) = fVar14 + *(float *)(lVar8 + 0x3c);
          *(float *)(lVar8 + 0x40) = fVar13 + *(float *)(lVar8 + 0x40);
          *(float *)(lVar8 + 0x44) = fVar11 + *(float *)(lVar8 + 0x44);
          if ((*(byte *)(param_1 + 0xf8) & 2) != 0) {
            *(float *)(lVar8 + 0x2c) = fVar14 + *(float *)(lVar8 + 0x2c);
            *(float *)(lVar8 + 0x30) = fVar13 + *(float *)(lVar8 + 0x30);
            *(float *)(lVar8 + 0x34) = fVar11 + *(float *)(lVar8 + 0x34);
          }
        }
      }
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  return;
}



// FUNCTION 142652f00 FUN_142652f00 body=223 status=ok
// SIG undefined FUN_142652f00(void)

void FUN_142652f00(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  
  if ((*(byte *)(param_1 + 0x70) & 1) == 0) {
    iVar5 = *(int *)(param_2 + 0x128) + -1;
    lVar2 = *(longlong *)(param_2 + 0x100);
    iVar1 = *(int *)(param_2 + 0x124);
    lVar3 = *(longlong *)(param_2 + 0x108);
    lVar8 = (longlong)iVar5;
    if (-1 < iVar5) {
      do {
        lVar6 = (ulonglong)((uint)*(ushort *)(lVar3 + lVar8 * 2) * iVar1) + lVar2;
        if ((*(uint *)(lVar6 + 0x68) & 0x4000000) == 0) {
          uVar4 = param_3;
          if (*(uint *)(param_2 + 0x4c) != 0) {
            uVar4 = *(uint *)(param_2 + 0x4c);
          }
          lVar7 = (ulonglong)uVar4 + lVar6;
          fVar9 = (float)FUN_1424116d0(param_1 + 0x38,*(undefined4 *)(lVar6 + 0xc),
                                       *(undefined8 *)(param_2 + 0x18),0);
          if (*(char *)(param_1 + 0x74) == '\x01') {
            fVar9 = fVar9 + *(float *)(lVar7 + 4);
          }
          else if (*(char *)(param_1 + 0x74) == '\x02') {
            fVar9 = fVar9 * *(float *)(lVar7 + 4);
          }
          *(float *)(lVar7 + 4) = fVar9;
        }
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
  }
  return;
}



// FUNCTION 142652fe0 FUN_142652fe0 body=6016 status=ok
// SIG undefined FUN_142652fe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142652fe0(longlong *param_1,longlong *param_2,uint param_3,float param_4)

{
  uint uVar1;
  void *_Src;
  bool bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  byte bVar6;
  DWORD DVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined8 uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  float *pfVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  undefined4 uVar23;
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
  float fVar39;
  undefined1 in_XMM5 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  longlong *local_res10;
  uint local_res18;
  float local_res20;
  float local_340;
  float local_33c;
  float local_338;
  int local_330;
  undefined8 local_328;
  float local_320;
  uint local_318;
  undefined8 local_310;
  float local_308;
  longlong *local_300;
  longlong local_2f8;
  int local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined4 local_290;
  float local_288;
  longlong local_280;
  undefined8 local_278;
  float local_270;
  undefined8 local_268;
  float local_260;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  undefined4 local_240;
  float *local_238;
  int local_230;
  float local_228;
  float fStack_224;
  float local_220;
  float local_218;
  float local_214;
  float local_210;
  float local_208;
  float local_204;
  float local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  undefined8 local_1e0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  longlong *local_1c8;
  float *local_1c0;
  undefined1 *local_1b8;
  float *local_1b0;
  longlong **local_1a8;
  float local_198;
  float local_18c;
  float local_180;
  float local_174;
  undefined1 local_168 [12];
  float local_15c;
  undefined8 local_154;
  float local_14c;
  undefined8 local_13c;
  float local_134;
  undefined1 local_fc [196];
  
  local_2d0 = *(longlong *)(param_2[3] + 0x120);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (local_2d0 == 0) {
    local_2d0 = FUN_1423407b0();
  }
  if ((int)local_res10[0x25] == 0) {
    return;
  }
  if ((((*(byte *)(param_1 + 0x37) & 1) != 0) && (local_2d0 != 0)) &&
     ((*(byte *)(local_2d0 + 0x830) & 1) != 0)) {
    return;
  }
  lVar17 = local_res10[5];
  local_1e0 = *(undefined8 *)(local_res10[3] + 0x118);
  local_2e0 = lVar17;
  local_318 = (**(code **)(*local_res10 + 0x150))(local_res10);
  cVar4 = (**(code **)(*local_res10 + 0x158))();
  lVar20 = local_res10[3];
  local_2c0 = lVar20;
  if ((*(byte *)(lVar20 + 0x71b) & 4) == 0) {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar7 = GetCurrentThreadId();
      bVar2 = false;
      if (DVar7 == DAT_1468c21c0) goto LAB_142653109;
    }
    else {
LAB_142653109:
      bVar2 = true;
    }
    local_2e8 = 0x930;
    if (bVar2) goto LAB_142653114;
  }
  else {
LAB_142653114:
    local_2e8 = 0x210;
  }
  pfVar18 = (float *)(local_2e8 + 0x20 + lVar20);
  local_1d8 = *pfVar18;
  fStack_1d4 = pfVar18[1];
  fStack_1d0 = pfVar18[2];
  fStack_1cc = pfVar18[3];
  pfVar18 = (float *)0x0;
  pfVar10 = pfVar18;
  if (((*(longlong *)(lVar17 + 0x58) != 0) &&
      (pfVar10 = (float *)FUN_142627a50(local_res10), pfVar10 != (float *)0x0)) &&
     (((uint)*pfVar10 & 6) == 0)) {
    pfVar10 = (float *)0x0;
  }
  pbVar11 = (byte *)FUN_142627a50(local_res10);
  local_238 = (float *)0x0;
  local_2c8 = local_res10[3];
  local_230 = *(int *)(local_2c8 + 0x8e0);
  lVar20 = (longlong)local_230;
  _Src = *(void **)(local_2c8 + 0x8d8);
  if (local_230 != 0) {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_238,local_230,0);
    pfVar18 = local_238;
    _guard_xfg_dispatch_icall_nop(local_238,_Src,lVar20 << 2);
  }
  lVar20 = local_2c8;
  iVar15 = *(int *)(local_2c8 + 0x8d0);
  local_2f0 = iVar15;
  cVar5 = UWorld::IsGameWorld(local_2d0);
  local_300 = local_res10;
  if (cVar5 != '\0') {
    bVar2 = false;
    if (((*(byte *)(param_1 + 0x37) & 2) != 0) &&
       (_DAT_1465345b4 < *(float *)(local_2d0 + 0x790) - *(float *)(local_res10[3] + 0x36c))) {
LAB_1426534be:
      lVar17 = local_res10[0x20];
      iVar15 = *(int *)((longlong)local_res10 + 0x124);
      lVar20 = local_res10[0x21];
      iVar8 = (int)local_res10[0x25] + -1;
      lVar16 = (longlong)iVar8;
      if (-1 < iVar8) {
        do {
          uVar9 = (uint)*(ushort *)(lVar20 + lVar16 * 2) * iVar15;
          uVar1 = *(uint *)((ulonglong)uVar9 + 0x68 + lVar17);
          if ((uVar1 >> 0x1a & 1) == 0) {
            *(uint *)((ulonglong)uVar9 + 0x68 + lVar17) = uVar1 | 0x8000000;
          }
          lVar16 = lVar16 + -1;
        } while (-1 < lVar16);
      }
      goto LAB_142653b19;
    }
    if ((*(float *)((longlong)param_1 + 0x1bc) <= 2097152.0 &&
         *(float *)((longlong)param_1 + 0x1bc) != 2097152.0) && (7 < (int)local_res10[0x25])) {
      if (*pbVar11 == 0) {
        lVar20 = local_res10[3];
        lVar16 = *(longlong *)(lVar20 + 0x6f0);
        if ((lVar16 == 0) || ((*(byte *)(lVar16 + 0x98) & 1) == 0)) {
          if ((*(byte *)(lVar20 + 0x71b) & 4) == 0) {
            cVar5 = FUN_1415ad720(&DAT_1468e2448);
            if ((cVar5 == '\0') && (DAT_1468c21ae != '\0')) {
              DVar7 = GetCurrentThreadId();
              bVar2 = false;
              if (DVar7 == DAT_1468c21c0) goto LAB_142653311;
            }
            else {
LAB_142653311:
              bVar2 = true;
            }
            lVar16 = 0x8f0;
            if (bVar2) goto LAB_14265331c;
          }
          else {
LAB_14265331c:
            lVar16 = 0x1d0;
          }
          local_258 = *(float *)(lVar16 + 0xc + lVar20);
          fVar24 = *(float *)(lVar16 + 0x14 + lVar20);
          fStack_24c = local_258 + *(float *)(lVar16 + lVar20);
          in_XMM5 = ZEXT416((uint)fStack_24c);
          local_260 = *(float *)(lVar16 + 8 + lVar20);
          local_258 = *(float *)(lVar16 + lVar20) - local_258;
          fVar46 = *(float *)(lVar16 + 0x10 + lVar20);
          fStack_254 = *(float *)(lVar16 + 4 + lVar20);
          local_270 = fVar24 + local_260;
          local_240 = CONCAT31(local_240._1_3_,1);
          fStack_248 = fVar46 + fStack_254;
          local_260 = local_260 - fVar24;
          fStack_254 = fStack_254 - fVar46;
          local_2a8 = CONCAT44(fStack_254,local_258);
          uStack_2a0 = CONCAT44(fStack_24c,local_260);
          local_298 = CONCAT44(local_270,fStack_248);
          local_290 = local_240;
          fStack_250 = local_260;
          fStack_244 = local_270;
        }
        else {
          puVar12 = (undefined8 *)FBox::TransformBy(lVar16 + 0x9c,&local_258,local_2c0 + local_2e8);
          local_2a8 = *puVar12;
          uStack_2a0 = puVar12[1];
          local_298 = puVar12[2];
          local_290 = *(undefined4 *)(puVar12 + 3);
        }
        bVar2 = true;
        lVar20 = local_2c8;
        if (0 < iVar15) {
          lVar16 = 0;
          pfVar21 = *(float **)(local_2c8 + 0x8c8);
          do {
            fVar24 = (*(float *)((longlong)param_1 + 0x1bc) / pfVar18[lVar16]) * 1.075;
            in_XMM5 = ZEXT416((uint)((float)uStack_2a0 - fVar24));
            if (((((*pfVar21 <= (float)local_2a8 - fVar24) ||
                  (uStack_2a0._4_4_ + fVar24 <= *pfVar21)) ||
                 (pfVar21[1] <= local_2a8._4_4_ - fVar24)) ||
                (((float)local_298 + fVar24 <= pfVar21[1] ||
                 (pfVar21[2] <= (float)uStack_2a0 - fVar24)))) ||
               (local_298._4_4_ + fVar24 <= pfVar21[2])) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              bVar2 = false;
              break;
            }
            lVar16 = lVar16 + 1;
            pfVar21 = pfVar21 + 3;
          } while (lVar16 < iVar15);
        }
      }
      *pbVar11 = *pbVar11 + 1;
      bVar6 = *pbVar11;
      if (0x1e < *pbVar11) {
        bVar6 = 0;
      }
      *pbVar11 = bVar6;
      param_4 = local_res20;
      if (bVar2) goto LAB_1426534be;
    }
    iVar15 = 0;
    pfVar21 = pfVar18;
    local_300 = local_res10;
    if (0 < *(int *)(lVar20 + 0x8d0)) {
      do {
        iVar15 = iVar15 + 1;
        *pfVar21 = *pfVar21 * *pfVar21;
        pfVar21 = pfVar21 + 1;
      } while (iVar15 < *(int *)(lVar20 + 0x8d0));
    }
  }
  lVar20 = local_300[0x20];
  local_330 = *(int *)((longlong)local_300 + 0x124);
  lVar16 = local_300[0x21];
  iVar15 = (int)local_300[0x25] + -1;
  fVar24 = *(float *)((longlong)param_1 + 0x1bc) * *(float *)((longlong)param_1 + 0x1bc);
  local_280 = (longlong)iVar15;
  local_res10 = local_300;
  local_2f8 = lVar16;
  local_2d8 = lVar20;
  local_288 = fVar24;
  if (-1 < iVar15) {
    lVar22 = (longlong)(int)local_318;
    iVar15 = local_330;
    do {
      local_318 = (uint)*(ushort *)(lVar16 + local_280 * 2);
      pfVar21 = (float *)((ulonglong)(local_318 * iVar15) + lVar20);
      fVar46 = pfVar21[0x1a];
      if ((((uint)fVar46 >> 0x1a & 1) == 0) && (((uint)fVar46 & 0x3c000000) == 0)) {
        pfVar19 = (float *)((ulonglong)local_res18 + (longlong)pfVar21);
        if (((uint)fVar46 >> 0x1e & 1) != 0) {
          if (pfVar21[3] < pfVar19[7]) goto LAB_142653afb;
          pfVar21[0x1a] = (float)((uint)fVar46 & 0xbfffffff);
        }
        fVar48 = param_4 * pfVar21[0x11] + pfVar21[6];
        fVar47 = param_4 * pfVar21[0x10] + pfVar21[5];
        fVar46 = param_4 * pfVar21[0xf] + pfVar21[4];
        if ((*(byte *)(*(longlong *)(lVar17 + 0x30) + 100) & 1) == 0) {
          local_328 = *(undefined8 *)pfVar21;
          local_320 = pfVar21[2];
          local_33c = (float)((ulonglong)local_328 >> 0x20);
          local_340 = (float)local_328;
        }
        else {
          pfVar13 = (float *)(local_2c0 + local_2e8);
          fVar29 = *pfVar13;
          fVar41 = pfVar13[1];
          fVar43 = pfVar13[2];
          fVar26 = pfVar13[3];
          in_XMM5._4_4_ = fVar26;
          in_XMM5._0_4_ = fVar26;
          in_XMM5._8_4_ = fVar26;
          in_XMM5._12_4_ = fVar26;
          fVar46 = pfVar13[8] * fVar46;
          fVar47 = pfVar13[9] * fVar47;
          fVar48 = pfVar13[10] * fVar48;
          fVar25 = fVar48 * fVar41 - fVar47 * fVar43;
          fVar27 = fVar46 * fVar43 - fVar48 * fVar29;
          fVar28 = fVar47 * fVar29 - fVar46 * fVar41;
          fVar25 = fVar25 + fVar25;
          fVar27 = fVar27 + fVar27;
          fVar28 = fVar28 + fVar28;
          fVar42 = pfVar13[8] * *pfVar21;
          fVar44 = pfVar13[9] * pfVar21[1];
          fVar45 = pfVar13[10] * pfVar21[2];
          fVar46 = (fVar28 * fVar41 - fVar27 * fVar43) + fVar46 + fVar25 * fVar26 + pfVar13[4];
          fVar47 = (fVar25 * fVar43 - fVar28 * fVar29) + fVar47 + fVar27 * fVar26 + pfVar13[5];
          fVar48 = (fVar27 * fVar29 - fVar25 * fVar41) + fVar48 + fVar28 * fVar26 + pfVar13[6];
          fVar25 = fVar45 * fVar41 - fVar44 * fVar43;
          fVar27 = fVar42 * fVar43 - fVar45 * fVar29;
          fVar28 = fVar44 * fVar29 - fVar42 * fVar41;
          fVar25 = fVar25 + fVar25;
          fVar27 = fVar27 + fVar27;
          fVar28 = fVar28 + fVar28;
          local_340 = (fVar28 * fVar41 - fVar27 * fVar43) + fVar42 + fVar25 * fVar26 + pfVar13[4];
          local_33c = (fVar25 * fVar43 - fVar28 * fVar29) + fVar44 + fVar27 * fVar26 + pfVar13[5];
          local_320 = (fVar27 * fVar29 - fVar25 * fVar41) + fVar45 + fVar28 * fVar26 + pfVar13[6];
          local_328 = CONCAT44(local_33c,local_340);
        }
        local_33c = fVar47 - local_33c;
        local_338 = fVar48 - local_320;
        local_340 = fVar46 - local_340;
        fVar29 = local_33c * local_33c + local_340 * local_340 + local_338 * local_338;
        if (fVar29 != 1.0) {
          if (1e-08 <= fVar29) {
            auVar37 = rsqrtss(ZEXT416((uint)fVar29),ZEXT416((uint)fVar29));
            fVar41 = auVar37._0_4_;
            in_XMM5._4_12_ = auVar37._4_12_;
            fVar41 = fVar41 + fVar41 * (0.5 - fVar29 * 0.5 * fVar41 * fVar41);
            fVar41 = fVar41 + fVar41 * (0.5 - fVar29 * 0.5 * fVar41 * fVar41);
            local_338 = fVar41 * local_338;
            local_33c = fVar41 * local_33c;
            in_XMM5._0_4_ = fVar41 * local_340;
            local_340 = in_XMM5._0_4_;
          }
          else {
            local_340 = DAT_1468b5d90;
            local_338 = DAT_1468b5d98;
            local_33c = DAT_1468b5d94;
          }
        }
        lVar17 = *(longlong *)(lVar17 + 0x48);
        fVar29 = fStack_1d0 * pfVar21[0x19];
        local_310 = 0;
        fVar41 = fStack_1d4 * pfVar21[0x18];
        local_308 = 0.0;
        fVar43 = local_1d8 * pfVar21[0x17];
        if (lVar17 != 0) {
          lVar20 = UTextureRenderTargetCube::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar20 + 0x90) * 8) != lVar20 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) &&
             (*(longlong *)
               (*(longlong *)(lVar17 + 0x40) +
               (longlong)
               *(char *)((longlong)*(int *)((longlong)local_res10 + 0x204) + (longlong)pfVar21) * 8)
              != 0)) {
            lVar20 = UStaticMesh::GetBounds();
            if ((*(byte *)(lVar17 + 0xd4) & 4) == 0) {
              local_270 = *(float *)(lVar20 + 0x14);
              pfVar13 = (float *)&local_278;
              local_278 = *(undefined8 *)(lVar20 + 0xc);
            }
            else {
              local_310._0_4_ = (float)*(undefined8 *)(lVar20 + 0xc);
              pfVar13 = &local_228;
              local_310._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar20 + 0xc) >> 0x20);
              local_228 = (float)local_310 * fVar43;
              local_220 = fVar29 * *(float *)(lVar20 + 0x14);
              fStack_224 = fVar41 * local_310._4_4_;
            }
            local_310 = *(undefined8 *)pfVar13;
            local_308 = pfVar13[2];
          }
        }
        _guard_xfg_dispatch_icall_nop(local_168,0,0x90);
        local_15c = 1.0;
        local_13c = 0;
        local_134 = 0.0;
        fVar26 = 1.0 / *(float *)(param_1 + 0x2e);
        local_2b0 = fVar29 * local_338 * fVar26 + fVar48;
        local_2b4 = fVar41 * local_33c * fVar26 + fVar47;
        local_2b8 = fVar26 * local_340 * fVar43 + fVar46;
        cVar5 = UWorld::IsGameWorld(local_2d0);
        if ((cVar5 != '\x01') ||
           (2097152.0 < *(float *)((longlong)param_1 + 0x1bc) ||
            *(float *)((longlong)param_1 + 0x1bc) == 2097152.0)) {
LAB_142653bba:
          puVar12 = &local_310;
          uVar14 = 0;
          if ((*(byte *)(param_1 + 0x37) & 4) != 0) {
            uVar14 = local_1e0;
          }
          cVar5 = (**(code **)(*param_1 + 0x380))
                            (param_1,local_res10,pfVar21,local_168,uVar14,&local_2b8,&local_328,
                             puVar12);
          lVar16 = local_2f8;
          lVar20 = local_2d8;
          lVar17 = local_2e0;
          iVar15 = local_330;
          if (cVar5 != '\0') {
            bVar3 = true;
            bVar2 = false;
            lVar17 = FWeakObjectPtr::Get(local_fc);
            if (lVar17 != 0) {
              if (((*(byte *)((longlong)param_1 + 0x174) & 1) == 0) ||
                 (lVar17 = FWeakObjectPtr::Get(local_fc), lVar17 == 0)) {
LAB_142653c8b:
                bVar3 = true;
              }
              else {
                lVar20 = FUN_1429d7ab0();
                if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x90) < *(int *)(lVar20 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar20 + 0x90) * 8) != lVar20 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (!bVar2) goto LAB_142653c8b;
                bVar3 = false;
              }
              if ((*(byte *)(param_1 + 0x26) & 2) != 0) {
                lVar17 = FUN_142a29ad0();
                lVar20 = FWeakObjectPtr::Get(local_fc);
                if ((*(int *)(*(longlong *)(lVar20 + 0x10) + 0x90) < *(int *)(lVar17 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar20 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar17 + 0x90) * 8) != lVar17 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (bVar2) {
                  bVar2 = true;
                  goto LAB_142653ce0;
                }
              }
              bVar2 = false;
            }
LAB_142653ce0:
            lVar17 = local_2e0;
            fVar26 = fRam0000000146b06e1c;
            fVar43 = fRam0000000146b06e18;
            fVar41 = fRam0000000146b06e14;
            fVar29 = _DAT_146b06e10;
            lVar16 = local_2f8;
            lVar20 = local_2d8;
            iVar15 = local_330;
            if (!bVar2) {
              if ((bVar3) && ((*(byte *)((longlong)param_1 + 0x174) & 2) != 0)) {
                if ((0.0001 < ABS((float)local_13c)) ||
                   ((0.0001 < ABS(local_13c._4_4_) || (0.0001 < ABS(local_134))))) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((!bVar2) && (ABS(local_134) + *(float *)(param_1 + 0x2f) < 1.0)) {
                  bVar3 = false;
                }
              }
              local_1b8 = local_168;
              local_1a8 = &local_res10;
              local_1c8 = param_1;
              local_1c0 = pfVar19;
              local_1b0 = pfVar21;
              if ((int)pfVar19[6] < 1) {
                *(undefined8 *)(pfVar21 + 4) = local_154;
                pfVar21[6] = local_14c;
                if ((*(byte *)(*(longlong *)(local_2e0 + 0x30) + 100) & 1) != 0) {
                  pfVar18 = (float *)(local_2c0 + local_2e8);
                  fVar42 = _DAT_146b06e10 * *pfVar18;
                  fVar44 = fRam0000000146b06e14 * pfVar18[1];
                  fVar45 = fRam0000000146b06e18 * pfVar18[2];
                  fVar30 = fRam0000000146b06e1c * pfVar18[3];
                  auVar37 = *(undefined1 (*) [16])(local_2c0 + 0x20 + local_2e8);
                  fVar46 = auVar37._0_4_;
                  fVar47 = auVar37._4_4_;
                  fVar48 = auVar37._8_4_;
                  pfVar18 = (float *)(local_2c0 + 0x10 + local_2e8);
                  auVar38 = rcpps(in_XMM5,auVar37);
                  fVar31 = (float)((uint)(pfVar21[4] - *pfVar18) & _DAT_146b06de0);
                  fVar32 = (float)((uint)(pfVar21[5] - pfVar18[1]) & uRam0000000146b06de4);
                  fVar33 = (float)((uint)(pfVar21[6] - pfVar18[2]) & uRam0000000146b06de8);
                  fVar29 = fVar33 * fVar44 - fVar32 * fVar45;
                  fVar41 = fVar31 * fVar45 - fVar33 * fVar42;
                  fVar43 = fVar32 * fVar42 - fVar31 * fVar44;
                  fVar26 = auVar38._0_4_;
                  fVar25 = auVar38._4_4_;
                  fVar27 = auVar38._8_4_;
                  fVar28 = auVar38._12_4_;
                  fVar29 = fVar29 + fVar29;
                  fVar41 = fVar41 + fVar41;
                  fVar43 = fVar43 + fVar43;
                  fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar46;
                  fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar47;
                  fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar48;
                  fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * auVar37._12_4_;
                  in_XMM5._0_4_ = (fVar26 + fVar26) - fVar26 * fVar26 * fVar46;
                  in_XMM5._4_4_ = (fVar25 + fVar25) - fVar25 * fVar25 * fVar47;
                  in_XMM5._8_4_ = (fVar27 + fVar27) - fVar27 * fVar27 * fVar48;
                  in_XMM5._12_4_ = (fVar28 + fVar28) - fVar28 * fVar28 * auVar37._12_4_;
                  local_174 = ((fVar41 * fVar42 - fVar29 * fVar44) + fVar30 * fVar43 + fVar33) *
                              (float)(-(uint)((float)((uint)fVar48 & uRam0000000146b06e08) <=
                                             fRam0000000146b06df8) & (uint)in_XMM5._8_4_ ^
                                     (uint)in_XMM5._8_4_);
                  *(ulonglong *)(pfVar21 + 4) =
                       CONCAT44(((fVar29 * fVar45 - fVar43 * fVar42) + fVar30 * fVar41 + fVar32) *
                                (float)(-(uint)((float)((uint)fVar47 & uRam0000000146b06e04) <=
                                               fRam0000000146b06df4) & (uint)in_XMM5._4_4_ ^
                                       (uint)in_XMM5._4_4_),
                                ((fVar43 * fVar44 - fVar41 * fVar45) + fVar30 * fVar29 + fVar31) *
                                (float)(-(uint)((float)((uint)fVar46 & _DAT_146b06e00) <=
                                               _DAT_146b06df0) & (uint)in_XMM5._0_4_ ^
                                       (uint)in_XMM5._0_4_));
                  pfVar21[6] = local_174;
                }
                *(undefined8 *)(pfVar21 + 8) = *(undefined8 *)(pfVar21 + 4);
                pfVar21[10] = pfVar21[6];
                switch((char)param_1[0x22]) {
                case '\0':
                  if ((pfVar10 != (float *)0x0) && (((uint)*pfVar10 & 2) != 0)) {
                    (**(code **)(**(longlong **)(local_2e0 + 0x58) + 0x388))
                              (*(longlong **)(local_2e0 + 0x58),local_res10,pfVar10,pfVar21);
                  }
                  *(undefined2 *)(local_2f8 + local_280 * 2) =
                       *(undefined2 *)(local_2f8 + -2 + (longlong)(int)local_300[0x25] * 2);
                  *(short *)(local_2f8 + -2 + (longlong)(int)local_300[0x25] * 2) = (short)local_318
                  ;
                  *(int *)(local_300 + 0x25) = (int)local_300[0x25] + -1;
                  break;
                case '\x01':
                  pfVar21[0x1a] = (float)((uint)pfVar21[0x1a] | 0x4000000);
                  break;
                case '\x02':
                  pfVar21[0x1a] = (float)((uint)pfVar21[0x1a] | 0x8000000);
                  break;
                case '\x03':
                  pfVar21[0x1a] = (float)((uint)pfVar21[0x1a] | 0x10000000);
                  break;
                case '\x04':
                  pfVar21[0x1a] = (float)((uint)pfVar21[0x1a] | 0x20000000);
                  break;
                case '\x05':
                  pfVar21[0x1a] = (float)((uint)pfVar21[0x1a] | 0x30000000);
                }
                if ((pfVar10 != (float *)0x0) && (((uint)*pfVar10 & 4) != 0)) {
                  (**(code **)(**(longlong **)(lVar17 + 0x58) + 0x390))
                            (*(longlong **)(lVar17 + 0x58),local_res10,pfVar10,pfVar19,local_168,
                             pfVar21,&local_340,(ulonglong)puVar12 & 0xffffffffffffff00);
                }
              }
              else {
                if ((*(byte *)(*(longlong *)(local_2e0 + 0x30) + 100) & 1) == 0) {
                  local_268 = *(undefined8 *)(pfVar21 + 0xf);
                  local_260 = pfVar21[0x11];
                  fVar29 = pfVar21[0xb] * (float)local_13c;
                  fVar43 = pfVar21[0xc] * local_13c._4_4_;
                  fVar41 = pfVar21[0xd] * local_134;
                  fVar29 = fVar43 + fVar43 + fVar29 + fVar29 + fVar41 + fVar41;
                  local_180 = (pfVar21[0xd] - fVar29 * local_134) * pfVar19[2];
                  *(ulonglong *)(pfVar21 + 0xb) =
                       CONCAT44((pfVar21[0xc] - fVar29 * local_13c._4_4_) * pfVar19[1],
                                (pfVar21[0xb] - fVar29 * (float)local_13c) * *pfVar19);
                  pfVar21[0xd] = local_180;
                  pfVar21[0x12] = pfVar21[0x12] * pfVar19[3];
                  if ((cVar4 != '\0') && (0 < lVar22)) {
                    *(float *)((longlong)pfVar21 + lVar22 + 0x3c) =
                         pfVar19[3] * *(float *)((longlong)pfVar21 + lVar22 + 0x3c);
                    *(float *)((longlong)pfVar21 + lVar22 + 0x40) =
                         pfVar19[4] * *(float *)((longlong)pfVar21 + lVar22 + 0x40);
                    *(float *)((longlong)pfVar21 + lVar22 + 0x44) =
                         pfVar19[5] * *(float *)((longlong)pfVar21 + lVar22 + 0x44);
                  }
                  fVar29 = SQRT((fVar47 - local_328._4_4_) * (fVar47 - local_328._4_4_) +
                                (fVar46 - (float)local_328) * (fVar46 - (float)local_328) +
                                (fVar48 - local_320) * (fVar48 - local_320));
                  fVar47 = local_33c * local_13c._4_4_ + local_33c * local_13c._4_4_ +
                           local_340 * (float)local_13c + local_340 * (float)local_13c +
                           local_338 * local_134 + local_338 * local_134;
                  fVar46 = 1.0 - local_15c;
                  fVar48 = local_338 - fVar47 * local_134;
                  in_XMM5 = ZEXT416((uint)fVar48);
                  local_1f8 = fVar29 * (local_340 - fVar47 * (float)local_13c) * *pfVar19;
                  local_1f4 = fVar29 * (local_33c - fVar47 * local_13c._4_4_) * pfVar19[1];
                  local_1f0 = fVar29 * fVar48 * pfVar19[2];
                  *(ulonglong *)(pfVar21 + 0xf) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                  pfVar21[0x11] = DAT_1468b5d98;
                  fVar47 = fVar46 * local_1f8 + pfVar21[4];
                  pfVar21[5] = fVar46 * local_1f4 + pfVar21[5];
                  pfVar21[6] = fVar46 * local_1f0 + pfVar21[6];
                  uVar23 = (undefined4)((ulonglong)*(undefined8 *)(pfVar21 + 4) >> 0x20);
                  *(ulonglong *)(pfVar21 + 4) = CONCAT44(uVar23,fVar47);
                  *(ulonglong *)(pfVar21 + 8) = CONCAT44(uVar23,fVar47);
                  pfVar21[10] = pfVar21[6];
                  FUN_1426408d0(&local_1c8,&local_1f8,&local_268);
                }
                else {
                  pfVar18 = (float *)(local_2c0 + local_2e8);
                  fVar28 = *pfVar18;
                  fVar42 = pfVar18[1];
                  fVar44 = pfVar18[2];
                  fVar45 = pfVar18[3];
                  auVar37 = *(undefined1 (*) [16])(pfVar18 + 8);
                  fVar24 = auVar37._0_4_;
                  fVar25 = auVar37._4_4_;
                  fVar27 = auVar37._8_4_;
                  fVar33 = pfVar21[0xf] * fVar24;
                  fVar34 = pfVar21[0x10] * fVar25;
                  fVar35 = pfVar21[0x11] * fVar27;
                  fVar30 = fVar35 * fVar42 - fVar34 * fVar44;
                  fVar31 = fVar33 * fVar44 - fVar35 * fVar28;
                  fVar32 = fVar34 * fVar28 - fVar33 * fVar42;
                  fVar30 = fVar30 + fVar30;
                  fVar31 = fVar31 + fVar31;
                  fVar32 = fVar32 + fVar32;
                  local_218 = (fVar32 * fVar42 - fVar31 * fVar44) + fVar30 * fVar45 + fVar33;
                  local_214 = (fVar30 * fVar44 - fVar32 * fVar28) + fVar31 * fVar45 + fVar34;
                  local_210 = (fVar31 * fVar28 - fVar30 * fVar42) + fVar32 * fVar45 + fVar35;
                  fVar33 = pfVar21[0xb] * fVar24;
                  fVar34 = pfVar21[0xc] * fVar25;
                  fVar35 = pfVar21[0xd] * fVar27;
                  fVar30 = fVar35 * fVar42 - fVar34 * fVar44;
                  fVar31 = fVar33 * fVar44 - fVar35 * fVar28;
                  fVar32 = fVar34 * fVar28 - fVar33 * fVar42;
                  fVar30 = fVar30 + fVar30;
                  fVar31 = fVar31 + fVar31;
                  fVar32 = fVar32 + fVar32;
                  fVar33 = (fVar32 * fVar42 - fVar31 * fVar44) + fVar45 * fVar30 + fVar33;
                  fVar34 = (fVar30 * fVar44 - fVar32 * fVar28) + fVar45 * fVar31 + fVar34;
                  fVar32 = (fVar31 * fVar28 - fVar30 * fVar42) + fVar45 * fVar32 + fVar35;
                  auVar38._4_4_ = fVar34;
                  auVar38._0_4_ = fVar34;
                  auVar38._8_4_ = fVar34;
                  auVar38._12_4_ = fVar34;
                  fVar31 = fVar33 * (float)local_13c;
                  fVar30 = fVar32 * local_134;
                  local_2a8 = 0;
                  uStack_2a0 = 0;
                  fVar30 = fVar34 * local_13c._4_4_ + fVar34 * local_13c._4_4_ + fVar31 + fVar31 +
                           fVar30 + fVar30;
                  fVar28 = fVar28 * _DAT_146b06e10;
                  fVar42 = fVar42 * fRam0000000146b06e14;
                  fVar44 = fVar44 * fRam0000000146b06e18;
                  fVar45 = fVar45 * fRam0000000146b06e1c;
                  local_258 = _DAT_146b06e10;
                  fStack_254 = fRam0000000146b06e14;
                  fStack_250 = fRam0000000146b06e18;
                  fStack_24c = fRam0000000146b06e1c;
                  auVar36._4_12_ = auVar38._4_12_;
                  fVar40 = (fVar33 - (float)local_13c * fVar30) * *pfVar19;
                  fVar33 = (fVar32 - local_134 * fVar30) * pfVar19[2];
                  auVar36._0_4_ = (fVar34 - local_13c._4_4_ * fVar30) * pfVar19[1];
                  auVar37 = rcpps(auVar36,auVar37);
                  fVar30 = fVar33 * fVar42 - auVar36._0_4_ * fVar44;
                  fVar31 = fVar40 * fVar44 - fVar33 * fVar28;
                  fVar32 = auVar36._0_4_ * fVar28 - fVar40 * fVar42;
                  fVar34 = auVar37._0_4_;
                  fVar35 = auVar37._4_4_;
                  fVar39 = auVar37._8_4_;
                  fVar30 = fVar30 + fVar30;
                  fVar31 = fVar31 + fVar31;
                  fVar32 = fVar32 + fVar32;
                  fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar24;
                  fVar35 = (fVar35 + fVar35) - fVar35 * fVar35 * fVar25;
                  fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fVar27;
                  fVar34 = (fVar34 + fVar34) - fVar34 * fVar34 * fVar24;
                  fVar35 = (fVar35 + fVar35) - fVar35 * fVar35 * fVar25;
                  fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fVar27;
                  local_198 = ((fVar31 * fVar28 - fVar30 * fVar42) + fVar45 * fVar32 + fVar33) *
                              (float)(-(uint)((float)((uint)fVar27 & uRam0000000146b06e08) <=
                                             fRam0000000146b06df8) & (uint)fVar39 ^ (uint)fVar39);
                  *(ulonglong *)(pfVar21 + 0xb) =
                       CONCAT44(((fVar30 * fVar44 - fVar32 * fVar28) +
                                fVar45 * fVar31 + auVar36._0_4_) *
                                (float)(-(uint)((float)((uint)fVar25 & uRam0000000146b06e04) <=
                                               fRam0000000146b06df4) & (uint)fVar35 ^ (uint)fVar35),
                                ((fVar32 * fVar42 - fVar31 * fVar44) + fVar45 * fVar30 + fVar40) *
                                (float)(-(uint)((float)((uint)fVar24 & _DAT_146b06e00) <=
                                               _DAT_146b06df0) & (uint)fVar34 ^ (uint)fVar34));
                  pfVar21[0xd] = local_198;
                  pfVar21[0x12] = pfVar21[0x12] * pfVar19[3];
                  if ((cVar4 != '\0') && (0 < lVar22)) {
                    *(float *)((longlong)pfVar21 + lVar22 + 0x3c) =
                         *(float *)((longlong)pfVar21 + lVar22 + 0x3c) * pfVar19[3];
                    *(float *)((longlong)pfVar21 + lVar22 + 0x40) =
                         pfVar19[4] * *(float *)((longlong)pfVar21 + lVar22 + 0x40);
                    *(float *)((longlong)pfVar21 + lVar22 + 0x44) =
                         pfVar19[5] * *(float *)((longlong)pfVar21 + lVar22 + 0x44);
                  }
                  fVar27 = SQRT((fVar47 - local_328._4_4_) * (fVar47 - local_328._4_4_) +
                                (fVar46 - (float)local_328) * (fVar46 - (float)local_328) +
                                (fVar48 - local_320) * (fVar48 - local_320));
                  fVar24 = local_33c * local_13c._4_4_ + local_33c * local_13c._4_4_ +
                           local_340 * (float)local_13c + local_340 * (float)local_13c +
                           local_338 * local_134 + local_338 * local_134;
                  fVar25 = local_338 - fVar24 * local_134;
                  local_208 = fVar27 * (local_340 - fVar24 * (float)local_13c) * *pfVar19;
                  local_204 = fVar27 * (local_33c - fVar24 * local_13c._4_4_) * pfVar19[1];
                  local_200 = fVar27 * fVar25 * pfVar19[2];
                  *(ulonglong *)(pfVar21 + 0xf) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                  fVar24 = 1.0 - local_15c;
                  pfVar21[0x11] = DAT_1468b5d98;
                  fVar29 = fVar29 * *pfVar18;
                  fVar41 = fVar41 * pfVar18[1];
                  fVar43 = fVar43 * pfVar18[2];
                  fVar26 = fVar26 * pfVar18[3];
                  fVar28 = (float)((uint)((fVar24 * local_208 + fVar46) - pfVar18[4]) &
                                  _DAT_146b06de0);
                  fVar42 = (float)((uint)((local_204 * fVar24 + fVar47) - pfVar18[5]) &
                                  uRam0000000146b06de4);
                  fVar44 = (float)((uint)((local_200 * fVar24 + fVar48) - pfVar18[6]) &
                                  uRam0000000146b06de8);
                  fVar48 = (float)((uint)(0.0 - pfVar18[7]) & uRam0000000146b06dec);
                  fVar24 = fVar44 * fVar41 - fVar42 * fVar43;
                  fVar46 = fVar28 * fVar43 - fVar44 * fVar29;
                  fVar47 = fVar42 * fVar29 - fVar28 * fVar41;
                  fVar48 = fVar48 * fVar26 - fVar48 * fVar26;
                  in_XMM5._0_4_ = fVar24 + fVar24;
                  in_XMM5._4_4_ = fVar46 + fVar46;
                  in_XMM5._8_4_ = fVar47 + fVar47;
                  in_XMM5._12_4_ = fVar48 + fVar48;
                  auVar37 = *(undefined1 (*) [16])(pfVar18 + 8);
                  fVar24 = auVar37._0_4_;
                  fVar46 = auVar37._4_4_;
                  fVar47 = auVar37._8_4_;
                  auVar37 = rcpps(ZEXT416((uint)fVar25),auVar37);
                  fVar48 = auVar37._0_4_;
                  fVar25 = auVar37._4_4_;
                  fVar27 = auVar37._8_4_;
                  fVar48 = (fVar48 + fVar48) - fVar48 * fVar48 * fVar24;
                  fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar46;
                  fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar47;
                  fVar48 = (fVar48 + fVar48) - fVar48 * fVar48 * fVar24;
                  fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * fVar46;
                  fVar27 = (fVar27 + fVar27) - fVar27 * fVar27 * fVar47;
                  fVar24 = ((in_XMM5._8_4_ * fVar41 - in_XMM5._4_4_ * fVar43) +
                           fVar26 * in_XMM5._0_4_ + fVar28) *
                           (float)(-(uint)((float)((uint)fVar24 & _DAT_146b06e00) <= _DAT_146b06df0)
                                   & (uint)fVar48 ^ (uint)fVar48);
                  fVar46 = ((in_XMM5._0_4_ * fVar43 - in_XMM5._8_4_ * fVar29) +
                           fVar26 * in_XMM5._4_4_ + fVar42) *
                           (float)(-(uint)((float)((uint)fVar46 & uRam0000000146b06e04) <=
                                          fRam0000000146b06df4) & (uint)fVar25 ^ (uint)fVar25);
                  local_18c = ((in_XMM5._4_4_ * fVar29 - in_XMM5._0_4_ * fVar41) +
                              fVar26 * in_XMM5._8_4_ + fVar44) *
                              (float)(-(uint)((float)((uint)fVar47 & uRam0000000146b06e08) <=
                                             fRam0000000146b06df8) & (uint)fVar27 ^ (uint)fVar27);
                  *(ulonglong *)(pfVar21 + 4) = CONCAT44(fVar46,fVar24);
                  *(ulonglong *)(pfVar21 + 8) = CONCAT44(fVar46,fVar24);
                  pfVar21[6] = local_18c;
                  pfVar21[10] = local_18c;
                  FUN_1426408d0(&local_1c8,&local_208,&local_218);
                  fVar24 = local_288;
                }
                if ((pfVar10 != (float *)0x0) && (((uint)*pfVar10 & 4) != 0)) {
                  (**(code **)(**(longlong **)(lVar17 + 0x58) + 0x390))
                            (*(longlong **)(lVar17 + 0x58),local_res10,pfVar10,pfVar19,local_168,
                             pfVar21,&local_340,(ulonglong)puVar12 & 0xffffffffffffff00);
                }
              }
              pfVar21[0x1a] = (float)((uint)pfVar21[0x1a] | 0x80000000);
              lVar16 = local_2f8;
              lVar20 = local_2d8;
              iVar15 = local_330;
              if (bVar3) {
                pfVar19[6] = (float)((int)pfVar19[6] + -1);
              }
            }
          }
        }
        else {
          lVar17 = 0;
          if (0 < local_2f0) {
            in_XMM5 = ZEXT416((uint)local_2b8);
            pfVar13 = *(float **)(local_2c8 + 0x8c8);
            do {
              if (((pfVar13[1] - local_2b4) * (pfVar13[1] - local_2b4) +
                   (*pfVar13 - local_2b8) * (*pfVar13 - local_2b8) +
                  (pfVar13[2] - local_2b0) * (pfVar13[2] - local_2b0)) * pfVar18[lVar17] < fVar24)
              goto LAB_142653bba;
              lVar17 = lVar17 + 1;
              pfVar13 = pfVar13 + 3;
            } while (lVar17 < local_2f0);
          }
          pfVar21[0x1a] = (float)((uint)pfVar21[0x1a] | 0x8000000);
          lVar16 = local_2f8;
          lVar20 = local_2d8;
          lVar17 = local_2e0;
          iVar15 = local_330;
        }
      }
LAB_142653afb:
      local_280 = local_280 + -1;
      pfVar18 = local_238;
      param_4 = local_res20;
    } while (-1 < local_280);
  }
LAB_142653b19:
  if (local_238 != (float *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142654780 FUN_142654780 body=778 status=ok
// SIG undefined FUN_142654780(void)

void FUN_142654780(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ushort *puVar10;
  int iVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 local_68 [64];
  
  if ((((param_2 != 0) && (0 < *(int *)(param_2 + 0x128))) && (*(longlong *)(param_2 + 0x100) != 0))
     && (*(longlong *)(param_2 + 0x108) != 0)) {
    lVar6 = FRawDistributionFloat::GetFastRawDistribution(param_1 + 0x38);
    lVar7 = FRawDistributionFloat::GetFastRawDistribution(param_1 + 0x88);
    iVar1 = *(int *)(param_2 + 0x124);
    lVar3 = *(longlong *)(param_2 + 0x100);
    if ((lVar6 == 0) || (lVar7 == 0)) {
      iVar11 = *(int *)(param_2 + 0x128) + -1;
      if (-1 < iVar11) {
        puVar10 = (ushort *)(*(longlong *)(param_2 + 0x108) + (longlong)iVar11 * 2);
        do {
          lVar6 = (ulonglong)((uint)*puVar10 * iVar1) + lVar3;
          if ((*(uint *)(lVar6 + 0x68) & 0x4000000) == 0) {
            if ((*(byte *)(param_1 + 0xc0) & 2) == 0) {
              fVar13 = *(float *)(lVar6 + 0xc);
            }
            else if (*(int *)(param_2 + 0x54) == 0) {
              if (*(int *)(param_2 + 0x128) < 2) {
                fVar13 = 0.0;
              }
              else {
                fVar13 = (float)iVar11 / ((float)*(int *)(param_2 + 0x128) - 1.0);
              }
            }
            else {
              fVar13 = *(float *)(*(int *)(param_2 + 0x54) + lVar6);
            }
            puVar8 = (undefined4 *)
                     FUN_1424118e0(param_1 + 0x38,local_68,fVar13,*(undefined8 *)(param_2 + 0x18),0,
                                   0);
            uVar4 = *puVar8;
            uVar5 = puVar8[1];
            uVar2 = puVar8[2];
            uVar12 = FUN_1424116d0(param_1 + 0x88,fVar13,*(undefined8 *)(param_2 + 0x18),0);
            *(undefined4 *)(lVar6 + 0x70) = uVar5;
            *(undefined4 *)(lVar6 + 0x6c) = uVar4;
            *(undefined4 *)(lVar6 + 0x74) = uVar2;
            *(undefined4 *)(lVar6 + 0x78) = uVar12;
          }
          puVar10 = puVar10 + -1;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
    }
    else {
      iVar11 = *(int *)(param_2 + 0x128) + -1;
      if (-1 < iVar11) {
        puVar10 = (ushort *)(*(longlong *)(param_2 + 0x108) + (longlong)iVar11 * 2);
        do {
          lVar9 = (ulonglong)((uint)*puVar10 * iVar1) + lVar3;
          if ((*(uint *)(lVar9 + 0x68) & 0x4000000) == 0) {
            if ((*(byte *)(param_1 + 0xc0) & 2) == 0) {
              fVar13 = *(float *)(lVar9 + 0xc);
            }
            else if (*(int *)(param_2 + 0x54) == 0) {
              if (*(int *)(param_2 + 0x128) < 2) {
                fVar13 = 0.0;
              }
              else {
                fVar13 = (float)iVar11 / ((float)*(int *)(param_2 + 0x128) - 1.0);
              }
            }
            else {
              fVar13 = *(float *)(*(int *)(param_2 + 0x54) + lVar9);
            }
            FRawDistribution::GetValue3None(lVar6,fVar13,lVar9 + 0x6c);
            FRawDistribution::GetValue1None(lVar7,fVar13,lVar9 + 0x78);
          }
          puVar10 = puVar10 + -1;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
    }
  }
  return;
}



// FUNCTION 142654a90 FUN_142654a90 body=1444 status=ok
// SIG undefined FUN_142654a90(void)

void FUN_142654a90(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  uint uVar8;
  ushort *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float local_78;
  float local_74;
  float local_70;
  undefined1 local_68 [64];
  
  lVar5 = FRawDistributionFloat::GetFastRawDistribution(param_1 + 0x38);
  lVar6 = FRawDistributionFloat::GetFastRawDistribution(param_1 + 0x88);
  if ((lVar5 == 0) || (lVar6 == 0)) {
    lVar5 = *(longlong *)(param_2 + 0x100);
    iVar11 = *(int *)(param_2 + 0x128) + -1;
    iVar3 = *(int *)(param_2 + 0x124);
    if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
      if (-1 < iVar11) {
        puVar9 = (ushort *)(*(longlong *)(param_2 + 0x108) + (longlong)iVar11 * 2);
        do {
          lVar6 = (ulonglong)((uint)*puVar9 * iVar3) + lVar5;
          if ((*(uint *)(lVar6 + 0x68) & 0x4000000) == 0) {
            if ((*(byte *)(param_1 + 0xc0) & 2) == 0) {
              fVar14 = *(float *)(lVar6 + 0xc);
            }
            else if (*(int *)(param_2 + 0x54) == 0) {
              if (*(int *)(param_2 + 0x128) < 2) {
                fVar14 = 0.0;
              }
              else {
                fVar14 = (float)iVar11 / ((float)*(int *)(param_2 + 0x128) - 1.0);
              }
            }
            else {
              fVar14 = *(float *)(*(int *)(param_2 + 0x54) + lVar6);
            }
            pfVar7 = (float *)FUN_1424118e0(param_1 + 0x38,local_68,fVar14,
                                            *(undefined8 *)(param_2 + 0x18),0,0);
            fVar1 = *pfVar7;
            fVar2 = pfVar7[1];
            local_70 = pfVar7[2];
            fVar14 = (float)FUN_1424116d0(param_1 + 0x88,fVar14,*(undefined8 *)(param_2 + 0x18),0);
            *(float *)(lVar6 + 0x6c) = fVar1 * *(float *)(lVar6 + 0x6c);
            *(float *)(lVar6 + 0x70) = fVar2 * *(float *)(lVar6 + 0x70);
            *(float *)(lVar6 + 0x78) = fVar14 * *(float *)(lVar6 + 0x78);
            *(float *)(lVar6 + 0x74) = local_70 * *(float *)(lVar6 + 0x74);
          }
          puVar9 = puVar9 + -1;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
    }
    else if (-1 < iVar11) {
      puVar9 = (ushort *)(*(longlong *)(param_2 + 0x108) + (longlong)iVar11 * 2);
      do {
        lVar6 = (ulonglong)((uint)*puVar9 * iVar3) + lVar5;
        if ((*(uint *)(lVar6 + 0x68) & 0x4000000) == 0) {
          if ((*(byte *)(param_1 + 0xc0) & 2) == 0) {
            fVar14 = *(float *)(param_2 + 0x13c);
          }
          else if (*(int *)(param_2 + 0x54) == 0) {
            if (*(int *)(param_2 + 0x128) < 2) {
              fVar14 = 0.0;
            }
            else {
              fVar14 = (float)iVar11 / ((float)*(int *)(param_2 + 0x128) - 1.0);
            }
          }
          else {
            fVar14 = *(float *)(*(int *)(param_2 + 0x54) + lVar6);
          }
          pfVar7 = (float *)FUN_1424118e0(param_1 + 0x38,local_68,fVar14,
                                          *(undefined8 *)(param_2 + 0x18),0,0);
          fVar1 = *pfVar7;
          fVar2 = pfVar7[1];
          local_70 = pfVar7[2];
          fVar14 = (float)FUN_1424116d0(param_1 + 0x88,fVar14,*(undefined8 *)(param_2 + 0x18),0);
          *(float *)(lVar6 + 0x6c) = fVar1 * *(float *)(lVar6 + 0x6c);
          *(float *)(lVar6 + 0x70) = fVar2 * *(float *)(lVar6 + 0x70);
          *(float *)(lVar6 + 0x78) = fVar14 * *(float *)(lVar6 + 0x78);
          *(float *)(lVar6 + 0x74) = local_70 * *(float *)(lVar6 + 0x74);
        }
        puVar9 = puVar9 + -1;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x124);
    iVar11 = *(int *)(param_2 + 0x128) + -1;
    lVar4 = *(longlong *)(param_2 + 0x100);
    if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
      if (-1 < iVar11) {
        puVar9 = (ushort *)(*(longlong *)(param_2 + 0x108) + (longlong)iVar11 * 2);
        do {
          lVar10 = (ulonglong)((uint)*puVar9 * iVar3) + lVar4;
          if ((*(uint *)(lVar10 + 0x68) & 0x4000000) == 0) {
            if ((*(byte *)(param_1 + 0xc0) & 2) == 0) {
              fVar14 = *(float *)(lVar10 + 0xc);
            }
            else if (*(int *)(param_2 + 0x54) == 0) {
              if (*(int *)(param_2 + 0x128) < 2) {
                fVar14 = 0.0;
              }
              else {
                fVar14 = (float)iVar11 / ((float)*(int *)(param_2 + 0x128) - 1.0);
              }
            }
            else {
              fVar14 = *(float *)(*(int *)(param_2 + 0x54) + lVar10);
            }
            FRawDistribution::GetValue3None(lVar5,fVar14,&local_78);
            fVar14 = (fVar14 - *(float *)(lVar6 + 8)) * *(float *)(lVar6 + 4);
            if (fVar14 < 0.0) {
              fVar14 = 0.0;
            }
            uVar13 = *(byte *)(lVar6 + 1) - 1;
            uVar12 = (uint)fVar14;
            uVar8 = uVar13;
            if (uVar12 + 1 <= uVar13) {
              uVar8 = uVar12 + 1;
            }
            if (uVar12 <= uVar13) {
              uVar13 = uVar12;
            }
            fVar1 = *(float *)(*(longlong *)(lVar6 + 0x10) +
                              (longlong)(int)(uVar8 * *(byte *)(lVar6 + 2)) * 4);
            fVar2 = *(float *)(*(longlong *)(lVar6 + 0x10) +
                              (longlong)(int)(uVar13 * *(byte *)(lVar6 + 2)) * 4);
            *(float *)(lVar10 + 0x6c) = local_78 * *(float *)(lVar10 + 0x6c);
            *(float *)(lVar10 + 0x70) = local_74 * *(float *)(lVar10 + 0x70);
            *(float *)(lVar10 + 0x74) = local_70 * *(float *)(lVar10 + 0x74);
            *(float *)(lVar10 + 0x78) =
                 ((fVar14 - (float)(int)fVar14) * (fVar1 - fVar2) + fVar2) *
                 *(float *)(lVar10 + 0x78);
          }
          puVar9 = puVar9 + -1;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
    }
    else if (-1 < iVar11) {
      puVar9 = (ushort *)(*(longlong *)(param_2 + 0x108) + (longlong)iVar11 * 2);
      do {
        lVar10 = (ulonglong)((uint)*puVar9 * iVar3) + lVar4;
        if ((*(uint *)(lVar10 + 0x68) & 0x4000000) == 0) {
          if ((*(byte *)(param_1 + 0xc0) & 2) == 0) {
            fVar14 = *(float *)(param_2 + 0x13c);
          }
          else if (*(int *)(param_2 + 0x54) == 0) {
            if (*(int *)(param_2 + 0x128) < 2) {
              fVar14 = 0.0;
            }
            else {
              fVar14 = (float)iVar11 / ((float)*(int *)(param_2 + 0x128) - 1.0);
            }
          }
          else {
            fVar14 = *(float *)(*(int *)(param_2 + 0x54) + lVar10);
          }
          FRawDistribution::GetValue3None(lVar5,fVar14,&local_78);
          fVar14 = (fVar14 - *(float *)(lVar6 + 8)) * *(float *)(lVar6 + 4);
          if (fVar14 < 0.0) {
            fVar14 = 0.0;
          }
          uVar13 = *(byte *)(lVar6 + 1) - 1;
          uVar12 = (uint)fVar14;
          uVar8 = uVar13;
          if (uVar12 + 1 <= uVar13) {
            uVar8 = uVar12 + 1;
          }
          if (uVar12 <= uVar13) {
            uVar13 = uVar12;
          }
          fVar1 = *(float *)(*(longlong *)(lVar6 + 0x10) +
                            (longlong)(int)(uVar8 * *(byte *)(lVar6 + 2)) * 4);
          fVar2 = *(float *)(*(longlong *)(lVar6 + 0x10) +
                            (longlong)(int)(uVar13 * *(byte *)(lVar6 + 2)) * 4);
          *(float *)(lVar10 + 0x6c) = local_78 * *(float *)(lVar10 + 0x6c);
          *(float *)(lVar10 + 0x70) = local_74 * *(float *)(lVar10 + 0x70);
          *(float *)(lVar10 + 0x74) = local_70 * *(float *)(lVar10 + 0x74);
          *(float *)(lVar10 + 0x78) =
               ((fVar14 - (float)(int)fVar14) * (fVar1 - fVar2) + fVar2) * *(float *)(lVar10 + 0x78)
          ;
        }
        puVar9 = puVar9 + -1;
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
    }
  }
  return;
}



// FUNCTION 142655040 FUN_142655040 body=1085 status=ok
// SIG undefined FUN_142655040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142655040(longlong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ushort *puVar11;
  int iVar12;
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
  undefined1 in_XMM5 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  
  lVar3 = param_2[5];
  FUN_1424118e0(param_1 + 0x38,&local_e8,*(undefined4 *)((longlong)param_2 + 0x13c),param_2[3],0,0);
  FUN_1424118e0(param_1 + 0x88,&local_d8,*(undefined4 *)((longlong)param_2 + 0x13c),param_2[3],0,0);
  fVar14 = local_e0;
  if (local_d0 <= local_e0) {
    fVar14 = local_d0;
  }
  fVar16 = local_e4;
  if (local_d4 <= local_e4) {
    fVar16 = local_d4;
  }
  fVar18 = local_e0;
  if (local_e0 <= local_d0) {
    fVar18 = local_d0;
  }
  fVar17 = local_e4;
  if (local_e4 <= local_d4) {
    fVar17 = local_d4;
  }
  fVar13 = local_e8;
  if (local_d8 <= local_e8) {
    fVar13 = local_d8;
  }
  fVar15 = local_e8;
  if (local_e8 <= local_d8) {
    fVar15 = local_d8;
  }
  if ((*(byte *)(param_1 + 0xd8) & 1) == 0) {
    lVar4 = param_2[3];
    fVar13 = *(float *)(lVar4 + 0x220) + fVar13;
    fVar16 = *(float *)(lVar4 + 0x224) + fVar16;
    fVar14 = *(float *)(lVar4 + 0x228) + fVar14;
    fVar17 = *(float *)(lVar4 + 0x224) + fVar17;
    fVar15 = *(float *)(lVar4 + 0x220) + fVar15;
    fVar18 = *(float *)(lVar4 + 0x228) + fVar18;
  }
  iVar12 = (int)param_2[0x25] + -1;
  lVar4 = param_2[0x20];
  iVar2 = *(int *)((longlong)param_2 + 0x124);
  if (-1 < iVar12) {
    puVar11 = (ushort *)(param_2[0x21] + (longlong)iVar12 * 2);
    do {
      lVar10 = (ulonglong)((uint)*puVar11 * iVar2) + lVar4;
      if ((*(uint *)(lVar10 + 0x68) & 0x4000000) == 0) {
        fVar26 = *(float *)(lVar10 + 0x10) + *(float *)(param_2 + 0x37);
        fVar19 = *(float *)((longlong)param_2 + 0x1bc) + *(float *)(lVar10 + 0x14);
        fVar21 = *(float *)(param_2 + 0x38) + *(float *)(lVar10 + 0x18);
        if ((*(byte *)(*(longlong *)(lVar3 + 0x30) + 100) & 1) == 0) {
          uVar9 = *(uint *)(param_1 + 0xd8);
          if ((uVar9 & 5) == 0) {
            lVar10 = param_2[3];
            auVar1 = *(undefined1 (*) [16])(lVar10 + 0x230);
            fVar5 = auVar1._0_4_;
            fVar6 = auVar1._4_4_;
            fVar7 = auVar1._8_4_;
            fVar27 = *(float *)(lVar10 + 0x210) * _DAT_146b06e10;
            fVar28 = *(float *)(lVar10 + 0x214) * fRam0000000146b06e14;
            fVar29 = *(float *)(lVar10 + 0x218) * fRam0000000146b06e18;
            fVar30 = *(float *)(lVar10 + 0x21c) * fRam0000000146b06e1c;
            auVar24 = rcpps(in_XMM5,auVar1);
            fVar31 = (float)((uint)(fVar26 - *(float *)(lVar10 + 0x220)) & _DAT_146b06de0);
            fVar32 = (float)((uint)(fVar19 - *(float *)(lVar10 + 0x224)) & uRam0000000146b06de4);
            fVar33 = (float)((uint)(fVar21 - *(float *)(lVar10 + 0x228)) & uRam0000000146b06de8);
            fVar21 = fVar33 * fVar28 - fVar32 * fVar29;
            fVar20 = fVar31 * fVar29 - fVar33 * fVar27;
            fVar22 = fVar32 * fVar27 - fVar31 * fVar28;
            fVar26 = auVar24._0_4_;
            fVar19 = auVar24._4_4_;
            fVar23 = auVar24._8_4_;
            fVar25 = auVar24._12_4_;
            fVar21 = fVar21 + fVar21;
            fVar20 = fVar20 + fVar20;
            fVar22 = fVar22 + fVar22;
            fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * fVar5;
            fVar19 = (fVar19 + fVar19) - fVar19 * fVar19 * fVar6;
            fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * fVar7;
            fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * auVar1._12_4_;
            in_XMM5._0_4_ = (fVar26 + fVar26) - fVar26 * fVar26 * fVar5;
            in_XMM5._4_4_ = (fVar19 + fVar19) - fVar19 * fVar19 * fVar6;
            in_XMM5._8_4_ = (fVar23 + fVar23) - fVar23 * fVar23 * fVar7;
            in_XMM5._12_4_ = (fVar25 + fVar25) - fVar25 * fVar25 * auVar1._12_4_;
            fVar26 = ((fVar22 * fVar28 - fVar20 * fVar29) + fVar30 * fVar21 + fVar31) *
                     (float)(-(uint)((float)((uint)fVar5 & _DAT_146b06e00) <= _DAT_146b06df0) &
                             (uint)in_XMM5._0_4_ ^ (uint)in_XMM5._0_4_) + *(float *)(lVar10 + 0x220)
            ;
            fVar19 = ((fVar21 * fVar29 - fVar22 * fVar27) + fVar30 * fVar20 + fVar32) *
                     (float)(-(uint)((float)((uint)fVar6 & uRam0000000146b06e04) <=
                                    fRam0000000146b06df4) & (uint)in_XMM5._4_4_ ^
                            (uint)in_XMM5._4_4_) + *(float *)(lVar10 + 0x224);
            fVar21 = ((fVar20 * fVar27 - fVar21 * fVar28) + fVar30 * fVar22 + fVar33) *
                     (float)(-(uint)((float)((uint)fVar7 & uRam0000000146b06e08) <=
                                    fRam0000000146b06df8) & (uint)in_XMM5._8_4_ ^
                            (uint)in_XMM5._8_4_) + *(float *)(lVar10 + 0x228);
          }
        }
        else {
          lVar10 = param_2[3];
          uVar9 = *(uint *)(param_1 + 0xd8);
          fVar5 = *(float *)(lVar10 + 0x210);
          fVar6 = *(float *)(lVar10 + 0x214);
          fVar7 = *(float *)(lVar10 + 0x218);
          fVar20 = *(float *)(lVar10 + 0x21c);
          in_XMM5._0_4_ = fVar26 * *(float *)(lVar10 + 0x230);
          in_XMM5._4_4_ = fVar19 * *(float *)(lVar10 + 0x234);
          in_XMM5._8_4_ = fVar21 * *(float *)(lVar10 + 0x238);
          in_XMM5._12_4_ = *(float *)(lVar10 + 0x23c) * 0.0;
          fVar21 = in_XMM5._8_4_ * fVar6 - in_XMM5._4_4_ * fVar7;
          fVar22 = in_XMM5._0_4_ * fVar7 - in_XMM5._8_4_ * fVar5;
          fVar23 = in_XMM5._4_4_ * fVar5 - in_XMM5._0_4_ * fVar6;
          fVar21 = fVar21 + fVar21;
          fVar22 = fVar22 + fVar22;
          fVar23 = fVar23 + fVar23;
          fVar26 = (fVar23 * fVar6 - fVar22 * fVar7) + fVar20 * fVar21 + in_XMM5._0_4_;
          fVar19 = (fVar21 * fVar7 - fVar23 * fVar5) + fVar20 * fVar22 + in_XMM5._4_4_;
          fVar21 = (fVar22 * fVar5 - fVar21 * fVar6) + fVar20 * fVar23 + in_XMM5._8_4_;
        }
        if ((((fVar26 <= fVar13) || (fVar15 <= fVar26)) || (fVar19 <= fVar16)) ||
           (((fVar17 <= fVar19 || (fVar21 <= fVar14)) || (uVar8 = 1, fVar18 <= fVar21)))) {
          uVar8 = 0;
        }
        if ((uVar9 >> 1 & 1) == uVar8) {
          (**(code **)(*param_2 + 0xe8))(param_2,iVar12);
        }
      }
      puVar11 = puVar11 + -1;
      iVar12 = iVar12 + -1;
    } while (-1 < iVar12);
  }
  return;
}



// FUNCTION 142655480 FUN_142655480 body=439 status=ok
// SIG undefined FUN_142655480(void)

void FUN_142655480(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort *puVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_38;
  float fStack_34;
  
  lVar3 = param_2[5];
  fVar12 = (float)FUN_1424116d0(param_1 + 0x38,*(undefined4 *)((longlong)param_2 + 0x13c),param_2[3]
                                ,0);
  if ((*(uint *)(param_1 + 0x70) & 4) != 0) {
    fVar12 = fVar12 * *(float *)(param_2[3] + 0x238);
  }
  if ((*(uint *)(param_1 + 0x70) & 1) == 0) {
    fVar12 = fVar12 + *(float *)(param_2[3] + 0x228);
  }
  iVar11 = (int)param_2[0x25] + -1;
  lVar4 = param_2[0x20];
  iVar2 = *(int *)((longlong)param_2 + 0x124);
  if (-1 < iVar11) {
    puVar10 = (ushort *)(param_2[0x21] + (longlong)iVar11 * 2);
    do {
      uVar9 = (ulonglong)((uint)*puVar10 * iVar2);
      if ((*(uint *)(uVar9 + 0x68 + lVar4) & 0x4000000) == 0) {
        uVar1 = *(undefined8 *)(uVar9 + 0x10 + lVar4);
        fVar16 = *(float *)(uVar9 + 0x18 + lVar4);
        if ((*(byte *)(*(longlong *)(lVar3 + 0x30) + 100) & 1) != 0) {
          lVar5 = param_2[3];
          fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
          local_38 = (float)uVar1;
          fVar6 = *(float *)(lVar5 + 0x210);
          fVar7 = *(float *)(lVar5 + 0x214);
          local_38 = local_38 * *(float *)(lVar5 + 0x230);
          fStack_34 = fStack_34 * *(float *)(lVar5 + 0x234);
          fVar16 = fVar16 * *(float *)(lVar5 + 0x238);
          fVar13 = fVar16 * fVar7 - fStack_34 * *(float *)(lVar5 + 0x218);
          fVar14 = local_38 * *(float *)(lVar5 + 0x218) - fVar16 * fVar6;
          fVar15 = fStack_34 * fVar6 - local_38 * fVar7;
          fVar16 = ((fVar14 + fVar14) * fVar6 - (fVar13 + fVar13) * fVar7) +
                   *(float *)(lVar5 + 0x21c) * (fVar15 + fVar15) + fVar16;
        }
        uVar8 = *(uint *)(param_1 + 0x70) & 2;
        if (((uVar8 != 0) && (fVar16 < fVar12)) || ((uVar8 == 0 && (fVar12 < fVar16)))) {
          (**(code **)(*param_2 + 0xe8))(param_2,iVar11);
        }
      }
      puVar10 = puVar10 + -1;
      iVar11 = iVar11 + -1;
    } while (-1 < iVar11);
  }
  return;
}



// FUNCTION 142655640 FUN_142655640 body=538 status=ok
// SIG undefined FUN_142655640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142655640(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [12];
  float local_cc;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  if (param_2 != 0) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
    if (((0 < *(int *)(param_2 + 0x128)) && (*(longlong *)(param_2 + 0x100) != 0)) &&
       (*(longlong *)(param_2 + 0x108) != 0)) {
      FUN_142628290(param_2);
      local_a8 = 0;
      local_a0 = 0;
      local_88 = 0;
      local_80 = 0;
      local_74 = 0;
      local_68 = 0;
      local_78 = 0xffffffff;
      FUN_14263b0c0(param_2,*(undefined8 *)(param_2 + 0x100));
      FUN_142628020(param_2,local_d8,local_c8);
      lVar2 = *(longlong *)(param_2 + 0x100);
      iVar4 = *(int *)(param_2 + 0x128) + -1;
      iVar1 = *(int *)(param_2 + 0x124);
      lVar3 = *(longlong *)(param_2 + 0x108);
      lVar7 = (longlong)iVar4;
      if (-1 < iVar4) {
        do {
          lVar6 = (ulonglong)((uint)*(ushort *)(lVar3 + lVar7 * 2) * iVar1) + lVar2;
          if ((*(uint *)(lVar6 + 0x68) & 0x4000000) == 0) {
            fVar8 = (float)FUN_1424116d0(param_1 + 0x90,*(undefined4 *)(lVar6 + 0xc),
                                         *(undefined8 *)(param_2 + 0x18),0);
            local_e0 = 0;
            local_e8 = 0;
            pfVar5 = (float *)FUN_1424118e0(param_1 + 0x40,local_b8,*(undefined4 *)(lVar6 + 0xc));
            local_cc = fVar8 * pfVar5[2];
            *(ulonglong *)((param_3 & 0xffffffff) + lVar6) =
                 CONCAT44(fVar8 * pfVar5[1],fVar8 * *pfVar5);
            *(float *)((param_3 & 0xffffffff) + 8 + lVar6) = local_cc;
          }
          lVar7 = lVar7 + -1;
        } while (-1 < lVar7);
      }
      local_60 = 0;
      TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (&local_a8);
    }
  }
  return;
}



// FUNCTION 142655860 FUN_142655860 body=198 status=ok
// SIG undefined FUN_142655860(void)

void FUN_142655860(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar3 = FUN_142627a50(param_2,param_1);
  cVar2 = FWeakObjectPtr::IsValid(uVar3);
  if (cVar2 == '\0') {
    return;
  }
  lVar4 = FWeakObjectPtr::Get(uVar3);
  if (lVar4 != 0) {
    lVar5 = FUN_142a07000();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1426558e3;
  }
  lVar4 = 0;
LAB_1426558e3:
  if (((*(uint *)(param_1 + 0xe8) & 8) == 0) || ((*(uint *)(param_1 + 0xe8) & 1) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (lVar4 != 0)) {
    FUN_142657280(param_1,uVar3,lVar4,param_4);
  }
  return;
}



// FUNCTION 142655930 FUN_142655930 body=1006 status=ok
// SIG undefined FUN_142655930(void)

void FUN_142655930(longlong param_1,longlong param_2,uint param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_d8;
  float local_d0 [6];
  float local_b8;
  undefined1 local_b4 [140];
  
  lVar3 = *(longlong *)(param_2 + 0x18);
  uVar13 = (ulonglong)param_3;
  if ((((*(byte *)(lVar3 + 0x71b) & 4) == 0) &&
      (cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    lVar9 = 0x930;
    if (DVar7 != DAT_1468c21c0) goto LAB_1426559a7;
  }
  lVar9 = 0x210;
LAB_1426559a7:
  lVar4 = *(longlong *)(param_2 + 0x100);
  iVar2 = *(int *)(param_2 + 0x124);
  lVar5 = *(longlong *)(param_2 + 0x108);
  iVar8 = *(int *)(param_2 + 0x128) + -1;
  lVar12 = (longlong)iVar8;
  if (-1 < iVar8) {
    do {
      lVar11 = (ulonglong)((uint)*(ushort *)(lVar5 + lVar12 * 2) * iVar2) + lVar4;
      if ((*(uint *)(lVar11 + 0x68) & 0x4000000) == 0) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30) + 100) & 1) == 0) {
          FUN_1424118e0(param_1 + 0x38,&local_100,*(undefined4 *)(lVar11 + 0xc),
                        *(undefined8 *)(param_2 + 0x18),0,0);
          pfVar1 = (float *)(lVar9 + lVar3);
          fVar19 = *pfVar1;
          fVar16 = pfVar1[1];
          fVar17 = pfVar1[2];
          fVar18 = pfVar1[3];
          pfVar1 = (float *)(lVar9 + 0x20 + lVar3);
          local_100._0_4_ = (float)local_100 * *pfVar1;
          local_100._4_4_ = local_100._4_4_ * pfVar1[1];
          local_f8 = local_f8 * pfVar1[2];
          fVar21 = local_f8 * fVar16 - local_100._4_4_ * fVar17;
          fVar14 = (float)local_100 * fVar17 - local_f8 * fVar19;
          fVar15 = local_100._4_4_ * fVar19 - (float)local_100 * fVar16;
          fVar21 = fVar21 + fVar21;
          fVar14 = fVar14 + fVar14;
          fVar15 = fVar15 + fVar15;
          pfVar1 = (float *)(lVar9 + 0x10 + lVar3);
          fVar20 = (fVar15 * fVar16 - fVar14 * fVar17) + fVar18 * fVar21 + (float)local_100 +
                   *pfVar1;
          fVar17 = (fVar21 * fVar17 - fVar15 * fVar19) + fVar18 * fVar14 + local_100._4_4_ +
                   pfVar1[1];
          fVar19 = (fVar14 * fVar19 - fVar21 * fVar16) + fVar18 * fVar15 + local_f8 + pfVar1[2];
          local_100 = CONCAT44(fVar17,fVar20);
          local_f8 = fVar19;
          local_d8 = fVar19;
        }
        else {
          puVar10 = (undefined8 *)
                    FUN_1424118e0(param_1 + 0x38,local_b4,*(undefined4 *)(lVar11 + 0xc),
                                  *(undefined8 *)(param_2 + 0x18),0,0);
          local_f0 = *puVar10;
          fVar19 = *(float *)(puVar10 + 1);
          fVar17 = (float)((ulonglong)local_f0 >> 0x20);
          fVar20 = (float)local_f0;
          local_e8 = fVar19;
        }
        FUN_1424118e0(param_1 + 0xd8,local_d0,*(undefined4 *)(lVar11 + 0xc),
                      *(undefined8 *)(param_2 + 0x18),0,0);
        fVar16 = 1.0 - local_d0[0];
        fVar18 = (fVar20 + *(float *)(uVar13 + lVar11)) - *(float *)(lVar11 + 0x10);
        fVar17 = (fVar17 + *(float *)(uVar13 + 4 + lVar11)) - *(float *)(lVar11 + 0x14);
        fVar21 = (fVar19 + *(float *)(uVar13 + 8 + lVar11)) - *(float *)(lVar11 + 0x18);
        fVar20 = fVar16 * fVar18;
        fVar19 = fVar16 * fVar17;
        fVar16 = fVar16 * fVar21;
        if (param_4 <= 0.0) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = 1.0 / param_4;
        }
        local_b8 = fVar21 * local_d0[0] * fVar14;
        *(ulonglong *)(lVar11 + 0x3c) =
             CONCAT44(fVar17 * local_d0[0] * fVar14,fVar18 * local_d0[0] * fVar14);
        *(float *)(lVar11 + 0x44) = local_b8;
        fVar17 = fVar20 + *(float *)(lVar11 + 0x10);
        *(float *)(lVar11 + 0x14) = fVar19 + *(float *)(lVar11 + 0x14);
        *(float *)(lVar11 + 0x10) = fVar17;
        *(float *)(lVar11 + 0x18) = fVar16 + *(float *)(lVar11 + 0x18);
        iVar8 = _finite((double)fVar17);
        if ((iVar8 != 0) && (iVar8 = _finite((double)*(float *)(lVar11 + 0x14)), iVar8 != 0)) {
          _finite((double)*(float *)(lVar11 + 0x18));
        }
        *(float *)(lVar11 + 0x20) = fVar20 + *(float *)(lVar11 + 0x20);
        *(float *)(lVar11 + 0x24) = fVar19 + *(float *)(lVar11 + 0x24);
        *(float *)(lVar11 + 0x28) = fVar16 + *(float *)(lVar11 + 0x28);
      }
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  return;
}



// FUNCTION 142655d20 FUN_142655d20 body=230 status=ok
// SIG undefined FUN_142655d20(void)

void FUN_142655d20(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  uVar8 = 0;
  uVar7 = uVar8;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x928);
    if (0 < iVar1) {
      puVar5 = *(ulonglong **)(*(longlong *)(param_2 + 0x18) + 0x920);
      uVar6 = uVar8;
      do {
        uVar7 = *puVar5;
        if ((uVar7 != 0) &&
           (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x28) == *(longlong *)(param_1 + 0x38)))
        break;
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 1;
        uVar7 = uVar8;
      } while ((longlong)uVar6 < (longlong)iVar1);
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x100);
  iVar4 = *(int *)(param_2 + 0x128) + -1;
  iVar1 = *(int *)(param_2 + 0x124);
  lVar3 = *(longlong *)(param_2 + 0x108);
  lVar9 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      lVar10 = (ulonglong)((uint)*(ushort *)(lVar3 + lVar9 * 2) * iVar1) + lVar2;
      if ((*(uint *)(lVar10 + 0x68) & 0x4000000) == 0) {
        FUN_14264aae0(param_1,param_2,uVar7,lVar10,(int)uVar8,param_3);
        uVar8 = (ulonglong)((int)uVar8 + 1);
      }
      lVar9 = lVar9 + -1;
    } while (-1 < lVar9);
  }
  return;
}



// FUNCTION 142655e10 FUN_142655e10 body=1678 status=ok
// SIG undefined FUN_142655e10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142655e10(longlong param_1,longlong *param_2,int param_3,float param_4)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
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
  undefined8 local_180;
  float local_178;
  longlong local_170;
  longlong local_168;
  undefined8 local_160;
  float local_158;
  longlong local_150;
  longlong local_148;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_110;
  undefined1 local_108 [48];
  float local_d8;
  float local_d4;
  float local_d0;
  
  lVar10 = FUN_142627a50(param_2,param_1);
  FUN_1426468c0(param_1,param_2,lVar10);
  cVar6 = FWeakObjectPtr::IsValid(lVar10);
  if (cVar6 == '\0') {
    return;
  }
  uVar11 = FWeakObjectPtr::Get(lVar10);
  uVar12 = *(uint *)(param_1 + 0x48);
  if ((uVar12 & 4) != 0) {
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    else {
      param_4 = 1.0 / param_4;
    }
    iVar15 = 0;
    if (0 < *(int *)(lVar10 + 0x14)) {
      lVar13 = 0;
      lVar16 = 0;
      do {
        if (*(int *)(lVar16 + *(longlong *)(lVar10 + 0x20)) != -1) {
          FUN_1423acc10(uVar11,local_108);
          lVar3 = *(longlong *)(lVar10 + 0x30);
          lVar4 = *(longlong *)(lVar10 + 0x40);
          local_158 = (local_d0 - *(float *)(lVar13 + 8 + lVar3)) * param_4;
          *(ulonglong *)(lVar4 + lVar13) =
               CONCAT44((local_d4 - *(float *)(lVar13 + 4 + lVar3)) * param_4,
                        (local_d8 - *(float *)(lVar13 + lVar3)) * param_4);
          *(float *)(lVar4 + 8 + lVar13) = local_158;
        }
        iVar15 = iVar15 + 1;
        lVar16 = lVar16 + 4;
        lVar13 = lVar13 + 0xc;
      } while (iVar15 < *(int *)(lVar10 + 0x14));
      uVar12 = *(uint *)(param_1 + 0x48);
    }
  }
  if ((uVar12 & 1) == 0) {
    return;
  }
  if (param_2[0x20] == 0) {
    return;
  }
  iVar15 = (**(code **)(*param_2 + 0x150))(param_2);
  if ((iVar15 < 1) || (cVar6 = (**(code **)(*param_2 + 0x158))(param_2), cVar6 == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  local_148 = param_2[3];
  if ((((*(byte *)(local_148 + 0x71b) & 4) == 0) &&
      (cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    local_150 = 0x930;
    if (DVar7 != DAT_1468c21c0) goto LAB_142655fff;
  }
  local_150 = 0x210;
LAB_142655fff:
  lVar10 = param_2[0x20];
  iVar8 = (int)param_2[0x25] + -1;
  lVar13 = param_2[0x21];
  iVar2 = *(int *)((longlong)param_2 + 0x124);
  lVar16 = (longlong)iVar8;
  local_170 = lVar10;
  local_168 = lVar13;
  if (-1 < iVar8) {
    do {
      uVar14 = (ulonglong)((uint)*(ushort *)(lVar13 + lVar16 * 2) * iVar2) + lVar10;
      if (((*(uint *)(uVar14 + 0x68) & 0x4000000) == 0) &&
         (cVar6 = FUN_1426452b0(param_1,param_2,uVar11,*(undefined4 *)((longlong)param_3 + uVar14),
                                &local_160,&local_128,0), lVar10 = local_170, lVar13 = local_168,
         cVar6 == '\x01')) {
        *(undefined8 *)(uVar14 + 0x10) = local_160;
        *(float *)(uVar14 + 0x18) = local_158;
        iVar8 = _finite((double)*(float *)(uVar14 + 0x10));
        if ((iVar8 != 0) && (iVar8 = _finite((double)*(float *)(uVar14 + 0x14)), iVar8 != 0)) {
          _finite((double)*(float *)(uVar14 + 0x18));
        }
        *(undefined8 *)(uVar14 + 0x20) = *(undefined8 *)(uVar14 + 0x10);
        *(undefined4 *)(uVar14 + 0x28) = *(undefined4 *)(uVar14 + 0x18);
        lVar10 = local_170;
        lVar13 = local_168;
        if (bVar5) {
          if ((*(byte *)(param_1 + 0x48) & 2) != 0) {
            uVar9 = FUN_1415aad80();
            FUN_1415b61a0(uVar14 & 0xffffffff);
            fVar26 = DAT_1464aa7a0;
            fVar25 = DAT_1464aa798._4_4_;
            fVar23 = (float)DAT_1464aa798;
            fVar17 = (float)FGenericPlatformMath::SRand();
            fVar17 = fVar17 * 6.2831855 * 0.5;
            if (fVar17 < 0.0) {
              fVar18 = fVar17 * 0.15915494 - 0.5;
            }
            else {
              fVar18 = fVar17 * 0.15915494 + 0.5;
            }
            fVar17 = fVar17 - (float)(int)fVar18 * 6.2831855;
            if (fVar17 <= 1.5707964) {
              if (-1.5707964 <= fVar17) {
                fVar18 = 1.0;
              }
              else {
                fVar18 = -1.0;
                fVar17 = -3.1415927 - fVar17;
              }
            }
            else {
              fVar18 = -1.0;
              fVar17 = 3.1415927 - fVar17;
            }
            fVar19 = fVar17 * fVar17;
            fVar17 = (((((2.7525562e-06 - fVar19 * 2.3889859e-08) * fVar19 - 0.00019840874) * fVar19
                       + 0.008333331) * fVar19 - 0.16666667) * fVar19 + 1.0) * fVar17;
            fVar23 = fVar23 * fVar17;
            fVar25 = fVar25 * fVar17;
            fVar26 = fVar26 * fVar17;
            fVar18 = (((((2.4760495e-05 - fVar19 * 2.6051615e-07) * fVar19 - 0.0013888378) * fVar19
                       + 0.041666638) * fVar19 - 0.5) * fVar19 + 1.0) * fVar18;
            fVar20 = fVar26 * local_128;
            fVar21 = fVar25 * local_128;
            fVar22 = fVar23 * local_128;
            fVar17 = fVar23 * fStack_124;
            fVar19 = fVar25 * fStack_124;
            fVar24 = fVar26 * fStack_120;
            local_128 = fVar18 * local_128 * _DAT_146b06ea0 + fStack_11c * fVar23 +
                        fVar26 * fStack_124 * _DAT_146b06e90 + fVar25 * fStack_120 * _DAT_146b06e80;
            fStack_124 = fVar20 * fRam0000000146b06ea4 + fStack_11c * fVar25 +
                         fVar18 * fStack_124 * fRam0000000146b06e94 +
                         fVar23 * fStack_120 * fRam0000000146b06e84;
            fStack_120 = fVar21 * fRam0000000146b06ea8 + fStack_11c * fVar26 +
                         fVar17 * fRam0000000146b06e98 + fVar18 * fStack_120 * fRam0000000146b06e88;
            fStack_11c = fVar22 * fRam0000000146b06eac + fStack_11c * fVar18 +
                         fVar19 * fRam0000000146b06e9c + fVar24 * fRam0000000146b06e8c;
            FUN_1415b61a0(uVar9);
          }
          FQuat::Euler(&local_128,&local_180);
          if ((*(byte *)(*(longlong *)(param_2[5] + 0x30) + 100) & 1) != 0) {
            pfVar1 = (float *)(local_150 + local_148);
            fVar17 = *pfVar1 * _DAT_146b06e10;
            fVar18 = pfVar1[1] * fRam0000000146b06e14;
            fVar19 = pfVar1[2] * fRam0000000146b06e18;
            fVar20 = pfVar1[3] * fRam0000000146b06e1c;
            fVar23 = local_178 * fVar18 - local_180._4_4_ * fVar19;
            fVar25 = (float)local_180 * fVar19 - local_178 * fVar17;
            fVar26 = local_180._4_4_ * fVar17 - (float)local_180 * fVar18;
            fVar23 = fVar23 + fVar23;
            fVar25 = fVar25 + fVar25;
            fVar26 = fVar26 + fVar26;
            local_178 = (fVar25 * fVar17 - fVar23 * fVar18) + fVar20 * fVar26 + local_178;
            local_180 = CONCAT44((fVar23 * fVar19 - fVar26 * fVar17) +
                                 fVar20 * fVar25 + local_180._4_4_,
                                 (fVar26 * fVar18 - fVar25 * fVar19) +
                                 fVar20 * fVar23 + (float)local_180);
            local_110 = local_178;
          }
          *(undefined8 *)((longlong)iVar15 + 0x18 + uVar14) = local_180;
          *(float *)((longlong)iVar15 + 0x20 + uVar14) = local_178;
          lVar10 = local_170;
          lVar13 = local_168;
        }
      }
      lVar16 = lVar16 + -1;
    } while (-1 < lVar16);
  }
  return;
}



// FUNCTION 1426564a0 FUN_1426564a0 body=269 status=ok
// SIG undefined FUN_1426564a0(void)

void FUN_1426564a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float local_38;
  float local_34;
  float local_30;
  
  iVar4 = (**(code **)(*param_2 + 0x150))(param_2);
  if (iVar4 != 0) {
    iVar8 = (int)param_2[0x25] + -1;
    lVar2 = param_2[0x21];
    lVar3 = param_2[0x20];
    iVar1 = *(int *)((longlong)param_2 + 0x124);
    lVar7 = (longlong)iVar8;
    if (-1 < iVar8) {
      lVar6 = (longlong)iVar4;
      do {
        lVar5 = (ulonglong)((uint)*(ushort *)(lVar2 + lVar7 * 2) * iVar1) + lVar3;
        if ((*(uint *)(lVar5 + 0x68) & 0x4000000) == 0) {
          FUN_1424118e0(param_1 + 0x38,&local_38,*(undefined4 *)(lVar5 + 0xc),param_2[3],0,0);
          *(float *)(lVar5 + 0x30 + lVar6) = local_38 * *(float *)(lVar5 + 0x30 + lVar6);
          *(float *)(lVar5 + 0x34 + lVar6) = local_34 * *(float *)(lVar5 + 0x34 + lVar6);
          *(float *)(lVar5 + 0x38 + lVar6) = local_30 * *(float *)(lVar5 + 0x38 + lVar6);
        }
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
  }
  return;
}



// FUNCTION 1426565b0 FUN_1426565b0 body=542 status=ok
// SIG undefined FUN_1426565b0(void)

void FUN_1426565b0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 local_48 [32];
  
  iVar5 = (**(code **)(*param_2 + 0x150))(param_2);
  if (iVar5 != 0) {
    lVar3 = param_2[0x20];
    lVar4 = param_2[0x21];
    lVar9 = (longlong)iVar5;
    iVar6 = (int)param_2[0x25] + -1;
    iVar5 = *(int *)((longlong)param_2 + 0x124);
    lVar8 = (longlong)iVar6;
    if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
      if (-1 < iVar6) {
        do {
          lVar10 = (ulonglong)((uint)*(ushort *)(lVar4 + lVar8 * 2) * iVar5) + lVar3;
          if ((*(uint *)(lVar10 + 0x68) & 0x4000000) == 0) {
            puVar7 = (undefined8 *)
                     FUN_1424118e0(param_1 + 0x38,local_48,*(undefined4 *)(lVar10 + 0xc),param_2[3],
                                   0,0);
            uVar1 = *puVar7;
            fVar2 = *(float *)(puVar7 + 1);
            *(float *)(lVar9 + 0x30 + lVar10) =
                 (float)uVar1 * 360.0 + *(float *)(lVar9 + 0x30 + lVar10);
            *(float *)(lVar9 + 0x34 + lVar10) =
                 (float)((ulonglong)uVar1 >> 0x20) * 360.0 + *(float *)(lVar9 + 0x34 + lVar10);
            *(float *)(lVar9 + 0x38 + lVar10) = fVar2 * 360.0 + *(float *)(lVar9 + 0x38 + lVar10);
          }
          lVar8 = lVar8 + -1;
        } while (-1 < lVar8);
      }
    }
    else if (-1 < iVar6) {
      do {
        lVar10 = (ulonglong)((uint)*(ushort *)(lVar4 + lVar8 * 2) * iVar5) + lVar3;
        if ((*(uint *)(lVar10 + 0x68) & 0x4000000) == 0) {
          puVar7 = (undefined8 *)
                   FUN_1424118e0(param_1 + 0x38,local_48,*(undefined4 *)(lVar10 + 0xc),param_2[3],0,
                                 0);
          uVar1 = *puVar7;
          fVar2 = *(float *)(puVar7 + 1);
          *(float *)(lVar9 + 0x30 + lVar10) =
               (float)uVar1 * 360.0 * *(float *)(lVar9 + 0x30 + lVar10);
          *(float *)(lVar9 + 0x34 + lVar10) =
               (float)((ulonglong)uVar1 >> 0x20) * 360.0 * *(float *)(lVar9 + 0x34 + lVar10);
          *(float *)(lVar9 + 0x38 + lVar10) = fVar2 * 360.0 * *(float *)(lVar9 + 0x38 + lVar10);
        }
        lVar8 = lVar8 + -1;
      } while (-1 < lVar8);
    }
  }
  return;
}



// FUNCTION 1426567d0 FUN_1426567d0 body=552 status=ok
// SIG undefined FUN_1426567d0(void)

void FUN_1426567d0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  lVar2 = *(longlong *)(param_2 + 0x100);
  iVar1 = *(int *)(param_2 + 0x124);
  iVar3 = *(int *)(param_2 + 0x128) + -1;
  fVar7 = 0.0;
  if ((*(uint *)(param_1 + 0x70) & 1) == 0) {
    if (-1 < iVar3) {
      puVar4 = (ushort *)(*(longlong *)(param_2 + 0x108) + (longlong)iVar3 * 2);
      do {
        lVar5 = (ulonglong)((uint)*puVar4 * iVar1) + lVar2;
        if ((*(uint *)(lVar5 + 0x68) & 0x4000000) == 0) {
          fVar6 = (float)FUN_1424116d0(param_1 + 0x38);
          fVar6 = fVar6 * 0.017453292 * 360.0 + fVar7;
          *(float *)(lVar5 + 0x38) = fVar6;
          if ((*(uint *)(param_1 + 0x70) & 4) != 0) {
            fVar7 = fVar6;
          }
        }
        puVar4 = puVar4 + -1;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
  }
  else if (-1 < iVar3) {
    puVar4 = (ushort *)(*(longlong *)(param_2 + 0x108) + (longlong)iVar3 * 2);
    do {
      lVar5 = (ulonglong)((uint)*puVar4 * iVar1) + lVar2;
      if ((*(uint *)(lVar5 + 0x68) & 0x4000000) == 0) {
        fVar6 = (float)FUN_1424116d0(param_1 + 0x38);
        fVar6 = fVar6 * 6.2831855 * *(float *)(lVar5 + 0x38) + fVar7;
        *(float *)(lVar5 + 0x38) = fVar6;
        if ((*(uint *)(param_1 + 0x70) & 4) != 0) {
          fVar7 = fVar6;
        }
      }
      puVar4 = puVar4 + -1;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}



// FUNCTION 142656a00 FUN_142656a00 body=169 status=ok
// SIG undefined FUN_142656a00(void)

void FUN_142656a00(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  
  lVar2 = *(longlong *)(param_2 + 0x100);
  iVar4 = *(int *)(param_2 + 0x128) + -1;
  iVar1 = *(int *)(param_2 + 0x124);
  lVar3 = *(longlong *)(param_2 + 0x108);
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    do {
      lVar5 = (ulonglong)((uint)*(ushort *)(lVar3 + lVar6 * 2) * iVar1) + lVar2;
      if ((*(uint *)(lVar5 + 0x68) & 0x4000000) == 0) {
        fVar7 = (float)FUN_1424116d0(param_1 + 0x38,*(undefined4 *)(lVar5 + 0xc),
                                     *(undefined8 *)(param_2 + 0x18),0);
        *(float *)(lVar5 + 0x58) = fVar7 * *(float *)(lVar5 + 0x58);
      }
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return;
}



// FUNCTION 142656ab0 FUN_142656ab0 body=369 status=ok
// SIG undefined FUN_142656ab0(void)

void FUN_142656ab0(longlong *param_1,longlong param_2,ulonglong param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 uVar13;
  
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 0x30);
  bVar2 = *(byte *)(lVar5 + 0xdc);
  if (((bVar2 != 0) && (uVar3 = *(uint *)(param_2 + 0x38), uVar3 != 0)) &&
     ((1 < bVar2 - 3 || (*(int *)(lVar5 + 0xf0) != 0)))) {
    plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x48);
    uVar11 = param_3;
    if (plVar6 != (longlong *)0x0) {
      cVar8 = (**(code **)(*plVar6 + 0x3a8))();
      if (cVar8 == '\0') {
        return;
      }
      uVar11 = param_3 & 0xffffffff;
    }
    iVar9 = *(int *)(param_2 + 0x128) + -1;
    lVar5 = *(longlong *)(param_2 + 0x108);
    lVar7 = *(longlong *)(param_2 + 0x100);
    iVar4 = *(int *)(param_2 + 0x124);
    lVar10 = (longlong)iVar9;
    if (-1 < iVar9) {
      do {
        lVar12 = (ulonglong)((uint)*(ushort *)(lVar5 + lVar10 * 2) * iVar4) + lVar7;
        if (((*(uint *)(lVar12 + 0x68) & 0x4000000) == 0) && (*(float *)(lVar12 + 0xc) <= 1.0)) {
          puVar1 = (undefined4 *)(lVar12 + (ulonglong)uVar3);
          uVar13 = (**(code **)(*param_1 + 0x380))
                             (param_1,param_2,uVar11,lVar12,bVar2,puVar1,param_4);
          *puVar1 = uVar13;
        }
        lVar10 = lVar10 + -1;
        uVar11 = param_3 & 0xffffffff;
      } while (-1 < lVar10);
    }
  }
  return;
}



// FUNCTION 142656c30 FUN_142656c30 body=543 status=ok
// SIG undefined FUN_142656c30(void)

void FUN_142656c30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int *piVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined8 local_48;
  longlong local_40;
  
  lVar5 = FUN_142627a50(param_2,param_1);
  local_40 = 0;
  lVar6 = FWeakObjectPtr::Get(lVar5);
  if (lVar6 != 0) {
    iVar15 = 0;
    iVar14 = 0;
    if (0 < *(int *)(param_1 + 0x60)) {
      lVar13 = 0;
      lVar12 = 0;
      local_48 = 0;
      iVar14 = 0;
      do {
        lVar11 = *(longlong *)(lVar12 + *(longlong *)(param_1 + 0x58));
        if (((*(char *)(param_1 + 0x68) != '\0') &&
            (cVar3 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x980))
                               (*(longlong **)(param_2 + 0x18),*(undefined8 *)(param_1 + 0x50),
                                &local_40), lVar1 = local_40, cVar3 != '\0')) && (local_40 != 0)) {
          lVar7 = AEquipmentSkin::GetPrivateStaticClass();
          lVar10 = *(longlong *)(lVar1 + 0x10);
          if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
              lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            plVar8 = (longlong *)FUN_1423b0980(*(undefined8 *)(lVar1 + 0x468),&local_48,lVar11);
            lVar11 = *plVar8;
          }
        }
        if ((lVar11 != 0) &&
           (lVar1 = *(longlong *)(lVar6 + 0x718), *(int *)(lVar1 + 0x1d0) != *(int *)(lVar1 + 0x1fc)
           )) {
          lVar10 = *(longlong *)(lVar1 + 0x208);
          if (*(longlong *)(lVar1 + 0x208) == 0) {
            lVar10 = lVar1 + 0x200;
          }
          iVar4 = *(int *)(lVar10 + ((longlong)((int)((ulonglong)lVar11 >> 0x20) + (int)lVar11) &
                                    (longlong)*(int *)(lVar1 + 0x210) - 1U) * 4);
          if (iVar4 != -1) {
            lVar1 = *(longlong *)(lVar1 + 0x1c8);
            do {
              lVar10 = (longlong)iVar4;
              if (*(longlong *)(lVar1 + lVar10 * 0x18) == lVar11) {
                if ((((iVar4 != -1) && (lVar1 = lVar1 + lVar10 * 0x18, lVar1 != 0)) &&
                    (piVar9 = (int *)(lVar1 + 8), piVar9 != (int *)0x0)) &&
                   ((iVar4 = *piVar9, iVar4 != -1 && (iVar14 < *(int *)(param_1 + 0x60))))) {
                  iVar14 = iVar14 + 1;
                  *(int *)(*(longlong *)(lVar5 + 0x20) + lVar13) = iVar4;
                  lVar13 = lVar13 + 4;
                }
                break;
              }
              iVar4 = *(int *)(lVar1 + 0x10 + lVar10 * 0x18);
            } while (iVar4 != -1);
          }
        }
        iVar15 = iVar15 + 1;
        lVar12 = lVar12 + 8;
      } while (iVar15 < *(int *)(param_1 + 0x60));
    }
    *(int *)(lVar5 + 0x14) = iVar14;
  }
  return;
}



// FUNCTION 142656e50 FUN_142656e50 body=1061 status=ok
// SIG undefined FUN_142656e50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142656e50(longlong param_1,longlong param_2,float *param_3,longlong param_4,
                  undefined8 param_5,float *param_6,char param_7,longlong *param_8,char param_9)

{
  float *pfVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 uStack0000000000000039;
  undefined1 uStack000000000000003a;
  ulonglong in_stack_ffffffffffffff68;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58 [80];
  
  local_78 = *(undefined8 *)(param_4 + 0x10);
  uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)(param_4 + 0x18));
  if (param_7 == '\0') {
    FUN_1423990b0(param_2,&local_78,0,0,in_stack_ffffffffffffff68 & 0xffffffffffffff00);
  }
  else {
    pfVar1 = (float *)(param_2 + 0x280);
    if (((*(float *)(param_2 + 0x1f8) != *pfVar1) ||
        (*(float *)(param_2 + 0x1fc) != *(float *)(param_2 + 0x284))) ||
       (*(float *)(param_2 + 0x200) != *(float *)(param_2 + 0x288))) {
      local_88 = *(undefined8 *)*(undefined1 (*) [12])(param_2 + 0x1f8);
      auVar5._12_4_ = 0;
      auVar5._0_12_ = *(undefined1 (*) [12])(param_2 + 0x1f8);
      auVar5 = divps(auVar5,_DAT_146b06e60);
      fVar7 = (float)DAT_146b06e60;
      fVar8 = DAT_146b06e60._4_4_;
      fVar9 = DAT_146b06e60._8_4_;
      fVar10 = (float)local_88 - (float)(int)auVar5._0_4_ * fVar7;
      fVar11 = (float)((ulonglong)local_88 >> 0x20) - (float)(int)auVar5._4_4_ * fVar8;
      fVar12 = *(float *)(param_2 + 0x200) - (float)(int)auVar5._8_4_ * fVar9;
      fVar10 = (float)(-(uint)(0.0 <= fVar10) & ((uint)(fVar10 + fVar7) ^ (uint)fVar10) ^
                      (uint)(fVar10 + fVar7));
      fVar11 = (float)(-(uint)(0.0 <= fVar11) & ((uint)(fVar11 + fVar8) ^ (uint)fVar11) ^
                      (uint)(fVar11 + fVar8));
      fVar12 = (float)(-(uint)(0.0 <= fVar12) & ((uint)(fVar12 + fVar9) ^ (uint)fVar12) ^
                      (uint)(fVar12 + fVar9));
      uVar6 = ((uint)(fVar12 - fVar9) ^ (uint)fVar12) & -(uint)(fRam0000000146b06e58 < fVar12) ^
              (uint)fVar12;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar6);
      *(ulonglong *)pfVar1 =
           CONCAT44(((uint)(fVar11 - fVar8) ^ (uint)fVar11) & -(uint)(fRam0000000146b06e54 < fVar11)
                    ^ (uint)fVar11,
                    ((uint)(fVar10 - fVar7) ^ (uint)fVar10) & -(uint)(_DAT_146b06e50 < fVar10) ^
                    (uint)fVar10);
      *(uint *)(param_2 + 0x288) = uVar6;
      puVar4 = (undefined8 *)FRotator::Quaternion(pfVar1,local_58);
      uVar2 = puVar4[1];
      *(undefined8 *)(param_2 + 0x270) = *puVar4;
      *(undefined8 *)(param_2 + 0x278) = uVar2;
    }
    local_88 = *(undefined8 *)(param_2 + 0x270);
    uStack_80 = *(undefined8 *)(param_2 + 0x278);
    FUN_142397be0(param_2,&local_78,&local_88,0,0,0);
  }
  fVar10 = *(float *)(param_4 + 0x78);
  uStack_80 = CONCAT44(uStack_80._4_4_,fVar10 * *(float *)(param_4 + 0x74) * param_3[2]);
  local_88 = CONCAT44(fVar10 * *(float *)(param_4 + 0x70) * param_3[1],
                      fVar10 * *(float *)(param_4 + 0x6c) * *param_3);
  FLinearColor::FLinearColor(&local_68,&local_88);
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b06f20) {
      _Init_thread_header(&DAT_146b06f20);
      if (DAT_146b06f20 == -1) {
        fVar10 = (float)ULocalLightComponent::GetUnitsConversionFactor(1,0,0xbf800000);
        DAT_146b06f1c = fVar10 * 0.0001;
        _Init_thread_footer(&DAT_146b06f20);
      }
    }
    local_68 = local_68 * DAT_146b06f1c;
    local_64 = local_64 * DAT_146b06f1c;
    local_60 = local_60 * DAT_146b06f1c;
    local_5c = local_5c * DAT_146b06f1c;
  }
  fVar7 = local_64 * local_64 + local_68 * local_68 + local_60 * local_60;
  fVar10 = local_60;
  fVar11 = local_68;
  fVar12 = local_64;
  if (1e-08 < fVar7) {
    auVar5 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
    fVar10 = auVar5._0_4_;
    fVar10 = fVar10 + fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10);
    fVar10 = fVar10 * (0.5 - fVar7 * 0.5 * fVar10 * fVar10) + fVar10;
    fVar11 = local_68 * fVar10;
    fVar12 = local_64 * fVar10;
    fVar10 = fVar10 * local_60;
  }
  fVar8 = *(float *)(param_4 + 0x5c);
  fVar9 = *param_6;
  fVar13 = fVar11 * 255.0;
  if (255.0 <= fVar11 * 255.0) {
    fVar13 = 255.0;
  }
  fVar11 = param_3[6];
  fVar14 = fVar12 * 255.0;
  if (255.0 <= fVar12 * 255.0) {
    fVar14 = 255.0;
  }
  fVar12 = fVar10 * 255.0;
  if (255.0 <= fVar10 * 255.0) {
    fVar12 = 255.0;
  }
  uStack000000000000003a = (undefined1)(int)fVar13;
  uStack0000000000000039 = (undefined1)(int)fVar14;
  param_7 = (char)(int)fVar12;
  FUN_1423772c0(param_2,SQRT(fVar7));
  puVar4 = (undefined8 *)FLinearColor::FLinearColor(local_58,&param_7);
  local_78 = *puVar4;
  uStack_70 = puVar4[1];
  FUN_142377550(param_2,&local_78,1);
  FUN_142376310(param_2,ABS(fVar8 * fVar9) * fVar11);
  FUN_1423775e0(param_2,param_3[7]);
  plVar3 = param_8;
  if ((param_8 != (longlong *)0x0) && (param_9 != '\0')) {
    (**(code **)(*param_8 + 0x140))(param_8,param_2);
    (**(code **)(*plVar3 + 0x148))(plVar3,param_2);
  }
  return;
}



// FUNCTION 142657280 FUN_142657280 body=424 status=ok
// SIG undefined FUN_142657280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142657280(undefined8 param_1,longlong param_2,longlong param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined1 local_88 [16];
  undefined1 local_78 [48];
  float local_48;
  float local_44;
  float local_40;
  
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  else {
    param_4 = 1.0 / param_4;
  }
  uVar6 = 0;
  iVar4 = FUN_142644a40();
  lVar7 = (longlong)iVar4;
  uVar8 = uVar6;
  if (0 < iVar4) {
    do {
      cVar3 = FUN_142644310(param_1,param_2,param_3,uVar8,local_78,local_88,0,0);
      if ((cVar3 == '\0') || (*(int *)(param_2 + 0x28) <= (int)uVar8)) {
        lVar1 = *(longlong *)(param_2 + 0x30);
        *(undefined8 *)(uVar6 + lVar1) = _DAT_1468b5d90;
        *(undefined4 *)(uVar6 + 8 + lVar1) = DAT_1468b5d98;
        uVar9 = *(undefined8 *)(param_3 + 0x220);
        fVar5 = (float)*(undefined8 *)(param_3 + 0x228);
      }
      else {
        lVar1 = *(longlong *)(param_2 + 0x20);
        uVar9 = CONCAT44(local_44,local_48);
        lVar2 = *(longlong *)(param_2 + 0x30);
        fVar5 = *(float *)(uVar6 + 8 + lVar1);
        *(ulonglong *)(uVar6 + lVar2) =
             CONCAT44((local_44 - *(float *)(uVar6 + 4 + lVar1)) * param_4,
                      (local_48 - *(float *)(uVar6 + lVar1)) * param_4);
        *(float *)(uVar6 + 8 + lVar2) = (local_40 - fVar5) * param_4;
        fVar5 = local_40;
      }
      lVar1 = *(longlong *)(param_2 + 0x20);
      *(undefined8 *)(lVar1 + uVar6) = uVar9;
      *(float *)(lVar1 + 8 + uVar6) = fVar5;
      uVar6 = uVar6 + 0xc;
      lVar7 = lVar7 + -1;
      uVar8 = (ulonglong)((int)uVar8 + 1);
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 142657430 FUN_142657430 body=538 status=ok
// SIG undefined FUN_142657430(void)

undefined8
FUN_142657430(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,uint *param_5)

{
  ushort uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  ushort *puVar12;
  int local_28;
  int local_24 [3];
  
  puVar4 = (undefined8 *)FUN_1423b08f0(param_3);
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = *(longlong **)*puVar4;
    lVar5 = FUN_142627a50(param_2,param_1);
    FSkeletalMeshLODRenderData::GetSectionFromVertexIndex(plVar2,param_4,local_24,&local_28);
    iVar11 = 0;
    puVar12 = (ushort *)((longlong)local_24[0] * 0x108 + *plVar2);
    if (*(int *)(param_1 + 0x90) < 1) {
LAB_1426574e1:
      if (*(char *)((longlong)plVar2 + 0x279) == '\0') {
        lVar8 = FUN_1423b0910(param_3,0);
        if ((lVar8 != 0) &&
           (pbVar10 = (byte *)((ulonglong)
                               (uint)((*(int *)(puVar12 + 8) + local_28) * *(int *)(lVar8 + 0x58)) +
                              *(longlong *)(lVar8 + 0x50)), 0 < *(int *)(puVar12 + 0x1e))) {
          do {
            uVar1 = *(ushort *)(*(longlong *)(puVar12 + 0x14) + (ulonglong)*pbVar10 * 2);
            uVar9 = (uint)uVar1;
            cVar3 = FWeakObjectPtr::IsValid(param_3 + 0x720);
            if (cVar3 != '\0') {
              uVar9 = *(uint *)(*(longlong *)(param_3 + 0x788) + (ulonglong)uVar1 * 4);
            }
            if (*(int *)(lVar5 + 0x14) == 0) goto LAB_142657632;
            puVar6 = *(uint **)(lVar5 + 0x20);
            for (puVar7 = puVar6; puVar7 < puVar6 + *(int *)(lVar5 + 0x18); puVar7 = puVar7 + 1) {
              if (*puVar7 == uVar9) {
                if ((int)((longlong)puVar7 - (longlong)puVar6 >> 2) != -1) goto LAB_142657632;
                break;
              }
            }
            iVar11 = iVar11 + 1;
            pbVar10 = pbVar10 + 1;
          } while (iVar11 < *(int *)(puVar12 + 0x1e));
        }
        return 0;
      }
      lVar8 = FUN_1423b0910(param_3,0);
      if ((lVar8 != 0) &&
         (pbVar10 = (byte *)((ulonglong)
                             (uint)((*(int *)(puVar12 + 8) + local_28) * *(int *)(lVar8 + 0x58)) +
                            *(longlong *)(lVar8 + 0x50)), 0 < *(int *)(puVar12 + 0x1e))) {
        do {
          uVar1 = *(ushort *)(*(longlong *)(puVar12 + 0x14) + (ulonglong)*pbVar10 * 2);
          uVar9 = (uint)uVar1;
          cVar3 = FWeakObjectPtr::IsValid(param_3 + 0x720);
          if (cVar3 != '\0') {
            uVar9 = *(uint *)(*(longlong *)(param_3 + 0x788) + (ulonglong)uVar1 * 4);
          }
          if (*(int *)(lVar5 + 0x14) == 0) {
LAB_142657632:
            if (param_5 != (uint *)0x0) {
              *param_5 = uVar9;
            }
            return 1;
          }
          puVar6 = *(uint **)(lVar5 + 0x20);
          for (puVar7 = puVar6; puVar7 < puVar6 + *(int *)(lVar5 + 0x18); puVar7 = puVar7 + 1) {
            if (*puVar7 == uVar9) {
              if ((int)((longlong)puVar7 - (longlong)puVar6 >> 2) != -1) goto LAB_142657632;
              break;
            }
          }
          iVar11 = iVar11 + 1;
          pbVar10 = pbVar10 + 1;
        } while (iVar11 < *(int *)(puVar12 + 0x1e));
      }
      return 0;
    }
    puVar6 = *(uint **)(param_1 + 0x88);
    lVar8 = 0;
    do {
      if (*puVar6 == (uint)*puVar12) goto LAB_1426574e1;
      lVar8 = lVar8 + 1;
      puVar6 = puVar6 + 1;
    } while (lVar8 < *(int *)(param_1 + 0x90));
  }
  return 0;
}



// FUNCTION 142657670 FUN_142657670 body=1025 status=ok
// SIG undefined FUN_142657670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142657670(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 **local_78;
  undefined1 local_68 [8];
  undefined8 *local_60;
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 1;
  local_78 = &local_60;
  local_34 = 0;
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_80 = &local_58;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = 1;
  (**(code **)(*DAT_146ab6358 + 0x480))(DAT_146ab6358,local_68,&DAT_146ab6e78,0x200);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  *local_60 = 0;
  *(undefined4 *)(local_60 + 1) = 0;
  *(undefined4 *)((longlong)local_60 + 0xc) = 0x3f800000;
  *(undefined4 *)(local_60 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x14) = 0x3f800000;
  local_60[3] = 0x3f800000;
  local_60[4] = 0;
  *(undefined4 *)(local_60 + 5) = 0;
  *(undefined4 *)((longlong)local_60 + 0x2c) = 0x3f800000;
  *(undefined4 *)(local_60 + 6) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x34) = 0x3f800000;
  local_60[7] = 0x3f800000;
  local_60[8] = 0;
  *(undefined4 *)(local_60 + 9) = 0;
  *(undefined4 *)((longlong)local_60 + 0x4c) = 0x3f800000;
  *(undefined4 *)(local_60 + 10) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x54) = 0x3f800000;
  local_60[0xb] = 0x3f800000;
  local_60[0xc] = 0;
  *(undefined4 *)(local_60 + 0xd) = 0;
  *(undefined4 *)((longlong)local_60 + 0x6c) = 0x3f800000;
  *(undefined4 *)(local_60 + 0xe) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x74) = 0x3f800000;
  local_60[0xf] = 0x3f800000;
  local_60[0x10] = 0;
  *(undefined4 *)(local_60 + 0x11) = 0;
  *(undefined4 *)((longlong)local_60 + 0x8c) = 0x3f800000;
  *(undefined4 *)(local_60 + 0x12) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x94) = 0x3f800000;
  local_60[0x13] = 0x3f800000;
  local_60[0x14] = 0;
  *(undefined4 *)(local_60 + 0x15) = 0;
  *(undefined4 *)((longlong)local_60 + 0xac) = 0x3f800000;
  *(undefined4 *)(local_60 + 0x16) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0xb4) = 0x3f800000;
  local_60[0x17] = 0x3f800000;
  local_60[0x18] = 0;
  *(undefined4 *)(local_60 + 0x19) = 0;
  *(undefined4 *)((longlong)local_60 + 0xcc) = 0x3f800000;
  *(undefined4 *)(local_60 + 0x1a) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0xd4) = 0x3f800000;
  local_60[0x1b] = 0x3f800000;
  local_60[0x1c] = 0;
  *(undefined4 *)(local_60 + 0x1d) = 0;
  *(undefined4 *)((longlong)local_60 + 0xec) = 0x3f800000;
  *(undefined4 *)(local_60 + 0x1e) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0xf4) = 0x3f800000;
  local_60[0x1f] = 0x3f800000;
  local_60[0x20] = 0;
  *(undefined4 *)(local_60 + 0x21) = 0;
  *(undefined4 *)((longlong)local_60 + 0x10c) = 0x3f800000;
  *(undefined4 *)(local_60 + 0x22) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x114) = 0x3f800000;
  local_60[0x23] = 0x3f800000;
  local_60[0x24] = 0;
  *(undefined4 *)(local_60 + 0x25) = 0;
  *(undefined4 *)((longlong)local_60 + 300) = 0x3f800000;
  *(undefined4 *)(local_60 + 0x26) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x134) = 0x3f800000;
  local_60[0x27] = 0x3f800000;
  local_60[0x28] = 0;
  *(undefined4 *)(local_60 + 0x29) = 0;
  *(undefined4 *)((longlong)local_60 + 0x14c) = 0x3f800000;
  *(undefined4 *)(local_60 + 0x2a) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x154) = 0x3f800000;
  local_60[0x2b] = 0x3f800000;
  local_60[0x2c] = 0;
  *(undefined4 *)(local_60 + 0x2d) = 0;
  *(undefined4 *)((longlong)local_60 + 0x16c) = 0x3f800000;
  *(undefined4 *)(local_60 + 0x2e) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x174) = 0x3f800000;
  local_60[0x2f] = 0x3f800000;
  local_60[0x30] = 0;
  *(undefined4 *)(local_60 + 0x31) = 0;
  *(undefined4 *)((longlong)local_60 + 0x18c) = 0x3f800000;
  *(undefined4 *)(local_60 + 0x32) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x194) = 0x3f800000;
  local_60[0x33] = 0x3f800000;
  local_60[0x34] = 0;
  *(undefined4 *)(local_60 + 0x35) = 0;
  *(undefined4 *)((longlong)local_60 + 0x1ac) = 0x3f800000;
  *(undefined4 *)(local_60 + 0x36) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x1b4) = 0x3f800000;
  local_60[0x37] = 0x3f800000;
  local_60[0x38] = 0;
  *(undefined4 *)(local_60 + 0x39) = 0;
  *(undefined4 *)((longlong)local_60 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(local_60 + 0x3a) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 0x1d4) = 0x3f800000;
  local_60[0x3b] = 0x3f800000;
  local_60[0x3c] = 0;
  *(undefined4 *)(local_60 + 0x3d) = 0;
  *(undefined4 *)((longlong)local_60 + 0x1ec) = 0x3f800000;
  *(undefined4 *)(local_60 + 0x3e) = 0x3f800000;
  *(undefined4 *)((longlong)local_60 + 500) = 0x3f800000;
  local_60[0x3f] = 0x3f800000;
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 142657a80 FUN_142657a80 body=1142 status=ok
// SIG undefined FUN_142657a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142657a80(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong *local_80;
  longlong *local_78;
  undefined1 local_68 [8];
  longlong local_60 [3];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_48 = 1;
  local_78 = local_60;
  local_34 = 0;
  uVar1 = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_80 = local_60 + 1;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = 1;
  (**(code **)(*DAT_146ab6358 + 0x480))(DAT_146ab6358,local_68,&DAT_146ab6e78,0x400);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  do {
    uVar2 = uVar1 * 8;
    *(undefined8 *)(local_60[0] + (ulonglong)uVar2 * 8) = 0;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 1) * 8) = 0;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 1) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 2) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 2) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 3) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 4) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 5) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 6) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 7) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 8) * 8) = 0;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 9) * 8) = 0;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 9) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 10) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 10) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0xb) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0xc) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0xd) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0xe) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0xf) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar1 * 8 + 0x10) * 8) = 0;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 0x11) * 8) = 0;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 0x11) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 0x12) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 0x12) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x13) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x14) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x15) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x16) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x17) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar1 * 8 + 0x18) * 8) = 0;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 0x19) * 8) = 0;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 0x19) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 0x1a) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 0x1a) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x1b) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x1c) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x1d) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x1e) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x1f) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar1 * 8 + 0x20) * 8) = 0;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 0x21) * 8) = 0;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 0x21) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 0x22) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 0x22) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x23) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x24) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x25) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x26) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x27) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar1 * 8 + 0x28) * 8) = 0;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 0x29) * 8) = 0;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 0x29) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 0x2a) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 0x2a) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x2b) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x2c) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x2d) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x2e) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x2f) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar1 * 8 + 0x30) * 8) = 0;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 0x31) * 8) = 0;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 0x31) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 0x32) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 0x32) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x33) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x34) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x35) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x36) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x37) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar1 * 8 + 0x38) * 8) = 0;
    uVar1 = uVar1 + 8;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 0x39) * 8) = 0;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 0x39) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + (ulonglong)(uVar2 + 0x3a) * 8) = 0x3f800000;
    *(undefined4 *)(local_60[0] + 4 + (ulonglong)(uVar2 + 0x3a) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x3b) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x3c) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x3d) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x3e) * 8) = 0x3f800000;
    *(undefined8 *)(local_60[0] + (ulonglong)(uVar2 + 0x3f) * 8) = 0x3f800000;
  } while (uVar1 < 0x10);
  (**(code **)(*DAT_146ab6358 + 0x4b8))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 142657f00 FUN_142657f00 body=343 status=ok
// SIG undefined FUN_142657f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142657f00(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong local_60 [3];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar2 = 0;
  local_48 = 1;
  local_34 = 0;
  local_70 = local_60;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_78 = local_60 + 1;
  local_80 = 1;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = 0x30000;
  (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,local_68,&DAT_146ab6e78,2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  do {
    sVar3 = (short)uVar2 * 4;
    uVar1 = uVar2 * 6;
    *(short *)(local_60[0] + (ulonglong)uVar1 * 2) = sVar3;
    uVar2 = uVar2 + 1;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 1) * 2) = sVar3 + 2;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 2) * 2) = sVar3 + 3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 3) * 2) = sVar3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 4) * 2) = sVar3 + 1;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 5) * 2) = sVar3 + 2;
  } while (uVar2 < 0x4000);
  (**(code **)(*DAT_146ab6358 + 0x500))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 142658060 FUN_142658060 body=464 status=ok
// SIG undefined FUN_142658060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142658060(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong local_60 [3];
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
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar2 = 0;
  local_48 = 1;
  local_34 = 0;
  local_70 = local_60;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_78 = local_60 + 1;
  local_80 = 1;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_88 = 0x48000;
  (**(code **)(*DAT_146ab6358 + 0x488))(DAT_146ab6358,local_68,&DAT_146ab6e78,2);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  do {
    uVar1 = uVar2 * 0x12;
    sVar3 = (short)uVar2 * 8;
    *(short *)(local_60[0] + (ulonglong)uVar1 * 2) = sVar3;
    uVar2 = uVar2 + 1;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 1) * 2) = sVar3 + 1;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 2) * 2) = sVar3 + 2;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 3) * 2) = sVar3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 4) * 2) = sVar3 + 2;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 5) * 2) = sVar3 + 3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 6) * 2) = sVar3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 7) * 2) = sVar3 + 3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 8) * 2) = sVar3 + 4;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 9) * 2) = sVar3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 10) * 2) = sVar3 + 4;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 0xb) * 2) = sVar3 + 5;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 0xc) * 2) = sVar3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 0xd) * 2) = sVar3 + 5;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 0xe) * 2) = sVar3 + 6;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 0xf) * 2) = sVar3;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 0x10) * 2) = sVar3 + 6;
    *(short *)(local_60[0] + (ulonglong)(uVar1 + 0x11) * 2) = sVar3 + 7;
  } while (uVar2 < 0x2000);
  (**(code **)(*DAT_146ab6358 + 0x500))
            (DAT_146ab6358,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
  return;
}



// FUNCTION 142658230 FUN_142658230 body=288 status=ok
// SIG undefined FUN_142658230(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142658230(longlong param_1)

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
  local_70 = &local_58;
  local_78 = 4;
  if (DAT_1464c9c12 != '\0') {
    local_78 = 0x204;
  }
  local_48 = 1;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_68,&DAT_146ab6e78,DAT_146b06ff8);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  if (DAT_1464c9c12 != '\0') {
    local_70 = (undefined8 *)CONCAT71(local_70._1_7_,0x11);
    local_78 = 8;
    (**(code **)(*DAT_146ab6358 + 0x4a8))
              (DAT_146ab6358,local_68,&DAT_146ab6e78,*(undefined8 *)(param_1 + 0x30));
    TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x38,local_68);
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  }
  return;
}



// FUNCTION 142658350 FUN_142658350 body=89 status=ok
// SIG undefined FUN_142658350(void)

undefined8 * FUN_142658350(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145150318;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1426583b0 FUN_1426583b0 body=89 status=ok
// SIG undefined FUN_1426583b0(void)

undefined8 * FUN_1426583b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145150358;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142658410 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FDummyPrevTransformBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145150398;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142658480 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FDummyPrevTransformBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1451503d8;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR__scalar_deleting_destructor__143f48b30;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1426584f0 FUN_1426584f0 body=98 status=ok
// SIG undefined FUN_1426584f0(void)

undefined8 * FUN_1426584f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145150418;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 142658560 FUN_142658560 body=191 status=ok
// SIG undefined FUN_142658560(void)

undefined8 * FUN_142658560(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined *local_18;
  undefined1 *puStack_10;
  
  puStack_10 = local_res8;
  local_res8[0] = 0;
  local_18 = &DAT_14060d670;
  lVar2 = FUN_1415d8310(&local_18,&DAT_146216a38);
  puVar3 = (undefined8 *)operator_new(0x10,lVar2 + 0x18,1);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3[1] = 0;
    *puVar3 = &PTR_FUN_1445515c0;
  }
  iVar1 = *(int *)(param_1 + 0xd0);
  *(int *)(param_1 + 0xd0) = iVar1 + 1;
  if (*(int *)(param_1 + 0xd4) < iVar1 + 1) {
    FUN_140822430(param_1 + 200,iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 200) + (longlong)iVar1 * 8) = puVar3;
  return puVar3;
}



// FUNCTION 142658620 CreateDynamicBeam2EmitterIndices<unsigned_short> body=417 status=ok
// SIG undefined CreateDynamicBeam2EmitterIndices<unsigned_short>(void)

int CreateDynamicBeam2EmitterIndices<unsigned_short>(short *param_1,longlong param_2)

{
  longlong lVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  sVar5 = 0;
  iVar4 = 0;
  psVar2 = param_1;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      lVar6 = (longlong)(iVar4 * *(int *)(param_2 + 0x10)) + (longlong)*(int *)(param_2 + 0xf4) +
              *(longlong *)(param_2 + 0x28);
      if ((*(int *)(lVar6 + 0x58) != 0) &&
         ((*(int *)(param_2 + 0x154) < 1 || (*(int *)(lVar6 + 0x50) != 0)))) {
        lVar1 = (longlong)psVar2 - (longlong)param_1 >> 1;
        if (sVar5 == 0) {
          if (lVar1 < 0xfffe) {
            psVar2[0] = 0;
            psVar2[1] = 1;
            sVar5 = 2;
            psVar2 = psVar2 + 2;
          }
        }
        else if (lVar1 < 0xfffc) {
          *psVar2 = sVar5 + -1;
          psVar2[1] = sVar5;
          psVar2[2] = sVar5;
          psVar2[3] = sVar5 + 1;
          psVar2 = psVar2 + 4;
          sVar5 = sVar5 + 2;
          iVar8 = iVar8 + 4;
        }
        iVar7 = 0;
        if (0 < *(int *)(param_2 + 0x11c)) {
          do {
            iVar3 = 0;
            iVar8 = iVar8 + *(int *)(lVar6 + 0x58);
            if (0 < *(int *)(lVar6 + 0x58)) {
              do {
                *psVar2 = sVar5;
                psVar2 = psVar2 + 1;
                sVar5 = sVar5 + 1;
                if (0x1fffe < (longlong)((longlong)psVar2 - (longlong)param_1 & 0xfffffffffffffffeU)
                   ) break;
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)(lVar6 + 0x58));
            }
            iVar7 = iVar7 + 1;
            if ((iVar7 < *(int *)(param_2 + 0x11c)) &&
               ((longlong)((longlong)psVar2 - (longlong)param_1 & 0xfffffffffffffffeU) < 0x1fff7)) {
              *psVar2 = sVar5 + -1;
              psVar2[1] = sVar5;
              psVar2[2] = sVar5;
              psVar2[3] = sVar5 + 1;
              psVar2 = psVar2 + 4;
              sVar5 = sVar5 + 2;
              iVar8 = iVar8 + 4;
            }
          } while (((longlong)((longlong)psVar2 - (longlong)param_1 & 0xfffffffffffffffeU) < 0x1ffff
                   ) && (iVar7 < *(int *)(param_2 + 0x11c)));
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_2 + 0xc));
  }
  return iVar8;
}



// FUNCTION 1426587d0 CreateDynamicBeam2EmitterIndices<unsigned_int> body=408 status=ok
// SIG undefined CreateDynamicBeam2EmitterIndices<unsigned_int>(void)

int CreateDynamicBeam2EmitterIndices<unsigned_int>(int *param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar5 = 0;
  iVar4 = 0;
  piVar2 = param_1;
  if (0 < *(int *)(param_2 + 0xc)) {
    do {
      lVar6 = (longlong)(iVar4 * *(int *)(param_2 + 0x10)) + (longlong)*(int *)(param_2 + 0xf4) +
              *(longlong *)(param_2 + 0x28);
      if ((*(int *)(lVar6 + 0x58) != 0) &&
         ((*(int *)(param_2 + 0x154) < 1 || (*(int *)(lVar6 + 0x50) != 0)))) {
        lVar1 = (longlong)piVar2 - (longlong)param_1 >> 2;
        if (iVar5 == 0) {
          if (lVar1 < 0xfffe) {
            *piVar2 = 0;
            iVar5 = 2;
            piVar2[1] = 1;
            piVar2 = piVar2 + 2;
          }
        }
        else if (lVar1 < 0xfffc) {
          *piVar2 = iVar5 + -1;
          piVar2[1] = iVar5;
          piVar2[2] = iVar5;
          piVar2[3] = iVar5 + 1;
          piVar2 = piVar2 + 4;
          iVar5 = iVar5 + 2;
          iVar8 = iVar8 + 4;
        }
        iVar7 = 0;
        if (0 < *(int *)(param_2 + 0x11c)) {
          do {
            iVar3 = 0;
            iVar8 = iVar8 + *(int *)(lVar6 + 0x58);
            if (0 < *(int *)(lVar6 + 0x58)) {
              do {
                *piVar2 = iVar5;
                piVar2 = piVar2 + 1;
                iVar5 = iVar5 + 1;
                if (0x3fffc < (longlong)((longlong)piVar2 - (longlong)param_1 & 0xfffffffffffffffcU)
                   ) break;
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)(lVar6 + 0x58));
            }
            iVar7 = iVar7 + 1;
            if ((iVar7 < *(int *)(param_2 + 0x11c)) &&
               ((longlong)((longlong)piVar2 - (longlong)param_1 & 0xfffffffffffffffcU) < 0x3ffed)) {
              *piVar2 = iVar5 + -1;
              piVar2[1] = iVar5;
              piVar2[2] = iVar5;
              piVar2[3] = iVar5 + 1;
              piVar2 = piVar2 + 4;
              iVar5 = iVar5 + 2;
              iVar8 = iVar8 + 4;
            }
          } while (((longlong)((longlong)piVar2 - (longlong)param_1 & 0xfffffffffffffffcU) < 0x3fffd
                   ) && (iVar7 < *(int *)(param_2 + 0x11c)));
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_2 + 0xc));
  }
  return iVar8;
}



// FUNCTION 142658970 HeapSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,`FDynamicSpriteEmitterDataBase::SortSpriteParticles'::`2'::FCompareParticleOrderC>_> body=342 status=ok
// SIG undefined HeapSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,`FDynamicSpriteEmitterDataBase::SortSpriteParticles'::`2'::FCompareParticleOrderC>_>(void)

void AlgoImpl::
     HeapSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,_FDynamicSpriteEmitterDataBase::SortSpriteParticles_::_2_::FCompareParticleOrderC>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  
  iVar5 = (param_2 + -2) / 2;
  if (-1 < iVar5) {
    iVar6 = iVar5 * 2 + 1;
    iVar4 = iVar6;
    iVar8 = iVar5;
joined_r0x00014265899a:
    do {
      if (iVar6 < param_2) {
        iVar6 = iVar5 * 2;
        iVar7 = iVar6 + 1;
        if (iVar6 + 2 < param_2) {
          if (*(uint *)((longlong)param_1 + (longlong)iVar7 * 8 + 4) <
              *(uint *)((longlong)param_1 + (longlong)iVar6 * 8 + 0x14)) {
            iVar7 = iVar6;
          }
          iVar7 = iVar7 + 1;
        }
        puVar9 = param_1 + iVar7;
        puVar1 = param_1 + iVar5;
        if (*(uint *)((longlong)puVar9 + 4) < *(uint *)((longlong)param_1 + (longlong)iVar5 * 8 + 4)
           ) {
          if (puVar1 != puVar9) {
            uVar3 = *puVar1;
            *puVar1 = *puVar9;
            *puVar9 = uVar3;
          }
          iVar6 = iVar7 * 2 + 1;
          iVar5 = iVar7;
          goto joined_r0x00014265899a;
        }
      }
      iVar6 = iVar4 + -2;
      iVar5 = iVar8 + -1;
      iVar4 = iVar6;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar9 = param_1 + param_2;
    do {
      if (param_1 != puVar9) {
        uVar3 = *param_1;
        *param_1 = *puVar9;
        *puVar9 = uVar3;
      }
      iVar5 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar5 * 2;
          iVar6 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(uint *)((longlong)param_1 + (longlong)iVar6 * 8 + 4) <
                *(uint *)((longlong)param_1 + (longlong)iVar4 * 8 + 0x14)) {
              iVar6 = iVar4;
            }
            iVar6 = iVar6 + 1;
          }
          puVar1 = param_1 + iVar6;
          puVar2 = param_1 + iVar5;
          if (*(uint *)((longlong)param_1 + (longlong)iVar5 * 8 + 4) <=
              *(uint *)((longlong)puVar1 + 4)) break;
          if (puVar2 != puVar1) {
            uVar3 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar3;
          }
          iVar5 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar9 = puVar9 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142658ad0 HeapSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,`FDynamicSpriteEmitterDataBase::SortSpriteParticles'::`2'::FCompareParticleOrderZ>_> body=350 status=ok
// SIG undefined HeapSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,`FDynamicSpriteEmitterDataBase::SortSpriteParticles'::`2'::FCompareParticleOrderZ>_>(void)

void AlgoImpl::
     HeapSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,_FDynamicSpriteEmitterDataBase::SortSpriteParticles_::_2_::FCompareParticleOrderZ>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  
  iVar6 = (param_2 + -2) / 2;
  if (-1 < iVar6) {
    iVar11 = iVar6 * 2 + 1;
    iVar9 = iVar11;
    iVar12 = iVar6;
joined_r0x000142658afa:
    do {
      if (iVar11 < param_2) {
        iVar7 = iVar6 * 2 + 1;
        iVar11 = iVar6 * 2 + 2;
        iVar8 = iVar7;
        if ((iVar11 < param_2) &&
           (fVar4 = *(float *)((longlong)param_1 + (longlong)iVar11 * 8 + 4),
           pfVar3 = (float *)((longlong)param_1 + (longlong)iVar7 * 8 + 4), iVar8 = iVar11,
           *pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
          iVar8 = iVar7;
        }
        puVar10 = param_1 + iVar8;
        fVar4 = *(float *)((longlong)param_1 + (longlong)iVar6 * 8 + 4);
        puVar1 = param_1 + iVar6;
        if (*(float *)((longlong)puVar10 + 4) <= fVar4 && fVar4 != *(float *)((longlong)puVar10 + 4)
           ) {
          if (puVar1 != puVar10) {
            uVar5 = *puVar1;
            *puVar1 = *puVar10;
            *puVar10 = uVar5;
          }
          iVar11 = iVar8 * 2 + 1;
          iVar6 = iVar8;
          goto joined_r0x000142658afa;
        }
      }
      iVar11 = iVar9 + -2;
      iVar6 = iVar12 + -1;
      iVar9 = iVar11;
      iVar12 = iVar6;
    } while (-1 < iVar6);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar10 = param_1 + param_2;
    do {
      if (param_1 != puVar10) {
        uVar5 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar5;
      }
      iVar6 = 0;
      if (1 < param_2) {
        do {
          iVar11 = iVar6 * 2 + 1;
          iVar12 = iVar6 * 2 + 2;
          iVar9 = iVar11;
          if ((iVar12 < param_2) &&
             (fVar4 = *(float *)((longlong)param_1 + (longlong)iVar12 * 8 + 4),
             pfVar3 = (float *)((longlong)param_1 + (longlong)iVar11 * 8 + 4), iVar9 = iVar12,
             *pfVar3 <= fVar4 && fVar4 != *pfVar3)) {
            iVar9 = iVar11;
          }
          puVar1 = param_1 + iVar9;
          fVar4 = *(float *)((longlong)param_1 + (longlong)iVar6 * 8 + 4);
          puVar2 = param_1 + iVar6;
          if (fVar4 < *(float *)((longlong)puVar1 + 4) || fVar4 == *(float *)((longlong)puVar1 + 4))
          break;
          if (puVar2 != puVar1) {
            uVar5 = *puVar2;
            *puVar2 = *puVar1;
            *puVar1 = uVar5;
          }
          iVar6 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar10 = puVar10 + -1;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142658c30 IntroSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,`FDynamicSpriteEmitterDataBase::SortSpriteParticles'::`2'::FCompareParticleOrderC>_> body=625 status=ok
// SIG undefined IntroSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,`FDynamicSpriteEmitterDataBase::SortSpriteParticles'::`2'::FCompareParticleOrderC>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,_FDynamicSpriteEmitterDataBase::SortSpriteParticles_::_2_::FCompareParticleOrderC>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_318 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar6 = &local_328;
    do {
      puVar10 = (undefined8 *)*plVar6;
      puVar8 = (undefined8 *)plVar6[1];
      lVar2 = plVar6[2];
      local_338._0_4_ = (int)lVar2;
      lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
      puVar9 = puVar10;
      if ((int)local_338 != 0) {
LAB_142658cf0:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          puVar10 = puVar9 + (lVar4 >> 1);
          if (puVar10 != puVar9) {
            uVar3 = *puVar10;
            *puVar10 = *puVar9;
            *puVar9 = uVar3;
          }
          puVar7 = puVar8 + 1;
          puVar5 = puVar9;
LAB_142658d27:
          puVar10 = puVar5 + 1;
          if (puVar10 <= puVar8) goto code_r0x000142658d30;
          goto LAB_142658d40;
        }
        for (; puVar10 = puVar9, puVar7 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar5 = puVar10, puVar10 = puVar7 + 1, puVar10 <= puVar8) {
            puVar1 = (uint *)((longlong)puVar7 + 0xc);
            puVar7 = puVar10;
            if (*(uint *)((longlong)puVar5 + 4) <= *puVar1) {
              puVar10 = puVar5;
            }
          }
          if (puVar5 != puVar8) {
            uVar3 = *puVar5;
            *puVar5 = *puVar8;
            *puVar8 = uVar3;
          }
        }
        goto LAB_142658e13;
      }
LAB_142658e04:
      local_338 = lVar2;
      HeapSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,_FDynamicSpriteEmitterDataBase::SortSpriteParticles_::_2_::FCompareParticleOrderC>_>
                (puVar10,lVar4,param_3,param_4);
LAB_142658e13:
      plVar6 = plVar6 + -3;
    } while (&local_328 <= plVar6);
  }
  return;
code_r0x000142658d30:
  puVar1 = (uint *)((longlong)puVar5 + 0xc);
  puVar5 = puVar10;
  if (*(uint *)((longlong)puVar9 + 4) <= *puVar1) goto LAB_142658d27;
LAB_142658d40:
  do {
    puVar5 = puVar7;
    puVar7 = puVar5 + -1;
    if (puVar7 <= puVar9) break;
  } while (*(uint *)((longlong)puVar5 + -4) <= *(uint *)((longlong)puVar9 + 4));
  if (puVar10 <= puVar7) {
    puVar5 = puVar10;
    if (puVar10 != puVar7) {
      uVar3 = *puVar10;
      *puVar10 = *puVar7;
      *puVar7 = uVar3;
    }
    goto LAB_142658d27;
  }
  if (puVar9 != puVar7) {
    uVar3 = *puVar9;
    *puVar9 = *puVar7;
    *puVar7 = uVar3;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar7 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar8 - (longlong)puVar10 & 0xfffffffffffffff8U)) {
    if (puVar10 < puVar8) {
      *plVar6 = (longlong)puVar10;
      plVar6[1] = (longlong)puVar8;
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar7 <= puVar9 + 1) goto LAB_142658e13;
    puVar8 = puVar5 + -2;
    puVar10 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar7) {
      *plVar6 = (longlong)puVar9;
      plVar6[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar8 <= puVar10) goto LAB_142658e13;
  }
  lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
  puVar9 = puVar10;
  if ((int)local_338 == 0) goto LAB_142658e04;
  goto LAB_142658cf0;
}



// FUNCTION 142658eb0 IntroSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,`FDynamicSpriteEmitterDataBase::SortSpriteParticles'::`2'::FCompareParticleOrderZ>_> body=619 status=ok
// SIG undefined IntroSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,`FDynamicSpriteEmitterDataBase::SortSpriteParticles'::`2'::FCompareParticleOrderZ>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,_FDynamicSpriteEmitterDataBase::SortSpriteParticles_::_2_::FCompareParticleOrderZ>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_1 + (param_2 - 1) * 8;
    fVar11 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar11 = fVar11 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar11 = ::_guard_xfg_dispatch_icall_nop(fVar11);
    local_318 = (undefined4)(longlong)(fVar11 + fVar11);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar6 = &local_328;
    do {
      puVar10 = (undefined8 *)*plVar6;
      puVar8 = (undefined8 *)plVar6[1];
      lVar2 = plVar6[2];
      local_338._0_4_ = (int)lVar2;
      lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
      puVar9 = puVar10;
      if ((int)local_338 != 0) {
LAB_142658f70:
        if (8 < lVar4) {
          if (lVar4 < 0) {
            lVar4 = lVar4 + 1;
          }
          puVar10 = puVar9 + (lVar4 >> 1);
          if (puVar10 != puVar9) {
            uVar3 = *puVar10;
            *puVar10 = *puVar9;
            *puVar9 = uVar3;
          }
          puVar7 = puVar8 + 1;
          puVar5 = puVar9;
LAB_142658fa7:
          puVar10 = puVar5 + 1;
          if (puVar10 <= puVar8) goto code_r0x000142658fb0;
          goto LAB_142658fc0;
        }
        for (; puVar10 = puVar9, puVar7 = puVar9, puVar9 < puVar8; puVar8 = puVar8 + -1) {
          while (puVar5 = puVar7 + 1, puVar5 <= puVar8) {
            pfVar1 = (float *)((longlong)puVar7 + 0xc);
            puVar7 = puVar5;
            if (*pfVar1 < *(float *)((longlong)puVar10 + 4)) {
              puVar10 = puVar5;
            }
          }
          if (puVar10 != puVar8) {
            uVar3 = *puVar10;
            *puVar10 = *puVar8;
            *puVar8 = uVar3;
          }
        }
        goto LAB_142659096;
      }
LAB_142659087:
      local_338 = lVar2;
      HeapSortInternal<FParticleOrder,FIdentityFunctor,TDereferenceWrapper<FParticleOrder,_FDynamicSpriteEmitterDataBase::SortSpriteParticles_::_2_::FCompareParticleOrderZ>_>
                (puVar10,lVar4,param_3,param_4);
LAB_142659096:
      plVar6 = plVar6 + -3;
    } while (&local_328 <= plVar6);
  }
  return;
code_r0x000142658fb0:
  pfVar1 = (float *)((longlong)puVar5 + 0xc);
  puVar5 = puVar10;
  if (*(float *)((longlong)puVar9 + 4) < *pfVar1 || *(float *)((longlong)puVar9 + 4) == *pfVar1)
  goto LAB_142658fa7;
LAB_142658fc0:
  do {
    puVar5 = puVar7;
    puVar7 = puVar5 + -1;
    if (puVar7 <= puVar9) break;
  } while (*(float *)((longlong)puVar5 + -4) < *(float *)((longlong)puVar9 + 4) ||
           *(float *)((longlong)puVar5 + -4) == *(float *)((longlong)puVar9 + 4));
  if (puVar10 <= puVar7) {
    puVar5 = puVar10;
    if (puVar10 != puVar7) {
      uVar3 = *puVar10;
      *puVar10 = *puVar7;
      *puVar7 = uVar3;
    }
    goto LAB_142658fa7;
  }
  if (puVar9 != puVar7) {
    uVar3 = *puVar9;
    *puVar9 = *puVar7;
    *puVar7 = uVar3;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar7 + (-8 - (longlong)puVar9) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar8 - (longlong)puVar10 & 0xfffffffffffffff8U)) {
    if (puVar10 < puVar8) {
      *plVar6 = (longlong)puVar10;
      plVar6[1] = (longlong)puVar8;
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar7 <= puVar9 + 1) goto LAB_142659096;
    puVar8 = puVar5 + -2;
    puVar10 = puVar9;
  }
  else {
    if (puVar9 + 1 < puVar7) {
      *plVar6 = (longlong)puVar9;
      plVar6[1] = (longlong)(puVar5 + -2);
      *(int *)(plVar6 + 2) = (int)local_338;
      plVar6 = plVar6 + 3;
    }
    if (puVar8 <= puVar10) goto LAB_142659096;
  }
  lVar4 = ((longlong)puVar8 - (longlong)puVar10 >> 3) + 1;
  puVar9 = puVar10;
  if ((int)local_338 == 0) goto LAB_142659087;
  goto LAB_142658f70;
}



// FUNCTION 142659120 FUN_142659120 body=89 status=ok
// SIG undefined FUN_142659120(void)

void FUN_142659120(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UDistributionVectorConstant::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 142659180 FUN_142659180 body=238 status=ok
// SIG undefined FUN_142659180(void)

undefined8 * FUN_142659180(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  return param_1;
}



// FUNCTION 142659270 FUN_142659270 body=206 status=ok
// SIG undefined FUN_142659270(void)

undefined8 * FUN_142659270(undefined8 *param_1)

{
  FDynamicEmitterDataBase::FDynamicEmitterDataBase();
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_145150680;
  FUN_142619420(param_1 + 7);
  param_1[7] = &PTR__scalar_deleting_destructor__145131a58;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x25] = 0x3f800000;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(uint *)((longlong)param_1 + 0x174) = *(uint *)((longlong)param_1 + 0x174) & 0xfffffff0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  return param_1;
}



// FUNCTION 142659340 FUN_142659340 body=235 status=ok
// SIG undefined FUN_142659340(void)

undefined8 *
FUN_142659340(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  *(undefined4 *)(param_1 + 1) = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0x66] = 0;
  *(undefined2 *)(param_1 + 0x67) = 1;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0xffffffff;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xce) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x674) = param_2;
  *(undefined2 *)(param_1 + 0xcf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33a) = 1;
  *param_1 = &PTR_FUN_1451505a0;
  FUN_142659180(param_1 + 0xd0);
  *(undefined4 *)((longlong)param_1 + 0x804) = param_5;
  *(undefined4 *)(param_1 + 0x100) = param_4;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0x101] = &PTR__scalar_deleting_destructor__144deb628;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  return param_1;
}



// FUNCTION 142659430 FUN_142659430 body=151 status=ok
// SIG undefined FUN_142659430(void)

undefined8 * FUN_142659430(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0x66] = 0;
  *(undefined2 *)(param_1 + 0x67) = 1;
  *(undefined1 *)((longlong)param_1 + 0x33a) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *param_1 = &PTR_FUN_1451505a0;
  FUN_142659180(param_1 + 0xd0);
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0x101] = &PTR__scalar_deleting_destructor__144deb628;
  param_1[0x105] = 0;
  return param_1;
}



// FUNCTION 1426594d0 FUN_1426594d0 body=186 status=ok
// SIG undefined FUN_1426594d0(void)

undefined8 * FUN_1426594d0(undefined8 *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0x66] = 0;
  *(undefined2 *)(param_1 + 0x67) = 1;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *param_1 = &PTR_FUN_145156098;
  *(undefined4 *)(param_1 + 0xcb) = 0xffffffff;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xce) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x674) = 4;
  *(undefined2 *)(param_1 + 0xcf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33a) = 1;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  *(undefined1 *)(param_1 + 0xd2) = 1;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  return param_1;
}



// FUNCTION 142659590 FUN_142659590 body=1079 status=ok
// SIG undefined FUN_142659590(void)

undefined8 * FUN_142659590(undefined8 *param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  char cVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [96];
  
  uVar13 = 0;
  uVar15 = 0;
  uVar16 = uVar13;
  if (*(longlong *)(param_2 + 0x6f0) != 0) {
    uVar16 = *(undefined8 *)(*(longlong *)(param_2 + 0x6f0) + 0x18);
  }
  FUN_14271d7c0(param_1,param_2,uVar16);
  *param_1 = &PTR_FUN_145150700;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = *(undefined8 *)(param_2 + 0x118);
  *(uint *)(param_1 + 0x77) =
       *(uint *)(param_1 + 0x77) ^
       ((uint)(*(byte *)(param_2 + 0x2f1) >> 4) ^ *(uint *)(param_1 + 0x77)) & 1;
  bVar11 = FUN_142610620(param_2);
  *(uint *)(param_1 + 0x77) = *(uint *)(param_1 + 0x77) & 0xfffffffd;
  *(uint *)(param_1 + 0x77) = *(uint *)(param_1 + 0x77) | (uint)bVar11 * 2;
  iVar4 = *(int *)(param_2 + 0x790);
  if ((iVar4 < 0) || (*(int *)(param_2 + 0x7b8) <= iVar4)) {
    if ((iVar4 == -1) && (0 < *(int *)(param_2 + 0x7b8))) {
      uVar16 = **(undefined8 **)(param_2 + 0x7b0);
    }
    else {
      uVar16 = 0;
    }
  }
  else {
    uVar16 = *(undefined8 *)(*(longlong *)(param_2 + 0x7b0) + (longlong)iVar4 * 8);
  }
  *(undefined8 *)((longlong)param_1 + 0x3bc) = uVar16;
  param_1[0x79] = param_3;
  param_1[0x7a] = 0;
  plVar5 = *(longlong **)(DAT_146b17150 + 0x3a8);
  if (plVar5 != (longlong *)0x0) {
    uVar13 = (**(code **)(*plVar5 + 0x2a8))(plVar5,0,0);
  }
  local_98 = 0x3f800000;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3f800000;
  puVar14 = (undefined4 *)FUN_14270d9c0(local_88,&local_98,0,0,1);
  FUN_14257dfd0(param_1 + 0x7b);
  param_1[0x7b] = &PTR__scalar_deleting_destructor__1440fad20;
  param_1[0xa2] = uVar13;
  uVar7 = *puVar14;
  uVar8 = puVar14[1];
  uVar9 = puVar14[2];
  uVar10 = puVar14[3];
  param_1[0xa5] = 0x3e;
  *(undefined4 *)(param_1 + 0xa3) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x51c) = uVar8;
  *(undefined4 *)(param_1 + 0xa4) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x524) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x534) = 0;
  *(undefined4 *)(param_1 + 0xa7) = *(undefined4 *)(param_2 + 0x790);
  *(undefined4 *)((longlong)param_1 + 0x53c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa9) = 4;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xa8] = &PTR_FUN_14509d958;
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined4 *)(param_1 + 0xae) = 2;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x5e4) = *(undefined4 *)(param_1[0x26] + 8);
  *(uint *)(param_1 + 0xbd) = (*(uint *)(param_1 + 0xbd) & 0xfffffffe | (uint)param_4) & 0xfffffffd;
  *(uint *)(param_1 + 0xa6) = (uint)*(byte *)(param_2 + 0x71d);
  if ((*(longlong *)(param_2 + 0x6f0) != 0) &&
     (cVar12 = FUN_142601a90(*(longlong *)(param_2 + 0x6f0),*(undefined4 *)(param_2 + 0x790)),
     cVar12 != '\0')) {
    uVar15 = 0x80000;
  }
  uVar15 = *(uint *)((longlong)param_1 + 0x1c) & 0xfff7ffff | uVar15;
  *(uint *)((longlong)param_1 + 0x1c) = uVar15;
  if ((((*(uint *)(param_1 + 0xbd) & 1) != 0) &&
      (lVar6 = *(longlong *)(param_2 + 0x6f0), lVar6 != 0)) && (*(char *)(lVar6 + 0xf8) == '\x02'))
  {
    fVar1 = *(float *)(lVar6 + 0x100);
    fVar2 = *(float *)(lVar6 + 0x104);
    fVar3 = *(float *)(lVar6 + 0xfc);
    fVar17 = *(float *)(lVar6 + 0x110) - fVar2;
    fVar18 = *(float *)(lVar6 + 0x10c) - fVar1;
    fVar19 = *(float *)(lVar6 + 0x108) - fVar3;
    *(uint *)(param_1 + 0xbd) = *(uint *)(param_1 + 0xbd) | 2;
    *(float *)((longlong)param_1 + 0x5ec) = fVar19 * 0.5 + fVar3;
    *(float *)(param_1 + 0xbe) = fVar18 * 0.5 + fVar1;
    *(float *)((longlong)param_1 + 0x5f4) = fVar17 * 0.5 + fVar2;
    *(float *)(param_1 + 0xbf) = fVar19 * 0.5;
    *(ulonglong *)((longlong)param_1 + 0x5fc) = CONCAT44(fVar17 * 0.5,fVar18 * 0.5);
    *(float *)((longlong)param_1 + 0x604) =
         SQRT((fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17) * 0.25);
  }
  *(uint *)((longlong)param_1 + 0x1c) =
       (~((uint)*(ushort *)((longlong)param_1 + 0x3bc) * 2) ^ uVar15) & 2 ^ uVar15;
  return param_1;
}



// FUNCTION 1426599d0 FUN_1426599d0 body=47 status=ok
// SIG undefined FUN_1426599d0(void)

undefined8 * FUN_1426599d0(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__145150880;
  param_1[7] = 0;
  param_1[8] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 142659a00 FUN_142659a00 body=388 status=ok
// SIG undefined FUN_142659a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142659a00(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__145151328;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x10) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x84) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x8c) = DAT_1468b5d98;
  param_1[0x12] = 0;
  *(uint *)(param_1 + 0x13) = *(uint *)(param_1 + 0x13) & 0xfffffff9 | 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1b) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xdc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xe4) = DAT_1468b5d98;
  param_1[0x1d] = 0;
  *(uint *)(param_1 + 0x1e) = *(uint *)(param_1 + 0x1e) & 0xfffffff9 | 1;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x26) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x134) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x13c) = DAT_1468b5d98;
  param_1[0x28] = 0;
  *(uint *)(param_1 + 0x29) = *(uint *)(param_1 + 0x29) & 0xfffffff9 | 1;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 142659b90 FUN_142659b90 body=33 status=ok
// SIG undefined FUN_142659b90(void)

undefined8 * FUN_142659b90(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR_FUN_145150fa8;
  return param_1;
}



// FUNCTION 142659bc0 FUN_142659bc0 body=33 status=ok
// SIG undefined FUN_142659bc0(void)

undefined8 * FUN_142659bc0(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR_FUN_145141f50;
  return param_1;
}



// FUNCTION 142659bf0 FUN_142659bf0 body=47 status=ok
// SIG undefined FUN_142659bf0(void)

undefined8 * FUN_142659bf0(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__1451516a8;
  param_1[7] = 0;
  param_1[8] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  return param_1;
}



// FUNCTION 142659c20 FUN_142659c20 body=184 status=ok
// SIG undefined FUN_142659c20(void)

undefined8 * FUN_142659c20(undefined8 *param_1)

{
  void *pvVar1;
  
  UParticleModule::UParticleModule();
  param_1[7] = 0;
  param_1[8] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *param_1 = &PTR_FUN_145151a38;
  param_1[0xb] = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc03;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b07428)
  {
    _Init_thread_header(&DAT_146b07428);
    if (DAT_146b07428 == -1) {
      FName::FName(&DAT_146b07420,L"DynamicSeed",1);
      _Init_thread_footer(&DAT_146b07428);
    }
  }
  param_1[0xb] = DAT_146b07420;
  return param_1;
}



// FUNCTION 142659ce0 FUN_142659ce0 body=124 status=ok
// SIG undefined FUN_142659ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142659ce0(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__145151dc8;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffd | 1;
  return param_1;
}



// FUNCTION 142659d60 FUN_142659d60 body=134 status=ok
// SIG undefined FUN_142659d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142659d60(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__1451524c8;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfffffff7 | 7;
  return param_1;
}



// FUNCTION 142659df0 FUN_142659df0 body=134 status=ok
// SIG undefined FUN_142659df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142659df0(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__145152848;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfffffff7 | 7;
  return param_1;
}



// FUNCTION 142659e80 FUN_142659e80 body=65 status=ok
// SIG undefined FUN_142659e80(void)

undefined8 * FUN_142659e80(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  *param_1 = &PTR_FUN_145152bc8;
  *(undefined4 *)(param_1 + 8) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x41200000;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  return param_1;
}



// FUNCTION 142659ed0 FUN_142659ed0 body=289 status=ok
// SIG undefined FUN_142659ed0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142659ed0(undefined8 *param_1)

{
  void *pvVar1;
  
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__145151dc8;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xe) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x74) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x7c) = DAT_1468b5d98;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffd | 1;
  *param_1 = &PTR_FUN_145152148;
  param_1[0x11] = 0;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b07438)
  {
    _Init_thread_header(&DAT_146b07438);
    if (DAT_146b07438 == -1) {
      FName::FName(&DAT_146b07430,L"InitialSizeSeed",1);
      _Init_thread_footer(&DAT_146b07438);
    }
  }
  param_1[0x11] = DAT_146b07430;
  return param_1;
}



// FUNCTION 14265a000 FUN_14265a000 body=189 status=ok
// SIG undefined FUN_14265a000(void)

undefined8 * FUN_14265a000(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 3;
  *param_1 = &PTR__scalar_deleting_destructor__145152f48;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 1;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffdff;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 2;
  return param_1;
}



// FUNCTION 14265a0c0 UParticleModuleSpawnBase body=37 status=ok
// SIG undefined UParticleModuleSpawnBase(void)

undefined8 * UParticleModuleSpawnBase::UParticleModuleSpawnBase(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 3;
  *param_1 = &PTR_FUN_145150c00;
  return param_1;
}



// FUNCTION 14265a0f0 FUN_14265a0f0 body=90 status=ok
// SIG undefined FUN_14265a0f0(void)

undefined8 * FUN_14265a0f0(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) | 3;
  *param_1 = &PTR_FUN_1451532f0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffc;
  *(undefined4 *)(param_1 + 8) = 0x42480000;
  *(undefined4 *)(param_1 + 0x11) = 0x3dcccccd;
  return param_1;
}



// FUNCTION 14265a150 FUN_14265a150 body=40 status=ok
// SIG undefined FUN_14265a150(void)

undefined8 * FUN_14265a150(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *param_1 = &PTR_FUN_145153a18;
  return param_1;
}



// FUNCTION 14265a180 FUN_14265a180 body=79 status=ok
// SIG undefined FUN_14265a180(void)

undefined8 * FUN_14265a180(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *(uint *)((longlong)param_1 + 0x6c) = *(uint *)((longlong)param_1 + 0x6c) | 0x1e;
  *param_1 = &PTR_FUN_145153698;
  param_1[0xb] = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 100) = 0x3f800000;
  return param_1;
}



// FUNCTION 14265a1d0 FUN_14265a1d0 body=33 status=ok
// SIG undefined FUN_14265a1d0(void)

undefined8 * FUN_14265a1d0(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR_FUN_145153d98;
  return param_1;
}



// FUNCTION 14265a200 FUN_14265a200 body=33 status=ok
// SIG undefined FUN_14265a200(void)

undefined8 * FUN_14265a200(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR_FUN_145154118;
  return param_1;
}



// FUNCTION 14265a230 FUN_14265a230 body=65 status=ok
// SIG undefined FUN_14265a230(void)

undefined8 * FUN_14265a230(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__145154498;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 14265a280 FUN_14265a280 body=65 status=ok
// SIG undefined FUN_14265a280(void)

undefined8 * FUN_14265a280(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__145154818;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 14265a2d0 FUN_14265a2d0 body=166 status=ok
// SIG undefined FUN_14265a2d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14265a2d0(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__145154b98;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  return param_1;
}



// FUNCTION 14265a380 FUN_14265a380 body=151 status=ok
// SIG undefined FUN_14265a380(void)

undefined8 * FUN_14265a380(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR_FUN_145154f18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x41;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  return param_1;
}



// FUNCTION 14265a420 FUN_14265a420 body=119 status=ok
// SIG undefined FUN_14265a420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14265a420(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__145155298;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  return param_1;
}



// FUNCTION 14265a4a0 FUN_14265a4a0 body=126 status=ok
// SIG undefined FUN_14265a4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14265a4a0(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__145155618;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *(uint *)(param_1 + 0x12) = *(uint *)(param_1 + 0x12) & 0xfffffffe;
  return param_1;
}



// FUNCTION 14265a520 FUN_14265a520 body=331 status=ok
// SIG undefined FUN_14265a520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14265a520(undefined8 *param_1)

{
  void *pvVar1;
  
  UParticleModule::UParticleModule();
  *param_1 = &PTR__scalar_deleting_destructor__145154b98;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 1;
  *param_1 = &PTR__scalar_deleting_destructor__145155998;
  param_1[0x19] = 0;
  *(uint *)(param_1 + 0x1a) = *(uint *)(param_1 + 0x1a) & 0xfffffff4 | 4;
  pvVar1 = ThreadLocalStoragePointer;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0xc01;
  if (*(int *)(*(longlong *)((longlong)pvVar1 + (ulonglong)_tls_index * 8) + 0x38) < DAT_146b07458)
  {
    _Init_thread_header(&DAT_146b07458);
    if (DAT_146b07458 == -1) {
      FName::FName(&DAT_146b07450,L"InitialVelSeed",1);
      _Init_thread_footer(&DAT_146b07458);
    }
  }
  param_1[0x19] = DAT_146b07450;
  return param_1;
}



// FUNCTION 14265a670 FUN_14265a670 body=321 status=ok
// SIG undefined FUN_14265a670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14265a670(undefined8 *param_1)

{
  FUN_142685ae0();
  *param_1 = &PTR_FUN_145155d18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xf) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x7c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x84) = DAT_1468b5d98;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x1b) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xdc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xe4) = DAT_1468b5d98;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x27) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x13c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x144) = DAT_1468b5d98;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 14265a7c0 ~TArray<FEmitterDynamicParameter,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FEmitterDynamicParameter,FDefaultAllocator>(void)

void TArray<FEmitterDynamicParameter,FDefaultAllocator>::
     ~TArray<FEmitterDynamicParameter,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x28);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 10;
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



// FUNCTION 14265a820 ~TIndirectArray<FMeshBatch,TInlineAllocator<4,FDefaultAllocator>_> body=126 status=ok
// SIG undefined ~TIndirectArray<FMeshBatch,TInlineAllocator<4,FDefaultAllocator>_>(void)

void TIndirectArray<FMeshBatch,TInlineAllocator<4,FDefaultAllocator>_>::
     ~TIndirectArray<FMeshBatch,TInlineAllocator<4,FDefaultAllocator>_>(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 5);
  puVar1 = (undefined8 *)param_1[4];
  if ((undefined8 *)param_1[4] == (undefined8 *)0x0) {
    puVar1 = param_1;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_1408bbda0(*puVar1);
    FMemory::Free(*puVar1);
    puVar1 = puVar1 + 1;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14265a8a0 ~FDynamicBeam2EmitterData body=70 status=ok
// SIG undefined ~FDynamicBeam2EmitterData(void)

void FDynamicBeam2EmitterData::~FDynamicBeam2EmitterData(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__145131a78;
  if (param_1[0x23] != 0) {
    FMemory::Free();
  }
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase(param_1 + 7);
  *param_1 = &PTR__scalar_deleting_destructor__1451279d8;
  return;
}



// FUNCTION 14265a8f0 FUN_14265a8f0 body=45 status=ok
// SIG undefined FUN_14265a8f0(void)

void FUN_14265a8f0(undefined8 *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1 + 0x14,0,0xc0);
  *param_1 = &PTR__scalar_deleting_destructor__1451279d8;
  return;
}



// FUNCTION 14265a920 FUN_14265a920 body=158 status=ok
// SIG undefined FUN_14265a920(void)

void FUN_14265a920(longlong param_1)

{
  *(undefined ***)(param_1 + 0x808) = &PTR__scalar_deleting_destructor__144deb628;
  *(undefined4 *)(param_1 + 0x820) = 0;
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x810,0);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x818,0);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x818);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x810);
  if (*(longlong *)(param_1 + 0x728) != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x650);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x648);
  FUN_141edd2d0(param_1);
  return;
}



// FUNCTION 14265a9c0 FUN_14265a9c0 body=960 status=ok
// SIG undefined FUN_14265a9c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14265a9c0(undefined8 *param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  undefined8 in_stack_ffffffffffffff80;
  undefined4 uVar8;
  undefined *local_58;
  undefined1 *puStack_50;
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  char local_30;
  undefined8 local_28;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff80 >> 0x20);
  uVar2 = *param_1;
  if (*(char *)((longlong)param_1 + 0x51) != '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      iVar6 = *(int *)((longlong)param_1 + 0x54);
      if (DAT_146b072ac < iVar6) {
        DAT_146b072ac = 0x40;
        if (0x3f < iVar6) {
          DAT_146b072ac = iVar6;
        }
        DAT_146b072a0 = FMemory::Realloc(DAT_146b072a0,(longlong)DAT_146b072ac << 3,0);
      }
      uVar3 = DAT_146b072a0;
      lVar4 = param_1[1];
      _DAT_146b072a8 = iVar6;
      FUN_142679a80(uVar2,*(undefined4 *)(lVar4 + 0x44),*(undefined1 *)(lVar4 + 0xb4),
                    *(undefined4 *)(lVar4 + 0xc),*(undefined8 *)(lVar4 + 0x28),
                    CONCAT44(uVar8,*(undefined4 *)(lVar4 + 0x10)),*(undefined8 *)(lVar4 + 0x30),
                    param_1[2],param_1[3] + 0x80,DAT_146b072a0);
      if (*(char *)(param_1 + 10) == '\0') {
        FUN_142673270(uVar2,param_1[4],param_1[7],0,uVar3,param_1[2] + 0x8dc,param_1[3] + 0x80,
                      *(undefined4 *)(param_1 + 0xb));
      }
      else {
        FUN_142672c10(uVar2,param_1[4],param_1[7],0,uVar3,param_1[2] + 0x8dc,param_1[3] + 0x80);
      }
    }
    else {
      puStack_50 = local_res8;
      local_58 = &DAT_14060d670;
      local_res8[0] = 0;
      lVar4 = FUN_1415d8310(&local_58,&DAT_146216a38);
      local_48 = (undefined8 *)(lVar4 + 0x18);
      local_40 = *local_48;
      local_38 = *(longlong *)(lVar4 + 0x28);
      local_30 = '\0';
      local_28 = *(undefined8 *)(lVar4 + 0x30);
      *(undefined8 ***)(lVar4 + 0x30) = &local_48;
      *(int *)(lVar4 + 0x38) = *(int *)(lVar4 + 0x38) + 1;
      puStack_50 = local_res8;
      local_58 = &DAT_14060d670;
      local_res8[0] = 0;
      lVar4 = FUN_1415d8310(&local_58,&DAT_146216a38);
      iVar6 = *(int *)((longlong)param_1 + 0x54) * 8;
      uVar7 = *(longlong *)(lVar4 + 0x18) + 3U & 0xfffffffffffffffc;
      puVar1 = (ulonglong *)(lVar4 + 0x18);
      uVar5 = (longlong)iVar6 + uVar7;
      if (*(ulonglong *)(lVar4 + 0x20) < uVar5) {
        FMemStackBase::AllocateNewChunk(puVar1,iVar6 + 4);
        uVar7 = *puVar1 + 3 & 0xfffffffffffffffc;
        uVar5 = (longlong)iVar6 + uVar7;
      }
      *puVar1 = uVar5;
      lVar4 = param_1[1];
      FUN_142679a80(uVar2,*(undefined4 *)(lVar4 + 0x44),*(undefined1 *)(lVar4 + 0xb4),
                    *(undefined4 *)(lVar4 + 0xc),*(undefined8 *)(lVar4 + 0x28),
                    CONCAT44(uVar8,*(undefined4 *)(lVar4 + 0x10)),*(undefined8 *)(lVar4 + 0x30),
                    param_1[2],param_1[3] + 0x80,uVar7);
      if (*(char *)(param_1 + 10) == '\0') {
        FUN_142673270(uVar2,param_1[4],param_1[7],0,uVar7,param_1[2] + 0x8dc,param_1[3] + 0x80,
                      *(undefined4 *)(param_1 + 0xb));
      }
      else {
        FUN_142672c10(uVar2,param_1[4],param_1[7],0,uVar7,param_1[2] + 0x8dc,param_1[3] + 0x80);
      }
      if (local_30 == '\0') {
        local_30 = 1;
        *(int *)(local_48 + 4) = *(int *)(local_48 + 4) + -1;
        if (local_38 != local_48[2]) {
          FMemStackBase::FreeChunks();
        }
        *local_48 = local_40;
        local_48[3] = local_28;
      }
    }
    return;
  }
  if (*(char *)(param_1 + 10) == '\0') {
    FUN_142673270(uVar2,param_1[4],param_1[7],0,0,param_1[2] + 0x8dc,param_1[3] + 0x80,
                  *(undefined4 *)(param_1 + 0xb));
    return;
  }
  FUN_142672c10(uVar2,param_1[4],param_1[7],0,0,param_1[2] + 0x8dc,param_1[3] + 0x80);
  return;
}



// FUNCTION 14265ad80 FUN_14265ad80 body=43 status=ok
// SIG undefined FUN_14265ad80(void)

undefined8 * FUN_14265ad80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 14265adb0 FUN_14265adb0 body=97 status=ok
// SIG undefined FUN_14265adb0(void)

undefined8 * FUN_14265adb0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145156128;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14265ae20 FUN_14265ae20 body=97 status=ok
// SIG undefined FUN_14265ae20(void)

undefined8 * FUN_14265ae20(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145156108;
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14265ae90 FUN_14265ae90 body=43 status=ok
// SIG undefined FUN_14265ae90(void)

undefined8 * FUN_14265ae90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14265aec0 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FDynamicMeshEmitterCollectorResources::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145156118;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 2);
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14265af10 FUN_14265af10 body=119 status=ok
// SIG undefined FUN_14265af10(void)

undefined8 * FUN_14265af10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145150680;
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase(param_1 + 7);
  *param_1 = &PTR__scalar_deleting_destructor__1451279d8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_14261b230();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,400);
  }
  return param_1;
}



// FUNCTION 14265af90 FUN_14265af90 body=43 status=ok
// SIG undefined FUN_14265af90(void)

undefined8 * FUN_14265af90(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14265afc0 FUN_14265afc0 body=52 status=ok
// SIG undefined FUN_14265afc0(void)

undefined8 FUN_14265afc0(undefined8 param_1,ulonglong param_2)

{
  FUN_14265a920();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x840);
  }
  return param_1;
}



// FUNCTION 14265b000 FUN_14265b000 body=79 status=ok
// SIG undefined FUN_14265b000(void)

longlong FUN_14265b000(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x650);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x648);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6c8);
  }
  return param_1;
}



// FUNCTION 14265b050 FUN_14265b050 body=222 status=ok
// SIG undefined FUN_14265b050(void)

longlong FUN_14265b050(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0xa8);
      if (*(longlong *)(param_1 + 0xa8) == 0) {
        lVar2 = param_1 + 8;
      }
      puVar1 = *(undefined8 **)(lVar2 + lVar3);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar4 < *(int *)(param_1 + 0xb0));
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xb4)) {
    TArray<ASBZAICharacter_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>::ResizeTo
              (param_1 + 8,0);
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::operator_delete();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 14265b130 FUN_14265b130 body=79 status=ok
// SIG undefined FUN_14265b130(void)

longlong FUN_14265b130(longlong param_1,ulonglong param_2)

{
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x650);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0x648);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x6a8);
  }
  return param_1;
}



// FUNCTION 14265b180 FUN_14265b180 body=249 status=ok
// SIG undefined FUN_14265b180(void)

undefined8 * FUN_14265b180(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 0xa8;
  *param_1 = &PTR_FUN_145150700;
  (**(code **)(*plVar1 + 0x30))(plVar1);
  if (param_1[0x79] != 0) {
    FUN_14265b050(param_1[0x79],1);
  }
  param_1[0x79] = 0;
  FUN_142660610(param_1);
  if (param_1[0xba] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb8] != 0) {
    FMemory::Free();
  }
  TIndirectArray<FMeshBatch,TInlineAllocator<4,FDefaultAllocator>_>::
  ~TIndirectArray<FMeshBatch,TInlineAllocator<4,FDefaultAllocator>_>(param_1 + 0xb1);
  *plVar1 = (longlong)&PTR_FUN_14509d958;
  if (param_1[0xb0] != 0) {
    FMemory::Free();
  }
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 0xaf);
  FUN_141edd2d0(plVar1);
  FMaterialRenderProxy::~FMaterialRenderProxy(param_1 + 0x7b);
  if (param_1[0x74] != 0) {
    FMemory::Free();
  }
  FUN_14271e9f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x610);
  }
  return param_1;
}



// FUNCTION 14265b280 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleOrbit::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 14265b2f0 `scalar_deleting_destructor' body=64 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneTrack::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FEmitterDynamicParameter,FDefaultAllocator>::
  ~TArray<FEmitterDynamicParameter,FDefaultAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 14265b330 FUN_14265b330 body=79 status=ok
// SIG undefined FUN_14265b330(void)

longlong FUN_14265b330(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  TArray<FEmitterDynamicParameter,FDefaultAllocator>::
  ~TArray<FEmitterDynamicParameter,FDefaultAllocator>(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 14265b380 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleSpawn::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 14265b400 FUN_14265b400 body=70 status=ok
// SIG undefined FUN_14265b400(void)

longlong FUN_14265b400(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 14265b450 `scalar_deleting_destructor' body=87 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleVelocity::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 14265b4b0 FUN_14265b4b0 body=87 status=ok
// SIG undefined FUN_14265b4b0(void)

longlong FUN_14265b4b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 14265b510 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleVelocity_Seeded::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 14265b580 FUN_14265b580 body=104 status=ok
// SIG undefined FUN_14265b580(void)

longlong FUN_14265b580(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x158);
  }
  return param_1;
}



// FUNCTION 14265b5f0 FUN_14265b5f0 body=78 status=ok
// SIG undefined FUN_14265b5f0(void)

longlong FUN_14265b5f0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = FUN_1408bed80(param_1,1);
  return (ulonglong)(uint)(iVar1 % 0x59) * 0xb8 +
         *(longlong *)(*param_1 + (longlong)(iVar1 / 0x59) * 8);
}



// FUNCTION 14265b640 FUN_14265b640 body=495 status=ok
// SIG undefined FUN_14265b640(void)

void FUN_14265b640(longlong param_1,longlong param_2,float *param_3,float *param_4,float *param_5)

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
  longlong lVar12;
  
  lVar12 = (longlong)*(int *)(param_2 + 0x90);
  if (*(int *)(param_2 + 0x90) != 0) {
    if (*(char *)(param_2 + 0xb4) != '\0') {
      *param_4 = *(float *)(lVar12 + 0xc + param_1) + *param_4;
      param_4[1] = *(float *)(lVar12 + 0x10 + param_1) + param_4[1];
      param_4[2] = *(float *)(lVar12 + 0x14 + param_1) + param_4[2];
      *param_5 = *(float *)(lVar12 + 0x3c + param_1) + *param_5;
      param_5[1] = *(float *)(lVar12 + 0x40 + param_1) + param_5[1];
      param_5[2] = *(float *)(lVar12 + 0x44 + param_1) + param_5[2];
      return;
    }
    fVar1 = *(float *)(lVar12 + 0xc + param_1);
    fVar2 = *(float *)(lVar12 + 0x10 + param_1);
    fVar3 = *(float *)(lVar12 + 0x14 + param_1);
    fVar4 = param_3[1];
    fVar5 = param_3[2];
    fVar6 = param_3[0xd];
    fVar7 = param_3[0xe];
    fVar8 = param_3[5];
    fVar9 = param_3[6];
    fVar10 = param_3[9];
    fVar11 = param_3[10];
    *param_4 = fVar1 * *param_3 + fVar2 * param_3[4] + param_3[0xc] * 0.0 + fVar3 * param_3[8] +
               *param_4;
    param_4[1] = fVar1 * fVar4 + fVar2 * fVar8 + fVar6 * 0.0 + fVar3 * fVar10 + param_4[1];
    param_4[2] = fVar1 * fVar5 + fVar2 * fVar9 + fVar7 * 0.0 + fVar3 * fVar11 + param_4[2];
    fVar1 = *(float *)(lVar12 + 0x3c + param_1);
    fVar2 = *(float *)(lVar12 + 0x40 + param_1);
    fVar3 = *(float *)(lVar12 + 0x44 + param_1);
    fVar4 = param_3[5];
    fVar5 = param_3[6];
    fVar6 = param_3[0xd];
    fVar7 = param_3[0xe];
    fVar8 = param_3[1];
    fVar9 = param_3[2];
    fVar10 = param_3[9];
    fVar11 = param_3[10];
    *param_5 = fVar2 * param_3[4] + fVar1 * *param_3 + param_3[0xc] * 0.0 + fVar3 * param_3[8] +
               *param_5;
    param_5[1] = fVar2 * fVar4 + fVar1 * fVar8 + fVar6 * 0.0 + fVar3 * fVar10 + param_5[1];
    param_5[2] = fVar2 * fVar5 + fVar1 * fVar9 + fVar7 * 0.0 + fVar3 * fVar11 + param_5[2];
  }
  return;
}



// FUNCTION 14265b830 FUN_14265b830 body=39 status=ok
// SIG undefined FUN_14265b830(void)

void FUN_14265b830(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142661350(1,*(undefined4 *)(*(longlong *)(param_2 + 0x130) + 8),param_1);
  *(undefined1 *)(lVar1 + 0x678) = 1;
  return;
}



// FUNCTION 14265b860 FUN_14265b860 body=252 status=ok
// SIG undefined FUN_14265b860(void)

longlong * FUN_14265b860(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x130) + 8);
  uVar3 = (**(code **)(*param_1 + 0x58))();
  uVar4 = (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  if (DAT_1464c9c6c == '\0') {
    plVar7 = (longlong *)operator_new(0x840);
    if (plVar7 != (longlong *)0x0) {
      FUN_142659340(plVar7,2,uVar1,uVar4,uVar3);
      *plVar7 = (longlong)&PTR_FUN_145150610;
      goto LAB_14265b905;
    }
  }
  else {
    lVar6 = operator_new(0x840);
    if (lVar6 != 0) {
      plVar7 = (longlong *)FUN_142659340(lVar6,2,uVar1,uVar4,uVar3);
      goto LAB_14265b905;
    }
  }
  plVar7 = (longlong *)0x0;
LAB_14265b905:
  (**(code **)(*plVar7 + 0x28))(plVar7);
  *(undefined1 *)(plVar7 + 0xcf) = 1;
  plVar2 = *(longlong **)(param_1[0x28] + 0x38);
  iVar5 = FDynamicMeshEmitterData::GetMeshLODIndexFromProxy(param_1,param_2);
  FUN_1426796c0(param_1,plVar7,*(undefined8 *)(*plVar2 + (longlong)iVar5 * 8));
  return plVar7;
}



// FUNCTION 14265b960 FUN_14265b960 body=36 status=ok
// SIG undefined FUN_14265b960(void)

void FUN_14265b960(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_142661350(0,*(undefined4 *)(*(longlong *)(param_2 + 0x130) + 8),param_1);
  *(undefined1 *)(lVar1 + 0x678) = 1;
  return;
}



// FUNCTION 14265b990 FUN_14265b990 body=290 status=ok
// SIG undefined FUN_14265b990(void)

void FUN_14265b990(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined8 param_9,undefined8 *param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 local_res20 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar4 = param_10;
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  *param_10 = *(undefined8 *)(param_2 + 0x80);
  param_10[1] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x98);
  param_10[2] = *(undefined8 *)(param_2 + 0x90);
  param_10[3] = uVar5;
  uVar1 = *(undefined4 *)(param_2 + 0xa4);
  uVar2 = *(undefined4 *)(param_2 + 0xa8);
  uVar3 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_10 + 4) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined4 *)((longlong)param_10 + 0x24) = uVar1;
  *(undefined4 *)(param_10 + 5) = uVar2;
  *(undefined4 *)((longlong)param_10 + 0x2c) = uVar3;
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  uVar2 = *(undefined4 *)(param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 0xbc);
  *(undefined4 *)(param_10 + 6) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((longlong)param_10 + 0x34) = uVar1;
  *(undefined4 *)(param_10 + 7) = uVar2;
  *(undefined4 *)((longlong)param_10 + 0x3c) = uVar3;
  FMatrix::Inverse((undefined8 *)(param_2 + 0x80),&local_48);
  puVar4[8] = local_48;
  puVar4[9] = uStack_40;
  puVar4[0x10] = param_3;
  puVar4[10] = local_38;
  puVar4[0xb] = uStack_30;
  *(undefined4 *)(puVar4 + 0xc) = local_28;
  *(undefined4 *)((longlong)puVar4 + 100) = uStack_24;
  *(undefined4 *)(puVar4 + 0xd) = uStack_20;
  *(undefined4 *)((longlong)puVar4 + 0x6c) = uStack_1c;
  *(undefined4 *)(puVar4 + 0xe) = local_18;
  *(undefined4 *)((longlong)puVar4 + 0x74) = uStack_14;
  *(undefined4 *)(puVar4 + 0xf) = uStack_10;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_c;
  (**(code **)(*param_1 + 0x38))(param_1);
  *(undefined4 *)((longlong)puVar4 + 0x8c) = param_5;
  *(undefined4 *)(puVar4 + 0x11) = param_4;
  (**(code **)(*param_1 + 0x68))(param_1,local_res20,&param_10);
  uVar5 = FUN_141ee2ba0();
  puVar6 = (undefined8 *)FUN_141ede7e0(uVar5,local_68,local_res20[0],param_10._0_4_);
  uVar5 = puVar6[1];
  *param_8 = *puVar6;
  param_8[1] = uVar5;
  param_8[2] = puVar6[2];
  puVar4[0x14] = *param_8;
  *(undefined4 *)(puVar4 + 0x13) = local_res20[0];
  return;
}



// FUNCTION 14265bac0 FUN_14265bac0 body=6432 status=ok
// SIG undefined FUN_14265bac0(void)

void FUN_14265bac0(longlong *param_1,float param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,float *param_6,float *param_7,float *param_8,
                  undefined8 *param_9)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
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
  float local_194;
  float local_190;
  float local_184;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float local_164;
  float local_160;
  float local_154;
  float local_150;
  float local_144;
  float local_140;
  float local_13c;
  undefined8 local_130;
  float local_128;
  float local_11c;
  float local_118;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  
  if (param_2 == 0.0) {
    lVar2 = param_1[7];
    fVar17 = *(float *)(lVar2 + 0x40);
    fVar22 = fVar17 * *(float *)(lVar2 + 0x28);
    fVar15 = fVar17 * *(float *)(lVar2 + 0x2c);
    fVar17 = fVar17 * *(float *)(lVar2 + 0x30);
    lVar2 = param_1[6];
    *param_3 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar2 + 0x18);
    lVar2 = param_1[6];
    fVar12 = *(float *)(lVar2 + 0x18);
    *param_4 = CONCAT44(*(float *)(lVar2 + 0x14) - fVar15,*(float *)(lVar2 + 0x10) - fVar22);
    *(float *)(param_4 + 1) = fVar12 - fVar17;
    lVar2 = param_1[6];
    fVar12 = *(float *)(lVar2 + 0x18);
    *param_5 = CONCAT44(fVar15 + *(float *)(lVar2 + 0x14),fVar22 + *(float *)(lVar2 + 0x10));
    *(float *)(param_5 + 1) = fVar17 + fVar12;
    *param_6 = *(float *)(param_1[7] + 0x14);
    *param_7 = *(float *)(param_1[6] + 0x5c) * *(float *)(*param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1[6] + 0x74);
    *(undefined8 *)param_8 = *(undefined8 *)(param_1[6] + 0x6c);
    *(undefined8 *)(param_8 + 2) = uVar1;
    if (param_9 != (undefined8 *)0x0) {
      puVar7 = (undefined4 *)((longlong)*(int *)(*param_1 + 0x94) + param_1[6]);
      *(undefined4 *)param_9 = *puVar7;
      *(undefined4 *)((longlong)param_9 + 4) = puVar7[1];
      *(undefined4 *)(param_9 + 1) = puVar7[2];
      *(undefined4 *)((longlong)param_9 + 0xc) = puVar7[3];
      return;
    }
  }
  else {
    lVar2 = param_1[4];
    if ((lVar2 == 0) || (param_2 != 1.0)) {
      lVar3 = param_1[3];
      lVar9 = param_1[5];
      lVar10 = param_1[2];
      lVar4 = *param_1;
      if (lVar10 == 0) {
        local_108 = *(undefined8 *)(lVar2 + 0x10);
        local_100 = *(float *)(lVar2 + 0x18);
        local_e0 = *(undefined8 *)(lVar9 + 0x28);
        local_140 = *(float *)(lVar9 + 0x40);
        local_f4 = *(float *)(lVar9 + 0x14);
        local_13c = *(float *)(lVar2 + 0x5c) * *(float *)(lVar4 + 0x38);
        fVar17 = *(float *)(lVar9 + 0x30);
        fVar12 = *(float *)(lVar2 + 0x6c);
        fVar15 = *(float *)(lVar2 + 0x70);
        fVar22 = *(float *)(lVar2 + 0x74);
        fVar35 = *(float *)(lVar2 + 0x78);
        lVar10 = lVar2;
      }
      else {
        local_108 = *(undefined8 *)(lVar10 + 0x10);
        local_140 = *(float *)(lVar3 + 0x40);
        local_100 = *(float *)(lVar10 + 0x18);
        local_13c = *(float *)(lVar10 + 0x5c) * *(float *)(lVar4 + 0x38);
        fVar17 = *(float *)(lVar3 + 0x30);
        local_e0 = *(undefined8 *)(lVar3 + 0x28);
        local_f4 = *(float *)(lVar3 + 0x14);
        fVar12 = *(float *)(lVar10 + 0x6c);
        fVar15 = *(float *)(lVar10 + 0x70);
        fVar22 = *(float *)(lVar10 + 0x74);
        fVar35 = *(float *)(lVar10 + 0x78);
      }
      lVar11 = param_1[8];
      if (lVar11 == 0) {
        lVar11 = param_1[6];
        lVar8 = param_1[7];
        local_130 = *(undefined8 *)(lVar11 + 0x10);
        local_128 = *(float *)(lVar11 + 0x18);
        uVar1 = *(undefined8 *)(lVar8 + 0x28);
        local_f8 = *(float *)(lVar8 + 0x40);
        local_160 = *(float *)(lVar8 + 0x14);
        local_118 = *(float *)(lVar11 + 0x5c) * *(float *)(lVar4 + 0x38);
        fVar20 = *(float *)(lVar8 + 0x30);
        fVar25 = DAT_1465345c0;
      }
      else {
        lVar8 = param_1[9];
        local_130 = *(undefined8 *)(lVar11 + 0x10);
        local_128 = *(float *)(lVar11 + 0x18);
        local_f8 = *(float *)(lVar8 + 0x40);
        local_118 = *(float *)(lVar11 + 0x5c) * *(float *)(lVar4 + 0x38);
        fVar20 = *(float *)(lVar8 + 0x30);
        local_160 = *(float *)(lVar8 + 0x14);
        uVar1 = *(undefined8 *)(lVar8 + 0x28);
        lVar8 = param_1[7];
        fVar25 = *(float *)(lVar8 + 0x44);
      }
      fVar28 = *(float *)(lVar9 + 0x44) + fVar25;
      uVar5 = *(undefined8 *)(lVar11 + 0x6c);
      uVar6 = *(undefined8 *)(lVar11 + 0x74);
      fVar36 = DAT_1465345c0;
      if (lVar3 != 0) {
        fVar36 = *(float *)(lVar3 + 0x44);
      }
      fVar36 = fVar36 + fVar28;
      lVar3 = param_1[6];
      fVar42 = fVar28 - fVar36;
      fVar18 = -*(float *)(lVar9 + 0x44);
      fVar26 = -fVar25;
      param_2 = (fVar28 - fVar25) * param_2;
      fVar23 = -fVar28;
      fVar13 = fVar25 - fVar36;
      fVar30 = param_2 + fVar25;
      fVar38 = ABS(fVar42);
      if ((((fVar38 <= 1e-08) || (ABS(fVar18) <= 1e-08)) || (ABS(fVar26) <= 1e-08)) ||
         ((ABS(fVar13) <= 1e-08 || (ABS(fVar23) <= 1e-08)))) {
        local_108 = *(undefined8 *)(lVar2 + 0x10);
        fVar14 = *(float *)(lVar2 + 0x18);
        local_168 = fVar25 - fVar30;
        local_150 = (float)((ulonglong)local_108 >> 0x20);
        local_130._0_4_ = (float)local_108;
        local_11c = (float)local_130;
      }
      else {
        local_168 = -param_2;
        fVar40 = (fVar30 - fVar36) * (1.0 / fVar42);
        fVar39 = (fVar28 - fVar30) * (1.0 / fVar42);
        fVar37 = local_168 * (1.0 / fVar18);
        fVar34 = (fVar30 - fVar28) * (1.0 / fVar18);
        fVar33 = *(float *)(lVar3 + 0x10) * fVar34 + *(float *)(lVar2 + 0x10) * fVar37;
        fVar24 = *(float *)(lVar3 + 0x14) * fVar34 + *(float *)(lVar2 + 0x14) * fVar37;
        fVar31 = *(float *)(lVar3 + 0x18) * fVar34 + *(float *)(lVar2 + 0x18) * fVar37;
        fVar27 = (fVar30 - fVar25) * (1.0 / fVar26);
        fVar19 = -fVar30 * (1.0 / fVar26);
        fVar32 = (fVar30 - fVar36) * (1.0 / fVar13);
        fVar16 = -fVar30 * (1.0 / fVar23);
        fVar29 = local_168 * (1.0 / fVar13);
        fVar14 = (fVar30 - fVar28) * (1.0 / fVar23);
        local_11c = ((*(float *)(lVar3 + 0x10) * fVar19 + fVar27 * (float)local_130) * fVar14 +
                    fVar16 * fVar33) * fVar34 +
                    ((*(float *)(lVar2 + 0x10) * fVar40 + (float)local_108 * fVar39) * fVar29 +
                    fVar32 * fVar33) * fVar37;
        local_150 = ((*(float *)(lVar3 + 0x14) * fVar19 + fVar27 * local_130._4_4_) * fVar14 +
                    fVar16 * fVar24) * fVar34 +
                    ((*(float *)(lVar2 + 0x14) * fVar40 + local_108._4_4_ * fVar39) * fVar29 +
                    fVar32 * fVar24) * fVar37;
        fVar14 = ((*(float *)(lVar3 + 0x18) * fVar19 + fVar27 * local_128) * fVar14 +
                 fVar16 * fVar31) * fVar34 +
                 ((*(float *)(lVar2 + 0x18) * fVar40 + local_100 * fVar39) * fVar29 +
                 fVar32 * fVar31) * fVar37;
        local_108 = CONCAT44(local_150,local_11c);
      }
      local_184 = fVar28 - fVar30;
      local_190 = -fVar30;
      local_194 = fVar30 - fVar25;
      fVar28 = fVar30 - fVar28;
      fVar36 = fVar30 - fVar36;
      if (((fVar38 <= 1e-08) || (ABS(fVar18) <= 1e-08)) ||
         ((ABS(fVar26) <= 1e-08 || ((ABS(fVar13) <= 1e-08 || (ABS(fVar23) <= 1e-08)))))) {
        local_144 = *(float *)(lVar9 + 0x30);
        local_164 = (float)((ulonglong)*(undefined8 *)(lVar9 + 0x28) >> 0x20);
        local_178._0_4_ = (float)*(undefined8 *)(lVar9 + 0x28);
      }
      else {
        fVar16 = fVar36 * (1.0 / fVar42);
        fVar19 = local_184 * (1.0 / fVar42);
        fVar29 = fVar28 * (1.0 / fVar18);
        fVar24 = (1.0 / fVar18) * local_168;
        fVar41 = *(float *)(lVar8 + 0x28) * fVar29 + *(float *)(lVar9 + 0x28) * fVar24;
        fVar27 = *(float *)(lVar8 + 0x2c) * fVar29 + *(float *)(lVar9 + 0x2c) * fVar24;
        fVar34 = *(float *)(lVar8 + 0x30) * fVar29 + *(float *)(lVar9 + 0x30) * fVar24;
        fVar39 = local_190 * (1.0 / fVar26);
        fVar40 = local_194 * (1.0 / fVar26);
        fVar37 = local_190 * (1.0 / fVar23);
        fVar32 = fVar36 * (1.0 / fVar13);
        local_178._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        fVar31 = (1.0 / fVar13) * local_168;
        fVar33 = fVar28 * (1.0 / fVar23);
        local_178._0_4_ = (float)uVar1;
        local_144 = ((fVar40 * fVar20 + *(float *)(lVar8 + 0x30) * fVar39) * fVar33 +
                    fVar37 * fVar34) * fVar29 +
                    ((fVar19 * fVar17 + *(float *)(lVar9 + 0x30) * fVar16) * fVar31 +
                    fVar32 * fVar34) * fVar24;
        local_164 = ((fVar40 * local_178._4_4_ + *(float *)(lVar8 + 0x2c) * fVar39) * fVar33 +
                    fVar37 * fVar27) * fVar29 +
                    ((fVar19 * local_e0._4_4_ + *(float *)(lVar9 + 0x2c) * fVar16) * fVar31 +
                    fVar32 * fVar27) * fVar24;
        local_178._0_4_ =
             ((fVar19 * (float)local_e0 + *(float *)(lVar9 + 0x28) * fVar16) * fVar31 +
             fVar32 * fVar41) * fVar24 +
             ((fVar40 * (float)local_178 + *(float *)(lVar8 + 0x28) * fVar39) * fVar33 +
             fVar37 * fVar41) * fVar29;
      }
      fVar17 = local_164 * local_164 + (float)local_178 * (float)local_178 + local_144 * local_144;
      local_154 = (float)local_178;
      if (1e-08 < fVar17) {
        auVar21 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
        fVar20 = auVar21._0_4_;
        fVar20 = fVar20 + fVar20 * (0.5 - fVar17 * 0.5 * fVar20 * fVar20);
        fVar20 = fVar20 + fVar20 * (0.5 - fVar17 * 0.5 * fVar20 * fVar20);
        local_154 = (float)local_178 * fVar20;
        local_164 = local_164 * fVar20;
        local_144 = local_144 * fVar20;
      }
      if ((((fVar38 <= 1e-08) || (ABS(fVar18) <= 1e-08)) || (ABS(fVar26) <= 1e-08)) ||
         ((ABS(fVar13) <= 1e-08 || (ABS(fVar23) <= 1e-08)))) {
        local_140 = *(float *)(lVar9 + 0x40);
      }
      else {
        fVar17 = fVar28 * (1.0 / fVar18);
        fVar16 = (1.0 / fVar18) * local_168;
        fVar20 = *(float *)(lVar8 + 0x40) * fVar17 + fVar16 * *(float *)(lVar9 + 0x40);
        local_140 = ((local_190 * (1.0 / fVar26) * *(float *)(lVar8 + 0x40) +
                     local_194 * (1.0 / fVar26) * local_f8) * fVar28 * (1.0 / fVar23) +
                    local_190 * (1.0 / fVar23) * fVar20) * fVar17 +
                    ((fVar36 * (1.0 / fVar42) * *(float *)(lVar9 + 0x40) +
                     local_184 * (1.0 / fVar42) * local_140) * (1.0 / fVar13) * local_168 +
                    fVar36 * (1.0 / fVar13) * fVar20) * fVar16;
      }
      if (((fVar38 <= 1e-08) || (ABS(fVar18) <= 1e-08)) ||
         ((ABS(fVar26) <= 1e-08 || ((ABS(fVar13) <= 1e-08 || (ABS(fVar23) <= 1e-08)))))) {
        fVar17 = *(float *)(lVar9 + 0x14);
      }
      else {
        fVar16 = fVar28 * (1.0 / fVar18);
        fVar17 = (1.0 / fVar18) * local_168;
        fVar20 = fVar17 * *(float *)(lVar9 + 0x14) + *(float *)(lVar8 + 0x14) * fVar16;
        fVar17 = (((1.0 / fVar42) * fVar36 * *(float *)(lVar9 + 0x14) +
                  (1.0 / fVar42) * local_184 * local_f4) * (1.0 / fVar13) * local_168 +
                 (1.0 / fVar13) * fVar36 * fVar20) * fVar17 +
                 ((local_194 * (1.0 / fVar26) * local_160 +
                  local_190 * (1.0 / fVar26) * *(float *)(lVar8 + 0x14)) * fVar28 * (1.0 / fVar23) +
                 local_190 * (1.0 / fVar23) * fVar20) * fVar16;
      }
      *param_6 = fVar17;
      fVar17 = *(float *)(*param_1 + 0x38) * *(float *)(param_1[4] + 0x5c);
      if ((((fVar38 <= 1e-08) || (ABS(fVar18) <= 1e-08)) || (ABS(fVar26) <= 1e-08)) ||
         ((ABS(fVar13) <= 1e-08 || (ABS(fVar23) <= 1e-08)))) {
        local_168 = fVar25 - fVar30;
      }
      else {
        fVar25 = *(float *)(*param_1 + 0x38) * *(float *)(param_1[6] + 0x5c);
        fVar20 = (1.0 / fVar18) * fVar28;
        fVar16 = (1.0 / fVar18) * local_168;
        fVar30 = fVar16 * fVar17 + fVar20 * fVar25;
        fVar17 = (((1.0 / fVar26) * local_190 * fVar25 + (1.0 / fVar26) * local_194 * local_118) *
                  (1.0 / fVar23) * fVar28 + (1.0 / fVar23) * local_190 * fVar30) * fVar20 +
                 (((1.0 / fVar42) * fVar36 * fVar17 + (1.0 / fVar42) * local_184 * local_13c) *
                  (1.0 / fVar13) * local_168 + (1.0 / fVar13) * fVar36 * fVar30) * fVar16;
      }
      *param_7 = fVar17;
      lVar2 = param_1[6];
      lVar3 = param_1[4];
      if (((fVar38 <= 1e-08) || (ABS(fVar18) <= 1e-08)) ||
         ((ABS(fVar26) <= 1e-08 || ((ABS(fVar13) <= 1e-08 || (ABS(fVar23) <= 1e-08)))))) {
        fVar17 = *(float *)(lVar3 + 0x6c);
        fVar12 = *(float *)(lVar3 + 0x70);
        fVar15 = *(float *)(lVar3 + 0x74);
        fVar22 = *(float *)(lVar3 + 0x78);
      }
      else {
        fVar30 = local_184 * (1.0 / fVar42);
        fVar33 = (1.0 / fVar42) * fVar36;
        fVar24 = fVar28 * (1.0 / fVar18);
        fVar29 = (1.0 / fVar18) * local_168;
        fVar17 = *(float *)(lVar2 + 0x6c) * fVar24 + *(float *)(lVar3 + 0x6c) * fVar29;
        fVar34 = *(float *)(lVar2 + 0x70) * fVar24 + *(float *)(lVar3 + 0x70) * fVar29;
        fVar16 = *(float *)(lVar2 + 0x74) * fVar24 + *(float *)(lVar3 + 0x74) * fVar29;
        fVar37 = *(float *)(lVar2 + 0x78) * fVar24 + *(float *)(lVar3 + 0x78) * fVar29;
        fVar32 = local_194 * (1.0 / fVar26);
        fVar31 = local_190 * (1.0 / fVar26);
        fVar19 = (1.0 / fVar13) * fVar36;
        fVar27 = (1.0 / fVar13) * local_168;
        fStack_e8 = (float)uVar6;
        fStack_ec = (float)((ulonglong)uVar5 >> 0x20);
        local_f0 = (float)uVar5;
        fStack_e4 = (float)((ulonglong)uVar6 >> 0x20);
        fVar20 = fVar28 * (1.0 / fVar23);
        fVar25 = local_190 * (1.0 / fVar23);
        fVar17 = ((fVar30 * fVar12 + fVar33 * *(float *)(lVar3 + 0x6c)) * fVar27 + fVar17 * fVar19)
                 * fVar29 +
                 (fVar17 * fVar25 + (local_f0 * fVar32 + *(float *)(lVar2 + 0x6c) * fVar31) * fVar20
                 ) * fVar24;
        fVar12 = ((fVar30 * fVar15 + fVar33 * *(float *)(lVar3 + 0x70)) * fVar27 + fVar34 * fVar19)
                 * fVar29 +
                 ((fStack_ec * fVar32 + *(float *)(lVar2 + 0x70) * fVar31) * fVar20 +
                 fVar34 * fVar25) * fVar24;
        fVar15 = ((fVar30 * fVar22 + fVar33 * *(float *)(lVar3 + 0x74)) * fVar27 + fVar16 * fVar19)
                 * fVar29 +
                 ((fStack_e8 * fVar32 + *(float *)(lVar2 + 0x74) * fVar31) * fVar20 +
                 fVar16 * fVar25) * fVar24;
        fVar22 = ((fVar30 * fVar35 + fVar33 * *(float *)(lVar3 + 0x78)) * fVar27 + fVar37 * fVar19)
                 * fVar29 +
                 ((fStack_e4 * fVar32 + *(float *)(lVar2 + 0x78) * fVar31) * fVar20 +
                 fVar37 * fVar25) * fVar24;
      }
      *param_8 = fVar17;
      param_8[1] = fVar12;
      param_8[2] = fVar15;
      param_8[3] = fVar22;
      if (param_9 != (undefined8 *)0x0) {
        lVar2 = param_1[4];
        lVar9 = (longlong)*(int *)(*param_1 + 0x94);
        lVar3 = param_1[6];
        local_178._0_4_ = *(float *)(lVar9 + lVar2);
        local_178._4_4_ = *(float *)(lVar9 + 4 + lVar2);
        uStack_170._0_4_ = *(float *)(lVar9 + 8 + lVar2);
        if ((((fVar38 <= 1e-08) || (ABS(fVar18) <= 1e-08)) || (ABS(fVar26) <= 1e-08)) ||
           ((ABS(fVar13) <= 1e-08 || (ABS(fVar23) <= 1e-08)))) {
          uStack_170._4_4_ = *(undefined4 *)(lVar9 + 0xc + lVar2);
        }
        else {
          local_184 = local_184 * (1.0 / fVar42);
          fVar30 = fVar36 * (1.0 / fVar42);
          fVar22 = fVar28 * (1.0 / fVar18);
          fVar25 = local_168 * (1.0 / fVar18);
          fVar20 = fVar22 * *(float *)(lVar9 + lVar3) + fVar25 * (float)local_178;
          fVar35 = fVar22 * *(float *)(lVar9 + 4 + lVar3) + fVar25 * local_178._4_4_;
          fVar15 = fVar22 * *(float *)(lVar9 + 8 + lVar3) + fVar25 * (float)uStack_170;
          fVar12 = fVar22 * *(float *)(lVar9 + 0xc + lVar3) +
                   fVar25 * *(float *)(lVar9 + 0xc + lVar2);
          local_194 = local_194 * (1.0 / fVar26);
          fVar17 = local_190 * (1.0 / fVar26);
          fVar36 = fVar36 * (1.0 / fVar13);
          local_168 = local_168 * (1.0 / fVar13);
          fVar28 = fVar28 * (1.0 / fVar23);
          local_190 = local_190 * (1.0 / fVar23);
          local_178._4_4_ =
               ((fVar30 * *(float *)(lVar9 + 4 + lVar2) + local_184 * *(float *)(lVar9 + 4 + lVar10)
                ) * local_168 + fVar36 * fVar35) * fVar25 +
               (fVar35 * local_190 +
               (local_194 * *(float *)(lVar9 + 4 + lVar11) + fVar17 * *(float *)(lVar9 + 4 + lVar3))
               * fVar28) * fVar22;
          local_178._0_4_ =
               ((fVar30 * (float)local_178 + local_184 * *(float *)(lVar9 + lVar10)) * local_168 +
               fVar36 * fVar20) * fVar25 +
               (fVar20 * local_190 +
               (local_194 * *(float *)(lVar9 + lVar11) + fVar17 * *(float *)(lVar9 + lVar3)) *
               fVar28) * fVar22;
          uStack_170._0_4_ =
               ((fVar30 * *(float *)(lVar9 + 8 + lVar2) + local_184 * *(float *)(lVar9 + 8 + lVar10)
                ) * local_168 + fVar36 * fVar15) * fVar25 +
               (fVar15 * local_190 +
               (local_194 * *(float *)(lVar9 + 8 + lVar11) + fVar17 * *(float *)(lVar9 + 8 + lVar3))
               * fVar28) * fVar22;
          uStack_170._4_4_ =
               ((fVar30 * *(float *)(lVar9 + 0xc + lVar2) +
                local_184 * *(float *)(lVar9 + 0xc + lVar10)) * local_168 + fVar36 * fVar12) *
               fVar25 + (fVar12 * local_190 +
                        (local_194 * *(float *)(lVar9 + 0xc + lVar11) +
                        fVar17 * *(float *)(lVar9 + 0xc + lVar3)) * fVar28) * fVar22;
        }
        *param_9 = local_178;
        param_9[1] = uStack_170;
      }
      *param_4 = CONCAT44(local_150 - local_164 * local_140,local_11c - local_154 * local_140);
      *(float *)(param_4 + 1) = fVar14 - local_144 * local_140;
      *param_5 = CONCAT44(local_164 * local_140 + local_150,local_154 * local_140 + local_11c);
      *(float *)(param_5 + 1) = local_144 * local_140 + fVar14;
      *param_3 = local_108;
      *(float *)(param_3 + 1) = fVar14;
    }
    else {
      lVar3 = param_1[5];
      fVar17 = *(float *)(lVar3 + 0x40);
      fVar22 = fVar17 * *(float *)(lVar3 + 0x28);
      fVar15 = fVar17 * *(float *)(lVar3 + 0x2c);
      fVar17 = fVar17 * *(float *)(lVar3 + 0x30);
      *param_3 = *(undefined8 *)(lVar2 + 0x10);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar2 + 0x18);
      lVar2 = param_1[4];
      fVar12 = *(float *)(lVar2 + 0x18);
      *param_4 = CONCAT44(*(float *)(lVar2 + 0x14) - fVar15,*(float *)(lVar2 + 0x10) - fVar22);
      *(float *)(param_4 + 1) = fVar12 - fVar17;
      lVar2 = param_1[4];
      fVar12 = *(float *)(lVar2 + 0x18);
      *param_5 = CONCAT44(fVar15 + *(float *)(lVar2 + 0x14),fVar22 + *(float *)(lVar2 + 0x10));
      *(float *)(param_5 + 1) = fVar17 + fVar12;
      *param_6 = *(float *)(param_1[5] + 0x14);
      *param_7 = *(float *)(param_1[4] + 0x5c) * *(float *)(*param_1 + 0x38);
      uVar1 = *(undefined8 *)(param_1[4] + 0x74);
      *(undefined8 *)param_8 = *(undefined8 *)(param_1[4] + 0x6c);
      *(undefined8 *)(param_8 + 2) = uVar1;
      if (param_9 != (undefined8 *)0x0) {
        puVar7 = (undefined4 *)((longlong)*(int *)(*param_1 + 0x94) + param_1[4]);
        *(undefined4 *)param_9 = *puVar7;
        *(undefined4 *)((longlong)param_9 + 4) = puVar7[1];
        *(undefined4 *)(param_9 + 1) = puVar7[2];
        *(undefined4 *)((longlong)param_9 + 0xc) = puVar7[3];
      }
    }
  }
  return;
}



// FUNCTION 14265d3e0 FUN_14265d3e0 body=12098 status=ok
// SIG undefined FUN_14265d3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14265d3e0(longlong param_1,float *param_2,float *param_3,float param_4,undefined8 *param_5,
                  float *param_6,undefined8 param_7,undefined8 param_8,float *param_9,
                  undefined8 *param_10,float *param_11,float *param_12,float *param_13,
                  float *param_14)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined8 uVar9;
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
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
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
  float fVar60;
  float fVar61;
  float local_res8;
  float local_res10;
  float local_res18;
  undefined8 local_328;
  float local_320;
  undefined8 local_318;
  float fStack_310;
  float fStack_30c;
  undefined8 local_308;
  float local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [8];
  float fStack_2e0;
  float fStack_2dc;
  undefined8 local_2d8;
  float local_2d0;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  float local_298;
  float local_294;
  float local_290;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  undefined8 local_218;
  float local_210;
  undefined1 local_208 [8];
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
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  float fStack_184;
  undefined8 uStack_180;
  undefined8 local_178;
  float fStack_170;
  float fStack_16c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_108 [224];
  
  pfVar6 = param_14;
  fVar61 = -1.0;
  local_res18 = DAT_1468b5d90;
  local_res10 = DAT_1468b5d94;
  local_res8 = DAT_1468b5d98;
  if (*(char *)(param_1 + 0x178) != '\0') {
    switch(*(char *)(param_1 + 0x178)) {
    case '\x01':
    case '\x05':
    case '\t':
      local_res8 = 1.0;
      local_res18 = 0.0;
      local_res10 = 0.0;
      break;
    case '\x02':
    case '\x06':
    case '\n':
      local_res8 = -1.0;
      local_res18 = 0.0;
      local_res10 = 0.0;
      break;
    case '\x03':
    case '\a':
    case '\v':
      local_res10 = 1.0;
      local_res18 = 0.0;
      local_res8 = 0.0;
      break;
    case '\x04':
    case '\b':
    case '\f':
      local_res10 = -1.0;
      local_res18 = 0.0;
      local_res8 = 0.0;
    }
  }
  if (*(char *)(param_1 + 0xfd) == '\0') {
    uStack_2f0 = CONCAT44(uStack_2f0._4_4_,*(undefined4 *)(param_1 + 0x130));
    puVar7 = &local_2f8;
    local_2f8 = *(undefined8 *)(param_1 + 0x128);
  }
  else {
    fVar27 = param_11[1];
    fVar36 = *param_11;
    fVar11 = param_11[2];
    fVar10 = fVar36 * fVar36 + fVar27 * fVar27 + fVar11 * fVar11;
    if (fVar10 == 1.0) {
      local_300 = param_11[2];
      puVar7 = &local_308;
      local_308 = *(undefined8 *)param_11;
    }
    else if (1e-08 <= fVar10) {
      puVar7 = &local_308;
      auVar22 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      local_2b8 = auVar22._0_4_;
      local_2b8 = local_2b8 + local_2b8 * (0.5 - fVar10 * 0.5 * local_2b8 * local_2b8);
      local_2b8 = local_2b8 + local_2b8 * (0.5 - fVar10 * 0.5 * local_2b8 * local_2b8);
      local_308 = CONCAT44(fVar27 * local_2b8,fVar36 * local_2b8);
      local_300 = fVar11 * local_2b8;
    }
    else {
      puVar7 = &local_308;
      local_308 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      local_300 = DAT_1468b5d98;
    }
  }
  local_2d8 = *puVar7;
  local_2d0 = *(float *)(puVar7 + 1);
  if ((*(byte *)(param_1 + 0x174) & 2) != 0) {
    _local_2e8 = ZEXT812(0x3f800000);
    puVar7 = (undefined8 *)FQuat::FindBetweenNormals(&local_288,local_2e8,&local_2d8);
    local_2f8 = *puVar7;
    uStack_2f0 = puVar7[1];
  }
  uVar9 = CONCAT44(fRam00000001464aa7dc,DAT_1464aa7d8);
  fStack_11c = 1.0;
  uStack_194 = 0;
  *(ulonglong *)param_14 = CONCAT44(DAT_1464aa7d4,DAT_1464aa7d0);
  *(undefined8 *)(param_14 + 2) = uVar9;
  uVar9 = _DAT_1464aa7e8;
  *(undefined8 *)(param_14 + 4) = _DAT_1464aa7e0;
  *(undefined8 *)(param_14 + 6) = uVar9;
  uVar9 = CONCAT44(fRam00000001464aa7fc,DAT_1464aa7f8);
  *(ulonglong *)(param_14 + 8) = CONCAT44(DAT_1464aa7f4,DAT_1464aa7f0);
  *(undefined8 *)(param_14 + 10) = uVar9;
  uVar5 = uRam00000001464aa808;
  *(undefined8 *)(param_14 + 0xc) = _DAT_1464aa800;
  *(ulonglong *)(param_14 + 0xe) = uVar5;
  local_258 = *param_2;
  fStack_254 = param_2[1];
  fStack_250 = param_2[2];
  fStack_24c = param_2[3];
  local_248 = param_2[4];
  fStack_244 = param_2[5];
  fStack_240 = param_2[6];
  fStack_23c = param_2[7];
  local_238 = *(float *)*(undefined1 (*) [16])(param_2 + 8);
  fStack_234 = param_2[9];
  fStack_230 = param_2[10];
  fStack_22c = param_2[0xb];
  _local_208 = *(undefined1 (*) [16])(param_2 + 8);
  local_228 = param_2[0xc];
  fStack_224 = param_2[0xd];
  fStack_220 = param_2[0xe];
  fStack_21c = param_2[0xf];
  fStack_120 = param_3[2] + param_9[2];
  fStack_124 = param_3[1] + param_9[1];
  local_128 = *param_9 + *param_3;
  uVar3 = *(uint *)(param_1 + 0x174);
  local_2a8 = _DAT_1464aa810;
  uStack_2a0 = _DAT_1464aa818;
  fStack_170 = *(float *)(param_1 + 0x78) * param_6[2];
  uStack_18c = 0;
  local_198 = *param_6 * *(float *)(param_1 + 0x70);
  uStack_180 = 0;
  fStack_184 = *(float *)(param_1 + 0x74) * param_6[1];
  local_178 = 0;
  local_1c8 = _DAT_1464aa7e0;
  uStack_1c0 = _DAT_1464aa7e8;
  local_268 = _DAT_1464aa800;
  uStack_260 = uRam00000001464aa808;
  local_2c8 = (float)local_2f8;
  local_294 = local_2f8._4_4_;
  fStack_2c4 = local_2f8._4_4_;
  fStack_2c0 = (float)uStack_2f0;
  local_298 = uStack_2f0._4_4_;
  fStack_2bc = uStack_2f0._4_4_;
  fStack_16c = 0.0;
  _local_2e8 = ZEXT416((uint)fStack_120);
  local_1d8 = DAT_1464aa7d0;
  fStack_1d4 = DAT_1464aa7d4;
  fStack_1d0 = DAT_1464aa7d8;
  fStack_1cc = fRam00000001464aa7dc;
  local_1b8 = DAT_1464aa7f0;
  fStack_1b4 = DAT_1464aa7f4;
  fStack_1b0 = DAT_1464aa7f8;
  fStack_1ac = fRam00000001464aa7fc;
  local_1f8 = local_258;
  fStack_1f4 = fStack_254;
  fStack_1f0 = fStack_250;
  fStack_1ec = fStack_24c;
  local_1e8 = local_248;
  fStack_1e4 = fStack_244;
  fStack_1e0 = fStack_240;
  fStack_1dc = fStack_23c;
  local_278 = local_228;
  fStack_274 = fStack_224;
  fStack_270 = fStack_220;
  fStack_26c = fStack_21c;
  if ((uVar3 & 4) == 0) {
    if ((uVar3 & 2) != 0) {
      param_4 = param_4 * 0.5;
      if (param_4 < 0.0) {
        fVar27 = param_4 * 0.15915494 - 0.5;
      }
      else {
        fVar27 = param_4 * 0.15915494 + 0.5;
      }
      param_4 = param_4 - (float)(int)fVar27 * 6.2831855;
      if (param_4 <= 1.5707964) {
        if (-1.5707964 <= param_4) {
          fVar61 = 1.0;
        }
        else {
          param_4 = -3.1415927 - param_4;
        }
      }
      else {
        param_4 = 3.1415927 - param_4;
      }
      fVar27 = param_4 * param_4;
      param_4 = (((((2.7525562e-06 - fVar27 * 2.3889859e-08) * fVar27 - 0.00019840874) * fVar27 +
                  0.008333331) * fVar27 - 0.16666667) * fVar27 + 1.0) * param_4;
      fStack_30c = (((((2.4760495e-05 - fVar27 * 2.6051615e-07) * fVar27 - 0.0013888378) * fVar27 +
                     0.041666638) * fVar27 - 0.5) * fVar27 + 1.0) * fVar61;
      fVar10 = param_4 * (float)local_2d8;
      fVar61 = param_4 * local_2d8._4_4_;
      fStack_310 = param_4 * local_2d0;
      local_318 = CONCAT44(fVar61,fVar10);
      fVar27 = uStack_2f0._4_4_ * fVar10 * _DAT_146b073e0 + fStack_30c * (float)local_2f8 +
               (float)uStack_2f0 * fVar61 * _DAT_146b073d0 +
               local_2f8._4_4_ * fStack_310 * _DAT_146b073c0;
      fVar36 = (float)uStack_2f0 * fVar10 * fRam0000000146b073e4 + fStack_30c * local_2f8._4_4_ +
               uStack_2f0._4_4_ * fVar61 * fRam0000000146b073d4 +
               (float)local_2f8 * fStack_310 * fRam0000000146b073c4;
      fVar11 = local_2f8._4_4_ * fVar10 * fRam0000000146b073e8 + fStack_30c * (float)uStack_2f0 +
               (float)local_2f8 * fVar61 * fRam0000000146b073d8 +
               uStack_2f0._4_4_ * fStack_310 * fRam0000000146b073c8;
      fVar61 = (float)local_2f8 * fVar10 * fRam0000000146b073ec + fStack_30c * uStack_2f0._4_4_ +
               local_2f8._4_4_ * fVar61 * fRam0000000146b073dc +
               (float)uStack_2f0 * fStack_310 * fRam0000000146b073cc;
LAB_14265ea61:
      local_2a8 = CONCAT44(fVar36,fVar27);
      uStack_2a0 = CONCAT44(fVar61,fVar11);
      goto LAB_14265e5c4;
    }
    if (*(char *)(param_1 + 0xee) == '\x05') {
      if (*(char *)(param_1 + 0xec) != '\0') {
        local_268 = 0;
        uStack_260 = uRam00000001464aa808 & 0xffffffff00000000;
        local_318 = CONCAT44(fStack_124,local_128);
        fStack_30c = 1.0;
        fVar36 = local_128 * fStack_254;
        fVar11 = local_128 * fStack_250;
        fVar27 = fStack_124 * fStack_240;
        local_1e8 = 0.0;
        fStack_1e4 = 1.0;
        fStack_1e0 = 0.0;
        fStack_1dc = 0.0;
        local_278 = 0.0;
        fStack_274 = 0.0;
        fStack_270 = 0.0;
        fStack_26c = 1.0;
        local_128 = local_228 * 1.0 + fStack_120 * local_238 +
                    fStack_124 * local_248 + local_128 * local_258;
        fStack_124 = fStack_224 * 1.0 + fStack_120 * fStack_234 + fStack_124 * fStack_244 + fVar36;
        local_2e8._4_4_ = fStack_220 * 1.0 + fStack_120 * fStack_230 + fVar27 + fVar11;
        local_2e8._0_4_ = local_2e8._4_4_;
        fStack_2e0 = (float)local_2e8._4_4_;
        fStack_2dc = (float)local_2e8._4_4_;
        _local_208 = ZEXT816(0x3f800000) << 0x40;
        local_1f8 = 1.0;
        fStack_1f4 = 0.0;
        fStack_1f0 = 0.0;
        fStack_1ec = 0.0;
        fStack_310 = fStack_120;
        fStack_120 = (float)local_2e8._4_4_;
      }
      fVar11 = *param_12 - local_128;
      fVar36 = param_12[1] - fStack_124;
      local_320 = param_12[2] - fStack_120;
      local_328 = CONCAT44(fVar36,fVar11);
      fVar27 = fVar36 * fVar36 + fVar11 * fVar11 + local_320 * local_320;
      if (1e-08 < fVar27) {
        auVar22 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
        fVar10 = auVar22._0_4_;
        fVar10 = fVar10 + fVar10 * (0.5 - fVar27 * 0.5 * fVar10 * fVar10);
        fVar10 = fVar10 + fVar10 * (0.5 - fVar27 * 0.5 * fVar10 * fVar10);
        fVar11 = fVar11 * fVar10;
        fVar36 = fVar36 * fVar10;
        local_320 = local_320 * fVar10;
        local_328 = CONCAT44(fVar36,fVar11);
      }
      if (fVar36 * fVar36 + fVar11 * fVar11 + local_320 * local_320 < 0.5) {
        local_328 = 0x3f800000;
        local_320 = 0.0;
      }
      local_210 = 0.0;
      local_218 = 0x3f800000;
      uStack_2f0._0_4_ = 1.0;
      local_110 = 0x3f800000;
      local_118 = 0;
      if (*(char *)(param_1 + 0x124) == '\x02') {
        FQuat::FindBetweenNormals(&local_2c8,&local_118,&local_2d8);
        auVar22 = _local_2e8;
        fVar61 = local_2d8._4_4_ * local_328._4_4_ + (float)local_2d8 * (float)local_328 +
                 local_2d0 * local_320;
        local_2e8._0_4_ = (float)local_328 - (float)local_2d8 * fVar61;
        local_2e8._4_4_ = local_328._4_4_ - local_2d8._4_4_ * fVar61;
        fStack_2e0 = local_320 - local_2d0 * fVar61;
        fStack_2dc = auVar22._12_4_;
        fVar61 = (float)local_2e8._4_4_ * (float)local_2e8._4_4_ +
                 (float)local_2e8._0_4_ * (float)local_2e8._0_4_ + fStack_2e0 * fStack_2e0;
        if (1e-08 < fVar61) {
          auVar22 = rsqrtss(ZEXT416((uint)fVar61),ZEXT416((uint)fVar61));
          fVar27 = auVar22._0_4_;
          fVar27 = fVar27 + fVar27 * (0.5 - fVar61 * 0.5 * fVar27 * fVar27);
          fVar27 = fVar27 + fVar27 * (0.5 - fVar61 * 0.5 * fVar27 * fVar27);
          local_2e8._4_4_ = fVar27 * (float)local_2e8._4_4_;
          local_2e8._0_4_ = fVar27 * (float)local_2e8._0_4_;
          fStack_2e0 = fVar27 * fStack_2e0;
        }
        fVar36 = local_210 * fStack_2c4 - local_218._4_4_ * fStack_2c0;
        fVar27 = (float)local_218 * fStack_2c0 - local_210 * local_2c8;
        fVar36 = fVar36 + fVar36;
        fVar61 = local_218._4_4_ * local_2c8 - (float)local_218 * fStack_2c4;
        fVar27 = fVar27 + fVar27;
        fVar61 = fVar61 + fVar61;
        uStack_2f0 = CONCAT44(uStack_2f0._4_4_,
                              (fVar27 * local_2c8 - fVar36 * fStack_2c4) +
                              fVar61 * fStack_2bc + local_210);
        local_2f8 = CONCAT44((fVar36 * fStack_2c0 - fVar61 * local_2c8) +
                             fVar27 * fStack_2bc + local_218._4_4_,
                             (fVar61 * fStack_2c4 - fVar27 * fStack_2c0) +
                             fVar36 * fStack_2bc + (float)local_218);
        FQuat::FindBetweenNormals(&local_288,&local_2f8,local_2e8);
        local_1a8 = fStack_2bc * local_288 * _DAT_146b073e0 + fStack_27c * local_2c8 +
                    fStack_2c0 * fStack_284 * _DAT_146b073d0 +
                    fStack_2c4 * fStack_280 * _DAT_146b073c0;
        fStack_1a4 = fStack_2c0 * local_288 * fRam0000000146b073e4 + fStack_27c * fStack_2c4 +
                     fStack_2bc * fStack_284 * fRam0000000146b073d4 +
                     local_2c8 * fStack_280 * fRam0000000146b073c4;
        fStack_1a0 = fStack_2c4 * local_288 * fRam0000000146b073e8 + fStack_27c * fStack_2c0 +
                     local_2c8 * fStack_284 * fRam0000000146b073d8 +
                     fStack_2bc * fStack_280 * fRam0000000146b073c8;
        fStack_19c = local_2c8 * local_288 * fRam0000000146b073ec + fStack_27c * fStack_2bc +
                     fStack_2c4 * fStack_284 * fRam0000000146b073dc +
                     fStack_2c0 * fStack_280 * fRam0000000146b073cc;
        pfVar8 = &local_1a8;
      }
      else {
        if (*(char *)(param_1 + 0x124) == '\x01') {
          uVar9 = FQuat::FindBetweenNormals(&local_288,&local_218,&local_328);
          FRotator::FRotator(&local_2f8,uVar9);
          fVar36 = -local_328._4_4_;
          uStack_2f0 = (ulonglong)(uint)uStack_2f0._4_4_ << 0x20;
          fVar11 = (float)local_328 * (float)local_328 + fVar36 * fVar36;
          fVar27 = (float)local_328;
          if (1e-08 < fVar11) {
            auVar22 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
            fVar10 = auVar22._0_4_;
            fVar10 = fVar10 + fVar10 * (0.5 - fVar11 * 0.5 * fVar10 * fVar10);
            fVar10 = fVar10 + fVar10 * (0.5 - fVar11 * 0.5 * fVar10 * fVar10);
            fVar27 = fVar10 * (float)local_328;
            fVar36 = fVar10 * fVar36;
          }
          if (fVar27 * fVar27 + fVar36 * fVar36 < 0.5) {
            fVar36 = 1.0;
            fVar27 = 0.0;
          }
          param_4 = param_4 * 0.5;
          if (param_4 < 0.0) {
            fVar11 = param_4 * 0.15915494 - 0.5;
          }
          else {
            fVar11 = param_4 * 0.15915494 + 0.5;
          }
          param_4 = param_4 - (float)(int)fVar11 * 6.2831855;
          if (param_4 <= 1.5707964) {
            if (-1.5707964 <= param_4) {
              fVar61 = 1.0;
            }
            else {
              param_4 = -3.1415927 - param_4;
            }
          }
          else {
            param_4 = 3.1415927 - param_4;
          }
          fStack_310 = 0.0;
          fVar11 = param_4 * param_4;
          param_4 = (((((2.7525562e-06 - fVar11 * 2.3889859e-08) * fVar11 - 0.00019840874) * fVar11
                      + 0.008333331) * fVar11 - 0.16666667) * fVar11 + 1.0) * param_4;
          fVar27 = param_4 * fVar27;
          param_4 = param_4 * fVar36;
          fVar61 = (((((2.4760495e-05 - fVar11 * 2.6051615e-07) * fVar11 - 0.0013888378) * fVar11 +
                     0.041666638) * fVar11 - 0.5) * fVar11 + 1.0) * fVar61;
          pfVar8 = (float *)FRotator::Quaternion(&local_2f8,&local_288);
          fVar36 = *pfVar8;
          fVar11 = pfVar8[1];
          fVar10 = pfVar8[2];
          fVar34 = pfVar8[3];
          local_318 = CONCAT44(fVar27,param_4);
          local_288 = param_4 * fVar34 * _DAT_146b073e0 + fVar61 * fVar36 +
                      fVar27 * fVar10 * _DAT_146b073d0 + fStack_310 * fVar11 * _DAT_146b073c0;
          fStack_284 = param_4 * fVar10 * fRam0000000146b073e4 + fVar61 * fVar11 +
                       fVar27 * fVar34 * fRam0000000146b073d4 +
                       fStack_310 * fVar36 * fRam0000000146b073c4;
          fStack_280 = param_4 * fVar11 * fRam0000000146b073e8 + fVar61 * fVar10 +
                       fVar27 * fVar36 * fRam0000000146b073d8 +
                       fStack_310 * fVar34 * fRam0000000146b073c8;
          fStack_27c = param_4 * fVar36 * fRam0000000146b073ec + fVar61 * fVar34 +
                       fVar27 * fVar11 * fRam0000000146b073dc +
                       fStack_310 * fVar10 * fRam0000000146b073cc;
          fStack_30c = fVar61;
        }
        else {
          uVar9 = FQuat::FindBetweenNormals(&local_288,&local_218,&local_328);
          FRotator::FRotator(&local_2f8,uVar9);
          param_4 = param_4 * 0.5;
          uStack_2f0 = (ulonglong)(uint)uStack_2f0._4_4_ << 0x20;
          if (param_4 < 0.0) {
            fVar27 = param_4 * 0.15915494 - 0.5;
          }
          else {
            fVar27 = param_4 * 0.15915494 + 0.5;
          }
          param_4 = param_4 - (float)(int)fVar27 * 6.2831855;
          if (param_4 <= 1.5707964) {
            if (-1.5707964 <= param_4) {
              fVar61 = 1.0;
            }
            else {
              param_4 = -3.1415927 - param_4;
            }
          }
          else {
            param_4 = 3.1415927 - param_4;
          }
          fVar27 = param_4 * param_4;
          param_4 = (((((2.7525562e-06 - fVar27 * 2.3889859e-08) * fVar27 - 0.00019840874) * fVar27
                      + 0.008333331) * fVar27 - 0.16666667) * fVar27 + 1.0) * param_4;
          fVar16 = param_4 * (float)local_328;
          fVar34 = param_4 * local_328._4_4_;
          param_4 = param_4 * local_320;
          fVar61 = (((((2.4760495e-05 - fVar27 * 2.6051615e-07) * fVar27 - 0.0013888378) * fVar27 +
                     0.041666638) * fVar27 - 0.5) * fVar27 + 1.0) * fVar61;
          pfVar8 = (float *)FRotator::Quaternion(&local_2f8,&local_288);
          fVar27 = *pfVar8;
          fVar36 = pfVar8[1];
          fVar11 = pfVar8[2];
          fVar10 = pfVar8[3];
          local_318 = CONCAT44(fVar34,fVar16);
          local_288 = fVar10 * fVar16 * _DAT_146b073e0 + fVar61 * fVar27 +
                      fVar11 * fVar34 * _DAT_146b073d0 + fVar36 * param_4 * _DAT_146b073c0;
          fStack_284 = fVar11 * fVar16 * fRam0000000146b073e4 + fVar61 * fVar36 +
                       fVar10 * fVar34 * fRam0000000146b073d4 +
                       fVar27 * param_4 * fRam0000000146b073c4;
          fStack_280 = fVar36 * fVar16 * fRam0000000146b073e8 + fVar61 * fVar11 +
                       fVar27 * fVar34 * fRam0000000146b073d8 +
                       fVar10 * param_4 * fRam0000000146b073c8;
          fStack_27c = fVar27 * fVar16 * fRam0000000146b073ec + fVar61 * fVar10 +
                       fVar36 * fVar34 * fRam0000000146b073dc +
                       fVar11 * param_4 * fRam0000000146b073cc;
          fStack_310 = param_4;
          fStack_30c = fVar61;
        }
        pfVar8 = &local_288;
      }
      pfVar8 = (float *)FQuatRotationMatrix::FQuatRotationMatrix(local_108,pfVar8);
    }
    else {
      param_4 = param_4 * 57.295776;
      local_2f8 = CONCAT44(param_4,param_4);
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,param_4);
      FRotator::MakeFromEuler(&local_308,&local_2f8);
      pfVar8 = (float *)FRotator::MakeFromEuler(local_2e8,param_8);
      local_308 = CONCAT44(local_308._4_4_ + pfVar8[1],(float)local_308 + *pfVar8);
      local_300 = local_300 + pfVar8[2];
      pfVar8 = (float *)FRotationMatrix::FRotationMatrix(local_108,&local_308);
    }
    fVar61 = *pfVar8;
    fVar27 = pfVar8[1];
    fVar36 = pfVar8[2];
    fVar11 = pfVar8[3];
    fVar10 = pfVar8[4];
    fVar34 = pfVar8[5];
    fVar16 = pfVar8[6];
    fVar17 = pfVar8[7];
    fVar12 = pfVar8[8];
    fVar20 = pfVar8[9];
    fVar18 = pfVar8[10];
    fVar19 = pfVar8[0xb];
    fVar21 = pfVar8[0xc];
    fVar23 = pfVar8[0xd];
    fVar24 = pfVar8[0xe];
    fVar25 = pfVar8[0xf];
  }
  else {
    cVar1 = *(char *)(param_1 + 0xec);
    uVar9 = *param_5;
    local_300 = *(float *)(param_5 + 1);
    local_308._0_4_ = (float)uVar9;
    local_308._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
    param_14._0_4_ = local_128;
    param_9._0_4_ = fStack_124;
    fVar61 = (float)local_308;
    fVar27 = local_308._4_4_;
    local_308 = uVar9;
    if (cVar1 == '\0') {
LAB_14265db71:
      fStack_310 = 0.0;
    }
    else {
      local_318 = 0;
      fStack_310 = 0.0;
      param_14._0_4_ =
           local_228 * 1.0 + fStack_120 * local_238 + fStack_124 * local_248 + local_128 * local_258
      ;
      param_9._0_4_ =
           fStack_224 * 1.0 + fStack_120 * fStack_234 +
           fStack_124 * fStack_244 + local_128 * fStack_254;
      fVar36 = fStack_220 * 1.0 + fStack_120 * fStack_230 +
               fStack_124 * fStack_240 + local_128 * fStack_250;
      fStack_19c = fStack_21c * 1.0 + fStack_120 * fStack_22c +
                   fStack_124 * fStack_23c + local_128 * fStack_24c;
      local_2e8._4_4_ = fVar36;
      local_2e8._0_4_ = fVar36;
      fStack_2e0 = fVar36;
      fStack_2dc = fVar36;
      local_288 = param_9._0_4_;
      fStack_284 = param_9._0_4_;
      fStack_280 = param_9._0_4_;
      fStack_27c = param_9._0_4_;
      local_1a8 = param_14._0_4_;
      fStack_1a4 = param_9._0_4_;
      fStack_1a0 = fVar36;
      if (*(byte *)(param_1 + 0x178) < 5) {
        fStack_310 = 0.0;
      }
      else {
        if (*(byte *)(param_1 + 0x178) < 9) goto LAB_14265db71;
        pfVar8 = (float *)FMatrix::InverseFast(&local_258,local_108);
        local_258 = *pfVar8;
        local_228 = pfVar8[3];
        fStack_224 = pfVar8[7];
        fStack_220 = pfVar8[0xb];
        fStack_21c = pfVar8[0xf];
        local_238 = pfVar8[2];
        fStack_234 = pfVar8[6];
        fStack_230 = pfVar8[10];
        fStack_22c = pfVar8[0xe];
        local_248 = pfVar8[1];
        fStack_244 = pfVar8[5];
        fStack_240 = pfVar8[9];
        fStack_23c = pfVar8[0xd];
        fStack_254 = pfVar8[4];
        fStack_250 = pfVar8[8];
        fStack_24c = pfVar8[0xc];
        fVar61 = local_228 * 0.0 + local_300 * local_238 +
                 local_308._4_4_ * local_248 + (float)local_308 * local_258;
        fVar27 = fStack_224 * 0.0 + local_300 * fStack_234 +
                 local_308._4_4_ * fStack_244 + (float)local_308 * fStack_254;
        local_300 = fStack_220 * 0.0 + local_300 * fStack_230 +
                    local_308._4_4_ * fStack_240 + (float)local_308 * fStack_250;
        local_308 = CONCAT44(fVar27,fVar61);
        fVar36 = (float)local_2e8._0_4_;
        fStack_310 = local_300;
      }
      local_1e8 = 0.0;
      fStack_1e4 = 1.0;
      fStack_1e0 = 0.0;
      fStack_1dc = 0.0;
      local_278 = 0.0;
      fStack_274 = 0.0;
      fStack_270 = 0.0;
      fStack_26c = 1.0;
      local_1f8 = 1.0;
      fStack_1f4 = 0.0;
      fStack_1f0 = 0.0;
      fStack_1ec = 0.0;
      _local_208 = ZEXT816(0x3f800000) << 0x40;
      param_14._0_4_ = local_1a8;
      param_9._0_4_ = local_288;
      local_128 = local_1a8;
      fStack_124 = local_288;
      fStack_120 = fVar36;
    }
    fVar11 = -1.0;
    fVar36 = fVar61 * fVar61 + fVar27 * fVar27 + local_300 * local_300;
    if (1e-08 < fVar36) {
      auVar22 = rsqrtss(ZEXT416((uint)fVar36),ZEXT416((uint)fVar36));
      fVar10 = auVar22._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar36 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar36 * 0.5 * fVar10 * fVar10);
      local_300 = local_300 * fVar10;
      fVar61 = fVar61 * fVar10;
      fVar27 = fVar27 * fVar10;
      local_308 = CONCAT44(fVar27,fVar61);
    }
    local_318 = CONCAT44(fStack_310,local_300);
    if ((uVar3 & 0x10) == 0) {
      param_14._0_4_ = *param_12 - param_14._0_4_;
      param_9._0_4_ = param_12[1] - param_9._0_4_;
      local_320 = param_12[2] - (float)local_2e8._0_4_;
    }
    else {
      param_14._0_4_ = -*param_13;
      param_9._0_4_ = -param_13[1];
      local_320 = -param_13[2];
    }
    local_328 = CONCAT44(param_9._0_4_,param_14._0_4_);
    fVar36 = param_9._0_4_ * param_9._0_4_ + param_14._0_4_ * param_14._0_4_ + local_320 * local_320
    ;
    if (1e-08 < fVar36) {
      auVar22 = rsqrtss(ZEXT416((uint)fVar36),ZEXT416((uint)fVar36));
      fVar10 = auVar22._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar36 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar36 * 0.5 * fVar10 * fVar10);
      param_14._0_4_ = param_14._0_4_ * fVar10;
      param_9._0_4_ = param_9._0_4_ * fVar10;
      local_320 = local_320 * fVar10;
      local_328 = CONCAT44(param_9._0_4_,param_14._0_4_);
    }
    if (param_9._0_4_ * param_9._0_4_ + param_14._0_4_ * param_14._0_4_ + local_320 * local_320 <
        0.5) {
      param_14._0_4_ = 1.0;
      param_9._0_4_ = 0.0;
      local_320 = 0.0;
      local_328 = 0x3f800000;
    }
    bVar2 = *(byte *)(param_1 + 0x178);
    bVar4 = true;
    fStack_30c = fStack_310;
    if (bVar2 == 0) {
      local_2f8 = 0x3f800000;
      uStack_2f0 = (ulonglong)(uint)uStack_2f0._4_4_ << 0x20;
      pfVar8 = (float *)FQuat::FindBetweenNormals(&local_288,&local_2f8,&local_328);
      param_4 = param_4 * 0.5;
      fVar61 = *pfVar8;
      fVar27 = pfVar8[1];
      fVar36 = pfVar8[2];
      fVar10 = pfVar8[3];
      if (param_4 < 0.0) {
        fVar34 = param_4 * 0.15915494 - 0.5;
      }
      else {
        fVar34 = param_4 * 0.15915494 + 0.5;
      }
      param_4 = param_4 - (float)(int)fVar34 * 6.2831855;
      if (param_4 <= 1.5707964) {
        if (-1.5707964 <= param_4) {
          fVar11 = 1.0;
        }
        else {
          param_4 = -3.1415927 - param_4;
        }
      }
      else {
        param_4 = 3.1415927 - param_4;
      }
      fVar16 = param_4 * param_4;
      param_4 = (((((2.7525562e-06 - fVar16 * 2.3889859e-08) * fVar16 - 0.00019840874) * fVar16 +
                  0.008333331) * fVar16 - 0.16666667) * fVar16 + 1.0) * param_4;
      fVar12 = param_4 * (float)local_328;
      fVar34 = param_4 * local_328._4_4_;
      fStack_310 = param_4 * local_320;
      fStack_30c = (((((2.4760495e-05 - fVar16 * 2.6051615e-07) * fVar16 - 0.0013888378) * fVar16 +
                     0.041666638) * fVar16 - 0.5) * fVar16 + 1.0) * fVar11;
      local_318 = CONCAT44(fVar34,fVar12);
      fVar11 = fVar10 * fVar12 * _DAT_146b073e0 + fStack_30c * fVar61 +
               fVar36 * fVar34 * _DAT_146b073d0 + fVar27 * fStack_310 * _DAT_146b073c0;
      fVar16 = fVar36 * fVar12 * fRam0000000146b073e4 + fStack_30c * fVar27 +
               fVar10 * fVar34 * fRam0000000146b073d4 + fVar61 * fStack_310 * fRam0000000146b073c4;
      fVar17 = fVar27 * fVar12 * fRam0000000146b073e8 + fStack_30c * fVar36 +
               fVar61 * fVar34 * fRam0000000146b073d8 + fVar10 * fStack_310 * fRam0000000146b073c8;
      fVar61 = fVar61 * fVar12 * fRam0000000146b073ec + fStack_30c * fVar10 +
               fVar27 * fVar34 * fRam0000000146b073dc + fVar36 * fStack_310 * fRam0000000146b073cc;
LAB_14265e59e:
      local_2a8 = CONCAT44(fVar16,fVar11);
      uStack_2a0 = CONCAT44(fVar61,fVar17);
    }
    else {
      if ((byte)(bVar2 - 9) < 4) {
        if (((0.0001 < ABS(fVar61)) || (0.0001 < ABS(fVar27))) || (0.0001 < ABS(local_300))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        local_2f8 = 0x3f800000;
        uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
        pfVar8 = (float *)FQuat::FindBetweenNormals(&local_1a8,&local_2f8,&local_308);
        local_2f8._0_4_ = *pfVar8;
        fStack_2c4 = pfVar8[1];
        fStack_2c0 = pfVar8[2];
        fStack_2bc = pfVar8[3];
        local_290 = local_308._4_4_;
        param_14._0_4_ = (float)local_328;
        param_9._0_4_ = local_328._4_4_;
        fVar61 = local_320;
        fVar27 = (float)local_308;
        local_2b8 = local_300;
LAB_14265df0a:
        fVar36 = fStack_2c0;
        local_2c8 = (float)local_2f8;
        local_298 = fStack_2bc;
        local_294 = fStack_2c4;
      }
      else {
        if (bVar2 < 5) {
          local_2f8 = 0x3f800000;
          uStack_2f0 = (ulonglong)(uint)uStack_2f0._4_4_ << 0x20;
          pfVar8 = (float *)FQuat::FindBetweenNormals(&local_1a8,&local_2f8,&local_328);
          param_14._0_4_ = 0.0;
          param_9._0_4_ = 0.0;
          fVar61 = 1.0;
          local_2f8._0_4_ = *pfVar8;
          fStack_2c4 = pfVar8[1];
          fStack_2c0 = pfVar8[2];
          fStack_2bc = pfVar8[3];
          local_290 = local_328._4_4_;
          fVar27 = (float)local_328;
          local_2b8 = local_320;
          goto LAB_14265df0a;
        }
        fVar61 = local_320;
        if (cVar1 != '\0') {
          fStack_310 = fStack_1fc * 0.0;
          fStack_30c = fStack_26c * 0.0;
          local_318 = CONCAT44(fStack_1dc * 0.0,fStack_1ec * 0.0);
          _local_2e8 = ZEXT812(0);
          local_228 = fStack_1ec;
          fStack_224 = fStack_1dc;
          fStack_220 = fStack_1fc;
          fStack_21c = fStack_26c;
          local_238 = fStack_1f0;
          fStack_234 = fStack_1e0;
          fStack_230 = fStack_200;
          fStack_22c = fStack_270;
          local_248 = fStack_1f4;
          fStack_244 = fStack_1e4;
          fStack_240 = (float)local_208._4_4_;
          fStack_23c = fStack_274;
          fVar61 = param_9._0_4_ * (float)local_208._4_4_;
          fVar27 = param_14._0_4_ * local_1e8;
          fVar36 = param_14._0_4_ * (float)local_208._0_4_;
          local_258 = local_1f8;
          fStack_254 = local_1e8;
          fStack_250 = (float)local_208._0_4_;
          fStack_24c = local_278;
          param_14._0_4_ =
               fStack_1ec * 0.0 + local_320 * fStack_1f0 +
               param_9._0_4_ * fStack_1f4 + param_14._0_4_ * local_1f8;
          param_9._0_4_ =
               fStack_1dc * 0.0 + local_320 * fStack_1e0 + param_9._0_4_ * fStack_1e4 + fVar27;
          fVar61 = fStack_310 + local_320 * fStack_200 + fVar61 + fVar36;
        }
        local_290 = local_2d8._4_4_;
        fVar36 = (float)uStack_2f0;
        fVar27 = (float)local_2d8;
        local_2b8 = local_2d0;
      }
      fVar17 = fStack_2bc;
      fVar16 = fStack_2c0;
      fVar34 = fStack_2c4;
      fVar10 = local_2c8;
      fVar11 = param_9._0_4_ * local_290 + param_14._0_4_ * fVar27 + fVar61 * local_2b8;
      param_14._0_4_ = param_14._0_4_ - fVar11 * fVar27;
      fVar61 = fVar61 - fVar11 * local_2b8;
      local_2e8._0_4_ = param_14._0_4_;
      auVar22 = _local_2e8;
      param_9._0_4_ = param_9._0_4_ - fVar11 * local_290;
      fVar11 = fStack_2dc;
      local_2e8 = auVar22._0_8_;
      fStack_2e0 = fVar61;
      local_2e8._4_4_ = param_9._0_4_;
      fVar12 = param_9._0_4_ * param_9._0_4_ + param_14._0_4_ * param_14._0_4_ + fVar61 * fVar61;
      if (1e-08 < fVar12) {
        auVar22 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar20 = auVar22._0_4_;
        fVar20 = fVar20 + fVar20 * (0.5 - fVar12 * 0.5 * fVar20 * fVar20);
        fVar20 = fVar20 + fVar20 * (0.5 - fVar12 * 0.5 * fVar20 * fVar20);
        local_2e8._4_4_ = fVar20 * param_9._0_4_;
        local_2e8._0_4_ = fVar20 * param_14._0_4_;
        fStack_2e0 = fVar20 * fVar61;
        _local_2e8 = CONCAT412(fVar11,_local_2e8);
      }
      fVar12 = local_294 * local_res8 - fVar36 * local_res10;
      fVar12 = fVar12 + fVar12;
      fVar11 = fVar36 * local_res18 - (float)local_2f8 * local_res8;
      fVar61 = (float)local_2f8 * local_res10 - local_294 * local_res18;
      fVar11 = fVar11 + fVar11;
      fVar61 = fVar61 + fVar61;
      fVar20 = (float)local_2f8 * fVar11;
      local_2f8 = CONCAT44((fVar36 * fVar12 - (float)local_2f8 * fVar61) +
                           local_298 * fVar11 + local_res10,
                           (local_294 * fVar61 - fVar36 * fVar11) + local_298 * fVar12 + local_res18
                          );
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,
                            (fVar20 - local_294 * fVar12) + local_298 * fVar61 + local_res8);
      FQuat::FindBetweenNormals(&local_288,&local_2f8,local_2e8);
      local_2c8 = fVar17 * local_288 * _DAT_146b073e0 + fStack_27c * fVar10 +
                  fVar16 * fStack_284 * _DAT_146b073d0 + fVar34 * fStack_280 * _DAT_146b073c0;
      fStack_2c4 = fVar16 * local_288 * fRam0000000146b073e4 + fStack_27c * fVar34 +
                   fVar17 * fStack_284 * fRam0000000146b073d4 +
                   fVar10 * fStack_280 * fRam0000000146b073c4;
      fStack_2c0 = fVar34 * local_288 * fRam0000000146b073e8 + fStack_27c * fVar16 +
                   fVar10 * fStack_284 * fRam0000000146b073d8 +
                   fVar17 * fStack_280 * fRam0000000146b073c8;
      fStack_2bc = fVar10 * local_288 * fRam0000000146b073ec + fStack_27c * fVar17 +
                   fVar34 * fStack_284 * fRam0000000146b073dc +
                   fVar16 * fStack_280 * fRam0000000146b073cc;
      if ((*(byte *)(param_1 + 0x174) & 8) == 0) {
        param_4 = param_4 * 0.5;
        if (param_4 < 0.0) {
          fVar61 = param_4 * 0.15915494 - 0.5;
        }
        else {
          fVar61 = param_4 * 0.15915494 + 0.5;
        }
        param_4 = param_4 - (float)(int)fVar61 * 6.2831855;
        if (param_4 <= 1.5707964) {
          if (param_4 < -1.5707964) {
            fVar61 = -3.1415927;
            goto LAB_14265e927;
          }
          fStack_30c = 1.0;
        }
        else {
          fVar61 = 3.1415927;
LAB_14265e927:
          fStack_30c = -1.0;
          param_4 = fVar61 - param_4;
        }
        fVar27 = param_4 * param_4;
        param_4 = (((((2.7525562e-06 - fVar27 * 2.3889859e-08) * fVar27 - 0.00019840874) * fVar27 +
                    0.008333331) * fVar27 - 0.16666667) * fVar27 + 1.0) * param_4;
        fVar10 = (float)local_328 * param_4;
        fVar61 = local_328._4_4_ * param_4;
        fStack_310 = local_320 * param_4;
        fStack_30c = (((((2.4760495e-05 - fVar27 * 2.6051615e-07) * fVar27 - 0.0013888378) * fVar27
                       + 0.041666638) * fVar27 - 0.5) * fVar27 + 1.0) * fStack_30c;
        local_318 = CONCAT44(fVar61,fVar10);
        fVar27 = fStack_2bc * fVar10 * _DAT_146b073e0 + fStack_30c * local_2c8 +
                 fStack_2c0 * fVar61 * _DAT_146b073d0 + fStack_2c4 * fStack_310 * _DAT_146b073c0;
        fVar36 = fStack_2c0 * fVar10 * fRam0000000146b073e4 + fStack_30c * fStack_2c4 +
                 fStack_2bc * fVar61 * fRam0000000146b073d4 +
                 local_2c8 * fStack_310 * fRam0000000146b073c4;
        fVar11 = fStack_2c4 * fVar10 * fRam0000000146b073e8 + fStack_30c * fStack_2c0 +
                 local_2c8 * fVar61 * fRam0000000146b073d8 +
                 fStack_2bc * fStack_310 * fRam0000000146b073c8;
        fVar61 = local_2c8 * fVar10 * fRam0000000146b073ec + fStack_30c * fStack_2bc +
                 fStack_2c4 * fVar61 * fRam0000000146b073dc +
                 fStack_2c0 * fStack_310 * fRam0000000146b073cc;
        goto LAB_14265ea61;
      }
      if (bVar4) {
        param_4 = param_4 * 0.5;
        if (param_4 < 0.0) {
          fVar61 = param_4 * 0.15915494 - 0.5;
        }
        else {
          fVar61 = param_4 * 0.15915494 + 0.5;
        }
        param_4 = param_4 - (float)(int)fVar61 * 6.2831855;
        if (param_4 <= 1.5707964) {
          if (param_4 < -1.5707964) {
            fVar61 = -3.1415927;
            goto LAB_14265e45b;
          }
          fStack_30c = 1.0;
        }
        else {
          fVar61 = 3.1415927;
LAB_14265e45b:
          fStack_30c = -1.0;
          param_4 = fVar61 - param_4;
        }
        fVar61 = param_4 * param_4;
        param_4 = (((((2.7525562e-06 - fVar61 * 2.3889859e-08) * fVar61 - 0.00019840874) * fVar61 +
                    0.008333331) * fVar61 - 0.16666667) * fVar61 + 1.0) * param_4;
        fVar27 = fVar27 * param_4;
        fVar36 = local_290 * param_4;
        fStack_310 = local_2b8 * param_4;
        fStack_30c = (((((2.4760495e-05 - fVar61 * 2.6051615e-07) * fVar61 - 0.0013888378) * fVar61
                       + 0.041666638) * fVar61 - 0.5) * fVar61 + 1.0) * fStack_30c;
        local_318 = CONCAT44(fVar36,fVar27);
        fVar11 = fStack_2bc * fVar27 * _DAT_146b073e0 + fStack_30c * local_2c8 +
                 fStack_2c0 * fVar36 * _DAT_146b073d0 + fStack_2c4 * fStack_310 * _DAT_146b073c0;
        fVar16 = fStack_2c0 * fVar27 * fRam0000000146b073e4 + fStack_30c * fStack_2c4 +
                 fStack_2bc * fVar36 * fRam0000000146b073d4 +
                 local_2c8 * fStack_310 * fRam0000000146b073c4;
        fVar17 = fStack_2c4 * fVar27 * fRam0000000146b073e8 + fStack_30c * fStack_2c0 +
                 local_2c8 * fVar36 * fRam0000000146b073d8 +
                 fStack_2bc * fStack_310 * fRam0000000146b073c8;
        fVar61 = local_2c8 * fVar27 * fRam0000000146b073ec + fStack_30c * fStack_2bc +
                 fStack_2c4 * fVar36 * fRam0000000146b073dc +
                 fStack_2c0 * fStack_310 * fRam0000000146b073cc;
        goto LAB_14265e59e;
      }
    }
LAB_14265e5c4:
    fVar61 = local_1d8;
    fVar27 = fStack_1d4;
    fVar36 = fStack_1d0;
    fVar11 = fStack_1cc;
    fVar10 = (float)local_1c8;
    fVar34 = local_1c8._4_4_;
    fVar16 = (float)uStack_1c0;
    fVar17 = uStack_1c0._4_4_;
    fVar12 = local_1b8;
    fVar20 = fStack_1b4;
    fVar18 = fStack_1b0;
    fVar19 = fStack_1ac;
    fVar21 = (float)local_268;
    fVar23 = local_268._4_4_;
    fVar24 = (float)uStack_260;
    fVar25 = uStack_260._4_4_;
  }
  if ((*(uint *)(param_1 + 0x174) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x174) & 6) == 0) {
      fVar51 = (float)uStack_194 * fVar10 + local_198 * fVar61 + uStack_194._4_4_ * fVar12 +
               (float)uStack_18c * fVar21;
      fVar53 = (float)uStack_194 * fVar34 + local_198 * fVar27 + uStack_194._4_4_ * fVar20 +
               (float)uStack_18c * fVar23;
      fVar55 = (float)uStack_194 * fVar16 + local_198 * fVar36 + uStack_194._4_4_ * fVar18 +
               (float)uStack_18c * fVar24;
      fVar41 = (float)uStack_194 * fVar17 + local_198 * fVar11 + uStack_194._4_4_ * fVar19 +
               (float)uStack_18c * fVar25;
      fVar13 = fStack_184 * fVar10 + uStack_18c._4_4_ * fVar61 + (float)uStack_180 * fVar12 +
               uStack_180._4_4_ * fVar21;
      fVar14 = fStack_184 * fVar34 + uStack_18c._4_4_ * fVar27 + (float)uStack_180 * fVar20 +
               uStack_180._4_4_ * fVar23;
      fVar15 = fStack_184 * fVar16 + uStack_18c._4_4_ * fVar36 + (float)uStack_180 * fVar18 +
               uStack_180._4_4_ * fVar24;
      fVar49 = fStack_184 * fVar17 + uStack_18c._4_4_ * fVar11 + (float)uStack_180 * fVar19 +
               uStack_180._4_4_ * fVar25;
      fVar26 = local_178._4_4_ * fVar10 + (float)local_178 * fVar61 + fStack_170 * fVar12 +
               fStack_16c * fVar21;
      fVar28 = local_178._4_4_ * fVar34 + (float)local_178 * fVar27 + fStack_170 * fVar20 +
               fStack_16c * fVar23;
      fVar29 = local_178._4_4_ * fVar16 + (float)local_178 * fVar36 + fStack_170 * fVar18 +
               fStack_16c * fVar24;
      fVar31 = local_178._4_4_ * fVar17 + (float)local_178 * fVar11 + fStack_170 * fVar19 +
               fStack_16c * fVar25;
      fVar10 = fVar10 * 0.0 + fVar61 * 0.0 + fVar12 * 0.0 + fVar21 * 1.0;
      fVar34 = fVar34 * 0.0 + fVar27 * 0.0 + fVar20 * 0.0 + fVar23 * 1.0;
      fVar16 = fVar16 * 0.0 + fVar36 * 0.0 + fVar18 * 0.0 + fVar24 * 1.0;
      fVar17 = fVar17 * 0.0 + fVar11 * 0.0 + fVar19 * 0.0 + fVar25 * 1.0;
      fVar61 = fVar51 * 1.0 + fVar53 * 0.0 + fVar55 * 0.0 + fVar41 * local_128;
      fVar27 = fVar51 * 0.0 + fVar53 * 1.0 + fVar55 * 0.0 + fVar41 * fStack_124;
      fVar36 = fVar51 * 0.0 + fVar53 * 0.0 + fVar55 * 1.0 + fVar41 * fStack_120;
      fVar11 = fVar51 * 0.0 + fVar53 * 0.0 + fVar55 * 0.0 + fVar41 * fStack_11c;
      goto LAB_14265faff;
    }
    pfVar8 = (float *)FQuatRotationMatrix::FQuatRotationMatrix(local_108,&local_2a8);
    fVar13 = *pfVar8;
    fVar14 = pfVar8[1];
    fVar15 = pfVar8[2];
    fVar49 = pfVar8[3];
    fVar51 = pfVar8[4];
    fVar53 = pfVar8[5];
    fVar55 = pfVar8[6];
    fVar41 = pfVar8[7];
    fVar26 = pfVar8[8];
    fVar28 = pfVar8[9];
    fVar29 = pfVar8[10];
    fVar31 = pfVar8[0xb];
    fVar30 = pfVar8[0xc];
    fVar33 = pfVar8[0xd];
    fVar37 = pfVar8[0xe];
    fVar39 = pfVar8[0xf];
    fVar44 = local_198 * fVar13 + (float)uStack_194 * fVar51 + uStack_194._4_4_ * fVar26 +
             (float)uStack_18c * fVar30;
    fVar46 = local_198 * fVar14 + (float)uStack_194 * fVar53 + uStack_194._4_4_ * fVar28 +
             (float)uStack_18c * fVar33;
    fVar48 = local_198 * fVar15 + (float)uStack_194 * fVar55 + uStack_194._4_4_ * fVar29 +
             (float)uStack_18c * fVar37;
    fVar50 = local_198 * fVar49 + (float)uStack_194 * fVar41 + uStack_194._4_4_ * fVar31 +
             (float)uStack_18c * fVar39;
    fVar35 = uStack_18c._4_4_ * fVar13 + fStack_184 * fVar51 + (float)uStack_180 * fVar26 +
             uStack_180._4_4_ * fVar30;
    fVar38 = uStack_18c._4_4_ * fVar14 + fStack_184 * fVar53 + (float)uStack_180 * fVar28 +
             uStack_180._4_4_ * fVar33;
    fVar40 = uStack_18c._4_4_ * fVar15 + fStack_184 * fVar55 + (float)uStack_180 * fVar29 +
             uStack_180._4_4_ * fVar37;
    fVar42 = uStack_18c._4_4_ * fVar49 + fStack_184 * fVar41 + (float)uStack_180 * fVar31 +
             uStack_180._4_4_ * fVar39;
    fVar43 = (float)local_178 * fVar13 + local_178._4_4_ * fVar51 + fStack_170 * fVar26 +
             fStack_16c * fVar30;
    fVar45 = (float)local_178 * fVar14 + local_178._4_4_ * fVar53 + fStack_170 * fVar28 +
             fStack_16c * fVar33;
    fVar47 = (float)local_178 * fVar15 + local_178._4_4_ * fVar55 + fStack_170 * fVar29 +
             fStack_16c * fVar37;
    fVar32 = (float)local_178 * fVar49 + local_178._4_4_ * fVar41 + fStack_170 * fVar31 +
             fStack_16c * fVar39;
    fVar13 = fVar13 * 0.0 + fVar51 * 0.0 + fVar26 * 0.0 + fVar30 * 1.0;
    fVar14 = fVar14 * 0.0 + fVar53 * 0.0 + fVar28 * 0.0 + fVar33 * 1.0;
    fVar15 = fVar15 * 0.0 + fVar55 * 0.0 + fVar29 * 0.0 + fVar37 * 1.0;
    fVar49 = fVar49 * 0.0 + fVar41 * 0.0 + fVar31 * 0.0 + fVar39 * 1.0;
    fVar51 = fVar46 * fVar10 + fVar44 * fVar61 + fVar48 * fVar12 + fVar50 * fVar21;
    fVar53 = fVar46 * fVar34 + fVar44 * fVar27 + fVar48 * fVar20 + fVar50 * fVar23;
    fVar55 = fVar46 * fVar16 + fVar44 * fVar36 + fVar48 * fVar18 + fVar50 * fVar24;
    fVar41 = fVar46 * fVar17 + fVar44 * fVar11 + fVar48 * fVar19 + fVar50 * fVar25;
    fVar30 = fVar38 * fVar10 + fVar35 * fVar61 + fVar40 * fVar12 + fVar42 * fVar21;
    fVar33 = fVar38 * fVar34 + fVar35 * fVar27 + fVar40 * fVar20 + fVar42 * fVar23;
    fVar37 = fVar38 * fVar16 + fVar35 * fVar36 + fVar40 * fVar18 + fVar42 * fVar24;
    fVar39 = fVar38 * fVar17 + fVar35 * fVar11 + fVar40 * fVar19 + fVar42 * fVar25;
    fVar26 = fVar45 * fVar10 + fVar43 * fVar61 + fVar47 * fVar12 + fVar32 * fVar21;
    fVar28 = fVar45 * fVar34 + fVar43 * fVar27 + fVar47 * fVar20 + fVar32 * fVar23;
    fVar29 = fVar45 * fVar16 + fVar43 * fVar36 + fVar47 * fVar18 + fVar32 * fVar24;
    fVar31 = fVar45 * fVar17 + fVar43 * fVar11 + fVar47 * fVar19 + fVar32 * fVar25;
    fVar10 = fVar14 * fVar10 + fVar13 * fVar61 + fVar15 * fVar12 + fVar49 * fVar21;
    fVar34 = fVar14 * fVar34 + fVar13 * fVar27 + fVar15 * fVar20 + fVar49 * fVar23;
    fVar16 = fVar14 * fVar16 + fVar13 * fVar36 + fVar15 * fVar18 + fVar49 * fVar24;
    fVar17 = fVar14 * fVar17 + fVar13 * fVar11 + fVar15 * fVar19 + fVar49 * fVar25;
    fVar61 = fVar53 * 0.0 + fVar51 * 1.0 + fVar55 * 0.0 + fVar41 * local_128;
    fVar27 = fVar53 * 1.0 + fVar51 * 0.0 + fVar55 * 0.0 + fVar41 * fStack_124;
    fVar36 = fVar53 * 0.0 + fVar51 * 0.0 + fVar55 * 1.0 + fVar41 * fStack_120;
    fVar11 = fVar53 * 0.0 + fVar51 * 0.0 + fVar55 * 0.0 + fVar41 * fStack_11c;
    fVar21 = fVar33 * 0.0 + fVar30 * 1.0 + fVar37 * 0.0 + fVar39 * local_128;
    fVar23 = fVar33 * 1.0 + fVar30 * 0.0 + fVar37 * 0.0 + fVar39 * fStack_124;
    fVar24 = fVar33 * 0.0 + fVar30 * 0.0 + fVar37 * 1.0 + fVar39 * fStack_120;
    fVar25 = fVar33 * 0.0 + fVar30 * 0.0 + fVar37 * 0.0 + fVar39 * fStack_11c;
    fVar12 = fVar28 * 0.0 + fVar26 * 1.0 + fVar29 * 0.0;
    fVar20 = fVar28 * 1.0 + fVar26 * 0.0 + fVar29 * 0.0;
    fVar18 = fVar28 * 0.0 + fVar26 * 0.0 + fVar29 * 1.0;
    fVar19 = fVar28 * 0.0 + fVar26 * 0.0 + fVar29 * 0.0;
  }
  else {
    FRotator::MakeFromEuler(&local_2f8,param_7);
    FRotationMatrix::FRotationMatrix(&local_258,&local_2f8);
    if ((*(byte *)(param_1 + 0x174) & 6) != 0) {
      fVar32 = fStack_254 * uStack_18c._4_4_ + local_258 * local_198 + fStack_250 * (float)local_178
               + fStack_24c * 0.0;
      fVar35 = fStack_254 * fStack_184 + local_258 * (float)uStack_194 +
               fStack_250 * local_178._4_4_ + fStack_24c * 0.0;
      fVar38 = fStack_254 * (float)uStack_180 + local_258 * uStack_194._4_4_ +
               fStack_250 * fStack_170 + fStack_24c * 0.0;
      fVar40 = fStack_254 * uStack_180._4_4_ + local_258 * (float)uStack_18c +
               fStack_250 * fStack_16c + fStack_24c * 1.0;
      fVar42 = fStack_244 * uStack_18c._4_4_ + local_248 * local_198 + fStack_240 * (float)local_178
               + fStack_23c * 0.0;
      fVar44 = fStack_244 * fStack_184 + local_248 * (float)uStack_194 +
               fStack_240 * local_178._4_4_ + fStack_23c * 0.0;
      fVar46 = fStack_244 * (float)uStack_180 + local_248 * uStack_194._4_4_ +
               fStack_240 * fStack_170 + fStack_23c * 0.0;
      fVar48 = fStack_244 * uStack_180._4_4_ + local_248 * (float)uStack_18c +
               fStack_240 * fStack_16c + fStack_23c * 1.0;
      fVar50 = fStack_234 * uStack_18c._4_4_ + local_238 * local_198 + fStack_230 * (float)local_178
               + fStack_22c * 0.0;
      fVar52 = fStack_234 * fStack_184 + local_238 * (float)uStack_194 +
               fStack_230 * local_178._4_4_ + fStack_22c * 0.0;
      fVar54 = fStack_234 * (float)uStack_180 + local_238 * uStack_194._4_4_ +
               fStack_230 * fStack_170 + fStack_22c * 0.0;
      fVar56 = fStack_234 * uStack_180._4_4_ + local_238 * (float)uStack_18c +
               fStack_230 * fStack_16c + fStack_22c * 1.0;
      fVar57 = fStack_224 * uStack_18c._4_4_ + local_228 * local_198 + fStack_220 * (float)local_178
               + fStack_21c * 0.0;
      fVar58 = fStack_224 * fStack_184 + local_228 * (float)uStack_194 +
               fStack_220 * local_178._4_4_ + fStack_21c * 0.0;
      fVar59 = fStack_224 * (float)uStack_180 + local_228 * uStack_194._4_4_ +
               fStack_220 * fStack_170 + fStack_21c * 0.0;
      fVar60 = fStack_224 * uStack_180._4_4_ + local_228 * (float)uStack_18c +
               fStack_220 * fStack_16c + fStack_21c * 1.0;
      pfVar8 = (float *)FQuatRotationMatrix::FQuatRotationMatrix(local_108,&local_2a8);
      fVar13 = pfVar8[4];
      fVar14 = pfVar8[5];
      fVar15 = pfVar8[6];
      fVar49 = pfVar8[7];
      fVar51 = *pfVar8;
      fVar53 = pfVar8[1];
      fVar55 = pfVar8[2];
      fVar41 = pfVar8[3];
      fVar26 = pfVar8[8];
      fVar28 = pfVar8[9];
      fVar29 = pfVar8[10];
      fVar31 = pfVar8[0xb];
      fVar30 = pfVar8[0xc];
      fVar33 = pfVar8[0xd];
      fVar37 = pfVar8[0xe];
      fVar39 = pfVar8[0xf];
      fVar43 = fVar32 * fVar51 + fVar35 * fVar13 + fVar38 * fVar26 + fVar40 * fVar30;
      fVar45 = fVar32 * fVar53 + fVar35 * fVar14 + fVar38 * fVar28 + fVar40 * fVar33;
      fVar47 = fVar32 * fVar55 + fVar35 * fVar15 + fVar38 * fVar29 + fVar40 * fVar37;
      fVar32 = fVar32 * fVar41 + fVar35 * fVar49 + fVar38 * fVar31 + fVar40 * fVar39;
      fVar35 = fVar42 * fVar51 + fVar44 * fVar13 + fVar46 * fVar26 + fVar48 * fVar30;
      fVar38 = fVar42 * fVar53 + fVar44 * fVar14 + fVar46 * fVar28 + fVar48 * fVar33;
      fVar40 = fVar42 * fVar55 + fVar44 * fVar15 + fVar46 * fVar29 + fVar48 * fVar37;
      fVar42 = fVar42 * fVar41 + fVar44 * fVar49 + fVar46 * fVar31 + fVar48 * fVar39;
      fVar44 = fVar50 * fVar51 + fVar52 * fVar13 + fVar54 * fVar26 + fVar56 * fVar30;
      fVar46 = fVar50 * fVar53 + fVar52 * fVar14 + fVar54 * fVar28 + fVar56 * fVar33;
      fVar48 = fVar50 * fVar55 + fVar52 * fVar15 + fVar54 * fVar29 + fVar56 * fVar37;
      fVar50 = fVar50 * fVar41 + fVar52 * fVar49 + fVar54 * fVar31 + fVar56 * fVar39;
      fVar30 = fVar57 * fVar51 + fVar58 * fVar13 + fVar59 * fVar26 + fVar60 * fVar30;
      fVar33 = fVar57 * fVar53 + fVar58 * fVar14 + fVar59 * fVar28 + fVar60 * fVar33;
      fVar37 = fVar57 * fVar55 + fVar58 * fVar15 + fVar59 * fVar29 + fVar60 * fVar37;
      fVar39 = fVar57 * fVar41 + fVar58 * fVar49 + fVar59 * fVar31 + fVar60 * fVar39;
      fVar51 = fVar45 * fVar10 + fVar43 * fVar61 + fVar47 * fVar12 + fVar32 * fVar21;
      fVar53 = fVar45 * fVar34 + fVar43 * fVar27 + fVar47 * fVar20 + fVar32 * fVar23;
      fVar55 = fVar45 * fVar16 + fVar43 * fVar36 + fVar47 * fVar18 + fVar32 * fVar24;
      fVar41 = fVar45 * fVar17 + fVar43 * fVar11 + fVar47 * fVar19 + fVar32 * fVar25;
      fVar13 = fVar38 * fVar10 + fVar35 * fVar61 + fVar40 * fVar12 + fVar42 * fVar21;
      fVar14 = fVar38 * fVar34 + fVar35 * fVar27 + fVar40 * fVar20 + fVar42 * fVar23;
      fVar15 = fVar38 * fVar16 + fVar35 * fVar36 + fVar40 * fVar18 + fVar42 * fVar24;
      fVar49 = fVar38 * fVar17 + fVar35 * fVar11 + fVar40 * fVar19 + fVar42 * fVar25;
      fVar26 = fVar46 * fVar10 + fVar44 * fVar61 + fVar48 * fVar12 + fVar50 * fVar21;
      fVar28 = fVar46 * fVar34 + fVar44 * fVar27 + fVar48 * fVar20 + fVar50 * fVar23;
      fVar29 = fVar46 * fVar16 + fVar44 * fVar36 + fVar48 * fVar18 + fVar50 * fVar24;
      fVar31 = fVar46 * fVar17 + fVar44 * fVar11 + fVar48 * fVar19 + fVar50 * fVar25;
      fVar10 = fVar33 * fVar10 + fVar30 * fVar61 + fVar37 * fVar12 + fVar39 * fVar21;
      fVar34 = fVar33 * fVar34 + fVar30 * fVar27 + fVar37 * fVar20 + fVar39 * fVar23;
      fVar16 = fVar33 * fVar16 + fVar30 * fVar36 + fVar37 * fVar18 + fVar39 * fVar24;
      fVar17 = fVar33 * fVar17 + fVar30 * fVar11 + fVar37 * fVar19 + fVar39 * fVar25;
      fVar61 = fVar53 * 0.0 + fVar51 * 1.0 + fVar55 * 0.0 + fVar41 * local_128;
      fVar27 = fVar53 * 1.0 + fVar51 * 0.0 + fVar55 * 0.0 + fVar41 * fStack_124;
      fVar36 = fVar53 * 0.0 + fVar51 * 0.0 + fVar55 * 1.0 + fVar41 * fStack_120;
      fVar11 = fVar53 * 0.0 + fVar51 * 0.0 + fVar55 * 0.0 + fVar41 * fStack_11c;
LAB_14265faff:
      fVar21 = fVar14 * 0.0 + fVar13 * 1.0 + fVar15 * 0.0 + fVar49 * local_128;
      fVar23 = fVar14 * 1.0 + fVar13 * 0.0 + fVar15 * 0.0 + fVar49 * fStack_124;
      fVar24 = fVar14 * 0.0 + fVar13 * 0.0 + fVar15 * 1.0 + fVar49 * fStack_120;
      fVar25 = fVar14 * 0.0 + fVar13 * 0.0 + fVar15 * 0.0 + fVar49 * fStack_11c;
      fVar12 = fVar28 * 0.0 + fVar26 * 1.0 + fVar29 * 0.0 + fVar31 * local_128;
      fVar20 = fVar28 * 1.0 + fVar26 * 0.0 + fVar29 * 0.0 + fVar31 * fStack_124;
      fVar18 = fVar28 * 0.0 + fVar26 * 0.0 + fVar29 * 1.0 + fVar31 * fStack_120;
      fVar19 = fVar28 * 0.0 + fVar26 * 0.0 + fVar29 * 0.0 + fVar31 * fStack_11c;
      fVar13 = fVar34 * 0.0 + fVar10 * 1.0 + fVar16 * 0.0 + fVar17 * local_128;
      fVar14 = fVar34 * 1.0 + fVar10 * 0.0 + fVar16 * 0.0 + fVar17 * fStack_124;
      fVar15 = fVar34 * 0.0 + fVar10 * 0.0 + fVar16 * 1.0 + fVar17 * fStack_120;
      fVar10 = fVar34 * 0.0 + fVar10 * 0.0 + fVar16 * 0.0 + fVar17 * fStack_11c;
      goto LAB_14265ffc3;
    }
    fVar49 = fStack_254 * uStack_18c._4_4_ + local_258 * local_198 + fStack_250 * (float)local_178 +
             fStack_24c * 0.0;
    fVar51 = fStack_254 * fStack_184 + local_258 * (float)uStack_194 + fStack_250 * local_178._4_4_
             + fStack_24c * 0.0;
    fVar53 = fStack_254 * (float)uStack_180 + local_258 * uStack_194._4_4_ + fStack_250 * fStack_170
             + fStack_24c * 0.0;
    fVar55 = fStack_254 * uStack_180._4_4_ + local_258 * (float)uStack_18c + fStack_250 * fStack_16c
             + fStack_24c * 1.0;
    fVar41 = fStack_244 * uStack_18c._4_4_ + local_248 * local_198 + fStack_240 * (float)local_178 +
             fStack_23c * 0.0;
    fVar43 = fStack_244 * fStack_184 + local_248 * (float)uStack_194 + fStack_240 * local_178._4_4_
             + fStack_23c * 0.0;
    fVar45 = fStack_244 * (float)uStack_180 + local_248 * uStack_194._4_4_ + fStack_240 * fStack_170
             + fStack_23c * 0.0;
    fVar47 = fStack_244 * uStack_180._4_4_ + local_248 * (float)uStack_18c + fStack_240 * fStack_16c
             + fStack_23c * 1.0;
    fVar31 = fStack_234 * uStack_18c._4_4_ + local_238 * local_198 + fStack_230 * (float)local_178 +
             fStack_22c * 0.0;
    fVar33 = fStack_234 * fStack_184 + local_238 * (float)uStack_194 + fStack_230 * local_178._4_4_
             + fStack_22c * 0.0;
    fVar37 = fStack_234 * (float)uStack_180 + local_238 * uStack_194._4_4_ + fStack_230 * fStack_170
             + fStack_22c * 0.0;
    fVar39 = fStack_234 * uStack_180._4_4_ + local_238 * (float)uStack_18c + fStack_230 * fStack_16c
             + fStack_22c * 1.0;
    fVar26 = fStack_224 * uStack_18c._4_4_ + local_228 * local_198 + fStack_220 * (float)local_178 +
             fStack_21c * 0.0;
    fVar28 = fStack_224 * fStack_184 + local_228 * (float)uStack_194 + fStack_220 * local_178._4_4_
             + fStack_21c * 0.0;
    fVar29 = fStack_224 * (float)uStack_180 + local_228 * uStack_194._4_4_ + fStack_220 * fStack_170
             + fStack_21c * 0.0;
    fVar30 = fStack_224 * uStack_180._4_4_ + local_228 * (float)uStack_18c + fStack_220 * fStack_16c
             + fStack_21c * 1.0;
    fVar13 = fVar49 * fVar61 + fVar51 * fVar10 + fVar53 * fVar12 + fVar55 * fVar21;
    fVar14 = fVar49 * fVar27 + fVar51 * fVar34 + fVar53 * fVar20 + fVar55 * fVar23;
    fVar15 = fVar49 * fVar36 + fVar51 * fVar16 + fVar53 * fVar18 + fVar55 * fVar24;
    fVar49 = fVar49 * fVar11 + fVar51 * fVar17 + fVar53 * fVar19 + fVar55 * fVar25;
    fVar51 = fVar43 * fVar10 + fVar41 * fVar61 + fVar45 * fVar12 + fVar47 * fVar21;
    fVar53 = fVar43 * fVar34 + fVar41 * fVar27 + fVar45 * fVar20 + fVar47 * fVar23;
    fVar55 = fVar43 * fVar16 + fVar41 * fVar36 + fVar45 * fVar18 + fVar47 * fVar24;
    fVar41 = fVar43 * fVar17 + fVar41 * fVar11 + fVar45 * fVar19 + fVar47 * fVar25;
    fVar43 = fVar33 * fVar10 + fVar31 * fVar61 + fVar37 * fVar12 + fVar39 * fVar21;
    fVar45 = fVar33 * fVar34 + fVar31 * fVar27 + fVar37 * fVar20 + fVar39 * fVar23;
    fVar47 = fVar33 * fVar16 + fVar31 * fVar36 + fVar37 * fVar18 + fVar39 * fVar24;
    fVar31 = fVar33 * fVar17 + fVar31 * fVar11 + fVar37 * fVar19 + fVar39 * fVar25;
    fVar10 = fVar28 * fVar10 + fVar26 * fVar61 + fVar29 * fVar12 + fVar30 * fVar21;
    fVar34 = fVar28 * fVar34 + fVar26 * fVar27 + fVar29 * fVar20 + fVar30 * fVar23;
    fVar16 = fVar28 * fVar16 + fVar26 * fVar36 + fVar29 * fVar18 + fVar30 * fVar24;
    fVar17 = fVar28 * fVar17 + fVar26 * fVar11 + fVar29 * fVar19 + fVar30 * fVar25;
    fVar61 = fVar14 * 0.0 + fVar13 * 1.0 + fVar15 * 0.0 + fVar49 * local_128;
    fVar27 = fVar14 * 1.0 + fVar13 * 0.0 + fVar15 * 0.0 + fVar49 * fStack_124;
    fVar36 = fVar14 * 0.0 + fVar13 * 0.0 + fVar15 * 1.0 + fVar49 * fStack_120;
    fVar11 = fVar14 * 0.0 + fVar13 * 0.0 + fVar15 * 0.0 + fVar49 * fStack_11c;
    fVar21 = fVar53 * 0.0 + fVar51 * 1.0 + fVar55 * 0.0 + fVar41 * local_128;
    fVar23 = fVar53 * 1.0 + fVar51 * 0.0 + fVar55 * 0.0 + fVar41 * fStack_124;
    fVar24 = fVar53 * 0.0 + fVar51 * 0.0 + fVar55 * 1.0 + fVar41 * fStack_120;
    fVar25 = fVar53 * 0.0 + fVar51 * 0.0 + fVar55 * 0.0 + fVar41 * fStack_11c;
    fVar12 = fVar45 * 0.0 + fVar43 * 1.0 + fVar47 * 0.0;
    fVar20 = fVar45 * 1.0 + fVar43 * 0.0 + fVar47 * 0.0;
    fVar18 = fVar45 * 0.0 + fVar43 * 0.0 + fVar47 * 1.0;
    fVar19 = fVar45 * 0.0 + fVar43 * 0.0 + fVar47 * 0.0;
  }
  fVar12 = fVar12 + fVar31 * local_128;
  fVar20 = fVar20 + fVar31 * fStack_124;
  fVar18 = fVar18 + fVar31 * fStack_120;
  fVar19 = fVar19 + fVar31 * fStack_11c;
  fVar13 = fVar34 * 0.0 + fVar10 * 1.0 + fVar16 * 0.0 + fVar17 * local_128;
  fVar14 = fVar34 * 1.0 + fVar10 * 0.0 + fVar16 * 0.0 + fVar17 * fStack_124;
  fVar15 = fVar34 * 0.0 + fVar10 * 0.0 + fVar16 * 1.0 + fVar17 * fStack_120;
  fVar10 = fVar34 * 0.0 + fVar10 * 0.0 + fVar16 * 0.0 + fVar17 * fStack_11c;
LAB_14265ffc3:
  *pfVar6 = fVar61;
  pfVar6[1] = fVar27;
  pfVar6[2] = fVar36;
  pfVar6[3] = fVar11;
  pfVar6[4] = fVar21;
  pfVar6[5] = fVar23;
  pfVar6[6] = fVar24;
  pfVar6[7] = fVar25;
  pfVar6[8] = fVar12;
  pfVar6[9] = fVar20;
  pfVar6[10] = fVar18;
  pfVar6[0xb] = fVar19;
  pfVar6[0xc] = fVar13;
  pfVar6[0xd] = fVar14;
  pfVar6[0xe] = fVar15;
  pfVar6[0xf] = fVar10;
  fVar61 = *(float *)(param_10 + 1);
  local_2d8._0_4_ = (float)*param_10;
  local_2d8._4_4_ = (float)((ulonglong)*param_10 >> 0x20);
  if (*(char *)(param_1 + 0xec) == '\0') {
    fVar36 = (float)local_2d8 * fStack_1f4;
    fVar11 = (float)local_2d8 * fStack_1f0;
    fVar27 = local_2d8._4_4_ * fStack_1e0;
    local_2d8._0_4_ =
         local_278 * 0.0 + fVar61 * (float)local_208._0_4_ +
         local_2d8._4_4_ * local_1e8 + (float)local_2d8 * local_1f8;
    local_2d8._4_4_ =
         fStack_274 * 0.0 + fVar61 * (float)local_208._4_4_ + local_2d8._4_4_ * fStack_1e4 + fVar36;
    fVar61 = fStack_270 * 0.0 + fVar61 * fStack_200 + fVar27 + fVar11;
  }
  fVar27 = pfVar6[4];
  fVar36 = pfVar6[5];
  fVar11 = pfVar6[6];
  fVar10 = pfVar6[7];
  fVar34 = fVar36 * 0.0 + fVar27 * 1.0 + fVar11 * 0.0 + fVar10 * (float)local_2d8;
  fVar16 = fVar36 * 1.0 + fVar27 * 0.0 + fVar11 * 0.0 + fVar10 * local_2d8._4_4_;
  fVar17 = fVar36 * 0.0 + fVar27 * 0.0 + fVar11 * 1.0 + fVar10 * fVar61;
  fVar12 = fVar36 * 0.0 + fVar27 * 0.0 + fVar11 * 0.0 + fVar10 * 1.0;
  fVar27 = pfVar6[8];
  fVar36 = pfVar6[9];
  fVar11 = pfVar6[10];
  fVar10 = pfVar6[0xb];
  pfVar6[4] = fVar34;
  pfVar6[5] = fVar16;
  pfVar6[6] = fVar17;
  pfVar6[7] = fVar12;
  fVar20 = fVar36 * 0.0 + fVar27 * 1.0 + fVar11 * 0.0 + fVar10 * (float)local_2d8;
  fVar18 = fVar36 * 1.0 + fVar27 * 0.0 + fVar11 * 0.0 + fVar10 * local_2d8._4_4_;
  fVar19 = fVar36 * 0.0 + fVar27 * 0.0 + fVar11 * 1.0 + fVar10 * fVar61;
  fVar21 = fVar36 * 0.0 + fVar27 * 0.0 + fVar11 * 0.0 + fVar10 * 1.0;
  fVar27 = pfVar6[0xc];
  fVar36 = pfVar6[0xd];
  fVar11 = pfVar6[0xe];
  fVar10 = pfVar6[0xf];
  pfVar6[8] = fVar20;
  pfVar6[9] = fVar18;
  pfVar6[10] = fVar19;
  pfVar6[0xb] = fVar21;
  fVar23 = fVar36 * 0.0 + fVar27 * 1.0 + fVar11 * 0.0 + fVar10 * (float)local_2d8;
  fVar24 = fVar36 * 1.0 + fVar27 * 0.0 + fVar11 * 0.0 + fVar10 * local_2d8._4_4_;
  fVar25 = fVar36 * 0.0 + fVar27 * 0.0 + fVar11 * 1.0 + fVar10 * fVar61;
  fVar13 = fVar36 * 0.0 + fVar27 * 0.0 + fVar11 * 0.0 + fVar10 * 1.0;
  fVar27 = *pfVar6;
  fVar36 = pfVar6[1];
  fVar11 = pfVar6[2];
  fVar10 = pfVar6[3];
  pfVar6[0xc] = fVar23;
  pfVar6[0xd] = fVar24;
  pfVar6[0xe] = fVar25;
  pfVar6[0xf] = fVar13;
  fVar14 = fVar36 * 0.0 + fVar27 * 1.0 + fVar11 * 0.0 + fVar10 * (float)local_2d8;
  fVar15 = fVar36 * 1.0 + fVar27 * 0.0 + fVar11 * 0.0 + fVar10 * local_2d8._4_4_;
  fVar61 = fVar36 * 0.0 + fVar27 * 0.0 + fVar11 * 1.0 + fVar10 * fVar61;
  fVar27 = fVar36 * 0.0 + fVar27 * 0.0 + fVar11 * 0.0 + fVar10 * 1.0;
  *pfVar6 = fVar14;
  pfVar6[1] = fVar15;
  pfVar6[2] = fVar61;
  pfVar6[3] = fVar27;
  if (*(char *)(param_1 + 0xec) != '\0') {
    *pfVar6 = fVar14 * local_1f8 + fVar15 * local_1e8 + fVar61 * (float)local_208._0_4_ +
              fVar27 * local_278;
    pfVar6[1] = fVar14 * fStack_1f4 + fVar15 * fStack_1e4 + fVar61 * (float)local_208._4_4_ +
                fVar27 * fStack_274;
    pfVar6[2] = fVar14 * fStack_1f0 + fVar15 * fStack_1e0 + fVar61 * fStack_200 +
                fVar27 * fStack_270;
    pfVar6[3] = fVar14 * fStack_1ec + fVar15 * fStack_1dc + fVar61 * fStack_1fc +
                fVar27 * fStack_26c;
    pfVar6[4] = fVar16 * local_1e8 + fVar34 * local_1f8 + fVar17 * (float)local_208._0_4_ +
                fVar12 * local_278;
    pfVar6[5] = fVar16 * fStack_1e4 + fVar34 * fStack_1f4 + fVar17 * (float)local_208._4_4_ +
                fVar12 * fStack_274;
    pfVar6[6] = fVar16 * fStack_1e0 + fVar34 * fStack_1f0 + fVar17 * fStack_200 +
                fVar12 * fStack_270;
    pfVar6[7] = fVar16 * fStack_1dc + fVar34 * fStack_1ec + fVar17 * fStack_1fc +
                fVar12 * fStack_26c;
    pfVar6[8] = fVar18 * local_1e8 + fVar20 * local_1f8 + fVar19 * (float)local_208._0_4_ +
                fVar21 * local_278;
    pfVar6[9] = fVar18 * fStack_1e4 + fVar20 * fStack_1f4 + fVar19 * (float)local_208._4_4_ +
                fVar21 * fStack_274;
    pfVar6[10] = fVar18 * fStack_1e0 + fVar20 * fStack_1f0 + fVar19 * fStack_200 +
                 fVar21 * fStack_270;
    pfVar6[0xb] = fVar18 * fStack_1dc + fVar20 * fStack_1ec + fVar19 * fStack_1fc +
                  fVar21 * fStack_26c;
    pfVar6[0xc] = fVar24 * local_1e8 + fVar23 * local_1f8 + fVar25 * (float)local_208._0_4_ +
                  fVar13 * local_278;
    pfVar6[0xd] = fVar24 * fStack_1e4 + fVar23 * fStack_1f4 + fVar25 * (float)local_208._4_4_ +
                  fVar13 * fStack_274;
    pfVar6[0xe] = fVar24 * fStack_1e0 + fVar23 * fStack_1f0 + fVar25 * fStack_200 +
                  fVar13 * fStack_270;
    pfVar6[0xf] = fVar24 * fStack_1dc + fVar23 * fStack_1ec + fVar25 * fStack_1fc +
                  fVar13 * fStack_26c;
  }
  return;
}



// FUNCTION 142660360 FUN_142660360 body=47 status=ok
// SIG undefined FUN_142660360(void)

void FUN_142660360(undefined8 *param_1)

{
  FUN_142671270(*param_1,param_1[3],param_1[6],param_1[9],param_1[2],param_1[1]);
  return;
}



// FUNCTION 1426603c0 FUN_1426603c0 body=51 status=ok
// SIG undefined FUN_1426603c0(void)

void FUN_1426603c0(undefined8 *param_1)

{
  FUN_142671270(*param_1,*(undefined8 *)(param_1[3] + 8),*(undefined8 *)(param_1[3] + 0x18),
                param_1[4],param_1[2],param_1[1]);
  return;
}



// FUNCTION 142660420 FUN_142660420 body=86 status=ok
// SIG undefined FUN_142660420(void)

longlong FUN_142660420(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x658);
  if ((((iVar1 != -1) && (param_2 == *(longlong *)(param_1 + 0x660))) &&
      (param_3 == *(longlong *)(param_1 + 0x668))) &&
     ((*(int *)(param_2 + 0x5c) == iVar1 &&
      (*(float *)(param_2 + 0x58) == *(float *)(param_1 + 0x670))))) {
    return (ulonglong)(uint3)((uint)iVar1 >> 8) << 8;
  }
  *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_2 + 0x5c);
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x670) = uVar2;
  *(longlong *)(param_1 + 0x660) = param_2;
  *(longlong *)(param_1 + 0x668) = param_3;
  return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
}



// FUNCTION 142660480 FUN_142660480 body=399 status=ok
// SIG undefined FUN_142660480(void)

void FUN_142660480(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar5 = (int)param_1[0x21] + -1;
  if (-1 < iVar5) {
    lVar6 = (longlong)iVar5 * 8;
    lVar8 = lVar6;
    do {
      lVar7 = param_1[0x20];
      if (*(char *)(*(longlong *)(lVar6 + lVar7) + 0x678) == '\0') {
        iVar3 = (int)param_1[0x21];
        iVar2 = (iVar3 - iVar5) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar8 + lVar7),(void *)(lVar7 + (longlong)(iVar3 - iVar2) * 8),
                     (longlong)iVar2 << 3);
          iVar3 = (int)param_1[0x21];
        }
        *(int *)(param_1 + 0x21) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x20);
      }
      lVar8 = lVar8 + -8;
      lVar6 = lVar6 + -8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  lVar6 = 4;
  do {
    lVar8 = 4;
    do {
      iVar5 = (int)param_1[1] + -1;
      if (-1 < iVar5) {
        lVar7 = (longlong)iVar5 * 8;
        lVar4 = (longlong)(int)param_1[1] << 3;
        lVar9 = lVar7;
        do {
          plVar1 = *(longlong **)(lVar7 + *param_1);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x30))(plVar1);
            (**(code **)*plVar1)(plVar1,1);
          }
          iVar3 = (int)param_1[1];
          iVar2 = (iVar3 - iVar5) + -1;
          if (iVar2 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_1 + lVar9),(void *)(*param_1 + lVar4),(longlong)iVar2 << 3);
            iVar3 = (int)param_1[1];
          }
          *(int *)(param_1 + 1) = iVar3 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1);
          lVar4 = lVar4 + -8;
          lVar9 = lVar9 + -8;
          lVar7 = lVar7 + -8;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      param_1 = param_1 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}



// FUNCTION 142660610 FUN_142660610 body=169 status=ok
// SIG undefined FUN_142660610(void)

void FUN_142660610(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar4 = uVar3;
  if (*(int *)(param_1 + 0x5c8) < 1) {
    *(byte *)(param_1 + 0x5e0) = *(byte *)(param_1 + 0x5e0) & 0xfe;
    return;
  }
  do {
    plVar1 = *(longlong **)(uVar4 + *(longlong *)(param_1 + 0x5c0));
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1);
      (**(code **)*plVar1)(plVar1,1);
      *(undefined8 *)(uVar4 + *(longlong *)(param_1 + 0x5c0)) = 0;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
    uVar4 = uVar4 + 8;
  } while ((int)uVar2 < *(int *)(param_1 + 0x5c8));
  *(byte *)(param_1 + 0x5e0) = *(byte *)(param_1 + 0x5e0) & 0xfe;
  return;
}



// FUNCTION 1426606c0 CompileModule body=221 status=ok
// SIG undefined CompileModule(void)

void UParticleModuleOrbit::CompileModule(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x40);
  if (cVar1 == '\0') {
    FUN_142407530(param_2 + 0x28,*(undefined8 *)(param_1 + 0x90));
    FUN_142407530(param_2 + 0x50,*(undefined8 *)(param_1 + 0xe8));
    FUN_142407530(param_2 + 0x78,*(undefined8 *)(param_1 + 0x140));
  }
  else {
    if (cVar1 == '\x01') {
      FUN_142420940(param_2 + 0x28,*(undefined8 *)(param_1 + 0x90));
      FUN_142420940(param_2 + 0x50,*(undefined8 *)(param_1 + 0xe8));
      FUN_142420940(param_2 + 0x78,*(undefined8 *)(param_1 + 0x140));
      return;
    }
    if (cVar1 == '\x02') {
      FUN_142414360(param_2 + 0x28,*(undefined8 *)(param_1 + 0x90));
      FUN_142414360(param_2 + 0x50,*(undefined8 *)(param_1 + 0xe8));
      FUN_142414360(param_2 + 0x78,*(undefined8 *)(param_1 + 0x140));
      return;
    }
  }
  return;
}



// FUNCTION 1426607a0 CompileModule body=213 status=ok
// SIG undefined CompileModule(void)

void UParticleModuleSize::CompileModule(longlong param_1,longlong param_2)

{
  int iVar1;
  float local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_res10[0] = 0;
  local_res8[0] = 0.0;
  FUN_1424118e0(param_1 + 0x38,&local_28,0,0,0,0);
  FRawDistributionVector::GetOutRange(param_1 + 0x38,local_res10,local_res8);
  *(float *)(param_2 + 0x22c) = local_res8[0] * *(float *)(param_2 + 0x22c);
  *(float *)(param_2 + 0x228) = local_res8[0] * *(float *)(param_2 + 0x228);
  iVar1 = *(int *)(param_2 + 0x20);
  *(int *)(param_2 + 0x20) = iVar1 + 1;
  if (*(int *)(param_2 + 0x24) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2 + 0x18,iVar1);
  }
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  local_20 = 0x3f800000;
  *(longlong *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar1 * 8) = param_1;
  FComposableVectorDistribution::InitializeWithConstant(param_2 + 0x200,&local_28);
  return;
}



// FUNCTION 142660880 CompileModule body=162 status=ok
// SIG undefined CompileModule(void)

void UParticleModuleSizeMultiplyLife::CompileModule(longlong param_1,longlong param_2)

{
  uint uVar1;
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  local_28 = 0.0;
  if ((uVar1 & 4) == 0) {
    local_20 = 0.0;
  }
  else {
    local_20 = 1.0;
  }
  if ((uVar1 & 2) == 0) {
    local_24 = 0.0;
  }
  else {
    local_24 = 1.0;
  }
  if ((uVar1 & 1) != 0) {
    local_28 = 1.0;
  }
  local_18 = 1.0 - local_28;
  param_2 = param_2 + 0x200;
  local_14 = 1.0 - local_24;
  local_10 = 1.0 - local_20;
  FUN_142414360(param_2,*(undefined8 *)(param_1 + 0x80));
  FComposableVectorDistribution::ScaleByConstantVector(param_2,&local_28);
  FComposableVectorDistribution::AddConstantVector(param_2,&local_18);
  return;
}



// FUNCTION 1426609a0 CompileModule body=236 status=ok
// SIG undefined CompileModule(void)

void UParticleModuleVectorFieldLocal::CompileModule(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 local_18 [16];
  
  *(undefined8 *)(param_2 + 0x3b0) = *(undefined8 *)(param_1 + 0x38);
  auVar1._12_4_ = 0;
  auVar1._0_12_ = *(undefined1 (*) [12])(param_1 + 0x40);
  *(undefined1 (*) [16])(param_2 + 0x3d0) = auVar1;
  puVar4 = (undefined8 *)FRotator::Quaternion(param_1 + 0x4c,local_18);
  uVar3 = puVar4[1];
  *(undefined8 *)(param_2 + 0x3c0) = *puVar4;
  *(undefined8 *)(param_2 + 0x3c8) = uVar3;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = *(undefined1 (*) [12])(param_1 + 0x58);
  *(undefined1 (*) [16])(param_2 + 0x3e0) = auVar2;
  *(undefined4 *)(param_2 + 0x3f0) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_2 + 0x3f4) = *(undefined4 *)(param_1 + 0x68);
  *(uint *)(param_2 + 0x440) =
       *(uint *)(param_2 + 0x440) ^ (*(uint *)(param_2 + 0x440) ^ *(uint *)(param_1 + 0x6c)) & 1;
  uVar5 = (*(uint *)(param_1 + 0x6c) ^ *(uint *)(param_2 + 0x440)) & 2 ^ *(uint *)(param_2 + 0x440);
  *(uint *)(param_2 + 0x440) = uVar5;
  uVar5 = (*(uint *)(param_1 + 0x6c) ^ uVar5) & 4 ^ uVar5;
  *(uint *)(param_2 + 0x440) = uVar5;
  uVar5 = (*(uint *)(param_1 + 0x6c) ^ uVar5) & 8 ^ uVar5;
  *(uint *)(param_2 + 0x440) = uVar5;
  *(uint *)(param_2 + 0x440) = (*(uint *)(param_1 + 0x6c) ^ uVar5) & 0x10 ^ uVar5;
  return;
}



// FUNCTION 142660b40 FUN_142660b40 body=552 status=ok
// SIG undefined FUN_142660b40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142660b40(undefined4 param_1,undefined8 param_2,ulonglong *param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  undefined1 local_28 [8];
  uint local_20;
  
  switch(param_1) {
  case 1:
    uVar3 = 3;
    goto LAB_142660c8f;
  case 2:
    puVar2 = (ulonglong *)FMatrix::GetUnitAxis(param_2,local_28,3);
    local_20 = (uint)puVar2[1] ^ 0x80000000;
    *param_3 = *puVar2 ^ 0x8000000080000000;
    *(uint *)(param_3 + 1) = local_20;
    puVar2 = (ulonglong *)FMatrix::GetUnitAxis(param_2,local_28,1);
    *param_4 = *puVar2;
    *(int *)(param_4 + 1) = (int)puVar2[1];
    return;
  case 3:
    uVar3 = 1;
    goto LAB_142660c02;
  case 4:
    uVar3 = 3;
LAB_142660c02:
    puVar2 = (ulonglong *)FMatrix::GetUnitAxis(param_2,local_28,uVar3);
    local_20 = (uint)puVar2[1] ^ 0x80000000;
    *param_3 = *puVar2 ^ 0x8000000080000000;
    *(uint *)(param_3 + 1) = local_20;
    puVar2 = (ulonglong *)FMatrix::GetUnitAxis(param_2,local_28,2);
    *param_4 = *puVar2;
    *(int *)(param_4 + 1) = (int)puVar2[1];
    return;
  case 5:
    puVar2 = (ulonglong *)FMatrix::GetUnitAxis(param_2,local_28,3);
    uVar3 = 1;
    goto LAB_142660ca1;
  case 6:
    uVar3 = 1;
LAB_142660c8f:
    puVar2 = (ulonglong *)FMatrix::GetUnitAxis(param_2,local_28,uVar3);
    uVar3 = 2;
LAB_142660ca1:
    local_20 = (uint)puVar2[1] ^ 0x80000000;
    *param_3 = *puVar2 ^ 0x8000000080000000;
    *(uint *)(param_3 + 1) = local_20;
    puVar2 = (ulonglong *)FMatrix::GetUnitAxis(param_2,local_28,uVar3);
    uVar1 = puVar2[1];
    *param_4 = *puVar2 ^ 0x8000000080000000;
    *(uint *)(param_4 + 1) = (uint)uVar1 ^ 0x80000000;
    return;
  case 7:
    uVar3 = 1;
    break;
  case 8:
    uVar3 = 2;
    break;
  case 9:
    uVar3 = 3;
    break;
  default:
    goto switchD_142660b84_default;
  }
  puVar2 = (ulonglong *)FMatrix::GetUnitAxis(param_2,local_28,uVar3);
  *param_4 = *puVar2;
  *(int *)(param_4 + 1) = (int)puVar2[1];
  *param_3 = _DAT_1468b5d90;
  *(undefined4 *)(param_3 + 1) = DAT_1468b5d98;
switchD_142660b84_default:
  return;
}



// FUNCTION 142660d90 ConstructCompiledInstance body=261 status=ok
// SIG undefined ConstructCompiledInstance(void)

undefined8 * FParticleSortKeyGenCS::ConstructCompiledInstance(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xd8);
  if (puVar1 != (undefined8 *)0x0) {
    FGlobalShader::FGlobalShader(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144e1b348;
    *(undefined4 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
    *(undefined8 *)((longlong)puVar1 + 0xcc) = 0;
    FShaderResourceParameter::Bind
              (puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18),L"InParticleIndices",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xc4,*(undefined8 *)(param_1 + 0x18),L"PositionTexture",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x19,*(undefined8 *)(param_1 + 0x18),L"PositionTextureSampler",0);
    FShaderResourceParameter::Bind
              ((longlong)puVar1 + 0xcc,*(undefined8 *)(param_1 + 0x18),L"OutKeys",0);
    FShaderResourceParameter::Bind
              (puVar1 + 0x1a,*(undefined8 *)(param_1 + 0x18),L"OutParticleIndices",0);
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142660ea0 FUN_142660ea0 body=112 status=ok
// SIG undefined FUN_142660ea0(void)

void FUN_142660ea0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x80);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_145156138;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    puVar2[2] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[4] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    puVar2[6] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2[7] = *(undefined8 *)(param_1 + 0x38);
    puVar2[8] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    puVar2[9] = *(undefined8 *)(param_1 + 0x48);
    puVar2[10] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    puVar2[0xb] = *(undefined8 *)(param_1 + 0x58);
    puVar2[0xc] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    puVar2[0xd] = *(undefined8 *)(param_1 + 0x68);
    puVar2[0xe] = uVar1;
    puVar2[0xf] = *(undefined8 *)(param_1 + 0x78);
    return;
  }
  return;
}



// FUNCTION 142660f10 FUN_142660f10 body=1079 status=ok
// SIG undefined FUN_142660f10(void)

undefined4
FUN_142660f10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
             float param_6,longlong *param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float fStack_a0;
  undefined4 uStack_9c;
  
  fVar6 = 0.0;
  pfVar1 = (float *)*param_7;
  local_b8 = 0;
  local_b0 = 0.0;
  local_a8 = 0;
  fStack_a0 = 0.0;
  if (*(char *)(param_2 + 0xb7) == '\0') {
    fVar7 = *(float *)(param_3 + 0x610) * 1.0 + *(float *)(param_3 + 0x620) * 0.0 +
            *(float *)(param_3 + 0x630) * 0.0 + *(float *)(param_3 + 0x640) * 0.0;
    fVar8 = *(float *)(param_3 + 0x614) * 1.0 + *(float *)(param_3 + 0x624) * 0.0 +
            *(float *)(param_3 + 0x634) * 0.0 + *(float *)(param_3 + 0x644) * 0.0;
    fVar9 = *(float *)(param_3 + 0x618) * 1.0 + *(float *)(param_3 + 0x628) * 0.0 +
            *(float *)(param_3 + 0x638) * 0.0 + *(float *)(param_3 + 0x648) * 0.0;
    fVar3 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
    if (fVar3 <= 1e-08) {
      fVar7 = 0.0;
      fVar8 = 0.0;
      fVar9 = 0.0;
    }
    else {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar7 = fVar7 * fVar4;
      fVar8 = fVar8 * fVar4;
      fVar9 = fVar9 * fVar4;
    }
    local_a8._0_4_ =
         *(float *)(param_3 + 0x610) * 0.0 + *(float *)(param_3 + 0x620) * 1.0 +
         *(float *)(param_3 + 0x630) * 0.0 + *(float *)(param_3 + 0x640) * 0.0;
    local_a8._4_4_ =
         *(float *)(param_3 + 0x614) * 0.0 + *(float *)(param_3 + 0x624) * 1.0 +
         *(float *)(param_3 + 0x634) * 0.0 + *(float *)(param_3 + 0x644) * 0.0;
    fStack_a0 = *(float *)(param_3 + 0x618) * 0.0 + *(float *)(param_3 + 0x628) * 1.0 +
                *(float *)(param_3 + 0x638) * 0.0 + *(float *)(param_3 + 0x648) * 0.0;
    fVar3 = local_a8._4_4_ * local_a8._4_4_ + (float)local_a8 * (float)local_a8 +
            fStack_a0 * fStack_a0;
    if (fVar3 <= 1e-08) {
      local_a8._0_4_ = 0.0;
      local_a8._4_4_ = 0.0;
      fStack_a0 = 0.0;
    }
    else {
      auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
      fVar4 = auVar5._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
      local_a8._0_4_ = (float)local_a8 * fVar4;
      local_a8._4_4_ = local_a8._4_4_ * fVar4;
      fStack_a0 = fStack_a0 * fVar4;
    }
    local_a8._0_4_ = -(float)local_a8;
    local_a8._4_4_ = -local_a8._4_4_;
    fStack_a0 = -fStack_a0;
    fVar3 = -fVar7;
    fVar7 = -fVar8;
    fVar8 = -fVar9;
  }
  else {
    puVar2 = (undefined4 *)(param_1 + 0x80);
    if (*(char *)(param_2 + 0xb4) == '\0') {
      puVar2 = &DAT_1464aa7d0;
    }
    FUN_142660b40(*(char *)(param_2 + 0xb7),puVar2,&local_b8,&local_a8);
    fVar3 = (float)local_b8;
    fVar7 = local_b8._4_4_;
    fVar8 = local_b0;
  }
  pfVar1[4] = fVar3;
  pfVar1[5] = fVar7;
  pfVar1[6] = fVar8;
  pfVar1[7] = 0.0;
  uStack_9c = 0;
  *pfVar1 = (float)local_a8;
  pfVar1[1] = local_a8._4_4_;
  pfVar1[2] = fStack_a0;
  pfVar1[3] = 0.0;
  FMatrix::GetUnitAxis(param_1 + 0x80,&local_a8,3);
  pfVar1[8] = (float)*(byte *)(param_2 + 0xb6);
  pfVar1[9] = (float)local_a8;
  pfVar1[10] = local_a8._4_4_;
  pfVar1[0xb] = fStack_a0;
  if (*(int *)(param_2 + 8) == 4) {
    fVar6 = (float)(*(uint *)(param_4 + 600) & 3);
  }
  pfVar1[0xc] = fVar6;
  pfVar1[0xd] = param_5;
  pfVar1[0xe] = param_6;
  return (int)param_7[1];
}



// FUNCTION 142661350 FUN_142661350 body=622 status=ok
// SIG undefined FUN_142661350(void)

longlong * FUN_142661350(int param_1,undefined4 param_2,longlong *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)0x0;
  plVar5 = plVar7;
  if (param_1 == 0) {
    plVar7 = (longlong *)operator_new(0x6a8);
    if (plVar7 != (longlong *)0x0) {
      uVar1 = *(undefined1 *)((longlong)param_3 + 0xfd);
      *(undefined4 *)(plVar7 + 1) = param_2;
      plVar7[2] = 0;
      plVar7[3] = 0;
      *(undefined1 *)(plVar7 + 5) = 0;
      plVar7[0x66] = 0;
      *(undefined2 *)(plVar7 + 0x67) = 1;
      plVar7[200] = 0;
      plVar7[0xc9] = 0;
      plVar7[0xca] = 0;
      *(undefined4 *)(plVar7 + 0xcb) = 0xffffffff;
      plVar7[0xcc] = 0;
      plVar7[0xcd] = 0;
      *(undefined4 *)(plVar7 + 0xce) = 0xbf800000;
      *(undefined4 *)((longlong)plVar7 + 0x674) = 0;
      *(undefined2 *)(plVar7 + 0xcf) = 0;
      *(undefined1 *)((longlong)plVar7 + 0x33a) = 1;
      *plVar7 = (longlong)&PTR_FUN_145150528;
      *(undefined4 *)(plVar7 + 0xd0) = 0;
      *(undefined1 *)((longlong)plVar7 + 0x684) = uVar1;
      *(undefined4 *)(plVar7 + 0xd1) = 0;
      plVar7[0xd2] = 0;
      *(undefined2 *)(plVar7 + 0xd3) = 0x100;
      *(undefined4 *)((longlong)plVar7 + 0x69c) = 0;
      plVar5 = plVar7;
    }
  }
  else if (param_1 == 1) {
    plVar7 = (longlong *)operator_new(0x6c8);
    if (plVar7 != (longlong *)0x0) {
      *(undefined4 *)(plVar7 + 1) = param_2;
      plVar7[2] = 0;
      plVar7[3] = 0;
      *(undefined1 *)(plVar7 + 5) = 0;
      plVar7[0x66] = 0;
      *(undefined2 *)(plVar7 + 0x67) = 1;
      plVar7[200] = 0;
      plVar7[0xc9] = 0;
      plVar7[0xca] = 0;
      *(undefined4 *)(plVar7 + 0xcb) = 0xffffffff;
      plVar7[0xcc] = 0;
      plVar7[0xcd] = 0;
      *(undefined4 *)(plVar7 + 0xce) = 0xbf800000;
      *(undefined4 *)((longlong)plVar7 + 0x674) = 1;
      *(undefined2 *)(plVar7 + 0xcf) = 0;
      *(undefined1 *)((longlong)plVar7 + 0x33a) = 1;
      *plVar7 = (longlong)&PTR_FUN_145156098;
      plVar7[0xd0] = 0;
      plVar7[0xd1] = 0;
      *(undefined1 *)(plVar7 + 0xd2) = 1;
      plVar7[0xd3] = 0;
      plVar7[0xd4] = 0;
      *(undefined4 *)(plVar7 + 0xd5) = 0;
      plVar7[0xd6] = 0;
      plVar7[0xd7] = 0;
      *(undefined4 *)(plVar7 + 0xd8) = 0;
      plVar5 = plVar7;
    }
  }
  else {
    plVar5 = (longlong *)0x0;
    if (param_1 == 2) {
      uVar2 = (**(code **)(*param_3 + 0x58))(param_3);
      uVar3 = (**(code **)(*param_3 + 0x50))(param_3,param_2);
      if (DAT_1464c9c6c == '\0') {
        plVar6 = (longlong *)operator_new(0x840);
        plVar5 = plVar7;
        if (plVar6 != (longlong *)0x0) {
          FUN_142659340(plVar6,2,param_2,uVar3,uVar2);
          *plVar6 = (longlong)&PTR_FUN_145150610;
          plVar5 = plVar6;
        }
      }
      else {
        lVar4 = operator_new(0x840);
        if (lVar4 != 0) {
          plVar5 = (longlong *)FUN_142659340(lVar4,2,param_2,uVar3,uVar2);
        }
      }
    }
  }
  (**(code **)(*plVar5 + 0x28))(plVar5);
  return plVar5;
}



// FUNCTION 1426615d0 FUN_1426615d0 body=531 status=ok
// SIG undefined FUN_1426615d0(void)

void FUN_1426615d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x3c8);
  uVar6 = 0;
  if (lVar9 != 0) {
    uVar10 = uVar6;
    uVar7 = uVar6;
    if (0 < *(int *)(lVar9 + 0xb0)) {
      do {
        lVar5 = *(longlong *)(lVar9 + 0xa8);
        if (*(longlong *)(lVar9 + 0xa8) == 0) {
          lVar5 = lVar9 + 8;
        }
        plVar1 = *(longlong **)(lVar5 + uVar10);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
          lVar9 = *(longlong *)(param_1 + 0x3c8);
        }
        uVar8 = (int)uVar7 + 1;
        uVar10 = uVar10 + 8;
        uVar7 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(lVar9 + 0xb0));
    }
    if ((*(char *)(lVar9 + 200) != '\0') || (*(int *)(param_1 + 0x5c8) != *(int *)(lVar9 + 0xb0))) {
      FUN_142660610(param_1);
      iVar3 = *(int *)(param_1 + 0x5c8);
      *(undefined4 *)(param_1 + 0x5c8) = 0;
      if (*(int *)(param_1 + 0x5cc) != iVar3) {
        TArray<void_*,FDefaultAllocator>::ResizeTo();
      }
    }
  }
  if ((*(byte *)(param_1 + 0x5e0) & 1) == 0) {
    uVar10 = uVar6;
    uVar7 = uVar6;
    if (0 < *(int *)(param_1 + 0x5c8)) {
      do {
        plVar1 = *(longlong **)(uVar7 + *(longlong *)(param_1 + 0x5c0));
        if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)plVar1 + 0x679) != '\0')) {
          (**(code **)(*plVar1 + 0x30))(plVar1);
          (**(code **)*plVar1)(plVar1,1);
          *(undefined8 *)(uVar7 + *(longlong *)(param_1 + 0x5c0)) = 0;
        }
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar8;
        uVar7 = uVar7 + 8;
      } while ((int)uVar8 < *(int *)(param_1 + 0x5c8));
    }
  }
  else {
    FUN_142660610(param_1);
  }
  if (0 < *(int *)(param_1 + 0x5d8)) {
    plVar1 = (longlong *)(param_1 + 0x5c0);
    uVar10 = uVar6;
    do {
      plVar2 = *(longlong **)(uVar10 + *(longlong *)(param_1 + 0x5d0));
      iVar3 = (int)plVar2[2];
      if (*(int *)(param_1 + 0x5c8) <= iVar3) {
        do {
          iVar3 = *(int *)(param_1 + 0x5c8);
          *(int *)(param_1 + 0x5c8) = iVar3 + 1;
          if (*(int *)(param_1 + 0x5cc) < iVar3 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
          }
          *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = 0;
          iVar3 = (int)plVar2[2];
        } while (*(int *)(param_1 + 0x5c8) <= iVar3);
      }
      lVar9 = *plVar1;
      if (*(longlong *)(lVar9 + (longlong)iVar3 * 8) == 0) {
        uVar4 = (**(code **)(*plVar2 + 8))(plVar2,*(undefined4 *)(param_1 + 0x5e4),param_1);
        *(undefined8 *)(lVar9 + (longlong)iVar3 * 8) = uVar4;
      }
      uVar8 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar8;
      uVar10 = uVar10 + 8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x5d8));
  }
  *(undefined4 *)(param_1 + 0x5d8) = 0;
  if (*(int *)(param_1 + 0x5dc) == 0) {
    return;
  }
  TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x5d0,0);
  return;
}



// FUNCTION 1426617f0 FUN_1426617f0 body=441 status=ok
// SIG undefined FUN_1426617f0(void)

longlong FUN_1426617f0(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 local_38 [16];
  
  if (((*(byte *)(param_1 + 0xba) & 4) == 0) || (*(longlong *)(param_1 + 0x6f0) == 0)) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  FUN_1424de8e0(local_38,lVar3,0,0,*(byte *)(param_1 + 0x719) >> 5 & 1);
  if (0 < *(int *)(param_1 + 0x928)) {
    FUN_1425fe620(param_1,*(undefined8 *)(param_1 + 0x6f0));
  }
  lVar3 = FUN_14233fea0(param_1);
  lVar3 = FUN_1425ffb40(param_1,*(undefined4 *)(lVar3 + 8));
  cVar2 = FUN_1425ff120(param_1);
  if (cVar2 == '\0') {
    lVar4 = operator_new();
    if (lVar4 == 0) goto LAB_1426618ce;
    uVar7 = 0;
  }
  else {
    *(undefined1 *)(*(longlong *)(param_1 + 0x6f0) + 0x114) = 1;
    lVar4 = operator_new();
    if (lVar4 == 0) {
LAB_1426618ce:
      lVar4 = 0;
      goto LAB_1426618d1;
    }
    uVar7 = 1;
  }
  lVar4 = FUN_142659590(lVar4,param_1,lVar3,uVar7);
LAB_1426618d1:
  if ((lVar3 != 0) && (iVar6 = 0, 0 < *(int *)(lVar3 + 0xb0))) {
    lVar8 = 0;
    do {
      iVar1 = *(int *)(lVar4 + 0x5d8);
      lVar5 = *(longlong *)(lVar3 + 0xa8);
      if (*(longlong *)(lVar3 + 0xa8) == 0) {
        lVar5 = lVar3 + 8;
      }
      uVar7 = *(undefined8 *)(lVar5 + lVar8);
      *(int *)(lVar4 + 0x5d8) = iVar1 + 1;
      if (*(int *)(lVar4 + 0x5dc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x5d0,iVar1);
      }
      iVar6 = iVar6 + 1;
      lVar8 = lVar8 + 8;
      *(undefined8 *)(*(longlong *)(lVar4 + 0x5d0) + (longlong)iVar1 * 8) = uVar7;
    } while (iVar6 < *(int *)(lVar3 + 0xb0));
  }
  FUN_1424e13e0(local_38);
  return lVar4;
}



// FUNCTION 1426619b0 FUN_1426619b0 body=92 status=ok
// SIG undefined FUN_1426619b0(void)

longlong * FUN_1426619b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = operator_new(0x6c8);
  if (lVar1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)FUN_1426594d0(lVar1,param_2);
  }
  *(undefined4 *)((longlong)plVar2 + 0x674) = 1;
  *(byte *)(plVar2 + 0xd2) = *(byte *)(param_1 + 0x30) & 1;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return plVar2;
}



// FUNCTION 142661a10 FUN_142661a10 body=244 status=ok
// SIG undefined FUN_142661a10(void)

longlong * FUN_142661a10(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = (longlong *)0x0;
  uVar3 = 0;
  if (DAT_1464c9c6c == '\0') {
    plVar6 = (longlong *)operator_new(0x840);
    if (plVar6 != (longlong *)0x0) {
      FUN_142659430(plVar6,param_2);
      *plVar6 = (longlong)&PTR_FUN_145150610;
      plVar5 = plVar6;
    }
  }
  else {
    lVar4 = operator_new(0x840);
    if (lVar4 != 0) {
      plVar5 = (longlong *)FUN_142659430(lVar4,param_2);
    }
  }
  *(undefined4 *)((longlong)plVar5 + 0x674) = 2;
  plVar6 = *(longlong **)(param_1[0x28] + 0x38);
  iVar1 = FDynamicMeshEmitterData::GetMeshLODIndexFromProxy(param_1,param_3);
  FUN_1426796c0(param_1,plVar5,*(undefined8 *)(*plVar6 + (longlong)iVar1 * 8));
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
  }
  *(undefined4 *)(plVar5 + 0x100) = uVar2;
  *(undefined4 *)((longlong)plVar5 + 0x804) = uVar3;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  return plVar5;
}



// FUNCTION 142661b10 FUN_142661b10 body=314 status=ok
// SIG undefined FUN_142661b10(void)

longlong * FUN_142661b10(longlong *param_1,undefined4 param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)operator_new(0x6a8);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = param_2;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *(undefined1 *)(plVar5 + 5) = 0;
    plVar5[0x66] = 0;
    *(undefined2 *)(plVar5 + 0x67) = 1;
    plVar5[200] = 0;
    plVar5[0xc9] = 0;
    plVar5[0xca] = 0;
    *(undefined4 *)(plVar5 + 0xcb) = 0xffffffff;
    plVar5[0xcc] = 0;
    plVar5[0xcd] = 0;
    *(undefined4 *)(plVar5 + 0xce) = 0xbf800000;
    *(undefined2 *)(plVar5 + 0xcf) = 0;
    *(undefined1 *)((longlong)plVar5 + 0x33a) = 1;
    *plVar5 = (longlong)&PTR_FUN_145150528;
    *(undefined4 *)(plVar5 + 0xd0) = 0;
    *(undefined1 *)((longlong)plVar5 + 0x684) = 0;
    *(undefined4 *)(plVar5 + 0xd1) = 0;
    plVar5[0xd2] = 0;
    *(undefined2 *)(plVar5 + 0xd3) = 0x100;
    *(undefined4 *)((longlong)plVar5 + 0x69c) = 0;
  }
  uVar4 = 0;
  *(undefined4 *)((longlong)plVar5 + 0x674) = 0;
  lVar6 = (**(code **)(*param_1 + 0x60))(param_1);
  pcVar1 = *(char **)(lVar6 + 0x68);
  if ((*pcVar1 == '\0') || (*(float *)(pcVar1 + 0x10) == 0.0)) {
    uVar3 = 4;
  }
  else {
    uVar3 = *(undefined4 *)(pcVar1 + 8);
  }
  *(undefined4 *)(plVar5 + 0xd0) = uVar3;
  bVar2 = (byte)*(uint *)(param_1 + 6);
  if ((*(uint *)(param_1 + 6) & 1) != 0) {
    uVar4 = (**(code **)(*param_1 + 0x58))(param_1);
    bVar2 = *(byte *)(param_1 + 6);
  }
  *(byte *)((longlong)plVar5 + 0x699) = bVar2 & 1;
  *(undefined4 *)((longlong)plVar5 + 0x69c) = uVar4;
  (**(code **)(*plVar5 + 0x28))(plVar5);
  return plVar5;
}



// FUNCTION 142661c50 DoBufferFill body=133 status=ok
// SIG undefined DoBufferFill(void)

void FDynamicBeam2EmitterData::DoBufferFill(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if ((((0 < *(int *)(param_2 + 0x88)) && (0 < *(int *)(param_2 + 0x98))) &&
      (*(longlong *)(param_2 + 0x90) != 0)) && (*(longlong *)(param_2 + 0xa0) != 0)) {
    if (*(int *)(param_1 + 0x110) == 2) {
      uVar1 = CreateDynamicBeam2EmitterIndices<unsigned_short>();
    }
    else {
      uVar1 = CreateDynamicBeam2EmitterIndices<unsigned_int>
                        (*(longlong *)(param_2 + 0xa0),param_1 + 0x38);
    }
    *(undefined4 *)(param_2 + 0xa8) = uVar1;
    if (*(char *)(param_1 + 0x14c) != '\0') {
      FUN_142664f30();
      return;
    }
    FUN_14266bf30(param_1,param_2);
  }
  return;
}



// FUNCTION 142661ce0 FUN_142661ce0 body=356 status=ok
// SIG undefined FUN_142661ce0(void)

void FUN_142661ce0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  undefined1 local_38 [16];
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  lVar5 = param_1[1];
  if ((lVar5 != 0) && (iVar9 = 0, 0 < *(int *)(lVar5 + 0xb0))) {
    lVar8 = 0;
    do {
      lVar3 = *param_1;
      lVar7 = *(longlong *)(lVar5 + 0xa8);
      if (*(longlong *)(lVar5 + 0xa8) == 0) {
        lVar7 = lVar5 + 8;
      }
      iVar1 = *(int *)(lVar3 + 0x5d8);
      uVar6 = *(undefined8 *)(lVar7 + lVar8);
      iVar4 = iVar1 + 1;
      *(int *)(lVar3 + 0x5d8) = iVar4;
      if (*(int *)(lVar3 + 0x5dc) < iVar4) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0x5d0);
      }
      iVar9 = iVar9 + 1;
      lVar8 = lVar8 + 8;
      *(undefined8 *)(*(longlong *)(lVar3 + 0x5d0) + (longlong)iVar1 * 8) = uVar6;
      lVar5 = param_1[1];
    } while (iVar9 < *(int *)(lVar5 + 0xb0));
  }
  lVar8 = *param_1;
  uVar2 = *(uint *)(lVar8 + 0x3b8);
  uVar6 = (**(code **)(**(longlong **)(lVar8 + 0x130) + 0x208))();
  FUN_1424de8e0(local_38,uVar6,0,1,(byte)(uVar2 >> 1) & 1);
  lVar3 = *(longlong *)(lVar8 + 0x3c8);
  if ((lVar3 != lVar5) && (lVar3 != 0)) {
    FUN_14265b050(lVar3,1);
  }
  *(longlong *)(lVar8 + 0x3c8) = lVar5;
  FUN_1426615d0(lVar8);
  FUN_1424e13e0(local_38);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  return;
}



// FUNCTION 142661e50 FUN_142661e50 body=148 status=ok
// SIG undefined FUN_142661e50(void)

void FUN_142661e50(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_18 [2];
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(local_18);
  FUN_142660480(&DAT_146b072b0);
  lVar2 = (longlong)(DAT_146b073b8 + -1);
  if (-1 < DAT_146b073b8 + -1) {
    do {
      puVar1 = *(undefined8 **)(DAT_146b073b0 + lVar2 * 8);
      if (*(char *)(puVar1 + 0xcf) != '\0') {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  DAT_146b073b8 = 0;
  if (DAT_146b073bc != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146b073b0,0);
  }
  QueryPerformanceCounter(&local_res20);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - local_18[0]._0_4_);
  return;
}



// FUNCTION 142661ef0 FUN_142661ef0 body=67 status=ok
// SIG undefined FUN_142661ef0(void)

void FUN_142661ef0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0xc) & 4) != 0) {
    uVar1 = FUN_142627a50(param_2,param_1);
    (**(code **)(*param_1 + 0x350))(param_1,param_2,uVar1,param_1 + 0xb);
  }
  return;
}



// FUNCTION 142661f40 FUN_142661f40 body=237 status=ok
// SIG undefined FUN_142661f40(void)

void FUN_142661f40(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_142661ce0(param_1 + 2,param_3,param_1 + 5);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_145156128;
  if (param_1[5] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[5] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar3);
  plVar5 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar5;
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      lpTlsValue = plVar4;
    }
    TlsSetValue(*pDVar3,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar5 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar3 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar5;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}


