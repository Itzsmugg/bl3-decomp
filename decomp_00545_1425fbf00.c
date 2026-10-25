// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1425fbf00 FUN_1425fbf00 body=97 status=ok
// SIG undefined FUN_1425fbf00(void)

undefined8 * FUN_1425fbf00(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145135468;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1425fbf70 FUN_1425fbf70 body=141 status=ok
// SIG undefined FUN_1425fbf70(void)

longlong FUN_1425fbf70(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x478) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x510);
  }
  return param_1;
}



// FUNCTION 1425fc000 FUN_1425fc000 body=103 status=ok
// SIG undefined FUN_1425fc000(void)

undefined8 * FUN_1425fc000(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145131c68;
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase(param_1 + 0x2c);
  FUN_14265a8f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_14261b230();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 1425fc070 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FDynamicBeam2EmitterData::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FDynamicBeam2EmitterData();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_14261b230();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 1425fc0c0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FDynamicBeam2EmitterReplayData::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FMemory::Free();
  }
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 1425fc110 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FDynamicMeshEmitterReplayData::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1425fc150 FUN_1425fc150 body=103 status=ok
// SIG undefined FUN_1425fc150(void)

undefined8 * FUN_1425fc150(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145131bc8;
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase(param_1 + 0x2c);
  FUN_14265a8f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_14261b230();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 1425fc1c0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FDynamicRibbonEmitterReplayData::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1425fc200 `scalar_deleting_destructor' body=102 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FDynamicSpriteEmitterData::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1451319d8;
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase(param_1 + 7);
  *param_1 = &PTR__scalar_deleting_destructor__1451279d8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_14261b230();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 1425fc270 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FDynamicSpriteEmitterReplayData::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1425fc2b0 FUN_1425fc2b0 body=78 status=ok
// SIG undefined FUN_1425fc2b0(void)

undefined8 FUN_1425fc2b0(undefined8 param_1,ulonglong param_2)

{
  FUN_14265a8f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FUN_14261b230();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 1425fc300 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FDynamicTrailsEmitterReplayData::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1425fc340 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 ADungeonDebug::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1425fafa0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 1425fc380 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessPassThroughPS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1425fb210();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 1425fc3c0 FUN_1425fc3c0 body=183 status=ok
// SIG undefined FUN_1425fc3c0(void)

longlong FUN_1425fc3c0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 1425fc480 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleBeamModifier::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 1425fc4f0 `scalar_deleting_destructor' body=138 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleBeamNoise::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 1425fc580 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleBeamSource::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 1425fc5f0 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleBeamTarget::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

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
    FMemory::operator_delete(param_1,0x140);
  }
  return param_1;
}



// FUNCTION 1425fc660 `scalar_deleting_destructor' body=189 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleModuleTypeDataBeam2::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 1425fc720 FUN_1425fc720 body=218 status=ok
// SIG undefined FUN_1425fc720(void)

longlong FUN_1425fc720(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x120);
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x118);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 1425fc800 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
Chaos::FPBDRigidsEvolutionGBF::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1425fb2c0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x9c0);
  }
  return param_1;
}



// FUNCTION 1425fc840 `scalar_deleting_destructor' body=121 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UParticleSystemReplay::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x38);
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (iVar2 != 0) {
    do {
      FUN_1425fae00(lVar1);
      lVar1 = lVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1425fc8c0 FUN_1425fc8c0 body=317 status=ok
// SIG undefined FUN_1425fc8c0(void)

void FUN_1425fc8c0(longlong *param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  LARGE_INTEGER local_res18 [2];
  longlong *local_18;
  char local_10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1))
  {
    uVar3 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar3,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if ((((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) &&
     (param_1[0xde] != 0)) {
    FFXAsyncBatcher::Flush(&DAT_146b04fd8);
    QueryPerformanceCounter(local_res18);
    bVar1 = *(byte *)((longlong)param_1 + 0x71b);
    while ((bVar1 & 0x10) != 0) {
      FUN_1416b1810(0);
      bVar1 = *(byte *)((longlong)param_1 + 0x71b);
    }
    FUN_142602d20(param_1);
    if (((param_2 != '\0') || (cVar2 = (**(code **)(*param_1 + 0x2c8))(param_1), cVar2 == '\x01'))
       && (FUN_1425fcab0(param_1,param_2), (*(byte *)((longlong)param_1 + 0xba) & 4) != 0)) {
      local_18 = param_1;
      local_10 = param_2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (param_1 + 0x1f,&local_18);
    }
  }
  return;
}



// FUNCTION 1425fca00 FUN_1425fca00 body=163 status=ok
// SIG undefined FUN_1425fca00(void)

void FUN_1425fca00(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (**(code **)(*param_1 + 0x148))();
  lVar5 = param_1[0x95];
  plVar1 = *(longlong **)(lVar4 + 0x148);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = ARemnantQuest::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = (**(code **)(*plVar1 + 0x7c0))(plVar1);
      if (cVar3 == '\0') {
        lVar5 = param_1[0x96];
      }
    }
  }
  if (lVar5 != 0) {
    (**(code **)(*param_1 + 0x6f8))(param_1,param_1[0x95]);
  }
  return;
}



// FUNCTION 1425fcab0 FUN_1425fcab0 body=1820 status=ok
// SIG undefined FUN_1425fcab0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1425fcab0(longlong *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  LARGE_INTEGER local_res18 [2];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_58 [64];
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(local_res18);
  bVar3 = *(byte *)((longlong)param_1 + 0x71b);
  while ((bVar3 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar3 = *(byte *)((longlong)param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  cVar5 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar5 == '\x01') {
    return;
  }
  if ((*(byte *)(param_1 + 0x17) & 1) == 0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468509e4) && (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1))
  {
    uVar10 = FCommandLine::Get();
    DAT_1468509e0 = FParse::Param(uVar10,L"nullrhi");
    _Init_thread_footer(&DAT_1468509e4);
  }
  if ((DAT_1468b616c != '\0') && (DAT_1468b616d == '\0')) {
    return;
  }
  if (DAT_1468509e0 != '\0') {
    return;
  }
  lVar8 = param_1[0x24];
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
  }
  cVar5 = UWorld::IsGameWorld(lVar8);
  bVar3 = *(byte *)((longlong)param_1 + 0x24f);
  *(undefined8 *)((longlong)param_1 + 0x9ac) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x9b4) = DAT_1468b5d98;
  lVar8 = FUN_1428742e0();
  if (((DAT_146534340 == '\0') || (*(int *)(lVar8 + 4) < (int)(uint)bVar3)) || (param_1[0xde] == 0))
  goto LAB_1425fd11e;
  bVar3 = *(byte *)((longlong)param_1 + 0x71b);
  *(byte *)((longlong)param_1 + 0x71b) = bVar3 & 0xfe;
  if ((*(byte *)((longlong)param_1 + 0x719) & 0x10) != 0) {
    plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x10d);
    if (plVar9 == (longlong *)0x0) {
      FUN_1425ff250(param_1,1);
    }
    else {
      plVar12 = (longlong *)param_1[0x32];
      if (((plVar12 != (longlong *)0x0) && (plVar12 == plVar9)) && (param_1[0x33] == param_1[0x10e])
         ) {
        plVar11 = (longlong *)plVar12[0x34];
        plVar12 = plVar11 + (int)plVar12[0x35];
        for (; plVar11 != plVar12; plVar11 = plVar11 + 1) {
          if ((longlong *)*plVar11 == param_1) goto LAB_1425fcd3e;
        }
      }
      *(byte *)((longlong)param_1 + 0x71b) = *(byte *)((longlong)param_1 + 0x71b) & 0xfe;
      *(byte *)((longlong)param_1 + 0x71b) = *(byte *)((longlong)param_1 + 0x71b) | bVar3 & 1;
      FUN_1425ff250(param_1,CONCAT71((int7)((ulonglong)plVar12 >> 8),1));
      *(undefined8 *)((longlong)param_1 + 0x87c) = *(undefined8 *)((longlong)param_1 + 0x1ec);
      *(undefined4 *)((longlong)param_1 + 0x884) = *(undefined4 *)((longlong)param_1 + 500);
      param_1[0x111] = param_1[0x3f];
      *(int *)(param_1 + 0x112) = (int)param_1[0x40];
      *(undefined8 *)((longlong)param_1 + 0x894) = *(undefined8 *)((longlong)param_1 + 0x204);
      *(undefined4 *)((longlong)param_1 + 0x89c) = *(undefined4 *)((longlong)param_1 + 0x20c);
      local_res18[0]._0_1_ = (undefined1)param_1[0x10f];
      local_res18[0]._1_1_ = *(undefined1 *)((longlong)param_1 + 0x879);
      local_res18[0]._2_1_ = *(undefined1 *)((longlong)param_1 + 0x87a);
      local_res18[0].s.LowPart._3_1_ = 0;
      FUN_142382f60(param_1,plVar9,local_res18,param_1[0x10e]);
LAB_1425fcd3e:
      *(byte *)((longlong)param_1 + 0x71b) = *(byte *)((longlong)param_1 + 0x71b) | 1;
      param_2 = '\x01';
    }
  }
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if ((*(byte *)((longlong)param_1 + 0xba) & 4) == 0) {
    lVar8 = param_1[0x24];
    if (lVar8 == 0) {
      lVar8 = FUN_1423407b0(param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0x7a4) = *(undefined4 *)(lVar8 + 0x790);
    *(undefined1 *)((longlong)param_1 + 0x71e) = 0;
    TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(&DAT_146534358,param_1,1);
  }
  lVar8 = param_1[0x24];
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
  }
  FUN_1424de8e0(local_58,lVar8,0,0,*(byte *)((longlong)param_1 + 0x719) >> 5 & 1);
  if (param_2 != '\0') {
    *(byte *)((longlong)param_1 + 0x719) = *(byte *)((longlong)param_1 + 0x719) | 2;
  }
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 4;
  *(byte *)(param_1 + 0xe3) = *(byte *)(param_1 + 0xe3) & 0xcc;
  (**(code **)(*param_1 + 0x358))(param_1,1);
  if ((cVar5 == '\0') || (DAT_146534341 != '\x01')) {
    *(byte *)((longlong)param_1 + 0x71a) = *(byte *)((longlong)param_1 + 0x71a) | 0x10;
  }
  else {
    local_68 = (undefined4)param_1[0x44];
    local_64 = *(undefined4 *)((longlong)param_1 + 0x224);
    local_60 = (undefined4)param_1[0x45];
    uVar6 = (**(code **)(*param_1 + 0x9d8))(param_1,&local_68);
    (**(code **)(*param_1 + 0x9e0))(param_1,uVar6);
  }
  iVar7 = (int)param_1[0x125];
  if ((iVar7 == 0) ||
     ((cVar5 != '\0' &&
      (((*(byte *)((longlong)param_1 + 0xba) & 2) == 0 ||
       ((*(byte *)((longlong)param_1 + 0x719) & 4) != 0)))))) {
    FUN_142608c70(param_1);
  }
  else if (((0 < iVar7) && (cVar5 == '\0')) && (iVar13 = 0, 0 < iVar7)) {
    lVar8 = 0;
    do {
      if (*(longlong **)(lVar8 + param_1[0x124]) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar8 + param_1[0x124]) + 0x58))();
        (**(code **)(**(longlong **)(lVar8 + param_1[0x124]) + 0xf8))
                  (*(longlong **)(lVar8 + param_1[0x124]),0);
        (**(code **)(**(longlong **)(lVar8 + param_1[0x124]) + 0x100))();
      }
      iVar13 = iVar13 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar13 < (int)param_1[0x125]);
  }
  *(byte *)((longlong)param_1 + 0x719) = *(byte *)((longlong)param_1 + 0x719) | 4;
  *(undefined4 *)((longlong)param_1 + 0x974) = 0;
  if ((*(byte *)((longlong)param_1 + 0x71a) & 1) == 0) {
    if (param_1[0xde] != 0) {
      cVar5 = *(char *)(param_1[0xde] + 0x68);
      goto LAB_1425fcf1d;
    }
  }
  else {
    cVar5 = *(char *)((longlong)param_1 + 0x71d);
LAB_1425fcf1d:
    if (cVar5 != '\x01') {
      local_68 = (undefined4)param_1[0x44];
      local_64 = *(undefined4 *)((longlong)param_1 + 0x224);
      local_60 = (undefined4)param_1[0x45];
      iVar7 = (**(code **)(*param_1 + 0x9d8))(param_1,&local_68);
      if (DAT_146534341 == '\x01') {
        if (iVar7 != (int)param_1[0xf2]) {
          *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 4;
          (**(code **)(*param_1 + 0x358))(param_1,1);
        }
        (**(code **)(*param_1 + 0x9e0))(param_1,iVar7);
      }
    }
  }
  bVar3 = *(byte *)((longlong)param_1 + 0x719);
  if (*(float *)(param_1 + 0xf1) != 0.0) {
    bVar4 = *(byte *)((longlong)param_1 + 0x71a);
    *(byte *)((longlong)param_1 + 0x71a) = bVar4 | 2;
    *(byte *)((longlong)param_1 + 0x719) = bVar3 | 0x80;
    FFXAsyncBatcher::Flush(&DAT_146b04fd8);
    QueryPerformanceCounter(local_res18);
    bVar3 = *(byte *)((longlong)param_1 + 0x71b);
    while ((bVar3 & 0x10) != 0) {
      FUN_1416b1810(0);
      bVar3 = *(byte *)((longlong)param_1 + 0x71b);
    }
    FUN_142602d20(param_1);
    iVar7 = 0;
    if (0 < (int)param_1[0x125]) {
      lVar8 = 0;
      do {
        if (*(longlong **)(lVar8 + param_1[0x124]) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar8 + param_1[0x124]) + 0x90))();
        }
        iVar7 = iVar7 + 1;
        lVar8 = lVar8 + 8;
      } while (iVar7 < (int)param_1[0x125]);
    }
    fVar1 = *(float *)((longlong)param_1 + 0x78c);
    fVar14 = 0.0;
    fVar2 = *(float *)(param_1 + 0xf1);
    fVar15 = 0.032;
    if ((0.0 < fVar1) && (fVar15 = fVar2, fVar1 <= fVar2)) {
      fVar15 = fVar1;
    }
    if (0.0 < fVar2) {
      do {
        (**(code **)(*param_1 + 0x350))(param_1,fVar15,2);
        fVar14 = fVar14 + fVar15;
      } while (fVar14 < *(float *)(param_1 + 0xf1));
    }
    *(byte *)((longlong)param_1 + 0x719) = *(byte *)((longlong)param_1 + 0x719) & 0x7f;
    *(byte *)((longlong)param_1 + 0x71a) = *(byte *)((longlong)param_1 + 0x71a) & 0xfd;
    *(byte *)((longlong)param_1 + 0x71a) = *(byte *)((longlong)param_1 + 0x71a) | bVar4 & 2;
    bVar3 = *(byte *)((longlong)param_1 + 0x719);
    *(undefined4 *)(param_1 + 0xf1) = 0;
  }
  if ((((bVar3 & 0x20) != 0) &&
      (*(byte *)(param_1[0xde] + 0x148) < *(byte *)((longlong)param_1 + 0x71e))) &&
     (*(float *)(param_1[0xde] + 0xd8) == 0.0)) {
    FUN_1426093e0(param_1,0,1,0);
  }
  FUN_1424e13e0(local_58);
LAB_1425fd11e:
  FUN_1423424e0(param_1);
  if (((*(byte *)(param_1 + 0xe3) & 0x11) == 0) &&
     ((param_1[0x24] != 0 || (lVar8 = FUN_1423407b0(param_1), lVar8 != 0)))) {
    lVar8 = param_1[0x24];
    if (lVar8 == 0) {
      lVar8 = FUN_1423407b0(param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0x36c) = *(undefined4 *)(lVar8 + 0x790);
  }
  return;
}



// FUNCTION 1425fd1d0 AddMaterials body=288 status=ok
// SIG undefined AddMaterials(void)

void AddMaterials(longlong *param_1,ulonglong *param_2,float param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  plVar6 = (longlong *)*param_2;
  uVar7 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar6 + (int)param_2[1] < plVar6) {
    uVar7 = uVar5;
  }
  if (uVar7 != 0) {
    do {
      lVar2 = *plVar6;
      if (lVar2 != 0) {
        iVar3 = (int)param_1[0x19];
        plVar4 = (longlong *)param_1[0x18];
        if ((longlong *)param_1[0x18] == (longlong *)0x0) {
          plVar4 = param_1;
        }
        plVar1 = plVar4 + (longlong)iVar3 * 2;
        for (; plVar4 != plVar1; plVar4 = plVar4 + 2) {
          if (*plVar4 == lVar2) {
            iVar3 = (int)param_3;
            if ((int)param_3 <= (int)*(float *)(plVar4 + 1)) {
              iVar3 = (int)*(float *)(plVar4 + 1);
            }
            *(float *)(plVar4 + 1) = (float)iVar3;
            goto LAB_1425fd2a7;
          }
        }
        *(int *)(param_1 + 0x19) = iVar3 + 1;
        if (*(int *)((longlong)param_1 + 0xcc) < iVar3 + 1) {
          TArray<TTuple<UMaterialInterface_const_*,float>,TInlineAllocator<12,FDefaultAllocator>_>::
          ResizeGrow(param_1,iVar3);
        }
        plVar4 = (longlong *)param_1[0x18];
        if ((longlong *)param_1[0x18] == (longlong *)0x0) {
          plVar4 = param_1;
        }
        plVar4 = plVar4 + (longlong)iVar3 * 2;
        if (plVar4 != (longlong *)0x0) {
          *(float *)(plVar4 + 1) = param_3;
          *plVar4 = lVar2;
        }
      }
LAB_1425fd2a7:
      plVar6 = plVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar7);
  }
  return;
}



// FUNCTION 1425fd2f0 FUN_1425fd2f0 body=222 status=ok
// SIG undefined FUN_1425fd2f0(void)

void FUN_1425fd2f0(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_18;
  float local_10;
  
  local_18 = *(undefined8 *)param_2;
  local_10 = param_2[2];
  FUN_14261eba0(local_18,&local_18);
  for (iVar6 = 0; (iVar5 = 0, -1 < iVar6 && (iVar5 = 0, iVar6 < *(int *)(param_1 + 0x270)));
      iVar6 = iVar6 + 1) {
    fVar1 = param_2[1];
    lVar4 = (longlong)iVar6;
    lVar3 = *(longlong *)(param_1 + 0x268);
    *(float *)(lVar3 + lVar4 * 0xc) = *param_2 + *(float *)(lVar3 + lVar4 * 0xc);
    fVar2 = param_2[2];
    *(float *)(lVar3 + 4 + lVar4 * 0xc) = fVar1 + *(float *)(lVar3 + 4 + lVar4 * 0xc);
    *(float *)(lVar3 + 8 + lVar4 * 0xc) = *(float *)(lVar3 + 8 + lVar4 * 0xc) + fVar2;
  }
  for (; (-1 < iVar5 && (iVar5 < *(int *)(param_1 + 0x2b0))); iVar5 = iVar5 + 1) {
    fVar1 = param_2[1];
    lVar4 = (longlong)iVar5;
    lVar3 = *(longlong *)(param_1 + 0x2a8);
    *(float *)(lVar3 + lVar4 * 0xc) = *param_2 + *(float *)(lVar3 + lVar4 * 0xc);
    fVar2 = param_2[2];
    *(float *)(lVar3 + 4 + lVar4 * 0xc) = fVar1 + *(float *)(lVar3 + 4 + lVar4 * 0xc);
    *(float *)(lVar3 + 8 + lVar4 * 0xc) = fVar2 + *(float *)(lVar3 + 8 + lVar4 * 0xc);
  }
  return;
}



// FUNCTION 1425fd3d0 FUN_1425fd3d0 body=190 status=ok
// SIG undefined FUN_1425fd3d0(void)

void FUN_1425fd3d0(longlong param_1,float *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_18;
  float local_10;
  
  FUN_142381c70();
  *(float *)(param_1 + 0x770) = *param_2 + *(float *)(param_1 + 0x770);
  *(float *)(param_1 + 0x774) = param_2[1] + *(float *)(param_1 + 0x774);
  *(float *)(param_1 + 0x778) = param_2[2] + *(float *)(param_1 + 0x778);
  for (iVar2 = 0; (-1 < iVar2 && (iVar2 < *(int *)(param_1 + 0x928))); iVar2 = iVar2 + 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x920) + (longlong)iVar2 * 8);
    if (plVar1 != (longlong *)0x0) {
      local_10 = param_2[2];
      local_18 = *(undefined8 *)param_2;
      (**(code **)(*plVar1 + 0x1f8))(plVar1,&local_18,param_3);
    }
  }
  return;
}



// FUNCTION 1425fd490 FUN_1425fd490 body=172 status=ok
// SIG undefined FUN_1425fd490(void)

void FUN_1425fd490(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_2 + 0x728)) {
    plVar3 = *(longlong **)(param_2 + 0x720);
    lVar4 = 0;
    do {
      if (*plVar3 == *(longlong *)(param_1 + 0x40)) {
        return;
      }
      lVar4 = lVar4 + 1;
      plVar3 = plVar3 + 0x12;
    } while (lVar4 < *(int *)(param_2 + 0x728));
  }
  plVar3 = (longlong *)(param_2 + 0x720);
  iVar1 = *(int *)(param_2 + 0x728);
  iVar2 = iVar1 + 1;
  *(int *)(param_2 + 0x728) = iVar2;
  if (*(int *)(param_2 + 0x72c) < iVar2) {
    TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar3);
  }
  lVar4 = (longlong)iVar1 * 0x90;
  _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + lVar4),0,0x90);
  *(undefined8 *)(lVar4 + *plVar3) = *(undefined8 *)(param_1 + 0x40);
  *(undefined1 *)(lVar4 + 8 + *plVar3) = 6;
  *(undefined8 *)(lVar4 + 0x30 + *plVar3) = 0;
  return;
}



// FUNCTION 1425fd540 FUN_1425fd540 body=296 status=ok
// SIG undefined FUN_1425fd540(void)

undefined1 FUN_1425fd540(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x48) == 1) {
    TArray<UParticleLODLevel_*,FDefaultAllocator>::InsertZeroed(param_1 + 0x40,1,1);
    plVar5 = (longlong *)FUN_1425f95d0(param_1);
    uVar7 = 0x41200000;
    *(longlong **)(*(longlong *)(param_1 + 0x40) + 8) = plVar5;
    *(uint *)(plVar5 + 0x16) = *(uint *)(plVar5 + 0x16) | 1;
    *(undefined4 *)(plVar5 + 5) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xb4) = 0;
    lVar1 = **(longlong **)(param_1 + 0x40);
    *(uint *)((longlong)plVar5 + 0x2c) =
         *(uint *)((longlong)plVar5 + 0x2c) ^
         (*(uint *)(lVar1 + 0x2c) ^ *(uint *)((longlong)plVar5 + 0x2c)) & 1;
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (lVar2 != 0) {
      lVar6 = UMovieSceneIntegerSection::GetPrivateStaticClass();
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
        uVar7 = 0x42c80000;
      }
    }
    if (param_2 == '\x01') {
      uVar7 = 0x42c80000;
    }
    cVar4 = (**(code **)(*plVar5 + 0x280))(plVar5,lVar1,uVar7,1);
    if (cVar4 == '\0') {
      return 0;
    }
    UObjectBaseUtility::MarkPackageDirty(param_1);
  }
  return 1;
}



// FUNCTION 1425fd670 FUN_1425fd670 body=96 status=ok
// SIG undefined FUN_1425fd670(void)

void FUN_1425fd670(longlong param_1)

{
  byte bVar1;
  LARGE_INTEGER local_res10 [3];
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(local_res10);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  FUN_142384dc0(param_1);
  FUN_14260b860(param_1,1);
  return;
}



// FUNCTION 1425fd6d0 FUN_1425fd6d0 body=164 status=ok
// SIG undefined FUN_1425fd6d0(void)

void FUN_1425fd6d0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  FUN_142385110();
  if ((*(byte *)((longlong)param_1 + 0x97c) & 1) != 0) {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
      if (cVar2 == '\0') {
        lVar4 = param_1[0x24];
        if (lVar4 == 0) {
          lVar4 = FUN_1423407b0(param_1);
        }
                    /* WARNING: Could not recover jumptable at 0x0001425fd767. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x138))(param_1,0,lVar4,5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1425fd780 FUN_1425fd780 body=207 status=ok
// SIG undefined FUN_1425fd780(void)

void FUN_1425fd780(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  FUN_1425fcab0(param_1,1);
  uVar2 = 0;
  plVar3 = *(longlong **)(param_1 + 0x920);
  uVar4 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x928) < plVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)*plVar3;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x208))(plVar1);
        (**(code **)(*plVar1 + 0x218))(plVar1,param_2,param_3,param_4,param_5);
      }
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar4);
  }
  return;
}



// FUNCTION 1425fd850 FUN_1425fd850 body=111 status=ok
// SIG undefined FUN_1425fd850(void)

void FUN_1425fd850(longlong param_1,undefined8 param_2)

{
  FShaderResourceParameter::Bind(param_1 + 8,param_2,L"BeamTrailPoints",0);
  FShaderResourceParameter::Bind(param_1 + 0xc,param_2,L"DynamicParameters",0);
  FShaderResourceParameter::Bind(param_1 + 0x10,param_2,L"BeamTrailParameters",0);
  FShaderParameter::Bind(param_1 + 0x14,param_2,L"BeamTrailParameterIndex",0);
  return;
}



// FUNCTION 1425fd8c0 FUN_1425fd8c0 body=2138 status=ok
// SIG undefined FUN_1425fd8c0(void)

void FUN_1425fd8c0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  void *_Src;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  int local_res8;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong **local_80;
  uint *local_78;
  longlong **local_70;
  uint *local_68;
  longlong local_60;
  uint *local_58;
  
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & 0xfffffff1;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0xb8);
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x108);
  plVar1 = (longlong *)(param_1 + 0x1a8);
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(int *)(param_1 + 0x1b4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
  }
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x158);
  }
  lVar7 = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0x90;
  *(undefined4 *)(param_1 + 0x180) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x184) = 0xbf000000;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar7 = **(longlong **)(param_1 + 0x40);
  }
  plVar10 = *(longlong **)(lVar7 + 0x48);
  local_90 = lVar7;
  local_88 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    iVar6 = (**(code **)(*plVar10 + 0x2a0))(plVar10);
    if (iVar6 != 0) {
      iVar2 = *(int *)(param_1 + 0x178);
      *(int *)(param_1 + 0x178) = iVar6 + iVar2;
      *(int *)(param_1 + 0x188) = iVar2;
    }
    iVar6 = (**(code **)(*plVar10 + 0x2b0))(plVar10);
    if (iVar6 != 0) {
      iVar2 = *(int *)(param_1 + 0x17c);
      *(int *)(param_1 + 0x17c) = iVar6 + iVar2;
      *(int *)(param_1 + 0x18c) = iVar2;
    }
  }
  local_res8 = 0;
  uVar8 = 8;
  if (1 < (byte)(*(char *)(*(longlong *)(lVar7 + 0x30) + 0x58) - 3U)) {
    uVar8 = 0;
  }
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & 0xfffffff7;
  *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | uVar8;
  if (0 < *(int *)(lVar7 + 0x40)) {
    local_98 = 0;
    do {
      lVar12 = local_98;
      local_a0 = *(longlong **)(*(longlong *)(lVar7 + 0x38) + local_98 * 8);
      if ((-1 < (char)*(uint *)(local_a0 + 5)) ||
         (uVar8 = 2, (*(uint *)(local_a0 + 5) >> 0xb & 1) == 0)) {
        uVar8 = 0;
      }
      uVar3 = *(uint *)(param_1 + 0xb0);
      *(uint *)(param_1 + 0xb0) = ((uVar8 | uVar3) ^ uVar3) & 2 ^ uVar3;
      lVar7 = FUN_1429cebe0();
      if ((*(int *)(local_a0[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(local_a0[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (!bVar4) {
        iVar6 = (**(code **)(*local_a0 + 0x2a0))(local_a0,plVar10);
        if (iVar6 != 0) {
          local_80 = &local_a0;
          local_res10[0] = *(int *)(param_1 + 0x178) + 0xfU & 0xfffffff0;
          local_78 = local_res10;
          *(uint *)(param_1 + 0x178) = local_res10[0];
          FUN_1425f9280(param_1 + 0xb8,local_res18,&local_80,0);
          lVar7 = FUN_1429cb770();
          if ((*(int *)(local_a0[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(local_a0[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
              lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (*(int *)(param_1 + 0x168) == 0)) {
            *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x178);
          }
          lVar7 = FUN_1429c8d30();
          if ((*(int *)(local_a0[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(local_a0[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
              lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (*(int *)(param_1 + 0x174) == 0)) {
            *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x178);
          }
          lVar7 = FUN_1429cb150();
          if ((*(int *)(local_a0[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(local_a0[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
              lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (*(int *)(param_1 + 400) == 0)) {
            *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x178);
          }
          lVar7 = FUN_1429cb450();
          if ((*(int *)(local_a0[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(local_a0[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
              lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (*(int *)(param_1 + 0x194) == 0)) {
            *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x178);
          }
          lVar7 = UInterpTrackParticleReplay::StaticClass();
          if ((*(int *)(local_a0[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(local_a0[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
              lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (*(int *)(param_1 + 0x194) == 0)) {
            *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x178);
          }
          lVar7 = UTexture2D::GetPrivateStaticClass();
          if ((*(int *)(local_a0[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(local_a0[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
              lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (*(int *)(param_1 + 0x198) == 0)) {
            *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x178);
          }
          lVar7 = UBlendSpaceBase::GetPrivateStaticClass();
          plVar10 = local_a0;
          if ((*(int *)(local_a0[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(local_a0[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
              lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if ((bVar4) && (*(int *)(param_1 + 0x16c) == 0)) {
            lVar7 = UBlendSpaceBase::GetPrivateStaticClass();
            if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                lVar7 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) {
              plVar10 = (longlong *)0x0;
            }
            *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)((longlong)plVar10 + 0x13c);
            *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_1 + 0x178);
          }
          *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + iVar6;
        }
        iVar6 = (**(code **)(*local_a0 + 0x2b0))(local_a0);
        lVar12 = local_98;
        if (0 < iVar6) {
          local_res10[0] = *(uint *)(param_1 + 0x17c);
          local_70 = &local_a0;
          local_68 = local_res10;
          FUN_1425f9280(param_1 + 0x108,local_res20,&local_70,0);
          iVar2 = *(int *)(param_1 + 0x1b0);
          *(int *)(param_1 + 0x1b0) = iVar2 + 1;
          if (*(int *)(param_1 + 0x1b4) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
          }
          iVar9 = 1;
          *(longlong **)(*plVar1 + (longlong)iVar2 * 8) = local_a0;
          if (1 < *(int *)(param_1 + 0x48)) {
            local_58 = local_res10;
            lVar7 = 8;
            do {
              local_res10[0] = *(uint *)(param_1 + 0x17c);
              local_60 = *(longlong *)(*(longlong *)(lVar7 + *(longlong *)(param_1 + 0x40)) + 0x38)
                         + (longlong)local_res8 * 8;
              FUN_1425f9280(param_1 + 0x108,local_a8,&local_60,0);
              iVar9 = iVar9 + 1;
              lVar7 = lVar7 + 8;
            } while (iVar9 < *(int *)(param_1 + 0x48));
          }
          *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) + iVar6;
          lVar12 = local_98;
        }
      }
      plVar10 = (longlong *)(param_1 + 0x158);
      lVar7 = FUN_1429cb150();
      if ((*(int *)(local_a0[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(local_a0[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        *(uint *)(param_1 + 0xb0) =
             *(uint *)(param_1 + 0xb0) ^
             (*(uint *)(local_a0 + 5) >> 5 ^ *(uint *)(param_1 + 0xb0)) & 4;
        *(char *)(param_1 + 0xb4) = (char)local_a0[7];
      }
      else {
        lVar7 = FUN_1429cbd80();
        plVar11 = local_a0;
        if ((*(int *)(local_a0[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(local_a0[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
            != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          lVar7 = FUN_1429cbd80();
          if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) {
            plVar11 = (longlong *)0x0;
          }
          *(float *)(param_1 + 0x180) = *(float *)(plVar11 + 7) + *(float *)(param_1 + 0x180);
          *(float *)(param_1 + 0x184) =
               *(float *)((longlong)plVar11 + 0x3c) + *(float *)(param_1 + 0x184);
        }
        else {
          lVar7 = FUN_1429cc280();
          if ((*(int *)(local_a0[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(local_a0[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
              lVar7 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            if (((*(byte *)(local_a0 + 5) & 0x80) != 0) && (plVar10 != local_a0 + 7)) {
              iVar6 = (int)local_a0[8];
              _Src = (void *)local_a0[7];
              *(int *)(param_1 + 0x160) = iVar6;
              if ((iVar6 == 0) && (*(int *)(param_1 + 0x164) == 0)) {
                *(undefined4 *)(param_1 + 0x164) = 0;
              }
              else {
                TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(plVar10,iVar6)
                ;
                _guard_xfg_dispatch_icall_nop((void *)*plVar10,_Src,(longlong)iVar6 << 3);
              }
            }
          }
          else {
            lVar7 = UInterpTrackParticleReplay::StaticClass();
            plVar10 = local_a0;
            if ((*(int *)(local_a0[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(local_a0[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                lVar7 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              lVar7 = UInterpTrackParticleReplay::StaticClass();
              if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
                  lVar7 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) {
                plVar10 = (longlong *)0x0;
              }
              lVar7 = plVar10[7];
              if (((lVar7 == 0) || (*(longlong *)(lVar7 + 0x28) == 0)) ||
                 (*(int *)(lVar7 + 0x48) == 0)) {
                lVar7 = 0;
              }
              *(longlong *)(param_1 + 0x1b8) = lVar7;
            }
          }
        }
      }
      if (((*(byte *)(param_1 + 0xb0) & 8) == 0) &&
         (cVar5 = (**(code **)(*local_a0 + 0x348))(local_a0), cVar5 != '\0')) {
        *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | 8;
      }
      local_98 = lVar12 + 1;
      local_res8 = local_res8 + 1;
      plVar10 = local_88;
      lVar7 = local_90;
    } while (local_res8 < *(int *)(local_90 + 0x40));
  }
  return;
}



// FUNCTION 1425fe120 FUN_1425fe120 body=1279 status=ok
// SIG undefined FUN_1425fe120(void)

void FUN_1425fe120(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  size_t _Size;
  int iVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar16;
  ulonglong uVar17;
  uint local_res8;
  ulonglong uVar15;
  
  iVar6 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x120);
  iVar13 = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  iVar9 = iVar13;
  if (*(int *)(param_1 + 300) != iVar6) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
    iVar9 = *(int *)(param_1 + 0x128);
  }
  *(int *)(param_1 + 0x128) = iVar9 + iVar6;
  if (*(int *)(param_1 + 300) < iVar9 + iVar6) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _Size = (longlong)iVar6 * 8;
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar9 * 8),0,_Size);
  plVar2 = (longlong *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x138) = 0;
  iVar9 = iVar13;
  if (*(int *)(param_1 + 0x13c) != iVar6) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2);
    iVar9 = *(int *)(param_1 + 0x138);
  }
  *(int *)(param_1 + 0x138) = iVar9 + iVar6;
  if (*(int *)(param_1 + 0x13c) < iVar9 + iVar6) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar2);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar2 + (longlong)iVar9 * 8),0,_Size);
  plVar3 = (longlong *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) != iVar6) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar3);
    iVar13 = *(int *)(param_1 + 0x148);
  }
  *(int *)(param_1 + 0x148) = iVar13 + iVar6;
  if (*(int *)(param_1 + 0x14c) < iVar13 + iVar6) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + (longlong)iVar13 * 8),0,_Size);
  plVar4 = (longlong *)(param_1 + 0x150);
  iVar9 = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (*(int *)(param_1 + 0x15c) != iVar6) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar4);
    iVar9 = *(int *)(param_1 + 0x158);
  }
  *(int *)(param_1 + 0x158) = iVar9 + iVar6;
  if (*(int *)(param_1 + 0x15c) < iVar9 + iVar6) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar4);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar4 + (longlong)iVar9 * 8),0,_Size);
  plVar5 = (longlong *)(param_1 + 0x160);
  iVar9 = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (*(int *)(param_1 + 0x16c) != iVar6) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar5);
    iVar9 = *(int *)(param_1 + 0x168);
  }
  *(int *)(param_1 + 0x168) = iVar9 + iVar6;
  if (*(int *)(param_1 + 0x16c) < iVar9 + iVar6) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar5 + (longlong)iVar9 * 8),0,_Size);
  uVar11 = 0;
  local_res8 = 0;
  uVar16 = uVar11;
  if (0 < iVar6) {
    do {
      uVar15 = 0;
      uVar8 = (uint)uVar11;
      uVar11 = uVar15;
      if ((int)uVar8 < *(int *)(param_2 + 0x48)) {
        uVar11 = *(ulonglong *)(*(longlong *)(param_2 + 0x40) + uVar16 * 8);
        uVar8 = local_res8;
      }
      uVar17 = uVar15;
      if (0 < *(int *)(uVar11 + 0x40)) {
        do {
          plVar12 = *(longlong **)(uVar17 + *(longlong *)(uVar11 + 0x38));
          iVar9 = (**(code **)(*plVar12 + 0x2e0))(plVar12);
          if ((iVar9 == 2) && ((*(byte *)(plVar12 + 5) & 0x80) != 0)) {
            lVar10 = ULevelStreamingAlwaysLoaded::StaticClass();
            if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                lVar10 + 0x88)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              if (*(longlong *)(*plVar1 + uVar16 * 8) == 0) {
                lVar10 = ULevelStreamingAlwaysLoaded::StaticClass();
                if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                    lVar10 + 0x88)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (!bVar7) {
                  plVar12 = (longlong *)0x0;
                }
                *(longlong **)(*plVar1 + uVar16 * 8) = plVar12;
              }
            }
            else {
              lVar10 = ULevelStreamingAlwaysLoaded::StaticClass();
              if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                  lVar10 + 0x88)) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
              }
              if (bVar7) {
                if (*(longlong *)(*plVar2 + uVar16 * 8) == 0) {
                  lVar10 = ULevelStreamingAlwaysLoaded::StaticClass();
                  if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                      lVar10 + 0x88)) {
                    bVar7 = false;
                  }
                  else {
                    bVar7 = true;
                  }
                  if (!bVar7) {
                    plVar12 = (longlong *)0x0;
                  }
                  *(longlong **)(*plVar2 + uVar16 * 8) = plVar12;
                }
              }
              else {
                lVar10 = UEnvQueryTest_Random::StaticClass();
                if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                    lVar10 + 0x88)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
                if (bVar7) {
                  if (*(longlong *)(*plVar3 + uVar16 * 8) == 0) {
                    lVar10 = UEnvQueryTest_Random::StaticClass();
                    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
                        != lVar10 + 0x88)) {
                      bVar7 = false;
                    }
                    else {
                      bVar7 = true;
                    }
                    if (!bVar7) {
                      plVar12 = (longlong *)0x0;
                    }
                    *(longlong **)(*plVar3 + uVar16 * 8) = plVar12;
                  }
                }
                else {
                  lVar10 = FUN_1429c84d0();
                  if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                      lVar10 + 0x88)) {
                    bVar7 = false;
                  }
                  else {
                    bVar7 = true;
                  }
                  if (bVar7) {
                    lVar10 = FUN_1429c84d0();
                    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
                        != lVar10 + 0x88)) {
                      bVar7 = false;
                    }
                    else {
                      bVar7 = true;
                    }
                    if (!bVar7) {
                      plVar12 = (longlong *)0x0;
                    }
                    if ((((*(byte *)((longlong)plVar12 + 0x3c) & 1) != 0) ||
                        ((*(byte *)(plVar12 + 0x12) & 1) != 0)) ||
                       ((*(byte *)((longlong)plVar12 + 0xec) & 1) != 0)) {
                      if ((char)plVar12[7] == '\0') {
                        *(longlong **)(*plVar4 + uVar16 * 8) = plVar12;
                      }
                      else if ((char)plVar12[7] == '\x01') {
                        *(longlong **)(*plVar5 + uVar16 * 8) = plVar12;
                      }
                    }
                  }
                }
              }
            }
          }
          uVar14 = (int)uVar15 + 1;
          uVar15 = (ulonglong)uVar14;
          uVar17 = uVar17 + 8;
          uVar8 = local_res8;
        } while ((int)uVar14 < *(int *)(uVar11 + 0x40));
      }
      local_res8 = uVar8 + 1;
      uVar11 = (ulonglong)local_res8;
      uVar16 = uVar16 + 1;
    } while ((longlong)uVar16 < (longlong)iVar6);
  }
  return;
}



// FUNCTION 1425fe620 FUN_1425fe620 body=555 status=ok
// SIG undefined FUN_1425fe620(void)

void FUN_1425fe620(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int local_res8;
  longlong local_res18;
  
  FUN_142616380(param_1,1,1);
  plVar1 = (longlong *)(param_1 + 0x7b0);
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  if (*(int *)(param_1 + 0x7bc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (param_2 == 0) {
    *(byte *)(param_1 + 0x71a) = *(byte *)(param_1 + 0x71a) & 0xdf;
    return;
  }
  local_res8 = 0;
  if (*(int *)(param_2 + 0x48) < 1) {
    *(byte *)(param_1 + 0x71a) = *(byte *)(param_1 + 0x71a) & 0xdf;
    return;
  }
  local_res18 = 0;
  do {
    lVar3 = *(longlong *)(local_res18 + *(longlong *)(param_2 + 0x40));
    if (lVar3 != 0) {
      lVar10 = UEnvQueryTest_Random::StaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((((bVar8) && (local_res8 < *(int *)(param_1 + 0x928))) &&
          (plVar4 = *(longlong **)(local_res18 + *(longlong *)(param_1 + 0x920)),
          plVar4 != (longlong *)0x0)) && (iVar12 = 0, 0 < *(int *)(lVar3 + 0x48))) {
        lVar10 = 0;
        do {
          lVar5 = *(longlong *)(lVar10 + *(longlong *)(lVar3 + 0x40));
          if (*(int *)(param_1 + 0x7b8) <= iVar12) {
            iVar2 = *(int *)(param_1 + 0x7b8);
            iVar9 = iVar2 + 1;
            *(int *)(param_1 + 0x7b8) = iVar9;
            if (*(int *)(param_1 + 0x7bc) < iVar9) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
            }
            *(undefined8 *)(*plVar1 + (longlong)iVar2 * 8) = 0;
          }
          lVar6 = *plVar1;
          if ((*(byte *)(lVar5 + 0x2c) & 1) != 0) {
            lVar11 = *(longlong *)(param_1 + 0x120);
            if (lVar11 == 0) {
              lVar11 = FUN_1423407b0(param_1);
            }
            (**(code **)(*plVar4 + 0x220))(plVar4,local_res8);
            uVar7 = DAT_1464c9c14;
            if (lVar11 != 0) {
              uVar7 = *(undefined4 *)(lVar11 + 0x1c0);
            }
            (**(code **)(*plVar4 + 0x168))(plVar4,lVar6 + (longlong)iVar12 * 8,lVar5,uVar7);
          }
          iVar12 = iVar12 + 1;
          lVar10 = lVar10 + 8;
        } while (iVar12 < *(int *)(lVar3 + 0x48));
      }
    }
    local_res8 = local_res8 + 1;
    local_res18 = local_res18 + 8;
  } while (local_res8 < *(int *)(param_2 + 0x48));
  *(byte *)(param_1 + 0x71a) = *(byte *)(param_1 + 0x71a) & 0xdf;
  return;
}



// FUNCTION 1425fe850 FUN_1425fe850 body=917 status=ok
// SIG undefined FUN_1425fe850(void)

undefined8 * FUN_1425fe850(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float local_b0;
  undefined1 local_a0 [136];
  
  if (DAT_1465342fc == 0) {
    local_b0 = 1048576.0;
    local_c0 = -1048576.0;
    fStack_bc = -1048576.0;
    fStack_b8 = -1048576.0;
    fStack_b4 = 1048576.0;
    fVar10 = 1048576.0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x6f0);
    if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x98) & 1) == 0)) {
      fStack_b4 = *(float *)(param_1 + 0x220);
      local_b0 = *(float *)(param_1 + 0x224);
      fVar10 = *(float *)(param_1 + 0x228);
      iVar4 = 0;
      cVar2 = '\x01';
      fStack_b8 = fVar10;
      local_c0 = fStack_b4;
      fStack_bc = local_b0;
      if (0 < *(int *)(param_1 + 0x928)) {
        lVar5 = 0;
        do {
          plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x920));
          if (((plVar1 != (longlong *)0x0) && (0 < (int)plVar1[0x25])) &&
             (*(char *)(*(longlong *)(plVar1[5] + 0x30) + 0x148) == '\0')) {
            pfVar3 = (float *)(**(code **)(*plVar1 + 0x60))(plVar1,local_a0);
            if (cVar2 == '\0') {
              if (*(char *)(pfVar3 + 6) != '\0') {
                local_c0 = *pfVar3;
                fStack_bc = pfVar3[1];
                fStack_b8 = pfVar3[2];
                fStack_b4 = pfVar3[3];
                cVar2 = SUB41(pfVar3[6],0);
                fVar10 = (float)((ulonglong)*(undefined8 *)(pfVar3 + 4) >> 0x20);
                local_b0 = (float)*(undefined8 *)(pfVar3 + 4);
              }
            }
            else if (*(char *)(pfVar3 + 6) != '\0') {
              if (*pfVar3 < local_c0) {
                local_c0 = *pfVar3;
              }
              if (pfVar3[1] < fStack_bc) {
                fStack_bc = pfVar3[1];
              }
              if (pfVar3[2] < fStack_b8) {
                fStack_b8 = pfVar3[2];
              }
              if (fStack_b4 < pfVar3[3]) {
                fStack_b4 = pfVar3[3];
              }
              if (local_b0 < pfVar3[4]) {
                local_b0 = pfVar3[4];
              }
              if (fVar10 < pfVar3[5]) {
                fVar10 = pfVar3[5];
              }
            }
          }
          iVar4 = iVar4 + 1;
          lVar5 = lVar5 + 8;
        } while (iVar4 < *(int *)(param_1 + 0x928));
      }
      fVar6 = (fVar10 - fStack_b8) * 0.05;
      fVar8 = (local_b0 - fStack_bc) * 0.05;
      fVar9 = (fStack_b4 - local_c0) * 0.05;
      fStack_b8 = fStack_b8 - fVar6;
      local_c0 = local_c0 - fVar9;
      fStack_bc = fStack_bc - fVar8;
      fStack_b4 = fStack_b4 + fVar9;
      uVar7 = CONCAT44(fVar10 + fVar6,local_b0 + fVar8);
    }
    else {
      pfVar3 = (float *)FBox::TransformBy(lVar5 + 0x9c,local_a0);
      local_c0 = *pfVar3;
      fStack_bc = pfVar3[1];
      fStack_b8 = pfVar3[2];
      fStack_b4 = pfVar3[3];
      uVar7 = *(undefined8 *)(pfVar3 + 4);
    }
    fVar10 = (float)((ulonglong)uVar7 >> 0x20);
    local_b0 = (float)uVar7;
  }
  *(ulonglong *)((longlong)param_2 + 0xc) =
       CONCAT44((local_b0 - fStack_bc) * 0.5,(fStack_b4 - local_c0) * 0.5);
  *(float *)((longlong)param_2 + 0x14) = (fVar10 - fStack_b8) * 0.5;
  *param_2 = CONCAT44(fStack_bc + *(float *)(param_2 + 2),
                      local_c0 + *(float *)((longlong)param_2 + 0xc));
  *(float *)(param_2 + 1) = fStack_b8 + *(float *)((longlong)param_2 + 0x14);
  *(float *)(param_2 + 3) =
       SQRT(*(float *)((longlong)param_2 + 0xc) * *(float *)((longlong)param_2 + 0xc) +
            *(float *)(param_2 + 2) * *(float *)(param_2 + 2) +
            *(float *)((longlong)param_2 + 0x14) * *(float *)((longlong)param_2 + 0x14));
  return param_2;
}



// FUNCTION 1425febf0 FUN_1425febf0 body=245 status=ok
// SIG undefined FUN_1425febf0(void)

undefined8 FUN_1425febf0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  
  iVar8 = 0;
  iVar7 = 0;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar10 = 0;
    do {
      plVar1 = *(longlong **)(lVar10 + *(longlong *)(param_1 + 0x40));
      if ((plVar1 != (longlong *)0x0) && ((*(byte *)((longlong)plVar1 + 0x2c) & 1) != 0)) {
        bVar4 = false;
        if (((int)plVar1[5] == 0) && (lVar2 = plVar1[9], lVar2 != 0)) {
          lVar6 = UMovieSceneIntegerSection::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            bVar4 = true;
            iVar7 = *(int *)(lVar2 + 0x48) + 2;
          }
        }
        iVar5 = (**(code **)(*plVar1 + 0x288))(plVar1);
        if (bVar4) {
          *(int *)((longlong)plVar1 + 0xb4) = iVar7;
          iVar5 = iVar7;
        }
        if (iVar8 < iVar5) {
          iVar8 = iVar5;
        }
      }
      iVar9 = iVar9 + 1;
      lVar10 = lVar10 + 8;
    } while (iVar9 < *(int *)(param_1 + 0x48));
  }
  return 1;
}



// FUNCTION 1425fecf0 FUN_1425fecf0 body=773 status=ok
// SIG undefined FUN_1425fecf0(void)

int FUN_1425fecf0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = 0.0;
  fVar9 = (float)(**(code **)(**(longlong **)(param_1 + 0x50) + 0x398))();
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x3a0))();
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar8 = 0;
    do {
      plVar1 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0x38));
      if (plVar1 != (longlong *)0x0) {
        lVar5 = FUN_1429c8180();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          fVar10 = (float)(**(code **)(*plVar1 + 0x380))(plVar1);
          fVar11 = fVar11 + fVar10;
        }
      }
      plVar1 = *(longlong **)(lVar8 + *(longlong *)(param_1 + 0x38));
      if (plVar1 != (longlong *)0x0) {
        lVar5 = FUN_1429cfda0();
        if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          fVar10 = (float)(**(code **)(*plVar1 + 0x398))(plVar1);
          fVar9 = fVar9 + fVar10;
          iVar4 = (**(code **)(*plVar1 + 0x3a0))(plVar1);
          iVar3 = iVar3 + iVar4;
        }
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 8;
    } while (iVar7 < *(int *)(param_1 + 0x40));
  }
  lVar8 = *(longlong *)(param_1 + 0x30);
  fVar10 = 0.0;
  if (lVar8 != 0) {
    fVar10 = *(float *)(lVar8 + 0x74);
    if (*(float *)(lVar8 + 0x74) <= *(float *)(lVar8 + 0x70)) {
      fVar10 = *(float *)(lVar8 + 0x70);
    }
    if ((float)*(int *)(lVar8 + 0x7c) * fVar10 != 0.0) {
      if (*(int *)(lVar8 + 0x7c) == 1) {
        if (fVar10 <= fVar11) {
          fVar9 = (fVar9 + fVar9) * fVar10;
        }
        else {
          fVar9 = (fVar11 + fVar11) * fVar9;
        }
        iVar3 = (iVar3 - ((int)ROUND(-0.5 - fVar9) >> 1)) + 1;
        *(int *)(param_1 + 0xb4) = iVar3;
        return iVar3;
      }
      if (fVar10 <= fVar11) {
        fVar9 = (float)-((int)ROUND(-0.5 - (fVar9 + fVar9) * fVar10) >> 1);
      }
      iVar7 = (iVar3 - ((int)ROUND(-0.5 - (fVar11 + fVar11) * fVar9) >> 1)) + 1;
      if (fVar10 < fVar11) {
        iVar7 = iVar7 - ((int)ROUND(-0.5 - (fVar11 - fVar10) * 2.0) >> 1) * iVar3;
      }
      goto LAB_1425fefd3;
    }
  }
  if (fVar10 <= fVar11) {
    if (fVar11 == 0.0) {
      fVar11 = fVar9 + fVar9;
      goto LAB_1425fefac;
    }
    iVar7 = (int)ROUND(-0.5 - (fVar10 * fVar9 + fVar10 * fVar9)) >> 1;
    if (fVar11 <= fVar10) goto LAB_1425fefae;
    iVar7 = (int)-((float)iVar7 * fVar11);
  }
  else {
    fVar11 = (float)-((int)ROUND(-0.5 - (fVar9 + fVar9)) >> 1) * (fVar11 + fVar11);
LAB_1425fefac:
    iVar7 = (int)ROUND(-0.5 - fVar11) >> 1;
LAB_1425fefae:
    iVar7 = -iVar7;
  }
  iVar6 = -((int)ROUND(-0.5 - fVar9 * 0.064) >> 1);
  iVar4 = 2;
  if (1 < iVar6) {
    iVar4 = iVar6;
  }
  iVar7 = iVar7 + iVar4 + iVar3;
LAB_1425fefd3:
  *(int *)(param_1 + 0xb4) = iVar7;
  return iVar7;
}



// FUNCTION 1425ff000 CalculateMaxActiveParticleCounts body=122 status=ok
// SIG undefined CalculateMaxActiveParticleCounts(void)

undefined8 UParticleSystem::CalculateMaxActiveParticleCounts(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar3 = 0;
  uVar4 = 1;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x40));
      if ((plVar1 != (longlong *)0x0) && (cVar2 = (**(code **)(*plVar1 + 0x2a0))(), cVar2 == '\0'))
      {
        uVar4 = 0;
      }
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x48));
  }
  return uVar4;
}



// FUNCTION 1425ff0a0 FUN_1425ff0a0 body=118 status=ok
// SIG undefined FUN_1425ff0a0(void)

undefined4 FUN_1425ff0a0(undefined4 *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    lVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1425ff0ed;
  }
  lVar4 = 0;
LAB_1425ff0ed:
  cVar2 = FUN_1425ff160(lVar4);
  if (cVar2 != '\0') {
    return *param_1;
  }
  return 0;
}



// FUNCTION 1425ff120 FUN_1425ff120 body=37 status=ok
// SIG undefined FUN_1425ff120(void)

undefined8 FUN_1425ff120(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x6f0) + 0xf8);
  if ((cVar1 != '\0') &&
     ((*(char *)(*(longlong *)(param_1 + 0x6f0) + 0xb4) != '\0' || (cVar1 == '\x02')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1425ff150 FUN_1425ff150 body=11 status=ok
// SIG undefined FUN_1425ff150(void)

bool FUN_1425ff150(longlong param_1)

{
  return *(int *)(param_1 + 0xe4) != 0;
}



// FUNCTION 1425ff160 FUN_1425ff160 body=227 status=ok
// SIG undefined FUN_1425ff160(void)

bool FUN_1425ff160(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0();
  }
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x6f0) != 0)) {
    fVar5 = *(float *)(*(longlong *)(param_1 + 0x6f0) + 0xb8);
    if (fVar5 <= *(float *)(param_1 + 0x794)) {
      fVar5 = *(float *)(param_1 + 0x794);
    }
    if (fVar5 <= 0.0) {
      fVar4 = 0.0;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      fVar4 = *(float *)(lVar3 + 0x7b0) + *(float *)(lVar3 + 0x7b0);
      if (fVar4 <= fVar5) {
        fVar4 = fVar5;
      }
    }
    if (((((*(byte *)(param_1 + 0x718) & 0x10) == 0) && (0.0 < fVar4)) &&
        (fVar4 < *(float *)(param_1 + 0x7a0))) &&
       (cVar1 = UWorld::IsGameWorld(lVar2), cVar1 != '\0')) {
      return fVar4 + *(float *)(param_1 + 0x36c) < *(float *)(lVar2 + 0x790);
    }
  }
  return false;
}



// FUNCTION 1425ff250 FUN_1425ff250 body=144 status=ok
// SIG undefined FUN_1425ff250(void)

void FUN_1425ff250(undefined8 param_1,char param_2)

{
  longlong *in_RCX;
  
  if ((*(byte *)((longlong)in_RCX + 0x719) & 0x10) != 0) {
    if ((*(byte *)((longlong)in_RCX + 0x71b) & 1) != 0) {
      *(undefined8 *)((longlong)in_RCX + 0x1ec) = *(undefined8 *)((longlong)in_RCX + 0x87c);
      in_RCX[0x3f] = in_RCX[0x111];
      param_1 = *(undefined8 *)((longlong)in_RCX + 0x894);
      *(undefined4 *)((longlong)in_RCX + 500) = *(undefined4 *)((longlong)in_RCX + 0x884);
      *(int *)(in_RCX + 0x40) = (int)in_RCX[0x112];
      *(undefined8 *)((longlong)in_RCX + 0x204) = param_1;
      *(undefined4 *)((longlong)in_RCX + 0x20c) = *(undefined4 *)((longlong)in_RCX + 0x89c);
      *(byte *)((longlong)in_RCX + 0x71b) = *(byte *)((longlong)in_RCX + 0x71b) & 0xfe;
    }
    if (param_2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001425ff2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*in_RCX + 0x418))(param_1,&DAT_14653218c);
      return;
    }
  }
  return;
}



// FUNCTION 1425ff2e0 FUN_1425ff2e0 body=246 status=ok
// SIG undefined FUN_1425ff2e0(void)

void FUN_1425ff2e0(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x728)) {
    iVar4 = 1;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x720);
      if ((*(longlong *)(lVar5 + lVar1) == param_2) &&
         ((param_3 == 0 || (*(byte *)(lVar5 + 8 + lVar1) == param_3)))) {
        iVar3 = *(int *)(param_1 + 0x728);
        iVar2 = (iVar3 - iVar6) + -1;
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar6 * 0x90 + lVar1),
                     (void *)((longlong)iVar4 * 0x90 + lVar1),(longlong)iVar2 * 0x90);
          iVar3 = *(int *)(param_1 + 0x728);
        }
        *(int *)(param_1 + 0x728) = iVar3 + -1;
        TArray<HAPI_ParmInfo,FDefaultAllocator>::ResizeShrink(param_1 + 0x720);
        iVar6 = iVar6 + -1;
        iVar4 = iVar4 + -1;
        lVar5 = lVar5 + -0x90;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x90;
    } while (iVar6 < *(int *)(param_1 + 0x728));
  }
  return;
}



// FUNCTION 1425ff3e0 FUN_1425ff3e0 body=210 status=ok
// SIG undefined FUN_1425ff3e0(void)

void FUN_1425ff3e0(longlong *param_1)

{
  longlong lVar1;
  longlong *local_res8;
  
  lVar1 = param_1[0x24];
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  local_res8 = param_1;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x115,&local_res8);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x108);
  FUN_14260b860(param_1,0);
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xfb;
  (**(code **)(*param_1 + 0x358))(param_1,0);
  if (*(char *)((longlong)param_1 + 0x71c) != '\x01') {
    if (*(char *)((longlong)param_1 + 0x71c) != '\x03') {
      if ((*(byte *)((longlong)param_1 + 0x71a) & 0x40) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001425ff48d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x3b0))(param_1,0);
        return;
      }
      if ((*(byte *)((longlong)param_1 + 0x719) & 0x10) != 0) {
        FUN_1425ff250(param_1,1);
      }
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x71c) = 2;
  }
  FUN_1426a5b60(lVar1 + 0x870,param_1);
  return;
}



// FUNCTION 1425ff4c0 FUN_1425ff4c0 body=465 status=ok
// SIG undefined FUN_1425ff4c0(void)

void FUN_1425ff4c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int local_res8;
  longlong local_res10;
  
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 0x30;
  local_res8 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_res10 = 0;
    do {
      lVar2 = *(longlong *)(local_res10 + *(longlong *)(param_1 + 0x40));
      if ((lVar2 != 0) && (iVar10 = 0, 0 < *(int *)(lVar2 + 0x48))) {
        lVar9 = 0;
        do {
          lVar3 = *(longlong *)(lVar9 + *(longlong *)(lVar2 + 0x40));
          if ((lVar3 != 0) && (iVar8 = 0, 0 < *(int *)(lVar3 + 0x40))) {
            lVar7 = 0;
            do {
              plVar4 = *(longlong **)(lVar7 + *(longlong *)(lVar3 + 0x38));
              if ((plVar4 != (longlong *)0x0) &&
                 (cVar5 = (**(code **)(*plVar4 + 0x368))(), cVar5 == '\0')) {
                *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) & 0xffffffef;
                if ((*(int *)(*plVar1 + 0x38) < DAT_146b05190) &&
                   (_Init_thread_header(&DAT_146b05190), DAT_146b05190 == -1)) {
                  uVar6 = FCommandLine::Get();
                  DAT_146b0518c = FParse::Param(uVar6,L"LogThreadedParticleTicking");
                  _Init_thread_footer(&DAT_146b05190);
                }
                if (DAT_146b0518c == '\0') {
                  return;
                }
              }
              iVar8 = iVar8 + 1;
              lVar7 = lVar7 + 8;
            } while (iVar8 < *(int *)(lVar3 + 0x40));
          }
          iVar10 = iVar10 + 1;
          lVar9 = lVar9 + 8;
        } while (iVar10 < *(int *)(lVar2 + 0x48));
      }
      local_res8 = local_res8 + 1;
      local_res10 = local_res10 + 8;
    } while (local_res8 < *(int *)(param_1 + 0x48));
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b05190) && (_Init_thread_header(&DAT_146b05190), DAT_146b05190 == -1))
  {
    uVar6 = FCommandLine::Get();
    DAT_146b0518c = FParse::Param(uVar6,L"LogThreadedParticleTicking");
    _Init_thread_footer(&DAT_146b05190);
  }
  return;
}



// FUNCTION 1425ff6a0 FUN_1425ff6a0 body=110 status=ok
// SIG undefined FUN_1425ff6a0(void)

void FUN_1425ff6a0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x6f0);
  bVar3 = *(byte *)(param_1 + 0x718) & 0xfb;
  *(byte *)(param_1 + 0x718) = bVar3;
  if (lVar1 != 0) {
    bVar3 = bVar3 | 8;
    *(byte *)(param_1 + 0x718) = bVar3;
    uVar2 = *(uint *)(lVar1 + 0xbc);
    if ((uVar2 & 0x20) == 0) {
      FUN_1425ff4c0(lVar1);
      uVar2 = *(uint *)(lVar1 + 0xbc);
      bVar3 = *(byte *)(param_1 + 0x718);
    }
    *(byte *)(param_1 + 0x718) = ((char)(uVar2 >> 4) << 2 ^ bVar3) & 4 ^ bVar3;
  }
  return;
}



// FUNCTION 1425ff710 FUN_1425ff710 body=537 status=ok
// SIG undefined FUN_1425ff710(void)

void FUN_1425ff710(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte bVar10;
  undefined1 uVar11;
  int iVar12;
  undefined1 local_18 [16];
  
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar6 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) {
    uVar11 = 2;
  }
  else {
    uVar11 = 0;
  }
  lVar8 = param_1[0x24];
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(param_1);
  }
  FUN_1424de8e0(local_18,lVar8,0,uVar11,*(byte *)((longlong)param_1 + 0x719) >> 5 & 1);
  (**(code **)(*param_1 + 0x3a0))(param_1);
  *(undefined4 *)(param_1 + 0x12e) = 0;
  if (0 < (int)param_1[0x125]) {
    lVar8 = 0;
    iVar12 = 0;
    do {
      iVar1 = iVar12 + 1;
      plVar4 = *(longlong **)(lVar8 + param_1[0x124]);
      if (((plVar4 != (longlong *)0x0) && (lVar5 = plVar4[2], lVar5 != 0)) &&
         ((plVar4[5] != 0 && ((*(byte *)(plVar4[5] + 0x2c) & 1) != 0)))) {
        if ((*(byte *)((longlong)param_1 + 0x719) & 0x20) == 0) {
          *(int *)(param_1 + 0x12e) = (int)param_1[0x12e] + 1;
        }
        else {
          bVar2 = *(byte *)(*(longlong *)(lVar5 + 0x20) + 0xdc);
          bVar10 = *(byte *)(lVar5 + 0xac);
          if (bVar2 <= *(byte *)(lVar5 + 0xac)) {
            bVar10 = bVar2;
          }
          if (bVar10 < *(byte *)((longlong)param_1 + 0x71e)) {
            (**(code **)(*plVar4 + 0xf8))(plVar4,1);
            uVar3 = *(uint *)(plVar4 + 0x1e);
            *(uint *)(plVar4 + 0x1e) = uVar3 | 0x400;
            if ((*(byte *)(plVar4[2] + 0xa8) & 8) != 0) {
              *(uint *)(plVar4 + 0x1e) = uVar3 & 0xfffffffe | 0x400;
            }
          }
          else {
            *(int *)(param_1 + 0x12e) = (int)param_1[0x12e] + 1;
            (**(code **)(*plVar4 + 0xf8))(plVar4,0);
            *(uint *)(plVar4 + 0x1e) = *(uint *)(plVar4 + 0x1e) & 0xfffffbff | 1;
          }
        }
        (**(code **)(*plVar4 + 0x20))(plVar4,(int)param_1[0x12d],*(byte *)(param_1 + 0xe3) >> 1 & 1)
        ;
        (**(code **)(*plVar4 + 0x220))(plVar4,iVar12);
        *(int *)((longlong)param_1 + 0x96c) =
             *(int *)((longlong)param_1 + 0x96c) + (int)plVar4[0x25];
      }
      lVar8 = lVar8 + 8;
      iVar12 = iVar1;
    } while (iVar1 < (int)param_1[0x125]);
  }
  if ((*(byte *)((longlong)param_1 + 0x71b) & 0x10) != 0) {
    uVar9 = FUN_1424a16a0();
    FUN_142497fd0(uVar9,param_1);
  }
  FUN_1424e13e0(local_18);
  return;
}



// FUNCTION 1425ff930 FUN_1425ff930 body=326 status=ok
// SIG undefined FUN_1425ff930(void)

void FUN_1425ff930(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  longlong *plVar11;
  
  plVar11 = *(longlong **)(param_1 + 0x40);
  plVar1 = plVar11 + *(int *)(param_1 + 0x48);
  do {
    if (plVar11 == plVar1) {
      uVar6 = 0;
LAB_1425ffa43:
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) & 0xfffffffb;
      *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | uVar6;
      return;
    }
    if (*plVar11 != 0) {
      lVar3 = **(longlong **)(*plVar11 + 0x40);
      if ((lVar3 == 0) || (lVar8 = *(longlong *)(lVar3 + 0x48), lVar8 == 0)) {
LAB_1425ff9c0:
        bVar4 = false;
      }
      else {
        lVar7 = FUN_1429d0ee0();
        lVar8 = *(longlong *)(lVar8 + 0x10);
        if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
            lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_1425ff9c0;
        bVar4 = true;
      }
      plVar9 = *(longlong **)(lVar3 + 0x38);
      bVar10 = 0;
      plVar2 = plVar9 + *(int *)(lVar3 + 0x40);
      for (; plVar9 != plVar2; plVar9 = plVar9 + 1) {
        lVar3 = *plVar9;
        if (lVar3 != 0) {
          lVar8 = UTexture2D::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            bVar10 = bVar10 | *(byte *)(lVar3 + 0xe8) & 1;
          }
        }
      }
      if ((bVar4) || (bVar10 != 0)) {
        uVar6 = 4;
        goto LAB_1425ffa43;
      }
    }
    plVar11 = plVar11 + 1;
  } while( true );
}



// FUNCTION 1425ffa80 FUN_1425ffa80 body=75 status=ok
// SIG undefined FUN_1425ffa80(void)

undefined8 * FUN_1425ffa80(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)operator_new(0x20);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *puVar1 = &PTR_FUN_1451349b0;
      *(undefined8 *)((longlong)puVar1 + 10) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1425ffad0 ContainsEmitterType body=112 status=ok
// SIG undefined ContainsEmitterType(void)

ulonglong UParticleSystem::ContainsEmitterType(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *in_RAX;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    plVar3 = *(longlong **)(param_1 + 0x40);
    do {
      in_RAX = (longlong *)0x0;
      if (*plVar3 != 0) {
        in_RAX = *(longlong **)(*plVar3 + 0x40);
        if ((*in_RAX != 0) &&
           (lVar1 = *(longlong *)(*in_RAX + 0x48), in_RAX = (longlong *)0x0, lVar1 != 0)) {
          uVar2 = *(ulonglong *)(lVar1 + 0x10);
          if ((*(int *)(uVar2 + 0x90) < *(int *)(param_2 + 0x90)) ||
             (uVar2 = *(ulonglong *)(uVar2 + 0x88),
             *(longlong *)(uVar2 + (longlong)*(int *)(param_2 + 0x90) * 8) != param_2 + 0x88)) {
            in_RAX = (longlong *)(uVar2 & 0xffffffffffffff00);
          }
          else {
            in_RAX = (longlong *)CONCAT71((int7)(uVar2 >> 8),1);
          }
          if ((char)in_RAX != '\0') {
            return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
          }
        }
      }
      iVar4 = iVar4 + 1;
      plVar3 = plVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x48));
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1425ffb40 FUN_1425ffb40 body=2239 status=ok
// SIG undefined FUN_1425ffb40(void)

longlong * FUN_1425ffb40(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  undefined1 uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  DWORD DVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  uint uVar23;
  uint uVar24;
  longlong *plVar25;
  uint uVar26;
  uint uVar27;
  longlong *plVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined4 in_stack_fffffffffffffef8;
  longlong *local_d8;
  undefined8 local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  LARGE_INTEGER local_a0;
  undefined1 local_98 [16];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [56];
  
  lVar13 = *(longlong *)(param_1 + 0x120);
  if (lVar13 == 0) {
    lVar13 = FUN_1423407b0();
  }
  FUN_1424de8e0(local_98,lVar13,0,0,
                CONCAT31((int3)((uint)in_stack_fffffffffffffef8 >> 8),
                         *(byte *)(param_1 + 0x719) >> 5) & 0xffffff01);
  lVar13 = (longlong)*(int *)(param_1 + 0x928);
  plVar21 = (longlong *)0x0;
  uVar23 = 0;
  if (0 < *(int *)(param_1 + 0x928)) {
    plVar17 = *(longlong **)(param_1 + 0x920);
    plVar22 = plVar21;
    do {
      if ((*plVar17 != 0) && (0 < *(int *)(*plVar17 + 0x128))) {
        plVar22 = (longlong *)(ulonglong)((int)plVar22 + 1);
      }
      plVar17 = plVar17 + 1;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    if ((((*(byte *)(param_1 + 0x71a) & 0x10) == 0) && ((int)plVar22 == 0)) &&
       (local_d8 = plVar21, *(char *)(param_1 + 0x71f) == '\0')) goto LAB_1426003e4;
  }
  local_d8 = (longlong *)operator_new(0xd0);
  if (local_d8 == (longlong *)0x0) {
    local_d8 = (longlong *)0x0;
  }
  else {
    local_d8[0x15] = 0;
    local_d8[0x16] = 0;
    *(undefined1 *)(local_d8 + 0x19) = 0;
  }
  lVar13 = *(longlong *)(param_1 + 0x6f0);
  if (lVar13 != 0) {
    fVar3 = *(float *)(param_1 + 0x210);
    fVar4 = *(float *)(param_1 + 0x214);
    fVar5 = *(float *)(param_1 + 0x218);
    fVar6 = *(float *)(param_1 + 0x21c);
    fVar33 = *(float *)(lVar13 + 0xe8) * *(float *)(param_1 + 0x230);
    fVar34 = *(float *)(lVar13 + 0xec) * *(float *)(param_1 + 0x234);
    fVar35 = *(float *)(lVar13 + 0xf0) * *(float *)(param_1 + 0x238);
    fVar36 = *(float *)(param_1 + 0x23c) * 0.0;
    fVar29 = fVar35 * fVar4 - fVar34 * fVar5;
    fVar30 = fVar33 * fVar5 - fVar35 * fVar3;
    fVar31 = fVar34 * fVar3 - fVar33 * fVar4;
    fVar32 = fVar36 * fVar6 - fVar36 * fVar6;
    fVar29 = fVar29 + fVar29;
    fVar30 = fVar30 + fVar30;
    fVar31 = fVar31 + fVar31;
    fVar32 = fVar32 + fVar32;
    local_88 = (fVar31 * fVar4 - fVar30 * fVar5) + fVar6 * fVar29 + fVar33 +
               *(float *)(param_1 + 0x220);
    fStack_84 = (fVar29 * fVar5 - fVar31 * fVar3) + fVar6 * fVar30 + fVar34 +
                *(float *)(param_1 + 0x224);
    local_a8 = (fVar30 * fVar3 - fVar29 * fVar4) + fVar6 * fVar31 + fVar35 +
               *(float *)(param_1 + 0x228);
    fStack_7c = (fVar32 * fVar6 - fVar32 * fVar6) + fVar6 * fVar32 + fVar36 +
                *(float *)(param_1 + 0x22c);
    local_d8[0x17] = CONCAT44(fStack_84,local_88);
    *(float *)(local_d8 + 0x18) = local_a8;
    local_b0 = CONCAT44(fStack_84,local_88);
    *(undefined4 *)((longlong)local_d8 + 0xc4) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x6f0) + 0xf4);
    fStack_80 = local_a8;
  }
  if (*(char *)(param_1 + 0x71f) == '\x02') {
    if (0 < *(int *)(param_1 + 0x7c8)) {
      plVar17 = *(longlong **)(param_1 + 0x7c0);
      plVar22 = plVar21;
      do {
        lVar13 = *plVar17;
        if ((lVar13 != 0) && (*(int *)(lVar13 + 0x28) == *(int *)(param_1 + 2000))) {
          iVar10 = *(int *)(param_1 + 0x7d4);
          lVar14 = (longlong)iVar10;
          if ((-1 < iVar10) && (iVar10 < *(int *)(lVar13 + 0x38))) {
            lVar13 = *(longlong *)(lVar13 + 0x30);
            plVar17 = local_d8 + 1;
            *(undefined4 *)(local_d8 + 0x16) = 0;
            if ((*(int *)((longlong)local_d8 + 0xb4) < 0) &&
               (*(int *)((longlong)local_d8 + 0xb4) != 0)) {
              TArray<ASBZAICharacter_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>::ResizeTo
                        (plVar17,0);
            }
            iVar10 = *(int *)(lVar13 + 8 + lVar14 * 0x10);
            if (*(int *)((longlong)local_d8 + 0xb4) < iVar10) {
              TArray<ASBZAICharacter_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>::ResizeTo
                        (plVar17,iVar10);
              iVar10 = *(int *)(lVar13 + 8 + lVar14 * 0x10);
            }
            plVar22 = plVar21;
            if (0 < iVar10) {
              do {
                lVar15 = *(longlong *)(lVar13 + lVar14 * 0x10);
                uVar16 = *(undefined8 *)((longlong)plVar22 + lVar15 + 8);
                iVar10 = *(int *)((longlong)plVar22 + lVar15 + 4);
                if ((-1 < iVar10) && (iVar10 < *(int *)(param_1 + 0x928))) {
                  lVar15 = *(longlong *)(param_1 + 0x920);
                  uVar8 = FUN_142341190(param_1);
                  lVar15 = FUN_142600400(*(undefined8 *)(lVar15 + (longlong)iVar10 * 8),uVar16,uVar8
                                         ,param_2);
                  if (lVar15 != 0) {
                    iVar10 = (int)local_d8[0x16];
                    *(int *)(local_d8 + 0x16) = iVar10 + 1;
                    if (*(int *)((longlong)local_d8 + 0xb4) < iVar10 + 1) {
                      FUN_140741560(plVar17,iVar10);
                    }
                    plVar20 = (longlong *)local_d8[0x15];
                    if ((longlong *)local_d8[0x15] == (longlong *)0x0) {
                      plVar20 = plVar17;
                    }
                    plVar20[iVar10] = lVar15;
                    *(int *)(lVar15 + 0x10) = (int)local_d8[0x16] + -1;
                  }
                }
                uVar23 = (int)plVar21 + 1;
                plVar21 = (longlong *)(ulonglong)uVar23;
                plVar22 = plVar22 + 2;
              } while ((int)uVar23 < *(int *)(lVar13 + 8 + lVar14 * 0x10));
            }
          }
          break;
        }
        plVar22 = (longlong *)((longlong)plVar22 + 1);
        plVar17 = plVar17 + 1;
      } while ((longlong)plVar22 < (longlong)*(int *)(param_1 + 0x7c8));
    }
  }
  else {
    plVar17 = plVar21;
    if (*(char *)(param_1 + 0x71f) == '\x01') {
      FFXAsyncBatcher::Flush(&DAT_146b04fd8);
      QueryPerformanceCounter(&local_a0);
      bVar2 = *(byte *)(param_1 + 0x71b);
      while ((bVar2 & 0x10) != 0) {
        FUN_1416b1810(0);
        bVar2 = *(byte *)(param_1 + 0x71b);
      }
      FUN_142602d20(param_1);
      if (0 < *(int *)(param_1 + 0x7c8)) {
        plVar22 = *(longlong **)(param_1 + 0x7c0);
        plVar20 = plVar21;
        do {
          plVar17 = (longlong *)*plVar22;
          if ((plVar17 != (longlong *)0x0) && ((int)plVar17[5] == *(int *)(param_1 + 2000))) break;
          plVar20 = (longlong *)((longlong)plVar20 + 1);
          plVar22 = plVar22 + 1;
          plVar17 = plVar21;
        } while ((longlong)plVar20 < (longlong)*(int *)(param_1 + 0x7c8));
      }
      if (plVar17 == (longlong *)0x0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        local_b8 = 0;
        uVar16 = UParticleSystemReplay::GetPrivateStaticClass();
        plVar17 = (longlong *)FUN_1417985e0(uVar16,param_1,0,0,0,0,0,0,0);
        *(undefined4 *)(plVar17 + 5) = *(undefined4 *)(param_1 + 2000);
        iVar10 = *(int *)(param_1 + 0x7c8);
        iVar19 = iVar10 + 1;
        *(int *)(param_1 + 0x7c8) = iVar19;
        if (*(int *)(param_1 + 0x7cc) < iVar19) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x7c0);
        }
        *(longlong **)(*(longlong *)(param_1 + 0x7c0) + (longlong)iVar10 * 8) = plVar17;
        UObjectBaseUtility::MarkPackageDirty(param_1);
      }
      lVar13 = plVar17[7];
      lVar14 = plVar17[7];
      iVar10 = (int)lVar13 + 1;
      *(int *)(plVar17 + 7) = iVar10;
      if (*(int *)((longlong)plVar17 + 0x3c) < iVar10) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17 + 6);
      }
      lVar15 = plVar17[6];
      puVar18 = (undefined8 *)((longlong)(int)lVar13 * 0x10 + lVar15);
      if (puVar18 != (undefined8 *)0x0) {
        *puVar18 = 0;
        puVar18[1] = 0;
        lVar15 = plVar17[6];
      }
      plVar17 = (longlong *)((longlong)(int)lVar14 * 0x10 + lVar15);
      UObjectBaseUtility::MarkPackageDirty(param_1);
    }
    if ((*(byte *)(param_1 + 0x71a) & 4) == 0) {
      plVar22 = local_d8 + 1;
      *(undefined4 *)(local_d8 + 0x16) = 0;
      if ((*(int *)((longlong)local_d8 + 0xb4) < 0) && (*(int *)((longlong)local_d8 + 0xb4) != 0)) {
        TArray<ASBZAICharacter_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>::ResizeTo
                  (plVar22);
      }
      iVar10 = *(int *)(param_1 + 0x928);
      if (*(int *)((longlong)local_d8 + 0xb4) < iVar10) {
        TArray<ASBZAICharacter_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>::ResizeTo
                  (plVar22);
        iVar10 = *(int *)(param_1 + 0x928);
      }
      iVar19 = 0;
      uVar27 = 0;
      if (0 < iVar10) {
        local_c8 = 0;
        plVar20 = plVar21;
        plVar28 = plVar21;
        do {
          uVar23 = (uint)plVar28 + 1;
          if (*(longlong *)(param_1 + 0x640) == 0) {
            uVar23 = (uint)plVar28;
          }
          plVar28 = *(longlong **)(local_c8 + *(longlong *)(param_1 + 0x920));
          uVar26 = (uint)plVar20;
          if ((plVar28 == (longlong *)0x0) || ((*(byte *)(plVar28 + 0x3d) & 1) != 0)) {
            *(undefined1 *)(local_d8 + 0x19) = 1;
          }
          else {
            iVar10 = (**(code **)(*plVar28 + 0x230))(plVar28);
            plVar25 = plVar21;
            if (iVar10 != 0) {
              do {
                lVar13 = (**(code **)(*plVar28 + 0x120))(plVar28,0,param_2,plVar25);
                if (lVar13 != 0) {
                  *(uint *)(lVar13 + 0xc) = *(uint *)(lVar13 + 0xc) | 2;
                  lVar14 = local_d8[0x16];
                  iVar10 = (int)lVar14 + 1;
                  *(int *)(local_d8 + 0x16) = iVar10;
                  if (*(int *)((longlong)local_d8 + 0xb4) < iVar10) {
                    FUN_140741560(plVar22);
                  }
                  plVar20 = (longlong *)local_d8[0x15];
                  if ((longlong *)local_d8[0x15] == (longlong *)0x0) {
                    plVar20 = plVar22;
                  }
                  plVar20[(int)lVar14] = lVar13;
                  *(int *)(lVar13 + 0x10) = iVar19;
                  if (*(char *)(param_1 + 0x71f) == '\x01') {
                    lVar13 = (**(code **)(*plVar28 + 0x128))(plVar28);
                    iVar10 = (int)plVar17[1];
                    lVar14 = (longlong)iVar10;
                    *(int *)(plVar17 + 1) = iVar10 + 1;
                    if (*(int *)((longlong)plVar17 + 0xc) < iVar10 + 1) {
                      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar10);
                    }
                    lVar15 = *plVar17;
                    puVar18 = (undefined8 *)(lVar15 + lVar14 * 0x10);
                    if (puVar18 != (undefined8 *)0x0) {
                      *puVar18 = 0;
                      puVar18[1] = 0;
                      lVar15 = *plVar17;
                    }
                    *(undefined4 *)(lVar15 + lVar14 * 0x10) = *(undefined4 *)(lVar13 + 8);
                    *(uint *)(lVar15 + 4 + lVar14 * 0x10) = uVar27;
                    *(longlong *)(lVar15 + 8 + lVar14 * 0x10) = lVar13;
                  }
                }
                iVar19 = iVar19 + 1;
                uVar24 = (int)plVar25 + 1;
                uVar11 = (**(code **)(*plVar28 + 0x230))(plVar28);
                plVar25 = (longlong *)(ulonglong)uVar24;
                uVar26 = uVar27;
              } while (uVar24 < uVar11);
            }
          }
          plVar28 = (longlong *)(ulonglong)uVar23;
          uVar27 = uVar26 + 1;
          plVar20 = (longlong *)(ulonglong)uVar27;
          local_c8 = local_c8 + 8;
        } while ((int)uVar27 < *(int *)(param_1 + 0x928));
      }
      lVar13 = *(longlong *)(param_1 + 0x640);
      if ((lVar13 != 0) && (*(uint *)(lVar13 + 0x3a8) != uVar23)) {
        local_c8 = lVar13;
        uStack_c0 = uVar23;
        if ((DAT_146ac3ac6 == '\0') || (cVar9 = IsInRenderingThread(), cVar9 == '\0')) {
          if ((DAT_146ac3ac5 == '\0') &&
             (((cVar9 = FUN_1415ad720(&DAT_1468e2448), cVar9 != '\0' || (DAT_1468c21ae == '\0')) ||
              (DVar12 = GetCurrentThreadId(), DVar12 == DAT_1468c21c0)))) {
            uVar16 = FBaseGraphTask::GetSmallTaskAllocator();
            FUN_1425fbce0(&local_c8,uVar16);
          }
          else {
            plVar21 = (longlong *)FUN_142600da0(local_78,0,0xff);
            lVar13 = *plVar21;
            *(undefined4 *)(lVar13 + 0x10) = (undefined4)local_c8;
            *(undefined4 *)(lVar13 + 0x14) = local_c8._4_4_;
            *(uint *)(lVar13 + 0x18) = uStack_c0;
            *(undefined4 *)(lVar13 + 0x1c) = uStack_bc;
            lVar13 = *plVar21;
            lVar7 = plVar21[2];
            lVar14 = plVar21[1];
            lVar15 = *(longlong *)(lVar13 + 0x28);
            if (lVar15 != 0) {
              LOCK();
              *(int *)(lVar15 + 0x48) = *(int *)(lVar15 + 0x48) + 1;
              UNLOCK();
            }
            FUN_1409421c0(lVar13,lVar14,(int)lVar7,1);
            if (lVar15 != 0) {
              LOCK();
              piVar1 = (int *)(lVar15 + 0x48);
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                FGraphEvent::Recycle(lVar15);
              }
            }
          }
        }
        else {
          FBaseGraphTask::GetSmallTaskAllocator();
          plVar21 = (longlong *)(lVar13 + 0x3a0);
          *(undefined4 *)(lVar13 + 0x3a8) = 0;
          if ((*(int *)(lVar13 + 0x3ac) < 0) && (*(int *)(lVar13 + 0x3ac) != 0)) {
            TArray<float,FDefaultAllocator>::ResizeTo(plVar21);
          }
          iVar10 = *(int *)(lVar13 + 0x3a8);
          iVar19 = iVar10 + uVar23;
          *(int *)(lVar13 + 0x3a8) = iVar19;
          if (*(int *)(lVar13 + 0x3ac) < iVar19) {
            TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar21);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar21 + (longlong)iVar10 * 4),0,(longlong)(int)uVar23 << 2);
        }
      }
    }
  }
LAB_1426003e4:
  FUN_1424e13e0(local_98);
  return local_d8;
}



// FUNCTION 142600400 FUN_142600400 body=1616 status=ok
// SIG undefined FUN_142600400(void)

longlong * FUN_142600400(longlong param_1,longlong param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)0x0;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 1) {
    plVar2 = (longlong *)FUN_14261b0a0(0x1b0);
    if (plVar2 != (longlong *)0x0) {
      FDynamicEmitterDataBase::FDynamicEmitterDataBase
                (plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x30));
      *(uint *)(plVar2 + 6) = *(uint *)(plVar2 + 6) & 0xfffffffe;
      plVar2[4] = 0;
      plVar2[5] = 0;
      *plVar2 = (longlong)&PTR__scalar_deleting_destructor__1451319d8;
      FUN_142619420(plVar2 + 7);
      plVar2[7] = (longlong)&PTR__scalar_deleting_destructor__1451319c8;
      plVar2[0x22] = 0;
      *(undefined4 *)(plVar2 + 0x23) = 0;
      *(undefined8 *)((longlong)plVar2 + 0x11c) = 0x3f800000;
      *(undefined8 *)((longlong)plVar2 + 0x124) = 0;
      *(undefined8 *)((longlong)plVar2 + 300) = 0x3f800000;
      *(undefined8 *)((longlong)plVar2 + 0x134) = 0;
      *(undefined8 *)((longlong)plVar2 + 0x13c) = 0x3f800000;
      *(undefined8 *)((longlong)plVar2 + 0x144) = 0;
      *(undefined8 *)((longlong)plVar2 + 0x14c) = 0x3f800000;
      *(undefined8 *)((longlong)plVar2 + 0x154) = 0;
      *(undefined8 *)((longlong)plVar2 + 0x15c) = 0x3f800000;
      *(undefined8 *)((longlong)plVar2 + 0x164) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x16c) = 0x3f800000;
      plVar2[0x30] = 0;
      *(undefined4 *)(plVar2 + 0x31) = 0;
      *(undefined4 *)((longlong)plVar2 + 0x18c) = 0x3f800000;
      plVar4 = plVar2;
    }
    FUN_1425fb450(plVar4 + 7,param_2);
    FUN_142674020(plVar4,param_3);
  }
  else if (iVar1 == 2) {
    lVar3 = operator_new(400);
    plVar2 = plVar4;
    if (lVar3 != 0) {
      plVar2 = (longlong *)
               FUN_142659270(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x30));
    }
    FUN_1425fb450(plVar2 + 7,param_2);
    *(undefined4 *)(plVar2 + 0x21) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined4 *)((longlong)plVar2 + 0x10c) = *(undefined4 *)(param_2 + 0xd4);
    *(undefined4 *)(plVar2 + 0x22) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)((longlong)plVar2 + 0x114) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined1 *)(plVar2 + 0x23) = *(undefined1 *)(param_2 + 0xe0);
    *(undefined4 *)((longlong)plVar2 + 0x11c) = *(undefined4 *)(param_2 + 0xe4);
    *(undefined4 *)(plVar2 + 0x24) = *(undefined4 *)(param_2 + 0xe8);
    *(undefined1 *)((longlong)plVar2 + 0x124) = *(undefined1 *)(param_2 + 0xec);
    *(undefined1 *)((longlong)plVar2 + 0x125) = *(undefined1 *)(param_2 + 0xed);
    plVar2[0x25] = *(longlong *)(param_2 + 0xf0);
    *(undefined4 *)(plVar2 + 0x26) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)((longlong)plVar2 + 0x134) = *(undefined4 *)(param_2 + 0xfc);
    if (param_1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1f0);
      FUN_142673bc0(plVar2,param_3,param_1,**(undefined8 **)(lVar3 + 0x40),
                    *(undefined1 *)(lVar3 + 0x51),*(undefined4 *)(lVar3 + 0x54),param_4,0);
      plVar4 = plVar2;
    }
  }
  else if (iVar1 == 3) {
    lVar3 = FUN_14261b0a0(0x1a0);
    if (lVar3 != 0) {
      plVar4 = (longlong *)
               FDynamicBeam2EmitterData::FDynamicBeam2EmitterData
                         (lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x30));
    }
    FUN_1425fb450(plVar4 + 7,param_2);
    plVar2 = plVar4 + 0x23;
    *(undefined4 *)(plVar4 + 0x21) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined4 *)((longlong)plVar4 + 0x10c) = *(undefined4 *)(param_2 + 0xd4);
    *(undefined4 *)(plVar4 + 0x22) = *(undefined4 *)(param_2 + 0xd8);
    if (plVar2 != (longlong *)(param_2 + 0xe0)) {
      iVar1 = *(int *)(param_2 + 0xe8);
      _Src = *(void **)(param_2 + 0xe0);
      *(int *)(plVar4 + 0x24) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)plVar4 + 0x124) == 0)) {
        *(undefined4 *)((longlong)plVar4 + 0x124) = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(plVar2,iVar1);
        _guard_xfg_dispatch_icall_nop((void *)*plVar2,_Src,(longlong)iVar1 << 2);
      }
    }
    *(undefined4 *)(plVar4 + 0x25) = *(undefined4 *)(param_2 + 0xf0);
    *(undefined4 *)((longlong)plVar4 + 300) = *(undefined4 *)(param_2 + 0xf4);
    *(undefined4 *)(plVar4 + 0x26) = *(undefined4 *)(param_2 + 0xf8);
    *(undefined4 *)((longlong)plVar4 + 0x134) = *(undefined4 *)(param_2 + 0xfc);
    *(undefined4 *)(plVar4 + 0x27) = *(undefined4 *)(param_2 + 0x100);
    *(undefined4 *)((longlong)plVar4 + 0x13c) = *(undefined4 *)(param_2 + 0x104);
    *(undefined4 *)(plVar4 + 0x28) = *(undefined4 *)(param_2 + 0x108);
    *(undefined4 *)((longlong)plVar4 + 0x144) = *(undefined4 *)(param_2 + 0x10c);
    *(undefined4 *)(plVar4 + 0x29) = *(undefined4 *)(param_2 + 0x110);
    *(undefined1 *)((longlong)plVar4 + 0x14c) = *(undefined1 *)(param_2 + 0x114);
    *(undefined1 *)((longlong)plVar4 + 0x14d) = *(undefined1 *)(param_2 + 0x115);
    *(undefined1 *)((longlong)plVar4 + 0x14e) = *(undefined1 *)(param_2 + 0x116);
    *(undefined1 *)((longlong)plVar4 + 0x14f) = *(undefined1 *)(param_2 + 0x117);
    *(undefined1 *)(plVar4 + 0x2a) = *(undefined1 *)(param_2 + 0x118);
    *(undefined1 *)((longlong)plVar4 + 0x151) = *(undefined1 *)(param_2 + 0x119);
    *(undefined4 *)((longlong)plVar4 + 0x154) = *(undefined4 *)(param_2 + 0x11c);
    *(undefined4 *)(plVar4 + 0x2b) = *(undefined4 *)(param_2 + 0x120);
    *(undefined4 *)((longlong)plVar4 + 0x15c) = *(undefined4 *)(param_2 + 0x124);
    *(undefined4 *)(plVar4 + 0x2c) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)((longlong)plVar4 + 0x164) = *(undefined4 *)(param_2 + 300);
    plVar4[0x2d] = *(longlong *)(param_2 + 0x130);
    *(undefined4 *)(plVar4 + 0x2e) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)((longlong)plVar4 + 0x174) = *(undefined4 *)(param_2 + 0x13c);
    *(undefined4 *)(plVar4 + 0x2f) = *(undefined4 *)(param_2 + 0x140);
    *(undefined4 *)((longlong)plVar4 + 0x17c) = *(undefined4 *)(param_2 + 0x144);
    *(undefined4 *)(plVar4 + 0x30) = *(undefined4 *)(param_2 + 0x148);
    *(undefined4 *)((longlong)plVar4 + 0x184) = *(undefined4 *)(param_2 + 0x14c);
    *(undefined1 *)(plVar4 + 0x31) = *(undefined1 *)(param_2 + 0x150);
    *(undefined4 *)((longlong)plVar4 + 0x18c) = *(undefined4 *)(param_2 + 0x154);
    *(undefined1 *)(plVar4 + 0x32) = *(undefined1 *)(param_2 + 0x158);
    *(undefined1 *)((longlong)plVar4 + 0x191) = *(undefined1 *)(param_2 + 0x159);
    *(undefined1 *)((longlong)plVar4 + 0x192) = *(undefined1 *)(param_2 + 0x15a);
    *(undefined1 *)((longlong)plVar4 + 0x193) = *(undefined1 *)(param_2 + 0x15b);
    FUN_142673b70(plVar4,param_3);
  }
  else if (iVar1 == 4) {
    plVar2 = (longlong *)FUN_14261b0a0(0x260);
    if (plVar2 != (longlong *)0x0) {
      FUN_1425f9970(plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x30));
      *plVar2 = (longlong)&PTR_FUN_145131bc8;
      FUN_142619420(plVar2 + 0x2c);
      plVar2[0x46] = 0;
      plVar2[0x2c] = (longlong)&PTR__scalar_deleting_destructor__145131b18;
      plVar2[0x47] = 0;
      *(undefined4 *)(plVar2 + 0x48) = 0xffffffff;
      *(undefined4 *)((longlong)plVar2 + 0x244) = 0;
      *(undefined4 *)(plVar2 + 0x49) = 1;
      *(undefined8 *)((longlong)plVar2 + 0x24c) = 1;
      plVar4 = plVar2;
    }
    FDynamicTrailsEmitterReplayData::operator=(plVar4 + 0x2c,param_2);
    *(undefined4 *)(plVar4 + 0x4a) = *(undefined4 *)(param_2 + 0xf0);
    (**(code **)(*plVar4 + 0x80))(plVar4,param_3);
  }
  else if (iVar1 == 5) {
    plVar2 = (longlong *)FUN_14261b0a0(0x250);
    if (plVar2 != (longlong *)0x0) {
      FUN_1425f9970(plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x30));
      *plVar2 = (longlong)&PTR_FUN_145131c68;
      FUN_142619420(plVar2 + 0x2c);
      plVar2[0x46] = 0;
      plVar2[0x2c] = (longlong)&PTR__scalar_deleting_destructor__145131b08;
      plVar2[0x47] = 0;
      *(undefined4 *)(plVar2 + 0x48) = 0xffffffff;
      *(undefined4 *)((longlong)plVar2 + 0x244) = 0;
      *(undefined4 *)(plVar2 + 0x49) = 1;
      *(undefined4 *)((longlong)plVar2 + 0x24c) = 1;
      plVar4 = plVar2;
    }
    FDynamicTrailsEmitterReplayData::operator=(plVar4 + 0x2c,param_2);
    (**(code **)(*plVar4 + 0x80))(plVar4,param_3);
  }
  return plVar4;
}



// FUNCTION 142600a50 FUN_142600a50 body=67 status=ok
// SIG undefined FUN_142600a50(void)

undefined8 FUN_142600a50(void)

{
  LowLevelFatalErrorHandler("Unknown",0x379,L"UParticleEmitter::CreateInstance is pure virtual");
  FDebug::AssertFailed
            (&DAT_14512c28e,"Unknown",0x379,L"UParticleEmitter::CreateInstance is pure virtual");
  return 0;
}



// FUNCTION 142600aa0 FUN_142600aa0 body=94 status=ok
// SIG undefined FUN_142600aa0(void)

longlong * FUN_142600aa0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  (**(code **)(*param_1 + 0x2c0))();
  lVar1 = operator_new(0x330);
  if (lVar1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)FUN_1425f9a70(lVar1);
  }
  (**(code **)(*plVar2 + 8))(plVar2,param_2,param_3);
  return plVar2;
}



// FUNCTION 142600b00 FUN_142600b00 body=272 status=ok
// SIG undefined FUN_142600b00(void)

longlong * FUN_142600b00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (((*(byte *)(param_1 + 0xa8) & 2) == 0) && (*(int *)(param_1 + 0x48) != 0)) {
    if (*(char *)(param_1 + 0x35) == '\0') {
LAB_142600b70:
      if (*(int *)(param_1 + 0x48) < 1) {
        lVar1 = 0;
      }
      else {
        lVar1 = **(longlong **)(param_1 + 0x40);
      }
      plVar2 = *(longlong **)(lVar1 + 0x48);
      if (plVar2 == (longlong *)0x0) {
        lVar1 = operator_new(0x1f0);
        if (lVar1 == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = (longlong *)FUN_14261a1c0(lVar1);
        }
        (**(code **)(*plVar2 + 8))(plVar2,param_1,param_2);
      }
      else {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x390))(plVar2,param_1,param_2);
      }
      if (plVar2 != (longlong *)0x0) {
        *(undefined4 *)(plVar2 + 4) = 0;
        plVar2[5] = **(longlong **)(param_1 + 0x40);
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      return plVar2;
    }
    if (*(char *)(param_1 + 0x35) != '\x02') {
      lVar1 = *(longlong *)(param_2 + 0x120);
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0(param_2);
      }
      if (*DAT_146b04f58 <= 1.0 / *(float *)(lVar1 + 0x7b0)) goto LAB_142600b70;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142600c10 FUN_142600c10 body=226 status=ok
// SIG undefined FUN_142600c10(void)

longlong FUN_142600c10(longlong *param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x9b0))();
  if (iVar2 == -1) {
    return 0;
  }
  if (param_3 != 0) {
    FUN_14260f8a0(param_1,iVar2,param_3);
  }
  lVar3 = (**(code **)(*param_1 + 0x9a8))(param_1,param_2);
  if (lVar3 != 0) {
    lVar4 = FUN_1429ba110();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar4 = lVar3;
    if (bVar1) goto LAB_142600cb5;
  }
  lVar4 = 0;
LAB_142600cb5:
  if ((lVar3 != 0) && (lVar4 == 0)) {
    lVar4 = UMaterialInstanceDynamic::Create(lVar3,param_1);
    FUN_14260f8a0(param_1,iVar2,lVar4);
  }
  return lVar4;
}



// FUNCTION 142600d00 FUN_142600d00 body=159 status=ok
// SIG undefined FUN_142600d00(void)

void FUN_142600d00(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142616380(param_1,1);
  if (DAT_146534340 == '\0') {
    lVar2 = 0;
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x6f0);
  }
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xbc) & 2) != 0)) {
    *(undefined1 *)(param_1 + 0x38) = 0;
    lVar2 = *(longlong *)(param_1 + 0x118);
    if (lVar2 != 0) {
      lVar3 = AGPingUsable::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined1 *)(lVar2 + 0x30) = 0;
      }
    }
  }
  FUN_142387f70(param_1);
  return;
}



// FUNCTION 142600da0 FUN_142600da0 body=332 status=ok
// SIG undefined FUN_142600da0(void)

undefined8 * FUN_142600da0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  
  plVar6 = (longlong *)0x0;
  iVar8 = 0;
  if (param_2 != 0) {
    iVar8 = *(int *)(param_2 + 0x28);
  }
  pDVar2 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar3 = TlsGetValue(*pDVar2);
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)operator_new(0x18);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = 0;
      plVar3[1] = 0;
      *(undefined4 *)(plVar3 + 2) = 0;
      plVar6 = plVar3;
    }
    TlsSetValue(*pDVar2,plVar6);
    plVar3 = plVar6;
  }
  plVar6 = (longlong *)plVar3[1];
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)*plVar3;
    if (plVar6 == (longlong *)0x0) {
      lVar4 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar2 + 2);
      plVar3[1] = lVar4;
      if (lVar4 == 0) {
        puVar5 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar3[1] = (longlong)puVar5;
        lVar4 = 0x1f;
        do {
          puVar1 = puVar5 + 0x20;
          *puVar5 = puVar1;
          lVar4 = lVar4 + -1;
          puVar5 = puVar1;
        } while (lVar4 != 0);
        *puVar1 = 0;
      }
      plVar6 = (longlong *)plVar3[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar3 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar3[1] = (longlong)plVar6;
      *(undefined4 *)(plVar3 + 2) = 0x20;
      *plVar3 = 0;
    }
  }
  else {
    iVar7 = (int)plVar3[2];
  }
  plVar3[1] = *plVar6;
  *(int *)(plVar3 + 2) = iVar7 + -1;
  *plVar6 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar6 + 1) = 0xff;
  *(int *)((longlong)plVar6 + 0xc) = iVar8 + 1;
  *plVar6 = (longlong)&PTR_FUN_145135478;
  *(undefined1 *)(plVar6 + 4) = 0;
  plVar6[5] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 142600ef0 FUN_142600ef0 body=134 status=ok
// SIG undefined FUN_142600ef0(void)

void FUN_142600ef0(LARGE_INTEGER param_1)

{
  byte bVar1;
  char cVar2;
  LARGE_INTEGER local_res8 [4];
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(local_res8);
  bVar1 = *(byte *)(param_1.QuadPart + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1.QuadPart + 0x71b);
  }
  FUN_142602d20(param_1.QuadPart);
  cVar2 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1.QuadPart);
  if ((cVar2 == '\0') &&
     (FUN_142600fa0(param_1.QuadPart), (*(byte *)(param_1.QuadPart + 0x718) & 0x10) != 0)) {
    local_res8[0] = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              ((longlong *)(param_1.QuadPart + 0x108),local_res8);
  }
  return;
}



// FUNCTION 142600fa0 FUN_142600fa0 body=303 status=ok
// SIG undefined FUN_142600fa0(void)

void FUN_142600fa0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 local_18 [16];
  
  lVar3 = param_1[0x24];
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  FUN_1424de8e0(local_18,lVar3,0,0,*(byte *)((longlong)param_1 + 0x719) >> 5 & 1);
  cVar2 = UObjectBaseUtility::IsTemplate(param_1);
  if (cVar2 != '\x01') {
    if ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) {
      TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(&DAT_146534358,param_1,0);
    }
    *(byte *)(param_1 + 0xe3) = *(byte *)(param_1 + 0xe3) | 0x12;
    bVar1 = false;
    *(uint *)(param_1 + 0x135) = *(uint *)(param_1 + 0x135) | 1;
    uVar5 = 0;
    uVar6 = uVar5;
    if (0 < (int)param_1[0x125]) {
      do {
        lVar3 = *(longlong *)(uVar6 + param_1[0x124]);
        if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xf0) & 2) != 0)) {
          *(uint *)(lVar3 + 0x1e8) = *(uint *)(lVar3 + 0x1e8) | 1;
          bVar1 = true;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar6 = uVar6 + 8;
      } while ((int)uVar4 < (int)param_1[0x125]);
      if (bVar1) {
        FUN_142616380(param_1,1,CONCAT71((int7)(uVar6 >> 8),1));
        if (param_1[200] != 0) {
          FUN_142681f80(param_1[200],0);
        }
        FUN_1423424e0(param_1);
      }
    }
    (**(code **)(*param_1 + 0x358))(param_1,1);
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0x36c) = *(undefined4 *)(lVar3 + 0x790);
  }
  FUN_1424e13e0(local_18);
  return;
}



// FUNCTION 1426010d0 FUN_1426010d0 body=68 status=ok
// SIG undefined FUN_1426010d0(void)

void FUN_1426010d0(longlong param_1)

{
  FUN_142616380(param_1,1);
  if (*(char *)(param_1 + 0x718) < '\0') {
    FUN_14260b860(param_1,0);
  }
  if ((*(byte *)(param_1 + 0xb8) & 2) != 0) {
    FUN_142388990(param_1);
    return;
  }
  return;
}



// FUNCTION 142601120 FUN_142601120 body=716 status=ok
// SIG undefined FUN_142601120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_142601120(longlong param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  int local_c0;
  undefined1 local_b8 [16];
  float local_a8 [24];
  float *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar7 = *(longlong *)(param_1 + 0x6f0);
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x78) < 2)) || (*(char *)(lVar7 + 0x68) == '\x01')) {
    return 0;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if ((lVar7 == 0) && (lVar7 = FUN_1423407b0(), lVar7 == 0)) {
    return 0;
  }
  local_48 = (float *)0x0;
  local_40 = 0;
  plVar8 = (longlong *)UWorld::GetPlayerControllerIterator(lVar7,&local_c8);
  if (((int)plVar8[1] < 0) || (*(int *)(*plVar8 + 8) <= (int)plVar8[1])) {
    iVar6 = *(int *)(lVar7 + 0x128);
    if (iVar6 != 0) {
      if (local_40._4_4_ < (int)local_40 + iVar6) {
        FUN_141ddd6a0(local_a8);
      }
      pfVar10 = local_a8;
      if (local_48 != (float *)0x0) {
        pfVar10 = local_48;
      }
      _guard_xfg_dispatch_icall_nop
                (pfVar10 + (longlong)(int)local_40 * 3,*(void **)(lVar7 + 0x120),
                 (longlong)iVar6 * 0xc);
      iVar6 = (int)local_40 + iVar6;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      goto LAB_1426012ce;
    }
  }
  else {
    UWorld::GetPlayerControllerIterator(lVar7,&local_c8);
    for (; (-1 < local_c0 && (local_c0 < (int)local_c8[1])); local_c0 = local_c0 + 1) {
      plVar8 = (longlong *)FWeakObjectPtr::Get(*local_c8 + (longlong)local_c0 * 8);
      if ((plVar8 != (longlong *)0x0) &&
         (((*(uint *)((longlong)plVar8 + 0x4cc) >> 1 & 1) != 0 &&
          (cVar5 = (**(code **)(*plVar8 + 0x768))(plVar8), uVar4 = local_40, cVar5 != '\0')))) {
        lVar7 = (longlong)(int)local_40;
        iVar6 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar6);
        if (local_40._4_4_ < iVar6) {
          TArray<FVector,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                    (local_a8,uVar4 & 0xffffffff);
        }
        pfVar10 = local_a8;
        if (local_48 != (float *)0x0) {
          pfVar10 = local_48;
        }
        (**(code **)(*plVar8 + 0x7a8))(plVar8,pfVar10 + lVar7 * 3,local_b8);
      }
    }
  }
  iVar6 = (int)local_40;
LAB_1426012ce:
  if (iVar6 == 0) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = 4.3980465e+12;
  }
  pfVar10 = local_a8;
  if (local_48 != (float *)0x0) {
    pfVar10 = local_48;
  }
  pfVar3 = pfVar10 + (longlong)iVar6 * 3;
  if (pfVar10 != pfVar3) {
    fVar13 = fVar12;
    do {
      pfVar1 = pfVar10 + 1;
      fVar12 = *pfVar10;
      pfVar2 = pfVar10 + 2;
      pfVar10 = pfVar10 + 3;
      fVar12 = (*pfVar1 - param_2[1]) * (*pfVar1 - param_2[1]) +
               (fVar12 - *param_2) * (fVar12 - *param_2) +
               (*pfVar2 - param_2[2]) * (*pfVar2 - param_2[2]);
      if (fVar13 <= fVar12) {
        fVar12 = fVar13;
      }
      fVar13 = fVar12;
    } while (pfVar10 != pfVar3);
  }
  iVar9 = 1;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x78);
  iVar11 = iVar6 + -1;
  if (1 < iVar6) {
    lVar7 = 1;
    pfVar10 = *(float **)(*(longlong *)(param_1 + 0x6f0) + 0x70);
    do {
      pfVar10 = pfVar10 + 1;
      if (fVar12 < *pfVar10 * *pfVar10) {
        iVar11 = iVar9 + -1;
        break;
      }
      iVar9 = iVar9 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  if (local_48 != (float *)0x0) {
    FMemory::Free(local_48);
  }
  return iVar11;
}



// FUNCTION 1426013f0 FUN_1426013f0 body=524 status=ok
// SIG undefined FUN_1426013f0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1426013f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined4 local_res8 [2];
  int local_res10;
  int local_res18;
  int local_res20;
  longlong local_98 [11];
  
  iVar7 = 0;
  iVar9 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x44);
  plVar1 = (longlong *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x328) = 0;
  local_res10 = 1;
  if (iVar5 != 0) {
    local_res10 = iVar5;
  }
  iVar5 = 0;
  if (*(int *)(param_1 + 0x32c) != *(int *)(param_1 + 0x128)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
    iVar5 = *(int *)(param_1 + 0x328);
  }
  iVar2 = *(int *)(param_1 + 0x128);
  iVar3 = iVar5 + iVar2;
  *(int *)(param_1 + 0x328) = iVar3;
  if (*(int *)(param_1 + 0x32c) < iVar3) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(*plVar1 + (longlong)iVar5 * 4),0,(longlong)iVar2 << 2);
  uVar4 = 0;
  uVar8 = uVar4;
  uVar10 = uVar4;
  if (*(int *)(param_1 + 0x128) < 1) {
    *(undefined8 *)(param_1 + 0x318) = 0;
  }
  else {
    do {
      local_res8[0] = *(undefined4 *)(param_1 + 0x30);
      local_98[0] = 0;
      local_98[9] = 0;
      local_98[8] = 0;
      local_98[7] = 0;
      local_98[6] = 0;
      local_98[5] = 0;
      local_98[4] = 0;
      local_98[3] = 0;
      local_98[2] = 0;
      local_98[1] = 0;
      local_res18 = iVar9;
      local_res20 = iVar7;
      (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x3c0))
                (*(longlong **)(param_1 + 0x1f0),param_1,
                 (longlong)
                 (int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x108) + uVar8) *
                      *(int *)(param_1 + 0x124)) + *(longlong *)(param_1 + 0x100),local_res8,
                 local_98,local_98 + 9,local_98 + 8,local_98 + 7,local_98 + 6,local_98 + 5,
                 local_98 + 4,local_98 + 3,local_98 + 2,local_98 + 1);
      *(undefined4 *)(uVar10 + *plVar1) = *(undefined4 *)(local_98[0] + 0x58);
      iVar5 = *(int *)(local_98[0] + 0x58);
      if (0 < iVar5) {
        iVar9 = iVar9 + (iVar5 + 2) * local_res10;
        iVar7 = 0;
        if (local_res18 < 1) {
          iVar7 = -4;
        }
        iVar7 = iVar7 + (iVar5 + 4) * local_res10 + local_res20;
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
      uVar8 = uVar8 + 2;
      uVar10 = uVar10 + 4;
    } while ((int)uVar6 < *(int *)(param_1 + 0x128));
    *(int *)(param_1 + 0x318) = iVar9;
    *(int *)(param_1 + 0x31c) = iVar7;
  }
  return;
}



// FUNCTION 142601600 FUN_142601600 body=1063 status=ok
// SIG undefined FUN_142601600(void)

/* WARNING: Removing unreachable block (ram,0x0001426018f7) */
/* WARNING: Removing unreachable block (ram,0x000142601905) */
/* WARNING: Removing unreachable block (ram,0x000142601914) */

ulonglong FUN_142601600(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  longlong lVar9;
  char cVar10;
  DWORD DVar11;
  longlong lVar12;
  DWORD *pDVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  bool bVar22;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  longlong local_98 [2];
  LARGE_INTEGER local_88;
  longlong local_80;
  
  lVar15 = DAT_146b05100;
  cVar10 = FUN_1415ad720(&DAT_1468e2448);
  lVar19 = 4;
  if (((cVar10 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar11 = GetCurrentThreadId(), lVar12 = lVar19, DVar11 == DAT_1468c21c0)) {
    lVar12 = 0;
  }
  lVar9 = DAT_146b05118;
  fVar3 = *(float *)(lVar12 + lVar15);
  cVar10 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar10 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar11 = GetCurrentThreadId(), lVar15 = lVar19, DVar11 == DAT_1468c21c0)) {
    lVar15 = 0;
  }
  lVar12 = DAT_146b05130;
  iVar5 = *(int *)(lVar15 + lVar9);
  cVar10 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar10 != '\0') || (DAT_1468c21ae == '\0')) ||
     (DVar11 = GetCurrentThreadId(), DVar11 == DAT_1468c21c0)) {
    lVar19 = 0;
  }
  iVar6 = *(int *)(lVar19 + lVar12);
  QueryPerformanceCounter(&local_res18);
  dVar8 = (double)local_res18.QuadPart * DAT_1468b02f8;
  do {
    plVar20 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
    while( true ) {
      if (**(longlong **)(param_1 + 8) == 0) {
        LOCK();
        bVar22 = *(int *)(param_1 + 0x40) == 0;
        if (bVar22) {
          *(int *)(param_1 + 0x40) = 0;
        }
        UNLOCK();
        if ((!bVar22) ||
           (QueryPerformanceCounter(&local_res20),
           dVar8 + 16777216.0 + (double)fVar3 * 0.001 <=
           (double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0)) {
          uVar17 = 0;
          LOCK();
          uVar4 = *(uint *)(param_1 + 0x40);
          if (uVar4 == 0) {
            *(uint *)(param_1 + 0x40) = 0;
          }
          else {
            uVar17 = (ulonglong)uVar4;
          }
          UNLOCK();
          if (uVar4 != 0) {
            uVar17 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))();
          }
          return uVar17;
        }
      }
      lVar15 = **(longlong **)(param_1 + 8);
      plVar21 = plVar20;
      if (lVar15 != 0) {
        plVar21 = *(longlong **)(lVar15 + 8);
        uVar7 = *(undefined8 *)(param_1 + 8);
        *(longlong *)(param_1 + 8) = lVar15;
        *(undefined8 *)(lVar15 + 8) = 0;
        FMemory::operator_delete(uVar7,0x10);
      }
      if (plVar21 != (longlong *)0x0) break;
      if ((iVar5 == 0) ||
         (iVar18 = (int)plVar14, plVar14 = (longlong *)(ulonglong)(iVar18 + 1), iVar18 != iVar6)) {
        FUN_1416b0750();
      }
      else {
        FUN_1416b1760(0);
        plVar14 = plVar20;
      }
    }
    pDVar13 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar14 = TlsGetValue(*pDVar13);
    if (plVar14 == (longlong *)0x0) {
      plVar14 = (longlong *)operator_new(0x18);
      if (plVar14 != (longlong *)0x0) {
        *plVar14 = 0;
        plVar14[1] = 0;
        *(undefined4 *)(plVar14 + 2) = 0;
        plVar20 = plVar14;
      }
      TlsSetValue(*pDVar13,plVar20);
      plVar14 = plVar20;
    }
    plVar20 = (longlong *)plVar14[1];
    if (plVar20 == (longlong *)0x0) {
      if (*plVar14 == 0) {
        lVar15 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar13 + 2);
        plVar14[1] = lVar15;
        if (lVar15 == 0) {
          puVar16 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar14[1] = (longlong)puVar16;
          lVar15 = 0x1f;
          do {
            puVar2 = puVar16 + 0x20;
            *puVar16 = puVar2;
            lVar15 = lVar15 + -1;
            puVar16 = puVar2;
          } while (lVar15 != 0);
          *puVar2 = 0;
        }
      }
      else {
        plVar14[1] = *plVar14;
        *plVar14 = 0;
      }
      plVar20 = (longlong *)plVar14[1];
      iVar18 = 0x20;
      *(undefined4 *)(plVar14 + 2) = 0x20;
    }
    else {
      iVar18 = (int)plVar14[2];
    }
    plVar14[1] = *plVar20;
    *(int *)(plVar14 + 2) = iVar18 + -1;
    plVar14 = (longlong *)FUN_1415914c0(local_98);
    local_80 = *plVar14;
    *plVar14 = 0;
    *plVar20 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar20 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar20 + 0xc) = 1;
    *plVar20 = (longlong)&PTR_FUN_145135468;
    *(undefined1 *)(plVar20 + 3) = 0;
    plVar20[4] = local_80;
    if (local_98[0] != 0) {
      LOCK();
      piVar1 = (int *)(local_98[0] + 0x48);
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar20[2] = (longlong)plVar21;
    lVar15 = plVar20[4];
    piVar1 = (int *)(lVar15 + 0x48);
    if (lVar15 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1426102f0(plVar20,0,0xff,1);
    if (lVar15 != 0) {
      LOCK();
      iVar18 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        FGraphEvent::Recycle(lVar15);
      }
    }
    QueryPerformanceCounter(&local_88);
    dVar8 = (double)local_88.QuadPart * DAT_1468b02f8;
    LOCK();
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
    UNLOCK();
  } while( true );
}



// FUNCTION 142601a30 DoBufferFill body=89 status=ok
// SIG undefined DoBufferFill(void)

void FDynamicTrailsEmitterData::DoBufferFill(longlong *param_1,longlong param_2)

{
  if ((((0 < *(int *)(param_2 + 0x88)) && (0 < *(int *)(param_2 + 0x98))) &&
      (*(longlong *)(param_2 + 0x90) != 0)) && (*(longlong *)(param_2 + 0xa0) != 0)) {
    (**(code **)(*param_1 + 0x88))();
    (**(code **)(*param_1 + 0x90))(param_1,param_2);
  }
  return;
}



// FUNCTION 142601a90 FUN_142601a90 body=128 status=ok
// SIG undefined FUN_142601a90(void)

undefined8 FUN_142601a90(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x40);
  plVar1 = plVar5 + *(int *)(param_1 + 0x48);
  do {
    if (plVar5 == plVar1) {
      return 0;
    }
    lVar2 = *plVar5;
    if ((lVar2 != 0) && (param_2 < *(int *)(lVar2 + 0x48))) {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x40) + (longlong)param_2 * 8);
      if ((lVar2 != 0) &&
         ((plVar3 = *(longlong **)(lVar2 + 0x48), plVar3 != (longlong *)0x0 &&
          (cVar4 = (**(code **)(*plVar3 + 0x3b8))(), cVar4 != '\0')))) {
        return 1;
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 142601b10 Empty body=104 status=ok
// SIG undefined Empty(void)

void TArray<FParticleEventCollideData,FDefaultAllocator>::Empty(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xf;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 142601b80 Empty body=104 status=ok
// SIG undefined Empty(void)

void TArray<FParticleEventDeathData,FDefaultAllocator>::Empty(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142601bf0 Empty body=104 status=ok
// SIG undefined Empty(void)

void TArray<FMorAICharacterZoneRosterEntry,TSizedDefaultAllocator<32>_>::Empty
               (longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0xc;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 142601c60 FUN_142601c60 body=59 status=ok
// SIG undefined FUN_142601c60(void)

void FUN_142601c60(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x4b8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x818))(plVar1,param_1);
  }
  FUN_14222a250(param_1,param_2);
  return;
}



// FUNCTION 142601ca0 FUN_142601ca0 body=436 status=ok
// SIG undefined FUN_142601ca0(void)

void FUN_142601ca0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined7 uVar9;
  undefined1 local_18 [16];
  
  uVar4 = 0;
  plVar8 = (longlong *)param_1[0x124];
  uVar6 = (longlong)(int)param_1[0x125] & 0x1fffffffffffffff;
  if (plVar8 + (int)param_1[0x125] < plVar8) {
    uVar6 = uVar4;
  }
  uVar7 = uVar4;
  if (uVar6 != 0) {
    do {
      if ((longlong *)*plVar8 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar8 + 0x210))();
      }
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
  }
  lVar3 = param_1[0x24];
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0(param_1);
  }
  uVar9 = 0;
  FUN_1424de8e0(local_18,lVar3,0,0,*(byte *)((longlong)param_1 + 0x719) >> 5 & 1);
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 != '\x01') {
    if ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) {
      uVar9 = 0;
      TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(&DAT_146534358,param_1);
    }
    *(byte *)(param_1 + 0xe3) = *(byte *)(param_1 + 0xe3) | 0x12;
    bVar1 = false;
    *(uint *)(param_1 + 0x135) = *(uint *)(param_1 + 0x135) | 1;
    uVar6 = uVar4;
    if (0 < (int)param_1[0x125]) {
      do {
        lVar3 = *(longlong *)(uVar4 + param_1[0x124]);
        if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0xf0) & 2) != 0)) {
          *(uint *)(lVar3 + 0x1e8) = *(uint *)(lVar3 + 0x1e8) | 1;
          bVar1 = true;
        }
        uVar5 = (int)uVar6 + 1;
        uVar4 = uVar4 + 8;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < (int)param_1[0x125]);
      if (bVar1) {
        FUN_142616380(param_1,1,CONCAT71(uVar9,1));
        if (param_1[200] != 0) {
          FUN_142681f80(param_1[200],0);
        }
        FUN_1423424e0(param_1);
      }
    }
    (**(code **)(*param_1 + 0x358))(param_1,1);
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    *(undefined4 *)((longlong)param_1 + 0x36c) = *(undefined4 *)(lVar3 + 0x790);
  }
  FUN_1424e13e0(local_18);
  return;
}



// FUNCTION 142601e60 FUN_142601e60 body=472 status=ok
// SIG undefined FUN_142601e60(void)

ulonglong FUN_142601e60(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,undefined1 param_6,longlong param_7,undefined1 param_8)

{
  longlong lVar1;
  byte bVar2;
  longlong *in_RAX;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  
  if ((((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) &&
     (in_RAX = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x18))(), (char)in_RAX != '\0')) {
    plVar5 = (longlong *)0x0;
    if ((int)param_1[1] != 0) {
      plVar5 = (longlong *)*param_1;
    }
    lVar1 = *plVar5;
    uVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,param_7);
    uVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,param_5);
    bVar2 = (**(code **)(lVar1 + 0x40))(plVar5,param_2,param_3,param_4,uVar4,param_6,uVar3,param_8);
    if (*(int *)(param_5 + 0x40) != 0) {
      plVar5 = *(longlong **)(param_5 + 0x30);
      if (*(longlong **)(param_5 + 0x30) == (longlong *)0x0) {
        plVar5 = (longlong *)(param_5 + 0x10);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (*(longlong *)(param_5 + 0x30) != 0) {
      FMemory::Free();
    }
    if (*(int *)(param_7 + 0x40) != 0) {
      plVar5 = *(longlong **)(param_7 + 0x30);
      if (*(longlong **)(param_7 + 0x30) == (longlong *)0x0) {
        plVar5 = (longlong *)(param_7 + 0x10);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (*(longlong *)(param_7 + 0x30) != 0) {
      FMemory::Free();
    }
    return (ulonglong)bVar2;
  }
  if (*(int *)(param_5 + 0x40) != 0) {
    in_RAX = *(longlong **)(param_5 + 0x30);
    plVar5 = in_RAX;
    if (in_RAX == (longlong *)0x0) {
      plVar5 = (longlong *)(param_5 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      in_RAX = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_5 + 0x30) != 0) {
    in_RAX = (longlong *)FMemory::Free();
  }
  if (*(int *)(param_7 + 0x40) != 0) {
    in_RAX = *(longlong **)(param_7 + 0x30);
    plVar5 = in_RAX;
    if (in_RAX == (longlong *)0x0) {
      plVar5 = (longlong *)(param_7 + 0x10);
    }
    if (plVar5 != (longlong *)0x0) {
      in_RAX = (longlong *)(**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_7 + 0x30) != 0) {
    in_RAX = (longlong *)FMemory::Free();
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142602040 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FSkeletalMeshObjectGPUSkin::ReleaseResources'::`2'::WaitRHIThreadFenceForDynamicDataName,<lambda_0cb6192001671644349c60973fa33477>_>_>
     ::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  longlong *plVar6;
  
  uVar3 = FBaseGraphTask::GetSmallTaskAllocator();
  FUN_1425fbce0(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_145135478;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar6 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar6;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar6 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar6;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 142602130 ExecuteTask body=292 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FDispatchBatchedAsyncTasks>::ExecuteTask(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_18 [2];
  
  plVar5 = (longlong *)0x0;
  local_18[0] = 0;
  local_18[1] = 0;
  FUN_141591a60(param_1[2],local_18,0xff);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[2] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_145135458;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
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



// FUNCTION 142602260 ExecuteTask body=254 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FetchVisibilityForPrimitivesTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_1425ff710(param_1[2]);
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_141591a60(param_1[4],param_2,param_3);
  *param_1 = &PTR_FUN_145135468;
  if (param_1[4] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[4] + 0x48);
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



// FUNCTION 142602360 FUN_142602360 body=1638 status=ok
// SIG undefined FUN_142602360(void)

ulonglong FUN_142602360(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong in_RAX;
  longlong *plVar5;
  undefined8 *puVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  size_t _Size;
  void *_Dst;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 local_res8 [2];
  undefined4 local_res18 [2];
  longlong local_res20;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [2];
  
  if ((((0 < *(int *)(param_1 + 0x128)) && (in_RAX = FUN_142623860(), (char)in_RAX != '\0')) &&
      (in_RAX = *(ulonglong *)(param_1 + 0x28), in_RAX != 0)) &&
     ((*(byte *)(in_RAX + 0x2c) & 1) != 0)) {
    *(undefined4 *)(param_2 + 8) = 3;
    plVar5 = *(longlong **)(param_1 + 0x1b0);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar5 + 0x2f0))(plVar5,2), cVar2 == '\0')) {
      plVar5 = (longlong *)UMaterial::GetDefaultMaterial(0);
    }
    *(longlong **)(param_1 + 0x1b0) = plVar5;
    *(longlong **)(param_2 + 0x60) = plVar5;
    *(undefined2 *)(param_2 + 0xb4) = 0;
    FUN_1426013f0(param_1);
    uVar11 = 0;
    *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 0x58);
    iVar3 = *(int *)(param_1 + 0x328);
    iVar8 = 0;
    *(undefined4 *)(param_2 + 0xe8) = 0;
    if (*(int *)(param_2 + 0xec) != iVar3) {
      TArray<float,FDefaultAllocator>::ResizeTo(param_2 + 0xe0);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
              (param_2 + 0xe0,*(undefined4 *)(param_1 + 0x328));
    uVar9 = uVar11;
    uVar10 = uVar11;
    if (0 < *(int *)(param_1 + 0x328)) {
      do {
        uVar12 = (int)uVar10 + 1;
        *(undefined4 *)(uVar9 + *(longlong *)(param_2 + 0xe0)) =
             *(undefined4 *)(uVar9 + *(longlong *)(param_1 + 800));
        uVar9 = uVar9 + 4;
        uVar10 = (ulonglong)uVar12;
      } while ((int)uVar12 < *(int *)(param_1 + 0x328));
    }
    local_res8[0] = 0;
    uVar9 = param_2 + 0xf4;
    (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x3c8))
              (*(longlong **)(param_1 + 0x1f0),param_1,0,param_1 + 0x30,uVar9,param_2 + 0xf8,
               param_2 + 0xfc,param_2 + 0x100,param_2 + 0x104,param_2 + 0x108,local_res8,
               param_2 + 0x10c,param_2 + 0x110);
    *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_1 + 0x318);
    *(bool *)(param_2 + 0x117) = *(longlong *)(param_1 + 0x1f8) != 0;
    *(bool *)(param_2 + 0x118) = *(longlong *)(param_1 + 0x200) != 0;
    if (*(longlong *)(param_1 + 0x208) == 0) {
      *(undefined2 *)(param_2 + 0x114) = 0;
      bVar7 = 0;
    }
    else {
      bVar7 = *(byte *)(*(longlong *)(param_1 + 0x208) + 0x38);
      *(undefined1 *)(param_2 + 0x115) = 0;
      *(byte *)(param_2 + 0x114) = bVar7 & 1;
      bVar7 = *(byte *)(*(longlong *)(param_1 + 0x208) + 0x128) & 1;
    }
    *(byte *)(param_2 + 0x116) = bVar7;
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x1f0) + 0x44);
    iVar4 = 1;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = 1;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    *(int *)(param_2 + 0x11c) = iVar3;
    *(undefined4 *)(param_2 + 0x148) = *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 0x3c);
    *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 0x40);
    *(undefined1 *)(param_2 + 0x150) = *(undefined1 *)(*(longlong *)(param_1 + 0x1f0) + 0xa0);
    *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + 0x50);
    *(undefined8 *)(param_2 + 0x120) = 1;
    *(undefined4 *)(param_2 + 0x128) = 0x3f800000;
    *(undefined4 *)(param_2 + 300) = 0x3f800000;
    lVar1 = *(longlong *)(param_1 + 0x208);
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x38) & 1) != 0)) {
      iVar3 = 1;
      if (0 < *(int *)(lVar1 + 0x3c)) {
        iVar3 = *(int *)(lVar1 + 0x3c);
      }
      iVar4 = 1;
      if (0 < iVar3) {
        iVar4 = iVar3;
      }
      *(int *)(param_2 + 0x120) = iVar4;
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x208) + 0x178);
      iVar4 = 1;
      if (0 < iVar3) {
        iVar4 = iVar3;
      }
      *(int *)(param_2 + 0x124) = iVar4;
      uVar13 = FUN_1424116d0(*(longlong *)(param_1 + 0x208) + 0x140,*(undefined4 *)(param_1 + 0x13c)
                             ,0,0);
      *(undefined4 *)(param_2 + 300) = uVar13;
      uVar13 = FUN_1424116d0(*(longlong *)(param_1 + 0x208) + 0x98,*(undefined4 *)(param_1 + 0x13c),
                             *(undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_2 + 0x128) = uVar13;
      puVar6 = (undefined8 *)
               FUN_1424118e0(*(longlong *)(param_1 + 0x208) + 0xd8,local_48,
                             *(undefined4 *)(param_1 + 0x13c),0,uVar9 & 0xffffffff00000000,0);
      *(undefined8 *)(param_2 + 0x130) = *puVar6;
      *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(puVar6 + 1);
      *(undefined4 *)(param_2 + 0x13c) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x134);
      *(undefined4 *)(param_2 + 0x140) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 300);
      *(byte *)(param_2 + 0x119) = *(byte *)(*(longlong *)(param_1 + 0x208) + 0x17c) & 1;
      *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x138);
    }
    *(undefined4 *)(param_2 + 0xd4) = 0;
    uVar9 = uVar11;
    uVar10 = uVar11;
    if (0 < *(int *)(param_1 + 0x128)) {
      do {
        local_res18[0] = *(undefined4 *)(param_1 + 0x30);
        local_res20 = 0;
        local_48[0] = 0;
        local_50 = 0;
        local_58 = 0;
        local_60 = 0;
        local_68 = 0;
        local_70 = 0;
        local_78 = 0;
        local_80 = 0;
        local_88 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x3c0))
                  (*(longlong **)(param_1 + 0x1f0),param_1,
                   (longlong)
                   (int)((uint)*(ushort *)(*(longlong *)(param_1 + 0x108) + uVar9 * 2) *
                        *(int *)(param_1 + 0x124)) + *(longlong *)(param_1 + 0x100),local_res18,
                   &local_res20,local_48,&local_50,&local_58,&local_60,&local_68,&local_70,&local_78
                   ,&local_80,&local_88);
        iVar3 = *(int *)(local_res20 + 0x58);
        if (0 < iVar3) {
          iVar8 = *(int *)(param_2 + 0xd4);
          if (iVar8 == 0) {
            iVar8 = 2;
            *(undefined4 *)(param_2 + 0xd4) = 2;
            iVar3 = *(int *)(local_res20 + 0x58);
          }
          iVar8 = (iVar3 + 4) * *(int *)(param_2 + 0x11c) + iVar8;
          iVar3 = iVar8 + -4;
          if (0 < (longlong)uVar9) {
            iVar3 = iVar8;
          }
          *(int *)(param_2 + 0xd4) = iVar3;
        }
        uVar12 = (int)uVar10 + 1;
        uVar9 = uVar9 + 1;
        uVar10 = (ulonglong)uVar12;
      } while ((int)uVar12 < *(int *)(param_1 + 0x128));
      iVar8 = *(int *)(param_2 + 0xd4);
    }
    uVar13 = 4;
    if (iVar8 < 0x3a99) {
      uVar13 = 2;
    }
    *(undefined4 *)(param_2 + 0xd8) = uVar13;
    _Dst = *(void **)(param_2 + 0x28);
    if (0 < *(int *)(param_2 + 0xc)) {
      _Size = (size_t)*(int *)(param_1 + 0x124);
      uVar9 = uVar11;
      do {
        _guard_xfg_dispatch_icall_nop
                  (_Dst,(void *)((longlong)
                                 (int)((uint)*(ushort *)(uVar11 + *(longlong *)(param_1 + 0x108)) *
                                      (int)_Size) + *(longlong *)(param_1 + 0x100)),_Size);
        _Size = (size_t)*(int *)(param_1 + 0x124);
        uVar11 = uVar11 + 2;
        _Dst = (void *)((longlong)_Dst + _Size);
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
      } while ((int)uVar12 < *(int *)(param_2 + 0xc));
    }
    *(byte *)(param_2 + 0x158) = *(byte *)(*(longlong *)(param_1 + 0x1f0) + 0x118) & 1;
    *(byte *)(param_2 + 0x159) = (byte)(*(uint *)(*(longlong *)(param_1 + 0x1f0) + 0x118) >> 1) & 1;
    *(byte *)(param_2 + 0x15a) = (byte)(*(uint *)(*(longlong *)(param_1 + 0x1f0) + 0x118) >> 2) & 1;
    lVar1 = *(longlong *)(param_1 + 0x1f0);
    *(byte *)(param_2 + 0x15b) = (byte)(*(uint *)(lVar1 + 0x118) >> 3) & 1;
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1426029d0 FUN_1426029d0 body=843 status=ok
// SIG undefined FUN_1426029d0(void)

void FUN_1426029d0(longlong param_1,longlong param_2,int *param_3,char *param_4,char param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  cVar1 = *param_4;
  cVar4 = param_5 * '\x02';
  *param_4 = cVar1 + '\x01';
  iVar3 = *(int *)(param_2 + 0x100);
  lVar6 = (longlong)iVar3;
  iVar5 = *param_3;
  *(int *)(param_2 + 0x100) = iVar3 + 1;
  if (*(int *)(param_2 + 0x104) < iVar3 + 1) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_2,iVar3);
  }
  *(char *)(param_2 + lVar6 * 8) = cVar4;
  *(char *)(param_2 + 1 + lVar6 * 8) = (char)iVar5;
  *(undefined1 *)(param_2 + 2 + lVar6 * 8) = 4;
  *(char *)(param_2 + 3 + lVar6 * 8) = cVar1;
  *(undefined4 *)(param_2 + 4 + lVar6 * 8) = 0x1006c;
  *param_3 = *param_3 + 0x10;
  cVar1 = *param_4;
  *param_4 = cVar1 + '\x01';
  iVar3 = *(int *)(param_2 + 0x100);
  lVar6 = (longlong)iVar3;
  iVar5 = *param_3;
  *(int *)(param_2 + 0x100) = iVar3 + 1;
  if (*(int *)(param_2 + 0x104) < iVar3 + 1) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_2,iVar3);
  }
  *(char *)(param_2 + lVar6 * 8) = cVar4;
  *(char *)(param_2 + 1 + lVar6 * 8) = (char)iVar5;
  *(undefined1 *)(param_2 + 2 + lVar6 * 8) = 4;
  *(char *)(param_2 + 3 + lVar6 * 8) = cVar1;
  *(undefined4 *)(param_2 + 4 + lVar6 * 8) = 0x1006c;
  *param_3 = *param_3 + 0x10;
  cVar1 = *param_4;
  *param_4 = cVar1 + '\x01';
  iVar3 = *(int *)(param_2 + 0x100);
  lVar6 = (longlong)iVar3;
  iVar5 = *param_3;
  *(int *)(param_2 + 0x100) = iVar3 + 1;
  if (*(int *)(param_2 + 0x104) < iVar3 + 1) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_2,iVar3);
  }
  *(char *)(param_2 + lVar6 * 8) = cVar4;
  *(char *)(param_2 + 1 + lVar6 * 8) = (char)iVar5;
  *(undefined1 *)(param_2 + 2 + lVar6 * 8) = 4;
  *(char *)(param_2 + 3 + lVar6 * 8) = cVar1;
  *(undefined4 *)(param_2 + 4 + lVar6 * 8) = 0x1006c;
  *param_3 = *param_3 + 0x10;
  cVar1 = *param_4;
  *param_4 = cVar1 + '\x01';
  iVar3 = *(int *)(param_2 + 0x100);
  lVar6 = (longlong)iVar3;
  iVar5 = *param_3;
  *(int *)(param_2 + 0x100) = iVar3 + 1;
  if (*(int *)(param_2 + 0x104) < iVar3 + 1) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_2,iVar3);
  }
  *(char *)(param_2 + lVar6 * 8) = cVar4;
  *(char *)(param_2 + 1 + lVar6 * 8) = (char)iVar5;
  *(undefined1 *)(param_2 + 2 + lVar6 * 8) = 2;
  *(char *)(param_2 + 3 + lVar6 * 8) = cVar1;
  *(undefined4 *)(param_2 + 4 + lVar6 * 8) = 0x1006c;
  *param_3 = *param_3 + 0x10;
  cVar1 = *param_4;
  *param_4 = cVar1 + '\x01';
  iVar3 = *(int *)(param_2 + 0x100);
  lVar6 = (longlong)iVar3;
  iVar5 = *param_3;
  *(int *)(param_2 + 0x100) = iVar3 + 1;
  if (*(int *)(param_2 + 0x104) < iVar3 + 1) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_2,iVar3);
  }
  *(char *)(param_2 + lVar6 * 8) = cVar4;
  *(char *)(param_2 + 1 + lVar6 * 8) = (char)iVar5;
  *(undefined1 *)(param_2 + 2 + lVar6 * 8) = 4;
  *(char *)(param_2 + 3 + lVar6 * 8) = cVar1;
  *(undefined4 *)(param_2 + 4 + lVar6 * 8) = 0x1006c;
  *param_3 = *param_3 + 0x10;
  cVar1 = *param_4;
  *param_4 = cVar1 + '\x01';
  iVar3 = *(int *)(param_2 + 0x100);
  lVar6 = (longlong)iVar3;
  cVar2 = *(char *)(param_1 + 0x38);
  *(int *)(param_2 + 0x100) = iVar3 + 1;
  if (*(int *)(param_2 + 0x104) < iVar3 + 1) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_2,iVar3);
  }
  *(char *)(param_2 + 1 + lVar6 * 8) = param_5 << 4;
  *(undefined1 *)(param_2 + lVar6 * 8) = 1;
  *(undefined1 *)(param_2 + 2 + lVar6 * 8) = 4;
  *(undefined2 *)(param_2 + 6 + lVar6 * 8) = 1;
  *(char *)(param_2 + 3 + lVar6 * 8) = cVar1;
  *(ushort *)(param_2 + 4 + lVar6 * 8) = -(ushort)(cVar2 != '\0') & 0x10;
  cVar1 = *param_4;
  *param_4 = cVar1 + '\x01';
  iVar3 = *(int *)(param_2 + 0x100);
  lVar6 = (longlong)iVar3;
  iVar5 = *param_3;
  *(int *)(param_2 + 0x100) = iVar3 + 1;
  if (*(int *)(param_2 + 0x104) < iVar3 + 1) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_2,iVar3);
  }
  *(char *)(param_2 + lVar6 * 8) = cVar4;
  *(char *)(param_2 + 1 + lVar6 * 8) = (char)iVar5;
  *(undefined1 *)(param_2 + 2 + lVar6 * 8) = 3;
  *(char *)(param_2 + 3 + lVar6 * 8) = cVar1;
  *(undefined4 *)(param_2 + 4 + lVar6 * 8) = 0x1006c;
  *param_3 = *param_3 + 0xc;
  cVar1 = *param_4;
  *param_4 = cVar1 + '\x01';
  iVar3 = *(int *)(param_2 + 0x100);
  lVar6 = (longlong)iVar3;
  iVar5 = *param_3;
  *(int *)(param_2 + 0x100) = iVar3 + 1;
  if (*(int *)(param_2 + 0x104) < iVar3 + 1) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_2,iVar3);
  }
  *(char *)(param_2 + lVar6 * 8) = cVar4;
  *(char *)(param_2 + 1 + lVar6 * 8) = (char)iVar5;
  *(undefined1 *)(param_2 + 2 + lVar6 * 8) = 3;
  *(char *)(param_2 + 3 + lVar6 * 8) = cVar1;
  *(undefined4 *)(param_2 + 4 + lVar6 * 8) = 0x1006c;
  *param_3 = *param_3 + 0xc;
  cVar1 = *param_4;
  *param_4 = cVar1 + '\x01';
  iVar5 = *param_3;
  iVar3 = *(int *)(param_2 + 0x100);
  lVar6 = (longlong)iVar3;
  *(int *)(param_2 + 0x100) = iVar3 + 1;
  if (*(int *)(param_2 + 0x104) < iVar3 + 1) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(param_2,iVar3);
  }
  *(char *)(param_2 + lVar6 * 8) = cVar4;
  *(char *)(param_2 + 1 + lVar6 * 8) = (char)iVar5;
  *(undefined1 *)(param_2 + 2 + lVar6 * 8) = 1;
  *(char *)(param_2 + 3 + lVar6 * 8) = cVar1;
  *(undefined4 *)(param_2 + 4 + lVar6 * 8) = 0x1006c;
  return;
}



// FUNCTION 142602d20 FUN_142602d20 body=1984 status=ok
// SIG undefined FUN_142602d20(void)

void FUN_142602d20(longlong param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  DWORD DVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  longlong *plVar11;
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
  undefined1 local_100 [16];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined8 local_e0;
  float local_d8;
  undefined1 local_d0 [184];
  
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if (((cVar2 == '\0') && (DAT_1468c21ae != '\0')) &&
     (DVar4 = GetCurrentThreadId(), DVar4 != DAT_1468c21c0)) {
    uVar10 = 2;
  }
  else {
    uVar10 = 0;
  }
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  FUN_1424de8e0(local_100,lVar5,0,uVar10,*(byte *)(param_1 + 0x719) >> 5 & 1);
  bVar3 = *(byte *)(param_1 + 0x71b);
  if ((bVar3 & 2) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x8b8);
    lVar7 = (longlong)*(int *)(param_1 + 0x8c0) * 0x90 + lVar5;
    if (lVar5 != lVar7) {
      do {
        *(undefined1 *)(lVar5 + 0x8c) = 0;
        lVar5 = lVar5 + 0x90;
      } while (lVar5 != lVar7);
      bVar3 = *(byte *)(param_1 + 0x71b);
    }
  }
  *(byte *)(param_1 + 0x71b) = bVar3 & 0xfd;
  if ((bVar3 & 8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x960);
    *(undefined8 *)(param_1 + 0x960) = 0;
    if (lVar5 != 0) {
      LOCK();
      piVar1 = (int *)(lVar5 + 0x48);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        FGraphEvent::Recycle();
      }
    }
    *(byte *)(param_1 + 0x71b) = *(byte *)(param_1 + 0x71b) & 0xf7;
    if (DAT_146b047d4 == 0) {
      iVar9 = *(int *)(param_1 + 0x928);
      iVar8 = 0;
      if (0 < iVar9) {
        lVar5 = 0;
        do {
          plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x920) + lVar5);
          if ((plVar11 != (longlong *)0x0) && ((*(byte *)(plVar11 + 0x1e) & 1) != 0)) {
            if ((plVar11[2] != 0) &&
               ((plVar11[5] != 0 && ((*(byte *)(plVar11[5] + 0x2c) & 1) != 0)))) {
              (**(code **)(*plVar11 + 0x140))
                        (plVar11,*(undefined4 *)(param_1 + 0x968),
                         *(byte *)(param_1 + 0x718) >> 1 & 1);
            }
            (**(code **)(*plVar11 + 0x240))(plVar11);
            iVar9 = *(int *)(param_1 + 0x928);
          }
          iVar8 = iVar8 + 1;
          lVar5 = lVar5 + 8;
        } while (iVar8 < iVar9);
      }
      lVar5 = *(longlong *)(param_1 + 0x120);
      if (((lVar5 != 0) || (lVar5 = FUN_1423407b0(param_1), lVar5 != 0)) &&
         (plVar11 = *(longlong **)(lVar5 + 0x110), plVar11 != (longlong *)0x0)) {
        if (0 < *(int *)(param_1 + 0x7e8)) {
          (**(code **)(*plVar11 + 0x6e8))(plVar11,param_1,param_1 + 0x7e0);
        }
        if (0 < *(int *)(param_1 + 0x7f8)) {
          (**(code **)(*plVar11 + 0x6f0))(plVar11,param_1,param_1 + 0x7f0);
        }
        if (0 < *(int *)(param_1 + 0x808)) {
          (**(code **)(*plVar11 + 0x6f8))(plVar11,param_1,param_1 + 0x800);
        }
        if (0 < *(int *)(param_1 + 0x818)) {
          (**(code **)(*plVar11 + 0x700))(plVar11,param_1,param_1 + 0x810);
        }
      }
    }
    iVar9 = *(int *)(param_1 + 0x828);
    if (iVar9 != 0) {
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0x820) + 0x30);
      do {
        if (*plVar11 != 0) {
          FMemory::Free();
        }
        plVar11 = plVar11 + 0xc;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(undefined4 *)(param_1 + 0x828) = 0;
    if (*(int *)(param_1 + 0x82c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<96,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(param_1 + 0x820,0);
    }
    lVar5 = *(longlong *)(param_1 + 0x120);
    bVar3 = *(byte *)(param_1 + 0x719) & 0xfd;
    *(byte *)(param_1 + 0x719) = bVar3;
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_1);
      bVar3 = *(byte *)(param_1 + 0x719);
    }
    if ((((*(byte *)(param_1 + 0xba) & 4) == 0) || ((*(byte *)(param_1 + 0x718) & 0x10) != 0)) ||
       (((bVar3 & 0x20) == 0 ||
        ((*(int *)(param_1 + 0x970) != 0 ||
         (*(float *)(lVar5 + 0x790) <
          *(float *)(*(longlong *)(param_1 + 0x6f0) + 0xd8) + *(float *)(param_1 + 0x7a4))))))) {
      *(float *)(param_1 + 0x7a4) = *(float *)(lVar5 + 0x790);
      bVar3 = FUN_142608170(param_1);
      if ((bVar3 != 0) && ((*(byte *)(param_1 + 0x718) & 1) == 0)) {
        FUN_1425ff3e0(param_1);
      }
      *(byte *)(param_1 + 0x718) = *(byte *)(param_1 + 0x718) & 0xfe;
      *(byte *)(param_1 + 0x718) = *(byte *)(param_1 + 0x718) | bVar3;
    }
    else {
      FUN_1426093e0(param_1,0,1,0);
    }
    if ((((-1 < *(char *)(param_1 + 0x719)) && ((*(byte *)(param_1 + 0x718) & 1) == 0)) &&
        ((*(byte *)(*(longlong *)(param_1 + 0x6f0) + 0x98) & 1) == 0)) &&
       (-1 < (char)*(byte *)(param_1 + 0x71a))) {
      fVar12 = *(float *)(param_1 + 0x968) + *(float *)(param_1 + 0x798);
      *(float *)(param_1 + 0x798) = fVar12;
      if (fVar12 < *(float *)(param_1 + 0x79c) || fVar12 == *(float *)(param_1 + 0x79c)) {
        cVar2 = '\0';
        iVar9 = 0;
        fVar13 = DAT_1468b5d98;
        fVar17 = DAT_1468b5d94;
        fVar18 = DAT_1468b5d90;
        fVar19 = DAT_1468b5d94;
        fVar20 = DAT_1468b5d98;
        fVar12 = DAT_1468b5d90;
        if (0 < *(int *)(param_1 + 0x928)) {
          lVar5 = 0;
          do {
            plVar11 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x920));
            if (((plVar11 != (longlong *)0x0) && (plVar11[2] != 0)) &&
               ((plVar11[5] != 0 && ((*(byte *)(plVar11[5] + 0x2c) & 1) != 0)))) {
              pfVar6 = (float *)(**(code **)(*plVar11 + 0x60))(plVar11,local_d0);
              if (cVar2 == '\0') {
                if (*(char *)(pfVar6 + 6) != '\0') {
                  local_e0 = *(undefined8 *)(pfVar6 + 4);
                  fVar12 = *pfVar6;
                  fVar19 = pfVar6[1];
                  fVar20 = pfVar6[2];
                  fVar18 = pfVar6[3];
                  local_d8 = pfVar6[6];
                  cVar2 = SUB41(local_d8,0);
                  fVar13 = (float)((ulonglong)local_e0 >> 0x20);
                  fVar17 = (float)local_e0;
                  local_f0 = fVar12;
                  fStack_ec = fVar19;
                  fStack_e8 = fVar20;
                  fStack_e4 = fVar18;
                }
              }
              else if (*(char *)(pfVar6 + 6) != '\0') {
                if (*pfVar6 < fVar12) {
                  fVar12 = *pfVar6;
                }
                if (pfVar6[1] < fVar19) {
                  fVar19 = pfVar6[1];
                }
                if (pfVar6[2] < fVar20) {
                  fVar20 = pfVar6[2];
                }
                if (fVar18 < pfVar6[3]) {
                  fVar18 = pfVar6[3];
                }
                if (fVar17 < pfVar6[4]) {
                  fVar17 = pfVar6[4];
                }
                if (fVar13 < pfVar6[5]) {
                  fVar13 = pfVar6[5];
                }
              }
            }
            iVar9 = iVar9 + 1;
            lVar5 = lVar5 + 8;
          } while (iVar9 < *(int *)(param_1 + 0x928));
        }
        fVar23 = *(float *)(param_1 + 0x1dc) + *(float *)(param_1 + 0x1d0);
        fVar21 = *(float *)(param_1 + 0x1d0) - *(float *)(param_1 + 0x1dc);
        fVar22 = *(float *)(param_1 + 0x1e0) + *(float *)(param_1 + 0x1d4);
        fVar15 = *(float *)(param_1 + 0x1d4) - *(float *)(param_1 + 0x1e0);
        fVar16 = *(float *)(param_1 + 0x1e4) + *(float *)(param_1 + 0x1d8);
        fVar14 = *(float *)(param_1 + 0x1d8) - *(float *)(param_1 + 0x1e4);
        if (((((fVar12 <= fVar21) || (fVar23 <= fVar12)) ||
             ((fVar19 <= fVar15 ||
              (((fVar22 <= fVar19 || (fVar20 <= fVar14)) || (fVar16 <= fVar20)))))) ||
            ((fVar18 <= fVar21 || (fVar23 <= fVar18)))) ||
           ((fVar17 <= fVar15 || (((fVar22 <= fVar17 || (fVar13 <= fVar14)) || (fVar16 <= fVar13))))
           )) {
          *(byte *)(param_1 + 0x71a) = *(byte *)(param_1 + 0x71a) | 0x80;
        }
      }
      else {
        *(byte *)(param_1 + 0x71a) = *(byte *)(param_1 + 0x71a) | 0x80;
      }
    }
    bVar3 = *(byte *)(param_1 + 0x71a);
    if ((char)bVar3 < '\0') {
      FUN_140942fb0(param_1,0,0);
      *(byte *)(param_1 + 0x71a) = *(byte *)(param_1 + 0x71a) & 0x7f;
      bVar3 = *(byte *)(param_1 + 0x71a);
      *(undefined4 *)(param_1 + 0x798) = 0;
    }
    fVar12 = 0.0;
    if (0.0 < *(float *)(param_1 + 0x968)) {
      fVar12 = 1.0 / *(float *)(param_1 + 0x968);
    }
    *(ulonglong *)(param_1 + 0x77c) =
         CONCAT44((*(float *)(param_1 + 0x224) - *(float *)(param_1 + 0x774)) * fVar12,
                  (*(float *)(param_1 + 0x220) - *(float *)(param_1 + 0x770)) * fVar12);
    *(float *)(param_1 + 0x784) =
         (*(float *)(param_1 + 0x228) - *(float *)(param_1 + 0x778)) * fVar12;
    *(float *)(param_1 + 0x770) = *(float *)(param_1 + 0x220);
    *(float *)(param_1 + 0x774) = *(float *)(param_1 + 0x224);
    *(float *)(param_1 + 0x778) = *(float *)(param_1 + 0x228);
    if ((bVar3 & 0x20) != 0) {
      FUN_142616380(param_1,1,1);
      bVar3 = *(byte *)(param_1 + 0x71a);
      if ((bVar3 & 0x20) != 0) {
        FUN_1425fe620(param_1,*(undefined8 *)(param_1 + 0x6f0));
        FUN_1423424e0(param_1);
        bVar3 = *(byte *)(param_1 + 0x71a);
      }
    }
    if ((bVar3 & 2) == 0) {
      FUN_1423424c0(param_1);
    }
  }
  FUN_1424e13e0(local_100);
  return;
}



// FUNCTION 1426034e0 FUN_1426034e0 body=175 status=ok
// SIG undefined FUN_1426034e0(void)

void FUN_1426034e0(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_res8;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  uVar3 = 0;
  uVar5 = uVar3;
  if (0 < *(int *)(param_1 + 0x928)) {
    do {
      puVar2 = *(undefined8 **)(uVar5 + *(longlong *)(param_1 + 0x920));
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
        *(undefined8 *)(uVar5 + *(longlong *)(param_1 + 0x920)) = 0;
      }
      uVar4 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar4;
      uVar5 = uVar5 + 8;
    } while ((int)uVar4 < *(int *)(param_1 + 0x928));
  }
  thunk_FUN_141755460(param_1);
  return;
}



// FUNCTION 142603590 Flush body=542 status=ok
// SIG undefined Flush(void)

void FFXAsyncBatcher::Flush(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  
  if ((int)param_1[8] != 0) {
    plVar8 = (longlong *)param_1[4];
    pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar5 = TlsGetValue(*pDVar4);
    plVar9 = (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar9 = plVar5;
      }
      TlsSetValue(*pDVar4,plVar9);
      plVar5 = plVar9;
    }
    plVar9 = (longlong *)plVar5[1];
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)*plVar5;
      if (plVar9 == (longlong *)0x0) {
        lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar4 + 2);
        plVar5[1] = lVar6;
        if (lVar6 == 0) {
          puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar5[1] = (longlong)puVar7;
          lVar6 = 0x1f;
          do {
            puVar2 = puVar7 + 0x20;
            *puVar7 = puVar2;
            lVar6 = lVar6 + -1;
            puVar7 = puVar2;
          } while (lVar6 != 0);
          *puVar2 = 0;
        }
        plVar9 = (longlong *)plVar5[1];
        iVar10 = 0x20;
        *(undefined4 *)(plVar5 + 2) = 0x20;
      }
      else {
        iVar10 = 0x20;
        plVar5[1] = (longlong)plVar9;
        *(undefined4 *)(plVar5 + 2) = 0x20;
        *plVar5 = 0;
      }
    }
    else {
      iVar10 = (int)plVar5[2];
    }
    plVar5[1] = *plVar9;
    *(int *)(plVar5 + 2) = iVar10 + -1;
    *plVar9 = (longlong)&PTR_FUN_143f3edd8;
    *(undefined4 *)(plVar9 + 1) = 0xff;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_145135458;
    *(undefined1 *)(plVar9 + 3) = 0;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = param_1;
    }
    plVar9[4] = 0;
    lVar6 = *plVar8;
    plVar9[2] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
      UNLOCK();
    }
    lVar6 = plVar9[4];
    piVar1 = (int *)(lVar6 + 0x48);
    if (lVar6 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    FUN_1426102f0(plVar9,0,2,1);
    if (lVar6 != 0) {
      LOCK();
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle(lVar6);
      }
    }
    lVar6 = param_1[6];
    param_1[6] = 0;
    if (lVar6 != 0) {
      LOCK();
      piVar1 = (int *)(lVar6 + 0x48);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        FGraphEvent::Recycle();
      }
    }
    iVar10 = (int)param_1[5];
    plVar8 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar8 = param_1;
    }
    for (; iVar10 != 0; iVar10 = iVar10 + -1) {
      if (*plVar8 != 0) {
        LOCK();
        piVar1 = (int *)(*plVar8 + 0x48);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FGraphEvent::Recycle();
        }
      }
      plVar8 = plVar8 + 1;
    }
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) != 0) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_1,0);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    param_1[7] = 0;
  }
  return;
}



// FUNCTION 1426037b0 FUN_1426037b0 body=2739 status=ok
// SIG undefined FUN_1426037b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1426037b0(longlong param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char cVar8;
  uint uVar9;
  longlong lVar11;
  ulonglong uVar12;
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
  float local_res8 [2];
  float *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined4 local_150;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8 [21];
  ulonglong uVar10;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(param_1 + 0x15c) = _DAT_1468b5d90;
    uVar2 = DAT_1468b5d98;
    fVar21 = 1.0;
    *(undefined4 *)(param_1 + 0x164) = DAT_1468b5d98;
    *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x15c);
    *(undefined4 *)(param_1 + 0x158) = uVar2;
    *(undefined1 *)(param_1 + 0x168) = 0;
    lVar11 = *(longlong *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(lVar11 + 0x220);
    uVar3 = *(undefined4 *)(lVar11 + 0x224);
    uVar4 = *(undefined4 *)(lVar11 + 0x228);
    *(undefined1 *)(param_1 + 0x168) = 1;
    *(undefined4 *)(param_1 + 0x15c) = uVar2;
    *(undefined4 *)(param_1 + 0x160) = uVar3;
    *(undefined4 *)(param_1 + 0x150) = uVar2;
    *(undefined4 *)(param_1 + 0x154) = uVar3;
    *(undefined4 *)(param_1 + 0x164) = uVar4;
    *(undefined4 *)(param_1 + 0x158) = uVar4;
    fVar19 = 0.0;
    fVar20 = 0.0;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      FRawDistributionVector::GetOutRange
                (*(longlong *)(param_1 + 0x208) + 0x48,local_res8,&local_res10);
      fVar19 = local_res8[0];
      fVar20 = local_res10._0_4_;
    }
    lVar11 = *(longlong *)(param_1 + 0x18);
    uVar10 = 0;
    fVar5 = *(float *)(lVar11 + 0x230);
    fVar6 = *(float *)(lVar11 + 0x234);
    fVar7 = *(float *)(lVar11 + 0x238);
    uVar12 = uVar10;
    fVar18 = fVar21;
    if (0 < *(int *)(param_1 + 0x128)) {
      do {
        local_res8[0] = *(float *)(param_1 + 0x30);
        lVar11 = (longlong)
                 (int)((uint)*(ushort *)(uVar12 + *(longlong *)(param_1 + 0x108)) *
                      *(int *)(param_1 + 0x124)) + *(longlong *)(param_1 + 0x100);
        local_res10 = (float *)0x0;
        local_d8[0] = 0;
        local_e0 = 0;
        local_e8 = 0;
        local_f0 = 0;
        local_f8 = 0;
        local_100 = 0;
        local_108 = 0;
        local_res20 = 0;
        local_res18 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x3c0))
                  (*(longlong **)(param_1 + 0x1f0),param_1,lVar11,local_res8,&local_res10,local_d8,
                   &local_e0,&local_e8,&local_f0,&local_f8,&local_100,&local_108,&local_res20,
                   &local_res18);
        cVar8 = *(char *)(param_1 + 0x168);
        fVar22 = *(float *)(lVar11 + 0x5c);
        fVar18 = *(float *)(lVar11 + 0x60);
        fVar1 = *(float *)(lVar11 + 100);
        if (cVar8 == '\0') {
          *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(lVar11 + 0x10);
          uVar2 = *(undefined4 *)(lVar11 + 0x18);
          *(undefined4 *)(param_1 + 0x164) = uVar2;
          *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x15c);
          *(undefined4 *)(param_1 + 0x158) = uVar2;
          cVar8 = '\x01';
          *(undefined1 *)(param_1 + 0x168) = 1;
        }
        else {
          fVar15 = *(float *)(lVar11 + 0x10);
          if (*(float *)(param_1 + 0x150) <= *(float *)(lVar11 + 0x10)) {
            fVar15 = *(float *)(param_1 + 0x150);
          }
          *(float *)(param_1 + 0x150) = fVar15;
          fVar15 = *(float *)(lVar11 + 0x14);
          if (*(float *)(param_1 + 0x154) <= *(float *)(lVar11 + 0x14)) {
            fVar15 = *(float *)(param_1 + 0x154);
          }
          *(float *)(param_1 + 0x154) = fVar15;
          fVar15 = *(float *)(lVar11 + 0x18);
          if (*(float *)(param_1 + 0x158) <= *(float *)(lVar11 + 0x18)) {
            fVar15 = *(float *)(param_1 + 0x158);
          }
          *(float *)(param_1 + 0x158) = fVar15;
          fVar15 = *(float *)(lVar11 + 0x10);
          if (*(float *)(lVar11 + 0x10) <= *(float *)(param_1 + 0x15c)) {
            fVar15 = *(float *)(param_1 + 0x15c);
          }
          *(float *)(param_1 + 0x15c) = fVar15;
          fVar15 = *(float *)(lVar11 + 0x14);
          if (*(float *)(lVar11 + 0x14) <= *(float *)(param_1 + 0x160)) {
            fVar15 = *(float *)(param_1 + 0x160);
          }
          *(float *)(param_1 + 0x160) = fVar15;
          fVar15 = *(float *)(lVar11 + 0x18);
          if (*(float *)(lVar11 + 0x18) <= *(float *)(param_1 + 0x164)) {
            fVar15 = *(float *)(param_1 + 0x164);
          }
          *(float *)(param_1 + 0x164) = fVar15;
        }
        fVar15 = fVar19 + *(float *)(lVar11 + 0x10);
        fVar16 = fVar19 + *(float *)(lVar11 + 0x14);
        fVar17 = fVar19 + *(float *)(lVar11 + 0x18);
        if (cVar8 == '\0') {
          *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fVar16,fVar15);
          *(ulonglong *)(param_1 + 0x150) = CONCAT44(fVar16,fVar15);
          *(float *)(param_1 + 0x164) = fVar17;
          *(float *)(param_1 + 0x158) = fVar17;
          cVar8 = '\x01';
          *(undefined1 *)(param_1 + 0x168) = 1;
        }
        else {
          fVar13 = fVar15;
          if (*(float *)(param_1 + 0x150) <= fVar15) {
            fVar13 = *(float *)(param_1 + 0x150);
          }
          fVar14 = fVar16;
          if (*(float *)(param_1 + 0x154) <= fVar16) {
            fVar14 = *(float *)(param_1 + 0x154);
          }
          if (fVar15 <= *(float *)(param_1 + 0x15c)) {
            fVar15 = *(float *)(param_1 + 0x15c);
          }
          if (fVar16 <= *(float *)(param_1 + 0x160)) {
            fVar16 = *(float *)(param_1 + 0x160);
          }
          *(float *)(param_1 + 0x150) = fVar13;
          fVar13 = *(float *)(param_1 + 0x158);
          if (fVar17 <= *(float *)(param_1 + 0x158)) {
            fVar13 = fVar17;
          }
          *(float *)(param_1 + 0x154) = fVar14;
          if (fVar17 <= *(float *)(param_1 + 0x164)) {
            fVar17 = *(float *)(param_1 + 0x164);
          }
          *(float *)(param_1 + 0x15c) = fVar15;
          *(float *)(param_1 + 0x160) = fVar16;
          *(float *)(param_1 + 0x158) = fVar13;
          *(float *)(param_1 + 0x164) = fVar17;
        }
        fVar15 = fVar20 + *(float *)(lVar11 + 0x10);
        fVar17 = fVar20 + *(float *)(lVar11 + 0x14);
        fVar16 = fVar20 + *(float *)(lVar11 + 0x18);
        if (cVar8 == '\0') {
          *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fVar17,fVar15);
          *(ulonglong *)(param_1 + 0x150) = CONCAT44(fVar17,fVar15);
          *(float *)(param_1 + 0x164) = fVar16;
          *(float *)(param_1 + 0x158) = fVar16;
          cVar8 = '\x01';
          *(undefined1 *)(param_1 + 0x168) = 1;
        }
        else {
          fVar13 = fVar15;
          if (*(float *)(param_1 + 0x150) <= fVar15) {
            fVar13 = *(float *)(param_1 + 0x150);
          }
          fVar14 = fVar17;
          if (*(float *)(param_1 + 0x154) <= fVar17) {
            fVar14 = *(float *)(param_1 + 0x154);
          }
          if (fVar15 <= *(float *)(param_1 + 0x15c)) {
            fVar15 = *(float *)(param_1 + 0x15c);
          }
          *(float *)(param_1 + 0x150) = fVar13;
          fVar13 = fVar16;
          if (*(float *)(param_1 + 0x158) <= fVar16) {
            fVar13 = *(float *)(param_1 + 0x158);
          }
          if (fVar16 <= *(float *)(param_1 + 0x164)) {
            fVar16 = *(float *)(param_1 + 0x164);
          }
          *(float *)(param_1 + 0x154) = fVar14;
          *(float *)(param_1 + 0x15c) = fVar15;
          *(float *)(param_1 + 0x158) = fVar13;
          fVar15 = *(float *)(param_1 + 0x160);
          if (*(float *)(param_1 + 0x160) <= fVar17) {
            fVar15 = fVar17;
          }
          *(float *)(param_1 + 0x164) = fVar16;
          *(float *)(param_1 + 0x160) = fVar15;
        }
        if (cVar8 == '\0') {
          *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)local_res10;
          fVar15 = local_res10[2];
          *(float *)(param_1 + 0x164) = fVar15;
          *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x15c);
          *(float *)(param_1 + 0x158) = fVar15;
          cVar8 = '\x01';
          *(undefined1 *)(param_1 + 0x168) = 1;
        }
        else {
          fVar15 = *(float *)(param_1 + 0x150);
          if (*local_res10 <= *(float *)(param_1 + 0x150)) {
            fVar15 = *local_res10;
          }
          *(float *)(param_1 + 0x150) = fVar15;
          fVar15 = local_res10[1];
          if (*(float *)(param_1 + 0x154) <= local_res10[1]) {
            fVar15 = *(float *)(param_1 + 0x154);
          }
          *(float *)(param_1 + 0x154) = fVar15;
          fVar15 = *(float *)(param_1 + 0x158);
          if (local_res10[2] <= *(float *)(param_1 + 0x158)) {
            fVar15 = local_res10[2];
          }
          *(float *)(param_1 + 0x158) = fVar15;
          fVar15 = *local_res10;
          if (*local_res10 <= *(float *)(param_1 + 0x15c)) {
            fVar15 = *(float *)(param_1 + 0x15c);
          }
          *(float *)(param_1 + 0x15c) = fVar15;
          fVar15 = local_res10[1];
          if (local_res10[1] <= *(float *)(param_1 + 0x160)) {
            fVar15 = *(float *)(param_1 + 0x160);
          }
          *(float *)(param_1 + 0x160) = fVar15;
          fVar15 = *(float *)(param_1 + 0x164);
          if (*(float *)(param_1 + 0x164) <= local_res10[2]) {
            fVar15 = local_res10[2];
          }
          *(float *)(param_1 + 0x164) = fVar15;
        }
        fVar17 = fVar19 + *local_res10;
        fVar15 = fVar19 + local_res10[1];
        fVar16 = fVar19 + local_res10[2];
        if (cVar8 == '\0') {
          *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fVar15,fVar17);
          *(ulonglong *)(param_1 + 0x150) = CONCAT44(fVar15,fVar17);
          *(float *)(param_1 + 0x164) = fVar16;
          *(float *)(param_1 + 0x158) = fVar16;
          cVar8 = '\x01';
          *(undefined1 *)(param_1 + 0x168) = 1;
        }
        else {
          fVar13 = fVar17;
          if (*(float *)(param_1 + 0x150) <= fVar17) {
            fVar13 = *(float *)(param_1 + 0x150);
          }
          fVar14 = fVar15;
          if (*(float *)(param_1 + 0x154) <= fVar15) {
            fVar14 = *(float *)(param_1 + 0x154);
          }
          if (fVar15 <= *(float *)(param_1 + 0x160)) {
            fVar15 = *(float *)(param_1 + 0x160);
          }
          *(float *)(param_1 + 0x150) = fVar13;
          *(float *)(param_1 + 0x154) = fVar14;
          fVar13 = *(float *)(param_1 + 0x158);
          if (fVar16 <= *(float *)(param_1 + 0x158)) {
            fVar13 = fVar16;
          }
          if (fVar16 <= *(float *)(param_1 + 0x164)) {
            fVar16 = *(float *)(param_1 + 0x164);
          }
          fVar14 = *(float *)(param_1 + 0x15c);
          if (*(float *)(param_1 + 0x15c) <= fVar17) {
            fVar14 = fVar17;
          }
          *(float *)(param_1 + 0x160) = fVar15;
          *(float *)(param_1 + 0x158) = fVar13;
          *(float *)(param_1 + 0x164) = fVar16;
          *(float *)(param_1 + 0x15c) = fVar14;
        }
        fVar17 = fVar20 + *local_res10;
        fVar15 = fVar20 + local_res10[1];
        fVar16 = fVar20 + local_res10[2];
        if (cVar8 == '\0') {
          *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fVar15,fVar17);
          *(ulonglong *)(param_1 + 0x150) = CONCAT44(fVar15,fVar17);
          *(float *)(param_1 + 0x164) = fVar16;
          *(float *)(param_1 + 0x158) = fVar16;
          cVar8 = '\x01';
          *(undefined1 *)(param_1 + 0x168) = 1;
        }
        else {
          fVar13 = fVar17;
          if (*(float *)(param_1 + 0x150) <= fVar17) {
            fVar13 = *(float *)(param_1 + 0x150);
          }
          fVar14 = fVar15;
          if (*(float *)(param_1 + 0x154) <= fVar15) {
            fVar14 = *(float *)(param_1 + 0x154);
          }
          if (fVar15 <= *(float *)(param_1 + 0x160)) {
            fVar15 = *(float *)(param_1 + 0x160);
          }
          *(float *)(param_1 + 0x150) = fVar13;
          fVar13 = fVar16;
          if (*(float *)(param_1 + 0x158) <= fVar16) {
            fVar13 = *(float *)(param_1 + 0x158);
          }
          if (fVar16 <= *(float *)(param_1 + 0x164)) {
            fVar16 = *(float *)(param_1 + 0x164);
          }
          *(float *)(param_1 + 0x154) = fVar14;
          fVar14 = *(float *)(param_1 + 0x15c);
          if (*(float *)(param_1 + 0x15c) <= fVar17) {
            fVar14 = fVar17;
          }
          *(float *)(param_1 + 0x160) = fVar15;
          *(float *)(param_1 + 0x158) = fVar13;
          *(float *)(param_1 + 0x164) = fVar16;
          *(float *)(param_1 + 0x15c) = fVar14;
        }
        if (cVar8 == '\0') {
          *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(local_res10 + 7);
          fVar15 = local_res10[9];
          *(float *)(param_1 + 0x164) = fVar15;
          *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x15c);
          *(float *)(param_1 + 0x158) = fVar15;
          cVar8 = '\x01';
          *(undefined1 *)(param_1 + 0x168) = 1;
        }
        else {
          fVar15 = *(float *)(param_1 + 0x150);
          if (local_res10[7] <= *(float *)(param_1 + 0x150)) {
            fVar15 = local_res10[7];
          }
          *(float *)(param_1 + 0x150) = fVar15;
          fVar15 = local_res10[8];
          if (*(float *)(param_1 + 0x154) <= local_res10[8]) {
            fVar15 = *(float *)(param_1 + 0x154);
          }
          *(float *)(param_1 + 0x154) = fVar15;
          fVar15 = local_res10[9];
          if (*(float *)(param_1 + 0x158) <= local_res10[9]) {
            fVar15 = *(float *)(param_1 + 0x158);
          }
          *(float *)(param_1 + 0x158) = fVar15;
          fVar15 = local_res10[7];
          if (local_res10[7] <= *(float *)(param_1 + 0x15c)) {
            fVar15 = *(float *)(param_1 + 0x15c);
          }
          *(float *)(param_1 + 0x15c) = fVar15;
          fVar15 = local_res10[8];
          if (local_res10[8] <= *(float *)(param_1 + 0x160)) {
            fVar15 = *(float *)(param_1 + 0x160);
          }
          *(float *)(param_1 + 0x160) = fVar15;
          fVar15 = *(float *)(param_1 + 0x164);
          if (*(float *)(param_1 + 0x164) <= local_res10[9]) {
            fVar15 = local_res10[9];
          }
          *(float *)(param_1 + 0x164) = fVar15;
        }
        fVar15 = fVar19 + local_res10[7];
        fVar16 = fVar19 + local_res10[8];
        fVar17 = fVar19 + local_res10[9];
        if (cVar8 == '\0') {
          *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fVar16,fVar15);
          *(ulonglong *)(param_1 + 0x150) = CONCAT44(fVar16,fVar15);
          *(float *)(param_1 + 0x164) = fVar17;
          *(float *)(param_1 + 0x158) = fVar17;
          cVar8 = '\x01';
          *(undefined1 *)(param_1 + 0x168) = 1;
        }
        else {
          fVar13 = fVar15;
          if (*(float *)(param_1 + 0x150) <= fVar15) {
            fVar13 = *(float *)(param_1 + 0x150);
          }
          fVar14 = fVar16;
          if (*(float *)(param_1 + 0x154) <= fVar16) {
            fVar14 = *(float *)(param_1 + 0x154);
          }
          if (fVar15 <= *(float *)(param_1 + 0x15c)) {
            fVar15 = *(float *)(param_1 + 0x15c);
          }
          if (fVar16 <= *(float *)(param_1 + 0x160)) {
            fVar16 = *(float *)(param_1 + 0x160);
          }
          *(float *)(param_1 + 0x150) = fVar13;
          fVar13 = fVar17;
          if (*(float *)(param_1 + 0x158) <= fVar17) {
            fVar13 = *(float *)(param_1 + 0x158);
          }
          if (fVar17 <= *(float *)(param_1 + 0x164)) {
            fVar17 = *(float *)(param_1 + 0x164);
          }
          *(float *)(param_1 + 0x154) = fVar14;
          *(float *)(param_1 + 0x15c) = fVar15;
          *(float *)(param_1 + 0x160) = fVar16;
          *(float *)(param_1 + 0x158) = fVar13;
          *(float *)(param_1 + 0x164) = fVar17;
        }
        fVar15 = fVar20 + local_res10[7];
        fVar16 = fVar20 + local_res10[8];
        fVar17 = fVar20 + local_res10[9];
        if (cVar8 == '\0') {
          *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fVar16,fVar15);
          *(ulonglong *)(param_1 + 0x150) = CONCAT44(fVar16,fVar15);
          *(float *)(param_1 + 0x164) = fVar17;
          *(float *)(param_1 + 0x158) = fVar17;
          *(undefined1 *)(param_1 + 0x168) = 1;
        }
        else {
          fVar13 = fVar15;
          if (*(float *)(param_1 + 0x150) <= fVar15) {
            fVar13 = *(float *)(param_1 + 0x150);
          }
          if (fVar15 <= *(float *)(param_1 + 0x15c)) {
            fVar15 = *(float *)(param_1 + 0x15c);
          }
          fVar14 = *(float *)(param_1 + 0x154);
          if (fVar16 <= *(float *)(param_1 + 0x154)) {
            fVar14 = fVar16;
          }
          if (fVar16 <= *(float *)(param_1 + 0x160)) {
            fVar16 = *(float *)(param_1 + 0x160);
          }
          *(float *)(param_1 + 0x150) = fVar13;
          fVar13 = *(float *)(param_1 + 0x158);
          if (fVar17 <= *(float *)(param_1 + 0x158)) {
            fVar13 = fVar17;
          }
          *(float *)(param_1 + 0x154) = fVar14;
          *(float *)(param_1 + 0x15c) = fVar15;
          *(float *)(param_1 + 0x160) = fVar16;
          *(float *)(param_1 + 0x158) = fVar13;
          fVar15 = *(float *)(param_1 + 0x164);
          if (*(float *)(param_1 + 0x164) <= fVar17) {
            fVar15 = fVar17;
          }
          *(float *)(param_1 + 0x164) = fVar15;
        }
        fVar18 = ABS(fVar6 * fVar18);
        fVar22 = ABS(fVar5 * fVar22);
        if (fVar18 <= fVar22) {
          fVar18 = fVar22;
        }
        fVar22 = ABS(fVar7 * fVar1);
        uVar9 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar9;
        if (fVar18 <= fVar22) {
          fVar18 = fVar22;
        }
        if (fVar18 <= fVar21) {
          fVar18 = fVar21;
        }
        uVar12 = uVar12 + 2;
        fVar21 = fVar18;
      } while ((int)uVar9 < *(int *)(param_1 + 0x128));
    }
    local_150 = CONCAT31(local_150._1_3_,1);
    *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) - fVar18;
    *(float *)(param_1 + 0x154) = *(float *)(param_1 + 0x154) - fVar18;
    *(float *)(param_1 + 0x158) = *(float *)(param_1 + 0x158) - fVar18;
    *(float *)(param_1 + 0x15c) = fVar18 + *(float *)(param_1 + 0x15c);
    *(ulonglong *)(param_1 + 0x160) =
         CONCAT44(fVar18 + *(float *)(param_1 + 0x164),fVar18 + *(float *)(param_1 + 0x160));
    *(undefined4 *)(param_1 + 0x168) = local_150;
  }
  return;
}



// FUNCTION 142604270 FUN_142604270 body=388 status=ok
// SIG undefined FUN_142604270(void)

undefined8 FUN_142604270(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x40) < 1) {
    iVar8 = *(int *)(param_2 + 0x40);
    iVar1 = *(int *)(param_1 + 0x40);
    iVar5 = iVar1 + iVar8;
    *(int *)(param_1 + 0x40) = iVar5;
    if (*(int *)(param_1 + 0x44) < iVar5) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar1);
    }
    _Size = (longlong)iVar8 * 8;
    _guard_xfg_dispatch_icall_nop
              ((void *)(_Size + (longlong)*(void **)(param_1 + 0x38)),*(void **)(param_1 + 0x38),
               (longlong)iVar1 << 3);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x38),0,_Size);
    uVar2 = *(uint *)(param_2 + 0x2c);
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
    *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) ^ (uVar2 ^ *(uint *)(param_1 + 0x2c)) & 1;
    uVar6 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x318))
                      (*(longlong **)(param_2 + 0x30),param_2,param_1,param_3,param_4,0);
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    uVar6 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x318))
                      (*(longlong **)(param_2 + 0x50),param_2,param_1,param_3,param_4,0);
    *(undefined8 *)(param_1 + 0x50) = uVar6;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 != (longlong *)0x0) {
      uVar6 = (**(code **)(*plVar3 + 0x318))(plVar3,param_2,param_1,param_3,param_4,0);
      *(undefined8 *)(param_1 + 0x48) = uVar6;
    }
    iVar8 = 0;
    if (0 < *(int *)(param_2 + 0x40)) {
      lVar7 = 0;
      do {
        lVar4 = *(longlong *)(param_1 + 0x38);
        plVar3 = *(longlong **)(lVar7 + *(longlong *)(param_2 + 0x38));
        if (plVar3 == (longlong *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x318))(plVar3,param_2,param_1,param_3,param_4,0);
        }
        *(undefined8 *)(lVar7 + lVar4) = uVar6;
        iVar8 = iVar8 + 1;
        lVar7 = lVar7 + 8;
      } while (iVar8 < *(int *)(param_2 + 0x40));
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142604400 FUN_142604400 body=221 status=ok
// SIG undefined FUN_142604400(void)

void FUN_142604400(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(param_1 + 0x828);
  *(int *)(param_1 + 0x828) = iVar1 + 1;
  if (*(int *)(param_1 + 0x82c) < iVar1 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x820),iVar1);
  }
  puVar4 = (undefined4 *)((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x820));
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[3] = 0;
    *(undefined8 *)(puVar4 + 0xc) = 0;
    *(undefined8 *)(puVar4 + 0xe) = 0;
    *(undefined8 *)(puVar4 + 0x15) = 0;
    puVar4[0x17] = 0x3f800000;
  }
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(puVar4 + 5) = *param_4;
  puVar4[7] = uVar2;
  puVar4[4] = param_3;
  *(undefined8 *)(puVar4 + 2) = param_2;
  uVar2 = *(undefined4 *)(param_6 + 1);
  *(undefined8 *)(puVar4 + 8) = *param_6;
  puVar4[10] = uVar2;
  *puVar4 = 5;
  uVar3 = param_7[1];
  *(undefined8 *)(puVar4 + 0x10) = *param_7;
  *(undefined8 *)(puVar4 + 0x12) = uVar3;
  uVar3 = param_8[1];
  *(undefined8 *)(puVar4 + 0x14) = *param_8;
  *(undefined8 *)(puVar4 + 0x16) = uVar3;
  return;
}



// FUNCTION 1426044e0 FUN_1426044e0 body=178 status=ok
// SIG undefined FUN_1426044e0(void)

ulonglong FUN_1426044e0(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  longlong *in_RAX;
  longlong lVar4;
  
  lVar4 = 0;
  if (param_2 == 0) goto LAB_14260456f;
  if ((((*(byte *)(param_1 + 0x71b) & 4) == 0) &&
      (cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    in_RAX = (longlong *)0x8b8;
    if (DVar3 == DAT_1468c21c0) goto LAB_142604544;
  }
  else {
LAB_142604544:
    in_RAX = (longlong *)0x720;
  }
  iVar1 = *(int *)((longlong)in_RAX + param_1 + 8);
  if (0 < iVar1) {
    in_RAX = *(longlong **)((longlong)in_RAX + param_1);
    do {
      if ((*in_RAX == param_2) && ((char)in_RAX[1] == '\x06')) {
        lVar4 = in_RAX[6];
        *param_3 = lVar4;
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
      lVar4 = lVar4 + 1;
      in_RAX = in_RAX + 0x12;
    } while (lVar4 < iVar1);
  }
LAB_14260456f:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1426045f0 FUN_1426045f0 body=503 status=ok
// SIG undefined FUN_1426045f0(void)

ulonglong FUN_1426045f0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_4c [52];
  
  lVar7 = 0;
  if (param_2 == 0) goto LAB_1426046aa;
  if ((((*(byte *)(param_1 + 0x71b) & 4) == 0) &&
      (cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar8 = 0x8b8;
    if (DVar4 == DAT_1468c21c0) goto LAB_14260465d;
  }
  else {
LAB_14260465d:
    lVar8 = 0x720;
  }
  iVar2 = *(int *)(lVar8 + 8 + param_1);
  uVar5 = (ulonglong)iVar2;
  in_RAX = uVar5;
  if (0 < iVar2) {
    plVar9 = *(longlong **)(lVar8 + param_1);
    do {
      if (*plVar9 == param_2) {
        cVar3 = (char)plVar9[1];
        in_RAX = 0;
        if (cVar3 == '\x03') {
          *param_3 = *(undefined8 *)((longlong)plVar9 + 0x14);
          uVar1 = *(undefined4 *)((longlong)plVar9 + 0x1c);
          *(undefined4 *)(param_3 + 1) = uVar1;
          return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
        }
        if (cVar3 == '\x04') {
          fVar11 = (float)FGenericPlatformMath::SRand();
          fVar10 = (float)FGenericPlatformMath::SRand();
          fVar12 = (float)FGenericPlatformMath::SRand();
          fVar11 = (*(float *)(plVar9 + 5) - *(float *)((longlong)plVar9 + 0x1c)) * fVar11 +
                   *(float *)((longlong)plVar9 + 0x1c);
          *param_3 = CONCAT44((*(float *)((longlong)plVar9 + 0x24) - *(float *)(plVar9 + 3)) *
                              fVar10 + *(float *)(plVar9 + 3),
                              (*(float *)(plVar9 + 4) - *(float *)((longlong)plVar9 + 0x14)) *
                              fVar12 + *(float *)((longlong)plVar9 + 0x14));
          *(float *)(param_3 + 1) = fVar11;
          return CONCAT71((uint7)(uint3)((uint)fVar11 >> 8),1);
        }
        if (cVar3 == '\x01') {
          uVar1 = *(undefined4 *)((longlong)plVar9 + 0xc);
          *param_3 = CONCAT44(uVar1,uVar1);
          *(undefined4 *)(param_3 + 1) = uVar1;
          return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
        }
        if (cVar3 == '\x02') {
          fVar11 = *(float *)((longlong)plVar9 + 0xc);
          fVar10 = (float)FGenericPlatformMath::SRand();
          fVar11 = fVar10 * (*(float *)(plVar9 + 2) - fVar11) + fVar11;
          *param_3 = CONCAT44(fVar11,fVar11);
          *(float *)(param_3 + 1) = fVar11;
          return CONCAT71((uint7)(uint3)((uint)fVar11 >> 8),1);
        }
        if (cVar3 == '\x05') {
          puVar6 = (undefined8 *)FLinearColor::FLinearColor(local_4c,(longlong)plVar9 + 0x2c);
          uVar1 = *(undefined4 *)(puVar6 + 1);
          *param_3 = *puVar6;
          *(undefined4 *)(param_3 + 1) = uVar1;
          return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
        }
      }
      lVar7 = lVar7 + 1;
      plVar9 = plVar9 + 0x12;
    } while (lVar7 < (longlong)uVar5);
  }
LAB_1426046aa:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1426047f0 FUN_1426047f0 body=4458 status=ok
// SIG undefined FUN_1426047f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1426047f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  void *pvVar10;
  uint uVar11;
  longlong lVar12;
  void *pvVar13;
  void *pvVar14;
  uint uVar15;
  int iVar16;
  wchar_t *pwVar17;
  void **ppvVar18;
  undefined4 uVar19;
  void *pvVar20;
  undefined4 uVar21;
  longlong *plVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_d8 [32];
  void *local_b8;
  void *local_b0;
  uint local_a8;
  uint local_a4;
  wchar_t *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  pvVar14 = (void *)0x0;
  local_88[0] = 0;
  pvVar10 = pvVar14;
  pvVar13 = pvVar14;
  local_60 = param_1;
  if (0 < *(int *)(param_1 + 0x48)) {
    do {
      lVar12 = *(longlong *)((longlong)pvVar10 + *(longlong *)(param_1 + 0x40));
      if (((lVar12 != 0) && (lVar12 = **(longlong **)(lVar12 + 0x40), lVar12 != 0)) &&
         (lVar12 = *(longlong *)(lVar12 + 0x48), lVar12 != 0)) {
        lVar6 = UParticleModuleTypeDataGpu::GetPrivateStaticClass();
        lVar12 = *(longlong *)(lVar12 + 0x10);
        if ((*(int *)(lVar12 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar12 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (bVar23) {
          bVar23 = true;
          goto LAB_1426048aa;
        }
      }
      uVar15 = (int)pvVar13 + 1;
      pvVar10 = (void *)((longlong)pvVar10 + 8);
      pvVar13 = (void *)(ulonglong)uVar15;
    } while ((int)uVar15 < *(int *)(param_1 + 0x48));
  }
  bVar23 = false;
LAB_1426048aa:
  local_58 = (void *)0x0;
  local_50 = (ulonglong)(uint)local_50;
  pwVar17 = L"False";
  if (bVar23) {
    pwVar17 = L"True";
  }
  pvVar13 = pvVar14;
  pvVar10 = pvVar14;
  if (*pwVar17 != L'\0') {
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (pwVar17[lVar12] != L'\0');
    uVar11 = (int)lVar12 + 1;
    local_50 = (ulonglong)uVar11;
    uVar15 = uVar11;
    if (0 < (int)uVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      uVar15 = (uint)local_50;
    }
    pvVar10 = local_58;
    pvVar13 = (void *)(ulonglong)uVar15;
    FGenericPlatformString::Memcpy(local_58,pwVar17,(longlong)(int)uVar11 * 2);
  }
  plVar7 = (longlong *)FName::FName(local_88,"HasGPUEmitter",1);
  local_b0 = (void *)0x0;
  iVar16 = (int)pvVar13;
  local_b8 = (void *)*plVar7;
  uVar15 = 0;
  local_a8 = iVar16;
  if (iVar16 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,pvVar13,0);
    pvVar14 = local_b0;
    _guard_xfg_dispatch_icall_nop(local_b0,pvVar10,(longlong)iVar16 * 2);
    uVar15 = local_a4;
  }
  uVar11 = local_a8;
  pvVar13 = local_b8;
  iVar16 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar16 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar16);
  }
  plVar7 = (longlong *)((longlong)iVar16 * 0x20 + *param_2);
  *plVar7 = (longlong)pvVar13;
  plVar7[1] = (longlong)pvVar14;
  *(uint *)(plVar7 + 2) = uVar11;
  pvVar14 = (void *)0x0;
  *(uint *)((longlong)plVar7 + 0x14) = uVar15;
  plVar7[3] = 1;
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  lVar12 = local_60;
  bVar23 = (*(byte *)(local_60 + 0x98) & 1) == 0;
  fVar26 = *(float *)(local_60 + 0xa8) - *(float *)(local_60 + 0x9c);
  fVar24 = *(float *)(local_60 + 0xac) - *(float *)(local_60 + 0xa0);
  fVar25 = *(float *)(local_60 + 0xb0) - *(float *)(local_60 + 0xa4);
  if (fVar26 <= fVar24) {
    fVar26 = fVar24;
  }
  if (fVar26 <= fVar25) {
    fVar26 = fVar25;
  }
  if (bVar23) {
    local_58 = (void *)0x0;
    local_50 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
    FGenericPlatformString::Memcpy(local_58,L"None",10);
    ppvVar18 = (void **)&local_58;
  }
  else {
    FString::PrintfImpl(&local_b8,L"%.2f",(double)fVar26);
    ppvVar18 = &local_b8;
  }
  puVar8 = (undefined8 *)FName::FName(local_88,"FixedBoundsSize",1);
  local_80 = *puVar8;
  FString::FString(&local_78,ppvVar18);
  iVar16 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar16 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar16);
  }
  puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
  *puVar8 = local_80;
  puVar8[1] = local_78;
  *(int *)(puVar8 + 2) = local_70;
  *(undefined4 *)((longlong)puVar8 + 0x14) = local_6c;
  puVar8[3] = 2;
  if ((bVar23) && (local_58 != (void *)0x0)) {
    FMemory::Free();
  }
  if ((!bVar23) && (local_b8 != (void *)0x0)) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_58,&DAT_1440da628,*(undefined4 *)(lVar12 + 0x48));
  puVar8 = (undefined8 *)FName::FName(local_88,"NumEmitters",1);
  pvVar10 = local_58;
  local_b0 = (void *)0x0;
  lVar6 = (longlong)(int)(uint)local_50;
  local_b8 = (void *)*puVar8;
  local_a8 = (uint)local_50;
  if ((uint)local_50 == 0) {
    uVar15 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,local_50 & 0xffffffff,0);
    pvVar14 = local_b0;
    _guard_xfg_dispatch_icall_nop(local_b0,pvVar10,lVar6 * 2);
    uVar15 = local_a4;
  }
  uVar11 = local_a8;
  pvVar10 = local_b8;
  iVar16 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar16 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar16);
  }
  puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
  *puVar8 = pvVar10;
  puVar8[1] = pvVar14;
  pvVar14 = (void *)0x0;
  *(uint *)(puVar8 + 2) = uVar11;
  *(uint *)((longlong)puVar8 + 0x14) = uVar15;
  puVar8[3] = 2;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_58,&DAT_1440da628,*(undefined4 *)(lVar12 + 0x78));
  puVar8 = (undefined8 *)FName::FName(local_88,"NumLODs",1);
  pvVar10 = local_58;
  lVar6 = (longlong)(int)(uint)local_50;
  local_b0 = (void *)0x0;
  local_b8 = (void *)*puVar8;
  local_a8 = (uint)local_50;
  uVar15 = 0;
  if ((uint)local_50 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,local_50 & 0xffffffff,0);
    pvVar14 = local_b0;
    _guard_xfg_dispatch_icall_nop(local_b0,pvVar10,lVar6 * 2);
    uVar15 = local_a4;
  }
  uVar11 = local_a8;
  pvVar10 = local_b8;
  iVar16 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar16 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar16);
  }
  puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
  *puVar8 = pvVar10;
  puVar8[1] = pvVar14;
  *(uint *)((longlong)puVar8 + 0x14) = uVar15;
  pvVar14 = (void *)0x0;
  *(uint *)(puVar8 + 2) = uVar11;
  puVar8[3] = 2;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_58,&DAT_144114f48,(double)*(float *)(lVar12 + 0x34));
  puVar8 = (undefined8 *)FName::FName(local_88,"WarmupTime",1);
  pvVar10 = local_58;
  lVar6 = (longlong)(int)(uint)local_50;
  local_b0 = (void *)0x0;
  local_b8 = (void *)*puVar8;
  local_a8 = (uint)local_50;
  uVar15 = 0;
  if ((uint)local_50 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,local_50 & 0xffffffff,0);
    pvVar14 = local_b0;
    _guard_xfg_dispatch_icall_nop(local_b0,pvVar10,lVar6 * 2);
    uVar15 = local_a4;
  }
  uVar11 = local_a8;
  pvVar10 = local_b8;
  iVar16 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar16 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar16);
  }
  puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
  *puVar8 = pvVar10;
  puVar8[1] = pvVar14;
  *(uint *)((longlong)puVar8 + 0x14) = uVar15;
  pvVar14 = (void *)0x0;
  *(uint *)(puVar8 + 2) = uVar11;
  puVar8[3] = 2;
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  local_98 = (wchar_t *)0x0;
  local_90 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  pwVar17 = local_98;
  FGenericPlatformString::Memcpy(local_98,L"Unknown",0x10);
  cVar3 = *(char *)(lVar12 + 0x68);
  uVar15 = local_90._4_4_;
  if (cVar3 == '\0') {
    if (pwVar17 != L"Automatic") {
      local_90 = (ulonglong)local_90._4_4_ << 0x20;
      pvVar10 = pvVar14;
      if (uVar15 != 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,10);
        pvVar10 = (void *)(local_90 & 0xffffffff);
        pwVar17 = local_98;
        uVar15 = local_90._4_4_;
      }
      iVar16 = (int)pvVar10 + 10;
      local_90 = CONCAT44(local_90._4_4_,iVar16);
      if ((int)uVar15 < iVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
        pwVar17 = local_98;
        iVar16 = (int)local_90;
      }
      builtin_wcsncpy(pwVar17,L"Automatic",10);
      goto LAB_142604ee9;
    }
  }
  else if (cVar3 == '\x01') {
    if (pwVar17 != L"DirectSet") {
      local_90 = (ulonglong)local_90._4_4_ << 0x20;
      pvVar10 = pvVar14;
      if (uVar15 != 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,10);
        pvVar10 = (void *)(local_90 & 0xffffffff);
        pwVar17 = local_98;
        uVar15 = local_90._4_4_;
      }
      iVar16 = (int)pvVar10 + 10;
      local_90 = CONCAT44(local_90._4_4_,iVar16);
      if ((int)uVar15 < iVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
        pwVar17 = local_98;
        iVar16 = (int)local_90;
      }
      builtin_wcsncpy(pwVar17,L"DirectSet",10);
      goto LAB_142604ee9;
    }
  }
  else if ((cVar3 == '\x02') && (pwVar17 != L"Activate Automatic")) {
    local_90 = (ulonglong)local_90._4_4_ << 0x20;
    pvVar10 = pvVar14;
    if (uVar15 != 0x13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_98,0x13);
      pvVar10 = (void *)(local_90 & 0xffffffff);
      pwVar17 = local_98;
      uVar15 = local_90._4_4_;
    }
    iVar16 = (int)pvVar10 + 0x13;
    local_90 = CONCAT44(local_90._4_4_,iVar16);
    if ((int)uVar15 < iVar16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
      pwVar17 = local_98;
      iVar16 = (int)local_90;
    }
    builtin_wcsncpy(pwVar17,L"Activate Automatic",0x13);
    goto LAB_142604ee9;
  }
  iVar16 = (int)local_90;
LAB_142604ee9:
  puVar8 = (undefined8 *)FName::FName(local_88,"LODMethod",1);
  local_b0 = (void *)0x0;
  local_b8 = (void *)*puVar8;
  uVar15 = 0;
  local_a8 = iVar16;
  if (iVar16 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,iVar16,0);
    pvVar14 = local_b0;
    _guard_xfg_dispatch_icall_nop(local_b0,pwVar17,(longlong)iVar16 * 2);
    uVar15 = local_a4;
  }
  uVar11 = local_a8;
  pvVar10 = local_b8;
  iVar16 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar16 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar16);
  }
  puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
  *puVar8 = pvVar10;
  puVar8[1] = pvVar14;
  *(uint *)((longlong)puVar8 + 0x14) = uVar15;
  *(uint *)(puVar8 + 2) = uVar11;
  puVar8[3] = 1;
  plVar22 = *(longlong **)(lVar12 + 0x40);
  plVar7 = plVar22 + *(int *)(lVar12 + 0x48);
  do {
    if (plVar22 == plVar7) {
      bVar23 = false;
LAB_14260504b:
      pwVar17 = L"False";
      if (bVar23) {
        pwVar17 = L"True";
      }
      pvVar14 = (void *)0x0;
      local_58 = (void *)0x0;
      local_50 = local_50 & 0xffffffff;
      pvVar13 = pvVar14;
      pvVar10 = pvVar14;
      if (*pwVar17 != L'\0') {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (pwVar17[lVar12] != L'\0');
        uVar11 = (int)lVar12 + 1;
        local_50 = (ulonglong)uVar11;
        uVar15 = uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          uVar15 = (uint)local_50;
        }
        pvVar10 = local_58;
        pvVar13 = (void *)(ulonglong)uVar15;
        FGenericPlatformString::Memcpy(local_58,pwVar17,(longlong)(int)uVar11 * 2);
      }
      puVar8 = (undefined8 *)FName::FName(local_88,"CPUCollision",1);
      local_b0 = (void *)0x0;
      iVar16 = (int)pvVar13;
      local_b8 = (void *)*puVar8;
      uVar15 = 0;
      local_a8 = iVar16;
      if (iVar16 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,pvVar13,0);
        pvVar14 = local_b0;
        _guard_xfg_dispatch_icall_nop(local_b0,pvVar10,(longlong)iVar16 * 2);
        uVar15 = local_a4;
      }
      uVar11 = local_a8;
      pvVar13 = local_b8;
      iVar16 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar16 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar16);
      }
      puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
      *puVar8 = pvVar13;
      puVar8[1] = pvVar14;
      *(uint *)((longlong)puVar8 + 0x14) = uVar15;
      pvVar14 = (void *)0x0;
      *(uint *)(puVar8 + 2) = uVar11;
      puVar8[3] = 1;
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar10);
      }
      pwVar17 = L"False";
      local_58 = (void *)0x0;
      local_50 = local_50 & 0xffffffff;
      if ((*(byte *)(local_60 + 0x14c) & 2) != 0) {
        pwVar17 = L"True";
      }
      pvVar13 = pvVar14;
      pvVar10 = pvVar14;
      if (*pwVar17 != L'\0') {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (pwVar17[lVar12] != L'\0');
        uVar11 = (int)lVar12 + 1;
        local_50 = (ulonglong)uVar11;
        uVar15 = uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          uVar15 = (uint)local_50;
        }
        pvVar10 = local_58;
        pvVar13 = (void *)(ulonglong)uVar15;
        FGenericPlatformString::Memcpy(local_58,pwVar17,(longlong)(int)uVar11 * 2);
      }
      puVar8 = (undefined8 *)FName::FName(local_88,"Looping",1);
      local_b0 = (void *)0x0;
      iVar16 = (int)pvVar13;
      local_b8 = (void *)*puVar8;
      uVar15 = 0;
      local_a8 = iVar16;
      if (iVar16 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,pvVar13,0);
        pvVar14 = local_b0;
        _guard_xfg_dispatch_icall_nop(local_b0,pvVar10,(longlong)iVar16 * 2);
        uVar15 = local_a4;
      }
      uVar11 = local_a8;
      pvVar13 = local_b8;
      iVar16 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar16 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar16);
      }
      puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
      *puVar8 = pvVar13;
      puVar8[1] = pvVar14;
      *(uint *)((longlong)puVar8 + 0x14) = uVar15;
      pvVar14 = (void *)0x0;
      *(uint *)(puVar8 + 2) = uVar11;
      puVar8[3] = 1;
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar10);
      }
      pwVar17 = L"False";
      local_58 = (void *)0x0;
      local_50 = local_50 & 0xffffffff;
      if ((*(uint *)(local_60 + 0x14c) >> 2 & 1) != 0) {
        pwVar17 = L"True";
      }
      pvVar13 = pvVar14;
      pvVar10 = pvVar14;
      if (*pwVar17 != L'\0') {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (pwVar17[lVar12] != L'\0');
        uVar11 = (int)lVar12 + 1;
        local_50 = (ulonglong)uVar11;
        uVar15 = uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          uVar15 = (uint)local_50;
        }
        pvVar10 = local_58;
        pvVar13 = (void *)(ulonglong)uVar15;
        FGenericPlatformString::Memcpy(local_58,pwVar17,(longlong)(int)uVar11 * 2);
      }
      puVar8 = (undefined8 *)FName::FName(local_88,"Immortal",1);
      local_b0 = (void *)0x0;
      iVar16 = (int)pvVar13;
      local_b8 = (void *)*puVar8;
      uVar15 = 0;
      local_a8 = iVar16;
      if (iVar16 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,pvVar13,0);
        pvVar14 = local_b0;
        _guard_xfg_dispatch_icall_nop(local_b0,pvVar10,(longlong)iVar16 * 2);
        uVar15 = local_a4;
      }
      uVar11 = local_a8;
      pvVar13 = local_b8;
      iVar16 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar16 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar16);
      }
      puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
      *puVar8 = pvVar13;
      puVar8[1] = pvVar14;
      *(uint *)((longlong)puVar8 + 0x14) = uVar15;
      pvVar14 = (void *)0x0;
      *(uint *)(puVar8 + 2) = uVar11;
      puVar8[3] = 1;
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar10);
      }
      pwVar17 = L"False";
      local_58 = (void *)0x0;
      local_50 = local_50 & 0xffffffff;
      if ((*(uint *)(local_60 + 0x14c) >> 3 & 1) != 0) {
        pwVar17 = L"True";
      }
      pvVar13 = pvVar14;
      pvVar10 = pvVar14;
      if (*pwVar17 != L'\0') {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (pwVar17[lVar12] != L'\0');
        uVar11 = (int)lVar12 + 1;
        local_50 = (ulonglong)uVar11;
        uVar15 = uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          uVar15 = (uint)local_50;
        }
        pvVar10 = local_58;
        pvVar13 = (void *)(ulonglong)uVar15;
        FGenericPlatformString::Memcpy(local_58,pwVar17,(longlong)(int)uVar11 * 2);
      }
      puVar8 = (undefined8 *)FName::FName(local_88,"Becomes Zombie",1);
      local_b0 = (void *)0x0;
      iVar16 = (int)pvVar13;
      local_b8 = (void *)*puVar8;
      uVar15 = 0;
      local_a8 = iVar16;
      if (iVar16 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,pvVar13,0);
        pvVar14 = local_b0;
        _guard_xfg_dispatch_icall_nop(local_b0,pvVar10,(longlong)iVar16 * 2);
        uVar15 = local_a4;
      }
      uVar11 = local_a8;
      pvVar13 = local_b8;
      iVar16 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar16 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar16);
      }
      puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
      *puVar8 = pvVar13;
      puVar8[1] = pvVar14;
      *(uint *)((longlong)puVar8 + 0x14) = uVar15;
      pvVar14 = (void *)0x0;
      *(uint *)(puVar8 + 2) = uVar11;
      puVar8[3] = 1;
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar10);
      }
      pwVar17 = L"True";
      local_58 = (void *)0x0;
      local_50 = local_50 & 0xffffffff;
      if (*(char *)(local_60 + 0xf8) == '\0') {
        pwVar17 = L"False";
      }
      pvVar10 = pvVar14;
      uVar15 = 0;
      if (*pwVar17 != L'\0') {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (pwVar17[lVar12] != L'\0');
        uVar11 = (int)lVar12 + 1;
        local_50 = (ulonglong)uVar11;
        uVar15 = uVar11;
        if (0 < (int)uVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
          uVar15 = (uint)local_50;
        }
        pvVar10 = local_58;
        FGenericPlatformString::Memcpy(local_58,pwVar17,(longlong)(int)uVar11 * 2);
      }
      puVar8 = (undefined8 *)FName::FName(local_88,"CanBeOccluded",1);
      local_b0 = (void *)0x0;
      local_b8 = (void *)*puVar8;
      uVar11 = 0;
      local_a8 = uVar15;
      if (uVar15 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,uVar15,0);
        pvVar14 = local_b0;
        _guard_xfg_dispatch_icall_nop(local_b0,pvVar10,(longlong)(int)uVar15 * 2);
        uVar11 = local_a4;
      }
      uVar15 = local_a8;
      pvVar13 = local_b8;
      iVar16 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar16 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar16);
      }
      pvVar20 = (void *)0x0;
      puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
      *puVar8 = pvVar13;
      puVar8[1] = pvVar14;
      *(uint *)(puVar8 + 2) = uVar15;
      *(uint *)((longlong)puVar8 + 0x14) = uVar11;
      puVar8[3] = 1;
      if (pvVar10 != (void *)0x0) {
        FMemory::Free(pvVar10);
      }
      local_58 = (void *)0x0;
      local_50 = 0;
      plVar7 = *(longlong **)(local_60 + 0x40);
      pvVar14 = (void *)((longlong)*(int *)(local_60 + 0x48) & 0x1fffffffffffffff);
      if (plVar7 + *(int *)(local_60 + 0x48) < plVar7) {
        pvVar14 = pvVar20;
      }
      pvVar10 = pvVar20;
      pvVar13 = pvVar20;
      if (pvVar14 != (void *)0x0) {
        do {
          if (*plVar7 != 0) {
            piVar2 = (int *)((longlong)&local_58 + (ulonglong)*(byte *)(*plVar7 + 0xac) * 4);
            *piVar2 = *piVar2 + 1;
          }
          plVar7 = plVar7 + 1;
          pvVar10 = (void *)((longlong)pvVar10 + 1);
        } while (pvVar10 != pvVar14);
        pvVar10 = (void *)(local_50 >> 0x20);
        pvVar13 = (void *)(local_50 & 0xffffffff);
      }
      FString::PrintfImpl(&local_b8,&DAT_144ca0198,pvVar10);
      puVar8 = (undefined8 *)FName::FName(local_88,"Critical Emitters",1);
      pvVar14 = local_b8;
      lVar12 = (longlong)(int)local_b0;
      local_78 = (void *)0x0;
      local_80 = *puVar8;
      local_70 = (int)local_b0;
      uVar21 = 0;
      if ((int)local_b0 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_78,(ulonglong)local_b0 & 0xffffffff,0);
        pvVar20 = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,pvVar14,lVar12 * 2);
        uVar21 = local_6c;
      }
      iVar5 = local_70;
      uVar4 = local_80;
      iVar16 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar16 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar16);
      }
      puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
      *puVar8 = uVar4;
      puVar8[1] = pvVar20;
      *(int *)(puVar8 + 2) = iVar5;
      *(undefined4 *)((longlong)puVar8 + 0x14) = uVar21;
      puVar8[3] = 2;
      if (local_b8 != (void *)0x0) {
        FMemory::Free();
      }
      FString::PrintfImpl(&local_b8,&DAT_144ca0198,pvVar13);
      puVar8 = (undefined8 *)FName::FName(local_88,"High Emitters",1);
      pvVar14 = local_b8;
      lVar12 = (longlong)(int)local_b0;
      pvVar13 = (void *)0x0;
      local_78 = (void *)0x0;
      local_80 = *puVar8;
      local_70 = (int)local_b0;
      uVar19 = 0;
      pvVar10 = pvVar13;
      uVar21 = uVar19;
      if ((int)local_b0 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_78,(ulonglong)local_b0 & 0xffffffff,0);
        pvVar10 = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,pvVar14,lVar12 * 2);
        uVar21 = local_6c;
      }
      iVar5 = local_70;
      uVar4 = local_80;
      iVar16 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar16 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar16);
      }
      puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
      *puVar8 = uVar4;
      puVar8[1] = pvVar10;
      *(int *)(puVar8 + 2) = iVar5;
      *(undefined4 *)((longlong)puVar8 + 0x14) = uVar21;
      puVar8[3] = 2;
      if (local_b8 != (void *)0x0) {
        FMemory::Free();
      }
      FString::PrintfImpl(&local_b8,&DAT_144ca0198,local_58._4_4_);
      puVar8 = (undefined8 *)FName::FName(local_88,"Medium Emitters",1);
      pvVar14 = local_b8;
      lVar12 = (longlong)(int)local_b0;
      local_78 = (void *)0x0;
      local_80 = *puVar8;
      local_70 = (int)local_b0;
      if ((int)local_b0 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_78,(ulonglong)local_b0 & 0xffffffff,0);
        pvVar13 = local_78;
        _guard_xfg_dispatch_icall_nop(local_78,pvVar14,lVar12 * 2);
        uVar19 = local_6c;
      }
      iVar5 = local_70;
      uVar4 = local_80;
      iVar16 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar16 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar16);
      }
      puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
      *puVar8 = uVar4;
      puVar8[1] = pvVar13;
      *(int *)(puVar8 + 2) = iVar5;
      *(undefined4 *)((longlong)puVar8 + 0x14) = uVar19;
      puVar8[3] = 2;
      if (local_b8 != (void *)0x0) {
        FMemory::Free();
      }
      FString::PrintfImpl(&local_b8,&DAT_144ca0198,(ulonglong)local_58 & 0xffffffff);
      puVar8 = (undefined8 *)FName::FName(local_88,"Low Emitters",1);
      local_80 = *puVar8;
      FString::FString(&local_78,&local_b8);
      iVar16 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar16 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar16 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(param_2,iVar16);
      }
      puVar8 = (undefined8 *)((longlong)iVar16 * 0x20 + *param_2);
      *puVar8 = local_80;
      puVar8[1] = local_78;
      *(int *)(puVar8 + 2) = local_70;
      *(undefined4 *)((longlong)puVar8 + 0x14) = local_6c;
      puVar8[3] = 2;
      if (local_b8 != (void *)0x0) {
        FMemory::Free();
      }
      FUN_1417557f0(local_60,param_2);
      if (local_98 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      return;
    }
    lVar12 = *plVar22;
    if (lVar12 != 0) {
      plVar9 = *(longlong **)(lVar12 + 0x40);
      plVar1 = plVar9 + *(int *)(lVar12 + 0x48);
      for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
        if ((*plVar9 != 0) && ((*(byte *)(*plVar9 + 0x2c) & 1) != 0)) {
          if ((0 < *(int *)(lVar12 + 0x48)) &&
             (lVar12 = **(longlong **)(lVar12 + 0x40), lVar12 != 0)) {
            plVar9 = *(longlong **)(lVar12 + 0x38);
            plVar1 = plVar9 + *(int *)(lVar12 + 0x40);
            goto joined_r0x000142604fed;
          }
          break;
        }
      }
    }
LAB_14260503c:
    plVar22 = plVar22 + 1;
  } while( true );
joined_r0x000142604fed:
  if (plVar9 == plVar1) goto LAB_14260503c;
  lVar12 = *plVar9;
  if ((*(byte *)(lVar12 + 0x28) & 0x80) != 0) {
    lVar6 = UEnvQueryTest_Random::StaticClass();
    lVar12 = *(longlong *)(lVar12 + 0x10);
    if ((*(int *)(lVar12 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar12 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if (bVar23) {
      bVar23 = true;
      goto LAB_14260504b;
    }
  }
  plVar9 = plVar9 + 1;
  goto joined_r0x000142604fed;
}



// FUNCTION 142605960 FUN_142605960 body=1620 status=ok
// SIG undefined FUN_142605960(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142605960(float *param_1,longlong param_2,float *param_3,undefined8 param_4,
                     float param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
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
  
  uVar9 = uRam00000001468b5b88;
  uVar8 = _DAT_1468b5b80;
  uVar7 = uRam00000001468b5b78;
  if (param_2 == 0) {
    *(undefined8 *)param_1 = _DAT_1468b5b70;
    *(undefined8 *)(param_1 + 2) = uVar7;
    uVar7 = uRam00000001468b5b98;
    *(undefined8 *)(param_1 + 8) = _DAT_1468b5b90;
    *(undefined8 *)(param_1 + 10) = uVar7;
    *(undefined8 *)(param_1 + 4) = uVar8;
    *(undefined8 *)(param_1 + 6) = uVar9;
  }
  else {
    fVar42 = *(float *)(param_2 + 0x4d0);
    fVar32 = *(float *)(param_2 + 0x4d4);
    fVar35 = *(float *)(param_2 + 0x4d8);
    fVar16 = *(float *)(param_2 + 0x4c0);
    fVar19 = *(float *)(param_2 + 0x4c4);
    fVar18 = *(float *)(param_2 + 0x4c8);
    fVar20 = *(float *)(param_2 + 0x4cc);
    auVar1 = *(undefined1 (*) [16])(param_2 + 0x4e0);
    fVar2 = auVar1._0_4_;
    fVar3 = auVar1._4_4_;
    fVar4 = auVar1._8_4_;
    fVar12 = _guard_xfg_dispatch_icall_nop(*(float *)(param_2 + 0x4f0) * 0.008726646);
    fVar13 = _guard_xfg_dispatch_icall_nop(param_5 * 0.008726646);
    fVar42 = (fVar12 / fVar13) * fVar42;
    uVar10 = FRotator::Quaternion(param_4,&local_f8);
    fVar36 = fRam0000000146b04e98;
    fVar40 = fRam0000000146b04e94;
    fVar38 = _DAT_146b04e90;
    fVar6 = DAT_1464aa790;
    fVar13 = DAT_1464aa788._4_4_;
    fVar12 = (float)DAT_1464aa788;
    fStack_b0 = param_3[2];
    fStack_b4 = param_3[1];
    local_b8 = *param_3;
    auVar14._4_4_ = DAT_1464aa788._4_4_;
    auVar14._0_4_ = (float)DAT_1464aa788;
    auVar14._8_4_ = DAT_1464aa790;
    auVar14._12_4_ = 0;
    auVar14 = minps(auVar1,auVar14);
    auVar15._4_4_ = -(uint)(auVar14._4_4_ < fRam0000000146b050e4);
    auVar15._0_4_ = -(uint)(auVar14._0_4_ < _DAT_146b050e0);
    auVar15._8_4_ = -(uint)(auVar14._8_4_ < fRam0000000146b050e8);
    auVar15._12_4_ = -(uint)(auVar14._12_4_ < fRam0000000146b050ec);
    iVar11 = movmskps(uVar10,auVar15);
    if (iVar11 == 0) {
      fVar42 = (float)DAT_1464aa788 * fVar42;
      fVar32 = DAT_1464aa788._4_4_ * fVar32;
      fVar35 = DAT_1464aa790 * fVar35;
      fVar38 = local_f8 * fVar20 * _DAT_146b050a0 + fStack_ec * fVar16 +
               fStack_f4 * fVar18 * _DAT_146b05090 + fStack_f0 * fVar19 * _DAT_146b05080;
      fVar40 = local_f8 * fVar18 * fRam0000000146b050a4 + fStack_ec * fVar19 +
               fStack_f4 * fVar20 * fRam0000000146b05094 + fStack_f0 * fVar16 * fRam0000000146b05084
      ;
      fVar36 = local_f8 * fVar19 * fRam0000000146b050a8 + fStack_ec * fVar18 +
               fStack_f4 * fVar16 * fRam0000000146b05098 + fStack_f0 * fVar20 * fRam0000000146b05088
      ;
      fVar22 = local_f8 * fVar16 * fRam0000000146b050ac + fStack_ec * fVar20 +
               fStack_f4 * fVar19 * fRam0000000146b0509c + fStack_f0 * fVar18 * fRam0000000146b0508c
      ;
      fVar16 = fVar35 * fStack_f4 - fVar32 * fStack_f0;
      fVar19 = fVar42 * fStack_f0 - fVar35 * local_f8;
      fVar18 = fVar32 * local_f8 - fVar42 * fStack_f4;
      fVar20 = fStack_ec * 0.0 - fStack_ec * 0.0;
      fVar16 = fVar16 + fVar16;
      fVar19 = fVar19 + fVar19;
      fVar18 = fVar18 + fVar18;
      fVar20 = fVar20 + fVar20;
      local_b8 = (fVar18 * fStack_f4 - fVar19 * fStack_f0) + fVar16 * fStack_ec + fVar42 + local_b8;
      fStack_b4 = (fVar16 * fStack_f0 - fVar18 * local_f8) + fVar19 * fStack_ec + fVar32 + fStack_b4
      ;
      fStack_b0 = (fVar19 * local_f8 - fVar16 * fStack_f4) + fVar18 * fStack_ec + fVar35 + fStack_b0
      ;
      fVar42 = (fVar20 * fStack_ec - fVar20 * fStack_ec) + fVar20 * fStack_ec + 0.0 + 0.0;
    }
    else {
      fVar21 = fStack_f4 + fStack_f4;
      fVar25 = fStack_f0 + fStack_f0;
      fVar46 = (float)DAT_1464aa788 * fVar2;
      fVar47 = DAT_1464aa788._4_4_ * fVar3;
      fVar48 = DAT_1464aa790 * fVar4;
      fVar27 = (local_f8 + local_f8) * local_f8;
      fVar22 = (local_f8 + local_f8) * fStack_ec;
      fVar23 = fVar19 + fVar19;
      fVar26 = fVar18 + fVar18;
      fVar43 = (fVar25 * fStack_ec + fVar21 * local_f8) * (float)DAT_1464aa788;
      fVar44 = (fVar22 + fVar25 * fStack_f4) * DAT_1464aa788._4_4_;
      fVar45 = (fVar21 * fStack_ec + fVar25 * local_f8) * DAT_1464aa790;
      fVar29 = DAT_1464aa788._4_4_ * (fVar21 * local_f8 - fVar25 * fStack_ec);
      fVar31 = DAT_1464aa790 * (fVar25 * fStack_f4 - fVar22);
      fVar33 = (float)DAT_1464aa788 * (fVar25 * local_f8 - fVar21 * fStack_ec);
      fVar28 = (fVar16 + fVar16) * fVar16;
      fVar22 = (float)((uint)((_DAT_146b04e90 - (fVar25 * fStack_f0 + fVar21 * fStack_f4)) *
                             (float)DAT_1464aa788) & _DAT_146b04ea0);
      fVar25 = (float)((uint)((fRam0000000146b04e94 - (fVar25 * fStack_f0 + fVar27)) *
                             DAT_1464aa788._4_4_) & uRam0000000146b04ea4);
      fVar21 = (float)((uint)((fRam0000000146b04e98 - (fVar21 * fStack_f4 + fVar27)) * DAT_1464aa790
                             ) & uRam0000000146b04ea8);
      fVar27 = (float)((uint)((fRam0000000146b04e9c - (fVar27 + fVar27)) * 0.0) &
                      uRam0000000146b04eac);
      fVar24 = (fVar16 + fVar16) * fVar20;
      fVar37 = (fVar26 * fVar20 + fVar23 * fVar16) * fVar2;
      fVar39 = (fVar24 + fVar26 * fVar19) * fVar3;
      fVar41 = (fVar23 * fVar20 + fVar26 * fVar16) * fVar4;
      fVar30 = fVar3 * (fVar23 * fVar16 - fVar26 * fVar20);
      fVar24 = fVar4 * (fVar26 * fVar19 - fVar24);
      fVar34 = fVar2 * (fVar26 * fVar16 - fVar23 * fVar20);
      fVar16 = (float)((uint)((_DAT_146b04e90 - (fVar26 * fVar18 + fVar23 * fVar19)) * fVar2) &
                      _DAT_146b04ea0);
      fVar18 = (float)((uint)((fRam0000000146b04e94 - (fVar26 * fVar18 + fVar28)) * fVar3) &
                      uRam0000000146b04ea4);
      fVar19 = (float)((uint)((fRam0000000146b04e98 - (fVar23 * fVar19 + fVar28)) * fVar4) &
                      uRam0000000146b04ea8);
      fVar20 = (float)((uint)((fRam0000000146b04e9c - (fVar28 + fVar28)) * auVar1._12_4_) &
                      uRam0000000146b04eac);
      local_e8 = fVar37 * fVar29 + fVar16 * fVar22 + fVar34 * fVar45 + fVar20 * local_b8;
      fStack_e4 = fVar37 * fVar25 + fVar16 * fVar43 + fVar34 * fVar31 + fVar20 * fStack_b4;
      fStack_e0 = fVar37 * fVar44 + fVar16 * fVar33 + fVar34 * fVar21 + fVar20 * fStack_b0;
      fStack_dc = fVar37 * fVar27 + fVar16 * fVar27 + fVar34 * fVar27 +
                  fVar20 * fRam0000000146b04e9c;
      local_d8 = fVar18 * fVar29 + fVar30 * fVar22 + fVar39 * fVar45 + fVar20 * local_b8;
      fStack_d4 = fVar18 * fVar25 + fVar30 * fVar43 + fVar39 * fVar31 + fVar20 * fStack_b4;
      fStack_d0 = fVar18 * fVar44 + fVar30 * fVar33 + fVar39 * fVar21 + fVar20 * fStack_b0;
      fStack_cc = fVar18 * fVar27 + fVar30 * fVar27 + fVar39 * fVar27 +
                  fVar20 * fRam0000000146b04e9c;
      local_c8 = fVar24 * fVar29 + fVar41 * fVar22 + fVar19 * fVar45 + fVar20 * local_b8;
      fStack_c4 = fVar24 * fVar25 + fVar41 * fVar43 + fVar19 * fVar31 + fVar20 * fStack_b4;
      fStack_c0 = fVar24 * fVar44 + fVar41 * fVar33 + fVar19 * fVar21 + fVar20 * fStack_b0;
      fStack_bc = fVar24 * fVar27 + fVar41 * fVar27 + fVar19 * fVar27 +
                  fVar20 * fRam0000000146b04e9c;
      local_b8 = fVar32 * fVar29 + fVar42 * fVar22 + fVar35 * fVar45 +
                 fRam0000000146b04e9c * local_b8;
      fStack_b4 = fVar32 * fVar25 + fVar42 * fVar43 + fVar35 * fVar31 +
                  fRam0000000146b04e9c * fStack_b4;
      fStack_b0 = fVar32 * fVar44 + fVar42 * fVar33 + fVar35 * fVar21 +
                  fRam0000000146b04e9c * fStack_b0;
      fStack_ac = fVar32 * fVar27 + fVar42 * fVar27 + fVar35 * fVar27 +
                  fRam0000000146b04e9c * fRam0000000146b04e9c;
      FMatrix::RemoveScaling(&local_e8);
      fVar42 = (float)(-(uint)(_DAT_146b050e0 <= fVar46) & (_DAT_146b050d0 ^ (uint)fVar38) ^
                      _DAT_146b050d0);
      fVar32 = (float)(-(uint)(fRam0000000146b050e4 <= fVar47) &
                       (uRam0000000146b050d4 ^ (uint)fVar40) ^ uRam0000000146b050d4);
      fVar35 = (float)(-(uint)(fRam0000000146b050e8 <= fVar48) &
                       (uRam0000000146b050d8 ^ (uint)fVar36) ^ uRam0000000146b050d8);
      local_e8 = local_e8 * fVar42;
      fStack_e4 = fStack_e4 * fVar42;
      fStack_e0 = fStack_e0 * fVar42;
      fStack_d0 = fStack_d0 * fVar32;
      fStack_d4 = fStack_d4 * fVar32;
      local_d8 = local_d8 * fVar32;
      fStack_c0 = fStack_c0 * fVar35;
      local_c8 = local_c8 * fVar35;
      fStack_c4 = fStack_c4 * fVar35;
      FQuat::FQuat(&local_f8,&local_e8);
      auVar17._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
      auVar17._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
      auVar17._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
      auVar17._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
      fVar18 = auVar17._4_4_ + auVar17._0_4_;
      fVar20 = auVar17._8_4_ + auVar17._4_4_;
      fVar36 = auVar17._12_4_ + auVar17._8_4_;
      fVar22 = auVar17._0_4_ + auVar17._12_4_;
      auVar5._4_4_ = fVar20;
      auVar5._0_4_ = fVar18;
      auVar5._8_4_ = fVar36;
      auVar5._12_4_ = fVar22;
      auVar14 = rsqrtps(auVar17,auVar5);
      fVar32 = auVar14._0_4_;
      fVar35 = auVar14._4_4_;
      fVar16 = auVar14._8_4_;
      fVar19 = auVar14._12_4_;
      fVar32 = (_DAT_146b050c0 - fVar32 * fVar32 * fVar18 * _DAT_146b050c0) * fVar32 + fVar32;
      fVar35 = (fRam0000000146b050c4 - fVar35 * fVar35 * fVar20 * fRam0000000146b050c4) * fVar35 +
               fVar35;
      fVar16 = (fRam0000000146b050c8 - fVar16 * fVar16 * fVar36 * fRam0000000146b050c8) * fVar16 +
               fVar16;
      fVar19 = (fRam0000000146b050cc - fVar19 * fVar19 * fVar22 * fRam0000000146b050cc) * fVar19 +
               fVar19;
      fVar42 = 0.0;
      fVar38 = (float)(((uint)(((_DAT_146b050c0 - fVar32 * fVar32 * fVar18 * _DAT_146b050c0) *
                                fVar32 + fVar32) * local_f8) ^ _DAT_146b050b0) &
                       -(uint)(1e-08 <= fVar18) ^ _DAT_146b050b0);
      fVar40 = (float)(((uint)(((fRam0000000146b050c4 -
                                fVar35 * fVar35 * fVar20 * fRam0000000146b050c4) * fVar35 + fVar35)
                              * fStack_f4) ^ uRam0000000146b050b4) & -(uint)(1e-08 <= fVar20) ^
                      uRam0000000146b050b4);
      fVar36 = (float)(((uint)(((fRam0000000146b050c8 -
                                fVar16 * fVar16 * fVar36 * fRam0000000146b050c8) * fVar16 + fVar16)
                              * fStack_f0) ^ uRam0000000146b050b8) & -(uint)(1e-08 <= fVar36) ^
                      uRam0000000146b050b8);
      fVar22 = (float)(((uint)(((fRam0000000146b050cc -
                                fVar19 * fVar19 * fVar22 * fRam0000000146b050cc) * fVar19 + fVar19)
                              * fStack_ec) ^ uRam0000000146b050bc) & -(uint)(1e-08 <= fVar22) ^
                      uRam0000000146b050bc);
    }
    *param_1 = fVar38;
    param_1[1] = fVar40;
    param_1[2] = fVar36;
    param_1[3] = fVar22;
    param_1[4] = local_b8;
    param_1[5] = fStack_b4;
    param_1[6] = fStack_b0;
    param_1[7] = fVar42;
    param_1[8] = fVar12 * fVar2;
    param_1[9] = fVar13 * fVar3;
    param_1[10] = fVar6 * fVar4;
    param_1[0xb] = auVar1._12_4_ * 0.0;
  }
  return param_1;
}



// FUNCTION 142606300 FUN_142606300 body=194 status=ok
// SIG undefined FUN_142606300(void)

undefined8 FUN_142606300(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_18 [16];
  
  lVar8 = 0;
  if (param_2 == 0) {
    return 0;
  }
  if ((((*(byte *)(param_1 + 0x71b) & 4) == 0) &&
      (cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar5 = 0x8b8;
    if (DVar4 != DAT_1468c21c0) goto LAB_142606368;
  }
  lVar5 = 0x720;
LAB_142606368:
  iVar1 = *(int *)(lVar5 + 8 + param_1);
  if (0 < iVar1) {
    plVar7 = *(longlong **)(lVar5 + param_1);
    do {
      if ((*plVar7 == param_2) && ((char)plVar7[1] == '\x05')) {
        puVar6 = (undefined8 *)FLinearColor::FLinearColor(local_18,(longlong)plVar7 + 0x2c);
        uVar2 = puVar6[1];
        *param_3 = *puVar6;
        param_3[1] = uVar2;
        return 1;
      }
      lVar8 = lVar8 + 1;
      plVar7 = plVar7 + 0x12;
    } while (lVar8 < iVar1);
  }
  return 0;
}



// FUNCTION 1426063d0 FUN_1426063d0 body=17 status=ok
// SIG undefined FUN_1426063d0(void)

undefined4 FUN_1426063d0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1428742e0();
  return *(undefined4 *)(lVar1 + 4);
}



// FUNCTION 142606400 FUN_142606400 body=572 status=ok
// SIG undefined FUN_142606400(void)

void FUN_142606400(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong local_28;
  undefined8 local_20;
  
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  plVar4 = (longlong *)0x0;
  plVar1 = (longlong *)(*param_2 + (longlong)iVar2 * 0x18);
  plVar5 = plVar4;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar5 = plVar1;
  }
  plVar5[2] = *(longlong *)(param_1 + 0x88);
  local_28 = 0;
  local_20 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  lVar3 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Position",0x12);
  if (plVar5 == &local_28) {
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  else {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    *plVar5 = lVar3;
    *(undefined4 *)(plVar5 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)plVar5 + 0xc) = local_20._4_4_;
  }
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  plVar1 = (longlong *)(*param_2 + (longlong)iVar2 * 0x18);
  plVar5 = plVar4;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar5 = plVar1;
  }
  plVar5[2] = *(longlong *)(param_1 + 0xe0);
  local_28 = 0;
  local_20 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  lVar3 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Tangent",0x10);
  if (plVar5 == &local_28) {
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  else {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    *plVar5 = lVar3;
    *(undefined4 *)(plVar5 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)plVar5 + 0xc) = local_20._4_4_;
  }
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  plVar1 = (longlong *)(*param_2 + (longlong)iVar2 * 0x18);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
    plVar4 = plVar1;
  }
  plVar4[2] = *(longlong *)(param_1 + 0x120);
  local_28 = 0;
  local_20 = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  lVar3 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Strength",0x12);
  if (plVar4 == &local_28) {
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  else {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    *plVar4 = lVar3;
    *(undefined4 *)(plVar4 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)plVar4 + 0xc) = local_20._4_4_;
  }
  return;
}



// FUNCTION 142606640 FUN_142606640 body=369 status=ok
// SIG undefined FUN_142606640(void)

void FUN_142606640(longlong param_1,longlong param_2,undefined8 param_3,int *param_4,int *param_5,
                  int *param_6,int *param_7,int *param_8,int *param_9,int *param_10,int *param_11,
                  int *param_12,int *param_13)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_2 + 0x208);
  iVar4 = 2;
  iVar2 = 0x60;
  *param_7 = -1;
  *param_8 = -1;
  *param_9 = -1;
  *param_10 = -1;
  *param_6 = -1;
  *param_11 = 2;
  *param_12 = -1;
  *param_13 = -1;
  *param_5 = *param_4;
  if (0 < *(int *)(param_1 + 0x50)) {
    *param_6 = *param_4 + 0x60;
    iVar3 = *(int *)(param_1 + 0x50);
    iVar2 = (iVar3 + 8) * 0xc;
    if (iVar3 != 0) {
      iVar4 = iVar3 + 1;
    }
    *param_11 = iVar4;
  }
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x38) & 1) != 0)) {
    iVar4 = *(int *)(lVar1 + 0x3c);
    *param_7 = *param_4 + iVar2;
    iVar3 = iVar2 + 8;
    *param_8 = *param_4 + iVar2 + 4;
    iVar5 = (iVar4 + 1) * 0xc;
    iVar2 = iVar3 + iVar5;
    *param_9 = *param_4 + iVar3;
    if ((*(byte *)(lVar1 + 0x128) & 1) != 0) {
      *param_10 = *param_4 + iVar2;
      iVar2 = iVar2 + iVar5;
    }
    iVar3 = 1;
    if (*(int *)(lVar1 + 0x178) != 0) {
      iVar3 = *(int *)(lVar1 + 0x178);
    }
    *param_11 = (iVar4 + 2) * iVar3;
    if ((*(byte *)(lVar1 + 0x184) & 1) != 0) {
      *param_13 = *param_4 + iVar2;
      iVar2 = iVar2 + 4;
    }
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    *param_12 = *param_4 + iVar2;
  }
  return;
}



// FUNCTION 1426067c0 FUN_1426067c0 body=432 status=ok
// SIG undefined FUN_1426067c0(void)

void FUN_1426067c0(longlong param_1,longlong param_2,longlong param_3,int *param_4,longlong *param_5
                  ,longlong *param_6,longlong *param_7,longlong *param_8,longlong *param_9,
                  longlong *param_10,longlong *param_11,longlong *param_12,longlong *param_13,
                  longlong *param_14)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *param_4;
  lVar2 = *(longlong *)(param_2 + 0x208);
  iVar5 = 2;
  *param_4 = iVar4 + 0x60;
  *param_5 = param_3 + iVar4;
  if (0 < *(int *)(param_1 + 0x50)) {
    iVar4 = *param_4;
    *param_4 = iVar4 + 0xc;
    *param_6 = param_3 + iVar4;
    *param_4 = *param_4 + *(int *)(param_1 + 0x50) * 0xc + -0xc;
    if (*(int *)(param_1 + 0x50) != 0) {
      iVar5 = *(int *)(param_1 + 0x50) + 1;
    }
  }
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x38) & 1) != 0)) {
    iVar5 = *param_4;
    iVar1 = *(int *)(lVar2 + 0x3c);
    *param_4 = iVar5 + 4;
    *param_7 = param_3 + iVar5;
    iVar5 = *param_4;
    *param_4 = iVar5 + 4;
    *param_8 = param_3 + iVar5;
    iVar5 = *param_4;
    *param_4 = iVar5 + 0xc;
    *param_9 = param_3 + iVar5;
    iVar5 = (iVar1 + 1) * 0xc;
    iVar3 = *param_4 + iVar5;
    iVar4 = iVar3 + -0xc;
    *param_4 = iVar4;
    if ((*(byte *)(lVar2 + 0x128) & 1) != 0) {
      *param_4 = iVar3;
      *param_10 = iVar4 + param_3;
      *param_4 = *param_4 + iVar5 + -0xc;
      iVar4 = *param_4;
    }
    iVar5 = 1;
    if (*(int *)(lVar2 + 0x178) != 0) {
      iVar5 = *(int *)(lVar2 + 0x178);
    }
    iVar5 = (iVar1 + 2) * iVar5;
    if ((*(byte *)(lVar2 + 0x184) & 1) != 0) {
      *param_4 = iVar4 + 4;
      *param_12 = iVar4 + param_3;
    }
  }
  if (*(char *)(param_1 + 0xa0) != '\0') {
    iVar4 = *param_4;
    *param_4 = iVar4 + 4;
    *param_11 = param_3 + iVar4;
    *param_4 = *param_4 + iVar5 * 4 + -4;
  }
  if (*(int *)(param_2 + 0x218) != -1) {
    iVar5 = *param_4;
    *param_13 = param_3 + *(int *)(param_2 + 0x218);
    *param_4 = iVar5;
  }
  if (*(int *)(param_2 + 0x228) != -1) {
    iVar5 = *param_4;
    *param_14 = param_3 + *(int *)(param_2 + 0x228);
    *param_4 = iVar5;
  }
  return;
}



// FUNCTION 142606970 FUN_142606970 body=226 status=ok
// SIG undefined FUN_142606970(void)

longlong * FUN_142606970(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong local_18 [2];
  
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x6f0) == 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x12);
    iVar1 = (int)param_2[1] + 0x12;
    *(int *)(param_2 + 1) = iVar1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    builtin_wcsncpy((wchar_t *)*param_2,L"No_ParticleSystem",0x12);
  }
  else {
    plVar2 = (longlong *)UObjectBaseUtility::GetPathName(*(longlong *)(param_1 + 0x6f0),local_18,0);
    if (param_2 != plVar2) {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = *plVar2;
      *plVar2 = 0;
      *(int *)(param_2 + 1) = (int)plVar2[1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
      plVar2[1] = 0;
    }
    if (local_18[0] != 0) {
      FMemory::Free();
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 142606a60 FUN_142606a60 body=195 status=ok
// SIG undefined FUN_142606a60(void)

undefined8 * FUN_142606a60(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = param_1[5];
  cVar2 = (**(code **)(*param_1 + 0x118))(param_1,lVar1);
  if ((((cVar2 != '\0') && ((*(byte *)(param_1 + 0x1e) & 1) != 0)) &&
      (*(uint *)(param_1 + 0x25) < 0x801)) && (*(uint *)((longlong)param_1 + 0x124) < 0x2f01)) {
    lVar3 = FUN_14261b0a0(0x1a0);
    if (lVar3 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)
               FDynamicBeam2EmitterData::FDynamicBeam2EmitterData
                         (lVar3,*(undefined8 *)(lVar1 + 0x30));
    }
    cVar2 = (**(code **)(*param_1 + 0x238))(param_1,puVar4 + 7);
    if (cVar2 != '\0') {
      FUN_142673b70(puVar4,param_2);
      return puVar4;
    }
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142606b30 FUN_142606b30 body=112 status=ok
// SIG undefined FUN_142606b30(void)

/* WARNING: Type propagation algorithm not settling */

longlong FUN_142606b30(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong local_res8 [2];
  
  if (*(longlong *)(param_1 + 0x6b8) == 0) {
    lVar3 = 0;
    local_res8[1] = 0;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x6b8) + 0x38);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    bVar2 = true;
    bVar1 = false;
    local_res8[0] = lVar3;
  }
  if (bVar1) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8 + 1);
  }
  if (bVar2) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res8);
  }
  return lVar3;
}



// FUNCTION 142606bd0 FUN_142606bd0 body=227 status=ok
// SIG undefined FUN_142606bd0(void)

undefined8 FUN_142606bd0(longlong param_1,longlong param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  float extraout_XMM0_Da;
  
  lVar5 = 0;
  if (param_2 == 0) {
    return 0;
  }
  if ((((*(byte *)(param_1 + 0x71b) & 4) == 0) &&
      (cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar6 = 0x8b8;
    if (DVar4 != DAT_1468c21c0) goto LAB_142606c36;
  }
  lVar6 = 0x720;
LAB_142606c36:
  iVar2 = *(int *)(lVar6 + 8 + param_1);
  if (0 < iVar2) {
    plVar7 = *(longlong **)(lVar6 + param_1);
    do {
      if (*plVar7 == param_2) {
        if ((char)plVar7[1] == '\x01') {
          *param_3 = *(float *)((longlong)plVar7 + 0xc);
          return 1;
        }
        if ((char)plVar7[1] == '\x02') {
          fVar1 = *(float *)((longlong)plVar7 + 0xc);
          FGenericPlatformMath::SRand();
          *param_3 = extraout_XMM0_Da * (*(float *)(plVar7 + 2) - fVar1) + fVar1;
          return 1;
        }
      }
      lVar5 = lVar5 + 1;
      plVar7 = plVar7 + 0x12;
    } while (lVar5 < iVar2);
  }
  return 0;
}



// FUNCTION 142606cc0 FUN_142606cc0 body=25 status=ok
// SIG undefined FUN_142606cc0(void)

undefined8 * FUN_142606cc0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x9b4);
  *param_2 = *(undefined8 *)(param_1 + 0x9ac);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142606d00 GetLODLevel body=23 status=ok
// SIG undefined GetLODLevel(void)

undefined8 UParticleEmitter::GetLODLevel(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x48) <= param_2) {
    return 0;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)param_2 * 8);
}



// FUNCTION 142606da0 FUN_142606da0 body=178 status=ok
// SIG undefined FUN_142606da0(void)

ulonglong FUN_142606da0(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  DWORD DVar3;
  longlong *in_RAX;
  longlong lVar4;
  
  lVar4 = 0;
  if (param_2 == 0) goto LAB_142606e2f;
  if ((((*(byte *)(param_1 + 0x71b) & 4) == 0) &&
      (cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    in_RAX = (longlong *)0x8b8;
    if (DVar3 == DAT_1468c21c0) goto LAB_142606e04;
  }
  else {
LAB_142606e04:
    in_RAX = (longlong *)0x720;
  }
  iVar1 = *(int *)((longlong)in_RAX + param_1 + 8);
  if (0 < iVar1) {
    in_RAX = *(longlong **)((longlong)in_RAX + param_1);
    do {
      if ((*in_RAX == param_2) && ((char)in_RAX[1] == '\a')) {
        lVar4 = in_RAX[7];
        *param_3 = lVar4;
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
      lVar4 = lVar4 + 1;
      in_RAX = in_RAX + 0x12;
    } while (lVar4 < iVar1);
  }
LAB_142606e2f:
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142606e60 GetModuleAtIndex body=55 status=ok
// SIG undefined GetModuleAtIndex(void)

undefined8 UParticleLODLevel::GetModuleAtIndex(longlong param_1,int param_2)

{
  if (param_2 < 0) {
    if (param_2 == -4) {
      return *(undefined8 *)(param_1 + 0x50);
    }
    if (param_2 == -3) {
      return *(undefined8 *)(param_1 + 0x30);
    }
    if (param_2 == -2) {
      return *(undefined8 *)(param_1 + 0x48);
    }
  }
  else if (param_2 < *(int *)(param_1 + 0x40)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 142606ea0 FUN_142606ea0 body=104 status=ok
// SIG undefined FUN_142606ea0(void)

longlong FUN_142606ea0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_1 + 0x9b0))();
  if (iVar2 != -1) {
    if (((-1 < iVar2) && (iVar2 < (int)param_1[0x131])) &&
       (lVar1 = *(longlong *)(param_1[0x130] + (longlong)iVar2 * 8), lVar1 != 0)) {
      return lVar1;
    }
    if (param_1[0xde] != 0) {
      return *(longlong *)(*(longlong *)(param_1[0xde] + 0x128) + 8 + (longlong)iVar2 * 0x10);
    }
  }
  return 0;
}



// FUNCTION 142606f60 FUN_142606f60 body=55 status=ok
// SIG undefined FUN_142606f60(void)

undefined8 * FUN_142606f60(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  
  *param_2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x6f0);
  if (((lVar1 != 0) && (-1 < param_3)) && (param_3 < *(int *)(lVar1 + 0x130))) {
    *param_2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x128) + (longlong)param_3 * 0x10);
  }
  return param_2;
}



// FUNCTION 142606fa0 FUN_142606fa0 body=126 status=ok
// SIG undefined FUN_142606fa0(void)

int FUN_142606fa0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  LARGE_INTEGER local_res8 [4];
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  lVar4 = (longlong)*(int *)(param_1 + 0x928);
  iVar2 = 0;
  if (0 < lVar4) {
    plVar3 = *(longlong **)(param_1 + 0x920);
    do {
      if (*plVar3 != 0) {
        iVar2 = iVar2 + *(int *)(*plVar3 + 0x128);
      }
      plVar3 = plVar3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return iVar2;
}



// FUNCTION 142607040 FUN_142607040 body=20 status=ok
// SIG undefined FUN_142607040(void)

undefined4 FUN_142607040(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    return *(undefined4 *)(*(longlong *)(param_1 + 0x6f0) + 0x130);
  }
  return 0;
}



// FUNCTION 142607060 FUN_142607060 body=217 status=ok
// SIG undefined FUN_142607060(void)

void FUN_142607060(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  plVar7 = *(longlong **)(param_1 + 0x920);
  uVar5 = 0;
  uVar6 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (plVar7 + *(int *)(param_1 + 0x928) < plVar7) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      plVar2 = (longlong *)*plVar7;
      if ((plVar2 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar2 + 0x200))(), cVar3 != '\0'))
      {
        if (param_4 == '\0') {
          if (plVar2[0x52] != param_3) goto LAB_142607110;
        }
        else {
          plVar2[0x52] = param_3;
        }
        iVar1 = *(int *)(param_2 + 0x48);
        *(int *)(param_2 + 0x48) = iVar1 + 1;
        if (*(int *)(param_2 + 0x4c) < iVar1 + 1) {
          TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_2,iVar1);
        }
        lVar4 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x40) == 0) {
          lVar4 = param_2;
        }
        *(longlong **)(lVar4 + (longlong)iVar1 * 8) = plVar2;
      }
LAB_142607110:
      plVar7 = plVar7 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return;
}



// FUNCTION 142607140 FUN_142607140 body=186 status=ok
// SIG undefined FUN_142607140(void)

/* WARNING: Removing unreachable block (ram,0x0001426071e0) */

void FUN_142607140(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x38) == '\x04') {
    puVar3 = (undefined8 *)FName::ToString(param_1 + 0x40,local_18);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_28,L"BeamSource : Actor: %s\n",puVar4);
    lVar1 = param_2[1];
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
    }
    puVar3 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *param_2);
    *puVar3 = 0;
    *puVar3 = local_28;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 142607200 FUN_142607200 body=186 status=ok
// SIG undefined FUN_142607200(void)

/* WARNING: Removing unreachable block (ram,0x0001426072a0) */

void FUN_142607200(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18 [2];
  
  if (*(char *)(param_1 + 0x38) == '\x04') {
    puVar3 = (undefined8 *)FName::ToString(param_1 + 0x40,local_18);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*puVar3;
    }
    FString::PrintfImpl(&local_28,L"BeamTarget : Actor: %s\n",puVar4);
    lVar1 = param_2[1];
    iVar2 = (int)lVar1 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2);
    }
    puVar3 = (undefined8 *)((longlong)(int)lVar1 * 0x10 + *param_2);
    *puVar3 = 0;
    *puVar3 = local_28;
    *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
    local_20 = 0;
    local_28 = 0;
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1426072c0 FUN_1426072c0 body=107 status=ok
// SIG undefined FUN_1426072c0(void)

float FUN_1426072c0(longlong param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  undefined8 uVar4;
  float fVar5;
  
  cVar1 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != DAT_1468c21c0) {
      uVar4 = 0;
      goto LAB_1426072fa;
    }
  }
  uVar4 = 1;
LAB_1426072fa:
  iVar3 = Scalability::GetEffectsQualityDirect(uVar4);
  fVar5 = _guard_xfg_dispatch_icall_nop
                    (*(float *)(param_1 + 0x60),(float)((int)*DAT_146b04ee0 - iVar3));
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  return fVar5;
}



// FUNCTION 142607330 FUN_142607330 body=107 status=ok
// SIG undefined FUN_142607330(void)

undefined8 * FUN_142607330(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = operator_new(0x160);
  if (lVar2 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)FDynamicBeam2EmitterReplayData::FDynamicBeam2EmitterReplayData(lVar2);
  }
  cVar1 = (**(code **)(*param_1 + 0x238))(param_1,puVar3);
  if (cVar1 == '\0') {
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    return (undefined8 *)0x0;
  }
  return puVar3;
}



// FUNCTION 142607420 FUN_142607420 body=175 status=ok
// SIG undefined FUN_142607420(void)

void FUN_142607420(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  LARGE_INTEGER local_res8;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  FUN_14238d310(param_1,param_2);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x928)) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x920));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x138))(plVar2,param_2);
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x928));
  }
  return;
}



// FUNCTION 1426074d0 FUN_1426074d0 body=1010 status=ok
// SIG undefined FUN_1426074d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001426078ab) */

void FUN_1426074d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  uint local_178;
  longlong *local_170;
  undefined *local_168;
  undefined4 local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128 [24];
  longlong *local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar9 = *(longlong *)(param_1 + 0x6f0);
  uVar6 = 0;
  local_68 = (longlong *)0x0;
  local_60 = 0;
  if (lVar9 != 0) {
    local_170 = (longlong *)0x0;
    local_168 = (undefined *)0x0;
    local_178 = 0;
    local_158 = param_1;
    local_148 = param_3;
    local_130 = param_2;
    if (0 < *(int *)(lVar9 + 0x48)) {
      local_150 = 0;
      uVar16 = uVar6;
      do {
        uVar13 = 0;
        local_138 = *(longlong *)(local_150 + *(longlong *)(lVar9 + 0x40));
        uVar14 = (uint)uVar16;
        if ((local_138 != 0) && (uVar15 = uVar13, 0 < *(int *)(local_138 + 0x48))) {
          do {
            uVar16 = 0;
            lVar9 = *(longlong *)(uVar13 + *(longlong *)(local_138 + 0x40));
            if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x30) != 0)) {
              local_168 = (undefined *)((ulonglong)local_168 & 0xffffffff00000000);
              if (((int)uVar6 < 0) && ((int)uVar6 != 0)) {
                TArray<void_*,FDefaultAllocator>::ResizeTo(&local_170,0);
              }
              local_188 = param_1 + 0x980;
              local_180 = param_1;
              FUN_1426078e0(lVar9,&local_170,*(longlong *)(param_1 + 0x6f0) + 0x128,param_1 + 0x6f8)
              ;
              iVar1 = *(int *)(*(longlong *)(lVar9 + 0x30) + 0xe4);
              iVar4 = *(int *)(*(longlong *)(lVar9 + 0x30) + 0xe0);
              if (iVar1 <= iVar4) {
                iVar1 = iVar4;
              }
              uVar6 = (longlong)(int)local_168 & 0x1fffffffffffffff;
              if (local_170 + (int)local_168 < local_170) {
                uVar6 = uVar16;
              }
              plVar10 = local_170;
              plVar11 = local_68;
              if (uVar6 != 0) {
                do {
                  uVar3 = local_60;
                  local_140 = *plVar10;
                  if (local_140 != 0) {
                    plVar8 = local_128;
                    if (plVar11 != (longlong *)0x0) {
                      plVar8 = plVar11;
                    }
                    plVar5 = plVar8 + (longlong)(int)local_60 * 2;
                    for (; plVar8 != plVar5; plVar8 = plVar8 + 2) {
                      if (*plVar8 == local_140) {
                        iVar4 = (int)(float)iVar1;
                        if (iVar4 <= (int)*(float *)(plVar8 + 1)) {
                          iVar4 = (int)*(float *)(plVar8 + 1);
                        }
                        *(float *)(plVar8 + 1) = (float)iVar4;
                        plVar11 = local_68;
                        goto LAB_1426076d6;
                      }
                    }
                    lVar9 = (longlong)(int)local_60;
                    iVar4 = (int)local_60 + 1;
                    local_60 = CONCAT44(local_60._4_4_,iVar4);
                    if (local_60._4_4_ < iVar4) {
                      TArray<TTuple<UMaterialInterface_const_*,float>,TInlineAllocator<12,FDefaultAllocator>_>
                      ::ResizeGrow(local_128,uVar3 & 0xffffffff);
                      plVar11 = local_68;
                    }
                    plVar8 = local_128;
                    if (plVar11 != (longlong *)0x0) {
                      plVar8 = plVar11;
                    }
                    plVar8 = plVar8 + lVar9 * 2;
                    if (plVar8 != (longlong *)0x0) {
                      *(float *)(plVar8 + 1) = (float)iVar1;
                      *plVar8 = local_140;
                      plVar11 = local_68;
                    }
                  }
LAB_1426076d6:
                  uVar16 = uVar16 + 1;
                  plVar10 = plVar10 + 1;
                } while (uVar16 != uVar6);
              }
              uVar6 = (ulonglong)local_168 >> 0x20;
              param_1 = local_158;
            }
            uVar14 = (int)uVar15 + 1;
            uVar13 = uVar13 + 8;
            uVar15 = (ulonglong)uVar14;
          } while ((int)uVar14 < *(int *)(local_138 + 0x48));
          lVar9 = *(longlong *)(param_1 + 0x6f0);
          uVar14 = local_178;
        }
        local_178 = uVar14 + 1;
        uVar16 = (ulonglong)local_178;
        local_150 = local_150 + 8;
      } while ((int)local_178 < *(int *)(lVar9 + 0x48));
    }
    uVar2 = local_130;
    lVar9 = local_148;
    plVar10 = local_170;
    AddMaterials(local_128,param_1 + 0x6f8,0x3f800000);
    if ((int)local_60 != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146b051d4) &&
         (_Init_thread_header(&DAT_146b051d4), DAT_146b051d4 == -1)) {
        puVar12 = &DAT_1465343f4;
        for (lVar7 = 4; lVar7 != 0; lVar7 = lVar7 + -1) {
          *puVar12 = 0x3f800000;
          puVar12 = puVar12 + 1;
        }
        _Init_thread_footer(&DAT_146b051d4);
      }
      local_170 = (longlong *)0x0;
      local_160 = 0xffff0000;
      local_168 = &DAT_1465343f0;
      plVar11 = local_128;
      if (local_68 != (longlong *)0x0) {
        plVar11 = local_68;
      }
      plVar8 = plVar11 + (longlong)(int)local_60 * 2;
      for (; plVar11 != plVar8; plVar11 = plVar11 + 2) {
        local_170 = (longlong *)*plVar11;
        local_188 = lVar9;
        FUN_1428583a0(uVar2,param_1 + 0x1d0,&local_170,
                      *(float *)(plVar11 + 1) * *(float *)(param_1 + 0x1e8));
      }
    }
    if (plVar10 != (longlong *)0x0) {
      FMemory::Free(plVar10);
    }
    if (local_68 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1426078e0 FUN_1426078e0 body=1314 status=ok
// SIG undefined FUN_1426078e0(void)

void FUN_1426078e0(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5,longlong param_6)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong local_res8;
  longlong local_58;
  ulonglong uVar9;
  
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    return;
  }
  local_58 = *(longlong *)(param_1 + 0x48);
  uVar14 = 0;
  if (local_58 == 0) {
LAB_142607955:
    local_58 = 0;
  }
  else {
    lVar4 = UTextureRenderTargetCube::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(local_58 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_58 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142607955;
  }
  local_res8 = *(longlong *)(param_1 + 0x48);
  if (local_res8 == 0) {
LAB_1426079a4:
    local_res8 = 0;
  }
  else {
    lVar4 = FUN_1429d11b0();
    if ((*(int *)(*(longlong *)(local_res8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res8 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1426079a4;
  }
  if ((local_58 != 0) && (*(int *)(local_58 + 0x48) != 0)) {
    plVar11 = *(longlong **)(local_58 + 0x40);
    plVar7 = plVar11 + *(int *)(local_58 + 0x48);
    do {
      if (plVar11 == plVar7) {
        return;
      }
      uVar14 = 0;
      lVar4 = *plVar11;
      if ((lVar4 != 0) &&
         (lVar12 = *(longlong *)**(undefined8 **)(lVar4 + 0x38), uVar10 = uVar14, uVar16 = uVar14,
         0 < *(int *)(lVar12 + 0x480))) {
        do {
          uVar9 = 0;
          iVar13 = (int)uVar10;
          if (((longlong)uVar14 < 0) || (*(int *)(*(longlong *)(param_1 + 0x30) + 0x158) <= iVar13))
          {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (0 < (int)param_3[1])) {
            plVar5 = (longlong *)*param_3;
            uVar10 = uVar9;
            do {
              if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x150) + uVar14 * 8)
                  == *plVar5) {
                lVar15 = ((longlong *)*param_3)[uVar10 * 2 + 1];
                if (((longlong)uVar10 < 0) || ((int)param_5[1] <= (int)uVar9)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((bVar2) && (lVar1 = *(longlong *)(*param_5 + uVar10 * 8), lVar1 != 0)) {
                  lVar15 = lVar1;
                }
                if (lVar15 != 0) goto LAB_142607b6e;
                break;
              }
              uVar8 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar8;
              uVar10 = uVar10 + 1;
              plVar5 = plVar5 + 2;
            } while ((int)uVar8 < (int)param_3[1]);
          }
          iVar3 = *(int *)(param_1 + 0x40) + -1;
          lVar15 = (longlong)iVar3;
          if (-1 < iVar3) {
            do {
              lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar15 * 8);
              if (lVar1 != 0) {
                lVar6 = FUN_1429cc280();
                if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if (((bVar2) && ((*(byte *)(lVar1 + 0x28) & 0x80) != 0)) &&
                   (iVar13 < *(int *)(lVar1 + 0x40))) {
                  lVar15 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + uVar14 * 8);
                  if (lVar15 != 0) goto LAB_142607b6e;
                  break;
                }
              }
              lVar15 = lVar15 + -1;
            } while (-1 < lVar15);
          }
          if ((((*(byte *)(local_58 + 0x60) & 1) != 0) &&
              (lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38), lVar15 != 0)) ||
             (lVar15 = UStaticMesh::GetMaterial
                                 (lVar4,*(undefined4 *)(uVar16 + *(longlong *)(lVar12 + 0x478))),
             lVar15 != 0)) {
LAB_142607b6e:
            iVar3 = (int)param_2[1];
            *(int *)(param_2 + 1) = iVar3 + 1;
            if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
            }
            *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar15;
          }
          uVar14 = uVar14 + 1;
          uVar10 = (ulonglong)(iVar13 + 1U);
          uVar16 = uVar16 + 0x18;
        } while ((int)(iVar13 + 1U) < *(int *)(lVar12 + 0x480));
      }
      plVar11 = plVar11 + 1;
    } while( true );
  }
  if (local_res8 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    if ((0 < *(int *)(lVar4 + 0x158)) && (0 < (int)param_3[1])) {
      plVar7 = (longlong *)*param_3;
      uVar10 = uVar14;
      do {
        iVar13 = (int)uVar10;
        if (**(longlong **)(lVar4 + 0x150) == *plVar7) {
          lVar12 = ((longlong *)*param_3)[(longlong)iVar13 * 2 + 1];
          if ((iVar13 < 0) || ((int)param_5[1] <= iVar13)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar15 = *(longlong *)(*param_5 + (longlong)iVar13 * 8), lVar15 != 0)) {
            lVar12 = lVar15;
          }
          if (lVar12 != 0) goto LAB_142607db6;
          break;
        }
        uVar10 = (ulonglong)(iVar13 + 1);
        uVar14 = uVar14 + 1;
        plVar7 = plVar7 + 2;
      } while ((longlong)uVar14 < (longlong)(int)param_3[1]);
    }
    lVar12 = *(longlong *)(lVar4 + 0x38);
LAB_142607db6:
    iVar13 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar13 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
    }
    *(longlong *)(*param_2 + (longlong)iVar13 * 8) = lVar12;
    return;
  }
  if ((*(char *)(local_res8 + 0x40) == '\0') || (param_6 == 0)) {
    lVar4 = *(longlong *)(local_res8 + 0x38);
  }
  else {
    lVar4 = FUN_1425e6d30();
    if (lVar4 == 0) goto LAB_142607cf7;
    lVar4 = *(longlong *)(lVar4 + 0x718);
  }
  if (lVar4 != 0) {
    plVar7 = *(longlong **)(lVar4 + 0xa0);
    plVar11 = plVar7 + (longlong)*(int *)(lVar4 + 0xa8) * 6;
    if (plVar7 != plVar11) {
      iVar13 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x40) + -1;
        lVar4 = (longlong)iVar3;
        if (-1 < iVar3) {
          do {
            lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar4 * 8);
            if (lVar12 != 0) {
              lVar15 = FUN_1429cc280();
              if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (((bVar2) && ((*(byte *)(lVar12 + 0x28) & 0x80) != 0)) &&
                 (iVar13 < *(int *)(lVar12 + 0x40))) {
                lVar4 = *(longlong *)(uVar14 + *(longlong *)(lVar12 + 0x38));
                if (lVar4 != 0) goto LAB_142607cb6;
                break;
              }
            }
            lVar4 = lVar4 + -1;
          } while (-1 < lVar4);
        }
        lVar4 = *plVar7;
LAB_142607cb6:
        iVar3 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar3 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
        }
        iVar13 = iVar13 + 1;
        uVar14 = uVar14 + 8;
        plVar7 = plVar7 + 6;
        *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar4;
      } while (plVar7 != plVar11);
    }
  }
LAB_142607cf7:
  if ((*(byte *)(local_res8 + 0xa4) & 4) != 0) {
    iVar13 = (int)param_2[1];
    lVar4 = *(longlong *)(param_1 + 0x30);
    *(int *)(param_2 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar13 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar13);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar13 * 8) = *(undefined8 *)(lVar4 + 0x38);
  }
  return;
}



// FUNCTION 142607e10 FUN_142607e10 body=209 status=ok
// SIG undefined FUN_142607e10(void)

void FUN_142607e10(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined8 local_38;
  undefined8 local_30;
  
  plVar6 = *(longlong **)(param_1 + 0x40);
  local_38 = 0;
  local_30 = 0;
  plVar1 = plVar6 + *(int *)(param_1 + 0x48);
  for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
    lVar2 = *plVar6;
    if (lVar2 != 0) {
      plVar3 = *(longlong **)(lVar2 + 0x40);
      uVar4 = (longlong)*(int *)(lVar2 + 0x48) & 0x1fffffffffffffff;
      if (plVar3 + *(int *)(lVar2 + 0x48) < plVar3) {
        uVar4 = 0;
      }
      uVar5 = 0;
      if (uVar4 != 0) {
        do {
          if (*plVar3 != 0) {
            FUN_1426078e0(*plVar3,param_2,param_1 + 0x128,&local_38,&local_38,0);
          }
          plVar3 = plVar3 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar4);
      }
    }
  }
  return;
}



// FUNCTION 142607ef0 FUN_142607ef0 body=303 status=ok
// SIG undefined FUN_142607ef0(void)

void FUN_142607ef0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x6f0);
  if ((lVar3 != 0) && (iVar6 = 0, 0 < *(int *)(lVar3 + 0x48))) {
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar5 + *(longlong *)(lVar3 + 0x40));
      if ((lVar1 != 0) && (iVar4 = 0, 0 < *(int *)(lVar1 + 0x48))) {
        lVar3 = 0;
        do {
          lVar2 = *(longlong *)(lVar3 + *(longlong *)(lVar1 + 0x40));
          if (lVar2 != 0) {
            FUN_1426078e0(lVar2,param_2,*(longlong *)(param_1 + 0x6f0) + 0x128,param_1 + 0x6f8,
                          param_1 + 0x980,param_1);
          }
          iVar4 = iVar4 + 1;
          lVar3 = lVar3 + 8;
        } while (iVar4 < *(int *)(lVar1 + 0x48));
        lVar3 = *(longlong *)(param_1 + 0x6f0);
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar6 < *(int *)(lVar3 + 0x48));
  }
  iVar6 = *(int *)(param_1 + 0x700);
  if (iVar6 != 0) {
    iVar4 = (int)param_2[1];
    if (*(int *)((longlong)param_2 + 0xc) < iVar4 + iVar6) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
      iVar4 = (int)param_2[1];
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*param_2 + (longlong)iVar4 * 8),*(void **)(param_1 + 0x6f8),
               (longlong)iVar6 << 3);
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar6;
  }
  return;
}



// FUNCTION 142608020 FUN_142608020 body=332 status=ok
// SIG undefined FUN_142608020(void)

ulonglong FUN_142608020(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  DWORD DVar4;
  ulonglong in_RAX;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar6 = 0;
  if (param_2 == 0) goto LAB_1426080ba;
  if ((((*(byte *)(param_1 + 0x71b) & 4) == 0) &&
      (cVar3 = FUN_1415ad720(&DAT_1468e2448), cVar3 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar7 = 0x8b8;
    if (DVar4 == DAT_1468c21c0) goto LAB_142608081;
  }
  else {
LAB_142608081:
    lVar7 = 0x720;
  }
  iVar1 = *(int *)(lVar7 + 8 + param_1);
  uVar5 = (ulonglong)iVar1;
  in_RAX = uVar5;
  if (0 < iVar1) {
    plVar8 = *(longlong **)(lVar7 + param_1);
    do {
      if (*plVar8 == param_2) {
        in_RAX = 0;
        if ((char)plVar8[1] == '\x03') {
          *param_3 = *(undefined8 *)((longlong)plVar8 + 0x14);
          uVar2 = *(undefined4 *)((longlong)plVar8 + 0x1c);
          *(undefined4 *)(param_3 + 1) = uVar2;
          return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
        }
        if ((char)plVar8[1] == '\x04') {
          fVar9 = (float)FGenericPlatformMath::SRand();
          fVar10 = (float)FGenericPlatformMath::SRand();
          fVar11 = (float)FGenericPlatformMath::SRand();
          fVar9 = (*(float *)(plVar8 + 5) - *(float *)((longlong)plVar8 + 0x1c)) * fVar9 +
                  *(float *)((longlong)plVar8 + 0x1c);
          *param_3 = CONCAT44((*(float *)((longlong)plVar8 + 0x24) - *(float *)(plVar8 + 3)) *
                              fVar10 + *(float *)(plVar8 + 3),
                              (*(float *)(plVar8 + 4) - *(float *)((longlong)plVar8 + 0x14)) *
                              fVar11 + *(float *)((longlong)plVar8 + 0x14));
          *(float *)(param_3 + 1) = fVar9;
          return CONCAT71((uint7)(uint3)((uint)fVar9 >> 8),1);
        }
      }
      lVar6 = lVar6 + 1;
      plVar8 = plVar8 + 0x12;
    } while (lVar6 < (longlong)uVar5);
  }
LAB_1426080ba:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142608170 FUN_142608170 body=565 status=ok
// SIG undefined FUN_142608170(void)

ulonglong FUN_142608170(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  uVar7 = FUN_142616380(param_1,0,0);
  uVar9 = 1;
  bVar3 = true;
  if (*(char *)(param_1 + 0x71f) != '\0') {
    return uVar7 & 0xffffffffffffff00;
  }
  bVar4 = false;
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x928)) {
    iVar10 = *(int *)(param_1 + 0x928);
    lVar12 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x920) + lVar12 * 8);
      if (((plVar1 != (longlong *)0x0) && (lVar8 = plVar1[5], lVar8 != 0)) &&
         ((*(byte *)(plVar1 + 0x1e) & 1) != 0)) {
        bVar5 = false;
        if (*(char *)((longlong)plVar1 + 0x1a4) != '\0') {
          bVar5 = bVar3;
        }
        bVar3 = bVar5;
        if ((*(byte *)(lVar8 + 0x2c) & 1) == 0) {
          if ((*(longlong *)(lVar8 + 0x20) != 0) &&
             ((*(byte *)(*(longlong *)(lVar8 + 0x20) + 0xa8) & 4) != 0)) {
            uVar9 = 0;
          }
        }
        else {
          if (*(int *)(*(longlong *)(lVar8 + 0x30) + 0x7c) < 1) {
            cVar6 = (**(code **)(*plVar1 + 0x200))();
            if (cVar6 != '\0') goto LAB_142608267;
            if ((*(byte *)(param_1 + 0x718) & 0x10) != 0) goto LAB_142608274;
LAB_142608259:
            uVar9 = 0;
          }
          else {
LAB_142608267:
            if ((*(byte *)(param_1 + 0x718) & 0x12) == 0x12) {
LAB_142608274:
              uVar7 = 0;
              if ((int)plVar1[0x25] == 0) {
                uVar7 = uVar9;
              }
              iVar10 = *(int *)(param_1 + 0x928);
              uVar9 = uVar7;
              goto LAB_142608327;
            }
            cVar6 = (**(code **)(*plVar1 + 0xd8))();
            if (cVar6 == '\0') goto LAB_142608259;
            if ((*(byte *)(plVar1 + 0x1e) & 4) != 0) {
              iVar10 = 0;
              lVar8 = 0;
              if (0 < *(int *)(param_1 + 0x928)) {
                do {
                  if ((lVar8 != lVar12) &&
                     (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x920) + lVar8 * 8),
                     plVar2 != (longlong *)0x0)) {
                    (**(code **)(*plVar2 + 0x170))(plVar2,plVar1);
                  }
                  iVar10 = iVar10 + 1;
                  lVar8 = lVar8 + 1;
                } while (iVar10 < *(int *)(param_1 + 0x928));
              }
              (**(code **)*plVar1)(plVar1,1);
              bVar4 = true;
              *(undefined8 *)(*(longlong *)(param_1 + 0x920) + lVar12 * 8) = 0;
              iVar10 = *(int *)(param_1 + 0x928);
              goto LAB_142608327;
            }
          }
          iVar10 = *(int *)(param_1 + 0x928);
        }
      }
LAB_142608327:
      iVar11 = iVar11 + 1;
      lVar12 = lVar12 + 1;
    } while (iVar11 < iVar10);
    if (!bVar3) goto LAB_142608367;
  }
  if ((*(longlong *)(param_1 + 0x6f0) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x6f0) + 0xcc) != '\0')) {
    FUN_142600fa0(param_1);
  }
LAB_142608367:
  if (bVar4) {
    FUN_142616380(param_1,1,1);
    if (*(longlong *)(param_1 + 0x640) != 0) {
      FUN_142681f80(*(longlong *)(param_1 + 0x640),0);
    }
  }
  return uVar9;
}



// FUNCTION 1426083b0 FUN_1426083b0 body=363 status=ok
// SIG undefined FUN_1426083b0(void)

void FUN_1426083b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_res8 [2];
  
  puVar5 = (undefined4 *)0x0;
  puVar4 = puVar5;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 0x48)) {
    puVar4 = (undefined4 *)**(undefined8 **)(*(longlong *)(param_1 + 0x10) + 0x40);
  }
  lVar1 = *(longlong *)(puVar4 + 0x12);
  *(longlong *)(param_1 + 0x1f0) = lVar1;
  *(undefined8 *)(param_1 + 0x1f8) = **(undefined8 **)(lVar1 + 0x120);
  *(undefined8 *)(param_1 + 0x200) = **(undefined8 **)(lVar1 + 0x130);
  *(undefined8 *)(param_1 + 0x208) = **(undefined8 **)(lVar1 + 0x140);
  *(undefined8 *)(param_1 + 0x210) = **(undefined8 **)(lVar1 + 0x150);
  *(undefined8 *)(param_1 + 0x220) = **(undefined8 **)(lVar1 + 0x160);
  FUN_142629320(param_1);
  lVar1 = *(longlong *)(param_1 + 0x1f0);
  if (0 < *(int *)(lVar1 + 0x158)) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar2 + 0xb8,local_res8,**(undefined8 **)(lVar1 + 0x150));
    puVar4 = puVar5;
    if (local_res8[0] != -1) {
      puVar4 = (undefined4 *)(*(longlong *)(lVar2 + 0xb8) + (longlong)local_res8[0] * 0x18);
    }
    puVar3 = puVar4 + 2;
    if (puVar4 == (undefined4 *)0x0) {
      puVar3 = puVar5;
    }
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x218) = *puVar3;
    }
  }
  if (0 < *(int *)(lVar1 + 0x168)) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(lVar2 + 0xb8,local_res8,**(undefined8 **)(lVar1 + 0x160));
    puVar4 = puVar5;
    if (local_res8[0] != -1) {
      puVar4 = (undefined4 *)(*(longlong *)(lVar2 + 0xb8) + (longlong)local_res8[0] * 0x18);
    }
    puVar3 = puVar4 + 2;
    if (puVar4 == (undefined4 *)0x0) {
      puVar3 = puVar5;
    }
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x228) = *puVar3;
    }
  }
  return;
}



// FUNCTION 142608520 FUN_142608520 body=491 status=ok
// SIG undefined FUN_142608520(void)

void FUN_142608520(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  FParticleEmitterInstance::InitParameters();
  lVar3 = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar3 = **(longlong **)(param_2 + 0x40);
  }
  lVar4 = *(longlong *)(lVar3 + 0x48);
  *(longlong *)(param_1 + 0x1f0) = lVar4;
  uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x30) + 100);
  if ((uVar2 & 1) != 0) {
    *(uint *)(*(longlong *)(lVar3 + 0x30) + 100) = uVar2 & 0xfffffffe;
    lVar4 = *(longlong *)(param_1 + 0x1f0);
  }
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  if (*(int *)(lVar4 + 0x48) == 0) {
    *(undefined4 *)(lVar4 + 0x48) = 1;
    lVar4 = *(longlong *)(param_1 + 0x1f0);
  }
  plVar1 = (longlong *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(lVar4 + 0x48);
  *(undefined1 *)(param_1 + 0x22c) = 1;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(uint *)(param_1 + 0x238) = (uint)*(byte *)(lVar4 + 0x38);
  *(undefined4 *)(param_1 + 0x248) = 0;
  if (*(int *)(param_1 + 0x24c) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
    iVar5 = *(int *)(param_1 + 0x248);
  }
  lVar3 = *(longlong *)(param_1 + 0x1f0);
  *(int *)(param_1 + 0x248) = iVar5 + 1;
  if (*(int *)(param_1 + 0x24c) < iVar5 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,iVar5);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar3 + 0x3c);
  *(undefined4 *)(param_1 + 0x270) = 0;
  if (*(int *)(param_1 + 0x274) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x268,0);
  }
  *(undefined4 *)(param_1 + 0x280) = 0;
  if (*(int *)(param_1 + 0x284) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x278,0);
  }
  *(undefined4 *)(param_1 + 0x290) = 0;
  if (*(int *)(param_1 + 0x294) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x288,0);
  }
  *(undefined4 *)(param_1 + 0x2a0) = 0;
  if (*(int *)(param_1 + 0x2a4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x298,0);
  }
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  if (*(int *)(param_1 + 0x2b4) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x2a8,0);
  }
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if (*(int *)(param_1 + 0x2f4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2e8,0);
  }
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (*(int *)(param_1 + 0x304) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x2f8,0);
  }
  *(undefined4 *)(param_1 + 0x310) = 0;
  if (*(int *)(param_1 + 0x314) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x308,0);
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x2c8,0);
  }
  FUN_14260bd00(param_1);
  FUN_14260c5b0(param_1);
  return;
}



// FUNCTION 142608710 FUN_142608710 body=1117 status=ok
// SIG undefined FUN_142608710(void)

void FUN_142608710(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte bVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 uVar17;
  uint uVar18;
  longlong *plVar19;
  int iVar20;
  LARGE_INTEGER local_res10;
  char local_res18;
  char local_res20;
  
  cVar7 = UObjectBaseUtility::IsTemplate();
  if (cVar7 != '\x01') {
    FFXAsyncBatcher::Flush(&DAT_146b04fd8);
    QueryPerformanceCounter(&local_res10);
    bVar2 = *(byte *)(param_1 + 0x71b);
    while ((bVar2 & 0x10) != 0) {
      FUN_1416b1810(0);
      bVar2 = *(byte *)(param_1 + 0x71b);
    }
    FUN_142602d20(param_1);
    lVar9 = *(longlong *)(param_1 + 0x6f0);
    if (lVar9 != 0) {
      *(undefined4 *)(param_1 + 0x788) = *(undefined4 *)(lVar9 + 0x34);
      uVar3 = *(undefined4 *)(lVar9 + 0x38);
      *(byte *)(param_1 + 0x71a) = *(byte *)(param_1 + 0x71a) | 0x20;
      *(undefined4 *)(param_1 + 0x78c) = uVar3;
      lVar9 = FUN_1428742e0();
      iVar8 = *(int *)(lVar9 + 4);
      local_res20 = FUN_142385ac0(param_1);
      plVar16 = (longlong *)(param_1 + 0x920);
      iVar20 = *(int *)(param_1 + 0x928);
      iVar4 = *(int *)(param_1 + 0x928);
      iVar5 = *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x48);
      if (iVar20 < iVar5) {
        *(int *)(param_1 + 0x928) = iVar5;
        if (*(int *)(param_1 + 0x92c) < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar16 + (longlong)iVar20 * 8),0,(longlong)(iVar5 - iVar20) << 3);
      }
      else if ((iVar5 < iVar20) && (iVar20 != iVar5)) {
        *(int *)(param_1 + 0x928) = iVar5;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar16);
      }
      bVar2 = *(byte *)(param_1 + 0x718);
      bVar13 = bVar2;
      if (iVar4 == 0) {
        bVar13 = 0;
      }
      iVar20 = *(int *)(param_1 + 0x790);
      cVar7 = '\0';
      local_res18 = '\0';
      *(byte *)(param_1 + 0x718) = (bVar2 ^ bVar13) & 1 ^ bVar2;
      uVar17 = 0 < iVar20;
      plVar14 = (longlong *)0x0;
      local_res10.s.LowPart._0_1_ = uVar17;
      if (0 < iVar5) {
        bVar2 = (byte)iVar8 & 0x1f;
        plVar15 = plVar14;
        do {
          plVar19 = *(longlong **)
                     (*(longlong *)(*(longlong *)(param_1 + 0x6f0) + 0x40) + (longlong)plVar15 * 8);
          if (plVar19 != (longlong *)0x0) {
            plVar10 = plVar14;
            if (iVar4 != 0) {
              plVar10 = *(longlong **)(*plVar16 + (longlong)plVar15 * 8);
            }
            if (((int)(uint)*(byte *)(param_1 + 0x24f) <= iVar8) &&
               ((*(uint *)(plVar19 + 0xd) & (1 << bVar2 | 1U >> 0x20 - bVar2)) != 0)) {
              plVar12 = (longlong *)plVar19[8];
              plVar1 = plVar12 + (int)plVar19[9];
              for (; plVar12 != plVar1; plVar12 = plVar12 + 1) {
                if ((*plVar12 != 0) && ((*(byte *)(*plVar12 + 0x2c) & 1) != 0)) {
                  if (local_res20 != '\0') {
                    if (plVar10 == (longlong *)0x0) {
                      plVar10 = (longlong *)(**(code **)(*plVar19 + 0x278))(plVar19,param_1);
                      *(longlong **)(*plVar16 + (longlong)plVar15 * 8) = plVar10;
                    }
                    else {
                      (**(code **)(*plVar10 + 0xf8))(plVar10,0);
                      (**(code **)(*plVar10 + 0x100))(plVar10,0);
                    }
                    cVar7 = local_res18;
                    if (plVar10 != (longlong *)0x0) {
                      *(uint *)(plVar10 + 0x1e) = *(uint *)(plVar10 + 0x1e) | 1;
                      (**(code **)(*plVar10 + 8))(plVar10,plVar19,param_1);
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                      iVar6 = (int)plVar19[9];
                      if (iVar20 <= (int)plVar19[9]) {
                        iVar6 = iVar20;
                      }
                      iVar20 = iVar6;
                      local_res10.s.LowPart._0_1_ = local_res10.s.LowPart._0_1_ | iVar4 != 0;
                      cVar7 = local_res18;
                    }
                    goto LAB_1426089ee;
                  }
                  break;
                }
              }
            }
            if (plVar10 != (longlong *)0x0) {
              (**(code **)*plVar10)(plVar10,1);
              local_res18 = '\x01';
              *(undefined8 *)(*plVar16 + (longlong)plVar15 * 8) = 0;
              cVar7 = local_res18;
            }
          }
LAB_1426089ee:
          uVar17 = local_res10.s.LowPart._0_1_;
          plVar15 = (longlong *)((longlong)plVar15 + 1);
        } while ((longlong)plVar15 < (longlong)iVar5);
        if (cVar7 != '\0') {
          FFXAsyncBatcher::Flush(&DAT_146b04fd8);
          QueryPerformanceCounter(&local_res10);
          bVar2 = *(byte *)(param_1 + 0x71b);
          while ((bVar2 & 0x10) != 0) {
            FUN_1416b1810(0);
            bVar2 = *(byte *)(param_1 + 0x71b);
          }
          FUN_142602d20(param_1);
          if (*(longlong *)(param_1 + 0x640) != 0) {
            FUN_142681f80(*(longlong *)(param_1 + 0x640),0);
          }
        }
      }
      if (uVar17 != 0) {
        if (iVar20 != *(int *)(param_1 + 0x790)) {
          *(int *)(param_1 + 0x790) = iVar20;
        }
        plVar15 = plVar14;
        plVar19 = plVar14;
        if (0 < *(int *)(param_1 + 0x928)) {
          do {
            lVar9 = *(longlong *)((longlong)plVar19 + *plVar16);
            if (lVar9 != 0) {
              iVar8 = *(int *)(param_1 + 0x790);
              *(int *)(lVar9 + 0x20) = iVar8;
              iVar20 = *(int *)(*(longlong *)(lVar9 + 0x10) + 0x48);
              if (iVar20 <= iVar8) {
                iVar8 = iVar20 + -1;
                *(int *)(lVar9 + 0x20) = iVar8;
              }
              *(undefined8 *)(lVar9 + 0x28) =
                   *(undefined8 *)
                    (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x40) + (longlong)iVar8 * 8);
            }
            uVar18 = (int)plVar15 + 1;
            plVar15 = (longlong *)(ulonglong)uVar18;
            plVar19 = plVar19 + 1;
          } while ((int)uVar18 < *(int *)(param_1 + 0x928));
        }
      }
      if (*(longlong *)(param_1 + 0x858) == 0) {
        *(undefined8 *)(param_1 + 0x858) = *(undefined8 *)(param_1 + 0x118);
      }
      plVar16 = *(longlong **)(*(longlong *)(param_1 + 0x6f0) + 0x138);
      uVar11 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x6f0) + 0x140);
      plVar15 = (longlong *)(uVar11 & 0x1fffffffffffffff);
      if (plVar16 + uVar11 < plVar16) {
        plVar15 = plVar14;
      }
      if (plVar15 != (longlong *)0x0) {
        do {
          plVar19 = (longlong *)*plVar16;
          if ((plVar19 != (longlong *)0x0) &&
             (cVar7 = (**(code **)(*plVar19 + 0x280))(plVar19), cVar7 == '\0')) {
            (**(code **)(*plVar19 + 0x278))(plVar19,param_1);
          }
          plVar16 = plVar16 + 1;
          plVar14 = (longlong *)((longlong)plVar14 + 1);
        } while (plVar14 != plVar15);
      }
    }
  }
  return;
}



// FUNCTION 142608b70 FUN_142608b70 body=248 status=ok
// SIG undefined FUN_142608b70(void)

void FUN_142608b70(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = DAT_1465343a0;
  if (*(char *)(param_1 + 0x690) != '\0') {
    uVar3 = DAT_1465343e0;
  }
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x648,uVar3);
  iVar2 = *(int *)(param_1 + 0x330);
  lVar4 = param_1 + 0x30;
  *(int *)(param_1 + 0x330) = iVar2 + 1;
  if (*(int *)(param_1 + 0x334) < iVar2 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(lVar4,iVar2);
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x330);
  *(int *)(param_1 + 0x330) = iVar2 + 1;
  if (*(int *)(param_1 + 0x334) < iVar2 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(lVar4,iVar2);
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x330);
  *(int *)(param_1 + 0x330) = iVar2 + 1;
  if (*(int *)(param_1 + 0x334) < iVar2 + 1) {
    TArray<FStreamOutElement,TFixedAllocator<32>_>::ResizeGrow(lVar4,iVar2);
  }
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined2 *)(puVar1 + 2) = 0;
  }
  return;
}



// FUNCTION 142608c70 FUN_142608c70 body=372 status=ok
// SIG undefined FUN_142608c70(void)

void FUN_142608c70(longlong *param_1)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  LARGE_INTEGER local_res8;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar2 = *(byte *)((longlong)param_1 + 0x71b);
  while ((bVar2 & 0x10) != 0) {
    FUN_1416b1810();
    bVar2 = *(byte *)((longlong)param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  if (((*(byte *)(param_1 + 0x17) & 1) == 0) || (param_1[0x114] == 0)) {
    if ((DAT_1468b616c == '\0') && (param_1[0x24] == 0)) {
      FUN_1423407b0(param_1);
      return;
    }
  }
  else {
    bVar2 = *(byte *)((longlong)param_1 + 0x24f);
    lVar5 = FUN_1428742e0();
    if ((DAT_146534340 != '\0') && ((int)(uint)bVar2 <= *(int *)(lVar5 + 4))) {
      cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
      if (cVar3 != '\x01') {
        lVar5 = param_1[0xde];
        if ((lVar5 != 0) &&
           (*(undefined4 *)((longlong)param_1 + 0x7dc) = *(undefined4 *)(lVar5 + 0xc0),
           (*(byte *)(lVar5 + 200) & 1) != 0)) {
          iVar4 = rand();
          fVar1 = *(float *)(param_1[0xde] + 0xc4);
          *(float *)((longlong)param_1 + 0x7dc) =
               (*(float *)(param_1[0xde] + 0xc0) - fVar1) * (float)iVar4 * 3.051851e-05 + fVar1;
        }
        (**(code **)(*param_1 + 0x9c8))(param_1);
        if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
          *(undefined4 *)(param_1 + 0xf4) = 0;
          if ((((*(byte *)((longlong)param_1 + 0xba) & 4) == 0) &&
              ((*(byte *)((longlong)param_1 + 0xba) & 2) != 0)) &&
             ((*(byte *)(param_1 + 0xe3) & 0x10) == 0)) {
            (**(code **)(*param_1 + 0x290))(param_1,1,0);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142608e10 FUN_142608e10 body=258 status=ok
// SIG undefined FUN_142608e10(void)

void FUN_142608e10(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  byte *pbVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (0 < *(int *)(param_1 + 0x128)) {
    pbVar4 = (byte *)0x0;
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (((*(longlong *)(lVar2 + 0x58) != 0) &&
        (pbVar4 = (byte *)FUN_142627a50(), pbVar4 != (byte *)0x0)) && ((*pbVar4 & 2) == 0)) {
      pbVar4 = (byte *)0x0;
    }
    iVar5 = *(int *)(param_1 + 0x128) + -1;
    lVar7 = (longlong)iVar5;
    if (-1 < iVar5) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x108);
        uVar1 = *(ushort *)(lVar6 + lVar7 * 2);
        if (1.0 < *(float *)((longlong)(int)((uint)uVar1 * *(int *)(param_1 + 0x124)) +
                             *(longlong *)(param_1 + 0x100) + 0xc)) {
          if (pbVar4 != (byte *)0x0) {
            plVar3 = *(longlong **)(lVar2 + 0x58);
            (**(code **)(*plVar3 + 0x388))(plVar3,param_1,pbVar4);
            lVar6 = *(longlong *)(param_1 + 0x108);
          }
          *(undefined2 *)(lVar6 + lVar7 * 2) =
               *(undefined2 *)(lVar6 + -2 + (longlong)*(int *)(param_1 + 0x128) * 2);
          *(ushort *)(*(longlong *)(param_1 + 0x108) + -2 + (longlong)*(int *)(param_1 + 0x128) * 2)
               = uVar1;
          *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
        }
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
  }
  return;
}



// FUNCTION 142608f20 FUN_142608f20 body=89 status=ok
// SIG undefined FUN_142608f20(void)

void FUN_142608f20(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x928)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x920));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xf0))(plVar1,0);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x928));
  }
  return;
}



// FUNCTION 142608f80 FUN_142608f80 body=84 status=ok
// SIG undefined FUN_142608f80(void)

undefined8 FUN_142608f80(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  uVar1 = FUN_141ee2c80();
  puVar2 = (undefined8 *)FUN_141ede990(uVar1,local_28,0x70,param_2 * 0x70);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0x698) = *puVar2;
  *(undefined8 *)(param_1 + 0x6a0) = uVar1;
  *(undefined8 *)(param_1 + 0x6a8) = puVar2[2];
  return *(undefined8 *)(param_1 + 0x698);
}



// FUNCTION 142608fe0 FUN_142608fe0 body=86 status=ok
// SIG undefined FUN_142608fe0(void)

undefined8 FUN_142608fe0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  uVar1 = FUN_141ee2c80();
  puVar2 = (undefined8 *)FUN_141ede990(uVar1,local_28,0x10,param_2 << 4);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_1 + 0x6b0) = *puVar2;
  *(undefined8 *)(param_1 + 0x6b8) = uVar1;
  *(undefined8 *)(param_1 + 0x6c0) = puVar2[2];
  return *(undefined8 *)(param_1 + 0x6b0);
}



// FUNCTION 142609040 FUN_142609040 body=217 status=ok
// SIG undefined FUN_142609040(void)

void FUN_142609040(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 local_res18 [16];
  longlong local_38 [4];
  longlong *local_18;
  longlong *local_10;
  
  FUN_1404a3a40(param_3,L"PARTICLE_FACTORY",&DAT_143f591f0);
  local_38[3] = 2;
  local_38[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],&DAT_14512c60c,4);
  local_38[0] = 0;
  local_38[1] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],L"PARTICLE_BEAMTRAIL_FACTORY",0x36);
  local_18 = local_38;
  local_10 = local_38 + 2;
  FUN_140497620(param_3 + 0x200,local_res18,&local_18,0);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142609180 FUN_142609180 body=598 status=ok
// SIG undefined FUN_142609180(void)

void FUN_142609180(longlong *param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  LARGE_INTEGER local_res8;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar2 = *(byte *)((longlong)param_1 + 0x71b);
  while ((bVar2 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar2 = *(byte *)((longlong)param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  lVar4 = param_1[0x24];
  if (lVar4 == 0) {
    lVar4 = FUN_1423407b0(param_1);
  }
  if (*(longlong **)(lVar4 + 0x1b8) != (longlong *)0x0) {
    lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x1b8) + 0x230))();
    param_1[0x114] = lVar4;
  }
  if (((*(byte *)((longlong)param_1 + 0x719) & 0x10) != 0) &&
     (cVar3 = (**(code **)(*param_1 + 0x2a0))(param_1), cVar3 == '\0')) {
    if (param_1[0x32] != 0) {
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x10d);
      if (cVar3 == '\0') {
        FWeakObjectPtr::operator=(param_1 + 0x10d,param_1[0x32]);
      }
      local_res8.QuadPart = 0;
      if (param_1[0x10e] == 0) {
        param_1[0x10e] = param_1[0x33];
      }
      lVar4 = param_1[0x32];
      puVar5 = *(undefined8 **)(lVar4 + 0x1a0);
      puVar1 = puVar5 + *(int *)(lVar4 + 0x1a8);
      for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        if ((longlong *)*puVar5 == param_1) {
          if (((*(byte *)((longlong)param_1 + 0xba) & 2) == 0) ||
             (((((char)param_1[0x10f] != '\0' && (*(char *)((longlong)param_1 + 0x879) != '\0')) &&
               (*(char *)((longlong)param_1 + 0x87a) != '\0')) ||
              ((param_1[0x10e] != param_1[0x33] ||
               (cVar3 = FUN_1405dc8f0(param_1 + 0x10d,lVar4), cVar3 != '\0')))))) {
            local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
            (**(code **)(*param_1 + 0x418))(param_1,&local_res8);
          }
          goto LAB_1426092b9;
        }
      }
      local_res8.QuadPart = 0;
      FUN_142399e30(param_1,0,0);
    }
LAB_1426092b9:
    *(undefined8 *)((longlong)param_1 + 0x87c) = *(undefined8 *)((longlong)param_1 + 0x1ec);
    param_1[0x111] = param_1[0x3f];
    *(undefined4 *)((longlong)param_1 + 0x884) = *(undefined4 *)((longlong)param_1 + 500);
    *(int *)(param_1 + 0x112) = (int)param_1[0x40];
    *(undefined8 *)((longlong)param_1 + 0x894) = *(undefined8 *)((longlong)param_1 + 0x204);
    *(undefined4 *)((longlong)param_1 + 0x89c) = *(undefined4 *)((longlong)param_1 + 0x20c);
  }
  FUN_1423937b0(param_1);
  if (((*(byte *)(param_1 + 0xe3) & 0x20) != 0) && ((*(byte *)((longlong)param_1 + 0xba) & 4) == 0))
  {
    (**(code **)(*param_1 + 0x280))(param_1,1);
  }
  if ((int)param_1[0xf2] == -1) {
    *(undefined4 *)(param_1 + 0xf2) = 0;
  }
  if ((param_1[0xde] != 0) && ((*(byte *)(param_1[0xde] + 0x158) & 2) != 0)) {
    FUN_14260af60(param_1);
    return;
  }
  return;
}



// FUNCTION 1426093e0 FUN_1426093e0 body=565 status=ok
// SIG undefined FUN_1426093e0(void)

void FUN_1426093e0(longlong *param_1,char param_2,char param_3,char param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  
  FUN_142616380(param_1,0,0);
  lVar2 = *param_1;
  uVar6 = 0;
  uVar7 = 0;
  if (param_2 == '\0') {
    if (param_4 == '\0') {
      (**(code **)(lVar2 + 0x358))(param_1,0);
    }
    else {
      (**(code **)(lVar2 + 0x360))();
    }
    if ((param_3 != '\0') && (0 < (int)param_1[0x125])) {
      plVar9 = (longlong *)param_1[0x124];
      uVar10 = (longlong)(int)param_1[0x125] & 0x1fffffffffffffff;
      if (plVar9 + (int)param_1[0x125] < plVar9) {
        uVar10 = uVar6;
      }
      uVar8 = uVar6;
      if (uVar10 != 0) {
        do {
          plVar3 = (longlong *)*plVar9;
          if (((plVar3 != (longlong *)0x0) && (plVar3[5] != 0)) &&
             ((*(byte *)(plVar3[5] + 0x2c) & 1) != 0)) {
            bVar5 = *(byte *)(plVar3[2] + 0xac);
            bVar1 = *(byte *)(*(longlong *)(plVar3[2] + 0x20) + 0xdc);
            if (bVar1 <= bVar5) {
              bVar5 = bVar1;
            }
            if (bVar5 < *(byte *)((longlong)param_1 + 0x71e)) {
              *(uint *)(plVar3 + 0x1e) = *(uint *)(plVar3 + 0x1e) & 0xfffffffe;
              (**(code **)(*plVar3 + 0xf8))(plVar3,1);
              *(uint *)(plVar3 + 0x1e) = *(uint *)(plVar3 + 0x1e) | 0x400;
            }
            else {
              uVar8 = (ulonglong)((int)uVar8 + 1);
            }
          }
          uVar7 = (undefined4)uVar8;
          plVar9 = plVar9 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar10);
      }
      *(undefined4 *)(param_1 + 0x12e) = uVar7;
    }
    cVar4 = *(char *)(param_1[0xde] + 0xd4);
    if (cVar4 == '\0') {
      cVar4 = ((byte)(*(uint *)(param_1[0xde] + 0x14c) >> 1) & 1) + 1;
    }
    if (cVar4 == '\x01') {
      FUN_1425ff3e0(param_1);
    }
    else {
      if (cVar4 != '\x02') {
        if (cVar4 != '\x03') {
          return;
        }
        FUN_142608f20(param_1);
      }
      (**(code **)(*param_1 + 0x358))(param_1,0);
    }
  }
  else {
    if (param_4 == '\0') {
      (**(code **)(lVar2 + 0x358))(param_1,1);
    }
    else {
      (**(code **)(lVar2 + 0x360))();
    }
    if ((param_3 != '\0') && (0 < (int)param_1[0x125])) {
      plVar9 = (longlong *)param_1[0x124];
      uVar10 = (longlong)(int)param_1[0x125] & 0x1fffffffffffffff;
      if (plVar9 + (int)param_1[0x125] < plVar9) {
        uVar10 = uVar6;
      }
      uVar8 = uVar6;
      if (uVar10 != 0) {
        do {
          plVar3 = (longlong *)*plVar9;
          if (plVar3 == (longlong *)0x0) {
LAB_1426094c6:
            uVar8 = (ulonglong)((int)uVar8 + 1);
          }
          else {
            bVar5 = *(byte *)(plVar3[2] + 0xac);
            bVar1 = *(byte *)(*(longlong *)(plVar3[2] + 0x20) + 0xdc);
            if (bVar1 <= bVar5) {
              bVar5 = bVar1;
            }
            if (*(byte *)((longlong)param_1 + 0x71e) <= bVar5) {
              *(uint *)(plVar3 + 0x1e) = *(uint *)(plVar3 + 0x1e) | 1;
              (**(code **)(*plVar3 + 0xf8))(plVar3,0);
              *(uint *)(plVar3 + 0x1e) = *(uint *)(plVar3 + 0x1e) & 0xfffffbff;
              goto LAB_1426094c6;
            }
          }
          uVar7 = (undefined4)uVar8;
          plVar9 = plVar9 + 1;
          uVar6 = uVar6 + 1;
        } while (uVar6 != uVar10);
      }
      *(undefined4 *)(param_1 + 0x12e) = uVar7;
    }
  }
  return;
}



// FUNCTION 142609620 FUN_142609620 body=237 status=ok
// SIG undefined FUN_142609620(void)

void FUN_142609620(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  LARGE_INTEGER local_res8;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar3 = *(byte *)(param_1 + 0x71b);
  while ((bVar3 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar3 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20();
  if (((*(byte *)(param_1 + 0xba) & 4) == 0) || ((*(byte *)(param_1 + 0x718) & 0x10) != 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 0x20;
  }
  *(byte *)(param_1 + 0x718) = *(byte *)(param_1 + 0x718) & 0xdf | bVar3;
  FUN_14260b860(param_1,~(*(byte *)(param_1 + 0x719) >> 3) & 1);
  *(undefined8 *)(param_1 + 0x8a0) = 0;
  FUN_142393f60(param_1);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x840);
  if ((*(byte *)(param_1 + 0x9b8) & 1) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    uVar2 = FUN_1424a5520();
    FUN_1404cb7e0(uVar2,lVar1,param_1);
    *(uint *)(param_1 + 0x9b8) = *(uint *)(param_1 + 0x9b8) & 0xfffffffe;
  }
  return;
}



// FUNCTION 142609710 FUN_142609710 body=1009 status=ok
// SIG undefined FUN_142609710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142609710(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  LARGE_INTEGER local_res8 [4];
  float local_a8;
  float local_a4;
  float local_a0;
  undefined8 local_98;
  undefined4 local_90;
  float local_88;
  float local_84;
  float local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [96];
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(lVar2 + 400) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
  }
  lVar2 = FUN_14244f490(*(undefined8 *)(lVar2 + 400),0);
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x528) == 0) {
    return;
  }
  fVar12 = *(float *)(param_1 + 0x220);
  fVar13 = *(float *)(param_1 + 0x224);
  fVar14 = *(float *)(param_1 + 0x228);
  pfVar3 = (float *)FUN_1426e1ca0(*(longlong *)(lVar2 + 0x528),local_78);
  fVar14 = pfVar3[2] - fVar14;
  fVar12 = *pfVar3 - fVar12;
  fVar13 = pfVar3[1] - fVar13;
  fVar4 = fVar12 * fVar12 + fVar13 * fVar13 + fVar14 * fVar14;
  if (1e-08 < fVar4) {
    auVar8 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar6 = auVar8._0_4_;
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar6 = fVar6 + fVar6 * (0.5 - fVar4 * 0.5 * fVar6 * fVar6);
    fVar12 = fVar12 * fVar6;
    fVar13 = fVar6 * fVar13;
    fVar14 = fVar6 * fVar14;
  }
  fVar7 = *(float *)(param_1 + 0x210) * _DAT_146b04f60;
  fVar9 = *(float *)(param_1 + 0x214) * fRam0000000146b04f64;
  fVar10 = *(float *)(param_1 + 0x218) * fRam0000000146b04f68;
  fVar11 = *(float *)(param_1 + 0x21c) * fRam0000000146b04f6c;
  local_98 = 0;
  fVar4 = fVar14 * fVar9 - fVar13 * fVar10;
  fVar6 = fVar12 * fVar10 - fVar14 * fVar7;
  fVar5 = fVar13 * fVar7 - fVar12 * fVar9;
  fVar4 = fVar4 + fVar4;
  fVar6 = fVar6 + fVar6;
  fVar5 = fVar5 + fVar5;
  local_a8 = (fVar5 * fVar9 - fVar6 * fVar10) + fVar11 * fVar4 + fVar12;
  local_a4 = (fVar4 * fVar10 - fVar5 * fVar7) + fVar11 * fVar6 + fVar13;
  local_a0 = (fVar6 * fVar7 - fVar4 * fVar9) + fVar11 * fVar5 + fVar14;
  local_90 = 0x3f800000;
  FQuat::FindBetweenNormals(local_68,&local_98,&local_a8);
  FRotator::FRotator(&local_88,local_68);
  *(float *)(param_1 + 0x1f8) = local_88 + *(float *)(param_1 + 0x1f8);
  *(float *)(param_1 + 0x1fc) = local_84 + *(float *)(param_1 + 0x1fc);
  *(float *)(param_1 + 0x200) = local_80 + *(float *)(param_1 + 0x200);
  fVar12 = (float)(int)(local_88 * 0.0027777778) * 360.0;
  if (ABS(local_88) < ABS(fVar12)) {
    fVar12 = local_88;
  }
  local_88 = local_88 - fVar12;
  if (local_88 < 0.0) {
    local_88 = local_88 + 360.0;
  }
  if (local_88 == 0.0) {
    fVar12 = (float)(int)(local_84 * 0.0027777778) * 360.0;
    if (ABS(local_84) < ABS(fVar12)) {
      fVar12 = local_84;
    }
    local_84 = local_84 - fVar12;
    if (local_84 < 0.0) {
      local_84 = local_84 + 360.0;
    }
    if (local_84 == 0.0) {
      fVar12 = (float)(int)(local_80 * 0.0027777778) * 360.0;
      if (ABS(local_80) < ABS(fVar12)) {
        fVar12 = local_80;
      }
      local_80 = local_80 - fVar12;
      if (local_80 < 0.0) {
        local_80 = local_80 + 360.0;
      }
      if (local_80 == 0.0) {
        bVar1 = 0;
        goto LAB_142609ad7;
      }
    }
  }
  bVar1 = 0x80;
LAB_142609ad7:
  *(byte *)(param_1 + 0x71a) = *(byte *)(param_1 + 0x71a) | bVar1;
  return;
}



// FUNCTION 142609b10 FUN_142609b10 body=626 status=ok
// SIG undefined FUN_142609b10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_142609b10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,float *param_6,undefined4 *param_7)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined1 local_e8 [4];
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_c8 [5];
  undefined1 local_b4;
  longlong local_80;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  if (((*param_6 == 0.0) && (param_6[1] == 0.0)) && (param_6[2] == 0.0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b051a0) {
      _Init_thread_header(&DAT_146b051a0);
      if (DAT_146b051a0 == -1) {
        FName::FName(&DAT_146b05198,"ParticleCollision",1);
        _Init_thread_footer(&DAT_146b051a0);
      }
    }
    local_108 = (undefined4 *)param_3;
    FUN_1422ffb20(local_c8,DAT_146b05198,local_e8,1);
    lVar2 = *(longlong *)(param_1 + 0x120);
    local_b4 = 1;
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    local_100 = local_c8;
    local_108 = param_7;
    uVar1 = UWorld::LineTraceSingleByObjectType(lVar2,param_2,param_5,param_4);
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b051b0) {
      _Init_thread_header(&DAT_146b051b0);
      if (DAT_146b051b0 == -1) {
        FName::FName(&DAT_146b051a8,"ParticleCollision",1);
        _Init_thread_footer(&DAT_146b051b0);
      }
    }
    local_108 = (undefined4 *)0x0;
    FUN_1422ffb20(local_c8,DAT_146b051a8,local_e8,0);
    FCollisionQueryParams::AddIgnoredActor(local_c8,param_3);
    local_e0 = *param_6;
    lVar2 = *(longlong *)(param_1 + 0x120);
    local_dc = param_6[1];
    local_d8 = param_6[2];
    local_b4 = 1;
    local_e4 = 1;
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    local_f0 = (undefined1 *)local_c8;
    local_f8 = &local_e4;
    local_100 = param_7;
    local_108 = &DAT_1464aa810;
    uVar1 = UWorld::SweepSingleByObjectType(lVar2,param_2,param_5,param_4);
  }
  if (local_60 != 0) {
    FMemory::Free();
  }
  if (local_80 != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 142609d90 FUN_142609d90 body=268 status=ok
// SIG undefined FUN_142609d90(void)

void FUN_142609d90(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionPosition",1);
    lVar2 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined4 *)(lVar2 + 0x40) = 0;
    *(longlong *)(param_1 + 0x88) = lVar2;
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionTangent",1);
    lVar2 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined4 *)(lVar2 + 0x40) = 0;
    *(longlong *)(param_1 + 0xe0) = lVar2;
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionStrength",1);
    lVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0;
    *(longlong *)(param_1 + 0x120) = lVar2;
  }
  return;
}



// FUNCTION 142609ea0 FUN_142609ea0 body=406 status=ok
// SIG undefined FUN_142609ea0(void)

void FUN_142609ea0(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionNoiseSpeed",1);
    lVar2 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
    *(undefined8 *)(lVar2 + 0x38) = 0x4248000042480000;
    *(undefined4 *)(lVar2 + 0x40) = 0x42480000;
    *(longlong *)(param_1 + 0x120) = lVar2;
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionNoiseRange",1);
    lVar2 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
    *(undefined8 *)(lVar2 + 0x38) = 0x4248000042480000;
    *(undefined4 *)(lVar2 + 0x40) = 0x42480000;
    *(longlong *)(param_1 + 0x90) = lVar2;
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionNoiseRangeScale",1);
    lVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x3f800000;
    *(longlong *)(param_1 + 200) = lVar2;
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionNoiseTangentStrength",1);
    lVar2 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
    *(undefined4 *)(lVar2 + 0x38) = 0x437a0000;
    *(longlong *)(param_1 + 0x170) = lVar2;
    puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionNoiseScale",1);
    uVar3 = NewObject<UDistributionFloatConstantCurve>(param_1,*puVar1,0,0,0,0);
    *(undefined8 *)(param_1 + 0x1b8) = uVar3;
  }
  return;
}



// FUNCTION 14260a040 FUN_14260a040 body=336 status=ok
// SIG undefined FUN_14260a040(void)

void FUN_14260a040(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x50);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionSource",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0x4248000042480000;
      *(undefined4 *)(lVar3 + 0x40) = 0x42480000;
      *(longlong *)(param_1 + 0x98) = lVar3;
    }
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0xa8);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionSourceTangent",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0x3f800000;
      *(undefined4 *)(lVar3 + 0x40) = 0;
      *(longlong *)(param_1 + 0xf0) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x100);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionSourceStrength",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x41c80000;
      *(longlong *)(param_1 + 0x130) = lVar3;
    }
  }
  return;
}



// FUNCTION 14260a190 PostInitProperties body=336 status=ok
// SIG undefined PostInitProperties(void)

void UParticleModuleBeamSource::PostInitProperties(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0x48);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionTarget",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0x4248000042480000;
      *(undefined4 *)(lVar3 + 0x40) = 0x42480000;
      *(longlong *)(param_1 + 0x90) = lVar3;
    }
    cVar2 = FRawDistributionVector::IsCreated(param_1 + 0xa0);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionTargetTangent",1);
      lVar3 = NewObject<UDistributionVectorConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined8 *)(lVar3 + 0x38) = 0x3f800000;
      *(undefined4 *)(lVar3 + 0x40) = 0;
      *(longlong *)(param_1 + 0xe8) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0xf8);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionTargetStrength",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x41c80000;
      *(longlong *)(param_1 + 0x128) = lVar3;
    }
  }
  return;
}



// FUNCTION 14260a2e0 FUN_14260a2e0 body=282 status=ok
// SIG undefined FUN_14260a2e0(void)

void FUN_14260a2e0(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 local_res8 [32];
  
  FUN_1417931d0();
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0x68);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionDistance",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x41c80000;
      *(longlong *)(param_1 + 0x98) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0xa8);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionTaperFactor",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x3f800000;
      *(longlong *)(param_1 + 0xd8) = lVar3;
    }
    cVar2 = FRawDistributionFloat::IsCreated(param_1 + 0xe0);
    if (cVar2 == '\0') {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DistributionTaperScale",1);
      lVar3 = NewObject<UDistributionFloatConstant>(param_1,*puVar1,0,0,0,0);
      *(undefined4 *)(lVar3 + 0x38) = 0x3f800000;
      *(longlong *)(param_1 + 0x110) = lVar3;
    }
  }
  return;
}



// FUNCTION 14260a400 FUN_14260a400 body=52 status=ok
// SIG undefined FUN_14260a400(void)

void FUN_14260a400(longlong *param_1)

{
  UPrimitiveComponent::SetDepthPriorityGroup(param_1[0x8b],1);
  FUN_1425edab0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014260a42d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x710))(param_1);
  return;
}



// FUNCTION 14260a440 FUN_14260a440 body=90 status=ok
// SIG undefined FUN_14260a440(void)

void FUN_14260a440(longlong param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  FUN_1422384a0();
  fVar1 = *(float *)(param_1 + 0x508);
  if (fVar1 != 3.4028235e+38) {
    *(undefined4 *)(param_1 + 0x508) = 0x7f7fffff;
    auVar2._4_4_ = *(undefined4 *)(param_1 + 0x4d4);
    auVar2._0_4_ = fVar1;
    auVar2._8_4_ = *(undefined4 *)(param_1 + 0x4d8);
    auVar2._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0x4d0) = auVar2;
  }
  return;
}



// FUNCTION 14260a4a0 FUN_14260a4a0 body=999 status=ok
// SIG undefined FUN_14260a4a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14260a4a0(longlong *param_1)

{
  void *pvVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  float *pfVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  float fVar22;
  undefined1 local_res10 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  UObject::PostLoad();
  local_48 = _DAT_146534348;
  uStack_44 = uRam000000014653434c;
  uStack_40 = uRam0000000146534350;
  uStack_3c = uRam0000000146534354;
  iVar6 = UObjectBaseUtility::GetLinkerCustomVersion(param_1,&local_48);
  if (iVar6 < 2) {
    *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) | 1;
  }
  iVar6 = (int)param_1[9];
  uVar14 = 0;
  uVar19 = 0;
  uVar15 = uVar14;
  uVar18 = uVar14;
  if (0 < iVar6) {
    do {
      lVar11 = *(longlong *)(uVar18 + param_1[8]);
      if (lVar11 != 0) {
        FUN_1417510e0(lVar11);
        FUN_1417a53c0(lVar11);
        if ((*(longlong *)(lVar11 + 0x50) == 0) && (param_1[4] != 0)) {
          UCameraShake::GetPrivateStaticClass();
        }
      }
      iVar6 = (int)param_1[9];
      uVar16 = (int)uVar15 + 1;
      uVar15 = (ulonglong)uVar16;
      uVar18 = uVar18 + 8;
    } while ((int)uVar16 < iVar6);
  }
  if ((int)param_1[0xd] == 0xffff) {
    cVar5 = *(char *)((longlong)param_1 + 100);
    if (cVar5 == '\0') {
      uVar7 = 7;
    }
    else if (cVar5 == '\x01') {
      uVar7 = 6;
    }
    else {
      uVar7 = 7;
      if (cVar5 == '\x02') {
        uVar7 = 4;
      }
    }
    *(undefined4 *)(param_1 + 0xd) = uVar7;
    iVar6 = (int)param_1[9];
  }
  uVar15 = uVar14;
  uVar18 = uVar14;
  if (0 < iVar6) {
    do {
      if (*(longlong *)(uVar15 + param_1[8]) != 0) {
        FUN_1417510e0();
      }
      uVar16 = (int)uVar18 + 1;
      uVar15 = uVar15 + 8;
      uVar18 = (ulonglong)uVar16;
    } while ((int)uVar16 < (int)param_1[9]);
  }
  *(uint *)(param_1 + 10) = *(uint *)(param_1 + 10) | 1;
  uVar16 = 0;
  uVar15 = uVar14;
  uVar18 = uVar14;
  if (0 < (int)param_1[9]) {
    do {
      lVar11 = *(longlong *)(param_1[8] + uVar18);
      uVar13 = (uint)uVar15;
      if (lVar11 != 0) {
        iVar6 = *(int *)(lVar11 + 0x40) + -1;
        if (-1 < iVar6) {
          lVar17 = (longlong)iVar6 * 8;
          lVar20 = (longlong)*(int *)(lVar11 + 0x40) << 3;
          lVar21 = lVar17;
          do {
            lVar4 = *(longlong *)(lVar11 + 0x38);
            if (*(longlong *)(lVar4 + lVar17) == 0) {
              iVar3 = *(int *)(lVar11 + 0x40);
              iVar8 = (iVar3 - iVar6) + -1;
              if (iVar8 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar4 + lVar21),(void *)(lVar20 + lVar4),(longlong)iVar8 << 3);
                iVar3 = *(int *)(lVar11 + 0x40);
              }
              *(int *)(lVar11 + 0x40) = iVar3 + -1;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar11 + 0x38);
              UObjectBaseUtility::MarkPackageDirty(param_1);
            }
            lVar20 = lVar20 + -8;
            lVar21 = lVar21 + -8;
            lVar17 = lVar17 + -8;
            iVar6 = iVar6 + -1;
            uVar13 = uVar16;
          } while (-1 < iVar6);
        }
      }
      uVar16 = uVar13 + 1;
      uVar15 = (ulonglong)uVar16;
      uVar18 = uVar18 + 8;
    } while ((int)uVar16 < (int)param_1[9]);
  }
  if (param_1[4] != 0) {
    UCameraShake::GetPrivateStaticClass();
  }
  fVar2 = *(float *)(param_1 + 0xc);
  fVar22 = 0.0;
  if ((0.0 <= fVar2) && (fVar22 = fVar2, 1.0 <= fVar2)) {
    fVar22 = 1.0;
  }
  *(float *)(param_1 + 0xc) = fVar22;
  (**(code **)(*param_1 + 0x288))(param_1);
  cVar5 = FRawDistributionFloat::IsCreated(param_1 + 0xe);
  if (cVar5 == '\0') {
    plVar9 = (longlong *)FName::FName(local_res10,L"SpawnRampDistribution",1);
    lVar11 = *plVar9;
    if (lVar11 == 0) {
      FUN_1417846f0(param_1,
                    L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                   );
    }
    uVar10 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
    lVar11 = FUN_1417985e0(uVar10,param_1,lVar11,0,0,0,0,0,0);
    uVar16 = 0;
    iVar6 = *(int *)(lVar11 + 0x40);
    if (0 < iVar6) {
      pfVar12 = *(float **)(lVar11 + 0x38);
      uVar15 = uVar14;
      uVar18 = uVar14;
      do {
        uVar16 = (uint)uVar18;
        if (4000.0 < *pfVar12 || *pfVar12 == 4000.0) break;
        uVar16 = uVar16 + 1;
        uVar18 = (ulonglong)uVar16;
        uVar15 = uVar15 + 1;
        pfVar12 = pfVar12 + 5;
      } while ((longlong)uVar15 < (longlong)iVar6);
    }
    *(int *)(lVar11 + 0x40) = iVar6 + 1;
    if (*(int *)(lVar11 + 0x44) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (lVar11 + 0x38,iVar6);
    }
    lVar21 = (longlong)(int)uVar16;
    pvVar1 = (void *)(*(longlong *)(lVar11 + 0x38) + lVar21 * 0x14);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)pvVar1 + 0x14),pvVar1,(longlong)(int)(iVar6 - uVar16) * 0x14);
    lVar17 = *(longlong *)(lVar11 + 0x38);
    *(undefined4 *)(lVar17 + lVar21 * 0x14) = 0x457a0000;
    *(undefined4 *)(lVar17 + 4 + lVar21 * 0x14) = 0x3f800000;
    *(undefined4 *)(lVar17 + 8 + lVar21 * 0x14) = 0;
    *(undefined4 *)(lVar17 + 0xc + lVar21 * 0x14) = 0;
    *(undefined1 *)(lVar17 + 0x10 + lVar21 * 0x14) = 0;
    iVar6 = *(int *)(lVar11 + 0x40);
    if (0 < iVar6) {
      pfVar12 = *(float **)(lVar11 + 0x38);
      uVar15 = uVar14;
      do {
        uVar19 = (uint)uVar15;
        if (12000.0 < *pfVar12 || *pfVar12 == 12000.0) break;
        uVar19 = uVar19 + 1;
        uVar15 = (ulonglong)uVar19;
        uVar14 = uVar14 + 1;
        pfVar12 = pfVar12 + 5;
      } while ((longlong)uVar14 < (longlong)iVar6);
    }
    *(int *)(lVar11 + 0x40) = iVar6 + 1;
    if (*(int *)(lVar11 + 0x44) < iVar6 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeGrow
                (lVar11 + 0x38,iVar6);
    }
    lVar21 = (longlong)(int)uVar19;
    pvVar1 = (void *)(*(longlong *)(lVar11 + 0x38) + lVar21 * 0x14);
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)pvVar1 + 0x14),pvVar1,(longlong)(int)(iVar6 - uVar19) * 0x14);
    lVar17 = *(longlong *)(lVar11 + 0x38);
    *(undefined4 *)(lVar17 + lVar21 * 0x14) = 0x463b8000;
    *(undefined4 *)(lVar17 + 4 + lVar21 * 0x14) = 0;
    *(undefined4 *)(lVar17 + 8 + lVar21 * 0x14) = 0;
    *(undefined4 *)(lVar17 + 0xc + lVar21 * 0x14) = 0;
    *(undefined1 *)(lVar17 + 0x10 + lVar21 * 0x14) = 0;
    *(uint *)(lVar11 + 0x30) = *(uint *)(lVar11 + 0x30) | 2;
    param_1[0x14] = lVar11;
  }
  return;
}



// FUNCTION 14260a890 PostLoad body=120 status=ok
// SIG undefined PostLoad(void)

void UParticleLODLevel::PostLoad(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  UObject::PostLoad();
  FUN_1417510e0(*(undefined8 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1417510e0();
  }
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  uVar3 = 0;
  uVar2 = (longlong)*(int *)(param_1 + 0x40) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x40) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      FUN_1417510e0(*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 14260a910 FUN_14260a910 body=95 status=ok
// SIG undefined FUN_14260a910(void)

void FUN_14260a910(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_14260a4a0();
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + *(longlong *)(param_1 + 0x40));
      if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) &&
         (*(longlong *)(lVar1 + 0x38) != 0)) {
        FUN_1417510e0();
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 14260a970 FUN_14260a970 body=963 status=ok
// SIG undefined FUN_14260a970(void)

void FUN_14260a970(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  byte bVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  longlong *plVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  
  UObject::PostLoad();
  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xfffffffd;
  uVar8 = 0;
  cVar9 = '\x03';
  *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) & 0xfffffffd;
  uVar10 = *(uint *)(param_1 + 0x14c);
  iVar5 = *(int *)(param_1 + 0x48) + -1;
  lVar11 = (longlong)iVar5;
  *(undefined2 *)(param_1 + 0x148) = 0x300;
  if (-1 < iVar5) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar11 * 8);
      if (lVar1 != 0) {
        FUN_1417510e0(lVar1);
        lVar6 = UEnvQueryTest_Random::StaticClass();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
        if (((!bVar19) || ((*(uint *)(lVar1 + 0xa8) >> 1 & 1) == 0)) &&
           (*(int *)(lVar1 + 0x48) != 0)) {
          lVar6 = **(longlong **)(lVar1 + 0x40);
          FUN_1417510e0(lVar6);
          plVar18 = *(longlong **)(lVar1 + 0x40);
          plVar13 = plVar18 + *(int *)(lVar1 + 0x48);
          for (; plVar18 != plVar13; plVar18 = plVar18 + 1) {
            lVar2 = *plVar18;
            if (lVar2 != 0) {
              uVar12 = uVar8;
              uVar17 = uVar8;
              if (0 < *(int *)(lVar6 + 0x40)) {
                do {
                  lVar3 = *(longlong *)(uVar17 + *(longlong *)(lVar2 + 0x38));
                  if (lVar3 != 0) {
                    lVar7 = UEnvQueryTest_Random::StaticClass();
                    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                      bVar19 = false;
                    }
                    else {
                      bVar19 = true;
                    }
                    if ((bVar19) && ((*(byte *)(lVar3 + 0x130) & 1) != 0)) {
                      *(uint *)(param_1 + 0xbc) = *(uint *)(param_1 + 0xbc) | 2;
                      break;
                    }
                  }
                  uVar10 = (int)uVar12 + 1;
                  uVar12 = (ulonglong)uVar10;
                  uVar17 = uVar17 + 8;
                } while ((int)uVar10 < *(int *)(lVar6 + 0x40));
              }
              if ((*(byte *)(lVar6 + 0x2c) & 1) != 0) {
                lVar2 = *(longlong *)(lVar6 + 0x30);
                if ((lVar2 != 0) && (*(int *)(lVar2 + 0x7c) == 0)) {
                  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 2;
                }
                plVar16 = *(longlong **)(lVar6 + 0x50);
                if (*(float *)(lVar2 + 0x70) == 0.0) {
                  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 4;
                  fVar21 = (float)(**(code **)(*plVar16 + 0x390))();
                  if ((fVar21 == 0.0) && (*(char *)(param_1 + 0xcc) == '\0')) {
                    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 8;
                  }
                }
                uVar10 = 0;
                if (*(longlong *)(lVar6 + 0x48) != 0) {
                  uVar10 = *(uint *)(*(longlong *)(lVar6 + 0x48) + 0x30) >> 1;
                }
                *(uint *)(param_1 + 0x158) = *(uint *)(param_1 + 0x158) | uVar10 & 1;
                plVar16 = *(longlong **)(lVar6 + 0x38);
                uVar10 = *(uint *)(param_1 + 0x158);
                uVar12 = (longlong)*(int *)(lVar6 + 0x40) & 0x1fffffffffffffff;
                if (plVar16 + *(int *)(lVar6 + 0x40) < plVar16) {
                  uVar12 = uVar8;
                }
                uVar17 = uVar8;
                if (uVar12 != 0) {
                  do {
                    lVar2 = *plVar16;
                    plVar16 = plVar16 + 1;
                    uVar17 = uVar17 + 1;
                    uVar10 = uVar10 ^ ((*(uint *)(lVar2 + 0x30) >> 1 | uVar10) ^ uVar10) & 1;
                    *(uint *)(param_1 + 0x158) = uVar10;
                  } while (uVar17 != uVar12);
                }
              }
            }
          }
          bVar14 = *(byte *)(lVar1 + 0xac);
          if (*(byte *)(param_1 + 0xdc) <= *(byte *)(lVar1 + 0xac)) {
            bVar14 = *(byte *)(param_1 + 0xdc);
          }
          if (*(byte *)(param_1 + 0x148) < bVar14) {
            *(byte *)(param_1 + 0x148) = bVar14;
          }
          if (bVar14 < *(byte *)(param_1 + 0x149)) {
            *(byte *)(param_1 + 0x149) = bVar14;
          }
        }
      }
      lVar11 = lVar11 + -1;
    } while (-1 < lVar11);
    cVar9 = *(char *)(param_1 + 0x149);
    uVar10 = *(uint *)(param_1 + 0x14c);
  }
  *(uint *)(param_1 + 0x14c) = (uint)(cVar9 != '\x03') | uVar10 & 0xfffffffe;
  if (*(int *)(param_1 + 0x90) == 0) {
    if (*(int *)(param_1 + 0x48) < 1) {
      iVar15 = *(int *)(param_1 + 0x90) + 1;
      iVar5 = *(int *)(param_1 + 0x94);
      bVar20 = SBORROW4(iVar15,iVar5);
      iVar4 = iVar15 - iVar5;
      bVar19 = iVar15 == iVar5;
      *(int *)(param_1 + 0x90) = iVar15;
    }
    else {
      if (**(longlong **)(param_1 + 0x40) == 0) goto LAB_14260acb5;
      iVar15 = *(int *)(**(longlong **)(param_1 + 0x40) + 0x48) + *(int *)(param_1 + 0x90);
      iVar5 = *(int *)(param_1 + 0x94);
      bVar20 = SBORROW4(iVar15,iVar5);
      iVar4 = iVar15 - iVar5;
      bVar19 = iVar15 == iVar5;
      *(int *)(param_1 + 0x90) = iVar15;
    }
    if (!bVar19 && bVar20 == iVar4 < 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow();
    }
  }
LAB_14260acb5:
  if (((*(int *)(param_1 + 0x78) == 0) && (0 < *(int *)(param_1 + 0x48))) &&
     (**(longlong **)(param_1 + 0x40) != 0)) {
    iVar5 = *(int *)(**(longlong **)(param_1 + 0x40) + 0x48) + *(int *)(param_1 + 0x78);
    *(int *)(param_1 + 0x78) = iVar5;
    if (*(int *)(param_1 + 0x7c) < iVar5) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x70);
    }
    uVar12 = uVar8;
    if (0 < *(int *)(param_1 + 0x78)) {
      do {
        uVar10 = (int)uVar12 + 1;
        *(float *)(uVar8 + *(longlong *)(param_1 + 0x70)) = (float)(int)uVar12 * 2500.0;
        uVar8 = uVar8 + 4;
        uVar12 = (ulonglong)uVar10;
      } while ((int)uVar10 < *(int *)(param_1 + 0x78));
    }
  }
  *(undefined1 *)(param_1 + 0xb4) = 1;
  return;
}



// FUNCTION 14260ad40 FUN_14260ad40 body=111 status=ok
// SIG undefined FUN_14260ad40(void)

void FUN_14260ad40(longlong param_1)

{
  byte bVar1;
  LARGE_INTEGER local_res8 [4];
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  FUN_1423945d0(param_1);
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FUN_1417510e0();
  }
  *(byte *)(param_1 + 0x71a) = *(byte *)(param_1 + 0x71a) | 0x20;
  return;
}



// FUNCTION 14260adb0 FUN_14260adb0 body=381 status=ok
// SIG undefined FUN_14260adb0(void)

void FUN_14260adb0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x1f8);
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 5) & 0x80) != 0)) {
    lVar3 = *plVar1;
    uVar4 = FUN_1426279f0();
    (**(code **)(lVar3 + 0x280))(*(undefined8 *)(param_1 + 0x1f8),param_1,uVar4,param_4,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x210);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 5) & 0x80) != 0)) {
    (**(code **)(*plVar1 + 0x280))(plVar1,param_1,*(undefined4 *)(param_1 + 0x218),param_4,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x200);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 5) & 0x80) != 0)) {
    lVar3 = *plVar1;
    uVar4 = FUN_1426279f0(param_1);
    (**(code **)(lVar3 + 0x280))(*(undefined8 *)(param_1 + 0x200),param_1,uVar4,param_4,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x220);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 5) & 0x80) != 0)) {
    (**(code **)(*plVar1 + 0x280))(plVar1,param_1,*(undefined4 *)(param_1 + 0x228),param_4,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x208);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 5) & 0x80) != 0)) {
    lVar3 = *plVar1;
    uVar4 = FUN_1426279f0(param_1);
    (**(code **)(lVar3 + 0x280))(*(undefined8 *)(param_1 + 0x208),param_1,uVar4,param_4,param_2);
  }
  plVar1 = *(longlong **)(lVar2 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x280))(plVar1,param_1,*(undefined4 *)(param_1 + 0x30),param_4,param_2);
  }
  FUN_14262c990(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14260af30 BeginDestroy body=27 status=ok
// SIG undefined BeginDestroy(void)

void UFlowChart::BeginDestroy(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_1425ff930(param_1);
  return;
}



// FUNCTION 14260af60 FUN_14260af60 body=542 status=ok
// SIG undefined FUN_14260af60(void)

void FUN_14260af60(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  code *local_178 [2];
  longlong local_168 [4];
  longlong *local_148;
  int local_138;
  undefined1 *local_128 [2];
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined1 local_d8 [80];
  undefined1 local_88 [112];
  
  if ((*(byte *)(param_1 + 0x9b8) & 1) == 0) {
    local_f8 = (longlong *)0x0;
    local_e8 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_118);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar2 + 1) = 0x49742400;
      *puVar2 = &PTR_FUN_1450ad0e0;
    }
    local_148 = (longlong *)0x0;
    local_128[0] = &LAB_1425ff080;
    local_138 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_168);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar2 + 1) = 0x49742400;
      *puVar2 = &PTR_FUN_1450ad0e0;
    }
    lVar3 = *(longlong *)(param_1 + 0x120);
    local_178[0] = FUN_1425ff0a0;
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    puVar2 = (undefined8 *)FName::FName(local_res8,L"FX.Default",1);
    uVar1 = *puVar2;
    uVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_d8,local_128);
    uVar5 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,local_178);
    uVar6 = thunk_FUN_1424a1420();
    FUN_142601e60(uVar6,lVar3,param_1,uVar1,uVar5,2,uVar4,0);
    if (local_138 != 0) {
      plVar7 = local_168;
      if (local_148 != (longlong *)0x0) {
        plVar7 = local_148;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_148 != (longlong *)0x0) {
      FMemory::Free();
    }
    if (local_e8 != 0) {
      plVar7 = local_118;
      if (local_f8 != (longlong *)0x0) {
        plVar7 = local_f8;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    *(uint *)(param_1 + 0x9b8) = *(uint *)(param_1 + 0x9b8) | 1;
  }
  else {
    *(uint *)(param_1 + 0x9b8) = *(uint *)(param_1 + 0x9b8) | 1;
  }
  return;
}



// FUNCTION 14260b180 FUN_14260b180 body=92 status=ok
// SIG undefined FUN_14260b180(void)

void FUN_14260b180(longlong *param_1)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0x71c) != '\x02') {
    return;
  }
  if ((*(byte *)(param_1 + 0xe3) & 1) != 0) {
    lVar1 = param_1[0x24];
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0();
    }
    FUN_1426a5b60(lVar1 + 0x870,param_1);
    return;
  }
  *(undefined1 *)((longlong)param_1 + 0x71c) = 3;
                    /* WARNING: Could not recover jumptable at 0x00014260b1cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x288))();
  return;
}



// FUNCTION 14260b1e0 FUN_14260b1e0 body=177 status=ok
// SIG undefined FUN_14260b1e0(void)

void FUN_14260b1e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x818);
  *(int *)(param_1 + 0x818) = iVar2 + 1;
  if (*(int *)(param_1 + 0x81c) < iVar2 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x810),iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x810) + (longlong)iVar2 * 0x48);
  puVar4 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 0xe) = 0;
    puVar4 = puVar1;
  }
  puVar4[4] = param_3;
  *puVar4 = 4;
  uVar3 = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)(puVar4 + 5) = *param_5;
  puVar4[7] = uVar3;
  *(undefined8 *)(puVar4 + 2) = param_2;
  puVar4[0x10] = param_4;
  TArray<FName,FDefaultAllocator>::operator=(puVar4 + 0xc,param_6);
  return;
}



// FUNCTION 14260b2a0 FUN_14260b2a0 body=346 status=ok
// SIG undefined FUN_14260b2a0(void)

void FUN_14260b2a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 *param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,char param_14)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  
  lVar3 = 0x830;
  if (param_14 == '\0') {
    lVar3 = 0x800;
  }
  plVar4 = (longlong *)(lVar3 + param_1);
  iVar1 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar1 + 1;
  if (*(int *)((longlong)plVar4 + 0xc) < iVar1 + 1) {
    TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeGrow
              (plVar4,iVar1);
  }
  puVar5 = (undefined4 *)((longlong)iVar1 * 0x78 + *plVar4);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[3] = 0;
    *(undefined8 *)(puVar5 + 0xc) = 0;
    *(undefined8 *)(puVar5 + 0xe) = 0;
    puVar5[0x10] = 0;
    *(undefined8 *)(puVar5 + 0x12) = 0;
    *(undefined8 *)(puVar5 + 0x14) = 0;
    *(undefined8 *)(puVar5 + 0x16) = 0;
    puVar5[0x18] = 0;
    *(undefined8 *)(puVar5 + 0x1a) = 0;
  }
  uVar2 = 3;
  if (param_14 != '\0') {
    uVar2 = 6;
  }
  *(undefined8 *)(puVar5 + 5) = *param_4;
  *puVar5 = uVar2;
  puVar5[7] = *(undefined4 *)(param_4 + 1);
  puVar5[4] = param_3;
  *(undefined8 *)(puVar5 + 2) = param_2;
  uVar2 = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)(puVar5 + 0x11) = *param_5;
  puVar5[0x13] = uVar2;
  uVar2 = *(undefined4 *)(param_6 + 1);
  *(undefined8 *)(puVar5 + 8) = *param_6;
  puVar5[10] = uVar2;
  TArray<FName,FDefaultAllocator>::operator=(puVar5 + 0xc,param_7);
  puVar5[0x10] = param_8;
  uVar2 = *(undefined4 *)(param_9 + 1);
  *(undefined8 *)(puVar5 + 0x14) = *param_9;
  puVar5[0x16] = uVar2;
  puVar5[0x18] = param_11;
  *(undefined8 *)(puVar5 + 0x1a) = param_12;
  *(undefined8 *)(puVar5 + 0x1c) = param_13;
  puVar5[0x17] = param_10;
  return;
}



// FUNCTION 14260b400 FUN_14260b400 body=208 status=ok
// SIG undefined FUN_14260b400(void)

void FUN_14260b400(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x7f8);
  *(int *)(param_1 + 0x7f8) = iVar1 + 1;
  if (*(int *)(param_1 + 0x7fc) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x7f0),iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x7f0));
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[3] = 0;
    *(undefined8 *)(puVar3 + 0xc) = 0;
    *(undefined8 *)(puVar3 + 0xe) = 0;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x12) = 0;
  }
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(puVar3 + 5) = *param_4;
  puVar3[7] = uVar2;
  puVar3[4] = param_3;
  *puVar3 = 2;
  *(undefined8 *)(puVar3 + 2) = param_2;
  uVar2 = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)(puVar3 + 8) = *param_5;
  puVar3[10] = uVar2;
  TArray<FName,FDefaultAllocator>::operator=(puVar3 + 0xc,param_6);
  puVar3[0x10] = param_7;
  return;
}



// FUNCTION 14260b4d0 FUN_14260b4d0 body=187 status=ok
// SIG undefined FUN_14260b4d0(void)

void FUN_14260b4d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x7e8);
  *(int *)(param_1 + 0x7e8) = iVar1 + 1;
  if (*(int *)(param_1 + 0x7ec) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x7e0),iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x7e0));
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3[3] = 0;
    *(undefined8 *)(puVar3 + 0xc) = 0;
    *(undefined8 *)(puVar3 + 0xe) = 0;
  }
  uVar2 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(puVar3 + 5) = *param_4;
  puVar3[7] = uVar2;
  puVar3[4] = param_3;
  *puVar3 = 1;
  *(undefined8 *)(puVar3 + 2) = param_2;
  uVar2 = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)(puVar3 + 8) = *param_5;
  puVar3[10] = uVar2;
  TArray<FName,FDefaultAllocator>::operator=(puVar3 + 0xc,param_6);
  return;
}



// FUNCTION 14260b590 RequiredBytes body=17 status=ok
// SIG undefined RequiredBytes(void)

int FParticleBeam2EmitterInstance::RequiredBytes(void)

{
  int iVar1;
  
  iVar1 = FUN_14262e1d0();
  return iVar1 + 4;
}



// FUNCTION 14260b5b0 FUN_14260b5b0 body=108 status=ok
// SIG undefined FUN_14260b5b0(void)

int FUN_14260b5b0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 4;
  if (*(char *)(param_1 + 0x38) != '\x03') {
    iVar3 = 0;
  }
  if (param_2 != 0) {
    lVar2 = UMovieSceneIntegerSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(param_2 + 0x38) == '\x02')) {
      return iVar3 + 4;
    }
  }
  return iVar3;
}



// FUNCTION 14260b6e0 FUN_14260b6e0 body=376 status=ok
// SIG undefined FUN_14260b6e0(void)

void FUN_14260b6e0(void)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  LARGE_INTEGER local_res8;
  longlong local_28;
  ulonglong local_20;
  int local_18;
  
  local_18 = -1;
  local_28 = 0;
  local_20 = 0;
  uVar3 = AGFreezeCharacterCue::GetPrivateStaticClass();
  FUN_1417a5560(uVar3,&local_28,1,0x10,0);
  uVar4 = local_20 & 0xffffffff;
  do {
    local_18 = local_18 + 1;
    if ((int)local_20 <= local_18) break;
  } while (*(longlong *)(local_28 + (longlong)local_18 * 8) == 0);
  do {
    do {
      if ((local_18 < 0) || ((int)uVar4 <= local_18)) {
        if (local_28 != 0) {
          FMemory::Free(local_28);
        }
        return;
      }
      lVar2 = *(longlong *)(local_28 + (longlong)local_18 * 8);
      FUN_14260b860(lVar2,0);
      FUN_1425fcab0(lVar2,1);
      *(byte *)(lVar2 + 0x71a) = *(byte *)(lVar2 + 0x71a) | 0x20;
      *(undefined4 *)(lVar2 + 0x7b8) = 0;
      if (*(int *)(lVar2 + 0x7bc) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar2 + 0x7b0,0);
      }
      FFXAsyncBatcher::Flush(&DAT_146b04fd8);
      QueryPerformanceCounter(&local_res8);
      bVar1 = *(byte *)(lVar2 + 0x71b);
      while ((bVar1 & 0x10) != 0) {
        FUN_1416b1810(0);
        bVar1 = *(byte *)(lVar2 + 0x71b);
      }
      FUN_142602d20(lVar2);
      if ((*(byte *)(lVar2 + 0x71a) & 0x20) != 0) {
        FUN_1425fe620(lVar2,*(undefined8 *)(lVar2 + 0x6f0));
        FUN_1423424e0(lVar2);
      }
      FUN_14234cb00(lVar2);
      uVar4 = local_20 & 0xffffffff;
      local_18 = local_18 + 1;
    } while ((int)local_20 <= local_18);
    do {
      if (*(longlong *)(local_28 + (longlong)local_18 * 8) != 0) break;
      local_18 = local_18 + 1;
    } while (local_18 < (int)local_20);
  } while( true );
}



// FUNCTION 14260b860 FUN_14260b860 body=424 status=ok
// SIG undefined FUN_14260b860(void)

void FUN_14260b860(longlong param_1,char param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  FUN_142616380(param_1,1,1);
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  if ((*(byte *)(param_1 + 0xba) & 4) != 0) {
    TBaseMulticastDelegate<void,UObject_*,bool>::Broadcast(&DAT_146534358,param_1,0);
  }
  if (lVar5 == 0) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = UWorld::IsGameWorld(lVar5);
  }
  iVar4 = *(int *)(param_1 + 0x928);
  uVar7 = 0;
  uVar6 = uVar7;
  uVar9 = uVar7;
  if (0 < iVar4) {
    do {
      lVar5 = *(longlong *)(uVar6 + *(longlong *)(param_1 + 0x920));
      if ((((lVar5 != 0) && (DAT_146534341 == '\0')) && (cVar3 != '\0')) && (param_2 == '\0')) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
      iVar4 = *(int *)(param_1 + 0x928);
      uVar8 = (int)uVar9 + 1;
      uVar6 = uVar6 + 8;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < iVar4);
  }
  *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) & 0xfb;
  if ((cVar3 == '\0') || (param_2 != '\0')) {
    uVar6 = uVar7;
    if (0 < iVar4) {
      do {
        puVar2 = *(undefined8 **)(uVar6 + *(longlong *)(param_1 + 0x920));
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
          *(undefined8 *)(uVar6 + *(longlong *)(param_1 + 0x920)) = 0;
        }
        uVar8 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar8;
        uVar6 = uVar6 + 8;
      } while ((int)uVar8 < *(int *)(param_1 + 0x928));
    }
    *(undefined4 *)(param_1 + 0x928) = 0;
    if (*(int *)(param_1 + 0x92c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x920,0);
    }
    FUN_142616380(param_1,1,1);
    if (*(longlong *)(param_1 + 0x640) != 0) {
      FUN_142681f80(*(longlong *)(param_1 + 0x640),0);
    }
  }
  else {
    uVar6 = uVar7;
    if (0 < *(int *)(param_1 + 0x928)) {
      do {
        plVar1 = *(longlong **)(uVar7 + *(longlong *)(param_1 + 0x920));
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x58))();
        }
        uVar8 = (int)uVar6 + 1;
        uVar7 = uVar7 + 8;
        uVar6 = (ulonglong)uVar8;
      } while ((int)uVar8 < *(int *)(param_1 + 0x928));
    }
  }
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 14260ba10 FUN_14260ba10 body=361 status=ok
// SIG undefined FUN_14260ba10(void)

void FUN_14260ba10(longlong param_1)

{
  void *_Src;
  void *_Dst;
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  LARGE_INTEGER local_res10;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res10);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar3 == '\0') {
    FUN_142600fa0(param_1);
    FUN_14260f940(param_1,0);
    if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
      FUN_142359580(param_1);
    }
    lVar4 = FUN_14178ca30(param_1);
    for (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x58); plVar2 != (longlong *)0x0;
        plVar2 = (longlong *)plVar2[10]) {
      if (((~(byte)((ulonglong)plVar2[7] >> 0x15) & 1) != 0) && ((plVar2[7] & 0x8000080000U) == 0))
      {
        lVar5 = FUN_1428e7a40();
        for (lVar6 = UField::GetOwnerClass(plVar2); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30))
        {
          if (lVar6 == lVar5) {
            _Src = (void *)(*(int *)((longlong)plVar2 + 0x44) + lVar4);
            _Dst = (void *)(*(int *)((longlong)plVar2 + 0x44) + param_1);
            if (_Dst != _Src) {
              if ((*(uint *)(plVar2 + 7) >> 0x1e & 1) == 0) {
                (**(code **)(*plVar2 + 0x2e8))(plVar2,_Dst,_Src,(int)plVar2[6]);
              }
              else {
                _guard_xfg_dispatch_icall_nop
                          (_Dst,_Src,(longlong)(*(int *)((longlong)plVar2 + 0x34) * (int)plVar2[6]))
                ;
              }
            }
            break;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14260bb80 ResizeGrow body=257 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TTuple<UMaterialInterface_const_*,float>,TInlineAllocator<12,FDefaultAllocator>_>::
     ResizeGrow(void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 200);
  if (uVar1 < 0xd) {
    uVar2 = 0xc;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0xcc) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 << 4,0);
    uVar2 = (uint)(uVar3 >> 4);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0xcc) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0xc0);
  if (uVar2 < 0xd) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 4);
    pvVar4 = *(void **)((longlong)param_1 + 0xc0);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 4,0);
        *(void **)((longlong)param_1 + 0xc0) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 4);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 4;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0xc0) = uVar5;
  return;
}



// FUNCTION 14260bc90 ResizeTo body=110 status=ok
// SIG undefined ResizeTo(void)

void TArray<ASBZAICharacter_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 0x15) {
      iVar1 = 0x14;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0xac)) {
    *(int *)(param_1 + 0xac) = iVar1;
    TInlineAllocator<20,TSizedDefaultAllocator<32>_>::ForElementType<ASBZAICharacter_*>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0xa8),iVar1,8);
  }
  return;
}



// FUNCTION 14260bd00 FUN_14260bd00 body=199 status=ok
// SIG undefined FUN_14260bd00(void)

void FUN_14260bd00(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x1f8);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x40);
    iVar6 = 0;
    if ((lVar4 != 0) && (bVar1 = *(byte *)(lVar3 + 0x38), 1 < bVar1)) {
      if (bVar1 < 4) {
        if (*(longlong *)(param_1 + 0x260) == 0) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x928);
          if (0 < iVar2) {
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x920);
            do {
              lVar3 = *plVar5;
              if ((lVar3 != 0) && (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x28) == lVar4)) {
                *(longlong *)(param_1 + 0x260) = lVar3;
                return;
              }
              iVar6 = iVar6 + 1;
              plVar5 = plVar5 + 1;
            } while (iVar6 < iVar2);
          }
        }
      }
      else if (bVar1 == 4) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x728);
        if (0 < iVar2) {
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x720);
          do {
            if (*plVar5 == lVar4) {
              *(longlong *)(param_1 + 600) = plVar5[6];
              return;
            }
            iVar6 = iVar6 + 1;
            plVar5 = plVar5 + 0x12;
          } while (iVar6 < iVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14260bdd0 FUN_14260bdd0 body=2012 status=ok
// SIG undefined FUN_14260bdd0(void)

undefined8
FUN_14260bdd0(longlong param_1,longlong param_2,float *param_3,longlong param_4,int *param_5,
             int param_6,char param_7)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_68;
  float local_60;
  
  if (((param_2 != 0) && ((*(uint *)(param_2 + 0xf0) & 0x100) != 0)) &&
     (lVar12 = *(longlong *)(param_2 + 0x1f0), lVar12 != 0)) {
    if (*(char *)(param_1 + 0x38) == '\x03') {
      *param_5 = *param_5 + 4;
    }
    if (*(char *)(lVar12 + 0x38) == '\x02') {
      *param_5 = *param_5 + 4;
    }
  }
  lVar12 = (longlong)param_6;
  if ((param_7 == '\x01') || ((*(byte *)(param_1 + 0xa0) & 1) == 0)) {
    cVar1 = *(char *)(param_1 + 0x38);
    if (cVar1 == '\x01') {
      if (*(int *)(param_2 + 0x270) < 1) goto LAB_14260c1b3;
      puVar7 = *(undefined8 **)(param_2 + 0x268);
      if (param_6 < *(int *)(param_2 + 0x270)) {
        *(undefined8 *)param_3 = *(undefined8 *)((longlong)puVar7 + lVar12 * 0xc);
        param_3[2] = *(float *)((longlong)puVar7 + lVar12 * 0xc + 8);
      }
      else {
        *(undefined8 *)param_3 = *puVar7;
        param_3[2] = *(float *)(puVar7 + 1);
      }
    }
    else if (cVar1 == '\x02') {
      lVar5 = *(longlong *)(param_2 + 0x18);
      fVar13 = *(float *)(lVar5 + 0x224);
      local_60 = *(float *)(lVar5 + 0x228);
      *param_3 = *(float *)(lVar5 + 0x220);
      param_3[1] = fVar13;
      param_3[2] = local_60;
    }
    else {
      if (cVar1 == '\x03') {
        if (1 < (byte)(*(char *)(*(longlong *)(param_2 + 0x1f0) + 0x38) - 1U)) goto LAB_14260c1b3;
        plVar9 = *(longlong **)(param_2 + 0x260);
        if (plVar9 == (longlong *)0x0) {
          FUN_14260bd00(param_2);
          plVar9 = *(longlong **)(param_2 + 0x260);
          if (plVar9 == (longlong *)0x0) goto LAB_14260c1b3;
        }
        uVar11 = *(uint *)(param_1 + 0x13c);
        if (plVar9[0x21] == 0) {
LAB_14260c11f:
          *(undefined8 *)param_3 = local_68;
        }
        else {
          uVar10 = uVar11;
          if (uVar11 == 0xffffffff) {
LAB_14260bf67:
            iVar4 = uVar10 + 1;
            *(int *)(param_1 + 0x13c) = iVar4;
            plVar9 = *(longlong **)(param_2 + 0x260);
            if ((int)plVar9[0x25] <= iVar4) {
              *(undefined4 *)(param_1 + 0x13c) = 0;
              iVar4 = 0;
              plVar9 = *(longlong **)(param_2 + 0x260);
            }
            uVar10 = (uint)*(ushort *)(plVar9[0x21] + (longlong)iVar4 * 2);
            if ((uVar11 == uVar10) || (iVar4 == -1)) {
              uVar10 = 0xffffffff;
            }
          }
          else {
            lVar5 = (**(code **)(*plVar9 + 0x110))();
            if ((lVar5 == 0) || (1.0 < *(float *)(lVar5 + 0xc))) {
              uVar10 = *(uint *)(param_1 + 0x13c);
              uVar11 = 0xffffffff;
              goto LAB_14260bf67;
            }
            plVar9 = *(longlong **)(param_2 + 0x260);
          }
          lVar5 = plVar9[3];
          if (((int)uVar10 < 0) ||
             (pfVar6 = (float *)(**(code **)(*plVar9 + 0x110))(plVar9,uVar10),
             pfVar6 == (float *)0x0)) {
            fVar13 = *(float *)(lVar5 + 0x224);
            local_60 = *(float *)(lVar5 + 0x228);
            *param_3 = *(float *)(lVar5 + 0x220);
            param_3[1] = fVar13;
          }
          else {
            lVar5 = *(longlong *)(param_2 + 0x260);
            fVar13 = *(float *)(lVar5 + 0xe0);
            fVar17 = *(float *)(lVar5 + 0xe4);
            fVar18 = *(float *)(lVar5 + 0xe8);
            iVar4 = _finite((double)pfVar6[4]);
            if ((((((iVar4 == 0) || (iVar4 = _finite((double)pfVar6[5]), iVar4 == 0)) ||
                  (iVar4 = _finite((double)pfVar6[6]), iVar4 == 0)) ||
                 ((iVar4 = _finite((double)*pfVar6), iVar4 == 0 ||
                  (iVar4 = _finite((double)pfVar6[1]), iVar4 == 0)))) ||
                ((iVar4 = _finite((double)pfVar6[2]), iVar4 == 0 ||
                 ((iVar4 = _finite((double)fVar13), iVar4 == 0 ||
                  (iVar4 = _finite((double)fVar17), iVar4 == 0)))))) ||
               (iVar4 = _finite((double)fVar18), iVar4 == 0)) goto LAB_14260c11f;
            local_60 = fVar18 + pfVar6[6];
            *(ulonglong *)param_3 = CONCAT44(fVar17 + pfVar6[5],fVar13 + pfVar6[4]);
          }
        }
      }
      else {
        if ((cVar1 == '\x04') && (*(longlong *)(param_1 + 0x40) != 0)) {
          FUN_14260bd00(param_2);
          if (*(longlong *)(param_2 + 600) == 0) goto LAB_14260c1b3;
          lVar5 = *(longlong *)(*(longlong *)(param_2 + 600) + 0x168);
          if (lVar5 == 0) {
            puVar8 = &DAT_1468b5b70;
          }
          else {
            puVar8 = (undefined *)(lVar5 + 0x210);
          }
          fVar13 = *(float *)(puVar8 + 0x10);
          fVar17 = *(float *)(puVar8 + 0x14);
          local_60 = *(float *)(puVar8 + 0x18);
        }
        else {
LAB_14260c1b3:
          lVar5 = *(longlong *)(param_2 + 0x18);
          if ((*(byte *)(param_1 + 0x48) & 1) != 0) {
            puVar7 = (undefined8 *)
                     FUN_1424118e0(param_1 + 0x50,&local_68,*(undefined4 *)(param_2 + 0x13c),lVar5,0
                                   ,0);
            *(undefined8 *)param_3 = *puVar7;
            param_3[2] = *(float *)(puVar7 + 1);
            lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x120);
            if (lVar5 == 0) {
              lVar5 = FUN_1423407b0();
            }
            local_68 = *(undefined8 *)(lVar5 + 0x7bc);
            iVar4 = *(int *)(lVar5 + 0x7c4);
            *param_3 = *param_3 - (float)(int)local_68;
            param_3[1] = param_3[1] - (float)(int)((ulonglong)local_68 >> 0x20);
            param_3[2] = param_3[2] - (float)iVar4;
            goto LAB_14260c313;
          }
          pfVar6 = (float *)FUN_1424118e0(param_1 + 0x50,&local_68,*(undefined4 *)(param_2 + 0x13c),
                                          lVar5,0,0);
          fVar18 = *(float *)(lVar5 + 0x210);
          fVar2 = *(float *)(lVar5 + 0x214);
          fVar17 = *(float *)(lVar5 + 0x218);
          fVar3 = *(float *)(lVar5 + 0x21c);
          fVar13 = *pfVar6 * *(float *)(lVar5 + 0x230);
          fVar19 = pfVar6[1] * *(float *)(lVar5 + 0x234);
          fVar20 = pfVar6[2] * *(float *)(lVar5 + 0x238);
          fVar14 = fVar20 * fVar2 - fVar19 * fVar17;
          fVar15 = fVar13 * fVar17 - fVar20 * fVar18;
          fVar16 = fVar19 * fVar18 - fVar13 * fVar2;
          fVar14 = fVar14 + fVar14;
          fVar15 = fVar15 + fVar15;
          fVar16 = fVar16 + fVar16;
          fVar13 = (fVar16 * fVar2 - fVar15 * fVar17) + fVar3 * fVar14 + fVar13 +
                   *(float *)(lVar5 + 0x220);
          fVar17 = (fVar14 * fVar17 - fVar16 * fVar18) + fVar3 * fVar15 + fVar19 +
                   *(float *)(lVar5 + 0x224);
          local_60 = (fVar15 * fVar18 - fVar14 * fVar2) + fVar3 * fVar16 + fVar20 +
                     *(float *)(lVar5 + 0x228);
        }
        *(ulonglong *)param_3 = CONCAT44(fVar17,fVar13);
      }
      param_3[2] = local_60;
    }
  }
LAB_14260c313:
  if ((param_7 != '\x01') && ((*(byte *)(param_1 + 0xf8) & 1) != 0)) goto LAB_14260c534;
  cVar1 = *(char *)(param_1 + 0xa4);
  if (cVar1 == '\0') {
    fVar18 = 1.0;
    fVar17 = 0.0;
    fVar13 = 0.0;
LAB_14260c4b2:
    lVar5 = *(longlong *)(param_2 + 0x18);
    fVar18 = fVar18 * *(float *)(lVar5 + 0x230);
    fVar17 = fVar17 * *(float *)(lVar5 + 0x234);
    fVar13 = fVar13 * *(float *)(lVar5 + 0x238);
    fVar2 = *(float *)(lVar5 + 0x210);
    fVar3 = *(float *)(lVar5 + 0x214);
    fVar14 = *(float *)(lVar5 + 0x218);
    fVar15 = *(float *)(lVar5 + 0x21c);
    fVar16 = fVar13 * fVar3 - fVar17 * fVar14;
    fVar19 = fVar18 * fVar14 - fVar13 * fVar2;
    fVar20 = fVar17 * fVar2 - fVar18 * fVar3;
    fVar16 = fVar16 + fVar16;
    fVar19 = fVar19 + fVar19;
    fVar20 = fVar20 + fVar20;
    fVar18 = (fVar20 * fVar3 - fVar19 * fVar14) + fVar15 * fVar16 + fVar18;
    fVar17 = (fVar16 * fVar14 - fVar20 * fVar2) + fVar15 * fVar19 + fVar17;
    local_60 = (fVar19 * fVar2 - fVar16 * fVar3) + fVar15 * fVar20 + fVar13;
LAB_14260c526:
    *(ulonglong *)(param_3 + 3) = CONCAT44(fVar17,fVar18);
    fVar13 = local_60;
  }
  else if (cVar1 == '\x01') {
    if (*(int *)(param_2 + 0x280) < 1) {
LAB_14260c44a:
      puVar7 = (undefined8 *)
               FUN_1424118e0(param_1 + 0xa8,&local_68,*(undefined4 *)(param_4 + 0xc),
                             *(undefined8 *)(param_2 + 0x18),0,0);
      *(undefined8 *)(param_3 + 3) = *puVar7;
      param_3[5] = *(float *)(puVar7 + 1);
      if ((*(byte *)(param_1 + 0x48) & 1) != 0) goto LAB_14260c534;
      fVar13 = param_3[5];
      fVar17 = param_3[4];
      fVar18 = param_3[3];
      goto LAB_14260c4b2;
    }
    puVar7 = *(undefined8 **)(param_2 + 0x278);
    if (param_6 < *(int *)(param_2 + 0x280)) {
      *(undefined8 *)(param_3 + 3) = *(undefined8 *)((longlong)puVar7 + lVar12 * 0xc);
      fVar13 = *(float *)((longlong)puVar7 + lVar12 * 0xc + 8);
    }
    else {
      *(undefined8 *)(param_3 + 3) = *puVar7;
      fVar13 = *(float *)(puVar7 + 1);
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') goto LAB_14260c44a;
      lVar5 = *(longlong *)(param_2 + 0x18);
      fVar18 = *(float *)(lVar5 + 0x230) * 1.0;
      fVar19 = *(float *)(lVar5 + 0x234) * 0.0;
      fVar20 = *(float *)(lVar5 + 0x238) * 0.0;
      fVar13 = *(float *)(lVar5 + 0x210);
      fVar2 = *(float *)(lVar5 + 0x214);
      fVar17 = *(float *)(lVar5 + 0x218);
      fVar3 = *(float *)(lVar5 + 0x21c);
      fVar14 = fVar20 * fVar2 - fVar19 * fVar17;
      fVar15 = fVar18 * fVar17 - fVar20 * fVar13;
      fVar16 = fVar19 * fVar13 - fVar18 * fVar2;
      fVar14 = fVar14 + fVar14;
      fVar15 = fVar15 + fVar15;
      fVar16 = fVar16 + fVar16;
      fVar18 = (fVar16 * fVar2 - fVar15 * fVar17) + fVar3 * fVar14 + fVar18;
      fVar17 = (fVar14 * fVar17 - fVar16 * fVar13) + fVar3 * fVar15 + fVar19;
      local_60 = (fVar15 * fVar13 - fVar14 * fVar2) + fVar3 * fVar16 + fVar20;
      goto LAB_14260c526;
    }
    puVar7 = (undefined8 *)
             FUN_1424118e0(param_1 + 0xa8,&local_68,*(undefined4 *)(param_4 + 0xc),
                           *(undefined8 *)(param_2 + 0x18),0,0);
    *(undefined8 *)(param_3 + 3) = *puVar7;
    fVar13 = *(float *)(puVar7 + 1);
  }
  param_3[5] = fVar13;
LAB_14260c534:
  if ((param_7 == '\x01') || ((*(byte *)(param_1 + 0x138) & 1) == 0)) {
    if ((*(char *)(param_1 + 0xa4) == '\x01') && (0 < *(int *)(param_2 + 0x290))) {
      if (param_6 < *(int *)(param_2 + 0x290)) {
        fVar13 = (*(float **)(param_2 + 0x288))[lVar12];
      }
      else {
        fVar13 = **(float **)(param_2 + 0x288);
      }
    }
    else {
      fVar13 = (float)FUN_1424116d0(param_1 + 0x100,*(undefined4 *)(param_4 + 0xc),
                                    *(undefined8 *)(param_2 + 0x18),0);
    }
    param_3[6] = fVar13;
  }
  return 1;
}



// FUNCTION 14260c5b0 FUN_14260c5b0 body=199 status=ok
// SIG undefined FUN_14260c5b0(void)

void FUN_14260c5b0(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x200);
  if (lVar3 != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x40);
    iVar6 = 0;
    if ((lVar4 != 0) && (bVar1 = *(byte *)(lVar3 + 0x38), 1 < bVar1)) {
      if (bVar1 < 4) {
        if (*(longlong *)(param_1 + 0x2e0) == 0) {
          iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x928);
          if (0 < iVar2) {
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x920);
            do {
              lVar3 = *plVar5;
              if ((lVar3 != 0) && (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x28) == lVar4)) {
                *(longlong *)(param_1 + 0x2e0) = lVar3;
                return;
              }
              iVar6 = iVar6 + 1;
              plVar5 = plVar5 + 1;
            } while (iVar6 < iVar2);
          }
        }
      }
      else if (bVar1 == 4) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x728);
        if (0 < iVar2) {
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x720);
          do {
            if (*plVar5 == lVar4) {
              *(longlong *)(param_1 + 0x2d8) = plVar5[6];
              return;
            }
            iVar6 = iVar6 + 1;
            plVar5 = plVar5 + 0x12;
          } while (iVar6 < iVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14260c680 FUN_14260c680 body=2287 status=ok
// SIG undefined FUN_14260c680(void)

undefined8
FUN_14260c680(longlong param_1,longlong param_2,float *param_3,longlong param_4,int *param_5,
             int param_6,char param_7)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auVar13 [12];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [12];
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 local_78;
  float local_70;
  
  if ((((param_2 != 0) && ((*(uint *)(param_2 + 0xf0) & 0x100) != 0)) &&
      (*(longlong *)(param_2 + 0x1f0) != 0)) && (*(char *)(param_1 + 0x38) == '\x03')) {
    *param_5 = *param_5 + 4;
  }
  lVar11 = (longlong)param_6;
  if ((param_7 == '\x01') || ((*(byte *)(param_1 + 0x98) & 2) == 0)) {
    cVar1 = *(char *)(*(longlong *)(param_2 + 0x1f0) + 0x38);
    if (cVar1 == '\0') {
      fVar12 = (float)FUN_1424116d0(*(longlong *)(param_2 + 0x1f0) + 0x68,
                                    *(undefined4 *)(param_4 + 0xc),*(undefined8 *)(param_2 + 0x18),0
                                   );
      if (ABS(fVar12) < 0.0001) {
        fVar12 = 0.001;
      }
      lVar3 = *(longlong *)(param_2 + 0x18);
      fVar18 = *(float *)(lVar3 + 0x230) * 1.0;
      fVar22 = *(float *)(lVar3 + 0x234) * 0.0;
      fVar23 = *(float *)(lVar3 + 0x238) * 0.0;
      fVar14 = *(float *)(lVar3 + 0x210);
      fVar25 = *(float *)(lVar3 + 0x214);
      fVar24 = *(float *)(lVar3 + 0x218);
      fVar19 = *(float *)(lVar3 + 0x21c);
      fVar15 = fVar23 * fVar25 - fVar22 * fVar24;
      fVar16 = fVar18 * fVar24 - fVar23 * fVar14;
      fVar17 = fVar22 * fVar14 - fVar18 * fVar25;
      fVar15 = fVar15 + fVar15;
      fVar16 = fVar16 + fVar16;
      fVar17 = fVar17 + fVar17;
      fVar18 = (fVar17 * fVar25 - fVar16 * fVar24) + fVar19 * fVar15 + fVar18;
      fVar24 = (fVar15 * fVar24 - fVar17 * fVar14) + fVar19 * fVar16 + fVar22;
      fVar25 = (fVar16 * fVar14 - fVar15 * fVar25) + fVar19 * fVar17 + fVar23;
      fVar14 = fVar18 * fVar18 + fVar24 * fVar24 + fVar25 * fVar25;
      if (1e-08 < fVar14) {
        auVar21 = rsqrtss(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
        fVar19 = auVar21._0_4_;
        fVar19 = fVar19 + fVar19 * (0.5 - fVar14 * 0.5 * fVar19 * fVar19);
        fVar19 = fVar19 + fVar19 * (0.5 - fVar14 * 0.5 * fVar19 * fVar19);
        fVar18 = fVar19 * fVar18;
        fVar24 = fVar19 * fVar24;
        fVar25 = fVar19 * fVar25;
      }
      local_70 = fVar25 * fVar12 + param_3[2];
      *(ulonglong *)(param_3 + 7) =
           CONCAT44(fVar24 * fVar12 + param_3[1],fVar18 * fVar12 + *param_3);
      param_3[9] = local_70;
    }
    else {
      cVar2 = *(char *)(param_1 + 0x38);
      if (cVar2 == '\x01') {
        if (*(int *)(param_2 + 0x300) < 1) goto LAB_14260cb71;
        puVar5 = *(undefined8 **)(param_2 + 0x2f8);
        if (param_6 < *(int *)(param_2 + 0x300)) {
          *(undefined8 *)(param_3 + 7) = *(undefined8 *)((longlong)puVar5 + lVar11 * 0xc);
          param_3[9] = *(float *)((longlong)puVar5 + lVar11 * 0xc + 8);
        }
        else {
          *(undefined8 *)(param_3 + 7) = *puVar5;
          param_3[9] = *(float *)(puVar5 + 1);
        }
      }
      else {
        if (cVar2 == '\x03') {
          if (1 < (byte)(cVar1 - 1U)) goto LAB_14260cb71;
          plVar7 = *(longlong **)(param_2 + 0x2e0);
          if (plVar7 == (longlong *)0x0) {
            FUN_14260c5b0(param_2);
            plVar7 = *(longlong **)(param_2 + 0x2e0);
            if (plVar7 == (longlong *)0x0) goto LAB_14260cb71;
          }
          uVar10 = *(uint *)(param_1 + 0x138);
          if (plVar7[0x21] == 0) goto LAB_14260cb71;
          uVar9 = uVar10;
          if (uVar10 == 0xffffffff) {
LAB_14260c993:
            iVar8 = uVar9 + 1;
            *(int *)(param_1 + 0x138) = iVar8;
            lVar3 = *(longlong *)(param_2 + 0x2e0);
            if (*(int *)(lVar3 + 0x128) <= iVar8) {
              *(undefined4 *)(param_1 + 0x138) = 0;
              iVar8 = 0;
              lVar3 = *(longlong *)(param_2 + 0x2e0);
            }
            uVar9 = (uint)*(ushort *)(*(longlong *)(lVar3 + 0x108) + (longlong)iVar8 * 2);
            if ((uVar10 != uVar9) && (iVar8 != -1)) goto LAB_14260c9d9;
LAB_14260c9f6:
            pfVar4 = (float *)0x0;
          }
          else {
            lVar3 = (**(code **)(*plVar7 + 0x110))();
            if ((lVar3 == 0) || (1.0 < *(float *)(lVar3 + 0xc))) {
              uVar9 = *(uint *)(param_1 + 0x138);
              uVar10 = 0xffffffff;
              goto LAB_14260c993;
            }
LAB_14260c9d9:
            if ((int)uVar9 < 0) goto LAB_14260c9f6;
            pfVar4 = (float *)(**(code **)(**(longlong **)(param_2 + 0x2e0) + 0x110))
                                        (*(longlong **)(param_2 + 0x2e0),uVar9);
          }
          lVar3 = *(longlong *)(param_2 + 0x2e0);
          if (pfVar4 == (float *)0x0) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
            fVar12 = *(float *)(lVar3 + 0x224);
            local_70 = *(float *)(lVar3 + 0x228);
            param_3[7] = *(float *)(lVar3 + 0x220);
            param_3[8] = fVar12;
          }
          else {
            fVar12 = *(float *)(lVar3 + 0xe0);
            fVar14 = *(float *)(lVar3 + 0xe4);
            fVar25 = *(float *)(lVar3 + 0xe8);
            iVar8 = _finite((double)pfVar4[4]);
            if (((((iVar8 == 0) || (iVar8 = _finite((double)pfVar4[5]), iVar8 == 0)) ||
                 (iVar8 = _finite((double)pfVar4[6]), iVar8 == 0)) ||
                (((iVar8 = _finite((double)*pfVar4), iVar8 == 0 ||
                  (iVar8 = _finite((double)pfVar4[1]), iVar8 == 0)) ||
                 ((iVar8 = _finite((double)pfVar4[2]), iVar8 == 0 ||
                  ((iVar8 = _finite((double)fVar12), iVar8 == 0 ||
                   (iVar8 = _finite((double)fVar14), iVar8 == 0)))))))) ||
               (iVar8 = _finite((double)fVar25), iVar8 == 0)) {
              *(undefined8 *)(param_3 + 7) = local_78;
            }
            else {
              local_70 = fVar25 + pfVar4[6];
              *(ulonglong *)(param_3 + 7) = CONCAT44(fVar14 + pfVar4[5],fVar12 + pfVar4[4]);
            }
          }
        }
        else {
          if ((cVar2 == '\x04') && (*(longlong *)(param_1 + 0x40) != 0)) {
            FUN_14260c5b0(param_2);
            if (*(longlong *)(param_2 + 0x2d8) == 0) goto LAB_14260cb71;
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x2d8) + 0x168);
            if (lVar3 == 0) {
              puVar6 = &DAT_1468b5b70;
            }
            else {
              puVar6 = (undefined *)(lVar3 + 0x210);
            }
            fVar12 = *(float *)(puVar6 + 0x10);
            fVar14 = *(float *)(puVar6 + 0x14);
            local_70 = *(float *)(puVar6 + 0x18);
          }
          else {
LAB_14260cb71:
            lVar3 = *(longlong *)(param_2 + 0x18);
            if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
              puVar5 = (undefined8 *)
                       FUN_1424118e0(param_1 + 0x48,&local_78,*(undefined4 *)(param_2 + 0x13c),lVar3
                                     ,0,0);
              *(undefined8 *)(param_3 + 7) = *puVar5;
              param_3[9] = *(float *)(puVar5 + 1);
              lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 0x120);
              if (lVar3 == 0) {
                lVar3 = FUN_1423407b0();
              }
              local_78 = *(undefined8 *)(lVar3 + 0x7bc);
              iVar8 = *(int *)(lVar3 + 0x7c4);
              param_3[7] = param_3[7] - (float)(int)local_78;
              param_3[8] = param_3[8] - (float)(int)((ulonglong)local_78 >> 0x20);
              param_3[9] = param_3[9] - (float)iVar8;
              goto LAB_14260cce9;
            }
            pfVar4 = (float *)FUN_1424118e0(param_1 + 0x48,&local_78,
                                            *(undefined4 *)(param_2 + 0x13c),lVar3,0,0);
            fVar25 = *(float *)(lVar3 + 0x210);
            fVar24 = *(float *)(lVar3 + 0x214);
            fVar14 = *(float *)(lVar3 + 0x218);
            fVar19 = *(float *)(lVar3 + 0x21c);
            fVar12 = *pfVar4 * *(float *)(lVar3 + 0x230);
            fVar17 = pfVar4[1] * *(float *)(lVar3 + 0x234);
            fVar22 = pfVar4[2] * *(float *)(lVar3 + 0x238);
            fVar18 = fVar22 * fVar24 - fVar17 * fVar14;
            fVar15 = fVar12 * fVar14 - fVar22 * fVar25;
            fVar16 = fVar17 * fVar25 - fVar12 * fVar24;
            fVar18 = fVar18 + fVar18;
            fVar15 = fVar15 + fVar15;
            fVar16 = fVar16 + fVar16;
            fVar12 = (fVar16 * fVar24 - fVar15 * fVar14) + fVar19 * fVar18 + fVar12 +
                     *(float *)(lVar3 + 0x220);
            fVar14 = (fVar18 * fVar14 - fVar16 * fVar25) + fVar19 * fVar15 + fVar17 +
                     *(float *)(lVar3 + 0x224);
            local_70 = (fVar15 * fVar25 - fVar18 * fVar24) + fVar19 * fVar16 + fVar22 +
                       *(float *)(lVar3 + 0x228);
          }
          *(ulonglong *)(param_3 + 7) = CONCAT44(fVar14,fVar12);
        }
        param_3[9] = local_70;
      }
    }
  }
LAB_14260cce9:
  if ((param_7 != '\x01') && ((*(byte *)(param_1 + 0xf0) & 1) != 0)) goto LAB_14260cdab;
  cVar1 = *(char *)(param_1 + 0x9c);
  if (cVar1 == '\0') {
LAB_14260cd22:
    lVar3 = *(longlong *)(param_2 + 0x18);
    fVar12 = *(float *)(lVar3 + 0x210);
    fVar14 = *(float *)(lVar3 + 0x214);
    fVar25 = *(float *)(lVar3 + 0x218);
    fVar24 = *(float *)(lVar3 + 0x21c);
    fVar22 = *(float *)(lVar3 + 0x230) * 1.0;
    fVar23 = *(float *)(lVar3 + 0x234) * 0.0;
    fVar26 = *(float *)(lVar3 + 0x238) * 0.0;
    fVar15 = fVar26 * fVar14 - fVar23 * fVar25;
    fVar16 = fVar22 * fVar25 - fVar26 * fVar12;
    fVar17 = fVar23 * fVar12 - fVar22 * fVar14;
    fVar15 = fVar15 + fVar15;
    fVar16 = fVar16 + fVar16;
    fVar17 = fVar17 + fVar17;
    auVar20._0_4_ = fVar24 * fVar15;
    auVar20._4_4_ = fVar24 * fVar16;
    auVar20._8_4_ = fVar24 * fVar17;
    fVar24 = fVar17 * fVar14;
    fVar19 = fVar15 * fVar25;
    fVar18 = fVar16 * fVar12;
    auVar13._4_4_ = fVar17;
    auVar13._0_4_ = fVar16;
    auVar13._8_4_ = fVar15;
LAB_14260cd7b:
    local_70 = (fVar18 - auVar13._8_4_ * fVar14) + auVar20._8_4_ + fVar26;
    *(ulonglong *)(param_3 + 10) =
         CONCAT44((fVar19 - auVar13._4_4_ * fVar12) + auVar20._4_4_ + fVar23,
                  (fVar24 - auVar13._0_4_ * fVar25) + auVar20._0_4_ + fVar22);
    fVar12 = local_70;
  }
  else if (cVar1 == '\x01') {
    if (*(int *)(param_2 + 0x310) < 1) {
LAB_14260ce72:
      puVar5 = (undefined8 *)
               FUN_1424118e0(param_1 + 0xa0,&local_78,*(undefined4 *)(param_4 + 0xc),
                             *(undefined8 *)(param_2 + 0x18),0,0);
      *(undefined8 *)(param_3 + 10) = *puVar5;
      param_3[0xc] = *(float *)(puVar5 + 1);
      if ((*(byte *)(param_1 + 0x98) & 1) != 0) goto LAB_14260cdab;
      lVar3 = *(longlong *)(param_2 + 0x18);
      fVar12 = *(float *)(lVar3 + 0x210);
      fVar14 = *(float *)(lVar3 + 0x214);
      fVar25 = *(float *)(lVar3 + 0x218);
      fVar24 = *(float *)(lVar3 + 0x21c);
      fVar22 = param_3[10] * *(float *)(lVar3 + 0x230);
      fVar23 = param_3[0xb] * *(float *)(lVar3 + 0x234);
      fVar26 = param_3[0xc] * *(float *)(lVar3 + 0x238);
      fVar15 = fVar26 * fVar14 - fVar23 * fVar25;
      fVar16 = fVar22 * fVar25 - fVar26 * fVar12;
      fVar17 = fVar23 * fVar12 - fVar22 * fVar14;
      fVar15 = fVar15 + fVar15;
      fVar16 = fVar16 + fVar16;
      fVar17 = fVar17 + fVar17;
      auVar20._0_4_ = fVar24 * fVar15;
      auVar20._4_4_ = fVar24 * fVar16;
      auVar20._8_4_ = fVar24 * fVar17;
      fVar24 = fVar17 * fVar14;
      fVar19 = fVar15 * fVar25;
      fVar18 = fVar16 * fVar12;
      auVar13._4_4_ = fVar17;
      auVar13._0_4_ = fVar16;
      auVar13._8_4_ = fVar15;
      goto LAB_14260cd7b;
    }
    puVar5 = *(undefined8 **)(param_2 + 0x308);
    if (param_6 < *(int *)(param_2 + 0x310)) {
      *(undefined8 *)(param_3 + 10) = *(undefined8 *)((longlong)puVar5 + lVar11 * 0xc);
      fVar12 = *(float *)((longlong)puVar5 + lVar11 * 0xc + 8);
    }
    else {
      *(undefined8 *)(param_3 + 10) = *puVar5;
      fVar12 = *(float *)(puVar5 + 1);
    }
  }
  else {
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') goto LAB_14260ce72;
      goto LAB_14260cd22;
    }
    puVar5 = (undefined8 *)
             FUN_1424118e0(param_1 + 0xa0,&local_78,*(undefined4 *)(param_4 + 0xc),
                           *(undefined8 *)(param_2 + 0x18),0,0);
    *(undefined8 *)(param_3 + 10) = *puVar5;
    fVar12 = *(float *)(puVar5 + 1);
  }
  param_3[0xc] = fVar12;
LAB_14260cdab:
  if ((param_7 == '\x01') || ((*(byte *)(param_1 + 0x130) & 1) == 0)) {
    if ((*(char *)(param_1 + 0x9c) == '\x01') && (0 < *(int *)(param_2 + 0x2d0))) {
      if (param_6 < *(int *)(param_2 + 0x2d0)) {
        fVar12 = (*(float **)(param_2 + 0x2c8))[lVar11];
      }
      else {
        fVar12 = **(float **)(param_2 + 0x2c8);
      }
    }
    else {
      fVar12 = (float)FUN_1424116d0(param_1 + 0xf8,*(undefined4 *)(param_4 + 0xc),
                                    *(undefined8 *)(param_2 + 0x18),0);
    }
    param_3[0xd] = fVar12;
  }
  return 1;
}



// FUNCTION 14260cf70 FUN_14260cf70 body=148 status=ok
// SIG undefined FUN_14260cf70(void)

void FUN_14260cf70(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  LARGE_INTEGER local_res8;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x928)) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x920));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x58))();
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x928));
  }
  return;
}



// FUNCTION 14260d010 FUN_14260d010 body=111 status=ok
// SIG undefined FUN_14260d010(void)

void FUN_14260d010(longlong *param_1)

{
  FUN_142616380(param_1,1);
  FUN_14234e7b0(param_1);
  *(byte *)((longlong)param_1 + 0x71b) = *(byte *)((longlong)param_1 + 0x71b) | 4;
  if (param_1[200] != 0) {
    if ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) {
      (**(code **)(*param_1 + 0x9c0))(param_1);
      *(byte *)((longlong)param_1 + 0x71b) = *(byte *)((longlong)param_1 + 0x71b) & 0xfb;
      return;
    }
    if ((*(byte *)(param_1 + 0xe3) & 0x11) != 0) {
      FUN_142681f80(param_1[200],0);
    }
  }
  *(byte *)((longlong)param_1 + 0x71b) = *(byte *)((longlong)param_1 + 0x71b) & 0xfb;
  return;
}



// FUNCTION 14260d080 FUN_14260d080 body=65 status=ok
// SIG undefined FUN_14260d080(void)

void FUN_14260d080(longlong param_1)

{
  FUN_142616380(param_1,1);
  if (((*(byte *)(param_1 + 0xba) & 4) != 0) && ((*(byte *)(param_1 + 0x71a) & 2) == 0)) {
    FUN_142396490(param_1);
    return;
  }
  UActorComponent::SendRenderDynamicData_Concurrent(param_1);
  return;
}



// FUNCTION 14260d0d0 FUN_14260d0d0 body=2221 status=ok
// SIG undefined FUN_14260d0d0(void)

void FUN_14260d0d0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  FUN_14262f3d0();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd0,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd0,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd8,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1408bda20(param_2,param_1 + 0xe0);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xf0,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xf0,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xf4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xf4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xf8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xf8,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xfc,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xfc,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xfc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x100,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x100,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x100) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x104,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x104,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x104) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x108,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x108,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x10c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x10c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x110,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x110,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x110) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x114);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x115);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x116);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x117);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x118);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x119);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x11c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x11c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x11c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x120,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x120,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x120) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x124,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x124,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x124) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x128,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x128,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 300,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 300,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 300) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1406da970(param_2,param_1 + 0x130);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x13c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x13c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x13c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x140,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x140,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x144,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x144,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x144) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x148,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x148,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x148) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x14c,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x14c,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14c) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x150,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x150) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x154,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x154,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x154) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x158);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x159);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x15a);
                    /* WARNING: Could not recover jumptable at 0x00014260d979. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x15b);
  return;
}



// FUNCTION 14260d980 FUN_14260d980 body=646 status=ok
// SIG undefined FUN_14260d980(void)

void FUN_14260d980(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  FUN_14262f3d0();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd0,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd0,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd8,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xdc,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xdc,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xdc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xe0);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xe4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xe4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xe8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xe8,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0xec),1);
  }
  else {
    *(undefined1 *)(param_1 + 0xec) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0xed);
  FUN_1406da970(param_2,param_1 + 0xf0);
  return;
}



// FUNCTION 14260dc10 FUN_14260dc10 body=125 status=ok
// SIG undefined FUN_14260dc10(void)

void FUN_14260dc10(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_14260dca0();
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0xf0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xf0,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0xf0,4);
  }
  return;
}



// FUNCTION 14260dc90 thunk_FUN_14262f3d0 body=5 status=ok
// SIG undefined thunk_FUN_14262f3d0(void)

void thunk_FUN_14262f3d0(void)

{
  FUN_14262f3d0();
  return;
}



// FUNCTION 14260dca0 FUN_14260dca0 body=728 status=ok
// SIG undefined FUN_14260dca0(void)

void FUN_14260dca0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_14262f3d0();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd0,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd0,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xd8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xd8,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xdc,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xdc,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xdc) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xe0,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xe0,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe0) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xe4,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xe4,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xe8,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xe8,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe8) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *(undefined4 *)(param_1 + 0xec) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xec,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1 + 0xec,4);
  }
  return;
}



// FUNCTION 14260df80 FUN_14260df80 body=74 status=ok
// SIG undefined FUN_14260df80(void)

void FUN_14260df80(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 8);
  FUN_1419e0b60(param_2,param_1 + 0xc);
  FUN_1419e0b60(param_2,param_1 + 0x10);
  FUN_1419e0a40(param_2,param_1 + 0x14);
  return;
}



// FUNCTION 14260dfd0 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_146534348);
  return;
}



// FUNCTION 14260e000 FUN_14260e000 body=52 status=ok
// SIG undefined FUN_14260e000(void)

void FUN_14260e000(undefined8 param_1,undefined8 param_2)

{
  FArchive::UsingCustomVersion(param_2,&DAT_146534348);
  FUN_141763960(param_1,param_2);
  return;
}



// FUNCTION 14260e040 FUN_14260e040 body=160 status=ok
// SIG undefined FUN_14260e040(void)

void FUN_14260e040(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int local_res8 [2];
  int local_res18 [4];
  
  FUN_142616380(param_1,1);
  FUN_142396660(param_1,param_2);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x928)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x920));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x130))(plVar1,local_res18,local_res8);
        (**(code **)(*param_2 + 0x78))(param_2,(longlong)local_res18[0],(longlong)local_res8[0]);
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x928));
  }
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  return;
}



// FUNCTION 14260e0e0 FUN_14260e0e0 body=128 status=ok
// SIG undefined FUN_14260e0e0(void)

void FUN_14260e0e0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_141763960();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x28,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0x28,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1425fba40(param_2,param_1 + 0x30);
  return;
}



// FUNCTION 14260e160 FUN_14260e160 body=206 status=ok
// SIG undefined FUN_14260e160(void)

void FUN_14260e160(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (param_2 != 0) {
    if (0 < *(int *)(param_1 + 0x728)) {
      plVar3 = *(longlong **)(param_1 + 0x720);
      do {
        if ((*plVar3 == param_2) && ((char)plVar3[1] == '\x06')) {
          plVar3[6] = param_3;
          return;
        }
        lVar4 = lVar4 + 1;
        plVar3 = plVar3 + 0x12;
      } while (lVar4 < *(int *)(param_1 + 0x728));
    }
    plVar3 = (longlong *)(param_1 + 0x720);
    iVar1 = *(int *)(param_1 + 0x728);
    iVar2 = iVar1 + 1;
    *(int *)(param_1 + 0x728) = iVar2;
    if (*(int *)(param_1 + 0x72c) < iVar2) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar3);
    }
    lVar4 = (longlong)iVar1 * 0x90;
    _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + lVar4),0,0x90);
    *(longlong *)(lVar4 + *plVar3) = param_2;
    *(undefined1 *)(lVar4 + 8 + *plVar3) = 6;
    *(longlong *)(lVar4 + 0x30 + *plVar3) = param_3;
  }
  return;
}



// FUNCTION 14260e230 FUN_14260e230 body=83 status=ok
// SIG undefined FUN_14260e230(void)

void FUN_14260e230(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x300) < 1) {
    iVar3 = *(int *)(param_1 + 0x300) + 1;
    *(int *)(param_1 + 0x300) = iVar3;
    if (*(int *)(param_1 + 0x304) < iVar3) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow();
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x2f8);
  uVar1 = *(undefined4 *)(param_2 + 1);
  *puVar2 = *param_2;
  *(undefined4 *)(puVar2 + 1) = uVar1;
  return;
}



// FUNCTION 14260e290 FUN_14260e290 body=246 status=ok
// SIG undefined FUN_14260e290(void)

void FUN_14260e290(longlong param_1,longlong param_2,undefined8 *param_3)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_res8;
  undefined8 local_28;
  undefined4 local_20;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0x920);
  uVar5 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x928) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      plVar2 = (longlong *)*plVar4;
      if (((plVar2 != (longlong *)0x0) && (plVar2[2] != 0)) &&
         ((local_res8.QuadPart = 0, param_2 == 0 || (param_2 == *(longlong *)(plVar2[2] + 0x28)))))
      {
        local_20 = *(undefined4 *)(param_3 + 1);
        local_28 = *param_3;
        (**(code **)(*plVar2 + 0x178))(plVar2,&local_28);
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 14260e390 FUN_14260e390 body=226 status=ok
// SIG undefined FUN_14260e390(void)

void FUN_14260e390(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x920);
  uVar3 = 0;
  uVar5 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x928) < plVar4) {
    uVar5 = uVar3;
  }
  uVar2 = param_2;
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if (((plVar1 != (longlong *)0x0) && (plVar1[2] != 0)) &&
         ((param_3 == 0 || (param_3 == *(longlong *)(plVar1[2] + 0x28))))) {
        (**(code **)(*plVar1 + 0x1b0))(plVar1,uVar2,param_4,param_5,param_6,param_7);
        uVar2 = param_2 & 0xff;
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 14260e480 SetBeamSourceTangent body=127 status=ok
// SIG undefined SetBeamSourceTangent(void)

void FParticleBeam2EmitterInstance::SetBeamSourceTangent
               (longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (-1 < param_3) {
    if (*(int *)(param_1 + 0x270) < param_3 + 1) {
      iVar2 = param_3 + 1 + (*(int *)(param_1 + 0x270) - *(int *)(param_1 + 0x270));
      *(int *)(param_1 + 0x270) = iVar2;
      if (*(int *)(param_1 + 0x274) < iVar2) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow();
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x268);
    *(undefined8 *)(lVar1 + (longlong)param_3 * 0xc) = *param_2;
    *(undefined4 *)(lVar1 + (longlong)param_3 * 0xc + 8) = *(undefined4 *)(param_2 + 1);
  }
  return;
}



// FUNCTION 14260e500 FUN_14260e500 body=247 status=ok
// SIG undefined FUN_14260e500(void)

void FUN_14260e500(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_res8;
  undefined8 local_38;
  undefined4 local_30;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0x920);
  uVar5 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x928) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      plVar2 = (longlong *)*plVar4;
      if (((plVar2 != (longlong *)0x0) && (plVar2[2] != 0)) &&
         ((local_res8.QuadPart = 0, param_2 == 0 || (param_2 == *(longlong *)(plVar2[2] + 0x28)))))
      {
        local_30 = *(undefined4 *)(param_3 + 1);
        local_38 = *param_3;
        (**(code **)(*plVar2 + 0x180))(plVar2,&local_38,param_4);
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 14260e600 FUN_14260e600 body=109 status=ok
// SIG undefined FUN_14260e600(void)

void FUN_14260e600(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    if (*(int *)(param_1 + 0x290) < param_3 + 1) {
      iVar1 = param_3 + 1 + (*(int *)(param_1 + 0x290) - *(int *)(param_1 + 0x290));
      *(int *)(param_1 + 0x290) = iVar1;
      if (*(int *)(param_1 + 0x294) < iVar1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
      }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x288) + (longlong)param_3 * 4) = param_2;
  }
  return;
}



// FUNCTION 14260e670 FUN_14260e670 body=250 status=ok
// SIG undefined FUN_14260e670(void)

void FUN_14260e670(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_res8;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0x920);
  uVar5 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x928) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      plVar2 = (longlong *)*plVar4;
      if (((plVar2 != (longlong *)0x0) && (plVar2[2] != 0)) &&
         ((local_res8.QuadPart = 0, param_2 == 0 || (param_2 == *(longlong *)(plVar2[2] + 0x28)))))
      {
        (**(code **)(*plVar2 + 400))(plVar2,param_3,param_4);
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 14260e770 SetBeamSourcePoint body=127 status=ok
// SIG undefined SetBeamSourcePoint(void)

void FParticleBeam2EmitterInstance::SetBeamSourcePoint
               (longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (-1 < param_3) {
    if (*(int *)(param_1 + 0x280) < param_3 + 1) {
      iVar2 = param_3 + 1 + (*(int *)(param_1 + 0x280) - *(int *)(param_1 + 0x280));
      *(int *)(param_1 + 0x280) = iVar2;
      if (*(int *)(param_1 + 0x284) < iVar2) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow();
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x278);
    *(undefined8 *)(lVar1 + (longlong)param_3 * 0xc) = *param_2;
    *(undefined4 *)(lVar1 + (longlong)param_3 * 0xc + 8) = *(undefined4 *)(param_2 + 1);
  }
  return;
}



// FUNCTION 14260e7f0 FUN_14260e7f0 body=247 status=ok
// SIG undefined FUN_14260e7f0(void)

void FUN_14260e7f0(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_res8;
  undefined8 local_38;
  undefined4 local_30;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0x920);
  uVar5 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x928) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      plVar2 = (longlong *)*plVar4;
      if (((plVar2 != (longlong *)0x0) && (plVar2[2] != 0)) &&
         ((local_res8.QuadPart = 0, param_2 == 0 || (param_2 == *(longlong *)(plVar2[2] + 0x28)))))
      {
        local_30 = *(undefined4 *)(param_3 + 1);
        local_38 = *param_3;
        (**(code **)(*plVar2 + 0x188))(plVar2,&local_38,param_4);
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 14260e8f0 FUN_14260e8f0 body=226 status=ok
// SIG undefined FUN_14260e8f0(void)

void FUN_14260e8f0(longlong param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x920);
  uVar3 = 0;
  uVar5 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x928) < plVar4) {
    uVar5 = uVar3;
  }
  uVar2 = param_2;
  if (uVar5 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if (((plVar1 != (longlong *)0x0) && (plVar1[2] != 0)) &&
         ((param_3 == 0 || (param_3 == *(longlong *)(plVar1[2] + 0x28))))) {
        (**(code **)(*plVar1 + 0x1b8))(plVar1,uVar2,param_4,param_5,param_6,param_7);
        uVar2 = param_2 & 0xff;
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 14260e9e0 SetBeamTargetTangent body=127 status=ok
// SIG undefined SetBeamTargetTangent(void)

void FParticleBeam2EmitterInstance::SetBeamTargetTangent
               (longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (-1 < param_3) {
    if (*(int *)(param_1 + 0x300) < param_3 + 1) {
      iVar2 = param_3 + 1 + (*(int *)(param_1 + 0x300) - *(int *)(param_1 + 0x300));
      *(int *)(param_1 + 0x300) = iVar2;
      if (*(int *)(param_1 + 0x304) < iVar2) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow();
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x2f8);
    *(undefined8 *)(lVar1 + (longlong)param_3 * 0xc) = *param_2;
    *(undefined4 *)(lVar1 + (longlong)param_3 * 0xc + 8) = *(undefined4 *)(param_2 + 1);
  }
  return;
}



// FUNCTION 14260ea60 FUN_14260ea60 body=247 status=ok
// SIG undefined FUN_14260ea60(void)

void FUN_14260ea60(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_res8;
  undefined8 local_38;
  undefined4 local_30;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0x920);
  uVar5 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x928) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      plVar2 = (longlong *)*plVar4;
      if (((plVar2 != (longlong *)0x0) && (plVar2[2] != 0)) &&
         ((local_res8.QuadPart = 0, param_2 == 0 || (param_2 == *(longlong *)(plVar2[2] + 0x28)))))
      {
        local_30 = *(undefined4 *)(param_3 + 1);
        local_38 = *param_3;
        (**(code **)(*plVar2 + 0x198))(plVar2,&local_38,param_4);
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 14260eb60 FUN_14260eb60 body=109 status=ok
// SIG undefined FUN_14260eb60(void)

void FUN_14260eb60(longlong param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    if (*(int *)(param_1 + 0x2d0) < param_3 + 1) {
      iVar1 = param_3 + 1 + (*(int *)(param_1 + 0x2d0) - *(int *)(param_1 + 0x2d0));
      *(int *)(param_1 + 0x2d0) = iVar1;
      if (*(int *)(param_1 + 0x2d4) < iVar1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow();
      }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + (longlong)param_3 * 4) = param_2;
  }
  return;
}



// FUNCTION 14260ebd0 FUN_14260ebd0 body=250 status=ok
// SIG undefined FUN_14260ebd0(void)

void FUN_14260ebd0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_res8;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0x920);
  uVar5 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x928) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      plVar2 = (longlong *)*plVar4;
      if (((plVar2 != (longlong *)0x0) && (plVar2[2] != 0)) &&
         ((local_res8.QuadPart = 0, param_2 == 0 || (param_2 == *(longlong *)(plVar2[2] + 0x28)))))
      {
        (**(code **)(*plVar2 + 0x1a8))(plVar2,param_3,param_4);
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 14260ecd0 SetBeamTargetPoint body=127 status=ok
// SIG undefined SetBeamTargetPoint(void)

void FParticleBeam2EmitterInstance::SetBeamTargetPoint
               (longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (-1 < param_3) {
    if (*(int *)(param_1 + 0x310) < param_3 + 1) {
      iVar2 = param_3 + 1 + (*(int *)(param_1 + 0x310) - *(int *)(param_1 + 0x310));
      *(int *)(param_1 + 0x310) = iVar2;
      if (*(int *)(param_1 + 0x314) < iVar2) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow();
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x308);
    *(undefined8 *)(lVar1 + (longlong)param_3 * 0xc) = *param_2;
    *(undefined4 *)(lVar1 + (longlong)param_3 * 0xc + 8) = *(undefined4 *)(param_2 + 1);
  }
  return;
}



// FUNCTION 14260ed50 FUN_14260ed50 body=247 status=ok
// SIG undefined FUN_14260ed50(void)

void FUN_14260ed50(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  LARGE_INTEGER local_res8;
  undefined8 local_38;
  undefined4 local_30;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  uVar3 = 0;
  plVar4 = *(longlong **)(param_1 + 0x920);
  uVar5 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x928) < plVar4) {
    uVar5 = uVar3;
  }
  if (uVar5 != 0) {
    do {
      plVar2 = (longlong *)*plVar4;
      if (((plVar2 != (longlong *)0x0) && (plVar2[2] != 0)) &&
         ((local_res8.QuadPart = 0, param_2 == 0 || (param_2 == *(longlong *)(plVar2[2] + 0x28)))))
      {
        local_30 = *(undefined4 *)(param_3 + 1);
        local_38 = *param_3;
        (**(code **)(*plVar2 + 0x1a0))(plVar2,&local_38,param_4);
      }
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 14260ee50 FUN_14260ee50 body=229 status=ok
// SIG undefined FUN_14260ee50(void)

void FUN_14260ee50(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_res10;
  
  lVar4 = 0;
  local_res10 = 0;
  if (param_2 != 0) {
    FLinearColor::ToFColor(param_3,&local_res10,1);
    if (0 < *(int *)(param_1 + 0x728)) {
      plVar3 = *(longlong **)(param_1 + 0x720);
      do {
        if ((*plVar3 == param_2) && ((char)plVar3[1] == '\x05')) {
          *(undefined4 *)((longlong)plVar3 + 0x2c) = (undefined4)local_res10;
          return;
        }
        lVar4 = lVar4 + 1;
        plVar3 = plVar3 + 0x12;
      } while (lVar4 < *(int *)(param_1 + 0x728));
    }
    plVar3 = (longlong *)(param_1 + 0x720);
    iVar1 = *(int *)(param_1 + 0x728);
    iVar2 = iVar1 + 1;
    *(int *)(param_1 + 0x728) = iVar2;
    if (*(int *)(param_1 + 0x72c) < iVar2) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar3);
    }
    lVar4 = (longlong)iVar1 * 0x90;
    _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + lVar4),0,0x90);
    *(longlong *)(lVar4 + *plVar3) = param_2;
    *(undefined1 *)(lVar4 + 8 + *plVar3) = 5;
    *(undefined4 *)(lVar4 + 0x2c + *plVar3) = (undefined4)local_res10;
  }
  return;
}



// FUNCTION 14260ef40 FUN_14260ef40 body=129 status=ok
// SIG undefined FUN_14260ef40(void)

void FUN_14260ef40(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14262f9a0();
  lVar2 = *(longlong *)(param_1 + 0x1f0);
  lVar1 = (longlong)*(int *)(param_1 + 0x20) * 8;
  *(undefined8 *)(param_1 + 0x1f8) = *(undefined8 *)(lVar1 + *(longlong *)(lVar2 + 0x120));
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(lVar1 + *(longlong *)(lVar2 + 0x130));
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(lVar1 + *(longlong *)(lVar2 + 0x140));
  *(undefined8 *)(param_1 + 0x210) = *(undefined8 *)(lVar1 + *(longlong *)(lVar2 + 0x150));
  *(undefined8 *)(param_1 + 0x220) = *(undefined8 *)(lVar1 + *(longlong *)(lVar2 + 0x160));
  return;
}



// FUNCTION 14260efd0 SetDynamicParameterBuffer body=37 status=ok
// SIG undefined SetDynamicParameterBuffer(void)

void FParticleBeamTrailVertexFactory::SetDynamicParameterBuffer
               (longlong param_1,undefined **param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 == (undefined **)0x0) {
    param_3 = 0;
    param_2 = &PTR_PTR_146534748;
    param_4 = 0;
  }
  *(undefined ***)(param_1 + 0x48) = param_2;
  *(undefined4 *)(param_1 + 0x50) = param_4;
  *(undefined4 *)(param_1 + 0x54) = param_3;
  return;
}



// FUNCTION 14260f000 FUN_14260f000 body=191 status=ok
// SIG undefined FUN_14260f000(void)

void FUN_14260f000(longlong param_1,longlong param_2,byte param_3)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  LARGE_INTEGER local_res8;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x928)) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x920));
      if (((plVar2 != (longlong *)0x0) && (plVar2[2] != 0)) &&
         (*(longlong *)(plVar2[2] + 0x28) == param_2)) {
        (**(code **)(*plVar2 + 0x100))(plVar2,param_3 ^ 1);
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x928));
  }
  return;
}



// FUNCTION 14260f0c0 FUN_14260f0c0 body=213 status=ok
// SIG undefined FUN_14260f0c0(void)

void FUN_14260f0c0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar4 = 0;
  if (param_2 != 0) {
    if (0 < *(int *)(param_1 + 0x728)) {
      plVar3 = *(longlong **)(param_1 + 0x720);
      do {
        if ((*plVar3 == param_2) && ((char)plVar3[1] == '\x01')) {
          *(undefined4 *)((longlong)plVar3 + 0xc) = param_3;
          return;
        }
        lVar4 = lVar4 + 1;
        plVar3 = plVar3 + 0x12;
      } while (lVar4 < *(int *)(param_1 + 0x728));
    }
    plVar3 = (longlong *)(param_1 + 0x720);
    iVar1 = *(int *)(param_1 + 0x728);
    iVar2 = iVar1 + 1;
    *(int *)(param_1 + 0x728) = iVar2;
    if (*(int *)(param_1 + 0x72c) < iVar2) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar3);
    }
    lVar4 = (longlong)iVar1 * 0x90;
    _guard_xfg_dispatch_icall_nop((void *)(*plVar3 + lVar4),0,0x90);
    *(longlong *)(lVar4 + *plVar3) = param_2;
    *(undefined1 *)(lVar4 + 8 + *plVar3) = 1;
    *(undefined4 *)(lVar4 + 0xc + *plVar3) = param_3;
  }
  return;
}



// FUNCTION 14260f1a0 FUN_14260f1a0 body=22 status=ok
// SIG undefined FUN_14260f1a0(void)

void FUN_14260f1a0(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x9ac) = *param_2;
  *(undefined4 *)(param_1 + 0x9b4) = *(undefined4 *)(param_2 + 1);
  return;
}



// FUNCTION 14260f1e0 FUN_14260f1e0 body=237 status=ok
// SIG undefined FUN_14260f1e0(void)

void FUN_14260f1e0(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  LARGE_INTEGER local_res8;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  plVar2 = *(longlong **)(param_1 + 0x6f0);
  if ((plVar2 != (longlong *)0x0) && ((int)plVar2[0xf] != 0)) {
    iVar3 = (**(code **)(*plVar2 + 0x288))();
    param_2 = DAT_146b04c30 + param_2;
    uVar4 = 0;
    iVar5 = 0;
    if ((-1 < param_2) && (iVar5 = iVar3 + -1, param_2 < iVar3 + -1)) {
      iVar5 = param_2;
    }
    if (*(int *)(param_1 + 0x790) != iVar5) {
      FUN_1423424e0(param_1);
      *(int *)(param_1 + 0x790) = iVar5;
      uVar7 = uVar4;
      if (0 < *(int *)(param_1 + 0x928)) {
        do {
          plVar2 = *(longlong **)(uVar4 + *(longlong *)(param_1 + 0x920));
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x50))(plVar2,*(undefined4 *)(param_1 + 0x790),1);
          }
          uVar6 = (int)uVar7 + 1;
          uVar4 = uVar4 + 8;
          uVar7 = (ulonglong)uVar6;
        } while ((int)uVar6 < *(int *)(param_1 + 0x928));
      }
    }
  }
  return;
}



// FUNCTION 14260f390 FUN_14260f390 body=224 status=ok
// SIG undefined FUN_14260f390(void)

void FUN_14260f390(longlong param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  LARGE_INTEGER local_res8;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  bVar1 = *(byte *)(param_1 + 0x71b);
  while ((bVar1 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar1 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  if (((*(longlong *)(param_1 + 0x6f0) != 0) && (-1 < param_2)) &&
     (param_2 < *(int *)(*(longlong *)(param_1 + 0x6f0) + 0x48))) {
    if (*(int *)(param_1 + 0x700) <= param_2) {
      TArray<UMaterialInterface_*,FDefaultAllocator>::AddZeroed
                (param_1 + 0x6f8,(param_2 - *(int *)(param_1 + 0x700)) + 1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x6f8) + (longlong)param_2 * 8) = param_3;
    *(byte *)(param_1 + 0x71a) = *(byte *)(param_1 + 0x71a) | 0x20;
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x928)) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x920));
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x220))(plVar2,iVar4);
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar4 < *(int *)(param_1 + 0x928));
  }
  FUN_1423424c0(param_1);
  return;
}



// FUNCTION 14260f470 FUN_14260f470 body=66 status=ok
// SIG undefined FUN_14260f470(void)

void FUN_14260f470(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x9b0))();
    if (iVar1 != -1) {
      FUN_14260f8a0(param_1,iVar1,param_3);
    }
  }
  return;
}



// FUNCTION 14260f4c0 FUN_14260f4c0 body=979 status=ok
// SIG undefined FUN_14260f4c0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14260f4c0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  void *_Dst;
  ulonglong _Size;
  uint local_res8 [2];
  longlong local_res18 [2];
  
  if (*(longlong *)(param_4 + 0x6a0) == 0) {
    lVar12 = 0;
    bVar4 = true;
    bVar5 = false;
    local_res18[1] = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_4 + 0x6a0) + 0x38);
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    bVar5 = true;
    bVar4 = false;
    local_res18[0] = lVar12;
  }
  if (bVar4) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18 + 1);
  }
  if (bVar5) {
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
  }
  lVar6 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar6 + 0x28) == '\0') {
    FUN_1419f3850(lVar6);
  }
  uVar7 = *(undefined8 *)(lVar6 + 0x38);
  if (*(short *)(param_1 + 10) != 0) {
    local_res8[0] = (uint)*(ushort *)(param_1 + 8);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144165218;
    *(uint *)(puVar11 + 3) = local_res8[0];
    puVar11[2] = uVar7;
    puVar11[4] = lVar12;
  }
  lVar6 = FUN_142606b30(param_4);
  lVar12 = *(longlong *)(param_3 + 0x48);
  if (lVar6 == 0) {
    uVar7 = *(undefined8 *)(DAT_146ac3e38 + 0x38);
    if (*(char *)(lVar12 + 0x28) == '\0') {
      FUN_1419f3850(lVar12);
    }
    uVar8 = *(undefined8 *)(lVar12 + 0x38);
    if (*(short *)(param_1 + 0xe) == 0) goto LAB_14260f6d7;
    local_res8[0] = (uint)*(ushort *)(param_1 + 0xc);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
  }
  else {
    if (*(char *)(lVar12 + 0x28) == '\0') {
      FUN_1419f3850(lVar12);
    }
    uVar8 = *(undefined8 *)(lVar12 + 0x38);
    uVar7 = FUN_142606b30(param_4);
    if (*(short *)(param_1 + 0xe) == 0) goto LAB_14260f6d7;
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    local_res8[0] = (uint)*(ushort *)(param_1 + 0xc);
    puVar10 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
  }
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar11;
  *(undefined8 **)(param_2 + 8) = puVar11 + 1;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_144165218;
  puVar11[4] = uVar7;
  *(uint *)(puVar11 + 3) = local_res8[0];
  puVar11[2] = uVar8;
LAB_14260f6d7:
  lVar12 = *(longlong *)(param_3 + 0x48);
  if (*(char *)(lVar12 + 0x28) == '\0') {
    FUN_1419f3850(lVar12);
  }
  uVar7 = *(undefined8 *)(lVar12 + 0x38);
  uVar8 = (**(code **)(**(longlong **)(*(longlong *)(param_5 + 0x10) + 0x20) + 0x2f0))();
  if (*(short *)(param_1 + 0x12) != 0) {
    uVar1 = *(ushort *)(param_1 + 0x10);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 5;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x30);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 5;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_144165218;
    puVar11[4] = uVar8;
    puVar11[2] = uVar7;
    *(uint *)(puVar11 + 3) = (uint)uVar1;
  }
  lVar12 = *(longlong *)(param_3 + 0x48);
  local_res8[0] = *(uint *)(param_4 + 0x694);
  if (*(char *)(lVar12 + 0x28) == '\0') {
    FUN_1419f3850(lVar12);
  }
  uVar7 = *(undefined8 *)(lVar12 + 0x38);
  uVar3 = (uint)*(ushort *)(param_1 + 0x18);
  if (3 < *(ushort *)(param_1 + 0x18)) {
    uVar3 = 4;
  }
  _Size = (ulonglong)uVar3;
  if (uVar3 != 0) {
    uVar1 = *(ushort *)(param_1 + 0x16);
    uVar2 = *(ushort *)(param_1 + 0x14);
    _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
    uVar9 = _Size + (longlong)_Dst;
    if (*(ulonglong *)(param_2 + 0x38) < uVar9) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,uVar3 + 0x10);
      _Dst = (void *)(*(longlong *)(param_2 + 0x30) + 0xfU & 0xfffffffffffffff0);
      uVar9 = _Size + (longlong)_Dst;
    }
    *(ulonglong *)(param_2 + 0x30) = uVar9;
    _guard_xfg_dispatch_icall_nop(_Dst,local_res8,_Size);
    puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar11 + 6;
    if (*(undefined8 **)(param_2 + 0x38) < puVar10) {
      FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x38);
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
      puVar10 = puVar11 + 6;
    }
    *(undefined8 **)(param_2 + 0x30) = puVar10;
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    **(undefined8 **)(param_2 + 8) = puVar11;
    *(undefined8 **)(param_2 + 8) = puVar11 + 1;
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_143f4d340;
    *(uint *)((longlong)puVar11 + 0x24) = (uint)uVar1;
    puVar11[2] = uVar7;
    puVar11[3] = _Dst;
    *(uint *)(puVar11 + 4) = (uint)uVar2;
    *(uint *)(puVar11 + 5) = uVar3;
  }
  return;
}



// FUNCTION 14260f8a0 FUN_14260f8a0 body=152 status=ok
// SIG undefined FUN_14260f8a0(void)

void FUN_14260f8a0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x988);
  if (iVar1 <= param_2) {
    iVar3 = (param_2 - iVar1) + 1;
    iVar2 = iVar1 + iVar3;
    *(int *)(param_1 + 0x988) = iVar2;
    if (*(int *)(param_1 + 0x98c) < iVar2) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x980);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(param_1 + 0x980) + (longlong)iVar1 * 8),0,(longlong)iVar3 << 3
              );
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x980) + (longlong)param_2 * 8) = param_3;
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 14260f940 FUN_14260f940 body=580 status=ok
// SIG undefined FUN_14260f940(void)

void FUN_14260f940(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined4 uVar11;
  LARGE_INTEGER local_res8;
  ulonglong uVar7;
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_res8);
  uVar11 = 0;
  bVar2 = *(byte *)(param_1 + 0x71b);
  while ((bVar2 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar2 = *(byte *)(param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  if (DAT_146534340 == '\0') {
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  else {
    *(byte *)(param_1 + 0x71a) = *(byte *)(param_1 + 0x71a) | 0x20;
    cVar3 = UObjectBaseUtility::IsTemplate(param_1);
    bVar2 = *(byte *)(param_1 + 0x718);
    if (((*(byte *)(param_1 + 0xba) & 4) == 0) || ((bVar2 & 0x10) != 0)) {
      bVar8 = 0;
    }
    else {
      bVar8 = 0x20;
    }
    *(byte *)(param_1 + 0x718) = bVar2 & 0xde | bVar8;
    bVar10 = param_2 != *(longlong *)(param_1 + 0x6f0);
    if (bVar10) {
      *(byte *)(param_1 + 0x718) = bVar2 & 0xd2 | bVar8;
    }
    if (cVar3 == '\0') {
      FUN_14260b860(param_1,bVar10);
    }
    if (((param_2 == 0) || ((*(byte *)(param_2 + 0x158) & 2) == 0)) &&
       ((*(byte *)(param_1 + 0x9b8) & 1) != 0)) {
      lVar4 = *(longlong *)(param_1 + 0x120);
      if (lVar4 == 0) {
        lVar4 = FUN_1423407b0(param_1);
      }
      uVar5 = FUN_1424a5520();
      FUN_1404cb7e0(uVar5,lVar4,param_1);
      *(uint *)(param_1 + 0x9b8) = *(uint *)(param_1 + 0x9b8) & 0xfffffffe;
    }
    *(longlong *)(param_1 + 0x6f0) = param_2;
    if (param_2 != 0) {
      uVar11 = *(undefined4 *)(param_2 + 0x34);
    }
    *(undefined4 *)(param_1 + 0x788) = uVar11;
    *(undefined4 *)(param_1 + 0x790) = 0;
    if ((param_2 != 0) && ((*(byte *)(param_1 + 0xb8) & 1) != 0)) {
      if ((*(byte *)(param_2 + 0x158) & 2) != 0) {
        FUN_14260af60(param_1);
      }
      if ((((*(byte *)(param_1 + 0xba) & 2) == 0) && ((*(byte *)(param_1 + 0x718) & 0x20) == 0)) ||
         (cVar3 != '\0')) {
        FUN_142608c70(param_1);
      }
      else {
        FUN_1425fcab0(param_1,0);
      }
      if ((*(longlong *)(param_1 + 0x640) == 0) || (bVar10)) {
        FUN_1423424e0(param_1);
      }
    }
  }
  uVar7 = 0;
  if (((*(byte *)(param_1 + 0xb8) & 0x40) == 0) && (*(int *)(param_1 + 0x700) != 0)) {
    FUN_1423424e0(param_1);
  }
  *(undefined4 *)(param_1 + 0x700) = 0;
  if (*(int *)(param_1 + 0x704) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x6f8,0);
  }
  uVar9 = uVar7;
  if (0 < *(int *)(param_1 + 0x928)) {
    do {
      lVar4 = *(longlong *)(uVar9 + *(longlong *)(param_1 + 0x920));
      if (lVar4 != 0) {
        *(undefined4 *)(lVar4 + 0x20) = 0;
      }
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar9 = uVar9 + 8;
    } while ((int)uVar6 < *(int *)(param_1 + 0x928));
  }
  if (*(longlong *)(param_1 + 0x640) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x640) + 0x5e0);
    *pbVar1 = *pbVar1 | 1;
  }
  return;
}



// FUNCTION 14260fbc0 FUN_14260fbc0 body=1412 status=ok
// SIG undefined FUN_14260fbc0(void)

void FUN_14260fbc0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined4 uVar13;
  
  lVar1 = **(longlong **)(param_1 + 0x40);
  *(undefined1 *)(*(longlong *)(lVar1 + 0x50) + 0x2c) = 1;
  lVar8 = *(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x70);
  if (lVar8 != 0) {
    lVar4 = UDistributionFloatConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(undefined4 *)(lVar8 + 0x38) = 0x41a00000;
    }
  }
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  FUN_1417846f0(uVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  iVar9 = 0;
  uVar5 = FUN_1429c82e0();
  lVar4 = FUN_1417985e0(uVar5,uVar7,0,0,0,0,0,0,0);
  lVar8 = *(longlong *)(lVar4 + 0x68);
  if (lVar8 != 0) {
    lVar6 = UDistributionFloatUniform::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(uint *)(lVar8 + 0x30) = *(uint *)(lVar8 + 0x30) | 2;
      *(undefined4 *)(lVar8 + 0x38) = 0x3f800000;
      *(undefined4 *)(lVar8 + 0x3c) = 0x3f800000;
    }
  }
  plVar12 = (longlong *)(lVar1 + 0x38);
  *(undefined1 *)(lVar4 + 0x2c) = 1;
  iVar11 = *(int *)(lVar1 + 0x40);
  *(int *)(lVar1 + 0x40) = iVar11 + 1;
  if (*(int *)(lVar1 + 0x44) < iVar11 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar11);
  }
  *(longlong *)(*plVar12 + (longlong)iVar11 * 8) = lVar4;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  FUN_1417846f0(uVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = FUN_1429cdf60();
  lVar4 = FUN_1417985e0(uVar5,uVar7,0,0,0,0,0,0,0);
  lVar8 = *(longlong *)(lVar4 + 0x80);
  if (lVar8 != 0) {
    lVar6 = UDistributionVectorUniform::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(uint *)(lVar8 + 0x30) = *(uint *)(lVar8 + 0x30) | 2;
      *(undefined8 *)(lVar8 + 0x44) = 0x41c8000041c80000;
      *(undefined4 *)(lVar8 + 0x4c) = 0x41c80000;
      *(undefined8 *)(lVar8 + 0x38) = 0x41c8000041c80000;
      *(undefined4 *)(lVar8 + 0x40) = 0x41c80000;
    }
  }
  *(undefined1 *)(lVar4 + 0x2c) = 1;
  iVar11 = *(int *)(lVar1 + 0x40);
  *(int *)(lVar1 + 0x40) = iVar11 + 1;
  if (*(int *)(lVar1 + 0x44) < iVar11 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar11);
  }
  *(longlong *)(*plVar12 + (longlong)iVar11 * 8) = lVar4;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  FUN_1417846f0(uVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = FUN_1429d1ab0();
  lVar4 = FUN_1417985e0(uVar5,uVar7,0,0,0,0,0,0,0);
  lVar8 = *(longlong *)(lVar4 + 0x88);
  if (lVar8 != 0) {
    lVar6 = UDistributionVectorUniform::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(uint *)(lVar8 + 0x30) = *(uint *)(lVar8 + 0x30) | 2;
      *(undefined8 *)(lVar8 + 0x44) = 0xc1200000c1200000;
      *(undefined4 *)(lVar8 + 0x4c) = 0x42480000;
      *(undefined8 *)(lVar8 + 0x38) = 0x4120000041200000;
      *(undefined4 *)(lVar8 + 0x40) = 0x42c80000;
    }
  }
  *(undefined1 *)(lVar4 + 0x2c) = 1;
  iVar11 = *(int *)(lVar1 + 0x40);
  *(int *)(lVar1 + 0x40) = iVar11 + 1;
  if (*(int *)(lVar1 + 0x44) < iVar11 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar11);
  }
  *(longlong *)(*plVar12 + (longlong)iVar11 * 8) = lVar4;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  FUN_1417846f0(uVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar5 = FUN_1429c94e0();
  lVar4 = FUN_1417985e0(uVar5,uVar7,0,0,0,0,0,0,0);
  lVar8 = *(longlong *)(lVar4 + 0x80);
  if (lVar8 != 0) {
    lVar6 = UDistributionVectorConstantCurve::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    iVar11 = iVar9;
    if (bVar2) {
      do {
        uVar3 = (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x58))(lVar8 + 0x28);
        iVar10 = iVar9;
        do {
          (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x78))(lVar8 + 0x28,uVar3,1);
          (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x70))(lVar8 + 0x28,iVar10,uVar3,0x3f800000);
          iVar10 = iVar10 + 1;
        } while (iVar10 < 3);
        iVar11 = iVar11 + 1;
      } while (iVar11 < 2);
      *(uint *)(lVar8 + 0x30) = *(uint *)(lVar8 + 0x30) | 2;
    }
  }
  FUN_1417846f0(lVar4,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar7 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
  lVar8 = FUN_1417985e0(uVar7,lVar4,0,0,0,0,0,0,0);
  *(longlong *)(lVar4 + 0xb8) = lVar8;
  if (lVar8 != 0) {
    lVar6 = UDistributionFloatConstantCurve::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      do {
        uVar3 = (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x58))(lVar8 + 0x28);
        (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x78))(lVar8 + 0x28,uVar3,1);
        if (iVar9 == 0) {
          uVar13 = 0x3f800000;
        }
        else {
          uVar13 = 0;
        }
        (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x70))(lVar8 + 0x28,0,uVar3,uVar13);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 2);
      *(uint *)(lVar8 + 0x30) = *(uint *)(lVar8 + 0x30) | 2;
    }
  }
  *(undefined1 *)(lVar4 + 0x2c) = 1;
  iVar9 = *(int *)(lVar1 + 0x40);
  *(int *)(lVar1 + 0x40) = iVar9 + 1;
  if (*(int *)(lVar1 + 0x44) < iVar9 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar12,iVar9);
  }
  *(longlong *)(*plVar12 + (longlong)iVar9 * 8) = lVar4;
  return;
}



// FUNCTION 142610150 FUN_142610150 body=170 status=ok
// SIG undefined FUN_142610150(void)

void FUN_142610150(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  plVar3 = *(longlong **)(param_1 + 0x920);
  uVar4 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x928) < plVar3) {
    uVar4 = uVar2;
  }
  if (uVar4 != 0) {
    do {
      plVar1 = (longlong *)*plVar3;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x218))(plVar1,param_2,param_3,param_4,param_5);
      }
      plVar3 = plVar3 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar4);
  }
  return;
}



// FUNCTION 142610200 FUN_142610200 body=235 status=ok
// SIG undefined FUN_142610200(void)

void FUN_142610200(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0;
  if (param_2 != 0) {
    if (0 < *(int *)(param_1 + 0x728)) {
      plVar5 = *(longlong **)(param_1 + 0x720);
      do {
        if ((*plVar5 == param_2) && ((char)plVar5[1] == '\x03')) {
          uVar3 = *(undefined4 *)(param_3 + 1);
          *(undefined8 *)((longlong)plVar5 + 0x14) = *param_3;
          *(undefined4 *)((longlong)plVar5 + 0x1c) = uVar3;
          return;
        }
        lVar6 = lVar6 + 1;
        plVar5 = plVar5 + 0x12;
      } while (lVar6 < *(int *)(param_1 + 0x728));
    }
    plVar5 = (longlong *)(param_1 + 0x720);
    iVar2 = *(int *)(param_1 + 0x728);
    iVar4 = iVar2 + 1;
    *(int *)(param_1 + 0x728) = iVar4;
    if (*(int *)(param_1 + 0x72c) < iVar4) {
      TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar5);
    }
    lVar7 = (longlong)iVar2 * 0x90;
    _guard_xfg_dispatch_icall_nop((void *)(*plVar5 + lVar7),0,0x90);
    uVar1 = *param_3;
    *(longlong *)(lVar7 + *plVar5) = param_2;
    *(undefined1 *)(lVar7 + 8 + *plVar5) = 3;
    lVar6 = *plVar5;
    uVar3 = *(undefined4 *)(param_3 + 1);
    *(undefined8 *)(lVar6 + 0x14 + lVar7) = uVar1;
    *(undefined4 *)(lVar6 + 0x1c + lVar7) = uVar3;
  }
  return;
}



// FUNCTION 1426102f0 FUN_1426102f0 body=691 status=ok
// SIG undefined FUN_1426102f0(void)

void FUN_1426102f0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146b04fc8 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146b04fc8 != 0x1000)) ||
     (uVar3 = DAT_146b04fd0, iVar4 != 0)) {
    uVar3 = DAT_146b04fcc | DAT_146b04fc8;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_1426104f7;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_1426104f7:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 1426105b0 FUN_1426105b0 body=41 status=ok
// SIG undefined FUN_1426105b0(void)

undefined1 FUN_1426105b0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_142352550();
  if ((cVar1 == '\0') && ((*(byte *)(param_1 + 0x718) & 0x11) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 1426105e0 ShouldCompilePermutation body=55 status=ok
// SIG undefined ShouldCompilePermutation(void)

undefined1
FMeshParticleVertexFactory::ShouldCompilePermutation(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_2 + 200))(param_2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142610620 FUN_142610620 body=23 status=ok
// SIG undefined FUN_142610620(void)

byte FUN_142610620(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    return *(byte *)(*(longlong *)(param_1 + 0x6f0) + 0x14c) & 1;
  }
  return 0;
}



// FUNCTION 142610640 FUN_142610640 body=387 status=ok
// SIG undefined FUN_142610640(void)

void FUN_142610640(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 local_18 [16];
  
  if (param_2 != 0) {
    puVar1 = (uint *)0x0;
    puVar4 = puVar1;
    if ((*(uint *)(param_2 + 0xf0) & 0x100) != 0) {
      if (*(longlong *)(param_2 + 0x210) != 0) {
        puVar1 = (uint *)(*(int *)(param_2 + 0x218) + param_5);
      }
      puVar4 = (uint *)0x0;
      if (*(longlong *)(param_2 + 0x220) != 0) {
        puVar4 = (uint *)(*(int *)(param_2 + 0x228) + param_5);
      }
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      puVar4 = puVar1;
    }
    if (puVar4 != (uint *)0x0) {
      *puVar4 = *puVar4 ^ (*puVar4 ^ *(uint *)(param_1 + 0x3c)) & 1;
      uVar3 = *puVar4;
      if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
        puVar2 = (undefined8 *)
                 FUN_1424118e0(param_1 + 0x40,local_18,*(undefined4 *)(param_2 + 0x13c),
                               *(undefined8 *)(param_2 + 0x18),0,0);
        *(undefined8 *)(puVar4 + 1) = *puVar2;
        puVar4[3] = *(uint *)(puVar2 + 1);
        *puVar4 = *puVar4 ^ (*puVar4 ^ *(uint *)(param_1 + 0x3c)) & 2;
        uVar3 = *puVar4;
      }
      uVar3 = (*(int *)(param_1 + 0x90) << 2 ^ uVar3) & 4 ^ uVar3;
      *puVar4 = uVar3;
      if ((*(byte *)(param_1 + 0x90) & 1) != 0) {
        puVar2 = (undefined8 *)
                 FUN_1424118e0(param_1 + 0x98,local_18,*(undefined4 *)(param_2 + 0x13c),
                               *(undefined8 *)(param_2 + 0x18),0,0);
        *(undefined8 *)(puVar4 + 4) = *puVar2;
        puVar4[6] = *(uint *)(puVar2 + 1);
        *puVar4 = *puVar4 ^ (*(int *)(param_1 + 0x90) << 2 ^ *puVar4) & 8;
        uVar3 = *puVar4;
      }
      *puVar4 = (*(int *)(param_1 + 0xec) << 4 ^ uVar3) & 0x10 ^ uVar3;
      if ((*(byte *)(param_1 + 0xec) & 1) != 0) {
        uVar3 = FUN_1424116d0(param_1 + 0xf0,*(undefined4 *)(param_2 + 0x13c),
                              *(undefined8 *)(param_2 + 0x18),0);
        puVar4[7] = uVar3;
        *puVar4 = *puVar4 ^ (*(int *)(param_1 + 0xec) << 4 ^ *puVar4) & 0x20;
      }
    }
  }
  return;
}



// FUNCTION 1426107d0 FUN_1426107d0 body=638 status=ok
// SIG undefined FUN_1426107d0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1426107d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  float fVar6;
  undefined4 local_res8 [2];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8 [8];
  undefined1 local_68 [12];
  undefined1 local_5c [52];
  
  if (((((*(byte *)(param_1 + 0x38) & 1) != 0) && (param_2 != 0)) && (*(int *)(param_1 + 0x3c) != 0)
      ) && ((*(uint *)(param_2 + 0xf0) & 0x100) != 0)) {
    uVar2 = 0;
    local_res8[0] = *(undefined4 *)(param_2 + 0x30);
    local_b8 = 0;
    local_a8[7] = 0;
    local_a8[6] = 0;
    local_a8[5] = 0;
    local_b0 = 0;
    local_a8[0] = 0;
    local_a8[4] = 0;
    local_a8[3] = 0;
    local_a8[2] = 0;
    local_a8[1] = 0;
    (**(code **)(**(longlong **)(param_2 + 0x1f0) + 0x3c0))
              (*(longlong **)(param_2 + 0x1f0),param_2,param_5,local_res8,&local_b8,local_a8 + 7,
               local_a8 + 6,local_a8 + 5,&local_b0,local_a8,local_a8 + 4,local_a8 + 3,local_a8 + 2,
               local_a8 + 1);
    iVar5 = *(int *)(param_1 + 0x3c);
    if (0 < *(int *)(param_1 + 0x40)) {
      iVar5 = *(int *)(param_1 + 0x40);
      fVar6 = (float)FGenericPlatformMath::SRand();
      iVar5 = (int)(fVar6 * (float)(*(int *)(param_1 + 0x3c) - iVar5) + (float)iVar5);
    }
    *(uint *)(local_b8 + 0x38) = *(uint *)(local_b8 + 0x38) & 0xff000fff | iVar5 << 0xc;
    uVar4 = uVar2;
    if (0 < iVar5 + 1) {
      do {
        puVar1 = (undefined8 *)FUN_1424118e0(param_1 + 0x48,local_68);
        *(undefined8 *)(uVar2 + local_b0) = *puVar1;
        *(undefined4 *)(uVar2 + 8 + local_b0) = *(undefined4 *)(puVar1 + 1);
        if ((*(byte *)(param_1 + 0x128) & 1) != 0) {
          puVar1 = (undefined8 *)FUN_1424118e0(param_1 + 0x48,local_5c);
          *(undefined8 *)(uVar2 + local_a8[0]) = *puVar1;
          *(undefined4 *)(uVar2 + 8 + local_a8[0]) = *(undefined4 *)(puVar1 + 1);
        }
        uVar3 = (int)uVar4 + 1;
        uVar2 = uVar2 + 0xc;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < iVar5 + 1);
    }
  }
  return;
}



// FUNCTION 142610a50 FUN_142610a50 body=403 status=ok
// SIG undefined FUN_142610a50(void)

void FUN_142610a50(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  float *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [3];
  
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0xf0) & 0x100) != 0)) {
    local_res10[0] = *(undefined4 *)(param_2 + 0x30);
    local_78 = (float *)0x0;
    local_30[0] = 0;
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_70 = 0;
    local_68 = 0;
    local_res18[0] = param_3;
    (**(code **)(**(longlong **)(param_2 + 0x1f0) + 0x3c0))
              (*(longlong **)(param_2 + 0x1f0),param_2,param_5,local_res10,&local_78,local_30,
               &local_38,&local_40,&local_48,&local_50,&local_58,&local_60,&local_70,&local_68);
    FUN_14260bdd0(param_1,param_2,local_78,param_5,local_res18,*(undefined4 *)(param_2 + 0x128),1,
                  local_70);
    fVar1 = local_78[2];
    fVar2 = *(float *)(param_2 + 0x1c0);
    *(ulonglong *)(param_5 + 0x10) =
         CONCAT44(local_78[1] - *(float *)(param_2 + 0x1bc),*local_78 - *(float *)(param_2 + 0x1b8))
    ;
    *(float *)(param_5 + 0x18) = fVar1 - fVar2;
    local_78[0xe] = 0.0;
    local_78[0x13] = 0.0;
    local_78[0x14] = 0.0;
    local_78[0x15] = 0.0;
    local_78[0x16] = 0.0;
  }
  return;
}



// FUNCTION 142610bf0 FUN_142610bf0 body=291 status=ok
// SIG undefined FUN_142610bf0(void)

void FUN_142610bf0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0xf0) & 0x100) != 0)) {
    local_50 = 0;
    local_10 = 0;
    local_18 = 0;
    local_20 = 0;
    local_28 = 0;
    local_30 = 0;
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    local_58 = 0;
    local_res10[0] = *(undefined4 *)(param_2 + 0x30);
    local_res18[0] = param_3;
    (**(code **)(**(longlong **)(param_2 + 0x1f0) + 0x3c0))
              (*(longlong **)(param_2 + 0x1f0),param_2,param_5,local_res10,&local_50,&local_10,
               &local_18,&local_20,&local_28,&local_30,&local_38,&local_40,&local_48,&local_58);
    FUN_14260c680(param_1,param_2,local_50,param_5,local_res18,*(undefined4 *)(param_2 + 0x128),1,
                  local_58);
  }
  return;
}



// FUNCTION 142610d20 FUN_142610d20 body=2516 status=ok
// SIG undefined FUN_142610d20(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_142610d20(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar16;
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float *local_res8;
  uint *local_res10;
  undefined4 local_res18 [4];
  undefined8 local_138;
  float local_130;
  uint *local_128 [2];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  longlong local_108 [26];
  
  lVar1 = *(longlong *)(param_2 + 0x18);
  uVar8 = 0;
  local_res8 = (float *)0x0;
  local_108[6] = 0;
  local_108[5] = 0;
  local_108[4] = 0;
  local_108[3] = 0;
  local_108[2] = 0;
  local_108[0] = 0;
  local_108[1] = 0;
  local_res10 = (uint *)0x0;
  local_128[0] = (uint *)0x0;
  local_res18[0] = param_3;
  (**(code **)(*param_1 + 0x3c0))
            (param_1,param_2,param_5,local_res18,&local_res8,local_108 + 6,local_108 + 5,
             local_108 + 4,local_108 + 3,local_108 + 2,local_108,local_108 + 1,&local_res10,
             local_128);
  if (*(longlong *)(param_2 + 0x1f8) == 0) {
    fVar11 = *(float *)(lVar1 + 0x224);
    fVar14 = *(float *)(lVar1 + 0x228);
    *local_res8 = *(float *)(lVar1 + 0x220);
    local_res8[1] = fVar11;
    local_res8[2] = fVar14;
    fVar17 = *(float *)(lVar1 + 0x230) * 1.0;
    fVar18 = *(float *)(lVar1 + 0x234) * 0.0;
    fVar20 = *(float *)(lVar1 + 0x238) * 0.0;
    fVar11 = *(float *)(lVar1 + 0x210);
    fVar14 = *(float *)(lVar1 + 0x214);
    fVar19 = *(float *)(lVar1 + 0x218);
    fVar21 = *(float *)(lVar1 + 0x21c);
    fVar10 = fVar20 * fVar14 - fVar18 * fVar19;
    fVar12 = fVar17 * fVar19 - fVar20 * fVar11;
    fVar13 = fVar18 * fVar11 - fVar17 * fVar14;
    fVar10 = fVar10 + fVar10;
    fVar12 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    local_130 = (fVar12 * fVar11 - fVar10 * fVar14) + fVar21 * fVar13 + fVar20;
    *(ulonglong *)(local_res8 + 3) =
         CONCAT44((fVar10 * fVar19 - fVar13 * fVar11) + fVar21 * fVar12 + fVar18,
                  (fVar13 * fVar14 - fVar12 * fVar19) + fVar21 * fVar10 + fVar17);
    local_res8[5] = local_130;
    local_res8[6] = 1.0;
  }
  bVar6 = 0;
  if ((*(longlong *)(param_2 + 0x200) == 0) && (*(int *)(param_2 + 0x238) == 0)) {
    fVar10 = (float)FUN_1424116d0(param_1 + 0xd,*(undefined4 *)(param_5 + 0xc),lVar1,0);
    fVar11 = *(float *)(lVar1 + 0x210);
    fVar14 = *(float *)(lVar1 + 0x214);
    fVar19 = *(float *)(lVar1 + 0x218);
    fVar21 = *(float *)(lVar1 + 0x21c);
    fVar12 = *(float *)(lVar1 + 0x230) * 1.0;
    fVar20 = *(float *)(lVar1 + 0x234) * 0.0;
    fVar16 = *(float *)(lVar1 + 0x238) * 0.0;
    fVar13 = fVar16 * fVar14 - fVar20 * fVar19;
    fVar17 = fVar12 * fVar19 - fVar16 * fVar11;
    fVar18 = fVar20 * fVar11 - fVar12 * fVar14;
    fVar13 = fVar13 + fVar13;
    fVar17 = fVar17 + fVar17;
    fVar18 = fVar18 + fVar18;
    fVar12 = (fVar18 * fVar14 - fVar17 * fVar19) + fVar21 * fVar13 + fVar12;
    fVar19 = (fVar13 * fVar19 - fVar18 * fVar11) + fVar21 * fVar17 + fVar20;
    local_130 = (fVar17 * fVar11 - fVar13 * fVar14) + fVar21 * fVar18 + fVar16;
    fVar11 = fVar19 * fVar19 + fVar12 * fVar12 + local_130 * local_130;
    if (1e-08 < fVar11) {
      auVar15 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
      fVar14 = auVar15._0_4_;
      fVar14 = fVar14 + fVar14 * (0.5 - fVar11 * 0.5 * fVar14 * fVar14);
      fVar14 = fVar14 + fVar14 * (0.5 - fVar11 * 0.5 * fVar14 * fVar14);
      fVar12 = fVar14 * fVar12;
      fVar19 = fVar14 * fVar19;
      local_130 = local_130 * fVar14;
    }
    *(ulonglong *)(local_res8 + 7) =
         CONCAT44(fVar19 * fVar10 + local_res8[1],fVar12 * fVar10 + *local_res8);
    local_res8[9] = local_130 * fVar10 + local_res8[2];
    local_130 = -local_130;
    *(ulonglong *)(local_res8 + 10) = CONCAT44(fVar19,fVar12) ^ 0x8000000080000000;
    local_res8[0xc] = local_130;
    local_res8[0xd] = 1.0;
  }
  puVar4 = local_res10;
  pfVar3 = local_res8;
  if (local_res10 != (uint *)0x0) {
    if ((*local_res10 & 1) != 0) {
      if ((*local_res10 & 2) == 0) {
        *local_res8 = (float)local_res10[1] + *local_res8;
        local_res8[1] = (float)local_res10[2] + local_res8[1];
        fVar11 = (float)local_res10[3] + local_res8[2];
      }
      else {
        *local_res8 = (float)local_res10[1] * *local_res8;
        local_res8[1] = (float)local_res10[2] * local_res8[1];
        fVar11 = (float)local_res10[3] * local_res8[2];
      }
      local_res8[2] = fVar11;
    }
    bVar5 = bVar6;
    if (*(longlong *)(param_2 + 0x210) != 0) {
      bVar5 = (byte)*(undefined4 *)(*(longlong *)(param_2 + 0x210) + 0xe8) & 1;
    }
    if ((*local_res10 & 4) != 0) {
      if (bVar5 == 0) {
        local_138 = 0x3f800000;
        local_130 = 0.0;
        FQuat::FindBetweenNormals(&local_118,&local_138,local_res8 + 3);
        local_138 = *(undefined8 *)(puVar4 + 4);
        fVar11 = (float)((ulonglong)local_138 >> 0x20);
        local_130 = (float)puVar4[6];
        fVar21 = local_130 * local_114 - fVar11 * local_110;
        fVar10 = (float)local_138 * local_110 - local_130 * local_118;
        fVar21 = fVar21 + fVar21;
        fVar14 = fVar11 * local_118 - (float)local_138 * local_114;
        fVar10 = fVar10 + fVar10;
        fVar14 = fVar14 + fVar14;
        fVar19 = (fVar21 * local_110 - local_118 * fVar14) + fVar11 + fVar10 * local_10c;
        fVar11 = (fVar10 * local_118 - fVar21 * local_114) + local_130 + local_10c * fVar14;
        fVar14 = (local_114 * fVar14 - fVar10 * local_110) + (float)local_138 + fVar21 * local_10c;
      }
      else {
        local_138 = *(undefined8 *)(local_res10 + 4);
        fVar11 = (float)local_res10[6];
        fVar19 = (float)((ulonglong)local_138 >> 0x20);
        fVar14 = (float)local_138;
        local_130 = fVar11;
      }
      if ((*puVar4 & 8) == 0) {
        fVar14 = fVar14 + pfVar3[3];
        fVar19 = fVar19 + pfVar3[4];
        fVar11 = fVar11 + pfVar3[5];
      }
      else {
        fVar14 = fVar14 * pfVar3[3];
        fVar19 = fVar19 * pfVar3[4];
        fVar11 = fVar11 * pfVar3[5];
      }
      pfVar3[3] = fVar14;
      pfVar3[4] = fVar19;
      pfVar3[5] = fVar11;
    }
    if ((*local_res10 & 0x10) != 0) {
      if ((*local_res10 & 0x20) == 0) {
        fVar11 = local_res8[6] + (float)local_res10[7];
      }
      else {
        fVar11 = local_res8[6] * (float)local_res10[7];
      }
      local_res8[6] = fVar11;
    }
  }
  puVar4 = local_128[0];
  pfVar3 = local_res8;
  if (local_128[0] != (uint *)0x0) {
    if ((*local_128[0] & 1) != 0) {
      if ((*local_128[0] & 2) == 0) {
        local_res8[7] = local_res8[7] + (float)local_128[0][1];
        local_res8[8] = (float)local_128[0][2] + local_res8[8];
        fVar11 = (float)local_128[0][3] + local_res8[9];
      }
      else {
        local_res8[7] = (float)local_128[0][1] * local_res8[7];
        local_res8[8] = (float)local_128[0][2] * local_res8[8];
        fVar11 = (float)local_128[0][3] * local_res8[9];
      }
      local_res8[9] = fVar11;
    }
    if (*(longlong *)(param_2 + 0x220) != 0) {
      bVar6 = (byte)*(undefined4 *)(*(longlong *)(param_2 + 0x220) + 0xe8) & 1;
    }
    if ((*local_128[0] & 4) != 0) {
      if (bVar6 == 0) {
        local_138 = 0x3f800000;
        local_130 = 0.0;
        FQuat::FindBetweenNormals(&local_118,&local_138,local_res8 + 10);
        local_138 = *(undefined8 *)(puVar4 + 4);
        local_130 = (float)puVar4[6];
        fVar19 = (float)((ulonglong)local_138 >> 0x20);
        fVar10 = local_130 * local_114 - fVar19 * local_110;
        fVar21 = (float)local_138 * local_110 - local_130 * local_118;
        fVar10 = fVar10 + fVar10;
        fVar14 = fVar19 * local_118 - (float)local_138 * local_114;
        fVar21 = fVar21 + fVar21;
        fVar14 = fVar14 + fVar14;
        fVar11 = (local_118 * fVar21 - local_114 * fVar10) + local_130 + local_10c * fVar14;
        fVar19 = (local_110 * fVar10 - local_118 * fVar14) + fVar19 + local_10c * fVar21;
        fVar14 = (local_114 * fVar14 - local_110 * fVar21) + (float)local_138 + local_10c * fVar10;
      }
      else {
        local_138 = *(undefined8 *)(local_128[0] + 4);
        fVar11 = (float)local_128[0][6];
        fVar19 = (float)((ulonglong)local_138 >> 0x20);
        fVar14 = (float)local_138;
        local_130 = fVar11;
      }
      if ((*puVar4 & 8) == 0) {
        fVar14 = fVar14 + pfVar3[10];
        fVar19 = fVar19 + pfVar3[0xb];
        fVar11 = fVar11 + pfVar3[0xc];
      }
      else {
        fVar14 = fVar14 * pfVar3[10];
        fVar19 = fVar19 * pfVar3[0xb];
        fVar11 = fVar11 * pfVar3[0xc];
      }
      pfVar3[10] = fVar14;
      pfVar3[0xb] = fVar19;
      pfVar3[0xc] = fVar11;
    }
    if ((*local_128[0] & 0x10) != 0) {
      if ((*local_128[0] & 0x20) == 0) {
        fVar11 = (float)local_128[0][7] + local_res8[0xd];
      }
      else {
        fVar11 = (float)local_128[0][7] * local_res8[0xd];
      }
      local_res8[0xd] = fVar11;
    }
  }
  if ((char)param_1[0x14] != '\0') {
    lVar2 = *(longlong *)(param_2 + 0x208);
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x38) & 1) == 0)) {
      if ((int)param_1[10] == 0) {
        iVar7 = 2;
      }
      else {
        iVar7 = (int)param_1[10] + 1;
      }
    }
    else {
      iVar7 = 1;
      if (*(int *)(lVar2 + 0x178) != 0) {
        iVar7 = *(int *)(lVar2 + 0x178);
      }
      iVar7 = (((int)local_res8[0xe] >> 0xc & 0xfffU) + 1) * iVar7;
    }
    uVar9 = uVar8;
    if (0 < iVar7) {
      do {
        fVar14 = (float)(int)uVar8 * (1.0 / (float)(iVar7 + -1));
        fVar11 = (float)FUN_1424116d0(param_1 + 0x15,fVar14,lVar1,0);
        fVar14 = (float)FUN_1424116d0(param_1 + 0x1c,fVar14,lVar1);
        uVar8 = (ulonglong)((int)uVar8 + 1);
        *(float *)(local_108[0] + uVar9 * 4) = fVar11 * fVar14;
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < (longlong)iVar7);
    }
  }
  return;
}



// FUNCTION 142611700 FUN_142611700 body=981 status=ok
// SIG undefined FUN_142611700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142611700(longlong *param_1,float param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 in_RDX;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_res8 [2];
  float local_res10 [2];
  
  if (param_1[3] != 0) {
    lVar3 = param_1[5];
    local_res10[0] = param_2;
    (**(code **)(*param_1 + 0x28))(param_1,in_RDX,lVar3);
    if ((*(byte *)(param_1 + 0x1e) & 1) == 0) {
      FUN_1426237c0(param_1);
    }
    else {
      (**(code **)(*param_1 + 0xe0))();
      if ((((*(uint *)(param_1 + 0x1e) & 0x30) != 0) || (param_3 != '\0')) ||
         (*(float *)((longlong)param_1 + 0x13c) < 0.0)) {
        if ((*(uint *)(param_1 + 0x1e) >> 10 & 1) != 0) {
          FUN_1426237c0(param_1);
        }
      }
      else {
        iVar1 = *(int *)(*(longlong *)(lVar3 + 0x30) + 0x7c);
        if (((iVar1 == 0) || ((int)param_1[0x30] < iVar1)) ||
           (*(float *)(param_1 + 0x27) <= (float)iVar1 * *(float *)(param_1 + 0x31) &&
            (float)iVar1 * *(float *)(param_1 + 0x31) != *(float *)(param_1 + 0x27))) {
          fVar7 = (float)FUN_1424116d0(*(longlong *)(lVar3 + 0x50) + 0x40,
                                       *(float *)((longlong)param_1 + 0x13c),param_1[3],0);
          local_res8[0] = 0;
          fVar8 = (float)(**(code **)(*param_1 + 0x98))(param_1,local_res10,local_res8);
          fVar7 = fVar7 + fVar8;
          if (local_res10[0] <= 0.0) {
            fVar9 = 0.0;
          }
          else {
            fVar9 = 1.0 / local_res10[0];
          }
          iVar1 = (int)param_1[0x25];
          iVar2 = (int)param_1[0x4a];
          if (iVar1 < iVar2) {
            if (fVar7 <= 0.0) {
              fVar7 = fVar9;
            }
            if (((*(byte *)(param_1[0x3e] + 0x54) & 1) != 0) &&
               (local_res8[0] = iVar2, 0.0001 < local_res10[0])) {
              fVar8 = (float)iVar2 * fVar9;
              fVar7 = fVar7 + fVar8;
            }
          }
          if (0.0 < fVar7) {
            fVar9 = *(float *)((longlong)param_1 + 0x134);
            fVar11 = fVar7 * local_res10[0] + fVar9;
            fVar10 = (1.0 / fVar7) * fVar9 + local_res10[0];
            iVar5 = (int)ROUND((fVar11 + fVar11) - 0.5) >> 1;
            iVar6 = local_res8[0];
            if (local_res8[0] <= iVar5) {
              iVar6 = iVar5;
            }
            fVar11 = fVar11 - (float)iVar5;
            if ((0.0001 < fVar8) && (fVar11 = fVar11 - fVar8 / (float)local_res8[0], fVar11 <= 0.0))
            {
              fVar11 = 0.0;
            }
            if ((iVar1 == 0) && (iVar6 == 0)) {
              iVar6 = 1;
            }
            iVar5 = iVar2 - iVar1;
            if (iVar1 + iVar6 <= iVar2) {
              iVar5 = iVar6;
            }
            iVar1 = iVar1 + iVar5;
            if (((iVar1 < (int)param_1[0x26]) ||
                (cVar4 = (**(code **)(*param_1 + 0x18))
                                   (param_1,(int)SQRT((float)iVar1) + 1 + iVar1,
                                    local_res10[0] < 0.25), cVar4 == '\x01')) &&
               (FUN_142635d70(param_1,iVar5,fVar10 - 1.0 / fVar7), fVar9 = fVar11,
               0 < *(int *)((longlong)param_1 + 0x234))) {
              *(undefined4 *)((longlong)param_1 + 0x234) = 0;
            }
            *(float *)((longlong)param_1 + 0x134) = fVar9;
          }
        }
      }
      (**(code **)(*param_1 + 0xa0))(param_1,local_res10[0]);
      param_1[0x36] = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x38);
      (**(code **)(*param_1 + 0x38))(param_1,local_res10[0],lVar3);
      (**(code **)(*param_1 + 0x40))(param_1,local_res10[0],lVar3);
      (**(code **)(*param_1 + 0x68))(param_1,local_res10[0]);
      if (param_3 == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x22c) = 0;
      }
      *(int *)(param_1 + 0x46) = (int)param_1[0x46] + 1;
      *(undefined4 *)((longlong)param_1 + 0x184) = 1;
    }
    *(float *)((longlong)param_1 + 0x13c) =
         *(float *)(param_1 + 0x34) + *(float *)((longlong)param_1 + 0x13c);
    param_1[0x37] = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x38) = DAT_1468b5d98;
  }
  return;
}



// FUNCTION 142611ae0 FUN_142611ae0 body=4488 status=ok
// SIG undefined FUN_142611ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142611ae0(longlong *param_1,float param_2,undefined8 param_3,longlong param_4)

{
  float *pfVar1;
  float *pfVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char cVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  float *pfVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  float *pfVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  longlong *plVar31;
  byte bVar32;
  int iVar33;
  ulonglong uVar34;
  undefined4 *puVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  bool bVar38;
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined4 in_stack_fffffffffffffe68;
  float local_188;
  float fStack_184;
  float local_180;
  float local_178;
  float fStack_174;
  float local_170;
  float local_168;
  float fStack_164;
  float local_160;
  longlong local_158 [2];
  float local_148;
  float local_144;
  float local_140;
  longlong *local_138;
  int local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  longlong lStack_110;
  LARGE_INTEGER local_108;
  undefined1 local_100 [40];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  ulonglong uVar30;
  
  lVar19 = param_1[0x24];
  if (lVar19 == 0) {
    lVar19 = FUN_1423407b0();
  }
  uVar29 = CONCAT31((int3)((uint)in_stack_fffffffffffffe68 >> 8),
                    *(byte *)((longlong)param_1 + 0x719) >> 5) & 0xffffff01;
  FUN_1424de8e0(local_100,lVar19,0,0,uVar29);
  uVar37 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b051d0) && (_Init_thread_header(&DAT_146b051d0), DAT_146b051d0 == -1))
  {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    uVar29 = 0;
    DAT_146b051c0 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x10))
                   (DAT_1468b1f88,L"FX.TickParticles",1,L"If 0, particles won\'t tick at all.",0);
    _DAT_146b051b8 = &PTR_FUN_143f3ecf8;
    _DAT_146b051c8 = (**(code **)(*DAT_146b051c0 + 0x38))(DAT_146b051c0);
    atexit(FUN_143eb51c0);
    _Init_thread_footer(&DAT_146b051d0);
  }
  iVar18 = (**(code **)(*DAT_146b051c0 + 0x68))();
  if (iVar18 == 0) {
    if (0 < *(int *)((longlong)param_1 + 0x96c)) {
      FUN_142608f20(param_1);
      FUN_1423424e0(param_1);
    }
    goto LAB_142612baf;
  }
  lVar19 = param_1[0xde];
  if ((lVar19 == 0) || (*(int *)(lVar19 + 0x48) == 0)) goto LAB_142612baf;
  uVar27 = *(uint *)((longlong)param_1 + 0x974);
  uVar26 = (int)(longlong)(param_2 * 1000.0) + uVar27;
  if (uVar26 < *(uint *)(lVar19 + 0xd0)) {
    *(uint *)((longlong)param_1 + 0x974) = uVar26;
    goto LAB_142612baf;
  }
  *(undefined4 *)((longlong)param_1 + 0x974) = 0;
  param_2 = param_2 + (float)uVar27 * 0.001;
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(&local_108);
  bVar32 = *(byte *)((longlong)param_1 + 0x71b);
  while ((bVar32 & 0x10) != 0) {
    FUN_1416b1810();
    bVar32 = *(byte *)((longlong)param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  bVar32 = *(byte *)((longlong)param_1 + 0x719);
  if (((bVar32 >> 1 ^ bVar32) & 0x20) != 0) {
    *(byte *)((longlong)param_1 + 0x719) = (bVar32 * '\x02' ^ bVar32) & 0x40 ^ bVar32;
    FUN_1423424e0(param_1);
  }
  if ((*(byte *)((longlong)param_1 + 0xba) & 6) == 0) {
    (**(code **)(*param_1 + 0x358))(param_1,0);
    goto LAB_142612baf;
  }
  lVar19 = param_1[0x24];
  *(float *)(param_1 + 0x12d) = param_2;
  if (lVar19 == 0) {
    local_158[0] = lVar19;
    lVar19 = FUN_1423407b0(param_1);
  }
  bVar32 = *(byte *)(param_1 + 0xe3) >> 6 & 1;
  *(byte *)(param_1 + 0xe3) = *(byte *)(param_1 + 0xe3) & 0xbf;
  local_158[0] = lVar19;
  lVar20 = FUN_1428742e0();
  iVar18 = *(int *)(lVar20 + 4);
  if (iVar18 < (int)(uint)*(byte *)((longlong)param_1 + 0x24f)) {
    if ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) {
      FUN_142600fa0(param_1);
      FUN_1423424c0(param_1);
    }
    goto LAB_142612baf;
  }
  if ((-1 < *(char *)((longlong)param_1 + 0x719)) && (*(int *)((longlong)param_1 + 0x7ac) != iVar18)
     ) {
    if ((bVar32 == 0) && ((*(int *)((longlong)param_1 + 0x7ac) != -1 && (0 < (int)param_1[0x125]))))
    {
      plVar31 = *(longlong **)(param_1[0xde] + 0x40);
      uVar28 = uVar37;
      do {
        if (*plVar31 != 0) {
          bVar32 = 1;
          break;
        }
        uVar27 = (int)uVar28 + 1;
        uVar28 = (ulonglong)uVar27;
        plVar31 = plVar31 + 1;
      } while ((int)uVar27 < (int)param_1[0x125]);
    }
    *(int *)((longlong)param_1 + 0x7ac) = iVar18;
  }
  if (bVar32 != 0) {
    if (((*(byte *)((longlong)param_1 + 0xba) & 4) == 0) ||
       ((*(byte *)(param_1 + 0xe3) & 0x10) != 0)) {
      bVar38 = false;
    }
    else {
      bVar38 = true;
    }
    FUN_14260b860(param_1,1);
    if (bVar38) {
      FUN_1425fcab0(param_1,0);
    }
    else {
      FUN_142608c70(param_1);
    }
  }
  if (((-1 < *(char *)((longlong)param_1 + 0x719)) &&
      ((*(uint *)(param_1[0xde] + 0x14c) >> 1 & 1) != 0)) &&
     (cVar17 = FUN_1425ff160(param_1), cVar17 != '\0')) {
    *(byte *)((longlong)param_1 + 0x71a) = *(byte *)((longlong)param_1 + 0x71a) | 4;
    TArray<FBlendSampleData,FDefaultAllocator>::Empty(param_1 + 0xfc,0);
    TArray<FParticleEventDeathData,FDefaultAllocator>::Empty(param_1 + 0xfe,0);
    TArray<FParticleEventCollideData,FDefaultAllocator>::Empty(param_1 + 0x100,0);
    TArray<FMorAICharacterZoneRosterEntry,TSizedDefaultAllocator<32>_>::Empty(param_1 + 0x104,0);
    TArray<FParticleEventCollideData,FDefaultAllocator>::Empty(param_1 + 0x106,0);
    if (((*(byte *)((longlong)param_1 + 0x719) & 0x20) != 0) &&
       (*(byte *)(param_1[0xde] + 0x148) < *(byte *)((longlong)param_1 + 0x71e))) {
      FUN_1426093e0(param_1,0,1,0);
    }
    goto LAB_142612baf;
  }
  param_2 = param_2 * *(float *)(param_1 + 0xfb);
  plVar31 = param_1 + 0x119;
  *(float *)(param_1 + 0x12d) = param_2;
  *(byte *)((longlong)param_1 + 0x71a) =
       (*(byte *)((longlong)param_1 + 0x71a) & 4) * '\x02' |
       *(byte *)((longlong)param_1 + 0x71a) & 0xf3;
  *(float *)(param_1 + 0xf4) = param_2 + *(float *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x11a) = 0;
  if ((*(int *)((longlong)param_1 + 0x8d4) < 0) && (*(int *)((longlong)param_1 + 0x8d4) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar31,0);
  }
  plVar4 = param_1 + 0x11b;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  if ((*(int *)((longlong)param_1 + 0x8e4) < 0) && (*(int *)((longlong)param_1 + 0x8e4) != 0)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar4,0);
  }
  fVar45 = 3.4028235e+38;
  *(undefined4 *)(param_1 + 0x11d) = 0x7f7fffff;
  cVar17 = UWorld::IsGameWorld(lVar19);
  if (cVar17 == '\0') {
    fVar43 = 1.0;
    *(undefined4 *)(param_1 + 0x11d) = 0;
  }
  else {
    UWorld::GetPlayerControllerIterator(lVar19,&local_138);
    fVar43 = 3.4028235e+38;
    for (; (-1 < local_130 && (local_130 < (int)local_138[1])); local_130 = local_130 + 1) {
      plVar21 = (longlong *)FWeakObjectPtr::Get(*local_138 + (longlong)local_130 * 8);
      fVar40 = fVar43;
      if ((plVar21 != (longlong *)0x0) &&
         (((*(uint *)((longlong)plVar21 + 0x4cc) >> 1 & 1) != 0 &&
          (cVar17 = (**(code **)(*plVar21 + 0x768))(plVar21), cVar17 != '\0')))) {
        (**(code **)(*plVar21 + 0x7a8))(plVar21,&local_178);
        iVar18 = (int)param_1[0x11a];
        *(int *)(param_1 + 0x11a) = iVar18 + 1;
        if (*(int *)((longlong)param_1 + 0x8d4) < iVar18 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar31,iVar18);
        }
        lVar19 = *plVar31;
        *(ulonglong *)(lVar19 + (longlong)iVar18 * 0xc) = CONCAT44(fStack_174,local_178);
        *(float *)(lVar19 + 8 + (longlong)iVar18 * 0xc) = local_170;
        lVar19 = param_1[0x11c];
        iVar18 = (int)lVar19 + 1;
        *(int *)(param_1 + 0x11c) = iVar18;
        if (*(int *)((longlong)param_1 + 0x8e4) < iVar18) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar4);
        }
        *(int *)(*plVar4 + (longlong)(int)lVar19 * 4) = (int)plVar21[0xab];
        local_d8 = *(float *)(param_1 + 0x44);
        fStack_d4 = *(float *)((longlong)param_1 + 0x224);
        fStack_d0 = *(float *)(param_1 + 0x45);
        uStack_cc = *(undefined4 *)((longlong)param_1 + 0x22c);
        fVar40 = (local_d8 - local_178) * (local_d8 - local_178) +
                 (fStack_d4 - fStack_174) * (fStack_d4 - fStack_174) +
                 (fStack_d0 - local_170) * (fStack_d0 - local_170);
        if (*(float *)(param_1 + 0x11d) <= fVar40) {
          fVar40 = *(float *)(param_1 + 0x11d);
        }
        *(float *)(param_1 + 0x11d) = fVar40;
        fVar40 = *(float *)(plVar21 + 0xab);
        if (fVar43 <= *(float *)(plVar21 + 0xab)) {
          fVar40 = fVar43;
        }
      }
      fVar43 = fVar40;
    }
    fVar40 = *DAT_146b05030;
    *(float *)(param_1 + 0x11d) = SQRT(*(float *)(param_1 + 0x11d));
    fVar43 = (fVar43 - 1.0) * fVar40 + 1.0;
  }
  *(float *)((longlong)param_1 + 0x8ec) = fVar43;
  if (*(char *)(param_1[0xde] + 0x150) != '\0') {
    local_168 = *(float *)(param_1 + 0x44);
    fStack_164 = *(float *)((longlong)param_1 + 0x224);
    local_160 = *(float *)(param_1 + 0x45);
    uStack_bc = *(undefined4 *)((longlong)param_1 + 0x22c);
    fVar43 = *(float *)(param_1 + 0x132);
    local_c8 = local_168;
    fStack_c4 = fStack_164;
    fStack_c0 = local_160;
    if ((((fVar43 != local_168) || (fStack_164 != *(float *)((longlong)param_1 + 0x994))) ||
        (local_160 != *(float *)(param_1 + 0x133))) &&
       (((fVar43 != DAT_1468b5d90 || (DAT_1468b5d94 != *(float *)((longlong)param_1 + 0x994))) ||
        (DAT_1468b5d98 != *(float *)(param_1 + 0x133))))) {
      local_144 = fStack_164 - *(float *)((longlong)param_1 + 0x994);
      local_140 = local_160 - *(float *)(param_1 + 0x133);
      local_148 = local_168 - fVar43;
      FVector::Rotation(&local_148,&local_188);
      if ((0.0 < *(float *)(param_1[0xde] + 0x154)) &&
         (((fVar43 = *(float *)((longlong)param_1 + 0x99c), fVar43 != (float)DAT_1468b5da0 ||
           (DAT_1468b5da0._4_4_ != *(float *)(param_1 + 0x134))) ||
          (DAT_1468b5da8 != *(float *)((longlong)param_1 + 0x9a4))))) {
        fStack_184 = fStack_184 - *(float *)(param_1 + 0x134);
        local_180 = local_180 - *(float *)((longlong)param_1 + 0x9a4);
        fVar44 = *(float *)(param_1[0xde] + 0x154) * param_2;
        fVar40 = (float)DAT_146b05050;
        fVar6 = DAT_146b05050._4_4_;
        fVar7 = DAT_146b05050._8_4_;
        fVar8 = DAT_146b05050._12_4_;
        auVar39._4_4_ = fStack_184;
        auVar39._0_4_ = local_188 - fVar43;
        auVar39._8_4_ = local_180;
        auVar39._12_4_ = 0;
        auVar39 = divps(auVar39,_DAT_146b05050);
        fVar41 = (local_188 - fVar43) - (float)(int)auVar39._0_4_ * fVar40;
        fStack_184 = fStack_184 - (float)(int)auVar39._4_4_ * fVar6;
        local_180 = local_180 - (float)(int)auVar39._8_4_ * fVar7;
        fVar42 = 0.0 - (float)(int)auVar39._12_4_ * fVar8;
        local_b8 = (float)(((uint)(fVar41 + fVar40) ^ (uint)fVar41) & -(uint)(0.0 <= fVar41) ^
                          (uint)(fVar41 + fVar40));
        fStack_b4 = (float)(((uint)(fStack_184 + fVar6) ^ (uint)fStack_184) &
                            -(uint)(0.0 <= fStack_184) ^ (uint)(fStack_184 + fVar6));
        fStack_b0 = (float)(((uint)(local_180 + fVar7) ^ (uint)local_180) &
                            -(uint)(0.0 <= local_180) ^ (uint)(local_180 + fVar7));
        fVar41 = (float)(((uint)(fVar42 + fVar8) ^ (uint)fVar42) & -(uint)(0.0 <= fVar42) ^
                        (uint)(fVar42 + fVar8));
        local_180 = -fVar44;
        local_b8 = (float)(((uint)(local_b8 - fVar40) ^ (uint)local_b8) &
                           -(uint)(_DAT_146b05040 < local_b8) ^ (uint)local_b8);
        fStack_b4 = (float)(((uint)(fStack_b4 - fVar6) ^ (uint)fStack_b4) &
                            -(uint)(fRam0000000146b05044 < fStack_b4) ^ (uint)fStack_b4);
        fStack_b0 = (float)(((uint)(fStack_b0 - fVar7) ^ (uint)fStack_b0) &
                            -(uint)(fRam0000000146b05048 < fStack_b0) ^ (uint)fStack_b0);
        uStack_ac = ((uint)(fVar41 - fVar8) ^ (uint)fVar41) & -(uint)(fRam0000000146b0504c < fVar41)
                    ^ (uint)fVar41;
        local_188 = local_180;
        if ((local_180 <= local_b8) && (local_188 = local_b8, fVar44 <= local_b8)) {
          local_188 = fVar44;
        }
        fStack_184 = local_180;
        if ((local_180 <= fStack_b4) && (fStack_184 = fStack_b4, fVar44 <= fStack_b4)) {
          fStack_184 = fVar44;
        }
        if ((local_180 <= fStack_b0) && (local_180 = fStack_b0, fVar44 <= fStack_b0)) {
          local_180 = fVar44;
        }
        fStack_184 = *(float *)(param_1 + 0x134) + fStack_184;
        local_180 = *(float *)((longlong)param_1 + 0x9a4) + local_180;
        local_188 = fVar43 + local_188;
      }
      local_128 = CONCAT44(fStack_184,local_188);
      local_120 = local_180;
      FUN_142399b90(param_1,&local_128,0,0,uVar29 & 0xffffff00);
      *(ulonglong *)((longlong)param_1 + 0x99c) = CONCAT44(fStack_184,local_188);
      *(float *)((longlong)param_1 + 0x9a4) = local_180;
    }
    param_1[0x132] = CONCAT44(fStack_164,local_168);
    *(float *)(param_1 + 0x133) = local_160;
  }
  lVar19 = param_1[0xde];
  if ((*(byte *)(lVar19 + 0x60) & 1) != 0) {
    FUN_142609710(param_1);
    lVar19 = param_1[0xde];
  }
  if (*(char *)(lVar19 + 0x28) == '\x01') {
    param_2 = *(float *)(lVar19 + 0x30);
  }
  plVar21 = *(longlong **)(lVar19 + 0x138);
  uVar28 = (longlong)*(int *)(lVar19 + 0x140) & 0x1fffffffffffffff;
  if (plVar21 + *(int *)(lVar19 + 0x140) < plVar21) {
    uVar28 = uVar37;
  }
  uVar36 = uVar37;
  if (uVar28 != 0) {
    do {
      plVar3 = (longlong *)*plVar21;
      if ((plVar3 != (longlong *)0x0) &&
         (cVar17 = (**(code **)(*plVar3 + 0x280))(plVar3), cVar17 != '\0')) {
        (**(code **)(*plVar3 + 0x278))(plVar3,param_1);
      }
      plVar21 = plVar21 + 1;
      uVar36 = uVar36 + 1;
    } while (uVar36 != uVar28);
    lVar19 = param_1[0xde];
  }
  bVar38 = false;
  if ((((*(byte *)(param_1 + 0x135) & 1) != 0) && (*(int *)(lVar19 + 0xe0) != 0)) &&
     (cVar17 = UWorld::IsGameWorld(local_158[0]), cVar17 != '\0')) {
    uVar28 = (ulonglong)*(uint *)(param_1 + 0x11a);
    lVar19 = local_118;
    if (0 < (int)*(uint *)(param_1 + 0x11a)) {
      lVar19 = param_1[0x44];
      lStack_110 = param_1[0x45];
      pfVar25 = (float *)*plVar4;
      pfVar22 = (float *)*plVar31;
      local_118._4_4_ = (float)((ulonglong)lVar19 >> 0x20);
      local_118._0_4_ = (float)lVar19;
      fVar43 = fVar45;
      do {
        fVar45 = *pfVar25;
        pfVar1 = pfVar22 + 1;
        pfVar25 = pfVar25 + 1;
        fVar40 = *pfVar22;
        pfVar2 = pfVar22 + 2;
        pfVar22 = pfVar22 + 3;
        fVar45 = ((local_118._4_4_ - *pfVar1) * (local_118._4_4_ - *pfVar1) +
                  ((float)local_118 - fVar40) * ((float)local_118 - fVar40) +
                 ((float)lStack_110 - *pfVar2) * ((float)lStack_110 - *pfVar2)) * fVar45 * fVar45;
        if (fVar43 <= fVar45) {
          fVar45 = fVar43;
        }
        uVar28 = uVar28 - 1;
        fVar43 = fVar45;
      } while (uVar28 != 0);
    }
    local_118 = lVar19;
    fVar43 = *(float *)((longlong)&DAT_146534328 + (longlong)*(int *)(param_1[0xde] + 0xe0) * 4 + 4)
    ;
    bVar38 = fVar43 * fVar43 < fVar45;
  }
  iVar18 = (int)param_1[0x125];
  uVar28 = uVar37;
  uVar36 = uVar37;
  if (0 < iVar18) {
    do {
      puVar23 = *(undefined8 **)(param_1[0x124] + uVar36 * 8);
      if ((puVar23 != (undefined8 *)0x0) && ((*(byte *)(puVar23 + 0x3d) & 1) != 0)) {
        uVar30 = uVar37;
        uVar34 = uVar37;
        if (0 < iVar18) {
          do {
            if ((uVar34 != uVar36) &&
               (plVar31 = *(longlong **)(param_1[0x124] + uVar34 * 8), plVar31 != (longlong *)0x0))
            {
              (**(code **)(*plVar31 + 0x170))(plVar31,puVar23);
            }
            uVar29 = (int)uVar30 + 1;
            uVar30 = (ulonglong)uVar29;
            uVar34 = uVar34 + 1;
          } while ((int)uVar29 < (int)param_1[0x125]);
        }
        (**(code **)*puVar23)(puVar23,1);
        *(undefined8 *)(param_1[0x124] + uVar36 * 8) = 0;
      }
      plVar31 = *(longlong **)(param_1[0x124] + uVar36 * 8);
      if ((((plVar31 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x135) & 1) != 0)) &&
          ((**(code **)(*plVar31 + 0x148))(plVar31), (*(byte *)(plVar31 + 0x1e) & 2) == 0)) &&
         (bVar38)) {
        (**(code **)(*plVar31 + 0xf0))(plVar31,0);
      }
      iVar18 = (int)param_1[0x125];
      uVar29 = (int)uVar28 + 1;
      uVar28 = (ulonglong)uVar29;
      uVar36 = uVar36 + 1;
    } while ((int)uVar29 < iVar18);
  }
  *(uint *)(param_1 + 0x135) = *(uint *)(param_1 + 0x135) & 0xfffffffe;
  if ((*(byte *)(param_1[0xde] + 0x158) & 1) != 0) {
    plVar31 = (longlong *)param_1[0x124];
    uVar28 = (longlong)(int)param_1[0x125] & 0x1fffffffffffffff;
    if (plVar31 + (int)param_1[0x125] < plVar31) {
      uVar28 = uVar37;
    }
    uVar36 = uVar37;
    if (uVar28 != 0) {
      do {
        plVar4 = (longlong *)*plVar31;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x248))(plVar4,param_2);
        }
        plVar31 = plVar31 + 1;
        uVar36 = uVar36 + 1;
      } while (uVar36 != uVar28);
    }
  }
  iVar18 = *(int *)((longlong)param_1 + 0x7ec);
  lVar19 = param_1[0xfc];
  iVar33 = (int)param_1[0xfd];
  if (iVar18 < 0) {
    if (iVar33 != 0) {
      plVar31 = (longlong *)(lVar19 + 0x30);
      do {
        if (*plVar31 != 0) {
          FMemory::Free();
        }
        plVar31 = plVar31 + 8;
        iVar33 = iVar33 + -1;
      } while (iVar33 != 0);
      iVar18 = *(int *)((longlong)param_1 + 0x7ec);
    }
    *(undefined4 *)(param_1 + 0xfd) = 0;
    if (iVar18 != 0) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0xfc,0);
    }
  }
  else {
    if (iVar33 != 0) {
      plVar31 = (longlong *)(lVar19 + 0x30);
      do {
        if (*plVar31 != 0) {
          FMemory::Free();
        }
        plVar31 = plVar31 + 8;
        iVar33 = iVar33 + -1;
      } while (iVar33 != 0);
    }
    *(undefined4 *)(param_1 + 0xfd) = 0;
  }
  iVar18 = *(int *)((longlong)param_1 + 0x7fc);
  lVar19 = param_1[0xfe];
  iVar33 = (int)param_1[0xff];
  if (iVar18 < 0) {
    if (iVar33 != 0) {
      plVar31 = (longlong *)(lVar19 + 0x30);
      do {
        if (*plVar31 != 0) {
          FMemory::Free();
        }
        plVar31 = plVar31 + 10;
        iVar33 = iVar33 + -1;
      } while (iVar33 != 0);
      iVar18 = *(int *)((longlong)param_1 + 0x7fc);
    }
    *(undefined4 *)(param_1 + 0xff) = 0;
    if (iVar18 != 0) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1 + 0xfe,0);
    }
  }
  else {
    if (iVar33 != 0) {
      plVar31 = (longlong *)(lVar19 + 0x30);
      do {
        if (*plVar31 != 0) {
          FMemory::Free();
        }
        plVar31 = plVar31 + 10;
        iVar33 = iVar33 + -1;
      } while (iVar33 != 0);
    }
    *(undefined4 *)(param_1 + 0xff) = 0;
  }
  iVar18 = *(int *)((longlong)param_1 + 0x80c);
  lVar19 = param_1[0x100];
  iVar33 = (int)param_1[0x101];
  if (iVar18 < 0) {
    if (iVar33 != 0) {
      plVar31 = (longlong *)(lVar19 + 0x30);
      do {
        if (*plVar31 != 0) {
          FMemory::Free();
        }
        plVar31 = plVar31 + 0xf;
        iVar33 = iVar33 + -1;
      } while (iVar33 != 0);
      iVar18 = *(int *)((longlong)param_1 + 0x80c);
    }
    *(undefined4 *)(param_1 + 0x101) = 0;
    if (iVar18 != 0) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
                (param_1 + 0x100,0);
    }
  }
  else {
    if (iVar33 != 0) {
      plVar31 = (longlong *)(lVar19 + 0x30);
      do {
        if (*plVar31 != 0) {
          FMemory::Free();
        }
        plVar31 = plVar31 + 0xf;
        iVar33 = iVar33 + -1;
      } while (iVar33 != 0);
    }
    *(undefined4 *)(param_1 + 0x101) = 0;
  }
  iVar18 = *(int *)((longlong)param_1 + 0x81c);
  lVar19 = param_1[0x102];
  iVar33 = (int)param_1[0x103];
  if (iVar18 < 0) {
    if (iVar33 != 0) {
      plVar31 = (longlong *)(lVar19 + 0x30);
      do {
        if (*plVar31 != 0) {
          FMemory::Free();
        }
        plVar31 = plVar31 + 9;
        iVar33 = iVar33 + -1;
      } while (iVar33 != 0);
      iVar18 = *(int *)((longlong)param_1 + 0x81c);
    }
    *(undefined4 *)(param_1 + 0x103) = 0;
    if (iVar18 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<72,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x102,0);
    }
  }
  else {
    if (iVar33 != 0) {
      plVar31 = (longlong *)(lVar19 + 0x30);
      do {
        if (*plVar31 != 0) {
          FMemory::Free();
        }
        plVar31 = plVar31 + 9;
        iVar33 = iVar33 + -1;
      } while (iVar33 != 0);
    }
    *(undefined4 *)(param_1 + 0x103) = 0;
  }
  iVar18 = *(int *)((longlong)param_1 + 0x83c);
  lVar19 = param_1[0x106];
  iVar33 = (int)param_1[0x107];
  if (iVar18 < 0) {
    if (iVar33 != 0) {
      plVar31 = (longlong *)(lVar19 + 0x30);
      do {
        if (*plVar31 != 0) {
          FMemory::Free();
        }
        plVar31 = plVar31 + 0xf;
        iVar33 = iVar33 + -1;
      } while (iVar33 != 0);
      iVar18 = *(int *)((longlong)param_1 + 0x83c);
    }
    *(undefined4 *)(param_1 + 0x107) = 0;
    if (iVar18 != 0) {
      TArray<FOnlineAchievementsSteam::FOnlineAchievementSteam,FDefaultAllocator>::ResizeTo
                (param_1 + 0x106,0);
    }
  }
  else {
    if (iVar33 != 0) {
      plVar31 = (longlong *)(lVar19 + 0x30);
      do {
        if (*plVar31 != 0) {
          FMemory::Free();
        }
        plVar31 = plVar31 + 0xf;
        iVar33 = iVar33 + -1;
      } while (iVar33 != 0);
    }
    *(undefined4 *)(param_1 + 0x107) = 0;
  }
  *(byte *)((longlong)param_1 + 0x71b) = *(byte *)((longlong)param_1 + 0x71b) | 8;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 0;
  if ((param_4 == 0) || (*(longlong *)(param_4 + 0x18) == 0)) {
LAB_142612abf:
    if (DAT_146b047d4 == 0) {
LAB_142612ac8:
      if ((*(char *)(param_1[0xde] + 0x28) != '\x02') ||
         (*(char *)((longlong)param_1 + 0x719) < '\0')) {
        FUN_1425ff710(param_1);
      }
    }
LAB_142612ae6:
    FUN_142602d20(param_1);
  }
  else {
    bVar32 = *(byte *)(param_1 + 0xe3);
    if ((bVar32 & 8) == 0) {
      FUN_1425ff6a0(param_1);
      bVar32 = *(byte *)(param_1 + 0xe3);
    }
    if ((bVar32 & 4) == 0) goto LAB_142612abf;
    if (DAT_146b047d4 != 0) goto LAB_142612ae6;
    if (DAT_146534300 == 0) goto LAB_142612ac8;
    cVar17 = FUN_141636a40();
    if (((cVar17 == '\0') || (DAT_146531ff4 == 0)) ||
       ((*(char *)(param_1[0xde] + 0x28) == '\x02' && (-1 < *(char *)((longlong)param_1 + 0x719)))))
    goto LAB_142612abf;
    lVar19 = FUN_1424a16a0();
    LOCK();
    bVar38 = *(int *)(lVar19 + 0x40) == 0;
    if (bVar38) {
      *(int *)(lVar19 + 0x40) = 0;
    }
    UNLOCK();
    if (!bVar38) goto LAB_142612abf;
    *(byte *)((longlong)param_1 + 0x71b) = *(byte *)((longlong)param_1 + 0x71b) | 2;
    plVar31 = param_1 + 0x117;
    param_1[0x126] = param_1[0x42];
    param_1[0x127] = param_1[0x43];
    *(int *)(param_1 + 0x128) = (int)param_1[0x44];
    *(undefined4 *)((longlong)param_1 + 0x944) = *(undefined4 *)((longlong)param_1 + 0x224);
    *(int *)(param_1 + 0x129) = (int)param_1[0x45];
    *(undefined4 *)((longlong)param_1 + 0x94c) = *(undefined4 *)((longlong)param_1 + 0x22c);
    param_1[0x12a] = param_1[0x46];
    param_1[299] = param_1[0x47];
    *(undefined4 *)(param_1 + 0x118) = 0;
    if ((*(int *)((longlong)param_1 + 0x8c4) < 0) && (*(int *)((longlong)param_1 + 0x8c4) != 0)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
                (plVar31,0);
    }
    iVar18 = (int)param_1[0xe5];
    if (iVar18 != 0) {
      iVar33 = (int)param_1[0x118];
      if (*(int *)((longlong)param_1 + 0x8c4) < iVar18 + iVar33) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar31);
        iVar33 = (int)param_1[0x118];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar33 * 0x90 + *plVar31),(void *)param_1[0xe4],
                 (longlong)iVar18 * 0x90);
      *(int *)(param_1 + 0x118) = (int)param_1[0x118] + iVar18;
    }
    param_1[0x11e] = param_1[0x3a];
    param_1[0x11f] = param_1[0x3b];
    param_1[0x120] = param_1[0x3c];
    *(int *)(param_1 + 0x121) = (int)param_1[0x3d];
    *(undefined8 *)((longlong)param_1 + 0x90c) = *(undefined8 *)((longlong)param_1 + 0x77c);
    *(undefined4 *)((longlong)param_1 + 0x914) = *(undefined4 *)((longlong)param_1 + 0x784);
    lVar19 = *plVar31;
    lVar20 = (longlong)(int)param_1[0x118] * 0x90 + lVar19;
    if (lVar19 != lVar20) {
      puVar35 = (undefined4 *)(lVar19 + 0x70);
      do {
        if (*(longlong *)(puVar35 + -0x10) != 0) {
          lVar5 = *(longlong *)(*(longlong *)(puVar35 + -0x10) + 0x168);
          if (lVar5 == 0) {
            puVar23 = (undefined8 *)&DAT_1468b5b70;
          }
          else {
            puVar23 = (undefined8 *)(lVar5 + 0x210);
          }
          uVar24 = puVar23[1];
          uVar9 = *(undefined4 *)(puVar23 + 2);
          uVar10 = *(undefined4 *)((longlong)puVar23 + 0x14);
          uVar11 = *(undefined4 *)(puVar23 + 3);
          uVar12 = *(undefined4 *)((longlong)puVar23 + 0x1c);
          uVar13 = *(undefined4 *)(puVar23 + 4);
          uVar14 = *(undefined4 *)((longlong)puVar23 + 0x24);
          uVar15 = *(undefined4 *)(puVar23 + 5);
          uVar16 = *(undefined4 *)((longlong)puVar23 + 0x2c);
          *(undefined8 *)(puVar35 + -8) = *puVar23;
          *(undefined8 *)(puVar35 + -6) = uVar24;
          puVar35[-4] = uVar9;
          puVar35[-3] = uVar10;
          puVar35[-2] = uVar11;
          puVar35[-1] = uVar12;
          *puVar35 = uVar13;
          puVar35[1] = uVar14;
          puVar35[2] = uVar15;
          puVar35[3] = uVar16;
          puVar23 = (undefined8 *)
                    (**(code **)(**(longlong **)(puVar35 + -0x10) + 0x308))
                              (*(longlong **)(puVar35 + -0x10),local_158);
          *(undefined8 *)(puVar35 + 4) = *puVar23;
          puVar35[6] = *(undefined4 *)(puVar23 + 1);
        }
        *(undefined1 *)(puVar35 + 7) = 1;
        lVar19 = lVar19 + 0x90;
        puVar35 = puVar35 + 0x24;
      } while (lVar19 != lVar20);
    }
    *(byte *)((longlong)param_1 + 0x71b) = *(byte *)((longlong)param_1 + 0x71b) | 0x10;
    uVar24 = FUN_1424a16a0();
    FUN_142497540(uVar24,param_1);
    if (*DAT_146b04f80 == 0) {
      *(undefined1 *)(param_1 + 7) = 2;
    }
    else {
      *(undefined2 *)(param_1 + 7) = 0x400;
    }
  }
  lVar19 = param_1[0x32];
  if (((*(byte *)((longlong)param_1 + 0x97c) & 1) != 0) &&
     ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0)) {
    if ((lVar19 != 0) && ((*(byte *)(lVar19 + 200) & 0x40) == 0)) {
      iVar18 = *(int *)(lVar19 + 0xc);
      if (iVar18 < (int)DAT_1469e91c4) {
        uVar27 = iVar18 >> 0x1f & 0xffff;
        uVar29 = iVar18 + uVar27;
        uVar37 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar29 >> 0x10) * 8) +
                 (longlong)(int)((uVar29 & 0xffff) - uVar27) * 0x18;
      }
      if ((*(uint *)(uVar37 + 8) >> 0x1d & 1) == 0) goto LAB_142612b72;
    }
    *(byte *)((longlong)param_1 + 0x71a) = *(byte *)((longlong)param_1 + 0x71a) | 0x40;
    FUN_142600fa0(param_1);
  }
LAB_142612b72:
  if ((((*(byte *)(param_1[0xde] + 0x158) & 4) != 0) && (*(byte *)(param_1 + 7) < 4)) &&
     (param_1[0x32] != 0)) {
    *(undefined1 *)(param_1 + 7) = 4;
  }
LAB_142612baf:
  FUN_1424e13e0(local_100);
  return;
}



// FUNCTION 142612c70 FUN_142612c70 body=305 status=ok
// SIG undefined FUN_142612c70(void)

void FUN_142612c70(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (*(longlong *)(param_3 + 0x48) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x1f8);
    if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 5) & 0x80) != 0)) {
      lVar2 = *plVar1;
      uVar3 = FUN_1426279f0();
      (**(code **)(lVar2 + 0x288))(*(undefined8 *)(param_1 + 0x1f8),param_1,uVar3,param_2);
    }
    plVar1 = *(longlong **)(param_1 + 0x210);
    if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 5) & 0x80) != 0)) {
      (**(code **)(*plVar1 + 0x288))(plVar1,param_1,*(undefined4 *)(param_1 + 0x218),param_2);
    }
    plVar1 = *(longlong **)(param_1 + 0x200);
    if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 5) & 0x80) != 0)) {
      lVar2 = *plVar1;
      uVar3 = FUN_1426279f0(param_1);
      (**(code **)(lVar2 + 0x288))(*(undefined8 *)(param_1 + 0x200),param_1,uVar3,param_2);
    }
    plVar1 = *(longlong **)(param_1 + 0x220);
    if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 5) & 0x80) != 0)) {
      (**(code **)(*plVar1 + 0x288))(plVar1,param_1,*(undefined4 *)(param_1 + 0x228),param_2);
    }
    plVar1 = *(longlong **)(param_1 + 0x208);
    if ((plVar1 != (longlong *)0x0) && ((*(byte *)(plVar1 + 5) & 0x80) != 0)) {
      lVar2 = *plVar1;
      uVar3 = FUN_1426279f0(param_1);
      (**(code **)(lVar2 + 0x288))(*(undefined8 *)(param_1 + 0x208),param_1,uVar3,param_2);
    }
    FParticleEmitterInstance::Tick_ModulePostUpdate(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 142612db0 FUN_142612db0 body=530 status=ok
// SIG undefined FUN_142612db0(void)

void FUN_142612db0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 local_48 [12];
  undefined1 local_3c [20];
  
  if ((param_2 != 0) && ((*(uint *)(param_2 + 0xf0) & 0x100) != 0)) {
    iVar4 = *(int *)(param_2 + 0x128) + -1;
    lVar2 = *(longlong *)(param_2 + 0x108);
    lVar3 = *(longlong *)(param_2 + 0x100);
    iVar1 = *(int *)(param_2 + 0x124);
    lVar10 = (longlong)iVar4;
    if (-1 < iVar4) {
      puVar11 = (uint *)0x0;
      do {
        lVar8 = (ulonglong)((uint)*(ushort *)(lVar2 + lVar10 * 2) * iVar1) + lVar3;
        if ((*(uint *)(lVar8 + 0x68) & 0x4000000) == 0) {
          puVar5 = puVar11;
          puVar9 = puVar11;
          if ((*(uint *)(param_2 + 0xf0) & 0x100) != 0) {
            if (*(longlong *)(param_2 + 0x210) != 0) {
              puVar5 = (uint *)(*(int *)(param_2 + 0x218) + lVar8);
            }
            if (*(longlong *)(param_2 + 0x220) != 0) {
              puVar9 = (uint *)(*(int *)(param_2 + 0x228) + lVar8);
            }
          }
          if (*(char *)(param_1 + 0x38) == '\0') {
            puVar9 = puVar5;
          }
          if (puVar9 != (uint *)0x0) {
            *puVar9 = *puVar9 ^ (*(uint *)(param_1 + 0x3c) ^ *puVar9) & 1;
            uVar7 = *puVar9;
            if (((byte)*(undefined4 *)(param_1 + 0x3c) & 5) == 1) {
              puVar6 = (undefined8 *)
                       FUN_1424118e0(param_1 + 0x40,local_48,*(undefined4 *)(param_2 + 0x13c),
                                     *(undefined8 *)(param_2 + 0x18),0,0);
              *(undefined8 *)(puVar9 + 1) = *puVar6;
              puVar9[3] = *(uint *)(puVar6 + 1);
              *puVar9 = *puVar9 ^ (*(uint *)(param_1 + 0x3c) ^ *puVar9) & 2;
              uVar7 = *puVar9;
            }
            uVar7 = (*(int *)(param_1 + 0x90) << 2 ^ uVar7) & 4 ^ uVar7;
            *puVar9 = uVar7;
            if (((byte)*(undefined4 *)(param_1 + 0x90) & 5) == 1) {
              puVar6 = (undefined8 *)
                       FUN_1424118e0(param_1 + 0x98,local_3c,*(undefined4 *)(param_2 + 0x13c),
                                     *(undefined8 *)(param_2 + 0x18),0,0);
              *(undefined8 *)(puVar9 + 4) = *puVar6;
              puVar9[6] = *(uint *)(puVar6 + 1);
              *puVar9 = *puVar9 ^ (*(int *)(param_1 + 0x90) << 2 ^ *puVar9) & 8;
              uVar7 = *puVar9;
            }
            *puVar9 = (*(int *)(param_1 + 0xec) << 4 ^ uVar7) & 0x10 ^ uVar7;
            if (((byte)*(undefined4 *)(param_1 + 0xec) & 5) == 1) {
              uVar7 = FUN_1424116d0(param_1 + 0xf0,*(undefined4 *)(param_2 + 0x13c),
                                    *(undefined8 *)(param_2 + 0x18),0);
              puVar9[7] = uVar7;
              *puVar9 = *puVar9 ^ (*(int *)(param_1 + 0xec) << 4 ^ *puVar9) & 0x20;
            }
          }
        }
        lVar10 = lVar10 + -1;
      } while (-1 < lVar10);
    }
  }
  return;
}



// FUNCTION 142612fd0 FUN_142612fd0 body=998 status=ok
// SIG undefined FUN_142612fd0(void)

void FUN_142612fd0(longlong param_1,longlong param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  undefined4 local_110 [2];
  float *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  float *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined1 local_a8 [12];
  undefined1 local_9c [12];
  undefined1 local_90 [104];
  ulonglong uVar9;
  
  if (((((*(byte *)(param_1 + 0x38) & 1) != 0) && (param_2 != 0)) && (*(int *)(param_1 + 0x3c) != 0)
      ) && ((*(uint *)(param_2 + 0xf0) & 0x100) != 0)) {
    plVar4 = *(longlong **)(param_2 + 0x1f0);
    iVar6 = *(int *)(param_2 + 0x128) + -1;
    local_b0 = *(longlong *)(param_2 + 0x108);
    cVar2 = *(char *)(param_1 + 0x4b);
    lVar5 = *(longlong *)(param_2 + 0x100);
    iVar3 = *(int *)(param_2 + 0x124);
    local_e0 = (longlong)iVar6;
    iVar10 = -1;
    if (-1 < iVar6) {
      do {
        lVar11 = (ulonglong)((uint)*(ushort *)(local_b0 + local_e0 * 2) * iVar3) + lVar5;
        if ((*(uint *)(lVar11 + 0x68) & 0x4000000) == 0) {
          local_110[0] = *(undefined4 *)(param_2 + 0x30);
          local_f8 = 0;
          local_b8 = 0;
          local_108 = (float *)0x0;
          local_e8 = (float *)0x0;
          local_100 = 0;
          local_f0 = 0;
          local_c0 = 0;
          local_c8 = 0;
          local_d0 = 0;
          local_d8 = 0;
          (**(code **)(*plVar4 + 0x3c0))
                    (plVar4,param_2,lVar11,local_110,&local_f8,&local_b8,&local_108,&local_e8,
                     &local_100,&local_f0,&local_c0,&local_c8,&local_d0,&local_d8);
          if ((cVar2 == '\0') || ((*(byte *)(param_1 + 0x130) & 2) == 0)) {
            iVar10 = 0;
          }
          else {
            iVar10 = -iVar10;
          }
          uVar9 = 0;
          if (0.0 <= *(float *)(param_1 + 0x134)) {
            iVar6 = (*(int *)(local_f8 + 0x38) >> 0xc & 0xfffU) + 1;
            fVar13 = 1.0 / (float)iVar6;
            if (*(float *)(param_1 + 0x134) <= 0.0001) {
              uVar12 = uVar9;
              if (iVar6 != 0) {
                do {
                  puVar7 = (undefined8 *)
                           FUN_1424118e0(param_1 + 0x48,local_90,(float)(int)uVar9 * fVar13,
                                         *(undefined8 *)(param_2 + 0x18),iVar10,0);
                  uVar8 = (int)uVar9 + 1;
                  uVar9 = (ulonglong)uVar8;
                  *(undefined8 *)(uVar12 + local_100) = *puVar7;
                  *(undefined4 *)(uVar12 + 8 + local_100) = *(undefined4 *)(puVar7 + 1);
                  uVar12 = uVar12 + 0xc;
                } while ((int)uVar8 < iVar6);
              }
            }
            else {
              fVar1 = *local_108;
              *local_108 = param_4 + fVar1;
              if (*(float *)(param_1 + 0x134) < param_4 + fVar1) {
                if ((*(byte *)(param_1 + 0x128) & 1) == 0) {
                  uVar12 = uVar9;
                  if (iVar6 != 0) {
                    do {
                      puVar7 = (undefined8 *)
                               FUN_1424118e0(param_1 + 0x48,local_9c,(float)(int)uVar9 * fVar13,
                                             *(undefined8 *)(param_2 + 0x18),iVar10,0);
                      uVar8 = (int)uVar9 + 1;
                      uVar9 = (ulonglong)uVar8;
                      *(undefined8 *)(uVar12 + local_100) = *puVar7;
                      *(undefined4 *)(uVar12 + 8 + local_100) = *(undefined4 *)(puVar7 + 1);
                      uVar12 = uVar12 + 0xc;
                    } while ((int)uVar8 < iVar6);
                  }
                }
                else {
                  uVar12 = uVar9;
                  if (iVar6 != 0) {
                    do {
                      puVar7 = (undefined8 *)
                               FUN_1424118e0(param_1 + 0x48,local_a8,(float)(int)uVar9 * fVar13,
                                             *(undefined8 *)(param_2 + 0x18),iVar10,0);
                      uVar8 = (int)uVar9 + 1;
                      uVar9 = (ulonglong)uVar8;
                      *(undefined8 *)(uVar12 + local_f0) = *puVar7;
                      *(undefined4 *)(uVar12 + 8 + local_f0) = *(undefined4 *)(puVar7 + 1);
                      uVar12 = uVar12 + 0xc;
                    } while ((int)uVar8 < iVar6);
                    *local_108 = 0.0;
                    *local_e8 = param_4;
                    goto LAB_142613339;
                  }
                }
                *local_108 = 0.0;
              }
              *local_e8 = param_4;
            }
          }
        }
LAB_142613339:
        local_e0 = local_e0 + -1;
      } while (-1 < local_e0);
    }
  }
  return;
}



// FUNCTION 1426133c0 FUN_1426133c0 body=479 status=ok
// SIG undefined FUN_1426133c0(void)

void FUN_1426133c0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  undefined4 local_res18 [4];
  undefined8 *puVar7;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  
  if (((((*(byte *)(param_1 + 0xa0) & 1) == 0) || ((*(byte *)(param_1 + 0xf8) & 1) == 0)) ||
      ((*(byte *)(param_1 + 0x138) & 1) == 0)) &&
     ((param_2 != 0 && ((*(uint *)(param_2 + 0xf0) & 0x100) != 0)))) {
    plVar6 = *(longlong **)(param_2 + 0x1f0);
    iVar3 = *(int *)(param_2 + 0x128) + -1;
    lVar2 = *(longlong *)(param_2 + 0x100);
    iVar1 = *(int *)(param_2 + 0x124);
    if (-1 < iVar3) {
      puVar4 = (ushort *)(*(longlong *)(param_2 + 0x108) + (longlong)iVar3 * 2);
      local_res18[0] = param_3;
      local_48 = plVar6;
      do {
        lVar5 = (ulonglong)((uint)*puVar4 * iVar1) + lVar2;
        if ((*(uint *)(lVar5 + 0x68) & 0x4000000) == 0) {
          local_res8[0] = *(undefined4 *)(param_2 + 0x30);
          local_90 = 0;
          local_50 = 0;
          local_58 = 0;
          local_60 = 0;
          local_68 = 0;
          local_70 = 0;
          local_78 = 0;
          local_80 = 0;
          local_98 = 0;
          local_88 = 0;
          puVar7 = &local_58;
          (**(code **)(*plVar6 + 0x3c0))
                    (plVar6,param_2,lVar5,local_res8,&local_90,&local_50,puVar7,&local_60,&local_68,
                     &local_70,&local_78,&local_80,&local_98,&local_88);
          FUN_14260bdd0(param_1,param_2,local_90,lVar5,local_res18,iVar3,
                        (ulonglong)puVar7 & 0xffffffffffffff00,local_98);
          plVar6 = local_48;
        }
        puVar4 = puVar4 + -1;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
  }
  return;
}



// FUNCTION 1426135a0 FUN_1426135a0 body=479 status=ok
// SIG undefined FUN_1426135a0(void)

void FUN_1426135a0(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 local_res8 [2];
  undefined4 local_res18 [4];
  undefined8 *puVar7;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  
  if (((((*(byte *)(param_1 + 0x98) & 2) == 0) || ((*(byte *)(param_1 + 0xf0) & 1) == 0)) ||
      ((*(byte *)(param_1 + 0x130) & 1) == 0)) &&
     ((param_2 != 0 && ((*(uint *)(param_2 + 0xf0) & 0x100) != 0)))) {
    plVar6 = *(longlong **)(param_2 + 0x1f0);
    iVar3 = *(int *)(param_2 + 0x128) + -1;
    lVar2 = *(longlong *)(param_2 + 0x100);
    iVar1 = *(int *)(param_2 + 0x124);
    if (-1 < iVar3) {
      puVar4 = (ushort *)(*(longlong *)(param_2 + 0x108) + (longlong)iVar3 * 2);
      local_res18[0] = param_3;
      local_48 = plVar6;
      do {
        lVar5 = (ulonglong)((uint)*puVar4 * iVar1) + lVar2;
        if ((*(uint *)(lVar5 + 0x68) & 0x4000000) == 0) {
          local_res8[0] = *(undefined4 *)(param_2 + 0x30);
          local_90 = 0;
          local_50 = 0;
          local_58 = 0;
          local_60 = 0;
          local_68 = 0;
          local_70 = 0;
          local_78 = 0;
          local_80 = 0;
          local_88 = 0;
          local_98 = 0;
          puVar7 = &local_58;
          (**(code **)(*plVar6 + 0x3c0))
                    (plVar6,param_2,lVar5,local_res8,&local_90,&local_50,puVar7,&local_60,&local_68,
                     &local_70,&local_78,&local_80,&local_88,&local_98);
          FUN_14260c680(param_1,param_2,local_90,lVar5,local_res18,iVar3,
                        (ulonglong)puVar7 & 0xffffffffffffff00,local_98);
          plVar6 = local_48;
        }
        puVar4 = puVar4 + -1;
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
  }
  return;
}



// FUNCTION 142613780 FUN_142613780 body=5791 status=ok
// SIG undefined FUN_142613780(void)

void FUN_142613780(longlong *param_1,longlong param_2,undefined4 param_3,float param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  float *pfVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  byte local_res10;
  float *local_2a8;
  byte local_2a0;
  int local_29c;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  undefined8 local_280;
  float local_278;
  undefined4 *local_270;
  undefined8 local_268;
  float local_260;
  undefined8 local_258;
  float local_250;
  uint *local_248;
  uint *local_240;
  float local_238;
  float local_234;
  undefined8 local_230;
  float local_228;
  undefined4 local_220 [2];
  longlong local_218;
  float local_210;
  float fStack_20c;
  float local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1e8;
  float local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158 [2];
  float local_148;
  float local_13c;
  float local_130;
  float local_124;
  float local_118;
  float local_10c;
  float local_100;
  float local_f4;
  float local_e8;
  
  lVar13 = *(longlong *)(param_2 + 0x18);
  lVar5 = *(longlong *)(param_2 + 0x208);
  local_238 = 1.0;
  if (*(longlong *)(param_2 + 0x200) != 0) {
    local_238 = *(float *)(*(longlong *)(param_2 + 0x200) + 0x134);
  }
  if (*(longlong *)(param_2 + 0x210) == 0) {
    local_res10 = 0;
  }
  else {
    local_res10 = *(byte *)(*(longlong *)(param_2 + 0x210) + 0xe8) & 1;
  }
  if (*(longlong *)(param_2 + 0x220) == 0) {
    local_2a0 = 0;
  }
  else {
    local_2a0 = *(byte *)(*(longlong *)(param_2 + 0x220) + 0xe8) & 1;
  }
  lVar10 = *(longlong *)(param_2 + 0x100);
  lVar15 = *(longlong *)(param_2 + 0x108);
  iVar9 = *(int *)(param_2 + 0x128) + -1;
  iVar11 = *(int *)(param_2 + 0x124);
  lVar18 = (longlong)iVar9;
  local_29c = iVar11;
  local_298 = lVar13;
  local_290 = lVar10;
  local_288 = lVar15;
  if (-1 < iVar9) {
    do {
      lVar14 = (ulonglong)((uint)*(ushort *)(lVar15 + lVar18 * 2) * iVar11) + lVar10;
      if ((*(uint *)(lVar14 + 0x68) & 0x4000000) == 0) {
        local_2a8 = (float *)0x0;
        local_218 = 0;
        local_158[0] = 0;
        local_160 = 0;
        local_168 = 0;
        local_170 = 0;
        local_178 = 0;
        local_270 = (undefined4 *)0x0;
        local_248 = (uint *)0x0;
        local_240 = (uint *)0x0;
        local_220[0] = param_3;
        (**(code **)(*param_1 + 0x3c0))
                  (param_1,param_2,lVar14,local_220,&local_2a8,&local_218,local_158,&local_160,
                   &local_168,&local_170,&local_178,&local_270,&local_248,&local_240);
        if (*(longlong *)(param_2 + 0x1f8) == 0) {
          fVar22 = *(float *)(lVar13 + 0x224);
          local_148 = *(float *)(lVar13 + 0x228);
          *local_2a8 = *(float *)(lVar13 + 0x220);
          local_2a8[1] = fVar22;
          local_2a8[2] = local_148;
          fVar31 = *(float *)(lVar13 + 0x230) * 1.0;
          fVar32 = *(float *)(lVar13 + 0x234) * 0.0;
          fVar34 = *(float *)(lVar13 + 0x238) * 0.0;
          auVar28 = *(undefined1 (*) [16])(lVar13 + 0x210);
          fVar22 = auVar28._12_4_;
          fVar19 = auVar28._0_4_;
          fVar27 = auVar28._4_4_;
          fVar26 = auVar28._8_4_;
          fVar21 = fVar34 * fVar27 - fVar32 * fVar26;
          fVar23 = fVar31 * fVar26 - fVar34 * fVar19;
          fVar24 = fVar32 * fVar19 - fVar31 * fVar27;
          fVar21 = fVar21 + fVar21;
          fVar23 = fVar23 + fVar23;
          fVar24 = fVar24 + fVar24;
          local_13c = (fVar23 * fVar19 - fVar21 * fVar27) + fVar22 * fVar24 + fVar34;
          *(ulonglong *)(local_2a8 + 3) =
               CONCAT44((fVar21 * fVar26 - fVar24 * fVar19) + fVar22 * fVar23 + fVar32,
                        (fVar24 * fVar27 - fVar23 * fVar26) + fVar22 * fVar21 + fVar31);
          local_2a8[5] = local_13c;
        }
        if ((*(longlong *)(param_2 + 0x200) == 0) && (*(int *)(param_2 + 0x238) == 0)) {
          fVar19 = (float)FUN_1424116d0(param_1 + 0xd);
          fVar22 = *(float *)(lVar13 + 0x210);
          fVar21 = *(float *)(lVar13 + 0x214);
          fVar23 = *(float *)(lVar13 + 0x218);
          fVar24 = *(float *)(lVar13 + 0x21c);
          fVar27 = *(float *)(lVar13 + 0x230) * 1.0;
          fVar34 = *(float *)(lVar13 + 0x234) * 0.0;
          fVar30 = *(float *)(lVar13 + 0x238) * 0.0;
          fVar26 = fVar30 * fVar21 - fVar34 * fVar23;
          fVar31 = fVar27 * fVar23 - fVar30 * fVar22;
          fVar32 = fVar34 * fVar22 - fVar27 * fVar21;
          fVar26 = fVar26 + fVar26;
          fVar31 = fVar31 + fVar31;
          fVar32 = fVar32 + fVar32;
          fVar27 = (fVar32 * fVar21 - fVar31 * fVar23) + fVar24 * fVar26 + fVar27;
          fVar23 = (fVar26 * fVar23 - fVar32 * fVar22) + fVar24 * fVar31 + fVar34;
          local_124 = (fVar31 * fVar22 - fVar26 * fVar21) + fVar24 * fVar32 + fVar30;
          fVar22 = fVar23 * fVar23 + fVar27 * fVar27 + local_124 * local_124;
          if (1e-08 < fVar22) {
            auVar28 = rsqrtss(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22));
            local_234 = auVar28._0_4_;
            local_234 = local_234 + local_234 * (0.5 - fVar22 * 0.5 * local_234 * local_234);
            local_234 = local_234 + local_234 * (0.5 - fVar22 * 0.5 * local_234 * local_234);
            fVar27 = local_234 * fVar27;
            fVar23 = local_234 * fVar23;
            local_124 = local_234 * local_124;
          }
          local_130 = local_124 * fVar19 + local_2a8[2];
          local_124 = -local_124;
          *(ulonglong *)(local_2a8 + 7) =
               CONCAT44(fVar23 * fVar19 + local_2a8[1],fVar27 * fVar19 + *local_2a8);
          local_2a8[9] = local_130;
          *(ulonglong *)(local_2a8 + 10) = CONCAT44(fVar23,fVar27) ^ 0x8000000080000000;
          local_2a8[0xc] = local_124;
        }
        puVar8 = local_248;
        pfVar7 = local_2a8;
        if (local_248 != (uint *)0x0) {
          if ((*local_248 & 1) != 0) {
            if ((*local_248 & 2) == 0) {
              *local_2a8 = (float)local_248[1] + *local_2a8;
              local_2a8[1] = (float)local_248[2] + local_2a8[1];
              fVar22 = (float)local_248[3] + local_2a8[2];
            }
            else {
              *local_2a8 = (float)local_248[1] * *local_2a8;
              local_2a8[1] = (float)local_248[2] * local_2a8[1];
              fVar22 = (float)local_248[3] * local_2a8[2];
            }
            local_2a8[2] = fVar22;
          }
          pfVar1 = local_2a8 + 3;
          if ((*local_248 & 4) != 0) {
            if (local_res10 == 0) {
              local_200 = 0x3f800000;
              local_1f8 = 0;
              FQuat::FindBetweenNormals(&local_198,&local_200,pfVar1);
              local_1e8 = *(undefined8 *)(puVar8 + 4);
              fVar21 = (float)((ulonglong)local_1e8 >> 0x20);
              local_1e0 = (float)puVar8[6];
              fVar27 = local_1e0 * local_194 - fVar21 * local_190;
              fVar19 = (float)local_1e8 * local_190 - local_1e0 * local_198;
              fVar27 = fVar27 + fVar27;
              fVar24 = fVar21 * local_198 - (float)local_1e8 * local_194;
              fVar19 = fVar19 + fVar19;
              fVar24 = fVar24 + fVar24;
              fVar22 = (local_198 * fVar19 - local_194 * fVar27) + local_1e0 + local_18c * fVar24;
              fVar23 = (local_190 * fVar27 - local_198 * fVar24) + fVar21 + local_18c * fVar19;
              fVar21 = (local_194 * fVar24 - local_190 * fVar19) +
                       (float)local_1e8 + local_18c * fVar27;
            }
            else {
              local_1d8 = *(undefined8 *)(local_248 + 4);
              fVar22 = (float)local_248[6];
              fVar23 = (float)((ulonglong)local_1d8 >> 0x20);
              fVar21 = (float)local_1d8;
              local_1d0 = fVar22;
            }
            if ((*puVar8 & 8) == 0) {
              fVar21 = fVar21 + *pfVar1;
              fVar23 = fVar23 + pfVar7[4];
              fVar22 = fVar22 + pfVar7[5];
            }
            else {
              fVar21 = fVar21 * *pfVar1;
              fVar23 = fVar23 * pfVar7[4];
              fVar22 = fVar22 * pfVar7[5];
            }
            *pfVar1 = fVar21;
            pfVar7[4] = fVar23;
            pfVar7[5] = fVar22;
          }
          if ((*local_248 & 0x10) != 0) {
            if ((*local_248 & 0x20) == 0) {
              fVar22 = local_2a8[6] + (float)local_248[7];
            }
            else {
              fVar22 = local_2a8[6] * (float)local_248[7];
            }
            local_2a8[6] = fVar22;
          }
        }
        puVar8 = local_240;
        pfVar7 = local_2a8;
        if (local_240 != (uint *)0x0) {
          if ((*local_240 & 1) != 0) {
            if ((*local_240 & 2) == 0) {
              local_2a8[7] = local_2a8[7] + (float)local_240[1];
              local_2a8[8] = (float)local_240[2] + local_2a8[8];
              fVar22 = (float)local_240[3] + local_2a8[9];
            }
            else {
              local_2a8[7] = (float)local_240[1] * local_2a8[7];
              local_2a8[8] = (float)local_240[2] * local_2a8[8];
              fVar22 = (float)local_240[3] * local_2a8[9];
            }
            local_2a8[9] = fVar22;
          }
          pfVar1 = local_2a8 + 10;
          if ((*local_240 & 4) != 0) {
            if (local_2a0 == 0) {
              local_1c8 = 0x3f800000;
              local_1c0 = 0;
              FQuat::FindBetweenNormals(&local_188,&local_1c8,pfVar1);
              local_1b8 = *(undefined8 *)(puVar8 + 4);
              fVar21 = (float)((ulonglong)local_1b8 >> 0x20);
              local_1b0 = (float)puVar8[6];
              fVar27 = local_1b0 * local_184 - fVar21 * local_180;
              fVar19 = (float)local_1b8 * local_180 - local_1b0 * local_188;
              fVar27 = fVar27 + fVar27;
              fVar24 = fVar21 * local_188 - (float)local_1b8 * local_184;
              fVar19 = fVar19 + fVar19;
              fVar24 = fVar24 + fVar24;
              fVar22 = (local_188 * fVar19 - local_184 * fVar27) + local_1b0 + local_17c * fVar24;
              fVar23 = (local_180 * fVar27 - local_188 * fVar24) + fVar21 + local_17c * fVar19;
              fVar21 = (local_184 * fVar24 - local_180 * fVar19) +
                       (float)local_1b8 + local_17c * fVar27;
            }
            else {
              local_1a8 = *(undefined8 *)(local_240 + 4);
              fVar22 = (float)local_240[6];
              fVar23 = (float)((ulonglong)local_1a8 >> 0x20);
              fVar21 = (float)local_1a8;
              local_1a0 = fVar22;
            }
            if ((*puVar8 & 8) == 0) {
              fVar21 = fVar21 + *pfVar1;
              fVar23 = fVar23 + pfVar7[0xb];
              fVar22 = fVar22 + pfVar7[0xc];
            }
            else {
              fVar21 = fVar21 * *pfVar1;
              fVar23 = fVar23 * pfVar7[0xb];
              fVar22 = fVar22 * pfVar7[0xc];
            }
            *pfVar1 = fVar21;
            pfVar7[0xb] = fVar23;
            pfVar7[0xc] = fVar22;
          }
          if ((*local_240 & 0x10) != 0) {
            if ((*local_240 & 0x20) == 0) {
              fVar22 = local_2a8[0xd] + (float)local_240[7];
            }
            else {
              fVar22 = local_2a8[0xd] * (float)local_240[7];
            }
            local_2a8[0xd] = fVar22;
          }
        }
        fVar22 = 1.4013e-45;
        if (*(float *)(param_1 + 10) != 0.0) {
          fVar22 = *(float *)(param_1 + 10);
        }
        if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x38) & 1) == 0)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        fVar21 = *(float *)((longlong)param_1 + 0x4c);
        if ((fVar21 == 0.0) || ((int)local_2a8[0xe] < 0)) {
          *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(local_2a8 + 7);
          *(float *)(lVar14 + 0x18) = local_2a8[9];
          local_2a8[0xe] = (float)((uint)local_2a8[0xe] | 0x80000000);
        }
        else {
          fVar23 = *(float *)(lVar14 + 0x10);
          fVar24 = local_2a8[7];
          if (((fVar23 != fVar24) || (local_2a8[8] != *(float *)(lVar14 + 0x14))) ||
             (local_2a8[9] != *(float *)(lVar14 + 0x18))) {
            fVar31 = fVar24 - fVar23;
            fVar27 = local_2a8[8] - *(float *)(lVar14 + 0x14);
            fVar26 = local_2a8[9] - *(float *)(lVar14 + 0x18);
            fVar19 = fVar27 * fVar27 + fVar31 * fVar31 + fVar26 * fVar26;
            if (1e-08 < fVar19) {
              auVar29._8_8_ = 0;
              auVar29._0_8_ = CONCAT44(0,fVar19);
              auVar28._8_8_ = 0;
              auVar28._0_8_ = CONCAT44(0,fVar19);
              auVar28 = rsqrtss(auVar29,auVar28);
              local_234 = auVar28._0_4_;
              local_234 = local_234 + local_234 * (0.5 - fVar19 * 0.5 * local_234 * local_234);
              local_234 = local_234 + local_234 * (0.5 - fVar19 * 0.5 * local_234 * local_234);
              fVar31 = fVar31 * local_234;
              fVar27 = fVar27 * local_234;
              fVar26 = fVar26 * local_234;
            }
            local_210 = fVar31 * fVar21 * param_4 + fVar23;
            fStack_20c = fVar27 * fVar21 * param_4 + *(float *)(lVar14 + 0x14);
            local_208 = fVar26 * fVar21 * param_4 + *(float *)(lVar14 + 0x18);
            if (((local_238 <= ABS(local_210 - fVar24)) ||
                (local_238 <= ABS(fStack_20c - local_2a8[8]))) ||
               (local_238 <= ABS(local_208 - local_2a8[9]))) {
              *(ulonglong *)(lVar14 + 0x10) = CONCAT44(fStack_20c,local_210);
              *(float *)(lVar14 + 0x18) = local_208;
            }
            else {
              *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(local_2a8 + 7);
              *(float *)(lVar14 + 0x18) = local_2a8[9];
              local_2a8[0xe] = (float)((uint)local_2a8[0xe] | 0x80000000);
            }
          }
        }
        local_118 = local_2a8[9] - local_2a8[2];
        *(ulonglong *)(local_2a8 + 0x10) =
             CONCAT44(local_2a8[8] - local_2a8[1],local_2a8[7] - *local_2a8);
        local_2a8[0x12] = local_118;
        fVar21 = local_2a8[0x11];
        fVar23 = local_2a8[0x10];
        fVar24 = local_2a8[0x12];
        fVar19 = fVar23 * fVar23 + fVar21 * fVar21 + fVar24 * fVar24;
        fVar27 = SQRT(fVar19);
        if (1e-08 < fVar19) {
          auVar28 = rsqrtss(ZEXT416((uint)fVar19),ZEXT416((uint)fVar19));
          local_234 = auVar28._0_4_;
          local_234 = local_234 + local_234 * (0.5 - fVar19 * 0.5 * local_234 * local_234);
          local_234 = local_234 + local_234 * (0.5 - fVar19 * 0.5 * local_234 * local_234);
          local_2a8[0x10] = local_234 * fVar23;
          local_2a8[0x11] = fVar21 * local_234;
          local_2a8[0x12] = fVar24 * local_234;
        }
        if (bVar6) {
          fVar21 = (float)((int)local_2a8[0xe] >> 0xc & 0xfff);
          if ((int)local_2a8[0xe] < 0) {
            if (0.0 < *(float *)(lVar5 + 0x180)) {
              fVar24 = (float)(int)(fVar27 / *(float *)(lVar5 + 0x180));
              fVar23 = fVar21;
              if ((int)fVar24 <= (int)fVar21) {
                fVar23 = fVar24;
              }
              local_2a8[0x13] = fVar27 / (float)((int)fVar23 + 1);
              local_2a8[0x14] = fVar23;
              local_2a8[0x15] = 0.0;
              if (local_270 != (undefined4 *)0x0) {
                uVar20 = FUN_1424116d0(lVar5 + 0x188,(float)(int)fVar23 / (float)(int)fVar21,0,0);
                *local_270 = uVar20;
              }
            }
            else {
              local_2a8[0x13] = fVar27 / (float)((int)fVar21 + 1);
              local_2a8[0x14] = fVar21;
              local_2a8[0x15] = 0.0;
              if (local_270 != (undefined4 *)0x0) {
                *local_270 = 0x3f800000;
              }
            }
          }
          else {
            fVar24 = *(float *)(lVar14 + 0x10) - *local_2a8;
            fVar23 = *(float *)(lVar14 + 0x18) - local_2a8[2];
            fVar19 = *(float *)(lVar14 + 0x14) - local_2a8[1];
            fVar23 = SQRT(fVar19 * fVar19 + fVar24 * fVar24 + fVar23 * fVar23);
            if (*(float *)(lVar5 + 0x180) <= 0.0) {
              fVar24 = (float)((int)fVar21 + 1) * (fVar23 / fVar27);
              local_2a8[0x13] = fVar27 / (float)((int)fVar21 + 1);
              local_2a8[0x15] = fVar23 / fVar27;
              local_2a8[0x14] = (float)((int)ROUND((fVar24 + fVar24) - 0.5) >> 1);
              if ((int)fVar21 < (int)local_2a8[0x14]) {
                local_2a8[0x14] = fVar21;
              }
              fVar24 = (float)(int)local_2a8[0x14];
              if (local_2a8[0x14] == fVar21) {
                fVar24 = fVar24 * local_2a8[0x13];
                fVar21 = (fVar23 - fVar24) / (fVar27 - fVar24);
              }
              else {
                fVar21 = (fVar23 - local_2a8[0x13] * fVar24) / local_2a8[0x13];
              }
              local_2a8[0x15] = fVar21;
            }
            else {
              fVar19 = (float)(int)(fVar27 / *(float *)(lVar5 + 0x180));
              fVar24 = fVar21;
              if ((int)fVar19 <= (int)fVar21) {
                fVar24 = fVar19;
              }
              fVar19 = (float)((int)fVar24 + 1) * (fVar23 / fVar27);
              local_2a8[0x13] = fVar27 / (float)((int)fVar24 + 1);
              local_2a8[0x15] = fVar23 / fVar27;
              local_2a8[0x14] = (float)((int)ROUND((fVar19 + fVar19) - 0.5) >> 1);
              if ((int)fVar24 < (int)local_2a8[0x14]) {
                local_2a8[0x14] = fVar24;
              }
              fVar19 = (float)(int)local_2a8[0x14];
              if (local_2a8[0x14] == fVar24) {
                fVar19 = fVar19 * local_2a8[0x13];
                fVar23 = (fVar23 - fVar19) / (fVar27 - fVar19);
              }
              else {
                fVar23 = (fVar23 - local_2a8[0x13] * fVar19) / local_2a8[0x13];
              }
              local_2a8[0x15] = fVar23;
              if (local_270 == (undefined4 *)0x0) goto LAB_1426144d8;
              uVar20 = FUN_1424116d0(lVar5 + 0x188,(float)(int)fVar24 / (float)(int)fVar21,0,0);
              *local_270 = uVar20;
            }
            if (local_270 != (undefined4 *)0x0) {
              *local_270 = 0x3f800000;
            }
          }
        }
        else {
          fVar21 = (1.0 / (float)(int)fVar22) * fVar27;
          if ((int)local_2a8[0xe] < 0) {
            local_2a8[0x13] = fVar21;
LAB_142614466:
            local_2a8[0x14] = fVar22;
            local_2a8[0x15] = 0.0;
          }
          else {
            fVar19 = *(float *)(lVar14 + 0x14) - local_2a8[1];
            fVar24 = *(float *)(lVar14 + 0x10) - *local_2a8;
            fVar23 = *(float *)(lVar14 + 0x18) - local_2a8[2];
            fVar23 = SQRT(fVar19 * fVar19 + fVar24 * fVar24 + fVar23 * fVar23);
            if (fVar27 < fVar23) {
              *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(local_2a8 + 7);
              *(float *)(lVar14 + 0x18) = local_2a8[9];
              local_2a8[0xe] = (float)((uint)local_2a8[0xe] | 0x80000000);
              local_2a8[0x13] = fVar21;
              goto LAB_142614466;
            }
            local_2a8[0x13] = fVar21;
            local_2a8[0x15] = fVar23 / fVar27;
            fVar22 = (float)(int)fVar22 * (fVar23 / fVar27);
            local_2a8[0x14] = (float)((int)ROUND((fVar22 + fVar22) - 0.5) >> 1);
            local_2a8[0x15] =
                 (fVar23 - (float)(int)local_2a8[0x14] * local_2a8[0x13]) / local_2a8[0x13];
          }
          fVar22 = local_2a8[0x14];
        }
LAB_1426144d8:
        lVar14 = 0;
        lVar10 = local_290;
        lVar13 = local_298;
        lVar15 = local_288;
        iVar11 = local_29c;
        if ((int)param_1[10] < 1) {
          local_2a8[0xf] = 0.0;
          if (bVar6) {
            iVar9 = 1;
            if (*(int *)(lVar5 + 0x178) != 0) {
              iVar9 = *(int *)(lVar5 + 0x178);
            }
            local_2a8[0x16] = (float)((int)local_2a8[0x14] * iVar9 * 2);
            if ((int)local_2a8[0xe] < 0) {
              local_2a8[0x16] = (float)((int)local_2a8[0x16] + iVar9 * 2);
            }
          }
          else {
            local_2a8[0x16] = 2.8026e-45;
          }
        }
        else {
          local_2a8[0xf] = fVar22;
          local_278 = local_2a8[2];
          local_250 = local_2a8[5];
          uVar2 = *(undefined8 *)(local_2a8 + 3);
          fVar23 = (float)uVar2;
          fVar24 = 1.0 / (float)(int)param_1[10];
          uVar3 = *(undefined8 *)local_2a8;
          local_258._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          fVar21 = local_258._4_4_;
          if (((ABS(fVar23) <= 0.0001) && (ABS(local_258._4_4_) <= 0.0001)) &&
             (ABS(local_250) <= 0.0001)) {
            fVar19 = *(float *)(local_298 + 0x210);
            fVar27 = *(float *)(local_298 + 0x214);
            fVar21 = *(float *)(local_298 + 0x218);
            fVar26 = *(float *)(local_298 + 0x21c);
            fVar23 = *(float *)(local_298 + 0x230) * 1.0;
            fVar30 = *(float *)(local_298 + 0x234) * 0.0;
            fVar35 = *(float *)(local_298 + 0x238) * 0.0;
            fVar31 = fVar35 * fVar27 - fVar30 * fVar21;
            fVar32 = fVar23 * fVar21 - fVar35 * fVar19;
            fVar34 = fVar30 * fVar19 - fVar23 * fVar27;
            fVar31 = fVar31 + fVar31;
            fVar32 = fVar32 + fVar32;
            fVar34 = fVar34 + fVar34;
            fVar23 = (fVar34 * fVar27 - fVar32 * fVar21) + fVar26 * fVar31 + fVar23;
            fVar21 = (fVar31 * fVar21 - fVar34 * fVar19) + fVar26 * fVar32 + fVar30;
            local_250 = (fVar32 * fVar19 - fVar31 * fVar27) + fVar26 * fVar34 + fVar35;
            local_258 = CONCAT44(fVar21,fVar23);
            uVar2 = local_258;
            local_10c = local_250;
          }
          local_258 = uVar2;
          fVar19 = local_2a8[6];
          uVar2 = *(undefined8 *)(local_2a8 + 10);
          fVar26 = (float)uVar2;
          local_228 = local_2a8[9];
          local_260 = local_2a8[0xc];
          uVar4 = *(undefined8 *)(local_2a8 + 7);
          local_268._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          fVar27 = local_268._4_4_;
          if (((ABS(fVar26) <= 0.0001) && (ABS(local_268._4_4_) <= 0.0001)) &&
             (ABS(local_260) <= 0.0001)) {
            fVar31 = *(float *)(local_298 + 0x210);
            fVar32 = *(float *)(local_298 + 0x214);
            fVar27 = *(float *)(local_298 + 0x218);
            fVar34 = *(float *)(local_298 + 0x21c);
            fVar26 = *(float *)(local_298 + 0x230) * 1.0;
            fVar33 = *(float *)(local_298 + 0x234) * 0.0;
            fVar36 = *(float *)(local_298 + 0x238) * 0.0;
            fVar30 = fVar36 * fVar32 - fVar33 * fVar27;
            fVar35 = fVar26 * fVar27 - fVar36 * fVar31;
            fVar25 = fVar33 * fVar31 - fVar26 * fVar32;
            fVar30 = fVar30 + fVar30;
            fVar35 = fVar35 + fVar35;
            fVar25 = fVar25 + fVar25;
            fVar26 = (fVar25 * fVar32 - fVar35 * fVar27) + fVar34 * fVar30 + fVar26;
            fVar27 = (fVar30 * fVar27 - fVar25 * fVar31) + fVar34 * fVar35 + fVar33;
            local_260 = (fVar35 * fVar31 - fVar30 * fVar32) + fVar34 * fVar25 + fVar36;
            local_268 = CONCAT44(fVar27,fVar26);
            uVar2 = local_268;
            local_100 = local_260;
          }
          local_268 = uVar2;
          fVar31 = local_2a8[0xd];
          local_280._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
          local_280._0_4_ = (float)uVar3;
          lVar12 = (longlong)(int)fVar22;
          local_230._0_4_ = (float)uVar4;
          local_230._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
          lVar16 = lVar14;
          fVar32 = 0.0;
          if (0 < (int)fVar22) {
            iVar9 = 1;
            lVar17 = lVar12;
            do {
              fVar34 = (float)iVar9;
              iVar9 = iVar9 + 1;
              fVar34 = fVar34 * fVar24;
              fVar32 = fVar34 * fVar34;
              fVar25 = fVar32 * fVar34;
              fVar30 = fVar25 - fVar32;
              fVar35 = fVar32 * 3.0 - (fVar25 + fVar25);
              fVar34 = (fVar25 - (fVar32 + fVar32)) + fVar34;
              fVar32 = ((fVar25 + fVar25) - fVar32 * 3.0) + 1.0;
              local_f4 = local_278 * fVar32 + local_250 * fVar19 * fVar34 +
                         local_260 * fVar31 * fVar30 + local_228 * fVar35;
              *(ulonglong *)(lVar14 + local_218) =
                   CONCAT44(local_280._4_4_ * fVar32 + fVar21 * fVar19 * fVar34 +
                            fVar27 * fVar31 * fVar30 + local_230._4_4_ * fVar35,
                            (float)local_280 * fVar32 + fVar23 * fVar19 * fVar34 +
                            fVar26 * fVar31 * fVar30 + (float)local_230 * fVar35);
              *(float *)(lVar14 + 8 + local_218) = local_f4;
              lVar14 = lVar14 + 0xc;
              lVar17 = lVar17 + -1;
              lVar16 = lVar12;
              fVar32 = fVar22;
            } while (lVar17 != 0);
          }
          local_2a8[0x16] = (float)((int)local_2a8[0x14] * 2);
          if (lVar16 < lVar12) {
            lVar14 = lVar16 * 0xc;
            lVar12 = lVar12 - lVar16;
            do {
              fVar32 = (float)((int)fVar32 + 1);
              fVar34 = (float)(int)fVar32 * fVar24;
              fVar22 = fVar34 * fVar34;
              fVar25 = fVar22 * fVar34;
              fVar30 = fVar25 - fVar22;
              fVar35 = fVar22 * 3.0 - (fVar25 + fVar25);
              fVar34 = (fVar25 - (fVar22 + fVar22)) + fVar34;
              fVar22 = ((fVar25 + fVar25) - fVar22 * 3.0) + 1.0;
              local_e8 = local_278 * fVar22 + local_250 * fVar19 * fVar34 +
                         local_260 * fVar31 * fVar30 + local_228 * fVar35;
              *(ulonglong *)(lVar14 + local_218) =
                   CONCAT44(local_280._4_4_ * fVar22 + fVar21 * fVar19 * fVar34 +
                            fVar27 * fVar31 * fVar30 + local_230._4_4_ * fVar35,
                            (float)local_280 * fVar22 + fVar23 * fVar19 * fVar34 +
                            fVar26 * fVar31 * fVar30 + (float)local_230 * fVar35);
              *(float *)(lVar14 + 8 + local_218) = local_e8;
              lVar14 = lVar14 + 0xc;
              lVar12 = lVar12 + -1;
            } while (lVar12 != 0);
          }
          local_280 = uVar3;
          local_230 = uVar4;
          if (bVar6) {
            iVar9 = 1;
            if (*(int *)(lVar5 + 0x178) != 0) {
              iVar9 = *(int *)(lVar5 + 0x178);
            }
            local_2a8[0x16] = (float)((int)local_2a8[0x14] * iVar9 * 2);
            if ((int)local_2a8[0xe] < 0) {
              local_2a8[0x16] = (float)((int)local_2a8[0x16] + iVar9 * 2);
            }
            else if (0.0001 < local_2a8[0x15]) {
              local_2a8[0x16] =
                   (float)((int)local_2a8[0x16] +
                          ((int)ROUND((float)iVar9 * local_2a8[0x15] * 2.0 - 0.5) >> 1) * 2);
            }
          }
        }
      }
      lVar18 = lVar18 + -1;
    } while (-1 < lVar18);
  }
  return;
}



// FUNCTION 142614e20 FUN_142614e20 body=3065 status=ok
// SIG undefined FUN_142614e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142614e20(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  float *pfVar12;
  ulonglong uVar13;
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
  float local_res8 [4];
  float *local_res18;
  undefined8 local_res20;
  undefined4 local_150;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0 [21];
  ulonglong uVar11;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (((*(char *)(lVar1 + 0x719) < '\0') || (*(longlong *)(lVar1 + 0x6f0) == 0)) ||
       ((*(byte *)(*(longlong *)(lVar1 + 0x6f0) + 0x98) & 1) != 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
      *(undefined8 *)(param_1 + 0x15c) = _DAT_1468b5d90;
      uVar2 = DAT_1468b5d98;
      *(undefined4 *)(param_1 + 0x164) = DAT_1468b5d98;
      *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x15c);
      *(undefined4 *)(param_1 + 0x158) = uVar2;
      *(undefined1 *)(param_1 + 0x168) = 0;
      lVar1 = *(longlong *)(param_1 + 0x18);
      uVar2 = *(undefined4 *)(lVar1 + 0x220);
      uVar3 = *(undefined4 *)(lVar1 + 0x224);
      uVar4 = *(undefined4 *)(lVar1 + 0x228);
      *(undefined1 *)(param_1 + 0x168) = 1;
      *(undefined4 *)(param_1 + 0x15c) = uVar2;
      *(undefined4 *)(param_1 + 0x160) = uVar3;
      *(undefined4 *)(param_1 + 0x150) = uVar2;
      *(undefined4 *)(param_1 + 0x154) = uVar3;
      *(undefined4 *)(param_1 + 0x164) = uVar4;
      *(undefined4 *)(param_1 + 0x158) = uVar4;
    }
    fVar20 = 0.0;
    fVar21 = 0.0;
    if (*(longlong *)(param_1 + 0x208) != 0) {
      FRawDistributionVector::GetOutRange
                (*(longlong *)(param_1 + 0x208) + 0x48,local_res8,&local_res18);
      fVar20 = local_res8[0];
      fVar21 = local_res18._0_4_;
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar11 = 0;
    fVar17 = 1.0;
    fVar5 = *(float *)(lVar1 + 0x230);
    fVar6 = *(float *)(lVar1 + 0x234);
    fVar7 = *(float *)(lVar1 + 0x238);
    if (0 < *(int *)(param_1 + 0x128)) {
      uVar13 = uVar11;
      fVar24 = 1.0;
      do {
        local_res8[0] = *(float *)(param_1 + 0x30);
        pfVar12 = (float *)((longlong)
                            (int)((uint)*(ushort *)(uVar13 + *(longlong *)(param_1 + 0x108)) *
                                 *(int *)(param_1 + 0x124)) + *(longlong *)(param_1 + 0x100));
        local_res18 = (float *)0x0;
        local_e0[0] = 0;
        local_e8 = 0;
        local_f0 = 0;
        local_f8 = 0;
        local_100 = 0;
        local_108 = 0;
        local_110 = 0;
        local_118 = 0;
        local_res20 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x1f0) + 0x3c0))
                  (*(longlong **)(param_1 + 0x1f0),param_1,pfVar12,local_res8,&local_res18,local_e0,
                   &local_e8,&local_f0,&local_f8,&local_100,&local_108,&local_110,&local_118,
                   &local_res20);
        *(undefined8 *)pfVar12 = *(undefined8 *)(pfVar12 + 4);
        pfVar12[2] = pfVar12[6];
        pfVar12[4] = param_2 * pfVar12[0xf] + pfVar12[4];
        pfVar12[5] = pfVar12[0x10] * param_2 + pfVar12[5];
        pfVar12[6] = pfVar12[0x11] * param_2 + pfVar12[6];
        pfVar12[0xe] = param_2 * pfVar12[0x16] + pfVar12[0xe];
        *pfVar12 = *pfVar12 + *(float *)(param_1 + 0x1b8);
        pfVar12[1] = *(float *)(param_1 + 0x1bc) + pfVar12[1];
        pfVar12[2] = *(float *)(param_1 + 0x1c0) + pfVar12[2];
        fVar22 = pfVar12[0x17];
        fVar17 = pfVar12[0x18];
        fVar23 = pfVar12[0x19];
        if (bVar8) {
          cVar9 = *(char *)(param_1 + 0x168);
          if (cVar9 == '\0') {
            *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(pfVar12 + 4);
            fVar16 = pfVar12[6];
            *(float *)(param_1 + 0x164) = fVar16;
            *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x15c);
            *(float *)(param_1 + 0x158) = fVar16;
            cVar9 = '\x01';
            *(undefined1 *)(param_1 + 0x168) = 1;
          }
          else {
            fVar16 = *(float *)(param_1 + 0x150);
            if (pfVar12[4] <= *(float *)(param_1 + 0x150)) {
              fVar16 = pfVar12[4];
            }
            *(float *)(param_1 + 0x150) = fVar16;
            fVar16 = pfVar12[5];
            if (*(float *)(param_1 + 0x154) <= pfVar12[5]) {
              fVar16 = *(float *)(param_1 + 0x154);
            }
            *(float *)(param_1 + 0x154) = fVar16;
            fVar16 = pfVar12[6];
            if (*(float *)(param_1 + 0x158) <= pfVar12[6]) {
              fVar16 = *(float *)(param_1 + 0x158);
            }
            *(float *)(param_1 + 0x158) = fVar16;
            fVar16 = *(float *)(param_1 + 0x15c);
            if (*(float *)(param_1 + 0x15c) <= pfVar12[4]) {
              fVar16 = pfVar12[4];
            }
            *(float *)(param_1 + 0x15c) = fVar16;
            fVar16 = pfVar12[5];
            if (pfVar12[5] <= *(float *)(param_1 + 0x160)) {
              fVar16 = *(float *)(param_1 + 0x160);
            }
            *(float *)(param_1 + 0x160) = fVar16;
            fVar16 = *(float *)(param_1 + 0x164);
            if (*(float *)(param_1 + 0x164) <= pfVar12[6]) {
              fVar16 = pfVar12[6];
            }
            *(float *)(param_1 + 0x164) = fVar16;
          }
          fVar18 = fVar20 + pfVar12[4];
          fVar19 = fVar20 + pfVar12[5];
          fVar16 = fVar20 + pfVar12[6];
          if (cVar9 == '\0') {
            *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fVar19,fVar18);
            *(ulonglong *)(param_1 + 0x150) = CONCAT44(fVar19,fVar18);
            *(float *)(param_1 + 0x164) = fVar16;
            *(float *)(param_1 + 0x158) = fVar16;
            cVar9 = '\x01';
            *(undefined1 *)(param_1 + 0x168) = 1;
          }
          else {
            fVar15 = fVar19;
            if (*(float *)(param_1 + 0x154) <= fVar19) {
              fVar15 = *(float *)(param_1 + 0x154);
            }
            fVar14 = *(float *)(param_1 + 0x150);
            if (fVar18 <= *(float *)(param_1 + 0x150)) {
              fVar14 = fVar18;
            }
            *(float *)(param_1 + 0x154) = fVar15;
            *(float *)(param_1 + 0x150) = fVar14;
            fVar15 = *(float *)(param_1 + 0x15c);
            if (*(float *)(param_1 + 0x15c) <= fVar18) {
              fVar15 = fVar18;
            }
            fVar18 = fVar16;
            if (*(float *)(param_1 + 0x158) <= fVar16) {
              fVar18 = *(float *)(param_1 + 0x158);
            }
            if (fVar16 <= *(float *)(param_1 + 0x164)) {
              fVar16 = *(float *)(param_1 + 0x164);
            }
            *(float *)(param_1 + 0x15c) = fVar15;
            *(float *)(param_1 + 0x158) = fVar18;
            fVar18 = *(float *)(param_1 + 0x160);
            if (*(float *)(param_1 + 0x160) <= fVar19) {
              fVar18 = fVar19;
            }
            *(float *)(param_1 + 0x164) = fVar16;
            *(float *)(param_1 + 0x160) = fVar18;
          }
          fVar18 = fVar21 + pfVar12[4];
          fVar16 = fVar21 + pfVar12[5];
          fVar19 = fVar21 + pfVar12[6];
          if (cVar9 == '\0') {
            *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fVar16,fVar18);
            *(ulonglong *)(param_1 + 0x150) = CONCAT44(fVar16,fVar18);
            *(float *)(param_1 + 0x164) = fVar19;
            *(float *)(param_1 + 0x158) = fVar19;
            cVar9 = '\x01';
            *(undefined1 *)(param_1 + 0x168) = 1;
          }
          else {
            fVar15 = fVar16;
            if (*(float *)(param_1 + 0x154) <= fVar16) {
              fVar15 = *(float *)(param_1 + 0x154);
            }
            if (fVar16 <= *(float *)(param_1 + 0x160)) {
              fVar16 = *(float *)(param_1 + 0x160);
            }
            fVar14 = *(float *)(param_1 + 0x150);
            if (fVar18 <= *(float *)(param_1 + 0x150)) {
              fVar14 = fVar18;
            }
            if (fVar18 <= *(float *)(param_1 + 0x15c)) {
              fVar18 = *(float *)(param_1 + 0x15c);
            }
            *(float *)(param_1 + 0x154) = fVar15;
            *(float *)(param_1 + 0x160) = fVar16;
            *(float *)(param_1 + 0x150) = fVar14;
            fVar16 = *(float *)(param_1 + 0x158);
            if (fVar19 <= *(float *)(param_1 + 0x158)) {
              fVar16 = fVar19;
            }
            *(float *)(param_1 + 0x15c) = fVar18;
            if (fVar19 <= *(float *)(param_1 + 0x164)) {
              fVar19 = *(float *)(param_1 + 0x164);
            }
            *(float *)(param_1 + 0x158) = fVar16;
            *(float *)(param_1 + 0x164) = fVar19;
          }
          if (cVar9 == '\0') {
            *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)local_res18;
            fVar16 = local_res18[2];
            *(float *)(param_1 + 0x164) = fVar16;
            *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x15c);
            *(float *)(param_1 + 0x158) = fVar16;
            cVar9 = '\x01';
            *(undefined1 *)(param_1 + 0x168) = 1;
          }
          else {
            fVar16 = *local_res18;
            if (*(float *)(param_1 + 0x150) <= *local_res18) {
              fVar16 = *(float *)(param_1 + 0x150);
            }
            *(float *)(param_1 + 0x150) = fVar16;
            fVar16 = local_res18[1];
            if (*(float *)(param_1 + 0x154) <= local_res18[1]) {
              fVar16 = *(float *)(param_1 + 0x154);
            }
            *(float *)(param_1 + 0x154) = fVar16;
            fVar16 = local_res18[2];
            if (*(float *)(param_1 + 0x158) <= local_res18[2]) {
              fVar16 = *(float *)(param_1 + 0x158);
            }
            *(float *)(param_1 + 0x158) = fVar16;
            fVar16 = *(float *)(param_1 + 0x15c);
            if (*(float *)(param_1 + 0x15c) <= *local_res18) {
              fVar16 = *local_res18;
            }
            *(float *)(param_1 + 0x15c) = fVar16;
            fVar16 = *(float *)(param_1 + 0x160);
            if (*(float *)(param_1 + 0x160) <= local_res18[1]) {
              fVar16 = local_res18[1];
            }
            *(float *)(param_1 + 0x160) = fVar16;
            fVar16 = local_res18[2];
            if (local_res18[2] <= *(float *)(param_1 + 0x164)) {
              fVar16 = *(float *)(param_1 + 0x164);
            }
            *(float *)(param_1 + 0x164) = fVar16;
          }
          fVar18 = fVar20 + *local_res18;
          fVar16 = fVar20 + local_res18[1];
          fVar19 = fVar20 + local_res18[2];
          if (cVar9 == '\0') {
            *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fVar16,fVar18);
            *(ulonglong *)(param_1 + 0x150) = CONCAT44(fVar16,fVar18);
            *(float *)(param_1 + 0x164) = fVar19;
            *(float *)(param_1 + 0x158) = fVar19;
            cVar9 = '\x01';
            *(undefined1 *)(param_1 + 0x168) = 1;
          }
          else {
            fVar15 = fVar16;
            if (*(float *)(param_1 + 0x154) <= fVar16) {
              fVar15 = *(float *)(param_1 + 0x154);
            }
            if (fVar16 <= *(float *)(param_1 + 0x160)) {
              fVar16 = *(float *)(param_1 + 0x160);
            }
            fVar14 = *(float *)(param_1 + 0x150);
            if (fVar18 <= *(float *)(param_1 + 0x150)) {
              fVar14 = fVar18;
            }
            if (fVar18 <= *(float *)(param_1 + 0x15c)) {
              fVar18 = *(float *)(param_1 + 0x15c);
            }
            *(float *)(param_1 + 0x154) = fVar15;
            *(float *)(param_1 + 0x160) = fVar16;
            *(float *)(param_1 + 0x150) = fVar14;
            fVar16 = fVar19;
            if (*(float *)(param_1 + 0x158) <= fVar19) {
              fVar16 = *(float *)(param_1 + 0x158);
            }
            if (fVar19 <= *(float *)(param_1 + 0x164)) {
              fVar19 = *(float *)(param_1 + 0x164);
            }
            *(float *)(param_1 + 0x15c) = fVar18;
            *(float *)(param_1 + 0x158) = fVar16;
            *(float *)(param_1 + 0x164) = fVar19;
          }
          fVar19 = fVar21 + *local_res18;
          fVar18 = fVar21 + local_res18[1];
          fVar16 = fVar21 + local_res18[2];
          if (cVar9 == '\0') {
            *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fVar18,fVar19);
            *(ulonglong *)(param_1 + 0x150) = CONCAT44(fVar18,fVar19);
            *(float *)(param_1 + 0x164) = fVar16;
            *(float *)(param_1 + 0x158) = fVar16;
            cVar9 = '\x01';
            *(undefined1 *)(param_1 + 0x168) = 1;
          }
          else {
            fVar15 = fVar18;
            if (*(float *)(param_1 + 0x154) <= fVar18) {
              fVar15 = *(float *)(param_1 + 0x154);
            }
            if (fVar18 <= *(float *)(param_1 + 0x160)) {
              fVar18 = *(float *)(param_1 + 0x160);
            }
            fVar14 = *(float *)(param_1 + 0x150);
            if (fVar19 <= *(float *)(param_1 + 0x150)) {
              fVar14 = fVar19;
            }
            *(float *)(param_1 + 0x154) = fVar15;
            *(float *)(param_1 + 0x150) = fVar14;
            fVar15 = *(float *)(param_1 + 0x15c);
            if (*(float *)(param_1 + 0x15c) <= fVar19) {
              fVar15 = fVar19;
            }
            *(float *)(param_1 + 0x160) = fVar18;
            fVar18 = fVar16;
            if (*(float *)(param_1 + 0x158) <= fVar16) {
              fVar18 = *(float *)(param_1 + 0x158);
            }
            if (fVar16 <= *(float *)(param_1 + 0x164)) {
              fVar16 = *(float *)(param_1 + 0x164);
            }
            *(float *)(param_1 + 0x15c) = fVar15;
            *(float *)(param_1 + 0x158) = fVar18;
            *(float *)(param_1 + 0x164) = fVar16;
          }
          if (cVar9 == '\0') {
            *(undefined8 *)(param_1 + 0x15c) = *(undefined8 *)(local_res18 + 7);
            fVar16 = local_res18[9];
            *(float *)(param_1 + 0x164) = fVar16;
            *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x15c);
            *(float *)(param_1 + 0x158) = fVar16;
            cVar9 = '\x01';
            *(undefined1 *)(param_1 + 0x168) = 1;
          }
          else {
            fVar16 = *(float *)(param_1 + 0x150);
            if (local_res18[7] <= *(float *)(param_1 + 0x150)) {
              fVar16 = local_res18[7];
            }
            *(float *)(param_1 + 0x150) = fVar16;
            fVar16 = local_res18[8];
            if (*(float *)(param_1 + 0x154) <= local_res18[8]) {
              fVar16 = *(float *)(param_1 + 0x154);
            }
            *(float *)(param_1 + 0x154) = fVar16;
            fVar16 = local_res18[9];
            if (*(float *)(param_1 + 0x158) <= local_res18[9]) {
              fVar16 = *(float *)(param_1 + 0x158);
            }
            *(float *)(param_1 + 0x158) = fVar16;
            fVar16 = *(float *)(param_1 + 0x15c);
            if (*(float *)(param_1 + 0x15c) <= local_res18[7]) {
              fVar16 = local_res18[7];
            }
            *(float *)(param_1 + 0x15c) = fVar16;
            fVar16 = local_res18[8];
            if (local_res18[8] <= *(float *)(param_1 + 0x160)) {
              fVar16 = *(float *)(param_1 + 0x160);
            }
            *(float *)(param_1 + 0x160) = fVar16;
            fVar16 = local_res18[9];
            if (local_res18[9] <= *(float *)(param_1 + 0x164)) {
              fVar16 = *(float *)(param_1 + 0x164);
            }
            *(float *)(param_1 + 0x164) = fVar16;
          }
          fVar18 = fVar20 + local_res18[7];
          fVar19 = fVar20 + local_res18[8];
          fVar16 = fVar20 + local_res18[9];
          if (cVar9 == '\0') {
            *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fVar19,fVar18);
            *(ulonglong *)(param_1 + 0x150) = CONCAT44(fVar19,fVar18);
            *(float *)(param_1 + 0x164) = fVar16;
            *(float *)(param_1 + 0x158) = fVar16;
            cVar9 = '\x01';
            *(undefined1 *)(param_1 + 0x168) = 1;
          }
          else {
            fVar15 = fVar18;
            if (*(float *)(param_1 + 0x150) <= fVar18) {
              fVar15 = *(float *)(param_1 + 0x150);
            }
            fVar14 = fVar19;
            if (*(float *)(param_1 + 0x154) <= fVar19) {
              fVar14 = *(float *)(param_1 + 0x154);
            }
            if (fVar18 <= *(float *)(param_1 + 0x15c)) {
              fVar18 = *(float *)(param_1 + 0x15c);
            }
            *(float *)(param_1 + 0x150) = fVar15;
            fVar15 = *(float *)(param_1 + 0x158);
            if (fVar16 <= *(float *)(param_1 + 0x158)) {
              fVar15 = fVar16;
            }
            *(float *)(param_1 + 0x154) = fVar14;
            if (fVar16 <= *(float *)(param_1 + 0x164)) {
              fVar16 = *(float *)(param_1 + 0x164);
            }
            *(float *)(param_1 + 0x15c) = fVar18;
            *(float *)(param_1 + 0x158) = fVar15;
            fVar18 = *(float *)(param_1 + 0x160);
            if (*(float *)(param_1 + 0x160) <= fVar19) {
              fVar18 = fVar19;
            }
            *(float *)(param_1 + 0x164) = fVar16;
            *(float *)(param_1 + 0x160) = fVar18;
          }
          fVar16 = fVar21 + local_res18[7];
          fVar18 = fVar21 + local_res18[8];
          fVar19 = fVar21 + local_res18[9];
          if (cVar9 == '\0') {
            *(ulonglong *)(param_1 + 0x15c) = CONCAT44(fVar18,fVar16);
            *(ulonglong *)(param_1 + 0x150) = CONCAT44(fVar18,fVar16);
            *(float *)(param_1 + 0x164) = fVar19;
            *(float *)(param_1 + 0x158) = fVar19;
            *(undefined1 *)(param_1 + 0x168) = 1;
          }
          else {
            fVar15 = *(float *)(param_1 + 0x150);
            if (fVar16 <= *(float *)(param_1 + 0x150)) {
              fVar15 = fVar16;
            }
            fVar14 = *(float *)(param_1 + 0x154);
            if (fVar18 <= *(float *)(param_1 + 0x154)) {
              fVar14 = fVar18;
            }
            *(float *)(param_1 + 0x150) = fVar15;
            fVar15 = fVar19;
            if (*(float *)(param_1 + 0x158) <= fVar19) {
              fVar15 = *(float *)(param_1 + 0x158);
            }
            *(float *)(param_1 + 0x154) = fVar14;
            fVar14 = *(float *)(param_1 + 0x15c);
            if (*(float *)(param_1 + 0x15c) <= fVar16) {
              fVar14 = fVar16;
            }
            *(float *)(param_1 + 0x158) = fVar15;
            fVar16 = *(float *)(param_1 + 0x160);
            if (*(float *)(param_1 + 0x160) <= fVar18) {
              fVar16 = fVar18;
            }
            *(float *)(param_1 + 0x15c) = fVar14;
            fVar18 = *(float *)(param_1 + 0x164);
            if (*(float *)(param_1 + 0x164) <= fVar19) {
              fVar18 = fVar19;
            }
            *(float *)(param_1 + 0x160) = fVar16;
            *(float *)(param_1 + 0x164) = fVar18;
          }
        }
        fVar16 = pfVar12[0xe];
        fVar18 = (float)(int)(fVar16 * 0.15915494) * 6.2831855;
        if (ABS(fVar16) < ABS(fVar18)) {
          fVar18 = fVar16;
        }
        fVar17 = ABS(fVar6 * fVar17);
        fVar22 = ABS(fVar5 * fVar22);
        fVar23 = ABS(fVar7 * fVar23);
        if (fVar17 <= fVar22) {
          fVar17 = fVar22;
        }
        uVar10 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar10;
        uVar13 = uVar13 + 2;
        pfVar12[0xe] = fVar16 - fVar18;
        if (fVar17 <= fVar23) {
          fVar17 = fVar23;
        }
        if (fVar17 <= fVar24) {
          fVar17 = fVar24;
        }
        fVar24 = fVar17;
      } while ((int)uVar10 < *(int *)(param_1 + 0x128));
    }
    if (bVar8) {
      local_150 = CONCAT31(local_150._1_3_,1);
      *(float *)(param_1 + 0x150) = *(float *)(param_1 + 0x150) - fVar17;
      *(float *)(param_1 + 0x154) = *(float *)(param_1 + 0x154) - fVar17;
      *(float *)(param_1 + 0x158) = *(float *)(param_1 + 0x158) - fVar17;
      *(float *)(param_1 + 0x15c) = fVar17 + *(float *)(param_1 + 0x15c);
      *(ulonglong *)(param_1 + 0x160) =
           CONCAT44(fVar17 + *(float *)(param_1 + 0x164),fVar17 + *(float *)(param_1 + 0x160));
      *(undefined4 *)(param_1 + 0x168) = local_150;
    }
  }
  return;
}



// FUNCTION 142615a20 FUN_142615a20 body=62 status=ok
// SIG undefined FUN_142615a20(void)

void FUN_142615a20(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x640) != 0) {
    uVar1 = FUN_1425ffb40(param_1,*(undefined4 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x640) + 0x130) + 8));
    FUN_142681f80(*(undefined8 *)(param_1 + 0x640),uVar1);
    return;
  }
  return;
}



// FUNCTION 142615a60 FUN_142615a60 body=273 status=ok
// SIG undefined FUN_142615a60(void)

void FUN_142615a60(longlong *param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  LARGE_INTEGER local_res8 [4];
  
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
  QueryPerformanceCounter(local_res8);
  bVar2 = *(byte *)((longlong)param_1 + 0x71b);
  while ((bVar2 & 0x10) != 0) {
    FUN_1416b1810(0);
    bVar2 = *(byte *)((longlong)param_1 + 0x71b);
  }
  FUN_142602d20(param_1);
  lVar7 = param_1[0x24];
  if (lVar7 == 0) {
    lVar7 = FUN_1423407b0(param_1);
  }
  cVar5 = UWorld::IsGameWorld(lVar7);
  if (((cVar5 != '\0') && (param_1[200] != 0)) && (0 < (int)param_1[0x125])) {
    if ((*(byte *)((longlong)param_1 + 0x71a) & 1) == 0) {
      if (param_1[0xde] == 0) {
        return;
      }
      cVar5 = *(char *)(param_1[0xde] + 0x68);
    }
    else {
      cVar5 = *(char *)((longlong)param_1 + 0x71d);
    }
    if ((cVar5 == '\0') && (fVar1 = *(float *)(param_1[200] + 0x534), 0.0 < fVar1)) {
      iVar3 = *(int *)(param_1[0xde] + 0x78);
      iVar9 = 0;
      if (1 < iVar3) {
        pfVar8 = *(float **)(param_1[0xde] + 0x70);
        iVar4 = 1;
        do {
          iVar6 = iVar4;
          pfVar8 = pfVar8 + 1;
          if (fVar1 < *pfVar8) break;
          iVar4 = iVar6 + 1;
          iVar9 = iVar6;
        } while (iVar6 + 1 < iVar3);
      }
      if (iVar9 != (int)param_1[0xf2]) {
        (**(code **)(*param_1 + 0x9e0))(param_1);
      }
    }
  }
  return;
}



// FUNCTION 142615b80 UpdateLocation body=92 status=ok
// SIG undefined UpdateLocation(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AEmitterCameraLensEffectBase::UpdateLocation
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined1 auStack_78 [32];
  uint local_58;
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = param_4;
  FUN_142605960(local_48,param_1,param_2,param_3);
  local_58 = local_58 & 0xffffff00;
  FUN_14223d270(param_1,local_48,0,0);
  return;
}



// FUNCTION 142615be0 FUN_142615be0 body=573 status=ok
// SIG undefined FUN_142615be0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142615be0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_488 [32];
  undefined1 local_468 [24];
  longlong local_450;
  longlong local_430;
  longlong local_408;
  longlong local_3e0;
  longlong local_3b8;
  longlong local_390;
  longlong local_368;
  longlong local_318;
  longlong local_2e0;
  longlong local_290;
  longlong local_258;
  longlong local_218;
  longlong local_1f0;
  longlong local_1c8;
  longlong local_188;
  longlong local_160;
  longlong local_128;
  longlong local_100;
  longlong local_d8;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x40));
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))();
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x48));
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar4 = **(longlong **)(param_1 + 0x40);
      if (*(longlong **)(lVar4 + 0x48) != (longlong *)0x0) {
        cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x388))();
        if (cVar2 != '\0') {
          FParticleEmitterBuildInfo::FParticleEmitterBuildInfo(local_468);
          (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x380))
                    (*(longlong **)(lVar4 + 0x48),local_468);
          if (local_d8 != 0) {
            FMemory::Free();
          }
          if (local_100 != 0) {
            FMemory::Free();
          }
          if (local_128 != 0) {
            FMemory::Free();
          }
          if (local_160 != 0) {
            FMemory::Free();
          }
          if (local_188 != 0) {
            FMemory::Free();
          }
          if (local_1c8 != 0) {
            FMemory::Free();
          }
          if (local_1f0 != 0) {
            FMemory::Free();
          }
          if (local_218 != 0) {
            FMemory::Free();
          }
          if (local_258 != 0) {
            FMemory::Free();
          }
          if (local_290 != 0) {
            FMemory::Free();
          }
          if (local_2e0 != 0) {
            FMemory::Free();
          }
          if (local_318 != 0) {
            FMemory::Free();
          }
          if (local_368 != 0) {
            FMemory::Free();
          }
          if (local_390 != 0) {
            FMemory::Free();
          }
          if (local_3b8 != 0) {
            FMemory::Free();
          }
          if (local_3e0 != 0) {
            FMemory::Free();
          }
          if (local_408 != 0) {
            FMemory::Free();
          }
          if (local_430 != 0) {
            FMemory::Free();
          }
          if (local_450 != 0) {
            FMemory::Free();
          }
        }
        (**(code **)(**(longlong **)(lVar4 + 0x48) + 0x398))(*(longlong **)(lVar4 + 0x48),param_1);
      }
      FUN_1425fd8c0(param_1);
    }
  }
  return;
}



// FUNCTION 142615e20 FUN_142615e20 body=1376 status=ok
// SIG undefined FUN_142615e20(void)

void FUN_142615e20(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int local_res8;
  longlong local_res10;
  
  iVar12 = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x60,0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x70,0);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x80,0);
  }
  plVar1 = (longlong *)(param_1 + 0x90);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  plVar11 = (longlong *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar11,0);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(int *)(param_1 + 0xc4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0xb8,0);
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 200,0);
  }
  local_res8 = -1;
  if (0 < *(int *)(param_1 + 0x40)) {
    local_res10 = 0;
    do {
      lVar10 = *(longlong *)(local_res10 + *(longlong *)(param_1 + 0x38));
      iVar7 = local_res8;
      if (lVar10 != 0) {
        uVar6 = *(uint *)(lVar10 + 0x28);
        if ((uVar6 & 1) != 0) {
          iVar2 = *(int *)(param_1 + 0x78);
          *(int *)(param_1 + 0x78) = iVar2 + 1;
          if (*(int *)(param_1 + 0x7c) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x70,iVar2);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 8) = lVar10;
          uVar6 = *(uint *)(lVar10 + 0x28);
        }
        if ((uVar6 & 6) != 0) {
          iVar2 = *(int *)(param_1 + 0x88);
          *(int *)(param_1 + 0x88) = iVar2 + 1;
          if (*(int *)(param_1 + 0x8c) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x80,iVar2);
          }
          *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar2 * 8) = lVar10;
        }
        uVar6 = *(uint *)(lVar10 + 0x30);
        if ((uVar6 & 1) != 0) {
          iVar2 = *(int *)(param_1 + 0xc0);
          *(int *)(param_1 + 0xc0) = iVar2 + 1;
          if (*(int *)(param_1 + 0xc4) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xb8,iVar2);
          }
          *(longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar2 * 8) = lVar10;
          uVar6 = *(uint *)(lVar10 + 0x30);
        }
        if ((uVar6 & 2) != 0) {
          iVar2 = *(int *)(param_1 + 0xd0);
          *(int *)(param_1 + 0xd0) = iVar2 + 1;
          if (*(int *)(param_1 + 0xd4) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 200,iVar2);
          }
          *(longlong *)(*(longlong *)(param_1 + 200) + (longlong)iVar2 * 8) = lVar10;
        }
        lVar8 = FUN_1429cebe0();
        if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          *(longlong *)(param_1 + 0x48) = lVar10;
          iVar7 = iVar12;
          if ((*(byte *)(lVar10 + 0x28) & 3) != 0) {
            iVar7 = local_res8;
          }
        }
        else {
          lVar8 = FUN_1429cfda0();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
            iVar2 = *(int *)(param_1 + 0x68);
            lVar8 = (longlong)iVar2;
            *(int *)(param_1 + 0x68) = iVar2 + 1;
            if (*(int *)(param_1 + 0x6c) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x60,iVar2);
            }
            lVar9 = *(longlong *)(param_1 + 0x60);
          }
          else {
            lVar8 = FUN_1429cad40();
            if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) {
              lVar8 = FUN_1429c9050();
              if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                *(longlong *)(param_1 + 0x58) = lVar10;
              }
              else {
                lVar8 = UXPrimaryDataAsset::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  iVar2 = *(int *)(param_1 + 0xa8);
                  lVar8 = (longlong)iVar2;
                  *(int *)(param_1 + 0xa8) = iVar2 + 1;
                  if (*(int *)(param_1 + 0xac) < iVar2 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar11,iVar2)
                    ;
                  }
                  lVar9 = *plVar11;
                  goto LAB_14261617a;
                }
              }
              goto LAB_142616182;
            }
            iVar2 = *(int *)(param_1 + 0x98);
            lVar8 = (longlong)iVar2;
            *(int *)(param_1 + 0x98) = iVar2 + 1;
            if (*(int *)(param_1 + 0x9c) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
            }
            lVar9 = *plVar1;
          }
LAB_14261617a:
          *(longlong *)(lVar9 + lVar8 * 8) = lVar10;
        }
      }
LAB_142616182:
      local_res8 = iVar7;
      iVar12 = iVar12 + 1;
      local_res10 = local_res10 + 8;
    } while (iVar12 < *(int *)(param_1 + 0x40));
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    for (plVar11 = plVar1; plVar11 != plVar1 + *(int *)(param_1 + 0x40); plVar11 = plVar11 + 1) {
      if (*plVar11 == *(longlong *)(param_1 + 0x58)) {
        iVar12 = (int)((longlong)plVar11 - (longlong)plVar1 >> 3);
        if (iVar12 != -1) {
          _guard_xfg_dispatch_icall_nop
                    (plVar1 + iVar12,plVar1 + iVar12 + 1,
                     (longlong)((*(int *)(param_1 + 0x40) - iVar12) + -1) << 3);
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        }
        break;
      }
    }
    iVar12 = *(int *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    *(int *)(param_1 + 0x40) = iVar12 + 1;
    if (*(int *)(param_1 + 0x44) < iVar12 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x38,iVar12);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)*(void **)(param_1 + 0x38) + 8),*(void **)(param_1 + 0x38),
               (longlong)iVar12 << 3);
    **(undefined8 **)(param_1 + 0x38) = uVar3;
  }
  if (local_res8 != -1) {
    iVar12 = *(int *)(param_1 + 0x40);
    iVar7 = (iVar12 - local_res8) + -1;
    if (iVar7 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x38) + (longlong)local_res8 * 8),
                 (void *)(*(longlong *)(param_1 + 0x38) + (longlong)(local_res8 + 1) * 8),
                 (longlong)iVar7 << 3);
      iVar12 = *(int *)(param_1 + 0x40);
    }
    *(int *)(param_1 + 0x40) = iVar12 + -1;
    TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x38);
  }
  lVar10 = *(longlong *)(param_1 + 0x48);
  if (lVar10 != 0) {
    lVar8 = UTextureRenderTargetCube::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((((bVar4) && (0 < *(int *)(lVar10 + 0x48))) && (**(longlong **)(lVar10 + 0x40) != 0)) &&
       ((cVar5 = FUN_142820890(**(longlong **)(lVar10 + 0x40),0,0xffffffff), cVar5 != '\0' &&
        (lVar8 = *(longlong *)(param_1 + 0x20), lVar8 != 0)))) {
      lVar9 = UEnvQueryTest_Random::StaticClass();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (((bVar4) && ((*(byte *)(lVar10 + 0x60) & 1) == 0)) &&
         (lVar10 = UStaticMesh::GetMaterial
                             (**(longlong **)(lVar10 + 0x40),
                              **(undefined4 **)
                                (*(longlong *)
                                  **(undefined8 **)(**(longlong **)(lVar10 + 0x40) + 0x38) + 0x478))
         , lVar10 != 0)) {
        *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38) = lVar10;
      }
    }
  }
  return;
}



// FUNCTION 142616380 FUN_142616380 body=172 status=ok
// SIG undefined FUN_142616380(void)

void FUN_142616380(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  DWORD DVar2;
  LARGE_INTEGER local_res20;
  
  if (param_3 == '\0') {
    cVar1 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar1 == '\0') && (DAT_1468c21ae != '\0')) {
      DVar2 = GetCurrentThreadId();
      if (DVar2 != DAT_1468c21c0) goto LAB_1426163cd;
    }
  }
  FFXAsyncBatcher::Flush(&DAT_146b04fd8);
LAB_1426163cd:
  QueryPerformanceCounter(&local_res20);
  if ((*(byte *)(param_1 + 0x71b) & 0x10) != 0) {
    if (param_3 != '\0') {
      do {
        FUN_1416b1810(0);
      } while ((*(byte *)(param_1 + 0x71b) & 0x10) != 0);
      FUN_142602d20(param_1);
      return;
    }
    do {
      FUN_1416b1810(0);
    } while ((*(byte *)(param_1 + 0x71b) & 0x10) != 0);
  }
  FUN_142602d20(param_1);
  return;
}



// FUNCTION 142616440 FUN_142616440 body=598 status=ok
// SIG undefined FUN_142616440(void)

longlong * FUN_142616440(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = 0;
  param_1[1] = 1;
  TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,0);
  puVar3 = (undefined8 *)*param_1;
  *puVar3 = L"CameraRight";
  puVar3[1] = &DAT_143f3eda8;
  *(undefined4 *)(puVar3 + 2) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = 4;
  *(undefined4 *)(puVar3 + 3) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = 1;
  *(undefined4 *)(puVar3 + 4) = 4;
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"CameraUp";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x10;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"ScreenAlignment";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x20;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"RenderAxisOption";
  puVar3[1] = &DAT_143f3eda8;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar1 = 0x30;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[3] = 1;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar1 = 1;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  iVar2 = (int)param_1[1];
  lVar5 = (longlong)iVar2;
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
  }
  lVar4 = *param_1;
  puVar3 = (undefined8 *)(lVar4 + lVar5 * 0x30);
  *puVar3 = L"PointsOffset";
  puVar3[1] = &DAT_143f3eda8;
  puVar3 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x30);
  *puVar3 = 0x300000034;
  puVar3[1] = 0x100000000;
  puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar5 * 0x30);
  *puVar3 = 1;
  puVar3[1] = 0;
  return param_1;
}



// FUNCTION 1426166a0 `scalar_deleting_destructor' body=112 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FParticleCurveTexture>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145138e18;
  FRenderResource::ReleaseResource();
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  FTexelAllocator::~FTexelAllocator(param_1 + 8);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 7);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 142616710 FUN_142616710 body=239 status=ok
// SIG undefined FUN_142616710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_142616710(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138 [16];
  undefined2 local_128;
  undefined4 local_126;
  undefined2 local_122 [125];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  local_28 = 1;
  TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_128,0);
  uVar1 = local_28;
  local_122[0] = 1;
  lVar3 = (longlong)(int)local_28;
  local_128 = 0;
  local_126 = 0x40008;
  iVar2 = (int)local_28 + 1;
  local_28 = CONCAT44(local_28._4_4_,iVar2);
  if (local_28._4_4_ < iVar2) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_128,uVar1 & 0xffffffff);
  }
  (&local_128)[lVar3 * 4] = 1;
  *(undefined4 *)((longlong)local_122 + (lVar3 * 2 + -1) * 4) = 0x80102;
  *(undefined2 *)((longlong)local_122 + lVar3 * 2 * 4) = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_138,&DAT_146ab6e78,&local_128);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_138);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_138);
  return;
}



// FUNCTION 142616800 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145138210;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142616850 FUN_142616850 body=427 status=ok
// SIG undefined FUN_142616850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_142616850(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  undefined2 local_138;
  undefined4 local_136;
  undefined2 local_132 [125];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_38 = 1;
  TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,0);
  lVar3 = (longlong)(int)local_38;
  local_138 = 0;
  local_136 = 0x480004;
  local_132[0] = 1;
  iVar1 = (int)local_38 + 1;
  if (local_38._4_4_ < iVar1) {
    uVar2 = local_38 & 0xffffffff;
    local_38._0_4_ = iVar1;
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,uVar2);
    iVar1 = (int)local_38;
  }
  local_38._0_4_ = iVar1;
  (&local_138)[lVar3 * 4] = 0x1000;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x480104;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 1;
  iVar1 = (int)local_38;
  lVar3 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar1);
  }
  (&local_138)[lVar3 * 4] = 0x2000;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x480204;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 1;
  iVar1 = (int)local_38;
  lVar3 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar1);
  }
  (&local_138)[lVar3 * 4] = 0x3000;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x480304;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 1;
  iVar1 = (int)local_38;
  lVar3 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar1);
  }
  (&local_138)[lVar3 * 4] = 0x4000;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x480402;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 1;
  iVar1 = (int)local_38;
  lVar3 = (longlong)(int)local_38;
  local_38._0_4_ = (int)local_38 + 1;
  if (local_38._4_4_ < (int)local_38) {
    TArray<FTTLFxParamWeak_*,TFixedAllocator<32>_>::ResizeGrow(&local_138,iVar1);
  }
  (&local_138)[lVar3 * 4] = 1;
  *(undefined4 *)((longlong)local_132 + (lVar3 * 2 + -1) * 4) = 0x80502;
  *(undefined2 *)((longlong)local_132 + lVar3 * 2 * 4) = 0;
  (**(code **)(*DAT_146ab6358 + 0x508))(DAT_146ab6358,local_148,&DAT_146ab6e78,&local_138);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_148);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_148);
  return;
}



// FUNCTION 142616a00 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145138250;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142616a50 `scalar_deleting_destructor' body=79 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TGlobalResource<FNullColorVertexBuffer>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1451382d0;
  FRenderResource::ReleaseResource();
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 142616aa0 FUN_142616aa0 body=188 status=ok
// SIG undefined FUN_142616aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142616aa0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 *local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_88 = 1;
  local_30 = 0;
  uStack_74 = _DAT_1464aa710;
  uVar1 = uStack_74;
  uStack_6c = uRam00000001464aa718;
  uVar2 = uStack_6c;
  uStack_6c._4_4_ = (undefined4)((ulonglong)uRam00000001464aa718 >> 0x20);
  local_38 = uStack_6c._4_4_;
  local_90 = param_1 + 0x38;
  local_28 = 0;
  local_98 = param_1 + 0x30;
  local_20 = 0;
  local_a0 = &local_58;
  local_a8 = 0;
  local_b0 = 0x2000001;
  local_b8 = 0;
  local_78 = 1;
  uStack_74._0_4_ = (undefined4)_DAT_1464aa710;
  uStack_74._4_4_ = (undefined4)((ulonglong)_DAT_1464aa710 >> 0x20);
  uStack_6c._0_4_ = (undefined4)uRam00000001464aa718;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 1;
  uStack_44 = (undefined4)uStack_74;
  uStack_40 = uStack_74._4_4_;
  uStack_3c = (undefined4)uStack_6c;
  uStack_74 = uVar1;
  uStack_6c = uVar2;
  FUN_1404a2100(0x200,0x200,2,1);
  return;
}



// FUNCTION 142616b60 Serialize body=74 status=ok
// SIG undefined Serialize(void)

undefined1 FParticleTileVS::Serialize(longlong param_1,undefined8 param_2)

{
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0a40(param_2,param_1 + 0xc4);
  FUN_1419e0a40(param_2,param_1 + 0xca);
  return 0;
}



// FUNCTION 142616bb0 FUN_142616bb0 body=58 status=ok
// SIG undefined FUN_142616bb0(void)

void FUN_142616bb0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145138d20;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_145138d68;
  }
  return;
}



// FUNCTION 142616c90 Serialize body=353 status=ok
// SIG undefined Serialize(void)

undefined1 TParticleSimulationPS<1>::Serialize(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1419e0b60(param_2,param_1 + 0xc0);
  FUN_1419e0b60(param_2,param_1 + 0xc4);
  FUN_1419e0b60(param_2,param_1 + 200);
  FUN_1419e0b60(param_2,param_1 + 0xcc);
  FUN_1419e0b60(param_2,param_1 + 0xd0);
  FUN_1419e0b60(param_2,param_1 + 0xd4);
  FUN_1419e0b60(param_2,param_1 + 0xd8);
  FUN_1419e0b60(param_2,param_1 + 0xdc);
  FUN_1419e0b60(param_2,param_1 + 0xe0);
  FUN_1419e0b60(param_2,param_1 + 0xe4);
  lVar1 = param_1 + 0xf8;
  lVar2 = 4;
  do {
    FUN_1419e0b60(param_2,lVar1 + -0x10);
    FUN_1419e0b60(param_2,lVar1);
    lVar1 = lVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1419e0a40(param_2,param_1 + 0x126);
  FUN_1419e0a40(param_2,param_1 + 0x108);
  FUN_1419e0a40(param_2,param_1 + 0x10e);
  FUN_1419e0a40(param_2,param_1 + 0x114);
  FUN_1419e0a40(param_2,param_1 + 0x11a);
  FUN_1419e0a40(param_2,param_1 + 0x120);
  ::operator<<(param_2,param_1 + 300);
  return 0;
}



// FUNCTION 142616e00 FUN_142616e00 body=292 status=ok
// SIG undefined FUN_142616e00(void)

undefined8 * FUN_142616e00(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  FUN_142628870(param_1 + 0x18,0);
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  FUN_142628590(param_1 + 0x1c,0);
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  FUN_142628420(param_1 + 0x20,0);
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  FUN_142628700(param_1 + 0x24,0);
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  FUN_1426282b0(param_1 + 0x28,0);
  return param_1;
}



// FUNCTION 142616f30 FUN_142616f30 body=1562 status=ok
// SIG undefined FUN_142616f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142616f30(longlong param_1,undefined8 *param_2,int param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,char param_10,char param_11)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  ushort *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined *local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60 [5];
  
  lVar9 = DAT_146b057f8;
  plVar21 = (longlong *)0x0;
  local_98 = local_98 & 0xffffffff00000000;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  local_68 = 4;
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    plVar10 = (longlong *)&DAT_00000004;
    if (DVar7 != DAT_1468c21c0) goto LAB_142616fac;
  }
  plVar10 = plVar21;
LAB_142616fac:
  if (*(int *)((longlong)plVar10 + lVar9) != 0) {
    local_98 = 0;
    local_60[0] = 0;
    local_60[1] = 0;
    FScopedGPUStatEvent::Begin(local_60,param_1,&DAT_146b05770,&local_98);
    if ((*(float *)(DAT_146b057b0 + 4) <= 0.0) || (bVar5 = false, param_10 != '\0')) {
      bVar5 = true;
    }
    bVar4 = false;
    if (param_11 == '\0') {
      bVar4 = bVar5;
    }
    uVar8 = (longlong)*(int *)(param_5 + 0x228) ^ 1;
    if (!bVar4) {
      uVar8 = (longlong)*(int *)(param_5 + 0x228);
    }
    local_88 = param_5 + 0xf0;
    local_80 = param_5 + 0xb0;
    lVar9 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
    lVar13 = 0;
    local_78 = &DAT_146b05c10;
    local_70 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&local_98,&local_78);
    if ((float)local_98 != -NAN) {
      lVar13 = (longlong)(int)(float)local_98 * 0x20 + *(longlong *)(lVar9 + 0x38);
    }
    plVar10 = (longlong *)(lVar13 + 0x10);
    if (lVar13 == 0) {
      plVar10 = plVar21;
    }
    lVar9 = *plVar10;
    lVar13 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
    plVar10 = (longlong *)0x0;
    local_78 = &DAT_146b06750;
    local_70 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar13 + 0x38),&local_98,&local_78);
    plVar14 = plVar10;
    if ((float)local_98 != -NAN) {
      plVar14 = (longlong *)((longlong)(int)(float)local_98 * 0x20 + *(longlong *)(lVar13 + 0x38));
    }
    plVar17 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar17 = plVar10;
    }
    lVar13 = *plVar17;
    *param_2 = DAT_146534538;
    if (lVar9 == 0) {
      local_90 = 0;
      plVar21 = (longlong *)0x1;
    }
    else {
      lVar20 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar20 + 0x28) == '\0') {
        FUN_1419f3850(lVar20);
      }
      plVar10 = *(longlong **)(lVar20 + 0x38);
    }
    uVar11 = 0;
    param_2[1] = plVar10;
    if (plVar21 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
    }
    bVar5 = false;
    if (lVar13 == 0) {
      bVar5 = true;
      local_90 = 0;
    }
    else {
      lVar20 = *(longlong *)(lVar13 + 0x48);
      if (*(char *)(lVar20 + 0x28) == '\0') {
        FUN_1419f3850(lVar20);
      }
      uVar11 = *(undefined8 *)(lVar20 + 0x40);
    }
    param_2[4] = uVar11;
    if (bVar5) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
    }
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
    FUN_141ed6ac0(param_1,param_2,2,1);
    uVar22 = local_80;
    TParticleSimulationPS<1>::SetParameters
              (lVar13,param_1,uVar8 * 0x58 + param_5,local_88,local_80,param_6,param_3,param_7,
               param_8,param_9);
    local_90 = (longlong)(int)param_4[1];
    if (0 < local_90) {
      local_78 = (undefined *)(ulonglong)_tls_index;
      local_80 = 0;
      do {
        lVar20 = *param_4;
        lVar2 = *(longlong *)(lVar9 + 0x48);
        uVar11 = *(undefined8 *)(local_80 + lVar20);
        local_88 = lVar20;
        if (*(char *)(lVar2 + 0x28) == '\0') {
          FUN_1419f3850(lVar2);
        }
        uVar3 = *(undefined8 *)(lVar2 + 0x38);
        if (*(short *)(lVar9 + 0xc2) != 0) {
          uVar1 = *(ushort *)(lVar9 + 0xc0);
          puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
          if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
            FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
            puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar12 = puVar15 + 5;
          }
          *(undefined8 **)(param_1 + 0x30) = puVar12;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          **(undefined8 **)(param_1 + 8) = puVar15;
          *(undefined8 **)(param_1 + 8) = puVar15 + 1;
          puVar15[1] = 0;
          *(uint *)(puVar15 + 3) = (uint)uVar1;
          *puVar15 = &PTR_LAB_144165218;
          puVar15[2] = uVar3;
          puVar15[4] = uVar11;
          lVar20 = local_88;
        }
        uVar22 = uVar22 & 0xffffffff00000000;
        local_98._0_4_ = 4.0 / (float)DAT_146534410;
        FUN_1404986d0(param_1,uVar3,lVar9 + 0xc4,&local_98,uVar22);
        uVar22 = uVar22 & 0xffffffff00000000;
        local_98 = CONCAT44(local_98._4_4_,4.0 / (float)DAT_146534414);
        FUN_1404986d0(param_1,uVar3,lVar9 + 0xca,&local_98,uVar22);
        uVar8 = local_80;
        lVar2 = *(longlong *)(lVar13 + 0x48);
        uVar11 = *(undefined8 *)(local_80 + 8 + lVar20);
        if (*(char *)(lVar2 + 0x28) == '\0') {
          FUN_1419f3850();
        }
        lVar16 = 0;
        lVar2 = *(longlong *)(lVar2 + 0x40);
        local_88 = lVar2;
        if (0 < *(int *)(lVar13 + 0x10)) {
          do {
            if (*(undefined **)(*(longlong *)(lVar13 + 8) + lVar16 * 8) == &DAT_146b05af0) {
              if (lVar16 != -1) {
                puVar19 = *(undefined4 **)(*(longlong *)(lVar13 + 0x18) + lVar16 * 8);
                *puVar19 = *(undefined4 *)(lVar13 + 0xb8);
                goto LAB_14261739e;
              }
              break;
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)(lVar13 + 0x10));
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)local_78 * 8) +
                     0x38) < DAT_146b06db8) &&
           (_Init_thread_header(&DAT_146b06db8), DAT_146b06db8 == -1)) {
          _DAT_146b06db0 = 0;
          _DAT_146b06db4 = 0;
          DAT_146b06db6 = 0;
          _Init_thread_footer(&DAT_146b06db8);
        }
        puVar19 = (undefined4 *)&DAT_146b06db0;
LAB_14261739e:
        SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_1,lVar2,puVar19,uVar11);
        uVar22 = CONCAT71((int7)(uVar22 >> 8),param_10);
        FParticlePerFrameSimulationShaderParameters::Set<FRHIPixelShader_*>
                  (lVar13 + 0x108,param_1,&local_88,uVar8 + 0x10 + lVar20,uVar22);
        FUN_142632570(lVar13,param_1,uVar8 + 0x50 + lVar20,uVar8 + 0x68 + lVar20);
        FUN_142622630(param_1);
        local_80 = uVar8 + 0x90;
        local_90 = local_90 + -1;
      } while (local_90 != 0);
      local_90 = 0;
    }
    lVar9 = *(longlong *)(lVar13 + 0x48);
    if (*(char *)(lVar9 + 0x28) == '\0') {
      FUN_1419f3850(lVar9);
    }
    uVar11 = *(undefined8 *)(lVar9 + 0x40);
    puVar18 = (ushort *)(lVar13 + 0xe8);
    lVar9 = 4;
    do {
      if (puVar18[1] != 0) {
        uVar1 = *puVar18;
        puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar15 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30);
          puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar12;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar15;
        *(undefined8 **)(param_1 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_144d8e600;
        puVar15[2] = uVar11;
        *(uint *)(puVar15 + 3) = (uint)uVar1;
        puVar15[4] = 0;
        lVar9 = local_68;
      }
      puVar18 = puVar18 + 2;
      lVar9 = lVar9 + -1;
      local_68 = lVar9;
    } while (lVar9 != 0);
    if (local_60[0] != 0) {
      FScopedGPUStatEvent::End(local_60);
    }
  }
  return;
}



// FUNCTION 142617550 FUN_142617550 body=1562 status=ok
// SIG undefined FUN_142617550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142617550(longlong param_1,undefined8 *param_2,int param_3,longlong *param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,char param_10,char param_11)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  ushort *puVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined *local_78;
  undefined4 local_70;
  longlong local_68;
  longlong local_60 [5];
  
  lVar9 = DAT_146b057f8;
  plVar21 = (longlong *)0x0;
  local_98 = local_98 & 0xffffffff00000000;
  cVar6 = FUN_1415ad720(&DAT_1468e2448);
  local_68 = 4;
  if ((cVar6 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar7 = GetCurrentThreadId();
    plVar10 = (longlong *)&DAT_00000004;
    if (DVar7 != DAT_1468c21c0) goto LAB_1426175cc;
  }
  plVar10 = plVar21;
LAB_1426175cc:
  if (*(int *)((longlong)plVar10 + lVar9) != 0) {
    local_98 = 0;
    local_60[0] = 0;
    local_60[1] = 0;
    FScopedGPUStatEvent::Begin(local_60,param_1,&DAT_146b05770,&local_98);
    if ((*(float *)(DAT_146b057b0 + 4) <= 0.0) || (bVar5 = false, param_10 != '\0')) {
      bVar5 = true;
    }
    bVar4 = false;
    if (param_11 == '\0') {
      bVar4 = bVar5;
    }
    uVar8 = (longlong)*(int *)(param_5 + 0x228) ^ 1;
    if (!bVar4) {
      uVar8 = (longlong)*(int *)(param_5 + 0x228);
    }
    local_88 = param_5 + 0xf0;
    local_80 = param_5 + 0xb0;
    lVar9 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
    lVar13 = 0;
    local_78 = &DAT_146b05c10;
    local_70 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar9 + 0x38),&local_98,&local_78);
    if ((float)local_98 != -NAN) {
      lVar13 = (longlong)(int)(float)local_98 * 0x20 + *(longlong *)(lVar9 + 0x38);
    }
    plVar10 = (longlong *)(lVar13 + 0x10);
    if (lVar13 == 0) {
      plVar10 = plVar21;
    }
    lVar9 = *plVar10;
    lVar13 = FUN_1419ef210((&DAT_1464c9c48)[param_3]);
    plVar10 = (longlong *)0x0;
    local_78 = &DAT_146b068a0;
    local_70 = 0;
    TSet<TTuple<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>_>,TDefaultMapHashableKeyFuncs<TShaderTypePermutation<FShaderType>,TRefCountPtr<FShader>,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(lVar13 + 0x38),&local_98,&local_78);
    plVar14 = plVar10;
    if ((float)local_98 != -NAN) {
      plVar14 = (longlong *)((longlong)(int)(float)local_98 * 0x20 + *(longlong *)(lVar13 + 0x38));
    }
    plVar17 = plVar14 + 2;
    if (plVar14 == (longlong *)0x0) {
      plVar17 = plVar10;
    }
    lVar13 = *plVar17;
    *param_2 = DAT_146534538;
    if (lVar9 == 0) {
      local_90 = 0;
      plVar21 = (longlong *)0x1;
    }
    else {
      lVar20 = *(longlong *)(lVar9 + 0x48);
      if (*(char *)(lVar20 + 0x28) == '\0') {
        FUN_1419f3850(lVar20);
      }
      plVar10 = *(longlong **)(lVar20 + 0x38);
    }
    uVar11 = 0;
    param_2[1] = plVar10;
    if (plVar21 != (longlong *)0x0) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
    }
    bVar5 = false;
    if (lVar13 == 0) {
      bVar5 = true;
      local_90 = 0;
    }
    else {
      lVar20 = *(longlong *)(lVar13 + 0x48);
      if (*(char *)(lVar20 + 0x28) == '\0') {
        FUN_1419f3850(lVar20);
      }
      uVar11 = *(undefined8 *)(lVar20 + 0x40);
    }
    param_2[4] = uVar11;
    if (bVar5) {
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_90);
    }
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
    FUN_141ed6ac0(param_1,param_2,2,1);
    uVar22 = local_80;
    TParticleSimulationPS<2>::SetParameters
              (lVar13,param_1,uVar8 * 0x58 + param_5,local_88,local_80,param_6,param_3,param_7,
               param_8,param_9);
    local_90 = (longlong)(int)param_4[1];
    if (0 < local_90) {
      local_78 = (undefined *)(ulonglong)_tls_index;
      local_80 = 0;
      do {
        lVar20 = *param_4;
        lVar2 = *(longlong *)(lVar9 + 0x48);
        uVar11 = *(undefined8 *)(local_80 + lVar20);
        local_88 = lVar20;
        if (*(char *)(lVar2 + 0x28) == '\0') {
          FUN_1419f3850(lVar2);
        }
        uVar3 = *(undefined8 *)(lVar2 + 0x38);
        if (*(short *)(lVar9 + 0xc2) != 0) {
          uVar1 = *(ushort *)(lVar9 + 0xc0);
          puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
          if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
            FMemStackBase::AllocateNewChunk(param_1 + 0x30,0x30);
            puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
            puVar12 = puVar15 + 5;
          }
          *(undefined8 **)(param_1 + 0x30) = puVar12;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          **(undefined8 **)(param_1 + 8) = puVar15;
          *(undefined8 **)(param_1 + 8) = puVar15 + 1;
          puVar15[1] = 0;
          *(uint *)(puVar15 + 3) = (uint)uVar1;
          *puVar15 = &PTR_LAB_144165218;
          puVar15[2] = uVar3;
          puVar15[4] = uVar11;
          lVar20 = local_88;
        }
        uVar22 = uVar22 & 0xffffffff00000000;
        local_98._0_4_ = 4.0 / (float)DAT_146534410;
        FUN_1404986d0(param_1,uVar3,lVar9 + 0xc4,&local_98,uVar22);
        uVar22 = uVar22 & 0xffffffff00000000;
        local_98 = CONCAT44(local_98._4_4_,4.0 / (float)DAT_146534414);
        FUN_1404986d0(param_1,uVar3,lVar9 + 0xca,&local_98,uVar22);
        uVar8 = local_80;
        lVar2 = *(longlong *)(lVar13 + 0x48);
        uVar11 = *(undefined8 *)(local_80 + 8 + lVar20);
        if (*(char *)(lVar2 + 0x28) == '\0') {
          FUN_1419f3850();
        }
        lVar16 = 0;
        lVar2 = *(longlong *)(lVar2 + 0x40);
        local_88 = lVar2;
        if (0 < *(int *)(lVar13 + 0x10)) {
          do {
            if (*(undefined **)(*(longlong *)(lVar13 + 8) + lVar16 * 8) == &DAT_146b05af0) {
              if (lVar16 != -1) {
                puVar19 = *(undefined4 **)(*(longlong *)(lVar13 + 0x18) + lVar16 * 8);
                *puVar19 = *(undefined4 *)(lVar13 + 0xb8);
                goto LAB_1426179be;
              }
              break;
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 < *(int *)(lVar13 + 0x10));
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (longlong)local_78 * 8) +
                     0x38) < DAT_146b06db8) &&
           (_Init_thread_header(&DAT_146b06db8), DAT_146b06db8 == -1)) {
          _DAT_146b06db0 = 0;
          _DAT_146b06db4 = 0;
          DAT_146b06db6 = 0;
          _Init_thread_footer(&DAT_146b06db8);
        }
        puVar19 = (undefined4 *)&DAT_146b06db0;
LAB_1426179be:
        SetUniformBufferParameter<FRHIPixelShader_*,FRHICommandList>(param_1,lVar2,puVar19,uVar11);
        uVar22 = CONCAT71((int7)(uVar22 >> 8),param_10);
        FParticlePerFrameSimulationShaderParameters::Set<FRHIPixelShader_*>
                  (lVar13 + 0x108,param_1,&local_88,uVar8 + 0x10 + lVar20,uVar22);
        FUN_142632570(lVar13,param_1,uVar8 + 0x50 + lVar20,uVar8 + 0x68 + lVar20);
        FUN_142622630(param_1);
        local_80 = uVar8 + 0x90;
        local_90 = local_90 + -1;
      } while (local_90 != 0);
      local_90 = 0;
    }
    lVar9 = *(longlong *)(lVar13 + 0x48);
    if (*(char *)(lVar9 + 0x28) == '\0') {
      FUN_1419f3850(lVar9);
    }
    uVar11 = *(undefined8 *)(lVar9 + 0x40);
    puVar18 = (ushort *)(lVar13 + 0xe8);
    lVar9 = 4;
    do {
      if (puVar18[1] != 0) {
        uVar1 = *puVar18;
        puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
        puVar12 = puVar15 + 5;
        if (*(undefined8 **)(param_1 + 0x38) < puVar12) {
          FMemStackBase::AllocateNewChunk(param_1 + 0x30);
          puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + 7U & 0xfffffffffffffff8);
          puVar12 = puVar15 + 5;
        }
        *(undefined8 **)(param_1 + 0x30) = puVar12;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        **(undefined8 **)(param_1 + 8) = puVar15;
        *(undefined8 **)(param_1 + 8) = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &PTR_LAB_144d8e600;
        puVar15[2] = uVar11;
        *(uint *)(puVar15 + 3) = (uint)uVar1;
        puVar15[4] = 0;
        lVar9 = local_68;
      }
      puVar18 = puVar18 + 2;
      lVar9 = lVar9 + -1;
      local_68 = lVar9;
    } while (lVar9 != 0);
    if (local_60[0] != 0) {
      FScopedGPUStatEvent::End(local_60);
    }
  }
  return;
}


