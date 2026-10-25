// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141fd3930 FUN_141fd3930 body=108 status=ok
// SIG undefined FUN_141fd3930(void)

undefined8 * FUN_141fd3930(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *param_1 = &PTR__scalar_deleting_destructor__144f46330;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141fd39a0 FUN_141fd39a0 body=120 status=ok
// SIG undefined FUN_141fd39a0(void)

undefined8 * FUN_141fd39a0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x20] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x110);
  }
  return param_1;
}



// FUNCTION 141fd3a20 FUN_141fd3a20 body=121 status=ok
// SIG undefined FUN_141fd3a20(void)

undefined8 * FUN_141fd3a20(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_1408f9af0(param_1 + 6);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144f1b030;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141fd3aa0 FUN_141fd3aa0 body=72 status=ok
// SIG undefined FUN_141fd3aa0(void)

undefined8 * FUN_141fd3aa0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141fd3af0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FMovieSceneAccumulatedBlendState::TTokenEntry<F3DTransformTrackToken>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TTokenEntry<F3DTransformTrackToken>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141fd3b30 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FMovieSceneAccumulatedBlendState::TTokenEntry<MovieScene::FBlendedAnimation>::
_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~TTokenEntry<MovieScene::FBlendedAnimation>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141fd3b70 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FMovieSceneAccumulatedBlendState::TTokenEntry<FTransform>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  ~TTokenEntry<FTransform>();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141fd3bb0 FUN_141fd3bb0 body=43 status=ok
// SIG undefined FUN_141fd3bb0(void)

undefined8 * FUN_141fd3bb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141fd3be0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FApplyCameraAnimExecutionToken::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,SWrapBox::FChildArranger::FArrangementData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 2);
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141fd3c50 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAudioSectionExecutionToken::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FMovieSceneAudioSectionTemplateData::~FMovieSceneAudioSectionTemplateData(param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 141fd3ca0 FUN_141fd3ca0 body=43 status=ok
// SIG undefined FUN_141fd3ca0(void)

undefined8 * FUN_141fd3ca0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 141fd3cd0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FCachedAudioTrackData::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>::
  ~TArray<FPerClassNumberSuffixAnnotation,FDefaultAllocator>(param_1 + 1);
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141fd3d20 FUN_141fd3d20 body=43 status=ok
// SIG undefined FUN_141fd3d20(void)

undefined8 * FUN_141fd3d20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f1aef8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141fd3d50 `scalar_deleting_destructor' body=122 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FColorTrackPreAnimatedState::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 4);
  if (*(char *)((longlong)param_1 + 0x19) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141fd3dd0 FUN_141fd3dd0 body=52 status=ok
// SIG undefined FUN_141fd3dd0(void)

undefined8 FUN_141fd3dd0(undefined8 param_1,ulonglong param_2)

{
  FUN_141fd2cd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 141fd3e10 FUN_141fd3e10 body=112 status=ok
// SIG undefined FUN_141fd3e10(void)

undefined8 * FUN_141fd3e10(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144f1b030;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 141fd3e80 FUN_141fd3e80 body=43 status=ok
// SIG undefined FUN_141fd3e80(void)

undefined8 * FUN_141fd3e80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141fd3eb0 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FEventTrackExecutionToken::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TArray<FMovieSceneEventData,FDefaultAllocator>::~TArray<FMovieSceneEventData,FDefaultAllocator>
            (param_1 + 1);
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 141fd3f10 FUN_141fd3f10 body=43 status=ok
// SIG undefined FUN_141fd3f10(void)

undefined8 * FUN_141fd3f10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141fd3f40 `scalar_deleting_destructor' body=164 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FLevelStreamingSharedTrackData::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FLevelStreamingSharedTrackData::FVisibilityData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 1,0);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa8);
  }
  return param_1;
}



// FUNCTION 141fd3ff0 FUN_141fd3ff0 body=43 status=ok
// SIG undefined FUN_141fd3ff0(void)

undefined8 * FUN_141fd3ff0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 141fd4020 `scalar_deleting_destructor' body=106 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieScene3DPathSectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0xe);
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  param_1[7] = &PTR_FUN_144f215f0;
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141fd4090 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneActorReferenceData::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 8);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144f215f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 141fd40f0 `scalar_deleting_destructor' body=123 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneActorReferenceSectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x11);
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  param_1[9] = &PTR_FUN_144f215f0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 141fd4170 FUN_141fd4170 body=66 status=ok
// SIG undefined FUN_141fd4170(void)

undefined8 * FUN_141fd4170(undefined8 *param_1,ulonglong param_2)

{
  FUN_141fd25a0(param_1 + 2);
  *param_1 = &PTR_FUN_143fcdb88;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc70);
  }
  return param_1;
}



// FUNCTION 141fd41c0 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneAudioSectionTemplate::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FMovieSceneAudioSectionTemplateData::~FMovieSceneAudioSectionTemplateData(param_1 + 4);
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 141fd4210 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneBoolPropertySectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0xf);
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  param_1[9] = &PTR_FUN_144f215f0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141fd4290 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneBytePropertySectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x10);
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  param_1[9] = &PTR_FUN_144f215f0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141fd4310 FUN_141fd4310 body=43 status=ok
// SIG undefined FUN_141fd4310(void)

undefined8 * FUN_141fd4310(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 141fd4340 FUN_141fd4340 body=43 status=ok
// SIG undefined FUN_141fd4340(void)

undefined8 * FUN_141fd4340(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141fd4370 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FMovieSceneColorSectionTemplate::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FMovieSceneColorSectionTemplate();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2d0);
  }
  return param_1;
}



// FUNCTION 141fd43b0 FUN_141fd43b0 body=93 status=ok
// SIG undefined FUN_141fd43b0(void)

undefined8 * FUN_141fd43b0(undefined8 *param_1,ulonglong param_2)

{
  FUN_141fd2510(param_1 + 10);
  TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(param_1 + 8);
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(param_1 + 6);
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>::
  ~TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>(param_1 + 4);
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141fd4410 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneComponentTransformSectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FMovieScene3DTransformTemplateData::~FMovieScene3DTransformTemplateData(param_1 + 4);
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x670);
  }
  return param_1;
}



// FUNCTION 141fd4460 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneEulerTransformPropertySectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FMovieScene3DTransformTemplateData::~FMovieScene3DTransformTemplateData(param_1 + 9);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x698);
  }
  return param_1;
}



// FUNCTION 141fd44c0 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneEventSectionData::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 5);
  TArray<FMovieSceneBinding,FDefaultAllocator>::~TArray<FMovieSceneBinding,FDefaultAllocator>
            (param_1 + 3);
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144f215f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141fd4520 `scalar_deleting_destructor' body=118 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneEventSectionTemplate::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 9);
  TArray<FMovieSceneBinding,FDefaultAllocator>::~TArray<FMovieSceneBinding,FDefaultAllocator>
            (param_1 + 7);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  param_1[4] = &PTR_FUN_144f215f0;
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 141fd45a0 `scalar_deleting_destructor' body=106 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneFadeSectionTemplate::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0xb);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[4] = &PTR_FUN_144f215f0;
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141fd4610 FUN_141fd4610 body=106 status=ok
// SIG undefined FUN_141fd4610(void)

undefined8 * FUN_141fd4610(undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0xb);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[4] = &PTR_FUN_144f215f0;
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,200);
  }
  return param_1;
}



// FUNCTION 141fd4680 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneFloatPropertySectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x10);
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  param_1[9] = &PTR_FUN_144f215f0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 141fd4700 FUN_141fd4700 body=52 status=ok
// SIG undefined FUN_141fd4700(void)

undefined8 FUN_141fd4700(undefined8 param_1,ulonglong param_2)

{
  FUN_141fd2ff0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 141fd4740 `scalar_deleting_destructor' body=120 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneIntegerPropertySectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0xf);
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  param_1[9] = &PTR_FUN_144f215f0;
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 141fd47c0 FUN_141fd47c0 body=72 status=ok
// SIG undefined FUN_141fd47c0(void)

undefined8 * FUN_141fd47c0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141fd4810 FUN_141fd4810 body=93 status=ok
// SIG undefined FUN_141fd4810(void)

undefined8 * FUN_141fd4810(undefined8 *param_1,ulonglong param_2)

{
  FUN_141fd2510(param_1 + 10);
  TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(param_1 + 8);
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(param_1 + 6);
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>::
  ~TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>(param_1 + 4);
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 141fd4870 `scalar_deleting_destructor' body=95 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneByteChannel::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 7);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144f215f0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 141fd48d0 `scalar_deleting_destructor' body=106 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneParticleSectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0xb);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  param_1[4] = &PTR_FUN_144f215f0;
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 141fd4940 FUN_141fd4940 body=106 status=ok
// SIG undefined FUN_141fd4940(void)

undefined8 * FUN_141fd4940(undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x10);
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  param_1[9] = &PTR_FUN_144f215f0;
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 141fd49b0 `scalar_deleting_destructor' body=106 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneSlomoSectionTemplate::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0xb);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  param_1[4] = &PTR_FUN_144f215f0;
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 141fd4a20 `scalar_deleting_destructor' body=106 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneSpawnSectionTemplate::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 10);
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  param_1[4] = &PTR_FUN_144f215f0;
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 141fd4a90 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FMovieSceneStringChannel::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FMovieSceneStringChannel();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 141fd4ad0 `scalar_deleting_destructor' body=81 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneStringPropertySectionTemplate::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  FMovieSceneStringChannel::~FMovieSceneStringChannel(param_1 + 9);
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 141fd4b30 `scalar_deleting_destructor' body=122 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FNameCurve::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f489d0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__14413eb30;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141fd4bb0 FUN_141fd4bb0 body=120 status=ok
// SIG undefined FUN_141fd4bb0(void)

undefined8 * FUN_141fd4bb0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x1f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 141fd4c30 FUN_141fd4c30 body=100 status=ok
// SIG undefined FUN_141fd4c30(void)

undefined8 * FUN_141fd4c30(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 141fd4ca0 `scalar_deleting_destructor' body=53 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FParticleTrackExecutionToken::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141fd4ce0 FUN_141fd4ce0 body=43 status=ok
// SIG undefined FUN_141fd4ce0(void)

undefined8 * FUN_141fd4ce0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440780a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141fd4d10 FUN_141fd4d10 body=43 status=ok
// SIG undefined FUN_141fd4d10(void)

undefined8 * FUN_141fd4d10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 141fd4d40 `scalar_deleting_destructor' body=131 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FStringCurve::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f4e700;
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0xd);
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__scalar_deleting_destructor__14413eb30;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 141fd4dd0 FUN_141fd4dd0 body=52 status=ok
// SIG undefined FUN_141fd4dd0(void)

undefined8 FUN_141fd4dd0(undefined8 param_1,ulonglong param_2)

{
  FUN_141fd3110();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141fd4e10 `scalar_deleting_destructor' body=53 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FMovieSceneChannelValueHelper::IChannelValueHelper::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f46330;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141fd4e50 FUN_141fd4e50 body=52 status=ok
// SIG undefined FUN_141fd4e50(void)

undefined8 FUN_141fd4e50(undefined8 param_1,ulonglong param_2)

{
  FUN_140591180();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 141fd4e90 FUN_141fd4e90 body=52 status=ok
// SIG undefined FUN_141fd4e90(void)

undefined8 FUN_141fd4e90(undefined8 param_1,ulonglong param_2)

{
  FUN_140591180();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x108);
  }
  return param_1;
}



// FUNCTION 141fd4ed0 FUN_141fd4ed0 body=116 status=ok
// SIG undefined FUN_141fd4ed0(void)

longlong FUN_141fd4ed0(longlong param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x108) = &PTR_FUN_144f215f0;
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 141fd4f50 FUN_141fd4f50 body=334 status=ok
// SIG undefined FUN_141fd4f50(void)

longlong FUN_141fd4f50(longlong param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x6c0);
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x698) != 0) {
    FMemory::Free();
  }
  lVar2 = 3;
  *(undefined8 *)(param_1 + 0x688) = &PTR_FUN_144f215f0;
  lVar3 = 3;
  puVar1 = (undefined8 *)(param_1 + 0x688);
  do {
    lVar3 = lVar3 + -1;
    FKeyHandleLookupTable::~FKeyHandleLookupTable(puVar1 + -0xd);
    if (puVar1[-0x10] != 0) {
      FMemory::Free();
    }
    if (puVar1[-0x12] != 0) {
      FMemory::Free();
    }
    puVar1[-0x14] = &PTR_FUN_144f215f0;
    puVar1 = puVar1 + -0x14;
  } while (lVar3 != 0);
  lVar3 = 3;
  puVar1 = (undefined8 *)(param_1 + 0x4a8);
  do {
    lVar3 = lVar3 + -1;
    FKeyHandleLookupTable::~FKeyHandleLookupTable(puVar1 + -0xd);
    if (puVar1[-0x10] != 0) {
      FMemory::Free();
    }
    if (puVar1[-0x12] != 0) {
      FMemory::Free();
    }
    puVar1[-0x14] = &PTR_FUN_144f215f0;
    puVar1 = puVar1 + -0x14;
  } while (lVar3 != 0);
  puVar1 = (undefined8 *)(param_1 + 0x2c8);
  do {
    lVar2 = lVar2 + -1;
    FKeyHandleLookupTable::~FKeyHandleLookupTable(puVar1 + -0xd);
    if (puVar1[-0x10] != 0) {
      FMemory::Free();
    }
    if (puVar1[-0x12] != 0) {
      FMemory::Free();
    }
    puVar1[-0x14] = &PTR_FUN_144f215f0;
    puVar1 = puVar1 + -0x14;
  } while (lVar2 != 0);
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x730);
  }
  return param_1;
}



// FUNCTION 141fd50a0 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieScene3DTransformTrack::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  UMovieSceneSignedObject::~UMovieSceneSignedObject(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141fd5100 FUN_141fd5100 body=285 status=ok
// SIG undefined FUN_141fd5100(void)

longlong FUN_141fd5100(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1f8);
  plVar1 = *(longlong **)(param_1 + 0x1f0);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x1f0);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  *(undefined ***)(param_1 + 0x180) = &PTR__scalar_deleting_destructor__144f1a640;
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x180) = &PTR__scalar_deleting_destructor__14413eb30;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x188);
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_144f215f0;
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x200);
  }
  return param_1;
}



// FUNCTION 141fd5220 FUN_141fd5220 body=213 status=ok
// SIG undefined FUN_141fd5220(void)

longlong FUN_141fd5220(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 600) != 0) {
    FMemory::Free();
  }
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x1d0);
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x198) = &PTR_FUN_144f215f0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x130);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xf8) = &PTR_FUN_144f215f0;
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 141fd5300 FUN_141fd5300 body=116 status=ok
// SIG undefined FUN_141fd5300(void)

longlong FUN_141fd5300(longlong param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xe8) = &PTR_FUN_144f215f0;
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 141fd5380 `scalar_deleting_destructor' body=116 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UFMODEventControlSection::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_144f215f0;
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 141fd5400 `scalar_deleting_destructor' body=84 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneByteTrack::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  UMovieSceneSignedObject::~UMovieSceneSignedObject(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141fd5460 FUN_141fd5460 body=186 status=ok
// SIG undefined FUN_141fd5460(void)

longlong FUN_141fd5460(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x168);
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
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 141fd5520 FUN_141fd5520 body=285 status=ok
// SIG undefined FUN_141fd5520(void)

longlong FUN_141fd5520(longlong param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x2f8);
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x2c0) = &PTR_FUN_144f215f0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 600);
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x220) = &PTR_FUN_144f215f0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x180) = &PTR_FUN_144f215f0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_144f215f0;
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 141fd5640 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneComponentMaterialTrack::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  UMovieSceneSignedObject::~UMovieSceneSignedObject(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 141fd5690 FUN_141fd5690 body=205 status=ok
// SIG undefined FUN_141fd5690(void)

longlong FUN_141fd5690(longlong param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x170);
  TArray<FMovieSceneBinding,FDefaultAllocator>::~TArray<FMovieSceneBinding,FDefaultAllocator>
            (param_1 + 0x160);
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x148) = &PTR_FUN_144f215f0;
  *(undefined ***)(param_1 + 0xe0) = &PTR__scalar_deleting_destructor__144f489d0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR__scalar_deleting_destructor__14413eb30;
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0xe8);
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d0);
  }
  return param_1;
}



// FUNCTION 141fd5760 FUN_141fd5760 body=116 status=ok
// SIG undefined FUN_141fd5760(void)

longlong FUN_141fd5760(longlong param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_144f215f0;
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 141fd57e0 FUN_141fd57e0 body=116 status=ok
// SIG undefined FUN_141fd57e0(void)

longlong FUN_141fd57e0(longlong param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_144f215f0;
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 141fd5860 FUN_141fd5860 body=116 status=ok
// SIG undefined FUN_141fd5860(void)

longlong FUN_141fd5860(longlong param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_144f215f0;
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 141fd58e0 FUN_141fd58e0 body=179 status=ok
// SIG undefined FUN_141fd58e0(void)

longlong FUN_141fd58e0(longlong param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x1b0);
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x180) = &PTR_FUN_144f215f0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x118);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_144f215f0;
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 141fd59a0 FUN_141fd59a0 body=116 status=ok
// SIG undefined FUN_141fd59a0(void)

longlong FUN_141fd59a0(longlong param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x110);
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0xe0) = &PTR_FUN_144f215f0;
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 141fd5a20 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UAIPerceptionStimuliSourceComponent::_scalar_deleting_destructor_
                   (longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 141fd5a70 FUN_141fd5a70 body=103 status=ok
// SIG undefined FUN_141fd5a70(void)

longlong FUN_141fd5a70(longlong param_1,ulonglong param_2)

{
  FUN_141fd2510(param_1 + 0x110);
  TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(param_1 + 0x100);
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(param_1 + 0xf0);
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>::
  ~TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>(param_1 + 0xe0);
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 141fd5ae0 FUN_141fd5ae0 body=116 status=ok
// SIG undefined FUN_141fd5ae0(void)

longlong FUN_141fd5ae0(longlong param_1,ulonglong param_2)

{
  FKeyHandleLookupTable::~FKeyHandleLookupTable(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x108) = &PTR_FUN_144f215f0;
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 141fd5b60 `scalar_deleting_destructor' body=70 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UMovieSceneSpawnTrack::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  UMovieSceneSignedObject::~UMovieSceneSignedObject(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 141fd5bb0 `scalar_deleting_destructor' body=67 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTimelineComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FMovieSceneStringChannel::~FMovieSceneStringChannel(param_1 + 0xe0);
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 141fd5c00 FUN_141fd5c00 body=162 status=ok
// SIG undefined FUN_141fd5c00(void)

longlong FUN_141fd5c00(longlong param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 4;
  puVar1 = (undefined8 *)(param_1 + 0x360);
  do {
    lVar2 = lVar2 + -1;
    FKeyHandleLookupTable::~FKeyHandleLookupTable(puVar1 + -0xd);
    if (puVar1[-0x10] != 0) {
      FMemory::Free();
    }
    if (puVar1[-0x12] != 0) {
      FMemory::Free();
    }
    puVar1[-0x14] = &PTR_FUN_144f215f0;
    puVar1 = puVar1 + -0x14;
  } while (lVar2 != 0);
  FUN_140591180(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x368);
  }
  return param_1;
}



// FUNCTION 141fd5cb0 FUN_141fd5cb0 body=1404 status=ok
// SIG undefined FUN_141fd5cb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141fd5cb0(longlong param_1,float *param_2,float param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 in_EAX;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  undefined1 auVar13 [16];
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
  
  fVar28 = fRam0000000146acb848;
  fVar27 = fRam0000000146acb844;
  fVar25 = _DAT_146acb840;
  auVar10 = *(undefined1 (*) [16])(param_2 + 8);
  fVar2 = auVar10._0_4_;
  fVar4 = auVar10._4_4_;
  fVar6 = auVar10._8_4_;
  fVar8 = auVar10._12_4_;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0xc50);
  fVar3 = auVar1._0_4_;
  fVar5 = auVar1._4_4_;
  fVar7 = auVar1._8_4_;
  auVar10 = minps(auVar1,auVar10);
  auVar11._4_4_ = -(uint)(auVar10._4_4_ < fRam0000000146acb934);
  auVar11._0_4_ = -(uint)(auVar10._0_4_ < _DAT_146acb930);
  auVar11._8_4_ = -(uint)(auVar10._8_4_ < fRam0000000146acb938);
  auVar11._12_4_ = -(uint)(auVar10._12_4_ < fRam0000000146acb93c);
  iVar9 = movmskps(in_EAX,auVar11);
  if (iVar9 == 0) {
    fVar25 = *param_2;
    fVar27 = param_2[1];
    fVar28 = param_2[2];
    fVar16 = param_2[3];
    fVar17 = *(float *)(param_1 + 0xc30);
    fVar26 = *(float *)(param_1 + 0xc34);
    fVar12 = *(float *)(param_1 + 0xc38);
    fVar29 = *(float *)(param_1 + 0xc3c);
    fVar30 = *(float *)(param_1 + 0xc40) * fVar2;
    fVar20 = *(float *)(param_1 + 0xc44) * fVar4;
    fVar19 = *(float *)(param_1 + 0xc48) * fVar6;
    fVar21 = *(float *)(param_1 + 0xc4c) * fVar8;
    fVar18 = fVar29 * fVar25 * _DAT_146acb900 + fVar16 * fVar17 + fVar27 * fVar12 * _DAT_146acb8f0 +
             fVar28 * fVar26 * _DAT_146acb8e0;
    fVar14 = fVar12 * fVar25 * fRam0000000146acb904 + fVar16 * fVar26 +
             fVar27 * fVar29 * fRam0000000146acb8f4 + fVar28 * fVar17 * fRam0000000146acb8e4;
    fVar23 = fVar26 * fVar25 * fRam0000000146acb908 + fVar16 * fVar12 +
             fVar27 * fVar17 * fRam0000000146acb8f8 + fVar28 * fVar29 * fRam0000000146acb8e8;
    fVar15 = fVar17 * fVar25 * fRam0000000146acb90c + fVar16 * fVar29 +
             fVar27 * fVar26 * fRam0000000146acb8fc + fVar28 * fVar12 * fRam0000000146acb8ec;
    fVar17 = fVar19 * fVar27 - fVar20 * fVar28;
    fVar26 = fVar30 * fVar28 - fVar19 * fVar25;
    fVar12 = fVar20 * fVar25 - fVar30 * fVar27;
    fVar29 = fVar21 * fVar16 - fVar21 * fVar16;
    fVar17 = fVar17 + fVar17;
    fVar26 = fVar26 + fVar26;
    fVar12 = fVar12 + fVar12;
    fVar29 = fVar29 + fVar29;
    local_b8 = (fVar12 * fVar27 - fVar26 * fVar28) + fVar16 * fVar17 + fVar30 + param_2[4];
    fStack_b4 = (fVar17 * fVar28 - fVar12 * fVar25) + fVar16 * fVar26 + fVar20 + param_2[5];
    fStack_b0 = (fVar26 * fVar25 - fVar17 * fVar27) + fVar16 * fVar12 + fVar19 + param_2[6];
    fVar25 = (fVar29 * fVar16 - fVar29 * fVar16) + fVar16 * fVar29 + fVar21 + param_2[7];
  }
  else {
    fVar16 = *param_2;
    fVar17 = param_2[1];
    fVar26 = param_2[2];
    fVar12 = param_2[3];
    fVar18 = fVar17 + fVar17;
    fVar21 = fVar26 + fVar26;
    fVar29 = param_2[4];
    fVar30 = param_2[5];
    fVar20 = param_2[6];
    fVar23 = fVar16 * (fVar16 + fVar16);
    fVar19 = (fVar16 + fVar16) * fVar12;
    fVar31 = fVar4 * (fVar18 * fVar16 - fVar21 * fVar12);
    fVar33 = fVar6 * (fVar21 * fVar17 - fVar19);
    fVar35 = fVar2 * (fVar21 * fVar16 - fVar18 * fVar12);
    fVar40 = (fVar21 * fVar12 + fVar18 * fVar16) * fVar2;
    fVar41 = (fVar19 + fVar21 * fVar17) * fVar4;
    fVar42 = (fVar18 * fVar12 + fVar21 * fVar16) * fVar6;
    fVar19 = (float)((uint)((_DAT_146acb840 - (fVar26 * fVar21 + fVar17 * fVar18)) * fVar2) &
                    _DAT_146acb850);
    fVar21 = (float)((uint)((fRam0000000146acb844 - (fVar26 * fVar21 + fVar23)) * fVar4) &
                    uRam0000000146acb854);
    fVar14 = (float)((uint)((fRam0000000146acb848 - (fVar17 * fVar18 + fVar23)) * fVar6) &
                    uRam0000000146acb858);
    fVar15 = (float)((uint)((fRam0000000146acb84c - (fVar23 + fVar23)) * fVar8) &
                    uRam0000000146acb85c);
    fVar16 = *(float *)(param_1 + 0xc30);
    fVar17 = *(float *)(param_1 + 0xc34);
    fVar26 = *(float *)(param_1 + 0xc38);
    fVar12 = *(float *)(param_1 + 0xc3c);
    fVar23 = fVar17 + fVar17;
    fVar22 = fVar26 + fVar26;
    fVar24 = fVar16 * (fVar16 + fVar16);
    fVar18 = (fVar16 + fVar16) * fVar12;
    fVar37 = (fVar22 * fVar12 + fVar23 * fVar16) * fVar3;
    fVar38 = (fVar18 + fVar22 * fVar17) * fVar5;
    fVar39 = (fVar23 * fVar12 + fVar22 * fVar16) * fVar7;
    fVar32 = fVar5 * (fVar23 * fVar16 - fVar22 * fVar12);
    fVar34 = fVar7 * (fVar22 * fVar17 - fVar18);
    fVar36 = fVar3 * (fVar22 * fVar16 - fVar23 * fVar12);
    fVar12 = (float)((uint)((_DAT_146acb840 - (fVar26 * fVar22 + fVar17 * fVar23)) * fVar3) &
                    _DAT_146acb850);
    fVar18 = (float)((uint)((fRam0000000146acb844 - (fVar26 * fVar22 + fVar24)) * fVar5) &
                    uRam0000000146acb854);
    fVar23 = (float)((uint)((fRam0000000146acb848 - (fVar17 * fVar23 + fVar24)) * fVar7) &
                    uRam0000000146acb858);
    fVar22 = (float)((uint)((fRam0000000146acb84c - (fVar24 + fVar24)) * auVar1._12_4_) &
                    uRam0000000146acb85c);
    fVar16 = *(float *)(param_1 + 0xc40);
    fVar17 = *(float *)(param_1 + 0xc44);
    fVar26 = *(float *)(param_1 + 0xc48);
    local_e8 = fVar37 * fVar31 + fVar12 * fVar19 + fVar36 * fVar42 + fVar22 * fVar29;
    fStack_e4 = fVar37 * fVar21 + fVar12 * fVar40 + fVar36 * fVar33 + fVar22 * fVar30;
    fStack_e0 = fVar37 * fVar41 + fVar12 * fVar35 + fVar36 * fVar14 + fVar22 * fVar20;
    fStack_dc = fVar37 * fVar15 + fVar12 * fVar15 + fVar36 * fVar15 + fVar22 * fRam0000000146acb84c;
    local_d8 = fVar18 * fVar31 + fVar32 * fVar19 + fVar38 * fVar42 + fVar22 * fVar29;
    fStack_d4 = fVar18 * fVar21 + fVar32 * fVar40 + fVar38 * fVar33 + fVar22 * fVar30;
    fStack_d0 = fVar18 * fVar41 + fVar32 * fVar35 + fVar38 * fVar14 + fVar22 * fVar20;
    fStack_cc = fVar18 * fVar15 + fVar32 * fVar15 + fVar38 * fVar15 + fVar22 * fRam0000000146acb84c;
    local_c8 = fVar34 * fVar31 + fVar39 * fVar19 + fVar23 * fVar42 + fVar22 * fVar29;
    fStack_c4 = fVar34 * fVar21 + fVar39 * fVar40 + fVar23 * fVar33 + fVar22 * fVar30;
    fStack_c0 = fVar34 * fVar41 + fVar39 * fVar35 + fVar23 * fVar14 + fVar22 * fVar20;
    fStack_bc = fVar34 * fVar15 + fVar39 * fVar15 + fVar23 * fVar15 + fVar22 * fRam0000000146acb84c;
    local_b8 = fVar17 * fVar31 + fVar16 * fVar19 + fVar26 * fVar42 + fRam0000000146acb84c * fVar29;
    fStack_b4 = fVar17 * fVar21 + fVar16 * fVar40 + fVar26 * fVar33 + fRam0000000146acb84c * fVar30;
    fStack_b0 = fVar17 * fVar41 + fVar16 * fVar35 + fVar26 * fVar14 + fRam0000000146acb84c * fVar20;
    fStack_ac = fVar17 * fVar15 + fVar16 * fVar15 + fVar26 * fVar15 +
                fRam0000000146acb84c * fRam0000000146acb84c;
    FMatrix::RemoveScaling(&local_e8);
    fVar25 = (float)(-(uint)(_DAT_146acb930 <= fVar2 * fVar3) & (_DAT_146acb860 ^ (uint)fVar25) ^
                    _DAT_146acb860);
    fVar27 = (float)(-(uint)(fRam0000000146acb934 <= fVar4 * fVar5) &
                     (uRam0000000146acb864 ^ (uint)fVar27) ^ uRam0000000146acb864);
    fVar28 = (float)(-(uint)(fRam0000000146acb938 <= fVar6 * fVar7) &
                     (uRam0000000146acb868 ^ (uint)fVar28) ^ uRam0000000146acb868);
    local_e8 = local_e8 * fVar25;
    fStack_e4 = fStack_e4 * fVar25;
    fStack_e0 = fStack_e0 * fVar25;
    fStack_d4 = fStack_d4 * fVar27;
    fStack_d0 = fStack_d0 * fVar27;
    local_d8 = local_d8 * fVar27;
    fStack_c4 = fStack_c4 * fVar28;
    fStack_c0 = fStack_c0 * fVar28;
    local_c8 = local_c8 * fVar28;
    FQuat::FQuat(&local_f8,&local_e8);
    auVar13._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
    auVar13._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
    auVar13._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
    auVar13._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
    fVar26 = auVar13._4_4_ + auVar13._0_4_;
    fVar12 = auVar13._8_4_ + auVar13._4_4_;
    fVar29 = auVar13._12_4_ + auVar13._8_4_;
    fVar30 = auVar13._0_4_ + auVar13._12_4_;
    auVar10._4_4_ = fVar12;
    auVar10._0_4_ = fVar26;
    auVar10._8_4_ = fVar29;
    auVar10._12_4_ = fVar30;
    auVar10 = rsqrtps(auVar13,auVar10);
    fVar27 = auVar10._0_4_;
    fVar28 = auVar10._4_4_;
    fVar16 = auVar10._8_4_;
    fVar17 = auVar10._12_4_;
    fVar27 = (_DAT_146acb920 - fVar27 * fVar27 * fVar26 * _DAT_146acb920) * fVar27 + fVar27;
    fVar28 = (fRam0000000146acb924 - fVar28 * fVar28 * fVar12 * fRam0000000146acb924) * fVar28 +
             fVar28;
    fVar16 = (fRam0000000146acb928 - fVar16 * fVar16 * fVar29 * fRam0000000146acb928) * fVar16 +
             fVar16;
    fVar17 = (fRam0000000146acb92c - fVar17 * fVar17 * fVar30 * fRam0000000146acb92c) * fVar17 +
             fVar17;
    fVar25 = 0.0;
    fVar18 = (float)(((uint)(((_DAT_146acb920 - fVar27 * fVar27 * fVar26 * _DAT_146acb920) * fVar27
                             + fVar27) * local_f8) ^ _DAT_146acb910) & -(uint)(1e-08 <= fVar26) ^
                    _DAT_146acb910);
    fVar14 = (float)(((uint)(((fRam0000000146acb924 -
                              fVar28 * fVar28 * fVar12 * fRam0000000146acb924) * fVar28 + fVar28) *
                            fStack_f4) ^ uRam0000000146acb914) & -(uint)(1e-08 <= fVar12) ^
                    uRam0000000146acb914);
    fVar23 = (float)(((uint)(((fRam0000000146acb928 -
                              fVar16 * fVar16 * fVar29 * fRam0000000146acb928) * fVar16 + fVar16) *
                            fStack_f0) ^ uRam0000000146acb918) & -(uint)(1e-08 <= fVar29) ^
                    uRam0000000146acb918);
    fVar15 = (float)(((uint)(((fRam0000000146acb92c -
                              fVar17 * fVar17 * fVar30 * fRam0000000146acb92c) * fVar17 + fVar17) *
                            fStack_ec) ^ uRam0000000146acb91c) & -(uint)(1e-08 <= fVar30) ^
                    uRam0000000146acb91c);
  }
  *(float *)(param_1 + 0xc30) = fVar18;
  *(float *)(param_1 + 0xc34) = fVar14;
  *(float *)(param_1 + 0xc38) = fVar23;
  *(float *)(param_1 + 0xc3c) = fVar15;
  *(float *)(param_1 + 0xc40) = local_b8;
  *(float *)(param_1 + 0xc44) = fStack_b4;
  *(float *)(param_1 + 0xc48) = fStack_b0;
  *(float *)(param_1 + 0xc4c) = fVar25;
  *(float *)(param_1 + 0xc50) = fVar2 * fVar3;
  *(float *)(param_1 + 0xc54) = fVar4 * fVar5;
  *(float *)(param_1 + 0xc58) = fVar6 * fVar7;
  *(float *)(param_1 + 0xc5c) = fVar8 * auVar1._12_4_;
  *(undefined1 *)(param_1 + 8) = 1;
  *(float *)(param_1 + 0xc60) = param_3 + *(float *)(param_1 + 0xc60);
  return;
}



// FUNCTION 141fd6230 Actuate body=405 status=ok
// SIG undefined Actuate(void)

void TPropertyActuator<int>::Actuate
               (longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
               undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined **local_38;
  undefined8 local_30;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_4 + 0x10);
    local_38 = &PTR_FUN_144f51d90;
    local_30 = *(undefined8 *)(param_1 + 0x38);
    bVar2 = false;
    uVar5 = 0;
    uVar6 = (longlong)*(int *)(param_4 + 0x18) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_4 + 0x18) < plVar4) {
      uVar6 = uVar5;
    }
    bVar3 = false;
    if (uVar6 != 0) {
      do {
        bVar2 = bVar3;
        lVar1 = *plVar4;
        if (*(char *)(lVar1 + 0x1c) == '\x01') {
          *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar1 + 0x10);
          *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar1 + 0x18);
          *(undefined1 *)(param_7 + 0x2dc) = 2;
          local_40 = *(undefined4 *)(param_7 + 0x2d8);
          local_48 = *(undefined8 *)(param_7 + 0x2d0);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,2,&local_48);
          bVar2 = true;
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
        bVar3 = bVar2;
      } while (uVar5 != uVar6);
    }
    local_48 = CONCAT44(0xffffffff,DAT_1464e8628);
    *(undefined8 *)(param_7 + 0x2d0) = local_48;
    *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
    *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
    if (!bVar2) {
      local_40 = *(undefined4 *)(param_7 + 0x2d8);
      local_48 = *(undefined8 *)(param_7 + 0x2d0);
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,
                 *(undefined1 *)(param_7 + 0x2dd),&local_48);
    }
    FTrackInstancePropertyBindings::CallFunction<int>
              (*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
  return;
}



// FUNCTION 141fd63d0 Actuate body=421 status=ok
// SIG undefined Actuate(void)

void TPropertyActuator<float>::Actuate
               (longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
               undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined **local_38;
  undefined8 local_30;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_4 + 0x10);
    local_38 = &PTR_FUN_144f51dc0;
    local_30 = *(undefined8 *)(param_1 + 0x38);
    bVar2 = false;
    uVar5 = 0;
    uVar6 = (longlong)*(int *)(param_4 + 0x18) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_4 + 0x18) < plVar4) {
      uVar6 = uVar5;
    }
    bVar3 = false;
    if (uVar6 != 0) {
      do {
        bVar2 = bVar3;
        lVar1 = *plVar4;
        if (*(char *)(lVar1 + 0x1c) == '\x01') {
          *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar1 + 0x10);
          *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar1 + 0x18);
          *(undefined1 *)(param_7 + 0x2dc) = 2;
          local_40 = *(undefined4 *)(param_7 + 0x2d8);
          local_48 = *(undefined8 *)(param_7 + 0x2d0);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,2,&local_48);
          bVar2 = true;
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
        bVar3 = bVar2;
      } while (uVar5 != uVar6);
    }
    local_48 = CONCAT44(0xffffffff,DAT_1464e8628);
    *(undefined8 *)(param_7 + 0x2d0) = local_48;
    *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
    *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
    if (!bVar2) {
      local_40 = *(undefined4 *)(param_7 + 0x2d8);
      local_48 = *(undefined8 *)(param_7 + 0x2d0);
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,
                 *(undefined1 *)(param_7 + 0x2dd),&local_48);
    }
    FTrackInstancePropertyBindings::CallFunction<float>
              (*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
  return;
}



// FUNCTION 141fd6580 Actuate body=405 status=ok
// SIG undefined Actuate(void)

void TPropertyActuator<FEulerTransform>::Actuate
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined **local_38;
  undefined8 local_30;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_4 + 0x10);
    local_38 = &PTR_FUN_144f51cb8;
    local_30 = *(undefined8 *)(param_1 + 0x38);
    bVar2 = false;
    uVar5 = 0;
    uVar6 = (longlong)*(int *)(param_4 + 0x18) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_4 + 0x18) < plVar4) {
      uVar6 = uVar5;
    }
    bVar3 = false;
    if (uVar6 != 0) {
      do {
        bVar2 = bVar3;
        lVar1 = *plVar4;
        if (*(char *)(lVar1 + 0x3c) == '\x01') {
          *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar1 + 0x30);
          *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar1 + 0x38);
          *(undefined1 *)(param_7 + 0x2dc) = 2;
          local_40 = *(undefined4 *)(param_7 + 0x2d8);
          local_48 = *(undefined8 *)(param_7 + 0x2d0);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,2,&local_48);
          bVar2 = true;
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
        bVar3 = bVar2;
      } while (uVar5 != uVar6);
    }
    local_48 = CONCAT44(0xffffffff,DAT_1464e8628);
    *(undefined8 *)(param_7 + 0x2d0) = local_48;
    *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
    *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
    if (!bVar2) {
      local_40 = *(undefined4 *)(param_7 + 0x2d8);
      local_48 = *(undefined8 *)(param_7 + 0x2d0);
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,
                 *(undefined1 *)(param_7 + 0x2dd),&local_48);
    }
    FTrackInstancePropertyBindings::CallFunction<FEulerTransform>
              (*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
  return;
}



// FUNCTION 141fd6720 Actuate body=405 status=ok
// SIG undefined Actuate(void)

void TPropertyActuator<FTransform>::Actuate
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined **local_38;
  undefined8 local_30;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_4 + 0x10);
    local_38 = &PTR_FUN_144f51ce8;
    local_30 = *(undefined8 *)(param_1 + 0x38);
    bVar2 = false;
    uVar5 = 0;
    uVar6 = (longlong)*(int *)(param_4 + 0x18) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_4 + 0x18) < plVar4) {
      uVar6 = uVar5;
    }
    bVar3 = false;
    if (uVar6 != 0) {
      do {
        bVar2 = bVar3;
        lVar1 = *plVar4;
        if (*(char *)(lVar1 + 0x44) == '\x01') {
          *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar1 + 0x38);
          *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar1 + 0x40);
          *(undefined1 *)(param_7 + 0x2dc) = 2;
          local_40 = *(undefined4 *)(param_7 + 0x2d8);
          local_48 = *(undefined8 *)(param_7 + 0x2d0);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,2,&local_48);
          bVar2 = true;
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
        bVar3 = bVar2;
      } while (uVar5 != uVar6);
    }
    local_48 = CONCAT44(0xffffffff,DAT_1464e8628);
    *(undefined8 *)(param_7 + 0x2d0) = local_48;
    *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
    *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
    if (!bVar2) {
      local_40 = *(undefined4 *)(param_7 + 0x2d8);
      local_48 = *(undefined8 *)(param_7 + 0x2d0);
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,
                 *(undefined1 *)(param_7 + 0x2dd),&local_48);
    }
    FTrackInstancePropertyBindings::CallFunction<FTransform>
              (*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
  return;
}



// FUNCTION 141fd68c0 Actuate body=423 status=ok
// SIG undefined Actuate(void)

void TPropertyActuator<FVector2D>::Actuate
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined **local_38;
  undefined8 local_30;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_4 + 0x10);
    local_38 = &PTR_FUN_144f51d78;
    local_30 = *(undefined8 *)(param_1 + 0x38);
    bVar2 = false;
    uVar5 = 0;
    uVar6 = (longlong)*(int *)(param_4 + 0x18) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_4 + 0x18) < plVar4) {
      uVar6 = uVar5;
    }
    bVar3 = false;
    if (uVar6 != 0) {
      do {
        bVar2 = bVar3;
        lVar1 = *plVar4;
        if (*(char *)(lVar1 + 0x1c) == '\x01') {
          *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar1 + 0x10);
          *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar1 + 0x18);
          *(undefined1 *)(param_7 + 0x2dc) = 2;
          local_40 = *(undefined4 *)(param_7 + 0x2d8);
          local_48 = *(undefined8 *)(param_7 + 0x2d0);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,2,&local_48);
          bVar2 = true;
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
        bVar3 = bVar2;
      } while (uVar5 != uVar6);
    }
    local_48 = CONCAT44(0xffffffff,DAT_1464e8628);
    *(undefined8 *)(param_7 + 0x2d0) = local_48;
    *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
    *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
    if (!bVar2) {
      local_40 = *(undefined4 *)(param_7 + 0x2d8);
      local_48 = *(undefined8 *)(param_7 + 0x2d0);
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,
                 *(undefined1 *)(param_7 + 0x2dd),&local_48);
    }
    FTrackInstancePropertyBindings::CallFunction<FVector2D>
              (*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
  return;
}



// FUNCTION 141fd6a70 Actuate body=405 status=ok
// SIG undefined Actuate(void)

void TPropertyActuator<FVector4>::Actuate
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined **local_38;
  undefined8 local_30;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_4 + 0x10);
    local_38 = &PTR_FUN_144f51d18;
    local_30 = *(undefined8 *)(param_1 + 0x38);
    bVar2 = false;
    uVar5 = 0;
    uVar6 = (longlong)*(int *)(param_4 + 0x18) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_4 + 0x18) < plVar4) {
      uVar6 = uVar5;
    }
    bVar3 = false;
    if (uVar6 != 0) {
      do {
        bVar2 = bVar3;
        lVar1 = *plVar4;
        if (*(char *)(lVar1 + 0x24) == '\x01') {
          *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar1 + 0x18);
          *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar1 + 0x20);
          *(undefined1 *)(param_7 + 0x2dc) = 2;
          local_40 = *(undefined4 *)(param_7 + 0x2d8);
          local_48 = *(undefined8 *)(param_7 + 0x2d0);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,2,&local_48);
          bVar2 = true;
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
        bVar3 = bVar2;
      } while (uVar5 != uVar6);
    }
    local_48 = CONCAT44(0xffffffff,DAT_1464e8628);
    *(undefined8 *)(param_7 + 0x2d0) = local_48;
    *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
    *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
    if (!bVar2) {
      local_40 = *(undefined4 *)(param_7 + 0x2d8);
      local_48 = *(undefined8 *)(param_7 + 0x2d0);
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,
                 *(undefined1 *)(param_7 + 0x2dd),&local_48);
    }
    FTrackInstancePropertyBindings::CallFunction<FVector4>
              (*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
  return;
}



// FUNCTION 141fd6c10 Actuate body=405 status=ok
// SIG undefined Actuate(void)

void TPropertyActuator<FVector>::Actuate
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
               undefined8 param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined **local_38;
  undefined8 local_30;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_4 + 0x10);
    local_38 = &PTR_FUN_144f51d48;
    local_30 = *(undefined8 *)(param_1 + 0x38);
    bVar2 = false;
    uVar5 = 0;
    uVar6 = (longlong)*(int *)(param_4 + 0x18) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(param_4 + 0x18) < plVar4) {
      uVar6 = uVar5;
    }
    bVar3 = false;
    if (uVar6 != 0) {
      do {
        bVar2 = bVar3;
        lVar1 = *plVar4;
        if (*(char *)(lVar1 + 0x24) == '\x01') {
          *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar1 + 0x18);
          *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar1 + 0x20);
          *(undefined1 *)(param_7 + 0x2dc) = 2;
          local_40 = *(undefined4 *)(param_7 + 0x2d8);
          local_48 = *(undefined8 *)(param_7 + 0x2d0);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,2,&local_48);
          bVar2 = true;
        }
        plVar4 = plVar4 + 1;
        uVar5 = uVar5 + 1;
        bVar3 = bVar2;
      } while (uVar5 != uVar6);
    }
    local_48 = CONCAT44(0xffffffff,DAT_1464e8628);
    *(undefined8 *)(param_7 + 0x2d0) = local_48;
    *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
    *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
    if (!bVar2) {
      local_40 = *(undefined4 *)(param_7 + 0x2d8);
      local_48 = *(undefined8 *)(param_7 + 0x2d0);
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_38,param_2,
                 *(undefined1 *)(param_7 + 0x2dd),&local_48);
    }
    FTrackInstancePropertyBindings::CallFunction<FVector>
              (*(undefined8 *)(param_1 + 0x38),param_2,param_3);
  }
  return;
}



// FUNCTION 141fd6db0 Actuate body=464 status=ok
// SIG undefined Actuate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FColorTokenActuator::Actuate
               (longlong param_1,longlong param_2,undefined8 *param_3,longlong param_4,
               undefined8 param_5,undefined8 param_6,longlong param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_67;
  undefined **local_60;
  undefined8 uStack_58;
  undefined1 local_4f;
  ulonglong local_48;
  
  if (param_2 != 0) {
    local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
    plVar5 = *(longlong **)(param_4 + 0x10);
    uVar6 = 0;
    local_60 = &PTR_FUN_144f48970;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    bVar3 = false;
    local_67 = 0;
    uVar7 = (longlong)*(int *)(param_4 + 0x18) & 0x1fffffffffffffff;
    if (plVar5 + *(int *)(param_4 + 0x18) < plVar5) {
      uVar7 = uVar6;
    }
    uStack_58 = uVar1;
    bVar4 = false;
    if (uVar7 != 0) {
      do {
        bVar3 = bVar4;
        lVar2 = *plVar5;
        if (*(char *)(lVar2 + 0x24) == '\x01') {
          *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar2 + 0x18);
          *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar2 + 0x20);
          *(undefined1 *)(param_7 + 0x2dc) = 2;
          local_70 = *(undefined4 *)(param_7 + 0x2d8);
          local_78 = *(undefined8 *)(param_7 + 0x2d0);
          local_80 = &local_78;
          local_88 = 2;
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_60,param_2);
          bVar3 = true;
        }
        plVar5 = plVar5 + 1;
        uVar6 = uVar6 + 1;
        bVar4 = bVar3;
      } while (uVar6 != uVar7);
    }
    local_78 = CONCAT44(0xffffffff,DAT_1464e8628);
    *(undefined8 *)(param_7 + 0x2d0) = local_78;
    *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
    *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
    if (!bVar3) {
      local_70 = *(undefined4 *)(param_7 + 0x2d8);
      local_78 = *(undefined8 *)(param_7 + 0x2d0);
      local_80 = &local_78;
      local_88 = *(undefined1 *)(param_7 + 0x2dd);
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_7 + 0xf8,*(undefined8 *)(param_1 + 0x48),&local_60,param_2);
    }
    local_60 = (undefined **)*param_3;
    uStack_58 = param_3[1];
    local_4f = 0;
    FColorToken::Apply(&local_60,param_2,uVar1);
  }
  return;
}



// FUNCTION 141fd6f80 FUN_141fd6f80 body=1382 status=ok
// SIG undefined FUN_141fd6f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141fd6f80(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  char *pcVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  int iVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong *plVar16;
  char *pcVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 *in_stack_ffffffffffffff70;
  undefined **local_58;
  uint local_50;
  undefined8 local_48;
  longlong lStack_40;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar14 = FUN_142a07000();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar14 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
      lVar14 + 0x88)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if (!bVar10) {
    lVar14 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8) !=
        lVar14 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (!bVar10) {
      return;
    }
    uVar15 = FUN_142a07000();
    param_2 = (longlong *)(**(code **)(*param_2 + 0x628))(param_2,uVar15);
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  local_58 = &PTR_FUN_144f4cca8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146acbae8) && (_Init_thread_header(), DAT_146acbae8 == -1)) {
    lVar14 = DAT_146acbae0;
    if (DAT_146acbae0 == 0) {
      lVar14 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbae0,2);
    }
    DAT_146acbad8 = lVar14;
    _Init_thread_footer();
  }
  lVar14 = DAT_146acbad8;
  bVar10 = false;
  plVar16 = *(longlong **)(param_4 + 0x10);
  uVar19 = 0;
  uVar18 = (longlong)*(int *)(param_4 + 0x18) & 0x1fffffffffffffff;
  if (plVar16 + *(int *)(param_4 + 0x18) < plVar16) {
    uVar18 = uVar19;
  }
  bVar11 = false;
  if (uVar18 != 0) {
    do {
      bVar10 = bVar11;
      lVar5 = *plVar16;
      if (*(char *)(lVar5 + 0x24) == '\x01') {
        param_7[0x5a] = *(longlong *)(lVar5 + 0x18);
        uVar3 = *(undefined4 *)(lVar5 + 0x20);
        *(undefined4 *)(param_7 + 0x5b) = uVar3;
        lStack_40 = CONCAT44(lStack_40._4_4_,uVar3);
        in_stack_ffffffffffffff70 = &local_48;
        *(undefined1 *)((longlong)param_7 + 0x2dc) = 2;
        local_48 = param_7[0x5a];
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (param_7 + 0x1f,lVar14,&local_58,param_2,2,in_stack_ffffffffffffff70);
        bVar10 = true;
      }
      plVar16 = plVar16 + 1;
      uVar19 = uVar19 + 1;
      bVar11 = bVar10;
    } while (uVar19 != uVar18);
  }
  local_48 = CONCAT44(0xffffffff,DAT_1464e8628);
  param_7[0x5a] = local_48;
  *(undefined4 *)(param_7 + 0x5b) = 0xffffffff;
  *(undefined1 *)((longlong)param_7 + 0x2dc) = *(undefined1 *)((longlong)param_7 + 0x2dd);
  if (!bVar10) {
    lStack_40 = CONCAT44(lStack_40._4_4_,(int)param_7[0x5b]);
    in_stack_ffffffffffffff70 = &local_48;
    FMovieScenePreAnimatedState::SavePreAnimatedState
              (param_7 + 0x1f,lVar14,&local_58,param_2,*(undefined1 *)((longlong)param_7 + 0x2dd),
               in_stack_ffffffffffffff70);
  }
  cVar12 = (**(code **)(*param_7 + 0xa8))(param_7);
  if (cVar12 != '\0') {
    *(byte *)(param_2 + 0x110) = *(byte *)(param_2 + 0x110) & 0xdf;
  }
  FUN_141fc6890(param_2);
  lVar14 = (**(code **)(*param_2 + 0x148))(param_2);
  if (lVar14 != 0) {
    uVar15 = (**(code **)(*param_2 + 0x148))(param_2);
    cVar12 = FUN_1428cdc10(uVar15);
    if (cVar12 == '\0') goto LAB_141fd71e3;
  }
  (**(code **)(*param_7 + 0x30))(param_7);
LAB_141fd71e3:
  (**(code **)(*param_7 + 0x30))(param_7);
  pcVar6 = (char *)*param_3;
  iVar4 = *(int *)(param_3 + 1);
  if (pcVar6 != pcVar6 + (longlong)iVar4 * 0x38) {
    pcVar17 = pcVar6 + 0x1c;
    do {
      cVar12 = *pcVar17;
      param_7[0x5a] = *(longlong *)(pcVar17 + -0xc);
      *(undefined4 *)(param_7 + 0x5b) = *(undefined4 *)(pcVar17 + -4);
      if (cVar12 == '\0') {
        *(undefined1 *)((longlong)param_7 + 0x2dc) = *(undefined1 *)((longlong)param_7 + 0x2dd);
      }
      else if (cVar12 == '\x01') {
        *(undefined1 *)((longlong)param_7 + 0x2dc) = 2;
      }
      cVar12 = pcVar17[0x14];
      iVar13 = (**(code **)(*param_7 + 0x30))(param_7);
      in_stack_ffffffffffffff70 = *(undefined8 **)(pcVar17 + 0xc);
      FUN_141ffd6a0(param_1,param_6,param_7,param_2,*(undefined8 *)(pcVar17 + 4),
                    in_stack_ffffffffffffff70,*(undefined8 *)(pcVar17 + -0x1c),
                    *(undefined4 *)(pcVar17 + -0x14),*(undefined4 *)(pcVar17 + -0x10),0,iVar13 == 1,
                    cVar12 == '\0');
      pcVar1 = pcVar17 + 0x1c;
      pcVar17 = pcVar17 + 0x38;
    } while (pcVar1 != pcVar6 + (longlong)iVar4 * 0x38);
  }
  cVar12 = FUN_1423b61e0(param_2);
  if (cVar12 != '\0') {
    FUN_1423be6d0(param_2,0,0);
    (**(code **)(*param_2 + 0x960))(param_2,0);
    FUN_1423b8300(param_2);
    pfVar2 = (float *)(param_2 + 0x50);
    if (((*(float *)(param_2 + 0x3f) == *pfVar2) &&
        (*(float *)((longlong)param_2 + 0x1fc) == *(float *)((longlong)param_2 + 0x284))) &&
       (*(float *)(param_2 + 0x40) == *(float *)(param_2 + 0x51))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (bVar10) {
      local_58 = *(undefined ***)*(undefined1 (*) [12])(param_2 + 0x3f);
      auVar20._12_4_ = 0;
      auVar20._0_12_ = *(undefined1 (*) [12])(param_2 + 0x3f);
      fVar7 = (float)DAT_146acb9a0;
      fVar8 = DAT_146acb9a0._4_4_;
      fVar9 = DAT_146acb9a0._8_4_;
      auVar20 = divps(auVar20,_DAT_146acb9a0);
      fVar21 = SUB84(local_58,0) - (float)(int)auVar20._0_4_ * fVar7;
      fVar22 = (float)((ulonglong)local_58 >> 0x20) - (float)(int)auVar20._4_4_ * fVar8;
      fVar23 = *(float *)(param_2 + 0x40) - (float)(int)auVar20._8_4_ * fVar9;
      fVar21 = (float)(((uint)(fVar21 + fVar7) ^ (uint)fVar21) & -(uint)(0.0 <= fVar21) ^
                      (uint)(fVar21 + fVar7));
      fVar22 = (float)(((uint)(fVar22 + fVar8) ^ (uint)fVar22) & -(uint)(0.0 <= fVar22) ^
                      (uint)(fVar22 + fVar8));
      fVar23 = (float)(((uint)(fVar23 + fVar9) ^ (uint)fVar23) & -(uint)(0.0 <= fVar23) ^
                      (uint)(fVar23 + fVar9));
      local_50 = ((uint)(fVar23 - fVar9) ^ (uint)fVar23) & -(uint)(fRam0000000146acb998 < fVar23) ^
                 (uint)fVar23;
      *(ulonglong *)pfVar2 =
           CONCAT44(((uint)(fVar22 - fVar8) ^ (uint)fVar22) & -(uint)(fRam0000000146acb994 < fVar22)
                    ^ (uint)fVar22,
                    ((uint)(fVar21 - fVar7) ^ (uint)fVar21) & -(uint)(_DAT_146acb990 < fVar21) ^
                    (uint)fVar21);
      *(uint *)(param_2 + 0x51) = local_50;
      plVar16 = (longlong *)FRotator::Quaternion(pfVar2,&local_58);
      lVar14 = plVar16[1];
      param_2[0x4e] = *plVar16;
      param_2[0x4f] = lVar14;
    }
    local_48 = param_2[0x4e];
    lStack_40 = param_2[0x4f];
    FUN_14239b520(param_2,param_2[0x32],param_2[0x33],0,&local_48,
                  (ulonglong)in_stack_ffffffffffffff70 & 0xffffffffffffff00);
    (**(code **)(*param_2 + 0x990))(param_2);
    UActorComponent::MarkRenderDynamicDataDirty(param_2);
    FUN_1423424c0(param_2);
  }
  local_48 = CONCAT44(0xffffffff,DAT_1464e8628);
  param_7[0x5a] = local_48;
  *(undefined4 *)(param_7 + 0x5b) = 0xffffffff;
  *(undefined1 *)((longlong)param_7 + 0x2dc) = *(undefined1 *)((longlong)param_7 + 0x2dd);
  return;
}



// FUNCTION 141fd74f0 FUN_141fd74f0 body=952 status=ok
// SIG undefined FUN_141fd74f0(void)

void FUN_141fd74f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  
  plVar5 = (longlong *)FUN_141f63360();
  if (plVar5 != (longlong *)0x0) {
    local_50 = &PTR_FUN_144f45f70;
    lVar6 = DAT_146acbb10;
    if (DAT_146acbb10 == 0) {
      lVar6 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbb10,0);
    }
    uVar10 = 0;
    plVar7 = *(longlong **)(param_4 + 0x10);
    bVar2 = false;
    uVar8 = (longlong)*(int *)(param_4 + 0x18) & 0x1fffffffffffffff;
    if (plVar7 + *(int *)(param_4 + 0x18) < plVar7) {
      uVar8 = uVar10;
    }
    uVar9 = uVar10;
    bVar3 = false;
    if (uVar8 != 0) {
      do {
        bVar2 = bVar3;
        lVar1 = *plVar7;
        if (*(char *)(lVar1 + 0x3c) == '\x01') {
          *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar1 + 0x30);
          *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar1 + 0x38);
          *(undefined1 *)(param_7 + 0x2dc) = 2;
          local_40 = *(undefined4 *)(param_7 + 0x2d8);
          local_48 = *(undefined8 *)(param_7 + 0x2d0);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_7 + 0xf8,lVar6,&local_50,plVar5,2,&local_48);
          bVar2 = true;
        }
        plVar7 = plVar7 + 1;
        uVar9 = uVar9 + 1;
        bVar3 = bVar2;
      } while (uVar9 != uVar8);
    }
    local_48 = CONCAT44(0xffffffff,DAT_1464e8628);
    *(undefined8 *)(param_7 + 0x2d0) = local_48;
    *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
    *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
    if (!bVar2) {
      local_40 = *(undefined4 *)(param_7 + 0x2d8);
      local_48 = *(undefined8 *)(param_7 + 0x2d0);
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_7 + 0xf8,lVar6,&local_50,plVar5,*(undefined1 *)(param_7 + 0x2dd),&local_48);
    }
    local_50 = &PTR_FUN_144f45f88;
    lVar6 = DAT_146acbb18;
    if (DAT_146acbb18 == 0) {
      lVar6 = FMovieSceneAnimTypeID::Initialize(&DAT_146acbb18,0);
    }
    bVar2 = false;
    plVar7 = *(longlong **)(param_4 + 0x10);
    uVar8 = (longlong)*(int *)(param_4 + 0x18) & 0x1fffffffffffffff;
    if (plVar7 + *(int *)(param_4 + 0x18) < plVar7) {
      uVar8 = uVar10;
    }
    bVar3 = false;
    if (uVar8 != 0) {
      do {
        bVar2 = bVar3;
        lVar1 = *plVar7;
        if (*(char *)(lVar1 + 0x3c) == '\x01') {
          *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar1 + 0x30);
          *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar1 + 0x38);
          *(undefined1 *)(param_7 + 0x2dc) = 2;
          local_40 = *(undefined4 *)(param_7 + 0x2d8);
          local_48 = *(undefined8 *)(param_7 + 0x2d0);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_7 + 0xf8,lVar6,&local_50,plVar5,2,&local_48);
          bVar2 = true;
        }
        plVar7 = plVar7 + 1;
        uVar10 = uVar10 + 1;
        bVar3 = bVar2;
      } while (uVar10 != uVar8);
    }
    local_48 = CONCAT44(0xffffffff,DAT_1464e8628);
    *(undefined8 *)(param_7 + 0x2d0) = local_48;
    *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
    *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
    if (!bVar2) {
      local_40 = *(undefined4 *)(param_7 + 0x2d8);
      local_48 = *(undefined8 *)(param_7 + 0x2d0);
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_7 + 0xf8,lVar6,&local_50,plVar5,*(undefined1 *)(param_7 + 0x2dd),&local_48);
    }
    (**(code **)(*plVar5 + 0x500))(plVar5,2);
    local_50._4_4_ = (float)((ulonglong)*(undefined8 *)(param_5 + 0x10) >> 0x20);
    local_48._4_4_ = (float)((ulonglong)*(undefined8 *)(param_5 + 4) >> 0x20);
    local_50._4_4_ = local_50._4_4_ - local_48._4_4_;
    iVar4 = (int)ROUND((local_50._4_4_ + local_50._4_4_) - 0.5) >> 1;
    local_50._0_4_ =
         ((int)*(undefined8 *)(param_5 + 0x10) - (int)*(undefined8 *)(param_5 + 4)) + iVar4;
    local_50._4_4_ = local_50._4_4_ - (float)iVar4;
    if (0.0 <= local_50._4_4_) {
      if (0.99999994 <= local_50._4_4_) {
        local_50._4_4_ = 0.99999994;
      }
    }
    else {
      local_50._4_4_ = 0.0;
    }
    local_48._4_4_ = local_50._4_4_;
    iVar4 = (int)((ulonglong)*(undefined8 *)(param_5 + 0x18) >> 0x20);
    local_48._0_4_ = (int)local_50;
    FUN_141fd9320(param_3,plVar5,
                  ((float)((longlong)(int)local_50 * (longlong)iVar4) +
                  (float)iVar4 * local_50._4_4_) / (float)(int)*(undefined8 *)(param_5 + 0x18));
  }
  return;
}



// FUNCTION 141fd78b0 FUN_141fd78b0 body=527 status=ok
// SIG undefined FUN_141fd78b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141fd7a34) */
/* WARNING: Removing unreachable block (ram,0x000141fd7a3a) */

void FUN_141fd78b0(undefined8 param_1,longlong *param_2,undefined1 (*param_3) [12])

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  byte bVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146acbb78) && (_Init_thread_header(&DAT_146acbb78), DAT_146acbb78 == -1))
  {
    FMovieSceneAnimTypeID::Unique(&DAT_146acbb70);
    _Init_thread_footer(&DAT_146acbb78);
  }
  uVar10 = DAT_146acbb70;
  puVar11 = (undefined8 *)FRotator::Quaternion(param_3 + 1,local_d8);
  auVar6 = *param_3;
  uVar8 = *puVar11;
  uVar9 = puVar11[1];
  auVar7 = param_3[2];
  local_c8 = (undefined8 *)FMemory::Malloc(0x40);
  local_88 = local_88 & 0xfd | 1;
  *local_c8 = uVar10;
  local_c8[2] = uVar8;
  local_c8[3] = uVar9;
  auVar4._12_4_ = 0;
  auVar4._0_12_ = auVar6;
  *(undefined1 (*) [16])(local_c8 + 4) = auVar4;
  auVar5._12_4_ = 0;
  auVar5._0_12_ = auVar7;
  *(undefined1 (*) [16])(local_c8 + 6) = auVar5;
  iVar2 = (int)param_2[1];
  lVar13 = (longlong)iVar2;
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  lVar3 = *param_2;
  bVar12 = *(byte *)(lVar3 + 0x40 + lVar13 * 0x48) & 0xfe;
  *(byte *)(lVar3 + 0x40 + lVar13 * 0x48) = bVar12 | 2;
  if ((local_88 & 1) != 0) {
    bVar12 = bVar12 | 3;
    puVar11 = (undefined8 *)(lVar3 + lVar13 * 0x48);
    *puVar11 = local_c8;
    puVar11[1] = uStack_c0;
    puVar11 = (undefined8 *)(lVar3 + 0x10 + lVar13 * 0x48);
    *puVar11 = local_b8;
    puVar11[1] = uStack_b0;
    *(byte *)(lVar3 + 0x40 + lVar13 * 0x48) = (local_88 & 0xfe ^ bVar12) & 2 ^ bVar12;
    puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar13 * 0x48);
    *puVar1 = local_a8;
    puVar1[1] = uStack_a4;
    puVar1[2] = uStack_a0;
    puVar1[3] = uStack_9c;
    puVar1 = (undefined4 *)(lVar3 + 0x30 + lVar13 * 0x48);
    *puVar1 = local_98;
    puVar1[1] = uStack_94;
    puVar1[2] = uStack_90;
    puVar1[3] = uStack_8c;
  }
  return;
}



// FUNCTION 141fd7ac0 FUN_141fd7ac0 body=491 status=ok
// SIG undefined FUN_141fd7ac0(void)

longlong FUN_141fd7ac0(longlong param_1,int param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined **local_res8;
  int local_res10 [2];
  undefined **local_res18 [2];
  undefined1 local_a8 [16];
  undefined8 *local_98;
  undefined ***local_90;
  undefined1 local_88 [80];
  
  if (0 < (param_2 - *(int *)(param_1 + 0x10)) + 1) {
    TArray<TMap<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>_>,FDefaultAllocator>
    ::AddDefaulted(param_1 + 8);
  }
  local_res18[0] = (undefined **)0xffffffff;
  if (param_3 != (longlong *)0x0) {
    FWeakObjectPtr::operator=(&local_res8,param_3);
    local_res18[0] = local_res8;
  }
  plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + (longlong)param_2 * 0x50);
  TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::FindId(plVar5,local_res10,local_res18);
  if ((local_res10[0] == -1) || (lVar1 = *plVar5 + (longlong)local_res10[0] * 0x18, lVar1 == 0)) {
    local_res8 = (undefined **)0xffffffff;
  }
  else {
    local_res8 = *(undefined ***)(lVar1 + 8);
  }
  lVar1 = FWeakObjectPtr::Get(&local_res8);
  if (lVar1 == 0) {
    uVar2 = GetTransientPackage();
    uVar2 = NewObject<USoundCue>(uVar2);
    uVar3 = (**(code **)(*param_3 + 0x148))(param_3);
    FAudioDevice::FCreateComponentParams::FCreateComponentParams(local_88,uVar3,param_3);
    lVar1 = FUN_1422c5640(uVar2,local_88);
    if (lVar1 == 0) {
      local_res8 = (undefined **)param_3[3];
      FName::ToString(&local_res8,&local_98);
      if (local_98 != (undefined8 *)0x0) {
        FMemory::Free();
      }
      lVar1 = 0;
    }
    else {
      local_res8 = &PTR_FUN_144f47a48;
      puVar4 = (undefined8 *)FMovieSceneAnimTypeID::Unique(local_a8);
      local_98 = *(undefined8 **)(param_4 + 0x2d0);
      local_90 = (undefined ***)CONCAT44(local_90._4_4_,*(undefined4 *)(param_4 + 0x2d8));
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_4 + 0xf8,*puVar4,&local_res8,lVar1,*(undefined1 *)(param_4 + 0x2dc),&local_98
                );
      FWeakObjectPtr::operator=(&local_res8,lVar1);
      local_98 = local_res18;
      local_90 = &local_res8;
      TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FObjectKey_&&,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_&&>_>
                (*(longlong *)(param_1 + 8) + (longlong)param_2 * 0x50,local_res10,&local_98,0);
      *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 0x40;
      local_res8 = (undefined **)0x0;
      FUN_142382f60(lVar1,param_3[0x2d],&DAT_146af29ec,0);
    }
  }
  return lVar1;
}



// FUNCTION 141fd7cb0 FUN_141fd7cb0 body=282 status=ok
// SIG undefined FUN_141fd7cb0(void)

void FUN_141fd7cb0(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong param_4,
                  longlong param_5,undefined4 *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar8 = UMovieScene3DAttachSection::GetPrivateStaticClass();
  plVar9 = (longlong *)FUN_1417985e0(uVar8,param_1,0,0,0,0,0,0,0);
  *(uint *)(plVar9 + 1) = *(uint *)(plVar9 + 1) | 8;
  cVar6 = UMovieSceneSection::TryModify(plVar9,1);
  if (cVar6 != '\0') {
    uVar3 = param_6[3];
    uVar4 = param_6[4];
    uVar5 = param_6[5];
    *(undefined4 *)(plVar9 + 0x1f) = param_6[2];
    *(undefined4 *)((longlong)plVar9 + 0xfc) = uVar3;
    *(undefined4 *)(plVar9 + 0x20) = uVar4;
    *(undefined4 *)((longlong)plVar9 + 0x104) = uVar5;
    *(undefined4 *)(plVar9 + 0x1e) = *param_6;
    *(undefined1 *)((longlong)plVar9 + 0xf4) = *(undefined1 *)(param_6 + 1);
  }
  lVar2 = *plVar9;
  uVar7 = (**(code **)(*param_1 + 0x2d0))(param_1);
  (**(code **)(lVar2 + 0x2b0))(plVar9,param_1 + 0xb,param_2,param_3,uVar7);
  plVar9[0x22] = param_5;
  plVar9[0x21] = param_4;
  iVar1 = (int)param_1[0xc];
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar1);
  }
  *(longlong **)(param_1[0xb] + (longlong)iVar1 * 8) = plVar9;
  return;
}



// FUNCTION 141fd7dd0 FUN_141fd7dd0 body=251 status=ok
// SIG undefined FUN_141fd7dd0(void)

void FUN_141fd7dd0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar8 = UMovieScene3DPathSection::GetPrivateStaticClass();
  plVar9 = (longlong *)FUN_1417985e0(uVar8,param_1,0,0,0,0,0,0,0);
  cVar6 = UMovieSceneSection::TryModify(plVar9,1);
  if (cVar6 != '\0') {
    uVar3 = param_6[3];
    uVar4 = param_6[4];
    uVar5 = param_6[5];
    *(undefined4 *)(plVar9 + 0x1f) = param_6[2];
    *(undefined4 *)((longlong)plVar9 + 0xfc) = uVar3;
    *(undefined4 *)(plVar9 + 0x20) = uVar4;
    *(undefined4 *)((longlong)plVar9 + 0x104) = uVar5;
    *(undefined4 *)(plVar9 + 0x1e) = *param_6;
    *(undefined1 *)((longlong)plVar9 + 0xf4) = *(undefined1 *)(param_6 + 1);
  }
  lVar2 = *plVar9;
  uVar7 = (**(code **)(*param_1 + 0x2d0))(param_1);
  (**(code **)(lVar2 + 0x2b0))(plVar9,param_1 + 0xb,param_2,param_3,uVar7);
  iVar1 = (int)param_1[0xc];
  *(int *)(param_1 + 0xc) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xb,iVar1);
  }
  *(longlong **)(param_1[0xb] + (longlong)iVar1 * 8) = plVar9;
  return;
}



// FUNCTION 141fd7ed0 AddDefaulted body=127 status=ok
// SIG undefined AddDefaulted(void)

int TArray<TMap<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>_>,FDefaultAllocator>
    ::AddDefaulted(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x50 + *param_1);
  if (param_2 != 0) {
    lVar2 = (longlong)puVar3 + 0x2c;
    do {
      *puVar3 = 0;
      puVar3 = puVar3 + 10;
      *(undefined8 *)(lVar2 + -0x24) = 0;
      *(undefined8 *)(lVar2 + -0xc) = 0;
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined4 *)(lVar2 + 4) = 0xffffffff;
      *(undefined4 *)(lVar2 + 8) = 0;
      *(undefined8 *)(lVar2 + 0x14) = 0;
      *(undefined4 *)(lVar2 + 0x1c) = 0;
      lVar2 = lVar2 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 141fd7f50 FUN_141fd7f50 body=315 status=ok
// SIG undefined FUN_141fd7f50(void)

longlong * FUN_141fd7f50(longlong *param_1,undefined4 param_2,longlong param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2e8))();
  if (plVar5 != (longlong *)0x0) {
    lVar6 = UMovieSceneSkeletalAnimationSection::GetPrivateStaticClass();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_141fd7fbe;
  }
  plVar5 = (longlong *)0x0;
LAB_141fd7fbe:
  uVar7 = UMovieScene::GetPrivateStaticClass();
  lVar6 = UObjectBaseUtility::GetTypedOuter(param_1,uVar7);
  dVar2 = ((double)*(float *)(param_3 + 0x90) * (double)(int)*(undefined8 *)(lVar6 + 0xb8)) /
          (double)(int)((ulonglong)*(undefined8 *)(lVar6 + 0xb8) >> 0x20);
  lVar6 = (longlong)dVar2;
  if ((lVar6 != -0x8000000000000000) && ((double)lVar6 != dVar2)) {
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    uVar4 = movmskpd(0,auVar1);
    dVar2 = (double)(longlong)(lVar6 - (ulonglong)(uVar4 & 1));
  }
  (**(code **)(*plVar5 + 0x2b8))(plVar5,param_1 + 0xb,param_2,(int)dVar2,param_4);
  plVar5[0x1c] = param_3;
  (**(code **)(*param_1 + 0x2e0))(param_1,plVar5);
  return plVar5;
}



// FUNCTION 141fd8090 FUN_141fd8090 body=340 status=ok
// SIG undefined FUN_141fd8090(void)

longlong * FUN_141fd8090(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2e8))();
  if (plVar6 != (longlong *)0x0) {
    lVar7 = UMovieSceneCameraAnimSection::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar8 = UMovieScene::GetPrivateStaticClass();
      lVar7 = UObjectBaseUtility::GetTypedOuter(param_1,uVar8);
      dVar2 = ((double)*(float *)(param_3 + 0x30) * (double)(int)*(undefined8 *)(lVar7 + 0xb8)) /
              (double)(int)((ulonglong)*(undefined8 *)(lVar7 + 0xb8) >> 0x20);
      lVar7 = (longlong)dVar2;
      if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != dVar2)) {
        auVar1._8_4_ = SUB84(dVar2,0);
        auVar1._0_8_ = dVar2;
        auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        uVar5 = movmskpd(0,auVar1);
        dVar2 = (double)(longlong)(lVar7 - (ulonglong)(uVar5 & 1));
      }
      lVar7 = *plVar6;
      uVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
      (**(code **)(lVar7 + 0x2b0))(plVar6,param_1 + 0xb,param_2,(int)dVar2,uVar4);
      plVar6[0x1c] = param_3;
      (**(code **)(*param_1 + 0x2e0))(param_1,plVar6);
      return plVar6;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 141fd81f0 FUN_141fd81f0 body=346 status=ok
// SIG undefined FUN_141fd81f0(void)

longlong * FUN_141fd81f0(longlong *param_1,undefined4 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2e8))();
  if (plVar6 != (longlong *)0x0) {
    lVar7 = UMovieSceneCameraShakeSection::GetPrivateStaticClass();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar8 = UMovieScene::GetPrivateStaticClass();
      lVar9 = UObjectBaseUtility::GetTypedOuter(param_1,uVar8);
      lVar7 = *plVar6;
      uVar8 = *(undefined8 *)(lVar9 + 0xb8);
      uVar4 = (**(code **)(*param_1 + 0x2d0))(param_1);
      dVar2 = (5.0 / (double)(int)((ulonglong)uVar8 >> 0x20)) * (double)(int)uVar8;
      lVar9 = (longlong)dVar2;
      if ((lVar9 != -0x8000000000000000) && ((double)lVar9 != dVar2)) {
        auVar1._8_4_ = SUB84(dVar2,0);
        auVar1._0_8_ = dVar2;
        auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        uVar5 = movmskpd(0,auVar1);
        dVar2 = (double)(longlong)(lVar9 - (ulonglong)(uVar5 & 1));
      }
      (**(code **)(lVar7 + 0x2b0))(plVar6,param_1 + 0xb,param_2,(int)dVar2,uVar4);
      plVar6[0x1c] = param_3;
      (**(code **)(*param_1 + 0x2e0))(param_1,plVar6);
      return plVar6;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 141fd8350 FUN_141fd8350 body=155 status=ok
// SIG undefined FUN_141fd8350(void)

void FUN_141fd8350(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = param_1 + 0xb;
  lVar4 = MovieSceneHelpers::FindSectionAtTime(plVar1);
  if (lVar4 != 0) {
    return;
  }
  lVar4 = (**(code **)(*param_1 + 0x2e8))(param_1);
  if (lVar4 != 0) {
    lVar5 = UMovieSceneParticleSection::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_141fd83bb;
  }
  lVar4 = 0;
LAB_141fd83bb:
  iVar2 = (int)param_1[0xc];
  *(int *)(param_1 + 0xc) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 100) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
  return;
}



// FUNCTION 141fd83f0 FUN_141fd83f0 body=532 status=ok
// SIG undefined FUN_141fd83f0(void)

longlong * FUN_141fd83f0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  float extraout_XMM0_Da;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar4 = UMovieScene::GetPrivateStaticClass();
  lVar5 = UObjectBaseUtility::GetTypedOuter(param_1,uVar4);
  iVar1 = (int)*(undefined8 *)(lVar5 + 0xb8);
  iVar8 = (int)((ulonglong)*(undefined8 *)(lVar5 + 0xb8) >> 0x20);
  auVar10._0_8_ = (double)iVar1 / (double)iVar8;
  lVar7 = (longlong)auVar10._0_8_;
  if ((lVar7 != -0x8000000000000000) && ((double)lVar7 != auVar10._0_8_)) {
    auVar10._8_8_ = auVar10._0_8_;
    uVar2 = movmskpd((int)lVar5,auVar10);
    auVar10._0_8_ = (double)(longlong)(lVar7 - (ulonglong)(uVar2 & 1));
  }
  uVar3 = FUN_141f53de0(param_2);
  if (extraout_XMM0_Da != 10000.0) {
    auVar10._0_8_ = ((double)iVar1 * (double)extraout_XMM0_Da) / (double)iVar8;
    lVar5 = (longlong)auVar10._0_8_;
    if ((lVar5 != -0x8000000000000000) && ((double)lVar5 != auVar10._0_8_)) {
      auVar9._8_8_ = auVar10._0_8_;
      auVar9._0_8_ = auVar10._0_8_;
      uVar2 = movmskpd(uVar3,auVar9);
      auVar10._0_8_ = (double)(longlong)(lVar5 - (ulonglong)(uVar2 & 1));
    }
  }
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar4 = UMovieSceneAudioSection::GetPrivateStaticClass();
  plVar6 = (longlong *)FUN_1417985e0(uVar4,param_1,0,0,0,0,0,0,0);
  (**(code **)(*plVar6 + 0x2b8))(plVar6,param_1 + 0x58,param_3,(int)auVar10._0_8_,param_4);
  plVar6[0x1c] = param_2;
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = plVar6;
  return plVar6;
}



// FUNCTION 141fd8610 AddSection body=126 status=ok
// SIG undefined AddSection(void)

void UMovieSceneCameraCutTrack::AddSection(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = UMovieSceneCameraCutSection::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar1 + 1;
    if (*(int *)(param_1 + 100) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 141fd8690 AddSection body=126 status=ok
// SIG undefined AddSection(void)

void UMovieSceneCinematicShotTrack::AddSection(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = UMovieSceneCinematicShotSection::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
      != lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = iVar1 + 1;
    if (*(int *)(param_1 + 100) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 141fd8710 AddSection body=70 status=ok
// SIG undefined AddSection(void)

void UMovieSceneEventTrack::AddSection(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar1 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
              ((longlong *)(param_1 + 0x70),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8) = param_2;
  return;
}



// FUNCTION 141fd8760 AddSequenceOnRow body=62 status=ok
// SIG undefined AddSequenceOnRow(void)

longlong UMovieSceneCinematicShotTrack::AddSequenceOnRow(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_141f40410();
  if (lVar1 != 0) {
    UMovieSceneCinematicShotSection::GetPrivateStaticClass();
  }
  MovieSceneHelpers::SortConsecutiveSections(param_1 + 0x58);
  return lVar1;
}



// FUNCTION 141fd87a0 AddTo body=236 status=ok
// SIG undefined AddTo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableToken<float>::TData<float>::AddTo
               (longlong param_1,float *param_2,float param_3,char param_4,undefined8 param_5)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  fVar2 = *(float *)(param_1 + 8);
  if (param_4 == '\x01') {
    fVar2 = fVar2 * param_3;
    if (((uint)param_2[1] & 1) != 0) {
      fVar2 = fVar2 + *param_2;
    }
    *param_2 = fVar2;
    param_2[1] = (float)((uint)param_2[1] | 1);
  }
  else {
    if (param_4 != '\x04') {
      if (param_4 != '\x02') {
        return;
      }
      fVar2 = fVar2 * param_3;
      if (((uint)param_2[4] & 1) != 0) {
        fVar2 = fVar2 + param_2[3];
      }
      param_2[3] = fVar2;
      param_2[4] = (float)((uint)param_2[4] | 1);
      return;
    }
    if (*(char *)(param_2 + 7) == '\0') {
      param_2[6] = 0.0;
      *(undefined1 *)(param_2 + 7) = 1;
      uVar1 = TMovieSceneInitialValueStore<float>::GetInitialValue(param_5);
      *(ulonglong *)(param_2 + 5) = CONCAT44(1,uVar1);
    }
    fVar2 = (fVar2 + param_2[5]) * param_3;
    if (((uint)param_2[1] & 1) != 0) {
      fVar2 = fVar2 + *param_2;
    }
    *param_2 = fVar2;
    param_2[1] = (float)((uint)param_2[1] | 1);
  }
  param_2[2] = param_3 + param_2[2];
  return;
}



// FUNCTION 141fd8890 AddTo body=369 status=ok
// SIG undefined AddTo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableToken<FVector2D>::TData<MovieScene::TMultiChannelValue<float,2>_>::AddTo
               (longlong param_1,longlong param_2,float param_3,char param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70 [8];
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  pfVar5 = (float *)(param_2 + 0xc);
  uVar2 = 0;
  do {
    uVar4 = 1 << ((byte)uVar2 & 0x1f);
    if ((*(uint *)(param_1 + 0x10) & uVar4) != 0) {
      uVar3 = uVar2 & 0xff;
      fVar6 = *(float *)(param_1 + 8 + uVar3 * 4);
      if (param_4 != '\x01') {
        if (param_4 != '\x04') {
          if (param_4 == '\x02') {
            fVar6 = fVar6 * param_3;
            if ((*(uint *)(param_2 + 0x1c) & uVar4) != 0) {
              fVar6 = fVar6 + *(float *)(param_2 + 0x14 + uVar3 * 4);
            }
            *(float *)(param_2 + 0x14 + uVar3 * 4) = fVar6;
            *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | uVar4;
          }
          goto LAB_141fd89b9;
        }
        if (*(char *)(param_2 + 0x2c) == '\0') {
          *(undefined4 *)(param_2 + 0x28) = 0;
          *(undefined1 *)(param_2 + 0x2c) = 1;
          puVar1 = (undefined8 *)
                   TMovieSceneInitialValueStore<FVector2D>::GetInitialValue(param_5,local_70);
          local_78 = *(undefined4 *)puVar1;
          uStack_74 = *(undefined4 *)((longlong)puVar1 + 4);
          local_68 = *puVar1;
          *(undefined8 *)(param_2 + 0x20) = local_68;
          *(undefined4 *)(param_2 + 0x28) = 3;
        }
        fVar6 = fVar6 + *(float *)(param_2 + 0x20 + uVar3 * 4);
      }
      fVar6 = fVar6 * param_3;
      if ((*(uint *)(param_2 + 8) & uVar4) != 0) {
        fVar6 = fVar6 + *(float *)(param_2 + uVar3 * 4);
      }
      *(float *)(param_2 + uVar3 * 4) = fVar6;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | uVar4;
      *pfVar5 = param_3 + *pfVar5;
    }
LAB_141fd89b9:
    uVar4 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar4;
    pfVar5 = pfVar5 + 1;
    if (1 < (int)uVar4) {
      return;
    }
  } while( true );
}



// FUNCTION 141fd8a10 AddTo body=367 status=ok
// SIG undefined AddTo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableToken<FVector>::TData<MovieScene::TMultiChannelValue<float,3>_>::AddTo
               (longlong param_1,longlong param_2,float param_3,char param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  pfVar5 = (float *)(param_2 + 0x10);
  uVar2 = 0;
  do {
    uVar4 = 1 << ((byte)uVar2 & 0x1f);
    if ((*(uint *)(param_1 + 0x14) & uVar4) != 0) {
      uVar3 = uVar2 & 0xff;
      fVar6 = *(float *)(param_1 + 8 + uVar3 * 4);
      if (param_4 != '\x01') {
        if (param_4 != '\x04') {
          if (param_4 == '\x02') {
            fVar6 = fVar6 * param_3;
            if ((*(uint *)(param_2 + 0x28) & uVar4) != 0) {
              fVar6 = fVar6 + *(float *)(param_2 + 0x1c + uVar3 * 4);
            }
            *(float *)(param_2 + 0x1c + uVar3 * 4) = fVar6;
            *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) | uVar4;
          }
          goto LAB_141fd8b34;
        }
        if (*(char *)(param_2 + 0x3c) == '\0') {
          *(undefined4 *)(param_2 + 0x38) = 0;
          *(undefined1 *)(param_2 + 0x3c) = 1;
          puVar1 = (undefined8 *)
                   TMovieSceneInitialValueStore<FVector>::GetInitialValue(param_5,local_88);
          uStack_6c = 7;
          local_78 = *puVar1;
          uStack_70 = *(undefined4 *)(puVar1 + 1);
          *(undefined8 *)(param_2 + 0x2c) = local_78;
          *(ulonglong *)(param_2 + 0x34) = CONCAT44(7,uStack_70);
          local_68 = local_78;
        }
        fVar6 = fVar6 + *(float *)(param_2 + 0x2c + uVar3 * 4);
      }
      fVar6 = fVar6 * param_3;
      if ((*(uint *)(param_2 + 0xc) & uVar4) != 0) {
        fVar6 = fVar6 + *(float *)(param_2 + uVar3 * 4);
      }
      *(float *)(param_2 + uVar3 * 4) = fVar6;
      *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | uVar4;
      *pfVar5 = param_3 + *pfVar5;
    }
LAB_141fd8b34:
    uVar4 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar4;
    pfVar5 = pfVar5 + 1;
    if (2 < (int)uVar4) {
      return;
    }
  } while( true );
}



// FUNCTION 141fd8b80 AddTo body=335 status=ok
// SIG undefined AddTo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableToken<FLinearColor>::TData<MovieScene::TMultiChannelValue<float,4>_>::AddTo
               (longlong param_1,longlong param_2,float param_3,char param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  pfVar5 = (float *)(param_2 + 0x14);
  uVar2 = 0;
  do {
    uVar4 = 1 << ((byte)uVar2 & 0x1f);
    if ((*(uint *)(param_1 + 0x18) & uVar4) != 0) {
      uVar3 = uVar2 & 0xff;
      fVar6 = *(float *)(param_1 + 8 + uVar3 * 4);
      if (param_4 != '\x01') {
        if (param_4 != '\x04') {
          if (param_4 == '\x02') {
            fVar6 = fVar6 * param_3;
            if ((*(uint *)(param_2 + 0x34) & uVar4) != 0) {
              fVar6 = fVar6 + *(float *)(param_2 + 0x24 + uVar3 * 4);
            }
            *(float *)(param_2 + 0x24 + uVar3 * 4) = fVar6;
            *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | uVar4;
          }
          goto LAB_141fd8c87;
        }
        if (*(char *)(param_2 + 0x4c) == '\0') {
          *(undefined4 *)(param_2 + 0x48) = 0;
          *(undefined1 *)(param_2 + 0x4c) = 1;
          puVar1 = (undefined8 *)
                   TMovieSceneInitialValueStore<FLinearColor>::GetInitialValue(param_5,local_78);
          local_68 = *puVar1;
          uStack_60 = puVar1[1];
          *(undefined8 *)(param_2 + 0x38) = local_68;
          *(undefined8 *)(param_2 + 0x40) = uStack_60;
          *(undefined4 *)(param_2 + 0x48) = 0xf;
        }
        fVar6 = fVar6 + *(float *)(param_2 + 0x38 + uVar3 * 4);
      }
      fVar6 = fVar6 * param_3;
      if ((*(uint *)(param_2 + 0x10) & uVar4) != 0) {
        fVar6 = fVar6 + *(float *)(param_2 + uVar3 * 4);
      }
      *(float *)(param_2 + uVar3 * 4) = fVar6;
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | uVar4;
      *pfVar5 = param_3 + *pfVar5;
    }
LAB_141fd8c87:
    uVar4 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar4;
    pfVar5 = pfVar5 + 1;
    if (3 < (int)uVar4) {
      return;
    }
  } while( true );
}



// FUNCTION 141fd8cd0 AddTo body=335 status=ok
// SIG undefined AddTo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void TBlendableToken<FVector4>::TData<MovieScene::TMultiChannelValue<float,4>_>::AddTo
               (longlong param_1,longlong param_2,float param_3,char param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  pfVar5 = (float *)(param_2 + 0x14);
  uVar2 = 0;
  do {
    uVar4 = 1 << ((byte)uVar2 & 0x1f);
    if ((*(uint *)(param_1 + 0x18) & uVar4) != 0) {
      uVar3 = uVar2 & 0xff;
      fVar6 = *(float *)(param_1 + 8 + uVar3 * 4);
      if (param_4 != '\x01') {
        if (param_4 != '\x04') {
          if (param_4 == '\x02') {
            fVar6 = fVar6 * param_3;
            if ((*(uint *)(param_2 + 0x34) & uVar4) != 0) {
              fVar6 = fVar6 + *(float *)(param_2 + 0x24 + uVar3 * 4);
            }
            *(float *)(param_2 + 0x24 + uVar3 * 4) = fVar6;
            *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) | uVar4;
          }
          goto LAB_141fd8dd7;
        }
        if (*(char *)(param_2 + 0x4c) == '\0') {
          *(undefined4 *)(param_2 + 0x48) = 0;
          *(undefined1 *)(param_2 + 0x4c) = 1;
          puVar1 = (undefined8 *)
                   TMovieSceneInitialValueStore<FVector4>::GetInitialValue(param_5,local_78);
          local_68 = *puVar1;
          uStack_60 = puVar1[1];
          *(undefined8 *)(param_2 + 0x38) = local_68;
          *(undefined8 *)(param_2 + 0x40) = uStack_60;
          *(undefined4 *)(param_2 + 0x48) = 0xf;
        }
        fVar6 = fVar6 + *(float *)(param_2 + 0x38 + uVar3 * 4);
      }
      fVar6 = fVar6 * param_3;
      if ((*(uint *)(param_2 + 0x10) & uVar4) != 0) {
        fVar6 = fVar6 + *(float *)(param_2 + uVar3 * 4);
      }
      *(float *)(param_2 + uVar3 * 4) = fVar6;
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | uVar4;
      *pfVar5 = param_3 + *pfVar5;
    }
LAB_141fd8dd7:
    uVar4 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar4;
    pfVar5 = pfVar5 + 1;
    if (3 < (int)uVar4) {
      return;
    }
  } while( true );
}



// FUNCTION 141fd8e20 AddTo body=302 status=ok
// SIG undefined AddTo(void)

void TBlendableToken<F3DTransformTrackToken>::TData<MovieScene::TMultiChannelValue<float,9>_>::AddTo
               (longlong param_1,longlong param_2,float param_3,char param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  float *pfVar5;
  float fVar6;
  undefined1 local_78 [80];
  
  pfVar5 = (float *)(param_2 + 0x28);
  uVar4 = 0;
  do {
    uVar3 = 1 << ((byte)uVar4 & 0x1f);
    if ((*(uint *)(param_1 + 0x2c) & uVar3) != 0) {
      uVar2 = uVar4 & 0xff;
      fVar6 = *(float *)(param_1 + 8 + uVar2 * 4);
      if (param_4 != '\x01') {
        if (param_4 != '\x04') {
          if (param_4 == '\x02') {
            fVar6 = fVar6 * param_3;
            if ((*(uint *)(param_2 + 0x70) & uVar3) != 0) {
              fVar6 = fVar6 + *(float *)(param_2 + 0x4c + uVar2 * 4);
            }
            *(float *)(param_2 + 0x4c + uVar2 * 4) = fVar6;
            *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) | uVar3;
          }
          goto LAB_141fd8f0d;
        }
        if (*(char *)(param_2 + 0x9c) == '\0') {
          *(undefined4 *)(param_2 + 0x98) = 0;
          *(undefined1 *)(param_2 + 0x9c) = 1;
          uVar1 = TMovieSceneInitialValueStore<F3DTransformTrackToken>::GetInitialValue
                            (param_5,local_78);
          MovieScene::MultiChannelFromData(uVar1,param_2 + 0x74);
        }
        fVar6 = fVar6 + *(float *)(param_2 + 0x74 + uVar2 * 4);
      }
      fVar6 = fVar6 * param_3;
      if ((*(uint *)(param_2 + 0x24) & uVar3) != 0) {
        fVar6 = fVar6 + *(float *)(param_2 + uVar2 * 4);
      }
      *(float *)(param_2 + uVar2 * 4) = fVar6;
      *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) | uVar3;
      *pfVar5 = param_3 + *pfVar5;
    }
LAB_141fd8f0d:
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    pfVar5 = pfVar5 + 1;
    if (8 < (int)uVar3) {
      return;
    }
  } while( true );
}



// FUNCTION 141fd8f50 AddTo body=302 status=ok
// SIG undefined AddTo(void)

void TBlendableToken<FEulerTransform>::TData<MovieScene::TMultiChannelValue<float,9>_>::AddTo
               (longlong param_1,longlong param_2,float param_3,char param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  float *pfVar5;
  float fVar6;
  undefined1 local_78 [80];
  
  pfVar5 = (float *)(param_2 + 0x28);
  uVar4 = 0;
  do {
    uVar3 = 1 << ((byte)uVar4 & 0x1f);
    if ((*(uint *)(param_1 + 0x2c) & uVar3) != 0) {
      uVar2 = uVar4 & 0xff;
      fVar6 = *(float *)(param_1 + 8 + uVar2 * 4);
      if (param_4 != '\x01') {
        if (param_4 != '\x04') {
          if (param_4 == '\x02') {
            fVar6 = fVar6 * param_3;
            if ((*(uint *)(param_2 + 0x70) & uVar3) != 0) {
              fVar6 = fVar6 + *(float *)(param_2 + 0x4c + uVar2 * 4);
            }
            *(float *)(param_2 + 0x4c + uVar2 * 4) = fVar6;
            *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) | uVar3;
          }
          goto LAB_141fd903d;
        }
        if (*(char *)(param_2 + 0x9c) == '\0') {
          *(undefined4 *)(param_2 + 0x98) = 0;
          *(undefined1 *)(param_2 + 0x9c) = 1;
          uVar1 = TMovieSceneInitialValueStore<F3DTransformTrackToken>::GetInitialValue
                            (param_5,local_78);
          MovieScene::MultiChannelFromData(uVar1,param_2 + 0x74);
        }
        fVar6 = fVar6 + *(float *)(param_2 + 0x74 + uVar2 * 4);
      }
      fVar6 = fVar6 * param_3;
      if ((*(uint *)(param_2 + 0x24) & uVar3) != 0) {
        fVar6 = fVar6 + *(float *)(param_2 + uVar2 * 4);
      }
      *(float *)(param_2 + uVar2 * 4) = fVar6;
      *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) | uVar3;
      *pfVar5 = param_3 + *pfVar5;
    }
LAB_141fd903d:
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    pfVar5 = pfVar5 + 1;
    if (8 < (int)uVar3) {
      return;
    }
  } while( true );
}



// FUNCTION 141fd9080 AddTo body=302 status=ok
// SIG undefined AddTo(void)

void TBlendableToken<FTransform>::TData<MovieScene::TMultiChannelValue<float,9>_>::AddTo
               (longlong param_1,longlong param_2,float param_3,char param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  float *pfVar5;
  float fVar6;
  undefined1 local_78 [80];
  
  pfVar5 = (float *)(param_2 + 0x28);
  uVar4 = 0;
  do {
    uVar3 = 1 << ((byte)uVar4 & 0x1f);
    if ((*(uint *)(param_1 + 0x2c) & uVar3) != 0) {
      uVar2 = uVar4 & 0xff;
      fVar6 = *(float *)(param_1 + 8 + uVar2 * 4);
      if (param_4 != '\x01') {
        if (param_4 != '\x04') {
          if (param_4 == '\x02') {
            fVar6 = fVar6 * param_3;
            if ((*(uint *)(param_2 + 0x70) & uVar3) != 0) {
              fVar6 = fVar6 + *(float *)(param_2 + 0x4c + uVar2 * 4);
            }
            *(float *)(param_2 + 0x4c + uVar2 * 4) = fVar6;
            *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) | uVar3;
          }
          goto LAB_141fd916d;
        }
        if (*(char *)(param_2 + 0x9c) == '\0') {
          *(undefined4 *)(param_2 + 0x98) = 0;
          *(undefined1 *)(param_2 + 0x9c) = 1;
          uVar1 = TMovieSceneInitialValueStore<FTransform>::GetInitialValue(param_5,local_78);
          MovieScene::MultiChannelFromData(uVar1,param_2 + 0x74);
        }
        fVar6 = fVar6 + *(float *)(param_2 + 0x74 + uVar2 * 4);
      }
      fVar6 = fVar6 * param_3;
      if ((*(uint *)(param_2 + 0x24) & uVar3) != 0) {
        fVar6 = fVar6 + *(float *)(param_2 + uVar2 * 4);
      }
      *(float *)(param_2 + uVar2 * 4) = fVar6;
      *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) | uVar3;
      *pfVar5 = param_3 + *pfVar5;
    }
LAB_141fd916d:
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    pfVar5 = pfVar5 + 1;
    if (8 < (int)uVar3) {
      return;
    }
  } while( true );
}



// FUNCTION 141fd91b0 AddTo body=106 status=ok
// SIG undefined AddTo(void)

void TBlendableToken<MovieScene::FBlendedAnimation>::TData<FMinimalAnimParameters>::AddTo
               (longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = *param_2;
  lVar5 = (longlong)iVar2 * 0x38;
  *(undefined8 *)(lVar5 + lVar3) = *(undefined8 *)(param_1 + 8);
  ((undefined8 *)(lVar5 + lVar3))[1] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar3);
  *puVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar1[1] = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar3);
  *puVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar5 + 0x30 + lVar3) = *(undefined8 *)(param_1 + 0x38);
  return;
}



// FUNCTION 141fd9220 FUN_141fd9220 body=252 status=ok
// SIG undefined FUN_141fd9220(void)

void FUN_141fd9220(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 local_res8;
  undefined1 local_res9;
  undefined1 local_resa;
  undefined1 local_resb;
  undefined1 local_18 [16];
  
  if (param_1[0x18] == '\0') {
    local_res8 = param_1[3];
    local_res9 = param_1[4];
    local_resa = param_1[5];
    local_resb = 0;
    (**(code **)(*param_2 + 0x418))(param_2,&local_res8);
  }
  else {
    lVar1 = param_2[0x32];
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    if ((lVar1 != lVar2) || (param_2[0x33] != *(longlong *)(param_1 + 0x10))) {
      local_res8 = *param_1;
      local_res9 = param_1[1];
      local_resa = param_1[2];
      local_resb = 0;
      uVar3 = FWeakObjectPtr::Get(param_1 + 8);
      FUN_142382f60(param_2,uVar3,&local_res8,*(undefined8 *)(param_1 + 0x10));
    }
    plVar4 = (longlong *)param_2[0x32];
    if (plVar4 != (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x458))(plVar4,local_18);
      param_2[0x48] = *plVar4;
      *(int *)(param_2 + 0x49) = (int)plVar4[1];
      return;
    }
  }
  return;
}



// FUNCTION 141fd9320 FUN_141fd9320 body=501 status=ok
// SIG undefined FUN_141fd9320(void)

void FUN_141fd9320(undefined8 *param_1,longlong *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  float local_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  
  fVar1 = *(float *)(param_2 + 0x46);
  fVar2 = *(float *)((longlong)param_2 + 0x234);
  fVar3 = *(float *)(param_2 + 0x47);
  local_38 = *(float *)(param_2 + 0x44);
  fStack_34 = *(float *)((longlong)param_2 + 0x224);
  fStack_30 = *(float *)(param_2 + 0x45);
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x22c);
  plVar5 = (longlong *)0x0;
  if (param_2[0x23] != 0) {
    plVar5 = *(longlong **)(param_2[0x23] + 0x168);
  }
  cVar4 = '\0';
  if (plVar5 != (longlong *)0x0) {
    cVar4 = (**(code **)(*plVar5 + 0x400))(local_38,0);
  }
  local_50 = *(undefined4 *)((longlong)param_1 + 0x14);
  local_58 = *(undefined8 *)((longlong)param_1 + 0xc);
  local_40 = *(float *)(param_1 + 1);
  local_48 = *param_1;
  FUN_1423982b0(param_2,&local_48,&local_58,0,0,-(cVar4 != '\0') & 2);
  local_40 = *(float *)(param_1 + 4);
  local_48 = param_1[3];
  (**(code **)(*param_2 + 0x3f8))(param_2,&local_48);
  *(undefined8 *)((longlong)param_2 + 0x1ec) = *param_1;
  *(undefined4 *)((longlong)param_2 + 500) = *(undefined4 *)(param_1 + 1);
  param_2[0x3f] = *(longlong *)((longlong)param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)((longlong)param_1 + 0x14);
  if (0.0 < param_3) {
    param_3 = 1.0 / param_3;
    local_40 = (*(float *)(param_2 + 0x45) - fStack_30) * param_3;
    param_2[0x48] =
         CONCAT44((*(float *)((longlong)param_2 + 0x224) - fStack_34) * param_3,
                  (*(float *)(param_2 + 0x44) - local_38) * param_3);
    *(float *)(param_2 + 0x49) = local_40;
  }
  if (~((*(float *)(param_2 + 0x47) < 0.0 != *(float *)((longlong)param_2 + 0x234) < 0.0) !=
       *(float *)(param_2 + 0x46) < 0.0) != ~((fVar3 < 0.0 != fVar2 < 0.0) != fVar1 < 0.0)) {
    FUN_1423424e0(param_2);
  }
  return;
}



// FUNCTION 141fd9520 Apply body=279 status=ok
// SIG undefined Apply(void)

void FColorToken::Apply(undefined4 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 local_28 [8];
  longlong local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  if ((*(char *)((longlong)param_1 + 0x11) == '\0') && (cVar4 = FUN_141fe3d20(), cVar4 == '\0')) {
    return;
  }
  cVar4 = *(char *)(param_1 + 4);
  if (cVar4 == '\0') {
    FUN_141fda3b0(param_1,param_2,param_3);
  }
  else if (cVar4 == '\x01') {
    FTrackInstancePropertyBindings::FindOrAdd(param_3,local_28,param_2);
    lVar5 = FWeakObjectPtr::Get(local_18);
    if (lVar5 == 0) {
      lVar5 = FWeakObjectPtr::Get(local_28);
      if ((((lVar5 != 0) && (local_20 != 0)) && ((*(uint *)(lVar5 + 8) & 0x18000) == 0)) &&
         (puVar6 = (undefined4 *)(*(int *)(lVar5 + 0x44) + local_20), puVar6 != (undefined4 *)0x0))
      {
        uVar1 = param_1[1];
        uVar2 = param_1[2];
        uVar3 = param_1[3];
        *puVar6 = *param_1;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar3;
      }
    }
    else {
      (**(code **)(*param_2 + 0x208))(param_2,lVar5,param_1);
    }
    lVar5 = FWeakObjectPtr::Get(local_10);
    if (lVar5 != 0) {
      (**(code **)(*param_2 + 0x208))(param_2,lVar5,0);
      return;
    }
  }
  else if (cVar4 == '\x02') {
    FUN_141fd9b40(param_1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 141fd9640 Apply body=304 status=ok
// SIG undefined Apply(void)

void FDefaultMaterialAccessor::Apply(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)param_3[4];
  if ((undefined8 *)param_3[4] == (undefined8 *)0x0) {
    puVar2 = param_3;
  }
  puVar4 = puVar2 + (longlong)*(int *)(param_3 + 5) * 2;
  for (; puVar2 != puVar4; puVar2 = puVar2 + 2) {
    FUN_1425a2750(param_2,*puVar2,*(undefined4 *)(puVar2 + 1));
  }
  puVar2 = (undefined8 *)param_3[0xc];
  if ((undefined8 *)param_3[0xc] == (undefined8 *)0x0) {
    puVar2 = param_3 + 6;
  }
  puVar4 = puVar2 + (longlong)*(int *)(param_3 + 0xd) * 3;
  for (; puVar2 != puVar4; puVar2 = puVar2 + 3) {
    puVar1 = (undefined4 *)FLinearColor::FLinearColor(local_18,puVar2 + 1);
    local_28 = *puVar1;
    uStack_24 = puVar1[1];
    uStack_20 = puVar1[2];
    uStack_1c = puVar1[3];
    FUN_1425a2be0(param_2,*puVar2,&local_28);
  }
  puVar2 = (undefined8 *)param_3[0x14];
  if ((undefined8 *)param_3[0x14] == (undefined8 *)0x0) {
    puVar2 = param_3 + 0xe;
  }
  puVar4 = puVar2 + (longlong)*(int *)(param_3 + 0x15) * 3;
  if (puVar2 != puVar4) {
    puVar3 = puVar2 + 1;
    do {
      local_28 = *(undefined4 *)puVar3;
      uStack_24 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_20 = *(undefined4 *)(puVar3 + 1);
      uStack_1c = *(undefined4 *)((longlong)puVar3 + 0xc);
      FUN_1425a2be0(param_2,*puVar2,&local_28);
      puVar2 = puVar2 + 3;
      puVar3 = puVar3 + 3;
    } while (puVar2 != puVar4);
  }
  return;
}



// FUNCTION 141fd9770 FUN_141fd9770 body=833 status=ok
// SIG undefined FUN_141fd9770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fd9770(undefined4 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined1 auStack_178 [32];
  uint local_158;
  uint uStack_154;
  uint *puStack_150;
  int local_148;
  int iStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  int local_138 [2];
  longlong *local_130;
  uint uStack_128;
  uint uStack_124;
  uint *local_120;
  uint uStack_118;
  int iStack_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined4 local_e8;
  uint uStack_e4;
  longlong *local_e0;
  undefined8 uStack_d8;
  uint *puStack_d0;
  uint uStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  longlong local_a8 [2];
  uint local_98 [4];
  uint *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uStack_104 = *param_1;
  uVar11 = 0;
  uStack_100 = param_1[1];
  uStack_fc = param_1[2];
  uStack_f8 = param_1[3];
  uStack_f4 = param_1[4];
  uStack_e4 = uStack_e4 & 0xffffff00;
  local_108 = 3;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_88 = (uint *)0x0;
  local_80 = 0;
  local_78 = 0xffffffff;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  (**(code **)(*param_2 + 0x28))(param_2,local_a8);
  iVar1 = (int)local_80;
  puStack_150 = local_98;
  local_158 = 0;
  uStack_154 = 1;
  iStack_144 = 0;
  uStack_140 = 0;
  if ((int)local_80 != 0) {
    puVar14 = local_98;
    if (local_88 != (uint *)0x0) {
      puVar14 = local_88;
    }
    uVar7 = *puVar14;
    uVar8 = uVar11;
    uVar13 = uVar11;
    while (uVar7 == 0) {
      iVar6 = (int)uVar8;
      uStack_140 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)uStack_140;
      local_158 = iVar6 + 1;
      uVar8 = (ulonglong)local_158;
      if ((int)((int)local_80 + -1 + ((int)local_80 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6) {
        iStack_144 = (int)local_80;
        goto LAB_141fd98b7;
      }
      uVar7 = puVar14[(longlong)iVar6 + 1];
    }
    uStack_154 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uStack_154 != 0) {
      for (; uStack_154 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_154 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_144 = (uStack_140 - iVar6) + 0x1f;
    if ((int)local_80 < iStack_144) {
      iStack_144 = (int)local_80;
    }
  }
LAB_141fd98b7:
  uStack_118 = 0xffffffff;
  iStack_114 = iStack_144;
  local_110 = CONCAT44(uStack_13c,uStack_140);
  iStack_144 = (int)local_80;
  uStack_d8 = CONCAT44(uStack_154,local_158);
  local_e0 = local_a8;
  uVar5 = CONCAT44(uStack_e4,local_e8);
  uVar4 = CONCAT44(uStack_f4,uStack_f8);
  local_148 = -1 << ((byte)local_80 & 0x1f);
  uVar2 = CONCAT44(uStack_104,local_108);
  uVar3 = CONCAT44(uStack_fc,uStack_100);
  uStack_128 = local_158;
  uStack_124 = uStack_154;
  local_120 = puStack_150;
  puStack_d0 = puStack_150;
  uStack_c0 = local_110;
  uStack_c8 = uStack_118;
  iStack_c4 = iStack_114;
  local_130 = local_e0;
  while (((iStack_114 != iVar1 || (local_120 != local_98)) || (local_130 != local_a8))) {
    TSet<TTuple<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FAsyncPackage::FExportIORequest,0>,FDefaultSetAllocator>
    ::FindId(local_a8,local_138,*(undefined8 *)((longlong)iStack_114 * 0x38 + *local_130));
    uVar8 = uVar11;
    if (local_138[0] != -1) {
      uVar8 = (longlong)local_138[0] * 0x38 + local_a8[0];
    }
    *(undefined8 *)(uVar8 + 8) = uVar2;
    *(undefined8 *)(uVar8 + 0x10) = uVar3;
    *(undefined8 *)(uVar8 + 0x18) = uVar4;
    *(undefined8 *)(uVar8 + 0x20) = uStack_f0;
    *(undefined8 *)(uVar8 + 0x28) = uVar5;
    uStack_118 = uStack_118 & ~uStack_124;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_128);
  }
  (**(code **)(*param_2 + 0x20))(param_2,local_a8);
  plVar9 = (longlong *)(**(code **)(*param_2 + 0x70))(param_2);
  if (plVar9 != (longlong *)0x0) {
    lVar10 = (**(code **)(*plVar9 + 0x148))(plVar9);
    if ((lVar10 != 0) && ((*(int *)(lVar10 + 0x708) - 1U & 0xfffffffd) == 0)) {
      lVar10 = FUN_14244f490(*(undefined8 *)(lVar10 + 400),0);
      if ((lVar10 != 0) && (plVar9 = *(longlong **)(lVar10 + 0x528), plVar9 != (longlong *)0x0)) {
        iVar1 = *(int *)((longlong)plVar9 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar12 = iVar1 >> 0x1f & 0xffff;
          uVar7 = iVar1 + uVar12;
          uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                   (longlong)(int)((uVar7 & 0xffff) - uVar12) * 0x18;
        }
        if ((*(uint *)(uVar11 + 8) >> 0x1d & 1) == 0) {
          local_158 = param_1[1];
          uStack_154 = param_1[2];
          puStack_150 = *(uint **)(param_1 + 3);
          (**(code **)(*plVar9 + 0x860))(plVar9,*param_1,&local_158,*(undefined1 *)(param_1 + 5));
        }
      }
    }
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  FUN_14106ecc0(local_a8);
  return;
}



// FUNCTION 141fd9ac0 FUN_141fd9ac0 body=120 status=ok
// SIG undefined FUN_141fd9ac0(void)

void FUN_141fd9ac0(float *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined1 *)(param_1 + 1));
  plVar1 = (longlong *)(**(code **)(*param_2 + 0x70))(param_2);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
    if ((lVar2 != 0) && (0.0 < *param_1)) {
      plVar1 = (longlong *)UWorld::GetWorldSettings(lVar2,0,1);
      if (plVar1 != (longlong *)0x0) {
        *(float *)((longlong)plVar1 + 0x5e4) = *param_1;
        (**(code **)(*plVar1 + 0x600))(plVar1);
      }
    }
  }
  return;
}



// FUNCTION 141fd9b40 FUN_141fd9b40 body=463 status=ok
// SIG undefined FUN_141fd9b40(void)

void FUN_141fd9b40(undefined4 *param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = UAkAudioInputComponent::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar3 = (longlong *)FName::FName(local_res10,L"LightColor",1);
      if (*(longlong *)(param_3 + 0x70) == *plVar3) {
        local_28 = *param_1;
        uStack_24 = param_1[1];
        uStack_20 = param_1[2];
        uStack_1c = param_1[3];
        FUN_142377550(param_2,&local_28,1);
        return;
      }
    }
    else {
      lVar2 = UAtmosphericFogComponent::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar3 = (longlong *)FName::FName(local_res10,L"LightColor",1);
        if (*(longlong *)(param_3 + 0x70) == *plVar3) {
          local_28 = *param_1;
          uStack_24 = param_1[1];
          uStack_20 = param_1[2];
          uStack_1c = param_1[3];
          FUN_1423ba780(param_2,&local_28);
          return;
        }
      }
    }
  }
  FLinearColor::ToFColor(param_1,local_res20,1);
  local_res10[0] = local_res20[0];
  FTrackInstancePropertyBindings::FindOrAdd(param_3,&local_28,param_2);
  lVar2 = FWeakObjectPtr::Get(local_18);
  if (lVar2 == 0) {
    lVar2 = FWeakObjectPtr::Get(&local_28);
    if ((((lVar2 != 0) && (CONCAT44(uStack_1c,uStack_20) != 0)) &&
        ((*(uint *)(lVar2 + 8) & 0x18000) == 0)) &&
       (puVar4 = (undefined4 *)((longlong)*(int *)(lVar2 + 0x44) + CONCAT44(uStack_1c,uStack_20)),
       puVar4 != (undefined4 *)0x0)) {
      *puVar4 = local_res10[0];
    }
  }
  else {
    (**(code **)(*param_2 + 0x208))(param_2,lVar2,local_res10);
  }
  lVar2 = FWeakObjectPtr::Get(local_10);
  if (lVar2 != 0) {
    (**(code **)(*param_2 + 0x208))(param_2,lVar2,0);
  }
  return;
}



// FUNCTION 141fd9d10 FUN_141fd9d10 body=1687 status=ok
// SIG undefined FUN_141fd9d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fd9d10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  undefined8 uVar15;
  longlong lVar16;
  uint uVar17;
  undefined2 *puVar18;
  undefined1 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  uint local_190;
  uint uStack_18c;
  uint *puStack_188;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  undefined4 uStack_174;
  longlong local_170;
  longlong local_168;
  undefined8 local_160;
  undefined1 local_158 [8];
  longlong local_150;
  longlong local_148;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined **local_130;
  ulonglong local_128;
  longlong local_118;
  undefined4 local_110;
  longlong *local_108;
  uint uStack_100;
  uint uStack_fc;
  uint *local_f8;
  uint uStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  longlong *local_e0;
  undefined1 *local_d8;
  longlong local_d0 [2];
  longlong *local_c0;
  undefined8 uStack_b8;
  uint *puStack_b0;
  uint uStack_a8;
  int iStack_a4;
  undefined8 uStack_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_148 = param_1;
  local_138 = param_2;
  plVar10 = (longlong *)(**(code **)(*param_2 + 0x70))(param_2);
  if ((plVar10 != (longlong *)0x0) &&
     (local_168 = (**(code **)(*plVar10 + 0x148))(plVar10), local_168 != 0)) {
    plVar10 = (longlong *)(param_1 + 8);
    puStack_188 = (uint *)(param_1 + 0x18);
    puVar25 = (undefined1 *)0x0;
    local_130 = &PTR_FUN_144f4a078;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    iVar21 = *(int *)(param_1 + 0x30);
    local_190 = 0;
    uStack_18c = 1;
    uStack_17c = 0;
    uStack_178 = 0;
    if (iVar21 != 0) {
      puVar23 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar23 = puStack_188;
      }
      uVar9 = *puVar23;
      puVar24 = puVar25;
      puVar19 = puVar25;
      while (uVar9 == 0) {
        iVar8 = (int)puVar24;
        uStack_178 = (int)puVar19 + 0x20;
        puVar19 = (undefined1 *)(ulonglong)uStack_178;
        local_190 = iVar8 + 1;
        puVar24 = (undefined1 *)(ulonglong)local_190;
        if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_141fd9e70;
        uVar9 = puVar23[(longlong)iVar8 + 1];
      }
      uStack_18c = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uStack_18c != 0) {
        for (; uStack_18c >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_18c == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_17c = (uStack_178 - iVar8) + 0x1f;
      if (iVar21 < (int)uStack_17c) {
LAB_141fd9e70:
        uStack_17c = iVar21;
      }
    }
    uVar9 = *(uint *)(param_1 + 0x30);
    uStack_f0 = 0xffffffff;
    iStack_ec = uStack_17c;
    local_e8 = CONCAT44(uStack_174,uStack_178);
    uVar2 = *(uint *)(param_1 + 0x30);
    uStack_b8 = CONCAT44(uStack_18c,local_190);
    local_180 = -1 << ((byte)uVar9 & 0x1f);
    uVar22 = uVar9 & 0xffffffe0;
    uStack_100 = local_190;
    uStack_fc = uStack_18c;
    uStack_17c = uVar9;
    if (uVar9 != uVar2) {
      lVar16 = *(longlong *)(param_1 + 0x28);
      if (*(longlong *)(param_1 + 0x28) == 0) {
        lVar16 = param_1 + 0x18;
      }
      uVar17 = *(uint *)(lVar16 + (longlong)((int)uVar9 >> 5) * 4) & local_180;
      iVar21 = (int)uVar9 >> 5;
      while (uVar17 == 0) {
        uVar22 = uVar22 + 0x20;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar21)
        goto LAB_141fd9f52;
        uVar17 = *(uint *)(lVar16 + 4 + (longlong)iVar21 * 4);
        local_180 = 0xffffffff;
        iVar21 = iVar21 + 1;
      }
      uVar17 = -uVar17 & uVar17;
      iVar21 = 0x1f;
      if (uVar17 != 0) {
        for (; uVar17 >> iVar21 == 0; iVar21 = iVar21 + -1) {
        }
      }
      if (uVar17 == 0) {
        iVar21 = 0x20;
      }
      else {
        iVar21 = 0x1f - iVar21;
      }
      uStack_17c = (uVar22 - iVar21) + 0x1f;
      if ((int)uVar2 < (int)uStack_17c) {
LAB_141fd9f52:
        uStack_17c = uVar2;
      }
    }
    local_128 = (ulonglong)uStack_17c;
    puVar24 = puVar25;
    local_f8 = puStack_188;
    local_c0 = plVar10;
    puStack_b0 = puStack_188;
    uStack_a0 = local_e8;
    local_108 = plVar10;
    uStack_a8 = uStack_f0;
    iStack_a4 = iStack_ec;
    while( true ) {
      lVar16 = local_168;
      iVar21 = (int)puVar24;
      if (((iStack_ec == (int)local_128) && (local_f8 == (uint *)(param_1 + 0x18))) &&
         (local_108 == plVar10)) break;
      puVar20 = (undefined8 *)((longlong)iStack_ec * 0x50 + *local_108);
      puVar11 = (undefined8 *)MakeSafeLevelName(local_d0,puVar20,local_168);
      if (*(int *)(puVar11 + 1) == 0) {
        puVar18 = &DAT_143f3eda8;
      }
      else {
        puVar18 = (undefined2 *)*puVar11;
      }
      FName::FName(&local_150,puVar18,1);
      if (local_d0[0] != 0) {
        FMemory::Free();
      }
      lVar4 = local_148;
      local_170 = local_150;
      if (*(int *)(local_148 + 0x60) != *(int *)(local_148 + 0x8c)) {
        lVar12 = *(longlong *)(local_148 + 0x98);
        if (*(longlong *)(local_148 + 0x98) == 0) {
          lVar12 = local_148 + 0x90;
        }
        iVar8 = *(int *)(lVar12 + ((longlong)((int)((ulonglong)local_150 >> 0x20) + (int)local_150)
                                  & (longlong)*(int *)(local_148 + 0xa0) - 1U) * 4);
        if (iVar8 != -1) {
          do {
            puVar19 = (undefined1 *)(*(longlong *)(local_148 + 0x58) + (longlong)iVar8 * 0x18);
            if (*(longlong *)(*(longlong *)(local_148 + 0x58) + (longlong)iVar8 * 0x18) == local_150
               ) {
              if (iVar8 != -1) goto LAB_141fda063;
              break;
            }
            iVar8 = *(int *)(puVar19 + 0x10);
          } while (iVar8 != -1);
        }
      }
      puVar19 = puVar25;
LAB_141fda063:
      puVar13 = puVar19 + 8;
      if (puVar19 == (undefined1 *)0x0) {
        puVar13 = puVar25;
      }
      if (puVar13 == (undefined1 *)0x0) {
LAB_141fda09b:
        local_160 = 0;
        if (local_170 != 0) {
          uVar15 = FName::ToString(&local_170,&local_190);
          plVar14 = (longlong *)GetStreamingLevel(uVar15,lVar16);
          if (plVar14 != (longlong *)0x0) {
            FWeakObjectPtr::operator=(local_140,plVar14);
            local_e0 = &local_170;
            local_d8 = local_140;
            FUN_141fc8710(lVar4 + 0x58,local_158,&local_e0,0);
          }
          goto LAB_141fda0fd;
        }
      }
      else {
        plVar14 = (longlong *)FWeakObjectPtr::Get(puVar13);
        if (plVar14 == (longlong *)0x0) {
          TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
          ::Remove(lVar4 + 0x58,local_170);
          lVar16 = local_168;
          goto LAB_141fda09b;
        }
LAB_141fda0fd:
        uVar5 = local_50;
        if (plVar14 != (longlong *)0x0) {
          iVar8 = -0x80000000;
          puVar11 = (undefined8 *)puVar20[7];
          if ((undefined8 *)puVar20[7] == (undefined8 *)0x0) {
            puVar11 = puVar20 + 2;
          }
          puVar1 = (undefined8 *)((longlong)puVar11 + (longlong)*(int *)(puVar20 + 8) * 0x14);
          puVar19 = puVar25;
          if (puVar11 != puVar1) {
            do {
              iVar3 = *(int *)((longlong)puVar11 + 0xc);
              uVar9 = 0xffffffff;
              if (*(char *)(puVar11 + 2) == '\0') {
                uVar9 = 1;
              }
              if (iVar8 < iVar3) {
                puVar19 = (undefined1 *)(ulonglong)uVar9;
                iVar8 = iVar3;
              }
              else if (iVar3 == iVar8) {
                puVar19 = (undefined1 *)(ulonglong)((int)puVar19 + uVar9);
              }
              puVar11 = (undefined8 *)((longlong)puVar11 + 0x14);
            } while (puVar11 != puVar1);
            iVar8 = (int)puVar19;
            if (iVar8 != 0) {
              cVar6 = (**(code **)(*plVar14 + 0x288))(plVar14);
              if ((bool)cVar6 != 0 < iVar8) {
                if (*(char *)((longlong)puVar20 + 9) == '\0') {
                  uVar7 = (**(code **)(*plVar14 + 0x288))(plVar14);
                  if (&local_198 != puVar20 + 1) {
                    *(undefined1 *)(puVar20 + 1) = uVar7;
                    *(undefined1 *)((longlong)puVar20 + 9) = 1;
                  }
                }
                lVar16 = DAT_146acba70;
                if (DAT_146acba70 == 0) {
                  lVar16 = FMovieSceneAnimTypeID::Initialize(&DAT_146acba70,0);
                }
                local_1a0 = &local_118;
                local_110 = (undefined4)local_138[0x5b];
                local_118 = local_138[0x5a];
                local_1a8 = *(undefined1 *)((longlong)local_138 + 0x2dc);
                FMovieScenePreAnimatedState::SavePreAnimatedState
                          (local_138 + 0x1f,lVar16,&local_130);
                ULevelStreaming::SetShouldBeVisible(plVar14,0 < iVar8);
                if (iVar21 == 0) {
                  puVar24 = (undefined1 *)0x2;
                }
                if ((0 < iVar8) && (plVar14[0x24] == 0)) {
                  (**(code **)(*plVar14 + 0x278))(plVar14,1);
                  puVar24 = (undefined1 *)0x1;
                }
              }
              goto LAB_141fda2cf;
            }
          }
          if (*(int *)(puVar20 + 8) == 0) {
            lVar16 = (longlong)(int)local_50;
            iVar8 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar8);
            if (local_50._4_4_ < iVar8) {
              TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                        (local_98,uVar5 & 0xffffffff);
            }
            puVar19 = local_98;
            if (local_58 != (undefined1 *)0x0) {
              puVar19 = local_58;
            }
            *(undefined8 *)(puVar19 + lVar16 * 8) = *puVar20;
          }
          if (*(char *)((longlong)puVar20 + 9) != '\0') {
            cVar6 = *(char *)(puVar20 + 1);
            ULevelStreaming::SetShouldBeVisible(plVar14,cVar6);
            if (iVar21 == 0) {
              puVar24 = (undefined1 *)0x2;
            }
            if ((cVar6 != '\0') && (plVar14[0x24] == 0)) {
              (**(code **)(*plVar14 + 0x278))(plVar14,1);
              puVar24 = (undefined1 *)0x1;
            }
          }
        }
      }
LAB_141fda2cf:
      uStack_f0 = uStack_f0 & ~uStack_fc;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_100);
    }
    puVar19 = local_98;
    if (local_58 != (undefined1 *)0x0) {
      puVar19 = puVar25;
    }
    puVar11 = (undefined8 *)((ulonglong)puVar19 | (ulonglong)local_58);
    puVar19 = (undefined1 *)((longlong)(int)local_50 & 0x1fffffffffffffff);
    if (puVar11 + (int)local_50 < puVar11) {
      puVar19 = puVar25;
    }
    if (puVar19 != (undefined1 *)0x0) {
      do {
        TSet<TTuple<FName,FLevelStreamingSharedTrackData::FVisibilityData>,TDefaultMapHashableKeyFuncs<FName,FLevelStreamingSharedTrackData::FVisibilityData,0>,FDefaultSetAllocator>
        ::Remove(plVar10,*puVar11);
        puVar25 = puVar25 + 1;
        puVar11 = puVar11 + 1;
      } while (puVar25 != puVar19);
    }
    if (iVar21 != 0) {
      FUN_1428caf60(local_168,puVar24);
    }
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free(local_58);
    }
  }
  return;
}



// FUNCTION 141fda3b0 FUN_141fda3b0 body=423 status=ok
// SIG undefined FUN_141fda3b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fda3b0(undefined4 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *plStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined1 local_50 [8];
  longlong local_48;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined8 local_30;
  longlong *plStack_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_78 = *param_1;
  uStack_74 = param_1[1];
  uStack_70 = param_1[2];
  uStack_6c = param_1[3];
  local_68 = 0;
  local_60 = 0;
  plStack_58 = (longlong *)0x0;
  FTrackInstancePropertyBindings::FindOrAdd(param_3,local_50,param_2);
  lVar5 = FWeakObjectPtr::Get(local_40);
  if (lVar5 == 0) {
    lVar5 = FWeakObjectPtr::Get(local_50);
    if ((((lVar5 != 0) && (local_48 != 0)) && ((*(uint *)(lVar5 + 8) & 0x18000) == 0)) &&
       (puVar6 = (undefined4 *)(*(int *)(lVar5 + 0x44) + local_48), puVar6 != (undefined4 *)0x0)) {
      puVar1 = (undefined8 *)(puVar6 + 6);
      *puVar6 = local_78;
      puVar6[1] = uStack_74;
      puVar6[2] = uStack_70;
      puVar6[3] = uStack_6c;
      *(undefined1 *)(puVar6 + 4) = local_68;
      local_88 = local_60;
      if (plStack_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
        UNLOCK();
      }
      plVar7 = plStack_58;
      if (&local_88 != puVar1) {
        local_88 = *puVar1;
        plVar7 = *(longlong **)(puVar6 + 8);
        local_30 = local_60;
        plStack_28 = plStack_58;
        *puVar1 = local_60;
        *(longlong **)(puVar6 + 8) = plStack_58;
      }
      plStack_80 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_80 + 8))(plStack_80,1);
          }
        }
      }
    }
  }
  else {
    (**(code **)(*param_2 + 0x208))(param_2,lVar5,&local_78);
  }
  lVar5 = FWeakObjectPtr::Get(local_38);
  if (lVar5 != 0) {
    (**(code **)(*param_2 + 0x208))(param_2,lVar5,0);
  }
  plVar7 = plStack_58;
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_58 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_58)(plStack_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 141fda560 AssignLevelVisibilityOverrides body=424 status=ok
// SIG undefined AssignLevelVisibilityOverrides(void)

void FLevelStreamingSharedTrackData::AssignLevelVisibilityOverrides
               (longlong param_1,ulonglong *param_2,undefined1 param_3,undefined4 param_4,
               undefined8 *param_5)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int local_res10 [2];
  undefined1 local_res18;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
  uVar8 = 0;
  plVar9 = (longlong *)*param_2;
  uVar10 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar9 + (int)param_2[1] < plVar9) {
    uVar10 = uVar8;
  }
  if (uVar10 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    local_res18 = param_3;
    do {
      uVar3 = local_res18;
      local_68 = *plVar9;
      if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
        lVar5 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar5 = param_1 + 0x40;
        }
        iVar4 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)local_68 >> 0x20) + (int)local_68) &
                                 (longlong)*(int *)(param_1 + 0x50) - 1U) * 4);
        if (iVar4 != -1) {
          do {
            plVar6 = (longlong *)((longlong)iVar4 * 0x50 + *plVar1);
            if (*plVar6 == local_68) {
              if ((iVar4 != -1) && (plVar6 != (longlong *)0x0)) goto LAB_141fda66f;
              break;
            }
            iVar4 = (int)plVar6[9];
          } while (iVar4 != -1);
        }
      }
      local_60 = &local_68;
      FUN_141fc8290(plVar1,local_res10,&local_60,0);
      plVar6 = (longlong *)((longlong)local_res10[0] * 0x50 + *plVar1);
LAB_141fda66f:
      iVar4 = (int)plVar6[8];
      uStack_50 = *(undefined4 *)(param_5 + 1);
      local_58 = *param_5;
      local_48 = CONCAT31(local_48._1_3_,uVar3);
      *(int *)(plVar6 + 8) = iVar4 + 1;
      uStack_4c = param_4;
      if (*(int *)((longlong)plVar6 + 0x44) < iVar4 + 1) {
        TArray<FLevelStreamingSharedTrackData::FVisibilityData::FVisibilityRequest,TInlineAllocator<2,FDefaultAllocator>_>
        ::ResizeGrow(plVar6 + 2,iVar4);
      }
      plVar7 = (longlong *)plVar6[7];
      if ((longlong *)plVar6[7] == (longlong *)0x0) {
        plVar7 = plVar6 + 2;
      }
      plVar9 = plVar9 + 1;
      uVar8 = uVar8 + 1;
      puVar2 = (undefined4 *)((longlong)plVar7 + (longlong)iVar4 * 0x14);
      *puVar2 = (undefined4)local_58;
      puVar2[1] = local_58._4_4_;
      puVar2[2] = uStack_50;
      puVar2[3] = uStack_4c;
      *(undefined4 *)((longlong)plVar7 + (longlong)iVar4 * 0x14 + 0x10) = local_48;
    } while (uVar8 != uVar10);
  }
  return;
}



// FUNCTION 141fda710 Blend body=83 status=ok
// SIG undefined Blend(void)

void `UMovieSceneAudioTrack::GetRowSegmentBlender'::`2'::FBlender::Blend
               (undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res10;
  
  MovieSceneSegmentCompiler::FilterOutUnderlappingSections(param_2);
  if (1 < *(int *)(param_2 + 0x48)) {
    lVar2 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar2 = param_2;
    }
    AlgoImpl::IntroSortInternal<FMovieSceneSectionData,int_FMovieSceneSectionData::*,TLess<void>_>
              (lVar2,(longlong)*(int *)(param_2 + 0x48),8,local_res10);
    iVar1 = *(int *)(param_2 + 0x48) + -1;
    if (iVar1 != 0) {
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) - iVar1;
    }
  }
  return;
}



// FUNCTION 141fda770 Blend body=156 status=ok
// SIG undefined Blend(void)

void `UMovieSceneCinematicShotTrack::GetRowSegmentBlender'::`2'::FCinematicRowRules::Blend
               (undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (1 < *(int *)(param_2 + 0x48)) {
    lVar4 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar4 = param_2;
    }
    AlgoImpl::
    IntroSortInternal<FMovieSceneSectionData,FIdentityFunctor,TDereferenceWrapper<FMovieSceneSectionData,bool___cdecl(FMovieSceneSectionData_const_&,FMovieSceneSectionData_const_&)>_>
              (lVar4,(longlong)*(int *)(param_2 + 0x48));
    iVar1 = *(int *)(param_2 + 0x48);
    lVar4 = 0;
    lVar5 = 0;
    for (iVar3 = 0; (-1 < lVar4 && (iVar1 = *(int *)(param_2 + 0x48), iVar3 < iVar1));
        iVar3 = iVar3 + 1) {
      lVar2 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x40) == 0) {
        lVar2 = param_2;
      }
      if ((*(byte *)(lVar2 + 0xc + lVar5) & 3) == 0) break;
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x10;
    }
    iVar3 = iVar1 - (iVar3 + 1);
    if (0 < iVar3) {
      *(int *)(param_2 + 0x48) = iVar1 - iVar3;
      TArray<FMovieSceneSectionData,TInlineAllocator<4,FDefaultAllocator>_>::ResizeShrink(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 141fda850 Blend body=101 status=ok
// SIG undefined Blend(void)

void `UMovieSceneSkeletalAnimationTrack::GetRowSegmentBlender'::`2'::
     FSkeletalAnimationRowCompilerRules::Blend(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8;
  
  MovieSceneSegmentCompiler::FilterOutUnderlappingSections(param_2);
  if ((*(char *)(param_1 + 8) != '\0') && (1 < *(int *)(param_2 + 0x48))) {
    lVar2 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar2 = param_2;
    }
    AlgoImpl::IntroSortInternal<FMovieSceneSectionData,int_FMovieSceneSectionData::*,TLess<void>_>
              (lVar2,(longlong)*(int *)(param_2 + 0x48),8,local_res8);
    iVar1 = *(int *)(param_2 + 0x48) + -1;
    if (iVar1 != 0) {
      *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) - iVar1;
    }
  }
  return;
}



// FUNCTION 141fda8c0 CacheExistingState body=277 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PropertyTemplate::FTokenProducer<unsigned_char>::CacheExistingState
          (longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined **local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [64];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  FTrackInstancePropertyBindings::FindOrAdd(uVar1,local_d8);
  lVar2 = FWeakObjectPtr::Get();
  if ((((lVar2 == 0) || (local_d0 == 0)) || ((*(uint *)(lVar2 + 8) & 0x18000) != 0)) ||
     (puVar3 = (undefined1 *)(*(int *)(lVar2 + 0x44) + local_d0), puVar3 == (undefined1 *)0x0)) {
    local_b0 = 0;
  }
  else {
    local_b0 = *puVar3;
  }
  local_b8 = &PTR__scalar_deleting_destructor__144f51c80;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a8,uVar1);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar4 = (undefined8 *)FMemory::Malloc(0x88,8);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  *param_2 = puVar4;
  if ((*(byte *)(param_2 + 4) & 2) != 0) {
    puVar4 = param_2;
  }
  *puVar4 = &PTR__scalar_deleting_destructor__144f51c80;
  *(undefined1 *)(puVar4 + 1) = local_b0;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar4 + 2,local_a8);
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a8);
  return param_2;
}



// FUNCTION 141fda9e0 CacheExistingState body=275 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PropertyTemplate::FTokenProducer<int>::CacheExistingState(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined **local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [64];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  FTrackInstancePropertyBindings::FindOrAdd(uVar1,local_d8);
  lVar2 = FWeakObjectPtr::Get();
  if ((((lVar2 == 0) || (local_d0 == 0)) || ((*(uint *)(lVar2 + 8) & 0x18000) != 0)) ||
     (puVar3 = (undefined4 *)(*(int *)(lVar2 + 0x44) + local_d0), puVar3 == (undefined4 *)0x0)) {
    local_b0 = 0;
  }
  else {
    local_b0 = *puVar3;
  }
  local_b8 = &PTR__scalar_deleting_destructor__144f51e28;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a8,uVar1);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar4 = (undefined8 *)FMemory::Malloc(0x88,8);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  *param_2 = puVar4;
  if ((*(byte *)(param_2 + 4) & 2) != 0) {
    puVar4 = param_2;
  }
  *puVar4 = &PTR__scalar_deleting_destructor__144f51e28;
  *(undefined4 *)(puVar4 + 1) = local_b0;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar4 + 2,local_a8);
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a8);
  return param_2;
}



// FUNCTION 141fdab00 CacheExistingState body=281 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PropertyTemplate::FTokenProducer<float>::CacheExistingState(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined **local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [64];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  FTrackInstancePropertyBindings::FindOrAdd(uVar1,local_d8);
  lVar2 = FWeakObjectPtr::Get(local_d8);
  if ((((lVar2 == 0) || (local_d0 == 0)) || ((*(uint *)(lVar2 + 8) & 0x18000) != 0)) ||
     (puVar3 = (undefined4 *)(*(int *)(lVar2 + 0x44) + local_d0), puVar3 == (undefined4 *)0x0)) {
    local_b0 = 0;
  }
  else {
    local_b0 = *puVar3;
  }
  local_b8 = &PTR__scalar_deleting_destructor__144f51e18;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a8,uVar1);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar4 = (undefined8 *)FMemory::Malloc(0x88,8);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  *param_2 = puVar4;
  if ((*(byte *)(param_2 + 4) & 2) != 0) {
    puVar4 = param_2;
  }
  *puVar4 = &PTR__scalar_deleting_destructor__144f51e18;
  *(undefined4 *)(puVar4 + 1) = local_b0;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar4 + 2,local_a8);
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a8);
  return param_2;
}



// FUNCTION 141fdac20 CacheExistingState body=279 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PropertyTemplate::FTokenProducer<AActor_*>::CacheExistingState(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [64];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  FTrackInstancePropertyBindings::FindOrAdd(uVar1,local_d8);
  lVar2 = FWeakObjectPtr::Get();
  if ((((lVar2 == 0) || (local_d0 == 0)) || ((*(uint *)(lVar2 + 8) & 0x18000) != 0)) ||
     (puVar3 = (undefined8 *)(*(int *)(lVar2 + 0x44) + local_d0), puVar3 == (undefined8 *)0x0)) {
    local_b0 = 0;
  }
  else {
    local_b0 = *puVar3;
  }
  local_b8 = &PTR__scalar_deleting_destructor__144f51c60;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a8,uVar1);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar3 = (undefined8 *)FMemory::Malloc(0x88,8);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  *param_2 = puVar3;
  if ((*(byte *)(param_2 + 4) & 2) != 0) {
    puVar3 = param_2;
  }
  *puVar3 = &PTR__scalar_deleting_destructor__144f51c60;
  puVar3[1] = local_b0;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar3 + 2,local_a8);
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a8);
  return param_2;
}



// FUNCTION 141fdad40 CacheExistingState body=360 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PropertyTemplate::FTokenProducer<FEulerTransform>::CacheExistingState
          (longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined1 local_100 [8];
  longlong local_f8;
  undefined **local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined1 local_a8 [64];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar2 = *(undefined8 *)(param_1 + 8);
  FTrackInstancePropertyBindings::FindOrAdd(uVar2,local_100);
  lVar3 = FWeakObjectPtr::Get(local_100);
  if ((((lVar3 != 0) && (local_f8 != 0)) && ((*(uint *)(lVar3 + 8) & 0x18000) == 0)) &&
     (puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + local_f8), puVar4 != (undefined8 *)0x0)) {
    local_128 = *puVar4;
    uStack_120 = puVar4[1];
    local_118 = puVar4[2];
    uStack_110 = puVar4[3];
    local_108 = *(undefined4 *)(puVar4 + 4);
  }
  local_d0 = (undefined4)local_128;
  uStack_cc = local_128._4_4_;
  uStack_c8 = (undefined4)uStack_120;
  uStack_c4 = uStack_120._4_4_;
  local_d8 = &PTR__scalar_deleting_destructor__144f51e78;
  local_c0 = (undefined4)local_118;
  uStack_bc = local_118._4_4_;
  uStack_b8 = (undefined4)uStack_110;
  uStack_b4 = uStack_110._4_4_;
  local_b0 = local_108;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a8,uVar2);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar4 = (undefined8 *)FMemory::Malloc(0xa8,8);
  *param_2 = puVar4;
  bVar1 = *(byte *)(param_2 + 4);
  *(byte *)(param_2 + 4) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar4 = param_2;
  }
  *puVar4 = &PTR__scalar_deleting_destructor__144f51e78;
  *(undefined4 *)(puVar4 + 1) = local_d0;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_cc;
  *(undefined4 *)(puVar4 + 2) = uStack_c8;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_c4;
  *(undefined4 *)(puVar4 + 3) = local_c0;
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_bc;
  *(undefined4 *)(puVar4 + 4) = uStack_b8;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_b4;
  *(undefined4 *)(puVar4 + 5) = local_b0;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar4 + 6,local_a8);
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a8);
  return param_2;
}



// FUNCTION 141fdaeb0 CacheExistingState body=349 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
PropertyTemplate::FTokenProducer<FTransform>::CacheExistingState
          (longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  longlong local_100;
  undefined **local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 local_a8 [64];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar1 = *(undefined8 *)(param_1 + 8);
  FTrackInstancePropertyBindings::FindOrAdd(uVar1,local_108);
  lVar2 = FWeakObjectPtr::Get(local_108);
  if ((((lVar2 == 0) || (local_100 == 0)) || ((*(uint *)(lVar2 + 8) & 0x18000) != 0)) ||
     (puVar3 = (undefined4 *)(*(int *)(lVar2 + 0x44) + local_100), puVar3 == (undefined4 *)0x0)) {
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    uStack_bc = 0;
    local_b8 = _DAT_146acb840 & _DAT_146acb850;
    uStack_b4 = uRam0000000146acb844 & uRam0000000146acb854;
    uStack_b0 = uRam0000000146acb848 & uRam0000000146acb858;
    uStack_ac = uRam0000000146acb84c & uRam0000000146acb85c;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = uRam0000000146acb84c;
  }
  else {
    local_d8 = *puVar3;
    uStack_d4 = puVar3[1];
    uStack_d0 = puVar3[2];
    local_c8 = puVar3[4];
    uStack_c4 = puVar3[5];
    uStack_c0 = puVar3[6];
    uStack_bc = puVar3[7];
    local_b8 = puVar3[8];
    uStack_b4 = puVar3[9];
    uStack_b0 = puVar3[10];
    uStack_ac = puVar3[0xb];
    uStack_cc = puVar3[3];
  }
  local_e8 = &PTR__scalar_deleting_destructor__144f51e68;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a8,uVar1);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar4 = (undefined8 *)FMemory::Malloc(0xc0,0x10);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  *param_2 = puVar4;
  if ((*(byte *)(param_2 + 4) & 2) != 0) {
    puVar4 = param_2;
  }
  *puVar4 = &PTR__scalar_deleting_destructor__144f51e68;
  puVar4[2] = CONCAT44(uStack_d4,local_d8);
  puVar4[3] = CONCAT44(uStack_cc,uStack_d0);
  *(undefined4 *)(puVar4 + 4) = local_c8;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_c4;
  *(undefined4 *)(puVar4 + 5) = uStack_c0;
  *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_bc;
  *(uint *)(puVar4 + 6) = local_b8;
  *(uint *)((longlong)puVar4 + 0x34) = uStack_b4;
  *(uint *)(puVar4 + 7) = uStack_b0;
  *(uint *)((longlong)puVar4 + 0x3c) = uStack_ac;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar4 + 8,local_a8);
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a8);
  return param_2;
}



// FUNCTION 141fdb010 CacheExistingState body=308 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PropertyTemplate::FTokenProducer<FVector2D>::CacheExistingState
          (longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0 [8];
  longlong local_d8;
  undefined **local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [64];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar2 = *(undefined8 *)(param_1 + 8);
  FTrackInstancePropertyBindings::FindOrAdd(uVar2,local_e0);
  lVar3 = FWeakObjectPtr::Get(local_e0);
  if ((((lVar3 != 0) && (local_d8 != 0)) && ((*(uint *)(lVar3 + 8) & 0x18000) == 0)) &&
     (puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + local_d8), puVar4 != (undefined8 *)0x0)) {
    local_e8 = *puVar4;
  }
  local_b0 = (undefined4)local_e8;
  uStack_ac = local_e8._4_4_;
  local_b8 = &PTR__scalar_deleting_destructor__144f51e38;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a8,uVar2);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar4 = (undefined8 *)FMemory::Malloc(0x88,8);
  *param_2 = puVar4;
  bVar1 = *(byte *)(param_2 + 4);
  *(byte *)(param_2 + 4) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar4 = param_2;
  }
  *puVar4 = &PTR__scalar_deleting_destructor__144f51e38;
  puVar4[1] = CONCAT44(uStack_ac,local_b0);
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar4 + 2,local_a8);
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a8);
  return param_2;
}



// FUNCTION 141fdb150 CacheExistingState body=300 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PropertyTemplate::FTokenProducer<FVector4>::CacheExistingState(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined **local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a8 [64];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar2 = *(undefined8 *)(param_1 + 8);
  FTrackInstancePropertyBindings::FindOrAdd(uVar2,local_e8);
  lVar3 = FWeakObjectPtr::Get(local_e8);
  if ((((lVar3 == 0) || (local_e0 == 0)) || ((*(uint *)(lVar3 + 8) & 0x18000) != 0)) ||
     (puVar4 = (undefined4 *)(*(int *)(lVar3 + 0x44) + local_e0), puVar4 == (undefined4 *)0x0)) {
    local_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    uStack_ec = 0x3f800000;
  }
  else {
    local_f8 = *puVar4;
    uStack_f4 = puVar4[1];
    uStack_f0 = puVar4[2];
    uStack_ec = puVar4[3];
  }
  local_c8 = &PTR__scalar_deleting_destructor__144f51e58;
  local_b8 = local_f8;
  uStack_b4 = uStack_f4;
  uStack_b0 = uStack_f0;
  uStack_ac = uStack_ec;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a8,uVar2);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar5 = (undefined8 *)FMemory::Malloc(0xa0,0x10);
  *param_2 = puVar5;
  bVar1 = *(byte *)(param_2 + 4);
  *(byte *)(param_2 + 4) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar5 = param_2;
  }
  *puVar5 = &PTR__scalar_deleting_destructor__144f51e58;
  *(undefined4 *)(puVar5 + 2) = local_b8;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_b4;
  *(undefined4 *)(puVar5 + 3) = uStack_b0;
  *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_ac;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar5 + 4,local_a8);
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a8);
  return param_2;
}



// FUNCTION 141fdb280 CacheExistingState body=318 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PropertyTemplate::FTokenProducer<FVector>::CacheExistingState(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [8];
  longlong local_d0;
  undefined **local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined1 local_a0 [64];
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar2 = *(undefined8 *)(param_1 + 8);
  FTrackInstancePropertyBindings::FindOrAdd(uVar2,local_d8);
  lVar3 = FWeakObjectPtr::Get(local_d8);
  if ((((lVar3 != 0) && (local_d0 != 0)) && ((*(uint *)(lVar3 + 8) & 0x18000) == 0)) &&
     (puVar4 = (undefined8 *)(*(int *)(lVar3 + 0x44) + local_d0), puVar4 != (undefined8 *)0x0)) {
    local_e8 = *puVar4;
    local_e0 = *(undefined4 *)(puVar4 + 1);
  }
  local_b0 = local_e8;
  local_a8 = local_e0;
  local_b8 = &PTR__scalar_deleting_destructor__144f51e48;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a0,uVar2);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar4 = (undefined8 *)FMemory::Malloc(0x90,8);
  *param_2 = puVar4;
  bVar1 = *(byte *)(param_2 + 4);
  *(byte *)(param_2 + 4) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar4 = param_2;
  }
  *puVar4 = &PTR__scalar_deleting_destructor__144f51e48;
  puVar4[1] = local_b0;
  *(undefined4 *)(puVar4 + 2) = local_a8;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar4 + 3,local_a0);
  if (local_50 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  if (local_60 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a0);
  return param_2;
}



// FUNCTION 141fdb3c0 CacheExistingState body=36 status=ok
// SIG undefined CacheExistingState(void)

undefined8
PropertyTemplate::FTokenProducer<FString>::CacheExistingState
          (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  CacheExistingState<FString,FString>(param_2,param_3,*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 141fdb3f0 CacheExistingState body=219 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
PropertyTemplate::FTokenProducer<bool>::CacheExistingState
          (longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_d8 [32];
  undefined **local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [64];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_b0 = FTrackInstancePropertyBindings::GetCurrentValue<bool>(uVar1,param_3);
  local_b8 = &PTR__scalar_deleting_destructor__144f51c70;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a8,uVar1);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0x88,8);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
  *param_2 = puVar2;
  if ((*(byte *)(param_2 + 4) & 2) != 0) {
    puVar2 = param_2;
  }
  *puVar2 = &PTR__scalar_deleting_destructor__144f51c70;
  *(undefined1 *)(puVar2 + 1) = local_b0;
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar2 + 2,local_a8);
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a8);
  return param_2;
}



// FUNCTION 141fdb4d0 FUN_141fdb4d0 body=170 status=ok
// SIG undefined FUN_141fdb4d0(void)

undefined8 * FUN_141fdb4d0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  
  uVar2 = *(undefined8 *)(param_3 + 0x198);
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar4 = *(undefined2 *)(param_1 + 0xc);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar5 = (undefined8 *)FMemory::Malloc(0x28);
  bVar1 = *(byte *)(param_2 + 4);
  *param_2 = puVar5;
  *(byte *)(param_2 + 4) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar5 = param_2;
  }
  *(undefined4 *)(puVar5 + 1) = uVar3;
  *(undefined2 *)((longlong)puVar5 + 0xc) = uVar4;
  *(undefined4 *)(puVar5 + 2) = 0xffffffff;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
  puVar5[3] = uVar2;
  *(undefined1 *)(puVar5 + 4) = 1;
  *puVar5 = &PTR_FUN_144f45fa0;
  return param_2;
}



// FUNCTION 141fdb580 CacheExistingState body=309 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
F3DTransformTokenProducer::CacheExistingState
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b4;
  undefined4 uStack_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_14238d0c0(param_3,&local_68);
  local_c0 = uStack_50;
  local_78 = local_68;
  uStack_74 = uStack_64;
  uStack_70 = uStack_60;
  uStack_6c = uStack_5c;
  uStack_a0 = uStack_50;
  FQuat::Rotator(&local_78,&local_c8);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  uStack_9c = local_c8;
  local_b4 = uStack_40;
  uStack_94 = local_c0;
  puVar2 = (undefined8 *)FMemory::Malloc(0x30);
  *param_2 = puVar2;
  bVar1 = *(byte *)(param_2 + 4);
  *(byte *)(param_2 + 4) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar2 = param_2;
  }
  *(undefined4 *)(puVar2 + 1) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_54;
  *(undefined4 *)(puVar2 + 2) = uStack_a0;
  *(undefined4 *)((longlong)puVar2 + 0x14) = (undefined4)uStack_9c;
  *puVar2 = &PTR_FUN_144f4d150;
  *(undefined4 *)(puVar2 + 3) = uStack_9c._4_4_;
  *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_94;
  *(undefined4 *)(puVar2 + 4) = local_48;
  *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_44;
  *(undefined4 *)(puVar2 + 5) = uStack_40;
  return param_2;
}



// FUNCTION 141fdb6c0 FUN_141fdb6c0 body=145 status=ok
// SIG undefined FUN_141fdb6c0(void)

undefined8 * FUN_141fdb6c0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  bVar4 = 0;
  if (param_3 != 0) {
    lVar2 = AGPingUsable::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar4 = (byte)(*(uint *)(param_3 + 0x460) >> 2) & 1;
    }
  }
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  puVar3 = param_2;
  if ((*(byte *)(param_2 + 4) & 2) == 0) {
    puVar3 = (undefined8 *)*param_2;
  }
  *puVar3 = &PTR_FUN_144f4b708;
  *(byte *)(puVar3 + 1) = bVar4;
  return param_2;
}



// FUNCTION 141fdb760 CacheExistingState body=313 status=ok
// SIG undefined CacheExistingState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FColorTokenProducer::CacheExistingState(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [32];
  undefined **local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 local_b0;
  char local_af;
  undefined1 local_a8 [64];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar3 = (undefined4 *)FUN_141ff1910(local_e8,param_3,uVar2);
  local_c8 = &PTR__scalar_deleting_destructor__144f48960;
  local_c0 = *puVar3;
  uStack_bc = puVar3[1];
  uStack_b8 = puVar3[2];
  uStack_b4 = puVar3[3];
  local_af = *(char *)((longlong)puVar3 + 0x11) != '\0';
  if ((bool)local_af) {
    local_b0 = *(undefined1 *)(puVar3 + 4);
  }
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(local_a8,uVar2);
  if (*(char *)((longlong)puVar3 + 0x11) != '\0') {
    *(undefined1 *)((longlong)puVar3 + 0x11) = 0;
  }
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
  puVar4 = (undefined8 *)FMemory::Malloc(0x98,8);
  *param_2 = puVar4;
  bVar1 = *(byte *)(param_2 + 4);
  *(byte *)(param_2 + 4) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar4 = param_2;
  }
  *puVar4 = &PTR__scalar_deleting_destructor__144f48960;
  *(undefined4 *)(puVar4 + 1) = local_c0;
  *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_bc;
  *(undefined4 *)(puVar4 + 2) = uStack_b8;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_b4;
  *(undefined1 *)((longlong)puVar4 + 0x19) = 0;
  if (local_af != '\0') {
    *(undefined1 *)(puVar4 + 3) = local_b0;
    *(undefined1 *)((longlong)puVar4 + 0x19) = 1;
  }
  FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(puVar4 + 4,local_a8);
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_60 = 0;
  if (local_68 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FFreeTypeAdvanceCache::FCachedAdvanceKey,long>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (local_a8);
  return param_2;
}



// FUNCTION 141fdb8a0 FUN_141fdb8a0 body=296 status=ok
// SIG undefined FUN_141fdb8a0(void)

undefined8 * FUN_141fdb8a0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_2c;
  
  uVar12 = DAT_1464aa6ec;
  uVar11 = DAT_1464aa6e8;
  uVar10 = DAT_1464aa6e4;
  uVar9 = DAT_1464aa6e0;
  bVar7 = 0;
  uVar8 = 0;
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
    if ((lVar4 != 0) && ((*(int *)(lVar4 + 0x708) - 1U & 0xfffffffd) == 0)) {
      lVar4 = FUN_14244f490(*(undefined8 *)(lVar4 + 400),0);
      if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x528), lVar4 != 0)) {
        iVar1 = *(int *)(lVar4 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar6 = iVar1 >> 0x1f & 0xffff;
          uVar2 = iVar1 + uVar6;
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
          uVar8 = *(undefined4 *)(lVar4 + 0x494);
          uVar9 = *(undefined4 *)(lVar4 + 0x484);
          uVar10 = *(undefined4 *)(lVar4 + 0x488);
          uVar11 = *(undefined4 *)(lVar4 + 0x48c);
          uVar12 = *(undefined4 *)(lVar4 + 0x490);
          bVar7 = (byte)(*(uint *)(lVar4 + 0x2c40) >> 3) & 1;
        }
      }
    }
  }
  uStack_2c = CONCAT31(uStack_2c._1_3_,bVar7);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe | 3;
  *(undefined4 *)(param_2 + 1) = uVar8;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar9;
  *(undefined4 *)(param_2 + 2) = uVar10;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar11;
  *param_2 = &PTR_FUN_144f49cf8;
  param_2[3] = CONCAT44(uStack_2c,uVar12);
  return param_2;
}



// FUNCTION 141fdb9d0 FUN_141fdb9d0 body=165 status=ok
// SIG undefined FUN_141fdb9d0(void)

undefined8 * FUN_141fdb9d0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 uStack_c;
  
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  uVar4 = (**(code **)(*plVar3 + 0x148))(plVar3);
  lVar5 = UWorld::GetWorldSettings(uVar4,0,1);
  if (lVar5 != 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x90))();
    uVar1 = *(undefined4 *)(lVar5 + 0x5e4);
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
    uStack_c = CONCAT31(uStack_c._1_3_,uVar2);
    param_2[1] = CONCAT44(uStack_c,uVar1);
    *param_2 = &PTR_FUN_144f4de90;
    return param_2;
  }
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe;
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 2;
  return param_2;
}



// FUNCTION 141fdba80 CacheExistingState body=47 status=ok
// SIG undefined CacheExistingState(void)

undefined8 *
UE::MovieScene::FLevelStreamingPreAnimatedTokenProducer::CacheExistingState
          (undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(*param_3 + 0x288))(param_3);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *(undefined1 *)(param_2 + 1) = uVar1;
  *param_2 = &PTR_FUN_144f4a068;
  return param_2;
}



// FUNCTION 141fdbad0 FUN_141fdbad0 body=548 status=ok
// SIG undefined FUN_141fdbad0(void)

undefined8 * FUN_141fdbad0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  DWORD DVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined **local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_50 = &PTR_FUN_144f4b330;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  if ((((*(byte *)(param_3 + 0x71b) & 4) == 0) &&
      (cVar7 = FUN_1415ad720(&DAT_1468e2448), cVar7 == '\0')) && (DAT_1468c21ae != '\0')) {
    DVar8 = GetCurrentThreadId();
    lVar10 = 0x8b8;
    if (DVar8 != DAT_1468c21c0) goto LAB_141fdbb58;
  }
  lVar10 = 0x720;
LAB_141fdbb58:
  puVar11 = *(undefined8 **)(lVar10 + param_3);
  puVar12 = puVar11 + (longlong)*(int *)(lVar10 + 8 + param_3) * 0x12;
  uVar5 = local_40;
  uVar6 = local_30;
  do {
    local_40 = uVar5;
    local_30 = uVar6;
    if (puVar11 == puVar12) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfc;
      puVar11 = (undefined8 *)FMemory::Malloc(0x38);
      *param_2 = puVar11;
      if ((*(byte *)(param_2 + 4) & 2) != 0) {
        puVar11 = param_2;
      }
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 1;
      *puVar11 = &PTR_FUN_144f4b330;
      puVar11[1] = local_48;
      *(int *)(puVar11 + 2) = (int)local_40;
      *(int *)((longlong)puVar11 + 0x14) = local_40._4_4_;
      puVar11[3] = local_38;
      *(int *)(puVar11 + 4) = (int)local_30;
      *(int *)((longlong)puVar11 + 0x24) = local_30._4_4_;
      puVar11[5] = local_28;
      *(int *)(puVar11 + 6) = (int)local_20;
      *(int *)((longlong)puVar11 + 0x34) = local_20._4_4_;
      return param_2;
    }
    cVar7 = *(char *)(puVar11 + 1);
    if (cVar7 == '\x01') {
      local_40._0_4_ = (int)uVar5;
      lVar10 = (longlong)(int)local_40;
      uVar4 = *puVar11;
      uVar2 = *(undefined4 *)((longlong)puVar11 + 0xc);
      local_40._0_4_ = (int)local_40 + 1;
      local_40._4_4_ = (int)(uVar5 >> 0x20);
      if (local_40._4_4_ < (int)local_40) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_48,uVar5 & 0xffffffff);
      }
      local_78 = (undefined4)uVar4;
      uStack_74 = (undefined4)((ulonglong)uVar4 >> 0x20);
      puVar1 = (undefined4 *)(local_48 + lVar10 * 0x10);
      *puVar1 = local_78;
      puVar1[1] = uStack_74;
      puVar1[2] = uVar2;
      puVar1[3] = uStack_6c;
    }
    else {
      if (cVar7 == '\x03') {
        local_68 = *puVar11;
        local_30._0_4_ = (int)uVar6;
        iVar3 = (int)local_30;
        uStack_60 = *(undefined8 *)((longlong)puVar11 + 0x14);
        local_58 = *(undefined4 *)((longlong)puVar11 + 0x1c);
        local_30._0_4_ = (int)local_30 + 1;
        local_30._4_4_ = (int)(uVar6 >> 0x20);
        lVar10 = local_38;
        if (local_30._4_4_ < (int)local_30) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_38,uVar6 & 0xffffffff);
          lVar10 = local_38;
        }
      }
      else {
        if (cVar7 != '\x05') goto LAB_141fdbc5a;
        local_68 = *puVar11;
        FLinearColor::FLinearColor(&uStack_60,(longlong)puVar11 + 0x2c);
        uVar5 = local_20;
        iVar3 = (int)local_20;
        iVar9 = (int)local_20 + 1;
        local_20 = CONCAT44(local_20._4_4_,iVar9);
        lVar10 = local_28;
        if (local_20._4_4_ < iVar9) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(&local_28,uVar5 & 0xffffffff);
          lVar10 = local_28;
        }
      }
      puVar1 = (undefined4 *)(lVar10 + (longlong)iVar3 * 0x18);
      *puVar1 = (undefined4)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = (undefined4)uStack_60;
      puVar1[3] = uStack_60._4_4_;
      *(ulonglong *)(lVar10 + 0x10 + (longlong)iVar3 * 0x18) = CONCAT44(uStack_54,local_58);
    }
LAB_141fdbc5a:
    puVar11 = puVar11 + 0x12;
    uVar5 = local_40;
    uVar6 = local_30;
  } while( true );
}



// FUNCTION 141fdbd00 FUN_141fdbd00 body=92 status=ok
// SIG undefined FUN_141fdbd00(void)

undefined8 * FUN_141fdbd00(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_3 + 0x878);
  uVar3 = FUN_14062c730(param_3);
  bVar2 = *(byte *)(param_3 + 0x880);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  *param_2 = &PTR_FUN_144f4ccc0;
  *(uint *)(param_2 + 1) = (uint)bVar1;
  *(byte *)(param_2 + 2) = bVar2 >> 5 & 1;
  return param_2;
}



// FUNCTION 141fdbdc0 CacheExistingState body=130 status=ok
// SIG undefined CacheExistingState(void)

undefined8 *
FPreAnimatedMPCScalarTokenProducer::CacheExistingState
          (longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  cVar2 = UMaterialParameterCollectionInstance::GetScalarParameterValue
                    (param_3,*(undefined8 *)(param_1 + 8),local_res8);
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe | 3;
    param_2[1] = uVar1;
    *param_2 = &PTR_FUN_144f4adb0;
    *(undefined4 *)(param_2 + 2) = local_res8[0];
    return param_2;
  }
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe | 2;
  return param_2;
}



// FUNCTION 141fdbe50 CacheExistingState body=119 status=ok
// SIG undefined CacheExistingState(void)

undefined8 *
FPreAnimatedMPCVectorTokenProducer::CacheExistingState
          (longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  cVar2 = UMaterialParameterCollectionInstance::GetVectorParameterValue
                    (param_3,*(undefined8 *)(param_1 + 8),&local_18);
  if (cVar2 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe | 3;
    param_2[1] = uVar1;
    *param_2 = &PTR_FUN_144f4add8;
    param_2[2] = local_18;
    param_2[3] = uStack_10;
    return param_2;
  }
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe | 2;
  return param_2;
}



// FUNCTION 141fdbef0 CacheExistingState body=103 status=ok
// SIG undefined CacheExistingState(void)

undefined8 *
TMaterialTrackExecutionToken<FComponentMaterialAccessor>::FPreAnimatedTokenProducer::
CacheExistingState(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = **(undefined4 **)(param_1 + 8);
  uVar1 = FUN_141ff5360(&local_20,param_3,param_3,param_4,&PTR_FUN_144f51a40);
  FWeakObjectPtr::operator=(&local_1c,uVar1);
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *param_2 = &PTR_FUN_144f51a40;
  *(undefined4 *)(param_2 + 1) = local_20;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  *(undefined4 *)(param_2 + 2) = local_18;
  return param_2;
}



// FUNCTION 141fdbfc0 FUN_141fdbfc0 body=113 status=ok
// SIG undefined FUN_141fdbfc0(void)

undefined8 * FUN_141fdbfc0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0x70))();
  uVar3 = (**(code **)(*plVar2 + 0x148))(plVar2);
  lVar4 = UWorld::GetWorldSettings(uVar3,0,1);
  if (lVar4 != 0) {
    uVar1 = *(undefined4 *)(lVar4 + 0x5e4);
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe | 3;
    *param_2 = &PTR_FUN_144f4d080;
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xfe | 2;
  return param_2;
}



// FUNCTION 141fdc0e0 FUN_141fdc0e0 body=217 status=ok
// SIG undefined FUN_141fdc0e0(void)

undefined8 * FUN_141fdc0e0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  lVar2 = FUN_1428dfc70();
  if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
      != lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  puVar3 = param_2;
  if (bVar1) {
    bVar4 = *(byte *)(param_3 + 0x80);
  }
  else {
    lVar2 = FUN_1429ff160();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
      if ((*(byte *)(param_2 + 4) & 2) == 0) {
        puVar3 = (undefined8 *)*param_2;
      }
      *(undefined2 *)(puVar3 + 1) = 0;
      goto LAB_141fdc1a1;
    }
    bVar4 = *(byte *)(param_3 + 0x24c) >> 6;
  }
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  if ((*(byte *)(param_2 + 4) & 2) == 0) {
    puVar3 = (undefined8 *)*param_2;
  }
  *(byte *)(puVar3 + 1) = bVar4 & 1;
  *(undefined1 *)((longlong)puVar3 + 9) = 0;
LAB_141fdc1a1:
  *puVar3 = &PTR_FUN_144f4d1b0;
  return param_2;
}



// FUNCTION 141fdc1c0 Call body=72 status=ok
// SIG undefined Call(void)

void UE4Function_Private::
     TFunctionRefCaller<<lambda_d25c2ee684e07e8e879e7e2719710405>,void___cdecl(void)>::Call
               (undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_1422c86c0(*param_1,param_1[1]);
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 0x99) = *(byte *)(lVar2 + 0x99) | 0x10;
    uVar1 = param_1[3];
    *(undefined8 *)(lVar2 + 0x130) = param_1[2];
    *(undefined8 *)(lVar2 + 0x138) = uVar1;
    uVar1 = param_1[5];
    *(undefined8 *)(lVar2 + 0x140) = param_1[4];
    *(undefined8 *)(lVar2 + 0x148) = uVar1;
    uVar1 = param_1[7];
    *(undefined8 *)(lVar2 + 0x150) = param_1[6];
    *(undefined8 *)(lVar2 + 0x158) = uVar1;
  }
  return;
}



// FUNCTION 141fdc210 ChangeFrameResolution body=83 status=ok
// SIG undefined ChangeFrameResolution(void)

void FMovieSceneActorReferenceData::ChangeFrameResolution
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_28 [16];
  longlong local_18;
  
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x40);
  local_18 = param_1 + 0x30;
  FMovieSceneChannelData::ChangeFrameResolution(local_28,param_2,param_3);
  return;
}



// FUNCTION 141fdc270 FUN_141fdc270 body=83 status=ok
// SIG undefined FUN_141fdc270(void)

void FUN_141fdc270(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_28 [16];
  longlong local_18;
  
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x28);
  local_18 = param_1 + 0x18;
  FMovieSceneChannelData::ChangeFrameResolution(local_28,param_2,param_3);
  return;
}



// FUNCTION 141fdc2d0 ChangeFrameResolution body=83 status=ok
// SIG undefined ChangeFrameResolution(void)

void FMovieSceneStringChannel::ChangeFrameResolution
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_28 [16];
  longlong local_18;
  
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x40);
  local_18 = param_1 + 0x18;
  FMovieSceneChannelData::ChangeFrameResolution(local_28,param_2,param_3);
  return;
}



// FUNCTION 141fdc330 ClearDefault body=43 status=ok
// SIG undefined ClearDefault(void)

void FMovieSceneActorReferenceData::ClearDefault(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x18) = DAT_146acb830;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 141fdc370 FUN_141fdc370 body=1365 status=ok
// SIG undefined FUN_141fdc370(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fdc370(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong param_7)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  int *piVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  int iVar14;
  char cVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined1 auStack_1b8 [32];
  longlong **local_198;
  undefined8 *local_190;
  longlong local_188;
  char local_178;
  ulonglong local_170;
  undefined8 *local_168;
  longlong local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  ulonglong local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined **local_90 [2];
  longlong *local_80;
  undefined **local_78 [2];
  longlong *local_68;
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined4 local_50;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_170 = param_5;
  local_168 = param_6;
  local_160 = param_1;
  plVar6 = (longlong *)FMovieSceneBlendingAccumulator::FindActuator<float>(param_3,param_4);
  if (plVar6 != (longlong *)0x0) {
    puVar12 = *(ulonglong **)(param_1 + 0x10);
    uVar17 = 0;
    local_c0 = param_7;
    local_5c = 0;
    local_50 = 0;
    uVar16 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar12 + *(int *)(param_1 + 0x18) < puVar12) {
      uVar16 = uVar17;
    }
    local_44 = 0;
    uVar13 = uVar17;
    local_d8 = plVar6;
    local_d0 = param_1;
    local_c8 = param_2;
    if (uVar16 != 0) {
      do {
        puVar4 = (ulonglong *)*puVar12;
        local_198 = &local_d8;
        puVar7 = puVar12;
        if ((puVar4[1] & 2) == 0) {
          puVar7 = puVar4;
        }
        (**(code **)(*(longlong *)*puVar7 + 8))
                  ((longlong *)*puVar7,local_60,*(undefined4 *)((longlong)puVar4 + 0x24),
                   (char)puVar4[5]);
        puVar12 = puVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar16);
    }
    uVar18 = MovieScene::TMaskedBlendable<float,1>::Resolve<float>(local_60,&local_d8);
    lVar5 = local_160;
    local_188 = param_7;
    local_190 = local_168;
    local_198 = (longlong **)local_170;
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2,uVar18,local_160);
    local_170 = 0xffffffff;
    iVar14 = -1;
    uVar16 = uVar17;
    if (param_2 != 0) {
      FWeakObjectPtr::operator=(&local_140,param_2);
      local_170 = local_140;
      iVar14 = (int)local_140;
      uVar16 = local_140 >> 0x20;
    }
    piVar11 = (int *)plVar6[3];
    piVar1 = piVar11 + (longlong)(int)plVar6[4] * 3;
    for (; piVar11 != piVar1; piVar11 = piVar11 + 3) {
      if ((*piVar11 == iVar14) && (piVar11[1] == (int)uVar16)) {
        lVar9 = plVar6[5];
        FUN_141f522c0(local_b8);
        FMovieSceneAnimTypeID::Combine(&local_168,lVar9);
        if (param_2 == 0) {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar6 + 1,local_a0);
          local_e8 = *puVar8;
          local_e0 = puVar8[1];
          if (local_e0 != 0) {
            LOCK();
            *(int *)(local_e0 + 0xc) = *(int *)(local_e0 + 0xc) + 1;
            UNLOCK();
          }
          uVar10 = FUN_141f394d0(local_78,&local_e8);
          plVar6 = *(longlong **)(lVar5 + 0x10);
          uVar16 = (longlong)*(int *)(local_160 + 0x18) & 0x1fffffffffffffff;
          if (plVar6 + *(int *)(local_160 + 0x18) < plVar6) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          if (uVar16 != 0) {
            local_178 = '\x01';
            do {
              lVar5 = *plVar6;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x10);
              *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar5 + 0x18);
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_118 = *(undefined8 *)(param_7 + 0x2d0);
              local_110 = *(undefined4 *)(param_7 + 0x2d8);
              local_198 = (longlong **)uVar10;
              local_190 = (undefined8 *)(param_7 + 0xf8);
              TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
              OnPreAnimated(param_7 + 0x148,2,local_168,&local_118);
              uVar17 = uVar17 + 1;
              plVar6 = plVar6 + 1;
              cVar15 = local_178;
            } while (uVar17 != uVar16);
          }
          cVar3 = *(char *)(param_7 + 0x2dd);
          local_14c = DAT_1464e8628;
          uStack_148 = 0xffffffff;
          uStack_144 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(char *)(param_7 + 0x2dc) = cVar3;
          if ((cVar15 == '\0') && (cVar3 != '\0')) {
            local_108 = *(undefined8 *)(param_7 + 0x2d0);
            local_100 = *(undefined4 *)(param_7 + 0x2d8);
            local_198 = (longlong **)uVar10;
            local_190 = (undefined8 *)(param_7 + 0xf8);
            TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
            OnPreAnimated(param_7 + 0x148,cVar3,local_168,&local_108);
          }
          if (local_68 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_68 != (longlong *)0x0)) {
              (**(code **)(*local_68 + 8))(local_68,1);
            }
          }
          local_78[0] = &PTR_FUN_143fcdb70;
          plVar6 = local_98;
        }
        else {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar6 + 1,local_b0);
          local_f8 = *puVar8;
          local_f0 = puVar8[1];
          if (local_f0 != 0) {
            LOCK();
            *(int *)(local_f0 + 0xc) = *(int *)(local_f0 + 0xc) + 1;
            UNLOCK();
          }
          lVar9 = FUN_141f39530(local_90,&local_f8);
          plVar6 = *(longlong **)(lVar5 + 0x10);
          uVar16 = (longlong)*(int *)(lVar5 + 0x18) & 0x1fffffffffffffff;
          if (plVar6 + *(int *)(lVar5 + 0x18) < plVar6) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          local_160 = lVar9;
          if (uVar16 != 0) {
            local_178 = '\x01';
            do {
              lVar5 = *plVar6;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x10);
              local_130 = *(undefined4 *)(lVar5 + 0x18);
              *(undefined4 *)(param_7 + 0x2d8) = local_130;
              local_190 = &local_138;
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_138 = *(undefined8 *)(param_7 + 0x2d0);
              local_198 = (longlong **)CONCAT71(local_198._1_7_,2);
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_7 + 0xf8,local_168,lVar9,param_2);
              uVar17 = uVar17 + 1;
              plVar6 = plVar6 + 1;
              cVar15 = local_178;
            } while (uVar17 != uVar16);
          }
          local_158 = DAT_1464e8628;
          uStack_154 = 0xffffffff;
          uStack_150 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
          if (cVar15 == '\0') {
            local_120 = *(undefined4 *)(param_7 + 0x2d8);
            local_128 = *(undefined8 *)(param_7 + 0x2d0);
            local_190 = &local_128;
            local_198 = (longlong **)CONCAT71(local_198._1_7_,*(undefined1 *)(param_7 + 0x2dd));
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (param_7 + 0xf8,local_168,local_160,param_2);
          }
          if (local_80 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_80 != (longlong *)0x0)) {
              (**(code **)(*local_80 + 8))(local_80,1);
            }
          }
          local_90[0] = &PTR_FUN_143fcdb70;
          plVar6 = local_a8;
        }
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return;
        }
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 != 1) {
          return;
        }
        (**(code **)(*plVar6 + 8))(plVar6,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141fdc8d0 FUN_141fdc8d0 body=1416 status=ok
// SIG undefined FUN_141fdc8d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fdc8d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong param_7)

{
  longlong *plVar1;
  char cVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  int iVar14;
  char cVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_268 [32];
  longlong **local_248;
  undefined8 *local_240;
  longlong local_238;
  char local_228;
  ulonglong local_220;
  undefined8 *local_218;
  longlong local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined **local_140 [2];
  longlong *local_130;
  undefined **local_128 [2];
  longlong *local_118;
  undefined1 local_110 [40];
  undefined1 local_e8 [36];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_78;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_220 = param_5;
  local_218 = param_6;
  local_210 = param_1;
  plVar5 = (longlong *)FUN_141fc9730(param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    puVar12 = *(ulonglong **)(param_1 + 0x10);
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uVar17 = 0;
    local_170 = param_7;
    local_c4 = 0;
    local_78 = 0;
    uVar16 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar12 + *(int *)(param_1 + 0x18) < puVar12) {
      uVar16 = uVar17;
    }
    local_4c = 0;
    uVar13 = uVar17;
    local_188 = plVar5;
    local_180 = param_1;
    local_178 = param_2;
    if (uVar16 != 0) {
      do {
        puVar3 = (ulonglong *)*puVar12;
        local_248 = &local_188;
        puVar6 = puVar12;
        if ((puVar3[5] & 2) == 0) {
          puVar6 = puVar3;
        }
        (**(code **)(*(longlong *)*puVar6 + 8))
                  ((longlong *)*puVar6,local_e8,*(undefined4 *)((longlong)puVar3 + 0x44),
                   (char)puVar3[9]);
        puVar12 = puVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar16);
    }
    MovieScene::TMaskedBlendable<float,9>::Resolve<F3DTransformTrackToken>
              (local_e8,local_110,&local_188);
    lVar4 = local_210;
    local_238 = param_7;
    local_240 = local_218;
    local_248 = (longlong **)local_220;
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2,local_110,local_210);
    local_220 = 0xffffffff;
    iVar14 = -1;
    uVar16 = uVar17;
    if (param_2 != 0) {
      FWeakObjectPtr::operator=(&local_1f0,param_2);
      local_220 = local_1f0;
      iVar14 = (int)local_1f0;
      uVar16 = local_1f0 >> 0x20;
    }
    piVar10 = (int *)plVar5[3];
    piVar11 = piVar10 + (longlong)(int)plVar5[4] * 0xb;
    for (; piVar10 != piVar11; piVar10 = piVar10 + 0xb) {
      if ((*piVar10 == iVar14) && (piVar10[1] == (int)uVar16)) {
        lVar8 = plVar5[5];
        FUN_141f522c0(local_168);
        FMovieSceneAnimTypeID::Combine(&local_218,lVar8);
        if (param_2 == 0) {
          puVar7 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar5 + 1,local_150);
          local_198 = *puVar7;
          local_190 = puVar7[1];
          if (local_190 != 0) {
            LOCK();
            *(int *)(local_190 + 0xc) = *(int *)(local_190 + 0xc) + 1;
            UNLOCK();
          }
          uVar9 = FUN_141f394d0(local_128,&local_198);
          plVar5 = *(longlong **)(lVar4 + 0x10);
          uVar16 = (longlong)*(int *)(local_210 + 0x18) & 0x1fffffffffffffff;
          if (plVar5 + *(int *)(local_210 + 0x18) < plVar5) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          if (uVar16 != 0) {
            local_228 = '\x01';
            do {
              lVar4 = *plVar5;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar4 + 0x30);
              *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar4 + 0x38);
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_1c8 = *(undefined8 *)(param_7 + 0x2d0);
              local_1c0 = *(undefined4 *)(param_7 + 0x2d8);
              local_248 = (longlong **)uVar9;
              local_240 = (undefined8 *)(param_7 + 0xf8);
              TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
              OnPreAnimated(param_7 + 0x148,2,local_218,&local_1c8);
              uVar17 = uVar17 + 1;
              plVar5 = plVar5 + 1;
              cVar15 = local_228;
            } while (uVar17 != uVar16);
          }
          cVar2 = *(char *)(param_7 + 0x2dd);
          local_1fc = DAT_1464e8628;
          uStack_1f8 = 0xffffffff;
          uStack_1f4 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(char *)(param_7 + 0x2dc) = cVar2;
          if ((cVar15 == '\0') && (cVar2 != '\0')) {
            local_1b8 = *(undefined8 *)(param_7 + 0x2d0);
            local_1b0 = *(undefined4 *)(param_7 + 0x2d8);
            local_248 = (longlong **)uVar9;
            local_240 = (undefined8 *)(param_7 + 0xf8);
            TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
            OnPreAnimated(param_7 + 0x148,cVar2,local_218,&local_1b8);
          }
          if (local_118 != (longlong *)0x0) {
            LOCK();
            piVar10 = (int *)((longlong)local_118 + 0xc);
            iVar14 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_118 != (longlong *)0x0)) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
          local_128[0] = &PTR_FUN_143fcdb70;
          plVar5 = local_148;
        }
        else {
          puVar7 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar5 + 1,local_160);
          local_1a8 = *puVar7;
          local_1a0 = puVar7[1];
          if (local_1a0 != 0) {
            LOCK();
            *(int *)(local_1a0 + 0xc) = *(int *)(local_1a0 + 0xc) + 1;
            UNLOCK();
          }
          lVar8 = FUN_141f39530(local_140,&local_1a8);
          plVar5 = *(longlong **)(lVar4 + 0x10);
          uVar16 = (longlong)*(int *)(lVar4 + 0x18) & 0x1fffffffffffffff;
          if (plVar5 + *(int *)(lVar4 + 0x18) < plVar5) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          local_210 = lVar8;
          if (uVar16 != 0) {
            local_228 = '\x01';
            do {
              lVar4 = *plVar5;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar4 + 0x30);
              local_1e0 = *(undefined4 *)(lVar4 + 0x38);
              *(undefined4 *)(param_7 + 0x2d8) = local_1e0;
              local_240 = &local_1e8;
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_1e8 = *(undefined8 *)(param_7 + 0x2d0);
              local_248 = (longlong **)CONCAT71(local_248._1_7_,2);
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_7 + 0xf8,local_218,lVar8,param_2);
              uVar17 = uVar17 + 1;
              plVar5 = plVar5 + 1;
              cVar15 = local_228;
            } while (uVar17 != uVar16);
          }
          local_208 = DAT_1464e8628;
          uStack_204 = 0xffffffff;
          uStack_200 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
          if (cVar15 == '\0') {
            local_1d0 = *(undefined4 *)(param_7 + 0x2d8);
            local_1d8 = *(undefined8 *)(param_7 + 0x2d0);
            local_240 = &local_1d8;
            local_248 = (longlong **)CONCAT71(local_248._1_7_,*(undefined1 *)(param_7 + 0x2dd));
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (param_7 + 0xf8,local_218,local_210,param_2);
          }
          if (local_130 != (longlong *)0x0) {
            LOCK();
            piVar10 = (int *)((longlong)local_130 + 0xc);
            iVar14 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_130 != (longlong *)0x0)) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
          local_140[0] = &PTR_FUN_143fcdb70;
          plVar5 = local_158;
        }
        if (plVar5 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar10 = (int *)((longlong)plVar5 + 0xc);
        iVar14 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar14 != 1) {
          return;
        }
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141fdce60 FUN_141fdce60 body=1434 status=ok
// SIG undefined FUN_141fdce60(void)

void FUN_141fdce60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong lVar5;
  bool bVar6;
  void *_Src;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int *piVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 local_168;
  void *local_160;
  int local_158;
  undefined4 local_154;
  void *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  ulonglong local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined **local_70 [2];
  longlong *local_60;
  undefined **local_58 [2];
  longlong *local_48;
  
  plVar7 = (longlong *)FUN_141fc9850(param_3,param_4);
  if (plVar7 != (longlong *)0x0) {
    uVar16 = 0;
    puVar12 = *(ulonglong **)(param_1 + 0x10);
    iVar15 = 0;
    local_a0 = param_7;
    local_150 = (void *)0x0;
    local_148 = 0;
    uVar14 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar12 + *(int *)(param_1 + 0x18) < puVar12) {
      uVar14 = uVar16;
    }
    uVar13 = uVar16;
    local_b8 = plVar7;
    local_b0 = param_1;
    local_a8 = param_2;
    if (uVar14 != 0) {
      do {
        puVar4 = (ulonglong *)*puVar12;
        puVar8 = puVar12;
        if ((puVar4[2] & 2) == 0) {
          puVar8 = puVar4;
        }
        (**(code **)(*(longlong *)*puVar8 + 8))
                  ((longlong *)*puVar8,&local_150,*(undefined4 *)((longlong)puVar4 + 0x2c),
                   (char)puVar4[6],&local_b8);
        puVar12 = puVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar14);
      iVar15 = (int)local_148;
    }
    _Src = local_150;
    local_160 = (void *)0x0;
    local_158 = iVar15;
    if (iVar15 == 0) {
      local_154 = 0;
    }
    else {
      TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(&local_160,iVar15,0);
      _guard_xfg_dispatch_icall_nop(local_160,_Src,(longlong)iVar15 * 0x38);
    }
    (**(code **)(*plVar7 + 0x20))(plVar7,param_2,&local_160,param_1,param_5,param_6,param_7);
    iVar15 = -1;
    uVar14 = uVar16;
    if (param_2 != 0) {
      FWeakObjectPtr::operator=(&local_120,param_2);
      iVar15 = (int)local_120;
      uVar14 = local_120 >> 0x20;
    }
    piVar11 = (int *)plVar7[3];
    piVar1 = piVar11 + (longlong)(int)plVar7[4] * 6;
    if (piVar11 != piVar1) {
LAB_141fdd024:
      if ((*piVar11 != iVar15) || (piVar11[1] != (int)uVar14)) goto LAB_141fdd02f;
      lVar5 = plVar7[5];
      FUN_141f522c0(local_98);
      FMovieSceneAnimTypeID::Combine(&local_168,lVar5);
      if (param_2 == 0) {
        puVar9 = (undefined8 *)
                 TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar7 + 1,local_80);
        local_c8 = *puVar9;
        local_c0 = puVar9[1];
        if (local_c0 != 0) {
          LOCK();
          *(int *)(local_c0 + 0xc) = *(int *)(local_c0 + 0xc) + 1;
          UNLOCK();
        }
        uVar10 = FUN_141f394d0(local_58,&local_c8);
        plVar7 = *(longlong **)(param_1 + 0x10);
        bVar6 = false;
        uVar14 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
        if (plVar7 + *(int *)(param_1 + 0x18) < plVar7) {
          uVar14 = uVar16;
        }
        if (uVar14 != 0) {
          bVar6 = true;
          do {
            lVar5 = *plVar7;
            *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x18);
            *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar5 + 0x20);
            *(undefined1 *)(param_7 + 0x2dc) = 2;
            local_f8 = *(undefined8 *)(param_7 + 0x2d0);
            local_f0 = *(undefined4 *)(param_7 + 0x2d8);
            TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
            OnPreAnimated(param_7 + 0x148,2,local_168,&local_f8,uVar10,param_7 + 0xf8);
            uVar16 = uVar16 + 1;
            plVar7 = plVar7 + 1;
          } while (uVar16 != uVar14);
        }
        cVar3 = *(char *)(param_7 + 0x2dd);
        local_12c = DAT_1464e8628;
        uStack_128 = 0xffffffff;
        uStack_124 = 0xffffffff;
        *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
        *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
        *(char *)(param_7 + 0x2dc) = cVar3;
        if ((!bVar6) && (cVar3 != '\0')) {
          local_e8 = *(undefined8 *)(param_7 + 0x2d0);
          local_e0 = *(undefined4 *)(param_7 + 0x2d8);
          TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
          OnPreAnimated(param_7 + 0x148,cVar3,local_168,&local_e8,uVar10,param_7 + 0xf8);
        }
        if (local_48 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar15 == 1) && (local_48 != (longlong *)0x0)) {
            (**(code **)(*local_48 + 8))(local_48,1);
          }
        }
        local_58[0] = &PTR_FUN_143fcdb70;
        plVar7 = local_78;
      }
      else {
        puVar9 = (undefined8 *)
                 TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar7 + 1,local_90);
        local_d8 = *puVar9;
        local_d0 = puVar9[1];
        if (local_d0 != 0) {
          LOCK();
          *(int *)(local_d0 + 0xc) = *(int *)(local_d0 + 0xc) + 1;
          UNLOCK();
        }
        uVar10 = FUN_141f39530(local_70,&local_d8);
        plVar7 = *(longlong **)(param_1 + 0x10);
        bVar6 = false;
        uVar14 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
        if (plVar7 + *(int *)(param_1 + 0x18) < plVar7) {
          uVar14 = uVar16;
        }
        local_140 = uVar10;
        if (uVar14 != 0) {
          bVar6 = true;
          do {
            lVar5 = *plVar7;
            *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x18);
            local_110 = *(undefined4 *)(lVar5 + 0x20);
            *(undefined4 *)(param_7 + 0x2d8) = local_110;
            *(undefined1 *)(param_7 + 0x2dc) = 2;
            local_118 = *(undefined8 *)(param_7 + 0x2d0);
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (param_7 + 0xf8,local_168,uVar10,param_2,2,&local_118);
            uVar16 = uVar16 + 1;
            plVar7 = plVar7 + 1;
          } while (uVar16 != uVar14);
        }
        local_138 = DAT_1464e8628;
        uStack_134 = 0xffffffff;
        uStack_130 = 0xffffffff;
        *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
        *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
        *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
        if (!bVar6) {
          local_100 = *(undefined4 *)(param_7 + 0x2d8);
          local_108 = *(undefined8 *)(param_7 + 0x2d0);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_7 + 0xf8,local_168,local_140,param_2,*(undefined1 *)(param_7 + 0x2dd),
                     &local_108);
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar15 == 1) && (local_60 != (longlong *)0x0)) {
            (**(code **)(*local_60 + 8))(local_60,1);
          }
        }
        local_70[0] = &PTR_FUN_143fcdb70;
        plVar7 = local_88;
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar7 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar15 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar15 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
    }
LAB_141fdd3af:
    if (local_160 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_150 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
LAB_141fdd02f:
  piVar11 = piVar11 + 6;
  if (piVar11 == piVar1) goto LAB_141fdd3af;
  goto LAB_141fdd024;
}



// FUNCTION 141fdd400 FUN_141fdd400 body=1416 status=ok
// SIG undefined FUN_141fdd400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fdd400(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong param_7)

{
  longlong *plVar1;
  char cVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  int iVar14;
  char cVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_268 [32];
  longlong **local_248;
  undefined8 *local_240;
  longlong local_238;
  char local_228;
  ulonglong local_220;
  undefined8 *local_218;
  longlong local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  ulonglong local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  longlong local_190;
  longlong *local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  longlong *local_158;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined **local_140 [2];
  longlong *local_130;
  undefined **local_128 [2];
  longlong *local_118;
  undefined1 local_110 [40];
  undefined1 local_e8 [36];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_78;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_220 = param_5;
  local_218 = param_6;
  local_210 = param_1;
  plVar5 = (longlong *)
           FMovieSceneBlendingAccumulator::FindActuator<FEulerTransform>(param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    puVar12 = *(ulonglong **)(param_1 + 0x10);
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uVar17 = 0;
    local_170 = param_7;
    local_c4 = 0;
    local_78 = 0;
    uVar16 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar12 + *(int *)(param_1 + 0x18) < puVar12) {
      uVar16 = uVar17;
    }
    local_4c = 0;
    uVar13 = uVar17;
    local_188 = plVar5;
    local_180 = param_1;
    local_178 = param_2;
    if (uVar16 != 0) {
      do {
        puVar3 = (ulonglong *)*puVar12;
        local_248 = &local_188;
        puVar6 = puVar12;
        if ((puVar3[5] & 2) == 0) {
          puVar6 = puVar3;
        }
        (**(code **)(*(longlong *)*puVar6 + 8))
                  ((longlong *)*puVar6,local_e8,*(undefined4 *)((longlong)puVar3 + 0x44),
                   (char)puVar3[9]);
        puVar12 = puVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar16);
    }
    FUN_141fcca50(local_e8,local_110,&local_188);
    lVar4 = local_210;
    local_238 = param_7;
    local_240 = local_218;
    local_248 = (longlong **)local_220;
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2,local_110,local_210);
    local_220 = 0xffffffff;
    iVar14 = -1;
    uVar16 = uVar17;
    if (param_2 != 0) {
      FWeakObjectPtr::operator=(&local_1f0,param_2);
      local_220 = local_1f0;
      iVar14 = (int)local_1f0;
      uVar16 = local_1f0 >> 0x20;
    }
    piVar10 = (int *)plVar5[3];
    piVar11 = piVar10 + (longlong)(int)plVar5[4] * 0xb;
    for (; piVar10 != piVar11; piVar10 = piVar10 + 0xb) {
      if ((*piVar10 == iVar14) && (piVar10[1] == (int)uVar16)) {
        lVar8 = plVar5[5];
        FUN_141f522c0(local_168);
        FMovieSceneAnimTypeID::Combine(&local_218,lVar8);
        if (param_2 == 0) {
          puVar7 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar5 + 1,local_150);
          local_198 = *puVar7;
          local_190 = puVar7[1];
          if (local_190 != 0) {
            LOCK();
            *(int *)(local_190 + 0xc) = *(int *)(local_190 + 0xc) + 1;
            UNLOCK();
          }
          uVar9 = FUN_141f394d0(local_128,&local_198);
          plVar5 = *(longlong **)(lVar4 + 0x10);
          uVar16 = (longlong)*(int *)(local_210 + 0x18) & 0x1fffffffffffffff;
          if (plVar5 + *(int *)(local_210 + 0x18) < plVar5) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          if (uVar16 != 0) {
            local_228 = '\x01';
            do {
              lVar4 = *plVar5;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar4 + 0x30);
              *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar4 + 0x38);
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_1c8 = *(undefined8 *)(param_7 + 0x2d0);
              local_1c0 = *(undefined4 *)(param_7 + 0x2d8);
              local_248 = (longlong **)uVar9;
              local_240 = (undefined8 *)(param_7 + 0xf8);
              TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
              OnPreAnimated(param_7 + 0x148,2,local_218,&local_1c8);
              uVar17 = uVar17 + 1;
              plVar5 = plVar5 + 1;
              cVar15 = local_228;
            } while (uVar17 != uVar16);
          }
          cVar2 = *(char *)(param_7 + 0x2dd);
          local_1fc = DAT_1464e8628;
          uStack_1f8 = 0xffffffff;
          uStack_1f4 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(char *)(param_7 + 0x2dc) = cVar2;
          if ((cVar15 == '\0') && (cVar2 != '\0')) {
            local_1b8 = *(undefined8 *)(param_7 + 0x2d0);
            local_1b0 = *(undefined4 *)(param_7 + 0x2d8);
            local_248 = (longlong **)uVar9;
            local_240 = (undefined8 *)(param_7 + 0xf8);
            TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
            OnPreAnimated(param_7 + 0x148,cVar2,local_218,&local_1b8);
          }
          if (local_118 != (longlong *)0x0) {
            LOCK();
            piVar10 = (int *)((longlong)local_118 + 0xc);
            iVar14 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_118 != (longlong *)0x0)) {
              (**(code **)(*local_118 + 8))(local_118,1);
            }
          }
          local_128[0] = &PTR_FUN_143fcdb70;
          plVar5 = local_148;
        }
        else {
          puVar7 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar5 + 1,local_160);
          local_1a8 = *puVar7;
          local_1a0 = puVar7[1];
          if (local_1a0 != 0) {
            LOCK();
            *(int *)(local_1a0 + 0xc) = *(int *)(local_1a0 + 0xc) + 1;
            UNLOCK();
          }
          lVar8 = FUN_141f39530(local_140,&local_1a8);
          plVar5 = *(longlong **)(lVar4 + 0x10);
          uVar16 = (longlong)*(int *)(lVar4 + 0x18) & 0x1fffffffffffffff;
          if (plVar5 + *(int *)(lVar4 + 0x18) < plVar5) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          local_210 = lVar8;
          if (uVar16 != 0) {
            local_228 = '\x01';
            do {
              lVar4 = *plVar5;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar4 + 0x30);
              local_1e0 = *(undefined4 *)(lVar4 + 0x38);
              *(undefined4 *)(param_7 + 0x2d8) = local_1e0;
              local_240 = &local_1e8;
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_1e8 = *(undefined8 *)(param_7 + 0x2d0);
              local_248 = (longlong **)CONCAT71(local_248._1_7_,2);
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_7 + 0xf8,local_218,lVar8,param_2);
              uVar17 = uVar17 + 1;
              plVar5 = plVar5 + 1;
              cVar15 = local_228;
            } while (uVar17 != uVar16);
          }
          local_208 = DAT_1464e8628;
          uStack_204 = 0xffffffff;
          uStack_200 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
          if (cVar15 == '\0') {
            local_1d0 = *(undefined4 *)(param_7 + 0x2d8);
            local_1d8 = *(undefined8 *)(param_7 + 0x2d0);
            local_240 = &local_1d8;
            local_248 = (longlong **)CONCAT71(local_248._1_7_,*(undefined1 *)(param_7 + 0x2dd));
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (param_7 + 0xf8,local_218,local_210,param_2);
          }
          if (local_130 != (longlong *)0x0) {
            LOCK();
            piVar10 = (int *)((longlong)local_130 + 0xc);
            iVar14 = *piVar10;
            *piVar10 = *piVar10 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_130 != (longlong *)0x0)) {
              (**(code **)(*local_130 + 8))(local_130,1);
            }
          }
          local_140[0] = &PTR_FUN_143fcdb70;
          plVar5 = local_158;
        }
        if (plVar5 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar10 = (int *)((longlong)plVar5 + 0xc);
        iVar14 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar14 != 1) {
          return;
        }
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141fdd990 FUN_141fdd990 body=1384 status=ok
// SIG undefined FUN_141fdd990(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fdd990(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong param_7)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  int *piVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  int iVar14;
  char cVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_1f8 [32];
  longlong **local_1d8;
  undefined8 *local_1d0;
  longlong local_1c8;
  char local_1b8;
  ulonglong local_1b0;
  undefined8 *local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  ulonglong local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  longlong *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [16];
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined **local_c0 [2];
  longlong *local_b0;
  undefined **local_a8 [2];
  longlong *local_98;
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_5c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  local_1b0 = param_5;
  local_1a8 = param_6;
  local_1a0 = param_1;
  plVar6 = (longlong *)FUN_141fc9a40(param_3,param_4);
  if (plVar6 != (longlong *)0x0) {
    puVar12 = *(ulonglong **)(param_1 + 0x10);
    local_7c = 0;
    local_74 = 0;
    uVar17 = 0;
    local_100 = param_7;
    local_80 = 0;
    local_5c = 0;
    uVar16 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar12 + *(int *)(param_1 + 0x18) < puVar12) {
      uVar16 = uVar17;
    }
    local_44 = 0;
    uVar13 = uVar17;
    local_118 = plVar6;
    local_110 = param_1;
    local_108 = param_2;
    if (uVar16 != 0) {
      do {
        puVar4 = (ulonglong *)*puVar12;
        local_1d8 = &local_118;
        puVar7 = puVar12;
        if ((puVar4[2] & 2) == 0) {
          puVar7 = puVar4;
        }
        (**(code **)(*(longlong *)*puVar7 + 8))
                  ((longlong *)*puVar7,local_90,*(undefined4 *)((longlong)puVar4 + 0x2c),
                   (char)puVar4[6]);
        puVar12 = puVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar16);
    }
    MovieScene::TMaskedBlendable<float,4>::Resolve<FMargin>(local_90,local_f0,&local_118);
    lVar5 = local_1a0;
    local_1c8 = param_7;
    local_1d0 = local_1a8;
    local_1d8 = (longlong **)local_1b0;
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2,local_f0,local_1a0);
    local_1b0 = 0xffffffff;
    iVar14 = -1;
    uVar16 = uVar17;
    if (param_2 != 0) {
      FWeakObjectPtr::operator=(&local_180,param_2);
      local_1b0 = local_180;
      iVar14 = (int)local_180;
      uVar16 = local_180 >> 0x20;
    }
    piVar11 = (int *)plVar6[3];
    piVar1 = piVar11 + (longlong)(int)plVar6[4] * 6;
    for (; piVar11 != piVar1; piVar11 = piVar11 + 6) {
      if ((*piVar11 == iVar14) && (piVar11[1] == (int)uVar16)) {
        lVar9 = plVar6[5];
        FUN_141f522c0(local_f8);
        FMovieSceneAnimTypeID::Combine(&local_1a8,lVar9);
        if (param_2 == 0) {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar6 + 1,local_d0);
          local_128 = *puVar8;
          local_120 = puVar8[1];
          if (local_120 != 0) {
            LOCK();
            *(int *)(local_120 + 0xc) = *(int *)(local_120 + 0xc) + 1;
            UNLOCK();
          }
          uVar10 = FUN_141f394d0(local_a8,&local_128);
          plVar6 = *(longlong **)(lVar5 + 0x10);
          uVar16 = (longlong)*(int *)(local_1a0 + 0x18) & 0x1fffffffffffffff;
          if (plVar6 + *(int *)(local_1a0 + 0x18) < plVar6) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          if (uVar16 != 0) {
            local_1b8 = '\x01';
            do {
              lVar5 = *plVar6;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x18);
              *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar5 + 0x20);
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_158 = *(undefined8 *)(param_7 + 0x2d0);
              local_150 = *(undefined4 *)(param_7 + 0x2d8);
              local_1d8 = (longlong **)uVar10;
              local_1d0 = (undefined8 *)(param_7 + 0xf8);
              TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
              OnPreAnimated(param_7 + 0x148,2,local_1a8,&local_158);
              uVar17 = uVar17 + 1;
              plVar6 = plVar6 + 1;
              cVar15 = local_1b8;
            } while (uVar17 != uVar16);
          }
          cVar3 = *(char *)(param_7 + 0x2dd);
          local_18c = DAT_1464e8628;
          uStack_188 = 0xffffffff;
          uStack_184 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(char *)(param_7 + 0x2dc) = cVar3;
          if ((cVar15 == '\0') && (cVar3 != '\0')) {
            local_148 = *(undefined8 *)(param_7 + 0x2d0);
            local_140 = *(undefined4 *)(param_7 + 0x2d8);
            local_1d8 = (longlong **)uVar10;
            local_1d0 = (undefined8 *)(param_7 + 0xf8);
            TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
            OnPreAnimated(param_7 + 0x148,cVar3,local_1a8,&local_148);
          }
          if (local_98 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_98 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_98 != (longlong *)0x0)) {
              (**(code **)(*local_98 + 8))(local_98,1);
            }
          }
          local_a8[0] = &PTR_FUN_143fcdb70;
          plVar6 = local_c8;
        }
        else {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar6 + 1,local_e0);
          local_138 = *puVar8;
          local_130 = puVar8[1];
          if (local_130 != 0) {
            LOCK();
            *(int *)(local_130 + 0xc) = *(int *)(local_130 + 0xc) + 1;
            UNLOCK();
          }
          lVar9 = FUN_141f39530(local_c0,&local_138);
          plVar6 = *(longlong **)(lVar5 + 0x10);
          uVar16 = (longlong)*(int *)(lVar5 + 0x18) & 0x1fffffffffffffff;
          if (plVar6 + *(int *)(lVar5 + 0x18) < plVar6) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          local_1a0 = lVar9;
          if (uVar16 != 0) {
            local_1b8 = '\x01';
            do {
              lVar5 = *plVar6;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x18);
              local_170 = *(undefined4 *)(lVar5 + 0x20);
              *(undefined4 *)(param_7 + 0x2d8) = local_170;
              local_1d0 = &local_178;
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_178 = *(undefined8 *)(param_7 + 0x2d0);
              local_1d8 = (longlong **)CONCAT71(local_1d8._1_7_,2);
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_7 + 0xf8,local_1a8,lVar9,param_2);
              uVar17 = uVar17 + 1;
              plVar6 = plVar6 + 1;
              cVar15 = local_1b8;
            } while (uVar17 != uVar16);
          }
          local_198 = DAT_1464e8628;
          uStack_194 = 0xffffffff;
          uStack_190 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
          if (cVar15 == '\0') {
            local_160 = *(undefined4 *)(param_7 + 0x2d8);
            local_168 = *(undefined8 *)(param_7 + 0x2d0);
            local_1d0 = &local_168;
            local_1d8 = (longlong **)CONCAT71(local_1d8._1_7_,*(undefined1 *)(param_7 + 0x2dd));
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (param_7 + 0xf8,local_1a8,local_1a0,param_2);
          }
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_b0 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_b0 != (longlong *)0x0)) {
              (**(code **)(*local_b0 + 8))(local_b0,1);
            }
          }
          local_c0[0] = &PTR_FUN_143fcdb70;
          plVar6 = local_d8;
        }
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return;
        }
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 != 1) {
          return;
        }
        (**(code **)(*plVar6 + 8))(plVar6,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141fddf00 FUN_141fddf00 body=1400 status=ok
// SIG undefined FUN_141fddf00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fddf00(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong param_7)

{
  longlong *plVar1;
  char cVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char cVar16;
  ulonglong uVar17;
  undefined1 auStack_278 [32];
  longlong **local_258;
  undefined8 *local_250;
  longlong local_248;
  char local_238;
  ulonglong local_230;
  undefined8 *local_228;
  longlong local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  ulonglong local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined **local_150 [2];
  longlong *local_140;
  undefined **local_138 [2];
  longlong *local_128;
  undefined1 local_120 [36];
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_b0;
  undefined1 local_84;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  local_230 = param_5;
  local_228 = param_6;
  local_220 = param_1;
  plVar5 = (longlong *)FMovieSceneBlendingAccumulator::FindActuator<FTransform>(param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    puVar13 = *(ulonglong **)(param_1 + 0x10);
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    uVar17 = 0;
    local_180 = param_7;
    local_fc = 0;
    local_b0 = 0;
    uVar15 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar13 + *(int *)(param_1 + 0x18) < puVar13) {
      uVar15 = uVar17;
    }
    local_84 = 0;
    uVar14 = uVar17;
    local_198 = plVar5;
    local_190 = param_1;
    local_188 = param_2;
    if (uVar15 != 0) {
      do {
        puVar3 = (ulonglong *)*puVar13;
        local_258 = &local_198;
        puVar6 = puVar13;
        if ((puVar3[6] & 2) == 0) {
          puVar6 = puVar3;
        }
        (**(code **)(*(longlong *)*puVar6 + 8))
                  ((longlong *)*puVar6,local_120,*(undefined4 *)((longlong)puVar3 + 0x4c),
                   (char)puVar3[10]);
        puVar13 = puVar13 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar15);
    }
    MovieScene::TMaskedBlendable<float,9>::Resolve<FTransform>(local_120,local_78,&local_198);
    lVar4 = local_220;
    local_248 = param_7;
    local_250 = local_228;
    local_258 = (longlong **)local_230;
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2,local_78);
    iVar12 = -1;
    local_230 = 0xffffffff;
    uVar15 = uVar17;
    if (param_2 != 0) {
      FWeakObjectPtr::operator=(&local_200,param_2);
      local_230 = local_200;
      iVar12 = (int)local_200;
      uVar15 = local_200 >> 0x20;
    }
    piVar7 = (int *)plVar5[3];
    piVar11 = piVar7 + (longlong)(int)plVar5[4] * 0x10;
    for (; piVar7 != piVar11; piVar7 = piVar7 + 0x10) {
      if ((*piVar7 == iVar12) && (piVar7[1] == (int)uVar15)) {
        lVar9 = plVar5[5];
        FUN_141f522c0(local_178);
        FMovieSceneAnimTypeID::Combine(&local_228,lVar9);
        if (param_2 == 0) {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar5 + 1,local_160);
          local_1a8 = *puVar8;
          local_1a0 = puVar8[1];
          if (local_1a0 != 0) {
            LOCK();
            *(int *)(local_1a0 + 0xc) = *(int *)(local_1a0 + 0xc) + 1;
            UNLOCK();
          }
          uVar10 = FUN_141f394d0(local_138,&local_1a8);
          plVar5 = *(longlong **)(lVar4 + 0x10);
          uVar15 = (longlong)*(int *)(local_220 + 0x18) & 0x1fffffffffffffff;
          if (plVar5 + *(int *)(local_220 + 0x18) < plVar5) {
            uVar15 = uVar17;
          }
          cVar16 = '\0';
          if (uVar15 != 0) {
            local_238 = '\x01';
            do {
              lVar4 = *plVar5;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar4 + 0x38);
              *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar4 + 0x40);
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_1d8 = *(undefined8 *)(param_7 + 0x2d0);
              local_1d0 = *(undefined4 *)(param_7 + 0x2d8);
              local_258 = (longlong **)uVar10;
              local_250 = (undefined8 *)(param_7 + 0xf8);
              TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
              OnPreAnimated(param_7 + 0x148,2,local_228,&local_1d8);
              uVar17 = uVar17 + 1;
              plVar5 = plVar5 + 1;
              cVar16 = local_238;
            } while (uVar17 != uVar15);
          }
          cVar2 = *(char *)(param_7 + 0x2dd);
          local_20c = DAT_1464e8628;
          uStack_208 = 0xffffffff;
          uStack_204 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(char *)(param_7 + 0x2dc) = cVar2;
          if ((cVar16 == '\0') && (cVar2 != '\0')) {
            local_1c8 = *(undefined8 *)(param_7 + 0x2d0);
            local_1c0 = *(undefined4 *)(param_7 + 0x2d8);
            local_258 = (longlong **)uVar10;
            local_250 = (undefined8 *)(param_7 + 0xf8);
            TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
            OnPreAnimated(param_7 + 0x148,cVar2,local_228,&local_1c8);
          }
          if (local_128 != (longlong *)0x0) {
            LOCK();
            piVar7 = (int *)((longlong)local_128 + 0xc);
            iVar12 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if ((iVar12 == 1) && (local_128 != (longlong *)0x0)) {
              (**(code **)(*local_128 + 8))(local_128,1);
            }
          }
          local_138[0] = &PTR_FUN_143fcdb70;
          plVar5 = local_158;
        }
        else {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar5 + 1,local_170);
          local_1b8 = *puVar8;
          local_1b0 = puVar8[1];
          if (local_1b0 != 0) {
            LOCK();
            *(int *)(local_1b0 + 0xc) = *(int *)(local_1b0 + 0xc) + 1;
            UNLOCK();
          }
          lVar9 = FUN_141f39530(local_150,&local_1b8);
          plVar5 = *(longlong **)(lVar4 + 0x10);
          uVar15 = (longlong)*(int *)(lVar4 + 0x18) & 0x1fffffffffffffff;
          if (plVar5 + *(int *)(lVar4 + 0x18) < plVar5) {
            uVar15 = uVar17;
          }
          cVar16 = '\0';
          local_220 = lVar9;
          if (uVar15 != 0) {
            local_238 = '\x01';
            do {
              lVar4 = *plVar5;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar4 + 0x38);
              local_1f0 = *(undefined4 *)(lVar4 + 0x40);
              *(undefined4 *)(param_7 + 0x2d8) = local_1f0;
              local_250 = &local_1f8;
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_1f8 = *(undefined8 *)(param_7 + 0x2d0);
              local_258 = (longlong **)CONCAT71(local_258._1_7_,2);
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_7 + 0xf8,local_228,lVar9,param_2);
              uVar17 = uVar17 + 1;
              plVar5 = plVar5 + 1;
              cVar16 = local_238;
            } while (uVar17 != uVar15);
          }
          local_218 = DAT_1464e8628;
          uStack_214 = 0xffffffff;
          uStack_210 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
          if (cVar16 == '\0') {
            local_1e0 = *(undefined4 *)(param_7 + 0x2d8);
            local_1e8 = *(undefined8 *)(param_7 + 0x2d0);
            local_250 = &local_1e8;
            local_258 = (longlong **)CONCAT71(local_258._1_7_,*(undefined1 *)(param_7 + 0x2dd));
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (param_7 + 0xf8,local_228,local_220,param_2);
          }
          if (local_140 != (longlong *)0x0) {
            LOCK();
            piVar7 = (int *)((longlong)local_140 + 0xc);
            iVar12 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if ((iVar12 == 1) && (local_140 != (longlong *)0x0)) {
              (**(code **)(*local_140 + 8))(local_140,1);
            }
          }
          local_150[0] = &PTR_FUN_143fcdb70;
          plVar5 = local_168;
        }
        if (plVar5 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar7 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar12 != 1) {
          return;
        }
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141fde480 FUN_141fde480 body=1384 status=ok
// SIG undefined FUN_141fde480(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fde480(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong param_7)

{
  longlong *plVar1;
  char cVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char cVar16;
  ulonglong uVar17;
  undefined1 auStack_1d8 [32];
  longlong **local_1b8;
  undefined8 *local_1b0;
  longlong local_1a8;
  char local_198;
  ulonglong local_190;
  undefined8 *local_188;
  longlong local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  ulonglong local_158 [2];
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined **local_a0 [2];
  longlong *local_90;
  undefined **local_88 [2];
  longlong *local_78;
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_54;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_190 = param_5;
  local_188 = param_6;
  local_180 = param_1;
  plVar5 = (longlong *)FMovieSceneBlendingAccumulator::FindActuator<FVector2D>(param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    puVar13 = *(ulonglong **)(param_1 + 0x10);
    local_64 = 0;
    uVar17 = 0;
    local_d0 = param_7;
    local_68 = 0;
    local_54 = 0;
    uVar15 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar13 + *(int *)(param_1 + 0x18) < puVar13) {
      uVar15 = uVar17;
    }
    local_44 = 0;
    uVar14 = uVar17;
    local_e8 = plVar5;
    local_e0 = param_1;
    local_d8 = param_2;
    if (uVar15 != 0) {
      do {
        puVar3 = (ulonglong *)*puVar13;
        local_1b8 = &local_e8;
        puVar6 = puVar13;
        if ((puVar3[1] & 2) == 0) {
          puVar6 = puVar3;
        }
        (**(code **)(*(longlong *)*puVar6 + 8))
                  ((longlong *)*puVar6,local_70,*(undefined4 *)((longlong)puVar3 + 0x24),
                   (char)puVar3[5]);
        puVar13 = puVar13 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar15);
    }
    MovieScene::TMaskedBlendable<float,2>::Resolve<FVector2D>(local_70,&local_160,&local_e8);
    lVar4 = local_180;
    local_1a8 = param_7;
    local_1b0 = local_188;
    local_1b8 = (longlong **)local_190;
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2,local_160);
    iVar12 = -1;
    local_190 = 0xffffffff;
    uVar15 = uVar17;
    if (param_2 != 0) {
      FWeakObjectPtr::operator=(local_158,param_2);
      local_190 = local_158[0];
      iVar12 = (int)local_158[0];
      uVar15 = local_158[0] >> 0x20;
    }
    piVar7 = (int *)plVar5[3];
    piVar11 = piVar7 + (longlong)(int)plVar5[4] * 4;
    for (; piVar7 != piVar11; piVar7 = piVar7 + 4) {
      if ((*piVar7 == iVar12) && (piVar7[1] == (int)uVar15)) {
        lVar9 = plVar5[5];
        FUN_141f522c0(local_c8);
        FMovieSceneAnimTypeID::Combine(&local_188,lVar9);
        if (param_2 == 0) {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar5 + 1,local_b0);
          local_f8 = *puVar8;
          local_f0 = puVar8[1];
          if (local_f0 != 0) {
            LOCK();
            *(int *)(local_f0 + 0xc) = *(int *)(local_f0 + 0xc) + 1;
            UNLOCK();
          }
          uVar10 = FUN_141f394d0(local_88,&local_f8);
          plVar5 = *(longlong **)(lVar4 + 0x10);
          uVar15 = (longlong)*(int *)(local_180 + 0x18) & 0x1fffffffffffffff;
          if (plVar5 + *(int *)(local_180 + 0x18) < plVar5) {
            uVar15 = uVar17;
          }
          cVar16 = '\0';
          if (uVar15 != 0) {
            local_198 = '\x01';
            do {
              lVar4 = *plVar5;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar4 + 0x10);
              *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar4 + 0x18);
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_128 = *(undefined8 *)(param_7 + 0x2d0);
              local_120 = *(undefined4 *)(param_7 + 0x2d8);
              local_1b8 = (longlong **)uVar10;
              local_1b0 = (undefined8 *)(param_7 + 0xf8);
              TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
              OnPreAnimated(param_7 + 0x148,2,local_188,&local_128);
              uVar17 = uVar17 + 1;
              plVar5 = plVar5 + 1;
              cVar16 = local_198;
            } while (uVar17 != uVar15);
          }
          cVar2 = *(char *)(param_7 + 0x2dd);
          local_16c = DAT_1464e8628;
          uStack_168 = 0xffffffff;
          uStack_164 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(char *)(param_7 + 0x2dc) = cVar2;
          if ((cVar16 == '\0') && (cVar2 != '\0')) {
            local_118 = *(undefined8 *)(param_7 + 0x2d0);
            local_110 = *(undefined4 *)(param_7 + 0x2d8);
            local_1b8 = (longlong **)uVar10;
            local_1b0 = (undefined8 *)(param_7 + 0xf8);
            TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
            OnPreAnimated(param_7 + 0x148,cVar2,local_188,&local_118);
          }
          if (local_78 != (longlong *)0x0) {
            LOCK();
            piVar7 = (int *)((longlong)local_78 + 0xc);
            iVar12 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if ((iVar12 == 1) && (local_78 != (longlong *)0x0)) {
              (**(code **)(*local_78 + 8))(local_78,1);
            }
          }
          local_88[0] = &PTR_FUN_143fcdb70;
          plVar5 = local_a8;
        }
        else {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar5 + 1,local_c0);
          local_108 = *puVar8;
          local_100 = puVar8[1];
          if (local_100 != 0) {
            LOCK();
            *(int *)(local_100 + 0xc) = *(int *)(local_100 + 0xc) + 1;
            UNLOCK();
          }
          lVar9 = FUN_141f39530(local_a0,&local_108);
          plVar5 = *(longlong **)(lVar4 + 0x10);
          uVar15 = (longlong)*(int *)(lVar4 + 0x18) & 0x1fffffffffffffff;
          if (plVar5 + *(int *)(lVar4 + 0x18) < plVar5) {
            uVar15 = uVar17;
          }
          cVar16 = '\0';
          local_180 = lVar9;
          if (uVar15 != 0) {
            local_198 = '\x01';
            do {
              lVar4 = *plVar5;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar4 + 0x10);
              local_140 = *(undefined4 *)(lVar4 + 0x18);
              *(undefined4 *)(param_7 + 0x2d8) = local_140;
              local_1b0 = &local_148;
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_148 = *(undefined8 *)(param_7 + 0x2d0);
              local_1b8 = (longlong **)CONCAT71(local_1b8._1_7_,2);
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_7 + 0xf8,local_188,lVar9,param_2);
              uVar17 = uVar17 + 1;
              plVar5 = plVar5 + 1;
              cVar16 = local_198;
            } while (uVar17 != uVar15);
          }
          local_178 = DAT_1464e8628;
          uStack_174 = 0xffffffff;
          uStack_170 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
          if (cVar16 == '\0') {
            local_130 = *(undefined4 *)(param_7 + 0x2d8);
            local_138 = *(undefined8 *)(param_7 + 0x2d0);
            local_1b0 = &local_138;
            local_1b8 = (longlong **)CONCAT71(local_1b8._1_7_,*(undefined1 *)(param_7 + 0x2dd));
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (param_7 + 0xf8,local_188,local_180,param_2);
          }
          if (local_90 != (longlong *)0x0) {
            LOCK();
            piVar7 = (int *)((longlong)local_90 + 0xc);
            iVar12 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if ((iVar12 == 1) && (local_90 != (longlong *)0x0)) {
              (**(code **)(*local_90 + 8))(local_90,1);
            }
          }
          local_a0[0] = &PTR_FUN_143fcdb70;
          plVar5 = local_b8;
        }
        if (plVar5 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar7 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar12 != 1) {
          return;
        }
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141fde9f0 FUN_141fde9f0 body=1384 status=ok
// SIG undefined FUN_141fde9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fde9f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong param_7)

{
  longlong *plVar1;
  char cVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char cVar16;
  ulonglong uVar17;
  undefined1 auStack_208 [32];
  longlong **local_1e8;
  undefined8 *local_1e0;
  longlong local_1d8;
  char local_1c8;
  ulonglong local_1c0;
  undefined8 *local_1b8;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  ulonglong local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  longlong *local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined **local_c8 [2];
  longlong *local_b8;
  undefined **local_b0 [2];
  longlong *local_a0;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_64;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1c0 = param_5;
  local_1b8 = param_6;
  local_1b0 = param_1;
  plVar5 = (longlong *)FMovieSceneBlendingAccumulator::FindActuator<FVector4>(param_3,param_4);
  if (plVar5 != (longlong *)0x0) {
    puVar13 = *(ulonglong **)(param_1 + 0x10);
    local_84 = 0;
    local_7c = 0;
    uVar17 = 0;
    local_110 = param_7;
    local_88 = 0;
    local_64 = 0;
    uVar15 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar13 + *(int *)(param_1 + 0x18) < puVar13) {
      uVar15 = uVar17;
    }
    local_4c = 0;
    uVar14 = uVar17;
    local_128 = plVar5;
    local_120 = param_1;
    local_118 = param_2;
    if (uVar15 != 0) {
      do {
        puVar3 = (ulonglong *)*puVar13;
        local_1e8 = &local_128;
        puVar6 = puVar13;
        if ((puVar3[2] & 2) == 0) {
          puVar6 = puVar3;
        }
        (**(code **)(*(longlong *)*puVar6 + 8))
                  ((longlong *)*puVar6,local_98,*(undefined4 *)((longlong)puVar3 + 0x2c),
                   (char)puVar3[6]);
        puVar13 = puVar13 + 1;
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar15);
    }
    MovieScene::TMaskedBlendable<float,4>::Resolve<FVector4>(local_98,local_f8,&local_128);
    lVar4 = local_1b0;
    local_1d8 = param_7;
    local_1e0 = local_1b8;
    local_1e8 = (longlong **)local_1c0;
    (**(code **)(*plVar5 + 0x20))(plVar5,param_2,local_f8);
    iVar12 = -1;
    local_1c0 = 0xffffffff;
    uVar15 = uVar17;
    if (param_2 != 0) {
      FWeakObjectPtr::operator=(&local_190,param_2);
      local_1c0 = local_190;
      iVar12 = (int)local_190;
      uVar15 = local_190 >> 0x20;
    }
    piVar7 = (int *)plVar5[3];
    piVar11 = piVar7 + (longlong)(int)plVar5[4] * 8;
    for (; piVar7 != piVar11; piVar7 = piVar7 + 8) {
      if ((*piVar7 == iVar12) && (piVar7[1] == (int)uVar15)) {
        lVar9 = plVar5[5];
        FUN_141f522c0(local_108);
        FMovieSceneAnimTypeID::Combine(&local_1b8,lVar9);
        if (param_2 == 0) {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar5 + 1,local_d8);
          local_138 = *puVar8;
          local_130 = puVar8[1];
          if (local_130 != 0) {
            LOCK();
            *(int *)(local_130 + 0xc) = *(int *)(local_130 + 0xc) + 1;
            UNLOCK();
          }
          uVar10 = FUN_141f394d0(local_b0,&local_138);
          plVar5 = *(longlong **)(lVar4 + 0x10);
          uVar15 = (longlong)*(int *)(local_1b0 + 0x18) & 0x1fffffffffffffff;
          if (plVar5 + *(int *)(local_1b0 + 0x18) < plVar5) {
            uVar15 = uVar17;
          }
          cVar16 = '\0';
          if (uVar15 != 0) {
            local_1c8 = '\x01';
            do {
              lVar4 = *plVar5;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar4 + 0x18);
              *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar4 + 0x20);
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_168 = *(undefined8 *)(param_7 + 0x2d0);
              local_160 = *(undefined4 *)(param_7 + 0x2d8);
              local_1e8 = (longlong **)uVar10;
              local_1e0 = (undefined8 *)(param_7 + 0xf8);
              TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
              OnPreAnimated(param_7 + 0x148,2,local_1b8,&local_168);
              uVar17 = uVar17 + 1;
              plVar5 = plVar5 + 1;
              cVar16 = local_1c8;
            } while (uVar17 != uVar15);
          }
          cVar2 = *(char *)(param_7 + 0x2dd);
          local_19c = DAT_1464e8628;
          uStack_198 = 0xffffffff;
          uStack_194 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(char *)(param_7 + 0x2dc) = cVar2;
          if ((cVar16 == '\0') && (cVar2 != '\0')) {
            local_158 = *(undefined8 *)(param_7 + 0x2d0);
            local_150 = *(undefined4 *)(param_7 + 0x2d8);
            local_1e8 = (longlong **)uVar10;
            local_1e0 = (undefined8 *)(param_7 + 0xf8);
            TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
            OnPreAnimated(param_7 + 0x148,cVar2,local_1b8,&local_158);
          }
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            piVar7 = (int *)((longlong)local_a0 + 0xc);
            iVar12 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if ((iVar12 == 1) && (local_a0 != (longlong *)0x0)) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
          local_b0[0] = &PTR_FUN_143fcdb70;
          plVar5 = local_d0;
        }
        else {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar5 + 1,local_e8);
          local_148 = *puVar8;
          local_140 = puVar8[1];
          if (local_140 != 0) {
            LOCK();
            *(int *)(local_140 + 0xc) = *(int *)(local_140 + 0xc) + 1;
            UNLOCK();
          }
          lVar9 = FUN_141f39530(local_c8,&local_148);
          plVar5 = *(longlong **)(lVar4 + 0x10);
          uVar15 = (longlong)*(int *)(lVar4 + 0x18) & 0x1fffffffffffffff;
          if (plVar5 + *(int *)(lVar4 + 0x18) < plVar5) {
            uVar15 = uVar17;
          }
          cVar16 = '\0';
          local_1b0 = lVar9;
          if (uVar15 != 0) {
            local_1c8 = '\x01';
            do {
              lVar4 = *plVar5;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar4 + 0x18);
              local_180 = *(undefined4 *)(lVar4 + 0x20);
              *(undefined4 *)(param_7 + 0x2d8) = local_180;
              local_1e0 = &local_188;
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_188 = *(undefined8 *)(param_7 + 0x2d0);
              local_1e8 = (longlong **)CONCAT71(local_1e8._1_7_,2);
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_7 + 0xf8,local_1b8,lVar9,param_2);
              uVar17 = uVar17 + 1;
              plVar5 = plVar5 + 1;
              cVar16 = local_1c8;
            } while (uVar17 != uVar15);
          }
          local_1a8 = DAT_1464e8628;
          uStack_1a4 = 0xffffffff;
          uStack_1a0 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
          if (cVar16 == '\0') {
            local_170 = *(undefined4 *)(param_7 + 0x2d8);
            local_178 = *(undefined8 *)(param_7 + 0x2d0);
            local_1e0 = &local_178;
            local_1e8 = (longlong **)CONCAT71(local_1e8._1_7_,*(undefined1 *)(param_7 + 0x2dd));
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (param_7 + 0xf8,local_1b8,local_1b0,param_2);
          }
          if (local_b8 != (longlong *)0x0) {
            LOCK();
            piVar7 = (int *)((longlong)local_b8 + 0xc);
            iVar12 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if ((iVar12 == 1) && (local_b8 != (longlong *)0x0)) {
              (**(code **)(*local_b8 + 8))(local_b8,1);
            }
          }
          local_c8[0] = &PTR_FUN_143fcdb70;
          plVar5 = local_e0;
        }
        if (plVar5 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar1 = plVar5 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 != 1) {
          return;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar7 = (int *)((longlong)plVar5 + 0xc);
        iVar12 = *piVar7;
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (iVar12 != 1) {
          return;
        }
        (**(code **)(*plVar5 + 8))(plVar5,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141fdef60 FUN_141fdef60 body=1384 status=ok
// SIG undefined FUN_141fdef60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fdef60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,longlong param_7)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  int *piVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  int iVar14;
  char cVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_1e8 [32];
  longlong **local_1c8;
  undefined8 *local_1c0;
  longlong local_1b8;
  char local_1a8;
  ulonglong local_1a0;
  undefined8 *local_198;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  ulonglong local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_c0 [8];
  longlong *local_b8;
  undefined **local_b0 [2];
  longlong *local_a0;
  undefined **local_98 [2];
  longlong *local_88;
  undefined1 local_80 [12];
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_58;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  local_1a0 = param_5;
  local_198 = param_6;
  local_190 = param_1;
  plVar6 = (longlong *)FMovieSceneBlendingAccumulator::FindActuator<FVector>(param_3,param_4);
  if (plVar6 != (longlong *)0x0) {
    puVar12 = *(ulonglong **)(param_1 + 0x10);
    local_70 = 0;
    local_68 = 0;
    uVar17 = 0;
    local_f0 = param_7;
    local_74 = 0;
    local_58 = 0;
    uVar16 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
    if (puVar12 + *(int *)(param_1 + 0x18) < puVar12) {
      uVar16 = uVar17;
    }
    local_44 = 0;
    uVar13 = uVar17;
    local_108 = plVar6;
    local_100 = param_1;
    local_f8 = param_2;
    if (uVar16 != 0) {
      do {
        puVar4 = (ulonglong *)*puVar12;
        local_1c8 = &local_108;
        puVar7 = puVar12;
        if ((puVar4[2] & 2) == 0) {
          puVar7 = puVar4;
        }
        (**(code **)(*(longlong *)*puVar7 + 8))
                  ((longlong *)*puVar7,local_80,*(undefined4 *)((longlong)puVar4 + 0x2c),
                   (char)puVar4[6]);
        puVar12 = puVar12 + 1;
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar16);
    }
    MovieScene::TMaskedBlendable<float,3>::Resolve<FVector>(local_80,local_e8,&local_108);
    lVar5 = local_190;
    local_1b8 = param_7;
    local_1c0 = local_198;
    local_1c8 = (longlong **)local_1a0;
    (**(code **)(*plVar6 + 0x20))(plVar6,param_2,local_e8,local_190);
    local_1a0 = 0xffffffff;
    iVar14 = -1;
    uVar16 = uVar17;
    if (param_2 != 0) {
      FWeakObjectPtr::operator=(&local_170,param_2);
      local_1a0 = local_170;
      iVar14 = (int)local_170;
      uVar16 = local_170 >> 0x20;
    }
    piVar11 = (int *)plVar6[3];
    piVar1 = piVar11 + (longlong)(int)plVar6[4] * 5;
    for (; piVar11 != piVar1; piVar11 = piVar11 + 5) {
      if ((*piVar11 == iVar14) && (piVar11[1] == (int)uVar16)) {
        lVar9 = plVar6[5];
        FUN_141f522c0(local_d8);
        FMovieSceneAnimTypeID::Combine(&local_198,lVar9);
        if (param_2 == 0) {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar6 + 1,local_c0);
          local_118 = *puVar8;
          local_110 = puVar8[1];
          if (local_110 != 0) {
            LOCK();
            *(int *)(local_110 + 0xc) = *(int *)(local_110 + 0xc) + 1;
            UNLOCK();
          }
          uVar10 = FUN_141f394d0(local_98,&local_118);
          plVar6 = *(longlong **)(lVar5 + 0x10);
          uVar16 = (longlong)*(int *)(local_190 + 0x18) & 0x1fffffffffffffff;
          if (plVar6 + *(int *)(local_190 + 0x18) < plVar6) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          if (uVar16 != 0) {
            local_1a8 = '\x01';
            do {
              lVar5 = *plVar6;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x18);
              *(undefined4 *)(param_7 + 0x2d8) = *(undefined4 *)(lVar5 + 0x20);
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_148 = *(undefined8 *)(param_7 + 0x2d0);
              local_140 = *(undefined4 *)(param_7 + 0x2d8);
              local_1c8 = (longlong **)uVar10;
              local_1c0 = (undefined8 *)(param_7 + 0xf8);
              TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
              OnPreAnimated(param_7 + 0x148,2,local_198,&local_148);
              uVar17 = uVar17 + 1;
              plVar6 = plVar6 + 1;
              cVar15 = local_1a8;
            } while (uVar17 != uVar16);
          }
          cVar3 = *(char *)(param_7 + 0x2dd);
          local_17c = DAT_1464e8628;
          uStack_178 = 0xffffffff;
          uStack_174 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(char *)(param_7 + 0x2dc) = cVar3;
          if ((cVar15 == '\0') && (cVar3 != '\0')) {
            local_138 = *(undefined8 *)(param_7 + 0x2d0);
            local_130 = *(undefined4 *)(param_7 + 0x2d8);
            local_1c8 = (longlong **)uVar10;
            local_1c0 = (undefined8 *)(param_7 + 0xf8);
            TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedGlobalToken,32,8>_>::
            OnPreAnimated(param_7 + 0x148,cVar3,local_198,&local_138);
          }
          if (local_88 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_88 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_88 != (longlong *)0x0)) {
              (**(code **)(*local_88 + 8))(local_88,1);
            }
          }
          local_98[0] = &PTR_FUN_143fcdb70;
          plVar6 = local_b8;
        }
        else {
          puVar8 = (undefined8 *)
                   TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(plVar6 + 1,local_d0);
          local_128 = *puVar8;
          local_120 = puVar8[1];
          if (local_120 != 0) {
            LOCK();
            *(int *)(local_120 + 0xc) = *(int *)(local_120 + 0xc) + 1;
            UNLOCK();
          }
          lVar9 = FUN_141f39530(local_b0,&local_128);
          plVar6 = *(longlong **)(lVar5 + 0x10);
          uVar16 = (longlong)*(int *)(lVar5 + 0x18) & 0x1fffffffffffffff;
          if (plVar6 + *(int *)(lVar5 + 0x18) < plVar6) {
            uVar16 = uVar17;
          }
          cVar15 = '\0';
          local_190 = lVar9;
          if (uVar16 != 0) {
            local_1a8 = '\x01';
            do {
              lVar5 = *plVar6;
              *(undefined8 *)(param_7 + 0x2d0) = *(undefined8 *)(lVar5 + 0x18);
              local_160 = *(undefined4 *)(lVar5 + 0x20);
              *(undefined4 *)(param_7 + 0x2d8) = local_160;
              local_1c0 = &local_168;
              *(undefined1 *)(param_7 + 0x2dc) = 2;
              local_168 = *(undefined8 *)(param_7 + 0x2d0);
              local_1c8 = (longlong **)CONCAT71(local_1c8._1_7_,2);
              FMovieScenePreAnimatedState::SavePreAnimatedState
                        (param_7 + 0xf8,local_198,lVar9,param_2);
              uVar17 = uVar17 + 1;
              plVar6 = plVar6 + 1;
              cVar15 = local_1a8;
            } while (uVar17 != uVar16);
          }
          local_188 = DAT_1464e8628;
          uStack_184 = 0xffffffff;
          uStack_180 = 0xffffffff;
          *(ulonglong *)(param_7 + 0x2d0) = CONCAT44(0xffffffff,DAT_1464e8628);
          *(undefined4 *)(param_7 + 0x2d8) = 0xffffffff;
          *(undefined1 *)(param_7 + 0x2dc) = *(undefined1 *)(param_7 + 0x2dd);
          if (cVar15 == '\0') {
            local_150 = *(undefined4 *)(param_7 + 0x2d8);
            local_158 = *(undefined8 *)(param_7 + 0x2d0);
            local_1c0 = &local_158;
            local_1c8 = (longlong **)CONCAT71(local_1c8._1_7_,*(undefined1 *)(param_7 + 0x2dd));
            FMovieScenePreAnimatedState::SavePreAnimatedState
                      (param_7 + 0xf8,local_198,local_190,param_2);
          }
          if (local_a0 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_a0 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar14 == 1) && (local_a0 != (longlong *)0x0)) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
          local_b0[0] = &PTR_FUN_143fcdb70;
          plVar6 = local_c8;
        }
        if (plVar6 == (longlong *)0x0) {
          return;
        }
        LOCK();
        plVar2 = plVar6 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 != 1) {
          return;
        }
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 != 1) {
          return;
        }
        (**(code **)(*plVar6 + 8))(plVar6,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141fdf4d0 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TWeakObjectPtr<UAudioComponent,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141fdf580 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction>,TDefaultMapHashableKeyFuncs<FObjectKey,FTrackInstancePropertyBindings::FPropertyAndFunction,0>,FDefaultSetAllocator>
::ConditionalRehash(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141fdf630 FUN_141fdf630 body=600 status=ok
// SIG undefined FUN_141fdf630(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fdf630(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 ****ppppuVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar5 = (longlong *)(param_1 + 8);
  plVar9 = (longlong *)0x0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar1 = *plVar5;
    plVar6 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar6 = param_2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar6 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
        if (*plVar6 == lVar1) {
          if (iVar3 != -1) goto LAB_141fdf6c2;
          break;
        }
        iVar3 = (int)plVar6[6];
      } while (iVar3 != -1);
    }
  }
  plVar6 = plVar9;
LAB_141fdf6c2:
  plVar8 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar8 = plVar9;
  }
  if (plVar8 == (longlong *)0x0) {
    puVar4 = (undefined8 *)FUN_141f346d0(local_68);
    pppuVar2 = (undefined8 ***)*puVar4;
    local_30 = local_30 & 0xfc;
    local_50[0] = (undefined8 ***)FMemory::Malloc(0x28);
    ppppuVar7 = local_50;
    if ((local_30 & 2) == 0) {
      ppppuVar7 = (undefined8 ****)local_50[0];
    }
    local_30 = local_30 | 1;
    *ppppuVar7 = (undefined8 ***)&PTR_FUN_144f51da8;
    local_58 = local_50;
    ppppuVar7[1] = pppuVar2;
    ppppuVar7[2] = (undefined8 ***)0x0;
    ppppuVar7[3] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar7 + 4) = 0x80000000;
    local_60 = plVar5;
    FUN_141f32b00(param_2,local_68,&local_60,0);
    if ((local_30 & 1) != 0) {
      ppppuVar7 = local_50;
      if ((local_30 & 2) == 0) {
        ppppuVar7 = (undefined8 ****)local_50[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar7)(ppppuVar7,0);
      if ((local_30 & 2) == 0) {
        FMemory::Free(local_50[0]);
      }
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      lVar1 = *plVar5;
      plVar5 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar5 = param_2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_2[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar8 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
          if (*plVar8 == lVar1) {
            if (iVar3 != -1) goto LAB_141fdf7f1;
            break;
          }
          iVar3 = (int)plVar8[6];
        } while (iVar3 != -1);
      }
    }
    plVar8 = plVar9;
LAB_141fdf7f1:
    plVar8 = plVar8 + 1;
  }
  plVar5 = plVar8;
  if ((*(byte *)(plVar8 + 4) & 2) == 0) {
    plVar5 = (longlong *)*plVar8;
  }
  if (plVar5[1] == *(longlong *)(param_1 + 0x10)) {
    if ((*(byte *)(plVar8 + 4) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    bVar10 = *(int *)(param_1 + 0x38) == (int)plVar8[4];
    if ((int)plVar8[4] < *(int *)(param_1 + 0x38)) {
      *(undefined4 *)(plVar8 + 3) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar8 + 0x1c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8 + 2,0);
      }
      iVar3 = *(int *)(param_1 + 0x38);
      *(int *)(plVar8 + 4) = iVar3;
      bVar10 = *(int *)(param_1 + 0x38) == iVar3;
    }
    if (bVar10) {
      iVar3 = (int)plVar8[3];
      *(int *)(plVar8 + 3) = iVar3 + 1;
      if (*(int *)((longlong)plVar8 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8 + 2,iVar3);
      }
      *(longlong *)(plVar8[2] + (longlong)iVar3 * 8) = param_1 + 0x18;
    }
  }
  return;
}



// FUNCTION 141fdf890 FUN_141fdf890 body=686 status=ok
// SIG undefined FUN_141fdf890(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fdf890(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)(param_1 + 8);
  plVar8 = (longlong *)0x0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar1 = *plVar4;
    plVar5 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar5 = param_2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
        if (*plVar5 == lVar1) {
          if (iVar3 != -1) goto LAB_141fdf922;
          break;
        }
        iVar3 = (int)plVar5[6];
      } while (iVar3 != -1);
    }
  }
  plVar5 = plVar8;
LAB_141fdf922:
  plVar7 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (plVar7 == (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146acb9d0) &&
       (_Init_thread_header(&DAT_146acb9d0), DAT_146acb9d0 == -1)) {
      FMovieSceneAnimTypeID::Unique(&DAT_146acb9c8);
      _Init_thread_footer(&DAT_146acb9d0);
    }
    pppuVar2 = DAT_146acb9c8;
    local_30 = local_30 & 0xfc;
    local_50[0] = (undefined8 ***)FMemory::Malloc(0x28);
    ppppuVar6 = local_50;
    if ((local_30 & 2) == 0) {
      ppppuVar6 = (undefined8 ****)local_50[0];
    }
    local_30 = local_30 | 1;
    *ppppuVar6 = (undefined8 ***)&PTR_FUN_144f46ce0;
    local_58 = local_50;
    ppppuVar6[1] = pppuVar2;
    ppppuVar6[2] = (undefined8 ***)0x0;
    ppppuVar6[3] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar6 + 4) = 0x80000000;
    local_60 = plVar4;
    FUN_141f32b00(param_2,local_68,&local_60,0);
    if ((local_30 & 1) != 0) {
      ppppuVar6 = local_50;
      if ((local_30 & 2) == 0) {
        ppppuVar6 = (undefined8 ****)local_50[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_30 & 2) == 0) {
        FMemory::Free(local_50[0]);
      }
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      lVar1 = *plVar4;
      plVar4 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar4 = param_2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_2[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
          if (*plVar7 == lVar1) {
            if (iVar3 != -1) goto LAB_141fdfa71;
            break;
          }
          iVar3 = (int)plVar7[6];
        } while (iVar3 != -1);
      }
    }
    plVar7 = plVar8;
LAB_141fdfa71:
    plVar7 = plVar7 + 1;
  }
  plVar4 = plVar7;
  if ((*(byte *)(plVar7 + 4) & 2) == 0) {
    plVar4 = (longlong *)*plVar7;
  }
  if (plVar4[1] == *(longlong *)(param_1 + 0x10)) {
    if ((*(byte *)(plVar7 + 4) & 2) == 0) {
      plVar7 = (longlong *)*plVar7;
    }
    bVar9 = *(int *)(param_1 + 0x58) == (int)plVar7[4];
    if ((int)plVar7[4] < *(int *)(param_1 + 0x58)) {
      *(undefined4 *)(plVar7 + 3) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar7 + 0x1c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7 + 2,0);
      }
      iVar3 = *(int *)(param_1 + 0x58);
      *(int *)(plVar7 + 4) = iVar3;
      bVar9 = *(int *)(param_1 + 0x58) == iVar3;
    }
    if (bVar9) {
      iVar3 = (int)plVar7[3];
      *(int *)(plVar7 + 3) = iVar3 + 1;
      if (*(int *)((longlong)plVar7 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7 + 2,iVar3);
      }
      *(longlong *)(plVar7[2] + (longlong)iVar3 * 8) = param_1 + 0x18;
    }
  }
  return;
}



// FUNCTION 141fdfb40 FUN_141fdfb40 body=686 status=ok
// SIG undefined FUN_141fdfb40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fdfb40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)(param_1 + 8);
  plVar8 = (longlong *)0x0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar1 = *plVar4;
    plVar5 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar5 = param_2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
        if (*plVar5 == lVar1) {
          if (iVar3 != -1) goto LAB_141fdfbd2;
          break;
        }
        iVar3 = (int)plVar5[6];
      } while (iVar3 != -1);
    }
  }
  plVar5 = plVar8;
LAB_141fdfbd2:
  plVar7 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (plVar7 == (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146acbaf8) &&
       (_Init_thread_header(&DAT_146acbaf8), DAT_146acbaf8 == -1)) {
      FMovieSceneAnimTypeID::Unique(&DAT_146acbaf0);
      _Init_thread_footer(&DAT_146acbaf8);
    }
    pppuVar2 = DAT_146acbaf0;
    local_30 = local_30 & 0xfc;
    local_50[0] = (undefined8 ***)FMemory::Malloc(0x28);
    ppppuVar6 = local_50;
    if ((local_30 & 2) == 0) {
      ppppuVar6 = (undefined8 ****)local_50[0];
    }
    local_30 = local_30 | 1;
    *ppppuVar6 = (undefined8 ***)&PTR_FUN_144f4cd00;
    local_58 = local_50;
    ppppuVar6[1] = pppuVar2;
    ppppuVar6[2] = (undefined8 ***)0x0;
    ppppuVar6[3] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar6 + 4) = 0x80000000;
    local_60 = plVar4;
    FUN_141f32b00(param_2,local_68,&local_60,0);
    if ((local_30 & 1) != 0) {
      ppppuVar6 = local_50;
      if ((local_30 & 2) == 0) {
        ppppuVar6 = (undefined8 ****)local_50[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_30 & 2) == 0) {
        FMemory::Free(local_50[0]);
      }
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      lVar1 = *plVar4;
      plVar4 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar4 = param_2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_2[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
          if (*plVar7 == lVar1) {
            if (iVar3 != -1) goto LAB_141fdfd21;
            break;
          }
          iVar3 = (int)plVar7[6];
        } while (iVar3 != -1);
      }
    }
    plVar7 = plVar8;
LAB_141fdfd21:
    plVar7 = plVar7 + 1;
  }
  plVar4 = plVar7;
  if ((*(byte *)(plVar7 + 4) & 2) == 0) {
    plVar4 = (longlong *)*plVar7;
  }
  if (plVar4[1] == *(longlong *)(param_1 + 0x10)) {
    if ((*(byte *)(plVar7 + 4) & 2) == 0) {
      plVar7 = (longlong *)*plVar7;
    }
    bVar9 = *(int *)(param_1 + 0x40) == (int)plVar7[4];
    if ((int)plVar7[4] < *(int *)(param_1 + 0x40)) {
      *(undefined4 *)(plVar7 + 3) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar7 + 0x1c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7 + 2,0);
      }
      iVar3 = *(int *)(param_1 + 0x40);
      *(int *)(plVar7 + 4) = iVar3;
      bVar9 = *(int *)(param_1 + 0x40) == iVar3;
    }
    if (bVar9) {
      iVar3 = (int)plVar7[3];
      *(int *)(plVar7 + 3) = iVar3 + 1;
      if (*(int *)((longlong)plVar7 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7 + 2,iVar3);
      }
      *(longlong *)(plVar7[2] + (longlong)iVar3 * 8) = param_1 + 0x18;
    }
  }
  return;
}



// FUNCTION 141fdfdf0 Consolidate body=600 status=ok
// SIG undefined Consolidate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneAccumulatedBlendState::TTokenEntry<FEulerTransform>::Consolidate
               (longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 ****ppppuVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar5 = (longlong *)(param_1 + 8);
  plVar9 = (longlong *)0x0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar1 = *plVar5;
    plVar6 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar6 = param_2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar6 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
        if (*plVar6 == lVar1) {
          if (iVar3 != -1) goto LAB_141fdfe82;
          break;
        }
        iVar3 = (int)plVar6[6];
      } while (iVar3 != -1);
    }
  }
  plVar6 = plVar9;
LAB_141fdfe82:
  plVar8 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar8 = plVar9;
  }
  if (plVar8 == (longlong *)0x0) {
    puVar4 = (undefined8 *)FUN_141f34760(local_68);
    pppuVar2 = (undefined8 ***)*puVar4;
    local_30 = local_30 & 0xfc;
    local_50[0] = (undefined8 ***)FMemory::Malloc(0x28);
    ppppuVar7 = local_50;
    if ((local_30 & 2) == 0) {
      ppppuVar7 = (undefined8 ****)local_50[0];
    }
    local_30 = local_30 | 1;
    *ppppuVar7 = (undefined8 ***)&PTR_FUN_144f51ca0;
    local_58 = local_50;
    ppppuVar7[1] = pppuVar2;
    ppppuVar7[2] = (undefined8 ***)0x0;
    ppppuVar7[3] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar7 + 4) = 0x80000000;
    local_60 = plVar5;
    FUN_141f32b00(param_2,local_68,&local_60,0);
    if ((local_30 & 1) != 0) {
      ppppuVar7 = local_50;
      if ((local_30 & 2) == 0) {
        ppppuVar7 = (undefined8 ****)local_50[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar7)(ppppuVar7,0);
      if ((local_30 & 2) == 0) {
        FMemory::Free(local_50[0]);
      }
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      lVar1 = *plVar5;
      plVar5 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar5 = param_2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_2[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar8 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
          if (*plVar8 == lVar1) {
            if (iVar3 != -1) goto LAB_141fdffb1;
            break;
          }
          iVar3 = (int)plVar8[6];
        } while (iVar3 != -1);
      }
    }
    plVar8 = plVar9;
LAB_141fdffb1:
    plVar8 = plVar8 + 1;
  }
  plVar5 = plVar8;
  if ((*(byte *)(plVar8 + 4) & 2) == 0) {
    plVar5 = (longlong *)*plVar8;
  }
  if (plVar5[1] == *(longlong *)(param_1 + 0x10)) {
    if ((*(byte *)(plVar8 + 4) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    bVar10 = *(int *)(param_1 + 0x58) == (int)plVar8[4];
    if ((int)plVar8[4] < *(int *)(param_1 + 0x58)) {
      *(undefined4 *)(plVar8 + 3) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar8 + 0x1c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8 + 2,0);
      }
      iVar3 = *(int *)(param_1 + 0x58);
      *(int *)(plVar8 + 4) = iVar3;
      bVar10 = *(int *)(param_1 + 0x58) == iVar3;
    }
    if (bVar10) {
      iVar3 = (int)plVar8[3];
      *(int *)(plVar8 + 3) = iVar3 + 1;
      if (*(int *)((longlong)plVar8 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8 + 2,iVar3);
      }
      *(longlong *)(plVar8[2] + (longlong)iVar3 * 8) = param_1 + 0x18;
    }
  }
  return;
}



// FUNCTION 141fe0050 FUN_141fe0050 body=686 status=ok
// SIG undefined FUN_141fe0050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe0050(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)(param_1 + 8);
  plVar8 = (longlong *)0x0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar1 = *plVar4;
    plVar5 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar5 = param_2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
        if (*plVar5 == lVar1) {
          if (iVar3 != -1) goto LAB_141fe00e2;
          break;
        }
        iVar3 = (int)plVar5[6];
      } while (iVar3 != -1);
    }
  }
  plVar5 = plVar8;
LAB_141fe00e2:
  plVar7 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar7 = plVar8;
  }
  if (plVar7 == (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146acba50) &&
       (_Init_thread_header(&DAT_146acba50), DAT_146acba50 == -1)) {
      FMovieSceneAnimTypeID::Unique(&DAT_146acba48);
      _Init_thread_footer(&DAT_146acba50);
    }
    pppuVar2 = DAT_146acba48;
    local_30 = local_30 & 0xfc;
    local_50[0] = (undefined8 ***)FMemory::Malloc(0x28);
    ppppuVar6 = local_50;
    if ((local_30 & 2) == 0) {
      ppppuVar6 = (undefined8 ****)local_50[0];
    }
    local_30 = local_30 | 1;
    *ppppuVar6 = (undefined8 ***)&PTR_FUN_144f489b8;
    local_58 = local_50;
    ppppuVar6[1] = pppuVar2;
    ppppuVar6[2] = (undefined8 ***)0x0;
    ppppuVar6[3] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar6 + 4) = 0x80000000;
    local_60 = plVar4;
    FUN_141f32b00(param_2,local_68,&local_60,0);
    if ((local_30 & 1) != 0) {
      ppppuVar6 = local_50;
      if ((local_30 & 2) == 0) {
        ppppuVar6 = (undefined8 ****)local_50[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar6)(ppppuVar6,0);
      if ((local_30 & 2) == 0) {
        FMemory::Free(local_50[0]);
      }
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      lVar1 = *plVar4;
      plVar4 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar4 = param_2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_2[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar7 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
          if (*plVar7 == lVar1) {
            if (iVar3 != -1) goto LAB_141fe0231;
            break;
          }
          iVar3 = (int)plVar7[6];
        } while (iVar3 != -1);
      }
    }
    plVar7 = plVar8;
LAB_141fe0231:
    plVar7 = plVar7 + 1;
  }
  plVar4 = plVar7;
  if ((*(byte *)(plVar7 + 4) & 2) == 0) {
    plVar4 = (longlong *)*plVar7;
  }
  if (plVar4[1] == *(longlong *)(param_1 + 0x10)) {
    if ((*(byte *)(plVar7 + 4) & 2) == 0) {
      plVar7 = (longlong *)*plVar7;
    }
    bVar9 = *(int *)(param_1 + 0x40) == (int)plVar7[4];
    if ((int)plVar7[4] < *(int *)(param_1 + 0x40)) {
      *(undefined4 *)(plVar7 + 3) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar7 + 0x1c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7 + 2,0);
      }
      iVar3 = *(int *)(param_1 + 0x40);
      *(int *)(plVar7 + 4) = iVar3;
      bVar9 = *(int *)(param_1 + 0x40) == iVar3;
    }
    if (bVar9) {
      iVar3 = (int)plVar7[3];
      *(int *)(plVar7 + 3) = iVar3 + 1;
      if (*(int *)((longlong)plVar7 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7 + 2,iVar3);
      }
      *(longlong *)(plVar7[2] + (longlong)iVar3 * 8) = param_1 + 0x18;
    }
  }
  return;
}



// FUNCTION 141fe0300 Consolidate body=600 status=ok
// SIG undefined Consolidate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieSceneAccumulatedBlendState::TTokenEntry<FTransform>::Consolidate
               (longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 ****ppppuVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar5 = (longlong *)(param_1 + 8);
  plVar9 = (longlong *)0x0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar1 = *plVar5;
    plVar6 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar6 = param_2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar6 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
        if (*plVar6 == lVar1) {
          if (iVar3 != -1) goto LAB_141fe0392;
          break;
        }
        iVar3 = (int)plVar6[6];
      } while (iVar3 != -1);
    }
  }
  plVar6 = plVar9;
LAB_141fe0392:
  plVar8 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar8 = plVar9;
  }
  if (plVar8 == (longlong *)0x0) {
    puVar4 = (undefined8 *)FUN_141f347f0(local_68);
    pppuVar2 = (undefined8 ***)*puVar4;
    local_30 = local_30 & 0xfc;
    local_50[0] = (undefined8 ***)FMemory::Malloc(0x28);
    ppppuVar7 = local_50;
    if ((local_30 & 2) == 0) {
      ppppuVar7 = (undefined8 ****)local_50[0];
    }
    local_30 = local_30 | 1;
    *ppppuVar7 = (undefined8 ***)&PTR_FUN_144f51cd0;
    local_58 = local_50;
    ppppuVar7[1] = pppuVar2;
    ppppuVar7[2] = (undefined8 ***)0x0;
    ppppuVar7[3] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar7 + 4) = 0x80000000;
    local_60 = plVar5;
    FUN_141f32b00(param_2,local_68,&local_60,0);
    if ((local_30 & 1) != 0) {
      ppppuVar7 = local_50;
      if ((local_30 & 2) == 0) {
        ppppuVar7 = (undefined8 ****)local_50[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar7)(ppppuVar7,0);
      if ((local_30 & 2) == 0) {
        FMemory::Free(local_50[0]);
      }
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      lVar1 = *plVar5;
      plVar5 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar5 = param_2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_2[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar8 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
          if (*plVar8 == lVar1) {
            if (iVar3 != -1) goto LAB_141fe04c1;
            break;
          }
          iVar3 = (int)plVar8[6];
        } while (iVar3 != -1);
      }
    }
    plVar8 = plVar9;
LAB_141fe04c1:
    plVar8 = plVar8 + 1;
  }
  plVar5 = plVar8;
  if ((*(byte *)(plVar8 + 4) & 2) == 0) {
    plVar5 = (longlong *)*plVar8;
  }
  if (plVar5[1] == *(longlong *)(param_1 + 0x10)) {
    if ((*(byte *)(plVar8 + 4) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    bVar10 = *(int *)(param_1 + 0x60) == (int)plVar8[4];
    if ((int)plVar8[4] < *(int *)(param_1 + 0x60)) {
      *(undefined4 *)(plVar8 + 3) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar8 + 0x1c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8 + 2,0);
      }
      iVar3 = *(int *)(param_1 + 0x60);
      *(int *)(plVar8 + 4) = iVar3;
      bVar10 = *(int *)(param_1 + 0x60) == iVar3;
    }
    if (bVar10) {
      iVar3 = (int)plVar8[3];
      *(int *)(plVar8 + 3) = iVar3 + 1;
      if (*(int *)((longlong)plVar8 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8 + 2,iVar3);
      }
      *(longlong *)(plVar8[2] + (longlong)iVar3 * 8) = param_1 + 0x18;
    }
  }
  return;
}



// FUNCTION 141fe0560 FUN_141fe0560 body=600 status=ok
// SIG undefined FUN_141fe0560(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe0560(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 ****ppppuVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar5 = (longlong *)(param_1 + 8);
  plVar9 = (longlong *)0x0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar1 = *plVar5;
    plVar6 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar6 = param_2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar6 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
        if (*plVar6 == lVar1) {
          if (iVar3 != -1) goto LAB_141fe05f2;
          break;
        }
        iVar3 = (int)plVar6[6];
      } while (iVar3 != -1);
    }
  }
  plVar6 = plVar9;
LAB_141fe05f2:
  plVar8 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar8 = plVar9;
  }
  if (plVar8 == (longlong *)0x0) {
    puVar4 = (undefined8 *)FUN_141f34880(local_68);
    pppuVar2 = (undefined8 ***)*puVar4;
    local_30 = local_30 & 0xfc;
    local_50[0] = (undefined8 ***)FMemory::Malloc(0x28);
    ppppuVar7 = local_50;
    if ((local_30 & 2) == 0) {
      ppppuVar7 = (undefined8 ****)local_50[0];
    }
    local_30 = local_30 | 1;
    *ppppuVar7 = (undefined8 ***)&PTR_FUN_144f51d60;
    local_58 = local_50;
    ppppuVar7[1] = pppuVar2;
    ppppuVar7[2] = (undefined8 ***)0x0;
    ppppuVar7[3] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar7 + 4) = 0x80000000;
    local_60 = plVar5;
    FUN_141f32b00(param_2,local_68,&local_60,0);
    if ((local_30 & 1) != 0) {
      ppppuVar7 = local_50;
      if ((local_30 & 2) == 0) {
        ppppuVar7 = (undefined8 ****)local_50[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar7)(ppppuVar7,0);
      if ((local_30 & 2) == 0) {
        FMemory::Free(local_50[0]);
      }
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      lVar1 = *plVar5;
      plVar5 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar5 = param_2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_2[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar8 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
          if (*plVar8 == lVar1) {
            if (iVar3 != -1) goto LAB_141fe0721;
            break;
          }
          iVar3 = (int)plVar8[6];
        } while (iVar3 != -1);
      }
    }
    plVar8 = plVar9;
LAB_141fe0721:
    plVar8 = plVar8 + 1;
  }
  plVar5 = plVar8;
  if ((*(byte *)(plVar8 + 4) & 2) == 0) {
    plVar5 = (longlong *)*plVar8;
  }
  if (plVar5[1] == *(longlong *)(param_1 + 0x10)) {
    if ((*(byte *)(plVar8 + 4) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    bVar10 = *(int *)(param_1 + 0x38) == (int)plVar8[4];
    if ((int)plVar8[4] < *(int *)(param_1 + 0x38)) {
      *(undefined4 *)(plVar8 + 3) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar8 + 0x1c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8 + 2,0);
      }
      iVar3 = *(int *)(param_1 + 0x38);
      *(int *)(plVar8 + 4) = iVar3;
      bVar10 = *(int *)(param_1 + 0x38) == iVar3;
    }
    if (bVar10) {
      iVar3 = (int)plVar8[3];
      *(int *)(plVar8 + 3) = iVar3 + 1;
      if (*(int *)((longlong)plVar8 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8 + 2,iVar3);
      }
      *(longlong *)(plVar8[2] + (longlong)iVar3 * 8) = param_1 + 0x18;
    }
  }
  return;
}



// FUNCTION 141fe07c0 FUN_141fe07c0 body=600 status=ok
// SIG undefined FUN_141fe07c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe07c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 ****ppppuVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar5 = (longlong *)(param_1 + 8);
  plVar9 = (longlong *)0x0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar1 = *plVar5;
    plVar6 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar6 = param_2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar6 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
        if (*plVar6 == lVar1) {
          if (iVar3 != -1) goto LAB_141fe0852;
          break;
        }
        iVar3 = (int)plVar6[6];
      } while (iVar3 != -1);
    }
  }
  plVar6 = plVar9;
LAB_141fe0852:
  plVar8 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar8 = plVar9;
  }
  if (plVar8 == (longlong *)0x0) {
    puVar4 = (undefined8 *)FUN_141f34910(local_68);
    pppuVar2 = (undefined8 ***)*puVar4;
    local_30 = local_30 & 0xfc;
    local_50[0] = (undefined8 ***)FMemory::Malloc(0x28);
    ppppuVar7 = local_50;
    if ((local_30 & 2) == 0) {
      ppppuVar7 = (undefined8 ****)local_50[0];
    }
    local_30 = local_30 | 1;
    *ppppuVar7 = (undefined8 ***)&PTR_FUN_144f51d00;
    local_58 = local_50;
    ppppuVar7[1] = pppuVar2;
    ppppuVar7[2] = (undefined8 ***)0x0;
    ppppuVar7[3] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar7 + 4) = 0x80000000;
    local_60 = plVar5;
    FUN_141f32b00(param_2,local_68,&local_60,0);
    if ((local_30 & 1) != 0) {
      ppppuVar7 = local_50;
      if ((local_30 & 2) == 0) {
        ppppuVar7 = (undefined8 ****)local_50[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar7)(ppppuVar7,0);
      if ((local_30 & 2) == 0) {
        FMemory::Free(local_50[0]);
      }
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      lVar1 = *plVar5;
      plVar5 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar5 = param_2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_2[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar8 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
          if (*plVar8 == lVar1) {
            if (iVar3 != -1) goto LAB_141fe0981;
            break;
          }
          iVar3 = (int)plVar8[6];
        } while (iVar3 != -1);
      }
    }
    plVar8 = plVar9;
LAB_141fe0981:
    plVar8 = plVar8 + 1;
  }
  plVar5 = plVar8;
  if ((*(byte *)(plVar8 + 4) & 2) == 0) {
    plVar5 = (longlong *)*plVar8;
  }
  if (plVar5[1] == *(longlong *)(param_1 + 0x10)) {
    if ((*(byte *)(plVar8 + 4) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    bVar10 = *(int *)(param_1 + 0x40) == (int)plVar8[4];
    if ((int)plVar8[4] < *(int *)(param_1 + 0x40)) {
      *(undefined4 *)(plVar8 + 3) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar8 + 0x1c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8 + 2,0);
      }
      iVar3 = *(int *)(param_1 + 0x40);
      *(int *)(plVar8 + 4) = iVar3;
      bVar10 = *(int *)(param_1 + 0x40) == iVar3;
    }
    if (bVar10) {
      iVar3 = (int)plVar8[3];
      *(int *)(plVar8 + 3) = iVar3 + 1;
      if (*(int *)((longlong)plVar8 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8 + 2,iVar3);
      }
      *(longlong *)(plVar8[2] + (longlong)iVar3 * 8) = param_1 + 0x18;
    }
  }
  return;
}



// FUNCTION 141fe0a20 FUN_141fe0a20 body=600 status=ok
// SIG undefined FUN_141fe0a20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe0a20(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 ****ppppuVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 ***local_58;
  undefined8 ***local_50 [4];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar5 = (longlong *)(param_1 + 8);
  plVar9 = (longlong *)0x0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    lVar1 = *plVar5;
    plVar6 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar6 = param_2 + 7;
    }
    iVar3 = *(int *)((longlong)plVar6 +
                    ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                    (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
        if (*plVar6 == lVar1) {
          if (iVar3 != -1) goto LAB_141fe0ab2;
          break;
        }
        iVar3 = (int)plVar6[6];
      } while (iVar3 != -1);
    }
  }
  plVar6 = plVar9;
LAB_141fe0ab2:
  plVar8 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar8 = plVar9;
  }
  if (plVar8 == (longlong *)0x0) {
    puVar4 = (undefined8 *)FUN_141f349a0(local_68);
    pppuVar2 = (undefined8 ***)*puVar4;
    local_30 = local_30 & 0xfc;
    local_50[0] = (undefined8 ***)FMemory::Malloc(0x28);
    ppppuVar7 = local_50;
    if ((local_30 & 2) == 0) {
      ppppuVar7 = (undefined8 ****)local_50[0];
    }
    local_30 = local_30 | 1;
    *ppppuVar7 = (undefined8 ***)&PTR_FUN_144f51d30;
    local_58 = local_50;
    ppppuVar7[1] = pppuVar2;
    ppppuVar7[2] = (undefined8 ***)0x0;
    ppppuVar7[3] = (undefined8 ***)0x0;
    *(undefined4 *)(ppppuVar7 + 4) = 0x80000000;
    local_60 = plVar5;
    FUN_141f32b00(param_2,local_68,&local_60,0);
    if ((local_30 & 1) != 0) {
      ppppuVar7 = local_50;
      if ((local_30 & 2) == 0) {
        ppppuVar7 = (undefined8 ****)local_50[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar7)(ppppuVar7,0);
      if ((local_30 & 2) == 0) {
        FMemory::Free(local_50[0]);
      }
    }
    if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
      lVar1 = *plVar5;
      plVar5 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar5 = param_2 + 7;
      }
      iVar3 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1) &
                      (longlong)(int)param_2[9] - 1U) * 4);
      if (iVar3 != -1) {
        do {
          plVar8 = (longlong *)((longlong)iVar3 * 0x38 + *param_2);
          if (*plVar8 == lVar1) {
            if (iVar3 != -1) goto LAB_141fe0be1;
            break;
          }
          iVar3 = (int)plVar8[6];
        } while (iVar3 != -1);
      }
    }
    plVar8 = plVar9;
LAB_141fe0be1:
    plVar8 = plVar8 + 1;
  }
  plVar5 = plVar8;
  if ((*(byte *)(plVar8 + 4) & 2) == 0) {
    plVar5 = (longlong *)*plVar8;
  }
  if (plVar5[1] == *(longlong *)(param_1 + 0x10)) {
    if ((*(byte *)(plVar8 + 4) & 2) == 0) {
      plVar8 = (longlong *)*plVar8;
    }
    bVar10 = *(int *)(param_1 + 0x40) == (int)plVar8[4];
    if ((int)plVar8[4] < *(int *)(param_1 + 0x40)) {
      *(undefined4 *)(plVar8 + 3) = 0;
      if (0x7fffffff < *(uint *)((longlong)plVar8 + 0x1c)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar8 + 2,0);
      }
      iVar3 = *(int *)(param_1 + 0x40);
      *(int *)(plVar8 + 4) = iVar3;
      bVar10 = *(int *)(param_1 + 0x40) == iVar3;
    }
    if (bVar10) {
      iVar3 = (int)plVar8[3];
      *(int *)(plVar8 + 3) = iVar3 + 1;
      if (*(int *)((longlong)plVar8 + 0x1c) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar8 + 2,iVar3);
      }
      *(longlong *)(plVar8[2] + (longlong)iVar3 * 8) = param_1 + 0x18;
    }
  }
  return;
}



// FUNCTION 141fe0c80 CopyToEmptyStorage body=86 status=ok
// SIG undefined CopyToEmptyStorage(void)

void UE4Function_Private::TFunction_OwnedObject<<lambda_d25c2ee684e07e8e879e7e2719710405>_>::
     CopyToEmptyStorage(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x50);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144f51a70;
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puVar2[4] = *(undefined8 *)(param_1 + 0x20);
    puVar2[5] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    puVar2[7] = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    puVar2[8] = *(undefined8 *)(param_1 + 0x40);
    puVar2[9] = uVar1;
    return;
  }
  return;
}



// FUNCTION 141fe0ce0 CreateNewSection body=143 status=ok
// SIG undefined CreateNewSection(void)

longlong UMovieScene3DAttachTrack::CreateNewSection(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar2 = UMovieScene3DAttachSection::GetPrivateStaticClass();
  lVar3 = FUN_1417985e0(uVar2,param_1,0,0,0,0,0,0,0);
  *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 8;
  iVar1 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  if (*(int *)(param_1 + 100) < iVar1 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x58,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar1 * 8) = lVar3;
  return lVar3;
}



// FUNCTION 141fe0d70 FUN_141fe0d70 body=117 status=ok
// SIG undefined FUN_141fe0d70(void)

void FUN_141fe0d70(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieScene3DTransformSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe0df0 FUN_141fe0df0 body=117 status=ok
// SIG undefined FUN_141fe0df0(void)

void FUN_141fe0df0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe0e70 FUN_141fe0e70 body=117 status=ok
// SIG undefined FUN_141fe0e70(void)

void FUN_141fe0e70(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneBoolSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe0ef0 FUN_141fe0ef0 body=131 status=ok
// SIG undefined FUN_141fe0ef0(void)

void FUN_141fe0ef0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = UMovieSceneByteSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar2 = FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(param_1 + 0x80);
  return;
}



// FUNCTION 141fe0f80 CreateNewSection body=114 status=ok
// SIG undefined CreateNewSection(void)

void UMovieSceneCameraAnimTrack::CreateNewSection(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMovieSceneCameraAnimSection::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1000 CreateNewSection body=114 status=ok
// SIG undefined CreateNewSection(void)

void UMovieSceneCameraCutTrack::CreateNewSection(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMovieSceneCameraCutSection::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1080 CreateNewSection body=114 status=ok
// SIG undefined CreateNewSection(void)

void UMovieSceneCameraShakeTrack::CreateNewSection(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMovieSceneCameraShakeSection::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1100 CreateNewSection body=114 status=ok
// SIG undefined CreateNewSection(void)

void UMovieSceneCinematicShotTrack::CreateNewSection(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMovieSceneCinematicShotSection::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1180 FUN_141fe1180 body=117 status=ok
// SIG undefined FUN_141fe1180(void)

void FUN_141fe1180(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneColorSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1200 FUN_141fe1200 body=131 status=ok
// SIG undefined FUN_141fe1200(void)

void FUN_141fe1200(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = UMovieSceneEnumSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar2 = FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  *(undefined8 *)(lVar2 + 0x110) = *(undefined8 *)(param_1 + 0x80);
  return;
}



// FUNCTION 141fe1290 FUN_141fe1290 body=117 status=ok
// SIG undefined FUN_141fe1290(void)

void FUN_141fe1290(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneEventSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1310 FUN_141fe1310 body=117 status=ok
// SIG undefined FUN_141fe1310(void)

void FUN_141fe1310(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneFadeSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1390 FUN_141fe1390 body=114 status=ok
// SIG undefined FUN_141fe1390(void)

void FUN_141fe1390(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_142005c10();
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1410 FUN_141fe1410 body=117 status=ok
// SIG undefined FUN_141fe1410(void)

void FUN_141fe1410(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneFloatSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1490 FUN_141fe1490 body=117 status=ok
// SIG undefined FUN_141fe1490(void)

void FUN_141fe1490(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneActorReferenceSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1510 FUN_141fe1510 body=117 status=ok
// SIG undefined FUN_141fe1510(void)

void FUN_141fe1510(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneIntegerSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1590 FUN_141fe1590 body=117 status=ok
// SIG undefined FUN_141fe1590(void)

void FUN_141fe1590(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneLevelVisibilitySection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1610 FUN_141fe1610 body=174 status=ok
// SIG undefined FUN_141fe1610(void)

longlong FUN_141fe1610(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_142005980();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar3 = FUN_1417985e0(uVar2,param_1,0,8,0,0,0,0,0);
  if (((*(uint *)(lVar3 + 8) >> 9 & 1) != 0) ||
     (cVar1 = UMovieSceneSection::TryModify(lVar3,1), cVar1 != '\0')) {
    *(undefined1 *)(lVar3 + 0x90) = 2;
    *(undefined4 *)(lVar3 + 0x94) = 0;
    *(undefined1 *)(lVar3 + 0x98) = 2;
    *(undefined4 *)(lVar3 + 0x9c) = 0;
  }
  return lVar3;
}



// FUNCTION 141fe16c0 FUN_141fe16c0 body=117 status=ok
// SIG undefined FUN_141fe16c0(void)

void FUN_141fe16c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142005980();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1740 CreateNewSection body=114 status=ok
// SIG undefined CreateNewSection(void)

void UMovieSceneParticleTrack::CreateNewSection(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMovieSceneParticleSection::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe17c0 CreateNewSection body=114 status=ok
// SIG undefined CreateNewSection(void)

void UMovieSceneSkeletalAnimationTrack::CreateNewSection(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMovieSceneSkeletalAnimationSection::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1840 FUN_141fe1840 body=117 status=ok
// SIG undefined FUN_141fe1840(void)

void FUN_141fe1840(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneSlomoSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe18c0 CreateNewSection body=114 status=ok
// SIG undefined CreateNewSection(void)

void UMovieSceneSpawnTrack::CreateNewSection(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = UMovieSceneSpawnSection::GetPrivateStaticClass();
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe1940 FUN_141fe1940 body=117 status=ok
// SIG undefined FUN_141fe1940(void)

void FUN_141fe1940(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = UMovieSceneStringSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  return;
}



// FUNCTION 141fe19c0 FUN_141fe19c0 body=143 status=ok
// SIG undefined FUN_141fe19c0(void)

longlong FUN_141fe19c0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = UMovieSceneVectorSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar2 = FUN_1417985e0(uVar1,param_1,0,8,0,0,0,0,0);
  *(undefined4 *)(lVar2 + 0x360) = *(undefined4 *)(param_1 + 0x80);
  FUN_141ffa070(lVar2);
  return lVar2;
}



// FUNCTION 141fe1a50 FUN_141fe1a50 body=185 status=ok
// SIG undefined FUN_141fe1a50(void)

longlong FUN_141fe1a50(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = UMovieSceneBoolSection::GetPrivateStaticClass();
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar3 = FUN_1417985e0(uVar2,param_1,0,8,0,0,0,0,0);
  if (lVar3 != 0) {
    lVar4 = UMovieSceneBoolSection::GetPrivateStaticClass();
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
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 141fe1b10 CreateTemplateForSection body=261 status=ok
// SIG undefined CreateTemplateForSection(void)

undefined8 *
UMovieScene3DAttachTrack::CreateTemplateForSection
          (undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  
  uVar11 = *(undefined8 *)(param_3 + 0xf0);
  uVar12 = *(undefined8 *)(param_3 + 0xf8);
  uVar1 = *(undefined8 *)(param_3 + 0x100);
  uVar9 = *(undefined8 *)(param_3 + 0x108);
  uVar10 = *(undefined8 *)(param_3 + 0x110);
  uVar2 = *(undefined1 *)(param_3 + 0x118);
  uVar3 = *(undefined1 *)(param_3 + 0x119);
  uVar4 = *(undefined1 *)(param_3 + 0x11a);
  uVar5 = *(undefined1 *)(param_3 + 0x11b);
  uVar6 = *(undefined1 *)(param_3 + 0x11c);
  uVar7 = *(undefined1 *)(param_3 + 0x11d);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar13 = (undefined8 *)FMemory::Malloc(0x50);
  bVar8 = *(byte *)(param_2 + 6);
  *param_2 = puVar13;
  *(byte *)(param_2 + 6) = bVar8 | 1;
  if ((bVar8 & 2) != 0) {
    puVar13 = param_2;
  }
  puVar13[4] = uVar11;
  puVar13[5] = uVar12;
  puVar13[7] = uVar9;
  puVar13[6] = uVar1;
  *(undefined1 *)(puVar13 + 1) = 0;
  *(undefined1 *)(puVar13 + 2) = 0;
  puVar13[3] = 0;
  *puVar13 = &PTR_FUN_144f45930;
  puVar13[8] = uVar10;
  *(undefined1 *)(puVar13 + 9) = uVar2;
  *(undefined1 *)((longlong)puVar13 + 0x49) = uVar3;
  *(undefined1 *)((longlong)puVar13 + 0x4a) = uVar4;
  *(undefined1 *)((longlong)puVar13 + 0x4b) = uVar5;
  *(undefined1 *)((longlong)puVar13 + 0x4c) = uVar6;
  *(undefined1 *)((longlong)puVar13 + 0x4d) = uVar7;
  return param_2;
}



// FUNCTION 141fe1c20 CreateTemplateForSection body=436 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
UMovieScene3DPathTrack::CreateTemplateForSection
          (undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_c0 [16];
  longlong local_b0;
  longlong local_a0;
  undefined1 local_88 [104];
  undefined1 local_20;
  undefined1 local_1f;
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_d8 = *(undefined4 *)(param_3 + 0xf0);
  uStack_d4 = *(undefined4 *)(param_3 + 0xf4);
  uStack_d0 = *(undefined4 *)(param_3 + 0xf8);
  uStack_cc = *(undefined4 *)(param_3 + 0xfc);
  local_c8 = *(undefined8 *)(param_3 + 0x100);
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_f8 = &PTR__scalar_deleting_destructor__144f462d0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_c0,param_3 + 0x108);
  uVar2 = *(uint *)(param_3 + 0x1ac);
  local_20 = *(undefined1 *)(param_3 + 0x1a8);
  local_1f = *(undefined1 *)(param_3 + 0x1a9);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  local_1c = ((uVar2 >> 2 & 1) * 2 | uVar2 >> 1 & 1) * 2 | uVar2 & 1 | local_1c & 0xfffffff8;
  puVar3 = (undefined8 *)FMemory::Malloc(0xe0,8);
  *param_2 = puVar3;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_2 + 6) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar3 = param_2;
  }
  *(undefined1 *)(puVar3 + 1) = local_f0;
  *(undefined1 *)(puVar3 + 2) = local_e8;
  *(undefined4 *)(puVar3 + 4) = local_d8;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_d4;
  *(undefined4 *)(puVar3 + 5) = uStack_d0;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_cc;
  puVar3[3] = local_e0;
  *puVar3 = &PTR__scalar_deleting_destructor__144f462d0;
  puVar3[6] = local_c8;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(puVar3 + 7,local_c0);
  *(uint *)((longlong)puVar3 + 0xdc) = *(uint *)((longlong)puVar3 + 0xdc) & 0xfffffff8;
  *(undefined1 *)(puVar3 + 0x1b) = local_20;
  *(undefined1 *)((longlong)puVar3 + 0xd9) = local_1f;
  *(uint *)((longlong)puVar3 + 0xdc) = *(uint *)((longlong)puVar3 + 0xdc) | local_1c & 7;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_88);
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe1de0 FUN_141fe1de0 body=561 status=ok
// SIG undefined FUN_141fe1de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141fe1de0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined **local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [8];
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [104];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_128 = &PTR__scalar_deleting_destructor__144f47050;
  local_140 = 0;
  local_148 = 0;
  plVar3 = (longlong *)FString::FString(local_138,param_1 + 0x60);
  local_100 = *plVar3;
  *plVar3 = 0;
  local_f8._0_4_ = (undefined4)plVar3[1];
  local_f8._4_4_ = *(undefined4 *)((longlong)plVar3 + 0xc);
  plVar3[1] = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_108 = uVar2;
  if (*plVar3 != 0) {
    FMemory::Free();
  }
  FUN_141fce7a0(local_e0,param_3 + 0xe0);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar4 = (undefined8 *)FMemory::Malloc(0xe8,8);
  *param_2 = puVar4;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_2 + 6) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar4 = param_2;
  }
  *(undefined1 *)(puVar4 + 1) = local_120;
  *(undefined1 *)(puVar4 + 2) = local_118;
  puVar4[3] = local_110;
  *puVar4 = &PTR__scalar_deleting_destructor__144f47050;
  puVar4[4] = local_108;
  puVar4[5] = local_100;
  *(undefined4 *)(puVar4 + 6) = (undefined4)local_f8;
  *(undefined4 *)((longlong)puVar4 + 0x34) = local_f8._4_4_;
  puVar4[7] = local_f0;
  puVar4[8] = local_e8;
  puVar4[9] = &PTR__scalar_deleting_destructor__144f46d00;
  puVar4[10] = local_d8;
  *(undefined4 *)(puVar4 + 0xb) = (undefined4)local_d0;
  *(undefined4 *)((longlong)puVar4 + 0x5c) = local_d0._4_4_;
  *(undefined4 *)(puVar4 + 0xc) = local_c8;
  *(undefined4 *)((longlong)puVar4 + 100) = uStack_c4;
  *(undefined4 *)(puVar4 + 0xd) = uStack_c0;
  *(undefined4 *)((longlong)puVar4 + 0x6c) = uStack_bc;
  local_100 = 0;
  puVar4[0xe] = local_b8;
  puVar4[0xf] = local_b0;
  *(undefined4 *)(puVar4 + 0x10) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar4 + 0x84) = local_a8._4_4_;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = 0;
  puVar4[0x17] = 0;
  puVar4[0x18] = 0;
  *(undefined4 *)(puVar4 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0xcc) = 0;
  puVar4[0x1b] = 0;
  *(undefined4 *)(puVar4 + 0x1c) = 0;
  local_f8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_a0);
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_100 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe2020 CreateTemplateForSection body=210 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
UMovieSceneBoolTrack::CreateTemplateForSection
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [40];
  longlong local_d0;
  undefined **local_b0;
  longlong local_a8;
  longlong local_90;
  undefined1 local_80 [104];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar1 = FMovieSceneBoolPropertySectionTemplate::FMovieSceneBoolPropertySectionTemplate
                    (local_f8,param_3,param_1);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0xd8,8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar2;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar2 = param_2;
  }
  FMovieSceneBoolPropertySectionTemplate::FMovieSceneBoolPropertySectionTemplate(puVar2,uVar1);
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_80);
  if (local_90 != 0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  local_b0 = &PTR_FUN_144f215f0;
  if (local_d0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe2100 FUN_141fe2100 body=523 status=ok
// SIG undefined FUN_141fe2100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141fe2100(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 auStack_128 [32];
  undefined **local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            (&local_108,*(undefined8 *)(param_1 + 0x58),param_1 + 0x60);
  local_108 = &PTR__scalar_deleting_destructor__144f4bb30;
  FMovieSceneByteChannel::FMovieSceneByteChannel(&local_c0,param_3 + 0xe0);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0xe0);
  *param_2 = puVar2;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_2 + 6) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar2 = param_2;
  }
  *puVar2 = &PTR_FUN_143fcdb48;
  *(undefined1 *)(puVar2 + 1) = local_100;
  *puVar2 = &PTR_FUN_143fcdb90;
  *(undefined1 *)(puVar2 + 2) = local_f8;
  puVar2[3] = local_f0;
  *puVar2 = &PTR__scalar_deleting_destructor__144f1bc38;
  puVar2[4] = local_e8;
  puVar2[5] = 0;
  puVar2[5] = local_e0;
  local_e0 = 0;
  *(undefined4 *)(puVar2 + 6) = (undefined4)local_d8;
  *(undefined4 *)((longlong)puVar2 + 0x34) = local_d8._4_4_;
  local_d8 = 0;
  puVar2[7] = local_d0;
  puVar2[8] = local_c8;
  *puVar2 = &PTR__scalar_deleting_destructor__144f4bb30;
  puVar2[9] = &PTR__scalar_deleting_destructor__144f217d8;
  puVar2[10] = 0;
  puVar2[10] = local_b8;
  local_b8 = 0;
  *(undefined4 *)(puVar2 + 0xb) = (undefined4)local_b0;
  *(undefined4 *)((longlong)puVar2 + 0x5c) = local_b0._4_4_;
  local_b0 = 0;
  *(undefined1 *)(puVar2 + 0xc) = local_a8;
  *(undefined1 *)((longlong)puVar2 + 0x61) = local_a7;
  puVar2[0xd] = 0;
  puVar2[0xd] = local_a0;
  local_a0 = 0;
  *(undefined4 *)(puVar2 + 0xe) = (undefined4)local_98;
  *(undefined4 *)((longlong)puVar2 + 0x74) = local_98._4_4_;
  local_98 = 0;
  puVar2[0xf] = local_90;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  *(undefined4 *)(puVar2 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)puVar2 + 0xc4) = 0;
  puVar2[0x1a] = 0;
  *(undefined4 *)(puVar2 + 0x1b) = 0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_88);
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_c0 = &PTR_FUN_144f215f0;
  if (local_e0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe2310 CreateTemplateForSection body=428 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong UMovieSceneColorTrack::CreateTemplateForSection
                   (longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_318 [32];
  undefined **local_2f8 [5];
  longlong local_2d0;
  undefined1 local_2b0 [116];
  undefined1 auStack_23c [44];
  undefined1 local_210 [160];
  undefined1 local_170 [160];
  undefined1 local_d0 [160];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            (local_2f8,*(undefined8 *)(param_1 + 0x58),param_1 + 0x60);
  lVar4 = 4;
  local_2f8[0] = &PTR__scalar_deleting_destructor__144f48300;
  puVar1 = auStack_23c;
  lVar2 = 4;
  do {
    *(undefined ***)(puVar1 + -0x74) = &PTR__scalar_deleting_destructor__144f23580;
    *(undefined2 *)(puVar1 + -0x6c) = 0x404;
    *(undefined8 *)(puVar1 + -100) = 0;
    *(undefined8 *)(puVar1 + -0x5c) = 0;
    *(undefined8 *)(puVar1 + -0x54) = 0;
    *(undefined8 *)(puVar1 + -0x4c) = 0;
    *(undefined4 *)(puVar1 + -0x44) = 0;
    puVar1[-0x40] = 0;
    *(undefined8 *)(puVar1 + -0x3c) = 0;
    *(undefined8 *)(puVar1 + -0x34) = 0;
    *(undefined8 *)(puVar1 + -0x2c) = 0;
    *(undefined8 *)(puVar1 + -0x24) = 0;
    *(undefined8 *)(puVar1 + -0xc) = 0;
    *(undefined8 *)(puVar1 + -4) = 0;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x24) = 60000;
    *(undefined4 *)(puVar1 + 0x28) = 1;
    puVar1 = puVar1 + 0xa0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  local_30 = *(undefined1 *)(param_3 + 0xc9);
  FMovieSceneFloatChannel::operator=(local_2b0,param_3 + 0xe0);
  FMovieSceneFloatChannel::operator=(local_210,param_3 + 0x180);
  FMovieSceneFloatChannel::operator=(local_170,param_3 + 0x220);
  FMovieSceneFloatChannel::operator=(local_d0,param_3 + 0x2c0);
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xfe;
  TInlineValue<FMovieSceneEvalTemplate,48,8>::
  InitializeFrom<FMovieSceneColorSectionTemplate,FMovieSceneColorSectionTemplate>(param_2,local_2f8)
  ;
  plVar3 = (longlong *)&stack0xfffffffffffffff0;
  do {
    lVar4 = lVar4 + -1;
    FKeyHandleLookupTable::~FKeyHandleLookupTable(plVar3 + -0x11);
    if (plVar3[-0x14] != 0) {
      FMemory::Free();
    }
    if (plVar3[-0x16] != 0) {
      FMemory::Free();
    }
    plVar3[-0x18] = (longlong)&PTR_FUN_144f215f0;
    plVar3 = plVar3 + -0x14;
  } while (lVar4 != 0);
  if (local_2d0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe24c0 FUN_141fe24c0 body=304 status=ok
// SIG undefined FUN_141fe24c0(void)

undefined8 * FUN_141fe24c0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined **local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  FUN_141fcf000(&local_78,param_3);
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  local_78 = &PTR_FUN_144f4a3e0;
  local_18 = uVar1;
  puVar2 = (undefined8 *)FMemory::Malloc(0x68);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar2;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar2 = param_2;
  }
  *(undefined1 *)(puVar2 + 1) = local_70;
  *(undefined1 *)(puVar2 + 2) = local_68;
  puVar2[3] = local_60;
  puVar2[4] = local_58;
  *(undefined4 *)(puVar2 + 5) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = local_50._4_4_;
  puVar2[6] = local_48;
  *(undefined4 *)(puVar2 + 7) = (undefined4)local_40;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = local_40._4_4_;
  puVar2[8] = local_38;
  *(undefined4 *)(puVar2 + 9) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = local_30._4_4_;
  puVar2[10] = local_28;
  *(undefined4 *)(puVar2 + 0xb) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0x5c) = local_20._4_4_;
  local_20 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  *puVar2 = &PTR_FUN_144f4a3e0;
  *(undefined4 *)(puVar2 + 0xc) = uVar1;
  FUN_141fd2510(&local_28);
  TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(&local_38);
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(&local_48);
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>::
  ~TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>(&local_58);
  return param_2;
}



// FUNCTION 141fe25f0 FUN_141fe25f0 body=523 status=ok
// SIG undefined FUN_141fe25f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141fe25f0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 auStack_128 [32];
  undefined **local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            (&local_108,*(undefined8 *)(param_1 + 0x58),param_1 + 0x60);
  local_108 = &PTR__scalar_deleting_destructor__144f4bb80;
  FMovieSceneByteChannel::FMovieSceneByteChannel(&local_c0,param_3 + 0xe0);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0xe0);
  *param_2 = puVar2;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_2 + 6) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar2 = param_2;
  }
  *puVar2 = &PTR_FUN_143fcdb48;
  *(undefined1 *)(puVar2 + 1) = local_100;
  *puVar2 = &PTR_FUN_143fcdb90;
  *(undefined1 *)(puVar2 + 2) = local_f8;
  puVar2[3] = local_f0;
  *puVar2 = &PTR__scalar_deleting_destructor__144f1bc38;
  puVar2[4] = local_e8;
  puVar2[5] = 0;
  puVar2[5] = local_e0;
  local_e0 = 0;
  *(undefined4 *)(puVar2 + 6) = (undefined4)local_d8;
  *(undefined4 *)((longlong)puVar2 + 0x34) = local_d8._4_4_;
  local_d8 = 0;
  puVar2[7] = local_d0;
  puVar2[8] = local_c8;
  *puVar2 = &PTR__scalar_deleting_destructor__144f4bb80;
  puVar2[9] = &PTR__scalar_deleting_destructor__144f217d8;
  puVar2[10] = 0;
  puVar2[10] = local_b8;
  local_b8 = 0;
  *(undefined4 *)(puVar2 + 0xb) = (undefined4)local_b0;
  *(undefined4 *)((longlong)puVar2 + 0x5c) = local_b0._4_4_;
  local_b0 = 0;
  *(undefined1 *)(puVar2 + 0xc) = local_a8;
  *(undefined1 *)((longlong)puVar2 + 0x61) = local_a7;
  puVar2[0xd] = 0;
  puVar2[0xd] = local_a0;
  local_a0 = 0;
  *(undefined4 *)(puVar2 + 0xe) = (undefined4)local_98;
  *(undefined4 *)((longlong)puVar2 + 0x74) = local_98._4_4_;
  local_98 = 0;
  puVar2[0xf] = local_90;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  *(undefined4 *)(puVar2 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)puVar2 + 0xc4) = 0;
  puVar2[0x1a] = 0;
  *(undefined4 *)(puVar2 + 0x1b) = 0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_88);
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_c0 = &PTR_FUN_144f215f0;
  if (local_e0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe2800 FUN_141fe2800 body=311 status=ok
// SIG undefined FUN_141fe2800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141fe2800(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 auStack_6e8 [32];
  undefined **local_6c8;
  undefined1 local_6c0;
  undefined1 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  longlong local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined1 local_680 [1624];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_6e8;
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            (&local_6c8,*(undefined8 *)(param_1 + 0x58),param_1 + 0x60);
  local_6c8 = &PTR__scalar_deleting_destructor__144f4bd10;
  FMovieScene3DTransformTemplateData::FMovieScene3DTransformTemplateData(local_680,param_3);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0x698,8);
  *param_2 = puVar2;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_2 + 6) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar2 = param_2;
  }
  *puVar2 = &PTR_FUN_143fcdb48;
  *(undefined1 *)(puVar2 + 1) = local_6c0;
  *puVar2 = &PTR_FUN_143fcdb90;
  *(undefined1 *)(puVar2 + 2) = local_6b8;
  puVar2[3] = local_6b0;
  *puVar2 = &PTR__scalar_deleting_destructor__144f1bc38;
  puVar2[4] = local_6a8;
  puVar2[5] = 0;
  puVar2[5] = local_6a0;
  local_6a0 = 0;
  *(undefined4 *)(puVar2 + 6) = (undefined4)local_698;
  *(undefined4 *)((longlong)puVar2 + 0x34) = local_698._4_4_;
  local_698 = 0;
  puVar2[7] = local_690;
  puVar2[8] = local_688;
  *puVar2 = &PTR__scalar_deleting_destructor__144f4bd10;
  FMovieScene3DTransformTemplateData::FMovieScene3DTransformTemplateData(puVar2 + 9,local_680);
  FMovieScene3DTransformTemplateData::~FMovieScene3DTransformTemplateData(local_680);
  if (local_6a0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe2940 FUN_141fe2940 body=643 status=ok
// SIG undefined FUN_141fe2940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141fe2940(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined **local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  void *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  void *local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  iVar1 = *(int *)(param_3 + 0x158);
  pvVar2 = *(void **)(param_3 + 0x150);
  pvVar7 = (void *)0x0;
  local_108 = &PTR__scalar_deleting_destructor__144f48d38;
  local_e8 = &PTR__scalar_deleting_destructor__144f489e8;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e0 = (void *)0x0;
  local_d8 = CONCAT44(local_d8._4_4_,iVar1);
  uVar6 = 0;
  if (iVar1 == 0) {
    local_d8 = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_e0,iVar1,0);
    _guard_xfg_dispatch_icall_nop(local_e0,pvVar2,(longlong)iVar1 << 2);
  }
  local_d0 = 0;
  local_118 = 0;
  TArray<FEventPayload,FDefaultAllocator>::CopyToEmpty<FEventPayload>
            (&local_d0,*(undefined8 *)(param_3 + 0x160),*(undefined4 *)(param_3 + 0x168),0);
  local_58._0_4_ = *(int *)(param_1 + 0x68);
  lVar5 = (longlong)(int)local_58;
  pvVar2 = *(void **)(param_1 + 0x60);
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0xffffffff;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  if ((int)local_58 != 0) {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(&local_60,(int)local_58,0);
    pvVar7 = local_60;
    _guard_xfg_dispatch_icall_nop(local_60,pvVar2,lVar5 * 0x18);
    uVar6 = local_58._4_4_;
  }
  iVar1 = (int)local_58;
  uVar4 = *(uint *)(param_1 + 0x58);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  uVar4 = (uVar4 ^ local_50) & 3 ^ local_50;
  local_50 = uVar4;
  puVar3 = (undefined8 *)FMemory::Malloc(0xc0,8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar3;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar3 = param_2;
  }
  local_60 = (void *)0x0;
  local_58 = 0;
  *(undefined1 *)(puVar3 + 1) = local_100;
  *(undefined1 *)(puVar3 + 2) = local_f8;
  puVar3[3] = local_f0;
  *puVar3 = &PTR__scalar_deleting_destructor__144f48d38;
  puVar3[4] = &PTR__scalar_deleting_destructor__144f489e8;
  puVar3[5] = local_e0;
  *(undefined4 *)(puVar3 + 6) = (undefined4)local_d8;
  *(undefined4 *)((longlong)puVar3 + 0x34) = local_d8._4_4_;
  puVar3[7] = local_d0;
  *(undefined4 *)(puVar3 + 8) = (undefined4)local_c8;
  *(undefined4 *)((longlong)puVar3 + 0x44) = local_c8._4_4_;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  *(undefined4 *)(puVar3 + 0x11) = 0xffffffff;
  *(undefined4 *)((longlong)puVar3 + 0x8c) = 0;
  puVar3[0x13] = 0;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  puVar3[0x15] = pvVar7;
  *(int *)(puVar3 + 0x16) = iVar1;
  *(undefined4 *)((longlong)puVar3 + 0xb4) = uVar6;
  *(uint *)(puVar3 + 0x17) = *(uint *)(puVar3 + 0x17) & 0xfffffffc;
  *(uint *)(puVar3 + 0x17) = *(uint *)(puVar3 + 0x17) | uVar4 & 3;
  local_e0 = (void *)0x0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(&local_c0);
  TArray<FMovieSceneBinding,FDefaultAllocator>::~TArray<FMovieSceneBinding,FDefaultAllocator>
            (&local_d0);
  if (local_e0 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe2bd0 CreateTemplateForSection body=332 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
UMovieSceneFadeTrack::CreateTemplateForSection
          (undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  longlong local_c8;
  longlong local_b8;
  undefined1 local_a0 [104];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  local_f0 = 0;
  local_e8 = 0;
  local_f8 = &PTR__scalar_deleting_destructor__144f49678;
  local_e0 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_d8,param_3 + 0xe0);
  uVar2 = *(uint *)(param_3 + 400);
  local_38 = *(undefined4 *)(param_3 + 0x180);
  uStack_34 = *(undefined4 *)(param_3 + 0x184);
  uStack_30 = *(undefined4 *)(param_3 + 0x188);
  uStack_2c = *(undefined4 *)(param_3 + 0x18c);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  local_28 = local_28 ^ (uVar2 ^ local_28) & 1;
  puVar3 = (undefined8 *)FMemory::Malloc(0xd8,8);
  *param_2 = puVar3;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_2 + 6) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar3 = param_2;
  }
  *(undefined1 *)(puVar3 + 1) = local_f0;
  *(undefined1 *)(puVar3 + 2) = local_e8;
  puVar3[3] = local_e0;
  *puVar3 = &PTR__scalar_deleting_destructor__144f49678;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(puVar3 + 4,local_d8);
  *(uint *)(puVar3 + 0x1a) = *(uint *)(puVar3 + 0x1a) & 0xfffffffe;
  *(uint *)(puVar3 + 0x1a) = *(uint *)(puVar3 + 0x1a) | local_28 & 1;
  *(undefined4 *)(puVar3 + 0x18) = local_38;
  *(undefined4 *)((longlong)puVar3 + 0xc4) = uStack_34;
  *(undefined4 *)(puVar3 + 0x19) = uStack_30;
  *(undefined4 *)((longlong)puVar3 + 0xcc) = uStack_2c;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_a0);
  if (local_b8 != 0) {
    FMemory::Free();
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe2d20 FUN_141fe2d20 body=361 status=ok
// SIG undefined FUN_141fe2d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141fe2d20(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  longlong local_a8;
  undefined1 local_90 [104];
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_e0 = 0;
  local_d8 = 0;
  local_e8 = &PTR_FUN_144f4d4d0;
  local_d0 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_c8,param_3 + 0xe0);
  local_28 = *(undefined1 *)(param_3 + 0x180);
  local_27 = *(undefined1 *)(param_3 + 0x181);
  local_26 = *(undefined1 *)(param_3 + 0x182);
  local_25 = *(undefined1 *)(param_3 + 0x183);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar1 = (undefined8 *)FMemory::Malloc(200,8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar1;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar1 = param_2;
  }
  *(undefined1 *)(puVar1 + 1) = local_e0;
  *(undefined1 *)(puVar1 + 2) = local_d8;
  puVar1[3] = local_d0;
  *puVar1 = &PTR_FUN_144f4d4d0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(puVar1 + 4,local_c8);
  *(undefined1 *)(puVar1 + 0x18) = local_28;
  *(undefined1 *)((longlong)puVar1 + 0xc1) = local_27;
  *(undefined1 *)((longlong)puVar1 + 0xc2) = local_26;
  *(undefined1 *)((longlong)puVar1 + 0xc3) = local_25;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_90);
  if (local_a8 != 0) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe2e90 CreateTemplateForSection body=391 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
UMovieSceneFloatTrack::CreateTemplateForSection
          (longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 auStack_138 [32];
  undefined **local_118;
  undefined1 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined **local_d0 [2];
  longlong local_c0;
  longlong local_b0;
  undefined1 local_98 [104];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            (&local_118,*(undefined8 *)(param_1 + 0x58),param_1 + 0x60);
  local_118 = &PTR__scalar_deleting_destructor__144f4bae0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_d0,param_3 + 0xe0);
  local_30 = *(undefined1 *)(param_3 + 0xc9);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0xf0,8);
  *param_2 = puVar2;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_2 + 6) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar2 = param_2;
  }
  *puVar2 = &PTR_FUN_143fcdb48;
  *(undefined1 *)(puVar2 + 1) = local_110;
  *puVar2 = &PTR_FUN_143fcdb90;
  *(undefined1 *)(puVar2 + 2) = local_108;
  puVar2[3] = local_100;
  *puVar2 = &PTR__scalar_deleting_destructor__144f1bc38;
  puVar2[4] = local_f8;
  puVar2[5] = 0;
  puVar2[5] = local_f0;
  local_f0 = 0;
  *(undefined4 *)(puVar2 + 6) = (undefined4)local_e8;
  *(undefined4 *)((longlong)puVar2 + 0x34) = local_e8._4_4_;
  local_e8 = 0;
  puVar2[7] = local_e0;
  puVar2[8] = local_d8;
  *puVar2 = &PTR__scalar_deleting_destructor__144f4bae0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(puVar2 + 9,local_d0);
  *(undefined1 *)(puVar2 + 0x1d) = local_30;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_98);
  if (local_b0 != 0) {
    FMemory::Free();
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  local_d0[0] = &PTR_FUN_144f215f0;
  if (local_f0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe3020 FUN_141fe3020 body=495 status=ok
// SIG undefined FUN_141fe3020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141fe3020(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_198 [32];
  undefined **local_178;
  undefined1 local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  longlong local_148;
  longlong local_138;
  undefined1 local_120 [104];
  undefined **local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_178 = &PTR_FUN_144f4de40;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_158,param_3 + 0xe0);
  FMovieSceneBoolChannel::FMovieSceneBoolChannel(&local_b8,param_3 + 0x180);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar1 = (undefined8 *)FMemory::Malloc(0x150,8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar1;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar1 = param_2;
  }
  *(undefined1 *)(puVar1 + 1) = local_170;
  *(undefined1 *)(puVar1 + 2) = local_168;
  puVar1[3] = local_160;
  *puVar1 = &PTR_FUN_144f4de40;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(puVar1 + 4,local_158);
  puVar1[0x18] = &PTR__scalar_deleting_destructor__144f21658;
  puVar1[0x19] = local_b0;
  *(undefined4 *)(puVar1 + 0x1a) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = local_a8._4_4_;
  *(undefined1 *)(puVar1 + 0x1b) = local_a0;
  *(undefined1 *)((longlong)puVar1 + 0xd9) = local_9f;
  puVar1[0x1c] = local_98;
  *(undefined4 *)(puVar1 + 0x1d) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar1 + 0xec) = local_90._4_4_;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  *(undefined4 *)(puVar1 + 0x26) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x134) = 0;
  puVar1[0x28] = 0;
  *(undefined4 *)(puVar1 + 0x29) = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_88);
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  local_b8 = &PTR_FUN_144f215f0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_120);
  if (local_138 != 0) {
    FMemory::Free();
  }
  if (local_148 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe3210 CreateTemplateForSection body=733 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
UMovieSceneIntegerTrack::CreateTemplateForSection
          (longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined1 auStack_148 [32];
  undefined **local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined **local_e0;
  void *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  void *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            (&local_128,*(undefined8 *)(param_1 + 0x58),param_1 + 0x60);
  iVar2 = *(int *)(param_3 + 0xf0);
  pvVar3 = *(void **)(param_3 + 0xe8);
  local_128 = &PTR__scalar_deleting_destructor__144f4bbd0;
  local_e0 = &PTR__scalar_deleting_destructor__144f27a60;
  local_d8 = (void *)0x0;
  local_d0 = CONCAT44(local_d0._4_4_,iVar2);
  if (iVar2 == 0) {
    local_d0 = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_d8,iVar2,0);
    ::_guard_xfg_dispatch_icall_nop(local_d8,pvVar3,(longlong)iVar2 << 2);
  }
  local_c8 = *(undefined4 *)(param_3 + 0xf8);
  iVar2 = *(int *)(param_3 + 0x108);
  pvVar3 = *(void **)(param_3 + 0x100);
  local_c4 = *(undefined1 *)(param_3 + 0xfc);
  local_c0 = (void *)0x0;
  local_b8 = CONCAT44(local_b8._4_4_,iVar2);
  if (iVar2 == 0) {
    local_b8 = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_c0,iVar2,0);
    ::_guard_xfg_dispatch_icall_nop(local_c0,pvVar3,(longlong)iVar2 << 2);
  }
  local_50 = *(undefined1 *)(param_3 + 0xc9);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0xffffffff;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  puVar4 = (undefined8 *)FMemory::Malloc(0xe0,8);
  *param_2 = puVar4;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_2 + 6) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar4 = param_2;
  }
  *puVar4 = &PTR_FUN_143fcdb48;
  *(undefined1 *)(puVar4 + 1) = local_120;
  *puVar4 = &PTR_FUN_143fcdb90;
  *(undefined1 *)(puVar4 + 2) = local_118;
  puVar4[3] = local_110;
  *puVar4 = &PTR__scalar_deleting_destructor__144f1bc38;
  puVar4[4] = local_108;
  puVar4[5] = 0;
  puVar4[5] = local_100;
  local_100 = 0;
  *(undefined4 *)(puVar4 + 6) = (undefined4)local_f8;
  *(undefined4 *)((longlong)puVar4 + 0x34) = local_f8._4_4_;
  local_f8 = 0;
  puVar4[7] = local_f0;
  puVar4[8] = local_e8;
  *puVar4 = &PTR__scalar_deleting_destructor__144f4bbd0;
  puVar4[9] = &PTR__scalar_deleting_destructor__144f27a60;
  puVar4[10] = 0;
  puVar4[10] = local_d8;
  local_d8 = (void *)0x0;
  *(undefined4 *)(puVar4 + 0xb) = (undefined4)local_d0;
  *(undefined4 *)((longlong)puVar4 + 0x5c) = local_d0._4_4_;
  local_d0 = 0;
  *(undefined4 *)(puVar4 + 0xc) = local_c8;
  *(undefined1 *)((longlong)puVar4 + 100) = local_c4;
  puVar4[0xd] = 0;
  puVar4[0xd] = local_c0;
  local_c0 = (void *)0x0;
  *(undefined4 *)(puVar4 + 0xe) = (undefined4)local_b8;
  *(undefined4 *)((longlong)puVar4 + 0x74) = local_b8._4_4_;
  local_b8 = 0;
  puVar4[0xf] = 0;
  puVar4[0x10] = 0;
  puVar4[0x11] = 0;
  puVar4[0x12] = 0;
  puVar4[0x15] = 0;
  puVar4[0x16] = 0;
  *(undefined4 *)(puVar4 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)puVar4 + 0xbc) = 0;
  puVar4[0x19] = 0;
  *(undefined4 *)(puVar4 + 0x1a) = 0;
  *(undefined1 *)(puVar4 + 0x1b) = local_50;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(&local_b0);
  if (local_c0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free();
  }
  local_e0 = &PTR_FUN_144f215f0;
  if (local_100 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe34f0 FUN_141fe34f0 body=307 status=ok
// SIG undefined FUN_141fe34f0(void)

undefined8 * FUN_141fe34f0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined **local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_141fcf000(&local_78,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  local_78 = &PTR_FUN_144f4a430;
  local_18 = uVar1;
  puVar2 = (undefined8 *)FMemory::Malloc(0x68);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar2;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar2 = param_2;
  }
  *(undefined1 *)(puVar2 + 1) = local_70;
  *(undefined1 *)(puVar2 + 2) = local_68;
  puVar2[3] = local_60;
  puVar2[4] = local_58;
  *(undefined4 *)(puVar2 + 5) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = local_50._4_4_;
  puVar2[6] = local_48;
  *(undefined4 *)(puVar2 + 7) = (undefined4)local_40;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = local_40._4_4_;
  puVar2[8] = local_38;
  *(undefined4 *)(puVar2 + 9) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = local_30._4_4_;
  puVar2[10] = local_28;
  *(undefined4 *)(puVar2 + 0xb) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0x5c) = local_20._4_4_;
  local_20 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  *puVar2 = &PTR_FUN_144f4a430;
  puVar2[0xc] = uVar1;
  FUN_141fd2510(&local_28);
  TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(&local_38);
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(&local_48);
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>::
  ~TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>(&local_58);
  return param_2;
}



// FUNCTION 141fe3630 FUN_141fe3630 body=291 status=ok
// SIG undefined FUN_141fe3630(void)

undefined8 * FUN_141fe3630(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined **local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_141fcf000(&local_68,param_3);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  local_68 = &PTR_FUN_144f4afd0;
  puVar2 = (undefined8 *)FMemory::Malloc(0x60);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar2;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar2 = param_2;
  }
  *(undefined1 *)(puVar2 + 1) = local_60;
  *(undefined1 *)(puVar2 + 2) = local_58;
  puVar2[3] = local_50;
  puVar2[4] = local_48;
  *(undefined4 *)(puVar2 + 5) = (undefined4)local_40;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = local_40._4_4_;
  puVar2[6] = local_38;
  *(undefined4 *)(puVar2 + 7) = (undefined4)local_30;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = local_30._4_4_;
  puVar2[8] = local_28;
  *(undefined4 *)(puVar2 + 9) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar2 + 0x4c) = local_20._4_4_;
  puVar2[10] = local_18;
  *(undefined4 *)(puVar2 + 0xb) = (undefined4)local_10;
  uVar1 = local_10._4_4_;
  local_10 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  *(undefined4 *)((longlong)puVar2 + 0x5c) = uVar1;
  *puVar2 = &PTR_FUN_144f4afd0;
  FUN_141fd2510(&local_18);
  TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FColorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(&local_28);
  TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>::
  ~TArray<FVectorParameterNameAndCurves,TSizedDefaultAllocator<32>_>(&local_38);
  TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>::
  ~TArray<FScalarParameterNameAndCurve,TSizedDefaultAllocator<32>_>(&local_48);
  return param_2;
}



// FUNCTION 141fe3760 CreateTemplateForSection body=237 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
UMovieSceneSlomoTrack::CreateTemplateForSection
          (undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  longlong local_a8;
  longlong local_98;
  undefined1 local_80 [104];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d0 = 0;
  local_c8 = 0;
  local_d8 = &PTR__scalar_deleting_destructor__144f4cd18;
  local_c0 = 0;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(local_b8,param_3 + 0xe0);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar1 = (undefined8 *)FMemory::Malloc(0xc0,8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar1;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar1 = param_2;
  }
  *(undefined1 *)(puVar1 + 1) = local_d0;
  *(undefined1 *)(puVar1 + 2) = local_c8;
  puVar1[3] = local_c0;
  *puVar1 = &PTR__scalar_deleting_destructor__144f4cd18;
  FMovieSceneFloatChannel::FMovieSceneFloatChannel(puVar1 + 4,local_b8);
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_80);
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_a8 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe3850 CreateTemplateForSection body=349 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
UMovieSceneSpawnTrack::CreateTemplateForSection
          (undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  longlong local_98;
  undefined8 local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = &PTR__scalar_deleting_destructor__144f4d0b8;
  FMovieSceneBoolChannel::FMovieSceneBoolChannel(local_b8,param_3 + 0xe8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar1 = (undefined8 *)FMemory::Malloc(0xb0,8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar1;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar1 = param_2;
  }
  *(undefined1 *)(puVar1 + 1) = local_d0;
  *(undefined1 *)(puVar1 + 2) = local_c8;
  puVar1[3] = local_c0;
  *puVar1 = &PTR__scalar_deleting_destructor__144f4d0b8;
  puVar1[4] = &PTR__scalar_deleting_destructor__144f21658;
  puVar1[5] = local_b0;
  *(undefined4 *)(puVar1 + 6) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar1 + 0x34) = local_a8._4_4_;
  *(undefined1 *)(puVar1 + 7) = local_a0;
  *(undefined1 *)((longlong)puVar1 + 0x39) = local_9f;
  puVar1[8] = local_98;
  *(undefined4 *)(puVar1 + 9) = (undefined4)local_90;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = local_90._4_4_;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0xffffffff;
  *(undefined4 *)((longlong)puVar1 + 0x94) = 0;
  puVar1[0x14] = 0;
  *(undefined4 *)(puVar1 + 0x15) = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_88);
  if (local_98 != 0) {
    FMemory::Free();
  }
  if (local_b0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe39b0 CreateTemplateForSection body=113 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
UMovieSceneStringTrack::CreateTemplateForSection
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_128 [32];
  undefined1 local_108 [40];
  longlong local_e0;
  undefined1 local_c0 [168];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar1 = FMovieSceneStringPropertySectionTemplate::FMovieSceneStringPropertySectionTemplate
                    (local_108,param_3,param_1);
  TInlineValue<FMovieSceneEvalTemplate,48,8>::
  TInlineValue<FMovieSceneEvalTemplate,48,8><FMovieSceneStringPropertySectionTemplate,void>
            (param_2,uVar1);
  FMovieSceneStringChannel::~FMovieSceneStringChannel(local_c0);
  if (local_e0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe3a30 FUN_141fe3a30 body=311 status=ok
// SIG undefined FUN_141fe3a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_141fe3a30(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined1 auStack_6e8 [32];
  undefined **local_6c8;
  undefined1 local_6c0;
  undefined1 local_6b8;
  undefined8 local_6b0;
  undefined8 local_6a8;
  longlong local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined1 local_680 [1624];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_6e8;
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate
            (&local_6c8,*(undefined8 *)(param_1 + 0x58),param_1 + 0x60);
  local_6c8 = &PTR__scalar_deleting_destructor__144f4bcc0;
  FMovieScene3DTransformTemplateData::FMovieScene3DTransformTemplateData(local_680,param_3);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  puVar2 = (undefined8 *)FMemory::Malloc(0x698,8);
  *param_2 = puVar2;
  bVar1 = *(byte *)(param_2 + 6);
  *(byte *)(param_2 + 6) = bVar1 | 1;
  if ((bVar1 & 2) != 0) {
    puVar2 = param_2;
  }
  *puVar2 = &PTR_FUN_143fcdb48;
  *(undefined1 *)(puVar2 + 1) = local_6c0;
  *puVar2 = &PTR_FUN_143fcdb90;
  *(undefined1 *)(puVar2 + 2) = local_6b8;
  puVar2[3] = local_6b0;
  *puVar2 = &PTR__scalar_deleting_destructor__144f1bc38;
  puVar2[4] = local_6a8;
  puVar2[5] = 0;
  puVar2[5] = local_6a0;
  local_6a0 = 0;
  *(undefined4 *)(puVar2 + 6) = (undefined4)local_698;
  *(undefined4 *)((longlong)puVar2 + 0x34) = local_698._4_4_;
  local_698 = 0;
  puVar2[7] = local_690;
  puVar2[8] = local_688;
  *puVar2 = &PTR__scalar_deleting_destructor__144f4bcc0;
  FMovieScene3DTransformTemplateData::FMovieScene3DTransformTemplateData(puVar2 + 9,local_680);
  FMovieScene3DTransformTemplateData::~FMovieScene3DTransformTemplateData(local_680);
  if (local_6a0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe3b70 CreateTemplateForSection body=204 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong UMovieSceneVectorTrack::CreateTemplateForSection
                   (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_318 [32];
  undefined1 local_2f8 [40];
  longlong local_2d0;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  uVar1 = FMovieSceneVectorPropertySectionTemplate::FMovieSceneVectorPropertySectionTemplate
                    (local_2f8,param_3,param_1);
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xfe;
  TInlineValue<FMovieSceneEvalTemplate,48,8>::
  InitializeFrom<FMovieSceneVectorPropertySectionTemplate,FMovieSceneVectorPropertySectionTemplate>
            (param_2,uVar1);
  lVar3 = 4;
  plVar2 = (longlong *)&stack0xfffffffffffffff0;
  do {
    lVar3 = lVar3 + -1;
    FKeyHandleLookupTable::~FKeyHandleLookupTable(plVar2 + -0x11);
    if (plVar2[-0x14] != 0) {
      FMemory::Free();
    }
    if (plVar2[-0x16] != 0) {
      FMemory::Free();
    }
    plVar2[-0x18] = (longlong)&PTR_FUN_144f215f0;
    plVar2 = plVar2 + -0x14;
  } while (lVar3 != 0);
  if (local_2d0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe3c40 CreateTemplateForSection body=219 status=ok
// SIG undefined CreateTemplateForSection(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
UMovieSceneVisibilityTrack::CreateTemplateForSection
          (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_128 [32];
  undefined **local_108 [5];
  longlong local_e0;
  undefined **local_c0;
  longlong local_b8;
  longlong local_a0;
  undefined1 local_90 [104];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FMovieSceneBoolPropertySectionTemplate::FMovieSceneBoolPropertySectionTemplate
            (local_108,param_3,param_1);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) & 0xfc;
  local_108[0] = &PTR__scalar_deleting_destructor__144f4d160;
  puVar1 = (undefined8 *)FMemory::Malloc(0xd8,8);
  *(byte *)(param_2 + 6) = *(byte *)(param_2 + 6) | 1;
  *param_2 = puVar1;
  if ((*(byte *)(param_2 + 6) & 2) != 0) {
    puVar1 = param_2;
  }
  FMovieSceneBoolPropertySectionTemplate::FMovieSceneBoolPropertySectionTemplate(puVar1,local_108);
  *puVar1 = &PTR__scalar_deleting_destructor__144f4d160;
  FKeyHandleLookupTable::~FKeyHandleLookupTable(local_90);
  if (local_a0 != 0) {
    FMemory::Free();
  }
  if (local_b8 != 0) {
    FMemory::Free();
  }
  local_c0 = &PTR_FUN_144f215f0;
  if (local_e0 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 141fe3d20 FUN_141fe3d20 body=337 status=ok
// SIG undefined FUN_141fe3d20(void)

undefined8 FUN_141fe3d20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 local_res8 [4];
  
  if (*(char *)(param_1 + 0x11) != '\0') {
    return 1;
  }
  lVar3 = FTrackInstancePropertyBindings::GetProperty(param_3);
  if (lVar3 != 0) {
    lVar4 = UStructProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(longlong *)(lVar3 + 0x70) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x70) + 0x18);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38) < DAT_146acba60) {
        _Init_thread_header(&DAT_146acba60);
        if (DAT_146acba60 == -1) {
          FName::FName(&DAT_146acba58,"SlateColor",1);
          _Init_thread_footer(&DAT_146acba60);
        }
      }
      puVar1 = (undefined2 *)(param_1 + 0x10);
      if (lVar3 == 0x3e) {
        if (local_res8 != puVar1) {
          *puVar1 = 0x102;
          return 1;
        }
      }
      else if (lVar3 == DAT_146acba58) {
        if (local_res8 != puVar1) {
          *puVar1 = 0x100;
          return 1;
        }
      }
      else if (local_res8 != puVar1) {
        *puVar1 = 0x101;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 141fe3e80 DefineActuator body=117 status=ok
// SIG undefined DefineActuator(void)

void FMovieSceneBlendingAccumulator::DefineActuator
               (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_18;
  longlong local_10;
  
  local_18 = &local_res10;
  local_res10 = param_2;
  local_10 = param_3;
  FUN_141f32e50(param_1,local_res8,&local_18,0);
  plVar4 = *(longlong **)(param_3 + 8);
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
  return;
}



// FUNCTION 141fe3f00 DeleteKeys body=310 status=ok
// SIG undefined DeleteKeys(void)

void TMovieSceneChannelData<FEventPayload>::DeleteKeys(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  
  if (0 < (int)*(uint *)(param_2 + 1)) {
    uVar7 = (ulonglong)*(uint *)(param_2 + 1);
    puVar8 = (undefined4 *)*param_2;
    do {
      iVar3 = FUN_141f521b0(param_1,*puVar8);
      lVar6 = (longlong)iVar3;
      if (iVar3 != -1) {
        plVar1 = (longlong *)*param_1;
        iVar5 = (int)plVar1[1];
        iVar4 = (iVar5 - iVar3) + -1;
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar6 * 4),(void *)(*plVar1 + (longlong)(iVar3 + 1) * 4),
                     (longlong)iVar4 << 2);
          iVar5 = (int)plVar1[1];
        }
        *(int *)(plVar1 + 1) = iVar5 + -1;
        plVar1 = (longlong *)param_1[2];
        lVar2 = *plVar1;
        if (*(longlong *)(lVar2 + 0x20 + lVar6 * 0x30) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar2 + 0x10 + lVar6 * 0x30) != 0) {
          FMemory::Free();
        }
        iVar5 = (int)plVar1[1];
        iVar4 = (iVar5 - iVar3) + -1;
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar1 + lVar6 * 0x30),
                     (void *)((longlong)(iVar3 + 1) * 0x30 + *plVar1),(longlong)iVar4 * 0x30);
          iVar5 = (int)plVar1[1];
        }
        *(int *)(plVar1 + 1) = iVar5 + -1;
        if (param_1[1] != 0) {
          FKeyHandleLookupTable::DeallocateHandle(param_1[1],iVar3);
        }
      }
      puVar8 = puVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 141fe4040 DeleteKeys body=301 status=ok
// SIG undefined DeleteKeys(void)

void FMovieSceneActorReferenceData::DeleteKeys
               (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong *local_28;
  longlong local_20;
  longlong *local_18;
  
  puVar7 = (undefined4 *)*param_2;
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (&local_28,param_1 + 8,param_1 + 0x40,param_4,puVar7,param_2[1]);
  local_18 = (longlong *)(param_1 + 0x30);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 1);
    do {
      iVar3 = FUN_141f521b0(&local_28,*puVar7);
      plVar1 = local_28;
      if (iVar3 != -1) {
        iVar5 = (int)local_28[1];
        iVar4 = (iVar5 - iVar3) + -1;
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*local_28 + (longlong)iVar3 * 4),
                     (void *)(*local_28 + (longlong)(iVar3 + 1) * 4),(longlong)iVar4 << 2);
          iVar5 = (int)plVar1[1];
        }
        plVar2 = local_18;
        *(int *)(plVar1 + 1) = iVar5 + -1;
        iVar5 = (int)local_18[1];
        iVar4 = (iVar5 - iVar3) + -1;
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*local_18 + (longlong)iVar3 * 0x18),
                     (void *)(*local_18 + (longlong)(iVar3 + 1) * 0x18),(longlong)iVar4 * 0x18);
          iVar5 = (int)plVar2[1];
        }
        *(int *)(plVar2 + 1) = iVar5 + -1;
        if (local_20 != 0) {
          FKeyHandleLookupTable::DeallocateHandle(local_20,iVar3);
        }
      }
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141fe4170 DeleteKeys body=65 status=ok
// SIG undefined DeleteKeys(void)

void FMovieSceneEventSectionData::DeleteKeys(longlong param_1,undefined4 *param_2)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  longlong local_18;
  
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x28);
  local_18 = param_1 + 0x18;
  TMovieSceneChannelData<FEventPayload>::DeleteKeys(local_28,&local_38);
  return;
}



// FUNCTION 141fe41c0 DeleteKeys body=313 status=ok
// SIG undefined DeleteKeys(void)

void FMovieSceneStringChannel::DeleteKeys
               (longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *local_28;
  longlong local_20;
  longlong *local_18;
  
  puVar7 = (undefined4 *)*param_2;
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (&local_28,param_1 + 8,param_1 + 0x40,param_4,puVar7,param_2[1]);
  local_18 = (longlong *)(param_1 + 0x18);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 1);
    do {
      iVar3 = FUN_141f521b0(&local_28,*puVar7);
      plVar1 = local_28;
      if (iVar3 != -1) {
        iVar5 = (int)local_28[1];
        iVar4 = (iVar5 - iVar3) + -1;
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*local_28 + (longlong)iVar3 * 4),
                     (void *)(*local_28 + (longlong)(iVar3 + 1) * 4),(longlong)iVar4 << 2);
          iVar5 = (int)plVar1[1];
        }
        plVar2 = local_18;
        *(int *)(plVar1 + 1) = iVar5 + -1;
        lVar8 = (longlong)iVar3 * 0x10;
        if (*(longlong *)(lVar8 + *local_18) != 0) {
          FMemory::Free();
        }
        iVar5 = (int)plVar2[1];
        iVar4 = (iVar5 - iVar3) + -1;
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar2 + lVar8),(void *)((longlong)(iVar3 + 1) * 0x10 + *plVar2),
                     (longlong)iVar4 << 4);
          iVar5 = (int)plVar2[1];
        }
        *(int *)(plVar2 + 1) = iVar5 + -1;
        if (local_20 != 0) {
          FKeyHandleLookupTable::DeallocateHandle(local_20,iVar3);
        }
      }
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 141fe4300 FUN_141fe4300 body=131 status=ok
// SIG undefined FUN_141fe4300(void)

void FUN_141fe4300(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
    if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x10) != 0)) {
      plVar2 = (longlong *)FWeakObjectPtr::Get(param_1 + 8);
      (**(code **)(*plVar2 + 0x2b0))(plVar2,*(undefined8 *)(param_1 + 0x10),1);
      FWeakObjectPtr::operator=(&local_res8,0);
      *(undefined4 *)(param_1 + 8) = local_res8;
      *(undefined4 *)(param_1 + 0xc) = local_resc;
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FMemory::Free();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  return;
}



// FUNCTION 141fe4390 FUN_141fe4390 body=95 status=ok
// SIG undefined FUN_141fe4390(void)

void FUN_141fe4390(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_1408f9af0(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_144f1b030;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141fe43e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 141fe4400 FUN_141fe4400 body=86 status=ok
// SIG undefined FUN_141fe4400(void)

void FUN_141fe4400(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_144f1b030;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141fe444c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 141fe4460 DuplicateKeys body=519 status=ok
// SIG undefined DuplicateKeys(void)

void TMovieSceneChannelData<FEventPayload>::DuplicateKeys
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  void *pvVar7;
  size_t sVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  longlong local_58 [2];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  
  if (0 < (int)*(uint *)(param_2 + 1)) {
    puVar9 = (undefined4 *)*param_3;
    uVar11 = (ulonglong)*(uint *)(param_2 + 1);
    puVar12 = (undefined4 *)*param_2;
    do {
      iVar4 = FUN_141f521b0(param_1,*puVar12);
      if (iVar4 == -1) {
        puVar6 = (undefined4 *)
                 FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(local_res10);
        *puVar9 = *puVar6;
      }
      else {
        puVar10 = (undefined8 *)((longlong)iVar4 * 0x30 + *(longlong *)param_1[2]);
        uVar1 = *puVar10;
        uVar2 = puVar10[1];
        FString::FString(local_58,puVar10 + 2);
        local_40 = *(int *)(puVar10 + 5);
        sVar8 = (size_t)local_40;
        pvVar7 = (void *)puVar10[4];
        local_48 = (void *)0x0;
        if (local_40 == 0) {
          local_3c = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
          ::_guard_xfg_dispatch_icall_nop(local_48,pvVar7,sVar8);
        }
        iVar5 = FMovieSceneChannelData::AddKeyInternal
                          (param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar4 * 4));
        plVar3 = (longlong *)param_1[2];
        iVar4 = (int)plVar3[1];
        *(int *)(plVar3 + 1) = iVar4 + 1;
        if (*(int *)((longlong)plVar3 + 0xc) < iVar4 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar3,iVar4);
        }
        pvVar7 = (void *)(*plVar3 + (longlong)iVar5 * 0x30);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)pvVar7 + 0x30),pvVar7,(longlong)(iVar4 - iVar5) * 0x30);
        puVar10 = (undefined8 *)((longlong)iVar5 * 0x30 + *plVar3);
        *puVar10 = uVar1;
        puVar10[1] = uVar2;
        FString::FString(puVar10 + 2,local_58);
        pvVar7 = local_48;
        sVar8 = (size_t)local_40;
        puVar10[4] = 0;
        *(int *)(puVar10 + 5) = local_40;
        if (local_40 == 0) {
          *(undefined4 *)((longlong)puVar10 + 0x2c) = 0;
        }
        else {
          TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar10 + 4,local_40,0);
          ::_guard_xfg_dispatch_icall_nop((void *)puVar10[4],pvVar7,sVar8);
        }
        puVar6 = (undefined4 *)FMovieSceneChannelData::GetHandle(param_1,local_res20);
        *puVar9 = *puVar6;
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
      }
      puVar12 = puVar12 + 1;
      puVar9 = puVar9 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  return;
}



// FUNCTION 141fe4670 DuplicateKeys body=452 status=ok
// SIG undefined DuplicateKeys(void)

void TMovieSceneChannelData<FString>::DuplicateKeys
               (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *_Src;
  longlong lVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined1 local_res20 [8];
  undefined1 local_58 [8];
  ulonglong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  
  local_50 = (ulonglong)*(uint *)(param_2 + 1);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    puVar9 = (undefined4 *)*param_3;
    puVar10 = (undefined4 *)*param_2;
    do {
      _Src = (void *)0x0;
      iVar3 = FUN_141f521b0(param_1,*puVar10);
      if (iVar3 == -1) {
        puVar5 = (undefined4 *)
                 FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(local_res20);
        *puVar9 = *puVar5;
      }
      else {
        local_48 = (void *)0x0;
        puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)param_1[2]);
        local_40 = *(int *)(puVar6 + 1);
        lVar8 = (longlong)local_40;
        pvVar7 = (void *)*puVar6;
        if (local_40 == 0) {
          local_3c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
          _Src = local_48;
          ::_guard_xfg_dispatch_icall_nop(local_48,pvVar7,lVar8 * 2);
        }
        iVar2 = local_40;
        iVar4 = FMovieSceneChannelData::AddKeyInternal
                          (param_1,*(undefined4 *)(*(longlong *)*param_1 + (longlong)iVar3 * 4));
        plVar1 = (longlong *)param_1[2];
        iVar3 = (int)plVar1[1];
        *(int *)(plVar1 + 1) = iVar3 + 1;
        if (*(int *)((longlong)plVar1 + 0xc) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
        }
        pvVar7 = (void *)(*plVar1 + (longlong)iVar4 * 0x10);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)pvVar7 + 0x10),pvVar7,(longlong)(iVar3 - iVar4) << 4);
        puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *plVar1);
        *puVar6 = 0;
        *(int *)(puVar6 + 1) = iVar2;
        if (iVar2 == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,iVar2,0);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar6,_Src,(longlong)iVar2 * 2);
        }
        puVar5 = (undefined4 *)FMovieSceneChannelData::GetHandle(param_1,local_58);
        *puVar9 = *puVar5;
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
      }
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 1;
      local_50 = local_50 - 1;
    } while (local_50 != 0);
  }
  return;
}



// FUNCTION 141fe4840 DuplicateKeys body=410 status=ok
// SIG undefined DuplicateKeys(void)

void FMovieSceneActorReferenceData::DuplicateKeys
               (longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  void *_Src;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *local_58 [2];
  longlong *local_48;
  
  puVar7 = (undefined4 *)*param_3;
  puVar9 = (undefined4 *)*param_2;
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_58,param_1 + 8,param_1 + 0x40,param_4,puVar7,param_3[1],puVar9,param_2[1]);
  local_48 = (longlong *)(param_1 + 0x30);
  if (0 < (int)param_2[1]) {
    uVar8 = param_2[1] & 0xffffffff;
    do {
      iVar4 = FUN_141f521b0(local_58,*puVar9);
      if (iVar4 == -1) {
        puVar6 = (undefined4 *)
                 FDatasmithMeshSectionInfoTemplate::FDatasmithMeshSectionInfoTemplate(local_res8);
      }
      else {
        lVar10 = (longlong)iVar4;
        puVar1 = (undefined8 *)(*local_48 + lVar10 * 0x18);
        uVar11 = *puVar1;
        uVar12 = puVar1[1];
        local_res18 = *(undefined8 *)(*local_48 + 0x10 + lVar10 * 0x18);
        iVar5 = FMovieSceneChannelData::AddKeyInternal
                          (local_58,*(undefined4 *)(*local_58[0] + lVar10 * 4));
        plVar3 = local_48;
        iVar4 = (int)local_48[1];
        *(int *)(local_48 + 1) = iVar4 + 1;
        if (*(int *)((longlong)local_48 + 0xc) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(local_48,iVar4);
        }
        lVar10 = (longlong)iVar5 * 0x18;
        _Src = (void *)(*plVar3 + lVar10);
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)_Src + 0x18),_Src,(longlong)(iVar4 - iVar5) * 0x18);
        lVar2 = *plVar3;
        puVar1 = (undefined8 *)(lVar10 + lVar2);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        *(undefined8 *)(lVar10 + 0x10 + lVar2) = local_res18;
        puVar6 = (undefined4 *)FMovieSceneChannelData::GetHandle(local_58,local_res10,iVar5);
      }
      puVar9 = puVar9 + 1;
      *puVar7 = *puVar6;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return;
}



// FUNCTION 141fe49e0 DuplicateKeys body=79 status=ok
// SIG undefined DuplicateKeys(void)

void FMovieSceneEventSectionData::DuplicateKeys
               (longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  longlong local_18;
  
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x28);
  local_18 = param_1 + 0x18;
  TMovieSceneChannelData<FEventPayload>::DuplicateKeys(local_28,&local_38,&local_48);
  return;
}



// FUNCTION 141fe4a30 DuplicateKeys body=79 status=ok
// SIG undefined DuplicateKeys(void)

void FMovieSceneStringChannel::DuplicateKeys
               (longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28 [16];
  longlong local_18;
  
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  std::initializer_list<FFormatArgumentValue>::initializer_list<FFormatArgumentValue>
            (local_28,param_1 + 8,param_1 + 0x40);
  local_18 = param_1 + 0x18;
  TMovieSceneChannelData<FString>::DuplicateKeys(local_28,&local_38,&local_48);
  return;
}



// FUNCTION 141fe4a80 Empty body=448 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FName,FLevelStreamingSharedTrackData::FVisibilityData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  local_68 = 0;
  uStack_64 = 1;
  iStack_54 = 0;
  iStack_50 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_50 = 0;
    local_68 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_68;
      iStack_50 = iStack_50 + 0x20;
      iVar6 = local_68 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
      local_68 = iVar6;
      if (bVar3) goto LAB_141fe4b51;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_64 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_54 = (iStack_50 - iVar6) + 0x1f;
    if (iVar2 < iStack_54) {
LAB_141fe4b51:
      iStack_54 = iVar2;
    }
  }
  local_40 = local_68;
  uStack_3c = uStack_64;
  local_30 = 0xffffffff;
  iStack_2c = iStack_54;
  iStack_28 = iStack_50;
  puStack_38 = puVar1;
  if (iStack_54 < iVar2) {
    do {
      lVar5 = (longlong)iStack_2c * 0x50 + *param_1;
      if (*(longlong *)(lVar5 + 0x38) != 0) {
        FMemory::Free();
      }
      if (*(char *)(lVar5 + 9) != '\0') {
        *(undefined1 *)(lVar5 + 9) = 0;
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
  }
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 141fe4c40 FUN_141fe4c40 body=918 status=ok
// SIG undefined FUN_141fe4c40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_141fe4c40(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  char param_5,longlong param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  float local_cc;
  float local_c8 [4];
  undefined8 local_b8;
  undefined4 local_b0;
  code *local_a8 [2];
  undefined1 local_98 [32];
  undefined8 local_78;
  undefined4 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_d8 = &PTR_FUN_144f47a20;
  lVar10 = DAT_146acb9f0;
  if (DAT_146acb9f0 == 0) {
    lVar10 = FMovieSceneAnimTypeID::Initialize(&DAT_146acb9f0,0);
  }
  local_b0 = *(undefined4 *)(param_6 + 0x2d8);
  local_b8 = *(undefined8 *)(param_6 + 0x2d0);
  local_e0 = &local_b8;
  local_e8 = *(undefined1 *)(param_6 + 0x2dc);
  FMovieScenePreAnimatedState::SavePreAnimatedState(param_6 + 0xf8,lVar10,&local_d8,param_2);
  cVar9 = (**(code **)(*param_2 + 0x568))(param_2);
  if ((cVar9 == '\0') || (param_2[0x5a] != *param_1)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  local_cc = 1.0;
  lVar10 = 4;
  if (*(uint *)(param_4 + 0x24) == 0x80000000) {
    lVar13 = 0x10;
    if (*(int *)(param_4 + 0x20) != 0) {
      lVar13 = lVar10;
    }
    ppuVar11 = *(undefined ***)(lVar13 + param_4);
  }
  else {
    local_d8 = (undefined **)(ulonglong)*(uint *)(param_4 + 0x24);
    ppuVar11 = local_d8;
  }
  FMovieSceneFloatChannel::Evaluate(param_1 + 0x17,ppuVar11,&local_cc);
  if (local_cc != *(float *)(param_2 + 0x62)) {
    FUN_142351eb0(param_2);
  }
  local_c8[0] = 1.0;
  if (*(uint *)(param_4 + 0x24) == 0x80000000) {
    lVar13 = 0x10;
    if (*(int *)(param_4 + 0x20) != 0) {
      lVar13 = lVar10;
    }
    ppuVar11 = *(undefined ***)(lVar13 + param_4);
  }
  else {
    local_d8 = (undefined **)(ulonglong)*(uint *)(param_4 + 0x24);
    ppuVar11 = local_d8;
  }
  FMovieSceneFloatChannel::Evaluate(param_1 + 3,ppuVar11,local_c8);
  if (local_c8[0] != *(float *)((longlong)param_2 + 0x324)) {
    FUN_142351310(param_2);
  }
  if (bVar8) {
    *(byte *)(param_2 + 0x5e) = *(byte *)(param_2 + 0x5e) & 0xf7;
    *(byte *)(param_2 + 0x5e) = *(byte *)(param_2 + 0x5e) | param_5 << 3;
    if (*(char *)((longlong)param_1 + 0x15c) != '\0') {
      param_2[0x66] = param_1[0x2c];
    }
    (**(code **)(*param_2 + 0x560))(param_2);
    FUN_142351620(param_2,*param_1);
    *(byte *)(param_2 + 0x5e) = *(byte *)(param_2 + 0x5e) & 0xbf;
    uVar1 = *(ulonglong *)(param_4 + 0x18);
    if (*(uint *)(param_4 + 0x24) == 0x80000000) {
      lVar13 = 0x10;
      if (*(int *)(param_4 + 0x20) != 0) {
        lVar13 = lVar10;
      }
      ppuVar11 = *(undefined ***)(lVar13 + param_4);
    }
    else {
      local_d8 = (undefined **)(ulonglong)*(uint *)(param_4 + 0x24);
      ppuVar11 = local_d8;
    }
    iVar14 = (int)(uVar1 >> 0x20);
    lVar10 = (longlong)iVar14 * (longlong)(int)ppuVar11;
    local_d8._4_4_ = (float)((ulonglong)ppuVar11 >> 0x20);
    fVar15 = (float)iVar14 * local_d8._4_4_;
    fVar16 = *(float *)(param_1 + 1);
    if (fVar16 <= 0.0) {
      fVar16 = 0.0;
    }
    local_d8 = ppuVar11;
    (**(code **)(*param_2 + 0x558))
              (param_2,lVar10,uVar1 >> 0x20,
               (((double)lVar10 + (double)fVar15) / (double)(int)uVar1 - (double)param_1[2]) +
               (double)fVar16);
    if (*(int *)(param_4 + 0x34) == 3) {
      (**(code **)(*param_2 + 0x550))(param_2);
    }
  }
  if (param_5 != '\0') {
    lVar10 = FUN_14233c7a0(param_2);
    if (lVar10 != 0) {
      if (*(longlong *)(param_2[0x23] + 0x168) == 0) {
        puVar12 = (undefined8 *)&DAT_1468b5b70;
      }
      else {
        puVar12 = (undefined8 *)(*(longlong *)(param_2[0x23] + 0x168) + 0x210);
      }
      uVar2 = *puVar12;
      uVar3 = puVar12[1];
      uVar4 = puVar12[2];
      uVar5 = puVar12[3];
      uVar6 = puVar12[4];
      uVar7 = puVar12[5];
      lVar13 = param_2[0xd6];
      local_78 = 0;
      local_68 = 0;
      puVar12 = (undefined8 *)FUN_140438ef0(0x50,local_98);
      if (puVar12 != (undefined8 *)0x0) {
        *puVar12 = &PTR_CopyToEmptyStorage_144f51a70;
        puVar12[2] = lVar10;
        puVar12[3] = lVar13;
        puVar12[4] = uVar2;
        puVar12[5] = uVar3;
        puVar12[6] = uVar4;
        puVar12[7] = uVar5;
        puVar12[8] = uVar6;
        puVar12[9] = uVar7;
      }
      local_a8[0] = UE4Function_Private::
                    TFunctionRefCaller<<lambda_d25c2ee684e07e8e879e7e2719710405>,void___cdecl(void)>
                    ::Call;
      FUN_1422f8a30(local_a8,local_d0);
    }
  }
  return;
}



// FUNCTION 141fe4fe0 EnsureSetup body=485 status=ok
// SIG undefined EnsureSetup(void)

bool FMovieSceneCameraAnimSectionTemplate::EnsureSetup
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  uint in_stack_ffffffffffffffa8;
  undefined **local_38 [2];
  undefined8 local_28;
  undefined4 local_20;
  
  lVar3 = FPersistentEvaluationData::GetOrAddSectionData<FMovieSceneCameraAnimSectionInstanceData>
                    (param_3);
  lVar4 = FWeakObjectPtr::Get(lVar3 + 8);
  if (lVar4 == 0) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      return false;
    }
    uVar5 = GetTransientPackage();
    FUN_1417846f0(uVar5,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar7 = 0;
    local_38[0] = (undefined **)0x0;
    uVar6 = UCameraAnimInst::GetPrivateStaticClass();
    lVar4 = FUN_1417985e0(uVar6,uVar5,0,0,0,0,in_stack_ffffffffffffffa8 & 0xffffff00,0,0);
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar8 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar8;
        lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar8) * 0x18;
      }
      *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x40000000;
      *(uint *)(lVar4 + 0x3c) = *(uint *)(lVar4 + 0x3c) & 0xfffffffd;
      lVar7 = DAT_146acba30;
      if (DAT_146acba30 == 0) {
        lVar7 = FMovieSceneAnimTypeID::Initialize(&DAT_146acba30,0);
      }
      local_28 = *(undefined8 *)(param_3 + 0x24);
      local_38[0] = &PTR_FUN_144f48218;
      puVar9 = &local_28;
      local_20 = *(undefined4 *)(param_3 + 0x2c);
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (param_4 + 0xf8,lVar7,local_38,lVar4,2,puVar9);
      uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
      uVar5 = FUN_141ff1ab0(param_2,param_3);
      uVar5 = FUN_141ff5ee0(uVar5,param_4);
      FUN_1422f5010(lVar4,*(undefined8 *)(param_1 + 0x20),uVar5,*(undefined4 *)(param_1 + 0x28),
                    *(undefined4 *)(param_1 + 0x2c),CONCAT44(uVar10,*(undefined4 *)(param_1 + 0x30))
                    ,*(undefined4 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x38),
                    *(undefined1 *)(param_1 + 0x39),0);
    }
    FWeakObjectPtr::operator=(lVar3 + 8,lVar4);
  }
  return lVar4 != 0;
}



// FUNCTION 141fe51d0 FUN_141fe51d0 body=590 status=ok
// SIG undefined FUN_141fe51d0(void)

bool FUN_141fe51d0(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 in_stack_ffffffffffffff88;
  longlong local_48;
  undefined4 local_40;
  undefined **local_38;
  undefined4 local_30;
  
  uVar3 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  lVar4 = FPersistentEvaluationData::GetOrAddSectionData<FMovieSceneCameraAnimSectionInstanceData>
                    (param_3);
  plVar5 = (longlong *)FWeakObjectPtr::Get(lVar4 + 8);
  if (plVar5 != (longlong *)0x0) {
LAB_141fe540b:
    return plVar5 != (longlong *)0x0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar6 = UNodeMappingContainer::GetPrivateStaticClass();
    lVar9 = *(longlong *)(param_1 + 0x20);
    for (lVar11 = lVar9; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
      if (lVar11 == lVar6) {
        if (lVar9 == 0) {
          return false;
        }
        lVar11 = 0;
        local_48 = 0;
        lVar6 = lVar11;
        if (lVar9 != 0) {
          lVar7 = UNodeMappingContainer::GetPrivateStaticClass();
          for (lVar9 = *(longlong *)(param_1 + 0x20);
              (lVar6 = lVar11, lVar9 != 0 && (lVar6 = *(longlong *)(param_1 + 0x20), lVar9 != lVar7)
              ); lVar9 = *(longlong *)(lVar9 + 0x30)) {
          }
        }
        uVar8 = GetTransientPackage();
        lVar9 = local_48;
        local_38 = (undefined **)0x0;
        if (local_48 == 0) {
          FUN_1417846f0(uVar8,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
        }
        plVar5 = (longlong *)FUN_1417985e0(lVar6,uVar8,lVar9,0,(ulonglong)uVar3 << 0x20,0,0,0,0);
        if (plVar5 != (longlong *)0x0) {
          lVar9 = DAT_146acba38;
          if (DAT_146acba38 == 0) {
            lVar9 = FMovieSceneAnimTypeID::Initialize(&DAT_146acba38,0);
          }
          local_48 = *(longlong *)(param_3 + 0x24);
          local_38 = &PTR_FUN_144f48240;
          local_40 = *(undefined4 *)(param_3 + 0x2c);
          FMovieScenePreAnimatedState::SavePreAnimatedState
                    (param_4 + 0xf8,lVar9,&local_38,plVar5,2,&local_48);
          uVar8 = FUN_141ff1ab0(param_2,param_3);
          lVar9 = FUN_141ff5ee0(uVar8,param_4);
          iVar2 = *(int *)((longlong)plVar5 + 0xc);
          if (iVar2 < (int)DAT_1469e91c4) {
            uVar10 = iVar2 >> 0x1f & 0xffff;
            uVar3 = iVar2 + uVar10;
            lVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
                     (longlong)(int)((uVar3 & 0xffff) - uVar10) * 0x18;
          }
          *(uint *)(lVar11 + 8) = *(uint *)(lVar11 + 8) | 0x40000000;
          plVar5[0x2c] = lVar9;
          local_30 = *(undefined4 *)(param_1 + 0x38);
          local_38 = *(undefined ***)(param_1 + 0x30);
          (**(code **)(*plVar5 + 0x288))
                    (plVar5,0,*(undefined4 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x2c),
                     &local_38);
          if (plVar5[0x2e] != 0) {
            puVar1 = (uint *)(plVar5[0x2e] + 0x3c);
            *puVar1 = *puVar1 & 0xfffffffd;
          }
        }
        FWeakObjectPtr::operator=(lVar4 + 8,plVar5);
        goto LAB_141fe540b;
      }
    }
  }
  return false;
}


