// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1405c15d0 UAnimNotify_WeaponFire body=44 status=ok
// SIG undefined UAnimNotify_WeaponFire(void)

undefined8 * UAnimNotify_WeaponFire::UAnimNotify_WeaponFire(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_143fe03a8;
  return param_1;
}



// FUNCTION 1405c1600 FUN_1405c1600 body=80 status=ok
// SIG undefined FUN_1405c1600(void)

undefined8 * FUN_1405c1600(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR__scalar_deleting_destructor__143fe0a98;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x3f800000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  return param_1;
}



// FUNCTION 1405c1650 FUN_1405c1650 body=80 status=ok
// SIG undefined FUN_1405c1650(void)

undefined8 * FUN_1405c1650(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  param_1[9] = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143fe0ff8;
  return param_1;
}



// FUNCTION 1405c16a0 FUN_1405c16a0 body=65 status=ok
// SIG undefined FUN_1405c16a0(void)

undefined8 * FUN_1405c16a0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_143fe0d48;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x42480000;
  *(undefined1 *)((longlong)param_1 + 0x61) = 2;
  return param_1;
}



// FUNCTION 1405c16f0 FUN_1405c16f0 body=188 status=ok
// SIG undefined FUN_1405c16f0(void)

undefined8 * FUN_1405c16f0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *param_1 = &PTR_FUN_143fe1ca0;
  param_1[5] = &PTR_LAB_143fe20c8;
  param_1[0x2f] = &PTR_LAB_143fe20f8;
  FUN_140590080(param_1 + 0x31);
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_140590080(param_1 + 0x36);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  param_1[0x3c] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0xe) = 0x3e800000;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x459c4000;
  *(undefined2 *)(param_1 + 0x13) = 0;
  return param_1;
}



// FUNCTION 1405c17b0 FUN_1405c17b0 body=109 status=ok
// SIG undefined FUN_1405c17b0(void)

undefined8 * FUN_1405c17b0(undefined8 *param_1)

{
  FUN_14237f6c0();
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *param_1 = &PTR_FUN_143fe2828;
  param_1[5] = &PTR_LAB_143fe2d70;
  FUN_140590080(param_1 + 0x5f);
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xf3;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) & 0xdf;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x40;
  return param_1;
}



// FUNCTION 1405c1820 FUN_1405c1820 body=245 status=ok
// SIG undefined FUN_1405c1820(void)

undefined8 * FUN_1405c1820(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_143fe0670;
  param_1[5] = &PTR_LAB_143fe0a68;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x3f800000;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined2 *)(param_1 + 0x45) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  FUN_140590080(param_1 + 0x4b);
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined1 *)(param_1 + 7) = 2;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xf3;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) & 0xdf;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x40;
  return param_1;
}



// FUNCTION 1405c1920 FUN_1405c1920 body=136 status=ok
// SIG undefined FUN_1405c1920(void)

undefined8 * FUN_1405c1920(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_143fdebb0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x15) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x1b) = 0x41200000;
  return param_1;
}



// FUNCTION 1405c19b0 FUN_1405c19b0 body=76 status=ok
// SIG undefined FUN_1405c19b0(void)

undefined8 * FUN_1405c19b0(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_143fe2da0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xc1400000;
  *(undefined4 *)(param_1 + 10) = 0x3f666666;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f4ccccd;
  return param_1;
}



// FUNCTION 1405c1a00 FUN_1405c1a00 body=191 status=ok
// SIG undefined FUN_1405c1a00(void)

undefined8 * FUN_1405c1a00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14237f6c0(param_1,uVar1);
  *param_1 = &PTR_FUN_143fe3018;
  param_1[5] = &PTR_LAB_143fe3560;
  param_1[0x5a] = &PTR_LAB_143fe3590;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  FUN_14058f8d0(param_1 + 0x6b,0);
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  return param_1;
}



// FUNCTION 1405c1ac0 FUN_1405c1ac0 body=249 status=ok
// SIG undefined FUN_1405c1ac0(void)

undefined8 * FUN_1405c1ac0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142326e40(param_1,uVar1);
  *(undefined4 *)(param_1 + 0x30) = 0x42700000;
  *param_1 = &PTR_FUN_143fe35c8;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0x3d4ccccd;
  param_1[5] = &PTR_LAB_143fe39c0;
  param_1[0x2f] = &PTR_FUN_143fe39f0;
  *(undefined1 *)(param_1 + 0x31) = 1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x32));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x32),4000);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3b),4000);
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  return param_1;
}



// FUNCTION 1405c1bc0 FUN_1405c1bc0 body=41 status=ok
// SIG undefined FUN_1405c1bc0(void)

undefined8 * FUN_1405c1bc0(undefined8 *param_1)

{
  UParticleModule::UParticleModule();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffc;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *param_1 = &PTR_FUN_143fe39f8;
  return param_1;
}



// FUNCTION 1405c1bf0 FUN_1405c1bf0 body=196 status=ok
// SIG undefined FUN_1405c1bf0(void)

undefined8 * FUN_1405c1bf0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  UParticleModule::UParticleModule();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffc;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *param_1 = &PTR_FUN_143fe3d78;
  *(undefined1 *)(param_1 + 9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x42480000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 2;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DistributionGainOverLifetime",1);
  uVar1 = *puVar2;
  uVar3 = UDistributionFloatConstant::GetPrivateStaticClass();
  lVar4 = FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x38) = 0x3f800000;
    param_1[0x10] = lVar4;
  }
  return param_1;
}



// FUNCTION 1405c1cc0 FUN_1405c1cc0 body=208 status=ok
// SIG undefined FUN_1405c1cc0(void)

undefined8 * FUN_1405c1cc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  UParticleModule::UParticleModule();
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffc;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffffe;
  *param_1 = &PTR_FUN_143fe40f8;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 3;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | 1;
  *(undefined4 *)(param_1 + 8) = 4;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 9) = 0x42480000;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"DistributionGainOverLifetime",1);
  uVar1 = *puVar2;
  uVar3 = UDistributionFloatConstant::GetPrivateStaticClass();
  lVar4 = FUN_141789050(param_2,param_1,uVar1,uVar3,uVar3,1,0,0);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x38) = 0x3f800000;
    param_1[0x10] = lVar4;
  }
  return param_1;
}



// FUNCTION 1405c1d90 FUN_1405c1d90 body=152 status=ok
// SIG undefined FUN_1405c1d90(void)

void FUN_1405c1d90(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x520) = 0;
  if (*(longlong *)(param_1 + 0x518) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x4d8);
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fce298;
  FUN_1404571d0(param_1);
  return;
}



// FUNCTION 1405c1e30 FUN_1405c1e30 body=146 status=ok
// SIG undefined FUN_1405c1e30(void)

void FUN_1405c1e30(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FUN_1405a53f0();
    *(undefined8 *)(param_1 + 0x358) = 0;
  }
  if (*(longlong *)(param_1 + 0x338) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 800) = 0;
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x2d8);
  *(undefined ***)(param_1 + 0x2d0) = &PTR_FUN_143fe1580;
  FUN_1405911f0(param_1);
  return;
}



// FUNCTION 1405c1ed0 operator= body=113 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(undefined8 *param_1,undefined8 *param_2)

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
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1405c1f50 FUN_1405c1f50 body=161 status=ok
// SIG undefined FUN_1405c1f50(void)

undefined8 FUN_1405c1f50(undefined8 *param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  pfVar2 = *(float **)*param_1;
  pfVar1 = pfVar2 + (longlong)*(int *)((undefined8 *)*param_1 + 1) * 3;
  if (pfVar2 != pfVar1) {
    fVar6 = *(float *)(param_1[1] + 0x4dc) + *(float *)(param_2 + 0x14);
    do {
      fVar4 = *pfVar2 - *(float *)(param_2 + 4);
      fVar5 = pfVar2[1] - *(float *)(param_2 + 8);
      fVar3 = pfVar2[2] - *(float *)(param_2 + 0xc);
      if (fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3 < fVar6 * fVar6) goto LAB_1405c1fe2;
      pfVar2 = pfVar2 + 3;
    } while (pfVar2 != pfVar1);
  }
  pfVar2 = (float *)0x0;
LAB_1405c1fe2:
  return CONCAT71((int7)((ulonglong)pfVar1 >> 8),pfVar2 == (float *)0x0);
}



// FUNCTION 1405c20a0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FMediaClock::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_140591060(param_1 + 3);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1405c20f0 FUN_1405c20f0 body=52 status=ok
// SIG undefined FUN_1405c20f0(void)

undefined8 FUN_1405c20f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x468);
  }
  return param_1;
}



// FUNCTION 1405c2130 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Chaos::TPBDRigidParticles<float,3>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_1405c1d90();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x540);
  }
  return param_1;
}



// FUNCTION 1405c2170 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
ULandscapeGizmoRenderComponent::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1405c1d90();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x560);
  }
  return param_1;
}



// FUNCTION 1405c21b0 FUN_1405c21b0 body=52 status=ok
// SIG undefined FUN_1405c21b0(void)

undefined8 FUN_1405c21b0(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x458);
  }
  return param_1;
}



// FUNCTION 1405c21f0 FUN_1405c21f0 body=157 status=ok
// SIG undefined FUN_1405c21f0(void)

longlong FUN_1405c21f0(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x4e0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x460) = &PTR_FUN_143fddd00;
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fce298;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4e8);
  }
  return param_1;
}



// FUNCTION 1405c2290 FUN_1405c2290 body=43 status=ok
// SIG undefined FUN_1405c2290(void)

undefined8 * FUN_1405c2290(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f4c8e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1405c22c0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
`anonymous_namespace'::GraniteTextureD3D12::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f4c8e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1405c2310 FUN_1405c2310 body=43 status=ok
// SIG undefined FUN_1405c2310(void)

undefined8 * FUN_1405c2310(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fe1580;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1405c2340 FUN_1405c2340 body=43 status=ok
// SIG undefined FUN_1405c2340(void)

undefined8 * FUN_1405c2340(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fddd00;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1405c2370 FUN_1405c2370 body=43 status=ok
// SIG undefined FUN_1405c2370(void)

undefined8 * FUN_1405c2370(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fe0658;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1405c23a0 FUN_1405c23a0 body=109 status=ok
// SIG undefined FUN_1405c23a0(void)

longlong FUN_1405c23a0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143fddd00;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1405c2410 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong USpawnFilterElement::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143fddd00;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1405c2470 FUN_1405c2470 body=153 status=ok
// SIG undefined FUN_1405c2470(void)

longlong FUN_1405c2470(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1f0);
  lVar1 = *(longlong *)(param_1 + 0x1e8);
  if (iVar2 != 0) {
    do {
      FUN_140591060(lVar1);
      lVar1 = lVar1 + 0x40;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x1e8);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x208);
  }
  return param_1;
}



// FUNCTION 1405c2510 `scalar_deleting_destructor' body=135 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UGExpansion1TamingSettingsDataAsset::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  FUN_1405c5a30(param_1 + 0x60,0);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 1405c25a0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleSpawnPerUnit::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1405c25f0 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMaterialExpressionFunctionOutput::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1405c2640 FUN_1405c2640 body=52 status=ok
// SIG undefined FUN_1405c2640(void)

undefined8 FUN_1405c2640(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1405c2680 FUN_1405c2680 body=111 status=ok
// SIG undefined FUN_1405c2680(void)

longlong FUN_1405c2680(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x328) != 0) {
    FMemory::Free();
  }
  FUN_140591060(param_1 + 0x1b0);
  FUN_140591060(param_1 + 0x188);
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_143fe0658;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x338);
  }
  return param_1;
}



// FUNCTION 1405c26f0 FUN_1405c26f0 body=67 status=ok
// SIG undefined FUN_1405c26f0(void)

longlong FUN_1405c26f0(longlong param_1,ulonglong param_2)

{
  FUN_140591060(param_1 + 0x2f8);
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,800);
  }
  return param_1;
}



// FUNCTION 1405c2740 FUN_1405c2740 body=153 status=ok
// SIG undefined FUN_1405c2740(void)

longlong FUN_1405c2740(longlong param_1,ulonglong param_2)

{
  FUN_140591060(param_1 + 600);
  if (*(longlong *)(param_1 + 0x248) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 1405c27e0 FUN_1405c27e0 body=73 status=ok
// SIG undefined FUN_1405c27e0(void)

longlong FUN_1405c27e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1e8);
  }
  return param_1;
}



// FUNCTION 1405c2830 FUN_1405c2830 body=79 status=ok
// SIG undefined FUN_1405c2830(void)

longlong FUN_1405c2830(longlong param_1,ulonglong param_2)

{
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1405c2880 FUN_1405c2880 body=52 status=ok
// SIG undefined FUN_1405c2880(void)

undefined8 FUN_1405c2880(undefined8 param_1,ulonglong param_2)

{
  FUN_1405c1e30();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x370);
  }
  return param_1;
}



// FUNCTION 1405c28c0 FUN_1405c28c0 body=116 status=ok
// SIG undefined FUN_1405c28c0(void)

longlong FUN_1405c28c0(longlong param_1,ulonglong param_2)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x230);
  }
  return param_1;
}



// FUNCTION 1405c2940 FUN_1405c2940 body=70 status=ok
// SIG undefined FUN_1405c2940(void)

longlong FUN_1405c2940(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1405c2990 FUN_1405c2990 body=265 status=ok
// SIG undefined FUN_1405c2990(void)

void FUN_1405c2990(longlong *param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *local_18;
  char local_10;
  
  if ((param_2 != '\0') || (cVar4 = (**(code **)(*param_1 + 0x2c8))(), cVar4 == '\x01')) {
    if (param_1[0x5b] != 0) {
      (**(code **)(*param_1 + 0x358))(param_1,1);
    }
    *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 4;
    local_18 = param_1;
    local_10 = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1f,&local_18);
  }
  lVar5 = FUN_1405c6c50(param_1[0x23]);
  param_1[0x5e] = lVar5;
  if (lVar5 != 0) {
    plVar1 = (longlong *)(lVar5 + 0x248);
    puVar3 = (undefined8 *)*plVar1;
    iVar2 = *(int *)(lVar5 + 0x250);
    for (puVar6 = puVar3; puVar6 != puVar3 + iVar2; puVar6 = puVar6 + 1) {
      if ((longlong *)*puVar6 == param_1) {
        if ((int)((longlong)puVar6 - (longlong)puVar3 >> 3) != -1) goto LAB_1405c2a70;
        break;
      }
    }
    *(int *)(lVar5 + 0x250) = iVar2 + 1;
    if (*(int *)(lVar5 + 0x254) < iVar2 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    *(longlong **)((longlong)iVar2 * 8 + *plVar1) = param_1;
  }
LAB_1405c2a70:
  if (param_2 != '\0') {
    FUN_1405ac8f0(param_1 + 0x5f,0,4);
    *(undefined1 *)(param_1 + 0x62) = 0;
  }
  return;
}



// FUNCTION 1405c2aa0 FUN_1405c2aa0 body=132 status=ok
// SIG undefined FUN_1405c2aa0(void)

void FUN_1405c2aa0(longlong *param_1,char param_2)

{
  char cVar1;
  longlong *local_18;
  char local_10;
  
  if ((param_2 == '\0') && (cVar1 = (**(code **)(*param_1 + 0x2c8))(), cVar1 != '\x01')) {
    return;
  }
  if (param_1[0x30] != 0) {
    (**(code **)(*param_1 + 0x358))(param_1,1);
  }
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 4;
  local_18 = param_1;
  local_10 = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1f,&local_18);
  if (param_2 != '\0') {
    FUN_1405ac8f0(param_1 + 0x4b,0,4);
    *(undefined1 *)(param_1 + 0x4e) = 0;
  }
  return;
}



// FUNCTION 1405c2b30 FUN_1405c2b30 body=607 status=ok
// SIG undefined FUN_1405c2b30(void)

void FUN_1405c2b30(longlong *param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 local_res8 [2];
  longlong *local_res18;
  longlong local_res20;
  longlong *local_48;
  longlong **local_40;
  
  if (((*(byte *)(param_1 + 0x17) & 1) == 0) ||
     ((param_2 == '\0' && (cVar4 = (**(code **)(*param_1 + 0x2c8))(), cVar4 != '\x01'))))
  goto LAB_1405c2d79;
  local_res20 = param_1[0x24];
  if (local_res20 == 0) {
    local_res20 = FUN_1423407b0(param_1);
  }
  plVar9 = (longlong *)0x0;
  local_res18 = (longlong *)0x0;
  if (DAT_1468536c5 == '\0') {
LAB_1405c2c9c:
    if (local_res18 == (longlong *)0x0) goto LAB_1405c2d79;
  }
  else {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_1462054c0,local_res8,local_res20);
    local_res18 = plVar9;
    if (((int)local_res8[0] != -1) &&
       (lVar1 = DAT_1462054c0 + (longlong)(int)local_res8[0] * 0x18, lVar1 != 0)) {
      local_res18 = *(longlong **)(lVar1 + 8);
    }
    if (local_res18 == (longlong *)0x0) {
      uVar5 = GetTransientPackage();
      FUN_1417846f0(uVar5,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      local_res8[0] = 0;
      uVar6 = FUN_1405d2400();
      local_res18 = (longlong *)FUN_1417985e0(uVar6,uVar5,0,0,0,0,0,0,0);
      FWeakObjectPtr::operator=(local_res18 + 6,local_res20);
      local_48 = &local_res20;
      local_40 = &local_res18;
      FUN_1405c0510(&DAT_1462054c0,local_res8,&local_48,0);
      goto LAB_1405c2c9c;
    }
  }
  plVar3 = local_res18;
  plVar7 = (longlong *)
           TScriptInterface<IBlendableInterface>::
           TScriptInterface<IBlendableInterface><UMaterialInterface>(&local_48,param_1);
  if (((*(char *)((longlong)plVar3 + 0x4c) == '\0') && (*plVar7 != 0)) && (plVar7[1] != 0)) {
    iVar2 = (int)plVar3[8];
    *(int *)(plVar3 + 8) = iVar2 + 1;
    if (*(int *)((longlong)plVar3 + 0x44) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (plVar3 + 7,iVar2);
    }
    plVar8 = (longlong *)((longlong)iVar2 * 0x38 + plVar3[7]);
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[4] = 0;
    plVar8[2] = 0;
    *(undefined4 *)(plVar8 + 3) = 0;
    plVar8[5] = 0;
    *(undefined4 *)(plVar8 + 6) = 0xffffffff;
    *(undefined1 *)((longlong)plVar8 + 0x34) = 0;
    *plVar8 = *plVar7;
    plVar8[1] = plVar7[1];
    plVar8 = plVar9;
    if (*plVar7 != 0) {
      plVar8 = (longlong *)plVar7[1];
    }
    (**(code **)(*plVar8 + 0x28))(plVar8,plVar3);
    if (*plVar7 != 0) {
      plVar9 = (longlong *)plVar7[1];
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_1405c2d79:
  FUN_14232c410(param_1,param_2);
  return;
}



// FUNCTION 1405c2d90 FUN_1405c2d90 body=841 status=ok
// SIG undefined FUN_1405c2d90(void)

void FUN_1405c2d90(longlong param_1,longlong *param_2,undefined8 *param_3,float *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float local_c8;
  float fStack_c4;
  
  fVar8 = *(float *)(param_3 + 1);
  fVar9 = param_4[4];
  if (param_4[4] <= param_4[3]) {
    fVar9 = param_4[3];
  }
  fVar12 = (float)*(undefined8 *)param_4;
  fVar13 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
  fVar14 = param_4[2];
  if (fVar9 <= param_4[5]) {
    fVar9 = param_4[5];
  }
  fVar11 = fVar9 * 0.5;
  local_res8 = fVar11;
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) {
    local_c8 = (float)*param_3;
    fStack_c4 = (float)((ulonglong)*param_3 >> 0x20);
    if (*(int *)(param_1 + 0x40) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x38);
      lVar2 = (longlong)*(int *)(param_1 + 0x40);
      fVar5 = *(float *)(lVar3 + -0xc + lVar2 * 0x10);
      fVar10 = *(float *)(lVar3 + -0x10 + lVar2 * 0x10);
      fVar6 = *(float *)(lVar3 + -8 + lVar2 * 0x10);
      fVar4 = (fVar5 * fVar13 + fVar10 * fVar12 + fVar6 * fVar14) -
              *(float *)(lVar3 + -4 + lVar2 * 0x10);
      fVar12 = fVar12 - fVar10 * fVar4;
      fVar13 = fVar13 - fVar5 * fVar4;
      fVar14 = fVar14 - fVar6 * fVar4;
      local_res8 = 0.0;
      fVar4 = ((fStack_c4 + param_4[1]) * fVar5 + (local_c8 + *param_4) * fVar10 +
              (fVar8 + param_4[2]) * fVar6) - *(float *)(lVar3 + -4 + lVar2 * 0x10);
      local_c8 = ((local_c8 + *param_4) - fVar10 * fVar4) - fVar12;
      fStack_c4 = ((fStack_c4 + param_4[1]) - fVar5 * fVar4) - fVar13;
      fVar8 = ((fVar8 + param_4[2]) - fVar6 * fVar4) - fVar14;
    }
    fVar5 = local_c8 * local_c8 + fStack_c4 * fStack_c4 + fVar8 * fVar8;
    if (fVar9 * fVar9 * 0.25 < fVar5) {
      fVar9 = fVar8;
      fVar10 = local_c8;
      fVar6 = fStack_c4;
      if ((fVar5 != 1.0) &&
         (fVar9 = DAT_1468b5d98, fVar10 = DAT_1468b5d90, fVar6 = DAT_1468b5d94, 1e-08 <= fVar5)) {
        auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar7._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar9 = fVar8 * fVar6;
        fVar10 = local_c8 * fVar6;
        fVar6 = fStack_c4 * fVar6;
      }
      local_c8 = fVar10 * fVar11;
      fStack_c4 = fVar6 * fVar11;
      fVar8 = fVar9 * fVar11;
    }
    fVar12 = local_c8 + fVar12;
    fVar14 = fVar8 + fVar14;
    fVar13 = fStack_c4 + fVar13;
  }
  iVar1 = (int)param_2[1];
  lVar3 = (longlong)iVar1;
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar1);
  }
  fVar8 = param_4[6];
  lVar2 = *param_2;
  *(ulonglong *)(lVar2 + 4 + lVar3 * 0x18) = CONCAT44(fVar13,fVar12);
  *(float *)(lVar2 + 0xc + lVar3 * 0x18) = fVar14;
  *(float *)(lVar2 + 0x14 + lVar3 * 0x18) = local_res8;
  *(float *)(lVar2 + lVar3 * 0x18) = fVar8;
  *(undefined4 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0x3f800000;
  return;
}



// FUNCTION 1405c30e0 FUN_1405c30e0 body=2330 status=ok
// SIG undefined FUN_1405c30e0(void)

void FUN_1405c30e0(longlong param_1,ushort *param_2,uint param_3,longlong *param_4,float *param_5,
                  char param_6,int param_7)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [12];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
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
  float fVar33;
  
  bVar3 = *(byte *)(param_1 + 0x30);
  uVar7 = (ulonglong)param_3;
  if ((bVar3 & 2) == 0) {
    auVar16 = ZEXT812(0x3f800000);
  }
  else {
    auVar16._0_4_ = (float)param_7;
    auVar16._4_8_ = 0;
  }
  fVar15 = param_5[3];
  fVar19 = param_5[4];
  fVar33 = param_5[5];
  fVar24 = fVar15;
  if (fVar15 <= fVar19) {
    fVar24 = fVar19;
  }
  if (fVar24 <= fVar33) {
    fVar24 = fVar33;
  }
  fVar24 = fVar24 * 0.5;
  if (param_6 == '\0') {
    if ((bVar3 & 2) != 0) {
      auVar16._4_8_ = auVar16._4_8_;
      auVar16._0_4_ = auVar16._0_4_ / (float)(int)param_3;
    }
    if (0 < (int)param_3) {
      do {
        uVar4 = *param_2;
        fVar15 = 0.0;
        if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
          fVar19 = (float)(uVar4 & 0x1f) * 0.032258064 - 0.5;
          fVar28 = (float)(uVar4 >> 10) * 0.015873017 - 0.5;
          fVar33 = (float)(uVar4 >> 5 & 0x1f) * 0.032258064 - 0.5;
        }
        else {
          fVar19 = (float)(uVar4 & 0xf) * 0.0625 - 0.5;
          fVar33 = (float)(uVar4 >> 4 & 0xf) * 0.0625 - 0.5;
          fVar28 = (float)(uVar4 >> 8 & 0xf) * 0.0625 - 0.5;
          fVar15 = (float)(uVar4 >> 0xd) + 1.0;
          if ((uVar4 & 0x1000) == 0) {
            fVar15 = 1.0 / fVar15;
          }
        }
        fVar27 = param_5[3];
        iVar9 = (int)param_4[1];
        lVar8 = (longlong)iVar9;
        fVar31 = param_5[4];
        fVar1 = param_5[5];
        fVar2 = *param_5;
        fVar11 = param_5[1];
        fVar13 = param_5[2];
        *(int *)(param_4 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar9 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_4,iVar9);
        }
        lVar5 = *param_4;
        *(float *)(lVar5 + lVar8 * 0x18) = param_5[6];
        *(ulonglong *)(lVar5 + 4 + lVar8 * 0x18) =
             CONCAT44(fVar33 * fVar31 + fVar11,fVar19 * fVar27 + fVar2);
        *(float *)(lVar5 + 0xc + lVar8 * 0x18) = fVar28 * fVar1 + fVar13;
        *(float *)(lVar5 + 0x10 + lVar8 * 0x18) = (float)(int)auVar16._0_4_;
        *(float *)(lVar5 + 0x14 + lVar8 * 0x18) = fVar15 * fVar24;
        uVar7 = uVar7 - 1;
        param_2 = param_2 + 1;
      } while (uVar7 != 0);
    }
  }
  else {
    iVar9 = 0;
    auVar23 = ZEXT816(0);
    fVar27 = 0.0;
    fVar31 = 0.0;
    fVar28 = 0.0;
    if (3 < (int)param_3) {
      fVar1 = param_5[1];
      fVar2 = *param_5;
      bVar10 = bVar3 & 1;
      uVar6 = (param_3 - 4 >> 2) + 1;
      uVar7 = (ulonglong)uVar6;
      iVar9 = uVar6 * 4;
      do {
        uVar4 = *param_2;
        if (bVar10 == 0) {
          fVar11 = (float)(uVar4 & 0x1f) * 0.032258064;
          fVar17 = (float)(uVar4 >> 10) * 0.015873017;
          fVar13 = (float)(uVar4 >> 5 & 0x1f) * 0.032258064;
        }
        else {
          fVar11 = (float)(uVar4 & 0xf) * 0.0625;
          fVar17 = (float)(uVar4 >> 8 & 0xf) * 0.0625;
          fVar13 = (float)(uVar4 >> 4 & 0xf) * 0.0625;
        }
        uVar4 = param_2[1];
        fVar20 = auVar23._0_4_;
        if (bVar10 == 0) {
          fVar21 = (float)(uVar4 & 0x1f) * 0.032258064;
          fVar28 = (float)(uVar4 >> 10) * 0.015873017;
          fVar25 = (float)(uVar4 >> 5 & 0x1f) * 0.032258064;
        }
        else {
          fVar21 = (float)(uVar4 & 0xf) * 0.0625;
          fVar28 = (float)(uVar4 >> 8 & 0xf) * 0.0625;
          fVar25 = (float)(uVar4 >> 4 & 0xf) * 0.0625;
        }
        uVar4 = param_2[2];
        fVar12 = param_5[2];
        fVar29 = (fVar28 - 0.5) * fVar33 + fVar12;
        if (bVar10 == 0) {
          fVar14 = (float)(uVar4 & 0x1f) * 0.032258064;
          fVar28 = (float)(uVar4 >> 10) * 0.015873017;
          fVar18 = (float)(uVar4 >> 5 & 0x1f) * 0.032258064;
        }
        else {
          fVar14 = (float)(uVar4 & 0xf) * 0.0625;
          fVar28 = (float)(uVar4 >> 8 & 0xf) * 0.0625;
          fVar18 = (float)(uVar4 >> 4 & 0xf) * 0.0625;
        }
        uVar4 = param_2[3];
        param_2 = param_2 + 4;
        fVar32 = (fVar28 - 0.5) * fVar33 + fVar12;
        fVar28 = 0.0;
        if (bVar10 == 0) {
          bVar10 = 0;
          fVar22 = (float)(uVar4 & 0x1f) * 0.032258064 - 0.5;
          fVar30 = (float)(uVar4 >> 10) * 0.015873017 - 0.5;
          fVar26 = (float)(uVar4 >> 5 & 0x1f) * 0.032258064 - 0.5;
        }
        else {
          fVar22 = (float)(uVar4 & 0xf) * 0.0625 - 0.5;
          fVar26 = (float)(uVar4 >> 4 & 0xf) * 0.0625 - 0.5;
          fVar30 = (float)(uVar4 >> 8 & 0xf) * 0.0625 - 0.5;
          fVar28 = (float)(uVar4 >> 0xd) + 1.0;
          if ((uVar4 & 0x1000) == 0) {
            fVar28 = 1.0 / fVar28;
            fVar12 = param_5[2];
          }
        }
        auVar23._4_12_ = ZEXT812(0);
        fVar28 = fVar28 * fVar24;
        auVar23._0_4_ =
             fVar22 * fVar15 + fVar2 +
             (fVar14 - 0.5) * fVar15 + fVar2 +
             (fVar21 - 0.5) * fVar15 + fVar2 + (fVar11 - 0.5) * fVar15 + fVar2 + fVar20;
        fVar27 = fVar26 * fVar19 + param_5[1] +
                 (fVar18 - 0.5) * fVar19 + fVar1 +
                 (fVar25 - 0.5) * fVar19 + fVar1 + (fVar13 - 0.5) * fVar19 + fVar1 + fVar27;
        fVar31 = fVar30 * fVar33 + fVar12 +
                 fVar32 + fVar29 + (fVar17 - 0.5) * fVar33 + param_5[2] + fVar31;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (iVar9 < (int)param_3) {
      uVar7 = (ulonglong)(param_3 - iVar9);
      do {
        uVar4 = *param_2;
        fVar28 = 0.0;
        if ((bVar3 & 1) == 0) {
          fVar15 = (float)(uVar4 & 0x1f) * 0.032258064 - 0.5;
          fVar33 = (float)(uVar4 >> 10) * 0.015873017 - 0.5;
          fVar19 = (float)(uVar4 >> 5 & 0x1f) * 0.032258064 - 0.5;
        }
        else {
          fVar15 = (float)(uVar4 & 0xf) * 0.0625 - 0.5;
          fVar19 = (float)(uVar4 >> 4 & 0xf) * 0.0625 - 0.5;
          fVar33 = (float)(uVar4 >> 8 & 0xf) * 0.0625 - 0.5;
          fVar28 = (float)(uVar4 >> 0xd) + 1.0;
          if ((uVar4 & 0x1000) == 0) {
            fVar28 = 1.0 / fVar28;
          }
        }
        fVar28 = fVar28 * fVar24;
        param_2 = param_2 + 1;
        auVar23._0_4_ = auVar23._0_4_ + param_5[3] * fVar15 + *param_5;
        fVar27 = fVar27 + param_5[4] * fVar19 + param_5[1];
        fVar31 = fVar31 + param_5[5] * fVar33 + param_5[2];
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    iVar9 = (int)param_4[1];
    lVar8 = (longlong)iVar9;
    *(int *)(param_4 + 1) = iVar9 + 1;
    fVar15 = 1.0 / (float)(int)param_3;
    if (*(int *)((longlong)param_4 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_4,iVar9);
    }
    fVar19 = param_5[6];
    lVar5 = *param_4;
    *(ulonglong *)(lVar5 + 4 + lVar8 * 0x18) = CONCAT44(fVar27 * fVar15,auVar23._0_4_ * fVar15);
    *(float *)(lVar5 + lVar8 * 0x18) = fVar19;
    *(float *)(lVar5 + 0xc + lVar8 * 0x18) = fVar31 * fVar15;
    *(float *)(lVar5 + 0x14 + lVar8 * 0x18) = fVar28;
    *(float *)(lVar5 + 0x10 + lVar8 * 0x18) = (float)(int)auVar16._0_4_;
  }
  return;
}



// FUNCTION 1405c3a00 FUN_1405c3a00 body=862 status=ok
// SIG undefined FUN_1405c3a00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405c3a00(longlong param_1,float *param_2,longlong *param_3,float *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 in_XMM4 [16];
  undefined1 auVar16 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_68;
  
  if (*(char *)(param_1 + 0x498) == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x538);
    fVar5 = *(float *)(lVar4 + 0x210);
    fVar6 = *(float *)(lVar4 + 0x214);
    fVar7 = *(float *)(lVar4 + 0x218);
    fVar8 = *(float *)(lVar4 + 0x21c);
    fVar22 = fVar5 * _DAT_1468544b0;
    fVar23 = fVar6 * fRam00000001468544b4;
    fVar24 = fVar7 * fRam00000001468544b8;
    fVar25 = fVar8 * fRam00000001468544bc;
    fVar26 = (float)((uint)(*param_2 - *(float *)(lVar4 + 0x220)) & _DAT_1468544c0);
    fVar27 = (float)((uint)(param_2[1] - *(float *)(lVar4 + 0x224)) & uRam00000001468544c4);
    fVar28 = (float)((uint)(param_2[2] - *(float *)(lVar4 + 0x228)) & uRam00000001468544c8);
    auVar16 = *(undefined1 (*) [16])(lVar4 + 0x230);
    fVar15 = auVar16._0_4_;
    fVar19 = auVar16._4_4_;
    fVar21 = auVar16._8_4_;
    auVar16 = rcpps(in_XMM4,auVar16);
    fVar11 = fVar28 * fVar23 - fVar27 * fVar24;
    fVar12 = fVar26 * fVar24 - fVar28 * fVar22;
    fVar13 = fVar27 * fVar22 - fVar26 * fVar23;
    fVar14 = auVar16._0_4_;
    fVar17 = auVar16._4_4_;
    fVar18 = auVar16._8_4_;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar15;
    fVar17 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar19;
    fVar20 = (fVar18 + fVar18) - fVar18 * fVar18 * fVar21;
    fVar14 = (fVar14 + fVar14) - fVar14 * fVar14 * fVar15;
    fVar18 = (fVar17 + fVar17) - fVar17 * fVar17 * fVar19;
    fVar20 = (fVar20 + fVar20) - fVar20 * fVar20 * fVar21;
    fVar17 = (((fVar13 * fVar23 - fVar12 * fVar24) + fVar25 * fVar11 + fVar26) *
             (float)(-(uint)((float)((uint)fVar15 & _DAT_146854490) <= _DAT_1468544a0) &
                     (uint)fVar14 ^ (uint)fVar14)) / (float)*(undefined8 *)(lVar4 + 0x710);
    fVar14 = -1.0;
    fVar20 = (((fVar12 * fVar22 - fVar11 * fVar23) + fVar25 * fVar13 + fVar28) *
             (float)(-(uint)((float)((uint)fVar21 & uRam0000000146854498) <= fRam00000001468544a8) &
                     (uint)fVar20 ^ (uint)fVar20)) / *(float *)(lVar4 + 0x718);
    fVar11 = (((fVar11 * fVar24 - fVar13 * fVar22) + fVar25 * fVar12 + fVar27) *
             (float)(-(uint)((float)((uint)fVar19 & uRam0000000146854494) <= fRam00000001468544a4) &
                     (uint)fVar18 ^ (uint)fVar18)) /
             (float)((ulonglong)*(undefined8 *)(lVar4 + 0x710) >> 0x20);
    if (-1.0 <= fVar17) {
      if (1.0 <= fVar17) {
        fVar17 = 1.0;
      }
    }
    else {
      fVar17 = -1.0;
    }
    fVar12 = fVar14;
    if ((-1.0 <= fVar11) && (fVar12 = fVar11, 1.0 <= fVar11)) {
      fVar12 = 1.0;
    }
    if ((-1.0 <= fVar20) && (fVar14 = fVar20, 1.0 <= fVar20)) {
      fVar14 = 1.0;
    }
    iVar3 = (int)param_3[1];
    fVar15 = (float)*(undefined8 *)(lVar4 + 0x710) * fVar17 * fVar15;
    fVar19 = fVar12 * (float)((ulonglong)*(undefined8 *)(lVar4 + 0x710) >> 0x20) * fVar19;
    fVar21 = fVar14 * *(float *)(lVar4 + 0x718) * fVar21;
    fVar11 = fVar21 * fVar6 - fVar19 * fVar7;
    fVar12 = fVar15 * fVar7 - fVar21 * fVar5;
    fVar13 = fVar19 * fVar5 - fVar15 * fVar6;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    fVar14 = (fVar13 * fVar6 - fVar12 * fVar7) + fVar8 * fVar11 + fVar15 + *(float *)(lVar4 + 0x220)
    ;
    fVar19 = (fVar11 * fVar7 - fVar13 * fVar5) + fVar8 * fVar12 + fVar19 + *(float *)(lVar4 + 0x224)
    ;
    fVar15 = (fVar12 * fVar5 - fVar11 * fVar6) + fVar8 * fVar13 + fVar21 + *(float *)(lVar4 + 0x228)
    ;
    *(int *)(param_3 + 1) = iVar3 + 1;
    local_68 = CONCAT44(fVar19,fVar14);
    if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_3,iVar3);
    }
    uVar1 = *(undefined4 *)(param_1 + 0x4a0);
    uVar2 = *(undefined4 *)(param_1 + 0x49c);
    puVar10 = (undefined8 *)((longlong)iVar3 * 0x20 + *param_3);
    *puVar10 = local_68;
    *(float *)(puVar10 + 1) = fVar15;
    *(undefined8 *)((longlong)puVar10 + 0xc) = DAT_1468b5da0;
    uVar9 = DAT_1468b5da8;
    *(undefined4 *)(puVar10 + 3) = uVar2;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar1;
    *(undefined4 *)((longlong)puVar10 + 0x14) = uVar9;
    if ((param_4 != (float *)0x0) && (fVar21 = *(float *)(param_1 + 0x4b0), 0.0 < fVar21)) {
      fVar14 = *param_2 - fVar14;
      fVar19 = param_2[1] - fVar19;
      fVar15 = param_2[2] - fVar15;
      *param_4 = (fVar19 * fVar19 + fVar14 * fVar14 + fVar15 * fVar15) / (fVar21 * fVar21);
    }
  }
  return;
}



// FUNCTION 1405c3d60 FUN_1405c3d60 body=359 status=ok
// SIG undefined FUN_1405c3d60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405c3d60(longlong param_1,float *param_2,longlong *param_3,float *param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  if (*(char *)(param_1 + 0x498) == '\0') {
    lVar4 = *(longlong *)(param_1 + 0x538);
    iVar3 = (int)param_3[1];
    uVar9 = *(uint *)(lVar4 + 0x230) & _DAT_146854490;
    uVar10 = *(uint *)(lVar4 + 0x234) & uRam0000000146854494;
    uVar11 = *(uint *)(lVar4 + 0x238) & uRam0000000146854498;
    uVar12 = *(uint *)(lVar4 + 0x23c) & uRam000000014685449c;
    auVar16._4_4_ = uVar10;
    auVar16._0_4_ = uVar9;
    auVar16._8_4_ = uVar11;
    auVar16._12_4_ = uVar12;
    auVar17._4_4_ = uVar11;
    auVar17._0_4_ = uVar10;
    auVar17._8_4_ = uVar9;
    auVar17._12_4_ = uVar12;
    auVar17 = minps(auVar16,auVar17);
    auVar5._4_4_ = uVar9;
    auVar5._0_4_ = uVar11;
    auVar5._8_4_ = uVar10;
    auVar5._12_4_ = uVar12;
    auVar17 = minps(auVar17,auVar5);
    uVar7 = *(undefined8 *)(lVar4 + 0x220);
    uVar6 = *(undefined4 *)(lVar4 + 0x228);
    fVar1 = *(float *)(lVar4 + 0x710);
    *(int *)(param_3 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_3,iVar3);
    }
    uVar2 = *(undefined4 *)(param_1 + 0x4a0);
    puVar8 = (undefined8 *)((longlong)iVar3 * 0x20 + *param_3);
    *puVar8 = uVar7;
    *(undefined4 *)(puVar8 + 1) = uVar6;
    *(undefined8 *)((longlong)puVar8 + 0xc) = DAT_1468b5da0;
    uVar6 = DAT_1468b5da8;
    *(float *)(puVar8 + 3) = auVar17._0_4_ * fVar1;
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar2;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uVar6;
    if ((param_4 != (float *)0x0) && (fVar1 = *(float *)(param_1 + 0x4b0), 0.0 < fVar1)) {
      lVar4 = *(longlong *)(param_1 + 0x538);
      fVar14 = *param_2 - *(float *)(lVar4 + 0x220);
      fVar15 = param_2[1] - *(float *)(lVar4 + 0x224);
      fVar13 = param_2[2] - *(float *)(lVar4 + 0x228);
      *param_4 = (fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13) / (fVar1 * fVar1);
    }
  }
  return;
}



// FUNCTION 1405c3ed0 FUN_1405c3ed0 body=2571 status=ok
// SIG undefined FUN_1405c3ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405c3ed0(longlong param_1,float *param_2,longlong *param_3,float *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  undefined1 auStack_198 [32];
  undefined1 local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined4 local_158;
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
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  if (*(char *)(param_1 + 0x498) == '\0') {
    local_178 = 1;
    uVar7 = USplineComponent::FindTransformClosestToWorldLocation
                      (*(undefined8 *)(param_1 + 0x538),&local_108,param_2,0);
    fVar41 = fRam0000000146854548;
    fVar40 = fRam0000000146854544;
    fVar25 = _DAT_146854540;
    fVar51 = fRam0000000146854508;
    fVar50 = fRam0000000146854504;
    fVar49 = _DAT_146854500;
    uVar6 = uRam00000001468544c8;
    uVar5 = uRam00000001468544c4;
    uVar4 = _DAT_1468544c0;
    lVar2 = *(longlong *)(param_1 + 0x538);
    fVar21 = (float)local_e8._4_4_ / *(float *)(lVar2 + 0x234);
    fVar26 = (float)local_e8._0_4_ / *(float *)(lVar2 + 0x230);
    fVar29 = fStack_e0 / *(float *)(lVar2 + 0x238);
    local_e8._4_4_ = fVar21;
    local_e8._0_4_ = fVar26;
    fStack_e0 = fVar29;
    fStack_dc = 0.0;
    auVar16._4_4_ = fVar21;
    auVar16._0_4_ = fVar26;
    auVar16._8_4_ = fVar29;
    auVar16._12_4_ = 0;
    auVar12 = *(undefined1 (*) [16])(lVar2 + 0x230);
    fVar22 = auVar12._0_4_;
    fVar23 = auVar12._4_4_;
    fVar24 = auVar12._8_4_;
    fVar32 = auVar12._12_4_;
    auVar12 = minps(auVar16,auVar12);
    auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146854544);
    auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146854540);
    auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146854548);
    auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam000000014685454c);
    iVar8 = movmskps(uVar7,auVar13);
    if (iVar8 == 0) {
      auVar12 = *(undefined1 (*) [16])(lVar2 + 0x210);
      fVar49 = auVar12._12_4_;
      fVar41 = auVar12._0_4_;
      fVar33 = auVar12._4_4_;
      fVar28 = auVar12._8_4_;
      fVar18 = fStack_104 * fVar41;
      fVar45 = local_108 * fVar41;
      local_f8 = local_f8 * fVar22;
      fStack_f4 = fStack_f4 * fVar23;
      fStack_f0 = fStack_f0 * fVar24;
      fStack_ec = fStack_ec * fVar32;
      fVar50 = local_108 * fVar33;
      fVar51 = fStack_104 * fVar33;
      fVar25 = local_108 * fVar28;
      fVar40 = fStack_100 * fVar28;
      local_108 = fStack_fc * fVar41 * _DAT_1468544f0 + fVar49 * local_108 +
                  fStack_100 * fVar33 * _DAT_1468544e0 + fStack_104 * fVar28 * _DAT_1468544d0;
      fStack_104 = fStack_100 * fVar41 * fRam00000001468544f4 + fVar49 * fStack_104 +
                   fStack_fc * fVar33 * fRam00000001468544e4 + fVar25 * fRam00000001468544d4;
      fStack_100 = fVar18 * fRam00000001468544f8 + fVar49 * fStack_100 +
                   fVar50 * fRam00000001468544e8 + fStack_fc * fVar28 * fRam00000001468544d8;
      fStack_fc = fVar45 * fRam00000001468544fc + fVar49 * fStack_fc + fVar51 * fRam00000001468544ec
                  + fVar40 * fRam00000001468544dc;
      auVar12._0_8_ = auVar12._4_8_;
      auVar12._8_4_ = fVar41;
      auVar12._12_4_ = fVar49;
      fVar50 = fStack_f0 * fVar33 - fStack_f4 * fVar28;
      fVar51 = local_f8 * fVar28 - fStack_f0 * fVar41;
      fVar25 = fStack_f4 * fVar41 - local_f8 * fVar33;
      fVar40 = fStack_ec * fVar49 - fStack_ec * fVar49;
      fVar50 = fVar50 + fVar50;
      fVar51 = fVar51 + fVar51;
      fVar25 = fVar25 + fVar25;
      fVar40 = fVar40 + fVar40;
      local_168 = (fVar25 * fVar33 - fVar51 * fVar28) + fVar49 * fVar50 + local_f8 +
                  *(float *)(lVar2 + 0x220);
      fStack_164 = (fVar50 * fVar28 - fVar25 * fVar41) + fVar49 * fVar51 + fStack_f4 +
                   *(float *)(lVar2 + 0x224);
      fStack_160 = (fVar51 * fVar41 - fVar50 * fVar33) + fVar49 * fVar25 + fStack_f0 +
                   *(float *)(lVar2 + 0x228);
      fStack_ec = (fVar40 * fVar49 - fVar40 * fVar49) + fVar49 * fVar40 + fStack_ec +
                  *(float *)(lVar2 + 0x22c);
    }
    else {
      fVar33 = *(float *)(lVar2 + 0x210);
      fVar28 = *(float *)(lVar2 + 0x214);
      fVar18 = *(float *)(lVar2 + 0x218);
      fVar45 = *(float *)(lVar2 + 0x21c);
      fVar17 = fVar28 + fVar28;
      fVar19 = fVar18 + fVar18;
      fVar30 = fVar33 * (fVar33 + fVar33);
      fVar27 = fVar45 * (fVar33 + fVar33);
      fVar46 = (fVar45 * fVar19 + fVar33 * fVar17) * fVar22;
      fVar47 = (fVar27 + fVar28 * fVar19) * fVar23;
      fVar48 = (fVar45 * fVar17 + fVar33 * fVar19) * fVar24;
      fVar34 = fVar23 * (fVar33 * fVar17 - fVar45 * fVar19);
      fVar36 = fVar24 * (fVar28 * fVar19 - fVar27);
      fVar38 = fVar22 * (fVar33 * fVar19 - fVar45 * fVar17);
      fVar33 = *(float *)(lVar2 + 0x220);
      fVar45 = *(float *)(lVar2 + 0x224);
      fVar27 = *(float *)(lVar2 + 0x228);
      fVar14 = (float)((uint)((_DAT_146854500 - (fVar18 * fVar19 + fVar28 * fVar17)) * fVar22) &
                      _DAT_1468544c0);
      fVar18 = (float)((uint)((fRam0000000146854504 - (fVar18 * fVar19 + fVar30)) * fVar23) &
                      uRam00000001468544c4);
      fVar19 = (float)((uint)((fRam0000000146854508 - (fVar28 * fVar17 + fVar30)) * fVar24) &
                      uRam00000001468544c8);
      fVar20 = (float)((uint)((fRam000000014685450c - (fVar30 + fVar30)) * fVar32) &
                      uRam00000001468544cc);
      fVar30 = fStack_104 + fStack_104;
      fVar17 = fStack_100 + fStack_100;
      fVar31 = (local_108 + local_108) * local_108;
      fVar28 = (local_108 + local_108) * fStack_fc;
      fVar42 = (fVar17 * fStack_fc + fVar30 * local_108) * fVar26;
      fVar43 = (fVar28 + fVar17 * fStack_104) * fVar21;
      fVar44 = (fVar30 * fStack_fc + fVar17 * local_108) * fVar29;
      fVar35 = fVar21 * (fVar30 * local_108 - fVar17 * fStack_fc);
      fVar37 = fVar29 * (fVar17 * fStack_104 - fVar28);
      fVar39 = fVar26 * (fVar17 * local_108 - fVar30 * fStack_fc);
      fVar28 = (float)((uint)((_DAT_146854500 - (fVar17 * fStack_100 + fVar30 * fStack_104)) *
                             fVar26) & _DAT_1468544c0);
      fVar17 = (float)((uint)((fRam0000000146854504 - (fVar17 * fStack_100 + fVar31)) * fVar21) &
                      uRam00000001468544c4);
      fVar30 = (float)((uint)((fRam0000000146854508 - (fVar30 * fStack_104 + fVar31)) * fVar29) &
                      uRam00000001468544c8);
      fVar31 = (float)((uint)((fRam000000014685450c - (fVar31 + fVar31)) * 0.0) &
                      uRam00000001468544cc);
      local_148 = fVar42 * fVar34 + fVar28 * fVar14 + fVar39 * fVar48 + fVar31 * fVar33;
      fStack_144 = fVar42 * fVar18 + fVar28 * fVar46 + fVar39 * fVar36 + fVar31 * fVar45;
      fStack_140 = fVar42 * fVar47 + fVar28 * fVar38 + fVar39 * fVar19 + fVar31 * fVar27;
      fStack_13c = fVar42 * fVar20 + fVar28 * fVar20 + fVar39 * fVar20 +
                   fVar31 * fRam000000014685450c;
      local_138 = fVar17 * fVar34 + fVar35 * fVar14 + fVar43 * fVar48 + fVar31 * fVar33;
      fStack_134 = fVar17 * fVar18 + fVar35 * fVar46 + fVar43 * fVar36 + fVar31 * fVar45;
      fStack_130 = fVar17 * fVar47 + fVar35 * fVar38 + fVar43 * fVar19 + fVar31 * fVar27;
      fStack_12c = fVar17 * fVar20 + fVar35 * fVar20 + fVar43 * fVar20 +
                   fVar31 * fRam000000014685450c;
      local_128 = fVar37 * fVar34 + fVar44 * fVar14 + fVar30 * fVar48 + fVar31 * fVar33;
      fStack_124 = fVar37 * fVar18 + fVar44 * fVar46 + fVar30 * fVar36 + fVar31 * fVar45;
      fStack_120 = fVar37 * fVar47 + fVar44 * fVar38 + fVar30 * fVar19 + fVar31 * fVar27;
      fStack_11c = fVar37 * fVar20 + fVar44 * fVar20 + fVar30 * fVar20 +
                   fVar31 * fRam000000014685450c;
      local_118 = fStack_f4 * fVar34 + local_f8 * fVar14 + fStack_f0 * fVar48 +
                  fRam000000014685450c * fVar33;
      fStack_114 = fStack_f4 * fVar18 + local_f8 * fVar46 + fStack_f0 * fVar36 +
                   fRam000000014685450c * fVar45;
      fStack_110 = fStack_f4 * fVar47 + local_f8 * fVar38 + fStack_f0 * fVar19 +
                   fRam000000014685450c * fVar27;
      fStack_10c = fStack_f4 * fVar20 + local_f8 * fVar20 + fStack_f0 * fVar20 +
                   fRam000000014685450c * fRam000000014685450c;
      FMatrix::RemoveScaling(&local_148);
      fVar49 = (float)(-(uint)(fVar25 <= fVar22 * fVar26) & (_DAT_146854530 ^ (uint)fVar49) ^
                      _DAT_146854530);
      fVar50 = (float)(-(uint)(fVar40 <= fVar23 * fVar21) & (uRam0000000146854534 ^ (uint)fVar50) ^
                      uRam0000000146854534);
      fVar51 = (float)(-(uint)(fVar41 <= fVar24 * fVar29) & (uRam0000000146854538 ^ (uint)fVar51) ^
                      uRam0000000146854538);
      local_148 = local_148 * fVar49;
      fStack_144 = fStack_144 * fVar49;
      fStack_140 = fStack_140 * fVar49;
      fStack_134 = fStack_134 * fVar50;
      fStack_130 = fStack_130 * fVar50;
      local_138 = local_138 * fVar50;
      fStack_124 = fStack_124 * fVar51;
      fStack_120 = fStack_120 * fVar51;
      local_128 = local_128 * fVar51;
      FQuat::FQuat(&local_168,&local_148);
      local_158 = 0x322bcc77;
      auVar15._0_4_ = local_168 * local_168 + fStack_160 * fStack_160;
      auVar15._4_4_ = fStack_164 * fStack_164 + fStack_15c * fStack_15c;
      auVar15._8_4_ = fStack_160 * fStack_160 + local_168 * local_168;
      auVar15._12_4_ = fStack_15c * fStack_15c + fStack_164 * fStack_164;
      auVar12._0_4_ = auVar15._4_4_ + auVar15._0_4_;
      auVar12._4_4_ = auVar15._8_4_ + auVar15._4_4_;
      auVar12._8_4_ = auVar15._12_4_ + auVar15._8_4_;
      auVar12._12_4_ = auVar15._0_4_ + auVar15._12_4_;
      auVar16 = rsqrtps(auVar15,auVar12);
      fVar49 = auVar16._0_4_;
      fVar50 = auVar16._4_4_;
      fVar51 = auVar16._8_4_;
      fVar25 = auVar16._12_4_;
      fVar49 = (_DAT_146854520 - fVar49 * fVar49 * auVar12._0_4_ * _DAT_146854520) * fVar49 + fVar49
      ;
      fVar50 = (fRam0000000146854524 - fVar50 * fVar50 * auVar12._4_4_ * fRam0000000146854524) *
               fVar50 + fVar50;
      fVar51 = (fRam0000000146854528 - fVar51 * fVar51 * auVar12._8_4_ * fRam0000000146854528) *
               fVar51 + fVar51;
      fVar25 = (fRam000000014685452c - fVar25 * fVar25 * auVar12._12_4_ * fRam000000014685452c) *
               fVar25 + fVar25;
      fStack_ec = 0.0;
      local_108 = (float)(((uint)(((_DAT_146854520 -
                                   fVar49 * fVar49 * auVar12._0_4_ * _DAT_146854520) * fVar49 +
                                  fVar49) * local_168) ^ _DAT_146854510) &
                          -(uint)(1e-08 <= auVar12._0_4_) ^ _DAT_146854510);
      fStack_104 = (float)(((uint)(((fRam0000000146854524 -
                                    fVar50 * fVar50 * auVar12._4_4_ * fRam0000000146854524) * fVar50
                                   + fVar50) * fStack_164) ^ uRam0000000146854514) &
                           -(uint)(1e-08 <= auVar12._4_4_) ^ uRam0000000146854514);
      fStack_100 = (float)(((uint)(((fRam0000000146854528 -
                                    fVar51 * fVar51 * auVar12._8_4_ * fRam0000000146854528) * fVar51
                                   + fVar51) * fStack_160) ^ uRam0000000146854518) &
                           -(uint)(1e-08 <= auVar12._8_4_) ^ uRam0000000146854518);
      fStack_fc = (float)(((uint)(((fRam000000014685452c -
                                   fVar25 * fVar25 * auVar12._12_4_ * fRam000000014685452c) * fVar25
                                  + fVar25) * fStack_15c) ^ uRam000000014685451c) &
                          -(uint)(1e-08 <= auVar12._12_4_) ^ uRam000000014685451c);
      local_168 = local_118;
      fStack_164 = fStack_114;
      fStack_160 = fStack_110;
    }
    fStack_e0 = fVar24 * fVar29;
    fStack_dc = fVar32 * 0.0;
    local_e8._4_4_ = fVar23 * fVar21;
    local_e8._0_4_ = fVar22 * fVar26;
    local_f8 = local_168;
    fStack_f4 = fStack_164;
    fStack_f0 = fStack_160;
    if ((*(char *)(param_1 + 0x540) != '\0') ||
       (((fStack_15c = fStack_dc, ABS((float)local_e8._0_4_ - (float)local_e8._4_4_) <= 0.0001 &&
         (auVar12 = ZEXT416((uint)fStack_e0), ABS((float)local_e8._0_4_ - fStack_e0) <= 0.0001)) &&
        (ABS((float)local_e8._4_4_ - fStack_e0) <= 0.0001)))) {
      iVar8 = (int)param_3[1];
      fVar22 = ABS((float)local_e8._4_4_);
      if (ABS((float)local_e8._0_4_) <= ABS((float)local_e8._4_4_)) {
        fVar22 = ABS((float)local_e8._0_4_);
      }
      if (ABS(fStack_e0) <= fVar22) {
        fVar22 = ABS(fStack_e0);
      }
      *(int *)(param_3 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar8 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_3,iVar8);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x4a0);
      puVar10 = (undefined8 *)((longlong)iVar8 * 0x20 + *param_3);
      *puVar10 = CONCAT44(fStack_164,local_168);
      *(float *)(puVar10 + 1) = fStack_160;
      *(undefined8 *)((longlong)puVar10 + 0xc) = DAT_1468b5da0;
      uVar9 = DAT_1468b5da8;
      *(float *)(puVar10 + 3) = fVar22;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar7;
    }
    else {
      fVar51 = local_108 * _DAT_1468544b0;
      fVar25 = fStack_104 * fRam00000001468544b4;
      fVar40 = fStack_100 * fRam00000001468544b8;
      fVar41 = fStack_fc * fRam00000001468544bc;
      auVar3._4_4_ = local_e8._4_4_;
      auVar3._0_4_ = local_e8._0_4_;
      auVar3._8_4_ = fStack_e0;
      auVar3._12_4_ = fStack_dc;
      auVar12 = rcpps(auVar12,auVar3);
      fVar21 = (float)((uint)(*param_2 - local_168) & uVar4);
      fVar26 = (float)((uint)(param_2[1] - fStack_164) & uVar5);
      fVar29 = (float)((uint)(param_2[2] - fStack_160) & uVar6);
      fVar22 = fVar29 * fVar25 - fVar26 * fVar40;
      fVar23 = fVar21 * fVar40 - fVar29 * fVar51;
      fVar24 = fVar26 * fVar51 - fVar21 * fVar25;
      fVar32 = auVar12._0_4_;
      fVar49 = auVar12._4_4_;
      fVar50 = auVar12._8_4_;
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar23 + fVar23;
      fVar24 = fVar24 + fVar24;
      fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * (float)local_e8._0_4_;
      fVar49 = (fVar49 + fVar49) - fVar49 * fVar49 * (float)local_e8._4_4_;
      fVar50 = (fVar50 + fVar50) - fVar50 * fVar50 * fStack_e0;
      fVar32 = (fVar32 + fVar32) - fVar32 * fVar32 * (float)local_e8._0_4_;
      fVar49 = (fVar49 + fVar49) - fVar49 * fVar49 * (float)local_e8._4_4_;
      fVar50 = (fVar50 + fVar50) - fVar50 * fVar50 * fStack_e0;
      fVar21 = ((fVar24 * fVar25 - fVar23 * fVar40) + fVar41 * fVar22 + fVar21) *
               (float)(-(uint)((float)(local_e8._0_4_ & _DAT_146854490) <= _DAT_1468544a0) &
                       (uint)fVar32 ^ (uint)fVar32);
      fVar32 = ((fVar22 * fVar40 - fVar24 * fVar51) + fVar41 * fVar23 + fVar26) *
               (float)(-(uint)((float)(local_e8._4_4_ & uRam0000000146854494) <=
                              fRam00000001468544a4) & (uint)fVar49 ^ (uint)fVar49);
      fVar23 = ((fVar23 * fVar51 - fVar22 * fVar25) + fVar41 * fVar24 + fVar29) *
               (float)(-(uint)((float)((uint)fStack_e0 & uRam0000000146854498) <=
                              fRam00000001468544a8) & (uint)fVar50 ^ (uint)fVar50);
      fVar22 = fVar32 * fVar32 + fVar21 * fVar21 + fVar23 * fVar23;
      if (1e-08 < fVar22) {
        auVar12 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
        fVar24 = auVar12._0_4_;
        fVar24 = fVar24 + fVar24 * (0.5 - fVar22 * 0.5 * fVar24 * fVar24);
        fVar24 = fVar24 + fVar24 * (0.5 - fVar22 * 0.5 * fVar24 * fVar24);
        fVar21 = fVar21 * fVar24;
        fVar32 = fVar32 * fVar24;
        fVar23 = fVar23 * fVar24;
      }
      iVar8 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar8 + 1;
      fVar49 = fVar21 * 100.0 * (float)local_e8._0_4_;
      fVar32 = fVar32 * 100.0 * (float)local_e8._4_4_;
      fVar50 = fVar23 * 100.0 * fStack_e0;
      fVar22 = fVar50 * fStack_104 - fVar32 * fStack_100;
      fVar23 = fVar49 * fStack_100 - fVar50 * local_108;
      fVar24 = fVar32 * local_108 - fVar49 * fStack_104;
      fVar22 = fVar22 + fVar22;
      fVar23 = fVar23 + fVar23;
      fVar24 = fVar24 + fVar24;
      local_168 = (fVar24 * fStack_104 - fVar23 * fStack_100) + fStack_fc * fVar22 + fVar49 +
                  local_168;
      fStack_164 = (fVar22 * fStack_100 - fVar24 * local_108) + fStack_fc * fVar23 + fVar32 +
                   fStack_164;
      fStack_160 = (fVar23 * local_108 - fVar22 * fStack_104) + fStack_fc * fVar24 + fVar50 +
                   fStack_160;
      if (*(int *)((longlong)param_3 + 0xc) < iVar8 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_3,iVar8);
      }
      uVar7 = *(undefined4 *)(param_1 + 0x4a0);
      uVar1 = *(undefined4 *)(param_1 + 0x49c);
      puVar10 = (undefined8 *)((longlong)iVar8 * 0x20 + *param_3);
      *puVar10 = CONCAT44(fStack_164,local_168);
      *(float *)(puVar10 + 1) = fStack_160;
      *(undefined8 *)((longlong)puVar10 + 0xc) = DAT_1468b5da0;
      uVar9 = DAT_1468b5da8;
      *(undefined4 *)(puVar10 + 3) = uVar1;
      *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar7;
    }
    *(undefined4 *)((longlong)puVar10 + 0x14) = uVar9;
    if ((param_4 != (float *)0x0) && (fVar22 = *(float *)(param_1 + 0x4b0), 0.0 < fVar22)) {
      lVar2 = *param_3;
      lVar11 = (longlong)(int)param_3[1] * 0x20;
      local_f8 = *(float *)(lVar11 + -0x20 + lVar2) - local_f8;
      fStack_f4 = *(float *)(lVar11 + -0x1c + lVar2) - fStack_f4;
      fStack_f0 = *(float *)(lVar11 + -0x18 + lVar2) - fStack_f0;
      *param_4 = (fStack_f4 * fStack_f4 + local_f8 * local_f8 + fStack_f0 * fStack_f0) /
                 (fVar22 * fVar22);
    }
  }
  return;
}



// FUNCTION 1405c48e0 FUN_1405c48e0 body=223 status=ok
// SIG undefined FUN_1405c48e0(void)

void FUN_1405c48e0(longlong param_1,longlong param_2,float param_3,undefined4 param_4)

{
  longlong *plVar1;
  void *_Src;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 != 0) {
    uVar7 = 0;
    iVar2 = *(int *)(param_1 + 400);
    iVar8 = iVar2;
    if (0 < iVar2) {
      pfVar5 = (float *)(*(longlong *)(param_1 + 0x188) + 4);
      uVar9 = uVar7;
      do {
        iVar8 = (int)uVar9;
        if (*pfVar5 <= param_3) break;
        uVar9 = (ulonglong)((int)uVar9 + 1);
        uVar7 = uVar7 + 1;
        pfVar5 = pfVar5 + 3;
        iVar8 = iVar2;
      } while ((longlong)uVar7 < (longlong)iVar2);
    }
    uVar3 = *(undefined4 *)(param_2 + 0x28);
    plVar1 = (longlong *)(param_1 + 0x188);
    iVar2 = *(int *)(param_1 + 400);
    *(int *)(param_1 + 400) = iVar2 + 1;
    if (*(int *)(param_1 + 0x194) < iVar2 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
    }
    lVar6 = (longlong)iVar8;
    _Src = (void *)(*plVar1 + lVar6 * 0xc);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)_Src + 0xc),_Src,(longlong)(iVar2 - iVar8) * 0xc);
    lVar4 = *plVar1;
    *(ulonglong *)(lVar4 + lVar6 * 0xc) = CONCAT44(param_3,uVar3);
    *(undefined4 *)(lVar4 + 8 + lVar6 * 0xc) = param_4;
  }
  return;
}



// FUNCTION 1405c49c0 FUN_1405c49c0 body=308 status=ok
// SIG undefined FUN_1405c49c0(void)

void FUN_1405c49c0(longlong *param_1,longlong param_2,float param_3,undefined4 param_4)

{
  void *_Src;
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  if (((param_1 != (longlong *)0x0) && (param_2 != 0)) &&
     (plVar3 = (longlong *)(**(code **)(*param_1 + 0x670))(), plVar3 != (longlong *)0x0)) {
    uVar4 = FUN_1405db430();
    lVar5 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar4);
    if (lVar5 != 0) {
      uVar8 = 0;
      iVar1 = *(int *)(lVar5 + 400);
      iVar9 = iVar1;
      if (0 < iVar1) {
        pfVar7 = (float *)(*(longlong *)(lVar5 + 0x188) + 4);
        uVar10 = uVar8;
        do {
          iVar9 = (int)uVar10;
          if (*pfVar7 <= param_3) break;
          uVar10 = (ulonglong)((int)uVar10 + 1);
          uVar8 = uVar8 + 1;
          pfVar7 = pfVar7 + 3;
          iVar9 = iVar1;
        } while ((longlong)uVar8 < (longlong)iVar1);
      }
      uVar2 = *(undefined4 *)(param_2 + 0x28);
      plVar3 = (longlong *)(lVar5 + 0x188);
      iVar1 = *(int *)(lVar5 + 400);
      *(int *)(lVar5 + 400) = iVar1 + 1;
      if (*(int *)(lVar5 + 0x194) < iVar1 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar3,iVar1);
      }
      lVar6 = (longlong)iVar9;
      _Src = (void *)(*plVar3 + lVar6 * 0xc);
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)_Src + 0xc),_Src,(longlong)(iVar1 - iVar9) * 0xc);
      lVar5 = *plVar3;
      *(ulonglong *)(lVar5 + lVar6 * 0xc) = CONCAT44(param_3,uVar2);
      *(undefined4 *)(lVar5 + 8 + lVar6 * 0xc) = param_4;
    }
  }
  return;
}



// FUNCTION 1405c4b00 FUN_1405c4b00 body=594 status=ok
// SIG undefined FUN_1405c4b00(void)

void FUN_1405c4b00(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  BOOL BVar9;
  undefined8 *puVar10;
  int iVar11;
  double dVar12;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  int local_84;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  int local_7c;
  double local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  if (BVar9 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  }
  local_78 = *(double *)(param_1 + 0x88);
  uStack_70 = *(undefined8 *)(param_1 + 0x90);
  local_68 = *(undefined4 *)(param_1 + 0x98);
  uStack_64 = *(undefined4 *)(param_1 + 0x9c);
  uStack_60 = *(undefined4 *)(param_1 + 0xa0);
  uStack_5c = *(undefined4 *)(param_1 + 0xa4);
  local_58 = *(undefined8 *)(param_1 + 0xa8);
  if ((*(char *)(param_1 + 0xa9) != '\0') && (*(char *)(param_1 + 0xa8) != '\0')) {
    *(double *)(param_1 + 0xa0) =
         *(double *)(param_1 + 0x98) * *(double *)(param_1 + 0x90) + *(double *)(param_1 + 0xa0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  if (((char)local_58 != '\0') && (local_58._1_1_ != '\0')) {
    plVar1 = (longlong *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x5c)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1,0);
    }
    BVar9 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (BVar9 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    plVar2 = (longlong *)(param_1 + 0x40);
    if (plVar2 != plVar1) {
      lVar4 = *plVar2;
      uVar5 = *(undefined8 *)(param_1 + 0x48);
      *(undefined4 *)plVar2 = *(undefined4 *)plVar1;
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x58);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x5c);
      *plVar1 = lVar4;
      *(undefined8 *)(param_1 + 0x58) = uVar5;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    dVar8 = local_78;
    puVar10 = (undefined8 *)*plVar1;
    puVar3 = puVar10 + (longlong)*(int *)(param_1 + 0x58) * 3;
    iVar11 = (int)((double)*(float *)(param_1 + 0xc) * local_78);
    if (puVar10 != puVar3) {
      dVar7 = (double)CONCAT44(uStack_5c,uStack_60);
      dVar6 = (double)CONCAT44(uStack_64,local_68);
      do {
        dVar12 = 1.0 / dVar6;
        local_7c = (int)(dVar8 * ((double)(*(float *)(puVar10 + 2) +
                                          *(float *)((longlong)puVar10 + 0x14)) - dVar7) * dVar12) +
                   iVar11;
        local_84 = (int)(dVar8 * ((double)*(float *)(puVar10 + 2) - dVar7) * dVar12) + iVar11;
        if (local_84 < 0) {
          if (*(char *)(param_1 + 0x10) == '\0') {
            local_84 = 0;
            goto LAB_1405c4cb4;
          }
        }
        else {
LAB_1405c4cb4:
          if (local_84 <= local_7c) {
            local_87 = *(undefined1 *)((longlong)puVar10 + 0xe);
            local_86 = *(undefined1 *)((longlong)puVar10 + 0xc);
            local_85 = *(undefined1 *)((longlong)puVar10 + 0xd);
            local_88 = 0x90;
            local_80 = 0x80;
            local_7d = 0;
            local_7f = local_87;
            local_7e = local_86;
            FUN_1405a2520(*puVar10,*(undefined4 *)(puVar10 + 1),&local_88,2);
          }
        }
        puVar10 = puVar10 + 3;
      } while (puVar10 != puVar3);
    }
  }
  return;
}



// FUNCTION 1405c4d60 FUN_1405c4d60 body=80 status=ok
// SIG undefined FUN_1405c4d60(void)

void FUN_1405c4d60(longlong param_1)

{
  if ((((*(char *)(param_1 + 0x228) != '\0') && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0'))
     && (DAT_1468536c8 != 0)) {
    FUN_1405ad830(DAT_1468536c8,param_1 + 0x178);
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  FUN_142330890(param_1);
  return;
}



// FUNCTION 1405c4db0 FUN_1405c4db0 body=134 status=ok
// SIG undefined FUN_1405c4db0(void)

void FUN_1405c4db0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_1462054a0 != '\0') {
    plVar1 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))();
      lVar4 = plVar1[0x1f];
    }
    lVar3 = 0;
    lVar2 = lVar3;
    if (lVar4 != 0) {
      lVar2 = *(longlong *)(lVar4 + 0x28);
    }
    if ((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) {
      lVar3 = DAT_1468536c8;
    }
    if (((lVar2 != 0) && (lVar3 != 0)) && (*(longlong *)(lVar2 + 0x40) != 0)) {
      FUN_1405a1960();
      return;
    }
  }
  return;
}



// FUNCTION 1405c4e40 FUN_1405c4e40 body=703 status=ok
// SIG undefined FUN_1405c4e40(void)

void FUN_1405c4e40(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 extraout_EAX;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  
  FUN_142330a70();
  plVar2 = *(longlong **)(param_1 + 0x1a0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x278))(plVar2,param_1);
  }
  lVar3 = *(longlong *)(param_1 + 0x178);
  if (lVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    pfVar7 = (float *)(lVar3 + 0x48);
    if ((*(byte *)(lVar3 + 0x60) & 1) == 0) {
      pfVar7 = (float *)(param_1 + 0x180);
    }
    fVar11 = *pfVar7;
    fVar1 = pfVar7[1];
    if ((lVar5 != 0) || (lVar5 = FUN_1423407b0(param_1), lVar5 != 0)) {
      fVar12 = *(float *)(param_1 + 0x198);
      if (*(float *)(param_1 + 0x19c) < fVar12) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = (*(float *)(param_1 + 0x19c) - fVar12) * 0.5 + fVar12;
      }
      if (fVar1 < fVar11) {
        fVar11 = 0.0;
      }
      else {
        fVar11 = (fVar1 - fVar11) * 0.5 + fVar11;
      }
      iVar6 = *(int *)(param_1 + 0x194);
      fVar9 = _guard_xfg_dispatch_icall_nop((float)iVar6);
      fVar12 = (float)iVar6 - (fVar9 * 0.72 + 1.0) * (1.0 - fVar11 / (fVar11 + fVar12));
      iVar6 = (int)fVar12;
      fVar11 = fVar12;
      if ((iVar6 != -0x80000000) && ((float)iVar6 != fVar12)) {
        auVar10._4_4_ = fVar12;
        auVar10._0_4_ = fVar12;
        auVar10._8_8_ = 0;
        uVar4 = movmskps(extraout_EAX,auVar10);
        fVar11 = (float)(int)(iVar6 - (uVar4 & 1));
      }
      iVar6 = rand();
      fVar9 = *(float *)(lVar5 + 0x790);
      iVar8 = 0;
      iVar6 = ((uint)((float)iVar6 * 3.051851e-05 < fVar12 - fVar11) + (int)fVar12) -
              *(int *)(param_1 + 0x1f0);
      if (0 < iVar6) {
        do {
          FUN_1405cfcb0(param_1,fVar9 - (1.0 - (float)iVar8 * (1.0 / (float)iVar6)) * fVar1);
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar6);
      }
    }
  }
  if (*(float *)(param_1 + 0x70) == 0.125) {
    iVar6 = rand();
    UActorComponent::SetComponentTickInterval(param_1,(float)iVar6 * 1.5259254e-06 + 0.125);
  }
  iVar6 = rand();
  fVar11 = *(float *)(param_1 + 0x198);
  if (*(float *)(param_1 + 0x19c) < fVar11) {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    return;
  }
  *(float *)(param_1 + 0x1f8) =
       (*(float *)(param_1 + 0x19c) - fVar11) * (float)iVar6 * 3.051851e-05 + fVar11;
  return;
}



// FUNCTION 1405c5100 FUN_1405c5100 body=113 status=ok
// SIG undefined FUN_1405c5100(void)

void FUN_1405c5100(longlong *param_1)

{
  char cVar1;
  undefined1 local_res8 [8];
  longlong *local_res10 [3];
  
  if (param_1[0x23] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x408))();
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0x13) = 1;
      local_res10[0] = param_1;
      FUN_14058cbf0(param_1[0x23] + 0x348,local_res8,local_res10,0);
      FUN_142330a70(param_1);
      return;
    }
    FUN_14288e3d0(param_1 + 6,0);
  }
  FUN_142330a70(param_1);
  return;
}



// FUNCTION 1405c5180 FUN_1405c5180 body=204 status=ok
// SIG undefined FUN_1405c5180(void)

void FUN_1405c5180(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_142330a70();
  lVar3 = DAT_1468536c8;
  if ((((*(char *)(param_1 + 0x228) == '\0') && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0'))
     && (DAT_1468536c8 != 0)) {
    iVar1 = *(int *)(DAT_1468536c8 + 0x1dc);
    iVar2 = *(int *)(DAT_1468536c8 + 0x1d8);
    *(undefined2 *)(param_1 + 0x220) = 1;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0x3ff0000000000000;
    *(double *)(param_1 + 0x200) = (double)iVar2;
    *(double *)(param_1 + 0x208) = (double)iVar1 / (double)iVar2;
    *(double *)(param_1 + 0x210) = (double)*(float *)(param_1 + 0x180) * 0.016666666666666666;
    FUN_1405a3c50(lVar3,param_1 + 0x178);
    *(undefined1 *)(param_1 + 0x228) = 1;
  }
  return;
}



// FUNCTION 1405c5250 FUN_1405c5250 body=255 status=ok
// SIG undefined FUN_1405c5250(void)

void FUN_1405c5250(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  
  FUN_142330a70();
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = FUN_1429e18b0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar5 = FUN_1423407b0(param_1), lVar5 == 0)) {
        return;
      }
      lVar5 = *(longlong *)(param_1 + 0x120);
      if (lVar5 == 0) {
        lVar5 = FUN_1423407b0(param_1);
      }
      if (*(longlong *)(lVar5 + 400) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x120);
        if (lVar5 == 0) {
          lVar5 = FUN_1423407b0(param_1);
        }
        iVar4 = FUN_14046e5c0(*(undefined8 *)(lVar5 + 400));
        if ((((iVar4 == 1) && (cVar3 = (**(code **)(*plVar1 + 0x768))(plVar1), cVar3 != '\0')) &&
            (*(char *)(param_1 + 0x180) == '\0')) &&
           (((DAT_1468536c6 == '\0' && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)))) {
          *(undefined1 *)(param_1 + 0x180) = 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 1405c5350 FUN_1405c5350 body=130 status=ok
// SIG undefined FUN_1405c5350(void)

void FUN_1405c5350(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x38);
  plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x40) * 7;
  for (; plVar4 != plVar5; plVar4 = plVar4 + 7) {
    lVar2 = *plVar4;
    if ((lVar2 != 0) && (plVar4[1] != 0)) {
      lVar1 = plVar4[6];
      if ((int)lVar1 != -1) {
        *(undefined4 *)(plVar4 + 6) = 0xffffffff;
        if (lVar2 == 0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          plVar3 = (longlong *)plVar4[1];
        }
        (**(code **)(*plVar3 + 0x20))(plVar3,(int)lVar1,0xffffffff);
        lVar2 = *plVar4;
      }
      if (lVar2 == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)plVar4[1];
      }
      (**(code **)(*plVar3 + 0x30))();
    }
  }
  return;
}



// FUNCTION 1405c53e0 FUN_1405c53e0 body=193 status=ok
// SIG undefined FUN_1405c53e0(void)

void FUN_1405c53e0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_40 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  
  lVar2 = FUN_1405c6c50();
  if (lVar2 != 0) {
    plVar1 = (longlong *)(lVar2 + 0x200);
    *(undefined8 *)(lVar2 + 0x1e8) = 0;
    *(undefined8 *)(lVar2 + 0x1f0) = 0;
    *(undefined8 *)(lVar2 + 0x1f8) = 0x3f800000;
    if (plVar1 != local_40) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = 0;
      *(undefined8 *)(lVar2 + 0x208) = 0;
    }
    *(undefined8 *)(lVar2 + 0x210) = local_30;
    *(undefined4 *)(lVar2 + 0x218) = local_28;
    *(undefined8 *)(lVar2 + 0x21c) = local_24;
    *(undefined2 *)(lVar2 + 0x228) = 0;
    *(undefined1 *)(lVar2 + 0x22a) = 0;
    *(undefined4 *)(lVar2 + 0x22c) = 0;
    *(undefined4 *)(lVar2 + 0x224) = local_1c;
  }
  return;
}



// FUNCTION 1405c54b0 FUN_1405c54b0 body=776 status=ok
// SIG undefined FUN_1405c54b0(void)

void FUN_1405c54b0(longlong param_1,longlong *param_2,longlong param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined4 uVar9;
  
  if (*param_2 == 0) {
    return;
  }
  if (*(char *)(param_3 + 0x42) != '\0') {
    *(undefined1 *)(*param_2 + 0x62) = 0;
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1405aaf10(*param_2);
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_1405aaf10(*param_2);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x1d0);
  lVar6 = 0;
  puVar7 = puVar5 + (longlong)*(int *)(param_1 + 0x1d8) * 2;
  for (; puVar5 != puVar7; puVar5 = puVar5 + 2) {
    FUN_1405aaa50(*param_2,*puVar5,*(undefined4 *)(puVar5 + 1),0,4,0);
  }
  plVar3 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
    if (lVar4 == 0) goto LAB_1405c55a0;
  }
  lVar6 = *(longlong *)(lVar4 + 0x28);
LAB_1405c55a0:
  if (lVar6 != 0) {
    fVar8 = *(float *)(param_1 + 0x1b0) * *(float *)(param_3 + 0x10);
    if (*(longlong *)(param_1 + 0x238) != 0) {
      fVar8 = fVar8 * *(float *)(param_1 + 0x244);
    }
    FUN_1405aaa50(*param_2,*(undefined8 *)(lVar6 + 0x130),fVar8,0,4,0);
    FUN_1405aaa50(*param_2,*(undefined8 *)(lVar6 + 0x138),
                  *(float *)(param_1 + 0x1a8) * *(float *)(param_3 + 0x10),0,4,0);
    FUN_1405aaa50(*param_2,*(undefined8 *)(lVar6 + 0x140),
                  *(float *)(param_1 + 0x1c8) * *(float *)(param_3 + 0x10),0,4,0);
    if (*(longlong *)(param_1 + 0x238) != 0) {
      FUN_1405aaa50(*param_2,*(undefined8 *)(lVar6 + 0x168),*(undefined4 *)(param_1 + 0x240),0,4,0);
    }
    FUN_1405aaa50(*param_2,*(undefined8 *)(lVar6 + 0x148),
                  *(float *)(param_1 + 0x1b4) + *(float *)(param_3 + 0x14),0,4,0);
    FUN_1405aaa50(*param_2,*(undefined8 *)(lVar6 + 0x150),
                  *(float *)(param_1 + 0x1ac) + *(float *)(param_3 + 0x14),0,4,0);
    FUN_1405aaa50(*param_2,*(undefined8 *)(lVar6 + 0x158),
                  *(float *)(param_1 + 0x1cc) + *(float *)(param_3 + 0x14),0,4,0);
    FUN_1405aaf10(*param_2,*(undefined8 *)(lVar6 + 0x170));
    plVar3 = *(longlong **)(param_1 + 0x118);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = APostProcessVolume::GetPrivateStaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = (**(code **)(*plVar3 + 0x818))(plVar3);
        if ((cVar2 == '\0') || (cVar2 = (**(code **)(*plVar3 + 0x778))(plVar3), cVar2 == '\0')) {
          uVar9 = 0x40000000;
        }
        else {
          uVar9 = 0;
        }
        FUN_1405aaa50(*param_2,*(undefined8 *)(lVar6 + 0x160),uVar9,0,4,0);
      }
    }
  }
  if (param_4 != '\0') {
    *(undefined4 *)(*param_2 + 0x68) = *(undefined4 *)(param_1 + 0x1e0);
  }
  FUN_1405d0f80(param_1,param_2,*(undefined1 *)(param_3 + 0x42));
  return;
}



// FUNCTION 1405c57c0 FUN_1405c57c0 body=129 status=ok
// SIG undefined FUN_1405c57c0(void)

void FUN_1405c57c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x38);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143fe4478;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    FUN_14058f8f0(puVar1 + 3,param_1 + 0x18);
    *(undefined4 *)(puVar1 + 5) = *(undefined4 *)(param_1 + 0x28);
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar1 = &PTR_FUN_143fe44c0;
  }
  return;
}



// FUNCTION 1405c5850 FUN_1405c5850 body=222 status=ok
// SIG undefined FUN_1405c5850(void)

void FUN_1405c5850(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  
  cVar3 = FUN_14059ee90(param_1 + 0x2f8);
  if (cVar3 != '\0') {
    FUN_1405ac8f0(param_1 + 0x2f8,0,4);
  }
  lVar1 = *(longlong *)(param_1 + 0x2f0);
  *(undefined1 *)(param_1 + 0x310) = 0;
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x248);
    iVar7 = *(int *)(lVar1 + 0x250);
    for (plVar5 = plVar2; plVar5 != plVar2 + iVar7; plVar5 = plVar5 + 1) {
      if (*plVar5 == param_1) {
        iVar4 = (int)((longlong)plVar5 - (longlong)plVar2 >> 3);
        if (iVar4 != -1) {
          iVar6 = (iVar7 - iVar4) + -1;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (plVar2 + iVar4,plVar2 + (iVar7 - iVar6),(longlong)iVar6 << 3);
            iVar7 = *(int *)(lVar1 + 0x250);
          }
          *(int *)(lVar1 + 0x250) = iVar7 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(lVar1 + 0x248));
        }
        break;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  FUN_142338f40(param_1);
  return;
}



// FUNCTION 1405c5930 FUN_1405c5930 body=72 status=ok
// SIG undefined FUN_1405c5930(void)

void FUN_1405c5930(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_14059ee90(param_1 + 600);
  if (cVar1 != '\0') {
    FUN_1405ac8f0(param_1 + 600,0,4);
  }
  *(undefined1 *)(param_1 + 0x270) = 0;
  FUN_142338f40(param_1);
  return;
}



// FUNCTION 1405c5980 FUN_1405c5980 body=133 status=ok
// SIG undefined FUN_1405c5980(void)

void FUN_1405c5980(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *local_18;
  undefined8 local_10;
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  if ((cVar1 == '\0') && (param_1[0x6a] != 0)) {
    local_18 = param_1;
    uVar2 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
    FUN_1405d0010(param_1[0x6a],&local_18);
  }
  if (param_1[0x6b] != 0) {
    FUN_1405ac930();
    if (param_1[0x6b] != 0) {
      FUN_1405a53f0();
      param_1[0x6b] = 0;
    }
  }
  FUN_142338f40(param_1);
  return;
}



// FUNCTION 1405c5a30 FUN_1405c5a30 body=501 status=ok
// SIG undefined FUN_1405c5a30(void)

void FUN_1405c5a30(longlong *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  
  iVar6 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar6 != 0) {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar3 = *puVar8;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar4 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar2 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar2) goto LAB_1405c5b01;
      uVar3 = puVar8[lVar4 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    iStack_64 = (iStack_60 - iVar7) + 0x1f;
    if (iVar6 < iStack_64) {
LAB_1405c5b01:
      iStack_64 = iVar6;
    }
  }
  local_50 = local_78;
  uStack_4c = uStack_74;
  local_40 = 0xffffffff;
  iStack_3c = iStack_64;
  iStack_38 = iStack_60;
  puStack_48 = puVar1;
  if (iStack_64 < iVar6) {
    do {
      lVar5 = (longlong)iStack_3c * 0x20 + *param_1;
      iVar6 = *(int *)(lVar5 + 0x10);
      lVar4 = *(longlong *)(lVar5 + 8);
      if (iVar6 != 0) {
        do {
          FUN_140591060(lVar4);
          lVar4 = lVar4 + 0x18;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        lVar4 = *(longlong *)(lVar5 + 8);
      }
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (iStack_3c < (int)puStack_48[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar3 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1405c5c50 FUN_1405c5c50 body=93 status=ok
// SIG undefined FUN_1405c5c50(void)

void FUN_1405c5c50(longlong param_1,undefined4 param_2)

{
  if ((((*(char *)(param_1 + 0x228) != '\0') && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0'))
     && (DAT_1468536c8 != 0)) {
    FUN_1405ad830(DAT_1468536c8,param_1 + 0x178);
    *(undefined1 *)(param_1 + 0x228) = 0;
  }
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 1405c5cc0 FUN_1405c5cc0 body=582 status=ok
// SIG undefined FUN_1405c5cc0(void)

ulonglong FUN_1405c5cc0(longlong *param_1)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar14;
  float fVar15;
  ulonglong uVar13;
  
  lVar5 = (**(code **)(*param_1 + 0x148))();
  uVar6 = 0;
  if ((lVar5 != 0) && (uVar6 = FUN_1428c5af0(lVar5), (char)uVar6 != '\0')) {
    uVar10 = *(uint *)(param_1 + 0x8e);
    if (*(uint *)(param_1 + 0x95) != uVar10) {
      uVar13 = 0;
      puVar1 = (ulonglong *)(param_1 + 0x94);
      *(undefined4 *)((longlong)param_1 + 0x4dc) = 0;
      plVar9 = (longlong *)*puVar1;
      uVar6 = (longlong)(int)param_1[0x95] & 0x1fffffffffffffff;
      if (plVar9 + (int)param_1[0x95] < plVar9) {
        uVar6 = uVar13;
      }
      uVar12 = uVar13;
      if (uVar6 != 0) {
        do {
          plVar3 = (longlong *)*plVar9;
          if ((plVar3 != (longlong *)0x0) && (plVar3 != (longlong *)param_1[0x2d])) {
            (**(code **)(*plVar3 + 0x3b0))(plVar3,0);
          }
          plVar9 = plVar9 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar6);
      }
      *(undefined4 *)(param_1 + 0x95) = 0;
      if (0x7fffffff < *(uint *)((longlong)param_1 + 0x4ac)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(puVar1,0);
      }
      uVar10 = *(uint *)(param_1 + 0x8e);
      if (0 < (int)uVar10) {
        do {
          if (((int)uVar13 == 0) && (param_1[0x2d] != 0)) {
            lVar7 = AUGDoor::GetPrivateStaticClass();
            lVar5 = param_1[0x2d];
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_1405c5dff;
          }
          else {
LAB_1405c5dff:
            lVar5 = FUN_1405ab470(param_1,0,0,0);
          }
          *(longlong **)(lVar5 + 0x380) = param_1;
          uVar8 = FUN_1405b5730();
          uVar8 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar8);
          *(undefined8 *)(lVar5 + 0x388) = uVar8;
          FUN_1405a9540(lVar5,(*(char *)((longlong)param_1 + 0x49c) == '\0') + '\x02');
          FUN_1405a9420(lVar5);
          iVar2 = (int)param_1[0x95];
          *(int *)(param_1 + 0x95) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0x4ac) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar1,iVar2);
          }
          uVar11 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar11;
          *(longlong *)(*puVar1 + (longlong)iVar2 * 8) = lVar5;
          uVar10 = *(uint *)(param_1 + 0x8e);
        } while ((int)uVar11 < (int)uVar10);
      }
    }
    if (0 < (int)uVar10) {
      plVar9 = (longlong *)param_1[0x8d];
      fVar14 = *(float *)((longlong)param_1 + 0x4dc);
      uVar6 = (ulonglong)uVar10;
      do {
        if (*plVar9 == 0) {
          fVar15 = 0.0;
        }
        else {
          fVar15 = *(float *)(*plVar9 + 0x38);
        }
        if (fVar14 <= fVar15) {
          fVar14 = fVar15;
        }
        plVar9 = plVar9 + 1;
        *(float *)((longlong)param_1 + 0x4dc) = fVar14;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar11 = *(uint *)(param_1 + 0x95);
    uVar6 = (ulonglong)uVar11;
    if ((uVar11 != 0) && (uVar11 == uVar10)) {
      return CONCAT71((uint7)(uint3)(uVar11 >> 8),1);
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 1405c5f10 FUN_1405c5f10 body=455 status=ok
// SIG undefined FUN_1405c5f10(void)

bool FUN_1405c5f10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  byte bVar8;
  byte *pbVar9;
  
  if ((*(longlong *)(param_1 + 0x4e0) != 0) || (*(int *)(param_1 + 0x4b8) == 0)) goto LAB_1405c60c6;
  if (*(char *)(param_1 + 0x478) == '\0') {
    pbVar5 = *(byte **)(param_1 + 0x4b0);
    pbVar9 = pbVar5 + 1;
    if ((*pbVar5 - 1 & 0xfd) != 0) goto LAB_1405c6093;
    bVar8 = 0;
    if (1 < *pbVar5) {
      bVar8 = *pbVar9;
      pbVar9 = pbVar5 + 2;
    }
    uVar1 = *(undefined8 *)pbVar9;
    uVar3 = *(undefined4 *)(pbVar9 + 8);
    uVar4 = *(undefined4 *)(pbVar9 + 0x14);
    uVar2 = *(undefined8 *)(pbVar9 + 0xc);
    puVar7 = (undefined8 *)operator_new(0x38);
    if (puVar7 == (undefined8 *)0x0) goto LAB_1405c6093;
    *puVar7 = &PTR_FUN_143fdee30;
    puVar7[2] = uVar1;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = uVar2;
    puVar7[5] = 0;
    *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
    puVar7[1] = pbVar9 + 0x18;
    *(undefined4 *)(puVar7 + 3) = uVar3;
    *(byte *)(puVar7 + 6) = bVar8;
  }
  else {
    if (*(char *)(param_1 + 0x478) != '\x01') goto LAB_1405c60c6;
    pbVar5 = *(byte **)(param_1 + 0x4b0);
    if ((byte)(*pbVar5 - 1) < 2) {
      uVar1 = *(undefined8 *)(pbVar5 + 1);
      uVar3 = *(undefined4 *)(pbVar5 + 9);
      bVar8 = 0;
      uVar4 = *(undefined4 *)(pbVar5 + 0x15);
      pbVar9 = pbVar5 + 0x19;
      uVar2 = *(undefined8 *)(pbVar5 + 0xd);
      if (1 < *pbVar5) {
        bVar8 = *pbVar9;
        pbVar9 = pbVar5 + 0x1a;
      }
      puVar7 = (undefined8 *)operator_new(0x48);
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[2] = uVar1;
        *puVar7 = &PTR__scalar_deleting_destructor__143fdee48;
        *(undefined8 *)((longlong)puVar7 + 0x1c) = uVar2;
        puVar7[5] = 0;
        *(undefined4 *)((longlong)puVar7 + 0x24) = uVar4;
        puVar7[1] = pbVar9;
        *(undefined4 *)(puVar7 + 3) = uVar3;
        *(byte *)(puVar7 + 6) = bVar8;
        puVar7[7] = 0;
        puVar7[8] = 0;
        goto LAB_1405c6095;
      }
    }
LAB_1405c6093:
    puVar7 = (undefined8 *)0x0;
  }
LAB_1405c6095:
  puVar6 = *(undefined8 **)(param_1 + 0x4e0);
  *(undefined8 **)(param_1 + 0x4e0) = puVar7;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,1);
  }
LAB_1405c60c6:
  return *(longlong *)(param_1 + 0x4e0) != 0;
}



// FUNCTION 1405c60e0 FUN_1405c60e0 body=81 status=ok
// SIG undefined FUN_1405c60e0(void)

void FUN_1405c60e0(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 local_28 [16];
  undefined4 local_18;
  
  uVar2 = FWeakObjectPtr::Get(param_1 + 8);
  pcVar1 = *(code **)(param_1 + 0x10);
  FUN_14058f8f0(local_28,param_1 + 0x18);
  local_18 = *(undefined4 *)(param_1 + 0x28);
  (*pcVar1)(uVar2,local_28);
  return;
}



// FUNCTION 1405c6140 FUN_1405c6140 body=108 status=ok
// SIG undefined FUN_1405c6140(void)

undefined1 FUN_1405c6140(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_28 [16];
  undefined4 local_18;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar3 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_1 + 8);
    pcVar1 = *(code **)(param_1 + 0x10);
    FUN_14058f8f0(local_28,param_1 + 0x18);
    local_18 = *(undefined4 *)(param_1 + 0x28);
    (*pcVar1)(uVar2,local_28);
    return 1;
  }
  return 0;
}



// FUNCTION 1405c61b0 FUN_1405c61b0 body=860 status=ok
// SIG undefined FUN_1405c61b0(void)

void FUN_1405c61b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  if ((param_2 != 0) &&
     (plVar13 = (longlong *)FUN_142627a50(param_2,param_1), plVar13 != (longlong *)0x0)) {
    if ((int)plVar13[3] < 1) {
      cVar12 = FUN_14059ee90(plVar13);
      if ((cVar12 != '\0') && (cVar12 = FUN_14059ee00(plVar13), cVar12 == '\0')) {
        FUN_1405a1510(plVar13,0,4);
      }
    }
    else {
      cVar12 = FUN_14059ee00();
      if (cVar12 == '\0') {
        cVar12 = FUN_14059ee90(plVar13);
        if (cVar12 == '\0') {
          FUN_1405cdb20(param_1,plVar13,param_2);
        }
      }
      else {
        FUN_1405a8a50(plVar13,0,4);
      }
      cVar12 = FUN_14059ee90(plVar13);
      if (cVar12 != '\0') {
        lVar3 = *plVar13;
        FUN_1405aa840(lVar3,(int)plVar13[3],1);
        iVar17 = 0;
        if (0 < (int)plVar13[3]) {
          plVar15 = plVar13 + 5;
          lVar16 = 0;
          do {
            cVar12 = FUN_14263b0c0(param_2);
            fVar23 = *(float *)((longlong)plVar15 + 0xc);
            if (cVar12 == '\0') {
              FRotator::Quaternion(plVar15,&local_68);
              fVar32 = *(float *)((longlong)plVar15 + -4);
              fVar31 = *(float *)(plVar15 + -1);
              fVar30 = *(float *)((longlong)plVar15 + -0xc);
              fVar24 = fVar23;
              fVar25 = fVar23;
              uVar26 = local_68;
              uVar27 = uStack_64;
              uVar28 = uStack_60;
              uVar29 = uStack_5c;
            }
            else {
              fVar6 = *(float *)(param_2 + 0xe0);
              fVar7 = *(float *)(param_2 + 0xe4);
              fVar8 = *(float *)(param_2 + 0xe8);
              fVar9 = *(float *)(param_2 + 0xd0);
              fVar10 = *(float *)(param_2 + 0xc0);
              fVar11 = *(float *)(param_2 + 0xb0);
              fVar20 = fVar23 * *(float *)(param_2 + 0xd4);
              fVar21 = fVar23 * *(float *)(param_2 + 0xd8);
              fVar18 = fVar23 * *(float *)(param_2 + 0xc4);
              fVar19 = fVar23 * *(float *)(param_2 + 200);
              fVar33 = fVar23 * *(float *)(param_2 + 0xb4);
              fVar34 = fVar23 * *(float *)(param_2 + 0xb8);
              fVar24 = *(float *)((longlong)plVar15 + -4);
              fVar32 = *(float *)((longlong)plVar15 + -0xc);
              fVar25 = *(float *)(plVar15 + -1);
              fVar22 = fVar6 * 1.0;
              fVar30 = fVar32 * fVar11 + fVar25 * fVar10 + fVar24 * fVar9 + fVar22;
              fVar31 = fVar32 * *(float *)(param_2 + 0xb4) + fVar25 * *(float *)(param_2 + 0xc4) +
                       fVar24 * *(float *)(param_2 + 0xd4) + fVar7 * 1.0;
              fVar32 = fVar32 * *(float *)(param_2 + 0xb8) + fVar25 * *(float *)(param_2 + 200) +
                       fVar24 * *(float *)(param_2 + 0xd8) + fVar8 * 1.0;
              FRotator::Quaternion
                        (plVar15,&local_78,fVar24,fVar22,fVar23,fVar23,
                         *(float *)((longlong)plVar15 + -0xc),
                         *(undefined4 *)((longlong)plVar15 + -4),0,0);
              fVar23 = fVar23 * fVar11 + fVar23 * fVar10 + fVar23 * fVar9 + fVar6 * 0.0;
              fVar24 = fVar33 + fVar18 + fVar20 + fVar7 * 0.0;
              fVar25 = fVar34 + fVar19 + fVar21 + fVar8 * 0.0;
              uVar26 = local_78;
              uVar27 = uStack_74;
              uVar28 = uStack_70;
              uVar29 = uStack_6c;
            }
            lVar14 = *(longlong *)(lVar3 + 0x40);
            if (*(longlong *)(lVar3 + 0x40) == 0) {
              lVar14 = lVar3;
            }
            auVar4._4_4_ = fVar24;
            auVar4._0_4_ = fVar23;
            auVar4._8_4_ = fVar25;
            auVar4._12_4_ = 0;
            *(undefined1 (*) [16])(lVar14 + 0x20 + lVar16) = auVar4;
            auVar5._4_4_ = fVar31;
            auVar5._0_4_ = fVar30;
            auVar5._8_4_ = fVar32;
            auVar5._12_4_ = 0;
            *(undefined1 (*) [16])(lVar14 + 0x10 + lVar16) = auVar5;
            puVar2 = (undefined4 *)(lVar14 + lVar16);
            *puVar2 = uVar26;
            puVar2[1] = uVar27;
            puVar2[2] = uVar28;
            puVar2[3] = uVar29;
            lVar14 = *(longlong *)(lVar3 + 0x40);
            if (*(longlong *)(lVar3 + 0x40) == 0) {
              lVar14 = lVar3;
            }
            iVar17 = iVar17 + 1;
            plVar1 = plVar15 + 2;
            plVar15 = plVar15 + 4;
            *(int *)(lVar14 + 0x30 + lVar16) = (int)*plVar1;
            lVar16 = lVar16 + 0x40;
          } while (iVar17 < (int)plVar13[3]);
        }
        FUN_1405b0a40(*plVar13,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1405c6510 FUN_1405c6510 body=1281 status=ok
// SIG undefined FUN_1405c6510(void)

void FUN_1405c6510(longlong param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118 [3];
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  
  if ((((param_2 != 0) && (lVar5 = FUN_142628290(param_2), lVar5 != 0)) &&
      (*(longlong *)(param_2 + 0x100) != 0)) && (lVar5 = FUN_142627a50(param_2,param_1), lVar5 != 0)
     ) {
    lVar7 = *(longlong *)(param_2 + 0x100);
    iVar8 = *(int *)(param_2 + 0x128) + -1;
    local_100 = *(longlong *)(param_2 + 0x108);
    iVar2 = *(int *)(param_2 + 0x124);
    lVar11 = (longlong)iVar8;
    local_128 = lVar7;
    if (-1 < iVar8) {
      do {
        lVar9 = (ulonglong)((uint)*(ushort *)(local_100 + lVar11 * 2) * iVar2) + lVar7;
        if ((*(uint *)(lVar9 + 0x68) & 0x4000000) == 0) {
          lVar9 = (ulonglong)param_3 + lVar9;
          if ((*(char *)(lVar9 + 0x28) != '\0') && (cVar3 = FUN_14059ee90(lVar9), cVar3 == '\0')) {
            *(undefined1 *)(lVar9 + 0x28) = 0;
            lVar7 = *(longlong *)(param_1 + 0x38);
            if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x60) & 2) != 0)) {
              local_f8 = *(undefined8 *)(lVar9 + 0x18);
              local_f0 = *(undefined4 *)(lVar9 + 0x20);
              uVar6 = FUN_142628290(param_2);
              cVar3 = FUN_14059f060(uVar6,lVar7,&local_f8,0x3f800000,0x42480000);
              if (cVar3 != '\0') {
                lVar7 = FUN_142628290(param_2);
                iVar8 = *(int *)(param_1 + 0x40);
                uVar1 = *(undefined4 *)(lVar7 + 0x79c);
                cVar3 = *(char *)(param_1 + 0x44);
                local_118[2] = FUN_142628290(param_2);
                iVar14 = -1;
                lVar7 = -1;
                fVar16 = 0.0;
                iVar15 = 8;
                if (iVar8 < 9) {
                  iVar15 = iVar8;
                }
                iVar10 = 0;
                lVar13 = 0;
                iVar8 = -1;
                if (0 < iVar15) {
                  pfVar12 = (float *)(lVar5 + 0x80);
                  do {
                    cVar4 = FUN_14059f130((longlong)iVar10 * 0x10 + lVar5);
                    if (cVar4 == '\0') {
                      iVar8 = iVar14;
                      if (iVar10 != -1) goto LAB_1405c67a8;
                      break;
                    }
                    if ((*pfVar12 < fVar16) || (lVar7 == -1)) {
                      lVar7 = lVar13;
                      fVar16 = *pfVar12;
                      iVar14 = iVar10;
                    }
                    iVar10 = iVar10 + 1;
                    lVar13 = lVar13 + 1;
                    pfVar12 = pfVar12 + 1;
                    iVar8 = iVar14;
                  } while (iVar10 < iVar15);
                }
                iVar10 = iVar8;
                lVar13 = lVar7;
                if ((cVar3 == '\0') || (iVar10 == -1)) {
LAB_1405c683b:
                  FUN_14058f8d0(&local_138,0);
                }
                else {
                  FUN_14058f8a0(&local_120,(longlong)iVar10 * 0x10 + lVar5);
                  if ((local_120 != 0) && (FUN_1405ac930(), local_120 != 0)) {
                    FUN_1405a53f0();
                    local_120 = 0;
                  }
LAB_1405c67a8:
                  if (((DAT_1468536c6 != '\0') || (DAT_1468536c5 == '\0')) || (DAT_1468536c8 == 0))
                  goto LAB_1405c683b;
                  lVar7 = DAT_1468536c8 + 8;
                  *(undefined4 *)(lVar5 + 0x80 + lVar13 * 4) = uVar1;
                  FUN_14059ce50(lVar7,&local_140,local_118[2],0);
                  FUN_14058f8f0(local_e8,&local_140);
                  FUN_1405913a0((longlong)iVar10 * 0x10 + lVar5,local_e8);
                  FUN_140591060(local_e8);
                  FIoRequest::operator=(&local_138,&local_140);
                  if (local_140 != 0) {
                    FUN_1405a53f0();
                    local_140 = 0;
                  }
                }
                if (local_138 != 0) {
                  local_118[0] = 0;
                  local_118[1] = 0;
                  lVar7 = FUN_1405a2d20(local_138,&local_c8,*(undefined8 *)(param_1 + 0x38),0,0,
                                        local_118);
                  FUN_1405913a0(lVar9,lVar7);
                  *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar7 + 0x10);
                  FUN_140591060(&local_c8);
                  if (local_118[0] != 0) {
                    FMemory::Free();
                  }
                  if (local_138 != 0) {
                    FUN_1405a53f0();
                    local_138 = 0;
                  }
                }
              }
            }
          }
          cVar3 = FUN_14059ee90(lVar9);
          lVar7 = local_128;
          if ((cVar3 != '\0') &&
             (FUN_14058f8a0(&local_130,lVar9), lVar7 = local_128, local_130 != 0)) {
            fVar16 = *(float *)(param_1 + 0x48);
            fVar18 = fVar16 * (float)DAT_1464aa788;
            fVar17 = fVar16 * DAT_1464aa788._4_4_;
            fVar16 = fVar16 * DAT_1464aa790;
            FRotator::Quaternion(&DAT_1468b5da0,&local_d8);
            local_a8._4_4_ = fVar17;
            local_a8._0_4_ = fVar18;
            local_a8._8_4_ = fVar16;
            local_a8._12_4_ = 0;
            local_c8 = local_d8;
            uStack_c0 = uStack_d0;
            local_b8._12_4_ = 0;
            local_b8._0_12_ = *(undefined1 (*) [12])(lVar9 + 0x18);
            FUN_1405aac00(local_130,&local_c8,0x3f800000);
            lVar7 = local_128;
            if (local_130 != 0) {
              FUN_1405a53f0();
              local_130 = 0;
              lVar7 = local_128;
            }
          }
        }
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
  }
  return;
}



// FUNCTION 1405c6a20 FUN_1405c6a20 body=88 status=ok
// SIG undefined FUN_1405c6a20(void)

undefined8 FUN_1405c6a20(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  int local_res8 [8];
  
  TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 0x40),local_res8,param_2);
  lVar1 = 0;
  if (local_res8[0] != -1) {
    lVar1 = (longlong)local_res8[0] * 0x30 + *(longlong *)(param_1 + 0x40);
  }
  lVar2 = lVar1 + 8;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    return 0;
  }
  return *(undefined8 *)(lVar2 + 0x18);
}



// FUNCTION 1405c6a80 FindId body=272 status=ok
// SIG undefined FindId(void)

int * TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
      ::FindId(longlong *param_1,int *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar4 = (int)(param_3 >> 4);
    uVar3 = 0x9e3779b9U - iVar4 ^ iVar4 << 8;
    uVar2 = -(uVar3 + iVar4) ^ uVar3 >> 0xd;
    uVar5 = (iVar4 - uVar3) - uVar2 ^ uVar2 >> 0xc;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 0x10;
    uVar2 = (uVar2 - uVar3) - uVar5 ^ uVar3 >> 5;
    uVar5 = (uVar5 - uVar3) - uVar2 ^ uVar2 >> 3;
    uVar3 = (uVar3 - uVar5) - uVar2 ^ uVar5 << 10;
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar1 +
                    (((longlong)(int)((uVar2 - uVar3) - uVar5) ^ (ulonglong)(uVar3 >> 0xf)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x30) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(*param_1 + 0x28 + (longlong)iVar4 * 0x30);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1405c6b90 FUN_1405c6b90 body=103 status=ok
// SIG undefined FUN_1405c6b90(void)

longlong * FUN_1405c6b90(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar3 = 0;
  lVar5 = lVar3;
  lVar7 = lVar3;
  if (*param_2 != 0) {
    lVar5 = *param_2;
    lVar7 = param_2[1];
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  plVar6 = plVar1 + (longlong)*(int *)(param_1 + 0x40) * 7;
  while( true ) {
    if (plVar1 == plVar6) {
      return (longlong *)0x0;
    }
    lVar4 = lVar3;
    if (*plVar1 != 0) {
      lVar4 = plVar1[1];
    }
    lVar2 = lVar7;
    if (lVar5 == 0) {
      lVar2 = lVar3;
    }
    if ((lVar4 == lVar2) && (*plVar1 == lVar5)) break;
    plVar1 = plVar1 + 7;
  }
  return plVar1;
}



// FUNCTION 1405c6c00 FUN_1405c6c00 body=66 status=ok
// SIG undefined FUN_1405c6c00(void)

undefined8 FUN_1405c6c00(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
    if (lVar2 == 0) {
      return 0;
    }
  }
  return *(undefined8 *)(lVar2 + 0x28);
}



// FUNCTION 1405c6c50 FUN_1405c6c50 body=138 status=ok
// SIG undefined FUN_1405c6c50(void)

longlong FUN_1405c6c50(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = UPathFollowingAgentInterface::GetPrivateStaticClass();
  plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
    return lVar3;
  }
  uVar1 = UUGHUDGearBarUW::GetPrivateStaticClass();
  lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (lVar3 == 0) {
    lVar4 = FUN_14222e2a0(param_1);
    if (lVar4 != 0) {
      lVar3 = FUN_1405c6c50(lVar4);
    }
  }
  return lVar3;
}



// FUNCTION 1405c6ce0 FUN_1405c6ce0 body=1642 status=ok
// SIG undefined FUN_1405c6ce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_1405c6ce0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  float *pfVar14;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
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
  undefined1 auStack_188 [48];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [48];
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar1 = *(longlong **)(param_1 + 400);
  if (plVar1 == (longlong *)0x0) {
    pfVar14 = (float *)&local_138;
    local_138 = _DAT_1468b5b70;
    uStack_130 = uRam00000001468b5b78;
    local_118 = _DAT_1468b5b90;
    uStack_110 = uRam00000001468b5b98;
    local_128 = _DAT_1468b5b80;
    uStack_120 = uRam00000001468b5b88;
  }
  else {
    pfVar14 = (float *)(**(code **)(*plVar1 + 0x420))
                                 (plVar1,local_f8,*(undefined8 *)(param_1 + 0x198),0);
  }
  uVar12 = FRotator::Quaternion(param_1 + 0x1f8,&local_158);
  fVar18 = fRam000000014685450c;
  uVar11 = uRam00000001468544cc;
  uVar10 = uRam00000001468544c8;
  uVar9 = uRam00000001468544c4;
  uVar8 = _DAT_1468544c0;
  fVar37 = *(float *)(param_1 + 500);
  fVar40 = *(float *)(param_1 + 0x1f0);
  fVar43 = *(float *)(param_1 + 0x1ec);
  fVar28 = *(float *)*(undefined1 (*) [12])(param_1 + 0x204);
  fVar30 = *(float *)(param_1 + 0x20c);
  fVar32 = *(float *)(param_1 + 0x208);
  auVar4 = *(undefined1 (*) [12])(param_1 + 0x204);
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = fVar18;
  fVar18 = (float)((uint)fRam0000000146854504 & uVar9);
  fVar19 = (float)((uint)fRam0000000146854508 & uVar10);
  fVar20 = (float)((uint)fRam000000014685450c & uVar11);
  param_2[8] = (float)((uint)_DAT_146854500 & uVar8);
  param_2[9] = fVar18;
  param_2[10] = fVar19;
  param_2[0xb] = fVar20;
  fVar7 = fRam0000000146854508;
  fVar6 = fRam0000000146854504;
  fVar44 = _DAT_146854500;
  auVar15._12_4_ = 0;
  auVar15._0_12_ = auVar4;
  auVar16 = *(undefined1 (*) [16])(pfVar14 + 8);
  fVar18 = auVar16._0_4_;
  fVar19 = auVar16._4_4_;
  fVar20 = auVar16._8_4_;
  fVar2 = auVar16._12_4_;
  fVar21 = *pfVar14;
  fVar29 = pfVar14[1];
  fVar25 = pfVar14[2];
  fVar31 = pfVar14[3];
  auVar16 = minps(auVar15,auVar16);
  auVar17._4_4_ = -(uint)(auVar16._4_4_ < fRam0000000146854544);
  auVar17._0_4_ = -(uint)(auVar16._0_4_ < _DAT_146854540);
  auVar17._8_4_ = -(uint)(auVar16._8_4_ < fRam0000000146854548);
  auVar17._12_4_ = -(uint)(auVar16._12_4_ < fRam000000014685454c);
  iVar13 = movmskps(uVar12,auVar17);
  if (iVar13 == 0) {
    fVar44 = pfVar14[4];
    fVar6 = pfVar14[5];
    fVar7 = pfVar14[6];
    fVar5 = pfVar14[7];
    fVar43 = fVar43 * fVar18;
    fVar40 = fVar40 * fVar19;
    fVar37 = fVar37 * fVar20;
    fVar42 = fVar2 * 0.0;
    fVar33 = fStack_14c * fVar21 * _DAT_1468544f0;
    fVar46 = fStack_150 * fVar21 * fRam00000001468544f4;
    fVar34 = fStack_154 * fVar21 * fRam00000001468544f8;
    fVar35 = local_158 * fVar21 * fRam00000001468544fc;
    fVar22 = fStack_150 * fVar29 * _DAT_1468544e0;
    fVar26 = fStack_14c * fVar29 * fRam00000001468544e4;
    fVar24 = local_158 * fVar29 * fRam00000001468544e8;
    fVar27 = fStack_154 * fVar29 * fRam00000001468544ec;
    fVar36 = fStack_154 * fVar25 * _DAT_1468544d0;
    fVar38 = local_158 * fVar25 * fRam00000001468544d4;
    fVar39 = fStack_14c * fVar25 * fRam00000001468544d8;
    fVar41 = fStack_150 * fVar25 * fRam00000001468544dc;
    param_2[8] = fVar28 * fVar18;
    param_2[9] = fVar32 * fVar19;
    param_2[10] = fVar30 * fVar20;
    param_2[0xb] = fVar2 * 0.0;
    *param_2 = fVar33 + fVar31 * local_158 + fVar22 + fVar36;
    param_2[1] = fVar46 + fVar31 * fStack_154 + fVar26 + fVar38;
    param_2[2] = fVar34 + fVar31 * fStack_150 + fVar24 + fVar39;
    param_2[3] = fVar35 + fVar31 * fStack_14c + fVar27 + fVar41;
    fVar28 = fVar37 * fVar29 - fVar40 * fVar25;
    fVar30 = fVar43 * fVar25 - fVar37 * fVar21;
    fVar32 = fVar40 * fVar21 - fVar43 * fVar29;
    fVar18 = fVar42 * fVar31 - fVar42 * fVar31;
    fVar28 = fVar28 + fVar28;
    fVar30 = fVar30 + fVar30;
    fVar32 = fVar32 + fVar32;
    fVar18 = fVar18 + fVar18;
    param_2[4] = (fVar32 * fVar29 - fVar30 * fVar25) + fVar31 * fVar28 + fVar43 + fVar44;
    param_2[5] = (fVar28 * fVar25 - fVar32 * fVar21) + fVar31 * fVar30 + fVar40 + fVar6;
    param_2[6] = (fVar30 * fVar21 - fVar28 * fVar29) + fVar31 * fVar32 + fVar37 + fVar7;
    param_2[7] = (fVar18 * fVar31 - fVar18 * fVar31) + fVar31 * fVar18 + fVar42 + fVar5;
  }
  else {
    fVar5 = pfVar14[4];
    fVar22 = pfVar14[5];
    fVar26 = pfVar14[6];
    fVar24 = fVar29 + fVar29;
    fVar27 = fVar25 + fVar25;
    fVar33 = fVar21 * (fVar21 + fVar21);
    fVar46 = fVar31 * (fVar21 + fVar21);
    fVar49 = (fVar31 * fVar27 + fVar21 * fVar24) * fVar18;
    fVar50 = (fVar46 + fVar29 * fVar27) * fVar19;
    fVar51 = (fVar31 * fVar24 + fVar21 * fVar27) * fVar20;
    fVar35 = fVar19 * (fVar21 * fVar24 - fVar31 * fVar27);
    fVar38 = fVar20 * (fVar29 * fVar27 - fVar46);
    fVar41 = fVar18 * (fVar21 * fVar27 - fVar31 * fVar24);
    fVar46 = fStack_154 + fStack_154;
    fVar31 = fStack_150 + fStack_150;
    fVar21 = (float)((uint)((_DAT_146854500 - (fVar25 * fVar27 + fVar29 * fVar24)) * fVar18) & uVar8
                    );
    fVar25 = (float)((uint)((fRam0000000146854504 - (fVar25 * fVar27 + fVar33)) * fVar19) & uVar9);
    fVar24 = (float)((uint)((fRam0000000146854508 - (fVar29 * fVar24 + fVar33)) * fVar20) & uVar10);
    fVar33 = (float)((uint)((fRam000000014685450c - (fVar33 + fVar33)) * fVar2) & uVar11);
    fVar34 = (local_158 + local_158) * local_158;
    fVar29 = (local_158 + local_158) * fStack_14c;
    fVar45 = (fVar31 * fStack_14c + fVar46 * local_158) * fVar28;
    fVar47 = (fVar29 + fVar31 * fStack_154) * fVar32;
    fVar48 = (fVar46 * fStack_14c + fVar31 * local_158) * fVar30;
    fVar36 = fVar32 * (fVar46 * local_158 - fVar31 * fStack_14c);
    fVar39 = fVar30 * (fVar31 * fStack_154 - fVar29);
    fVar42 = fVar28 * (fVar31 * local_158 - fVar46 * fStack_14c);
    fVar29 = (float)((uint)((_DAT_146854500 - (fVar31 * fStack_150 + fVar46 * fStack_154)) * fVar28)
                    & uVar8);
    fVar31 = (float)((uint)((fRam0000000146854504 - (fVar31 * fStack_150 + fVar34)) * fVar32) &
                    uVar9);
    fVar27 = (float)((uint)((fRam0000000146854508 - (fVar46 * fStack_154 + fVar34)) * fVar30) &
                    uVar10);
    fVar46 = (float)((uint)((fRam000000014685450c - (fVar34 + fVar34)) * 0.0) & uVar11);
    local_138._0_4_ = fVar45 * fVar35 + fVar29 * fVar21 + fVar42 * fVar51 + fVar46 * fVar5;
    local_138._4_4_ = fVar45 * fVar25 + fVar29 * fVar49 + fVar42 * fVar38 + fVar46 * fVar22;
    uStack_130._0_4_ = fVar45 * fVar50 + fVar29 * fVar41 + fVar42 * fVar24 + fVar46 * fVar26;
    uStack_130._4_4_ =
         fVar45 * fVar33 + fVar29 * fVar33 + fVar42 * fVar33 + fVar46 * fRam000000014685450c;
    local_128._0_4_ = fVar31 * fVar35 + fVar36 * fVar21 + fVar47 * fVar51 + fVar46 * fVar5;
    local_128._4_4_ = fVar31 * fVar25 + fVar36 * fVar49 + fVar47 * fVar38 + fVar46 * fVar22;
    uStack_120._0_4_ = fVar31 * fVar50 + fVar36 * fVar41 + fVar47 * fVar24 + fVar46 * fVar26;
    uStack_120._4_4_ =
         fVar31 * fVar33 + fVar36 * fVar33 + fVar47 * fVar33 + fVar46 * fRam000000014685450c;
    local_118._0_4_ = fVar39 * fVar35 + fVar48 * fVar21 + fVar27 * fVar51 + fVar46 * fVar5;
    local_118._4_4_ = fVar39 * fVar25 + fVar48 * fVar49 + fVar27 * fVar38 + fVar46 * fVar22;
    uStack_110._0_4_ = fVar39 * fVar50 + fVar48 * fVar41 + fVar27 * fVar24 + fVar46 * fVar26;
    uStack_110._4_4_ =
         fVar39 * fVar33 + fVar48 * fVar33 + fVar27 * fVar33 + fVar46 * fRam000000014685450c;
    local_108 = fVar40 * fVar35 + fVar43 * fVar21 + fVar37 * fVar51 + fRam000000014685450c * fVar5;
    fStack_104 = fVar40 * fVar25 + fVar43 * fVar49 + fVar37 * fVar38 + fRam000000014685450c * fVar22
    ;
    fStack_100 = fVar40 * fVar50 + fVar43 * fVar41 + fVar37 * fVar24 + fRam000000014685450c * fVar26
    ;
    fStack_fc = fVar40 * fVar33 + fVar43 * fVar33 + fVar37 * fVar33 +
                fRam000000014685450c * fRam000000014685450c;
    FMatrix::RemoveScaling(&local_138);
    fVar37 = (float)(-(uint)(_DAT_146854540 <= fVar18 * fVar28) & (_DAT_146854530 ^ (uint)fVar44) ^
                    _DAT_146854530);
    fVar40 = (float)(-(uint)(fRam0000000146854544 <= fVar19 * fVar32) &
                     (uRam0000000146854534 ^ (uint)fVar6) ^ uRam0000000146854534);
    fVar43 = (float)(-(uint)(fRam0000000146854548 <= fVar20 * fVar30) &
                     (uRam0000000146854538 ^ (uint)fVar7) ^ uRam0000000146854538);
    local_138 = CONCAT44(local_138._4_4_ * fVar37,(float)local_138 * fVar37);
    uStack_130 = CONCAT44(uStack_130._4_4_,(float)uStack_130 * fVar37);
    uStack_120 = CONCAT44(uStack_120._4_4_,(float)uStack_120 * fVar40);
    uStack_110 = CONCAT44(uStack_110._4_4_,(float)uStack_110 * fVar43);
    local_128 = CONCAT44(local_128._4_4_ * fVar40,(float)local_128 * fVar40);
    local_118 = CONCAT44(local_118._4_4_ * fVar43,(float)local_118 * fVar43);
    FQuat::FQuat(&local_148,&local_138);
    auVar23._0_4_ = local_148 * local_148 + fStack_140 * fStack_140;
    auVar23._4_4_ = fStack_144 * fStack_144 + fStack_13c * fStack_13c;
    auVar23._8_4_ = fStack_140 * fStack_140 + local_148 * local_148;
    auVar23._12_4_ = fStack_13c * fStack_13c + fStack_144 * fStack_144;
    fVar29 = auVar23._4_4_ + auVar23._0_4_;
    fVar25 = auVar23._8_4_ + auVar23._4_4_;
    fVar31 = auVar23._12_4_ + auVar23._8_4_;
    fVar44 = auVar23._0_4_ + auVar23._12_4_;
    auVar3._4_4_ = fVar25;
    auVar3._0_4_ = fVar29;
    auVar3._8_4_ = fVar31;
    auVar3._12_4_ = fVar44;
    auVar16 = rsqrtps(auVar23,auVar3);
    fVar37 = auVar16._0_4_;
    fVar40 = auVar16._4_4_;
    fVar43 = auVar16._8_4_;
    fVar21 = auVar16._12_4_;
    fVar37 = (_DAT_146854520 - fVar37 * fVar37 * fVar29 * _DAT_146854520) * fVar37 + fVar37;
    fVar40 = (fRam0000000146854524 - fVar40 * fVar40 * fVar25 * fRam0000000146854524) * fVar40 +
             fVar40;
    fVar43 = (fRam0000000146854528 - fVar43 * fVar43 * fVar31 * fRam0000000146854528) * fVar43 +
             fVar43;
    fVar21 = (fRam000000014685452c - fVar21 * fVar21 * fVar44 * fRam000000014685452c) * fVar21 +
             fVar21;
    auVar16._4_4_ = fStack_104;
    auVar16._0_4_ = local_108;
    auVar16._8_4_ = fStack_100;
    fVar37 = (float)(((uint)(((_DAT_146854520 - fVar37 * fVar37 * fVar29 * _DAT_146854520) * fVar37
                             + fVar37) * local_148) ^ _DAT_146854510) & -(uint)(1e-08 <= fVar29) ^
                    _DAT_146854510);
    fVar40 = (float)(((uint)(((fRam0000000146854524 -
                              fVar40 * fVar40 * fVar25 * fRam0000000146854524) * fVar40 + fVar40) *
                            fStack_144) ^ uRam0000000146854514) & -(uint)(1e-08 <= fVar25) ^
                    uRam0000000146854514);
    fVar43 = (float)(((uint)(((fRam0000000146854528 -
                              fVar43 * fVar43 * fVar31 * fRam0000000146854528) * fVar43 + fVar43) *
                            fStack_140) ^ uRam0000000146854518) & -(uint)(1e-08 <= fVar31) ^
                    uRam0000000146854518);
    fVar21 = (float)(((uint)(((fRam000000014685452c -
                              fVar21 * fVar21 * fVar44 * fRam000000014685452c) * fVar21 + fVar21) *
                            fStack_13c) ^ uRam000000014685451c) & -(uint)(1e-08 <= fVar44) ^
                    uRam000000014685451c);
    param_2[8] = fVar18 * fVar28;
    param_2[9] = fVar19 * fVar32;
    param_2[10] = fVar20 * fVar30;
    param_2[0xb] = fVar2 * 0.0;
    auVar16._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 4) = auVar16;
    *param_2 = fVar37;
    param_2[1] = fVar40;
    param_2[2] = fVar43;
    param_2[3] = fVar21;
  }
  return param_2;
}



// FUNCTION 1405c7350 FUN_1405c7350 body=103 status=ok
// SIG undefined FUN_1405c7350(void)

float FUN_1405c7350(longlong param_1)

{
  BOOL BVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  }
  if (*(char *)(param_1 + 0x220) == '\0') {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = (undefined4)*(undefined8 *)(param_1 + 0x218);
    uVar3 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x218) >> 0x20);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  return (float)(double)CONCAT44(uVar3,uVar2);
}



// FUNCTION 1405c73d0 FUN_1405c73d0 body=104 status=ok
// SIG undefined FUN_1405c73d0(void)

void FUN_1405c73d0(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *in_stack_00000028;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    iVar2 = (int)in_stack_00000028[1];
    *(int *)(in_stack_00000028 + 1) = iVar2 + 1;
    if (*(int *)((longlong)in_stack_00000028 + 0xc) < iVar2 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(in_stack_00000028,iVar2);
    }
    puVar1 = (undefined8 *)(*in_stack_00000028 + (longlong)iVar2 * 0xc);
    *puVar1 = *puVar3;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar3 + 1);
  }
  return;
}



// FUNCTION 1405c7440 FUN_1405c7440 body=175 status=ok
// SIG undefined FUN_1405c7440(void)

float FUN_1405c7440(void)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  plVar1 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  if (lVar2 == 0) {
    return 1.0;
  }
  fVar4 = *(float *)(lVar2 + 0x48);
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    LOCK();
    fVar3 = *(float *)(DAT_1468536c8 + 0x250);
    if (fVar3 == 0.0) {
      *(float *)(DAT_1468536c8 + 0x250) = 0.0;
      fVar3 = 0.0;
    }
    UNLOCK();
    fVar3 = fVar3 - *(float *)(lVar2 + 0x4c);
    if (0.0 < fVar3) {
      fVar3 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar2 + 0x50),fVar3);
      fVar4 = fVar4 * fVar3;
    }
  }
  return fVar4;
}



// FUNCTION 1405c74f0 FUN_1405c74f0 body=831 status=ok
// SIG undefined FUN_1405c74f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1405c74f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  longlong *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_148 [32];
  uint local_128;
  uint uStack_124;
  undefined1 *puStack_120;
  int local_118;
  int iStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  uint uStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  uint uStack_d8;
  int iStack_d4;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  uint uStack_b0;
  int iStack_ac;
  undefined8 uStack_a8;
  longlong local_98 [2];
  undefined1 local_88 [16];
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  puVar6 = (undefined1 *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar11 = *(longlong **)(param_1 + 0x4a0);
  local_98[0] = 0;
  local_98[1] = 0;
  local_78 = 0;
  plVar1 = plVar11 + *(int *)(param_1 + 0x4a8);
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  iVar10 = 0;
  if (plVar11 != plVar1) {
    do {
      FUN_14058f880(&local_108,*plVar11 + 0x378);
      if (local_108 != 0) {
        puVar7 = *(undefined8 **)(local_108 + 0x110);
        if (*(undefined8 **)(local_108 + 0x110) == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)(local_108 + 0x100);
        }
        puVar8 = (undefined1 *)((longlong)*(int *)(local_108 + 0x118) & 0x1fffffffffffffff);
        if (puVar7 + *(int *)(local_108 + 0x118) < puVar7) {
          puVar8 = puVar6;
        }
        puVar9 = puVar6;
        if (puVar8 != (undefined1 *)0x0) {
          do {
            local_100 = *puVar7;
            FUN_14058c5a0(local_98,local_f8,&local_100,0);
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
          } while (puVar9 != puVar8);
        }
        if (local_108 != 0) {
          FUN_1405a53f0();
          local_108 = 0;
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
    iVar10 = (int)local_70;
  }
  puStack_120 = local_88;
  local_128 = 0;
  uStack_124 = 1;
  iStack_114 = 0;
  uStack_110 = 0;
  if (iVar10 != 0) {
    puVar8 = local_88;
    if (local_78 != 0) {
      puVar8 = puVar6;
    }
    uVar2 = *(uint *)((ulonglong)puVar8 | local_78);
    puVar9 = puVar6;
    while (uVar2 == 0) {
      iVar5 = (int)puVar6;
      uStack_110 = (int)puVar9 + 0x20;
      puVar9 = (undefined1 *)(ulonglong)uStack_110;
      local_128 = iVar5 + 1;
      puVar6 = (undefined1 *)(ulonglong)local_128;
      iStack_114 = iVar10;
      if ((int)((iVar10 + -1 >> 0x1f & 0x1fU) + iVar10 + -1) >> 5 <= iVar5) goto LAB_1405c76fa;
      uVar2 = ((uint *)((ulonglong)puVar8 | local_78))[(longlong)iVar5 + 1];
    }
    uStack_124 = -uVar2 & uVar2;
    iVar5 = 0x1f;
    if (uStack_124 != 0) {
      for (; uStack_124 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_124 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    iStack_114 = (uStack_110 - iVar5) + 0x1f;
    if (iVar10 < iStack_114) {
      iStack_114 = iVar10;
    }
  }
LAB_1405c76fa:
  uStack_d8 = 0xffffffff;
  iStack_d4 = iStack_114;
  local_d0 = CONCAT44(uStack_10c,uStack_110);
  local_c8 = local_98;
  uStack_c0 = CONCAT44(uStack_124,local_128);
  local_118 = -1 << ((byte)iVar10 & 0x1f);
  uStack_e8 = local_128;
  uStack_e4 = uStack_124;
  iStack_114 = iVar10;
  local_e0 = puStack_120;
  puStack_b8 = puStack_120;
  uStack_a8 = local_d0;
  local_f0 = local_c8;
  uStack_b0 = uStack_d8;
  iStack_ac = iStack_d4;
  while (((iStack_d4 != iVar10 || (local_e0 != local_88)) || (local_f0 != local_98))) {
    iVar5 = (int)param_2[1];
    lVar4 = *(longlong *)(*local_f0 + (longlong)iStack_d4 * 0x10);
    local_100 = *(undefined8 *)(lVar4 + 0x2e0);
    uVar12 = (undefined4)local_100;
    uVar13 = (undefined4)((ulonglong)local_100 >> 0x20);
    uVar3 = *(undefined4 *)(lVar4 + 0x2e8);
    *(int *)(param_2 + 1) = iVar5 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
      uVar12 = (undefined4)local_100;
      uVar13 = (undefined4)((ulonglong)local_100 >> 0x20);
    }
    lVar4 = *param_2;
    *(ulonglong *)(lVar4 + (longlong)iVar5 * 0xc) = CONCAT44(uVar13,uVar12);
    *(undefined4 *)(lVar4 + 8 + (longlong)iVar5 * 0xc) = uVar3;
    uStack_d8 = uStack_d8 & ~uStack_e4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_e8);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_98);
  return param_2;
}



// FUNCTION 1405c7830 FUN_1405c7830 body=926 status=ok
// SIG undefined FUN_1405c7830(void)

undefined8 FUN_1405c7830(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  undefined1 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong local_res18;
  longlong local_res20;
  undefined8 local_98;
  float local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_78;
  float local_70;
  
  lVar10 = 0;
  local_98 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  local_90 = DAT_1468b5d98;
  local_88 = 0x42b40000;
  local_84 = 0;
  if (*(char *)(param_3 + 0x40) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x118);
    if (lVar1 != 0) {
      uVar5 = UPathFollowingAgentInterface::GetPrivateStaticClass();
      plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar5);
      if (plVar8 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar8 + 0x20))(plVar8);
        plVar7 = (longlong *)(**(code **)(*plVar8 + 0x28))(plVar8,uVar3);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,&local_res20,0);
          local_res18 = 0;
          if (local_res20 != 0) {
            puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x428))(plVar7,&local_78);
            local_98 = *puVar6;
            local_90 = *(float *)(puVar6 + 1);
          }
        }
      }
    }
  }
  else {
    local_98 = *(undefined8 *)(param_3 + 0x28);
    local_90 = *(float *)(param_3 + 0x30);
  }
  lVar1 = DAT_1468536c8;
  if (((((ABS((float)local_98) <= 0.0001) && (ABS(local_98._4_4_) <= 0.0001)) &&
       (ABS(local_90) <= 0.0001)) && (*(char *)(param_3 + 0x42) == '\0')) ||
     (((DAT_1468536c6 != '\0' || (DAT_1468536c5 == '\0')) || (DAT_1468536c8 == 0)))) {
    FUN_14058f8d0(param_2,0);
    return param_2;
  }
  plVar8 = *(longlong **)(param_1 + 0x118);
  if (plVar8 == (longlong *)0x0) goto LAB_1405c7b1d;
  plVar7 = (longlong *)(**(code **)(*plVar8 + 0x670))(plVar8);
  local_res20 = FUN_140599e90(plVar8);
  plVar8 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
  lVar11 = plVar8[0x1f];
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar11 = plVar8[0x1f];
    if (lVar11 != 0) goto LAB_1405c79ef;
  }
  else {
LAB_1405c79ef:
    lVar10 = *(longlong *)(lVar11 + 0x28);
  }
  lVar11 = local_res20;
  if (((local_res20 != 0) && (lVar10 != 0)) &&
     ((plVar7 != (longlong *)0x0 &&
      (((cVar4 = (**(code **)(*plVar7 + 0x820))(plVar7), cVar4 != '\0' &&
        ((*(uint *)((longlong)plVar7 + 0x4cc) >> 1 & 1) != 0)) &&
       (cVar4 = (**(code **)(*plVar7 + 0x768))(plVar7), cVar4 != '\0')))))) {
    local_78 = *(undefined8 *)(lVar11 + 0x2e0);
    local_70 = *(float *)(lVar11 + 0x2e8);
    fVar13 = (float)local_98 - (float)local_78;
    fVar14 = local_98._4_4_ - (float)((ulonglong)local_78 >> 0x20);
    fVar12 = local_90 - local_70;
    pfVar9 = (float *)FUN_142369f10(lVar11,&local_78);
    fVar2 = local_90;
    fVar12 = fVar14 * pfVar9[1] + fVar13 * *pfVar9 + fVar12 * pfVar9[2];
    local_90 = fVar2;
    if (fVar12 < *(float *)(lVar10 + 400)) {
      fVar12 = *(float *)(lVar10 + 400) - fVar12;
      pfVar9 = (float *)FUN_142369f10(lVar11,&local_78);
      local_98 = CONCAT44(fVar12 * pfVar9[1] + local_98._4_4_,fVar12 * *pfVar9 + (float)local_98);
      local_90 = fVar2;
    }
  }
LAB_1405c7b1d:
  lVar10 = *(longlong *)(param_1 + 0x120);
  if (lVar10 == 0) {
    lVar10 = FUN_1423407b0(param_1);
  }
  FUN_14059ce50(lVar1 + 8,&local_res18,lVar10,0);
  if (local_res18 != 0) {
    FUN_1405aab70(local_res18,&local_98,&local_88,0,0x3f800000);
    FUN_1405c54b0(param_1,&local_res18,param_3,1);
    if (*(char *)(param_3 + 0x42) != '\0') {
      *(undefined1 *)(local_res18 + 0x62) = 0;
    }
  }
  FIoRequest::operator=(param_2,&local_res18);
  if (local_res18 != 0) {
    FUN_1405a53f0();
  }
  return param_2;
}



// FUNCTION 1405c7bd0 FUN_1405c7bd0 body=332 status=ok
// SIG undefined FUN_1405c7bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1405c7bd0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_58;
  undefined1 local_50 [24];
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
  
  lVar1 = DAT_1468536c8;
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0();
    }
    FUN_14059ce50(lVar1 + 8,&local_58,lVar2,0);
    if (local_58 != 0) {
      FUN_1405c54b0(param_1,&local_58,param_3,1);
      if (*(char *)(param_3 + 0x42) != '\0') {
        *(undefined1 *)(local_58 + 0x62) = 0;
      }
      local_38 = _DAT_1468b5b70;
      uStack_30 = uRam00000001468b5b78;
      local_18 = _DAT_1468b5b90;
      uStack_14 = uRam00000001468b5b94;
      uStack_10 = uRam00000001468b5b98;
      uStack_c = uRam00000001468b5b9c;
      local_28 = _DAT_1468b5b80;
      uStack_24 = uRam00000001468b5b84;
      uStack_20 = uRam00000001468b5b88;
      uStack_1c = uRam00000001468b5b8c;
      uVar3 = FUN_14058f8f0(local_50,&local_58);
      FUN_1405a9a30(uVar3,param_5,param_4,&local_38);
      uVar3 = FUN_14058f880(local_50,&local_58);
      FUN_14059e7e0(uVar3);
    }
    FIoRequest::operator=(param_2,&local_58);
    if (local_58 != 0) {
      FUN_1405a53f0();
    }
  }
  else {
    FUN_14058f8d0(param_2,0);
  }
  return param_2;
}



// FUNCTION 1405c7d40 FUN_1405c7d40 body=134 status=ok
// SIG undefined FUN_1405c7d40(void)

float FUN_1405c7d40(longlong param_1,float param_2)

{
  float fVar1;
  BOOL BVar2;
  double dVar3;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  }
  dVar3 = 0.0;
  if (*(char *)(param_1 + 0x220) != '\0') {
    dVar3 = ((double)param_2 - *(double *)(param_1 + 0x218)) / *(double *)(param_1 + 0x210);
  }
  fVar1 = *(float *)(param_1 + 0x184);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  return (float)((double)fVar1 + dVar3);
}



// FUNCTION 1405c7dd0 FUN_1405c7dd0 body=163 status=ok
// SIG undefined FUN_1405c7dd0(void)

void FUN_1405c7dd0(longlong param_1,undefined8 param_2,float *param_3)

{
  longlong local_res8 [4];
  float local_38;
  float local_34;
  float local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  local_res8[0] = *(longlong *)(param_1 + 8);
  if ((local_res8[0] != 0) &&
     (0.0001 < *(float *)(param_1 + 0x2c) || *(float *)(param_1 + 0x2c) == 0.0001)) {
    local_20 = *(undefined4 *)(param_1 + 0x18);
    local_28 = *(undefined8 *)(param_1 + 0x10);
    local_34 = param_3[1] - *(float *)(param_1 + 0x14);
    local_1c = *(undefined8 *)(param_1 + 0x1c);
    local_38 = *param_3 - *(float *)(param_1 + 0x10);
    local_14 = *(undefined4 *)(param_1 + 0x24);
    local_30 = param_3[2] - *(float *)(param_1 + 0x18);
    local_10 = 0;
    FUN_1405c7fb0(local_30,local_res8,param_2,&local_38,&local_28);
  }
  return;
}



// FUNCTION 1405c7e80 FUN_1405c7e80 body=301 status=ok
// SIG undefined FUN_1405c7e80(void)

void FUN_1405c7e80(longlong param_1,longlong *param_2,float *param_3)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong local_res8;
  float local_38;
  float local_34;
  float local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  
  local_res8 = *(longlong *)(param_1 + 8);
  if ((local_res8 != 0) &&
     (0.0001 < *(float *)(param_1 + 0x2c) || *(float *)(param_1 + 0x2c) == 0.0001)) {
    local_20 = *(undefined4 *)(param_1 + 0x18);
    local_28 = *(undefined8 *)(param_1 + 0x10);
    local_34 = param_3[1] - *(float *)(param_1 + 0x14);
    local_1c = *(undefined8 *)(param_1 + 0x1c);
    local_38 = *param_3 - *(float *)(param_1 + 0x10);
    local_14 = *(undefined4 *)(param_1 + 0x24);
    local_30 = param_3[2] - *(float *)(param_1 + 0x18);
    local_10 = 0;
    FUN_1405c8440(local_30,&local_res8,param_2,&local_38,&local_28);
    lVar3 = *param_2;
    lVar1 = lVar3 + (longlong)(int)param_2[1] * 0x18;
    if (lVar3 != lVar1) {
      pfVar2 = (float *)(lVar3 + 4);
      do {
        if (((ABS(*pfVar2 - *param_3) <= 0.1) && (ABS(pfVar2[1] - param_3[1]) <= 0.1)) &&
           (ABS(pfVar2[2] - param_3[2]) <= 0.1)) {
          *(undefined8 *)pfVar2 = *(undefined8 *)param_3;
          pfVar2[2] = param_3[2];
        }
        lVar3 = lVar3 + 0x18;
        pfVar2 = pfVar2 + 6;
      } while (lVar3 != lVar1);
    }
  }
  return;
}



// FUNCTION 1405c7fb0 FUN_1405c7fb0 body=1165 status=ok
// SIG undefined FUN_1405c7fb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405c7fb0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  float *pfVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_2c8 [32];
  undefined8 *local_2a8;
  undefined1 local_2a0;
  uint local_298;
  byte local_288;
  uint *local_280;
  int local_278;
  float local_268;
  float fStack_264;
  float local_260;
  undefined8 local_258;
  float local_240;
  float local_230;
  float local_220;
  float local_210;
  float local_204;
  float local_1f8 [24];
  undefined1 local_198 [12];
  undefined8 local_18c [26];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  pbVar8 = (byte *)*param_2;
  puVar18 = (uint *)(pbVar8 + 1);
  if ((char)*pbVar8 < '\0') {
    uVar12 = *puVar18;
    puVar18 = (uint *)(pbVar8 + 5);
  }
  else {
    uVar12 = (uint)*pbVar8;
  }
  iVar14 = 0;
  uVar19 = 0;
  *param_2 = pbVar8 + (int)uVar12;
  bVar7 = (byte)*puVar18;
  local_280 = (uint *)((longlong)puVar18 + 1);
  if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
    bVar13 = *(byte *)((longlong)puVar18 + 1);
    if ((char)bVar13 < '\0') {
      local_280 = (uint *)((longlong)puVar18 + 6);
      uVar19 = *(uint *)((longlong)puVar18 + 2);
    }
    else {
      uVar19 = (uint)bVar13;
      local_280 = (uint *)((longlong)puVar18 + 2);
    }
  }
  local_258 = param_3;
  if (bVar7 == 0) {
    local_2a0 = 0;
    local_2a8 = param_5;
    local_298 = uVar19;
    FUN_1405c30e0(param_1,local_280,((longlong)(pbVar8 + (int)uVar12) - (longlong)local_280) / 2,
                  param_3);
  }
  else {
    pfVar15 = local_1f8;
    puVar17 = local_18c;
    local_288 = 0;
    uVar12 = 0;
    fVar22 = *(float *)((longlong)param_5 + 0x14) * 0.5;
    local_278 = -1;
    local_268 = *(float *)((longlong)param_5 + 0xc) * 0.5;
    fStack_264 = *(float *)(param_5 + 2) * 0.5;
    local_260 = fVar22;
    do {
      bVar13 = '\x01' << ((byte)uVar12 & 0x1f);
      if ((bVar7 & bVar13) != 0) {
        uVar3 = *(undefined8 *)((longlong)param_5 + 0xc);
        local_260 = *(float *)((longlong)param_5 + 0x14);
        uVar4 = *param_4;
        local_240 = *(float *)(param_4 + 1);
        *puVar17 = CONCAT44(fStack_264,local_268);
        *(float *)(puVar17 + 1) = fVar22;
        iVar9 = 1;
        if ((uVar12 & 2) != 0) {
          iVar9 = local_278;
        }
        iVar10 = 1;
        if ((uVar12 & 4) != 0) {
          iVar10 = local_278;
        }
        fVar21 = (float)(int)((~uVar12 & 1) * 2 + -1) * 0.25;
        fVar1 = *(float *)(param_5 + 2);
        local_210 = (float)iVar10 * 0.25 * local_260 + local_240;
        uVar5 = *param_5;
        uVar6 = *(undefined8 *)((longlong)param_5 + 0xc);
        *(ulonglong *)pfVar15 =
             CONCAT44((float)iVar9 * 0.25 * (float)((ulonglong)uVar3 >> 0x20) +
                      (float)((ulonglong)uVar4 >> 0x20),fVar21 * (float)uVar3 + (float)uVar4);
        pfVar15[2] = local_210;
        local_230 = *(float *)((longlong)param_5 + 0x14);
        local_220 = *(float *)(param_5 + 1);
        fVar2 = *pfVar15;
        local_204 = local_220 - (float)iVar10 * 0.25 * local_230;
        *(ulonglong *)((longlong)puVar17 + -0xc) =
             CONCAT44(*(float *)((longlong)param_5 + 4) - (float)iVar9 * 0.25 * fVar1,
                      (float)uVar5 - (float)uVar6 * fVar21);
        fVar1 = pfVar15[2];
        fVar21 = pfVar15[1];
        *(float *)((longlong)puVar17 + -4) = local_204;
        *(uint *)((longlong)puVar17 + 0xc) = *(int *)(param_5 + 3) << 3 | uVar12;
        fVar20 = fStack_264;
        if (fStack_264 <= local_268) {
          fVar20 = local_268;
        }
        if (fVar20 <= fVar22) {
          fVar20 = fVar22;
        }
        if (fVar20 <= SQRT(fVar2 * fVar2 + fVar21 * fVar21 + fVar1 * fVar1) *
                      *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28)) {
          bVar13 = 0;
        }
        local_288 = local_288 | bVar13;
      }
      uVar12 = uVar12 + 1;
      puVar17 = (undefined8 *)((longlong)puVar17 + 0x1c);
      pfVar15 = pfVar15 + 3;
    } while ((int)uVar12 < 8);
    if (local_288 == 0) {
      local_2a0 = 0;
      local_2a8 = param_5;
      local_298 = uVar19;
      FUN_1405c30e0(param_1,local_280,1,param_3);
    }
    else {
      puVar18 = (uint *)((longlong)local_280 + 2);
      puVar16 = local_198;
      pfVar15 = local_1f8;
      local_280 = puVar18;
      do {
        bVar13 = '\x01' << ((byte)iVar14 & 0x1f);
        if ((bVar7 & bVar13) != 0) {
          local_2a8 = (undefined8 *)puVar16;
          if ((local_288 & bVar13) == 0) {
            uVar12 = (uint)(byte)*puVar18;
            if ((char)(byte)*puVar18 < '\0') {
              uVar12 = *(uint *)((longlong)puVar18 + 1);
            }
            local_280 = (uint *)((longlong)puVar18 + (longlong)(int)uVar12);
            if (*(byte *)((longlong)puVar18 + 1) == 0) {
              uVar11 = (undefined4)(((longlong)local_280 - ((longlong)puVar18 + 2)) / 2);
            }
            else {
              uVar11 = 1;
            }
            local_2a0 = 1;
            local_298 = uVar19;
            FUN_1405c30e0(param_1,(byte *)((longlong)puVar18 + 2),uVar11,param_3);
            puVar18 = local_280;
          }
          else {
            FUN_1405c7fb0(param_1,&local_280,param_3,pfVar15);
            puVar18 = local_280;
          }
        }
        iVar14 = iVar14 + 1;
        pfVar15 = pfVar15 + 3;
        puVar16 = puVar16 + 0x1c;
      } while (iVar14 < 8);
    }
  }
  return;
}



// FUNCTION 1405c8440 FUN_1405c8440 body=1178 status=ok
// SIG undefined FUN_1405c8440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405c8440(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  int iVar15;
  undefined1 *puVar16;
  float *pfVar17;
  byte bVar18;
  uint uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_2c8 [32];
  undefined1 *local_2a8;
  byte local_298;
  byte local_297;
  uint local_294;
  byte *local_290;
  uint local_288;
  float local_278;
  float fStack_274;
  float local_270;
  undefined8 *local_268;
  float local_260;
  undefined8 local_258;
  float local_240;
  float local_230;
  float local_220;
  float local_214;
  float local_208 [24];
  undefined1 local_1a8 [12];
  undefined8 local_19c [26];
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  pbVar14 = (byte *)*param_2;
  local_268 = param_5;
  puVar12 = (uint *)(pbVar14 + 1);
  if ((char)*pbVar14 < '\0') {
    uVar19 = *puVar12;
    puVar12 = (uint *)(pbVar14 + 5);
  }
  else {
    uVar19 = (uint)*pbVar14;
  }
  iVar15 = 0;
  *param_2 = pbVar14 + (int)uVar19;
  bVar7 = (byte)*puVar12;
  local_297 = 0;
  bVar20 = *(char *)(param_1 + 0x30) != '\0';
  pbVar14 = (byte *)((longlong)puVar12 + 1);
  if (bVar20) {
    pbVar14 = (byte *)((longlong)puVar12 + 2);
    local_297 = *(byte *)((longlong)puVar12 + 1);
  }
  local_294 = (uint)bVar20;
  local_288 = (uint)bVar20;
  local_297 = local_297 & 1;
  local_290 = pbVar14;
  local_258 = param_3;
  if (local_297 != 0) {
    local_288 = *(int *)(param_1 + 0x40);
    local_290 = pbVar14 + 0x10;
    *(uint *)(param_1 + 0x40) = local_288 + 1;
    if (*(int *)(param_1 + 0x44) < (int)(local_288 + 1)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x38,local_288);
    }
    puVar13 = (undefined8 *)((longlong)(int)local_288 * 0x10 + *(longlong *)(param_1 + 0x38));
    *puVar13 = *(undefined8 *)pbVar14;
    *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(pbVar14 + 8);
    *(undefined4 *)((longlong)puVar13 + 0xc) = *(undefined4 *)(pbVar14 + 0xc);
    local_288 = local_294 + 0x10;
  }
  uVar8 = local_258;
  local_288 = local_288 + 2;
  if (bVar7 == 0) {
    FUN_1405c2d90(param_1,param_3,param_4,local_268);
  }
  else {
    pfVar17 = local_208;
    puVar13 = local_19c;
    local_298 = 0;
    uVar11 = 0;
    fVar22 = *(float *)((longlong)local_268 + 0x14) * 0.5;
    local_294 = -1;
    local_278 = *(float *)((longlong)local_268 + 0xc) * 0.5;
    fStack_274 = *(float *)(local_268 + 2) * 0.5;
    local_270 = fVar22;
    do {
      bVar18 = '\x01' << ((byte)uVar11 & 0x1f);
      if ((bVar7 & bVar18) != 0) {
        uVar4 = *(undefined8 *)((longlong)local_268 + 0xc);
        local_270 = *(float *)((longlong)local_268 + 0x14);
        uVar5 = *param_4;
        local_260 = *(float *)(param_4 + 1);
        *puVar13 = CONCAT44(fStack_274,local_278);
        *(float *)(puVar13 + 1) = fVar22;
        uVar9 = 1;
        if ((uVar11 & 2) != 0) {
          uVar9 = local_294;
        }
        uVar10 = 1;
        if ((uVar11 & 4) != 0) {
          uVar10 = local_294;
        }
        fVar21 = (float)(int)((~uVar11 & 1) * 2 + -1) * 0.25;
        local_220 = (float)(int)uVar10 * 0.25 * local_270 + local_260;
        uVar6 = *(undefined8 *)((longlong)local_268 + 0xc);
        fVar1 = *(float *)((longlong)local_268 + 4);
        *(ulonglong *)pfVar17 =
             CONCAT44((float)(int)uVar9 * 0.25 * (float)((ulonglong)uVar4 >> 0x20) +
                      (float)((ulonglong)uVar5 >> 0x20),fVar21 * (float)uVar4 + (float)uVar5);
        uVar4 = *local_268;
        pfVar17[2] = local_220;
        local_240 = *(float *)((longlong)local_268 + 0x14);
        local_230 = *(float *)(local_268 + 1);
        local_214 = local_230 - (float)(int)uVar10 * 0.25 * local_240;
        fVar2 = *pfVar17;
        fVar3 = pfVar17[1];
        *(ulonglong *)((longlong)puVar13 + -0xc) =
             CONCAT44(fVar1 - (float)(int)uVar9 * 0.25 * (float)((ulonglong)uVar6 >> 0x20),
                      (float)uVar4 - fVar21 * (float)uVar6);
        fVar1 = pfVar17[2];
        *(float *)((longlong)puVar13 + -4) = local_214;
        *(uint *)((longlong)puVar13 + 0xc) = *(int *)(local_268 + 3) << 3 | uVar11;
        fVar21 = fStack_274;
        if (fStack_274 <= local_278) {
          fVar21 = local_278;
        }
        if (fVar21 <= fVar22) {
          fVar21 = fVar22;
        }
        if (fVar21 <= SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) *
                      *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x28)) {
          bVar18 = 0;
        }
        local_298 = local_298 | bVar18;
      }
      uVar11 = uVar11 + 1;
      puVar13 = (undefined8 *)((longlong)puVar13 + 0x1c);
      pfVar17 = pfVar17 + 3;
    } while ((int)uVar11 < 8);
    puVar16 = local_1a8;
    pfVar17 = local_208;
    pbVar14 = local_290;
    do {
      bVar18 = '\x01' << ((byte)iVar15 & 0x1f);
      if ((bVar7 & bVar18) != 0) {
        if (uVar19 != local_288) {
          if ((local_298 & bVar18) != 0) {
            local_2a8 = puVar16;
            FUN_1405c8440(param_1,&local_290,uVar8,pfVar17);
            pbVar14 = local_290;
            goto LAB_1405c8863;
          }
          uVar11 = (uint)*pbVar14;
          if ((char)*pbVar14 < '\0') {
            uVar11 = *(uint *)(pbVar14 + 1);
          }
          local_290 = pbVar14 + (int)uVar11;
        }
        FUN_1405c2d90(param_1,uVar8,pfVar17,puVar16);
        pbVar14 = local_290;
      }
LAB_1405c8863:
      iVar15 = iVar15 + 1;
      puVar16 = puVar16 + 0x1c;
      pfVar17 = pfVar17 + 3;
    } while (iVar15 < 8);
  }
  if (local_297 != 0) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  }
  return;
}



// FUNCTION 1405c8900 IsLocalizedResource body=11 status=ok
// SIG undefined IsLocalizedResource(void)

bool USoundWave::IsLocalizedResource(longlong param_1)

{
  return 0 < *(int *)(param_1 + 0x98);
}



// FUNCTION 1405c8920 FUN_1405c8920 body=179 status=ok
// SIG undefined FUN_1405c8920(void)

void FUN_1405c8920(longlong param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar1 < iVar2) {
    *(int *)(param_1 + 0x78) = iVar2;
    if (*(int *)(param_1 + 0x7c) < iVar2) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x70);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 4),0,
               (longlong)(iVar2 - iVar1) << 2);
  }
  else if ((iVar2 < iVar1) && (iVar2 != iVar1)) {
    *(int *)(param_1 + 0x78) = iVar2;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(param_1 + 0x70);
  }
  puVar4 = *(undefined4 **)(param_1 + 0x70);
  uVar3 = (longlong)*(int *)(param_1 + 0x78) & 0x3fffffffffffffff;
  if (puVar4 + *(int *)(param_1 + 0x78) < puVar4) {
    uVar3 = 0;
  }
  if (uVar3 != 0) {
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = 0x3f800000;
      puVar4 = puVar4 + 1;
    }
  }
  *(float *)(param_1 + 0x80) = (float)*(int *)(param_1 + 0x38);
  return;
}



// FUNCTION 1405c89f0 FUN_1405c89f0 body=416 status=ok
// SIG undefined FUN_1405c89f0(void)

void FUN_1405c89f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = rand();
  fVar6 = *(float *)(param_1 + 0x28);
  if (*(float *)(param_1 + 0x2c) < fVar6) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (*(float *)(param_1 + 0x2c) - fVar6) * (float)iVar2 * 3.051851e-05 + fVar6;
  }
  do {
    do {
      iVar2 = rand();
      fVar7 = ((float)iVar2 * 3.051851e-05 + (float)iVar2 * 3.051851e-05) - 1.0;
      iVar2 = rand();
      fVar8 = ((float)iVar2 * 3.051851e-05 + (float)iVar2 * 3.051851e-05) - 1.0;
      iVar2 = rand();
      fVar5 = ((float)iVar2 * 3.051851e-05 + (float)iVar2 * 3.051851e-05) - 1.0;
      fVar4 = fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5;
    } while (1.0 < fVar4);
  } while (fVar4 < 0.0001);
  fVar4 = 1.0 / SQRT(fVar4);
  *(ulonglong *)(param_3 + 0x24) = CONCAT44(fVar8 * fVar4 * fVar6,fVar7 * fVar4 * fVar6);
  *(float *)(param_3 + 0x2c) = fVar5 * fVar4 * fVar6;
  cVar1 = FUN_14059ee90(param_3);
  if ((cVar1 != '\0') && (lVar3 = FUN_14059ae60(param_3,0), lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x240) = *(undefined8 *)(param_3 + 0x24);
    *(undefined4 *)(lVar3 + 0x248) = *(undefined4 *)(param_3 + 0x2c);
  }
  return;
}



// FUNCTION 1405c8b90 FUN_1405c8b90 body=423 status=ok
// SIG undefined FUN_1405c8b90(void)

void FUN_1405c8b90(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar2 = rand();
  fVar6 = *(float *)(param_1 + 0x28);
  if (*(float *)(param_1 + 0x2c) < fVar6) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (*(float *)(param_1 + 0x2c) - fVar6) * (float)iVar2 * 3.051851e-05 + fVar6;
  }
  do {
    do {
      iVar2 = rand();
      fVar7 = ((float)iVar2 * 3.051851e-05 + (float)iVar2 * 3.051851e-05) - 1.0;
      iVar2 = rand();
      fVar8 = ((float)iVar2 * 3.051851e-05 + (float)iVar2 * 3.051851e-05) - 1.0;
      iVar2 = rand();
      fVar5 = ((float)iVar2 * 3.051851e-05 + (float)iVar2 * 3.051851e-05) - 1.0;
      fVar4 = fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5;
    } while (1.0 < fVar4);
  } while (fVar4 < 0.0001);
  fVar4 = 1.0 / SQRT(fVar4);
  *(ulonglong *)(param_3 + 0x24) = CONCAT44(fVar8 * fVar4 * fVar6,fVar7 * fVar4 * fVar6);
  *(float *)(param_3 + 0x2c) = fVar5 * fVar4 * fVar6;
  cVar1 = FUN_14059ee90(param_3);
  if ((cVar1 != '\0') && (lVar3 = FUN_14059ae60(param_3,0), lVar3 != 0)) {
    *(undefined8 *)(lVar3 + 0x240) = *(undefined8 *)(param_3 + 0x24);
    *(undefined4 *)(lVar3 + 0x248) = *(undefined4 *)(param_3 + 0x2c);
  }
  *(undefined4 *)(param_3 + 0x30) = 0x47c35000;
  return;
}



// FUNCTION 1405c8d40 FUN_1405c8d40 body=426 status=ok
// SIG undefined FUN_1405c8d40(void)

undefined8 * FUN_1405c8d40(void)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  
  puVar4 = (undefined8 *)operator_new(0x30);
  lVar8 = 0;
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar1 = puVar4 + 1;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *puVar4 = &PTR_FUN_143fdd7f8;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar5 = (longlong *)FUN_1404cfca0();
  iVar2 = (int)plVar5[1];
  *(int *)(plVar5 + 1) = iVar2 + 1;
  if (*(int *)((longlong)plVar5 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar2);
  }
  *(undefined8 **)(*plVar5 + (longlong)iVar2 * 8) = puVar1;
  puVar4[2] = &PTR__scalar_deleting_destructor__143f73ca8;
  *(undefined1 *)(puVar4 + 3) = 0;
  if (DAT_1468c217e == '\0') {
    if (DAT_1469e6880 == 0) {
      uVar6 = GetTransientPackage();
      FUN_1417846f0(uVar6,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
      uVar7 = UGCObjectReferencer::GetPrivateStaticClass();
      DAT_1469e6880 = FUN_1417985e0(uVar7,uVar6,0,0,0,0,0,0,0);
      iVar2 = *(int *)(DAT_1469e6880 + 0xc);
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar9 = iVar2 >> 0x1f & 0xffff;
        uVar3 = iVar2 + uVar9;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                (longlong)(int)((uVar3 & 0xffff) - uVar9) * 0x18;
      }
      *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000000;
    }
    UGCObjectReferencer::AddObject(DAT_1469e6880,puVar4 + 2);
    *(undefined1 *)(puVar4 + 3) = 1;
  }
  *puVar4 = &PTR_FUN_143fdd838;
  *puVar1 = &PTR_StartProfileThreadUsage_143fdd878;
  puVar4[2] = &PTR_LAB_143fdd8c0;
  puVar4[5] = 0;
  return puVar4;
}



// FUNCTION 1405c8ef0 FUN_1405c8ef0 body=348 status=ok
// SIG undefined FUN_1405c8ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1405c8ef0(longlong param_1,float *param_2)

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
  undefined1 in_XMM4 [16];
  undefined1 auVar9 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar1 = *(longlong *)(param_1 + 0x538);
  fVar12 = _DAT_1468544b0 * *(float *)(lVar1 + 0x210);
  fVar13 = fRam00000001468544b4 * *(float *)(lVar1 + 0x214);
  fVar14 = fRam00000001468544b8 * *(float *)(lVar1 + 0x218);
  fVar15 = fRam00000001468544bc * *(float *)(lVar1 + 0x21c);
  auVar9 = *(undefined1 (*) [16])(lVar1 + 0x230);
  fVar7 = auVar9._0_4_;
  fVar4 = auVar9._4_4_;
  fVar2 = auVar9._8_4_;
  fVar16 = (float)((uint)(*param_2 - *(float *)(lVar1 + 0x220)) & _DAT_1468544c0);
  fVar17 = (float)((uint)(param_2[1] - *(float *)(lVar1 + 0x224)) & uRam00000001468544c4);
  fVar18 = (float)((uint)(param_2[2] - *(float *)(lVar1 + 0x228)) & uRam00000001468544c8);
  auVar9 = rcpps(in_XMM4,auVar9);
  fVar3 = fVar18 * fVar13 - fVar17 * fVar14;
  fVar5 = fVar16 * fVar14 - fVar18 * fVar12;
  fVar6 = fVar17 * fVar12 - fVar16 * fVar13;
  fVar8 = auVar9._0_4_;
  fVar10 = auVar9._4_4_;
  fVar11 = auVar9._8_4_;
  fVar3 = fVar3 + fVar3;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar7;
  fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar4;
  fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar2;
  fVar8 = (fVar8 + fVar8) - fVar8 * fVar8 * fVar7;
  fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar4;
  fVar11 = (fVar11 + fVar11) - fVar11 * fVar11 * fVar2;
  fVar7 = ABS((((fVar6 * fVar13 - fVar5 * fVar14) + fVar15 * fVar3 + fVar16) *
              (float)(-(uint)((float)((uint)fVar7 & _DAT_146854490) <= _DAT_1468544a0) & (uint)fVar8
                     ^ (uint)fVar8)) / (float)*(undefined8 *)(lVar1 + 0x710));
  fVar4 = ABS((((fVar3 * fVar14 - fVar6 * fVar12) + fVar15 * fVar5 + fVar17) *
              (float)(-(uint)((float)((uint)fVar4 & uRam0000000146854494) <= fRam00000001468544a4) &
                      (uint)fVar10 ^ (uint)fVar10)) /
              (float)((ulonglong)*(undefined8 *)(lVar1 + 0x710) >> 0x20));
  if (fVar7 <= fVar4) {
    fVar7 = fVar4;
  }
  fVar4 = ABS((((fVar5 * fVar12 - fVar3 * fVar13) + fVar15 * fVar6 + fVar18) *
              (float)(-(uint)((float)((uint)fVar2 & uRam0000000146854498) <= fRam00000001468544a8) &
                      (uint)fVar11 ^ (uint)fVar11)) / *(float *)(lVar1 + 0x718));
  if (fVar7 <= fVar4) {
    fVar7 = fVar4;
  }
  return CONCAT31((int3)((uint)*(float *)(lVar1 + 0x718) >> 8),fVar7 <= 1.0);
}



// FUNCTION 1405c90d0 FUN_1405c90d0 body=118 status=ok
// SIG undefined FUN_1405c90d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1405c90d0(longlong param_1,float *param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = 1;
  USplineComponent::FindTransformClosestToWorldLocation
            (*(undefined8 *)(param_1 + 0x538),local_48,param_2,1);
  return param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2] <= 10000.0;
}



// FUNCTION 1405c9160 FUN_1405c9160 body=237 status=ok
// SIG undefined FUN_1405c9160(void)

ulonglong FUN_1405c9160(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = DAT_1468536c8;
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    lVar2 = *(longlong *)(param_2 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_2);
    }
    lVar3 = FUN_14059b380(lVar3,lVar2,param_3,0);
    in_RAX = 0;
    if (lVar3 != 0) {
      fVar1 = *(float *)(lVar3 + 0x2e8);
      in_RAX = (ulonglong)(uint)fVar1;
      fVar4 = (float)*(undefined8 *)(lVar3 + 0x2e0) - *param_3;
      fVar5 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x2e0) >> 0x20) - param_3[1];
      fVar4 = fVar5 * fVar5 + fVar4 * fVar4 + (fVar1 - param_3[2]) * (fVar1 - param_3[2]);
      if ((*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) <= fVar4) &&
         (fVar4 < *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c))) {
        return CONCAT71((uint7)(uint3)((uint)fVar1 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1405c9250 FUN_1405c9250 body=446 status=ok
// SIG undefined FUN_1405c9250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1405c9250(longlong param_1,undefined8 param_2,float param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
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
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  fVar7 = _DAT_1468544b0 * *(float *)(lVar1 + 0x210);
  fVar8 = fRam00000001468544b4 * *(float *)(lVar1 + 0x214);
  fVar9 = fRam00000001468544b8 * *(float *)(lVar1 + 0x218);
  fVar10 = fRam00000001468544bc * *(float *)(lVar1 + 0x21c);
  fVar11 = (float)((uint)(*param_4 - *(float *)(lVar1 + 0x220)) & _DAT_1468544c0);
  fVar12 = (float)((uint)(param_4[1] - *(float *)(lVar1 + 0x224)) & uRam00000001468544c4);
  fVar13 = (float)((uint)(param_4[2] - *(float *)(lVar1 + 0x228)) & uRam00000001468544c8);
  fVar4 = fVar13 * fVar8 - fVar12 * fVar9;
  fVar5 = fVar11 * fVar9 - fVar13 * fVar7;
  fVar6 = fVar12 * fVar7 - fVar11 * fVar8;
  fVar4 = fVar4 + fVar4;
  fVar5 = fVar5 + fVar5;
  fVar6 = fVar6 + fVar6;
  fVar2 = *(float *)(lVar1 + 0x238);
  fVar11 = (fVar6 * fVar8 - fVar5 * fVar9) + fVar10 * fVar4 + fVar11;
  fVar9 = (fVar4 * fVar9 - fVar6 * fVar7) + fVar10 * fVar5 + fVar12;
  fVar8 = (fVar5 * fVar7 - fVar4 * fVar8) + fVar10 * fVar6 + fVar13;
  fVar7 = param_3 + *(float *)(param_1 + 0x44);
  fVar6 = -(*(float *)(lVar1 + 0x710) * *(float *)(lVar1 + 0x230)) - fVar7;
  fVar4 = fVar2;
  fVar5 = -0.0;
  if (((((fVar11 < fVar6) ||
        (fVar4 = fVar7 + *(float *)(lVar1 + 0x710) * *(float *)(lVar1 + 0x230), fVar4 < fVar11)) ||
       (fVar5 = fVar9, fVar9 < -(*(float *)(lVar1 + 0x714) * *(float *)(lVar1 + 0x234)) - fVar7)) ||
      (((fVar4 = fVar7 + *(float *)(lVar1 + 0x714) * *(float *)(lVar1 + 0x234), fVar4 < fVar9 ||
        (fVar4 = fVar8, fVar8 < -(*(float *)(lVar1 + 0x718) * fVar2) - fVar7)) ||
       (fVar7 + *(float *)(lVar1 + 0x718) * fVar2 < fVar8)))) &&
     (cVar3 = FUN_14059ed70(fVar4,fVar5,param_3,fVar6,fVar11), cVar3 == '\0')) {
    return 0;
  }
  return 1;
}



// FUNCTION 1405c9410 FUN_1405c9410 body=118 status=ok
// SIG undefined FUN_1405c9410(void)

undefined1 FUN_1405c9410(longlong param_1,undefined8 param_2,float param_3,float *param_4)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(longlong *)(param_1 + 0xe0);
  fVar6 = param_4[1] - *(float *)(lVar1 + 0x1d4);
  fVar5 = *param_4 - *(float *)(lVar1 + 0x1d0);
  fVar4 = param_4[2] - *(float *)(lVar1 + 0x1d8);
  fVar3 = param_3 + *(float *)(lVar1 + 0x1e8) + *(float *)(param_1 + 0x44);
  if (fVar3 * fVar3 <= fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) {
    cVar2 = FUN_14059ed70();
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1405c9490 FUN_1405c9490 body=111 status=ok
// SIG undefined FUN_1405c9490(void)

undefined1 FUN_1405c9490(longlong param_1,undefined8 param_2,float param_3,float *param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = param_4[1] - *(float *)(param_1 + 0xf0);
  fVar4 = *param_4 - *(float *)(param_1 + 0xec);
  fVar3 = param_4[2] - *(float *)(param_1 + 0xf4);
  fVar2 = param_3 + *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x44);
  if (fVar2 * fVar2 <= fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) {
    cVar1 = FUN_14059ed70();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1405c9570 FUN_1405c9570 body=92 status=ok
// SIG undefined FUN_1405c9570(void)

undefined8 FUN_1405c9570(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  undefined8 uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1d8);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if ((*(char *)(param_1 + 0x220) == '\0') || (*(char *)(param_1 + 0x221) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar2;
}



// FUNCTION 1405c95e0 FUN_1405c95e0 body=514 status=ok
// SIG undefined FUN_1405c95e0(void)

longlong FUN_1405c95e0(longlong param_1,undefined8 param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  int iVar2;
  float *pfVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar6 = *(int *)(param_1 + 0x38);
  if ((iVar6 == 0) || (*(int *)(param_1 + 0x78) != iVar6)) {
    return (ulonglong)(uint3)((uint)iVar6 >> 8) << 8;
  }
  iVar2 = rand();
  uVar5 = 0;
  fVar15 = 0.0;
  iVar6 = *(int *)(param_1 + 0x38);
  fVar11 = (float)iVar2 * *(float *)(param_1 + 0x80) * 3.051851e-05;
  pfVar3 = (float *)(longlong)iVar6;
  if (0 < iVar6) {
    pfVar3 = *(float **)(param_1 + 0x70);
    uVar4 = uVar5;
    uVar7 = uVar5;
    do {
      fVar11 = fVar11 - *pfVar3;
      iVar2 = (int)uVar7;
      if (fVar11 <= 0.0) {
        lVar1 = *(longlong *)(param_1 + 0x30);
        lVar9 = (longlong)iVar2;
        *(undefined8 *)param_3 = *(undefined8 *)(lVar1 + lVar9 * 0xc);
        fVar11 = *(float *)(lVar1 + 8 + lVar9 * 0xc);
        pfVar3 = (float *)(ulonglong)(uint)fVar11;
        param_3[2] = fVar11;
        if ((iVar2 < 0) || (*(int *)(param_1 + 0x48) <= iVar2)) {
          fVar11 = 0.0;
        }
        else {
          pfVar3 = *(float **)(param_1 + 0x40);
          fVar11 = pfVar3[lVar9];
        }
        *param_4 = fVar11;
        break;
      }
      uVar7 = (ulonglong)(iVar2 + 1);
      uVar4 = uVar4 + 1;
      pfVar3 = pfVar3 + 1;
    } while ((longlong)uVar4 < (longlong)iVar6);
  }
  iVar6 = *(int *)(param_1 + 0x38);
  fVar11 = *(float *)(param_1 + 0x50);
  fVar16 = *(float *)(param_1 + 0x54) * *(float *)(param_1 + 0x54);
  if (0 < iVar6) {
    pfVar3 = *(float **)(param_1 + 0x70);
    uVar4 = uVar5;
    uVar7 = uVar5;
    uVar10 = uVar5;
    do {
      *(float *)(uVar4 + (longlong)pfVar3) =
           (1.0 - *(float *)(uVar4 + (longlong)pfVar3)) * *(float *)(param_1 + 0x60) +
           *(float *)(uVar4 + (longlong)pfVar3);
      fVar12 = *(float *)(uVar4 + *(longlong *)(param_1 + 0x70));
      fVar13 = *(float *)(param_1 + 0x58);
      if ((*(float *)(param_1 + 0x58) <= fVar12) &&
         (fVar13 = *(float *)(param_1 + 0x5c), fVar12 <= *(float *)(param_1 + 0x5c))) {
        fVar13 = fVar12;
      }
      *(float *)(uVar4 + *(longlong *)(param_1 + 0x70)) = fVar13;
      lVar1 = *(longlong *)(param_1 + 0x30);
      fVar14 = *(float *)(uVar10 + 4 + lVar1) - param_3[1];
      fVar13 = *(float *)(uVar10 + lVar1) - *param_3;
      fVar12 = *(float *)(uVar10 + 8 + lVar1) - param_3[2];
      fVar12 = fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12;
      if (fVar12 < fVar16) {
        *(float *)(uVar4 + *(longlong *)(param_1 + 0x70)) =
             (1.0 - fVar12 / fVar16) * fVar11 + *(float *)(uVar4 + *(longlong *)(param_1 + 0x70));
      }
      pfVar3 = *(float **)(param_1 + 0x70);
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
      iVar6 = *(int *)(param_1 + 0x38);
      uVar10 = uVar10 + 0xc;
      fVar15 = fVar15 + *(float *)(uVar4 + (longlong)pfVar3);
      uVar4 = uVar4 + 4;
    } while ((int)uVar8 < iVar6);
  }
  fVar11 = *(float *)(param_1 + 0x80);
  uVar4 = uVar5;
  if (0 < iVar6) {
    do {
      pfVar3 = *(float **)(param_1 + 0x70);
      uVar8 = (int)uVar4 + 1;
      *(float *)(uVar5 + (longlong)pfVar3) =
           (fVar11 / fVar15) * *(float *)(uVar5 + (longlong)pfVar3);
      uVar5 = uVar5 + 4;
      uVar4 = (ulonglong)uVar8;
    } while ((int)uVar8 < *(int *)(param_1 + 0x38));
  }
  return CONCAT71((int7)((ulonglong)pfVar3 >> 8),1);
}



// FUNCTION 1405c97f0 FUN_1405c97f0 body=176 status=ok
// SIG undefined FUN_1405c97f0(void)

ulonglong FUN_1405c97f0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  ulonglong in_RAX;
  ulonglong uVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 == 0) {
    uVar6 = in_RAX & 0xffffffffffffff00;
  }
  else {
    if (iVar1 < 1) {
      iVar4 = 0;
    }
    else {
      iVar4 = rand();
      iVar5 = (int)((float)iVar4 * 3.051851e-05 * (float)iVar1);
      iVar4 = iVar1 + -1;
      if (iVar5 <= iVar1 + -1) {
        iVar4 = iVar5;
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar7 = (longlong)iVar4;
    *param_3 = *(undefined8 *)(lVar3 + lVar7 * 0xc);
    uVar2 = *(undefined4 *)(lVar3 + 8 + lVar7 * 0xc);
    *(undefined4 *)(param_3 + 1) = uVar2;
    if ((iVar4 < 0) || (*(int *)(param_1 + 0x48) <= iVar4)) {
      uVar6 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
      *param_4 = 0;
    }
    else {
      uVar6 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x40) >> 8),1);
      *param_4 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + lVar7 * 4);
    }
  }
  return uVar6;
}



// FUNCTION 1405c98a0 FUN_1405c98a0 body=301 status=ok
// SIG undefined FUN_1405c98a0(void)

ulonglong FUN_1405c98a0(longlong param_1,longlong param_2,float *param_3,undefined4 *param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  float local_a8;
  float local_a4;
  float local_a0;
  byte local_98 [12];
  undefined4 local_8c;
  undefined8 local_84;
  float local_7c;
  
  lVar1 = *(longlong *)(param_2 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_2);
    uVar2 = 0;
    if (lVar1 == 0) goto LAB_1405c99ad;
  }
  uVar2 = FUN_1405c99d0(param_1,param_2,param_3,param_4);
  if ((char)uVar2 != '\0') {
    _guard_xfg_dispatch_icall_nop(local_98,0,0x90);
    local_a8 = *param_3 + *(float *)(param_1 + 0x48);
    local_8c = 0x3f800000;
    local_a4 = *(float *)(param_1 + 0x4c) + param_3[1];
    local_a0 = *(float *)(param_1 + 0x50) + param_3[2];
    uVar2 = UWorld::LineTraceSingleByChannel
                      (lVar1,local_98,param_3,&local_a8,3,&DAT_146aefe90,&DAT_146aefe68);
    if (((char)uVar2 != '\0') && ((local_98[0] & 2) == 0)) {
      *(undefined8 *)param_3 = local_84;
      param_3[2] = local_7c;
      *param_4 = 0;
      return CONCAT71((uint7)(uint3)((uint)local_7c >> 8),1);
    }
  }
LAB_1405c99ad:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1405c99d0 FUN_1405c99d0 body=608 status=ok
// SIG undefined FUN_1405c99d0(void)

ulonglong FUN_1405c99d0(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  float local_80;
  float local_74;
  undefined1 local_70 [12];
  undefined8 local_64;
  float local_5c;
  undefined8 local_58;
  float local_50;
  undefined1 local_4c;
  
  lVar5 = param_1 + 0x28;
  lVar4 = FWeakObjectPtr::Get(lVar5);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b4c84 == 0) {
      DAT_1464b4c84 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = (ulonglong)DAT_1464b4c84;
    }
    UNLOCK();
    if (((int)uVar6 != *(int *)(param_1 + 0x30)) &&
       (uVar3 = *(uint *)(param_1 + 0x40) | *(uint *)(param_1 + 0x3c) | *(uint *)(param_1 + 0x38) |
                *(uint *)(param_1 + 0x34), uVar6 = (ulonglong)uVar3, uVar3 != 0)) {
      lVar4 = FUniqueObjectGuid::ResolveObject();
      FWeakObjectPtr::operator=(lVar5,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b4c84 == 0) {
          DAT_1464b4c84 = 0;
        }
        UNLOCK();
        *(uint *)(param_1 + 0x30) = DAT_1464b4c84;
      }
      lVar4 = FWeakObjectPtr::Get(lVar5);
      uVar6 = 0;
      if (lVar4 != 0) goto LAB_1405c9a6f;
    }
    lVar4 = *(longlong *)(param_2 + 0x118);
    goto LAB_1405c9b1a;
  }
LAB_1405c9a6f:
  lVar4 = FWeakObjectPtr::Get(lVar5);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b4c84 == 0) {
      DAT_1464b4c84 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = (ulonglong)DAT_1464b4c84;
    }
    UNLOCK();
    if (((int)uVar6 != *(int *)(param_1 + 0x30)) &&
       (uVar3 = *(uint *)(param_1 + 0x40) | *(uint *)(param_1 + 0x3c) | *(uint *)(param_1 + 0x38) |
                *(uint *)(param_1 + 0x34), uVar6 = (ulonglong)uVar3, uVar3 != 0)) {
      lVar4 = FUniqueObjectGuid::ResolveObject();
      FWeakObjectPtr::operator=(lVar5,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b4c84 == 0) {
          DAT_1464b4c84 = 0;
        }
        UNLOCK();
        *(uint *)(param_1 + 0x30) = DAT_1464b4c84;
      }
      lVar4 = FWeakObjectPtr::Get(lVar5);
      uVar6 = 0;
      if (lVar4 != 0) goto LAB_1405c9ae1;
    }
  }
  else {
LAB_1405c9ae1:
    lVar5 = FUN_1428dfc70();
    iVar1 = *(int *)(lVar5 + 0x90);
    uVar6 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar1) ||
       (uVar6 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
       *(longlong *)(uVar6 + (longlong)iVar1 * 8) != lVar5 + 0x88)) {
      uVar6 = uVar6 & 0xffffffffffffff00;
    }
    else {
      uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    }
    if ((char)uVar6 != '\0') goto LAB_1405c9b1a;
  }
  lVar4 = 0;
LAB_1405c9b1a:
  if (lVar4 == 0) {
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  else {
    FUN_14222da00(lVar4,0,&local_a8,&local_98);
    local_74 = local_a0 + local_90;
    local_80 = local_a0 - local_90;
    local_4c = 1;
    local_64 = CONCAT44(local_a4 - local_94,local_a8 - local_98);
    local_58 = CONCAT44(local_a4 + local_94,local_a8 + local_98);
    local_5c = local_80;
    local_50 = local_74;
    puVar7 = (undefined8 *)FMath::RandPointInBox(local_70,&local_64);
    *param_3 = *puVar7;
    uVar2 = *(undefined4 *)(puVar7 + 1);
    *(undefined4 *)(param_3 + 1) = uVar2;
    uVar6 = CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    *param_4 = 0;
  }
  return uVar6;
}



// FUNCTION 1405c9c30 FUN_1405c9c30 body=68 status=ok
// SIG undefined FUN_1405c9c30(void)

void FUN_1405c9c30(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 0x118);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  if (lVar3 != 0) {
    plVar2 = (longlong *)FNavigationSystem::FindPathFollowingAgentForActor();
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001405c9c6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1405c9c80 FUN_1405c9c80 body=78 status=ok
// SIG undefined FUN_1405c9c80(void)

void FUN_1405c9c80(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x118);
  }
  if (lVar2 != 0) {
    if ((*(char *)(param_1 + 0x80) != '\0') && (cVar1 = FUN_1405ca9b0(param_2), cVar1 == '\0')) {
      return;
    }
    FUN_1405cbfc0(lVar2,param_1 + 0x38);
  }
  return;
}



// FUNCTION 1405c9cd0 FUN_1405c9cd0 body=365 status=ok
// SIG undefined FUN_1405c9cd0(void)

void FUN_1405c9cd0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_res10;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_bc [20];
  undefined1 local_a8 [24];
  longlong local_90;
  undefined1 local_58 [80];
  
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x118);
  }
  if ((lVar4 != 0) &&
     ((*(char *)(param_1 + 0x80) == '\0' || (cVar1 = FUN_1405ca9b0(param_2), cVar1 != '\0')))) {
    uVar2 = UPathFollowingAgentInterface::GetPrivateStaticClass();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar2);
    if (((plVar3 != (longlong *)0x0) ||
        (plVar3 = (longlong *)FNavigationSystem::FindPathFollowingAgentForActor(lVar4),
        plVar3 != (longlong *)0x0)) && (lVar4 = FUN_1405c6c50(lVar4), lVar4 != 0)) {
      local_d8 = 0;
      local_d0 = 0;
      local_res10 = 0;
      (**(code **)(*plVar3 + 0x18))(plVar3,*(undefined4 *)(param_1 + 0x88),&local_d8,&local_res10);
      FUN_1405c1370(local_a8,param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x60) = local_d8;
      local_c0 = 0x3f800000;
      *(undefined4 *)(param_1 + 0x68) = local_d0;
      local_c8 = 0;
      puVar5 = (undefined8 *)FVector::Rotation(&local_c8,local_bc);
      *(undefined8 *)(param_1 + 0x6c) = *puVar5;
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(puVar5 + 1);
      uVar2 = FUN_1405c1370(local_58,param_1 + 0x38);
      FUN_1405cc150(lVar4,uVar2);
      if (local_90 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 1405c9e40 FUN_1405c9e40 body=867 status=ok
// SIG undefined FUN_1405c9e40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405c9e40(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78;
  int local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined1 local_38 [32];
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (param_2 == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(param_2 + 0x118);
    }
    if ((plVar10 != (longlong *)0x0) &&
       ((*(char *)(param_1 + 0x60) != '\0' || (cVar3 = FUN_1405ca9b0(param_2), cVar3 != '\0')))) {
      lVar6 = plVar10[0x2d];
      if (lVar6 == 0) {
        local_94 = DAT_1468b5d98;
        puVar5 = &local_9c;
        local_9c = _DAT_1468b5d90;
      }
      else {
        puVar5 = (undefined8 *)&local_a8;
        local_a8 = *(undefined4 *)(lVar6 + 0x220);
        local_a0 = *(undefined4 *)(lVar6 + 0x228);
        uStack_a4 = *(undefined4 *)(lVar6 + 0x224);
      }
      local_88 = *puVar5;
      local_80 = *(undefined4 *)(puVar5 + 1);
      cVar3 = FUN_14059f060(param_2,*(undefined8 *)(param_1 + 0x38),&local_88,0x3f800000,0x42480000)
      ;
      if (cVar3 != '\0') {
        iVar1 = *(int *)(param_1 + 0x40);
        if (iVar1 == 0) {
          lVar6 = FUN_14059b7e0(plVar10,1);
          if (lVar6 != 0) {
            FUN_1405a3150(lVar6,local_68,*(undefined8 *)(param_1 + 0x38),0);
            FUN_140591060(local_68);
          }
        }
        else if (iVar1 == 1) {
          uVar7 = AUGDoor::GetPrivateStaticClass();
          AActor::GetComponentsByTag(plVar10,&local_78,uVar7,*(undefined8 *)(param_1 + 0x48));
          plVar10 = local_78 + local_70;
          for (plVar11 = local_78; plVar11 != plVar10; plVar11 = plVar11 + 1) {
            lVar6 = *plVar11;
            if (lVar6 == 0) {
LAB_1405c9fd5:
              lVar6 = 0;
            }
            else {
              lVar8 = AUGDoor::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_1405c9fd5;
            }
            if (lVar6 != 0) {
              FUN_1405a3150(lVar6,local_50,*(undefined8 *)(param_1 + 0x38),0);
              FUN_140591060(local_50);
            }
          }
          if (local_78 != (longlong *)0x0) {
            FMemory::Free(local_78);
          }
        }
        else if ((iVar1 == 2) &&
                (lVar6 = FUN_1405ab470(plVar10,*(undefined8 *)(param_1 + 0x50),1,param_2),
                lVar6 != 0)) {
          FUN_1405a9420(lVar6,*(undefined4 *)(param_1 + 0x5c));
          FUN_1405a9540(lVar6,*(undefined1 *)(param_1 + 0x61));
          if ((*(char *)(param_1 + 0x58) == '\0') &&
             ((lVar8 = (**(code **)(*plVar10 + 0x148))(plVar10), lVar8 != 0 &&
              (lVar8 = UWorld::GetWorldSettings(lVar8,0,1), lVar8 != 0)))) {
            FUN_142382f60(lVar6,*(undefined8 *)(lVar8 + 0x168),&DAT_146532180,0);
          }
          lVar8 = FName::GetNames();
          if (((((*(int *)(param_1 + 0x48) < 0) ||
                (*(int *)(lVar8 + 0x400) <= *(int *)(param_1 + 0x48))) ||
               (iVar1 = *(int *)(param_1 + 0x48), uVar9 = iVar1 >> 0x1f & 0x3fff,
               uVar4 = iVar1 + uVar9,
               *(longlong *)
                (*(longlong *)(lVar8 + (longlong)((int)uVar4 >> 0xe) * 8) +
                (longlong)(int)((uVar4 & 0x3fff) - uVar9) * 8) == 0)) ||
              ((iVar1 < 0 || (*(int *)(lVar8 + 0x400) <= iVar1)))) ||
             (uVar9 = *(int *)(param_1 + 0x48) >> 0x1f & 0x3fff,
             uVar4 = *(int *)(param_1 + 0x48) + uVar9,
             *(longlong *)
              (*(longlong *)(lVar8 + (longlong)((int)uVar4 >> 0xe) * 8) +
              (longlong)(int)((uVar4 & 0x3fff) - uVar9) * 8) == 0)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            iVar1 = *(int *)(lVar6 + 0x90);
            *(int *)(lVar6 + 0x90) = iVar1 + 1;
            if (*(int *)(lVar6 + 0x94) < iVar1 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar6 + 0x88,iVar1);
            }
            *(undefined8 *)(*(longlong *)(lVar6 + 0x88) + (longlong)iVar1 * 8) =
                 *(undefined8 *)(param_1 + 0x48);
          }
          FUN_1405a3150(lVar6,local_38,*(undefined8 *)(param_1 + 0x38),0);
          FUN_140591060(local_38);
        }
      }
    }
  }
  return;
}



// FUNCTION 1405ca1b0 FUN_1405ca1b0 body=1334 status=ok
// SIG undefined FUN_1405ca1b0(void)

void FUN_1405ca1b0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint local_res8 [2];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  int local_90;
  uint *local_88;
  longlong *local_80;
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [32];
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    if (param_2 == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = *(longlong **)(param_2 + 0x118);
    }
    if (plVar8 != (longlong *)0x0) {
      lVar4 = APostProcessVolume::GetPrivateStaticClass();
      if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
          lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((!bVar1) || (cVar3 = (**(code **)(*plVar8 + 0x950))(plVar8), cVar3 == '\0')) {
        iVar6 = *(int *)(param_1 + 0x40);
        local_b8 = 0;
        local_b0 = 0;
        if (iVar6 == 0) {
          lVar4 = FUN_14059b7e0(plVar8,1);
          if (lVar4 != 0) {
            lVar4 = FUN_1405a3150(lVar4,local_78,*(undefined8 *)(param_1 + 0x30),0);
            uVar2 = local_b0;
            lVar9 = (longlong)(int)local_b0;
            iVar6 = (int)local_b0 + 1;
            local_b0 = CONCAT44(local_b0._4_4_,iVar6);
            if (local_b0._4_4_ < iVar6) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(&local_b8,uVar2 & 0xffffffff);
            }
            lVar9 = local_b8 + lVar9 * 0x18;
            FUN_14058f8f0(lVar9,lVar4);
            *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar4 + 0x10);
            FUN_140591060(local_78);
          }
        }
        else if (iVar6 == 1) {
          uVar5 = AUGDoor::GetPrivateStaticClass();
          AActor::GetComponentsByTag(plVar8,&local_98,uVar5,*(undefined8 *)(param_1 + 0x48));
          plVar8 = local_98 + local_90;
          for (plVar10 = local_98; plVar10 != plVar8; plVar10 = plVar10 + 1) {
            lVar4 = *plVar10;
            if (lVar4 == 0) {
LAB_1405ca353:
              lVar4 = 0;
            }
            else {
              lVar9 = AUGDoor::GetPrivateStaticClass();
              if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) goto LAB_1405ca353;
            }
            if (lVar4 != 0) {
              lVar4 = FUN_1405a3150(lVar4,local_60,*(undefined8 *)(param_1 + 0x30),0);
              uVar2 = local_b0;
              lVar9 = (longlong)(int)local_b0;
              iVar6 = (int)local_b0 + 1;
              local_b0 = CONCAT44(local_b0._4_4_,iVar6);
              if (local_b0._4_4_ < iVar6) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_b8,uVar2 & 0xffffffff);
              }
              lVar9 = local_b8 + lVar9 * 0x18;
              FUN_14058f8f0(lVar9,lVar4);
              *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar4 + 0x10);
              FUN_140591060(local_60);
            }
          }
          if (local_98 != (longlong *)0x0) {
            FMemory::Free(local_98);
          }
        }
        else if ((iVar6 == 2) &&
                (lVar4 = FUN_1405ab470(plVar8,*(undefined8 *)(param_1 + 0x50),1,param_2), lVar4 != 0
                )) {
          FUN_1405a9420(lVar4,*(undefined4 *)(param_1 + 0x5c));
          if ((*(char *)(param_1 + 0x58) == '\0') &&
             ((lVar9 = (**(code **)(*plVar8 + 0x148))(plVar8), lVar9 != 0 &&
              (lVar9 = UWorld::GetWorldSettings(lVar9,0,1), lVar9 != 0)))) {
            local_a8 = 0;
            FUN_142382f60(lVar4,*(undefined8 *)(lVar9 + 0x168),&DAT_146532180,0);
          }
          lVar9 = FName::GetNames();
          if (((((*(int *)(param_1 + 0x48) < 0) ||
                (*(int *)(lVar9 + 0x400) <= *(int *)(param_1 + 0x48))) ||
               (iVar6 = *(int *)(param_1 + 0x48), uVar11 = iVar6 >> 0x1f & 0x3fff,
               uVar7 = iVar6 + uVar11,
               *(longlong *)
                (*(longlong *)(lVar9 + (longlong)((int)uVar7 >> 0xe) * 8) +
                (longlong)(int)((uVar7 & 0x3fff) - uVar11) * 8) == 0)) ||
              ((iVar6 < 0 || (*(int *)(lVar9 + 0x400) <= iVar6)))) ||
             (uVar11 = *(int *)(param_1 + 0x48) >> 0x1f & 0x3fff,
             uVar7 = *(int *)(param_1 + 0x48) + uVar11,
             *(longlong *)
              (*(longlong *)(lVar9 + (longlong)((int)uVar7 >> 0xe) * 8) +
              (longlong)(int)((uVar7 & 0x3fff) - uVar11) * 8) == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            iVar6 = *(int *)(lVar4 + 0x90);
            *(int *)(lVar4 + 0x90) = iVar6 + 1;
            if (*(int *)(lVar4 + 0x94) < iVar6 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar4 + 0x88,iVar6);
            }
            *(undefined8 *)(*(longlong *)(lVar4 + 0x88) + (longlong)iVar6 * 8) =
                 *(undefined8 *)(param_1 + 0x48);
          }
          lVar4 = FUN_1405a3150(lVar4,local_48,*(undefined8 *)(param_1 + 0x30),0);
          uVar2 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          iVar6 = (int)local_b0 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,iVar6);
          if (local_b0._4_4_ < iVar6) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_b8,uVar2 & 0xffffffff);
          }
          lVar9 = local_b8 + lVar9 * 0x18;
          FUN_14058f8f0(lVar9,lVar4);
          *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)(lVar4 + 0x10);
          FUN_140591060(local_48);
        }
        iVar6 = (int)(param_3 >> 4);
        iVar14 = (int)(param_2 >> 4);
        uVar11 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
        uVar7 = -(uVar11 + iVar14) ^ uVar11 >> 0xd;
        uVar15 = (iVar14 - uVar11) - uVar7 ^ uVar7 >> 0xc;
        uVar12 = (uVar11 - uVar15) - uVar7 ^ uVar15 << 0x10;
        uVar11 = (uVar7 - uVar12) - uVar15 ^ uVar12 >> 5;
        uVar16 = (uVar15 - uVar12) - uVar11 ^ uVar11 >> 3;
        uVar12 = (uVar12 - uVar16) - uVar11 ^ uVar16 << 10;
        uVar15 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
        uVar7 = -(uVar15 + iVar6) ^ uVar15 >> 0xd;
        uVar13 = (iVar6 - uVar15) - uVar7 ^ uVar7 >> 0xc;
        uVar15 = (uVar15 - uVar13) - uVar7 ^ uVar13 << 0x10;
        uVar7 = (uVar7 - uVar15) - uVar13 ^ uVar15 >> 5;
        uVar13 = (uVar13 - uVar15) - uVar7 ^ uVar7 >> 3;
        uVar15 = (uVar15 - uVar13) - uVar7 ^ uVar13 << 10;
        local_res8[0] =
             (uVar7 - uVar15) - uVar13 ^ (uVar11 - uVar12) - uVar16 ^ (uVar15 ^ uVar12) >> 0xf;
        local_88 = local_res8;
        local_80 = &local_b8;
        FUN_1405bfea0(param_1 + 0x60,local_a0,&local_88,0);
        lVar4 = local_b8;
        for (iVar6 = (int)local_b0; iVar6 != 0; iVar6 = iVar6 + -1) {
          FUN_140591060(lVar4);
          lVar4 = lVar4 + 0x18;
        }
        if (local_b8 != 0) {
          FMemory::Free(local_b8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1405ca6f0 FUN_1405ca6f0 body=692 status=ok
// SIG undefined FUN_1405ca6f0(void)

void FUN_1405ca6f0(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  undefined4 local_38;
  undefined1 local_30 [24];
  
  iVar12 = (int)(param_2 >> 4);
  uVar10 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
  iVar9 = (int)(param_3 >> 4);
  uVar6 = -(uVar10 + iVar12) ^ uVar10 >> 0xd;
  uVar13 = (iVar12 - uVar10) - uVar6 ^ uVar6 >> 0xc;
  uVar10 = (uVar10 - uVar13) - uVar6 ^ uVar13 << 0x10;
  uVar6 = (uVar6 - uVar10) - uVar13 ^ uVar10 >> 5;
  uVar14 = (uVar13 - uVar10) - uVar6 ^ uVar6 >> 3;
  uVar11 = (uVar10 - uVar14) - uVar6 ^ uVar14 << 10;
  uVar15 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
  uVar10 = -(uVar15 + iVar9) ^ uVar15 >> 0xd;
  uVar13 = (iVar9 - uVar15) - uVar10 ^ uVar10 >> 0xc;
  uVar15 = (uVar15 - uVar13) - uVar10 ^ uVar13 << 0x10;
  uVar10 = (uVar10 - uVar15) - uVar13 ^ uVar15 >> 5;
  uVar13 = (uVar13 - uVar15) - uVar10 ^ uVar10 >> 3;
  uVar15 = (uVar15 - uVar13) - uVar10 ^ uVar13 << 10;
  uVar8 = 0;
  uVar6 = (uVar10 - uVar15) - uVar13 ^ (uVar6 - uVar11) - uVar14 ^ (uVar15 ^ uVar11) >> 0xf;
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      lVar3 = param_1 + 0x98;
    }
    iVar9 = *(int *)(lVar3 + ((longlong)*(int *)(param_1 + 0xa8) - 1U & (longlong)(int)uVar6) * 4);
    if (iVar9 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x60);
      do {
        lVar4 = (longlong)iVar9 * 0x20;
        if (*(uint *)(lVar4 + lVar3) == uVar6) {
          if (iVar9 == -1) {
            return;
          }
          puVar5 = (ulonglong *)(lVar3 + 8 + (longlong)iVar9 * 0x20);
          uVar16 = uVar8;
          if (&local_58 != puVar5) {
            uVar16 = *puVar5;
            *puVar5 = 0;
            uVar8 = (ulonglong)(uint)puVar5[1];
            puVar5[1] = 0;
          }
          FUN_1405cc9e0(param_1 + 0x60);
          uVar6 = (uint)uVar8;
          for (uVar7 = uVar16; uVar1 = uVar16, uVar7 != uVar16 + (longlong)(int)uVar6 * 0x18;
              uVar7 = uVar7 + 0x18) {
            FUN_14058f8f0(local_48,uVar7);
            local_38 = *(undefined4 *)(uVar7 + 0x10);
            cVar2 = FUN_14059ee90(local_48);
            if (cVar2 != '\0') {
              if (*(longlong *)(param_1 + 0x38) == 0) {
                FUN_1405ac8f0(local_48,0,4);
              }
              else {
                local_58 = 0;
                local_50 = 0;
                FUN_1405a2d20(local_48[0],local_30,*(longlong *)(param_1 + 0x38),0,0,&local_58);
                FUN_140591060(local_30);
                if (local_58 != 0) {
                  FMemory::Free();
                }
              }
            }
            FUN_140591060(local_48);
          }
          while (uVar6 != 0) {
            FUN_140591060(uVar1);
            uVar6 = (int)uVar8 - 1;
            uVar8 = (ulonglong)uVar6;
            uVar1 = uVar1 + 0x18;
          }
          if (uVar16 == 0) {
            return;
          }
          FMemory::Free(uVar16);
          return;
        }
        iVar9 = *(int *)(lVar4 + 0x18 + lVar3);
      } while (iVar9 != -1);
    }
  }
  return;
}



// FUNCTION 1405ca9b0 FUN_1405ca9b0 body=431 status=ok
// SIG undefined FUN_1405ca9b0(void)

ulonglong FUN_1405ca9b0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  plVar7 = *(longlong **)(param_1 + 0x118);
  if (plVar7 == (longlong *)0x0) {
LAB_1405caa17:
    plVar7 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1405caa17;
  }
  if ((*(longlong *)(param_1 + 400) == 0) ||
     (plVar6 = *(longlong **)(*(longlong *)(param_1 + 400) + 0x118), plVar6 == (longlong *)0x0)) {
LAB_1405caa67:
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1405caa67;
  }
  plVar5 = (longlong *)FUN_14238b320();
  if (plVar5 == (longlong *)0x0) {
LAB_1405caaaf:
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_1429d7ab0();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1405caaaf;
  }
  if (plVar7 == (longlong *)0x0) {
LAB_1405caad6:
    if (plVar6 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar6 + 0x818))();
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*plVar6 + 0x778))();
        if (cVar2 != '\0') goto LAB_1405cab20;
      }
    }
    if (plVar5 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar5 + 0x818))();
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*plVar5 + 0x778))();
        if (cVar2 != '\0') goto LAB_1405cab20;
      }
    }
    bVar1 = false;
  }
  else {
    cVar2 = (**(code **)(*plVar7 + 0x818))();
    if (cVar2 == '\0') goto LAB_1405caad6;
    cVar2 = (**(code **)(*plVar7 + 0x778))();
    if (cVar2 == '\0') goto LAB_1405caad6;
LAB_1405cab20:
    bVar1 = true;
  }
  uVar3 = *(uint *)(param_1 + 0x6b8) & 3;
  if (uVar3 == 0) {
    return 1;
  }
  if (bVar1) {
    return (ulonglong)uVar3 & 0xffffffffffffff01;
  }
  return (ulonglong)((*(uint *)(param_1 + 0x6b8) & 2) != 0);
}



// FUNCTION 1405cab60 FUN_1405cab60 body=961 status=ok
// SIG undefined FUN_1405cab60(void)

void FUN_1405cab60(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  uint *puVar15;
  longlong local_res8;
  longlong local_res20;
  ulonglong in_stack_ffffffffffffff40;
  uint local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  longlong local_98 [2];
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *(int *)(param_1 + 0x90) = param_3;
  plVar3 = (longlong *)(param_1 + 0x88);
  if (param_3 == -1) {
    if ((*plVar3 != 0) && (FUN_1405ac930(), *plVar3 != 0)) {
      FUN_1405a53f0();
      *plVar3 = 0;
      return;
    }
  }
  else {
    FUN_14058f880(&local_res8,plVar3);
    if (*plVar3 == 0) {
      lVar7 = *(longlong *)(param_1 + -0x1b0);
      if (lVar7 == 0) {
        lVar7 = FUN_1423407b0(param_1 + -0x2d0);
      }
      uVar8 = FUN_14059ce50(DAT_1468536c8 + 8,&local_res20,lVar7,0);
      FUN_140591350(&local_res8,uVar8);
      if (local_res20 != 0) {
        FUN_1405a53f0();
      }
      if (local_res8 == 0) {
        return;
      }
      FUN_14058f880(&local_res20,&local_res8);
      FUN_140591350(plVar3,&local_res20);
      if (local_res20 != 0) {
        FUN_1405a53f0();
      }
      uVar11 = 0;
      uStack_b4 = 1;
      plVar1 = (longlong *)(param_1 + 8);
      local_b8 = 0;
      uVar4 = *(uint *)(param_1 + 0x30);
      puVar2 = (uint *)(param_1 + 0x18);
      uStack_a4 = 0;
      uStack_a0 = 0;
      if (uVar4 != 0) {
        puVar15 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar15 = puVar2;
        }
        uVar5 = *puVar15;
        uVar9 = uVar11;
        uVar13 = uVar11;
        while (uVar5 == 0) {
          iVar6 = (int)uVar9;
          uStack_a0 = (int)uVar13 + 0x20;
          uVar13 = (ulonglong)uStack_a0;
          local_b8 = iVar6 + 1;
          uVar9 = (ulonglong)local_b8;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
          goto LAB_1405cad1c;
          uVar5 = puVar15[(longlong)iVar6 + 1];
        }
        uStack_b4 = -uVar5 & uVar5;
        iVar6 = 0x1f;
        if (uStack_b4 != 0) {
          for (; uStack_b4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uStack_b4 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        uStack_a4 = (uStack_a0 - iVar6) + 0x1f;
        if ((int)uVar4 < (int)uStack_a4) {
LAB_1405cad1c:
          uStack_a4 = uVar4;
        }
      }
      uVar5 = *(uint *)(param_1 + 0x30);
      uStack_70 = CONCAT44(uStack_a4,0xffffffff);
      local_68 = CONCAT44(uStack_9c,uStack_a0);
      uStack_58 = CONCAT44(uStack_b4,local_b8);
      local_a8 = -1 << ((byte)uVar5 & 0x1f);
      uVar14 = uVar5 & 0xffffffe0;
      uStack_80 = local_b8;
      uStack_7c = uStack_b4;
      puStack_b0 = puVar2;
      uStack_a4 = uVar5;
      local_78 = puVar2;
      local_60 = plVar1;
      puStack_50 = puVar2;
      uStack_48 = uStack_70;
      uStack_40 = local_68;
      local_88 = plVar1;
      if (uVar5 != uVar4) {
        puVar15 = *(uint **)(param_1 + 0x28);
        if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
          puVar15 = puVar2;
        }
        uVar10 = puVar15[(int)uVar5 >> 5] & local_a8;
        iVar6 = (int)uVar5 >> 5;
        while (uVar10 == 0) {
          uVar14 = uVar14 + 0x20;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
          goto LAB_1405cadf2;
          uVar10 = puVar15[(longlong)iVar6 + 1];
          local_a8 = 0xffffffff;
          iVar6 = iVar6 + 1;
        }
        uVar10 = -uVar10 & uVar10;
        iVar6 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        if (uVar10 == 0) {
          iVar6 = 0x20;
        }
        else {
          iVar6 = 0x1f - iVar6;
        }
        uStack_a4 = (uVar14 - iVar6) + 0x1f;
        uVar5 = uStack_a4;
        if ((int)uVar4 < (int)uStack_a4) {
LAB_1405cadf2:
          uStack_a4 = uVar4;
          uVar5 = uVar4;
        }
      }
      while( true ) {
        if (((uStack_70._4_4_ == uVar5) && (local_78 == puVar2)) && (local_88 == plVar1)) break;
        in_stack_ffffffffffffff40 = in_stack_ffffffffffffff40 & 0xffffffff00000000;
        puVar12 = (undefined8 *)(*local_88 + (longlong)(int)uStack_70._4_4_ * 0x18);
        FUN_1405aaa50(*plVar3,*puVar12,(int)puVar12[1],0,4,in_stack_ffffffffffffff40);
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
      }
      puVar12 = *(undefined8 **)(param_1 + 0x58);
      uVar9 = (longlong)*(int *)(param_1 + 0x60) & 0x1fffffffffffffff;
      if (puVar12 + *(int *)(param_1 + 0x60) < puVar12) {
        uVar9 = uVar11;
      }
      if (uVar9 != 0) {
        do {
          local_98[0] = 0;
          local_98[1] = 0;
          FUN_1405a2d20(*plVar3,&local_b8,*puVar12,0,0,local_98);
          FUN_140591060(&local_b8);
          if (local_98[0] != 0) {
            FMemory::Free();
          }
          puVar12 = puVar12 + 1;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar9);
      }
    }
    if (local_res8 != 0) {
      FUN_1405d0800(param_1 + -0x2d0);
      if (local_res8 != 0) {
        FUN_1405a53f0();
      }
    }
  }
  return;
}



// FUNCTION 1405caf30 FUN_1405caf30 body=46 status=ok
// SIG undefined FUN_1405caf30(void)

void FUN_1405caf30(longlong param_1,int param_2)

{
  FUN_1405cab60();
  if (param_2 == -1) {
    *(undefined4 *)(param_1 + 0xc0) = 0xbf800000;
  }
  return;
}



// FUNCTION 1405caf60 FUN_1405caf60 body=225 status=ok
// SIG undefined FUN_1405caf60(void)

void FUN_1405caf60(void)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  plVar4 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
  lVar8 = plVar4[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar8 = plVar4[0x1f];
  }
  lVar9 = 0;
  if (*(longlong *)(lVar8 + 0x30) == 0) {
    return;
  }
  lVar5 = FSoftObjectPath::TryLoad();
  if (lVar5 != 0) {
    lVar6 = FUN_1405d74b0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1405cafee;
  }
  lVar5 = lVar9;
LAB_1405cafee:
  *(longlong *)(lVar8 + 0x28) = lVar5;
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar7 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar7;
      lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar7) * 0x18;
    }
    *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 0x40000000;
  }
  return;
}



// FUNCTION 1405cb050 FUN_1405cb050 body=101 status=ok
// SIG undefined FUN_1405cb050(void)

void FUN_1405cb050(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_142393b20();
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  cVar1 = UWorld::IsGameWorld(lVar2);
  if (cVar1 == '\0') {
    return;
  }
  FUN_142397000(param_1,1,1);
  return;
}



// FUNCTION 1405cb0d0 FUN_1405cb0d0 body=231 status=ok
// SIG undefined FUN_1405cb0d0(void)

void FUN_1405cb0d0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong local_38 [2];
  undefined1 local_28 [32];
  
  cVar1 = FUN_14059ee90(param_2);
  if (cVar1 != '\0') {
    cVar1 = FUN_14059ee00();
    if (cVar1 != '\0') {
      FUN_1405a8a50(param_2,0,4);
    }
    if (*(longlong *)(param_1 + 0x40) == 0) {
      FUN_1405ac8f0(param_2,0,4);
    }
    else {
      local_38[0] = 0;
      local_38[1] = 0;
      FUN_1405a2d20(*param_2,local_28,*(longlong *)(param_1 + 0x40),0,0,local_38);
      FUN_140591060(local_28);
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      lVar2 = FUN_14059ae60(param_2,0);
      if (lVar2 != 0) {
        FUN_14059f190(lVar2);
      }
    }
  }
  lVar2 = FUN_140590080(local_28);
  FUN_1405913a0(param_2,lVar2);
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar2 + 0x10);
  FUN_140591060(local_28);
  FUN_140591060(param_2);
  return;
}



// FUNCTION 1405cb1c0 FUN_1405cb1c0 body=120 status=ok
// SIG undefined FUN_1405cb1c0(void)

void FUN_1405cb1c0(longlong param_1)

{
  undefined8 uVar1;
  longlong local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x350) != 0) {
    local_18 = param_1;
    uVar1 = UBlendableInterface::GetPrivateStaticClass();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
    FUN_1405d0010(*(undefined8 *)(param_1 + 0x350),&local_18);
  }
  if (*(longlong *)(param_1 + 0x358) != 0) {
    FUN_1405ac930();
    if (*(longlong *)(param_1 + 0x358) != 0) {
      FUN_1405a53f0();
      *(undefined8 *)(param_1 + 0x358) = 0;
    }
  }
  FUN_142394230(param_1);
  return;
}



// FUNCTION 1405cb250 FUN_1405cb250 body=99 status=ok
// SIG undefined FUN_1405cb250(void)

void FUN_1405cb250(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  int local_18 [4];
  
  TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
  ::FindId(&DAT_1462054c0,local_18,param_2);
  if (local_18[0] != -1) {
    lVar1 = DAT_1462054c0 + (longlong)local_18[0] * 0x18;
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
      FUN_1405c5350();
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(&DAT_1462054c0,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1405cb2c0 FUN_1405cb2c0 body=83 status=ok
// SIG undefined FUN_1405cb2c0(void)

void FUN_1405cb2c0(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  }
  if (*(char *)(param_1 + 0x220) != '\0') {
    *(undefined1 *)(param_1 + 0x221) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001405cb30c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  return;
}



// FUNCTION 1405cb320 FUN_1405cb320 body=2064 status=ok
// SIG undefined FUN_1405cb320(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405cb320(longlong *param_1,longlong param_2)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  undefined8 uVar14;
  char cVar15;
  int iVar16;
  float *pfVar17;
  undefined8 *puVar18;
  float fVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
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
  undefined1 auStack_1b8 [32];
  ulonglong local_198;
  undefined8 *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_158 [2];
  float local_148;
  float local_144;
  longlong local_140;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [4];
  undefined1 auStack_f4 [4];
  undefined8 uStack_f0;
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if (((param_1[0x5e] != 0) &&
      (((cVar15 = (**(code **)(*param_1 + 0x2a0))(), cVar15 != '\0' ||
        (*(char *)(param_2 + 0x42) != '\0')) && (param_1[0x5a] != 0)))) &&
     (*(longlong *)(param_1[0x5a] + 0x30) != 0)) {
    cVar15 = FUN_14059ed30();
    if (cVar15 != '\0') {
      if (*(int *)(param_2 + 0x20) == 0) {
LAB_1405cb3e0:
        local_168 = FUN_1405c7440();
        FRotator::Quaternion(param_1 + 0x3f,&local_188);
        uVar14 = uStack_180;
        lVar13 = local_188;
        fVar54 = *(float *)((longlong)param_1 + 500);
        fVar55 = *(float *)(param_1 + 0x3e);
        fVar34 = *(float *)*(undefined1 (*) [12])((longlong)param_1 + 0x1ec);
        auVar5 = *(undefined1 (*) [12])((longlong)param_1 + 0x1ec);
        fVar56 = *(float *)((longlong)param_1 + 0x20c);
        pauVar1 = (undefined1 (*) [12])((longlong)param_1 + 0x204);
        fVar39 = *(float *)*pauVar1;
        plVar3 = (longlong *)param_1[0x32];
        fVar23 = (float)local_188;
        fVar31 = local_188._4_4_;
        fVar29 = (float)uStack_180;
        fVar32 = uStack_180._4_4_;
        fVar43 = *(float *)(param_1 + 0x41);
        auVar6 = *pauVar1;
        auVar4 = *pauVar1;
        if (plVar3 == (longlong *)0x0) {
          pfVar17 = (float *)&local_108;
          local_108 = _DAT_1468b5b70;
          uStack_100 = uRam00000001468b5b78;
          uStack_e0 = uRam00000001468b5b98;
          local_e8 = (undefined1  [8])_DAT_1468b5b90;
          uStack_f0 = uRam00000001468b5b88;
          _local_f8 = _DAT_1468b5b80;
        }
        else {
          pfVar17 = (float *)(**(code **)(*plVar3 + 0x420))(plVar3,&local_108,param_1[0x33],0);
        }
        fVar12 = fRam0000000146854548;
        fVar11 = fRam0000000146854544;
        fVar10 = _DAT_146854540;
        fVar9 = fRam0000000146854508;
        fVar8 = fRam0000000146854504;
        fVar7 = _DAT_146854500;
        fVar21 = *pfVar17;
        fVar28 = pfVar17[1];
        fVar27 = pfVar17[2];
        fVar22 = pfVar17[3];
        auVar19._12_4_ = 0;
        auVar19._0_12_ = auVar4;
        auVar25 = *(undefined1 (*) [16])(pfVar17 + 8);
        fVar51 = auVar25._0_4_;
        fVar52 = auVar25._4_4_;
        fVar53 = auVar25._8_4_;
        fVar37 = pfVar17[4];
        fVar40 = pfVar17[5];
        uStack_180._0_4_ = pfVar17[6];
        auVar19 = minps(auVar19,auVar25);
        auVar20._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146854544);
        auVar20._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146854540);
        auVar20._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146854548);
        auVar20._12_4_ = -(uint)(auVar19._12_4_ < fRam000000014685454c);
        iVar16 = movmskps((int)pfVar17,auVar20);
        if (iVar16 == 0) {
          fVar51 = fVar51 * fVar34;
          fVar52 = fVar52 * fVar55;
          fVar53 = fVar53 * fVar54;
          fVar54 = fVar53 * fVar28 - fVar52 * fVar27;
          fVar55 = fVar51 * fVar27 - fVar53 * fVar21;
          fVar34 = fVar52 * fVar21 - fVar51 * fVar28;
          fVar54 = fVar54 + fVar54;
          fVar55 = fVar55 + fVar55;
          fVar34 = fVar34 + fVar34;
          fVar37 = (fVar34 * fVar28 - fVar55 * fVar27) + fVar22 * fVar54 + fVar51 + fVar37;
          fVar40 = (fVar54 * fVar27 - fVar34 * fVar21) + fVar22 * fVar55 + fVar52 + fVar40;
          uStack_180._0_4_ =
               (fVar55 * fVar21 - fVar54 * fVar28) + fVar22 * fVar34 + fVar53 + (float)uStack_180;
        }
        else {
          fVar26 = fVar28 + fVar28;
          fVar30 = fVar27 + fVar27;
          fVar33 = fVar21 * (fVar21 + fVar21);
          fVar44 = fVar22 * (fVar21 + fVar21);
          fVar35 = fVar52 * (fVar21 * fVar26 - fVar22 * fVar30);
          fVar38 = fVar53 * (fVar28 * fVar30 - fVar44);
          fVar41 = fVar51 * (fVar21 * fVar30 - fVar22 * fVar26);
          fVar48 = (fVar22 * fVar30 + fVar21 * fVar26) * fVar51;
          fVar49 = (fVar44 + fVar28 * fVar30) * fVar52;
          fVar50 = (fVar22 * fVar26 + fVar21 * fVar30) * fVar53;
          fVar22 = (float)((uint)((_DAT_146854500 - (fVar27 * fVar30 + fVar28 * fVar26)) * fVar51) &
                          _DAT_1468544c0);
          fVar27 = (float)((uint)((fRam0000000146854504 - (fVar27 * fVar30 + fVar33)) * fVar52) &
                          uRam00000001468544c4);
          fVar26 = (float)((uint)((fRam0000000146854508 - (fVar28 * fVar26 + fVar33)) * fVar53) &
                          uRam00000001468544c8);
          fVar33 = (float)((uint)((fRam000000014685450c - (fVar33 + fVar33)) * auVar25._12_4_) &
                          uRam00000001468544cc);
          fVar28 = fVar31 + fVar31;
          fVar30 = fVar29 + fVar29;
          uStack_180._4_4_ = fRam000000014685450c;
          fVar44 = fVar23 * (fVar23 + fVar23);
          fVar21 = fVar32 * (fVar23 + fVar23);
          fVar45 = (fVar32 * fVar30 + fVar23 * fVar28) * fVar39;
          fVar46 = (fVar21 + fVar31 * fVar30) * fVar43;
          fVar47 = (fVar32 * fVar28 + fVar23 * fVar30) * fVar56;
          fVar36 = fVar43 * (fVar23 * fVar28 - fVar32 * fVar30);
          fVar21 = fVar56 * (fVar31 * fVar30 - fVar21);
          fVar42 = fVar39 * (fVar23 * fVar30 - fVar32 * fVar28);
          fVar23 = (float)((uint)((_DAT_146854500 - (fVar29 * fVar30 + fVar31 * fVar28)) * fVar39) &
                          _DAT_1468544c0);
          fVar29 = (float)((uint)((fRam0000000146854504 - (fVar29 * fVar30 + fVar44)) * fVar43) &
                          uRam00000001468544c4);
          fVar31 = (float)((uint)((fRam0000000146854508 - (fVar31 * fVar28 + fVar44)) * fVar56) &
                          uRam00000001468544c8);
          fVar32 = (float)((uint)((fRam000000014685450c - (fVar44 + fVar44)) * 0.0) &
                          uRam00000001468544cc);
          local_108._0_4_ = fVar45 * fVar35 + fVar23 * fVar22 + fVar42 * fVar50 + fVar32 * fVar37;
          local_108._4_4_ = fVar45 * fVar27 + fVar23 * fVar48 + fVar42 * fVar38 + fVar32 * fVar40;
          uStack_100._0_4_ =
               fVar45 * fVar49 + fVar23 * fVar41 + fVar42 * fVar26 + fVar32 * (float)uStack_180;
          uStack_100._4_4_ =
               fVar45 * fVar33 + fVar23 * fVar33 + fVar42 * fVar33 + fVar32 * fRam000000014685450c;
          auStack_f4 = (undefined1  [4])
                       (fVar29 * fVar27 + fVar36 * fVar48 + fVar46 * fVar38 + fVar32 * fVar40);
          local_f8 = (undefined1  [4])
                     (fVar29 * fVar35 + fVar36 * fVar22 + fVar46 * fVar50 + fVar32 * fVar37);
          uStack_f0._0_4_ =
               fVar29 * fVar49 + fVar36 * fVar41 + fVar46 * fVar26 + fVar32 * (float)uStack_180;
          uStack_f0._4_4_ =
               fVar29 * fVar33 + fVar36 * fVar33 + fVar46 * fVar33 + fVar32 * fRam000000014685450c;
          local_e8._4_4_ = fVar21 * fVar27 + fVar47 * fVar48 + fVar31 * fVar38 + fVar32 * fVar40;
          local_e8._0_4_ = fVar21 * fVar35 + fVar47 * fVar22 + fVar31 * fVar50 + fVar32 * fVar37;
          uStack_e0._0_4_ =
               fVar21 * fVar49 + fVar47 * fVar41 + fVar31 * fVar26 + fVar32 * (float)uStack_180;
          uStack_e0._4_4_ =
               fVar21 * fVar33 + fVar47 * fVar33 + fVar31 * fVar33 + fVar32 * fRam000000014685450c;
          local_d8 = fVar55 * fVar35 + fVar34 * fVar22 + fVar54 * fVar50 +
                     fRam000000014685450c * fVar37;
          fStack_d4 = fVar55 * fVar27 + fVar34 * fVar48 + fVar54 * fVar38 +
                      fRam000000014685450c * fVar40;
          fStack_d0 = fVar55 * fVar49 + fVar34 * fVar41 + fVar54 * fVar26 +
                      fRam000000014685450c * (float)uStack_180;
          fStack_cc = fVar55 * fVar33 + fVar34 * fVar33 + fVar54 * fVar33 +
                      fRam000000014685450c * fRam000000014685450c;
          local_188._0_4_ = fVar37;
          local_188._4_4_ = fVar40;
          FMatrix::RemoveScaling(&local_108);
          fVar54 = (float)(-(uint)(fVar10 <= fVar51 * fVar39) & (_DAT_146854530 ^ (uint)fVar7) ^
                          _DAT_146854530);
          fVar55 = (float)(-(uint)(fVar11 <= fVar52 * fVar43) & (uRam0000000146854534 ^ (uint)fVar8)
                          ^ uRam0000000146854534);
          fVar56 = (float)(-(uint)(fVar12 <= fVar53 * fVar56) & (uRam0000000146854538 ^ (uint)fVar9)
                          ^ uRam0000000146854538);
          uStack_100 = CONCAT44(uStack_100._4_4_,(float)uStack_100 * fVar54);
          local_108 = CONCAT44(local_108._4_4_ * fVar54,(float)local_108 * fVar54);
          fVar54 = (float)auStack_f4 * fVar55;
          fVar34 = (float)local_f8 * fVar55;
          uStack_f0._0_4_ = (float)uStack_f0 * fVar55;
          auStack_f4 = (undefined1  [4])fVar54;
          fVar55 = (float)local_e8._0_4_ * fVar56;
          fVar54 = (float)local_e8._4_4_ * fVar56;
          uStack_e0._0_4_ = (float)uStack_e0 * fVar56;
          local_f8 = (undefined1  [4])fVar34;
          local_e8._4_4_ = fVar54;
          local_e8._0_4_ = fVar55;
          FQuat::FQuat(&local_188,&local_108);
          local_170 = 0x322bcc77;
          auVar24._0_4_ =
               (float)local_188 * (float)local_188 + (float)uStack_180 * (float)uStack_180;
          auVar24._4_4_ = local_188._4_4_ * local_188._4_4_ + uStack_180._4_4_ * uStack_180._4_4_;
          auVar24._8_4_ =
               (float)uStack_180 * (float)uStack_180 + (float)local_188 * (float)local_188;
          auVar24._12_4_ = uStack_180._4_4_ * uStack_180._4_4_ + local_188._4_4_ * local_188._4_4_;
          fVar56 = auVar24._4_4_ + auVar24._0_4_;
          fVar39 = auVar24._8_4_ + auVar24._4_4_;
          fVar43 = auVar24._0_4_ + auVar24._12_4_;
          auVar25._4_4_ = fVar39;
          auVar25._0_4_ = fVar56;
          auVar25._8_4_ = auVar24._12_4_ + auVar24._8_4_;
          auVar25._12_4_ = fVar43;
          auVar25 = rsqrtps(auVar24,auVar25);
          fVar54 = auVar25._0_4_;
          fVar55 = auVar25._4_4_;
          fVar34 = auVar25._12_4_;
          fVar54 = (_DAT_146854520 - fVar54 * fVar54 * fVar56 * _DAT_146854520) * fVar54 + fVar54;
          fVar55 = (fRam0000000146854524 - fVar55 * fVar55 * fVar39 * fRam0000000146854524) * fVar55
                   + fVar55;
          fVar34 = (fRam000000014685452c - fVar34 * fVar34 * fVar43 * fRam000000014685452c) * fVar34
                   + fVar34;
          uStack_180._4_4_ =
               (float)(((uint)(((fRam000000014685452c -
                                fVar34 * fVar34 * fVar43 * fRam000000014685452c) * fVar34 + fVar34)
                              * uStack_180._4_4_) ^ uRam000000014685451c) & -(uint)(1e-08 <= fVar43)
                      ^ uRam000000014685451c);
          local_188 = CONCAT44(((uint)(((fRam0000000146854524 -
                                        fVar55 * fVar55 * fVar39 * fRam0000000146854524) * fVar55 +
                                       fVar55) * local_188._4_4_) ^ uRam0000000146854514) &
                               -(uint)(1e-08 <= fVar39) ^ uRam0000000146854514,
                               ((uint)(((_DAT_146854520 - fVar54 * fVar54 * fVar56 * _DAT_146854520)
                                        * fVar54 + fVar54) * (float)local_188) ^ _DAT_146854510) &
                               -(uint)(1e-08 <= fVar56) ^ _DAT_146854510);
          fVar37 = local_d8;
          fVar40 = fStack_d4;
          uStack_180._0_4_ = fStack_d0;
        }
        local_108 = CONCAT44(fVar40,fVar37);
        local_198 = CONCAT44(local_198._4_4_,0x42480000);
        uStack_100 = CONCAT44(uStack_100._4_4_,(float)uStack_180);
        cVar15 = FUN_14059f060(param_1[0x5e],param_1[0x5a],&local_108,local_168);
        if (cVar15 != '\0') {
          FUN_1405c1370(local_158,param_2);
          local_144 = local_144 + *(float *)((longlong)param_1 + 0x2e4);
          local_148 = local_148 * *(float *)(param_1 + 0x5c);
          local_198 = param_1[0x32];
          FUN_1405c7bd0(param_1[0x5e],&local_178,local_158,param_1[0x33]);
          if (local_178 != 0) {
            local_108 = lVar13;
            uStack_100 = uVar14;
            uStack_f0._4_4_ = 0;
            _local_f8 = auVar5;
            uStack_e0._4_4_ = 0;
            _local_e8 = auVar6;
            FUN_1405aac00(local_178,&local_108,0x3f800000);
            local_190 = &local_188;
            local_198 = local_198 & 0xffffffff00000000;
            local_188 = 0;
            uStack_180 = 0;
            FUN_1405a2d20(local_178,&local_108,local_158[0],0);
            FUN_140591060(&local_108);
            if (local_188 != 0) {
              FMemory::Free();
            }
            local_190 = &local_188;
            local_198 = local_198 & 0xffffffff00000000;
            local_188 = 0;
            uStack_180 = 0;
            FUN_1405a2d20(local_178,&local_108,param_1[0x5a],0);
            FUN_140591060(&local_108);
            if (local_188 != 0) {
              FMemory::Free();
            }
            *(undefined1 *)(local_178 + 0x62) = 0;
            if (local_178 != 0) {
              FUN_1405a53f0();
              local_178 = 0;
            }
          }
          if (local_140 != 0) {
            FMemory::Free();
          }
        }
      }
      else {
        puVar18 = *(undefined8 **)(param_2 + 0x18);
        puVar2 = puVar18 + *(int *)(param_2 + 0x20);
        for (; puVar18 != puVar2; puVar18 = puVar18 + 1) {
          cVar15 = UActorComponent::ComponentHasTag(param_1,*puVar18);
          if (cVar15 != '\0') goto LAB_1405cb3e0;
        }
      }
    }
  }
  return;
}



// FUNCTION 1405cbb30 FUN_1405cbb30 body=1153 status=ok
// SIG undefined FUN_1405cbb30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405cbb30(longlong *param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined4 uVar9;
  ulonglong local_res8 [2];
  longlong local_res18;
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff48;
  undefined8 uVar10;
  undefined4 uVar12;
  ulonglong uVar11;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  longlong local_90;
  undefined4 local_88;
  longlong local_80;
  undefined4 local_78;
  longlong local_68;
  undefined8 local_60;
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  local_res8[0] = local_res8[0] & 0xffffffff00000000;
  lVar6 = param_1[0x23];
  cVar3 = (**(code **)(*param_1 + 0x2a0))();
  if ((cVar3 == '\0') && (*(char *)((longlong)param_2 + 0x42) == '\0')) {
    return;
  }
  bVar2 = true;
  bVar8 = false;
  if ((int)param_2[4] != 0) {
    FName::FName(&local_res20,L"Main",1);
    plVar7 = (longlong *)param_2[3];
    plVar5 = plVar7 + (int)param_2[4];
    while( true ) {
      if (plVar7 == plVar5) {
        return;
      }
      if (*plVar7 == local_res20) break;
      plVar7 = plVar7 + 1;
    }
  }
  if (*param_2 == 0) {
    return;
  }
  if ((param_2[1] != 0) || (*(char *)((longlong)param_2 + 0x41) != '\0')) {
    param_1[0x46] = param_2[1];
  }
  uVar9 = FUN_1405c7440();
  lVar6 = *(longlong *)(lVar6 + 0x168);
  if ((char)param_2[8] == '\0') {
    if (lVar6 == 0) {
      local_88 = DAT_1468b5d98;
      plVar5 = &local_90;
      local_90 = _DAT_1468b5d90;
    }
    else {
      plVar5 = (longlong *)&local_a0;
      local_a0 = *(undefined4 *)(lVar6 + 0x220);
      local_98 = *(undefined4 *)(lVar6 + 0x228);
      uStack_9c = *(undefined4 *)(lVar6 + 0x224);
    }
    plVar7 = &local_80;
    local_80 = *plVar5;
    local_78 = (int)plVar5[1];
  }
  else {
    plVar7 = &local_90;
    local_90 = param_2[5];
    local_88 = (int)param_2[6];
  }
  if (lVar6 == 0) {
LAB_1405cbcbd:
    if (*(char *)((longlong)param_2 + 0x42) == '\0') {
      FUN_14058f8d0(&local_a0,0);
      puVar4 = &local_a0;
      goto LAB_1405cbcf4;
    }
  }
  else {
    local_68 = *plVar7;
    uVar10 = CONCAT44(uVar12,0x42480000);
    local_60 = CONCAT44(local_60._4_4_,(int)plVar7[1]);
    cVar3 = FUN_14059f060(param_1,param_1[0x2f],&local_68,uVar9,uVar10);
    uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
    if (cVar3 == '\0') goto LAB_1405cbcbd;
  }
  local_res20 = 0;
  puVar4 = (undefined4 *)FUN_1405c7bd0(param_1,&local_a8,param_2,0,lVar6);
  uVar12 = (undefined4)((ulonglong)lVar6 >> 0x20);
  bVar2 = false;
  bVar8 = true;
LAB_1405cbcf4:
  FIoRequest::operator=(&local_res18,puVar4);
  if ((bVar8) && (local_a8 != 0)) {
    FUN_1405a53f0();
    local_a8 = 0;
  }
  if ((bVar2) && (CONCAT44(uStack_9c,local_a0) != 0)) {
    FUN_1405a53f0();
  }
  iVar1 = *(int *)((longlong)param_2 + 0x44);
  if (((iVar1 < 0) || ((int)param_1[0x33] <= iVar1)) ||
     (lVar6 = *(longlong *)(param_1[0x32] + (longlong)iVar1 * 8), lVar6 == 0)) {
    lVar6 = param_1[0x31];
  }
  local_68 = *plVar7;
  uVar11 = CONCAT44(uVar12,0x42480000);
  local_60 = CONCAT44(local_60._4_4_,(int)plVar7[1]);
  cVar3 = FUN_14059f060(param_1,lVar6,&local_68,uVar9,uVar11);
  bVar8 = cVar3 == '\0';
  if (bVar8) {
    FUN_14058f8d0(&local_res20,0);
    plVar5 = &local_res20;
  }
  else {
    plVar5 = (longlong *)FUN_1405c7830(param_1,&local_a0,param_2);
  }
  FIoRequest::operator=(local_res8,plVar5);
  if ((bVar8) && (local_res20 != 0)) {
    FUN_1405a53f0();
    local_res20 = 0;
  }
  if ((!bVar8) && (CONCAT44(uStack_9c,local_a0) != 0)) {
    FUN_1405a53f0();
  }
  if (local_res18 != 0) {
    uVar11 = uVar11 & 0xffffffff00000000;
    local_68 = 0;
    local_60 = 0;
    FUN_1405a2d20(local_res18,&local_80,*param_2,0,uVar11,&local_68);
    FUN_140591060(&local_80);
    if (local_68 != 0) {
      FMemory::Free();
    }
    uVar11 = uVar11 & 0xffffffff00000000;
    local_68 = 0;
    local_60 = 0;
    FUN_1405a2d20(local_res18,&local_80,param_1[0x2f],0,uVar11,&local_68);
    FUN_140591060(&local_80);
    if (local_68 != 0) {
      FMemory::Free();
    }
    *(undefined1 *)(local_res18 + 0x62) = 0;
  }
  if (local_res8[0] != 0) {
    local_68 = 0;
    local_60 = 0;
    uVar11 = uVar11 & 0xffffffff00000000;
    FUN_1405a2d20(local_res8[0],&local_80,*param_2,0,uVar11,&local_68);
    FUN_140591060(&local_80);
    if (local_68 != 0) {
      FMemory::Free();
    }
    uVar11 = uVar11 & 0xffffffff00000000;
    local_68 = 0;
    local_60 = 0;
    FUN_1405a2d20(local_res8[0],&local_80,lVar6,0,uVar11,&local_68);
    FUN_140591060(&local_80);
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (param_1[0x47] != 0) {
      local_68 = 0;
      local_60 = 0;
      FUN_1405a2d20(local_res8[0],&local_80,param_1[0x47],0,uVar11 & 0xffffffff00000000,&local_68);
      FUN_140591060(&local_80);
      if (local_68 != 0) {
        FMemory::Free();
      }
    }
    *(undefined1 *)(local_res8[0] + 0x62) = 0;
    if (local_res8[0] != 0) {
      FUN_1405a53f0();
      local_res8[0] = 0;
    }
  }
  if (local_res18 != 0) {
    FUN_1405a53f0();
  }
  return;
}



// FUNCTION 1405cbfc0 FUN_1405cbfc0 body=195 status=ok
// SIG undefined FUN_1405cbfc0(void)

void FUN_1405cbfc0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((((param_1 != (longlong *)0x0) && (*param_2 != 0)) &&
      (lVar2 = (**(code **)(*param_1 + 0x148))(), lVar2 != 0)) &&
     ((cVar1 = FUN_1428c5af0(lVar2), cVar1 != '\0' && (lVar2 = FUN_1405c6c50(param_1), lVar2 != 0)))
     ) {
    FUN_1405cbb30(lVar2,param_2);
    plVar3 = *(longlong **)(lVar2 + 0x248);
    uVar5 = 0;
    uVar4 = (longlong)*(int *)(lVar2 + 0x250) & 0x1fffffffffffffff;
    if (plVar3 + *(int *)(lVar2 + 0x250) < plVar3) {
      uVar4 = uVar5;
    }
    if (uVar4 != 0) {
      do {
        if (*plVar3 != 0) {
          FUN_1405cb320(*plVar3,param_2);
        }
        plVar3 = plVar3 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar4);
    }
  }
  return;
}



// FUNCTION 1405cc090 FUN_1405cc090 body=181 status=ok
// SIG undefined FUN_1405cc090(void)

void FUN_1405cc090(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined4 local_64;
  undefined1 local_58 [80];
  
  local_90 = 0;
  local_88 = 0;
  local_64 = 0;
  local_a8 = param_7;
  local_78 = *(undefined4 *)(param_2 + 1);
  local_98 = param_5;
  local_80 = *param_2;
  local_6c = *(undefined4 *)(param_3 + 1);
  local_74 = *param_3;
  local_66 = param_8;
  local_94 = param_6;
  local_68 = 0x101;
  local_a0 = param_4;
  uVar1 = FUN_1405c1370(local_58,&local_a8);
  FUN_1405cc150(param_1,uVar1);
  if (local_90 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405cc150 FUN_1405cc150 body=260 status=ok
// SIG undefined FUN_1405cc150(void)

void FUN_1405cc150(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*param_2 == 0) {
    plVar2 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
      if (lVar3 != 0) goto LAB_1405cc19d;
      lVar3 = 0;
    }
    else {
LAB_1405cc19d:
      lVar3 = *(longlong *)(lVar3 + 0x28);
    }
    lVar4 = 0;
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x180);
    }
    *param_2 = lVar4;
    if (lVar4 == 0) goto LAB_1405cc22e;
  }
  *(undefined1 *)(param_2 + 8) = 1;
  if ((int)param_2[4] == 0) {
    plVar2 = param_2 + 3;
    if (plVar2 != (longlong *)(param_1 + 0x1b8)) {
      iVar1 = *(int *)(param_1 + 0x1c0);
      _Src = *(void **)(param_1 + 0x1b8);
      *(int *)(param_2 + 4) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0x24) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0x24) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar2,iVar1);
        _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  FUN_1405cbfc0(*(undefined8 *)(param_1 + 0x118),param_2);
LAB_1405cc22e:
  if (param_2[3] == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1405cc260 FUN_1405cc260 body=83 status=ok
// SIG undefined FUN_1405cc260(void)

void FUN_1405cc260(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  }
  if (*(char *)(param_1 + 0x220) != '\0') {
    *(undefined1 *)(param_1 + 0x221) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001405cc2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  return;
}



// FUNCTION 1405cc2c0 FUN_1405cc2c0 body=134 status=ok
// SIG undefined FUN_1405cc2c0(void)

void FUN_1405cc2c0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_1462054a0 != '\0') {
    plVar1 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
    lVar4 = plVar1[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar1 + 0x368))();
      lVar4 = plVar1[0x1f];
    }
    lVar3 = 0;
    lVar2 = lVar3;
    if (lVar4 != 0) {
      lVar2 = *(longlong *)(lVar4 + 0x28);
    }
    if ((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) {
      lVar3 = DAT_1468536c8;
    }
    if (((lVar2 != 0) && (lVar3 != 0)) && (*(longlong *)(lVar2 + 0x48) != 0)) {
      FUN_1405a1960();
      return;
    }
  }
  return;
}



// FUNCTION 1405cc350 FUN_1405cc350 body=66 status=ok
// SIG undefined FUN_1405cc350(void)

void FUN_1405cc350(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1405a2620();
  lVar1 = *(longlong *)(param_1 + 0x460);
  *(longlong *)(lVar1 + 0x380) = param_1;
  uVar2 = FUN_1405b5730();
  uVar2 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
  *(undefined8 *)(lVar1 + 0x388) = uVar2;
  return;
}



// FUNCTION 1405cc3a0 FUN_1405cc3a0 body=85 status=ok
// SIG undefined FUN_1405cc3a0(void)

void FUN_1405cc3a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1405a2620();
  if (*(longlong *)(param_1 + 0x538) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x538) + 0x7c0) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x460);
  *(longlong *)(lVar1 + 0x380) = param_1;
  uVar2 = FUN_1405b5730();
  uVar2 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar2);
  *(undefined8 *)(lVar1 + 0x388) = uVar2;
  return;
}



// FUNCTION 1405cc400 FUN_1405cc400 body=302 status=ok
// SIG undefined FUN_1405cc400(void)

void FUN_1405cc400(longlong param_1,longlong *param_2,longlong param_3,uint param_4,int param_5,
                  uint param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  BOOL BVar6;
  undefined8 uVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  uVar5 = uStack_1c;
  if ((((param_2 != (longlong *)0x0) && (param_3 != 0)) && (param_4 < 0x80)) &&
     ((param_5 - 1U < 0x7f && (param_6 < 0x10)))) {
    uVar7 = (**(code **)(*param_2 + 0x548))(param_2);
    uVar2 = *(undefined4 *)(param_3 + 0x28);
    uStack_1c._3_1_ = SUB41(uVar5,3);
    uStack_1c._0_3_ = CONCAT12((char)param_6,CONCAT11((char)param_5,(char)param_4));
    BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
    if (BVar6 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
    }
    iVar3 = *(int *)(param_1 + 0x1c0);
    *(int *)(param_1 + 0x1c0) = iVar3 + 1;
    if (*(int *)(param_1 + 0x1c4) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1 + 0x1b8,iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x1b8);
    local_28 = (undefined4)uVar7;
    uStack_24 = (undefined4)((ulonglong)uVar7 >> 0x20);
    puVar1 = (undefined4 *)(lVar4 + (longlong)iVar3 * 0x18);
    *puVar1 = local_28;
    puVar1[1] = uStack_24;
    puVar1[2] = uVar2;
    puVar1[3] = uStack_1c;
    *(ulonglong *)(lVar4 + 0x10 + (longlong)iVar3 * 0x18) = CONCAT44(param_8,param_7);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  }
  return;
}



// FUNCTION 1405cc530 FUN_1405cc530 body=507 status=ok
// SIG undefined FUN_1405cc530(void)

longlong FUN_1405cc530(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  longlong *plVar2;
  undefined8 uVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  float local_res18 [2];
  longlong local_78;
  longlong local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  
  if ((param_3 == 0) || (*(longlong *)(param_1 + 0x350) == 0)) goto LAB_1405cc6ed;
  lVar6 = 0;
  if (*(longlong *)(param_1 + 0x358) == 0) {
    fVar1 = *(float *)(param_3 + 0x38);
    plVar5 = (longlong *)
             TScriptInterface<IBlendableInterface>::
             TScriptInterface<IBlendableInterface><UMaterialInterface>(local_68,param_1);
    plVar2 = *(longlong **)(param_1 + 0x350);
    local_78 = *plVar5;
    if (local_78 != 0) {
      lVar6 = plVar5[1];
    }
    local_70 = lVar6;
    lVar6 = FUN_1405c6b90(plVar2,&local_78);
    uVar3 = DAT_1468536c8;
    if (lVar6 == 0) goto LAB_1405cc6ed;
    fVar9 = 0.0;
    local_res18[0] = 0.0;
    uVar7 = (**(code **)(*plVar2 + 0x148))(plVar2);
    lVar8 = FUN_14059b380(uVar3,uVar7,lVar6 + 0x10,local_res18);
    if (lVar8 == 0) goto LAB_1405cc6ed;
    if (*(int *)(lVar6 + 0x28) != 0) {
      fVar9 = *(float *)(*(longlong *)(lVar6 + 0x20) + -4 + (longlong)*(int *)(lVar6 + 0x28) * 4);
    }
    if (fVar9 <= fVar1) {
      fVar9 = fVar1;
    }
    if (fVar9 <= local_res18[0]) goto LAB_1405cc6ed;
  }
  FUN_1405d14c0(param_1,*(undefined4 *)(param_3 + 0x38));
  if (*(longlong *)(param_1 + 0x358) != 0) {
    local_78 = 0;
    local_70 = 0;
    FUN_1405a2d20(*(longlong *)(param_1 + 0x358),local_68,param_3,0,0,&local_78);
    if (local_78 != 0) {
      FMemory::Free();
    }
    cVar4 = FUN_14059f160(local_68);
    if (cVar4 != '\0') {
      FUN_14058f8f0(param_2,local_68);
      *(undefined4 *)(param_2 + 0x10) = local_58;
      FUN_140591060(local_68);
      return param_2;
    }
    FUN_140591060(local_68);
  }
  (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x10))();
LAB_1405cc6ed:
  FUN_14058f8f0(param_2,&DAT_1461fcfe0);
  *(undefined4 *)(param_2 + 0x10) = DAT_1461fcff0;
  return param_2;
}



// FUNCTION 1405cc730 FUN_1405cc730 body=38 status=ok
// SIG undefined FUN_1405cc730(void)

undefined8 FUN_1405cc730(undefined8 param_1,undefined8 param_2,void *param_3)

{
  if (param_3 != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(param_3,0,0xa0);
  }
  return 0xffffffff;
}



// FUNCTION 1405cc760 Rehash body=634 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<ULandscapeLayerInfoObject_*,float>,TDefaultMapHashableKeyFuncs<ULandscapeLayerInfoObject_*,float,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar10 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar10 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar10) {
      uVar12 = 0;
      uVar14 = (ulonglong)uVar10;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar5 = (longlong)(int)*plVar2 - 1U & uVar12;
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar5 * 4) = 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    iVar9 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar9 != 0) {
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puStack_28;
      }
      uVar10 = *puVar15;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar10 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar8 = local_58 + 1;
        bVar3 = (int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar8;
        if (bVar3) goto LAB_1405cc89f;
        uVar10 = puVar15[lVar4 + 1];
      }
      uStack_54 = -uVar10 & uVar10;
      iVar8 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_44 = (iStack_40 - iVar8) + 0x1f;
      if (iVar9 < iStack_44) {
LAB_1405cc89f:
        iStack_44 = iVar9;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar9) {
      do {
        lVar4 = *param_1;
        lVar6 = (longlong)iStack_1c;
        iVar9 = (int)(*(ulonglong *)(lVar4 + lVar6 * 0x18) >> 4);
        uVar11 = 0x9e3779b9U - iVar9 ^ iVar9 << 8;
        uVar13 = -(uVar11 + iVar9) ^ uVar11 >> 0xd;
        uVar10 = (iVar9 - uVar11) - uVar13 ^ uVar13 >> 0xc;
        uVar11 = (uVar11 - uVar10) - uVar13 ^ uVar10 << 0x10;
        uVar13 = (uVar13 - uVar11) - uVar10 ^ uVar11 >> 5;
        uVar10 = (uVar10 - uVar11) - uVar13 ^ uVar13 >> 3;
        uVar11 = (uVar11 - uVar10) - uVar13 ^ uVar10 << 10;
        uVar10 = ((uVar13 - uVar11) - uVar10 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)(lVar4 + 0x14 + lVar6 * 0x18) = uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar10) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1405cc9e0 FUN_1405cc9e0 body=228 status=ok
// SIG undefined FUN_1405cc9e0(void)

void FUN_1405cc9e0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar5 = *param_1;
    lVar6 = (longlong)param_2 * 0x20;
    lVar2 = (longlong)(int)((int)param_1[9] - 1U & *(uint *)(lVar6 + 0x1c + lVar5));
    plVar1 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar1 = param_1 + 7;
    }
    piVar3 = (int *)((longlong)plVar1 + lVar2 * 4);
    iVar4 = *(int *)((longlong)plVar1 + lVar2 * 4);
    while (iVar4 != -1) {
      if (iVar4 == param_2) {
        *piVar3 = *(int *)(lVar6 + 0x18 + lVar5);
        break;
      }
      piVar3 = (int *)(lVar5 + 0x18 + (longlong)iVar4 * 0x20);
      iVar4 = *piVar3;
    }
  }
  lVar2 = (longlong)param_2 * 0x20 + *param_1;
  iVar4 = *(int *)(lVar2 + 0x10);
  lVar5 = *(longlong *)(lVar2 + 8);
  if (iVar4 != 0) {
    do {
      FUN_140591060(lVar5);
      lVar5 = lVar5 + 0x18;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar5 = *(longlong *)(lVar2 + 8);
  }
  if (lVar5 != 0) {
    FMemory::Free(lVar5);
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(param_1,param_2,1);
  return;
}



// FUNCTION 1405ccad0 Remove body=353 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar10 = (int)(param_2 >> 4);
  uVar7 = (longlong)(int)param_1[9] - 1;
  uVar8 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
  uVar5 = -(uVar8 + iVar10) ^ uVar8 >> 0xd;
  uVar11 = (iVar10 - uVar8) - uVar5 ^ uVar5 >> 0xc;
  uVar8 = (uVar8 - uVar11) - uVar5 ^ uVar11 << 0x10;
  uVar5 = (uVar5 - uVar8) - uVar11 ^ uVar8 >> 5;
  uVar11 = (uVar11 - uVar8) - uVar5 ^ uVar5 >> 3;
  uVar8 = (uVar8 - uVar11) - uVar5 ^ uVar11 << 10;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  iVar10 = *(int *)((longlong)plVar6 +
                   (((longlong)(int)((uVar5 - uVar8) - uVar11) ^ (ulonglong)(uVar8 >> 0xf)) & uVar7)
                   * 4);
  if (iVar10 != -1) {
    lVar4 = *param_1;
    do {
      lVar9 = (longlong)iVar10;
      if (*(ulonglong *)(lVar4 + lVar9 * 0x18) == param_2) {
        uVar7 = (longlong)*(int *)(lVar4 + 0x14 + lVar9 * 0x18) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar6 + uVar7 * 4);
        iVar3 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x0001405ccbe2;
      }
      iVar10 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
    } while (iVar10 != -1);
  }
  return 0;
joined_r0x0001405ccbe2:
  if (iVar3 == -1) {
LAB_1405ccc08:
    TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar10,1);
    return 1;
  }
  if (iVar3 == iVar10) {
    *puVar2 = *(undefined4 *)(lVar4 + lVar9 * 0x18 + 0x10);
    goto LAB_1405ccc08;
  }
  lVar1 = (longlong)iVar3 * 3 + 2;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x0001405ccbe2;
}



// FUNCTION 1405ccc60 FUN_1405ccc60 body=318 status=ok
// SIG undefined FUN_1405ccc60(void)

void FUN_1405ccc60(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  int local_38;
  
  if ((param_2 != 0) && (lVar5 = (longlong)*(int *)(param_1 + 400), *(int *)(param_1 + 400) != 0)) {
    iVar6 = 0;
    local_38 = (int)**(undefined8 **)(param_1 + 0x188);
    bVar7 = local_38 != *(int *)(param_2 + 0x28);
    lVar2 = 0;
    iVar3 = 0;
    do {
      lVar2 = lVar2 + 1;
      iVar4 = iVar3 + 1;
      if (lVar2 < lVar5) {
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x188) + lVar2 * 0xc);
        do {
          local_38 = (int)*puVar1;
          if (bVar7 != (local_38 != *(int *)(param_2 + 0x28))) break;
          iVar4 = iVar4 + 1;
          lVar2 = lVar2 + 1;
          puVar1 = (undefined8 *)((longlong)puVar1 + 0xc);
        } while (lVar2 < lVar5);
      }
      if (bVar7 != false) {
        if (iVar6 != iVar3) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar6 * 0xc),
                     (void *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar3 * 0xc),
                     (longlong)(iVar4 - iVar3) * 0xc);
        }
        iVar6 = iVar6 + (iVar4 - iVar3);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar3 = iVar4;
    } while (lVar2 < lVar5);
    *(int *)(param_1 + 400) = iVar6;
  }
  return;
}



// FUNCTION 1405ccda0 FUN_1405ccda0 body=601 status=ok
// SIG undefined FUN_1405ccda0(void)

void FUN_1405ccda0(longlong param_1)

{
  float fVar1;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  bool bVar15;
  float fVar16;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [48];
  float fVar2;
  
  puVar6 = *(undefined8 **)(param_1 + 0x1e8);
  iVar8 = *(int *)(param_1 + 0x1f0);
  uVar7 = 0;
  puVar11 = puVar6 + (longlong)iVar8 * 8;
  if (puVar6 != puVar11) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (((lVar4 == 0) && (lVar4 = FUN_1423407b0(param_1), lVar4 == 0)) ||
         (lVar12 = *(longlong *)(param_1 + 0x178), lVar12 == 0)) {
LAB_1405cce2d:
        if (*(char *)(puVar6 + 4) == '\0') {
          cVar3 = FUN_14059ee90(puVar6);
          if (cVar3 != '\0') {
            if (*(longlong *)(param_1 + 0x188) == 0) {
              FUN_1405ac8f0(puVar6,(int)(*(float *)(param_1 + 400) * 1000.0),4);
            }
            else {
              local_68 = 0;
              local_60 = 0;
              FUN_1405a2d20(*puVar6,local_58,*(longlong *)(param_1 + 0x188),0,0,&local_68);
              FUN_140591060(local_58);
              if (local_68 != 0) {
                FMemory::Free();
              }
            }
          }
          *(undefined1 *)(puVar6 + 4) = 1;
        }
      }
      else {
        fVar16 = *(float *)(lVar4 + 0x790) - *(float *)(puVar6 + 3);
        if ((*(byte *)(lVar12 + 0x60) & 1) == 0) {
          fVar1 = *(float *)((longlong)puVar6 + 0x1c);
          fVar2 = *(float *)((longlong)puVar6 + 0x1c);
        }
        else {
          fVar1 = *(float *)(lVar12 + 0x4c);
          fVar2 = *(float *)(lVar12 + 0x4c);
        }
        if (fVar2 <= fVar16 && fVar16 != fVar1) goto LAB_1405cce2d;
      }
      puVar6 = puVar6 + 8;
    } while (puVar6 != puVar11);
    iVar8 = *(int *)(param_1 + 0x1f0);
  }
  if (iVar8 != 0) {
    bVar15 = *(char *)(*(longlong *)(param_1 + 0x1e8) + 0x20) == '\0';
    lVar4 = (longlong)iVar8;
    uVar9 = uVar7;
    uVar14 = uVar7;
    do {
      iVar8 = (int)uVar9;
      uVar7 = uVar7 + 1;
      uVar9 = (ulonglong)(iVar8 + 1);
      if ((longlong)uVar7 < lVar4) {
        pcVar5 = (char *)(*(longlong *)(param_1 + 0x1e8) + 0x20 + uVar7 * 0x40);
        do {
          if (bVar15 != (*pcVar5 == '\0')) break;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          uVar7 = uVar7 + 1;
          pcVar5 = pcVar5 + 0x40;
        } while ((longlong)uVar7 < lVar4);
      }
      iVar10 = (int)uVar9 - iVar8;
      if (bVar15 == false) {
        lVar12 = (longlong)iVar8 * 0x40 + *(longlong *)(param_1 + 0x1e8);
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          FUN_140591060(lVar12);
          lVar12 = lVar12 + 0x40;
        }
      }
      else {
        iVar13 = (int)uVar14;
        if (iVar13 != iVar8) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar13 * 0x40 + *(longlong *)(param_1 + 0x1e8)),
                     (void *)((longlong)iVar8 * 0x40 + *(longlong *)(param_1 + 0x1e8)),
                     (longlong)iVar10 << 6);
        }
        uVar14 = (ulonglong)(uint)(iVar13 + iVar10);
      }
      bVar15 = (bool)(bVar15 ^ 1);
    } while ((longlong)uVar7 < lVar4);
    *(int *)(param_1 + 0x1f0) = (int)uVar14;
  }
  return;
}



// FUNCTION 1405cd000 FUN_1405cd000 body=385 status=ok
// SIG undefined FUN_1405cd000(void)

void FUN_1405cd000(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_38;
  
  if (((param_1 != (longlong *)0x0) && (param_2 != 0)) &&
     (plVar1 = (longlong *)(**(code **)(*param_1 + 0x670))(), plVar1 != (longlong *)0x0)) {
    uVar2 = FUN_1405db430();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if ((lVar3 != 0) && (lVar4 = (longlong)*(int *)(lVar3 + 400), *(int *)(lVar3 + 400) != 0)) {
      iVar9 = 0;
      local_38 = (int)**(undefined8 **)(lVar3 + 0x188);
      bVar10 = local_38 != *(int *)(param_2 + 0x28);
      lVar6 = 0;
      iVar7 = 0;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar7 + 1;
        if (lVar6 < lVar4) {
          puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x188) + lVar6 * 0xc);
          do {
            local_38 = (int)*puVar5;
            if (bVar10 != (local_38 != *(int *)(param_2 + 0x28))) break;
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + 1;
            puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
          } while (lVar6 < lVar4);
        }
        if (bVar10 != false) {
          if (iVar9 != iVar7) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(lVar3 + 0x188) + (longlong)iVar9 * 0xc),
                       (void *)(*(longlong *)(lVar3 + 0x188) + (longlong)iVar7 * 0xc),
                       (longlong)(iVar8 - iVar7) * 0xc);
          }
          iVar9 = iVar9 + (iVar8 - iVar7);
        }
        bVar10 = (bool)(bVar10 ^ 1);
        iVar7 = iVar8;
      } while (lVar6 < lVar4);
      *(int *)(lVar3 + 400) = iVar9;
    }
  }
  return;
}



// FUNCTION 1405cd190 GetStride body=6 status=ok
// SIG undefined GetStride(void)

undefined8
TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>::GetStride(void)

{
  return 0x30;
}



// FUNCTION 1405cd1c0 Reset body=176 status=ok
// SIG undefined Reset(void)

void TSet<TTuple<FName,FAsyncPackage_*>,TDefaultMapHashableKeyFuncs<FName,FAsyncPackage_*,0>,FDefaultSetAllocator>
     ::Reset(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar1 = *(int *)(param_1 + 0x28) + 0x1f;
  _Dst = *(void **)(param_1 + 0x20);
  if (*(void **)(param_1 + 0x20) == (void *)0x0) {
    _Dst = (void *)(param_1 + 0x10);
  }
  ::_guard_xfg_dispatch_icall_nop
            (_Dst,0,(longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) << 2);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar3 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar3 = param_1 + 0x38;
      }
      uVar2 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar3 + uVar2 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1405cd270 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x18,0);
    iVar3 = (int)(uVar1 / 0x18);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x18,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1405cd300 ResizeGrow body=291 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FBulkDataIoDispatcherRequest::Request,TInlineAllocator<8,TSizedDefaultAllocator<32>_>_>
     ::ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x148);
  if (uVar1 < 9) {
    uVar5 = 8;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x14c) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x28,0);
    uVar5 = (uint)(uVar2 / 0x28);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x14c) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x140);
  if (uVar5 < 9) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x28);
    pvVar3 = *(void **)((longlong)param_1 + 0x140);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x28,0);
        *(void **)((longlong)param_1 + 0x140) = pvVar3;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x28);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x28;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x140) = uVar4;
  return;
}



// FUNCTION 1405cd430 FUN_1405cd430 body=247 status=ok
// SIG undefined FUN_1405cd430(void)

void FUN_1405cd430(void)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  plVar4 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
  lVar8 = plVar4[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar8 = plVar4[0x1f];
    if (lVar8 == 0) {
      return;
    }
  }
  lVar3 = DAT_1468536c8;
  uVar1 = *(uint *)(lVar8 + 0x60);
  if ((((0 < (int)uVar1) && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0')) &&
     ((DAT_1468536c8 != 0 && (0 < (int)uVar1)))) {
    lVar7 = 0;
    uVar9 = (ulonglong)uVar1;
    do {
      lVar5 = FUN_141796df0(*(longlong *)(lVar8 + 0x58) + lVar7);
      if (lVar5 != 0) {
        lVar6 = UPawnAction_Sequence::StaticClass();
        if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_1405a1960(lVar3,lVar5);
        }
      }
      lVar7 = lVar7 + 0x18;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}



// FUNCTION 1405cd530 FUN_1405cd530 body=662 status=ok
// SIG undefined FUN_1405cd530(void)

undefined8 *
FUN_1405cd530(longlong param_1,undefined8 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  bool bVar12;
  char cVar13;
  int *piVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  LARGE_INTEGER local_88 [2];
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  
  lVar16 = *(longlong *)(param_1 + 0x90);
  lVar17 = (longlong)*(int *)(param_1 + 0x98) * 0x78 + lVar16;
  if (lVar16 != lVar17) {
    iVar2 = param_3[3];
    piVar15 = (int *)(lVar16 + 0x14);
    iVar3 = param_3[2];
    iVar4 = param_3[1];
    iVar5 = *param_3;
    do {
      if ((((piVar15[1] == iVar4 && piVar15[3] == iVar2) && iVar5 == *piVar15) &&
           piVar15[2] == iVar3) && (*(longlong *)(piVar15 + 0x11) != 0)) {
        cVar13 = FUN_142c48f60(*(longlong *)(piVar15 + 0x11),param_4,0);
        if (cVar13 != '\0') goto LAB_1405cd765;
      }
      else {
        QueryPerformanceCounter(local_88);
        piVar6 = (int *)param_5[3];
        bVar12 = false;
        piVar14 = (int *)0x0;
        fVar19 = (float)((double)local_88[0].QuadPart * DAT_1468b02f8 + 16777216.0);
        if ((piVar6 != (int *)0x0) && (((char)piVar15[0xb] != '\0' || (0.0 < (float)piVar15[0xc]))))
        {
          local_78 = *piVar15;
          iStack_74 = piVar15[1];
          iStack_70 = piVar15[2];
          iStack_6c = piVar15[3];
          piVar14 = *(int **)(piVar6 + 0x50);
          if (*(int **)(piVar6 + 0x50) == (int *)0x0) {
            piVar14 = piVar6;
          }
          piVar1 = piVar14 + (longlong)piVar6[0x52] * 10;
          for (; piVar14 != piVar1; piVar14 = piVar14 + 10) {
            if (((piVar14[1] == iStack_74 && piVar14[2] == iStack_70) && piVar14[3] == iStack_6c) &&
                *piVar14 == local_78) {
              if (piVar14 != (int *)0x0) {
                piVar14 = piVar14 + 4;
                goto LAB_1405cd6c5;
              }
              break;
            }
          }
          piVar14 = (int *)FUN_1405bfdf0(piVar6,piVar15);
LAB_1405cd6c5:
          if (0.0 <= (float)piVar14[4]) {
            if ((((char)piVar15[0xb] != '\0') && (0.0 < (float)piVar14[5])) ||
               (fVar18 = fVar19 - (float)piVar14[4],
               (float)piVar15[0xc] <= fVar18 && fVar18 != (float)piVar15[0xc])) {
              bVar12 = true;
            }
            if (bVar12) goto LAB_1405cd72c;
          }
          else {
            iVar7 = *piVar15;
            iVar8 = piVar15[1];
            iVar9 = piVar15[2];
            iVar10 = piVar15[3];
            piVar14[4] = (int)fVar19;
            *piVar14 = iVar7;
            piVar14[1] = iVar8;
            piVar14[2] = iVar9;
            piVar14[3] = iVar10;
          }
        }
        if ((*(longlong *)(piVar15 + 0x15) != 0) &&
           ((*(longlong *)(piVar15 + 9) == 0 ||
            (cVar13 = FUN_142c48f60(*(longlong *)(piVar15 + 9),param_4,0), cVar13 != '\0')))) {
          if (piVar14 != (int *)0x0) {
            piVar14[5] = (int)fVar19;
          }
LAB_1405cd765:
          *param_5 = *(undefined8 *)(lVar16 + 0x68);
          param_5[1] = *(undefined8 *)(lVar16 + 0x70);
          *(undefined1 *)(param_5 + 2) = *(undefined1 *)(lVar16 + 0x10);
          uVar11 = *(undefined8 *)(lVar16 + 0x1c);
          *param_2 = *(undefined8 *)(lVar16 + 0x14);
          param_2[1] = uVar11;
          return param_2;
        }
      }
LAB_1405cd72c:
      lVar16 = lVar16 + 0x78;
      piVar15 = piVar15 + 0x1e;
    } while (lVar16 != lVar17);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1405cd7d0 FUN_1405cd7d0 body=151 status=ok
// SIG undefined FUN_1405cd7d0(void)

void FUN_1405cd7d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_1405c6c50();
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x22c) = param_5;
    *(undefined4 *)(lVar2 + 0x1f8) = param_2;
    *(undefined4 *)(lVar2 + 0x1fc) = param_3;
    if (param_4 != 0) {
      iVar1 = *(int *)(lVar2 + 0x208);
      *(int *)(lVar2 + 0x208) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x20c) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(lVar2 + 0x200),iVar1);
      }
      *(longlong *)(*(longlong *)(lVar2 + 0x200) + (longlong)iVar1 * 8) = param_4;
    }
  }
  return;
}



// FUNCTION 1405cd870 FUN_1405cd870 body=144 status=ok
// SIG undefined FUN_1405cd870(void)

void FUN_1405cd870(longlong param_1,longlong param_2,undefined4 param_3,char param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined8 in_R8;
  longlong local_res10;
  undefined4 local_res18 [4];
  undefined1 local_28 [8];
  longlong *local_20;
  undefined4 *local_18;
  
  if (param_2 != 0) {
    local_res10 = param_2;
    local_res18[0] = param_3;
    if (*(longlong *)(param_1 + 0x358) != 0) {
      FUN_1405aaa50(*(longlong *)(param_1 + 0x358),param_2,in_R8,param_5,param_6,0);
    }
    if (param_4 != '\0') {
      local_20 = &local_res10;
      local_18 = local_res18;
      FUN_1405c0150(param_1 + 0x2d8,local_28,&local_20,0);
    }
  }
  return;
}



// FUNCTION 1405cd900 FUN_1405cd900 body=24 status=ok
// SIG undefined FUN_1405cd900(void)

void FUN_1405cd900(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x240) = param_3;
  *(undefined4 *)(param_1 + 0x244) = param_4;
  *(undefined8 *)(param_1 + 0x238) = param_2;
  return;
}



// FUNCTION 1405cd930 FUN_1405cd930 body=54 status=ok
// SIG undefined FUN_1405cd930(void)

undefined1 FUN_1405cd930(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = FUN_14059b7e0(*(undefined8 *)(param_1 + 0x118),0);
  if (lVar1 != 0) {
    fVar2 = (float)FUN_14059b630(lVar1);
    if (fVar2 < 250000.0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1405cd970 FUN_1405cd970 body=418 status=ok
// SIG undefined FUN_1405cd970(void)

void FUN_1405cd970(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_18;
  float fStack_10;
  
  if (((*(longlong *)(param_1 + 0x38) != 0) && (param_2 != 0)) &&
     (*(longlong *)(param_2 + 0x18) != 0)) {
    lVar5 = FUN_142628290(param_2);
    if (lVar5 != 0) {
      lVar5 = FUN_142628290(param_2);
      if (((*(uint *)(lVar5 + 0x830) & 0x4000) != 0) && (*(longlong *)(param_2 + 0x100) != 0)) {
        puVar6 = (undefined8 *)((param_3 & 0xffffffff) + param_5);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        *(undefined1 *)(puVar6 + 5) = 1;
        cVar4 = FUN_14263b0c0(param_2);
        if (cVar4 == '\0') {
          local_18 = *(undefined8 *)(param_5 + 0x10);
          fStack_10 = *(float *)(param_5 + 0x18);
        }
        else {
          fVar1 = *(float *)(param_5 + 0x14);
          fVar2 = *(float *)(param_5 + 0x18);
          fVar3 = *(float *)(param_5 + 0x10);
          fStack_10 = *(float *)(param_2 + 0xe8) * 1.0 + fVar2 * *(float *)(param_2 + 0xd8) +
                      fVar1 * *(float *)(param_2 + 200) + fVar3 * *(float *)(param_2 + 0xb8);
          local_18 = CONCAT44(*(float *)(param_2 + 0xe4) * 1.0 + fVar2 * *(float *)(param_2 + 0xd4)
                              + fVar1 * *(float *)(param_2 + 0xc4) +
                                fVar3 * *(float *)(param_2 + 0xb4),
                              *(float *)(param_2 + 0xe0) * 1.0 + fVar2 * *(float *)(param_2 + 0xd0)
                              + fVar1 * *(float *)(param_2 + 0xc0) +
                                fVar3 * *(float *)(param_2 + 0xb0));
        }
        puVar6[3] = local_18;
        *(float *)(puVar6 + 4) = fStack_10;
        uVar7 = FUN_1424116d0(param_1 + 0x50,*(undefined4 *)(param_5 + 0xc),0,0);
        *(undefined4 *)((longlong)puVar6 + 0x24) = uVar7;
      }
    }
  }
  return;
}



// FUNCTION 1405cdb20 FUN_1405cdb20 body=561 status=ok
// SIG undefined FUN_1405cdb20(void)

void FUN_1405cdb20(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 local_res8;
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined4 local_50;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined1 local_30 [16];
  undefined4 local_20;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  lVar3 = FUN_142628290(param_3);
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_3 + 0x18) == 0) {
    return;
  }
  cVar2 = FUN_14059ee90(param_2);
  if (cVar2 != '\0') {
    return;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x118);
  if (lVar3 == 0) {
    lVar3 = FUN_142628290(param_3);
    if (lVar3 == 0) goto LAB_1405cdc45;
    uVar4 = FUN_142628290(param_3);
    lVar3 = FUN_14059d650(uVar4);
    if (lVar3 == 0) goto LAB_1405cdc45;
    local_res8 = 0;
    FUN_142382f60(lVar3,*(undefined8 *)(param_3 + 0x18),&DAT_146af29ec,0);
  }
  else {
    local_res8 = 0;
    lVar3 = FUN_1405ab470(lVar3,0,1);
  }
  if (lVar3 != 0) {
    lVar5 = FUN_1405a3150(lVar3,local_30,*(undefined8 *)(param_1 + 0x38),0);
    FUN_1405913a0(param_2,lVar5);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar5 + 0x10);
    FUN_140591060(local_30);
    FUN_1405a9420(lVar3,*(undefined4 *)(param_1 + 0x4c));
    FUN_1405a9540(lVar3,2);
  }
LAB_1405cdc45:
  FUN_14058f8f0(local_48,param_2);
  lVar3 = *(longlong *)(param_3 + 0x18);
  local_38 = *(undefined4 *)(param_2 + 0x10);
  plVar8 = (longlong *)(lVar3 + 0x840);
  FUN_14058f8f0(local_60,local_48);
  local_50 = local_38;
  FUN_14058f8f0(local_78,local_60);
  local_68 = local_50;
  plVar6 = (longlong *)FMemory::Realloc(0,0x40);
  if (plVar6 != (longlong *)0x0) {
    FUN_14058f8f0(local_30,local_78);
    local_20 = local_68;
    FUN_1405c0da0(plVar6,param_1,FUN_1405cb0d0,local_30);
  }
  FUN_140591060(local_78);
  FUN_140591060(local_60);
  if (plVar6 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_res8);
    iVar1 = *(int *)(lVar3 + 0x848);
    *(int *)(lVar3 + 0x848) = iVar1 + 1;
    if (*(int *)(lVar3 + 0x84c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar1);
    }
    puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar8);
    *puVar7 = plVar6;
    *(undefined4 *)(puVar7 + 1) = 4;
  }
  FUN_140591060(local_48);
  return;
}



// FUNCTION 1405cdd60 FUN_1405cdd60 body=399 status=ok
// SIG undefined FUN_1405cdd60(void)

void FUN_1405cdd60(longlong param_1,float *param_2,float param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  longlong local_68 [2];
  undefined1 local_58 [80];
  
  puVar2 = *(undefined8 **)(param_1 + 0x1e8);
  puVar3 = puVar2 + (longlong)*(int *)(param_1 + 0x1f0) * 8;
  if (puVar2 == puVar3) {
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1d4);
  }
  else {
    do {
      if (((param_3 == 0.0) ||
          (fVar5 = (float)*(undefined8 *)((longlong)puVar2 + 0x34) - *param_2,
          fVar4 = *(float *)((longlong)puVar2 + 0x3c) - param_2[2],
          (*(float *)(puVar2 + 7) - param_2[1]) * (*(float *)(puVar2 + 7) - param_2[1]) +
          fVar5 * fVar5 + fVar4 * fVar4 < param_3 * param_3)) && (*(char *)(puVar2 + 4) == '\0')) {
        cVar1 = FUN_14059ee90(puVar2);
        if (cVar1 != '\0') {
          if (*(longlong *)(param_1 + 0x1d8) == 0) {
            FUN_1405ac8f0(puVar2,(int)(*(float *)(param_1 + 0x1e0) * 1000.0),4);
          }
          else {
            local_68[0] = 0;
            local_68[1] = 0;
            FUN_1405a2d20(*puVar2,local_58,*(longlong *)(param_1 + 0x1d8),0,0,local_68);
            FUN_140591060(local_58);
            if (local_68[0] != 0) {
              FMemory::Free();
            }
          }
        }
        *(undefined1 *)(puVar2 + 4) = 1;
      }
      puVar2 = puVar2 + 8;
    } while (puVar2 != puVar3);
    *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1d4);
  }
  return;
}



// FUNCTION 1405cdef0 FUN_1405cdef0 body=94 status=ok
// SIG undefined FUN_1405cdef0(void)

void FUN_1405cdef0(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  }
  if (*(char *)(param_1 + 0x220) != '\0') {
    *(undefined1 *)(param_1 + 0x221) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001405cdf47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d8));
  return;
}



// FUNCTION 1405cdf50 FUN_1405cdf50 body=49 status=ok
// SIG undefined FUN_1405cdf50(void)

void FUN_1405cdf50(longlong param_1)

{
  FUN_1405ac8f0(param_1 + 0x1b0,0,4);
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}



// FUNCTION 1405cdf90 FUN_1405cdf90 body=884 status=ok
// SIG undefined FUN_1405cdf90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405cdf90(longlong param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  float *pfVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  float *pfVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  uint uVar16;
  longlong *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *local_68;
  int local_60;
  uint local_5c;
  longlong *local_58;
  int local_50;
  
  lVar5 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
  if (lVar5 != 0) {
    uVar2 = *(undefined1 *)(param_1 + 0x24);
    *(undefined1 *)(param_1 + 0x24) = 1;
    FUN_14059c780(DAT_1468536c8,&local_58,lVar5);
    plVar17 = (longlong *)0x0;
    local_68 = (float *)0x0;
    local_60 = 0;
    local_5c = 0;
    plVar7 = (longlong *)
             ((ulonglong)((longlong)(local_58 + local_50) + (7 - (longlong)local_58)) >> 3);
    if (local_58 + local_50 < local_58) {
      plVar7 = plVar17;
    }
    plVar10 = plVar17;
    plVar12 = local_58;
    plVar15 = plVar17;
    if (plVar7 != (longlong *)0x0) {
      while( true ) {
        iVar9 = local_60;
        lVar5 = (longlong)local_60;
        uVar1 = *(undefined8 *)(*plVar12 + 0x2e0);
        fVar18 = *(float *)(*plVar12 + 0x2e8);
        local_60 = local_60 + 1;
        if ((int)plVar10 < local_60) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(&local_68,iVar9);
        }
        *(undefined8 *)(local_68 + lVar5 * 3) = uVar1;
        local_68[lVar5 * 3 + 2] = fVar18;
        if ((longlong *)((longlong)plVar15 + 1) == plVar7) break;
        plVar10 = (longlong *)(ulonglong)local_5c;
        plVar12 = plVar12 + 1;
        plVar15 = (longlong *)((longlong)plVar15 + 1);
      }
    }
    uVar16 = *(uint *)(param_1 + 0x18);
    uVar4 = (int)uVar16 / *DAT_146854560;
    if (0 < (int)uVar16) {
      uVar16 = 1;
    }
    if ((int)uVar4 <= (int)uVar16) {
      uVar4 = uVar16;
    }
    if (0 < (int)uVar4) {
      uVar14 = (ulonglong)uVar4;
      do {
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        iVar9 = *(int *)(param_1 + 0x20);
        if (*(int *)(param_1 + 0x18) <= *(int *)(param_1 + 0x20)) {
          *(undefined4 *)(param_1 + 0x20) = 0;
          iVar9 = 0;
        }
        lVar5 = *(longlong *)(param_1 + 0x10);
        lVar13 = (longlong)iVar9 * 0x38;
        if ((*(longlong *)(lVar13 + lVar5) == 0) || (*(longlong *)(lVar13 + 8 + lVar5) == 0)) {
          if (*(longlong *)(lVar13 + 0x20 + lVar5) != 0) {
            FMemory::Free();
          }
          iVar8 = *(int *)(param_1 + 0x18);
          iVar9 = (iVar8 - iVar9) + -1;
          if (0 < iVar9) {
            iVar9 = 1;
          }
          if (iVar9 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x10) + lVar13),
                       (void *)((longlong)(iVar8 - iVar9) * 0x38 + *(longlong *)(param_1 + 0x10)),
                       (longlong)iVar9 * 0x38);
            iVar8 = *(int *)(param_1 + 0x18);
          }
          *(int *)(param_1 + 0x18) = iVar8 + -1;
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeShrink(param_1 + 0x10);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
        }
        else {
          iVar9 = *(int *)(lVar13 + 0x30 + lVar5);
          if ((iVar9 != -1) || (0 < *(int *)(lVar13 + 0x28 + lVar5))) {
            pfVar3 = *(float **)(lVar13 + 0x20 + lVar5);
            if (pfVar3 != pfVar3 + *(int *)(lVar13 + 0x28 + lVar5)) {
              pfVar11 = pfVar3;
              do {
                if (local_68 != local_68 + (longlong)local_60 * 3) {
                  pfVar6 = local_68;
                  do {
                    fVar19 = *pfVar6 - *(float *)(lVar13 + 0x10 + lVar5);
                    fVar20 = pfVar6[1] - *(float *)(lVar13 + 0x14 + lVar5);
                    fVar18 = pfVar6[2] - *(float *)(lVar13 + 0x18 + lVar5);
                    if (fVar20 * fVar20 + fVar19 * fVar19 + fVar18 * fVar18 < *pfVar11 * *pfVar11) {
                      iVar8 = (int)((longlong)pfVar11 - (longlong)pfVar3 >> 2);
                      goto LAB_1405ce1da;
                    }
                    pfVar6 = pfVar6 + 3;
                  } while (pfVar6 != local_68 + (longlong)local_60 * 3);
                }
                pfVar11 = pfVar11 + 1;
              } while (pfVar11 != pfVar3 + *(int *)(lVar13 + 0x28 + lVar5));
            }
            iVar8 = -1;
LAB_1405ce1da:
            if (iVar8 != iVar9) {
              *(int *)(lVar13 + 0x30 + lVar5) = iVar8;
              plVar7 = plVar17;
              if (*(longlong *)(lVar13 + lVar5) != 0) {
                plVar7 = *(longlong **)(lVar13 + 8 + lVar5);
              }
              (**(code **)(*plVar7 + 0x20))(plVar7,iVar9,iVar8);
            }
          }
          if ((*(char *)(lVar13 + 0x34 + lVar5) != '\0') || (*(int *)(lVar13 + 0x30 + lVar5) != -1))
          {
            if (*(longlong *)(lVar13 + lVar5) == 0) {
              (**(code **)(_DAT_00000000 + 0x18))();
            }
            else {
              (**(code **)(**(longlong **)(lVar13 + 8 + lVar5) + 0x18))();
            }
          }
        }
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    if (local_68 != (float *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free(local_58);
    }
    *(undefined1 *)(param_1 + 0x24) = uVar2;
  }
  return;
}



// FUNCTION 1405ce310 FUN_1405ce310 body=1292 status=ok
// SIG undefined FUN_1405ce310(void)

void FUN_1405ce310(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float *pfVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 **local_98;
  longlong local_90;
  undefined8 *local_88;
  int local_80;
  
  FUN_1422409a0();
  cVar6 = FUN_1405c5f10(param_1);
  if ((cVar6 == '\0') || (cVar6 = FUN_1405c5cc0(param_1), cVar6 == '\0')) {
    *(undefined4 *)(param_1 + 0x68) = 0x3f000000;
    return;
  }
  FUN_1405c74f0(param_1,&local_88);
  if (local_80 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x4e0) + 0x10))
              (*(longlong **)(param_1 + 0x4e0),*(undefined4 *)(param_1 + 0x48c),
               *(undefined4 *)(param_1 + 0x490));
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(int *)(lVar4 + 0x38) < DAT_1468545a0) &&
       (_Init_thread_header(&DAT_1468545a0), DAT_1468545a0 == -1)) {
      atexit((_func_5014 *)&LAB_143e3fe50);
      _Init_thread_footer(&DAT_1468545a0);
    }
    DAT_146854598 = 0;
    if ((DAT_14685459c < 0) && (DAT_14685459c != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (&DAT_146854590,0);
    }
    puVar7 = (undefined8 *)((longlong)local_88 + (longlong)local_80 * 0xc);
    for (puVar11 = local_88; puVar11 != puVar7; puVar11 = (undefined8 *)((longlong)puVar11 + 0xc)) {
      local_a0 = *(undefined4 *)(puVar11 + 1);
      local_a8 = *puVar11;
      (**(code **)(**(longlong **)(param_1 + 0x4e0) + 8))
                (*(longlong **)(param_1 + 0x4e0),&DAT_146854590,&local_a8);
    }
    if (0.0 < *(float *)(param_1 + 0x4dc)) {
      local_98 = &local_88;
      local_90 = param_1;
      FUN_1405c0c00(&DAT_146854590,&local_98);
    }
    fVar18 = 4.3980465e+12;
    iVar14 = 0;
    if (0 < *(int *)(param_1 + 0x470)) {
      lVar13 = 0;
      do {
        if ((*(int *)(lVar4 + 0x38) < DAT_1468545b8) &&
           (_Init_thread_header(&DAT_1468545b8), DAT_1468545b8 == -1)) {
          atexit((_func_5014 *)&LAB_143e3fe70);
          _Init_thread_footer(&DAT_1468545b8);
        }
        DAT_1468545b0 = 0;
        if ((DAT_1468545b4 < DAT_146854598) && (DAT_1468545b4 != DAT_146854598)) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::
          ResizeTo(&DAT_1468545a8);
        }
        pfVar2 = DAT_146854590 + (longlong)DAT_146854598 * 6;
        iVar10 = DAT_1468545b0;
        if (DAT_146854590 != pfVar2) {
          pfVar9 = DAT_146854590 + 3;
          iVar12 = DAT_1468545b4;
          do {
            fVar15 = pfVar9[-3];
            if ((int)(((int)fVar15 * 2 ^ (uint)fVar15) << 2 ^ (int)fVar15 >> 1 ^ (uint)fVar15) %
                *(int *)(param_1 + 0x470) == iVar14) {
              fVar15 = pfVar9[1];
              DAT_1468545b0 = iVar10 + 1;
              local_a8 = 0;
              local_a0 = 0;
              fVar16 = pfVar9[2];
              if (*(float *)(param_1 + 0x494) <= pfVar9[2]) {
                fVar16 = *(float *)(param_1 + 0x494);
              }
              fVar17 = *(float *)(param_1 + 0x498);
              if (iVar12 < DAT_1468545b0) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
                ::ResizeGrow(&DAT_1468545a8,iVar10);
              }
              puVar7 = (undefined8 *)((longlong)iVar10 * 0x20 + DAT_1468545a8);
              *puVar7 = *(undefined8 *)(pfVar9 + -2);
              *(float *)(puVar7 + 1) = *pfVar9;
              *(undefined8 *)((longlong)puVar7 + 0xc) = local_a8;
              *(undefined4 *)((longlong)puVar7 + 0x14) = local_a0;
              *(float *)(puVar7 + 3) = fVar16;
              *(float *)((longlong)puVar7 + 0x1c) = (fVar15 - 1.0) * fVar17 + 1.0;
              iVar10 = DAT_1468545b0;
              iVar12 = DAT_1468545b4;
            }
            puVar7 = (undefined8 *)((longlong)local_88 + (longlong)local_80 * 0xc);
            if (local_88 != puVar7) {
              puVar11 = local_88;
              do {
                uVar3 = *puVar11;
                pfVar1 = (float *)(puVar11 + 1);
                fVar16 = (float)*puVar11 - pfVar9[-2];
                puVar11 = (undefined8 *)((longlong)puVar11 + 0xc);
                local_90 = CONCAT44(local_90._4_4_,*pfVar1);
                fVar17 = (float)((ulonglong)uVar3 >> 0x20) - pfVar9[-1];
                fVar15 = *pfVar1 - *pfVar9;
                fVar15 = fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15;
                if (fVar18 <= fVar15) {
                  fVar15 = fVar18;
                }
                fVar18 = fVar15;
              } while (puVar11 != puVar7);
            }
            pfVar1 = pfVar9 + 3;
            pfVar9 = pfVar9 + 6;
          } while (pfVar1 != pfVar2);
        }
        lVar8 = *(longlong *)(param_1 + 0x4a0);
        lVar5 = *(longlong *)(lVar13 + lVar8);
        if (iVar10 == 0) {
          if (*(longlong *)(lVar5 + 0x2d0) != 0) {
            FUN_1405acd80(lVar5,0);
LAB_1405ce6c3:
            lVar8 = *(longlong *)(param_1 + 0x4a0);
          }
        }
        else if ((*(longlong *)(lVar5 + 0x2d0) == 0) &&
                (*(longlong *)(lVar13 + *(longlong *)(param_1 + 0x468)) != 0)) {
          FUN_1405abab0(lVar5);
          goto LAB_1405ce6c3;
        }
        FUN_1405aa7c0(*(undefined8 *)(lVar13 + lVar8),&DAT_1468545a8,
                      *(undefined1 *)(param_1 + 0x489),0);
        iVar14 = iVar14 + 1;
        lVar13 = lVar13 + 8;
      } while (iVar14 < *(int *)(param_1 + 0x470));
    }
    fVar15 = (SQRT(fVar18) - 100.0) * 0.00024414062;
    fVar18 = 0.0;
    if ((0.0 <= fVar15) && (fVar18 = fVar15, 1.0 <= fVar15)) {
      fVar18 = 1.0;
    }
    *(float *)(param_1 + 0x68) = fVar18;
  }
  if (local_88 != (undefined8 *)0x0) {
    FMemory::Free(local_88);
  }
  return;
}



// FUNCTION 1405ce820 FUN_1405ce820 body=777 status=ok
// SIG undefined FUN_1405ce820(void)

void FUN_1405ce820(longlong *param_1)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *in_stack_ffffffffffffff78;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong lStack_48;
  uint local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  cVar1 = (**(code **)(*param_1 + 0x410))(param_1,0);
  cVar2 = FUN_14059ee90(param_1 + 0x31);
  if (cVar1 == '\0') {
    if (cVar2 != '\0') {
      if (param_1[0x30] == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(param_1[0x30] + 0x3a);
      }
      cVar1 = (**(code **)(*param_1 + 0x400))(param_1,uVar5);
      if (cVar1 == '\0') {
        param_1[0x30] = 0;
        FUN_1405ac8f0(param_1 + 0x31,0,4);
      }
    }
    uStack_38 = param_1 + 0x3d;
    local_78 = 0;
    iVar6 = 0;
    uStack_70 = 0;
    local_40 = local_40 & 0xffffff00;
    local_50 = 0;
    lStack_48 = 0;
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x3f8))(param_1);
    if (((plVar3 == (longlong *)0x0) ||
        (cVar1 = (**(code **)(*param_1 + 0x400))(param_1,0), cVar1 == '\0')) ||
       (cVar1 = FUN_14059ee90(param_1 + 0x31), cVar1 != '\0')) {
      iVar8 = (int)local_78;
      iVar9 = local_78._4_4_;
      iVar10 = (int)uStack_70;
      iVar11 = uStack_70._4_4_;
      iVar7 = iVar6;
    }
    else {
      local_78 = param_1[0x34];
      uStack_70 = param_1[0x35];
      in_stack_ffffffffffffff78 = &local_50;
      plVar3 = (longlong *)
               (**(code **)(*plVar3 + 0x288))
                         (plVar3,local_68,&local_78,param_1[0x23],in_stack_ffffffffffffff78);
      local_78 = *plVar3;
      iVar6 = (int)plVar3[1];
      uStack_70 = plVar3[1];
      iVar8 = (int)*plVar3;
      iVar9 = *(int *)((longlong)plVar3 + 4);
      iVar10 = iVar6;
      iVar11 = *(int *)((longlong)plVar3 + 0xc);
      iVar7 = (int)*plVar3;
    }
    if (((iVar11 != *(int *)((longlong)param_1 + 0x1ac) ||
         iVar9 != *(int *)((longlong)param_1 + 0x1a4)) || (int)param_1[0x35] != iVar6) ||
        (int)param_1[0x34] != iVar7) {
      plVar3 = param_1 + 0x36;
      cVar1 = FUN_14059ee90(plVar3);
      if (cVar1 != '\0') {
        if (param_1[0x3a] == 0) {
          FUN_1405ac8f0(plVar3,100,4);
        }
        else {
          local_78 = 0;
          uStack_70 = 0;
          FUN_1405a2d20(*plVar3,local_68,param_1[0x3a],0,
                        (ulonglong)in_stack_ffffffffffffff78 & 0xffffffff00000000,&local_78);
          FUN_140591060(local_68);
          if (local_78 != 0) {
            FMemory::Free();
          }
        }
      }
      param_1[0x39] = local_50;
      param_1[0x3a] = lStack_48;
      *(uint *)(param_1 + 0x3b) = local_40;
      *(undefined4 *)((longlong)param_1 + 0x1dc) = uStack_3c;
      *(undefined4 *)(param_1 + 0x3c) = (undefined4)uStack_38;
      *(undefined4 *)((longlong)param_1 + 0x1e4) = uStack_38._4_4_;
      *(int *)(param_1 + 0x34) = iVar8;
      *(int *)((longlong)param_1 + 0x1a4) = iVar9;
      *(int *)(param_1 + 0x35) = iVar10;
      *(int *)((longlong)param_1 + 0x1ac) = iVar11;
      if (((((*(int *)((longlong)param_1 + 0x1ac) != 0 || (int)param_1[0x35] != 0) ||
            *(int *)((longlong)param_1 + 0x1a4) != 0) || (int)param_1[0x34] != 0) &&
          (param_1[0x39] != 0)) && (lVar4 = FUN_14059b7e0(param_1[0x23],1), lVar4 != 0)) {
        lVar4 = FUN_1405a3150(lVar4,local_68,param_1[0x39],0);
        FUN_1405913a0(plVar3,lVar4);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar4 + 0x10);
        FUN_140591060(local_68);
        (**(code **)(*param_1 + 0x420))(param_1,plVar3);
      }
    }
    return;
  }
  if (cVar2 != '\0') {
    param_1[0x30] = 0;
    FUN_1405ac8f0(param_1 + 0x31,0,4);
  }
  cVar1 = FUN_14059ee90(param_1 + 0x36);
  if (cVar1 == '\0') {
    return;
  }
  FUN_1405ac8f0(param_1 + 0x36,0,4);
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  return;
}



// FUNCTION 1405ceb30 FUN_1405ceb30 body=1053 status=ok
// SIG undefined FUN_1405ceb30(void)

void FUN_1405ceb30(longlong param_1,float param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  longlong local_68;
  undefined8 local_60;
  undefined1 local_58 [64];
  
  uVar9 = 0;
  fVar11 = *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x70);
  if (param_2 <= fVar11) {
    fVar11 = param_2;
  }
  if ((((*(char *)(param_1 + 0x1c0) != '\0') && (DAT_1468536c6 == '\0')) && (DAT_1468536c5 != '\0'))
     && (DAT_1468536c8 != 0)) {
    plVar6 = *(longlong **)(param_1 + 0x1e8);
    plVar4 = plVar6 + (longlong)*(int *)(param_1 + 0x1f0) * 8;
    for (; plVar6 != plVar4; plVar6 = plVar6 + 8) {
      cVar1 = FUN_14059ee90(plVar6);
      if (((cVar1 != '\0') &&
          (fVar10 = *(float *)(param_1 + 0x1c4) * *(float *)(param_1 + 0x1c4),
          *(float *)(*plVar6 + 300) <= fVar10 && fVar10 != *(float *)(*plVar6 + 300))) &&
         ((char)plVar6[4] == '\0')) {
        cVar1 = FUN_14059ee90(plVar6);
        if (cVar1 != '\0') {
          if (*(longlong *)(param_1 + 0x1c8) == 0) {
            FUN_1405ac8f0(plVar6,(int)(*(float *)(param_1 + 0x1d0) * 1000.0),4);
          }
          else {
            local_68 = 0;
            local_60 = 0;
            FUN_1405a2d20(*plVar6,local_58,*(longlong *)(param_1 + 0x1c8),0,0,&local_68);
            FUN_140591060(local_58);
            if (local_68 != 0) {
              FMemory::Free();
            }
          }
        }
        *(undefined1 *)(plVar6 + 4) = 1;
      }
    }
  }
  FUN_1405ccda0(param_1);
  lVar3 = *(longlong *)(param_1 + 0x1e8);
  lVar8 = (longlong)*(int *)(param_1 + 0x1f0) * 0x40 + lVar3;
  for (; lVar3 != lVar8; lVar3 = lVar3 + 0x40) {
    plVar6 = *(longlong **)(param_1 + 0x1b0);
    uVar7 = (longlong)*(int *)(param_1 + 0x1b8) & 0x1fffffffffffffff;
    if (plVar6 + *(int *)(param_1 + 0x1b8) < plVar6) {
      uVar7 = uVar9;
    }
    uVar5 = uVar9;
    if (uVar7 != 0) {
      do {
        plVar4 = (longlong *)*plVar6;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x280))(plVar4,param_1,lVar3,fVar11);
        }
        plVar6 = plVar6 + 1;
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar7);
    }
  }
  if (*(float *)(param_1 + 0x200) <= 0.0) {
    iVar2 = *(int *)(param_1 + 0x194) - *(int *)(param_1 + 0x1f0);
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x1fc) = 0;
    }
    else {
      fVar10 = (float)iVar2 * fVar11 + *(float *)(param_1 + 0x1fc);
      *(float *)(param_1 + 0x1fc) = fVar10;
      if ((*(float *)(param_1 + 0x1f8) <= fVar10 && fVar10 != *(float *)(param_1 + 0x1f8)) &&
         ((*(longlong *)(param_1 + 0x120) != 0 || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)))) {
        FUN_1405cfcb0(param_1);
        fVar10 = *(float *)(param_1 + 0x1fc) - *(float *)(param_1 + 0x1f8);
        *(float *)(param_1 + 0x1fc) = fVar10;
        if (*(float *)(param_1 + 0x1f8) < fVar10) {
          *(undefined4 *)(param_1 + 0x1fc) = 0;
        }
        iVar2 = rand();
        fVar10 = *(float *)(param_1 + 0x198);
        if (*(float *)(param_1 + 0x19c) < fVar10) {
          fVar10 = 0.0;
        }
        else {
          fVar10 = (*(float *)(param_1 + 0x19c) - fVar10) * (float)iVar2 * 3.051851e-05 + fVar10;
        }
        *(float *)(param_1 + 0x1f8) = fVar10;
      }
    }
  }
  else {
    *(float *)(param_1 + 0x200) = *(float *)(param_1 + 0x200) - fVar11;
  }
  iVar2 = *(int *)(param_1 + 0x1f0) - *(int *)(param_1 + 0x194);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  if (0 < iVar2) {
    lVar3 = (longlong)iVar2;
    uVar7 = uVar9;
    if (3 < lVar3) {
      lVar8 = (lVar3 - 4U >> 2) + 1;
      fVar10 = (float)iVar2 * fVar11;
      uVar7 = lVar8 * 4;
      do {
        *(float *)(uVar9 + 0x18 + *(longlong *)(param_1 + 0x1e8)) =
             *(float *)(uVar9 + 0x18 + *(longlong *)(param_1 + 0x1e8)) - fVar10;
        *(float *)(uVar9 + 0x58 + *(longlong *)(param_1 + 0x1e8)) =
             *(float *)(uVar9 + 0x58 + *(longlong *)(param_1 + 0x1e8)) - fVar10;
        *(float *)(uVar9 + 0x98 + *(longlong *)(param_1 + 0x1e8)) =
             *(float *)(uVar9 + 0x98 + *(longlong *)(param_1 + 0x1e8)) - fVar10;
        *(float *)(uVar9 + 0xd8 + *(longlong *)(param_1 + 0x1e8)) =
             *(float *)(uVar9 + 0xd8 + *(longlong *)(param_1 + 0x1e8)) - fVar10;
        uVar9 = uVar9 + 0x100;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if ((longlong)uVar7 < lVar3) {
      lVar8 = uVar7 << 6;
      lVar3 = lVar3 - uVar7;
      do {
        *(float *)(*(longlong *)(param_1 + 0x1e8) + 0x18 + lVar8) =
             *(float *)(*(longlong *)(param_1 + 0x1e8) + 0x18 + lVar8) - (float)iVar2 * fVar11;
        lVar8 = lVar8 + 0x40;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return;
}



// FUNCTION 1405cef50 FUN_1405cef50 body=27 status=ok
// SIG undefined FUN_1405cef50(void)

void FUN_1405cef50(undefined8 param_1)

{
  FUN_142357eb0();
  FUN_1405ce820(param_1);
  return;
}



// FUNCTION 1405cef70 FUN_1405cef70 body=2092 status=ok
// SIG undefined FUN_1405cef70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405cef70(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar13 [16];
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
  undefined1 auStack_1c8 [32];
  ulonglong local_1a8;
  undefined8 *local_1a0;
  char local_198 [16];
  longlong local_188;
  float local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  float local_168;
  float local_164;
  float local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined2 local_118;
  undefined1 local_116;
  undefined4 local_114;
  undefined1 local_108 [32];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    cVar6 = FUN_14059ee90(param_1 + 0x2f8);
    if (((cVar6 != '\0') && (FUN_14058f8a0(&local_188,param_1 + 0x2f8), local_188 != 0)) &&
       (FUN_1405d0f80(*(undefined8 *)(param_1 + 0x2f0),&local_188,0), local_188 != 0)) {
      FUN_1405a53f0();
    }
    if (((*(longlong *)(param_1 + 0x2d8) != 0) && (*(longlong *)(param_1 + 400) != 0)) &&
       ((*(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x30) != 0 &&
        (cVar6 = FUN_14059ed30(), cVar6 != '\0')))) {
      FRotator::Quaternion(param_1 + 0x1f8,&local_178);
      fVar25 = *(float *)(param_1 + 500);
      fVar28 = *(float *)(param_1 + 0x1f0);
      fVar31 = *(float *)(param_1 + 0x1ec);
      fVar26 = *(float *)*(undefined1 (*) [12])(param_1 + 0x204);
      fVar12 = (float)local_178;
      fVar18 = local_178._4_4_;
      fVar15 = (float)uStack_170;
      fVar20 = uStack_170._4_4_;
      fVar29 = *(float *)(param_1 + 0x20c);
      fVar32 = *(float *)(param_1 + 0x208);
      auVar2 = *(undefined1 (*) [12])(param_1 + 0x204);
      uVar7 = (**(code **)(**(longlong **)(param_1 + 400) + 0x420))
                        (*(longlong **)(param_1 + 400),&local_e8,*(undefined8 *)(param_1 + 0x198),0)
      ;
      fVar5 = fRam0000000146854508;
      fVar4 = fRam0000000146854504;
      fVar3 = _DAT_146854500;
      fVar42 = local_c8._0_4_;
      fVar43 = local_c8._4_4_;
      fVar44 = local_c8._8_4_;
      auVar10._12_4_ = 0;
      auVar10._0_12_ = auVar2;
      auVar10 = minps(auVar10,local_c8);
      auVar11._4_4_ = -(uint)(auVar10._4_4_ < fRam0000000146854544);
      auVar11._0_4_ = -(uint)(auVar10._0_4_ < _DAT_146854540);
      auVar11._8_4_ = -(uint)(auVar10._8_4_ < fRam0000000146854548);
      auVar11._12_4_ = -(uint)(auVar10._12_4_ < fRam000000014685454c);
      iVar8 = movmskps(uVar7,auVar11);
      if (iVar8 == 0) {
        fVar42 = fVar42 * fVar31;
        fVar43 = fVar43 * fVar28;
        fVar44 = fVar44 * fVar25;
        fVar31 = fVar44 * fStack_e4 - fVar43 * fStack_e0;
        fVar26 = fVar42 * fStack_e0 - fVar44 * local_e8;
        fVar29 = fVar43 * local_e8 - fVar42 * fStack_e4;
        fVar31 = fVar31 + fVar31;
        fVar26 = fVar26 + fVar26;
        fVar29 = fVar29 + fVar29;
        fVar25 = (fVar29 * fStack_e4 - fVar26 * fStack_e0) + fStack_dc * fVar31 + fVar42 + local_d8;
        fVar28 = (fVar31 * fStack_e0 - fVar29 * local_e8) + fStack_dc * fVar26 + fVar43 + fStack_d4;
        fVar31 = (fVar26 * local_e8 - fVar31 * fStack_e4) + fStack_dc * fVar29 + fVar44 + fStack_d0;
      }
      else {
        fVar14 = fStack_e4 + fStack_e4;
        fVar16 = fStack_e0 + fStack_e0;
        fVar23 = local_e8 * (local_e8 + local_e8);
        fVar22 = fStack_dc * (local_e8 + local_e8);
        fVar39 = (fStack_dc * fVar16 + fVar14 * local_e8) * fVar42;
        fVar40 = (fVar22 + fVar16 * fStack_e4) * fVar43;
        fVar41 = (fStack_dc * fVar14 + fVar16 * local_e8) * fVar44;
        fVar33 = fVar43 * (fVar14 * local_e8 - fStack_dc * fVar16);
        fVar34 = fVar44 * (fVar16 * fStack_e4 - fVar22);
        fVar35 = fVar42 * (fVar16 * local_e8 - fStack_dc * fVar14);
        fVar22 = (float)((uint)((_DAT_146854500 - (fStack_e0 * fVar16 + fStack_e4 * fVar14)) *
                               fVar42) & _DAT_1468544c0);
        fVar16 = (float)((uint)((fRam0000000146854504 - (fStack_e0 * fVar16 + fVar23)) * fVar43) &
                        uRam00000001468544c4);
        fVar17 = (float)((uint)((fRam0000000146854508 - (fStack_e4 * fVar14 + fVar23)) * fVar44) &
                        uRam00000001468544c8);
        fVar19 = (float)((uint)((fRam000000014685450c - (fVar23 + fVar23)) * local_c8._12_4_) &
                        uRam00000001468544cc);
        uStack_170._4_4_ = fVar12 + fVar12;
        fVar14 = fVar18 + fVar18;
        fVar23 = fVar15 + fVar15;
        fVar21 = fVar12 * uStack_170._4_4_;
        local_178._0_4_ = fVar20 * fVar23;
        local_178._4_4_ = fVar20 * uStack_170._4_4_;
        uStack_170._0_4_ = fVar20 * fVar14;
        uStack_170._4_4_ = fVar20 * uStack_170._4_4_;
        fVar36 = ((float)local_178 + fVar12 * fVar14) * fVar26;
        fVar37 = (local_178._4_4_ + fVar18 * fVar23) * fVar32;
        fVar38 = ((float)uStack_170 + fVar12 * fVar23) * fVar29;
        fVar24 = fVar32 * (fVar12 * fVar14 - (float)local_178);
        fVar27 = fVar29 * (fVar18 * fVar23 - local_178._4_4_);
        fVar30 = fVar26 * (fVar12 * fVar23 - (float)uStack_170);
        fVar12 = (float)((uint)((_DAT_146854500 - (fVar15 * fVar23 + fVar18 * fVar14)) * fVar26) &
                        _DAT_1468544c0);
        fVar15 = (float)((uint)((fRam0000000146854504 - (fVar15 * fVar23 + fVar21)) * fVar32) &
                        uRam00000001468544c4);
        fVar18 = (float)((uint)((fRam0000000146854508 - (fVar18 * fVar14 + fVar21)) * fVar29) &
                        uRam00000001468544c8);
        fVar20 = (float)((uint)((fRam000000014685450c - (fVar21 + fVar21)) * 0.0) &
                        uRam00000001468544cc);
        local_158._0_4_ = fVar36 * fVar33 + fVar12 * fVar22 + fVar30 * fVar41 + fVar20 * local_d8;
        local_158._4_4_ = fVar36 * fVar16 + fVar12 * fVar39 + fVar30 * fVar34 + fVar20 * fStack_d4;
        uStack_150._0_4_ = fVar36 * fVar40 + fVar12 * fVar35 + fVar30 * fVar17 + fVar20 * fStack_d0;
        uStack_150._4_4_ =
             fVar36 * fVar19 + fVar12 * fVar19 + fVar30 * fVar19 + fVar20 * fRam000000014685450c;
        local_148 = fVar15 * fVar33 + fVar24 * fVar22 + fVar37 * fVar41 + fVar20 * local_d8;
        fStack_144 = fVar15 * fVar16 + fVar24 * fVar39 + fVar37 * fVar34 + fVar20 * fStack_d4;
        uStack_140._0_4_ = fVar15 * fVar40 + fVar24 * fVar35 + fVar37 * fVar17 + fVar20 * fStack_d0;
        uStack_140._4_4_ =
             fVar15 * fVar19 + fVar24 * fVar19 + fVar37 * fVar19 + fVar20 * fRam000000014685450c;
        local_138._0_4_ = fVar27 * fVar33 + fVar38 * fVar22 + fVar18 * fVar41 + fVar20 * local_d8;
        local_138._4_4_ = fVar27 * fVar16 + fVar38 * fVar39 + fVar18 * fVar34 + fVar20 * fStack_d4;
        fStack_130 = fVar27 * fVar40 + fVar38 * fVar35 + fVar18 * fVar17 + fVar20 * fStack_d0;
        fStack_12c = fVar27 * fVar19 + fVar38 * fVar19 + fVar18 * fVar19 +
                     fVar20 * fRam000000014685450c;
        local_128 = fVar28 * fVar33 + fVar31 * fVar22 + fVar25 * fVar41 +
                    fRam000000014685450c * local_d8;
        fStack_124 = fVar28 * fVar16 + fVar31 * fVar39 + fVar25 * fVar34 +
                     fRam000000014685450c * fStack_d4;
        fStack_120 = fVar28 * fVar40 + fVar31 * fVar35 + fVar25 * fVar17 +
                     fRam000000014685450c * fStack_d0;
        fStack_11c = fVar28 * fVar19 + fVar31 * fVar19 + fVar25 * fVar19 +
                     fRam000000014685450c * fRam000000014685450c;
        FMatrix::RemoveScaling(&local_158);
        fVar25 = (float)(-(uint)(_DAT_146854540 <= fVar42 * fVar26) & (_DAT_146854530 ^ (uint)fVar3)
                        ^ _DAT_146854530);
        fVar28 = (float)(-(uint)(fRam0000000146854544 <= fVar43 * fVar32) &
                         (uRam0000000146854534 ^ (uint)fVar4) ^ uRam0000000146854534);
        fVar31 = (float)(-(uint)(fRam0000000146854548 <= fVar44 * fVar29) &
                         (uRam0000000146854538 ^ (uint)fVar5) ^ uRam0000000146854538);
        local_158 = CONCAT44(local_158._4_4_ * fVar25,(float)local_158 * fVar25);
        fStack_144 = fStack_144 * fVar28;
        uStack_150 = CONCAT44(uStack_150._4_4_,(float)uStack_150 * fVar25);
        local_148 = local_148 * fVar28;
        uStack_140 = CONCAT44(uStack_140._4_4_,(float)uStack_140 * fVar28);
        fStack_130 = fStack_130 * fVar31;
        local_138 = CONCAT44(local_138._4_4_ * fVar31,(float)local_138 * fVar31);
        FQuat::FQuat(&local_178,&local_158);
        auVar13._0_4_ = (float)local_178 * (float)local_178 + (float)uStack_170 * (float)uStack_170;
        auVar13._4_4_ = local_178._4_4_ * local_178._4_4_ + uStack_170._4_4_ * uStack_170._4_4_;
        auVar13._8_4_ = (float)uStack_170 * (float)uStack_170 + (float)local_178 * (float)local_178;
        auVar13._12_4_ = uStack_170._4_4_ * uStack_170._4_4_ + local_178._4_4_ * local_178._4_4_;
        fVar26 = auVar13._4_4_ + auVar13._0_4_;
        fVar29 = auVar13._8_4_ + auVar13._4_4_;
        fVar32 = auVar13._0_4_ + auVar13._12_4_;
        auVar1._4_4_ = fVar29;
        auVar1._0_4_ = fVar26;
        auVar1._8_4_ = auVar13._12_4_ + auVar13._8_4_;
        auVar1._12_4_ = fVar32;
        auVar10 = rsqrtps(auVar13,auVar1);
        fVar25 = auVar10._0_4_;
        fVar28 = auVar10._4_4_;
        fVar31 = auVar10._12_4_;
        fVar25 = (_DAT_146854520 - fVar25 * fVar25 * fVar26 * _DAT_146854520) * fVar25 + fVar25;
        fVar28 = (fRam0000000146854524 - fVar28 * fVar28 * fVar29 * fRam0000000146854524) * fVar28 +
                 fVar28;
        fVar31 = (fRam000000014685452c - fVar31 * fVar31 * fVar32 * fRam000000014685452c) * fVar31 +
                 fVar31;
        uStack_170._4_4_ =
             (float)(((uint)(((fRam000000014685452c -
                              fVar31 * fVar31 * fVar32 * fRam000000014685452c) * fVar31 + fVar31) *
                            uStack_170._4_4_) ^ uRam000000014685451c) & -(uint)(1e-08 <= fVar32) ^
                    uRam000000014685451c);
        local_178 = CONCAT44(((uint)(((fRam0000000146854524 -
                                      fVar28 * fVar28 * fVar29 * fRam0000000146854524) * fVar28 +
                                     fVar28) * local_178._4_4_) ^ uRam0000000146854514) &
                             -(uint)(1e-08 <= fVar29) ^ uRam0000000146854514,
                             ((uint)(((_DAT_146854520 - fVar25 * fVar25 * fVar26 * _DAT_146854520) *
                                      fVar25 + fVar25) * (float)local_178) ^ _DAT_146854510) &
                             -(uint)(1e-08 <= fVar26) ^ _DAT_146854510);
        fVar25 = local_128;
        fVar28 = fStack_124;
        fVar31 = fStack_120;
      }
      local_164 = DAT_1468b5d94;
      uStack_170 = CONCAT44(uStack_170._4_4_,fVar31);
      lVar9 = *(longlong *)(param_1 + 0x120);
      local_168 = DAT_1468b5d90;
      local_188 = CONCAT44(fVar28,fVar25);
      local_160 = DAT_1468b5d98;
      local_198[0] = '\0';
      local_180 = fVar31;
      if (lVar9 == 0) {
        lVar9 = FUN_1423407b0(param_1);
      }
      FUN_14059b680(lVar9,&local_188,&local_168,local_198);
      if (local_198[0] != '\0') {
        fVar26 = *(float *)(*(longlong *)(param_1 + 0x2d8) + 0x38);
        fVar26 = fVar26 * fVar26;
        fVar25 = (fVar25 - local_168) * (fVar25 - local_168) +
                 (fVar28 - local_164) * (fVar28 - local_164) +
                 (fVar31 - local_160) * (fVar31 - local_160);
        if (*(char *)(param_1 + 0x310) == '\0') {
          if (fVar25 < fVar26) {
            local_1a8 = *(ulonglong *)(param_1 + 400);
            uStack_140 = 0;
            local_138 = 0;
            local_118 = 0;
            local_116 = 0;
            local_114 = 0;
            local_148 = 1.0;
            local_158 = 0;
            uStack_150 = 0;
            fStack_144 = 0.0;
            FUN_1405c7bd0(*(undefined8 *)(param_1 + 0x2f0),&local_188,&local_158,
                          *(undefined8 *)(param_1 + 0x198));
            if (local_188 != 0) {
              local_1a0 = &local_178;
              local_1a8 = local_1a8 & 0xffffffff00000000;
              local_178 = 0;
              uStack_170 = 0;
              lVar9 = FUN_1405a2d20(local_188,local_108,*(undefined8 *)(param_1 + 0x2d8),0);
              FUN_1405913a0(param_1 + 0x2f8,lVar9);
              *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(lVar9 + 0x10);
              FUN_140591060(local_108);
              if (local_178 != 0) {
                FMemory::Free();
              }
              *(undefined1 *)(param_1 + 0x310) = 1;
              if (local_188 != 0) {
                FUN_1405a53f0();
              }
            }
          }
        }
        else if (fVar26 * 1.44 < fVar25) {
          FUN_1405ac8f0(param_1 + 0x2f8,0,4);
          *(undefined1 *)(param_1 + 0x310) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 1405cf7a0 FUN_1405cf7a0 body=629 status=ok
// SIG undefined FUN_1405cf7a0(void)

void FUN_1405cf7a0(longlong param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  char local_res8;
  undefined7 uStackX_9;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined1 local_a8 [8];
  float local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_44;
  
  cVar3 = FUN_14059ee90(param_1 + 600);
  if (cVar3 != '\0') {
    FUN_14058f8a0(&local_res8,param_1 + 600);
    FUN_1405d0f80(param_1,&local_res8,0);
    if (CONCAT71(uStackX_9,local_res8) != 0) {
      FUN_1405a53f0();
    }
  }
  if ((*(longlong *)(param_1 + 0x180) != 0) &&
     (lVar4 = FUN_14059b7e0(*(undefined8 *)(param_1 + 0x118),1), lVar4 != 0)) {
    fVar7 = *(float *)(lVar4 + 0x220);
    fVar1 = *(float *)(lVar4 + 0x224);
    fVar2 = *(float *)(lVar4 + 0x228);
    local_c4 = DAT_1468b5d94;
    lVar5 = *(longlong *)(lVar4 + 0x120);
    local_c8 = DAT_1468b5d90;
    local_c0 = DAT_1468b5d98;
    local_res8 = '\0';
    local_b8 = fVar7;
    fStack_b4 = fVar1;
    local_b0 = fVar2;
    local_a0 = fVar2;
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(lVar4);
    }
    FUN_14059b680(lVar5,&local_b8,&local_c8,&local_res8);
    if (local_res8 != '\0') {
      fVar6 = *(float *)(*(longlong *)(param_1 + 0x180) + 0x38);
      fVar6 = fVar6 * fVar6;
      fVar7 = (fVar7 - local_c8) * (fVar7 - local_c8) + (fVar1 - local_c4) * (fVar1 - local_c4) +
              (fVar2 - local_c0) * (fVar2 - local_c0);
      if (*(char *)(param_1 + 0x270) == '\0') {
        if (fVar7 < fVar6) {
          local_78 = 0x3f800000;
          local_70 = 0;
          local_74 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_68 = 0;
          local_48 = 0;
          local_46 = 0;
          local_44 = 0;
          FUN_14058f880(&local_b8,lVar4 + 0x378);
          FUN_1405c54b0(param_1,&local_b8,&local_88,0);
          lVar4 = FUN_1405a3150(lVar4,local_a8,*(undefined8 *)(param_1 + 0x180),0);
          FUN_1405913a0(param_1 + 600,lVar4);
          *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(lVar4 + 0x10);
          FUN_140591060(local_a8);
          *(undefined1 *)(param_1 + 0x270) = 1;
          if (CONCAT44(fStack_b4,local_b8) != 0) {
            FUN_1405a53f0();
          }
        }
      }
      else if (fVar6 * 1.44 < fVar7) {
        FUN_1405ac8f0(param_1 + 600,0,4);
        *(undefined1 *)(param_1 + 0x270) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1405cfa20 FUN_1405cfa20 body=604 status=ok
// SIG undefined FUN_1405cfa20(void)

void FUN_1405cfa20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((param_2 != 0) &&
     ((((*(char *)(param_2 + 0x39) == '\0' ||
        (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
         *(int *)(param_1 + 0x2c) == 0) && *(int *)(param_1 + 0x28) == 0)) ||
       (cVar2 = FUN_14059ee90(param_1 + 0x38), cVar2 == '\0')) ||
      (*(char *)(param_1 + 0x60) == '\0')))) {
    local_20 = 0;
    local_18 = 0;
    if (((*(char *)(param_2 + 0x30) != '\x01') ||
        (((cVar2 = (**(code **)(*(longlong *)(param_1 + -0x178) + 0x400))
                             (param_1 + -0x178,*(undefined1 *)(param_2 + 0x3a)), cVar2 != '\0' &&
          ((cVar2 = (**(code **)(*(longlong *)(param_1 + -0x178) + 0x410))
                              (param_1 + -0x178,&local_20), cVar2 == '\0' ||
           (((char)local_18 != '\0' && (*(char *)(param_2 + 0x38) != '\0')))))) &&
         ((cVar2 = FUN_14059ee90(param_1 + 0x10), cVar2 == '\0' ||
          (*(char *)(param_2 + 0x38) != '\0')))))) &&
       (iVar3 = rand(),
       (float)iVar3 * 3.051851e-05 < *(float *)(param_2 + 0x34) ||
       (float)iVar3 * 3.051851e-05 == *(float *)(param_2 + 0x34))) {
      plVar1 = (longlong *)(param_1 + -0x178);
      plVar4 = (longlong *)(**(code **)(*plVar1 + 0x3f8))(plVar1);
      if (((plVar4 != (longlong *)0x0) &&
          (lVar5 = (**(code **)(*plVar4 + 0x280))(plVar4,param_2,*(undefined8 *)(param_1 + -0x60)),
          lVar5 != 0)) && (lVar6 = FUN_14059b7e0(*(undefined8 *)(param_1 + -0x60),1), lVar6 != 0)) {
        local_48 = *(undefined4 *)(lVar6 + 0x220);
        uStack_44 = *(undefined4 *)(lVar6 + 0x224);
        local_40 = *(undefined4 *)(lVar6 + 0x228);
        local_30 = local_40;
        cVar2 = FUN_14059f060(plVar1,lVar5,&local_48,0x3f800000,0x42480000);
        if (cVar2 != '\0') {
          FUN_1405a3150(lVar6,local_38,lVar5,0);
          cVar2 = FUN_14059ee90(local_38);
          if ((cVar2 != '\0') && (*(char *)(param_2 + 0x30) == '\x01')) {
            (**(code **)(*plVar1 + 0x420))(plVar1,local_38);
            (**(code **)(*plVar1 + 0x418))(plVar1,&local_20);
            cVar2 = FUN_14059ee90(param_1 + 0x10);
            if (cVar2 != '\0') {
              FUN_1405ac8f0(param_1 + 0x10,0,4);
            }
            *(longlong *)(param_1 + 8) = param_2;
            FUN_1405913a0(param_1 + 0x10,local_38);
            *(undefined4 *)(param_1 + 0x20) = local_28;
            FUN_1405cdf50(plVar1);
          }
          FUN_140591060(local_38);
        }
      }
    }
  }
  return;
}



// FUNCTION 1405cfc80 FUN_1405cfc80 body=42 status=ok
// SIG undefined FUN_1405cfc80(void)

void FUN_1405cfc80(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  if ((param_1 != 0) &&
     (plVar1 = (longlong *)FNavigationSystem::FindPathFollowingAgentForActor(),
     plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return;
}



// FUNCTION 1405cfcb0 FUN_1405cfcb0 body=852 status=ok
// SIG undefined FUN_1405cfcb0(void)

undefined8 * FUN_1405cfcb0(longlong param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined4 local_res18;
  undefined4 uStackX_1c;
  undefined8 in_stack_ffffffffffffff70;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [80];
  ulonglong uVar10;
  
  uVar12 = 0;
  local_res18 = 0;
  uVar10 = uVar12;
  do {
    plVar11 = *(longlong **)(param_1 + 0x1a0);
    if (plVar11 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar11 + 0x280))(plVar11,param_1,&local_88,&local_res18);
      uVar9 = (uint)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
      if (cVar4 != '\0') {
        plVar11 = *(longlong **)(param_1 + 0x1a8);
        if (plVar11 == (longlong *)0x0) {
LAB_1405cfd4d:
          if (*(longlong *)(param_1 + 0x178) == 0) {
            return (undefined8 *)0x0;
          }
          plVar11 = (longlong *)(param_1 + 0x1e8);
          iVar6 = *(int *)(param_1 + 0x1f0);
          iVar5 = iVar6 + 1;
          *(int *)(param_1 + 0x1f0) = iVar5;
          if (*(int *)(param_1 + 500) < iVar5) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
            ResizeGrow(plVar11);
          }
          lVar7 = *plVar11;
          lVar8 = (longlong)iVar6 * 0x40;
          *(undefined8 *)(lVar8 + lVar7) = 0;
          *(undefined8 *)(lVar8 + 8 + lVar7) = 0;
          *(undefined8 *)(lVar8 + 0x10 + lVar7) = 0;
          *(undefined8 *)(lVar8 + 0x18 + lVar7) = 0;
          *(undefined8 *)(lVar8 + 0x20 + lVar7) = 0;
          *(undefined8 *)(lVar8 + 0x28 + lVar7) = 0;
          *(undefined8 *)(lVar8 + 0x30 + lVar7) = 0;
          *(undefined8 *)(lVar8 + 0x38 + lVar7) = 0;
          puVar13 = (undefined8 *)(*plVar11 + lVar8);
          *(undefined4 *)(puVar13 + 3) = param_2;
          fVar1 = *(float *)(param_1 + 0x184);
          fVar2 = *(float *)(param_1 + 0x180);
          iVar6 = rand();
          *(float *)((longlong)puVar13 + 0x1c) =
               (float)iVar6 * 3.051851e-05 * (fVar1 - fVar2) + fVar2;
          *(longlong *)((longlong)puVar13 + 0x34) = local_88;
          *(undefined4 *)((longlong)puVar13 + 0x3c) = local_80;
          cVar4 = FUN_14059ee90(puVar13);
          if (cVar4 != '\0') {
            FUN_1405aab70(*puVar13,(longlong)puVar13 + 0x34,&DAT_1468b5da0,0,0x3f800000);
          }
          if (DAT_1468536c5 != '\0') {
            local_78 = local_88;
            local_70 = CONCAT44(local_70._4_4_,local_80);
            cVar4 = FUN_14059f060(param_1,*(undefined8 *)(param_1 + 0x178),&local_78,0x3f800000,0);
            if (cVar4 != '\0') {
              lVar7 = *(longlong *)(param_1 + 0x120);
              if (lVar7 == 0) {
                lVar7 = FUN_1423407b0(param_1);
              }
              FUN_14059ce50(DAT_1468536c8 + 8,&local_res18,lVar7,0);
              if (CONCAT44(uStackX_1c,local_res18) != 0) {
                *(undefined1 *)(CONCAT44(uStackX_1c,local_res18) + 0x62) = 2;
                FUN_1405aab70(CONCAT44(uStackX_1c,local_res18),&local_88,&DAT_1468b5da0,0,0x3f800000
                             );
                lVar7 = FUN_1405c6c00();
                if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x1c0) != 0)) {
                  iVar6 = rand();
                  FUN_1405aaa50(CONCAT44(uStackX_1c,local_res18),*(undefined8 *)(lVar7 + 0x1c0),
                                (float)iVar6 * 3.051851e-05,0,4,(ulonglong)uVar9 << 0x20);
                }
                local_78 = 0;
                local_70 = 0;
                lVar7 = FUN_1405a2d20(CONCAT44(uStackX_1c,local_res18),local_68,
                                      *(undefined8 *)(param_1 + 0x178),0,0,&local_78);
                FUN_1405913a0(puVar13,lVar7);
                *(undefined4 *)(puVar13 + 2) = *(undefined4 *)(lVar7 + 0x10);
                FUN_140591060(local_68);
                if (local_78 != 0) {
                  FMemory::Free();
                }
                if (CONCAT44(uStackX_1c,local_res18) != 0) {
                  FUN_1405a53f0();
                }
              }
            }
          }
          plVar11 = *(longlong **)(param_1 + 0x1b0);
          uVar10 = (longlong)*(int *)(param_1 + 0x1b8) & 0x1fffffffffffffff;
          if (plVar11 + *(int *)(param_1 + 0x1b8) < plVar11) {
            uVar10 = uVar12;
          }
          if (uVar10 != 0) {
            do {
              plVar3 = (longlong *)*plVar11;
              if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x278))(plVar3,param_1,puVar13);
              }
              plVar11 = plVar11 + 1;
              uVar12 = uVar12 + 1;
            } while (uVar12 != uVar10);
            return puVar13;
          }
          return puVar13;
        }
        cVar4 = (**(code **)(*plVar11 + 0x278))(plVar11,param_1,&local_88);
        uVar9 = (uint)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
        if (cVar4 != '\0') goto LAB_1405cfd4d;
      }
    }
    uVar9 = (int)uVar10 + 1;
    uVar10 = (ulonglong)uVar9;
    if (2 < (int)uVar9) {
      return (undefined8 *)0x0;
    }
  } while( true );
}



// FUNCTION 1405d0010 FUN_1405d0010 body=398 status=ok
// SIG undefined FUN_1405d0010(void)

void FUN_1405d0010(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  
  plVar9 = (longlong *)0x0;
  plVar7 = plVar9;
  plVar11 = plVar9;
  if ((longlong *)*param_2 != (longlong *)0x0) {
    plVar7 = (longlong *)*param_2;
    plVar11 = (longlong *)param_2[1];
  }
  plVar1 = *(longlong **)(param_1 + 0x38);
  plVar6 = plVar1;
  while( true ) {
    if (plVar6 == plVar1 + (longlong)*(int *)(param_1 + 0x40) * 7) {
      return;
    }
    plVar10 = plVar9;
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      plVar10 = (longlong *)plVar6[1];
    }
    plVar4 = plVar11;
    if (plVar7 == (longlong *)0x0) {
      plVar4 = plVar9;
    }
    if ((plVar10 == plVar4) && ((longlong *)*plVar6 == plVar7)) break;
    plVar6 = plVar6 + 7;
  }
  iVar3 = (int)(((longlong)plVar6 - (longlong)plVar1) / 0x38);
  if (iVar3 == -1) {
    return;
  }
  lVar12 = (longlong)iVar3 * 0x38;
  lVar2 = *(longlong *)(param_1 + 0x38);
  iVar5 = *(int *)(lVar12 + 0x30 + lVar2);
  if (iVar5 != -1) {
    *(undefined4 *)(lVar12 + 0x30 + lVar2) = 0xffffffff;
    plVar7 = plVar9;
    if (*(longlong *)(lVar12 + lVar2) != 0) {
      plVar7 = *(longlong **)(lVar12 + 8 + lVar2);
    }
    (**(code **)(*plVar7 + 0x20))(plVar7,iVar5,0xffffffff);
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x4c) != '\0') {
    *(undefined8 *)(lVar12 + lVar2) = 0;
    *(undefined8 *)(lVar12 + 8 + lVar2) = 0;
    return;
  }
  if (*(longlong *)(lVar12 + 0x20 + lVar2) != 0) {
    FMemory::Free();
  }
  iVar5 = *(int *)(param_1 + 0x40);
  iVar8 = (iVar5 - iVar3) + -1;
  if (0 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar12 + *(longlong *)(param_1 + 0x38)),
               (void *)((longlong)(iVar5 - iVar8) * 0x38 + *(longlong *)(param_1 + 0x38)),
               (longlong)iVar8 * 0x38);
    iVar5 = *(int *)(param_1 + 0x40);
  }
  *(int *)(param_1 + 0x40) = iVar5 + -1;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeShrink
            (param_1 + 0x38);
  if (*param_2 != 0) {
    plVar9 = (longlong *)param_2[1];
  }
  (**(code **)(*plVar9 + 0x30))(plVar9);
  if (*(int *)(param_1 + 0x48) <= iVar3) {
    return;
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  return;
}



// FUNCTION 1405d01a0 FUN_1405d01a0 body=92 status=ok
// SIG undefined FUN_1405d01a0(void)

void FUN_1405d01a0(longlong param_1)

{
  LARGE_INTEGER local_res8 [4];
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    FUN_1405d0800(param_1 + -0x2d0);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    QueryPerformanceCounter(local_res8);
    FUN_1405ae630(*(undefined8 *)(param_1 + 0x88),
                  (double)local_res8[0].QuadPart * DAT_1468b02f8 + 16777216.0);
  }
  return;
}



// FUNCTION 1405d0200 FUN_1405d0200 body=353 status=ok
// SIG undefined FUN_1405d0200(void)

void FUN_1405d0200(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  
  if ((((*(longlong *)(param_1 + 0x38) != 0) && (param_2 != 0)) &&
      (lVar5 = FUN_142628290(param_2), lVar5 != 0)) &&
     ((lVar5 = FUN_142628290(param_2), (*(uint *)(lVar5 + 0x830) & 0x4000) != 0 &&
      (lVar5 = FUN_142627a50(param_2,param_1), lVar5 != 0)))) {
    if (*(longlong *)(param_2 + 0x100) == 0) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
      return;
    }
    iVar3 = 0x80;
    if (*(int *)(param_2 + 0x128) < 0x81) {
      iVar3 = *(int *)(param_2 + 0x128);
    }
    *(int *)(lVar5 + 0x18) = iVar3;
    lVar1 = *(longlong *)(param_2 + 0x100);
    iVar4 = *(int *)(param_2 + 0x128) + -1;
    iVar3 = *(int *)(param_2 + 0x124);
    lVar2 = *(longlong *)(param_2 + 0x108);
    lVar6 = (longlong)iVar4;
    if (-1 < iVar4) {
      puVar7 = (undefined8 *)(lVar5 + 0x28 + lVar6 * 0x20);
      do {
        lVar5 = (ulonglong)((uint)*(ushort *)(lVar2 + lVar6 * 2) * iVar3) + lVar1;
        if (((*(uint *)(lVar5 + 0x68) & 0x4000000) == 0) && (lVar6 < 0x80)) {
          *(undefined8 *)((longlong)puVar7 + -0xc) = *(undefined8 *)(lVar5 + 0x10);
          *(undefined4 *)((longlong)puVar7 + -4) = *(undefined4 *)(lVar5 + 0x18);
          *puVar7 = DAT_1468b5da0;
          *(undefined4 *)(puVar7 + 1) = DAT_1468b5da8;
          uVar8 = FUN_1424116d0(param_1 + 0x50,*(undefined4 *)(lVar5 + 0xc),0,0);
          *(undefined4 *)(puVar7 + 2) = uVar8;
        }
        puVar7 = puVar7 + -4;
        lVar6 = lVar6 + -1;
      } while (-1 < lVar6);
    }
  }
  return;
}



// FUNCTION 1405d0370 FUN_1405d0370 body=460 status=ok
// SIG undefined FUN_1405d0370(void)

void FUN_1405d0370(longlong param_1,longlong param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  float local_68;
  float fStack_64;
  float local_60;
  undefined8 local_5c;
  undefined4 local_54;
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  
  if (((*(longlong *)(param_1 + 0x38) != 0) && (param_2 != 0)) &&
     (lVar5 = *(longlong *)(param_2 + 0x100), lVar5 != 0)) {
    iVar8 = *(int *)(param_2 + 0x128) + -1;
    iVar4 = *(int *)(param_2 + 0x124);
    lVar6 = *(longlong *)(param_2 + 0x108);
    lVar11 = (longlong)iVar8;
    if (-1 < iVar8) {
      do {
        lVar10 = (ulonglong)((uint)*(ushort *)(lVar6 + lVar11 * 2) * iVar4) + lVar5;
        if ((*(uint *)(lVar10 + 0x68) & 0x4000000) == 0) {
          uVar12 = (ulonglong)param_3;
          cVar7 = FUN_14263b0c0(param_2);
          if (cVar7 == '\0') {
            local_54 = *(undefined4 *)(lVar10 + 0x18);
            pfVar9 = (float *)&local_5c;
            local_5c = *(undefined8 *)(lVar10 + 0x10);
          }
          else {
            fVar1 = *(float *)(lVar10 + 0x10);
            pfVar9 = &local_68;
            fVar2 = *(float *)(lVar10 + 0x14);
            fVar3 = *(float *)(lVar10 + 0x18);
            local_48 = *(float *)(lVar10 + 0x10);
            uStack_44 = *(undefined4 *)(lVar10 + 0x14);
            uStack_40 = *(undefined4 *)(lVar10 + 0x18);
            local_38 = 0;
            local_30 = 0;
            uStack_3c = 0x3f800000;
            local_68 = *(float *)(param_2 + 0xe0) * 1.0 + fVar3 * *(float *)(param_2 + 0xd0) +
                       fVar2 * *(float *)(param_2 + 0xc0) + fVar1 * *(float *)(param_2 + 0xb0);
            local_60 = *(float *)(param_2 + 0xe8) * 1.0 + fVar3 * *(float *)(param_2 + 0xd8) +
                       fVar2 * *(float *)(param_2 + 200) + fVar1 * *(float *)(param_2 + 0xb8);
            fStack_64 = *(float *)(param_2 + 0xe4) * 1.0 + fVar3 * *(float *)(param_2 + 0xd4) +
                        fVar2 * *(float *)(param_2 + 0xc4) + fVar1 * *(float *)(param_2 + 0xb4);
          }
          fVar1 = pfVar9[2];
          *(undefined8 *)(uVar12 + 0x18 + lVar10) = *(undefined8 *)pfVar9;
          *(float *)(uVar12 + 0x20 + lVar10) = fVar1;
          uVar13 = FUN_1424116d0(param_1 + 0x50,*(undefined4 *)(lVar10 + 0xc),0,0);
          *(undefined4 *)(uVar12 + 0x24 + lVar10) = uVar13;
        }
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
  }
  return;
}



// FUNCTION 1405d0540 FUN_1405d0540 body=696 status=ok
// SIG undefined FUN_1405d0540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405d0540(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  LARGE_INTEGER local_res8;
  longlong local_res10;
  undefined1 local_res18 [8];
  longlong *plVar6;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    FUN_1405d0800(param_1 + -0x2d0);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    QueryPerformanceCounter(&local_res8);
    FUN_1405ae630(*(undefined8 *)(param_1 + 0x88),
                  (double)CONCAT44(local_res8.s.HighPart,local_res8.s.LowPart) * DAT_1468b02f8 +
                  16777216.0);
  }
  plVar1 = (longlong *)FUN_14233fea0(param_1 + -0x2d0);
  if (((*(longlong *)(param_1 + 0x98) != 0) && (*(longlong *)(param_1 + 0x88) != 0)) &&
     (plVar1 != (longlong *)0x0)) {
    FUN_1405c6ce0(param_1 + -0x2d0,&local_68);
    plVar6 = &local_res10;
    local_78 = local_58;
    fStack_70 = (float)uStack_50;
    fStack_74 = (float)uStack_54;
    (**(code **)(*plVar1 + 0x1c0))(plVar1,&local_78,&local_88,&local_res8,local_res18,plVar6);
    local_68 = local_68 * _DAT_1468544b0;
    fStack_64 = fStack_64 * fRam00000001468544b4;
    fStack_60 = fStack_60 * fRam00000001468544b8;
    fStack_5c = fStack_5c * fRam00000001468544bc;
    local_80 = local_80 * (float)local_res8.s.LowPart;
    local_84 = local_84 * (float)local_res8.s.LowPart;
    local_88 = local_88 * (float)local_res8.s.LowPart;
    fVar2 = local_80 * fStack_64 - local_84 * fStack_60;
    fVar3 = local_88 * fStack_60 - local_80 * local_68;
    fVar4 = local_84 * local_68 - local_88 * fStack_64;
    fVar5 = fStack_5c * 0.0 - fStack_5c * 0.0;
    fVar2 = fVar2 + fVar2;
    fVar3 = fVar3 + fVar3;
    fVar4 = fVar4 + fVar4;
    fVar5 = fVar5 + fVar5;
    local_78 = (fVar4 * fStack_64 - fVar3 * fStack_60) + fStack_5c * fVar2 + local_88;
    fStack_74 = (fVar2 * fStack_60 - fVar4 * local_68) + fStack_5c * fVar3 + local_84;
    fStack_70 = (fVar3 * local_68 - fVar2 * fStack_64) + fStack_5c * fVar4 + local_80;
    fStack_6c = (fVar5 * fStack_5c - fVar5 * fStack_5c) + fStack_5c * fVar5 + 0.0;
    if (local_78 <= 0.0) {
      fVar2 = *(float *)(param_1 + 0xac);
    }
    else {
      fVar2 = *(float *)(param_1 + 0xa8);
    }
    if (fStack_74 <= 0.0) {
      fVar3 = *(float *)(param_1 + 0xb4);
    }
    else {
      fVar3 = *(float *)(param_1 + 0xb0);
    }
    if (fStack_70 <= 0.0) {
      fVar4 = *(float *)(param_1 + 0xbc);
    }
    else {
      fVar4 = *(float *)(param_1 + 0xb8);
    }
    local_res10 = *(longlong *)(param_1 + 0x98);
    fVar2 = SQRT(fStack_74 * fVar3 * fStack_74 * fVar3 + local_78 * fVar2 * local_78 * fVar2 +
                 fStack_70 * fVar4 * fStack_70 * fVar4);
    if ((local_res10 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
      plVar6 = (longlong *)((ulonglong)plVar6 & 0xffffffff00000000);
      local_res8.s.LowPart = (DWORD)fVar2;
      FUN_1405aaa50(*(longlong *)(param_1 + 0x88),local_res10,fVar2,0,4,plVar6);
    }
    local_res10 = *(longlong *)(param_1 + 0xa0);
    if ((local_res10 != 0) && (0.0 <= *(float *)(param_1 + 0xc0))) {
      local_res8.s.LowPart = (DWORD)(fVar2 - *(float *)(param_1 + 0xc0));
      if (*(longlong *)(param_1 + 0x88) != 0) {
        FUN_1405aaa50(*(longlong *)(param_1 + 0x88),local_res10,local_res8.s.LowPart,0,4,
                      (ulonglong)plVar6 & 0xffffffff00000000);
      }
    }
    *(float *)(param_1 + 0xc0) = fVar2;
  }
  return;
}



// FUNCTION 1405d0800 FUN_1405d0800 body=1912 status=ok
// SIG undefined FUN_1405d0800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405d0800(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  float fVar12;
  float fVar16;
  float fVar17;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar20 [16];
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
  longlong local_res10;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
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
  
  FUN_14058f880(&local_res10,param_1 + 0x358);
  if (local_res10 == 0) {
    return;
  }
  FUN_1405c6ce0(param_1,&local_148);
  lVar5 = local_res10;
  if (*(int *)(param_1 + 0x360) == 0) {
    if (*(int *)(param_1 + 0x340) != 0) {
      FUN_1405aa840(local_res10,*(int *)(param_1 + 0x340),1);
      iVar10 = 0;
      if (0 < *(int *)(param_1 + 0x340)) {
        lVar11 = 0;
        lVar9 = 0;
        local_d8 = fStack_13c;
        fStack_d4 = fStack_13c;
        fStack_d0 = fStack_13c;
        fStack_cc = fStack_13c;
        fVar19 = local_128;
        fVar28 = fStack_124;
        fVar22 = fStack_120;
        fVar23 = fStack_11c;
        fVar21 = fStack_13c;
        fVar26 = fStack_13c;
        fVar24 = fStack_13c;
        fVar25 = fStack_13c;
        fVar27 = local_138;
        fVar29 = fStack_134;
        fVar30 = fStack_130;
        fVar31 = fStack_12c;
        do {
          lVar3 = *(longlong *)(param_1 + 0x338);
          fVar17 = *(float *)(lVar9 + 0x18 + lVar3);
          uVar6 = FRotator::Quaternion(lVar3 + 0xc + lVar9,&local_f8);
          fVar18 = fRam0000000146854508;
          fVar16 = fRam0000000146854504;
          fVar12 = _DAT_146854500;
          fVar39 = *(float *)(lVar9 + 8 + lVar3);
          fVar36 = *(float *)(lVar9 + 4 + lVar3);
          fVar34 = *(float *)(lVar9 + lVar3);
          auVar13._4_4_ = fVar17;
          auVar13._0_4_ = fVar17;
          auVar13._8_4_ = fVar17;
          auVar13._12_4_ = 0;
          local_e8 = _DAT_146854540;
          fStack_e4 = fRam0000000146854544;
          fStack_e0 = fRam0000000146854548;
          fStack_dc = fRam000000014685454c;
          auVar14._4_4_ = fVar28;
          auVar14._0_4_ = fVar19;
          auVar14._8_4_ = fVar22;
          auVar14._12_4_ = fVar23;
          auVar14 = minps(auVar13,auVar14);
          auVar15._4_4_ = -(uint)(auVar14._4_4_ < fRam0000000146854544);
          auVar15._0_4_ = -(uint)(auVar14._0_4_ < _DAT_146854540);
          auVar15._8_4_ = -(uint)(auVar14._8_4_ < fRam0000000146854548);
          auVar15._12_4_ = -(uint)(auVar14._12_4_ < fRam000000014685454c);
          iVar7 = movmskps(uVar6,auVar15);
          if (iVar7 == 0) {
            fVar34 = fVar19 * fVar34;
            fVar36 = fVar28 * fVar36;
            fVar39 = fVar22 * fVar39;
            fVar38 = fVar23 * 0.0;
            fVar40 = local_148 * fStack_ec * _DAT_1468544f0 + fVar21 * local_f8 +
                     fStack_144 * fStack_f0 * _DAT_1468544e0 +
                     fStack_140 * fStack_f4 * _DAT_1468544d0;
            fVar41 = local_148 * fStack_f0 * fRam00000001468544f4 + fVar26 * fStack_f4 +
                     fStack_144 * fStack_ec * fRam00000001468544e4 +
                     fStack_140 * local_f8 * fRam00000001468544d4;
            fVar42 = local_148 * fStack_f4 * fRam00000001468544f8 + fVar24 * fStack_f0 +
                     fStack_144 * local_f8 * fRam00000001468544e8 +
                     fStack_140 * fStack_ec * fRam00000001468544d8;
            fVar43 = local_148 * local_f8 * fRam00000001468544fc + fVar25 * fStack_ec +
                     fStack_144 * fStack_f4 * fRam00000001468544ec +
                     fStack_140 * fStack_f0 * fRam00000001468544dc;
            fVar32 = fVar39 * fStack_144 - fVar36 * fStack_140;
            fVar33 = fVar34 * fStack_140 - fVar39 * local_148;
            fVar35 = fVar36 * local_148 - fVar34 * fStack_144;
            fVar37 = fVar38 * fStack_13c - fVar38 * fStack_13c;
            fVar32 = fVar32 + fVar32;
            fVar33 = fVar33 + fVar33;
            fVar35 = fVar35 + fVar35;
            fVar37 = fVar37 + fVar37;
            fVar12 = fVar19 * fVar17;
            fVar16 = fVar28 * fVar17;
            fVar17 = fVar22 * fVar17;
            fVar18 = fVar23 * 0.0;
            fVar34 = (fVar35 * fStack_144 - fVar33 * fStack_140) + fVar21 * fVar32 + fVar34 + fVar27
            ;
            fVar36 = (fVar32 * fStack_140 - fVar35 * local_148) + fVar26 * fVar33 + fVar36 + fVar29;
            fVar39 = (fVar33 * local_148 - fVar32 * fStack_144) + fVar24 * fVar35 + fVar39 + fVar30;
            fVar32 = (fVar37 * fStack_13c - fVar37 * fStack_13c) + fVar25 * fVar37 + fVar38 + fVar31
            ;
          }
          else {
            local_108 = fVar19 * fVar17;
            fStack_104 = fVar28 * fVar17;
            fStack_100 = fVar22 * fVar17;
            fStack_fc = fVar23 * 0.0;
            fVar25 = fStack_144 + fStack_144;
            fVar29 = fStack_140 + fStack_140;
            fVar31 = local_148 * (local_148 + local_148);
            fVar26 = (local_148 + local_148) * fVar26;
            fVar27 = fStack_f4 + fStack_f4;
            fVar30 = fStack_f0 + fStack_f0;
            fVar43 = (fVar29 * fVar21 + fVar25 * local_148) * fVar19;
            fVar44 = (fVar26 + fVar29 * fStack_144) * fVar28;
            fVar45 = (fVar25 * fVar24 + fVar29 * local_148) * fVar22;
            fVar33 = fVar28 * (fVar25 * local_148 - fVar29 * fVar21);
            fVar35 = fVar22 * (fVar29 * fStack_144 - fVar26);
            fVar37 = fVar19 * (fVar29 * local_148 - fVar25 * fVar24);
            fVar32 = local_f8 * (local_f8 + local_f8);
            fVar19 = (float)((uint)((_DAT_146854500 - (fStack_140 * fVar29 + fStack_144 * fVar25)) *
                                   fVar19) & _DAT_1468544c0);
            fVar21 = (float)((uint)((fRam0000000146854504 - (fStack_140 * fVar29 + fVar31)) * fVar28
                                   ) & uRam00000001468544c4);
            fVar26 = (float)((uint)((fRam0000000146854508 - (fStack_144 * fVar25 + fVar31)) * fVar22
                                   ) & uRam00000001468544c8);
            fVar24 = (float)((uint)((fRam000000014685450c - (fVar31 + fVar31)) * fVar23) &
                            uRam00000001468544cc);
            fVar28 = (local_f8 + local_f8) * fStack_ec;
            fVar40 = (fVar30 * fStack_ec + fVar27 * local_f8) * fVar17;
            fVar41 = (fVar28 + fVar30 * fStack_f4) * fVar17;
            fVar42 = (fVar27 * fStack_ec + fVar30 * local_f8) * fVar17;
            fVar29 = fVar17 * (fVar27 * local_f8 - fVar30 * fStack_ec);
            fVar31 = fVar17 * (fVar30 * fStack_f4 - fVar28);
            fVar38 = fVar17 * (fVar30 * local_f8 - fVar27 * fStack_ec);
            fVar28 = (float)((uint)((_DAT_146854500 - (fStack_f0 * fVar30 + fStack_f4 * fVar27)) *
                                   fVar17) & _DAT_1468544c0);
            fVar22 = (float)((uint)((fRam0000000146854504 - (fStack_f0 * fVar30 + fVar32)) * fVar17)
                            & uRam00000001468544c4);
            fVar23 = (float)((uint)((fRam0000000146854508 - (fStack_f4 * fVar27 + fVar32)) * fVar17)
                            & uRam00000001468544c8);
            fVar25 = (float)((uint)((fRam000000014685450c - (fVar32 + fVar32)) * 0.0) &
                            uRam00000001468544cc);
            local_188._0_4_ =
                 fVar40 * fVar33 + fVar28 * fVar19 + fVar38 * fVar45 + fVar25 * local_138;
            local_188._4_4_ =
                 fVar40 * fVar21 + fVar28 * fVar43 + fVar38 * fVar35 + fVar25 * fStack_134;
            uStack_180._0_4_ =
                 fVar40 * fVar44 + fVar28 * fVar37 + fVar38 * fVar26 + fVar25 * fStack_130;
            uStack_180._4_4_ =
                 fVar40 * fVar24 + fVar28 * fVar24 + fVar38 * fVar24 + fVar25 * fRam000000014685450c
            ;
            local_178._0_4_ =
                 fVar22 * fVar33 + fVar29 * fVar19 + fVar41 * fVar45 + fVar25 * local_138;
            local_178._4_4_ =
                 fVar22 * fVar21 + fVar29 * fVar43 + fVar41 * fVar35 + fVar25 * fStack_134;
            uStack_170._0_4_ =
                 fVar22 * fVar44 + fVar29 * fVar37 + fVar41 * fVar26 + fVar25 * fStack_130;
            uStack_170._4_4_ =
                 fVar22 * fVar24 + fVar29 * fVar24 + fVar41 * fVar24 + fVar25 * fRam000000014685450c
            ;
            local_168._0_4_ =
                 fVar31 * fVar33 + fVar42 * fVar19 + fVar23 * fVar45 + fVar25 * local_138;
            local_168._4_4_ =
                 fVar31 * fVar21 + fVar42 * fVar43 + fVar23 * fVar35 + fVar25 * fStack_134;
            uStack_160._0_4_ =
                 fVar31 * fVar44 + fVar42 * fVar37 + fVar23 * fVar26 + fVar25 * fStack_130;
            uStack_160._4_4_ =
                 fVar31 * fVar24 + fVar42 * fVar24 + fVar23 * fVar24 + fVar25 * fRam000000014685450c
            ;
            local_158 = fVar36 * fVar33 + fVar34 * fVar19 + fVar39 * fVar45 +
                        fRam000000014685450c * local_138;
            fStack_154 = fVar36 * fVar21 + fVar34 * fVar43 + fVar39 * fVar35 +
                         fRam000000014685450c * fStack_134;
            fStack_150 = fVar36 * fVar44 + fVar34 * fVar37 + fVar39 * fVar26 +
                         fRam000000014685450c * fStack_130;
            fStack_14c = fVar36 * fVar24 + fVar34 * fVar24 + fVar39 * fVar24 +
                         fRam000000014685450c * fRam000000014685450c;
            FMatrix::RemoveScaling(&local_188);
            fVar19 = (float)(-(uint)(local_e8 <= local_108) & (_DAT_146854530 ^ (uint)fVar12) ^
                            _DAT_146854530);
            fVar28 = (float)(-(uint)(fStack_e4 <= fStack_104) &
                             (uRam0000000146854534 ^ (uint)fVar16) ^ uRam0000000146854534);
            fVar22 = (float)(-(uint)(fStack_e0 <= fStack_100) &
                             (uRam0000000146854538 ^ (uint)fVar18) ^ uRam0000000146854538);
            local_188 = CONCAT44(local_188._4_4_ * fVar19,(float)local_188 * fVar19);
            uStack_180 = CONCAT44(uStack_180._4_4_,(float)uStack_180 * fVar19);
            uStack_170 = CONCAT44(uStack_170._4_4_,(float)uStack_170 * fVar28);
            uStack_160 = CONCAT44(uStack_160._4_4_,(float)uStack_160 * fVar22);
            local_178 = CONCAT44(local_178._4_4_ * fVar28,(float)local_178 * fVar28);
            local_168 = CONCAT44(local_168._4_4_ * fVar22,(float)local_168 * fVar22);
            FQuat::FQuat(&local_118,&local_188);
            auVar20._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
            auVar20._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
            auVar20._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
            auVar20._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
            fVar21 = auVar20._4_4_ + auVar20._0_4_;
            fVar26 = auVar20._8_4_ + auVar20._4_4_;
            fVar24 = auVar20._12_4_ + auVar20._8_4_;
            fVar25 = auVar20._0_4_ + auVar20._12_4_;
            auVar4._4_4_ = fVar26;
            auVar4._0_4_ = fVar21;
            auVar4._8_4_ = fVar24;
            auVar4._12_4_ = fVar25;
            auVar14 = rsqrtps(auVar20,auVar4);
            fVar19 = auVar14._0_4_;
            fVar28 = auVar14._4_4_;
            fVar22 = auVar14._8_4_;
            fVar23 = auVar14._12_4_;
            fVar19 = (_DAT_146854520 - fVar19 * fVar19 * fVar21 * _DAT_146854520) * fVar19 + fVar19;
            fVar28 = (fRam0000000146854524 - fVar28 * fVar28 * fVar26 * fRam0000000146854524) *
                     fVar28 + fVar28;
            fVar22 = (fRam0000000146854528 - fVar22 * fVar22 * fVar24 * fRam0000000146854528) *
                     fVar22 + fVar22;
            fVar23 = (fRam000000014685452c - fVar23 * fVar23 * fVar25 * fRam000000014685452c) *
                     fVar23 + fVar23;
            fVar32 = 0.0;
            fVar40 = (float)(((uint)(((_DAT_146854520 - fVar19 * fVar19 * fVar21 * _DAT_146854520) *
                                      fVar19 + fVar19) * local_118) ^ _DAT_146854510) &
                             -(uint)(1e-08 <= fVar21) ^ _DAT_146854510);
            fVar41 = (float)(((uint)(((fRam0000000146854524 -
                                      fVar28 * fVar28 * fVar26 * fRam0000000146854524) * fVar28 +
                                     fVar28) * fStack_114) ^ uRam0000000146854514) &
                             -(uint)(1e-08 <= fVar26) ^ uRam0000000146854514);
            fVar42 = (float)(((uint)(((fRam0000000146854528 -
                                      fVar22 * fVar22 * fVar24 * fRam0000000146854528) * fVar22 +
                                     fVar22) * fStack_110) ^ uRam0000000146854518) &
                             -(uint)(1e-08 <= fVar24) ^ uRam0000000146854518);
            fVar43 = (float)(((uint)(((fRam000000014685452c -
                                      fVar23 * fVar23 * fVar25 * fRam000000014685452c) * fVar23 +
                                     fVar23) * fStack_10c) ^ uRam000000014685451c) &
                             -(uint)(1e-08 <= fVar25) ^ uRam000000014685451c);
            fVar34 = local_158;
            fVar36 = fStack_154;
            fVar39 = fStack_150;
            fVar19 = local_128;
            fVar28 = fStack_124;
            fVar22 = fStack_120;
            fVar23 = fStack_11c;
            fVar21 = local_d8;
            fVar26 = fStack_d4;
            fVar24 = fStack_d0;
            fVar25 = fStack_cc;
            fVar27 = local_138;
            fVar29 = fStack_134;
            fVar30 = fStack_130;
            fVar31 = fStack_12c;
            fVar12 = local_108;
            fVar16 = fStack_104;
            fVar17 = fStack_100;
            fVar18 = fStack_fc;
            local_118 = fVar40;
            fStack_114 = fVar41;
            fStack_110 = fVar42;
            fStack_10c = fVar43;
          }
          lVar8 = *(longlong *)(lVar5 + 0x40);
          if (*(longlong *)(lVar5 + 0x40) == 0) {
            lVar8 = lVar5;
          }
          pfVar1 = (float *)(lVar8 + lVar11);
          *pfVar1 = fVar40;
          pfVar1[1] = fVar41;
          pfVar1[2] = fVar42;
          pfVar1[3] = fVar43;
          pfVar1 = (float *)(lVar8 + 0x10 + lVar11);
          *pfVar1 = fVar34;
          pfVar1[1] = fVar36;
          pfVar1[2] = fVar39;
          pfVar1[3] = fVar32;
          pfVar1 = (float *)(lVar8 + 0x20 + lVar11);
          *pfVar1 = fVar12;
          pfVar1[1] = fVar16;
          pfVar1[2] = fVar17;
          pfVar1[3] = fVar18;
          lVar8 = *(longlong *)(lVar5 + 0x40);
          if (*(longlong *)(lVar5 + 0x40) == 0) {
            lVar8 = lVar5;
          }
          iVar10 = iVar10 + 1;
          lVar2 = lVar9 + 0x1c;
          lVar9 = lVar9 + 0x20;
          *(undefined4 *)(lVar8 + 0x30 + lVar11) = *(undefined4 *)(lVar2 + lVar3);
          lVar11 = lVar11 + 0x40;
        } while (iVar10 < *(int *)(param_1 + 0x340));
      }
      FUN_1405b0a40(local_res10,0);
      goto LAB_1405d0f5c;
    }
LAB_1405d0f1c:
    if (*(int *)(param_1 + 0x340) != 0) goto LAB_1405d0f5c;
  }
  else if (*(int *)(param_1 + 0x360) != 1) goto LAB_1405d0f1c;
  local_188 = CONCAT44(fStack_144,local_148);
  uStack_180 = CONCAT44(fStack_13c,fStack_140);
  local_178 = CONCAT44(fStack_134,local_138);
  uStack_170 = CONCAT44(fStack_12c,fStack_130);
  local_168 = CONCAT44(fStack_124,local_128);
  uStack_160 = CONCAT44(fStack_11c,fStack_120);
  FUN_1405aac00(local_res10,&local_188,0x3f800000);
LAB_1405d0f5c:
  if (local_res10 != 0) {
    FUN_1405a53f0();
  }
  return;
}



// FUNCTION 1405d0f80 FUN_1405d0f80 body=704 status=ok
// SIG undefined FUN_1405d0f80(void)

void FUN_1405d0f80(longlong param_1,longlong *param_2,char param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float local_48;
  float local_44;
  float local_40;
  
  if (param_1 == 0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  plVar2 = (longlong *)UTwitchInteractivitySettings::GetPrivateStaticClass();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  lVar6 = 0;
  if (lVar3 != 0) {
    lVar6 = *(longlong *)(lVar3 + 0x28);
  }
  if ((lVar6 != 0) && (param_3 != '\0')) {
    if (*(longlong *)(lVar6 + 0x198) != 0) {
      FUN_1405aaa50(*param_2,*(longlong *)(lVar6 + 0x198),0x3f800000,0,4,0);
    }
    if (*(longlong *)(lVar6 + 0x1a0) == 0) {
      return;
    }
    FUN_1405aaa50(*param_2,*(longlong *)(lVar6 + 0x1a0),0x3f800000,0,4,0);
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 == (longlong *)0x0) {
LAB_1405d10e7:
    plVar2 = (longlong *)0x0;
  }
  else {
    lVar3 = FUN_1429d7ab0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_1405d10e7;
    lVar3 = (**(code **)(*plVar2 + 0x6e8))(plVar2);
    if (lVar3 != 0) {
      lVar4 = UMediaSoundComponent::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_1405d10ed;
    }
  }
  lVar3 = 0;
LAB_1405d10ed:
  if (((lVar6 != 0) && (plVar2 != (longlong *)0x0)) && (lVar3 != 0)) {
    fVar7 = (float)FUN_14247f5a0(lVar3 + 0x274);
    if (fVar7 < 0.0001) {
      fVar7 = 500.0;
    }
    (**(code **)(*plVar2 + 0x308))(plVar2,&local_48);
    fVar7 = SQRT(local_48 * local_48 + local_44 * local_44 + local_40 * local_40) * (1.0 / fVar7);
    if (*(longlong *)(lVar6 + 0x198) != 0) {
      FUN_1405aaa50(*param_2,*(longlong *)(lVar6 + 0x198),fVar7,0,4,0);
    }
    if (*(longlong *)(lVar6 + 0x1a0) != 0) {
      fVar8 = 0.0;
      if (((*(char *)(lVar3 + 0x248) - 3U & 0xfc) == 0) && (*(char *)(lVar3 + 0x248) != '\x04')) {
        fVar8 = fVar7;
      }
      FUN_1405aaa50(*param_2,*(longlong *)(lVar6 + 0x1a0),fVar8,0,4,0);
    }
    uVar5 = UPathFollowingAgentInterface::GetPrivateStaticClass();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar2,uVar5);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x40))(plVar2,param_1,*param_2,param_3);
    }
  }
  return;
}



// FUNCTION 1405d1250 FUN_1405d1250 body=157 status=ok
// SIG undefined FUN_1405d1250(void)

void FUN_1405d1250(undefined8 param_1,undefined8 param_2,undefined8 *param_3,float param_4)

{
  char cVar1;
  
  *(ulonglong *)((longlong)param_3 + 0x34) =
       CONCAT44(param_4 * *(float *)(param_3 + 5) +
                (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x34) >> 0x20),
                param_4 * *(float *)((longlong)param_3 + 0x24) +
                (float)*(undefined8 *)((longlong)param_3 + 0x34));
  *(float *)((longlong)param_3 + 0x3c) =
       param_4 * *(float *)((longlong)param_3 + 0x2c) + *(float *)((longlong)param_3 + 0x3c);
  cVar1 = FUN_14059ee90(param_3);
  if (cVar1 != '\0') {
    FUN_1405aab70(*param_3,(longlong)param_3 + 0x34,&DAT_1468b5da0,0,0x3f800000);
  }
  return;
}



// FUNCTION 1405d12f0 FUN_1405d12f0 body=442 status=ok
// SIG undefined FUN_1405d12f0(void)

void FUN_1405d12f0(longlong param_1,undefined8 param_2,longlong *param_3,float param_4)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_48;
  float local_40;
  float local_30;
  
  local_48 = *(undefined8 *)((longlong)param_3 + 0x34);
  local_40 = param_4 * *(float *)((longlong)param_3 + 0x2c) + *(float *)((longlong)param_3 + 0x3c);
  *(ulonglong *)((longlong)param_3 + 0x34) =
       CONCAT44(param_4 * *(float *)(param_3 + 5) + (float)((ulonglong)local_48 >> 0x20),
                param_4 * *(float *)((longlong)param_3 + 0x24) + (float)local_48);
  *(float *)((longlong)param_3 + 0x3c) = local_40;
  cVar2 = FUN_14059ee90(param_3);
  if (cVar2 != '\0') {
    FUN_1405aab70(*param_3,(longlong)param_3 + 0x34,&DAT_1468b5da0,0,0x3f800000);
  }
  param_4 = param_4 + *(float *)(param_3 + 6);
  *(float *)(param_3 + 6) = param_4;
  if (*(float *)(param_1 + 0x30) <= param_4 && param_4 != *(float *)(param_1 + 0x30)) {
    local_54 = *(float *)(param_3 + 5);
    local_58 = *(float *)((longlong)param_3 + 0x24);
    local_50 = *(float *)((longlong)param_3 + 0x2c);
    fVar3 = SQRT(local_58 * local_58 + local_54 * local_54 + local_50 * local_50);
    fVar4 = 1.0 / fVar3;
    local_58 = local_58 * fVar4;
    local_54 = local_54 * fVar4;
    local_50 = local_50 * fVar4;
    FMath::VRandCone(&local_48,&local_58,*(undefined4 *)(param_1 + 0x34));
    local_30 = local_40 * fVar3;
    *(ulonglong *)((longlong)param_3 + 0x24) =
         CONCAT44(local_48._4_4_ * fVar3,(float)local_48 * fVar3);
    *(float *)((longlong)param_3 + 0x2c) = local_30;
    cVar2 = FUN_14059ee90(param_3);
    if ((cVar2 != '\0') && (lVar1 = *(longlong *)(*param_3 + 0x2d8), lVar1 != 0)) {
      *(undefined8 *)(lVar1 + 0x240) = *(undefined8 *)((longlong)param_3 + 0x24);
      *(undefined4 *)(lVar1 + 0x248) = *(undefined4 *)((longlong)param_3 + 0x2c);
    }
    *(undefined4 *)(param_3 + 6) = 0;
  }
  return;
}



// FUNCTION 1405d14c0 FUN_1405d14c0 body=2207 status=ok
// SIG undefined FUN_1405d14c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405d14c0(longlong param_1,float param_2)

{
  float fVar1;
  undefined1 auVar2 [12];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float *pfVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 uVar17;
  longlong lVar18;
  float *pfVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong lVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  float fVar32;
  float fVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
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
  undefined1 auStack_178 [32];
  float local_158 [4];
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  if (*(longlong *)(param_1 + 0x350) == 0) {
    return;
  }
  pfVar13 = (float *)FRotator::Quaternion(param_1 + 0x1f8,&local_148);
  fVar58 = *(float *)(param_1 + 500);
  fVar59 = *(float *)(param_1 + 0x1f0);
  fVar60 = *(float *)(param_1 + 0x1ec);
  fVar39 = *(float *)*(undefined1 (*) [12])(param_1 + 0x204);
  plVar20 = *(longlong **)(param_1 + 400);
  fVar46 = *(float *)(param_1 + 0x20c);
  fVar48 = *(float *)(param_1 + 0x208);
  auVar2 = *(undefined1 (*) [12])(param_1 + 0x204);
  if (plVar20 == (longlong *)0x0) {
    pfVar19 = (float *)&local_118;
    local_118 = _DAT_1468b5b70;
    uStack_110 = uRam00000001468b5b78;
    local_f8 = _DAT_1468b5b90;
    uStack_f0 = uRam00000001468b5b98;
    local_108 = _DAT_1468b5b80;
    uStack_100 = uRam00000001468b5b88;
  }
  else {
    pfVar13 = (float *)(**(code **)(*plVar20 + 0x420))
                                 (plVar20,&local_118,*(undefined8 *)(param_1 + 0x198),0);
    pfVar19 = pfVar13;
  }
  fVar11 = fRam0000000146854548;
  fVar10 = fRam0000000146854544;
  fVar9 = _DAT_146854540;
  fVar8 = fRam0000000146854508;
  fVar7 = fRam0000000146854504;
  fVar6 = _DAT_146854500;
  auVar31 = *(undefined1 (*) [16])(pfVar19 + 8);
  fVar50 = auVar31._0_4_;
  fVar51 = auVar31._4_4_;
  fVar1 = auVar31._8_4_;
  auVar26._12_4_ = 0;
  auVar26._0_12_ = auVar2;
  fVar28 = *pfVar19;
  fVar29 = pfVar19[1];
  fVar32 = pfVar19[2];
  fVar33 = pfVar19[3];
  fVar3 = pfVar19[4];
  fVar4 = pfVar19[5];
  fVar5 = pfVar19[6];
  auVar26 = minps(auVar26,auVar31);
  auVar27._4_4_ = -(uint)(auVar26._4_4_ < fRam0000000146854544);
  auVar27._0_4_ = -(uint)(auVar26._0_4_ < _DAT_146854540);
  auVar27._8_4_ = -(uint)(auVar26._8_4_ < fRam0000000146854548);
  auVar27._12_4_ = -(uint)(auVar26._12_4_ < fRam000000014685454c);
  iVar12 = movmskps((int)pfVar13,auVar27);
  if (iVar12 == 0) {
    fVar60 = fVar60 * fVar50;
    fVar59 = fVar59 * fVar51;
    fVar58 = fVar58 * fVar1;
    fVar39 = fVar58 * fVar29 - fVar59 * fVar32;
    fVar46 = fVar60 * fVar32 - fVar58 * fVar28;
    fVar48 = fVar59 * fVar28 - fVar60 * fVar29;
    fVar39 = fVar39 + fVar39;
    fVar46 = fVar46 + fVar46;
    fVar48 = fVar48 + fVar48;
    fVar60 = (fVar48 * fVar29 - fVar46 * fVar32) + fVar33 * fVar39 + fVar60 + pfVar19[4];
    fVar59 = (fVar39 * fVar32 - fVar48 * fVar28) + fVar33 * fVar46 + fVar59 + pfVar19[5];
    fVar58 = (fVar46 * fVar28 - fVar39 * fVar29) + fVar33 * fVar48 + fVar58 + pfVar19[6];
  }
  else {
    fVar34 = fVar29 + fVar29;
    fVar37 = fVar32 + fVar32;
    fVar40 = (fVar28 + fVar28) * fVar28;
    fVar35 = (fVar28 + fVar28) * fVar33;
    fVar55 = (fVar37 * fVar33 + fVar34 * fVar28) * fVar50;
    fVar56 = (fVar35 + fVar37 * fVar29) * fVar51;
    fVar57 = (fVar34 * fVar33 + fVar37 * fVar28) * fVar1;
    fVar44 = fVar51 * (fVar34 * fVar28 - fVar37 * fVar33);
    fVar47 = fVar1 * (fVar37 * fVar29 - fVar35);
    fVar49 = fVar50 * (fVar37 * fVar28 - fVar34 * fVar33);
    fVar28 = (float)((uint)((_DAT_146854500 - (fVar37 * fVar32 + fVar34 * fVar29)) * fVar50) &
                    _DAT_1468544c0);
    fVar32 = (float)((uint)((fRam0000000146854504 - (fVar37 * fVar32 + fVar40)) * fVar51) &
                    uRam00000001468544c4);
    fVar34 = (float)((uint)((fRam0000000146854508 - (fVar34 * fVar29 + fVar40)) * fVar1) &
                    uRam00000001468544c8);
    fVar37 = (float)((uint)((fRam000000014685450c - (fVar40 + fVar40)) * auVar31._12_4_) &
                    uRam00000001468544cc);
    fVar29 = (float)local_148 + (float)local_148;
    fVar33 = local_148._4_4_ + local_148._4_4_;
    fVar35 = fStack_140 + fStack_140;
    fStack_12c = fRam000000014685450c;
    fVar41 = (float)local_148 * fVar29;
    fVar42 = local_148._4_4_ * fVar33;
    fVar43 = fStack_140 * fVar35;
    fVar40 = (float)local_148 * fVar33;
    fVar36 = local_148._4_4_ * fVar35;
    fVar38 = (float)local_148 * fVar35;
    local_148._0_4_ = fStack_13c * fVar35;
    local_148._4_4_ = fStack_13c * fVar29;
    fStack_140 = fStack_13c * fVar33;
    fStack_13c = fStack_13c * fVar29;
    fVar52 = ((float)local_148 + fVar40) * fVar39;
    fVar53 = (local_148._4_4_ + fVar36) * fVar48;
    fVar54 = (fStack_140 + fVar38) * fVar46;
    fVar45 = fVar48 * (fVar40 - (float)local_148);
    fVar36 = fVar46 * (fVar36 - local_148._4_4_);
    fVar38 = fVar39 * (fVar38 - fStack_140);
    fVar29 = (float)((uint)((_DAT_146854500 - (fVar43 + fVar42)) * fVar39) & _DAT_1468544c0);
    fVar33 = (float)((uint)((fRam0000000146854504 - (fVar43 + fVar41)) * fVar48) &
                    uRam00000001468544c4);
    fVar35 = (float)((uint)((fRam0000000146854508 - (fVar42 + fVar41)) * fVar46) &
                    uRam00000001468544c8);
    fVar40 = (float)((uint)((fRam000000014685450c - (fVar41 + fVar41)) * 0.0) & uRam00000001468544cc
                    );
    local_118._0_4_ = fVar52 * fVar44 + fVar29 * fVar28 + fVar38 * fVar57 + fVar40 * fVar3;
    local_118._4_4_ = fVar52 * fVar32 + fVar29 * fVar55 + fVar38 * fVar47 + fVar40 * fVar4;
    uStack_110._0_4_ = fVar52 * fVar56 + fVar29 * fVar49 + fVar38 * fVar34 + fVar40 * fVar5;
    uStack_110._4_4_ =
         fVar52 * fVar37 + fVar29 * fVar37 + fVar38 * fVar37 + fVar40 * fRam000000014685450c;
    local_108._0_4_ = fVar33 * fVar44 + fVar45 * fVar28 + fVar53 * fVar57 + fVar40 * fVar3;
    local_108._4_4_ = fVar33 * fVar32 + fVar45 * fVar55 + fVar53 * fVar47 + fVar40 * fVar4;
    uStack_100._0_4_ = fVar33 * fVar56 + fVar45 * fVar49 + fVar53 * fVar34 + fVar40 * fVar5;
    uStack_100._4_4_ =
         fVar33 * fVar37 + fVar45 * fVar37 + fVar53 * fVar37 + fVar40 * fRam000000014685450c;
    local_f8._0_4_ = fVar36 * fVar44 + fVar54 * fVar28 + fVar35 * fVar57 + fVar40 * fVar3;
    local_f8._4_4_ = fVar36 * fVar32 + fVar54 * fVar55 + fVar35 * fVar47 + fVar40 * fVar4;
    uStack_f0._0_4_ = fVar36 * fVar56 + fVar54 * fVar49 + fVar35 * fVar34 + fVar40 * fVar5;
    uStack_f0._4_4_ =
         fVar36 * fVar37 + fVar54 * fVar37 + fVar35 * fVar37 + fVar40 * fRam000000014685450c;
    local_e8 = fVar59 * fVar44 + fVar60 * fVar28 + fVar58 * fVar57 + fRam000000014685450c * fVar3;
    fStack_e4 = fVar59 * fVar32 + fVar60 * fVar55 + fVar58 * fVar47 + fRam000000014685450c * fVar4;
    fStack_e0 = fVar59 * fVar56 + fVar60 * fVar49 + fVar58 * fVar34 + fRam000000014685450c * fVar5;
    fStack_dc = fVar59 * fVar37 + fVar60 * fVar37 + fVar58 * fVar37 +
                fRam000000014685450c * fRam000000014685450c;
    local_138 = fVar3;
    fStack_134 = fVar4;
    fStack_130 = fVar5;
    FMatrix::RemoveScaling(&local_118);
    fVar58 = (float)(-(uint)(fVar9 <= fVar39 * fVar50) & (_DAT_146854530 ^ (uint)fVar6) ^
                    _DAT_146854530);
    fVar59 = (float)(-(uint)(fVar10 <= fVar48 * fVar51) & (uRam0000000146854534 ^ (uint)fVar7) ^
                    uRam0000000146854534);
    fVar60 = (float)(-(uint)(fVar11 <= fVar46 * fVar1) & (uRam0000000146854538 ^ (uint)fVar8) ^
                    uRam0000000146854538);
    uStack_110 = CONCAT44(uStack_110._4_4_,(float)uStack_110 * fVar58);
    local_118 = CONCAT44(local_118._4_4_ * fVar58,(float)local_118 * fVar58);
    uStack_100 = CONCAT44(uStack_100._4_4_,(float)uStack_100 * fVar59);
    uStack_f0 = CONCAT44(uStack_f0._4_4_,(float)uStack_f0 * fVar60);
    local_108 = CONCAT44(local_108._4_4_ * fVar59,(float)local_108 * fVar59);
    local_f8 = CONCAT44(local_f8._4_4_ * fVar60,(float)local_f8 * fVar60);
    FQuat::FQuat(&local_148,&local_118);
    local_158[0] = 1e-08;
    auVar30._0_4_ = (float)local_148 * (float)local_148 + fStack_140 * fStack_140;
    auVar30._4_4_ = local_148._4_4_ * local_148._4_4_ + fStack_13c * fStack_13c;
    auVar30._8_4_ = fStack_140 * fStack_140 + (float)local_148 * (float)local_148;
    auVar30._12_4_ = fStack_13c * fStack_13c + local_148._4_4_ * local_148._4_4_;
    fVar46 = auVar30._4_4_ + auVar30._0_4_;
    fVar48 = auVar30._8_4_ + auVar30._4_4_;
    fVar50 = auVar30._12_4_ + auVar30._8_4_;
    fVar51 = auVar30._0_4_ + auVar30._12_4_;
    auVar31._4_4_ = fVar48;
    auVar31._0_4_ = fVar46;
    auVar31._8_4_ = fVar50;
    auVar31._12_4_ = fVar51;
    auVar31 = rsqrtps(auVar30,auVar31);
    fVar58 = auVar31._0_4_;
    fVar59 = auVar31._4_4_;
    fVar60 = auVar31._8_4_;
    fVar39 = auVar31._12_4_;
    fVar58 = (_DAT_146854520 - fVar58 * fVar58 * fVar46 * _DAT_146854520) * fVar58 + fVar58;
    fVar59 = (fRam0000000146854524 - fVar59 * fVar59 * fVar48 * fRam0000000146854524) * fVar59 +
             fVar59;
    fVar60 = (fRam0000000146854528 - fVar60 * fVar60 * fVar50 * fRam0000000146854528) * fVar60 +
             fVar60;
    fVar39 = (fRam000000014685452c - fVar39 * fVar39 * fVar51 * fRam000000014685452c) * fVar39 +
             fVar39;
    fStack_140 = (float)(((uint)(((fRam0000000146854528 -
                                  fVar60 * fVar60 * fVar50 * fRam0000000146854528) * fVar60 + fVar60
                                 ) * fStack_140) ^ uRam0000000146854518) & -(uint)(1e-08 <= fVar50)
                        ^ uRam0000000146854518);
    fStack_13c = (float)(((uint)(((fRam000000014685452c -
                                  fVar39 * fVar39 * fVar51 * fRam000000014685452c) * fVar39 + fVar39
                                 ) * fStack_13c) ^ uRam000000014685451c) & -(uint)(1e-08 <= fVar51)
                        ^ uRam000000014685451c);
    local_148 = (float *)CONCAT44(((uint)(((fRam0000000146854524 -
                                           fVar59 * fVar59 * fVar48 * fRam0000000146854524) * fVar59
                                          + fVar59) * local_148._4_4_) ^ uRam0000000146854514) &
                                  -(uint)(1e-08 <= fVar48) ^ uRam0000000146854514,
                                  ((uint)(((_DAT_146854520 -
                                           fVar58 * fVar58 * fVar46 * _DAT_146854520) * fVar58 +
                                          fVar58) * (float)local_148) ^ _DAT_146854510) &
                                  -(uint)(1e-08 <= fVar46) ^ _DAT_146854510);
    fVar60 = local_e8;
    fVar59 = fStack_e4;
    fVar58 = fStack_e0;
  }
  plVar23 = (longlong *)0x0;
  plVar20 = *(longlong **)(param_1 + 0x328);
  plVar15 = (longlong *)((longlong)*(int *)(param_1 + 0x330) & 0x1fffffffffffffff);
  if (plVar20 + *(int *)(param_1 + 0x330) < plVar20) {
    plVar15 = plVar23;
  }
  plVar22 = plVar23;
  fVar39 = param_2;
  if (plVar15 != (longlong *)0x0) {
    do {
      param_2 = fVar39;
      if ((*plVar20 != 0) && (param_2 = *(float *)(*plVar20 + 0x38), param_2 <= fVar39)) {
        param_2 = fVar39;
      }
      plVar20 = plVar20 + 1;
      plVar22 = (longlong *)((longlong)plVar22 + 1);
      fVar39 = param_2;
    } while (plVar22 != plVar15);
  }
  fStack_124 = param_2;
  if ((*(longlong *)(param_1 + 0x358) != 0) &&
     (fStack_124 = (float)FUN_14059ca00(), fStack_124 <= param_2)) {
    fStack_124 = param_2;
  }
  local_148 = (float *)0x0;
  local_128 = fStack_124 * 0.3;
  fStack_140 = 2.8026e-45;
  fStack_124 = fStack_124 * 0.8;
  TArray<int,FDefaultAllocator>::ResizeForCopy(&local_148,2);
  pfVar13 = local_148;
  *(ulonglong *)local_148 = CONCAT44(fStack_124,local_128);
  local_138 = fVar60;
  fStack_134 = fVar59;
  fStack_130 = fVar58;
  uVar14 = UBlendableInterface::GetPrivateStaticClass();
  plVar15 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_1,uVar14);
  fVar39 = fStack_140;
  plVar20 = *(longlong **)(param_1 + 0x350);
  if (param_1 == 0) {
    plVar15 = plVar23;
  }
  plVar22 = (longlong *)plVar20[7];
  plVar24 = plVar22 + (longlong)(int)plVar20[8] * 7;
  for (; plVar22 != plVar24; plVar22 = plVar22 + 7) {
    plVar21 = plVar23;
    if (*plVar22 != 0) {
      plVar21 = (longlong *)plVar22[1];
    }
    plVar16 = plVar15;
    if (param_1 == 0) {
      plVar16 = plVar23;
    }
    if ((plVar21 == plVar16) && (*plVar22 == param_1)) {
      lVar25 = (longlong)(int)fStack_140;
      if (((fVar60 != *(float *)(plVar22 + 2)) ||
          (((fVar59 != *(float *)((longlong)plVar22 + 0x14) || (fVar58 != *(float *)(plVar22 + 3)))
           || ((float)(int)plVar22[5] != fStack_140)))) ||
         (iVar12 = _guard_xfg_dispatch_icall_nop
                             ((void *)plVar22[4],pfVar13,(longlong)(int)plVar22[5] << 2),
         iVar12 != 0)) {
        plVar15 = plVar22 + 4;
        plVar22[2] = CONCAT44(fStack_134,local_138);
        *(float *)(plVar22 + 3) = fStack_130;
        if (plVar15 != &local_148) {
          *(float *)(plVar22 + 5) = fVar39;
          if ((fVar39 == 0.0) && (*(int *)((longlong)plVar22 + 0x2c) == 0)) {
            *(undefined4 *)((longlong)plVar22 + 0x2c) = 0;
          }
          else {
            TArray<int,FDefaultAllocator>::ResizeForCopy(plVar15,fVar39);
            _guard_xfg_dispatch_icall_nop((void *)*plVar15,pfVar13,lVar25 << 2);
          }
        }
        uVar14 = DAT_1468536c8;
        local_158[0] = 0.0;
        uVar17 = (**(code **)(*plVar20 + 0x148))(plVar20);
        lVar18 = FUN_14059b380(uVar14,uVar17,plVar22 + 2,local_158);
        if (lVar18 != 0) {
          pfVar19 = pfVar13;
          goto joined_r0x0001405d1c8e;
        }
      }
      break;
    }
  }
  goto LAB_1405d1cee;
joined_r0x0001405d1c8e:
  if (pfVar19 == pfVar13 + lVar25) goto LAB_1405d1cba;
  if (local_158[0] < *pfVar19 * *pfVar19) {
    iVar12 = (int)((longlong)pfVar19 - (longlong)pfVar13 >> 2);
    goto LAB_1405d1cbf;
  }
  pfVar19 = pfVar19 + 1;
  goto joined_r0x0001405d1c8e;
LAB_1405d1cba:
  iVar12 = -1;
LAB_1405d1cbf:
  lVar25 = plVar22[6];
  if ((int)lVar25 != iVar12) {
    *(int *)(plVar22 + 6) = iVar12;
    if (*plVar22 != 0) {
      plVar23 = (longlong *)plVar22[1];
    }
    (**(code **)(*plVar23 + 0x20))(plVar23,(int)lVar25,iVar12);
  }
LAB_1405d1cee:
  if (pfVar13 != (float *)0x0) {
    FMemory::Free(pfVar13);
  }
  return;
}



// FUNCTION 1405d1da0 FUN_1405d1da0 body=162 status=ok
// SIG undefined FUN_1405d1da0(void)

longlong FUN_1405d1da0(void)

{
  if (DAT_146854868 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AnimNotifyState_LoopingSound",&DAT_146854868,FUN_140447710,
                  0xb0,0x10000000,0,L"Engine",&LAB_1405d4a70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotifyState::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146854868;
}



// FUNCTION 1405d1e70 FUN_1405d1e70 body=151 status=ok
// SIG undefined FUN_1405d1e70(void)

longlong FUN_1405d1e70(void)

{
  if (DAT_146854788 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientUpdater",&DAT_146854788,FUN_140447710,0x28,
                  0x10000001,0,L"Engine",FUN_1405d4980,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146854788;
}



// FUNCTION 1405d1f10 FUN_1405d1f10 body=162 status=ok
// SIG undefined FUN_1405d1f10(void)

longlong FUN_1405d1f10(void)

{
  if (DAT_146854778 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientSoundComponent",&DAT_146854778,FUN_1405d6420,
                  0x208,0x10000000,0,L"Engine",&LAB_1405d4970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146854778;
}



// FUNCTION 1405d1fc0 FUN_1405d1fc0 body=162 status=ok
// SIG undefined FUN_1405d1fc0(void)

longlong FUN_1405d1fc0(void)

{
  if (DAT_1468547a8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientUpdater_Blueprint",&DAT_1468547a8,FUN_140447710
                  ,0x28,0x10000001,0,L"Engine",FUN_1405d49b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d1e70,&LAB_140447700,0);
  }
  return DAT_1468547a8;
}



// FUNCTION 1405d2070 FUN_1405d2070 body=162 status=ok
// SIG undefined FUN_1405d2070(void)

longlong FUN_1405d2070(void)

{
  if (DAT_1468547b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientUpdater_MoveInRandomDirection",&DAT_1468547b8,
                  FUN_140447710,0x30,0x10000000,0,L"Engine",FUN_1405d49e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d1e70,&LAB_140447700,0);
  }
  return DAT_1468547b8;
}



// FUNCTION 1405d2120 FUN_1405d2120 body=162 status=ok
// SIG undefined FUN_1405d2120(void)

longlong FUN_1405d2120(void)

{
  if (DAT_1468547c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientUpdater_MoveWithWobble",&DAT_1468547c8,
                  FUN_140447710,0x38,0x10000000,0,L"Engine",FUN_1405d4a20,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2070,&LAB_140447700,0);
  }
  return DAT_1468547c8;
}



// FUNCTION 1405d21d0 FUN_1405d21d0 body=47 status=ok
// SIG undefined FUN_1405d21d0(void)

longlong FUN_1405d21d0(void)

{
  if (DAT_146854780 == 0) {
    FUN_141786440(&DAT_146854780,&PTR_FUN_143fe4730);
  }
  return DAT_146854780;
}



// FUNCTION 1405d2200 FUN_1405d2200 body=47 status=ok
// SIG undefined FUN_1405d2200(void)

longlong FUN_1405d2200(void)

{
  if (DAT_1468547a0 == 0) {
    FUN_141786440(&DAT_1468547a0,&PTR_FUN_143fe49c0);
  }
  return DAT_1468547a0;
}



// FUNCTION 1405d2230 FUN_1405d2230 body=47 status=ok
// SIG undefined FUN_1405d2230(void)

longlong FUN_1405d2230(void)

{
  if (DAT_146854790 == 0) {
    FUN_141786a30(&DAT_146854790,&PTR_FUN_146206720);
  }
  return DAT_146854790;
}



// FUNCTION 1405d2260 FUN_1405d2260 body=47 status=ok
// SIG undefined FUN_1405d2260(void)

longlong FUN_1405d2260(void)

{
  if (DAT_146854798 == 0) {
    FUN_141786a30(&DAT_146854798,&PTR_FUN_1462067e0);
  }
  return DAT_146854798;
}



// FUNCTION 1405d2290 FUN_1405d2290 body=47 status=ok
// SIG undefined FUN_1405d2290(void)

longlong FUN_1405d2290(void)

{
  if (DAT_1468547b0 == 0) {
    FUN_141786440(&DAT_1468547b0,&PTR_FUN_143fe4b60);
  }
  return DAT_1468547b0;
}



// FUNCTION 1405d2300 FUN_1405d2300 body=53 status=ok
// SIG undefined FUN_1405d2300(void)

void FUN_1405d2300(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_143fec800;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d2350 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlendableInterface::GetPrivateStaticClass(void)

{
  if (DAT_146854888 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioDistanceThresholdSubscriberInterface",&DAT_146854888,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146854888;
}



// FUNCTION 1405d2400 FUN_1405d2400 body=151 status=ok
// SIG undefined FUN_1405d2400(void)

longlong FUN_1405d2400(void)

{
  if (DAT_146854898 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioDistanceThresholdManager",&DAT_146854898,FUN_140447710,
                  0x50,0x10000000,0,L"Engine",FUN_1405d4ac0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146854898;
}



// FUNCTION 1405d24a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ARemnantQuest::GetPrivateStaticClass(void)

{
  if (DAT_1468547e0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AmbientSoundBox",&DAT_1468547e0,FUN_140447710,0x540,
                  0x10000000,0,L"Engine",&LAB_1405d46a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AGTutorialStepBotDestroy::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468547e0;
}



// FUNCTION 1405d2550 FUN_1405d2550 body=53 status=ok
// SIG undefined FUN_1405d2550(void)

void FUN_1405d2550(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_143fecbd8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d2590 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ARemnantQuest::GetPrivateStaticClass(void)

{
  if (DAT_1468547f0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AmbientSoundSphere",&DAT_1468547f0,FUN_140447710,0x540,
                  0x10000000,0,L"Engine",&LAB_1405d46c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AGTutorialStepBotDestroy::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468547f0;
}



// FUNCTION 1405d2650 FUN_1405d2650 body=162 status=ok
// SIG undefined FUN_1405d2650(void)

longlong FUN_1405d2650(void)

{
  if (DAT_146854800 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AmbientSoundSpline",&DAT_146854800,FUN_140447710,0x560,
                  0x10000000,0,L"Engine",&LAB_1405d46e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  AGTutorialStepBotDestroy::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146854800;
}



// FUNCTION 1405d2720 FUN_1405d2720 body=162 status=ok
// SIG undefined FUN_1405d2720(void)

longlong FUN_1405d2720(void)

{
  if (DAT_1468548b0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioOcclusionVoxelDataProvider",&DAT_1468548b0,
                  FUN_140447710,0x1a0,0x10000000,0,L"Engine",FUN_1405d4b70,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405d6380,&LAB_140447700,0);
  }
  return DAT_1468548b0;
}



// FUNCTION 1405d27e0 FUN_1405d27e0 body=162 status=ok
// SIG undefined FUN_1405d27e0(void)

longlong FUN_1405d27e0(void)

{
  if (DAT_146854918 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationConsumer",&DAT_146854918,FUN_140447710,0x28
                  ,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146854918;
}



// FUNCTION 1405d28a0 FUN_1405d28a0 body=162 status=ok
// SIG undefined FUN_1405d28a0(void)

longlong FUN_1405d28a0(void)

{
  if (DAT_146854810 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AnimNotify_CharacterSound",&DAT_146854810,FUN_140447710,0x40
                  ,0x10000000,0,L"Engine",&LAB_1405d4a80,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotify::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146854810;
}



// FUNCTION 1405d2950 FUN_1405d2950 body=151 status=ok
// SIG undefined FUN_1405d2950(void)

longlong FUN_1405d2950(void)

{
  if (DAT_146854940 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder",&DAT_146854940,FUN_140447710,0x28,
                  0x10000001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146854940;
}



// FUNCTION 1405d29f0 FUN_1405d29f0 body=162 status=ok
// SIG undefined FUN_1405d29f0(void)

longlong FUN_1405d29f0(void)

{
  if (DAT_146854960 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder_Blueprint",&DAT_146854960,
                  FUN_1405d6450,0x38,0x10000001,0,L"Engine",FUN_1405d4c90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_146854960;
}



// FUNCTION 1405d2ac0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong ABasePlayerState::GetPrivateStaticClass(void)

{
  if (DAT_1468548d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioOcclusionVoxelizerZone",&DAT_1468548d8,
                  StaticRegisterNativesABasePlayerState,0x458,0x10000000,0,L"Engine",&LAB_1405d4700,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_1468548d8;
}



// FUNCTION 1405d2b70 FUN_1405d2b70 body=162 status=ok
// SIG undefined FUN_1405d2b70(void)

longlong FUN_1405d2b70(void)

{
  if (DAT_146854978 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientLocationFinder_Blueprint",&DAT_146854978,
                  FUN_140447710,0x28,0x12000001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_146854978;
}



// FUNCTION 1405d2c20 FUN_1405d2c20 body=47 status=ok
// SIG undefined FUN_1405d2c20(void)

longlong FUN_1405d2c20(void)

{
  if (DAT_1468548d0 == 0) {
    FUN_141786440(&DAT_1468548d0,&PTR_GetPrivateStaticClass_143fe6210);
  }
  return DAT_1468548d0;
}



// FUNCTION 1405d2c50 FUN_1405d2c50 body=47 status=ok
// SIG undefined FUN_1405d2c50(void)

longlong FUN_1405d2c50(void)

{
  if (DAT_1468548b8 == 0) {
    FUN_141786a30(&DAT_1468548b8,&PTR_FUN_146207740);
  }
  return DAT_1468548b8;
}



// FUNCTION 1405d2c80 FUN_1405d2c80 body=47 status=ok
// SIG undefined FUN_1405d2c80(void)

longlong FUN_1405d2c80(void)

{
  if (DAT_1468548c0 == 0) {
    FUN_141786a30(&DAT_1468548c0,&PTR_FUN_146207780);
  }
  return DAT_1468548c0;
}



// FUNCTION 1405d2cb0 FUN_1405d2cb0 body=47 status=ok
// SIG undefined FUN_1405d2cb0(void)

longlong FUN_1405d2cb0(void)

{
  if (DAT_1468548c8 == 0) {
    FUN_141786a30(&DAT_1468548c8,&PTR_FUN_1462077c0);
  }
  return DAT_1468548c8;
}



// FUNCTION 1405d2ce0 FUN_1405d2ce0 body=162 status=ok
// SIG undefined FUN_1405d2ce0(void)

longlong FUN_1405d2ce0(void)

{
  if (DAT_146854988 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder_ActorList",&DAT_146854988,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_146854988;
}



// FUNCTION 1405d2d90 FUN_1405d2d90 body=162 status=ok
// SIG undefined FUN_1405d2d90(void)

longlong FUN_1405d2d90(void)

{
  if (DAT_146854998 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder_FilteredComponents",&DAT_146854998,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_146854998;
}



// FUNCTION 1405d2e50 FUN_1405d2e50 body=162 status=ok
// SIG undefined FUN_1405d2e50(void)

longlong FUN_1405d2e50(void)

{
  if (DAT_1468549a8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder_SplineTracer",&DAT_1468549a8,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",
                  InternalConstructor<UMovieSceneStringTrack>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_1468549a8;
}



// FUNCTION 1405d2f00 FUN_1405d2f00 body=162 status=ok
// SIG undefined FUN_1405d2f00(void)

longlong FUN_1405d2f00(void)

{
  if (DAT_1468549b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder_PincushionTracer",&DAT_1468549b8,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",
                  InternalConstructor<UMovieSceneStringTrack>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_1468549b8;
}



// FUNCTION 1405d2fb0 FUN_1405d2fb0 body=53 status=ok
// SIG undefined FUN_1405d2fb0(void)

void FUN_1405d2fb0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_143fecfb8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d2ff0 FUN_1405d2ff0 body=162 status=ok
// SIG undefined FUN_1405d2ff0(void)

longlong FUN_1405d2ff0(void)

{
  if (DAT_1468549c8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder_TraceDownToActor",&DAT_1468549c8,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",
                  InternalConstructor<UMovieSceneStringTrack>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_1468549c8;
}



// FUNCTION 1405d30a0 FUN_1405d30a0 body=162 status=ok
// SIG undefined FUN_1405d30a0(void)

longlong FUN_1405d30a0(void)

{
  if (DAT_1468549d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder_FoliageLocations",&DAT_1468549d8,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_1468549d8;
}



// FUNCTION 1405d3150 FUN_1405d3150 body=162 status=ok
// SIG undefined FUN_1405d3150(void)

longlong FUN_1405d3150(void)

{
  if (DAT_1468549e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder_LandscapeGrassLocations",
                  &DAT_1468549e8,FUN_140447710,0x28,0x10000000,0,L"Engine",
                  InternalConstructor<UMovieSceneStringTrack>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_1468549e8;
}



// FUNCTION 1405d3200 FUN_1405d3200 body=162 status=ok
// SIG undefined FUN_1405d3200(void)

longlong FUN_1405d3200(void)

{
  if (DAT_1468549f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder_InstanceLocations",&DAT_1468549f8,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_1468549f8;
}



// FUNCTION 1405d32b0 FUN_1405d32b0 body=53 status=ok
// SIG undefined FUN_1405d32b0(void)

void FUN_1405d32b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_143fed0d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1405d32f0 FUN_1405d32f0 body=162 status=ok
// SIG undefined FUN_1405d32f0(void)

longlong FUN_1405d32f0(void)

{
  if (DAT_146854a08 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder_Grid",&DAT_146854a08,FUN_140447710,
                  0x28,0x10000000,0,L"Engine",InternalConstructor<UMovieSceneStringTrack>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_146854a08;
}



// FUNCTION 1405d33a0 FUN_1405d33a0 body=162 status=ok
// SIG undefined FUN_1405d33a0(void)

longlong FUN_1405d33a0(void)

{
  if (DAT_146854a18 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder_TraceGrid",&DAT_146854a18,
                  FUN_140447710,0x28,0x10000000,0,L"Engine",
                  InternalConstructor<UMovieSceneStringTrack>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_146854a18;
}



// FUNCTION 1405d3450 FUN_1405d3450 body=162 status=ok
// SIG undefined FUN_1405d3450(void)

longlong FUN_1405d3450(void)

{
  if (DAT_146854a28 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AudioPrepLocationFinder_VoxelMaterialBoundary",
                  &DAT_146854a28,FUN_140447710,0x28,0x10000000,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d2950,&LAB_140447700,0);
  }
  return DAT_146854a28;
}



// FUNCTION 1405d3500 FUN_1405d3500 body=53 status=ok
// SIG undefined FUN_1405d3500(void)

void FUN_1405d3500(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa8;
    *puVar1 = &PTR_FUN_143fed1e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d3540 FUN_1405d3540 body=151 status=ok
// SIG undefined FUN_1405d3540(void)

longlong FUN_1405d3540(void)

{
  if (DAT_1468545e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientLocationChooser",&DAT_1468545e8,FUN_140447710,
                  0x28,0x10000001,0,L"Engine",FUN_1405d4720,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468545e8;
}



// FUNCTION 1405d35e0 FUN_1405d35e0 body=162 status=ok
// SIG undefined FUN_1405d35e0(void)

longlong FUN_1405d35e0(void)

{
  if (DAT_146854680 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientLocationChooser_Blueprint",&DAT_146854680,
                  FUN_140447710,0x28,0x10000001,0,L"Engine",FUN_1405d4750,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d3540,&LAB_140447700,0);
  }
  return DAT_146854680;
}



// FUNCTION 1405d3690 FUN_1405d3690 body=162 status=ok
// SIG undefined FUN_1405d3690(void)

longlong FUN_1405d3690(void)

{
  if (DAT_146854690 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientLocationChooser_RandomWithinActor",
                  &DAT_146854690,FUN_140447710,0x48,0x10000000,0,L"Engine",FUN_1405d4890,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d3540,&LAB_140447700,0);
  }
  return DAT_146854690;
}



// FUNCTION 1405d3750 FUN_1405d3750 body=47 status=ok
// SIG undefined FUN_1405d3750(void)

longlong FUN_1405d3750(void)

{
  if (DAT_146854938 == 0) {
    FUN_141786440(&DAT_146854938,&PTR_FUN_143fe6e70);
  }
  return DAT_146854938;
}



// FUNCTION 1405d3780 FUN_1405d3780 body=47 status=ok
// SIG undefined FUN_1405d3780(void)

longlong FUN_1405d3780(void)

{
  if (DAT_146854958 == 0) {
    FUN_141786440(&DAT_146854958,&PTR_FUN_143fe71a0);
  }
  return DAT_146854958;
}



// FUNCTION 1405d37b0 FUN_1405d37b0 body=47 status=ok
// SIG undefined FUN_1405d37b0(void)

longlong FUN_1405d37b0(void)

{
  if (DAT_146854948 == 0) {
    FUN_141786a30(&DAT_146854948,&PTR_FUN_1462083d0);
  }
  return DAT_146854948;
}



// FUNCTION 1405d37e0 FUN_1405d37e0 body=47 status=ok
// SIG undefined FUN_1405d37e0(void)

longlong FUN_1405d37e0(void)

{
  if (DAT_146854950 == 0) {
    FUN_141786a30(&DAT_146854950,&PTR_FUN_146208490);
  }
  return DAT_146854950;
}



// FUNCTION 1405d3810 FUN_1405d3810 body=47 status=ok
// SIG undefined FUN_1405d3810(void)

longlong FUN_1405d3810(void)

{
  if (DAT_146854970 == 0) {
    FUN_141786440(&DAT_146854970,&PTR_FUN_143fe7680);
  }
  return DAT_146854970;
}



// FUNCTION 1405d3840 FUN_1405d3840 body=47 status=ok
// SIG undefined FUN_1405d3840(void)

longlong FUN_1405d3840(void)

{
  if (DAT_146854968 == 0) {
    FUN_141786a30(&DAT_146854968,&PTR_FUN_1462085e0);
  }
  return DAT_146854968;
}



// FUNCTION 1405d3870 FUN_1405d3870 body=162 status=ok
// SIG undefined FUN_1405d3870(void)

longlong FUN_1405d3870(void)

{
  if (DAT_1468546a0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientLocationChooser_RandomWithTrace",&DAT_1468546a0
                  ,FUN_140447710,0x58,0x10000000,0,L"Engine",FUN_1405d4850,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d3690,&LAB_140447700,0);
  }
  return DAT_1468546a0;
}



// FUNCTION 1405d3920 FUN_1405d3920 body=162 status=ok
// SIG undefined FUN_1405d3920(void)

longlong FUN_1405d3920(void)

{
  if (DAT_1468546b0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientLocationChooser_RandomOnCeiling",&DAT_1468546b0
                  ,FUN_140447710,0x58,0x10000000,0,L"Engine",FUN_1405d47e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d3870,&LAB_140447700,0);
  }
  return DAT_1468546b0;
}



// FUNCTION 1405d39d0 FUN_1405d39d0 body=162 status=ok
// SIG undefined FUN_1405d39d0(void)

longlong FUN_1405d39d0(void)

{
  if (DAT_146854820 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AnimNotify_Foley",&DAT_146854820,FUN_140447710,0x88,
                  0x10000000,0,L"Engine",&LAB_1405d4a90,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimNotify::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146854820;
}



// FUNCTION 1405d3a80 FUN_1405d3a80 body=53 status=ok
// SIG undefined FUN_1405d3a80(void)

void FUN_1405d3a80(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_143fed330;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405d3ac0 FUN_1405d3ac0 body=162 status=ok
// SIG undefined FUN_1405d3ac0(void)

longlong FUN_1405d3ac0(void)

{
  if (DAT_1468546c0 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientLocationChooser_RandomOnFloor",&DAT_1468546c0,
                  FUN_140447710,0x58,0x10000000,0,L"Engine",FUN_1405d47e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d3870,&LAB_140447700,0);
  }
  return DAT_1468546c0;
}



// FUNCTION 1405d3b70 FUN_1405d3b70 body=47 status=ok
// SIG undefined FUN_1405d3b70(void)

longlong FUN_1405d3b70(void)

{
  if (DAT_146854818 == 0) {
    FUN_141786440(&DAT_146854818,&PTR_FUN_143fe6de0);
  }
  return DAT_146854818;
}



// FUNCTION 1405d3ba0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGProviderStoreSubsystem::GetPrivateStaticClass(void)

{
  if (DAT_1468546e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientLocationChooser_PreselectedLocation",
                  &DAT_1468546e8,StaticRegisterNativesUGProviderStoreSubsystem,0x50,0x10000000,0,
                  L"Engine",FUN_1405d4790,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d3540,&LAB_140447700,0);
  }
  return DAT_1468546e8;
}



// FUNCTION 1405d3c70 FUN_1405d3c70 body=162 status=ok
// SIG undefined FUN_1405d3c70(void)

longlong FUN_1405d3c70(void)

{
  if (DAT_1468546f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientLocationChooser_Party",&DAT_1468546f8,
                  FUN_140447710,0x88,0x10000000,0,L"Engine",&LAB_1405d4780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UGProviderStoreSubsystem::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468546f8;
}



// FUNCTION 1405d3d20 FUN_1405d3d20 body=162 status=ok
// SIG undefined FUN_1405d3d20(void)

longlong FUN_1405d3d20(void)

{
  if (DAT_146854830 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"AnimNotify_FootFoley",&DAT_146854830,FUN_140447710,0x90,
                  0x10000000,0,L"Engine",&LAB_1405d4aa0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d39d0,&LAB_140447700,0);
  }
  return DAT_146854830;
}



// FUNCTION 1405d3dd0 FUN_1405d3dd0 body=47 status=ok
// SIG undefined FUN_1405d3dd0(void)

longlong FUN_1405d3dd0(void)

{
  if (DAT_1468545e0 == 0) {
    FUN_141786440(&DAT_1468545e0,&PTR_FUN_143fe7230);
  }
  return DAT_1468545e0;
}



// FUNCTION 1405d3e00 FUN_1405d3e00 body=47 status=ok
// SIG undefined FUN_1405d3e00(void)

longlong FUN_1405d3e00(void)

{
  if (DAT_146854678 == 0) {
    FUN_141786440(&DAT_146854678,&PTR_FUN_143fe7830);
  }
  return DAT_146854678;
}



// FUNCTION 1405d3e30 FUN_1405d3e30 body=47 status=ok
// SIG undefined FUN_1405d3e30(void)

longlong FUN_1405d3e30(void)

{
  if (DAT_146854668 == 0) {
    FUN_141786a30(&DAT_146854668,&PTR_FUN_1462055b0);
  }
  return DAT_146854668;
}



// FUNCTION 1405d3e60 FUN_1405d3e60 body=47 status=ok
// SIG undefined FUN_1405d3e60(void)

longlong FUN_1405d3e60(void)

{
  if (DAT_146854670 == 0) {
    FUN_141786a30(&DAT_146854670,&PTR_FUN_1462056e0);
  }
  return DAT_146854670;
}



// FUNCTION 1405d3e90 FUN_1405d3e90 body=47 status=ok
// SIG undefined FUN_1405d3e90(void)

longlong FUN_1405d3e90(void)

{
  if (DAT_146854688 == 0) {
    FUN_141786440(&DAT_146854688,&PTR_FUN_143fe7c80);
  }
  return DAT_146854688;
}



// FUNCTION 1405d3ec0 FUN_1405d3ec0 body=47 status=ok
// SIG undefined FUN_1405d3ec0(void)

longlong FUN_1405d3ec0(void)

{
  if (DAT_146854698 == 0) {
    FUN_141786440(&DAT_146854698,&PTR_FUN_143fe8040);
  }
  return DAT_146854698;
}



// FUNCTION 1405d3ef0 FUN_1405d3ef0 body=47 status=ok
// SIG undefined FUN_1405d3ef0(void)

longlong FUN_1405d3ef0(void)

{
  if (DAT_1468546e0 == 0) {
    FUN_141786440(&DAT_1468546e0,&PTR_GetPrivateStaticClass_143fe8e60);
  }
  return DAT_1468546e0;
}



// FUNCTION 1405d3f20 FUN_1405d3f20 body=47 status=ok
// SIG undefined FUN_1405d3f20(void)

longlong FUN_1405d3f20(void)

{
  if (DAT_1468546c8 == 0) {
    FUN_141786a30(&DAT_1468546c8,&PTR_FUN_146205900);
  }
  return DAT_1468546c8;
}



// FUNCTION 1405d3f50 FUN_1405d3f50 body=47 status=ok
// SIG undefined FUN_1405d3f50(void)

longlong FUN_1405d3f50(void)

{
  if (DAT_1468546d0 == 0) {
    FUN_141786a30(&DAT_1468546d0,&PTR_FUN_146205940);
  }
  return DAT_1468546d0;
}



// FUNCTION 1405d3f80 FUN_1405d3f80 body=47 status=ok
// SIG undefined FUN_1405d3f80(void)

longlong FUN_1405d3f80(void)

{
  if (DAT_1468546d8 == 0) {
    FUN_141786a30(&DAT_1468546d8,&PTR_FUN_146205980);
  }
  return DAT_1468546d8;
}



// FUNCTION 1405d4100 FUN_1405d4100 body=151 status=ok
// SIG undefined FUN_1405d4100(void)

longlong FUN_1405d4100(void)

{
  if (DAT_146854708 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientLocationValidator",&DAT_146854708,FUN_140447710
                  ,0x28,0x10000001,0,L"Engine",FUN_1405d48d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146854708;
}



// FUNCTION 1405d41b0 FUN_1405d41b0 body=162 status=ok
// SIG undefined FUN_1405d41b0(void)

longlong FUN_1405d41b0(void)

{
  if (DAT_146854720 == 0) {
    FUN_14171ccd0(L"/Script/GbxAudio",L"ActiveAmbientLocationValidator_Blueprint",&DAT_146854720,
                  FUN_140447710,0x28,0x10000001,0,L"Engine",FUN_1405d4900,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405d4100,&LAB_140447700,0);
  }
  return DAT_146854720;
}


