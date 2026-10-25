// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14311fa40 SetPosition body=17 status=ok
// SIG AKRESULT SetPosition(__uint64 param_1, AkTransform * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetPosition(unsigned __int64,class AkTransform const &
   __ptr64) */

AKRESULT __cdecl AK::SoundEngine::SetPosition(__uint64 param_1,AkTransform *param_2)

{
  AKRESULT AVar1;
  
                    /* 0x311fa40  437
                       ?SetPosition@SoundEngine@AK@@YA?AW4AKRESULT@@_KAEBVAkTransform@@@Z */
  if (0xffffffffffffffdf < param_1) {
    return 2;
  }
  AVar1 = SetPositionInternal(param_1,param_2);
  return AVar1;
}



// FUNCTION 14311fa60 SetPositionInternal body=337 status=ok
// SIG AKRESULT SetPositionInternal(__uint64 param_1, AkTransform * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetPositionInternal(unsigned __int64,class AkTransform
   const & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::SetPositionInternal(__uint64 param_1,AkTransform *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
                    /* 0x311fa60  438
                       ?SetPositionInternal@SoundEngine@AK@@YA?AW4AKRESULT@@_KAEBVAkTransform@@@Z */
  iVar5 = _finite((double)*(float *)(param_2 + 0x18));
  if (iVar5 != 0) {
    iVar5 = _finite((double)*(float *)(param_2 + 0x1c));
    if (iVar5 != 0) {
      iVar5 = _finite((double)*(float *)(param_2 + 0x20));
      if (iVar5 != 0) {
        fVar8 = *(float *)(param_2 + 4);
        fVar1 = *(float *)param_2;
        fVar2 = *(float *)(param_2 + 8);
        fVar7 = fVar1 * fVar1 + fVar8 * fVar8 + fVar2 * fVar2;
        if ((0.9 < fVar7) && (fVar7 < 1.1)) {
          fVar7 = *(float *)(param_2 + 0xc) * *(float *)(param_2 + 0xc) +
                  *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10) +
                  *(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x14);
          if ((0.9 < fVar7) &&
             ((fVar7 < 1.1 &&
              (fVar8 = fVar1 * *(float *)(param_2 + 0xc) + fVar8 * *(float *)(param_2 + 0x10) +
                       fVar2 * *(float *)(param_2 + 0x14), fVar8 * fVar8 < 0.1)))) {
            uVar4 = TStaticMeshVertexData<FStaticMeshInstanceData::FInstanceTransformMatrix<float>_>
                    ::GetStride();
            lVar6 = FUN_1431400f0(DAT_146b50b78,0xd,uVar4);
            *(__uint64 *)(lVar6 + 4) = param_1;
            uVar3 = *(undefined8 *)(param_2 + 8);
            *(undefined8 *)(lVar6 + 0xc) = *(undefined8 *)param_2;
            *(undefined8 *)(lVar6 + 0x14) = uVar3;
            uVar3 = *(undefined8 *)(param_2 + 0x18);
            *(undefined8 *)(lVar6 + 0x1c) = *(undefined8 *)(param_2 + 0x10);
            *(undefined8 *)(lVar6 + 0x24) = uVar3;
            *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)(param_2 + 0x20);
            LOCK();
            *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
            UNLOCK();
            return 1;
          }
        }
      }
    }
  }
  return 0x1f;
}



// FUNCTION 14311fbc0 FUN_14311fbc0 body=114 status=ok
// SIG undefined FUN_14311fbc0(void)

undefined8
FUN_14311fbc0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if (g_pRegistryMgr != (CAkRegistryMgr *)0x0) {
    cVar1 = FUN_14314c040(g_pRegistryMgr,param_4);
    if (cVar1 == '\0') {
      return 2;
    }
  }
  uVar2 = FUN_143121af0(param_2,param_3,param_4,0);
  return uVar2;
}



// FUNCTION 14311fc40 SetRTPCValue body=39 status=ok
// SIG AKRESULT SetRTPCValue(ulong param_1, float param_2, __uint64 param_3, long param_4, AkCurveInterpolation param_5, bool param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValue(unsigned long,float,unsigned
   __int64,long,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValue
          (ulong param_1,float param_2,__uint64 param_3,long param_4,AkCurveInterpolation param_5,
          bool param_6)

{
  AKRESULT AVar1;
  
                    /* 0x311fc40  441
                       ?SetRTPCValue@SoundEngine@AK@@YA?AW4AKRESULT@@KM_KJW4AkCurveInterpolation@@_N@Z
                        */
  AVar1 = FUN_143121af0();
  return AVar1;
}



// FUNCTION 14311fc70 SetRTPCValue body=111 status=ok
// SIG AKRESULT SetRTPCValue(char * param_1, float param_2, __uint64 param_3, long param_4, AkCurveInterpolation param_5, bool param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValue(char const * __ptr64,float,unsigned
   __int64,long,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValue
          (char *param_1,float param_2,__uint64 param_3,long param_4,AkCurveInterpolation param_5,
          bool param_6)

{
  ulong uVar1;
  AKRESULT AVar2;
  
                    /* 0x311fc70  442
                       ?SetRTPCValue@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDM_KJW4AkCurveInterpolation@@_N@Z
                        */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 == 0) {
    return 0xf;
  }
  AVar2 = FUN_143121af0(uVar1,param_2,param_3,0,param_4,param_5,param_6);
  return AVar2;
}



// FUNCTION 14311fce0 SetRTPCValue body=111 status=ok
// SIG AKRESULT SetRTPCValue(wchar_t * param_1, float param_2, __uint64 param_3, long param_4, AkCurveInterpolation param_5, bool param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValue(wchar_t const * __ptr64,float,unsigned
   __int64,long,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValue
          (wchar_t *param_1,float param_2,__uint64 param_3,long param_4,AkCurveInterpolation param_5
          ,bool param_6)

{
  ulong uVar1;
  AKRESULT AVar2;
  
                    /* 0x311fce0  443
                       ?SetRTPCValue@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WM_KJW4AkCurveInterpolation@@_N@Z
                        */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 == 0) {
    return 0xf;
  }
  AVar2 = FUN_143121af0(uVar1,param_2,param_3,0,param_4,param_5,param_6);
  return AVar2;
}



// FUNCTION 14311fd50 SetRTPCValueByPlayingID body=123 status=ok
// SIG AKRESULT SetRTPCValueByPlayingID(ulong param_1, float param_2, ulong param_3, long param_4, AkCurveInterpolation param_5, bool param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValueByPlayingID(unsigned long,float,unsigned
   long,long,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValueByPlayingID
          (ulong param_1,float param_2,ulong param_3,long param_4,AkCurveInterpolation param_5,
          bool param_6)

{
  AKRESULT AVar1;
  longlong lVar2;
  
                    /* 0x311fd50  444
                       ?SetRTPCValueByPlayingID@SoundEngine@AK@@YA?AW4AKRESULT@@KMKJW4AkCurveInterpolation@@_N@Z
                        */
  lVar2 = CAkPlayingMgr::GetGameObjectFromPlayingID(DAT_146b50b00,param_3);
  if (lVar2 == -1) {
    AVar1 = 0x1f;
  }
  else {
    AVar1 = FUN_143121af0(param_1,param_2,lVar2,param_3,param_4,param_5,param_6);
  }
  return AVar1;
}



// FUNCTION 14311fdd0 SetRTPCValueByPlayingID body=136 status=ok
// SIG AKRESULT SetRTPCValueByPlayingID(char * param_1, float param_2, ulong param_3, long param_4, AkCurveInterpolation param_5, bool param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValueByPlayingID(char const *
   __ptr64,float,unsigned long,long,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValueByPlayingID
          (char *param_1,float param_2,ulong param_3,long param_4,AkCurveInterpolation param_5,
          bool param_6)

{
  ulong uVar1;
  AKRESULT AVar2;
  longlong lVar3;
  
                    /* 0x311fdd0  445
                       ?SetRTPCValueByPlayingID@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDMKJW4AkCurveInterpolation@@_N@Z
                        */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 == 0) {
    AVar2 = 0xf;
  }
  else {
    lVar3 = CAkPlayingMgr::GetGameObjectFromPlayingID(DAT_146b50b00,param_3);
    if (lVar3 == -1) {
      AVar2 = 0x1f;
    }
    else {
      AVar2 = FUN_143121af0(uVar1,param_2,lVar3,param_3,param_4,param_5,param_6);
    }
  }
  return AVar2;
}



// FUNCTION 14311fe60 SetRTPCValueByPlayingID body=136 status=ok
// SIG AKRESULT SetRTPCValueByPlayingID(wchar_t * param_1, float param_2, ulong param_3, long param_4, AkCurveInterpolation param_5, bool param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValueByPlayingID(wchar_t const *
   __ptr64,float,unsigned long,long,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValueByPlayingID
          (wchar_t *param_1,float param_2,ulong param_3,long param_4,AkCurveInterpolation param_5,
          bool param_6)

{
  ulong uVar1;
  AKRESULT AVar2;
  longlong lVar3;
  
                    /* 0x311fe60  446
                       ?SetRTPCValueByPlayingID@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WMKJW4AkCurveInterpolation@@_N@Z
                        */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 == 0) {
    AVar2 = 0xf;
  }
  else {
    lVar3 = CAkPlayingMgr::GetGameObjectFromPlayingID(DAT_146b50b00,param_3);
    if (lVar3 == -1) {
      AVar2 = 0x1f;
    }
    else {
      AVar2 = FUN_143121af0(uVar1,param_2,lVar3,param_3,param_4,param_5,param_6);
    }
  }
  return AVar2;
}



// FUNCTION 14311fef0 SetRTPCValueOnObjectWithPlayingID body=14 status=ok
// SIG AKRESULT SetRTPCValueOnObjectWithPlayingID(ulong param_1, float param_2, __uint64 param_3, ulong param_4, long param_5, AkCurveInterpolation param_6, bool param_7)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValueOnObjectWithPlayingID(unsigned
   long,float,unsigned __int64,unsigned long,long,enum AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValueOnObjectWithPlayingID
          (ulong param_1,float param_2,__uint64 param_3,ulong param_4,long param_5,
          AkCurveInterpolation param_6,bool param_7)

{
  AKRESULT AVar1;
  
                    /* 0x311fef0  447
                       ?SetRTPCValueOnObjectWithPlayingID@SoundEngine@AK@@YA?AW4AKRESULT@@KM_KKJW4AkCurveInterpolation@@_N@Z
                        */
  AVar1 = FUN_143121af0();
  return AVar1;
}



// FUNCTION 14311ff00 SetRandomSeed body=57 status=ok
// SIG void SetRandomSeed(ulong param_1)

/* void __cdecl AK::SoundEngine::SetRandomSeed(unsigned long) */

void __cdecl AK::SoundEngine::SetRandomSeed(ulong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x311ff00  448  ?SetRandomSeed@SoundEngine@AK@@YAXK@Z */
  uVar1 = HInterpTrackKeypointProxy::GetMouseCursor();
  lVar2 = FUN_1431400f0(DAT_146b50b78,0x31,uVar1);
  *(ulong *)(lVar2 + 4) = param_1;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return;
}



// FUNCTION 14311ff40 SetScalingFactor body=106 status=ok
// SIG AKRESULT SetScalingFactor(__uint64 param_1, float param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetScalingFactor(unsigned __int64,float) */

AKRESULT __cdecl AK::SoundEngine::SetScalingFactor(__uint64 param_1,float param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x311ff40  449  ?SetScalingFactor@SoundEngine@AK@@YA?AW4AKRESULT@@_KM@Z */
  if (param_2 <= 0.0) {
    return 0x1f;
  }
  uVar1 = CCallbackImpl<16>::GetCallbackSizeBytes();
  lVar2 = FUN_1431400f0(DAT_146b50b78,0x24,uVar1);
  *(float *)(lVar2 + 0xc) = param_2;
  *(__uint64 *)(lVar2 + 4) = param_1;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 14311ffb0 SetSpeakerAngles body=245 status=ok
// SIG AKRESULT SetSpeakerAngles(float * param_1, ulong param_2, float param_3, __uint64 param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::SetSpeakerAngles(float * __ptr64,unsigned
   long,float,unsigned __int64) */

AKRESULT __cdecl
AK::SoundEngine::SetSpeakerAngles(float *param_1,ulong param_2,float param_3,__uint64 param_4)

{
  undefined2 uVar1;
  AKRESULT AVar2;
  longlong lVar3;
  void *_Dst;
  uint uVar4;
  byte bVar5;
  
                    /* 0x311ffb0  450  ?SetSpeakerAngles@SoundEngine@AK@@YA?AW4AKRESULT@@PEAMKM_K@Z
                        */
  if (param_1 != (float *)0x0) {
    uVar4 = 0x633;
    bVar5 = 0;
    do {
      bVar5 = bVar5 + 1;
      uVar4 = uVar4 & uVar4 - 1;
    } while (uVar4 != 0);
    if (bVar5 >> 1 <= param_2) {
      uVar1 = FUN_143140860();
      lVar3 = FUN_1431400f0(DAT_146b50b78,0x2e,uVar1);
      _Dst = MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)param_2 << 2);
      *(void **)(lVar3 + 4) = _Dst;
      if (_Dst == (void *)0x0) {
        *(undefined2 *)(lVar3 + 2) = 0x38;
        AVar2 = 0x34;
      }
      else {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_1,(ulonglong)param_2 << 2);
        AVar2 = 1;
        *(float *)(lVar3 + 0x10) = param_3;
        *(ulong *)(lVar3 + 0xc) = param_2;
        *(__uint64 *)(lVar3 + 0x14) = param_4;
      }
      LOCK();
      *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
      UNLOCK();
      return AVar2;
    }
  }
  return 0x1f;
}



// FUNCTION 1431200b0 SetState body=90 status=ok
// SIG AKRESULT SetState(ulong param_1, ulong param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetState(unsigned long,unsigned long) */

AKRESULT __cdecl AK::SoundEngine::SetState(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined2 uVar2;
  longlong lVar3;
  
                    /* 0x31200b0  451  ?SetState@SoundEngine@AK@@YA?AW4AKRESULT@@KK@Z */
  uVar2 = CCallbackImpl<16>::GetCallbackSizeBytes();
  lVar3 = FUN_1431400f0(DAT_146b50b78,7,uVar2);
  *(ulong *)(lVar3 + 4) = param_1;
  uVar1 = 0;
  if (param_2 != 0x2ca33bdb) {
    uVar1 = param_2;
  }
  *(ulong *)(lVar3 + 8) = uVar1;
  *(undefined4 *)(lVar3 + 0xc) = 0;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 143120110 SetState body=123 status=ok
// SIG undefined SetState(void)

undefined8 AK::SoundEngine::SetState(undefined4 param_1,int param_2,ushort param_3,byte param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = CCallbackImpl<16>::GetCallbackSizeBytes();
  lVar2 = FUN_1431400f0(DAT_146b50b78,7,uVar1);
  *(undefined4 *)(lVar2 + 4) = param_1;
  iVar3 = 0;
  if (param_2 != 0x2ca33bdb) {
    iVar3 = param_2;
  }
  *(ushort *)(lVar2 + 0xc) = param_3 & 0xff;
  *(ushort *)(lVar2 + 0xe) = (ushort)param_4;
  *(int *)(lVar2 + 8) = iVar3;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 143120190 SetState body=71 status=ok
// SIG AKRESULT SetState(char * param_1, char * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetState(char const * __ptr64,char const * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::SetState(char *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  AKRESULT AVar3;
  
                    /* 0x3120190  452  ?SetState@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD0@Z */
  uVar1 = GetIDFromString(param_1);
  uVar2 = GetIDFromString(param_2);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    AVar3 = SetState(uVar1,uVar2);
    return AVar3;
  }
  return 0xf;
}



// FUNCTION 1431201e0 SetState body=71 status=ok
// SIG AKRESULT SetState(wchar_t * param_1, wchar_t * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::SetState(wchar_t const * __ptr64,wchar_t const * __ptr64)
    */

AKRESULT __cdecl AK::SoundEngine::SetState(wchar_t *param_1,wchar_t *param_2)

{
  ulong uVar1;
  ulong uVar2;
  AKRESULT AVar3;
  
                    /* 0x31201e0  453  ?SetState@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W0@Z */
  uVar1 = GetIDFromString(param_1);
  uVar2 = GetIDFromString(param_2);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    AVar3 = SetState(uVar1,uVar2);
    return AVar3;
  }
  return 0xf;
}



// FUNCTION 143120230 SetSwitch body=93 status=ok
// SIG AKRESULT SetSwitch(ulong param_1, ulong param_2, __uint64 param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetSwitch(unsigned long,unsigned long,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::SetSwitch(ulong param_1,ulong param_2,__uint64 param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x3120230  454  ?SetSwitch@SoundEngine@AK@@YA?AW4AKRESULT@@KK_K@Z */
  uVar1 = CCallbackImpl<20>::GetCallbackSizeBytes();
  lVar2 = FUN_1431400f0(DAT_146b50b78,8,uVar1);
  *(ulong *)(lVar2 + 0xc) = param_1;
  *(ulong *)(lVar2 + 0x10) = param_2;
  *(__uint64 *)(lVar2 + 4) = param_3;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 143120290 SetSwitch body=92 status=ok
// SIG AKRESULT SetSwitch(char * param_1, char * param_2, __uint64 param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetSwitch(char const * __ptr64,char const *
   __ptr64,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::SetSwitch(char *param_1,char *param_2,__uint64 param_3)

{
  ulong uVar1;
  ulong uVar2;
  AKRESULT AVar3;
  
                    /* 0x3120290  455  ?SetSwitch@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD0_K@Z */
  uVar1 = GetIDFromString(param_1);
  uVar2 = GetIDFromString(param_2);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    AVar3 = SetSwitch(uVar1,uVar2,param_3);
    return AVar3;
  }
  return 0xf;
}



// FUNCTION 1431202f0 SetSwitch body=92 status=ok
// SIG AKRESULT SetSwitch(wchar_t * param_1, wchar_t * param_2, __uint64 param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetSwitch(wchar_t const * __ptr64,wchar_t const *
   __ptr64,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::SetSwitch(wchar_t *param_1,wchar_t *param_2,__uint64 param_3)

{
  ulong uVar1;
  ulong uVar2;
  AKRESULT AVar3;
  
                    /* 0x31202f0  456  ?SetSwitch@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W0_K@Z */
  uVar1 = GetIDFromString(param_1);
  uVar2 = GetIDFromString(param_2);
  if ((uVar1 != 0) && (uVar2 != 0)) {
    AVar3 = SetSwitch(uVar1,uVar2,param_3);
    return AVar3;
  }
  return 0xf;
}



// FUNCTION 143120350 SetVolumeThreshold body=273 status=ok
// SIG AKRESULT SetVolumeThreshold(float param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::SetVolumeThreshold(float) */

AKRESULT __cdecl AK::SoundEngine::SetVolumeThreshold(float param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float _Y;
  
                    /* 0x3120350  457  ?SetVolumeThreshold@SoundEngine@AK@@YA?AW4AKRESULT@@M@Z */
  if ((-96.3 <= param_1) && (fVar3 = 0.0, param_1 <= 0.0)) {
    if (-1 < DAT_1467bdc90) {
      _Y = param_1 * 0.05;
      DAT_1467bdc90 = 0;
      fVar2 = ::_guard_xfg_dispatch_icall_nop(10.0,_Y);
      if (-37.0 <= _Y) {
        uVar1 = (uint)(longlong)(_Y * 27866352.0 + 1.0653532e+09);
        fVar3 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar3 = ((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      DAT_1467be0f0 = fVar3;
      DAT_1467be0f4 = param_1;
      if (fVar3 <= fVar2) {
        DAT_1467be0f0 = fVar2;
      }
    }
    return 1;
  }
  return 0x1f;
}



// FUNCTION 143120470 SetVolumeThresholdInternal body=268 status=ok
// SIG undefined SetVolumeThresholdInternal(void)

undefined8 AK::SoundEngine::SetVolumeThresholdInternal(float param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float _Y;
  
  if ((-96.3 <= param_1) && (fVar3 = 0.0, param_1 <= 0.0)) {
    if (param_2 <= DAT_1467bdc90) {
      _Y = param_1 * 0.05;
      DAT_1467bdc90 = param_2;
      fVar2 = ::_guard_xfg_dispatch_icall_nop(10.0,_Y);
      if (-37.0 <= _Y) {
        uVar1 = (uint)(longlong)(_Y * 27866352.0 + 1.0653532e+09);
        fVar3 = (float)((uVar1 & 0x7fffff) + 0x3f800000);
        fVar3 = ((fVar3 * 0.32518977 + 0.020805772) * fVar3 + 0.65304345) *
                (float)(uVar1 & 0xff800000);
      }
      DAT_1467be0f0 = fVar3;
      DAT_1467be0f4 = param_1;
      if (fVar3 <= fVar2) {
        DAT_1467be0f0 = fVar2;
      }
    }
    return 1;
  }
  return 0x1f;
}



// FUNCTION 143120580 StartCapture body=62 status=ok
// SIG undefined StartCapture(void)

void AK::SoundEngine::CAkGlobalPluginContext::StartCapture
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1431534e0();
                    /* WARNING: Could not recover jumptable at 0x0001431205bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1431205c0 StartOutputCapture body=188 status=ok
// SIG AKRESULT StartOutputCapture(wchar_t * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::StartOutputCapture(wchar_t const * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::StartOutputCapture(wchar_t *param_1)

{
  __uint64 _Size;
  longlong lVar1;
  undefined2 uVar2;
  longlong lVar3;
  void *_Dst;
  
                    /* 0x31205c0  464  ?StartOutputCapture@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W@Z
                        */
  if (param_1 == (wchar_t *)0x0) {
    return 0x1f;
  }
  lVar3 = -1;
  do {
    lVar1 = lVar3 + 1;
    lVar3 = lVar3 + 1;
  } while (param_1[lVar1] != L'\0');
  _Size = lVar3 * 2 + 2;
  _Dst = MemoryMgr::Malloc(g_DefaultPoolId,_Size);
  if (_Dst == (void *)0x0) {
    return 0x34;
  }
  uVar2 = CCallbackImpl<12>::GetCallbackSizeBytes();
  lVar3 = FUN_1431400f0(DAT_146b50b78,0x28,uVar2);
  *(void **)(lVar3 + 4) = _Dst;
  ::_guard_xfg_dispatch_icall_nop(_Dst,param_1,_Size);
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 143120680 Stop body=163 status=ok
// SIG AKRESULT Stop(ulong param_1, long param_2, AkCurveInterpolation param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::Stop(unsigned long,long,enum
   AkCurveInterpolation) */

AKRESULT __cdecl
AK::SoundEngine::DynamicSequence::Stop(ulong param_1,long param_2,AkCurveInterpolation param_3)

{
  undefined2 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
                    /* 0x3120680  467
                       ?Stop@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@KJW4AkCurveInterpolation@@@Z
                        */
  plVar2 = (longlong *)
           CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x200,param_1);
  if (plVar2 != (longlong *)0x0) {
    if ((char)plVar2[0xf] == '\0') {
      uVar1 = CCallbackImpl<24>::GetCallbackSizeBytes();
      lVar3 = FUN_1431400f0(DAT_146b50b78,0x19,uVar1);
      *(longlong **)(lVar3 + 4) = plVar2;
      *(undefined4 *)(lVar3 + 0xc) = 4;
      *(long *)(lVar3 + 0x10) = param_2;
      *(AkCurveInterpolation *)(lVar3 + 0x14) = param_3;
      LOCK();
      *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
      UNLOCK();
      return 1;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return 2;
}



// FUNCTION 143120730 StopAll body=59 status=ok
// SIG void StopAll(__uint64 param_1)

/* void __cdecl AK::SoundEngine::StopAll(unsigned __int64) */

void __cdecl AK::SoundEngine::StopAll(__uint64 param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x3120730  468  ?StopAll@SoundEngine@AK@@YAX_K@Z */
  uVar1 = CCallbackImpl<12>::GetCallbackSizeBytes();
  lVar2 = FUN_1431400f0(DAT_146b50b78,0x1b,uVar1);
  *(__uint64 *)(lVar2 + 4) = param_1;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return;
}



// FUNCTION 143120770 StopCapture body=30 status=ok
// SIG undefined StopCapture(void)

void AK::SoundEngine::CAkGlobalPluginContext::StopCapture(undefined8 param_1,undefined8 *param_2)

{
  AkCaptureFile::StopCapture(*param_2);
  *param_2 = 0;
  return;
}



// FUNCTION 143120790 StopMIDIOnEvent body=144 status=ok
// SIG AKRESULT StopMIDIOnEvent(ulong param_1, __uint64 param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::StopMIDIOnEvent(unsigned long,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::StopMIDIOnEvent(ulong param_1,__uint64 param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  
                    /* 0x3120790  469  ?StopMIDIOnEvent@SoundEngine@AK@@YA?AW4AKRESULT@@K_K@Z */
  lVar2 = CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0xc0,param_1);
  if ((lVar2 == 0) && (param_1 != 0)) {
    return 2;
  }
  uVar1 = CCallbackImpl<24>::GetCallbackSizeBytes();
  lVar3 = FUN_1431400f0(DAT_146b50b78,0x22,uVar1);
  *(ulong *)(lVar3 + 0x14) = param_1;
  *(__uint64 *)(lVar3 + 4) = param_2;
  *(longlong *)(lVar3 + 0xc) = lVar2;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 143120820 FUN_143120820 body=260 status=ok
// SIG undefined FUN_143120820(void)

undefined4 FUN_143120820(undefined8 param_1,int param_2,__uint64 param_3)

{
  CAkRegisteredObj *pCVar1;
  long lVar2;
  longlong *plVar3;
  CAkRegisteredObj *pCVar4;
  __uint64 local_28;
  longlong *local_20;
  int local_18;
  
  plVar3 = (longlong *)CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0xc0)
  ;
  if ((plVar3 == (longlong *)0x0) && (param_2 != 0)) {
    return 2;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  pCVar4 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,param_3);
  if (((pCVar4 != (CAkRegisteredObj *)0x0) &&
      ((*(int *)(pCVar4 + 0x40) != 0 && (**(longlong **)(pCVar4 + 0x38) != 0)))) ||
     (param_3 == 0xffffffffffffffff)) {
    local_28 = param_3;
    local_20 = plVar3;
    local_18 = param_2;
    FUN_14313e170(DAT_146b50b78,plVar3,&local_28,pCVar4);
  }
  if (pCVar4 != (CAkRegisteredObj *)0x0) {
    pCVar1 = pCVar4 + 0x50;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    lVar2 = g_DefaultPoolId;
    if (*(int *)pCVar1 == 0) {
      (*(code *)**(undefined8 **)pCVar4)(pCVar4,0);
      AK::MemoryMgr::Free(lVar2,pCVar4);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return 1;
}



// FUNCTION 143120930 StopOutputCapture body=62 status=ok
// SIG AKRESULT StopOutputCapture(void)

/* enum AKRESULT __cdecl AK::SoundEngine::StopOutputCapture(void) */

AKRESULT __cdecl AK::SoundEngine::StopOutputCapture(void)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x3120930  470  ?StopOutputCapture@SoundEngine@AK@@YA?AW4AKRESULT@@XZ */
  uVar1 = CCallbackImpl<12>::GetCallbackSizeBytes();
  lVar2 = FUN_1431400f0(DAT_146b50b78,0x28,uVar1);
  *(undefined8 *)(lVar2 + 4) = 0;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 143120970 StopPlayingID body=91 status=ok
// SIG void StopPlayingID(ulong param_1, long param_2, AkCurveInterpolation param_3)

/* void __cdecl AK::SoundEngine::StopPlayingID(unsigned long,long,enum AkCurveInterpolation) */

void __cdecl AK::SoundEngine::StopPlayingID(ulong param_1,long param_2,AkCurveInterpolation param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x3120970  471
                       ?StopPlayingID@SoundEngine@AK@@YAXKJW4AkCurveInterpolation@@@Z */
  if (param_1 != 0) {
    uVar1 = CCallbackImpl<16>::GetCallbackSizeBytes();
    lVar2 = FUN_1431400f0(DAT_146b50b78,0x1f,uVar1);
    *(ulong *)(lVar2 + 4) = param_1;
    *(long *)(lVar2 + 8) = param_2;
    *(AkCurveInterpolation *)(lVar2 + 0xc) = param_3;
    LOCK();
    *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1431209d0 StopSourcePlugin body=120 status=ok
// SIG AKRESULT StopSourcePlugin(ulong param_1, ulong param_2, ulong param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::StopSourcePlugin(unsigned long,unsigned long,unsigned
   long) */

AKRESULT __cdecl AK::SoundEngine::StopSourcePlugin(ulong param_1,ulong param_2,ulong param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x31209d0  474  ?StopSourcePlugin@SoundEngine@AK@@YA?AW4AKRESULT@@KKK@Z */
  uVar1 = AkQueuedMsg::Sizeof_Event();
  lVar2 = FUN_1431400f0(DAT_146b50b78,0x27,uVar1);
  *(ulong *)(lVar2 + 0x28) = param_1;
  *(ulong *)(lVar2 + 0xc) = param_3;
  *(undefined8 *)(lVar2 + 0x1c) = 0;
  *(undefined4 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0x14) = 0;
  *(ulong *)(lVar2 + 0x2c) = param_2;
  *(undefined4 *)(lVar2 + 0x30) = 1;
  *(undefined8 *)(lVar2 + 4) = 0xffffffffffffffff;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 143120a50 Suspend body=21 status=ok
// SIG AKRESULT Suspend(bool param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::Suspend(bool) */

AKRESULT __cdecl AK::SoundEngine::Suspend(bool param_1)

{
  AKRESULT AVar1;
  
                    /* 0x3120a50  475  ?Suspend@SoundEngine@AK@@YA?AW4AKRESULT@@_N@Z */
  AVar1 = FUN_1431412a0(DAT_146b50b78,1,param_1,0);
  return AVar1;
}



// FUNCTION 143120a70 Term body=1311 status=ok
// SIG void Term(void)

/* void __cdecl AK::SoundEngine::Term(void) */

void __cdecl AK::SoundEngine::Term(void)

{
  longlong lVar1;
  longlong lVar2;
  long lVar3;
  CAkRTPCMgr *pCVar4;
  CAkRegistryMgr *pCVar5;
  void *pvVar6;
  longlong *plVar7;
  CAkSwitchMgr *pCVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  
                    /* 0x3120a70  480  ?Term@SoundEngine@AK@@YAXXZ */
  DAT_146b50c28 = 0;
  if (DAT_146b50b78 != (void *)0x0) {
    CAkAudioMgr::Stop();
  }
  if (DAT_146b50b18 != (longlong *)0x0) {
    (**(code **)(*DAT_146b50b18 + 0x30))();
  }
  if (DAT_146b50ae0 != (void *)0x0) {
    CAkModulatorMgr::TermModulatorEngine();
  }
  if (DAT_146b51f00 != 0) {
    CAkMidiDeviceMgr::Destroy();
  }
  CAkLEngine::Stop();
  uVar10 = 0;
  uVar9 = 1;
  do {
    uVar10 = uVar10 + 1;
    uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  } while ((int)uVar9 < 0x80);
  uVar14 = (ulonglong)uVar10;
  puVar11 = &DAT_146b50c30;
  lVar12 = (longlong)((&DAT_146b50c38)[uVar14 * 4] + -1);
  if (-1 < (&DAT_146b50c38)[uVar14 * 4] + -1) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar13 = lVar12 * 0x18;
    do {
      lVar2 = (&DAT_146b50c30)[uVar14 * 2];
      if ((*(int *)(lVar1 + 0x38) < DAT_146b50cd0) &&
         (_Init_thread_header(&DAT_146b50cd0), DAT_146b50cd0 == -1)) {
        PTR_PTR_1467bdca0 = (undefined *)&PTR_FUN_145ac65b0;
        atexit((_func_5014 *)&LAB_143ec4260);
        _Init_thread_footer(&DAT_146b50cd0);
      }
      (**(code **)(lVar13 + (&DAT_146b50c30)[uVar14 * 2]))
                (&PTR_PTR_1467bdca0,0x80,*(undefined8 *)(lVar2 + 8 + lVar13));
      lVar13 = lVar13 + -0x18;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  do {
    lVar3 = g_DefaultPoolId;
    if ((void *)*puVar11 != (void *)0x0) {
      *(undefined4 *)(puVar11 + 1) = 0;
      MemoryMgr::Free(lVar3,(void *)*puVar11);
      *puVar11 = 0;
      *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    }
    puVar11 = puVar11 + 2;
  } while ((longlong)puVar11 < 0x146b50cd0);
  FUN_143161650();
  if (DAT_146b50b78 != (void *)0x0) {
    FUN_1431413d0();
    pvVar6 = DAT_146b50b78;
    lVar3 = g_DefaultPoolId;
    if (DAT_146b50b78 != (void *)0x0) {
      CAkAudioMgr::~CAkAudioMgr(DAT_146b50b78);
      MemoryMgr::Free(lVar3,pvVar6);
    }
    DAT_146b50b78 = (void *)0x0;
  }
  if (DAT_146b50b18 != (longlong *)0x0) {
    (**(code **)(*DAT_146b50b18 + 0x10))();
    plVar7 = DAT_146b50b18;
    lVar3 = g_DefaultPoolId;
    if (DAT_146b50b18 != (longlong *)0x0) {
      (**(code **)*DAT_146b50b18)(DAT_146b50b18,0);
      MemoryMgr::Free(lVar3,plVar7);
    }
    DAT_146b50b18 = (longlong *)0x0;
  }
  if (DAT_146b50af8 != (void *)0x0) {
    CAkAudioLibIndex::ReleaseTempObjects();
    CAkAudioLibIndex::ReleaseDynamicSequences(DAT_146b50af8);
  }
  if (DAT_146b50b50 != (void *)0x0) {
    MemoryMgr::Free(g_DefaultPoolId,DAT_146b50b50);
    DAT_146b50b50 = (void *)0x0;
  }
  if (DAT_146b50b10 != (void *)0x0) {
    CAkPathManager::Term();
    pvVar6 = DAT_146b50b10;
    lVar3 = g_DefaultPoolId;
    if (DAT_146b50b10 != (void *)0x0) {
      MemoryMgr::StartProfileThreadUsage((long)DAT_146b50b10);
      MemoryMgr::Free(lVar3,pvVar6);
    }
    DAT_146b50b10 = (void *)0x0;
  }
  if (DAT_146b50af0 != (void *)0x0) {
    CAkTransitionManager::Term();
    if (DAT_146b50af0 != (void *)0x0) {
      MemoryMgr::Free(g_DefaultPoolId,DAT_146b50af0);
    }
    DAT_146b50af0 = (void *)0x0;
  }
  if (g_pRegistryMgr != (CAkRegistryMgr *)0x0) {
    FUN_14314d0b0();
    pCVar5 = g_pRegistryMgr;
    lVar3 = g_DefaultPoolId;
    if (g_pRegistryMgr != (CAkRegistryMgr *)0x0) {
      FUN_14314b6a0(g_pRegistryMgr);
      MemoryMgr::Free(lVar3,pCVar5);
    }
    g_pRegistryMgr = (CAkRegistryMgr *)0x0;
  }
  if (DAT_146b50b00 != (void *)0x0) {
    CAkPlayingMgr::Term();
    pvVar6 = DAT_146b50b00;
    lVar3 = g_DefaultPoolId;
    if (DAT_146b50b00 != (void *)0x0) {
      CAkBusCallbackMgr::~CAkBusCallbackMgr((longlong)DAT_146b50b00 + 0x48);
      if (*(HANDLE *)((longlong)pvVar6 + 0x40) != (HANDLE)0x0) {
        CloseHandle(*(HANDLE *)((longlong)pvVar6 + 0x40));
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)pvVar6 + 0x18));
      MemoryMgr::Free(lVar3,pvVar6);
    }
    DAT_146b50b00 = (void *)0x0;
  }
  if (DAT_146b50b70 != (void *)0x0) {
    CAkPositionRepository::Term();
    pvVar6 = DAT_146b50b70;
    lVar3 = g_DefaultPoolId;
    if (DAT_146b50b70 != (void *)0x0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)((longlong)DAT_146b50b70 + 0x20));
      MemoryMgr::Free(lVar3,pvVar6);
    }
    DAT_146b50b70 = (void *)0x0;
  }
  if (DAT_146b50b68 != (void *)0x0) {
    CAkEnvironmentsMgr::Term();
    if (DAT_146b50b68 != (void *)0x0) {
      MemoryMgr::Free(g_DefaultPoolId,DAT_146b50b68);
    }
    DAT_146b50b68 = (void *)0x0;
  }
  if (g_pSwitchMgr != (CAkSwitchMgr *)0x0) {
    CAkSwitchMgr::Term();
    pCVar8 = g_pSwitchMgr;
    lVar3 = g_DefaultPoolId;
    if (g_pSwitchMgr != (CAkSwitchMgr *)0x0) {
      MemoryMgr::StartProfileThreadUsage((long)g_pSwitchMgr);
      MemoryMgr::Free(lVar3,pCVar8);
    }
    g_pSwitchMgr = (CAkSwitchMgr *)0x0;
  }
  if (DAT_146b50ae8 != (void *)0x0) {
    FUN_14312e880();
    pvVar6 = DAT_146b50ae8;
    lVar3 = g_DefaultPoolId;
    if (DAT_146b50ae8 != (void *)0x0) {
      CAkStateMgr::~CAkStateMgr(DAT_146b50ae8);
      MemoryMgr::Free(lVar3,pvVar6);
    }
    DAT_146b50ae8 = (void *)0x0;
  }
  if (g_pRTPCMgr != (CAkRTPCMgr *)0x0) {
    CAkRTPCMgr::Term();
    pCVar4 = g_pRTPCMgr;
    lVar3 = g_DefaultPoolId;
    if (g_pRTPCMgr != (CAkRTPCMgr *)0x0) {
      MemoryMgr::StartProfileThreadUsage((long)g_pRTPCMgr);
      MemoryMgr::Free(lVar3,pCVar4);
    }
    g_pRTPCMgr = (CAkRTPCMgr *)0x0;
  }
  if (DAT_146b50ae0 != (void *)0x0) {
    CAkModulatorMgr::Term();
    pvVar6 = DAT_146b50ae0;
    lVar3 = g_DefaultPoolId;
    if (DAT_146b50ae0 != (void *)0x0) {
      MemoryMgr::StartProfileThreadUsage((long)DAT_146b50ae0);
      MemoryMgr::Free(lVar3,pvVar6);
    }
    DAT_146b50ae0 = (void *)0x0;
  }
  if (DAT_146b50af8 != (void *)0x0) {
    CAkAudioLibIndex::Term();
    pvVar6 = DAT_146b50af8;
    lVar3 = g_DefaultPoolId;
    if (DAT_146b50af8 != (void *)0x0) {
      CAkAudioLibIndex::_scalar_deleting_destructor_(DAT_146b50af8,0);
      MemoryMgr::Free(lVar3,pvVar6);
    }
    DAT_146b50af8 = (void *)0x0;
  }
  CAkListener::Term();
  if (g_DefaultPoolId != -1) {
    MemoryMgr::DestroyPool(g_DefaultPoolId);
    g_DefaultPoolId = -1;
  }
  return;
}



// FUNCTION 143120f90 UnloadBank body=156 status=ok
// SIG AKRESULT UnloadBank(ulong param_1, void * param_2, _func_void_ulong_void_ptr_AKRESULT_long_void_ptr * param_3, void * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::UnloadBank(unsigned long,void const * __ptr64,void
   (__cdecl*)(unsigned long,void const * __ptr64,enum AKRESULT,long,void * __ptr64),void * __ptr64)
    */

AKRESULT __cdecl
AK::SoundEngine::UnloadBank
          (ulong param_1,void *param_2,_func_void_ulong_void_ptr_AKRESULT_long_void_ptr *param_3,
          void *param_4)

{
  AKRESULT AVar1;
  uint7 uStack_af;
  undefined4 uStack_7c;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  _func_void_ulong_void_ptr_AKRESULT_long_void_ptr *p_Stack_40;
  void *local_38;
  ulonglong uStack_30;
  undefined4 local_28;
  void *pvStack_20;
  undefined4 local_18;
  
                    /* 0x3120f90  501
                       ?UnloadBank@SoundEngine@AK@@YA?AW4AKRESULT@@KPEBXP6AXK0W43@JPEAX@Z2@Z */
  local_48 = (ulonglong)uStack_af << 8;
  local_58 = CONCAT44(param_1,1);
  uStack_50 = 0;
  uStack_30 = CONCAT44(uStack_7c,-(uint)(param_2 != (void *)0x0)) & 0xffffffff00000002;
  local_18 = 0;
  local_28 = 0xffffffff;
  p_Stack_40 = param_3;
  local_38 = param_4;
  pvStack_20 = param_2;
  AVar1 = (**(code **)(*DAT_146b50b18 + 0x18))(DAT_146b50b18,&local_58);
  return AVar1;
}



// FUNCTION 143121030 UnloadBank body=238 status=ok
// SIG AKRESULT UnloadBank(ulong param_1, void * param_2, long * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::UnloadBank(unsigned long,void const * __ptr64,long *
   __ptr64) */

AKRESULT __cdecl AK::SoundEngine::UnloadBank(ulong param_1,void *param_2,long *param_3)

{
  AKRESULT AVar1;
  undefined4 uVar2;
  uint7 uStack_cf;
  undefined4 uStack_9c;
  undefined1 local_78 [16];
  long local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined1 *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  void *pvStack_20;
  undefined4 local_18;
  
                    /* 0x3121030  502  ?UnloadBank@SoundEngine@AK@@YA?AW4AKRESULT@@KPEBXPEAJ@Z */
  AVar1 = (**(code **)(*DAT_146b50b18 + 0x20))(DAT_146b50b18,local_78);
  if (AVar1 == 1) {
    local_38 = local_78;
    local_48 = (ulonglong)uStack_cf << 8;
    uStack_40 = DAT_146b50b48;
    local_58 = CONCAT44(param_1,1);
    uStack_50 = 0;
    uStack_30 = CONCAT44(uStack_9c,2);
    local_18 = 0;
    local_28 = 0xffffffff;
    pvStack_20 = param_2;
    uVar2 = (**(code **)(*DAT_146b50b18 + 0x18))(DAT_146b50b18,&local_58);
    AVar1 = (**(code **)(*DAT_146b50b18 + 0x28))(DAT_146b50b18,local_78,uVar2);
    if (param_3 != (long *)0x0) {
      *param_3 = local_68;
    }
  }
  return AVar1;
}



// FUNCTION 143121120 UnloadBank body=218 status=ok
// SIG AKRESULT UnloadBank(char * param_1, void * param_2, _func_void_ulong_void_ptr_AKRESULT_long_void_ptr * param_3, void * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::UnloadBank(char const * __ptr64,void const * __ptr64,void
   (__cdecl*)(unsigned long,void const * __ptr64,enum AKRESULT,long,void * __ptr64),void * __ptr64)
    */

AKRESULT __cdecl
AK::SoundEngine::UnloadBank
          (char *param_1,void *param_2,_func_void_ulong_void_ptr_AKRESULT_long_void_ptr *param_3,
          void *param_4)

{
  undefined4 uVar1;
  AKRESULT AVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined7 uStack_af;
  undefined4 uVar5;
  undefined4 uStack_7c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  _func_void_ulong_void_ptr_AKRESULT_long_void_ptr *p_Stack_40;
  void *local_38;
  ulonglong uStack_30;
  undefined4 local_28;
  void *pvStack_20;
  undefined4 local_18;
  
                    /* 0x3121120  503
                       ?UnloadBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDPEBXP6AXK1W43@JPEAX@Z3@Z */
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 1;
  uVar1 = GetBankIDFromString(param_1,param_2,param_3,param_4,0,0,1);
  local_48 = CONCAT71(uStack_af,uVar4);
  local_58 = CONCAT44(uVar1,uVar5);
  uStack_30 = CONCAT44(uStack_7c,-(uint)(param_2 != (void *)0x0)) & 0xffffffff00000002;
  local_18 = 0;
  local_28 = 0xffffffff;
  uStack_50 = uVar3;
  p_Stack_40 = param_3;
  local_38 = param_4;
  pvStack_20 = param_2;
  AVar2 = (**(code **)(*DAT_146b50b18 + 0x18))(DAT_146b50b18,&local_58);
  return AVar2;
}



// FUNCTION 143121200 UnloadBank body=44 status=ok
// SIG AKRESULT UnloadBank(char * param_1, void * param_2, long * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::UnloadBank(char const * __ptr64,void const * __ptr64,long
   * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::UnloadBank(char *param_1,void *param_2,long *param_3)

{
  ulong uVar1;
  AKRESULT AVar2;
  
                    /* 0x3121200  504  ?UnloadBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDPEBXPEAJ@Z */
  uVar1 = GetBankIDFromString();
  AVar2 = UnloadBank(uVar1,param_2,param_3);
  return AVar2;
}



// FUNCTION 143121230 UnloadBank body=218 status=ok
// SIG AKRESULT UnloadBank(wchar_t * param_1, void * param_2, _func_void_ulong_void_ptr_AKRESULT_long_void_ptr * param_3, void * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::UnloadBank(wchar_t const * __ptr64,void const *
   __ptr64,void (__cdecl*)(unsigned long,void const * __ptr64,enum AKRESULT,long,void *
   __ptr64),void * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::UnloadBank
          (wchar_t *param_1,void *param_2,_func_void_ulong_void_ptr_AKRESULT_long_void_ptr *param_3,
          void *param_4)

{
  undefined4 uVar1;
  AKRESULT AVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined7 uStack_af;
  undefined4 uVar5;
  undefined4 uStack_7c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  _func_void_ulong_void_ptr_AKRESULT_long_void_ptr *p_Stack_40;
  void *local_38;
  ulonglong uStack_30;
  undefined4 local_28;
  void *pvStack_20;
  undefined4 local_18;
  
                    /* 0x3121230  505
                       ?UnloadBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WPEBXP6AXK1W43@JPEAX@Z3@Z */
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 1;
  uVar1 = GetBankIDFromString(param_1,param_2,param_3,param_4,0,0,1);
  local_48 = CONCAT71(uStack_af,uVar4);
  local_58 = CONCAT44(uVar1,uVar5);
  uStack_30 = CONCAT44(uStack_7c,-(uint)(param_2 != (void *)0x0)) & 0xffffffff00000002;
  local_18 = 0;
  local_28 = 0xffffffff;
  uStack_50 = uVar3;
  p_Stack_40 = param_3;
  local_38 = param_4;
  pvStack_20 = param_2;
  AVar2 = (**(code **)(*DAT_146b50b18 + 0x18))(DAT_146b50b18,&local_58);
  return AVar2;
}



// FUNCTION 143121310 UnloadBank body=44 status=ok
// SIG AKRESULT UnloadBank(wchar_t * param_1, void * param_2, long * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::UnloadBank(wchar_t const * __ptr64,void const *
   __ptr64,long * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::UnloadBank(wchar_t *param_1,void *param_2,long *param_3)

{
  ulong uVar1;
  AKRESULT AVar2;
  
                    /* 0x3121310  506  ?UnloadBank@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WPEBXPEAJ@Z
                        */
  uVar1 = GetBankIDFromString();
  AVar2 = UnloadBank(uVar1,param_2,param_3);
  return AVar2;
}



// FUNCTION 143121340 UnlockPlaylist body=72 status=ok
// SIG AKRESULT UnlockPlaylist(ulong param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::DynamicSequence::UnlockPlaylist(unsigned long) */

AKRESULT __cdecl AK::SoundEngine::DynamicSequence::UnlockPlaylist(ulong param_1)

{
  longlong *plVar1;
  
                    /* 0x3121340  508
                       ?UnlockPlaylist@DynamicSequence@SoundEngine@AK@@YA?AW4AKRESULT@@K@Z */
  plVar1 = (longlong *)
           CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0x200,param_1);
  if (plVar1 == (longlong *)0x0) {
    return 2;
  }
  CAkDynamicSequence::UnlockPlaylist(plVar1);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  return 1;
}



// FUNCTION 143121390 UnpinEventInStreamCache body=132 status=ok
// SIG AKRESULT UnpinEventInStreamCache(ulong param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::UnpinEventInStreamCache(unsigned long) */

AKRESULT __cdecl AK::SoundEngine::UnpinEventInStreamCache(ulong param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  longlong lVar3;
  
                    /* 0x3121390  509  ?UnpinEventInStreamCache@SoundEngine@AK@@YA?AW4AKRESULT@@K@Z
                        */
  lVar2 = CAkIndexItem<CAkAudioDevice_*___ptr64>::GetPtrAndAddRef(DAT_146b50af8 + 0xc0,param_1);
  if (lVar2 != 0) {
    uVar1 = FUN_143140860();
    lVar3 = FUN_1431400f0(DAT_146b50b78,0x23,uVar1);
    *(longlong *)(lVar3 + 0xc) = lVar2;
    *(ulong *)(lVar3 + 0x14) = param_1;
    *(undefined8 *)(lVar3 + 4) = 0xffffffffffffffff;
    *(undefined2 *)(lVar3 + 0x1a) = 0;
    LOCK();
    *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
    UNLOCK();
    return 1;
  }
  return 2;
}



// FUNCTION 143121420 UnpinEventInStreamCache body=20 status=ok
// SIG AKRESULT UnpinEventInStreamCache(char * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::UnpinEventInStreamCache(char const * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::UnpinEventInStreamCache(char *param_1)

{
  ulong uVar1;
  AKRESULT AVar2;
  
                    /* 0x3121420  510
                       ?UnpinEventInStreamCache@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD@Z */
  uVar1 = GetIDFromString(param_1);
  AVar2 = UnpinEventInStreamCache(uVar1);
  return AVar2;
}



// FUNCTION 143121440 UnpinEventInStreamCache body=20 status=ok
// SIG AKRESULT UnpinEventInStreamCache(wchar_t * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::UnpinEventInStreamCache(wchar_t const * __ptr64) */

AKRESULT __cdecl AK::SoundEngine::UnpinEventInStreamCache(wchar_t *param_1)

{
  ulong uVar1;
  AKRESULT AVar2;
  
                    /* 0x3121440  511
                       ?UnpinEventInStreamCache@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W@Z */
  uVar1 = GetIDFromString(param_1);
  AVar2 = UnpinEventInStreamCache(uVar1);
  return AVar2;
}



// FUNCTION 143121460 UnregisterAllGameObj body=62 status=ok
// SIG AKRESULT UnregisterAllGameObj(void)

/* enum AKRESULT __cdecl AK::SoundEngine::UnregisterAllGameObj(void) */

AKRESULT __cdecl AK::SoundEngine::UnregisterAllGameObj(void)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x3121460  512  ?UnregisterAllGameObj@SoundEngine@AK@@YA?AW4AKRESULT@@XZ */
  uVar1 = CCallbackImpl<12>::GetCallbackSizeBytes();
  lVar2 = FUN_1431400f0(DAT_146b50b78,0xc,uVar1);
  *(undefined8 *)(lVar2 + 4) = 0xffffffffffffffff;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 1431214a0 UnregisterAudioDeviceStatusCallback body=17 status=ok
// SIG AKRESULT UnregisterAudioDeviceStatusCallback(void)

/* enum AKRESULT __cdecl AK::SoundEngine::UnregisterAudioDeviceStatusCallback(void) */

AKRESULT __cdecl AK::SoundEngine::UnregisterAudioDeviceStatusCallback(void)

{
                    /* 0x31214a0  513
                       ?UnregisterAudioDeviceStatusCallback@SoundEngine@AK@@YA?AW4AKRESULT@@XZ */
  DAT_146b50e38 = 0;
  return 1;
}



// FUNCTION 1431214c0 UnregisterGameObj body=81 status=ok
// SIG AKRESULT UnregisterGameObj(__uint64 param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::UnregisterGameObj(unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::UnregisterGameObj(__uint64 param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x31214c0  514  ?UnregisterGameObj@SoundEngine@AK@@YA?AW4AKRESULT@@_K@Z */
  if (0xffffffffffffffdf < param_1) {
    return 2;
  }
  uVar1 = CCallbackImpl<12>::GetCallbackSizeBytes();
  lVar2 = FUN_1431400f0(DAT_146b50b78,0xc,uVar1);
  *(__uint64 *)(lVar2 + 4) = param_1;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 143121530 UnregisterGlobalCallback body=296 status=ok
// SIG AKRESULT UnregisterGlobalCallback(_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr * param_1, ulong param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::UnregisterGlobalCallback(void (__cdecl*)(class
   AK::IAkGlobalPluginContext * __ptr64,enum AkGlobalCallbackLocation,void * __ptr64),unsigned long)
    */

AKRESULT __cdecl
AK::SoundEngine::UnregisterGlobalCallback
          (_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *param_1,
          ulong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  AKRESULT AVar6;
  AKRESULT AVar7;
  
                    /* 0x3121530  515
                       ?UnregisterGlobalCallback@SoundEngine@AK@@YA?AW4AKRESULT@@P6AXPEAVIAkGlobalPluginContext@2@W4AkGlobalCallbackLocation@@PEAX@ZK@Z
                        */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  if (param_2 < 0x400) {
    AVar7 = 1;
    uVar5 = 0;
    uVar4 = 1;
    if (param_2 != 0) {
      AVar6 = AVar7;
      do {
        AVar7 = AVar6;
        if ((param_2 & uVar4) != 0) {
          plVar3 = (longlong *)(&DAT_146b50c30)[uVar5 * 2];
          uVar4 = (&DAT_146b50c38)[uVar5 * 4];
          plVar2 = plVar3 + (ulonglong)uVar4 * 3;
          for (; (plVar3 != plVar2 &&
                 ((_func_void_IAkGlobalPluginContext_ptr_AkGlobalCallbackLocation_void_ptr *)*plVar3
                  != param_1)); plVar3 = plVar3 + 3) {
          }
          AVar7 = 0x1f;
          if (plVar3 != (longlong *)((ulonglong)uVar4 * 0x18 + (&DAT_146b50c30)[uVar5 * 2])) {
            if (plVar3 < plVar2 + -3) {
              uVar1 = ((ulonglong)((longlong)(plVar2 + -3) + (-1 - (longlong)plVar3)) / 0x18 + 1) *
                      3 & 0x1fffffffffffffff;
              plVar2 = plVar3 + 3;
              for (; uVar1 != 0; uVar1 = uVar1 - 1) {
                *plVar3 = *plVar2;
                plVar2 = plVar2 + 1;
                plVar3 = plVar3 + 1;
              }
              uVar4 = (&DAT_146b50c38)[uVar5 * 4];
            }
            (&DAT_146b50c38)[uVar5 * 4] = uVar4 - 1;
            AVar7 = AVar6;
          }
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar4 = 1 << ((byte)uVar4 & 0x1f);
        AVar6 = AVar7;
      } while (uVar4 <= param_2);
    }
  }
  else {
    AVar7 = 0x1f;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar7;
}



// FUNCTION 143121660 UnsetMedia body=35 status=ok
// SIG AKRESULT UnsetMedia(AkSourceSettings * param_1, ulong param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::UnsetMedia(struct AkSourceSettings * __ptr64,unsigned
   long) */

AKRESULT __cdecl AK::SoundEngine::UnsetMedia(AkSourceSettings *param_1,ulong param_2)

{
  AKRESULT AVar1;
  
                    /* 0x3121660  516
                       ?UnsetMedia@SoundEngine@AK@@YA?AW4AKRESULT@@PEAUAkSourceSettings@@K@Z */
  if (param_1 == (AkSourceSettings *)0x0) {
    return 0x1f;
  }
  if (param_2 == 0) {
    return 1;
  }
  AVar1 = FUN_14315a0d0(DAT_146b50b18,param_1,param_2);
  return AVar1;
}



// FUNCTION 143121690 WaitSoundEngineInit body=175 status=ok
// SIG undefined WaitSoundEngineInit(void)

undefined8 AK::SoundEngine::WaitSoundEngineInit(void)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (DAT_146b50b78 == 0) {
    return 2;
  }
  while (DAT_146b50e40 == 0) {
    CAkAudioThread::WakeupEventsConsumer(DAT_146b50b78 + 0x80);
    Sleep(5);
  }
  uVar2 = 0;
  do {
    if (DAT_1467bdcd1 == '\0') goto LAB_143121730;
    FUN_14313ff60(DAT_146b50b78,1);
    CAkAudioThread::WakeupEventsConsumer(DAT_146b50b78 + 0x80);
    Sleep(5);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 200);
  uVar1 = 0x5c;
  if (DAT_1467bdcd1 == '\0') {
LAB_143121730:
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143121740 WakeupFromSuspend body=20 status=ok
// SIG AKRESULT WakeupFromSuspend(void)

/* enum AKRESULT __cdecl AK::SoundEngine::WakeupFromSuspend(void) */

AKRESULT __cdecl AK::SoundEngine::WakeupFromSuspend(void)

{
  AKRESULT AVar1;
  
                    /* 0x3121740  523  ?WakeupFromSuspend@SoundEngine@AK@@YA?AW4AKRESULT@@XZ */
  AVar1 = FUN_1431412a0(DAT_146b50b78,0,1,0);
  return AVar1;
}



// FUNCTION 143121760 FUN_143121760 body=275 status=ok
// SIG undefined FUN_143121760(void)

void FUN_143121760(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar4 = 0;
  if (1 < param_1) {
    uVar3 = 1;
    do {
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while ((int)uVar3 < param_1);
  }
  uVar7 = (ulonglong)uVar4;
  lVar6 = (longlong)((&DAT_146b50c38)[uVar7 * 4] + -1);
  if (-1 < (&DAT_146b50c38)[uVar7 * 4] + -1) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar5 = lVar6 * 0x18;
    do {
      lVar2 = (&DAT_146b50c30)[uVar7 * 2];
      if ((*(int *)(lVar1 + 0x38) < DAT_146b50cd0) &&
         (_Init_thread_header(&DAT_146b50cd0), DAT_146b50cd0 == -1)) {
        PTR_PTR_1467bdca0 = (undefined *)&PTR_FUN_145ac65b0;
        atexit((_func_5014 *)&LAB_143ec4260);
        _Init_thread_footer(&DAT_146b50cd0);
      }
      (**(code **)(lVar5 + (&DAT_146b50c30)[uVar7 * 2]))
                (&PTR_PTR_1467bdca0,param_1,*(undefined8 *)(lVar2 + 8 + lVar5));
      lVar5 = lVar5 + -0x18;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  return;
}



// FUNCTION 143121880 FUN_143121880 body=617 status=ok
// SIG undefined FUN_143121880(void)

undefined4 FUN_143121880(undefined8 param_1,longlong param_2,ushort param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar8 = CCallbackImpl<20>::GetCallbackSizeBytes();
  if ((*(uint *)(DAT_146b50b78 + 0x20) < (uint)uVar8 + (uint)param_3 * 0x30) ||
     (lVar10 = FUN_1431400f0(DAT_146b50b78,0x25), lVar10 == 0)) {
    uVar12 = 0x1f;
  }
  else {
    *(undefined4 *)(lVar10 + 0x10) = param_4;
    uVar12 = 1;
    uVar8 = 0;
    *(undefined8 *)(lVar10 + 4) = param_1;
    *(uint *)(lVar10 + 0xc) = (uint)param_3;
    if (param_3 != 0) {
      do {
        uVar11 = (ulonglong)uVar8;
        iVar9 = _finite((double)*(float *)(param_2 + 0x18 + uVar11 * 0x30));
        if (((iVar9 == 0) ||
            (iVar9 = _finite((double)*(float *)(param_2 + 0x1c + uVar11 * 0x30)), iVar9 == 0)) ||
           (iVar9 = _finite((double)*(float *)(param_2 + 0x20 + uVar11 * 0x30)), iVar9 == 0)) {
LAB_143121a80:
          *(undefined2 *)(lVar10 + 2) = 0x38;
          uVar12 = 0x1f;
          break;
        }
        fVar15 = *(float *)(param_2 + 4 + uVar11 * 0x30);
        fVar3 = *(float *)(param_2 + uVar11 * 0x30);
        fVar4 = *(float *)(param_2 + 8 + uVar11 * 0x30);
        fVar13 = fVar3 * fVar3 + fVar15 * fVar15 + fVar4 * fVar4;
        if ((fVar13 <= 0.9) || (1.1 <= fVar13)) goto LAB_143121a80;
        fVar13 = *(float *)(param_2 + 0x10 + uVar11 * 0x30);
        fVar5 = *(float *)(param_2 + 0xc + uVar11 * 0x30);
        fVar6 = *(float *)(param_2 + 0x14 + uVar11 * 0x30);
        fVar14 = fVar5 * fVar5 + fVar13 * fVar13 + fVar6 * fVar6;
        if ((fVar14 <= 0.9) ||
           ((1.1 <= fVar14 ||
            (fVar15 = fVar3 * fVar5 + fVar15 * fVar13 + fVar4 * fVar6, 0.1 <= fVar15 * fVar15))))
        goto LAB_143121a80;
        puVar1 = (undefined8 *)(param_2 + uVar11 * 0x30);
        uVar7 = puVar1[1];
        uVar8 = uVar8 + 1;
        puVar2 = (undefined8 *)(lVar10 + 0x14 + uVar11 * 0x30);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        puVar1 = (undefined8 *)(param_2 + 0x10 + uVar11 * 0x30);
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)(lVar10 + 0x24 + uVar11 * 0x30);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        *(undefined4 *)(lVar10 + 0x34 + uVar11 * 0x30) =
             *(undefined4 *)(param_2 + 0x20 + uVar11 * 0x30);
        *(undefined4 *)(lVar10 + 0x38 + uVar11 * 0x30) =
             *(undefined4 *)(param_2 + 0x24 + uVar11 * 0x30);
        *(undefined4 *)(lVar10 + 0x3c + uVar11 * 0x30) =
             *(undefined4 *)(param_2 + 0x28 + uVar11 * 0x30);
        *(undefined4 *)(lVar10 + 0x40 + uVar11 * 0x30) =
             *(undefined4 *)(param_2 + 0x2c + uVar11 * 0x30);
      } while (uVar8 < param_3);
    }
    LOCK();
    *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
    UNLOCK();
  }
  return uVar12;
}



// FUNCTION 143121af0 FUN_143121af0 body=194 status=ok
// SIG undefined FUN_143121af0(void)

undefined8
FUN_143121af0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
             int param_5,undefined4 param_6,char param_7)

{
  undefined2 uVar1;
  longlong lVar2;
  
  if ((param_5 == 0) && (param_7 == '\0')) {
    uVar1 = CCallbackImpl<24>::GetCallbackSizeBytes();
    lVar2 = FUN_1431400f0(DAT_146b50b78,2,uVar1);
  }
  else {
    uVar1 = FUN_143140870();
    lVar2 = FUN_1431400f0(DAT_146b50b78,3,uVar1);
    *(char *)(lVar2 + 0x20) = param_7;
    *(int *)(lVar2 + 0x18) = param_5;
    *(undefined4 *)(lVar2 + 0x1c) = param_6;
  }
  *(undefined4 *)(lVar2 + 0xc) = param_1;
  *(undefined4 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 4) = param_3;
  *(undefined4 *)(lVar2 + 0x14) = param_4;
  LOCK();
  *(int *)(DAT_146b50b78 + 0x9c) = *(int *)(DAT_146b50b78 + 0x9c) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 143121bc0 sprintf body=94 status=ok
// SIG int sprintf(char * _Dest, char * _Format, ...)

int __cdecl sprintf(char *_Dest,char *_Format,...)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = in_R8;
  local_res20 = in_R9;
  puVar2 = (ulonglong *)__local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,_Dest,0xffffffffffffffff,_Format,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// FUNCTION 143121c20 FUN_143121c20 body=455 status=ok
// SIG undefined FUN_143121c20(void)

undefined8
FUN_143121c20(longlong *param_1,uint param_2,int param_3,int param_4,longlong *param_5,uint *param_6
             ,undefined1 *param_7)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  char local_res8 [8];
  uint uStack_34;
  uint uStack_2c;
  undefined7 uStack_27;
  undefined7 uStack_1f;
  
  if (*(uint *)(param_1 + 1) == 0) {
LAB_143121d6d:
    if ((param_4 != 1) &&
       (((param_3 == 0 || (param_3 == 7)) && (cVar1 = FUN_143134c90(param_2), cVar1 != '\0')))) {
      *param_7 = 1;
      *param_6 = 0x3f800000;
      return 1;
    }
    *param_7 = 0;
    uVar4 = CurrentValue::GetModulatorValue(param_2,param_5,param_6);
    return uVar4;
  }
  puVar6 = (uint *)0x0;
  for (puVar3 = *(uint **)(*param_1 + ((ulonglong)param_2 % (ulonglong)*(uint *)(param_1 + 1)) * 8);
      (puVar5 = puVar6, puVar3 != (uint *)0x0 && (puVar5 = puVar3, *puVar3 != param_2));
      puVar3 = *(uint **)(puVar3 + 2)) {
  }
  if (puVar5 == (uint *)0x0) goto LAB_143121d6d;
  *param_7 = 0;
  if ((((*param_5 != 0) || ((int)param_5[1] != 0)) ||
      (((int)param_5[2] != 0 || (((char)param_5[3] != -1 || ((char)param_5[4] != -1)))))) ||
     (param_5[5] != 0)) {
    puVar2 = (uint *)FUN_1431220c0(puVar5 + 0xc,*param_5,local_res8);
    puVar3 = puVar6;
    if (local_res8[0] != '\0') {
      puVar3 = puVar2;
    }
    if (puVar3 == (uint *)0x0) {
      if (*param_5 != 0) {
        *param_5 = 0;
        puVar2 = (uint *)FUN_1431220c0(puVar5 + 0xc,0,local_res8);
        puVar3 = puVar6;
        if (local_res8[0] != '\0') {
          puVar3 = puVar2;
        }
        if (puVar3 != (uint *)0x0) goto LAB_143121cf2;
      }
    }
    else {
LAB_143121cf2:
      puVar3 = (uint *)FUN_143122390(puVar3,param_5 + 1);
      if (puVar3 != (uint *)0x0) goto LAB_143121d45;
    }
  }
  param_5[1] = (ulonglong)uStack_34 << 0x20;
  param_5[2] = (ulonglong)uStack_2c << 0x20;
  param_5[3] = CONCAT71(uStack_27,0xff);
  param_5[4] = CONCAT71(uStack_1f,0xff);
  param_5[5] = 0;
  if (((char)puVar5[0xb] == '\0') || (puVar3 = puVar5 + 10, puVar3 == (uint *)0x0)) {
    return 0;
  }
LAB_143121d45:
  *param_6 = *puVar3;
  return 1;
}



// FUNCTION 143121df0 FUN_143121df0 body=134 status=ok
// SIG undefined FUN_143121df0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_143121df0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_145ac68b8;
  puVar2 = (undefined8 *)0x0;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    puVar2 = (undefined8 *)param_1[2];
  }
  puVar1 = (undefined8 *)param_1[3];
  if (param_1 != DAT_146b50850) {
    puVar1[2] = puVar2;
    puVar2 = DAT_146b50850;
  }
  DAT_146b50850 = puVar2;
  if (param_1 == DAT_146b50848) {
    DAT_146b50848 = puVar1;
  }
  _DAT_146b50840 = _DAT_146b50840 + -1;
  *param_1 = &PTR_FUN_145ac68a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 143121e80 `scalar_deleting_destructor' body=175 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
CAkConnectedListeners::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145ac68c8;
  Term();
  CAkLstnrAssocs::Term(param_1 + 0xc);
  CAkLstnrAssocs::Term(param_1 + 4);
  *param_1 = &PTR_FUN_145ac68b8;
  puVar2 = (undefined8 *)0x0;
  if (param_1[2] != 0) {
    *(undefined8 *)(param_1[2] + 0x18) = param_1[3];
    puVar2 = (undefined8 *)param_1[2];
  }
  puVar1 = (undefined8 *)param_1[3];
  if (param_1 != DAT_146b50850) {
    puVar1[2] = puVar2;
    puVar2 = DAT_146b50850;
  }
  DAT_146b50850 = puVar2;
  if (param_1 == DAT_146b50848) {
    DAT_146b50848 = puVar1;
  }
  _DAT_146b50840 = _DAT_146b50840 + -1;
  *param_1 = &PTR_FUN_145ac68a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 143121f30 FUN_143121f30 body=43 status=ok
// SIG undefined FUN_143121f30(void)

undefined8 * FUN_143121f30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_145ac68a8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 143121f60 FUN_143121f60 body=171 status=ok
// SIG undefined FUN_143121f60(void)

ulonglong FUN_143121f60(longlong *param_1,byte param_2,undefined1 *param_3)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar3 = 0;
  iVar5 = (int)param_1[1] + -1;
  iVar2 = 0;
  if (-1 < iVar5) {
    uVar4 = uVar3;
    do {
      iVar2 = (iVar5 - (int)uVar4) / 2 + (int)uVar4;
      bVar1 = *(byte *)((longlong)iVar2 * 0x28 + 0x20 + *param_1);
      if (param_2 < bVar1) {
        iVar5 = iVar2 + -1;
      }
      else {
        if (param_2 <= bVar1) {
          *param_3 = 1;
          return *param_1 + (longlong)iVar2 * 0x28;
        }
        uVar4 = (ulonglong)(iVar2 + 1);
      }
      iVar2 = (int)uVar4;
    } while (iVar2 <= iVar5);
  }
  *param_3 = 0;
  if (*param_1 != 0) {
    uVar3 = *param_1 + (longlong)iVar2 * 0x28;
  }
  return uVar3;
}



// FUNCTION 143122010 FUN_143122010 body=168 status=ok
// SIG undefined FUN_143122010(void)

ulonglong FUN_143122010(longlong *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar3 = 0;
  iVar5 = (int)param_1[1] + -1;
  iVar2 = 0;
  if (-1 < iVar5) {
    uVar4 = uVar3;
    do {
      iVar2 = (iVar5 - (int)uVar4) / 2 + (int)uVar4;
      uVar1 = *(uint *)((longlong)iVar2 * 0x28 + 0x20 + *param_1);
      if (param_2 < uVar1) {
        iVar5 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          *param_3 = 1;
          return *param_1 + (longlong)iVar2 * 0x28;
        }
        uVar4 = (ulonglong)(iVar2 + 1);
      }
      iVar2 = (int)uVar4;
    } while (iVar2 <= iVar5);
  }
  *param_3 = 0;
  if (*param_1 != 0) {
    uVar3 = *param_1 + (longlong)iVar2 * 0x28;
  }
  return uVar3;
}



// FUNCTION 1431220c0 FUN_1431220c0 body=168 status=ok
// SIG undefined FUN_1431220c0(void)

ulonglong FUN_1431220c0(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar3 = 0;
  iVar5 = (int)param_1[1] + -1;
  iVar2 = 0;
  if (-1 < iVar5) {
    uVar4 = uVar3;
    do {
      iVar2 = (iVar5 - (int)uVar4) / 2 + (int)uVar4;
      uVar1 = *(ulonglong *)((longlong)iVar2 * 0x28 + 0x20 + *param_1);
      if (param_2 < uVar1) {
        iVar5 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          *param_3 = 1;
          return *param_1 + (longlong)iVar2 * 0x28;
        }
        uVar4 = (ulonglong)(iVar2 + 1);
      }
      iVar2 = (int)uVar4;
    } while (iVar2 <= iVar5);
  }
  *param_3 = 0;
  if (*param_1 != 0) {
    uVar3 = *param_1 + (longlong)iVar2 * 0x28;
  }
  return uVar3;
}



// FUNCTION 143122170 FUN_143122170 body=164 status=ok
// SIG undefined FUN_143122170(void)

/* WARNING: Removing unreachable block (ram,0x00014312220c) */
/* WARNING: Removing unreachable block (ram,0x0001431221d5) */

longlong FUN_143122170(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = (int)param_1[1] + -1;
  if (-1 < iVar5) {
    do {
      iVar2 = (iVar5 - iVar4) / 2 + iVar4;
      lVar3 = (longlong)iVar2 * 0x10 + *param_1;
      uVar1 = *(ulonglong *)(lVar3 + 8);
      if (param_2 < uVar1) {
        iVar5 = iVar2 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          return lVar3;
        }
        iVar4 = iVar2 + 1;
      }
    } while (iVar4 <= iVar5);
  }
  if (*param_1 == 0) {
    return 0;
  }
  return 0;
}



// FUNCTION 143122220 FUN_143122220 body=354 status=ok
// SIG undefined FUN_143122220(void)

longlong FUN_143122220(longlong param_1,char *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char local_res10 [8];
  undefined7 uStack_37;
  
  cVar1 = *param_2;
  lVar5 = 0;
  if (((cVar1 == -1) && (param_2[8] == -1)) && (*(longlong *)(param_2 + 0x10) == 0))
  goto LAB_143122352;
  lVar2 = FUN_143121f60(param_1 + 0x10,cVar1,local_res10);
  lVar4 = lVar5;
  if (local_res10[0] != '\0') {
    lVar4 = lVar2;
  }
  if (lVar4 == 0) {
    if (cVar1 == -1) goto LAB_143122352;
    *param_2 = -1;
    lVar2 = FUN_143121f60(param_1 + 0x10,0xff,local_res10);
    lVar4 = lVar5;
    if (local_res10[0] != '\0') {
      lVar4 = lVar2;
    }
    if (lVar4 == 0) goto LAB_143122352;
  }
  cVar1 = param_2[8];
  if ((cVar1 == -1) && (*(longlong *)(param_2 + 0x10) == 0)) {
LAB_143122338:
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
    lVar3 = lVar4 + 8;
    if (*(char *)(lVar4 + 0xc) == '\0') {
      lVar3 = lVar5;
    }
  }
  else {
    lVar3 = FUN_143121f60(lVar4 + 0x10,cVar1,local_res10);
    lVar2 = lVar5;
    if (local_res10[0] != '\0') {
      lVar2 = lVar3;
    }
    if (lVar2 == 0) {
      if (cVar1 != -1) {
        param_2[8] = -1;
        lVar3 = FUN_143121f60(lVar4 + 0x10,0xff,local_res10);
        lVar2 = lVar5;
        if (local_res10[0] != '\0') {
          lVar2 = lVar3;
        }
        if (lVar2 != 0) goto LAB_14312230c;
      }
      goto LAB_143122338;
    }
LAB_14312230c:
    if ((*(longlong *)(param_2 + 0x10) == 0) || (lVar3 = FUN_143122170(lVar2 + 0x10), lVar3 == 0)) {
      param_2[0x10] = '\0';
      param_2[0x11] = '\0';
      param_2[0x12] = '\0';
      param_2[0x13] = '\0';
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
      lVar3 = lVar2 + 8;
      if (*(char *)(lVar2 + 0xc) == '\0') {
        lVar3 = lVar5;
      }
      if (lVar3 == 0) goto LAB_143122338;
    }
  }
  if (lVar3 != 0) {
    return lVar3;
  }
LAB_143122352:
  *(ulonglong *)(param_2 + 8) = CONCAT71(uStack_37,0xff);
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  lVar4 = param_1 + 8;
  if (*(char *)(param_1 + 0xc) == '\0') {
    lVar4 = lVar5;
  }
  return lVar4;
}



// FUNCTION 143122390 FUN_143122390 body=386 status=ok
// SIG undefined FUN_143122390(void)

longlong FUN_143122390(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char local_res10 [8];
  undefined4 local_38;
  uint uStack_34;
  undefined7 uStack_2f;
  undefined8 local_28;
  
  iVar1 = *param_2;
  lVar5 = 0;
  if ((((iVar1 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(longlong *)(param_2 + 8) == 0)))) goto LAB_1431224c7;
  lVar2 = FUN_143122010(param_1 + 0x10,iVar1,local_res10);
  lVar4 = lVar5;
  if (local_res10[0] != '\0') {
    lVar4 = lVar2;
  }
  if (lVar4 == 0) {
    if (iVar1 == 0) goto LAB_1431224c7;
    *param_2 = 0;
    lVar2 = FUN_143122010(param_1 + 0x10,0,local_res10);
    lVar4 = lVar5;
    if (local_res10[0] != '\0') {
      lVar4 = lVar2;
    }
    if (lVar4 == 0) goto LAB_1431224c7;
  }
  iVar1 = param_2[2];
  if (((iVar1 != 0) || ((char)param_2[4] != -1)) ||
     (((char)param_2[6] != -1 || (*(longlong *)(param_2 + 8) != 0)))) {
    lVar3 = FUN_143122010(lVar4 + 0x10,iVar1,local_res10);
    lVar2 = lVar5;
    if (local_res10[0] != '\0') {
      lVar2 = lVar3;
    }
    if (lVar2 == 0) {
      if (iVar1 != 0) {
        param_2[2] = 0;
        lVar3 = FUN_143122010(lVar4 + 0x10,0,local_res10);
        lVar2 = lVar5;
        if (local_res10[0] != '\0') {
          lVar2 = lVar3;
        }
        if (lVar2 != 0) goto LAB_143122485;
      }
    }
    else {
LAB_143122485:
      lVar2 = FUN_143122220(lVar2,param_2 + 4);
      if (lVar2 != 0) {
        return lVar2;
      }
    }
  }
  local_38 = CONCAT31(local_38._1_3_,0xff);
  local_28 = 0;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_34,local_38);
  *(ulonglong *)(param_2 + 6) = CONCAT71(uStack_2f,0xff);
  param_2[8] = 0;
  param_2[9] = 0;
  lVar2 = lVar4 + 8;
  if (*(char *)(lVar4 + 0xc) == '\0') {
    lVar2 = lVar5;
  }
  if (lVar2 != 0) {
    return lVar2;
  }
LAB_1431224c7:
  local_28 = CONCAT71(local_28._1_7_,0xff);
  *(ulonglong *)(param_2 + 2) = (ulonglong)uStack_34 << 0x20;
  *(ulonglong *)(param_2 + 4) = CONCAT71(uStack_2f,0xff);
  *(undefined8 *)(param_2 + 6) = local_28;
  param_2[8] = 0;
  param_2[9] = 0;
  lVar4 = param_1 + 8;
  if (*(char *)(param_1 + 0xc) == '\0') {
    lVar4 = lVar5;
  }
  return lVar4;
}



// FUNCTION 143122520 GetActiveGameObjects body=60 status=ok
// SIG AKRESULT GetActiveGameObjects(AkArray<unsigned___int64,unsigned___int64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,32,AkAssignmentMovePolicy<unsigned___int64>_> * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetActiveGameObjects(class AkArray<unsigned
   __int64,unsigned __int64,struct AkArrayAllocatorNoAlign<struct _ArrayPoolDefault>,32,struct
   AkAssignmentMovePolicy<unsigned __int64> > & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetActiveGameObjects
          (AkArray<unsigned___int64,unsigned___int64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,32,AkAssignmentMovePolicy<unsigned___int64>_>
           *param_1)

{
  AKRESULT AVar1;
  
                    /* 0x3122520  129
                       ?GetActiveGameObjects@Query@SoundEngine@AK@@YA?AW4AKRESULT@@AEAV?$AkArray@_K_KU?$AkArrayAllocatorNoAlign@U_ArrayPoolDefault@@@@$0CA@U?$AkAssignmentMovePolicy@_K@@@@@Z
                        */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  AVar1 = FUN_14314bd40(g_pRegistryMgr,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar1;
}



// FUNCTION 143122560 GetAuxAssocs body=39 status=ok
// SIG undefined GetAuxAssocs(void)

longlong CAkConnectedListeners::GetAuxAssocs(longlong param_1)

{
  while (*(char *)(param_1 + 0xb9) == '\0') {
    param_1 = GetDefault();
  }
  return param_1 + 0x60;
}



// FUNCTION 143122590 GetCustomPropertyValue body=146 status=ok
// SIG AKRESULT GetCustomPropertyValue(ulong param_1, ulong param_2, long * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetCustomPropertyValue(unsigned long,unsigned
   long,long & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetCustomPropertyValue(ulong param_1,ulong param_2,long *param_3)

{
  longlong *plVar1;
  long *plVar2;
  AKRESULT AVar3;
  
                    /* 0x3122590  141
                       ?GetCustomPropertyValue@Query@SoundEngine@AK@@YA?AW4AKRESULT@@KKAEAJ@Z
                       0x3122590  142
                       ?GetCustomPropertyValue@Query@SoundEngine@AK@@YA?AW4AKRESULT@@KKAEAM@Z */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  plVar1 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,param_1,0);
  if (plVar1 == (longlong *)0x0) {
    AVar3 = 0xf;
  }
  else {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x1b0))(plVar1,param_2);
    if (plVar2 == (long *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1);
      AVar3 = 3;
    }
    else {
      *param_3 = *plVar2;
      (**(code **)(*plVar1 + 0x10))();
      AVar3 = 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar3;
}



// FUNCTION 143122630 GetDefault body=251 status=ok
// SIG undefined GetDefault(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * CAkConnectedListeners::GetDefault(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (DAT_146b51f28 == (undefined8 *)0x0) {
    puVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0xc0);
    DAT_146b51f28 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_145ac68b8;
      puVar2[3] = DAT_146b50848;
      puVar2[2] = 0;
      puVar1 = puVar2;
      if (DAT_146b50850 != (undefined8 *)0x0) {
        DAT_146b50848[2] = puVar2;
        puVar1 = DAT_146b50850;
      }
      DAT_146b50850 = puVar1;
      _DAT_146b50840 = _DAT_146b50840 + 1;
      DAT_146b50848 = puVar2;
      *puVar2 = &PTR__scalar_deleting_destructor__145ac68c8;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0x15] = 0;
      puVar2[0x16] = 0;
      *(undefined2 *)(puVar2 + 0x17) = 0;
      DAT_146b51f28 = puVar2;
    }
    if (DAT_146b51f28 != (undefined8 *)0x0) {
      *(undefined1 *)(DAT_146b51f28 + 0x17) = 1;
      *(undefined1 *)((longlong)DAT_146b51f28 + 0xb9) = 1;
      return DAT_146b51f28;
    }
    DAT_146b51f28 = (undefined8 *)0x0;
  }
  return DAT_146b51f28;
}



// FUNCTION 143122730 GetEventIDFromPlayingID body=21 status=ok
// SIG ulong GetEventIDFromPlayingID(ulong param_1)

/* unsigned long __cdecl AK::SoundEngine::Query::GetEventIDFromPlayingID(unsigned long) */

ulong __cdecl AK::SoundEngine::Query::GetEventIDFromPlayingID(ulong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  ulong uVar3;
  
                    /* 0x3122730  157  ?GetEventIDFromPlayingID@Query@SoundEngine@AK@@YAKK@Z */
  plVar2 = DAT_146b50b00;
  if (DAT_146b50b00 == (longlong *)0x0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50b00 + 3));
  if (*(uint *)(plVar2 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*plVar2 + ((ulonglong)param_1 % (ulonglong)*(uint *)(plVar2 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(ulong *)(lVar1 + 0x4c) == param_1) {
        if (lVar1 != 0) {
          uVar3 = *(ulong *)(lVar1 + 0x28);
          goto LAB_143151387;
        }
        break;
      }
    }
  }
  uVar3 = 0;
LAB_143151387:
  LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 3));
  return uVar3;
}



// FUNCTION 143122750 GetGameObjectAuxSendValues body=407 status=ok
// SIG AKRESULT GetGameObjectAuxSendValues(__uint64 param_1, AkAuxSendValue * param_2, ulong * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetGameObjectAuxSendValues(unsigned __int64,struct
   AkAuxSendValue * __ptr64,unsigned long & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetGameObjectAuxSendValues
          (__uint64 param_1,AkAuxSendValue *param_2,ulong *param_3)

{
  CAkRegisteredObj *pCVar1;
  undefined8 *puVar2;
  long lVar3;
  CAkRegisteredObj *pCVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  void *local_28;
  ulonglong local_20;
  
                    /* 0x3122750  161
                       ?GetGameObjectAuxSendValues@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_KPEAUAkAuxSendValue@@AEAK@Z
                        */
  if ((*param_3 != 0) && (param_2 != (AkAuxSendValue *)0x0)) {
    local_28 = (void *)0x0;
    local_20 = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
    pCVar4 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,param_1);
    if (pCVar4 == (CAkRegisteredObj *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
      return 0xf;
    }
    lVar5 = CAkRegisteredObj::GetConnectedListeners(pCVar4);
    if (*(char *)(lVar5 + 0xb8) == '\0') {
      uVar7 = CAkConnectedListeners::GetDefault();
      lVar6 = CAkConnectedListeners::GetUserAssocs(uVar7);
    }
    else {
      lVar6 = lVar5 + 0x20;
    }
    if (*(char *)(lVar5 + 0xb9) == '\0') {
      uVar7 = CAkConnectedListeners::GetDefault();
      lVar5 = CAkConnectedListeners::GetAuxAssocs(uVar7);
    }
    else {
      lVar5 = lVar5 + 0x60;
    }
    FUN_1431707d0(lVar5,&local_28,0x3f800000,0,0,lVar6 + 0x28);
    pCVar1 = pCVar4 + 0x50;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    lVar3 = g_DefaultPoolId;
    if (*(int *)pCVar1 == 0) {
      (*(code *)**(undefined8 **)pCVar4)(pCVar4,0);
      MemoryMgr::Free(lVar3,pCVar4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
    uVar8 = (uint)local_20;
    if (*param_3 < (uint)local_20) {
      uVar8 = *param_3;
    }
    *param_3 = uVar8;
    uVar9 = 0;
    if (uVar8 != 0) {
      do {
        uVar8 = (int)uVar9 + 1;
        puVar2 = (undefined8 *)(uVar9 * 0x20 + (longlong)local_28);
        uVar7 = puVar2[1];
        *(undefined8 *)(param_2 + uVar9 * 0x10) = *puVar2;
        *(undefined8 *)(param_2 + uVar9 * 0x10 + 8) = uVar7;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < *param_3);
    }
    if (local_28 != (void *)0x0) {
      local_20 = local_20 & 0xffffffff00000000;
      MemoryMgr::Free(g_DefaultPoolId,local_28);
    }
    return 1;
  }
  return 0x1f;
}



// FUNCTION 1431228f0 GetGameObjectDryLevelValue body=237 status=ok
// SIG AKRESULT GetGameObjectDryLevelValue(__uint64 param_1, __uint64 param_2, float * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetGameObjectDryLevelValue(unsigned
   __int64,unsigned __int64,float & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetGameObjectDryLevelValue(__uint64 param_1,__uint64 param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  AKRESULT AVar4;
  float fVar5;
  __uint64 local_18;
  undefined4 uStack_10;
  
                    /* 0x31228f0  162
                       ?GetGameObjectDryLevelValue@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_K0AEAM@Z
                        */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  if (*(uint *)(g_pRegistryMgr + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(g_pRegistryMgr + 0x28) +
                   ((param_1 & 0xffffffff) % (ulonglong)*(uint *)(g_pRegistryMgr + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_1) {
        if (((puVar1 + 2 != (longlong *)0x0) && (lVar3 = puVar1[2], 1 < *(uint *)(lVar3 + 0x40))) &&
           (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x38) + 8), lVar3 != 0)) {
          uStack_10 = 0;
          local_18 = param_2;
          if (*(char *)(lVar3 + 0xb8) == '\0') {
            uVar2 = CAkConnectedListeners::GetDefault();
            lVar3 = CAkConnectedListeners::GetUserAssocs(uVar2);
          }
          else {
            lVar3 = lVar3 + 0x20;
          }
          fVar5 = (float)CAkLstnrAssocs::GetGain(lVar3,&local_18);
          *param_3 = fVar5;
          AVar4 = 1;
          goto LAB_143122953;
        }
        break;
      }
    }
  }
  AVar4 = 0xf;
LAB_143122953:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar4;
}



// FUNCTION 1431229e0 GetGameObjectFromPlayingID body=26 status=ok
// SIG __uint64 GetGameObjectFromPlayingID(ulong param_1)

/* unsigned __int64 __cdecl AK::SoundEngine::Query::GetGameObjectFromPlayingID(unsigned long) */

__uint64 __cdecl AK::SoundEngine::Query::GetGameObjectFromPlayingID(ulong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  __uint64 _Var3;
  
                    /* 0x31229e0  163  ?GetGameObjectFromPlayingID@Query@SoundEngine@AK@@YA_KK@Z */
  plVar2 = DAT_146b50b00;
  if (DAT_146b50b00 == (longlong *)0x0) {
    return 0xffffffffffffffff;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(DAT_146b50b00 + 3));
  if (*(uint *)(plVar2 + 1) != 0) {
    for (lVar1 = *(longlong *)
                  (*plVar2 + ((ulonglong)param_1 % (ulonglong)*(uint *)(plVar2 + 1)) * 8);
        lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
      if (*(ulong *)(lVar1 + 0x4c) == param_1) {
        if (lVar1 != 0) {
          _Var3 = *(__uint64 *)(lVar1 + 0x30);
          goto LAB_1431513fc;
        }
        break;
      }
    }
  }
  _Var3 = 0xffffffffffffffff;
LAB_1431513fc:
  LeaveCriticalSection((LPCRITICAL_SECTION)(plVar2 + 3));
  return _Var3;
}



// FUNCTION 143122a00 GetIsGameObjectActive body=62 status=ok
// SIG bool GetIsGameObjectActive(__uint64 param_1)

/* bool __cdecl AK::SoundEngine::Query::GetIsGameObjectActive(unsigned __int64) */

bool __cdecl AK::SoundEngine::Query::GetIsGameObjectActive(__uint64 param_1)

{
  undefined1 uVar1;
  
                    /* 0x3122a00  171  ?GetIsGameObjectActive@Query@SoundEngine@AK@@YA_N_K@Z */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  uVar1 = CAkRegistryMgr::IsGameObjectActive(g_pRegistryMgr,param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return (bool)uVar1;
}



// FUNCTION 143122a40 GetListenerPosition body=169 status=ok
// SIG AKRESULT GetListenerPosition(__uint64 param_1, AkTransform * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetListenerPosition(unsigned __int64,class
   AkTransform & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetListenerPosition(__uint64 param_1,AkTransform *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  AKRESULT AVar7;
  
                    /* 0x3122a40  173
                       ?GetListenerPosition@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_KAEAVAkTransform@@@Z
                        */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  if (*(uint *)(g_pRegistryMgr + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(g_pRegistryMgr + 0x28) +
                   ((param_1 & 0xffffffff) % (ulonglong)*(uint *)(g_pRegistryMgr + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_1) {
        if (((puVar1 + 2 != (longlong *)0x0) && (lVar2 = puVar1[2], 2 < *(uint *)(lVar2 + 0x40))) &&
           (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x10), lVar2 != 0)) {
          uVar3 = *(undefined4 *)(lVar2 + 100);
          uVar4 = *(undefined4 *)(lVar2 + 0x68);
          uVar5 = *(undefined4 *)(lVar2 + 0x6c);
          AVar7 = 1;
          *(undefined4 *)param_2 = *(undefined4 *)(lVar2 + 0x60);
          *(undefined4 *)(param_2 + 4) = uVar3;
          *(undefined4 *)(param_2 + 8) = uVar4;
          *(undefined4 *)(param_2 + 0xc) = uVar5;
          uVar6 = *(undefined8 *)(lVar2 + 0x78);
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar2 + 0x70);
          *(undefined8 *)(param_2 + 0x18) = uVar6;
          *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar2 + 0x80);
          goto LAB_143122a94;
        }
        break;
      }
    }
  }
  AVar7 = 2;
LAB_143122a94:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar7;
}



// FUNCTION 143122af0 GetListenerSpatialization body=98 status=ok
// SIG AKRESULT GetListenerSpatialization(ulong param_1, bool * param_2, float * * param_3, AkChannelConfig * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetListenerSpatialization(unsigned long,bool &
   __ptr64,float * __ptr64 & __ptr64,struct AkChannelConfig & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetListenerSpatialization
          (ulong param_1,bool *param_2,float **param_3,AkChannelConfig *param_4)

{
  AKRESULT AVar1;
  
                    /* 0x3122af0  174
                       ?GetListenerSpatialization@Query@SoundEngine@AK@@YA?AW4AKRESULT@@KAEA_NAEAPEAMAEAUAkChannelConfig@@@Z
                        */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  AVar1 = CAkListener::GetListenerSpatialization(param_1,param_2,param_3,param_4);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar1;
}



// FUNCTION 143122b60 GetListeners body=227 status=ok
// SIG AKRESULT GetListeners(__uint64 param_1, __uint64 * param_2, ulong * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetListeners(unsigned __int64,unsigned __int64 *
   __ptr64,unsigned long & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetListeners(__uint64 param_1,__uint64 *param_2,ulong *param_3)

{
  CAkRegisteredObj *pCVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  CAkRegisteredObj *pCVar5;
  longlong lVar6;
  ulonglong uVar7;
  AKRESULT AVar8;
  
                    /* 0x3122b60  175
                       ?GetListeners@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_KPEA_KAEAK@Z */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  pCVar5 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,param_1);
  if (pCVar5 == (CAkRegisteredObj *)0x0) {
    AVar8 = 0xf;
  }
  else {
    uVar2 = *param_3;
    lVar6 = CAkRegisteredObj::GetListeners(pCVar5);
    uVar7 = 0;
    *param_3 = *(ulong *)(lVar6 + 0x10);
    if (param_2 != (__uint64 *)0x0) {
      while( true ) {
        uVar4 = *param_3;
        if (uVar2 <= *param_3) {
          uVar4 = uVar2;
        }
        if (uVar4 <= (uint)uVar7) break;
        lVar6 = CAkRegisteredObj::GetListeners(pCVar5);
        param_2[uVar7] = *(__uint64 *)(uVar7 * 8 + *(longlong *)(lVar6 + 8));
        uVar7 = (ulonglong)((uint)uVar7 + 1);
      }
    }
    pCVar1 = pCVar5 + 0x50;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    lVar3 = g_DefaultPoolId;
    if (*(int *)pCVar1 == 0) {
      (*(code *)**(undefined8 **)pCVar5)(pCVar5,0);
      MemoryMgr::Free(lVar3,pCVar5);
    }
    AVar8 = (uVar2 < *param_3) + 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar8;
}



// FUNCTION 143122c50 GetMaxRadius body=53 status=ok
// SIG AKRESULT GetMaxRadius(AkArray<AK::SoundEngine::Query::GameObjDst,AK::SoundEngine::Query::GameObjDst_const&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,32,AkAssignmentMovePolicy<AK::SoundEngine::Query::GameObjDst>_> * param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetMaxRadius(class AkArray<struct
   AK::SoundEngine::Query::GameObjDst,struct AK::SoundEngine::Query::GameObjDst const &
   __ptr64,struct AkArrayAllocatorNoAlign<struct _ArrayPoolDefault>,32,struct
   AkAssignmentMovePolicy<struct AK::SoundEngine::Query::GameObjDst> > & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetMaxRadius
          (AkArray<AK::SoundEngine::Query::GameObjDst,AK::SoundEngine::Query::GameObjDst_const&___ptr64,AkArrayAllocatorNoAlign<_ArrayPoolDefault>,32,AkAssignmentMovePolicy<AK::SoundEngine::Query::GameObjDst>_>
           *param_1)

{
  AKRESULT AVar1;
  
                    /* 0x3122c50  177
                       ?GetMaxRadius@Query@SoundEngine@AK@@YA?AW4AKRESULT@@AEAV?$AkArray@UGameObjDst@Query@SoundEngine@AK@@AEBU1234@U?$AkArrayAllocatorNoAlign@U_ArrayPoolDefault@@@@$0CA@U?$AkAssignmentMovePolicy@UGameObjDst@Query@SoundEngine@AK@@@@@@@Z
                        */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  AVar1 = FUN_143160170(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar1;
}



// FUNCTION 143122c90 GetMaxRadius body=65 status=ok
// SIG float GetMaxRadius(__uint64 param_1)

/* float __cdecl AK::SoundEngine::Query::GetMaxRadius(unsigned __int64) */

float __cdecl AK::SoundEngine::Query::GetMaxRadius(__uint64 param_1)

{
  float fVar1;
  
                    /* 0x3122c90  178  ?GetMaxRadius@Query@SoundEngine@AK@@YAM_K@Z */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  fVar1 = (float)FUN_143160560(param_1);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return fVar1;
}



// FUNCTION 143122ce0 GetObjectObstructionAndOcclusion body=415 status=ok
// SIG AKRESULT GetObjectObstructionAndOcclusion(__uint64 param_1, __uint64 param_2, float * param_3, float * param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetObjectObstructionAndOcclusion(unsigned
   __int64,unsigned __int64,float & __ptr64,float & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetObjectObstructionAndOcclusion
          (__uint64 param_1,__uint64 param_2,float *param_3,float *param_4)

{
  __uint64 *p_Var1;
  AKRESULT AVar2;
  undefined8 *puVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  __uint64 *p_Var6;
  longlong lVar7;
  float *pfVar8;
  AKRESULT AVar9;
  __uint64 *p_Var10;
  float local_18;
  float local_14;
  
                    /* 0x3122ce0  182
                       ?GetObjectObstructionAndOcclusion@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_K0AEAM1@Z
                        */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  if (*(uint *)(g_pRegistryMgr + 0x30) != 0) {
    for (puVar3 = *(undefined8 **)
                   (*(longlong *)(g_pRegistryMgr + 0x28) +
                   ((param_1 & 0xffffffff) % (ulonglong)*(uint *)(g_pRegistryMgr + 0x30)) * 8);
        puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
      if (puVar3[1] == param_1) {
        if (((puVar3 + 2 != (longlong *)0x0) && (lVar7 = puVar3[2], *(int *)(lVar7 + 0x40) != 0)) &&
           (lVar7 = **(longlong **)(lVar7 + 0x38), lVar7 != 0)) {
          p_Var6 = *(__uint64 **)(lVar7 + 0x28);
          local_18 = 0.0;
          local_14 = 0.0;
          p_Var1 = p_Var6 + (ulonglong)*(uint *)(lVar7 + 0x30) * 3;
          for (; (p_Var6 != p_Var1 && (*p_Var6 != param_2)); p_Var6 = p_Var6 + 3) {
          }
          p_Var10 = p_Var6 + 1;
          if (p_Var6 == p_Var1) {
            p_Var10 = (__uint64 *)0x0;
          }
          AVar9 = 1;
          if ((p_Var10 != (__uint64 *)0x0) && (AVar2 = *(AKRESULT *)(p_Var10 + 1), AVar2 != 0)) {
            if (1 < AVar2) {
              AVar2 = AVar9;
            }
            if (AVar2 == 0) {
              _Var4 = *p_Var10;
              lVar7 = 1;
              pfVar8 = &local_18;
              do {
                uVar5 = *(undefined8 *)(_Var4 + 0xffffffff8);
                *(undefined8 *)pfVar8 = *(undefined8 *)(_Var4 + 0xffffffff0);
                *(undefined8 *)(pfVar8 + 2) = uVar5;
                lVar7 = lVar7 + -1;
                pfVar8 = pfVar8 + 4;
              } while (lVar7 != 0);
              *param_3 = local_14;
              *param_4 = local_18;
              goto LAB_143122d4a;
            }
            ::_guard_xfg_dispatch_icall_nop(&local_18,(void *)*p_Var10,(ulonglong)AVar2 << 4);
          }
          *param_3 = local_14;
          *param_4 = local_18;
          goto LAB_143122d4a;
        }
        break;
      }
    }
  }
  AVar9 = 0xf;
LAB_143122d4a:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar9;
}



// FUNCTION 143122e90 GetPlayingIDsFromGameObject body=35 status=ok
// SIG AKRESULT GetPlayingIDsFromGameObject(__uint64 param_1, ulong * param_2, ulong * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetPlayingIDsFromGameObject(unsigned
   __int64,unsigned long & __ptr64,unsigned long * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetPlayingIDsFromGameObject(__uint64 param_1,ulong *param_2,ulong *param_3)

{
  AKRESULT AVar1;
  
                    /* 0x3122e90  188
                       ?GetPlayingIDsFromGameObject@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_KAEAKPEAK@Z
                        */
  if (DAT_146b50b00 != 0) {
    AVar1 = CAkPlayingMgr::GetPlayingIDsFromGameObject(DAT_146b50b00,param_1,param_2,param_3);
    return AVar1;
  }
  return 2;
}



// FUNCTION 143122ec0 GetPosition body=308 status=ok
// SIG AKRESULT GetPosition(__uint64 param_1, AkTransform * param_2)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetPosition(unsigned __int64,class AkTransform &
   __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetPosition(__uint64 param_1,AkTransform *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  AKRESULT AVar8;
  
                    /* 0x3122ec0  196
                       ?GetPosition@Query@SoundEngine@AK@@YA?AW4AKRESULT@@_KAEAVAkTransform@@@Z */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  if (*(uint *)(g_pRegistryMgr + 0x30) != 0) {
    for (puVar1 = *(undefined8 **)
                   (*(longlong *)(g_pRegistryMgr + 0x28) +
                   ((param_1 & 0xffffffff) % (ulonglong)*(uint *)(g_pRegistryMgr + 0x30)) * 8);
        puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      if (puVar1[1] == param_1) {
        if (((puVar1 + 2 != (longlong *)0x0) && (lVar2 = puVar1[2], *(int *)(lVar2 + 0x40) != 0)) &&
           (lVar2 = **(longlong **)(lVar2 + 0x38), lVar2 != 0)) {
          puVar7 = *(undefined4 **)(lVar2 + 0x20);
          if (puVar7 == (undefined4 *)0x0) {
            _DAT_146b50cf0 = 0;
            DAT_146b50cf8 = 0;
            _DAT_146b50cd8 = 0;
            _DAT_146b50ce0 = 0x3f800000;
            _DAT_146b50ce4 = 0x3f80000000000000;
            _DAT_146b50cec = 0;
            puVar7 = (undefined4 *)&DAT_146b50cd8;
            _DAT_146b50d00 = 0x3f800000;
            _DAT_146b50d04 = 0;
            _DAT_146b50cfc = 0x3ff3f;
          }
          uVar3 = puVar7[1];
          uVar4 = puVar7[2];
          uVar5 = puVar7[3];
          AVar8 = 1;
          *(undefined4 *)param_2 = *puVar7;
          *(undefined4 *)(param_2 + 4) = uVar3;
          *(undefined4 *)(param_2 + 8) = uVar4;
          *(undefined4 *)(param_2 + 0xc) = uVar5;
          uVar6 = *(undefined8 *)(puVar7 + 6);
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(puVar7 + 4);
          *(undefined8 *)(param_2 + 0x18) = uVar6;
          *(undefined4 *)(param_2 + 0x20) = puVar7[8];
          goto LAB_143122f14;
        }
        break;
      }
    }
  }
  AVar8 = 0xf;
LAB_143122f14:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar8;
}



// FUNCTION 143123000 GetPositioningInfo body=116 status=ok
// SIG AKRESULT GetPositioningInfo(ulong param_1, AkPositioningInfo * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetPositioningInfo(unsigned long,struct
   AkPositioningInfo & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetPositioningInfo(ulong param_1,AkPositioningInfo *param_2)

{
  longlong *plVar1;
  AKRESULT AVar2;
  
                    /* 0x3123000  197
                       ?GetPositioningInfo@Query@SoundEngine@AK@@YA?AW4AKRESULT@@KAEAUAkPositioningInfo@@@Z
                        */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  plVar1 = (longlong *)CAkAudioLibIndex::GetNodePtrAndAddRef(DAT_146b50af8,param_1,0);
  if (plVar1 == (longlong *)0x0) {
    AVar2 = 0xf;
  }
  else {
    AVar2 = FUN_143175e70(plVar1,param_2);
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar2;
}



// FUNCTION 143123080 GetRTPCValue body=411 status=ok
// SIG AKRESULT GetRTPCValue(ulong param_1, __uint64 param_2, ulong param_3, float * param_4, RTPCValue_type * param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetRTPCValue(unsigned long,unsigned
   __int64,unsigned long,float & __ptr64,enum AK::SoundEngine::Query::RTPCValue_type & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetRTPCValue
          (ulong param_1,__uint64 param_2,ulong param_3,float *param_4,RTPCValue_type *param_5)

{
  CAkRegisteredObj *pCVar1;
  ulong *puVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  CAkRegisteredObj *pCVar6;
  ulong uVar7;
  ulong uVar8;
  float fVar9;
  undefined1 local_58 [8];
  CAkRegisteredObj *local_50;
  ulong local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
                    /* 0x3123080  198
                       ?GetRTPCValue@Query@SoundEngine@AK@@YA?AW4AKRESULT@@K_KKAEAMAEAW4RTPCValue_type@123@@Z
                        */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  puVar2 = (ulong *)CONCAT71(param_5._1_7_,(char)param_5);
  uVar5 = *puVar2;
  uVar8 = 0;
  uVar7 = uVar8;
  if (uVar5 == 1) {
    param_2 = 0xffffffffffffffff;
LAB_143123100:
    pCVar6 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,param_2);
    local_40 = 0;
    local_38 = 0xff;
    local_30 = 0xff;
    local_28 = 0;
    local_50 = pCVar6;
    local_48 = uVar7;
    cVar4 = FUN_143121c20(g_pRTPCMgr,param_1,0x39,2,&local_50,param_4,local_58);
    if (local_48 == 0) {
      *puVar2 = (local_50 != (CAkRegisteredObj *)0x0) + 1;
    }
    else {
      *puVar2 = 3;
    }
    if (pCVar6 != (CAkRegisteredObj *)0x0) {
      pCVar1 = pCVar6 + 0x50;
      *(int *)pCVar1 = *(int *)pCVar1 + -1;
      lVar3 = g_DefaultPoolId;
      if (*(int *)pCVar1 == 0) {
        (*(code *)**(undefined8 **)pCVar6)(pCVar6,0);
        MemoryMgr::Free(lVar3,pCVar6);
      }
    }
    if (cVar4 != '\0') goto LAB_1431231eb;
  }
  else {
    if (uVar5 == 2) goto LAB_143123100;
    if (uVar5 == 3) {
      uVar7 = param_3;
      if ((param_3 != 0) && (param_2 == 0xffffffffffffffff)) {
        param_2 = CAkPlayingMgr::GetGameObjectFromPlayingID(DAT_146b50b00,param_3);
      }
      goto LAB_143123100;
    }
  }
  fVar9 = (float)CAkRTPCMgr::GetDefaultValue(g_pRTPCMgr,param_1,&param_5);
  *param_4 = fVar9;
  uVar5 = 4;
  if ((char)param_5 != '\0') {
    uVar5 = uVar8;
  }
  *puVar2 = uVar5;
LAB_1431231eb:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return 1;
}



// FUNCTION 143123220 GetRTPCValue body=83 status=ok
// SIG AKRESULT GetRTPCValue(char * param_1, __uint64 param_2, ulong param_3, float * param_4, RTPCValue_type * param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetRTPCValue(char const * __ptr64,unsigned
   __int64,unsigned long,float & __ptr64,enum AK::SoundEngine::Query::RTPCValue_type & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetRTPCValue
          (char *param_1,__uint64 param_2,ulong param_3,float *param_4,RTPCValue_type *param_5)

{
  ulong uVar1;
  AKRESULT AVar2;
  
                    /* 0x3123220  199
                       ?GetRTPCValue@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD_KKAEAMAEAW4RTPCValue_type@123@@Z
                        */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 == 0) {
    return 0xf;
  }
  AVar2 = GetRTPCValue(uVar1,param_2,param_3,param_4,param_5);
  return AVar2;
}



// FUNCTION 143123280 GetRTPCValue body=83 status=ok
// SIG AKRESULT GetRTPCValue(wchar_t * param_1, __uint64 param_2, ulong param_3, float * param_4, RTPCValue_type * param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetRTPCValue(wchar_t const * __ptr64,unsigned
   __int64,unsigned long,float & __ptr64,enum AK::SoundEngine::Query::RTPCValue_type & __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::GetRTPCValue
          (wchar_t *param_1,__uint64 param_2,ulong param_3,float *param_4,RTPCValue_type *param_5)

{
  ulong uVar1;
  AKRESULT AVar2;
  
                    /* 0x3123280  200
                       ?GetRTPCValue@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W_KKAEAMAEAW4RTPCValue_type@123@@Z
                        */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 == 0) {
    return 0xf;
  }
  AVar2 = GetRTPCValue(uVar1,param_2,param_3,param_4,param_5);
  return AVar2;
}



// FUNCTION 1431232e0 GetState body=73 status=ok
// SIG AKRESULT GetState(ulong param_1, ulong * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetState(unsigned long,unsigned long & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetState(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  
                    /* 0x31232e0  209  ?GetState@Query@SoundEngine@AK@@YA?AW4AKRESULT@@KAEAK@Z */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  uVar1 = CAkStateMgr::GetState(DAT_146b50ae8,param_1);
  *param_2 = uVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return 1;
}



// FUNCTION 143123330 GetState body=78 status=ok
// SIG AKRESULT GetState(char * param_1, ulong * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetState(char const * __ptr64,unsigned long &
   __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetState(char *param_1,ulong *param_2)

{
  ulong uVar1;
  
                    /* 0x3123330  210  ?GetState@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDAEAK@Z */
  uVar1 = GetIDFromString(param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  uVar1 = CAkStateMgr::GetState(DAT_146b50ae8,uVar1);
  *param_2 = uVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return 1;
}



// FUNCTION 143123380 GetState body=78 status=ok
// SIG AKRESULT GetState(wchar_t * param_1, ulong * param_2)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetState(wchar_t const * __ptr64,unsigned long &
   __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetState(wchar_t *param_1,ulong *param_2)

{
  ulong uVar1;
  
                    /* 0x3123380  211  ?GetState@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WAEAK@Z
                        */
  uVar1 = GetIDFromString(param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  uVar1 = CAkStateMgr::GetState(DAT_146b50ae8,uVar1);
  *param_2 = uVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return 1;
}



// FUNCTION 1431233d0 GetSwitch body=193 status=ok
// SIG AKRESULT GetSwitch(ulong param_1, __uint64 param_2, ulong * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetSwitch(unsigned long,unsigned __int64,unsigned
   long & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetSwitch(ulong param_1,__uint64 param_2,ulong *param_3)

{
  CAkRegisteredObj *pCVar1;
  long lVar2;
  ulong uVar3;
  CAkRegisteredObj *pCVar4;
  AKRESULT AVar5;
  CAkRegisteredObj *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
                    /* 0x31233d0  212  ?GetSwitch@Query@SoundEngine@AK@@YA?AW4AKRESULT@@K_KAEAK@Z */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  pCVar4 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,param_2);
  if (pCVar4 == (CAkRegisteredObj *)0x0) {
    AVar5 = 0xf;
  }
  else {
    local_20 = 0xff;
    local_30 = 0;
    local_28 = 0;
    local_10 = 0;
    local_18 = 0xff;
    local_38 = pCVar4;
    uVar3 = FUN_14314a760(g_pSwitchMgr,param_1,&local_38);
    *param_3 = uVar3;
    pCVar1 = pCVar4 + 0x50;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    lVar2 = g_DefaultPoolId;
    if (*(int *)pCVar1 == 0) {
      (*(code *)**(undefined8 **)pCVar4)(pCVar4,0);
      MemoryMgr::Free(lVar2,pCVar4);
    }
    AVar5 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar5;
}



// FUNCTION 1431234a0 GetSwitch body=64 status=ok
// SIG AKRESULT GetSwitch(char * param_1, __uint64 param_2, ulong * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetSwitch(char const * __ptr64,unsigned
   __int64,unsigned long & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetSwitch(char *param_1,__uint64 param_2,ulong *param_3)

{
  ulong uVar1;
  AKRESULT AVar2;
  
                    /* 0x31234a0  213  ?GetSwitch@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEBD_KAEAK@Z
                        */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 == 0) {
    return 0xf;
  }
  AVar2 = GetSwitch(uVar1,param_2,param_3);
  return AVar2;
}



// FUNCTION 1431234e0 GetSwitch body=64 status=ok
// SIG AKRESULT GetSwitch(wchar_t * param_1, __uint64 param_2, ulong * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::GetSwitch(wchar_t const * __ptr64,unsigned
   __int64,unsigned long & __ptr64) */

AKRESULT __cdecl AK::SoundEngine::Query::GetSwitch(wchar_t *param_1,__uint64 param_2,ulong *param_3)

{
  ulong uVar1;
  AKRESULT AVar2;
  
                    /* 0x31234e0  214
                       ?GetSwitch@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_W_KAEAK@Z */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 == 0) {
    return 0xf;
  }
  AVar2 = GetSwitch(uVar1,param_2,param_3);
  return AVar2;
}



// FUNCTION 143123520 GetUserAssocs body=39 status=ok
// SIG undefined GetUserAssocs(void)

longlong CAkConnectedListeners::GetUserAssocs(longlong param_1)

{
  while (*(char *)(param_1 + 0xb8) == '\0') {
    param_1 = GetDefault();
  }
  return param_1 + 0x20;
}



// FUNCTION 143123550 QueryAudioObjectIDs body=242 status=ok
// SIG AKRESULT QueryAudioObjectIDs(ulong param_1, ulong * param_2, AkObjectInfo * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::QueryAudioObjectIDs(unsigned long,unsigned long &
   __ptr64,struct AkObjectInfo * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::QueryAudioObjectIDs(ulong param_1,ulong *param_2,AkObjectInfo *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  AKRESULT AVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  
                    /* 0x3123550  339
                       ?QueryAudioObjectIDs@Query@SoundEngine@AK@@YA?AW4AKRESULT@@KAEAKPEAUAkObjectInfo@@@Z
                        */
  if ((*param_2 != 0) && (param_3 == (AkObjectInfo *)0x0)) {
    return 0x1f;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  lVar3 = DAT_146b50af8;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0xc0);
  EnterCriticalSection(lpCriticalSection);
  uVar1 = *(uint *)(lVar3 + 0xf0);
  if (uVar1 != 0) {
    for (plVar2 = *(longlong **)
                   (*(longlong *)(lVar3 + 0xe8) + ((ulonglong)param_1 % (ulonglong)uVar1) * 8);
        plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[1]) {
      if (*(ulong *)(plVar2 + 2) == param_1) {
        if (plVar2 != (longlong *)0x0) {
          *(int *)((longlong)plVar2 + 0x14) = *(int *)((longlong)plVar2 + 0x14) + 1;
          LeaveCriticalSection(lpCriticalSection);
          AVar4 = CAkEvent::QueryAudioObjectIDs(plVar2,param_2,param_3);
          (**(code **)(*plVar2 + 0x10))(plVar2);
          goto LAB_1431235ec;
        }
        break;
      }
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  AVar4 = 0xf;
LAB_1431235ec:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146b50b88);
  return AVar4;
}



// FUNCTION 143123650 QueryAudioObjectIDs body=64 status=ok
// SIG AKRESULT QueryAudioObjectIDs(char * param_1, ulong * param_2, AkObjectInfo * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::QueryAudioObjectIDs(char const * __ptr64,unsigned
   long & __ptr64,struct AkObjectInfo * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::QueryAudioObjectIDs(char *param_1,ulong *param_2,AkObjectInfo *param_3)

{
  ulong uVar1;
  AKRESULT AVar2;
  
                    /* 0x3123650  340
                       ?QueryAudioObjectIDs@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEBDAEAKPEAUAkObjectInfo@@@Z
                        */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 == 0) {
    return 0xf;
  }
  AVar2 = QueryAudioObjectIDs(uVar1,param_2,param_3);
  return AVar2;
}



// FUNCTION 143123690 QueryAudioObjectIDs body=64 status=ok
// SIG AKRESULT QueryAudioObjectIDs(wchar_t * param_1, ulong * param_2, AkObjectInfo * param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::Query::QueryAudioObjectIDs(wchar_t const *
   __ptr64,unsigned long & __ptr64,struct AkObjectInfo * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::Query::QueryAudioObjectIDs(wchar_t *param_1,ulong *param_2,AkObjectInfo *param_3)

{
  ulong uVar1;
  AKRESULT AVar2;
  
                    /* 0x3123690  341
                       ?QueryAudioObjectIDs@Query@SoundEngine@AK@@YA?AW4AKRESULT@@PEB_WAEAKPEAUAkObjectInfo@@@Z
                        */
  uVar1 = GetIDFromString(param_1);
  if (uVar1 == 0) {
    return 0xf;
  }
  AVar2 = QueryAudioObjectIDs(uVar1,param_2,param_3);
  return AVar2;
}



// FUNCTION 1431236d0 SetAudioBufferSettings body=137 status=ok
// SIG undefined SetAudioBufferSettings(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AkAudioLibSettings::SetAudioBufferSettings(uint param_1,uint param_2)

{
  DAT_1467bdcac = param_1;
  _DAT_1467bdcb8 = param_2;
  DAT_1467bdca8 = (int)(longlong)((1000.0 / (float)param_1) * (float)param_2);
  DAT_1467bdcb0 = (int)(longlong)((((float)param_2 * 1000.0) / (float)param_1) * 0.25);
  DAT_1467bdcb4 = (param_1 << 7) / 48000 + 3 & 0xfffffffc;
  DAT_1467bdcbc = (short)(((DAT_1467bdcb4 >> 1) + param_2) / DAT_1467bdcb4);
  return;
}



// FUNCTION 143123760 ApplyGlobalSettings body=167 status=ok
// SIG undefined ApplyGlobalSettings(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkLEngine::ApplyGlobalSettings(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    GetDefaultPlatformInitSettings(&DAT_146b50d20);
    return;
  }
  DAT_146b50d20 = *param_1;
  _DAT_146b50d30 = param_1[2];
  _DAT_146b50d38 = param_1[3];
  _DAT_146b50d40 = param_1[4];
  _DAT_146b50d48 = param_1[5];
  _DAT_146b50d50 = param_1[6];
  _DAT_146b50d58 = param_1[7];
  DAT_146b50d60 = *(ushort *)(param_1 + 8);
  uRam0000000146b50d62 = *(undefined2 *)((longlong)param_1 + 0x42);
  DAT_146b50d64._0_2_ = *(undefined2 *)((longlong)param_1 + 0x44);
  DAT_146b50d64._2_2_ = *(undefined2 *)((longlong)param_1 + 0x46);
  DAT_146b50d68._0_2_ = *(undefined2 *)(param_1 + 9);
  DAT_146b50d68._2_2_ = *(undefined2 *)((longlong)param_1 + 0x4a);
  _DAT_146b50d6c = *(undefined2 *)((longlong)param_1 + 0x4c);
  uRam0000000146b50d6e = *(undefined2 *)((longlong)param_1 + 0x4e);
  DAT_146b50d70 = param_1[10];
  if (DAT_146b50d60 < 2) {
    DAT_146b50d60 = 4;
  }
  _DAT_146b50d28 = param_1[1];
  *param_1 = DAT_146b50d20;
  param_1[1] = param_1[1];
  uVar1 = _DAT_146b50d38;
  param_1[2] = _DAT_146b50d30;
  param_1[3] = uVar1;
  uVar1 = _DAT_146b50d48;
  param_1[4] = _DAT_146b50d40;
  param_1[5] = uVar1;
  uVar1 = _DAT_146b50d58;
  param_1[6] = _DAT_146b50d50;
  param_1[7] = uVar1;
  uVar1 = CONCAT26(uRam0000000146b50d6e,
                   CONCAT24(_DAT_146b50d6c,CONCAT22(DAT_146b50d68._2_2_,(undefined2)DAT_146b50d68)))
  ;
  param_1[8] = CONCAT26(DAT_146b50d64._2_2_,
                        CONCAT24((undefined2)DAT_146b50d64,
                                 CONCAT22(uRam0000000146b50d62,DAT_146b50d60)));
  param_1[9] = uVar1;
  param_1[10] = DAT_146b50d70;
  return;
}



// FUNCTION 143123810 FUN_143123810 body=165 status=ok
// SIG undefined FUN_143123810(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143123810(void)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = DAT_146b50d58 >> 1;
  if (g_LEngineDefaultPoolId == -1) {
    uVar2 = 0x1000000;
    if (0x40 < uVar3) {
      uVar2 = uVar3;
    }
    g_LEngineDefaultPoolId = AK::MemoryMgr::CreatePool((void *)0x0,uVar2,0x40,1,0x10);
    if (g_LEngineDefaultPoolId == -1) {
      return 0x34;
    }
  }
  lVar1 = _DAT_1467be110;
  if (DAT_1467bdcc8 == -1) {
    uVar2 = 0x1000000;
    if (0x40 < uVar3) {
      uVar2 = uVar3;
    }
    DAT_1467bdcc8 = AK::MemoryMgr::CreatePool((void *)0x0,uVar2,0x40,1,0x10);
    lVar1 = DAT_1467bdcc8;
    if (DAT_1467bdcc8 == -1) {
      return 0x34;
    }
  }
  _DAT_1467be110 = lVar1;
  return 1;
}



// FUNCTION 1431238c0 DestroyLEnginePools body=44 status=ok
// SIG undefined DestroyLEnginePools(void)

void CAkLEngine::DestroyLEnginePools(void)

{
  bool bVar1;
  
  bVar1 = AK::MemoryMgr::IsInitialized();
  if ((bVar1) && (g_LEngineDefaultPoolId != -1)) {
    AK::MemoryMgr::DestroyPool(g_LEngineDefaultPoolId);
    g_LEngineDefaultPoolId = -1;
  }
  return;
}



// FUNCTION 1431238f0 FUN_1431238f0 body=19 status=ok
// SIG undefined FUN_1431238f0(void)

void FUN_1431238f0(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[3] = param_1[3] & 0xff;
  *param_1 = 0;
  return;
}



// FUNCTION 143123910 GetDefaultPlatformThreadInitSettings body=59 status=ok
// SIG undefined GetDefaultPlatformThreadInitSettings(void)

void CAkLEngine::GetDefaultPlatformThreadInitSettings(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0x20000;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x20000;
  *(undefined8 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 0x20000;
  *(undefined8 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0x20000;
  *(undefined8 *)(param_1 + 0x2c) = 1;
  return;
}



// FUNCTION 143123950 thunk_FUN_14312a950 body=5 status=ok
// SIG undefined thunk_FUN_14312a950(void)

void thunk_FUN_14312a950(void)

{
  FUN_14312a980(0);
  return;
}



// FUNCTION 143123960 GetPluginCustomGameData body=182 status=ok
// SIG undefined GetPluginCustomGameData(void)

void AkCustomPluginDataStore::GetPluginCustomGameData
               (int param_1,longlong param_2,int param_3,undefined8 *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  
  while( true ) {
    for (piVar1 = DAT_146b50d78;
        (piVar1 != DAT_146b50d78 + (ulonglong)DAT_146b50d80 * 10 &&
        (((*piVar1 != param_1 || (piVar1[4] != param_3)) || (*(longlong *)(piVar1 + 2) != param_2)))
        ); piVar1 = piVar1 + 10) {
    }
    piVar2 = piVar1 + 6;
    if (piVar1 == DAT_146b50d78 + (ulonglong)DAT_146b50d80 * 10) {
      piVar2 = (int *)0x0;
    }
    if (piVar2 != (int *)0x0) break;
    if (param_2 == -1) {
      *param_4 = 0;
      *param_5 = 0;
      return;
    }
    param_2 = -1;
  }
  *param_4 = *(undefined8 *)piVar2;
  *param_5 = piVar2[2];
  return;
}



// FUNCTION 143123a20 FUN_143123a20 body=430 status=ok
// SIG undefined FUN_143123a20(void)

int * FUN_143123a20(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  ulonglong uVar12;
  int *piVar13;
  int local_48;
  int local_38;
  
  piVar6 = (int *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  piVar13 = piVar6 + (ulonglong)uVar3 * 10;
  if (piVar6 != piVar13) {
    local_48 = (int)*param_2;
    local_38 = (int)param_2[2];
    do {
      if (((*piVar6 == local_48) && (piVar6[4] == local_38)) &&
         (*(longlong *)(piVar6 + 2) == param_2[1])) break;
      piVar6 = piVar6 + 10;
    } while (piVar6 != piVar13);
  }
  piVar8 = (int *)0x0;
  piVar11 = piVar6 + 6;
  if (piVar6 == piVar13) {
    piVar11 = piVar8;
  }
  if (piVar11 != (int *)0x0) {
    return piVar11;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar3) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    puVar7 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x28);
    if (puVar7 == (undefined8 *)0x0) {
      return (int *)0x0;
    }
    puVar10 = (undefined8 *)*param_1;
    if ((puVar10 != (undefined8 *)0x0) && (puVar10 != puVar7)) {
      uVar12 = (ulonglong)*(uint *)(param_1 + 1);
      puVar9 = puVar7;
      if (uVar12 != 0) {
        do {
          if (puVar9 != (undefined8 *)0x0) {
            *(undefined4 *)puVar9 = 0;
            puVar9[1] = 0;
            *(undefined4 *)(puVar9 + 2) = 0;
          }
          lVar4 = *param_1;
          puVar10 = (undefined8 *)((longlong)puVar9 + (lVar4 - (longlong)puVar7));
          uVar2 = puVar10[1];
          *puVar9 = *puVar10;
          puVar9[1] = uVar2;
          puVar10 = (undefined8 *)((longlong)puVar9 + lVar4 + (0x10 - (longlong)puVar7));
          uVar2 = puVar10[1];
          puVar9[2] = *puVar10;
          puVar9[3] = uVar2;
          puVar9[4] = *(undefined8 *)((longlong)puVar9 + lVar4 + (0x20 - (longlong)puVar7));
          uVar12 = uVar12 - 1;
          puVar9 = puVar9 + 5;
        } while (uVar12 != 0);
        puVar10 = (undefined8 *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar10);
    }
    *param_1 = (longlong)puVar7;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    piVar13 = piVar8;
    if (uVar1 <= uVar3) goto LAB_143123b98;
  }
  piVar13 = (int *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x28);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  if (piVar13 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar13 = 0;
  piVar13[2] = 0;
  piVar13[3] = 0;
  piVar13[4] = 0;
LAB_143123b98:
  if (piVar13 != (int *)0x0) {
    uVar5 = param_2[1];
    piVar8 = piVar13 + 6;
    uVar2 = param_2[2];
    *(undefined8 *)piVar13 = *param_2;
    *(undefined8 *)(piVar13 + 2) = uVar5;
    *(undefined8 *)(piVar13 + 4) = uVar2;
  }
  return piVar8;
}



// FUNCTION 143123bd0 SetPanningRule body=37 status=ok
// SIG undefined SetPanningRule(void)

void CAkLEngine::SetPanningRule(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = CAkOutputMgr::GetDevice();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x54) = param_2;
    CAkListener::ResetListenerData();
    return;
  }
  return;
}



// FUNCTION 143123c00 FUN_143123c00 body=490 status=ok
// SIG undefined FUN_143123c00(void)

undefined8
FUN_143123c00(int param_1,longlong param_2,int param_3,int param_4,int param_5,void *param_6,
             int param_7,char param_8)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  int local_28 [2];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  param_3 = (param_5 * 0x1000 + param_4) * 0x10 + param_3;
  uVar2 = (ulonglong)DAT_146b50d80;
  for (piVar4 = DAT_146b50d78;
      (piVar4 != DAT_146b50d78 + uVar2 * 10 &&
      (((*piVar4 != param_1 || (piVar4[4] != param_3)) || (*(longlong *)(piVar4 + 2) != param_2))));
      piVar4 = piVar4 + 10) {
  }
  piVar3 = piVar4 + 6;
  if (piVar4 == DAT_146b50d78 + uVar2 * 10) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 == (int *)0x0) {
    if (param_6 != (void *)0x0) {
      uStack_40 = (undefined4)param_2;
      uStack_3c = (undefined4)((ulonglong)param_2 >> 0x20);
      local_18 = CONCAT44(uStack_34,param_3);
      uStack_20 = uStack_40;
      uStack_1c = uStack_3c;
      local_28[0] = param_1;
      puVar1 = (undefined8 *)FUN_143123a20(&DAT_146b50d78,local_28);
      if (puVar1 == (undefined8 *)0x0) {
        if (param_8 != '\0') {
          AK::MemoryMgr::Free(g_LEngineDefaultPoolId,param_6);
        }
        return 0x34;
      }
      *puVar1 = param_6;
      *(int *)(puVar1 + 1) = param_7;
      *(char *)((longlong)puVar1 + 0xc) = param_8;
    }
  }
  else {
    if ((char)piVar3[3] != '\0') {
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)piVar3);
      uVar2 = (ulonglong)DAT_146b50d80;
    }
    if (param_6 == (void *)0x0) {
      for (piVar4 = DAT_146b50d78;
          (piVar4 != DAT_146b50d78 + uVar2 * 10 &&
          (((*piVar4 != param_1 || (piVar4[4] != param_3)) || (*(longlong *)(piVar4 + 2) != param_2)
           ))); piVar4 = piVar4 + 10) {
      }
      piVar3 = DAT_146b50d78 + uVar2 * 10;
      if (piVar4 != piVar3) {
        uVar5 = (uint)uVar2;
        if (piVar4 < piVar3 + -10) {
          uVar2 = ((ulonglong)((longlong)(piVar3 + -10) + (-1 - (longlong)piVar4)) / 0x28 + 1) * 5 &
                  0x1fffffffffffffff;
          piVar3 = piVar4 + 10;
          for (; uVar5 = DAT_146b50d80, uVar2 != 0; uVar2 = uVar2 - 1) {
            *(undefined8 *)piVar4 = *(undefined8 *)piVar3;
            piVar3 = piVar3 + 2;
            piVar4 = piVar4 + 2;
          }
        }
        DAT_146b50d80 = uVar5 - 1;
      }
    }
    else {
      *(void **)piVar3 = param_6;
      piVar3[2] = param_7;
      *(char *)(piVar3 + 3) = param_8;
    }
  }
  return 1;
}



// FUNCTION 143123df0 TermPluginCustomGameData body=142 status=ok
// SIG undefined TermPluginCustomGameData(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkLEngine::TermPluginCustomGameData(void)

{
  void *pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)DAT_146b50d80;
  pvVar1 = DAT_146b50d78;
  pvVar2 = DAT_146b50d78;
  if (DAT_146b50d78 != (void *)((longlong)DAT_146b50d78 + uVar3 * 0x28)) {
    do {
      if ((*(char *)((longlong)pvVar1 + 0x24) != '\0') &&
         (*(void **)((longlong)pvVar1 + 0x18) != (void *)0x0)) {
        AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)((longlong)pvVar1 + 0x18));
        uVar3 = (ulonglong)DAT_146b50d80;
        pvVar2 = DAT_146b50d78;
      }
      pvVar1 = (void *)((longlong)pvVar1 + 0x28);
    } while (pvVar1 != (void *)((longlong)pvVar2 + uVar3 * 0x28));
  }
  if (pvVar2 != (void *)0x0) {
    DAT_146b50d80 = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar2);
    DAT_146b50d78 = (void *)0x0;
    _DAT_146b50d84 = 0;
  }
  return;
}



// FUNCTION 143123e80 VPLDestroySource body=60 status=ok
// SIG undefined VPLDestroySource(void)

void CAkLEngine::VPLDestroySource(undefined8 *param_1)

{
  long lVar1;
  
  CAkVPLSrcCbxNode::Term();
  lVar1 = g_LEngineDefaultPoolId;
  if (param_1 != (undefined8 *)0x0) {
    (**(code **)*param_1)(param_1,0);
    AK::MemoryMgr::Free(lVar1,param_1);
  }
  return;
}



// FUNCTION 143123ec0 FUN_143123ec0 body=399 status=ok
// SIG undefined FUN_143123ec0(void)

longlong * FUN_143123ec0(longlong param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  __uint64 _Var8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar1 = *(uint *)(param_1 + 0x40);
    if (uVar1 < 2) {
      if (*(int *)(param_1 + 0x44) == 0) {
        _Var8 = (ulonglong)(1 - uVar1) << 3;
        puVar4 = (undefined8 *)(param_1 + 0x28);
        if (0x10 < _Var8) {
          puVar4 = AK::MemoryMgr::Malign(g_DefaultPoolId,_Var8,8);
        }
        if (puVar4 == (undefined8 *)0x0) {
          return (longlong *)0x0;
        }
        puVar9 = *(undefined8 **)(param_1 + 0x38);
        if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar4)) {
          uVar10 = (ulonglong)*(uint *)(param_1 + 0x40);
          puVar7 = puVar4;
          if (uVar10 != 0) {
            do {
              if (puVar7 != (undefined8 *)0x0) {
                *puVar7 = 0;
              }
              *puVar7 = *(undefined8 *)
                         ((*(longlong *)(param_1 + 0x38) - (longlong)puVar4) + (longlong)puVar7);
              uVar10 = uVar10 - 1;
              puVar7 = puVar7 + 1;
            } while (uVar10 != 0);
            puVar9 = *(undefined8 **)(param_1 + 0x38);
          }
          if ((undefined8 *)(param_1 + 0x28) != puVar9) {
            AK::MemoryMgr::Falign(g_DefaultPoolId,puVar9);
          }
        }
        *(undefined8 **)(param_1 + 0x38) = puVar4;
        *(uint *)(param_1 + 0x44) = 1 - uVar1;
      }
      if ((uVar1 == 0) && (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0)) {
        **(undefined8 **)(param_1 + 0x38) = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x40) = 1;
  }
  plVar6 = (longlong *)**(longlong **)(param_1 + 0x38);
  if ((((longlong *)**(longlong **)(param_1 + 0x38) == (longlong *)0x0) &&
      (pvVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x60), plVar6 = (longlong *)0x0,
      pvVar5 != (void *)0x0)) &&
     (plVar6 = (longlong *)CAkEmitter::CAkEmitter(pvVar5), plVar6 != (longlong *)0x0)) {
    **(undefined8 **)(param_1 + 0x38) = plVar6;
    plVar6[1] = param_1;
    iVar3 = (**(code **)(*plVar6 + 8))(plVar6,*(undefined8 *)(param_1 + 0x48));
    lVar2 = g_DefaultPoolId;
    if (iVar3 != 1) {
      (**(code **)*plVar6)(plVar6,0);
      AK::MemoryMgr::Free(lVar2,plVar6);
      **(undefined8 **)(param_1 + 0x38) = 0;
      plVar6 = (longlong *)0x0;
    }
  }
  return plVar6;
}



// FUNCTION 143124060 FUN_143124060 body=52 status=ok
// SIG undefined FUN_143124060(void)

undefined8 FUN_143124060(undefined8 param_1,ulonglong param_2)

{
  FUN_143185290();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 1431240a0 AddSound body=390 status=ok
// SIG undefined AddSound(void)

int CAkLEngine::AddSound(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x2a8) != 0) {
    for (plVar4 = DAT_146b50da0; plVar4 != DAT_146b50da0 + DAT_146b50da8; plVar4 = plVar4 + 1) {
      lVar6 = *plVar4;
      piVar7 = (int *)(*(longlong *)(lVar6 + 8) + 0x290);
      if (*(longlong *)(lVar6 + 8) == 0) {
        piVar7 = (int *)&DAT_000002a8;
      }
      if ((*piVar7 == *(int *)(lVar1 + 0x2a8)) && (*(longlong *)(lVar6 + 0x240) == 0)) {
        FUN_14316e1b0(lVar6,lVar1,0);
        CAkPBI::NotifAddedAsSA(lVar1);
        return 5;
      }
    }
  }
  pvVar5 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x2a0);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_14316d870(pvVar5), lVar6 != 0)) {
    iVar2 = FUN_14316e1b0(lVar6,lVar1,1);
    if (iVar2 == 0x3f) {
      *(undefined8 *)(lVar6 + 0x78) = 0;
      lVar1 = lVar6;
      if (DAT_146b51f58 != 0) {
        *(longlong *)(DAT_146b51f50 + 0x78) = lVar6;
        lVar1 = DAT_146b51f58;
      }
      DAT_146b51f58 = lVar1;
      iVar2 = 1;
      DAT_146b51f50 = lVar6;
    }
    else if (iVar2 == 1) {
      iVar2 = FUN_1431257c0(lVar6,lVar1);
      *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xfffffeff;
      uVar3 = 0;
      if (iVar2 == 1) {
        uVar3 = 0x100;
      }
      *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | uVar3;
    }
    else {
      VPLDestroySource(lVar6,iVar2 != 3);
    }
    return iVar2;
  }
  CAkPBI::Destroy(lVar1,1);
  return 2;
}



// FUNCTION 143124230 FUN_143124230 body=251 status=ok
// SIG undefined FUN_143124230(void)

undefined8 FUN_143124230(ulonglong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if ((*(longlong *)(param_2 + 0x40) == 0) &&
     ((*(longlong *)(param_2 + 0x80) == 0 ||
      (*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x88) == 0)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  uVar2 = (uint)param_1[1];
  if (bVar3) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
       (cVar5 = FUN_1431262a0(param_1,8), cVar5 == '\0')) {
      return 2;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
      return 2;
    }
    uVar4 = param_1[1];
    plVar7 = (longlong *)*param_1;
    *(uint *)(param_1 + 1) = (uint)uVar4 + 1;
    plVar6 = plVar7 + (uint)uVar4;
    if (plVar7 < plVar7 + (uint)uVar4) {
      do {
        plVar1 = plVar6 + -1;
        *plVar6 = plVar6[-1];
        plVar7 = (longlong *)*param_1;
        plVar6 = plVar1;
      } while (plVar7 < plVar1);
    }
  }
  else {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
       (cVar5 = FUN_1431262a0(param_1,8), cVar5 == '\0')) {
      return 2;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
      return 2;
    }
    uVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (uint)uVar4 + 1;
    plVar7 = (longlong *)(*param_1 + (ulonglong)(uint)uVar4 * 8);
  }
  if (plVar7 == (longlong *)0x0) {
    return 2;
  }
  *plVar7 = param_2;
  DAT_146b50d89 = 1;
  return 1;
}



// FUNCTION 143124330 FUN_143124330 body=1079 status=ok
// SIG undefined FUN_143124330(void)

void FUN_143124330(void)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_60;
  
  uVar9 = (ulonglong)DAT_146b50da8;
  plVar2 = DAT_146b50da0;
  plVar4 = DAT_146b50da0;
  if (DAT_146b50da0 != DAT_146b50da0 + uVar9) {
    do {
      if (*(int *)(*plVar4 + 0x248) == 1) {
        FUN_14316e610();
        uVar9 = (ulonglong)DAT_146b50da8;
        plVar2 = DAT_146b50da0;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + uVar9);
  }
  FUN_14318a450();
  FUN_143127b20();
  uVar9 = 0;
  if (DAT_146b50d98 != 0) {
    do {
      lVar5 = *(longlong *)(DAT_146b50d90 + uVar9 * 8);
      bVar1 = *(byte *)(lVar5 + 0x354) & 1;
      if ((bVar1 == 0) || ((*(byte *)(lVar5 + 0x354) & 2) != 0)) {
        uVar3 = 0;
        if (bVar1 == 0) {
          uVar3 = 0xf;
        }
        FUN_143188b80(lVar5,uVar3);
      }
      plVar2 = *(longlong **)(lVar5 + 8);
      if (plVar2 == (longlong *)0x0) {
        *(undefined4 *)(lVar5 + 0x20) = 0x3f800000;
LAB_143124491:
        fVar10 = (float)((*(uint *)(lVar5 + 0x20) & 0x7fffff) + 0x3f800000);
        fVar11 = fVar10 + 1.0;
        *(float *)(lVar5 + 0x24) =
             (((fVar10 * fVar10 * fVar10 - 1.0) * 1.1581186) / (fVar11 * fVar11 * fVar11)) * 20.0 +
             ((float)(*(uint *)(lVar5 + 0x20) >> 0x17 & 0xff) - 127.0) * 6.0206;
      }
      else {
        if ((*(byte *)((longlong)plVar2 + 0x17c) & 1) == 0) {
          (**(code **)(*plVar2 + 0x48))(plVar2,0);
        }
        else if ((*(byte *)((longlong)plVar2 + 0x17c) & 0x10) != 0) {
          (**(code **)(*plVar2 + 0x50))();
        }
        FUN_143184080(lVar5);
        if ((*(longlong *)(lVar5 + 8) == 0) || (*(longlong *)(lVar5 + 0x40) == 0))
        goto LAB_143124491;
        FUN_1431835a0(lVar5);
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
    } while (uVar7 < DAT_146b50d98);
  }
  FUN_143127b20();
  plVar2 = DAT_146b50da0;
  if (DAT_146b50da0 != DAT_146b50da0 + DAT_146b50da8) {
    do {
      if (*(int *)(*plVar2 + 0x248) == 1) {
        FUN_1431835a0(*plVar2,1);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != DAT_146b50da0 + DAT_146b50da8);
  }
  lVar5 = (longlong)(int)(DAT_146b50d98 - 1);
  if (-1 < (int)(DAT_146b50d98 - 1)) {
    do {
      if ((*(byte *)(*(longlong *)(DAT_146b50d90 + lVar5 * 8) + 0x364) & 4) != 0) {
        FUN_143124a30();
      }
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  if (DAT_146b50dd8 != 0) {
    fVar10 = -3.4028235e+38;
    uVar8 = *DAT_146b50dd0;
    puVar6 = DAT_146b50dd0;
    if (DAT_146b50dd0 != DAT_146b50dd0 + (ulonglong)DAT_146b50dd8 * 6) {
      do {
        fVar11 = fVar10;
        if (uVar8 != *puVar6) {
          local_98 = 0;
          local_94 = 4;
          local_90 = 0;
          local_80 = 0;
          local_78 = 0;
          local_70 = 0xff;
          local_68 = 0xff;
          local_60 = 0;
          local_88 = 0;
          CAkRTPCMgr::SetRTPCInternal
                    (g_pRTPCMgr,uVar8,fVar10,(AkRTPCKey *)&local_88,(TransParamsBase *)&local_98,1,
                     false);
          uVar8 = *puVar6;
          fVar11 = -3.4028235e+38;
        }
        fVar10 = (float)puVar6[4];
        AkHdrBus::NotifyHdrWindowTop(fVar10,uVar8,*(undefined8 *)(puVar6 + 2));
        if (fVar10 <= fVar11) {
          fVar10 = fVar11;
        }
        puVar6 = puVar6 + 6;
      } while (puVar6 != DAT_146b50dd0 + (ulonglong)DAT_146b50dd8 * 6);
    }
    local_98 = 0;
    local_94 = 4;
    local_90 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0xff;
    local_68 = 0xff;
    local_60 = 0;
    local_88 = 0;
    CAkRTPCMgr::SetRTPCInternal
              (g_pRTPCMgr,uVar8,fVar10,(AkRTPCKey *)&local_88,(TransParamsBase *)&local_98,1,false);
    DAT_146b50dd8 = 0;
  }
  plVar2 = DAT_146b50da0;
  if (DAT_146b50da0 != DAT_146b50da0 + DAT_146b50da8) {
    do {
      if (*(int *)(*plVar2 + 0x248) == 1) {
        FUN_143183f00();
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != DAT_146b50da0 + DAT_146b50da8);
  }
  return;
}



// FUNCTION 143124770 FUN_143124770 body=310 status=ok
// SIG undefined FUN_143124770(void)

void FUN_143124770(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar5 = MXCSR & 0x8000;
  MXCSR = MXCSR | 0x8000;
  do {
    lVar1 = *(longlong *)(*param_1 + (ulonglong)param_2 * 8);
    for (lVar3 = *(longlong *)(lVar1 + 0x30); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x40)) {
      if ((*(longlong *)(lVar3 + 0x20) == 0) || (((byte)*(undefined4 *)(lVar3 + 0x168) & 3) == 3)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + 0x70), lVar4 != 0)) &&
         ((*(uint *)(lVar3 + 0x168) >> 3 & 1) == 0)) {
        FUN_143186450(lVar1,lVar4,lVar3);
      }
    }
    lVar3 = FUN_143187240(lVar1);
    if (*(longlong *)(lVar1 + 0x40) == 0) {
      if (*(short *)(lVar3 + 0x12) != 0) {
        if ((*(longlong *)(lVar1 + 0x80) == 0) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x80) + 0x88) == 0)) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((bVar2) && (lVar4 = CAkOutputMgr::FindDevice(), lVar4 != 0)) {
          AkDevice::PushData(lVar4,lVar3,*(undefined8 *)(lVar1 + 0xc0));
        }
      }
      lVar3 = 0;
    }
    param_2 = param_2 + 1;
    *(longlong *)(lVar1 + 0x70) = lVar3;
  } while (param_2 < param_3);
  MXCSR = MXCSR & 0xffff7fff | uVar5;
  return;
}



// FUNCTION 1431248b0 FUN_1431248b0 body=201 status=ok
// SIG undefined FUN_1431248b0(void)

void FUN_1431248b0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar1 = *(longlong *)(param_1 + 0x30); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x40)) {
    if ((((*(longlong *)(lVar1 + 0x20) != 0) && (((byte)*(uint *)(lVar1 + 0x168) & 3) != 3)) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x70), lVar2 != 0)) &&
       ((*(uint *)(lVar1 + 0x168) >> 3 & 1) == 0)) {
      FUN_143186450(param_1,lVar2,lVar1);
    }
  }
  lVar1 = FUN_143187240(param_1);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    if (((*(short *)(lVar1 + 0x12) != 0) &&
        ((*(longlong *)(param_1 + 0x80) == 0 ||
         (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x88) == 0)))) &&
       (lVar2 = CAkOutputMgr::FindDevice(), lVar2 != 0)) {
      AkDevice::PushData(lVar2,lVar1,*(undefined8 *)(param_1 + 0xc0));
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    return;
  }
  *(longlong *)(param_1 + 0x70) = lVar1;
  return;
}



// FUNCTION 143124980 BypassBusFx body=176 status=ok
// SIG undefined BypassBusFx(void)

void CAkLEngine::BypassBusFx(int param_1,undefined4 param_2,undefined4 param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_146b50d98;
  plVar3 = DAT_146b50d90;
  plVar4 = DAT_146b50d90;
  if (DAT_146b50d90 != DAT_146b50d90 + uVar5) {
    do {
      lVar1 = *plVar3;
      if (*(longlong *)(lVar1 + 0x80) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(longlong *)(lVar1 + 0x80) + 0x10);
      }
      if ((iVar2 == param_1) &&
         ((param_4 == 0 || (*(longlong *)(lVar1 + 0x88) == *(longlong *)(param_4 + 0x48))))) {
        FUN_143188980(lVar1,param_2,param_3);
        uVar5 = (ulonglong)DAT_146b50d98;
        plVar4 = DAT_146b50d90;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4 + uVar5);
  }
  return;
}



// FUNCTION 143124a30 FUN_143124a30 body=870 status=ok
// SIG undefined FUN_143124a30(void)

void FUN_143124a30(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res8 [2];
  float local_res10 [2];
  int local_68 [2];
  undefined8 uStack_60;
  
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  fVar1 = *(float *)(param_1 + 0x24);
  cVar4 = FUN_143125e30(uVar2,local_res8,local_res10);
  if (cVar4 == '\0') {
    fVar8 = *(float *)(param_1 + 0x37c);
  }
  else {
    *(float *)(param_1 + 0x378) = local_res8[0];
    fVar8 = 1.0 - 1.0 / local_res10[0];
    *(float *)(param_1 + 0x37c) = fVar8;
  }
  fVar10 = 0.0;
  fVar7 = (*(float *)(param_1 + 0x368) - fVar1) - local_res8[0];
  fVar9 = local_res8[0];
  if (0.0 < fVar7) {
    fVar9 = fVar7 * fVar8 + local_res8[0];
  }
  cVar4 = FUN_143125d30(uVar2,local_res10,local_res8);
  if (cVar4 != '\0') {
    if (local_res10[0] <= 0.0) {
      *(undefined4 *)(param_1 + 0x374) = 0;
    }
    else {
      fVar8 = _guard_xfg_dispatch_icall_nop
                        ((float)(int)-(uint)DAT_1467bdcb8 / (local_res10[0] * 48000.0));
      *(float *)(param_1 + 0x374) = fVar8;
    }
  }
  fVar8 = *(float *)(param_1 + 0x374);
  if (local_res8[0]._0_1_ == '\0') {
    if (-37.0 <= fVar9 * 0.05) {
      uVar6 = (uint)(longlong)(fVar9 * 0.05 * 27866352.0 + 1.0653532e+09);
      local_res8[0] = (float)((uVar6 & 0x7fffff) + 0x3f800000);
      fVar10 = ((local_res8[0] * 0.32518977 + 0.020805772) * local_res8[0] + 0.65304345) *
               (float)(uVar6 & 0xff800000);
    }
    if (*(float *)(param_1 + 0x36c) <= fVar10) {
      *(float *)(param_1 + 0x36c) = fVar10;
      goto LAB_143124ce9;
    }
    fVar8 = (1.0 - fVar8) * fVar10 + *(float *)(param_1 + 0x36c) * fVar8;
    *(float *)(param_1 + 0x36c) = fVar8;
    local_res8[0] = (float)(((uint)fVar8 & 0x7fffff) + 0x3f800000);
    fVar7 = local_res8[0] + 1.0;
    fVar8 = (((local_res8[0] * local_res8[0] * local_res8[0] - 1.0) * 1.1581186) /
            (fVar7 * fVar7 * fVar7)) * 20.0 + ((float)((uint)fVar8 >> 0x17 & 0xff) - 127.0) * 6.0206
    ;
  }
  else {
    if (*(float *)(param_1 + 0x36c) <= fVar9) {
      *(float *)(param_1 + 0x36c) = fVar9;
      goto LAB_143124ce9;
    }
    fVar8 = (1.0 - fVar8) * fVar9 + *(float *)(param_1 + 0x36c) * fVar8;
    *(float *)(param_1 + 0x36c) = fVar8;
  }
  fVar7 = fVar8 - fVar9;
  fVar9 = fVar8;
  if (0.5 <= fVar7) {
    *(byte *)(param_1 + 0x364) = *(byte *)(param_1 + 0x364) | 2;
  }
LAB_143124ce9:
  *(float *)(param_1 + 0x370) = fVar9 + fVar1;
  local_res10[0] = fVar9;
  local_68[0] = CAkBus::GetGameParamID(uVar2);
  if (local_68[0] != 0) {
    FUN_1431444c0(uVar2,local_res10);
    uStack_60 = uVar3;
    lVar5 = FUN_143127130(&DAT_146b50dd0,local_68,local_res8);
    if ((lVar5 != 0) &&
       (*(float *)(lVar5 + 0x10) <= local_res10[0] && local_res10[0] != *(float *)(lVar5 + 0x10))) {
      *(float *)(lVar5 + 0x10) = local_res10[0];
    }
  }
  *(undefined4 *)(param_1 + 0x368) = 0xc5800000;
  return;
}



// FUNCTION 143124da0 FUN_143124da0 body=798 status=ok
// SIG undefined FUN_143124da0(void)

void FUN_143124da0(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_18;
  longlong local_10;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar7 = lVar3;
  if (lVar3 == 0) {
    lVar7 = 0x18;
  }
  lVar7 = FUN_14317c010(lVar7);
  plVar1 = (longlong *)(lVar3 + 0x18);
  if (lVar3 == 0) {
    plVar1 = (longlong *)&DAT_00000030;
  }
  if (lVar7 == 0) {
    lVar3 = *(longlong *)(*plVar1 + 0x48);
    lVar7 = CAkOutputMgr::GetPrimaryDevice();
    if (lVar7 == 0) {
      return;
    }
    lVar7 = *(longlong *)(param_1 + 0x40);
    local_18 = 0;
    local_10 = lVar3;
    for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x48)) {
      plVar1 = (longlong *)AkMixConnection::GetOutputBusCtx(lVar7);
      if ((*plVar1 == local_18) && (plVar1[1] == local_10)) {
        if (lVar7 != 0) {
          return;
        }
        break;
      }
    }
    for (plVar1 = DAT_146b50d90; plVar1 != DAT_146b50d90 + DAT_146b50d98; plVar1 = plVar1 + 1) {
      lVar3 = *plVar1;
      if (((*(longlong *)(lVar3 + 0x80) == local_18) && (*(longlong *)(lVar3 + 0x88) == local_10))
         && ((*(longlong *)(lVar3 + 8) == 0 ||
             (*(char *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x18) + 0x54) != '\0'))))
      goto LAB_143124fd3;
    }
  }
  else {
    pbVar2 = (byte *)(lVar3 + 0x124);
    if (lVar3 == 0) {
      pbVar2 = &DAT_0000013c;
    }
    if ((*pbVar2 & 8) != 0) {
      lVar3 = CAkRegisteredObj::GetConnectedListeners(*plVar1);
      if (*(char *)(lVar3 + 0xb8) == '\0') {
        uVar4 = CAkConnectedListeners::GetDefault();
        lVar3 = CAkConnectedListeners::GetUserAssocs(uVar4);
      }
      else {
        lVar3 = lVar3 + 0x20;
      }
      plVar1 = *(longlong **)(lVar3 + 0x30);
      if (plVar1 == plVar1 + *(uint *)(lVar3 + 0x38)) {
        return;
      }
      do {
        local_10 = *plVar1;
        local_18 = lVar7;
        for (lVar6 = *(longlong *)(param_1 + 0x40); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x48))
        {
          plVar5 = (longlong *)AkMixConnection::GetOutputBusCtx(lVar6);
          if ((*plVar5 == local_18) && (plVar5[1] == local_10)) {
            if (lVar6 != 0) goto LAB_143124f08;
            break;
          }
        }
        for (plVar5 = DAT_146b50d90; plVar5 != DAT_146b50d90 + DAT_146b50d98; plVar5 = plVar5 + 1) {
          lVar6 = *plVar5;
          if (((*(longlong *)(lVar6 + 0x80) == local_18) &&
              (*(longlong *)(lVar6 + 0x88) == local_10)) &&
             ((*(longlong *)(lVar6 + 8) == 0 ||
              (*(char *)(*(longlong *)(*(longlong *)(lVar6 + 8) + 0x18) + 0x54) != '\0')))) {
            if (lVar6 != 0) goto LAB_143124efd;
            break;
          }
        }
        lVar6 = CAkLEngine::GetVPLMixBusInternal(&local_18);
        if (lVar6 != 0) {
LAB_143124efd:
          FUN_1431828f0(param_1,lVar6,0);
        }
LAB_143124f08:
        plVar1 = plVar1 + 1;
        if (plVar1 == (longlong *)
                      (*(longlong *)(lVar3 + 0x30) + (ulonglong)*(uint *)(lVar3 + 0x38) * 8)) {
          return;
        }
      } while( true );
    }
    local_10 = *(longlong *)(*plVar1 + 0x48);
    local_18 = lVar7;
    for (lVar3 = *(longlong *)(param_1 + 0x40); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x48)) {
      plVar1 = (longlong *)AkMixConnection::GetOutputBusCtx(lVar3);
      if ((*plVar1 == local_18) && (plVar1[1] == local_10)) {
        if (lVar3 != 0) {
          return;
        }
        break;
      }
    }
    for (plVar1 = DAT_146b50d90; plVar1 != DAT_146b50d90 + DAT_146b50d98; plVar1 = plVar1 + 1) {
      lVar3 = *plVar1;
      if (((*(longlong *)(lVar3 + 0x80) == local_18) && (*(longlong *)(lVar3 + 0x88) == local_10))
         && ((*(longlong *)(lVar3 + 8) == 0 ||
             (*(char *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x18) + 0x54) != '\0'))))
      goto LAB_143124fd3;
    }
  }
LAB_143124fd8:
  lVar3 = CAkLEngine::GetVPLMixBusInternal(&local_18);
  if (lVar3 == 0) {
    return;
  }
LAB_143124fee:
  FUN_1431828f0(param_1,lVar3,0);
  return;
LAB_143124fd3:
  if (lVar3 != 0) goto LAB_143124fee;
  goto LAB_143124fd8;
}



// FUNCTION 1431250c0 FUN_1431250c0 body=1020 status=ok
// SIG undefined FUN_1431250c0(void)

undefined8 * FUN_1431250c0(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  char local_res10 [8];
  float local_res18 [2];
  float local_res20 [2];
  longlong local_48;
  longlong lStack_40;
  
  if (param_2 == (undefined8 *)0x0) {
    lVar4 = CAkOutputMgr::FindDevice();
    if (lVar4 == 0) {
      return (undefined8 *)0x0;
    }
    if (*(char *)(lVar4 + 0x3c) == '\0') {
      return (undefined8 *)0x0;
    }
    local_res10[0] = '\0';
    param_2 = (undefined8 *)FUN_143129710(lVar4,local_res10);
    if (local_res10[0] != '\0') {
      if (param_2 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      iVar3 = FUN_143124230(&DAT_146b50d90,param_2);
      if (iVar3 != 1) {
        AkDevice::DeleteDeviceAndDisconnectMix(lVar4);
        return (undefined8 *)0x0;
      }
      uVar11 = 0;
      uVar9 = DAT_146b50d98;
      if (DAT_146b50d98 != 0) {
        do {
          puVar6 = *(undefined8 **)(DAT_146b50d90 + uVar11 * 8);
          if ((((puVar6 != param_2) && (puVar6[8] == 0)) &&
              ((puVar6[0x10] == 0 || (*(longlong *)(puVar6[0x10] + 0x88) == 0)))) &&
             (lVar5 = CAkOutputMgr::FindDevice(), uVar9 = DAT_146b50d98, lVar5 == lVar4)) {
            FUN_1431828f0(puVar6,param_2,0);
            break;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < uVar9);
      }
    }
    if (param_2 != (undefined8 *)0x0) goto LAB_1431252fd;
    lVar4 = *param_1;
    if (lVar4 != 0) goto LAB_1431251bb;
  }
  else {
LAB_1431252fd:
    lVar4 = *param_1;
    if (lVar4 == 0) {
      return param_2;
    }
LAB_1431251bb:
    if ((*(uint *)(lVar4 + 0xa0) & 0xe0000) != 0) {
      puVar6 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x380);
      if (puVar6 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      lVar4 = *param_1;
      FUN_143184d20(puVar6);
      *puVar6 = &PTR_FUN_145ac6908;
      puVar6[0x1a] = &PTR_LAB_145ac6990;
      *(byte *)((longlong)puVar6 + 0x364) = *(byte *)((longlong)puVar6 + 0x364) & 0xfc;
      *(byte *)((longlong)puVar6 + 0x364) = *(byte *)((longlong)puVar6 + 0x364) | 4;
      *(undefined4 *)(puVar6 + 0x6c) = 0x7fffffff;
      *(undefined4 *)(puVar6 + 0x6d) = 0xc5800000;
      *(undefined4 *)((longlong)puVar6 + 0x36c) = 0xc5800000;
      *(undefined4 *)(puVar6 + 0x6e) = 0xc5800000;
      *(undefined4 *)((longlong)puVar6 + 0x374) = 0;
      FUN_143125e30(lVar4,puVar6 + 0x6f,local_res18);
      *(float *)((longlong)puVar6 + 0x37c) = 1.0 - 1.0 / local_res18[0];
      FUN_143125d30(lVar4,local_res20,local_res18);
      *(byte *)((longlong)puVar6 + 0x364) =
           *(byte *)((longlong)puVar6 + 0x364) ^
           (local_res18[0]._0_1_ << 3 ^ *(byte *)((longlong)puVar6 + 0x364)) & 8;
      if (local_res20[0] <= 0.0) {
        *(undefined4 *)((longlong)puVar6 + 0x374) = 0;
      }
      else {
        fVar12 = _guard_xfg_dispatch_icall_nop
                           ((float)(int)-(uint)DAT_1467bdcb8 / (local_res20[0] * 48000.0));
        *(float *)((longlong)puVar6 + 0x374) = fVar12;
      }
      goto LAB_143125370;
    }
  }
  puVar6 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x368);
  if (puVar6 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  FUN_143184d20(puVar6);
  *puVar6 = &PTR_FUN_145ac6908;
  puVar6[0x1a] = &PTR_LAB_145ac6990;
  *(byte *)((longlong)puVar6 + 0x364) = *(byte *)((longlong)puVar6 + 0x364) & 0xf8;
  *(undefined4 *)(puVar6 + 0x6c) = 0x7fffffff;
LAB_143125370:
  uVar1 = DAT_1467bdcb8;
  if (puVar6 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  local_48 = *param_1;
  lStack_40 = param_1[1];
  lVar4 = CAkOutputMgr::FindDevice(&local_48);
  if (lVar4 != 0) {
    pfVar8 = local_res18;
    if (param_2 == (undefined8 *)0x0) {
      local_res18[0] = *(float *)(lVar4 + 0x3c);
    }
    else {
      local_res18[0] = *(float *)(param_2 + 0x14);
    }
    pcVar7 = (char *)AK::CAkBusCtx::GetChannelConfig(&local_48,local_res20);
    if (*pcVar7 != '\0') {
      pfVar8 = (float *)AK::CAkBusCtx::GetChannelConfig(&local_48,local_res20);
    }
    if (param_2 == (undefined8 *)0x0) {
      iVar3 = FUN_143187ad0(puVar6,puVar6,*pfVar8,uVar1,&local_48,0);
    }
    else {
      iVar3 = FUN_143187ad0(puVar6,puVar6,*pfVar8,uVar1,&local_48,param_2);
      if (iVar3 == 1) {
        FUN_1431828f0(puVar6,param_2,0);
      }
    }
    if ((iVar3 == 1) && (iVar3 = FUN_143124230(&DAT_146b50d90,puVar6), iVar3 == 1)) {
      return puVar6;
    }
  }
  lVar2 = g_LEngineDefaultPoolId;
  if (((puVar6[8] == 0) &&
      (((puVar6[0x10] == 0 || (*(longlong *)(puVar6[0x10] + 0x88) == 0)) &&
       (lVar4 = CAkOutputMgr::FindDevice(), lVar4 != 0)))) &&
     ((*(undefined8 **)(lVar4 + 0x168) == puVar6 ||
      (*(undefined8 **)(lVar4 + 0x168) == (undefined8 *)0x0)))) {
    AkDevice::TopNodeDeleted(lVar4);
  }
  FUN_143185290(puVar6);
  AK::MemoryMgr::Free(lVar2,puVar6);
  return (undefined8 *)0x0;
}



// FUNCTION 1431254c0 FUN_1431254c0 body=449 status=ok
// SIG undefined FUN_1431254c0(void)

void FUN_1431254c0(longlong param_1)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong local_28;
  longlong lStack_20;
  undefined1 local_18 [16];
  
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    if ((*(byte *)(lVar4 + 0x124) & 8) == 0) {
      lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + 0x48);
      lStack_20 = 0;
      lVar11 = *(longlong *)(param_1 + 0x40);
      while (local_28 = lVar11, local_28 != 0) {
        if ((*(int *)(local_28 + 0x164) == 0) && (*(longlong *)(local_28 + 0xd0) != lVar4)) {
          plVar7 = (longlong *)FUN_143183460(param_1,local_18,&local_28);
          lStack_20 = plVar7[1];
          lVar11 = *plVar7;
        }
        else {
          lVar11 = *(longlong *)(local_28 + 0x48);
          lStack_20 = local_28;
        }
      }
    }
    else {
      lVar4 = CAkRegisteredObj::GetConnectedListeners(*(longlong *)(lVar4 + 0x18));
      if (*(char *)(lVar4 + 0xb8) == '\0') {
        uVar5 = CAkConnectedListeners::GetDefault();
        lVar4 = CAkConnectedListeners::GetUserAssocs(uVar5);
      }
      else {
        lVar4 = lVar4 + 0x20;
      }
      local_28 = *(longlong *)(param_1 + 0x40);
      lStack_20 = 0;
      if (local_28 != 0) {
        do {
          lVar11 = local_28;
          if (*(int *)(local_28 + 0x164) == 0) {
            iVar9 = 0;
            iVar10 = *(int *)(lVar4 + 0x38) + -1;
            if (-1 < iVar10) {
              do {
                iVar3 = (iVar10 - iVar9) / 2 + iVar9;
                uVar1 = *(ulonglong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8);
                lVar8 = *(longlong *)(lVar4 + 0x30) + (longlong)iVar3 * 8;
                if (*(ulonglong *)(local_28 + 0xd0) < uVar1) {
                  iVar10 = iVar3 + -1;
                }
                else {
                  if (*(ulonglong *)(local_28 + 0xd0) <= uVar1) {
                    bVar2 = true;
                    goto LAB_1431255b8;
                  }
                  iVar9 = iVar3 + 1;
                }
              } while (iVar9 <= iVar10);
            }
            bVar2 = false;
            if (*(longlong *)(lVar4 + 0x30) == 0) {
              lVar8 = 0;
            }
            else {
              lVar8 = *(longlong *)(lVar4 + 0x30) + (longlong)iVar9 * 8;
            }
LAB_1431255b8:
            lVar6 = 0;
            if (bVar2) {
              lVar6 = lVar8;
            }
            if (lVar6 != 0) goto LAB_1431255e7;
            plVar7 = (longlong *)FUN_143183460(param_1);
            local_28 = *plVar7;
            lStack_20 = plVar7[1];
          }
          else {
LAB_1431255e7:
            local_28 = *(longlong *)(local_28 + 0x48);
            lStack_20 = lVar11;
          }
          if (local_28 == 0) {
            return;
          }
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 143125690 FUN_143125690 body=147 status=ok
// SIG undefined FUN_143125690(void)

void FUN_143125690(int param_1,byte param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_146b50d98;
  plVar3 = DAT_146b50d90;
  plVar4 = DAT_146b50d90;
  if (DAT_146b50d90 != DAT_146b50d90 + uVar5) {
    do {
      lVar1 = *plVar3;
      if (*(longlong *)(lVar1 + 0x80) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*(longlong *)(lVar1 + 0x80) + 0x10);
      }
      if (iVar2 == param_1) {
        *(byte *)(lVar1 + 200) = *(byte *)(lVar1 + 200) & 0x83;
        *(byte *)(lVar1 + 200) = *(byte *)(lVar1 + 200) | (param_2 & 0x1f) << 2;
        FUN_143188650();
        uVar5 = (ulonglong)DAT_146b50d98;
        plVar4 = DAT_146b50d90;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4 + uVar5);
  }
  return;
}



// FUNCTION 143125730 FUN_143125730 body=137 status=ok
// SIG undefined FUN_143125730(void)

void FUN_143125730(int param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_146b50d98;
  plVar2 = DAT_146b50d90;
  plVar4 = DAT_146b50d90;
  if (DAT_146b50d90 != DAT_146b50d90 + uVar5) {
    do {
      lVar1 = *plVar2;
      if (*(longlong *)(lVar1 + 0x80) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*(longlong *)(lVar1 + 0x80) + 0x10);
      }
      if (iVar3 == param_1) {
        *(byte *)(lVar1 + 200) = *(byte *)(lVar1 + 200) & 0xfd;
        *(byte *)(lVar1 + 200) = *(byte *)(lVar1 + 200) | param_2 * '\x02';
        uVar5 = (ulonglong)DAT_146b50d98;
        plVar4 = DAT_146b50d90;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar4 + uVar5);
  }
  return;
}



// FUNCTION 1431257c0 FUN_1431257c0 body=550 status=ok
// SIG undefined FUN_1431257c0(void)

undefined8 FUN_1431257c0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  if (((~*(byte *)(param_1 + 0x68) & 1) != 0) || (iVar1 = FUN_14316dda0(), iVar1 == 1)) {
    uVar9 = 0;
    uVar4 = (ulonglong)DAT_146b50da8;
    plVar3 = DAT_146b50da0;
    if (DAT_146b50da0 != DAT_146b50da0 + uVar4) {
      do {
        plVar8 = (longlong *)(*plVar3 + 0x238);
        lVar6 = 2;
        uVar4 = uVar9;
        do {
          if (((longlong *)*plVar8 != (longlong *)0x0) &&
             (iVar1 = (**(code **)(*(longlong *)*plVar8 + 200))(), (int)uVar4 <= iVar1)) {
            uVar2 = (**(code **)(*(longlong *)*plVar8 + 200))();
            uVar4 = (ulonglong)uVar2;
          }
          plVar8 = plVar8 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        plVar8 = (longlong *)(param_1 + 0x238);
        lVar6 = 2;
        uVar5 = uVar9;
        do {
          if (((longlong *)*plVar8 != (longlong *)0x0) &&
             (iVar1 = (**(code **)(*(longlong *)*plVar8 + 200))(), (int)uVar5 <= iVar1)) {
            uVar2 = (**(code **)(*(longlong *)*plVar8 + 200))();
            uVar5 = (ulonglong)uVar2;
          }
          plVar8 = plVar8 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      } while (((int)uVar4 < (int)uVar5) &&
              (plVar3 = plVar3 + 1, plVar3 != DAT_146b50da0 + DAT_146b50da8));
      uVar4 = (ulonglong)DAT_146b50da8;
    }
    uVar7 = (ulonglong)DAT_146b50dac;
    lVar6 = (longlong)plVar3 - (longlong)DAT_146b50da0;
    uVar5 = uVar4;
    plVar3 = DAT_146b50da0;
    uVar2 = DAT_146b50dac;
    if (uVar7 <= uVar4) {
      uVar2 = DAT_146b50dac + 8;
      uVar7 = (ulonglong)uVar2;
      plVar3 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,uVar7 << 3);
      if (plVar3 == (longlong *)0x0) goto LAB_1431259c6;
      uVar5 = (ulonglong)DAT_146b50da8;
      if ((DAT_146b50da0 != (longlong *)0x0) && (DAT_146b50da0 != plVar3)) {
        if (DAT_146b50da8 != 0) {
          do {
            plVar3[uVar9] = DAT_146b50da0[uVar9];
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar5);
        }
        AK::MemoryMgr::Free(g_LEngineDefaultPoolId,DAT_146b50da0);
        uVar5 = (ulonglong)DAT_146b50da8;
      }
    }
    DAT_146b50dac = uVar2;
    DAT_146b50da0 = plVar3;
    if (uVar4 < uVar7) {
      DAT_146b50da8 = (int)uVar5 + 1;
      plVar3 = DAT_146b50da0 + uVar5;
      uVar4 = lVar6 >> 3 & 0xffffffff;
      if (DAT_146b50da0 + uVar4 < plVar3) {
        do {
          *plVar3 = plVar3[-1];
          plVar3 = plVar3 + -1;
        } while (DAT_146b50da0 + uVar4 < plVar3);
      }
      if (DAT_146b50da0 + uVar4 != (longlong *)0x0) {
        DAT_146b50da0[uVar4] = param_1;
        FUN_143124da0(param_1);
        return 1;
      }
    }
  }
LAB_1431259c6:
  CAkLEngine::VPLDestroySource(param_1,1);
  return 2;
}



// FUNCTION 1431259f0 FeedbackTask body=106 status=ok
// SIG undefined FeedbackTask(void)

void CAkLEngine::FeedbackTask(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  for (lVar1 = *(longlong *)(param_1 + 0x30); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x40)) {
    if (((((*(uint *)(lVar1 + 0x168) >> 3 & 1) != 0) && (*(longlong *)(lVar1 + 0x20) != 0)) &&
        (((byte)*(uint *)(lVar1 + 0x168) & 3) != 3)) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x70), lVar2 != 0)) {
      FUN_143186450(param_1,lVar2,lVar1);
    }
  }
  return;
}



// FUNCTION 143125a60 FUN_143125a60 body=242 status=ok
// SIG undefined FUN_143125a60(void)

void FUN_143125a60(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x238) + 0x18);
  bVar1 = *(byte *)(lVar2 + 0x294);
  if ((*(int *)(param_1 + 0x248) == 2) || (((bVar1 & 0x10) != 0 && (*(int *)(lVar2 + 0x2e8) == -1)))
     ) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((bVar1 & 0x40) == 0) || (*(int *)(param_1 + 0x248) != 1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (*(int *)(param_2 + 0x38) == 0x11) {
    if (!bVar3) {
      lVar2 = *(longlong *)(param_1 + 0x240);
      if (lVar2 != 0) {
        *(undefined8 *)(param_1 + 0x240) = 0;
        CAkVPLSrcCbxNode::RemovePipeline(param_1,0);
        iVar5 = FUN_14316e3d0(param_1,lVar2,1,0);
        if ((iVar5 == 1) && (iVar5 = FUN_14316dda0(param_1), iVar5 == 1)) {
          FUN_143181700(lVar2);
          return;
        }
      }
      CAkVPLSrcCbxNode::Stop(param_1);
      return;
    }
  }
  else if ((*(int *)(param_2 + 0x38) != 2) && (!bVar3)) {
    if (!bVar4) {
      return;
    }
    FUN_14316eac0(param_1);
    return;
  }
  CAkVPLSrcCbxNode::Stop(param_1);
  return;
}



// FUNCTION 143125b70 FUN_143125b70 body=216 status=ok
// SIG undefined FUN_143125b70(void)

void FUN_143125b70(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18;
  longlong local_10;
  
  local_10 = *param_2;
  lVar1 = param_2[2];
  local_18 = param_1;
  for (lVar3 = *(longlong *)(param_3 + 0x40); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x48)) {
    plVar2 = (longlong *)AkMixConnection::GetOutputBusCtx(lVar3);
    if ((*plVar2 == local_18) && (plVar2[1] == local_10)) {
      if (lVar3 != 0) {
        return;
      }
      break;
    }
  }
  plVar2 = DAT_146b50d90;
  do {
    if (plVar2 == DAT_146b50d90 + DAT_146b50d98) {
LAB_143125c1b:
      lVar3 = CAkLEngine::GetVPLMixBusInternal(&local_18);
      if (lVar3 != 0) {
LAB_143125c2d:
        FUN_1431828f0(param_3,lVar3,(int)lVar1);
      }
      return;
    }
    lVar3 = *plVar2;
    if (((*(longlong *)(lVar3 + 0x80) == local_18) && (*(longlong *)(lVar3 + 0x88) == local_10)) &&
       ((*(longlong *)(lVar3 + 8) == 0 ||
        (*(char *)(*(longlong *)(*(longlong *)(lVar3 + 8) + 0x18) + 0x54) != '\0')))) {
      if (lVar3 != 0) goto LAB_143125c2d;
      goto LAB_143125c1b;
    }
    plVar2 = plVar2 + 1;
  } while( true );
}



// FUNCTION 143125c70 FUN_143125c70 body=92 status=ok
// SIG undefined FUN_143125c70(void)

longlong FUN_143125c70(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (DAT_146b50d90 != DAT_146b50d90 + DAT_146b50d98) {
    plVar2 = DAT_146b50d90;
    do {
      lVar1 = *plVar2;
      if (((*(longlong *)(lVar1 + 0x80) == *param_1) && (*(longlong *)(lVar1 + 0x88) == param_1[1]))
         && ((*(longlong *)(lVar1 + 8) == 0 ||
             (*(char *)(*(longlong *)(*(longlong *)(lVar1 + 8) + 0x18) + 0x54) != '\0')))) {
        return lVar1;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != DAT_146b50d90 + DAT_146b50d98);
  }
  return 0;
}



// FUNCTION 143125d30 FUN_143125d30 body=252 status=ok
// SIG undefined FUN_143125d30(void)

byte FUN_143125d30(longlong param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  undefined4 local_res8 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined1 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  pbVar5 = (byte *)0x0;
  local_20 = 0xff;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0xff;
  if ((*(ulonglong **)(param_1 + 0x38) == (ulonglong *)0x0) ||
     ((**(ulonglong **)(param_1 + 0x38) >> 0x23 & 1) == 0)) {
    pbVar2 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be194;
    if (pbVar2 != (byte *)0x0) {
      pbVar3 = pbVar5;
      do {
        uVar4 = (int)pbVar3 + 1;
        if (((byte *)(ulonglong)uVar4)[(longlong)pbVar2] == 0x1d) {
          pbVar5 = pbVar2 + (longlong)pbVar3 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
          break;
        }
        pbVar3 = (byte *)(ulonglong)uVar4;
      } while (uVar4 < *pbVar2);
    }
    pbVar2 = (byte *)local_res8;
    if (pbVar5 != (byte *)0x0) {
      pbVar2 = pbVar5;
    }
    *param_2 = *(undefined4 *)pbVar2;
  }
  else {
    uVar6 = FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x23,&local_38);
    *param_2 = uVar6;
  }
  *param_3 = *(byte *)(param_1 + 0x174) >> 3 & 1;
  bVar1 = *(byte *)(param_1 + 0x174);
  *(byte *)(param_1 + 0x174) = bVar1 & 0xef;
  return bVar1 >> 4 & 1;
}



// FUNCTION 143125e30 FUN_143125e30 body=420 status=ok
// SIG undefined FUN_143125e30(void)

byte FUN_143125e30(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 local_res8 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  pbVar6 = (byte *)0x0;
  local_30 = 0xff;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0xff;
  if ((*(ulonglong **)(param_1 + 0x38) == (ulonglong *)0x0) ||
     ((**(ulonglong **)(param_1 + 0x38) >> 0x22 & 1) == 0)) {
    pbVar2 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be18c;
    pbVar4 = pbVar6;
    if (pbVar2 != (byte *)0x0) {
      pbVar3 = pbVar6;
      do {
        uVar5 = (int)pbVar3 + 1;
        if (((byte *)(ulonglong)uVar5)[(longlong)pbVar2] == 0x1b) {
          pbVar4 = pbVar2 + (longlong)pbVar3 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
          break;
        }
        pbVar3 = (byte *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar2);
    }
    pbVar2 = (byte *)local_res8;
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = pbVar4;
    }
    *param_2 = *(undefined4 *)pbVar2;
  }
  else {
    uVar7 = FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x22,&local_48);
    *param_2 = uVar7;
  }
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xff;
  local_28 = 0xff;
  local_20 = 0;
  if ((*(ulonglong **)(param_1 + 0x38) == (ulonglong *)0x0) ||
     ((**(ulonglong **)(param_1 + 0x38) >> 0x24 & 1) == 0)) {
    pbVar2 = *(byte **)(param_1 + 0x98);
    local_res8[0] = DAT_1467be190;
    if (pbVar2 != (byte *)0x0) {
      pbVar4 = pbVar6;
      do {
        uVar5 = (int)pbVar4 + 1;
        if (((byte *)(ulonglong)uVar5)[(longlong)pbVar2] == 0x1c) {
          pbVar6 = pbVar2 + (longlong)pbVar4 * 4 + ((ulonglong)(*pbVar2 + 4) & 0xfffffffc);
          break;
        }
        pbVar4 = (byte *)(ulonglong)uVar5;
      } while (uVar5 < *pbVar2);
    }
    pbVar2 = (byte *)local_res8;
    if (pbVar6 != (byte *)0x0) {
      pbVar2 = pbVar6;
    }
    *param_3 = *(undefined4 *)pbVar2;
  }
  else {
    uVar7 = FUN_143134160(g_pRTPCMgr,param_1 + 0x30,0x24,&local_48);
    *param_3 = uVar7;
  }
  bVar1 = *(byte *)(param_1 + 0x174);
  *(byte *)(param_1 + 0x174) = bVar1 & 0xdf;
  return bVar1 >> 5 & 1;
}



// FUNCTION 143125ff0 FUN_143125ff0 body=128 status=ok
// SIG undefined FUN_143125ff0(void)

bool FUN_143125ff0(longlong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = CAkRegisteredObj::GetListeners(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18));
  uVar4 = *(uint *)(lVar2 + 0x10);
  if (param_2 != 0) {
    if (*param_3 <= uVar4) {
      uVar4 = *param_3;
    }
    uVar5 = 0;
    *param_3 = uVar4;
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        lVar1 = uVar5 * 8;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        *(undefined8 *)(lVar1 + param_2) = *(undefined8 *)(lVar1 + *(longlong *)(lVar2 + 8));
        uVar3 = *param_3;
      } while (uVar4 < uVar3);
    }
    return uVar3 == *(uint *)(lVar2 + 0x10);
  }
  *param_3 = uVar4;
  return true;
}



// FUNCTION 1431260a0 GetVPLMixBusInternal body=484 status=ok
// SIG undefined GetVPLMixBusInternal(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong CAkLEngine::GetVPLMixBusInternal(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  longlong local_58 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  
  uVar12 = 0;
  uStack_80 = 0x1431260cd;
  AK::CAkBusCtx::FindParentCtx(param_1,local_58);
  if (local_58[0] == 0) {
    lVar2 = 0;
  }
  else {
    uStack_80 = 0x1431260df;
    cVar1 = CAkParameterNodeBase::HasListenerRelativeRouting(*param_1);
    if (cVar1 != '\0') {
      local_38 = (undefined4)*param_1;
      uStack_34 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_30 = (undefined4)param_1[1];
      uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
      local_28 = 0;
      uStack_80 = 0x1431260fc;
      AK::CAkBusCtxRslvd::Resolve(&local_38);
      puVar9 = auStack_78;
      uVar5 = uVar12;
      if (local_28 != 0) {
        uStack_80 = 0x14312610e;
        lVar2 = CAkRegisteredObj::GetConnectedListeners();
        if (*(char *)(lVar2 + 0xb8) == '\0') {
          uStack_80 = 0x143126122;
          uVar3 = CAkConnectedListeners::GetDefault();
          uStack_80 = 0x14312612a;
          lVar2 = CAkConnectedListeners::GetUserAssocs(uVar3);
        }
        else {
          lVar2 = lVar2 + 0x20;
        }
        puVar9 = auStack_78;
        if (*(int *)(lVar2 + 0x38) != 0) {
          uStack_80 = 0x143126140;
          lVar4 = FUN_143123ec0(local_28);
          puVar9 = auStack_78;
          if (lVar4 != 0) {
            uVar11 = (ulonglong)*(uint *)(lVar2 + 0x38) * 8;
            uVar5 = uVar11 + 0xf;
            if (uVar5 <= uVar11) {
              uVar5 = 0xffffffffffffff0;
            }
            uStack_80 = 0x143126173;
            plVar7 = *(longlong **)(lVar2 + 0x30);
            lVar4 = -(uVar5 & 0xfffffffffffffff0);
            puVar9 = auStack_78 + lVar4;
            uVar5 = 0;
            if (plVar7 != plVar7 + *(uint *)(lVar2 + 0x38)) {
              do {
                local_58[2] = local_58[0];
                local_58[3] = *plVar7;
                *(undefined8 *)(auStack_78 + lVar4 + -8) = 0x1431261a8;
                lVar6 = FUN_143125c70(local_58 + 2);
                if (lVar6 == 0) {
                  *(undefined8 *)(auStack_78 + lVar4 + -8) = 0x1431261b6;
                  lVar6 = GetVPLMixBusInternal(local_58 + 2);
                  uVar11 = uVar12;
                  if (lVar6 != 0) goto LAB_1431261bb;
                }
                else {
LAB_1431261bb:
                  uVar11 = (ulonglong)((int)uVar12 + 1);
                  ((undefined8 *)((longlong)local_58 + lVar4))[uVar12] = lVar6;
                }
                plVar7 = plVar7 + 1;
                uVar12 = uVar11;
              } while (plVar7 != (longlong *)
                                 (*(longlong *)(lVar2 + 0x30) +
                                 (ulonglong)*(uint *)(lVar2 + 0x38) * 8));
              uVar10 = (uint)uVar11;
              puVar9 = auStack_78 + lVar4;
              if (uVar10 != 0) {
                local_58[2] = *param_1;
                local_58[3] = param_1[1];
                uVar3 = *(undefined8 *)((longlong)local_58 + lVar4);
                *(undefined8 *)(auStack_78 + lVar4 + -8) = 0x1431261f1;
                uVar5 = FUN_1431250c0(local_58 + 2,uVar3);
                puVar9 = auStack_78 + lVar4;
                if ((uVar5 != 0) && (puVar9 = auStack_78 + lVar4, 1 < uVar10)) {
                  puVar8 = (undefined8 *)((longlong)local_58 + lVar4 + 8);
                  uVar12 = (ulonglong)(uVar10 - 1);
                  do {
                    uVar3 = *puVar8;
                    *(undefined8 *)(auStack_78 + lVar4 + -8) = 0x14312621e;
                    FUN_1431828f0(uVar5,uVar3,0);
                    puVar8 = puVar8 + 1;
                    uVar12 = uVar12 - 1;
                    puVar9 = auStack_78 + lVar4;
                  } while (uVar12 != 0);
                }
              }
            }
          }
        }
      }
      *(undefined8 *)(puVar9 + -8) = 0x143126231;
      AK::CAkBusCtxRslvd::~CAkBusCtxRslvd(&local_38);
      return uVar5;
    }
    uStack_80 = 0x14312623f;
    lVar2 = FUN_143125c70(local_58);
    if (lVar2 == 0) {
      uStack_80 = 0x14312624d;
      lVar2 = GetVPLMixBusInternal(local_58);
      if (lVar2 == 0) {
        return 0;
      }
    }
  }
  local_58[2] = *param_1;
  local_58[3] = param_1[1];
  uStack_80 = 0x14312626a;
  uVar12 = FUN_1431250c0(local_58 + 2,lVar2);
  return uVar12;
}



// FUNCTION 1431262a0 FUN_1431262a0 body=156 status=ok
// SIG undefined FUN_1431262a0(void)

undefined8 FUN_1431262a0(longlong *param_1,int param_2)

{
  uint uVar1;
  AKRESULT AVar2;
  void *pvVar3;
  undefined4 extraout_var;
  ulonglong uVar5;
  uint uVar6;
  void *pvVar4;
  
  uVar6 = *(int *)((longlong)param_1 + 0xc) + param_2;
  pvVar3 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar6 << 3);
  if (pvVar3 != (void *)0x0) {
    pvVar4 = (void *)*param_1;
    if ((pvVar4 != (void *)0x0) && (pvVar4 != pvVar3)) {
      uVar1 = *(uint *)(param_1 + 1);
      uVar5 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar3 + uVar5 * 8) = *(undefined8 *)(*param_1 + uVar5 * 8);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
        pvVar4 = (void *)*param_1;
      }
      AVar2 = AK::MemoryMgr::Free(g_LEngineDefaultPoolId,pvVar4);
      pvVar4 = (void *)CONCAT44(extraout_var,AVar2);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar6;
    *param_1 = (longlong)pvVar3;
    return CONCAT71((int7)((ulonglong)pvVar4 >> 8),1);
  }
  return 0;
}



// FUNCTION 143126340 FUN_143126340 body=183 status=ok
// SIG undefined FUN_143126340(void)

undefined8 FUN_143126340(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = *(int *)((longlong)param_1 + 0xc) + param_2;
  puVar3 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar6 * 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*param_1;
    if ((puVar5 != (undefined8 *)0x0) && (puVar5 != puVar3)) {
      uVar7 = (ulonglong)*(uint *)(param_1 + 1);
      puVar4 = puVar3;
      if (uVar7 != 0) {
        do {
          if (puVar4 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar4 + 2) = 0xff7fffff;
          }
          lVar1 = *param_1;
          puVar5 = (undefined8 *)((longlong)puVar4 + (lVar1 - (longlong)puVar3));
          uVar2 = puVar5[1];
          *puVar4 = *puVar5;
          puVar4[1] = uVar2;
          puVar4[2] = *(undefined8 *)((longlong)puVar4 + lVar1 + (0x10 - (longlong)puVar3));
          uVar7 = uVar7 - 1;
          puVar4 = puVar4 + 3;
        } while (uVar7 != 0);
        puVar5 = (undefined8 *)*param_1;
      }
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,puVar5);
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar6;
    *param_1 = (longlong)puVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 143126400 FUN_143126400 body=222 status=ok
// SIG undefined FUN_143126400(void)

ulonglong FUN_143126400(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 local_res20 [2];
  undefined1 local_28 [16];
  
  uVar1 = DAT_1467bdcb8;
  lVar3 = CAkOutputMgr::FindDevice(param_2);
  if (lVar3 != 0) {
    puVar5 = local_res20;
    if (param_3 == 0) {
      local_res20[0] = *(undefined4 *)(lVar3 + 0x3c);
    }
    else {
      local_res20[0] = *(undefined4 *)(param_3 + 0xa0);
    }
    pcVar4 = (char *)AK::CAkBusCtx::GetChannelConfig(param_2,local_28);
    if (*pcVar4 != '\0') {
      puVar5 = (undefined4 *)AK::CAkBusCtx::GetChannelConfig(param_2,local_28);
    }
    if (param_3 == 0) {
      uVar6 = FUN_143187ad0(param_1,param_1,*puVar5,uVar1,param_2,0);
    }
    else {
      uVar2 = FUN_143187ad0(param_1,param_1,*puVar5,uVar1,param_2,param_3);
      uVar6 = (ulonglong)uVar2;
      if (uVar2 == 1) {
        FUN_1431828f0(param_1,param_3,0);
      }
    }
    return uVar6;
  }
  return 2;
}



// FUNCTION 1431264e0 FUN_1431264e0 body=145 status=ok
// SIG undefined FUN_1431264e0(void)

void FUN_1431264e0(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)DAT_146b50d98;
  plVar4 = DAT_146b50d90;
  plVar5 = DAT_146b50d90;
  if (DAT_146b50d90 != DAT_146b50d90 + uVar6) {
    do {
      lVar1 = *(longlong *)(*plVar4 + 0x80);
      if (lVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      if ((iVar3 == param_1) && (plVar2 = *(longlong **)(*plVar4 + 8), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 8))(plVar2,*param_2,0,param_2[0x12]);
        uVar6 = (ulonglong)DAT_146b50d98;
        plVar5 = DAT_146b50d90;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5 + uVar6);
  }
  return;
}



// FUNCTION 143126580 FUN_143126580 body=163 status=ok
// SIG undefined FUN_143126580(void)

void FUN_143126580(int param_1,undefined1 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)DAT_146b50d98;
  plVar4 = DAT_146b50d90;
  plVar5 = DAT_146b50d90;
  if (DAT_146b50d90 != DAT_146b50d90 + uVar6) {
    do {
      lVar1 = *(longlong *)(*plVar4 + 0x80);
      if (lVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      if ((iVar3 == param_1) && (plVar2 = *(longlong **)(*plVar4 + 8), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2,param_3);
        uVar6 = (ulonglong)DAT_146b50d98;
        plVar5 = DAT_146b50d90;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5 + uVar6);
  }
  return;
}



// FUNCTION 143126630 NotifyHdrWindowTop body=206 status=ok
// SIG undefined NotifyHdrWindowTop(void)

void AkHdrBus::NotifyHdrWindowTop(float param_1,ulong param_2,__uint64 param_3)

{
  CAkRegisteredObj *pCVar1;
  long lVar2;
  CAkRegisteredObj *pCVar3;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50;
  CAkRegisteredObj *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined1 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  pCVar3 = (CAkRegisteredObj *)0x0;
  local_58 = 0;
  local_54 = 4;
  local_50 = 0;
  if (param_3 != 0xffffffffffffffff) {
    pCVar3 = CAkRegistryMgr::GetObjAndAddref(g_pRegistryMgr,param_3);
  }
  local_40 = 0;
  local_38 = 0;
  local_30 = 0xff;
  local_28 = 0xff;
  local_20 = 0;
  local_48 = pCVar3;
  CAkRTPCMgr::SetRTPCInternal
            (g_pRTPCMgr,param_2,param_1,(AkRTPCKey *)&local_48,(TransParamsBase *)&local_58,1,false)
  ;
  if (pCVar3 != (CAkRegisteredObj *)0x0) {
    pCVar1 = pCVar3 + 0x50;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    lVar2 = g_DefaultPoolId;
    if (*(int *)pCVar1 == 0) {
      (*(code *)**(undefined8 **)pCVar3)(pCVar3,0);
      AK::MemoryMgr::Free(lVar2,pCVar3);
    }
  }
  return;
}



// FUNCTION 143126700 PositioningChangeNotification body=161 status=ok
// SIG undefined PositioningChangeNotification(void)

void CAkLEngine::PositioningChangeNotification(int param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_146b50d98;
  plVar3 = DAT_146b50d90;
  plVar4 = DAT_146b50d90;
  if (DAT_146b50d90 != DAT_146b50d90 + uVar5) {
    do {
      lVar1 = *(longlong *)(*plVar3 + 0x80);
      if (lVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(lVar1 + 0x10);
      }
      if ((iVar2 == param_1) && (lVar1 = *(longlong *)(*plVar3 + 8), lVar1 != 0)) {
        FUN_14317c310(lVar1,param_2,param_3);
        uVar5 = (ulonglong)DAT_146b50d98;
        plVar4 = DAT_146b50d90;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4 + uVar5);
  }
  return;
}



// FUNCTION 1431267b0 FUN_1431267b0 body=1174 status=ok
// SIG undefined FUN_1431267b0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1431267b0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  long lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  uint uVar17;
  int *piVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined8 uStack_70;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  char *local_38 [2];
  
  cVar8 = (char)param_1;
  uVar11 = (ulonglong)DAT_146b50da8;
  lVar20 = 0xffffffff;
  plVar14 = DAT_146b50da0;
  if (DAT_146b50da0 == DAT_146b50da0 + uVar11) {
LAB_1431268bc:
    uVar12 = (uint)uVar11;
  }
  else {
    do {
      iVar7 = 0;
      lVar13 = *plVar14;
      *(undefined4 *)(lVar13 + 0x290) = 0x2c;
      if (*(int *)(lVar13 + 0x248) == 1) {
        uStack_70 = 0x14312681b;
        cVar5 = FUN_14316ef70(lVar13,lVar13 + 600);
        if ((cVar5 != '\0') && (cVar8 != '\0')) {
          *(undefined2 *)(lVar13 + 0x26a) = 0;
          *(undefined2 *)(lVar13 + 0x270) = 0;
          *(undefined8 *)(lVar13 + 0x278) = 0;
          *(undefined4 *)(lVar13 + 0x280) = 0xffffffff;
          *(undefined4 *)(lVar13 + 0x290) = 0x2b;
        }
      }
      if ((int)lVar20 == -1) {
        plVar16 = (longlong *)(lVar13 + 0x238);
        lVar13 = 2;
        do {
          if ((longlong *)*plVar16 != (longlong *)0x0) {
            uStack_70 = 0x143126863;
            iVar6 = (**(code **)(*(longlong *)*plVar16 + 200))();
            if (iVar7 <= iVar6) {
              uStack_70 = 0x143126874;
              iVar7 = (**(code **)(*(longlong *)*plVar16 + 200))();
            }
          }
          plVar16 = plVar16 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        if (iVar7 == 1) {
          lVar20 = (longlong)plVar14 - (longlong)DAT_146b50da0 >> 3;
        }
      }
      uVar12 = (uint)lVar20;
      uVar11 = (ulonglong)DAT_146b50da8;
      plVar14 = plVar14 + 1;
      param_1 = DAT_146b50da0 + uVar11;
    } while (plVar14 != param_1);
    if (uVar12 == 0xffffffff) goto LAB_1431268bc;
  }
  lVar9 = (long)param_1;
  if ((int)uVar11 != 0) {
    puVar15 = auStack_68;
    if (cVar8 == '\0') goto LAB_143126b6b;
    if (uVar12 != 0) {
      local_38[0] = "AK::Voice";
      lVar9 = 0x46b50da0;
      local_48[1] = (code *)0x0;
      local_48[0] = FUN_143128430;
      uStack_70 = 0x14312690a;
      (*DAT_146b50c18)(&DAT_146b50da0,0,uVar12,1);
      uVar11 = (ulonglong)DAT_146b50da8;
    }
    if (uVar12 < (uint)uVar11) {
      uStack_70 = 0x14312691a;
      AK::MemoryMgr::StartProfileThreadUsage(lVar9);
      local_38[0] = "AK::Voice";
      local_48[1] = (code *)0x0;
      local_48[0] = FUN_143128430;
      uStack_70 = 0x143126946;
      (*DAT_146b50c18)(&DAT_146b50da0,uVar12,DAT_146b50da8,1);
      uVar11 = (ulonglong)DAT_146b50da8;
    }
  }
  puVar15 = auStack_68;
  if (((cVar8 != '\0') && (puVar15 = auStack_68, DAT_146b50d98 != 0)) &&
     (puVar15 = auStack_68, DAT_146b50d89 == '\0')) {
    uVar12 = DAT_146b50db8 - 1;
    uVar11 = (longlong)DAT_146b50db8 * 4 + 0xf;
    if (uVar11 <= (ulonglong)((longlong)DAT_146b50db8 * 4)) {
      uVar11 = 0xffffffffffffff0;
    }
    uStack_70 = 0x1431269a0;
    lVar20 = -(uVar11 & 0xfffffffffffffff0);
    puVar15 = auStack_68 + lVar20;
    iVar7 = 1;
    *(undefined4 *)(&stack0xffffffffffffffd8 + lVar20) = 0;
    if (1 < DAT_146b50db8) {
      piVar18 = (int *)(&stack0xffffffffffffffdc + lVar20);
      do {
        uVar10 = iVar7 - 1;
        iVar7 = iVar7 + 1;
        *piVar18 = DAT_146b50db0[uVar10] + piVar18[-1];
        piVar18 = piVar18 + 1;
      } while (iVar7 < DAT_146b50db8);
    }
    if (0 < (int)uVar12) {
      lVar13 = (longlong)(int)uVar12 * 4;
      do {
        uVar10 = *(uint *)(lVar13 + (longlong)(&stack0xffffffffffffffd8 + lVar20));
        iVar7 = *(int *)(lVar13 + (longlong)DAT_146b50db0);
        if (iVar7 < 2) {
          if (iVar7 == 1) {
            uVar1 = *(undefined8 *)(DAT_146b50d90 + (ulonglong)uVar10 * 8);
            *(undefined8 *)(auStack_68 + lVar20 + -8) = 0x143126a98;
            FUN_1431248b0(uVar1);
          }
        }
        else if ((DAT_146b50d88 == '\0') || (*(char *)((ulonglong)uVar12 + DAT_146b50dc0) == '\0'))
        {
          *(char **)((longlong)local_38 + lVar20) = "AK::Bus";
          *(undefined8 *)((longlong)local_38 + lVar20 + -8) = 0;
          *(code **)((longlong)local_48 + lVar20) = FUN_143124770;
          *(undefined8 *)(auStack_68 + lVar20 + -8) = 0x143126a84;
          (*DAT_146b50c18)(&DAT_146b50d90,(ulonglong)uVar10,iVar7 + uVar10,1);
        }
        else {
          for (uVar17 = (uVar10 - 1) + iVar7; (int)uVar10 <= (int)uVar17; uVar17 = uVar17 - 1) {
            uVar1 = *(undefined8 *)(DAT_146b50d90 + (ulonglong)uVar17 * 8);
            *(undefined8 *)(auStack_68 + lVar20 + -8) = 0x143126a50;
            FUN_1431248b0(uVar1);
          }
        }
        uVar12 = uVar12 - 1;
        lVar13 = lVar13 + -4;
      } while (0 < (int)uVar12);
    }
    lVar13 = (longlong)(*DAT_146b50db0 + -1);
    if (-1 < *DAT_146b50db0 + -1) {
      do {
        uVar1 = *(undefined8 *)(DAT_146b50d90 + lVar13 * 8);
        *(undefined8 *)(auStack_68 + lVar20 + -8) = 0x143126ad0;
        FUN_1431248b0(uVar1);
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
    lVar13 = (longlong)(DAT_146b50d98 + -1);
    if (-1 < DAT_146b50d98 + -1) {
      do {
        uVar1 = *(undefined8 *)(DAT_146b50d90 + lVar13 * 8);
        *(undefined8 *)(auStack_68 + lVar20 + -8) = 0x143126b00;
        FUN_143188820(uVar1);
        if (DAT_146b50d88 != '\0') {
          lVar2 = *(longlong *)(DAT_146b50d90 + lVar13 * 8);
          for (lVar3 = *(longlong *)(lVar2 + 0x30); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x40))
          {
            if ((((*(uint *)(lVar3 + 0x168) >> 3 & 1) != 0) && (*(longlong *)(lVar3 + 0x20) != 0))
               && ((((byte)*(uint *)(lVar3 + 0x168) & 3) != 3 &&
                   (lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + 0x70), lVar4 != 0)))) {
              *(undefined8 *)(auStack_68 + lVar20 + -8) = 0x143126b56;
              FUN_143186450(lVar2,lVar4,lVar3);
            }
          }
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
    uVar11 = (ulonglong)DAT_146b50da8;
  }
LAB_143126b6b:
  plVar14 = DAT_146b50da0;
  if (DAT_146b50da0 != DAT_146b50da0 + uVar11) {
    do {
      lVar20 = *plVar14;
      if (*(int *)(lVar20 + 0x290) != 0x2c) {
        if (*(int *)(lVar20 + 0x290) == 0x2e) {
          *(undefined8 *)(puVar15 + -8) = 0x143126bab;
          FUN_14316ec90(lVar20,lVar20 + 600);
        }
        else {
          *(undefined8 *)(puVar15 + -8) = 0x143126b9d;
          CAkVPLSrcCbxNode::ReleaseBuffer();
        }
      }
      *(undefined8 *)(puVar15 + -8) = 0x143126bba;
      FUN_143125a60(lVar20,lVar20 + 600);
      if (*(int *)(lVar20 + 0x248) == 2) {
        if (plVar14 < DAT_146b50da0 + ((ulonglong)DAT_146b50da8 - 1)) {
          plVar19 = plVar14;
          plVar16 = plVar14;
          for (lVar13 = ((ulonglong)
                         ((longlong)(DAT_146b50da0 + ((ulonglong)DAT_146b50da8 - 1)) +
                         (-1 - (longlong)plVar14)) >> 3) + 1; plVar16 = plVar16 + 1, lVar13 != 0;
              lVar13 = lVar13 + -1) {
            *plVar19 = *plVar16;
            plVar19 = plVar19 + 1;
          }
        }
        DAT_146b50da8 = DAT_146b50da8 - 1;
        *(undefined8 *)(puVar15 + -8) = 0x143126c0d;
        CAkLEngine::VPLDestroySource(lVar20,0);
      }
      else {
        plVar14 = plVar14 + 1;
      }
    } while (plVar14 != DAT_146b50da0 + DAT_146b50da8);
  }
  return;
}



// FUNCTION 143126c50 ReevaluateGraph body=521 status=ok
// SIG undefined ReevaluateGraph(void)

void CAkLEngine::ReevaluateGraph(char param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 local_res10 [8];
  
  puVar11 = DAT_146b50d90;
  if (DAT_146b50d90 != DAT_146b50d90 + DAT_146b50d98) {
    do {
      plVar4 = (longlong *)*puVar11;
      if (param_1 == '\0') {
        FUN_1431254c0(plVar4);
        lVar9 = plVar4[8];
        iVar8 = 0;
        while (iVar6 = iVar8, lVar9 != 0) {
          piVar1 = (int *)(lVar9 + 0x164);
          lVar9 = *(longlong *)(lVar9 + 0x48);
          iVar8 = iVar6 + 1;
          if (*piVar1 != 0) {
            iVar8 = iVar6;
          }
        }
        if (iVar6 == 0) {
          if ((plVar4[8] == 0) &&
             (((plVar4[0x10] == 0 || (*(longlong *)(plVar4[0x10] + 0x88) == 0)) &&
              (lVar9 = CAkOutputMgr::FindDevice(), lVar9 != 0)))) {
            uVar2 = *(uint *)(lVar9 + 0x3c);
            puVar10 = (uint *)(**(code **)(*plVar4 + 0x78))(plVar4,local_res10);
            uVar3 = *puVar10;
            if ((((char)uVar3 == (char)uVar2) && (((uVar3 ^ uVar2) & 0xf00) == 0)) &&
               (((uVar3 ^ uVar2) & 0xfffff000) == 0)) goto LAB_143126e50;
          }
          goto LAB_143126d37;
        }
LAB_143126e50:
        puVar11 = puVar11 + 1;
      }
      else {
LAB_143126d37:
        lVar7 = g_LEngineDefaultPoolId;
        if (plVar4 != (longlong *)0x0) {
          if ((((plVar4[8] == 0) &&
               ((plVar4[0x10] == 0 || (*(longlong *)(plVar4[0x10] + 0x88) == 0)))) &&
              (lVar9 = CAkOutputMgr::FindDevice(), lVar9 != 0)) &&
             ((*(longlong **)(lVar9 + 0x168) == plVar4 ||
              (*(longlong **)(lVar9 + 0x168) == (longlong *)0x0)))) {
            AkDevice::TopNodeDeleted(lVar9);
          }
          FUN_143185290(plVar4);
          AK::MemoryMgr::Free(lVar7,plVar4);
        }
        if (puVar11 < DAT_146b50d90 + ((ulonglong)DAT_146b50d98 - 1)) {
          puVar13 = puVar11;
          puVar12 = puVar11;
          for (lVar9 = ((ulonglong)
                        ((longlong)(DAT_146b50d90 + ((ulonglong)DAT_146b50d98 - 1)) +
                        (-1 - (longlong)puVar11)) >> 3) + 1; puVar12 = puVar12 + 1, lVar9 != 0;
              lVar9 = lVar9 + -1) {
            *puVar13 = *puVar12;
            puVar13 = puVar13 + 1;
          }
        }
        DAT_146b50d98 = DAT_146b50d98 - 1;
        DAT_146b50d89 = 1;
      }
    } while (puVar11 != DAT_146b50d90 + DAT_146b50d98);
  }
  puVar11 = DAT_146b50da0;
  if (DAT_146b50da0 != DAT_146b50da0 + DAT_146b50da8) {
    do {
      uVar5 = *puVar11;
      FUN_1431254c0(uVar5);
      FUN_143124da0(uVar5);
      puVar11 = puVar11 + 1;
    } while (puVar11 != DAT_146b50da0 + DAT_146b50da8);
  }
  return;
}



// FUNCTION 143126e60 ResetBusVolume body=136 status=ok
// SIG undefined ResetBusVolume(void)

void CAkLEngine::ResetBusVolume(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)DAT_146b50d98;
  plVar4 = DAT_146b50d90;
  plVar5 = DAT_146b50d90;
  if (DAT_146b50d90 != DAT_146b50d90 + uVar6) {
    do {
      lVar1 = *(longlong *)(*plVar4 + 0x80);
      if (lVar1 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(lVar1 + 0x10);
      }
      if ((iVar3 == param_1) && (plVar2 = *(longlong **)(*plVar4 + 8), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0,5);
        uVar6 = (ulonglong)DAT_146b50d98;
        plVar5 = DAT_146b50d90;
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar5 + uVar6);
  }
  return;
}



// FUNCTION 143126ef0 ResolveCommandVPL body=141 status=ok
// SIG undefined ResolveCommandVPL(void)

longlong CAkLEngine::ResolveCommandVPL(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  plVar2 = DAT_146b50da0;
  while( true ) {
    if (plVar2 == DAT_146b50da0 + DAT_146b50da8) {
      lVar3 = *(longlong *)(lVar1 + 0x228);
      if ((lVar3 == 0) ||
         (((*(longlong *)(lVar3 + 0x238) == 0 ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x238) + 0x18) != lVar1)) &&
          (*(char *)((longlong)param_1 + 0xc) != '\x04')))) {
        lVar3 = 0;
      }
      return lVar3;
    }
    lVar3 = *plVar2;
    if (((*(longlong *)(lVar3 + 0x238) != 0) &&
        (*(longlong *)(*(longlong *)(lVar3 + 0x238) + 0x18) == lVar1)) ||
       ((*(char *)((longlong)param_1 + 0xc) == '\x04' &&
        ((*(longlong *)(lVar3 + 0x240) != 0 &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x240) + 0x18) == lVar1)))))) break;
    plVar2 = plVar2 + 1;
  }
  if (*(int *)(lVar3 + 0x248) != 0) {
    *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) | 0x100;
  }
  return lVar3;
}



// FUNCTION 143126f80 FUN_143126f80 body=410 status=ok
// SIG undefined FUN_143126f80(void)

void FUN_143126f80(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 4;
LAB_143126fb0:
  uVar3 = (uint)uVar4;
  uVar5 = uVar4;
  while (uVar4 = uVar5, uVar3 != 0) {
    uVar3 = (int)uVar4 - 1;
    uVar5 = (ulonglong)uVar3;
    plVar1 = *(longlong **)(param_1 + 0x200 + uVar5 * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
      iVar2 = *(int *)(param_2 + 0x38);
      if (iVar2 != 0x2b) {
        if (iVar2 == 0x2d) goto LAB_143127070;
        goto joined_r0x000143126ffb;
      }
    }
  }
LAB_143126fe6:
  CAkVPLPitchNode::GetBuffer(param_1 + 0x80,param_2);
  while (iVar2 = *(int *)(param_2 + 0x38), iVar2 == 0x2b) {
    *(undefined2 *)(param_2 + 0x10) = DAT_1467bdcb8;
    (**(code **)(**(longlong **)(param_1 + 0x238) + 0x58))(*(longlong **)(param_1 + 0x238),param_2);
    iVar2 = *(int *)(param_2 + 0x38);
    if (iVar2 == 0x2e) {
      FUN_14316e990(param_1);
      iVar2 = *(int *)(param_2 + 0x38);
    }
    if ((iVar2 != 0x2d) && (iVar2 != 0x11)) {
      return;
    }
    CAkVPLPitchNode::ConsumeBuffer(param_1 + 0x80,param_2);
  }
  if (iVar2 != 0x2d) {
joined_r0x000143126ffb:
    if (iVar2 != 0x11) {
      return;
    }
  }
LAB_143127070:
  do {
    uVar3 = (uint)uVar4;
    if (3 < uVar3) {
      CAkVPLBQFNode::ConsumeBuffer(param_1 + 0x178,param_2);
      FUN_1431812a0(param_1 + 0x220,param_2);
      FUN_14316e6c0(param_1,param_2);
      iVar2 = *(int *)(param_2 + 0x38);
      if ((iVar2 != 0x2d) && (iVar2 != 0x11)) {
        return;
      }
      *(int *)(param_2 + 0xc) = iVar2;
      *(longlong *)(param_1 + 0x70) = param_1 + 600;
      if (*(longlong *)(param_2 + 0x20) == 0) {
        return;
      }
      FUN_143151ac0(DAT_146b50b00,param_2);
      return;
    }
    plVar1 = *(longlong **)(param_1 + 0x200 + uVar4 * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
      iVar2 = *(int *)(param_2 + 0x38);
      if (iVar2 == 0x2b) break;
      if ((iVar2 != 0x2d) && (iVar2 != 0x11)) {
        return;
      }
    }
    uVar4 = (ulonglong)(uVar3 + 1);
  } while( true );
  if (uVar3 != 0) goto LAB_143126fb0;
  goto LAB_143126fe6;
}



// FUNCTION 143127130 FUN_143127130 body=478 status=ok
// SIG undefined FUN_143127130(void)

undefined8 * FUN_143127130(longlong *param_1,uint *param_2,undefined1 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  
  uVar2 = *param_2;
  iVar10 = 0;
  iVar11 = (int)param_1[1] + -1;
  if (-1 < iVar11) {
    lVar8 = *param_1;
    do {
      iVar5 = (iVar11 - iVar10) / 2 + iVar10;
      lVar7 = (longlong)iVar5;
      uVar1 = *(uint *)(lVar8 + lVar7 * 0x18);
      if ((uVar2 < uVar1) ||
         ((uVar2 == uVar1 &&
          (*(ulonglong *)(param_2 + 2) < *(ulonglong *)(lVar8 + 8 + lVar7 * 0x18))))) {
        iVar11 = iVar5 + -1;
      }
      else {
        if ((uVar2 <= uVar1) &&
           ((uVar2 != uVar1 ||
            (*(ulonglong *)(param_2 + 2) <= *(ulonglong *)(lVar8 + 8 + lVar7 * 0x18))))) {
          *param_3 = 1;
          return (undefined8 *)(*param_1 + lVar7 * 0x18);
        }
        iVar10 = iVar5 + 1;
      }
    } while (iVar10 <= iVar11);
  }
  *param_3 = 0;
  lVar8 = *param_1;
  if (lVar8 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = lVar8 + (longlong)iVar10 * 0x18;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if (lVar7 == 0) {
    if ((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
       (cVar4 = FUN_143126340(param_1,1), cVar4 == '\0')) {
      return (undefined8 *)0x0;
    }
    if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
      return (undefined8 *)0x0;
    }
    puVar9 = (undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (puVar9 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *(undefined4 *)(puVar9 + 2) = 0xff7fffff;
  }
  else {
    lVar8 = (lVar7 - lVar8) / 6 + (lVar7 - lVar8 >> 0x3f);
    if (((*(uint *)((longlong)param_1 + 0xc) <= uVar2) &&
        (cVar4 = FUN_143126340(param_1,1), cVar4 == '\0')) ||
       (*(uint *)((longlong)param_1 + 0xc) <= uVar2)) {
      return (undefined8 *)0x0;
    }
    lVar7 = *param_1;
    puVar9 = (undefined8 *)(lVar7 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    if (puVar9 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar9 + 2) = 0xff7fffff;
      lVar7 = *param_1;
    }
    uVar6 = (lVar8 >> 2) - (lVar8 >> 0x3f) & 0xffffffff;
    if ((undefined8 *)(lVar7 + uVar6 * 0x18) < puVar9) {
      do {
        *puVar9 = puVar9[-3];
        puVar9[1] = puVar9[-2];
        puVar9[2] = puVar9[-1];
        puVar9 = puVar9 + -3;
        lVar7 = *param_1;
      } while ((undefined8 *)(lVar7 + uVar6 * 0x18) < puVar9);
    }
    lVar8 = lVar7 + uVar6 * 0x18;
    if (lVar8 != 0) {
      *(undefined4 *)(lVar8 + 0x10) = 0xff7fffff;
      lVar7 = *param_1;
    }
    puVar9 = (undefined8 *)(lVar7 + uVar6 * 0x18);
  }
  if (puVar9 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)(param_2 + 2);
    *puVar9 = *(undefined8 *)param_2;
    puVar9[1] = uVar3;
  }
  return puVar9;
}



// FUNCTION 143127310 FUN_143127310 body=97 status=ok
// SIG undefined FUN_143127310(void)

ulonglong FUN_143127310(void)

{
  bool bVar1;
  uint uVar2;
  ulonglong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  
  bVar1 = AK::MemoryMgr::IsInitialized();
  if ((bVar1) && (AK::IAkStreamMgr::m_pStreamMgr != (IAkStreamMgr *)0x0)) {
    uVar3 = FUN_143123810();
    if ((int)uVar3 == 1) {
      uVar6 = DAT_146b50c08;
      uVar3 = FUN_143128850();
      lVar4 = (long)uVar6;
      if ((int)uVar3 == 1) {
        uVar3 = CAkLEngineCmds::Init();
        if ((int)uVar3 == 1) {
          AK::MemoryMgr::StartProfileThreadUsage(lVar4);
          uVar2 = CAkOutputMgr::Init();
          uVar5 = 1;
          if (uVar2 != 1) {
            uVar5 = uVar2;
          }
          return (ulonglong)uVar5;
        }
      }
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}



// FUNCTION 143127380 FUN_143127380 body=1198 status=ok
// SIG undefined FUN_143127380(void)

void FUN_143127380(void)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  
  for (lVar18 = DAT_146b50e50; iVar1 = DAT_146b50d10, lVar18 != 0;
      lVar18 = *(longlong *)(lVar18 + 8)) {
    cVar5 = (**(code **)(**(longlong **)(lVar18 + 0x148) + 0x50))();
    if (cVar5 != '\0') {
      (**(code **)(**(longlong **)(lVar18 + 0x148) + 0x58))();
      iVar1 = *(int *)(DAT_146b50b78 + 0x78);
      if ((DAT_146b50d10 == 0) || (8 < (uint)(iVar1 - DAT_146b50d10))) break;
    }
  }
  DAT_146b50d10 = iVar1;
  if ((DAT_146b50e1e == '\0') || (DAT_1467bdcd0 != '\0')) {
    cVar5 = '\x01';
  }
  else {
    cVar5 = '\0';
  }
  if (*(int *)(DAT_146b50b70 + 8) != 0) {
    QueryPerformanceCounter((LARGE_INTEGER *)(DAT_146b50b70 + 0x48));
  }
  FUN_143189b10(DAT_1467bdcb8);
  FUN_143124330();
  FUN_1431613c0();
  if (DAT_146b50c18 == 0) {
    lVar18 = 0;
    plVar11 = DAT_146b50da0;
    if (DAT_146b50da0 != DAT_146b50da0 + DAT_146b50da8) {
      do {
        lVar2 = *plVar11;
        lVar10 = lVar2 + 600;
        *(undefined4 *)(lVar2 + 0x290) = 0x2c;
        if (((*(int *)(lVar2 + 0x248) == 1) && (cVar6 = FUN_14316ef70(lVar2,lVar10), cVar6 != '\0'))
           && (cVar5 != '\0')) {
          *(undefined2 *)(lVar2 + 0x26a) = 0;
          *(undefined2 *)(lVar2 + 0x270) = 0;
          *(undefined8 *)(lVar2 + 0x278) = 0;
          *(undefined4 *)(lVar2 + 0x280) = 0xffffffff;
          *(undefined4 *)(lVar2 + 0x290) = 0x2b;
          FUN_143126f80(lVar2,lVar10);
          if (*(int *)(lVar2 + 0x290) == 0x2e) {
            FUN_14316ec90(lVar2,lVar10);
          }
          else {
            lVar16 = *(longlong *)(lVar2 + 0x70);
            if (lVar16 != 0) {
              for (lVar8 = *(longlong *)(lVar2 + 0x40); lVar8 != 0;
                  lVar8 = *(longlong *)(lVar8 + 0x48)) {
                if ((*(longlong *)(lVar8 + 0x20) != 0) &&
                   (((byte)*(undefined4 *)(lVar8 + 0x168) & 3) != 3)) {
                  uVar7 = FARSupportInterface::GetXRTrackingSystem(lVar8);
                  FUN_143186450(uVar7,lVar16,lVar8);
                }
              }
            }
            CAkVPLSrcCbxNode::ReleaseBuffer(lVar2);
          }
        }
        FUN_143125a60(lVar2,lVar10);
        if (*(int *)(lVar2 + 0x248) == 2) {
          if (plVar11 < DAT_146b50da0 + ((ulonglong)DAT_146b50da8 - 1)) {
            plVar15 = plVar11;
            plVar13 = plVar11;
            for (lVar10 = ((ulonglong)
                           ((longlong)(DAT_146b50da0 + ((ulonglong)DAT_146b50da8 - 1)) +
                           (-1 - (longlong)plVar11)) >> 3) + 1; plVar13 = plVar13 + 1, lVar10 != 0;
                lVar10 = lVar10 + -1) {
              *plVar15 = *plVar13;
              plVar15 = plVar15 + 1;
            }
          }
          DAT_146b50da8 = DAT_146b50da8 - 1;
          CAkLEngine::VPLDestroySource(lVar2,0);
        }
        else {
          plVar11 = plVar11 + 1;
        }
      } while (plVar11 != DAT_146b50da0 + DAT_146b50da8);
    }
    lVar10 = DAT_146b50e50;
    if (((cVar5 != '\0') && (DAT_146b50d98 != 0)) && (DAT_146b50d89 == '\0')) {
      lVar10 = (longlong)(int)(DAT_146b50d98 - 1);
      if (-1 < (int)(DAT_146b50d98 - 1)) {
        do {
          lVar2 = *(longlong *)(DAT_146b50d90 + lVar10 * 8);
          for (lVar16 = *(longlong *)(lVar2 + 0x30); lVar16 != 0;
              lVar16 = *(longlong *)(lVar16 + 0x40)) {
            if ((((*(longlong *)(lVar16 + 0x20) != 0) &&
                 (((byte)*(uint *)(lVar16 + 0x168) & 3) != 3)) &&
                ((*(byte *)(*(longlong *)(lVar16 + 0x50) + 0x68) & 4) != 0)) &&
               ((lVar8 = *(longlong *)(*(longlong *)(lVar16 + 0x50) + 0x70), lVar8 != 0 &&
                ((*(uint *)(lVar16 + 0x168) >> 3 & 1) == 0)))) {
              FUN_143186450(lVar2,lVar8,lVar16);
            }
          }
          lVar8 = FUN_143187240(lVar2);
          lVar16 = lVar8;
          if (((*(longlong *)(lVar2 + 0x40) == 0) &&
              (lVar16 = lVar18, *(short *)(lVar8 + 0x12) != 0)) &&
             (((*(longlong *)(lVar2 + 0x80) == 0 ||
               (*(longlong *)(*(longlong *)(lVar2 + 0x80) + 0x88) == 0)) &&
              (lVar9 = CAkOutputMgr::FindDevice(), lVar9 != 0)))) {
            AkDevice::PushData(lVar9,lVar8,*(undefined8 *)(lVar2 + 0xc0));
          }
          lVar10 = lVar10 + -1;
          *(longlong *)(lVar2 + 0x70) = lVar16;
        } while (-1 < lVar10);
      }
      lVar18 = (longlong)(int)(DAT_146b50d98 - 1);
      lVar10 = DAT_146b50e50;
      if (-1 < (int)(DAT_146b50d98 - 1)) {
        do {
          uVar7 = *(undefined8 *)(DAT_146b50d90 + lVar18 * 8);
          FUN_143188820(uVar7);
          if (DAT_146b50d88 != '\0') {
            CAkLEngine::FeedbackTask(uVar7);
          }
          lVar18 = lVar18 + -1;
          lVar10 = DAT_146b50e50;
        } while (-1 < lVar18);
      }
    }
  }
  else {
    FUN_1431267b0(cVar5);
    lVar10 = DAT_146b50e50;
  }
  for (; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 8)) {
    AkDevice::FrameEnd(lVar10);
  }
  uVar12 = DAT_146b50d98 - 1;
  DAT_1467bdcd8 = DAT_1467bdcdc;
  if (-1 < (int)uVar12) {
    lVar18 = (longlong)(int)uVar12 * 8;
    do {
      pvVar3 = *(void **)(lVar18 + DAT_146b50d90);
      if (((*(int *)((longlong)pvVar3 + 0x358) == 1) ||
          (*(longlong *)((longlong)pvVar3 + 0x30) != 0)) ||
         ((*(byte *)((longlong)pvVar3 + 0x364) & 2) != 0)) {
        *(byte *)((longlong)pvVar3 + 0x364) = *(byte *)((longlong)pvVar3 + 0x364) & 0xfd;
      }
      else {
        puVar14 = (undefined8 *)(DAT_146b50d90 + (ulonglong)uVar12 * 8);
        puVar17 = (undefined8 *)(DAT_146b50d90 + ((ulonglong)DAT_146b50d98 - 1) * 8);
        if (puVar14 < puVar17) {
          lVar10 = ((ulonglong)((longlong)puVar17 + (-1 - (longlong)puVar14)) >> 3) + 1;
          puVar17 = puVar14;
          for (; puVar14 = puVar14 + 1, lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar17 = *puVar14;
            puVar17 = puVar17 + 1;
          }
        }
        lVar4 = g_LEngineDefaultPoolId;
        DAT_146b50d98 = DAT_146b50d98 - 1;
        if (((*(longlong *)((longlong)pvVar3 + 0x40) == 0) &&
            ((*(longlong *)((longlong)pvVar3 + 0x80) == 0 ||
             (*(longlong *)(*(longlong *)((longlong)pvVar3 + 0x80) + 0x88) == 0)))) &&
           ((lVar10 = CAkOutputMgr::FindDevice(), lVar10 != 0 &&
            ((*(void **)(lVar10 + 0x168) == pvVar3 || (*(void **)(lVar10 + 0x168) == (void *)0x0))))
           )) {
          AkDevice::TopNodeDeleted(lVar10);
        }
        FUN_143185290(pvVar3);
        AK::MemoryMgr::Free(lVar4,pvVar3);
        DAT_146b50d89 = '\x01';
      }
      lVar18 = lVar18 + -8;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}



// FUNCTION 143127830 FUN_143127830 body=243 status=ok
// SIG undefined FUN_143127830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143127830(void)

{
  if (DAT_146b50dd0 != (void *)0x0) {
    DAT_146b50dd8 = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,DAT_146b50dd0);
    DAT_146b50dd0 = (void *)0x0;
    _DAT_146b50ddc = 0;
  }
  CAkLEngineCmds::Term();
  if (DAT_146b50d90 != (void *)0x0) {
    DAT_146b50d98 = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,DAT_146b50d90);
    DAT_146b50d90 = (void *)0x0;
    _DAT_146b50d9c = 0;
  }
  if (DAT_146b50db0 != (void *)0x0) {
    DAT_146b50db8 = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,DAT_146b50db0);
    DAT_146b50db0 = (void *)0x0;
    DAT_146b50dbc = 0;
  }
  if (DAT_146b50dc0 != (void *)0x0) {
    DAT_146b50dc8 = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,DAT_146b50dc0);
    DAT_146b50dc0 = (void *)0x0;
    DAT_146b50dcc = 0;
  }
  if (DAT_146b50da0 != (void *)0x0) {
    DAT_146b50da8 = 0;
    AK::MemoryMgr::Free(g_LEngineDefaultPoolId,DAT_146b50da0);
    DAT_146b50da0 = (void *)0x0;
    DAT_146b50dac = 0;
  }
  CAkEffectsMgr::Term();
  CAkLEngine::TermPluginCustomGameData();
  CAkLEngine::DestroyLEnginePools();
  return;
}



// FUNCTION 143127930 SortSiblingVPLs body=487 status=ok
// SIG undefined SortSiblingVPLs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong CAkLEngine::SortSiblingVPLs
                    (ulonglong *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  int *_Dst;
  undefined8 *_Dst_00;
  uint *puVar9;
  size_t sVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  undefined8 auStack_60 [5];
  
  lVar14 = (longlong)(int)param_4;
  uVar13 = lVar14 * 4 + 0xf;
  if (uVar13 <= (ulonglong)(lVar14 * 4)) {
    uVar13 = 0xffffffffffffff0;
  }
  uVar13 = uVar13 & 0xfffffffffffffff0;
  auStack_60[0] = 0x143127989;
  lVar4 = -uVar13;
  uVar15 = 0;
  puVar9 = (uint *)(&stack0xffffffffffffffc8 + lVar4);
  if (0 < (int)param_4) {
    lVar8 = 0;
    uVar16 = param_3;
    do {
      uVar3 = *(undefined8 *)(*param_1 + (ulonglong)uVar16 * 8);
      *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x1431279c3;
      uVar13 = FUN_143182ce0(uVar3,param_2);
      uVar6 = (uint)uVar13;
      puVar9[lVar8] = uVar6;
      if (uVar15 < uVar6) {
        uVar15 = uVar6;
      }
      uVar16 = uVar16 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar14);
    uVar12 = (ulonglong)param_4;
    if (uVar15 != 0) {
      sVar10 = lVar14 * 8;
      uVar13 = sVar10 + 0xf;
      if (uVar13 <= sVar10) {
        uVar13 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_60 + lVar4) = 0x143127a0c;
      lVar14 = -(uVar13 & 0xfffffffffffffff0);
      uVar13 = *param_1;
      _Dst_00 = (undefined8 *)(&stack0xffffffffffffffc8 + lVar14 + lVar4);
      *(undefined8 *)((longlong)auStack_60 + lVar14 + lVar4) = 0x143127a27;
      ::_guard_xfg_dispatch_icall_nop(_Dst_00,(void *)(uVar13 + (ulonglong)param_3 * 8),sVar10);
      sVar10 = (ulonglong)(uVar15 + 1) * 4;
      uVar13 = sVar10 + 0xf;
      if (uVar13 <= sVar10) {
        uVar13 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_60 + lVar14 + lVar4) = 0x143127a44;
      lVar8 = -(uVar13 & 0xfffffffffffffff0);
      uVar13 = sVar10 + 0xf;
      _Dst = (int *)(&stack0xffffffffffffffc8 + lVar8 + lVar14 + lVar4);
      if (uVar13 <= sVar10) {
        uVar13 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_60 + lVar8 + lVar14 + lVar4) = 0x143127a61;
      lVar5 = -(uVar13 & 0xfffffffffffffff0);
      puVar1 = (undefined4 *)(&stack0xffffffffffffffc8 + lVar5 + lVar8 + lVar14 + lVar4);
      *(undefined8 *)((longlong)auStack_60 + lVar5 + lVar8 + lVar14 + lVar4) = 0x143127a73;
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,sVar10);
      puVar7 = puVar9;
      uVar13 = uVar12;
      if (0 < (int)param_4) {
        do {
          _Dst[*puVar7] = _Dst[*puVar7] + 1;
          uVar13 = uVar13 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar13 != 0);
      }
      uVar16 = uVar15 + 1;
      *puVar1 = 0;
      if (1 < uVar16) {
        uVar13 = (ulonglong)uVar15;
        lVar11 = (longlong)puVar1 - (longlong)_Dst;
        puVar7 = (uint *)(&stack0xffffffffffffffcc + lVar5 + lVar8 + lVar14 + lVar4);
        do {
          uVar16 = *(int *)(lVar11 + (longlong)_Dst) + *_Dst;
          _Dst = _Dst + 1;
          *puVar7 = uVar16;
          uVar13 = uVar13 - 1;
          puVar7 = puVar7 + 1;
        } while (uVar13 != 0);
      }
      uVar13 = (ulonglong)uVar16;
      if (0 < (int)param_4) {
        do {
          uVar15 = *puVar9;
          puVar9 = puVar9 + 1;
          uVar3 = *_Dst_00;
          _Dst_00 = _Dst_00 + 1;
          iVar2 = puVar1[uVar15];
          puVar1[uVar15] = iVar2 + 1;
          uVar13 = *param_1;
          *(undefined8 *)(uVar13 + (ulonglong)(iVar2 + param_3) * 8) = uVar3;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      return CONCAT71((int7)(uVar13 >> 8),1);
    }
  }
  return uVar13 & 0xffffffffffffff00;
}



// FUNCTION 143127b20 FUN_143127b20 body=1079 status=ok
// SIG undefined FUN_143127b20(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143127b20(void)

{
  size_t _Size;
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 uVar7;
  int *piVar8;
  undefined1 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int *piVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int local_res8 [2];
  undefined8 auStack_50 [5];
  
  uVar6 = DAT_146b50d98;
  plVar5 = DAT_146b50d90;
  if (DAT_146b50d89 != '\0') {
    uVar16 = (ulonglong)DAT_146b50d98;
    plVar10 = DAT_146b50d90;
    uVar14 = uVar16;
    if (DAT_146b50d98 != 0) {
      do {
        *(undefined4 *)(*plVar10 + 0x360) = 0x7fffffff;
        uVar14 = uVar14 - 1;
        plVar10 = plVar10 + 1;
      } while (uVar14 != 0);
      local_res8[0] = 0;
      uVar17 = 0;
      DAT_146b50d88 = '\0';
      plVar10 = plVar5;
      if (uVar6 != 0) {
        do {
          lVar4 = *plVar10;
          if ((*(longlong *)(lVar4 + 0x40) != 0) ||
             ((*(longlong *)(lVar4 + 0x80) != 0 &&
              (*(longlong *)(*(longlong *)(lVar4 + 0x80) + 0x88) != 0)))) break;
          *(byte *)(lVar4 + 0x364) = *(byte *)(lVar4 + 0x364) | 1;
          if (local_res8[0] < 0) {
            local_res8[0] = 0;
          }
          if (0x7ffffffe < *(uint *)(lVar4 + 0x360)) {
            *(undefined4 *)(lVar4 + 0x360) = 0;
          }
          for (lVar19 = *(longlong *)(lVar4 + 0x30); lVar19 != 0;
              lVar19 = *(longlong *)(lVar19 + 0x40)) {
            lVar15 = *(longlong *)(lVar19 + 0x50);
            if ((*(byte *)(lVar15 + 0x68) & 4) != 0) {
              *(uint *)(lVar19 + 0x168) =
                   *(uint *)(lVar19 + 0x168) ^
                   ((uint)*(byte *)(lVar15 + 0x364) << 3 ^ *(uint *)(lVar19 + 0x168)) & 8;
              if ((*(byte *)(lVar15 + 0x364) & 1) == 0) {
                auStack_50[0] = 0x143127c37;
                FUN_1431282a0(lVar15,1,local_res8,&DAT_146b50d88);
              }
              else {
                DAT_146b50d88 = '\x01';
              }
            }
          }
          *(byte *)(lVar4 + 0x364) = *(byte *)(lVar4 + 0x364) & 0xfe;
          uVar17 = uVar17 + 1;
          plVar10 = plVar10 + 1;
        } while (uVar17 < uVar6);
      }
      uVar17 = local_res8[0] + 1;
      uVar14 = uVar16 * 8 + 0xf;
      if (uVar14 <= uVar16 * 8) {
        uVar14 = 0xffffffffffffff0;
      }
      auStack_50[0] = 0x143127c94;
      lVar4 = -(uVar14 & 0xfffffffffffffff0);
      plVar10 = (longlong *)(&stack0xffffffffffffffd8 + lVar4);
      piVar8 = DAT_146b50db0;
      uVar18 = DAT_146b50dbc;
      if ((DAT_146b50db8 <= uVar17) && (DAT_146b50dbc < uVar17)) {
        uVar18 = (DAT_146b50dbc - DAT_146b50db8) + uVar17;
        *(undefined8 *)((longlong)auStack_50 + lVar4) = 0x143127cce;
        piVar8 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar18 << 2);
        if (piVar8 == (int *)0x0) {
          return 2;
        }
        uVar14 = (ulonglong)DAT_146b50db8;
        if ((DAT_146b50db0 != (int *)0x0) && (DAT_146b50db0 != piVar8)) {
          uVar11 = 0;
          if (uVar14 != 0) {
            do {
              piVar8[uVar11] = DAT_146b50db0[uVar11];
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar14);
          }
          *(undefined8 *)((longlong)auStack_50 + lVar4) = 0x143127d20;
          AK::MemoryMgr::Free(g_LEngineDefaultPoolId,DAT_146b50db0);
        }
      }
      DAT_146b50dbc = uVar18;
      DAT_146b50db0 = piVar8;
      DAT_146b50db8 = uVar17;
      puVar9 = DAT_146b50dc0;
      uVar18 = DAT_146b50dcc;
      if ((DAT_146b50dc8 <= uVar17) && (DAT_146b50dcc < uVar17)) {
        uVar18 = (DAT_146b50dcc - DAT_146b50dc8) + uVar17;
        *(undefined8 *)((longlong)auStack_50 + lVar4) = 0x143127d62;
        puVar9 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,(ulonglong)uVar18);
        if (puVar9 == (undefined1 *)0x0) {
          return 2;
        }
        uVar14 = (ulonglong)DAT_146b50dc8;
        if ((DAT_146b50dc0 != (undefined1 *)0x0) && (DAT_146b50dc0 != puVar9)) {
          uVar11 = 0;
          if (uVar14 != 0) {
            do {
              puVar9[uVar11] = DAT_146b50dc0[uVar11];
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar14);
          }
          *(undefined8 *)((longlong)auStack_50 + lVar4) = 0x143127db1;
          AK::MemoryMgr::Free(g_LEngineDefaultPoolId,DAT_146b50dc0);
        }
      }
      DAT_146b50dcc = uVar18;
      DAT_146b50dc0 = puVar9;
      piVar8 = DAT_146b50db0;
      lVar19 = (longlong)(int)uVar17;
      _Size = lVar19 * 4;
      *(undefined8 *)((longlong)auStack_50 + lVar4) = 0x143127de4;
      DAT_146b50dc8 = uVar17;
      _guard_xfg_dispatch_icall_nop(DAT_146b50db0,0,_Size);
      if (uVar6 != 0) {
        plVar12 = plVar10;
        uVar14 = uVar16;
        do {
          lVar15 = *(longlong *)(((longlong)plVar5 - (longlong)plVar10) + (longlong)plVar12);
          *plVar12 = lVar15;
          iVar2 = *(int *)(lVar15 + 0x360);
          if (iVar2 != 0x7fffffff) {
            piVar8[iVar2] = piVar8[iVar2] + 1;
          }
          plVar12 = plVar12 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      uVar14 = _Size + 0xf;
      if (uVar14 <= _Size) {
        uVar14 = 0xffffffffffffff0;
      }
      *(undefined8 *)((longlong)auStack_50 + lVar4) = 0x143127e3f;
      puVar1 = (undefined4 *)(&stack0xffffffffffffffd8 + -(uVar14 & 0xfffffffffffffff0) + lVar4);
      *puVar1 = 0;
      if (1 < lVar19) {
        lVar15 = lVar19 + -1;
        piVar13 = piVar8;
        do {
          *(int *)(((longlong)puVar1 - (longlong)piVar8) + 4 + (longlong)piVar13) =
               *(int *)(((longlong)puVar1 - (longlong)piVar8) + (longlong)piVar13) + *piVar13;
          piVar13 = piVar13 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      uVar11 = uVar16;
      if (uVar6 != 0) {
        do {
          lVar15 = *plVar10;
          if (*(int *)(lVar15 + 0x360) == 0x7fffffff) {
            uVar16 = (ulonglong)((int)uVar16 - 1);
            plVar5[uVar16] = lVar15;
          }
          else {
            plVar5[(int)puVar1[*(int *)(lVar15 + 0x360)]] = lVar15;
            puVar1[*(int *)(lVar15 + 0x360)] = puVar1[*(int *)(lVar15 + 0x360)] + 1;
          }
          plVar10 = plVar10 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (DAT_146b50d88 != '\0') {
        uVar16 = 1;
        *DAT_146b50dc0 = 0;
        if (1 < lVar19) {
          lVar19 = lVar19 + -1;
          lVar15 = -4 - (longlong)piVar8;
          do {
            piVar8 = piVar8 + 1;
            if (*piVar8 < 2) {
              DAT_146b50dc0[uVar16] = 0;
            }
            else {
              uVar3 = *(undefined4 *)((longlong)puVar1 + lVar15 + (longlong)piVar8);
              puVar9 = DAT_146b50dc0 + uVar16;
              *(undefined8 *)((longlong)auStack_50 + -(uVar14 & 0xfffffffffffffff0) + lVar4) =
                   0x143127f17;
              uVar7 = CAkLEngine::SortSiblingVPLs(&DAT_146b50d90,uVar16,uVar3);
              *puVar9 = uVar7;
            }
            uVar16 = (ulonglong)((int)uVar16 + 1);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
        }
      }
    }
    DAT_146b50d89 = '\0';
  }
  return 1;
}



// FUNCTION 143127f60 Stop body=303 status=ok
// SIG undefined Stop(void)

void CAkLEngine::Stop(void)

{
  undefined8 uVar1;
  void *pvVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  
  puVar5 = DAT_146b50da0;
  uVar8 = (ulonglong)DAT_146b50da8;
  puVar9 = DAT_146b50da0 + uVar8;
  uVar3 = DAT_146b50da8;
  while (DAT_146b50da8 = uVar3, puVar5 != puVar9) {
    DAT_146b50da8 = (uint)uVar8;
    uVar1 = *puVar5;
    if (puVar5 < DAT_146b50da0 + (uVar8 - 1)) {
      puVar10 = puVar5;
      puVar9 = puVar5;
      DAT_146b50da8 = uVar3;
      for (lVar7 = ((ulonglong)((longlong)(DAT_146b50da0 + (uVar8 - 1)) + (-1 - (longlong)puVar5))
                   >> 3) + 1; puVar9 = puVar9 + 1, lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar10 = *puVar9;
        puVar10 = puVar10 + 1;
      }
    }
    DAT_146b50da8 = DAT_146b50da8 - 1;
    VPLDestroySource(uVar1,0);
    uVar8 = (ulonglong)DAT_146b50da8;
    uVar3 = DAT_146b50da8;
    puVar9 = DAT_146b50da0 + uVar8;
  }
  lVar7 = (longlong)(DAT_146b50d98 + -1);
  if (-1 < DAT_146b50d98 + -1) {
    do {
      lVar4 = g_LEngineDefaultPoolId;
      pvVar2 = *(void **)(DAT_146b50d90 + lVar7 * 8);
      if (pvVar2 != (void *)0x0) {
        if (((*(longlong *)((longlong)pvVar2 + 0x40) == 0) &&
            (((*(longlong *)((longlong)pvVar2 + 0x80) == 0 ||
              (*(longlong *)(*(longlong *)((longlong)pvVar2 + 0x80) + 0x88) == 0)) &&
             (lVar6 = CAkOutputMgr::FindDevice(), lVar6 != 0)))) &&
           ((*(void **)(lVar6 + 0x168) == pvVar2 || (*(void **)(lVar6 + 0x168) == (void *)0x0)))) {
          AkDevice::TopNodeDeleted(lVar6);
        }
        FUN_143185290(pvVar2);
        AK::MemoryMgr::Free(lVar4,pvVar2);
      }
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  DAT_146b50d98 = 0;
  CAkLEngineCmds::DestroyDisconnectedSources();
  return;
}



// FUNCTION 143128090 FUN_143128090 body=354 status=ok
// SIG undefined FUN_143128090(void)

void FUN_143128090(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *local_28 [2];
  
  if (DAT_146b50d90 != DAT_146b50d90 + DAT_146b50d98) {
    plVar6 = DAT_146b50d90;
    do {
      lVar1 = *plVar6;
      puVar3 = (undefined8 *)(lVar1 + 0x140);
      uVar5 = 0;
      do {
        if ((puVar3[1] != 0) &&
           (cVar2 = CAkEffectContextBase::IsUsingThisSlot(puVar3[1],param_1,*puVar3), cVar2 != '\0')
           ) goto LAB_1431281b0;
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 0x10;
      } while (uVar5 < 4);
      cVar2 = AK::CAkBusCtx::HasMixerPlugin(lVar1 + 0x80);
      if ((cVar2 != '\0') &&
         (lVar4 = *(longlong *)(lVar1 + 0x340),
         lVar4 != (ulonglong)*(uint *)(lVar1 + 0x348) * 0x20 + lVar4)) {
LAB_143128138:
        if (*(longlong *)(lVar4 + 0x18) != param_1) goto LAB_143128184;
        local_28[0] = (longlong *)0x0;
        AK::CAkBusCtx::GetMixerPlugin(lVar1 + 0x80,local_28);
        cVar2 = FUN_1431846f0(param_1,lVar4 + 8,*(undefined8 *)(*(longlong *)(lVar1 + 0x338) + 0x60)
                             );
        if (cVar2 != '\0') {
          if (local_28[0] != (longlong *)0x0) {
            (**(code **)(*local_28[0] + 0x10))();
            local_28[0] = (longlong *)0x0;
          }
          goto LAB_143128184;
        }
        if (local_28[0] != (longlong *)0x0) {
          (**(code **)(*local_28[0] + 0x10))();
          local_28[0] = (longlong *)0x0;
        }
LAB_1431281b0:
        FUN_143186cd0(lVar1);
      }
LAB_1431281b8:
      plVar6 = plVar6 + 1;
    } while (plVar6 != DAT_146b50d90 + DAT_146b50d98);
  }
  return;
LAB_143128184:
  lVar4 = lVar4 + 0x20;
  if (lVar4 == (ulonglong)*(uint *)(lVar1 + 0x348) * 0x20 + *(longlong *)(lVar1 + 0x340))
  goto LAB_1431281b8;
  goto LAB_143128138;
}



// FUNCTION 143128200 ReevaluateGraph body=7 status=ok
// SIG undefined ReevaluateGraph(void)

void CAkLEngine::ReevaluateGraph(void)

{
  ReevaluateGraph(1);
  return;
}



// FUNCTION 143128210 UpdateMixBusFX body=137 status=ok
// SIG undefined UpdateMixBusFX(void)

void CAkLEngine::UpdateMixBusFX(int param_1,byte param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)DAT_146b50d98;
  plVar3 = DAT_146b50d90;
  plVar4 = DAT_146b50d90;
  if (DAT_146b50d90 != DAT_146b50d90 + uVar5) {
    do {
      lVar1 = *(longlong *)(*plVar3 + 0x80);
      if (lVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(lVar1 + 0x10);
      }
      if (iVar2 == param_1) {
        FUN_143188b80(*plVar3,1 << (param_2 & 0x1f));
        uVar5 = (ulonglong)DAT_146b50d98;
        plVar4 = DAT_146b50d90;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar4 + uVar5);
  }
  return;
}



// FUNCTION 1431282a0 FUN_1431282a0 body=199 status=ok
// SIG undefined FUN_1431282a0(void)

void FUN_1431282a0(longlong param_1,int param_2,int *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  *(byte *)(param_1 + 0x364) = *(byte *)(param_1 + 0x364) | 1;
  if (*param_3 < param_2) {
    *param_3 = param_2;
  }
  if ((*(int *)(param_1 + 0x360) == 0x7fffffff) || (*(int *)(param_1 + 0x360) < param_2)) {
    *(int *)(param_1 + 0x360) = param_2;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 == 0) {
    *(byte *)(param_1 + 0x364) = *(byte *)(param_1 + 0x364) & 0xfe;
  }
  else {
    do {
      lVar1 = *(longlong *)(lVar2 + 0x50);
      if ((*(byte *)(lVar1 + 0x68) & 4) != 0) {
        *(uint *)(lVar2 + 0x168) =
             *(uint *)(lVar2 + 0x168) ^
             ((uint)*(byte *)(lVar1 + 0x364) << 3 ^ *(uint *)(lVar2 + 0x168)) & 8;
        if ((*(byte *)(lVar1 + 0x364) & 1) == 0) {
          FUN_1431282a0(lVar1,param_2 + 1,param_3,param_4);
        }
        else {
          *param_4 = 1;
        }
      }
      lVar2 = *(longlong *)(lVar2 + 0x40);
    } while (lVar2 != 0);
    *(byte *)(param_1 + 0x364) = *(byte *)(param_1 + 0x364) & 0xfe;
  }
  return;
}



// FUNCTION 143128370 VPLTryConnectSource body=181 status=ok
// SIG undefined VPLTryConnectSource(void)

undefined8 CAkLEngine::VPLTryConnectSource(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = CAkVPLSrcCbxNode::FetchStreamedData(param_2);
  if ((int)uVar4 == 0x3f) {
    return uVar4;
  }
  lVar1 = 0;
  lVar2 = DAT_146b51f58;
  do {
    if (lVar2 == 0) {
LAB_1431283f3:
      if ((int)uVar4 == 1) {
        uVar4 = FUN_1431257c0(param_2,param_1);
        return uVar4;
      }
      VPLDestroySource(param_2,1);
      return 2;
    }
    if (lVar2 == param_2) {
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar2 + 0x78);
        if (lVar2 != DAT_146b51f58) {
          *(longlong *)(lVar1 + 0x78) = *(longlong *)(lVar2 + 0x78);
          lVar3 = DAT_146b51f58;
        }
        DAT_146b51f58 = lVar3;
        if (lVar2 == DAT_146b51f50) {
          DAT_146b51f50 = lVar1;
        }
      }
      goto LAB_1431283f3;
    }
    lVar1 = lVar2;
    lVar2 = *(longlong *)(lVar2 + 0x78);
  } while( true );
}



// FUNCTION 143128430 FUN_143128430 body=532 status=ok
// SIG undefined FUN_143128430(void)

void FUN_143128430(longlong *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  
  uVar7 = MXCSR & 0x8000;
  MXCSR = MXCSR | 0x8000;
  do {
    lVar2 = *(longlong *)(*param_1 + (ulonglong)param_2 * 8);
    if (*(int *)(lVar2 + 0x290) == 0x2b) {
      lVar1 = lVar2 + 600;
      uVar6 = 4;
LAB_1431284b0:
      do {
        if ((int)uVar6 == 0) goto LAB_1431284e7;
        uVar6 = (ulonglong)((int)uVar6 - 1);
        plVar3 = *(longlong **)(lVar2 + 0x200 + uVar6 * 8);
      } while ((plVar3 == (longlong *)0x0) ||
              ((**(code **)(*plVar3 + 0x68))(plVar3,lVar1), *(int *)(lVar2 + 0x290) == 0x2b));
      if ((*(int *)(lVar2 + 0x290) == 0x2d) || (*(int *)(lVar2 + 0x290) == 0x11)) {
        do {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          while( true ) {
            uVar5 = (uint)uVar6;
            if (3 < uVar5) {
              CAkVPLBQFNode::ConsumeBuffer(lVar2 + 0x178,lVar1);
              FUN_1431812a0(lVar2 + 0x220,lVar1);
              FUN_14316e6c0(lVar2,lVar1);
              iVar4 = *(int *)(lVar2 + 0x290);
              if ((iVar4 == 0x2d) || (iVar4 == 0x11)) {
                *(int *)(lVar2 + 0x264) = iVar4;
                *(longlong *)(lVar2 + 0x70) = lVar2 + 600;
                if (*(longlong *)(lVar2 + 0x278) != 0) {
                  FUN_143151ac0(DAT_146b50b00,lVar1);
                }
              }
              goto LAB_143128602;
            }
            plVar3 = *(longlong **)(lVar2 + 0x200 + uVar6 * 8);
            if (plVar3 == (longlong *)0x0) break;
            (**(code **)(*plVar3 + 0x70))(plVar3,lVar1);
            iVar4 = *(int *)(lVar2 + 0x290);
            if (iVar4 == 0x2b) {
              if (uVar5 != 0) goto LAB_1431284b0;
LAB_1431284e7:
              CAkVPLPitchNode::GetBuffer(lVar2 + 0x80,lVar1);
              iVar4 = *(int *)(lVar2 + 0x290);
              if (iVar4 == 0x2b) {
                do {
                  *(undefined2 *)(lVar2 + 0x268) = DAT_1467bdcb8;
                  (**(code **)(**(longlong **)(lVar2 + 0x238) + 0x58))
                            (*(longlong **)(lVar2 + 0x238),lVar1);
                  if (*(int *)(lVar2 + 0x290) == 0x2e) {
                    FUN_14316e990(lVar2);
                  }
                  if ((*(int *)(lVar2 + 0x290) != 0x2d) && (*(int *)(lVar2 + 0x290) != 0x11))
                  goto LAB_143128602;
                  CAkVPLPitchNode::ConsumeBuffer(lVar2 + 0x80,lVar1);
                } while (*(int *)(lVar2 + 0x290) == 0x2b);
                iVar4 = *(int *)(lVar2 + 0x290);
              }
              if ((iVar4 != 0x2d) && (iVar4 != 0x11)) goto LAB_143128602;
            }
            else {
              if (iVar4 == 0x2d) break;
              if (iVar4 != 0x11) goto LAB_143128602;
              uVar6 = (ulonglong)(uVar5 + 1);
            }
          }
        } while( true );
      }
    }
LAB_143128602:
    param_2 = param_2 + 1;
    if (param_3 <= param_2) {
      MXCSR = MXCSR & 0xffff7fff | uVar7;
      return;
    }
  } while( true );
}



// FUNCTION 143128650 FUN_143128650 body=161 status=ok
// SIG undefined FUN_143128650(void)

undefined4 FUN_143128650(int param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int *piVar3;
  
  *param_2 = 0;
  for (piVar1 = DAT_146b50df0;
      (piVar1 != DAT_146b50df0 + (ulonglong)DAT_146b50df8 * 6 && (*piVar1 != param_1));
      piVar1 = piVar1 + 6) {
  }
  piVar3 = piVar1 + 2;
  if (piVar1 == DAT_146b50df0 + (ulonglong)DAT_146b50df8 * 6) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    plVar2 = (longlong *)(**(code **)piVar3)(&PTR_PTR_1467be108);
    *param_2 = plVar2;
    if (plVar2 == (longlong *)0x0) {
      return 2;
    }
    (**(code **)(*plVar2 + 0x18))(plVar2,param_3);
    return 1;
  }
  return 0x58;
}



// FUNCTION 143128700 FUN_143128700 body=95 status=ok
// SIG undefined FUN_143128700(void)

undefined8 FUN_143128700(undefined8 param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  
  for (piVar1 = DAT_146b50e00;
      (piVar1 != DAT_146b50e00 + (ulonglong)DAT_146b50e08 * 6 && (*piVar1 != param_3));
      piVar1 = piVar1 + 6) {
  }
  piVar3 = piVar1 + 2;
  if (piVar1 == DAT_146b50e00 + (ulonglong)DAT_146b50e08 * 6) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    if (param_2 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00014312875b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(piVar3 + 2))(param_1);
      return uVar2;
    }
                    /* WARNING: Could not recover jumptable at 0x000143128757. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)piVar3)();
    return uVar2;
  }
  return 0;
}



// FUNCTION 143128760 FUN_143128760 body=150 status=ok
// SIG undefined FUN_143128760(void)

int FUN_143128760(undefined8 param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  
  *param_3 = 0;
  for (piVar1 = DAT_146b50df0;
      (piVar1 != DAT_146b50df0 + (ulonglong)DAT_146b50df8 * 6 && (*piVar1 != param_2));
      piVar1 = piVar1 + 6) {
  }
  piVar3 = piVar1 + 2;
  if (piVar1 == DAT_146b50df0 + (ulonglong)DAT_146b50df8 * 6) {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0) {
    if (*(code **)(piVar3 + 2) != (code *)0x0) {
      lVar2 = (**(code **)(piVar3 + 2))(param_1);
      *param_3 = lVar2;
      return 2 - (uint)(lVar2 != 0);
    }
    return 1;
  }
  return 0x58;
}



// FUNCTION 143128800 GetSinkPlugin body=75 status=ok
// SIG undefined GetSinkPlugin(void)

undefined8 CAkEffectsMgr::GetSinkPlugin(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  for (piVar1 = DAT_146b50df0;
      (piVar1 != DAT_146b50df0 + (ulonglong)DAT_146b50df8 * 6 && (*piVar1 != param_1));
      piVar1 = piVar1 + 6) {
  }
  piVar2 = piVar1 + 2;
  if (piVar1 == DAT_146b50df0 + (ulonglong)DAT_146b50df8 * 6) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 != (int *)0x0) {
    return *(undefined8 *)piVar2;
  }
  return 0;
}



// FUNCTION 143128850 FUN_143128850 body=373 status=ok
// SIG undefined FUN_143128850(void)

undefined4 FUN_143128850(wchar_t *param_1)

{
  uint uVar1;
  int iVar2;
  wchar_t *_Dst;
  longlong lVar3;
  IAkGlobalPluginContext *pIVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong _MaxCount;
  longlong lVar4;
  
  puVar7 = g_pAKPluginList;
  if (param_1 != (wchar_t *)0x0) {
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (param_1[uVar6] != L'\0');
    iVar2 = (int)uVar6;
    _Dst = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)(iVar2 + 2) * 2);
    DAT_146b50de0 = _Dst;
    if (_Dst == (wchar_t *)0x0) {
      return 0x34;
    }
    uVar1 = iVar2 + 1;
    _MaxCount = (ulonglong)uVar1 - 1;
    lVar3 = -1;
    do {
      lVar4 = lVar3;
      lVar3 = lVar4 + 1;
    } while (param_1[lVar3] != L'\0');
    if (lVar4 + 2U <= _MaxCount) {
      lVar3 = -1;
      do {
        lVar4 = lVar3;
        lVar3 = lVar4 + 1;
      } while (param_1[lVar3] != L'\0');
      _MaxCount = lVar4 + 2;
    }
    wcsncpy_s(_Dst,(ulonglong)uVar1,param_1,_MaxCount);
    _Dst[_MaxCount] = L'\0';
    puVar7 = g_pAKPluginList;
    if (DAT_146b50de0[iVar2 - 1] != L'\\') {
      DAT_146b50de0[uVar6 & 0xffffffff] = L'\\';
      DAT_146b50de0[uVar1] = L'\0';
      puVar7 = g_pAKPluginList;
    }
  }
  for (; puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
    if (*(int *)(puVar7 + 1) == 1) {
      iVar2 = FUN_1431289d0(*(undefined4 *)((longlong)puVar7 + 0xc),*(undefined4 *)(puVar7 + 2),
                            puVar7[5],puVar7[6]);
    }
    else {
      iVar2 = FUN_143128be0(*(int *)(puVar7 + 1),*(undefined4 *)((longlong)puVar7 + 0xc),
                            *(undefined4 *)(puVar7 + 2),puVar7[3],puVar7[4]);
    }
    if ((iVar2 == 1) && (puVar7[7] != 0)) {
      pIVar5 = AK::SoundEngine::GetGlobalPluginContext();
      (*(code *)puVar7[7])(pIVar5,1,puVar7[8]);
    }
  }
  return 1;
}



// FUNCTION 1431289d0 FUN_1431289d0 body=513 status=ok
// SIG undefined FUN_1431289d0(void)

int FUN_1431289d0(int param_1,int param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  uVar6 = (ulonglong)DAT_146b50e08;
  iVar9 = (param_2 * 0x1000 + param_1) * 0x10 + 1;
  uVar10 = (ulonglong)DAT_146b50e08;
  piVar3 = DAT_146b50e00 + uVar6 * 6;
  for (piVar2 = DAT_146b50e00; (piVar2 != DAT_146b50e00 + uVar6 * 6 && (*piVar2 != iVar9));
      piVar2 = piVar2 + 6) {
  }
  plVar11 = (longlong *)0x0;
  plVar4 = (longlong *)(piVar2 + 2);
  if (piVar2 == piVar3) {
    plVar4 = plVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    return 2;
  }
  if ((param_3 == 0) || (piVar2 = DAT_146b50e00, param_4 == 0)) {
    return 0x1f;
  }
  for (; (piVar2 != piVar3 && (*piVar2 != iVar9)); piVar2 = piVar2 + 6) {
  }
  plVar4 = (longlong *)(piVar2 + 2);
  if (piVar2 == piVar3) {
    plVar4 = plVar11;
  }
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = param_3;
    plVar4[1] = param_4;
    return 2 - (uint)(plVar4 != (longlong *)0x0);
  }
  uVar8 = (ulonglong)DAT_146b50e0c;
  piVar3 = DAT_146b50e00;
  uVar7 = DAT_146b50e0c;
  if (uVar8 <= uVar10) {
    uVar7 = DAT_146b50e0c + 1;
    uVar8 = (ulonglong)uVar7;
    piVar3 = AK::MemoryMgr::Malloc(g_DefaultPoolId,uVar8 * 0x18);
    plVar4 = (longlong *)0x0;
    if (piVar3 == (int *)0x0) goto LAB_143128b9c;
    uVar6 = (ulonglong)DAT_146b50e08;
    if ((DAT_146b50e00 != (int *)0x0) && (DAT_146b50e00 != piVar3)) {
      plVar4 = plVar11;
      if (DAT_146b50e08 != 0) {
        do {
          piVar2 = DAT_146b50e00;
          uVar1 = ((undefined8 *)((longlong)plVar4 + (longlong)DAT_146b50e00))[1];
          *(undefined8 *)((longlong)plVar4 + (longlong)piVar3) =
               *(undefined8 *)((longlong)plVar4 + (longlong)DAT_146b50e00);
          ((undefined8 *)((longlong)plVar4 + (longlong)piVar3))[1] = uVar1;
          *(undefined8 *)((longlong)(plVar4 + 2) + (longlong)piVar3) =
               *(undefined8 *)((longlong)(plVar4 + 2) + (longlong)piVar2);
          uVar6 = uVar6 - 1;
          plVar4 = plVar4 + 3;
        } while (uVar6 != 0);
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50e00);
      uVar6 = (ulonglong)DAT_146b50e08;
    }
  }
  DAT_146b50e0c = uVar7;
  DAT_146b50e00 = piVar3;
  plVar5 = plVar11;
  if (uVar10 < uVar8) {
    DAT_146b50e08 = (int)uVar6 + 1;
    plVar5 = (longlong *)(DAT_146b50e00 + uVar6 * 6);
  }
  plVar4 = plVar11;
  if (plVar5 != (longlong *)0x0) {
    plVar4 = plVar5 + 1;
    *(int *)plVar5 = iVar9;
    *plVar4 = param_3;
    plVar5[2] = param_4;
  }
LAB_143128b9c:
  return 2 - (uint)(plVar4 != (longlong *)0x0);
}



// FUNCTION 143128be0 FUN_143128be0 body=461 status=ok
// SIG undefined FUN_143128be0(void)

int FUN_143128be0(uint param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  int *piVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  
  uVar4 = (ulonglong)DAT_146b50df8;
  uVar9 = (ulonglong)DAT_146b50df8;
  iVar8 = (param_3 * 0x1000 + param_2) * 0x10 + (param_1 & 0xf);
  piVar2 = DAT_146b50df0 + uVar4 * 6;
  for (piVar3 = DAT_146b50df0; (piVar3 != DAT_146b50df0 + uVar4 * 6 && (*piVar3 != iVar8));
      piVar3 = piVar3 + 6) {
  }
  piVar10 = (int *)0x0;
  piVar5 = piVar3 + 2;
  if (piVar3 == piVar2) {
    piVar5 = piVar10;
  }
  piVar3 = DAT_146b50df0;
  if (piVar5 != (int *)0x0) {
    return 1;
  }
  for (; (piVar3 != piVar2 && (*piVar3 != iVar8)); piVar3 = piVar3 + 6) {
  }
  piVar5 = piVar3 + 2;
  if (piVar3 == piVar2) {
    piVar5 = piVar10;
  }
  if (piVar5 == (int *)0x0) {
    uVar7 = (ulonglong)DAT_146b50dfc;
    piVar2 = DAT_146b50df0;
    uVar6 = DAT_146b50dfc;
    if (uVar7 <= uVar9) {
      uVar6 = DAT_146b50dfc + 1;
      uVar7 = (ulonglong)uVar6;
      piVar2 = AK::MemoryMgr::Malloc(g_DefaultPoolId,uVar7 * 0x18);
      if (piVar2 == (int *)0x0) goto LAB_143128d91;
      uVar4 = (ulonglong)DAT_146b50df8;
      if ((DAT_146b50df0 != (int *)0x0) && (DAT_146b50df0 != piVar2)) {
        piVar3 = piVar10;
        if (DAT_146b50df8 != 0) {
          do {
            piVar5 = DAT_146b50df0;
            uVar1 = ((undefined8 *)((longlong)piVar3 + (longlong)DAT_146b50df0))[1];
            *(undefined8 *)((longlong)piVar3 + (longlong)piVar2) =
                 *(undefined8 *)((longlong)piVar3 + (longlong)DAT_146b50df0);
            ((undefined8 *)((longlong)piVar3 + (longlong)piVar2))[1] = uVar1;
            *(undefined8 *)((longlong)(piVar3 + 4) + (longlong)piVar2) =
                 *(undefined8 *)((longlong)(piVar3 + 4) + (longlong)piVar5);
            uVar4 = uVar4 - 1;
            piVar3 = piVar3 + 6;
          } while (uVar4 != 0);
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50df0);
        uVar4 = (ulonglong)DAT_146b50df8;
      }
    }
    DAT_146b50dfc = uVar6;
    DAT_146b50df0 = piVar2;
    piVar2 = piVar10;
    if (uVar9 < uVar7) {
      DAT_146b50df8 = (int)uVar4 + 1;
      piVar2 = DAT_146b50df0 + uVar4 * 6;
    }
    piVar5 = piVar10;
    if (piVar2 != (int *)0x0) {
      piVar5 = piVar2 + 2;
      *piVar2 = iVar8;
      *(undefined8 *)piVar5 = param_4;
      *(undefined8 *)(piVar2 + 4) = param_5;
    }
  }
  else {
    *(undefined8 *)piVar5 = param_4;
    *(undefined8 *)(piVar5 + 2) = param_5;
  }
LAB_143128d91:
  return 2 - (uint)(piVar5 != (int *)0x0);
}



// FUNCTION 143128db0 FUN_143128db0 body=121 status=ok
// SIG undefined FUN_143128db0(void)

undefined8 FUN_143128db0(undefined8 *param_1)

{
  int iVar1;
  IAkGlobalPluginContext *pIVar2;
  
  for (; param_1 != (undefined8 *)0x0; param_1 = (undefined8 *)*param_1) {
    if (*(int *)(param_1 + 1) == 1) {
      iVar1 = FUN_1431289d0(*(undefined4 *)((longlong)param_1 + 0xc),*(undefined4 *)(param_1 + 2),
                            param_1[5],param_1[6]);
    }
    else {
      iVar1 = FUN_143128be0(*(int *)(param_1 + 1),*(undefined4 *)((longlong)param_1 + 0xc),
                            *(undefined4 *)(param_1 + 2),param_1[3],param_1[4]);
    }
    if ((iVar1 == 1) && (param_1[7] != 0)) {
      pIVar2 = AK::SoundEngine::GetGlobalPluginContext();
      (*(code *)param_1[7])(pIVar2,1,param_1[8]);
    }
  }
  return 1;
}



// FUNCTION 143128e30 Term body=133 status=ok
// SIG undefined Term(void)

undefined8 CAkEffectsMgr::Term(void)

{
  if (DAT_146b50df0 != (void *)0x0) {
    DAT_146b50df8 = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50df0);
    DAT_146b50df0 = (void *)0x0;
    DAT_146b50dfc = 0;
  }
  if (DAT_146b50e00 != (void *)0x0) {
    DAT_146b50e08 = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50e00);
    DAT_146b50e00 = (void *)0x0;
    DAT_146b50e0c = 0;
  }
  if (DAT_146b50de0 != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50de0);
    DAT_146b50de0 = (void *)0x0;
  }
  return 1;
}



// FUNCTION 143128ec0 ValidatePluginInfo body=30 status=ok
// SIG undefined ValidatePluginInfo(void)

undefined8 CAkEffectsMgr::ValidatePluginInfo(undefined8 param_1,int param_2,int *param_3)

{
  undefined8 uVar1;
  
  if (param_3[1] == 0x7e201) {
    uVar1 = 0;
    if (*param_3 != param_2) {
      uVar1 = 10;
    }
    return uVar1;
  }
  return 0x2e;
}



// FUNCTION 143128ee0 AkUnion<unsigned___int64,AkHybridAllocator<8,8>,1> body=404 status=ok
// SIG undefined AkUnion<unsigned___int64,AkHybridAllocator<8,8>,1>(void)

ulonglong AkUnion<unsigned___int64,AkHybridAllocator<8,8>,1>(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  int iVar7;
  ulonglong local_28;
  ulonglong *local_20;
  undefined8 local_18;
  
  puVar5 = (ulonglong *)param_1[1];
  iVar7 = 0;
  puVar3 = *(ulonglong **)(param_2 + 8);
  puVar6 = puVar5 + (uint)param_1[2];
  if (puVar5 != puVar6) {
    puVar1 = puVar3 + *(uint *)(param_2 + 0x10);
    do {
      if (puVar3 == puVar1) break;
      if (*puVar5 == *puVar3) {
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
LAB_143128f39:
        puVar3 = puVar3 + 1;
      }
      else {
        if (*puVar3 <= *puVar5) goto LAB_143128f39;
        puVar5 = puVar5 + 1;
      }
    } while (puVar5 != puVar6);
  }
  local_20 = (ulonglong *)0x0;
  local_18 = 0;
  uVar4 = FUN_14312af60(&local_28,(*(uint *)(param_2 + 0x10) - iVar7) + (uint)param_1[2]);
  if ((char)uVar4 == '\0') {
    uVar4 = uVar4 & 0xffffffffffffff00;
  }
  else {
    puVar6 = (ulonglong *)param_1[1];
    puVar5 = *(ulonglong **)(param_2 + 8);
    puVar3 = local_20;
LAB_143128f80:
    puVar1 = (ulonglong *)(*(longlong *)(param_2 + 8) + (ulonglong)*(uint *)(param_2 + 0x10) * 8);
    if (puVar5 != puVar1) {
LAB_143128fa7:
      if (puVar6 != (ulonglong *)(param_1[1] + (ulonglong)(uint)param_1[2] * 8)) {
        uVar4 = *puVar6;
        if (uVar4 <= *puVar5) {
          if (*puVar5 != uVar4) goto LAB_143128fee;
          puVar6 = puVar6 + 1;
          *puVar3 = uVar4;
          puVar5 = puVar5 + 1;
          puVar3 = puVar3 + 1;
          goto LAB_143128f80;
        }
      }
      uVar4 = *puVar5;
      puVar5 = puVar5 + 1;
      *puVar3 = uVar4;
      puVar3 = puVar3 + 1;
      goto LAB_143128f80;
    }
    puVar2 = (ulonglong *)param_1[1];
    if (puVar6 != puVar2 + (uint)param_1[2]) {
      if (puVar5 != puVar1) goto LAB_143128fa7;
LAB_143128fee:
      uVar4 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = uVar4;
      puVar3 = puVar3 + 1;
      goto LAB_143128f80;
    }
    if (puVar2 != (ulonglong *)0x0) {
      *(undefined4 *)(param_1 + 2) = 0;
      if (param_1 != puVar2) {
        AK::MemoryMgr::Falign(g_DefaultPoolId,puVar2);
      }
      param_1[1] = 0;
    }
    if (&local_28 == local_20) {
      *param_1 = local_28;
      local_20 = param_1;
    }
    param_1[1] = (ulonglong)local_20;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_18;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_18._4_4_;
    uVar4 = CONCAT71((uint7)(uint3)((ulonglong)local_18 >> 0x28),1);
  }
  return uVar4;
}



// FUNCTION 143129080 AkDevice body=347 status=ok
// SIG undefined AkDevice(void)

undefined8 *
AkDevice::AkDevice(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[2] = param_3;
  *param_1 = &PTR__scalar_deleting_destructor__145ac6ac8;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 1;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  *(uint *)((longlong)param_1 + 0x3c) = *(uint *)((longlong)param_1 + 0x3c) & 0xff;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0xb) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  *(undefined4 *)((longlong)param_1 + 100) = uVar3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0xff;
  *(undefined1 *)(param_1 + 0x24) = 0xff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x1d] = &PTR__scalar_deleting_destructor__145ac6aa0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0x3f800000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  *(undefined1 *)((longlong)param_1 + 0x175) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x176) = 0;
  *(undefined4 *)(param_1 + 0x2e) = 2;
  *(undefined4 *)((longlong)param_1 + 0x54) = param_2[2];
  return param_1;
}



// FUNCTION 1431291e0 ~AkVPL body=348 status=ok
// SIG undefined ~AkVPL(void)

void AkVPL::~AkVPL(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((*(longlong *)(param_1 + 0x40) == 0) &&
     ((lVar6 = *(longlong *)(param_1 + 0x80), lVar6 == 0 || (*(longlong *)(lVar6 + 0x88) == 0)))) {
    if (lVar6 == 0) {
      plVar4 = DAT_146b50e50;
      if (DAT_146b50e50 != (longlong *)0x0) {
        plVar7 = DAT_146b50e50;
        do {
          if (plVar7[2] == *(longlong *)(param_1 + 0x88)) goto LAB_1431292f8;
          plVar7 = (longlong *)plVar7[1];
        } while (plVar7 != (longlong *)0x0);
      }
      while (plVar7 = plVar4, plVar7 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar7 + 0x60))(plVar7);
        if (cVar5 != '\0') goto LAB_1431292f8;
        plVar4 = (longlong *)plVar7[1];
      }
      plVar7 = (longlong *)0x0;
LAB_1431292f8:
      if ((plVar7 != (longlong *)0x0) && ((plVar7[0x2d] == param_1 || (plVar7[0x2d] == 0)))) {
        *(undefined1 *)((longlong)plVar7 + 0x174) = 0;
        plVar7[0x2d] = 0;
      }
    }
    else {
      piVar1 = (int *)(lVar6 + 0x170);
      if (*piVar1 == -1) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x88);
          if (lVar6 == 0) goto LAB_14312924b;
        } while (*(int *)(lVar6 + 0x170) == -1);
        *piVar1 = *(int *)(lVar6 + 0x170);
      }
LAB_14312924b:
      iVar2 = *piVar1;
      for (plVar7 = DAT_146b50e50; plVar7 != (longlong *)0x0; plVar7 = (longlong *)plVar7[1]) {
        if ((int)plVar7[0xb] == iVar2) {
          uVar3 = *(undefined8 *)(param_1 + 0x88);
          cVar5 = FUN_143129850(plVar7 + 4,uVar3);
          if (*(char *)((longlong)plVar7 + 0x176) == '\0') {
            if ((cVar5 != '\0') ||
               (((int)plVar7[6] == 0 && (cVar5 = FUN_143129850(&DAT_146b50e58,uVar3), cVar5 == '\0')
                ))) goto LAB_1431292f8;
          }
          else if (cVar5 != '\0') goto LAB_1431292f8;
        }
      }
    }
  }
  FUN_143185290(param_1);
  return;
}



// FUNCTION 143129340 `scalar_deleting_destructor' body=270 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * AkDevice::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR__scalar_deleting_destructor__145ac6ac8;
  StopOutputCapture();
  plVar1 = param_1 + 0x1d;
  (**(code **)(*plVar1 + 0x20))(plVar1);
  param_1[0x29] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  if ((void *)param_1[8] != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,(void *)param_1[8]);
  }
  DestroyPanCaches(param_1);
  puVar2 = (undefined8 *)param_1[5];
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 6) = 0;
    if (param_1 + 4 != puVar2) {
      AK::MemoryMgr::Falign(g_DefaultPoolId,puVar2);
    }
    param_1[5] = 0;
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  *plVar1 = (longlong)&PTR__scalar_deleting_destructor__145ac6aa0;
  FUN_14318cc80(plVar1);
  *plVar1 = (longlong)&PTR__scalar_deleting_destructor__145ac6a78;
  FUN_14318ccc0(plVar1);
  *plVar1 = (longlong)&PTR_FUN_144024f50;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x11));
  *param_1 = &PTR_FUN_144cb0f40;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 143129450 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * AkSinkPluginParams::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac6aa0;
  FUN_14318cc80();
  *param_1 = &PTR__scalar_deleting_destructor__145ac6a78;
  FUN_14318ccc0(param_1);
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1431294b0 FUN_1431294b0 body=43 status=ok
// SIG undefined FUN_1431294b0(void)

undefined8 * FUN_1431294b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1431294e0 FUN_1431294e0 body=43 status=ok
// SIG undefined FUN_1431294e0(void)

undefined8 * FUN_1431294e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 143129510 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * PluginRTPCSub::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__145ac6a78;
  FUN_14318ccc0();
  *param_1 = &PTR_FUN_144024f50;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 143129560 AddOutputCaptureMarker body=154 status=ok
// SIG undefined AddOutputCaptureMarker(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CAkOutputMgr::AddOutputCaptureMarker(void *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 auStack_30 [5];
  
  lVar1 = -1;
  do {
    lVar3 = lVar1;
    lVar1 = lVar3 + 1;
  } while (*(char *)((longlong)param_1 + lVar3 + 1) != '\0');
  uVar4 = lVar3 + 0x11;
  if (uVar4 <= lVar3 + 2U) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_30[0] = 0x1431295ab;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x1431295be;
  ::_guard_xfg_dispatch_icall_nop(&stack0xfffffffffffffff8 + lVar2,param_1,lVar3 + 2U);
  for (lVar1 = DAT_146b50e50; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
    lVar3 = *(longlong *)(lVar1 + 0x158);
    if (lVar3 != 0) {
      *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x1431295e4;
      FUN_1431530e0(lVar3,&stack0xfffffffffffffff8 + lVar2);
    }
  }
  return;
}



// FUNCTION 143129600 AddOutputDevice body=120 status=ok
// SIG undefined AddOutputDevice(void)

undefined8 CAkOutputMgr::AddOutputDevice(ulong *param_1,undefined8 param_2)

{
  __uint64 _Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  _Var1 = AK::SoundEngine::GetOutputID(*param_1,param_1[1]);
  lVar2 = GetDevice(_Var1);
  if (lVar2 != 0) {
    return 1;
  }
  uVar3 = FUN_14312c0b0(_Var1,param_1,param_1[1],param_2,0,0,0);
  return uVar3;
}



// FUNCTION 143129680 AkSetThreadName body=58 status=ok
// SIG undefined AkSetThreadName(void)

void AKPLATFORM::AkSetThreadName(undefined4 param_1,undefined8 param_2)

{
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28[0] = 0x1000;
  local_14 = 0;
  local_20 = param_2;
  local_18 = param_1;
  RaiseException(0x406d1388,0,3,(ULONG_PTR *)local_28);
  return;
}



// FUNCTION 1431296c0 CallSinkCallback body=76 status=ok
// SIG undefined CallSinkCallback(void)

void CAkOutputMgr::CallSinkCallback(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  IAkGlobalPluginContext *pIVar1;
  
  if (DAT_146b50e38 != (code *)0x0) {
    pIVar1 = AK::SoundEngine::GetGlobalPluginContext();
    (*DAT_146b50e38)(pIVar1,*param_1,param_1[1],param_2,param_3);
  }
  return;
}



// FUNCTION 143129710 FUN_143129710 body=319 status=ok
// SIG undefined FUN_143129710(void)

undefined8 FUN_143129710(longlong param_1,undefined1 *param_2)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0x3c) != '\0') {
    if ((*(char *)(param_1 + 0x174) != '\0') && (*(longlong *)(param_1 + 0x168) == 0)) {
      uStack_20 = *(undefined8 *)(param_1 + 0x10);
      local_28 = 0;
      lVar4 = FUN_143125c70(&local_28);
      *(longlong *)(param_1 + 0x168) = lVar4;
      if (lVar4 == 0) {
        *param_2 = 1;
        puVar5 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x368);
        if (puVar5 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          FUN_143184d20(puVar5);
          *puVar5 = &PTR_FUN_145ac6908;
          puVar5[0x1a] = &PTR_LAB_145ac6990;
          *(byte *)((longlong)puVar5 + 0x364) = *(byte *)((longlong)puVar5 + 0x364) & 0xf8;
          *(undefined4 *)(puVar5 + 0x6c) = 0x7fffffff;
        }
        *(undefined8 **)(param_1 + 0x168) = puVar5;
        if (puVar5 == (undefined8 *)0x0) {
          return 0;
        }
        local_18 = (undefined4)local_28;
        uStack_14 = local_28._4_4_;
        uStack_10 = (undefined4)uStack_20;
        uStack_c = uStack_20._4_4_;
        iVar3 = FUN_143126400(puVar5,&local_18,0);
        lVar2 = g_LEngineDefaultPoolId;
        if (iVar3 != 1) {
          pvVar1 = *(void **)(param_1 + 0x168);
          if (pvVar1 != (void *)0x0) {
            AkVPL::~AkVPL(pvVar1);
            AK::MemoryMgr::Free(lVar2,pvVar1);
          }
          *(undefined8 *)(param_1 + 0x168) = 0;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x174) = 1;
  }
  return *(undefined8 *)(param_1 + 0x168);
}



// FUNCTION 143129850 FUN_143129850 body=133 status=ok
// SIG undefined FUN_143129850(void)

bool FUN_143129850(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  iVar5 = *(int *)(param_1 + 0x10) + -1;
  iVar3 = 0;
  if (-1 < iVar5) {
    uVar4 = uVar6;
    do {
      iVar3 = (iVar5 - (int)uVar4) / 2 + (int)uVar4;
      uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 8);
      if (param_2 < uVar1) {
        iVar5 = iVar3 + -1;
      }
      else {
        if (param_2 <= uVar1) {
          bVar2 = true;
          uVar4 = *(longlong *)(param_1 + 8) + (longlong)iVar3 * 8;
          goto LAB_1431298bd;
        }
        uVar4 = (ulonglong)(iVar3 + 1);
      }
      iVar3 = (int)uVar4;
    } while (iVar3 <= iVar5);
  }
  bVar2 = false;
  uVar4 = uVar6;
  if (*(longlong *)(param_1 + 8) != 0) {
    uVar4 = *(longlong *)(param_1 + 8) + (longlong)iVar3 * 8;
  }
LAB_1431298bd:
  if (bVar2) {
    uVar6 = uVar4;
  }
  return uVar6 != 0;
}



// FUNCTION 1431298e0 FUN_1431298e0 body=274 status=ok
// SIG undefined FUN_1431298e0(void)

int FUN_1431298e0(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 local_18 [4];
  undefined4 local_14;
  
  if ((param_2 == 0) && (*(int *)(param_1 + 0x170) == 0)) {
    return 1;
  }
  plVar2 = (longlong *)(**(code **)(PTR_PTR_1467be108 + 8))(&PTR_PTR_1467be108,0x28);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    CAkSinkBase::CAkSinkBase(plVar2);
    *plVar2 = (longlong)&PTR_FUN_145ac6b40;
    *(undefined1 *)(plVar2 + 3) = 0;
    *(uint *)(plVar2 + 3) = *(uint *)(plVar2 + 3) & 0xff;
    plVar2[2] = 0;
    *(undefined8 *)((longlong)plVar2 + 0x1c) = 0x2b;
    local_14 = *(undefined4 *)(param_1 + 100);
    iVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,0,0,0,local_18);
    if (iVar1 == 1) {
      (**(code **)(*(longlong *)(param_1 + 0xe8) + 0x20))();
      *(undefined4 *)(param_1 + 0x3c) = local_14;
      *(longlong **)(param_1 + 0x148) = plVar2;
      *(int *)(param_1 + 0x170) = param_2;
      *(undefined4 *)(param_1 + 0x18) = 0xb5;
    }
    return iVar1;
  }
  return 0x34;
}



// FUNCTION 143129a00 FUN_143129a00 body=246 status=ok
// SIG undefined FUN_143129a00(void)

longlong FUN_143129a00(longlong param_1,uint param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  
  plVar2 = (longlong *)FUN_14312b030(param_1 + 0x78);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = 0;
    CAkSpeakerPan::CreatePanCache
              (param_2,*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x50),plVar2);
    if (*plVar2 != 0) {
      return *plVar2;
    }
  }
  puVar5 = *(uint **)(param_1 + 0x78);
  uVar6 = *(uint *)(param_1 + 0x80);
  puVar4 = puVar5 + (ulonglong)uVar6 * 4;
  if (puVar5 != puVar4) {
    do {
      uVar1 = *puVar5;
      if ((((uVar1 & 0xff) == (param_2 & 0xff)) && (((uVar1 ^ param_2) & 0xf00) == 0)) &&
         (((uVar1 ^ param_2) & 0xfffff000) == 0)) break;
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar4);
    if (puVar5 != puVar4) {
      if (puVar5 < puVar4 + -4) {
        uVar3 = ((ulonglong)((longlong)(puVar4 + -4) + (-1 - (longlong)puVar5)) >> 3 &
                0xfffffffffffffffe) + 2 & 0x1ffffffffffffffe;
        puVar4 = puVar5 + 4;
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined8 *)puVar5 = *(undefined8 *)puVar4;
          puVar4 = puVar4 + 2;
          puVar5 = puVar5 + 2;
        }
        uVar6 = *(uint *)(param_1 + 0x80);
      }
      *(uint *)(param_1 + 0x80) = uVar6 - 1;
    }
  }
  return 0;
}



// FUNCTION 143129b00 FUN_143129b00 body=1020 status=ok
// SIG undefined FUN_143129b00(void)

undefined8 FUN_143129b00(longlong param_1)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  IAkGlobalPluginContext *pIVar6;
  uint uVar8;
  byte bVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong *plVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *in_stack_ffffffffffffff18;
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *plVar7;
  
  uVar12 = *(uint *)(param_1 + 0x58);
  plVar14 = (longlong *)0x0;
  local_68 = 0xff;
  local_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar8 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0xff;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_98 = &PTR__scalar_deleting_destructor__145ac6aa0;
  local_38 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x18) = 0xae0007;
  lVar10 = DAT_146b50af8;
  plVar11 = plVar14;
  if (uVar12 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_146b50af8 + 0x300);
    EnterCriticalSection(lpCriticalSection);
    uVar4 = *(uint *)(lVar10 + 0x330);
    if (uVar4 != 0) {
      for (plVar11 = *(longlong **)
                      (*(longlong *)(lVar10 + 0x328) + ((ulonglong)uVar12 % (ulonglong)uVar4) * 8);
          plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[1]) {
        if (*(uint *)(plVar11 + 2) == uVar12) {
          if (plVar11 != (longlong *)0x0) {
            *(int *)((longlong)plVar11 + 0x14) = *(int *)((longlong)plVar11 + 0x14) + 1;
            LeaveCriticalSection(lpCriticalSection);
            goto LAB_143129bce;
          }
          break;
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    plVar11 = plVar14;
LAB_143129bce:
    if (plVar11 != (longlong *)0x0) {
      *(int *)(param_1 + 0x18) = (int)plVar11[6];
    }
  }
  pcVar5 = (code *)CAkEffectsMgr::GetSinkPlugin(*(undefined4 *)(param_1 + 0x18));
  while( true ) {
    if ((pcVar5 == (code *)0x0) ||
       (local_38 = (longlong *)(*pcVar5)(&PTR_PTR_1467be108), local_38 == (longlong *)0x0))
    goto LAB_143129d93;
    local_d4 = *(uint *)(param_1 + 100);
    local_d8 = DAT_1467bdcac;
    local_d0 = (local_d4 & 0xff) << 8 | local_d0 & 0xfffd0020 | 0x50020;
    if (plVar11 != (longlong *)0x0) {
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0xff;
      local_a8 = 0xff;
      local_a0 = 0;
      PluginRTPCSub::Clone
                (&local_98,plVar11,&local_c8,0,
                 (ulonglong)in_stack_ffffffffffffff18 & 0xffffffffffffff00);
    }
    in_stack_ffffffffffffff18 = &local_d8;
    iVar3 = (**(code **)(*local_38 + 0x30))
                      (local_38,&PTR_PTR_1467be108,param_1,local_90,in_stack_ffffffffffffff18);
    if (iVar3 == 1) break;
    FUN_14318cc80(&local_98);
    if (DAT_146b50e38 != (code *)0x0) {
      pIVar6 = AK::SoundEngine::GetGlobalPluginContext();
      in_stack_ffffffffffffff18 =
           (undefined4 *)CONCAT44((int)((ulonglong)in_stack_ffffffffffffff18 >> 0x20),iVar3);
      (*DAT_146b50e38)(pIVar6,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),0,
                       in_stack_ffffffffffffff18);
    }
    if (iVar3 == 2) goto LAB_143129e43;
    if (iVar3 == 4) {
      *(undefined4 *)(param_1 + 0x18) = 0xae0007;
    }
    else if (iVar3 == 0x5a) {
      *(undefined4 *)(param_1 + 0x18) = 0xb50007;
    }
    uVar12 = *(uint *)(DAT_146b50af8 + 0x330);
    if (uVar12 != 0) {
      plVar2 = *(longlong **)(DAT_146b50af8 + 0x328);
      lVar10 = *plVar2;
      plVar7 = plVar14;
      if (lVar10 != 0) goto LAB_143129d4c;
      do {
        uVar4 = (int)plVar7 + 1;
        plVar7 = (longlong *)(ulonglong)uVar4;
        if (uVar12 <= uVar4) {
          if (lVar10 == 0) goto LAB_143129d81;
          break;
        }
        lVar10 = plVar2[(longlong)plVar7];
      } while (lVar10 == 0);
LAB_143129d47:
      if (lVar10 == 0) goto LAB_143129d55;
LAB_143129d4c:
      do {
        if (*(int *)(lVar10 + 0x30) == *(int *)(param_1 + 0x18)) {
          *(ulonglong *)(param_1 + 0x10) = (ulonglong)*(uint *)(lVar10 + 0x10);
          break;
        }
LAB_143129d55:
        lVar10 = *(longlong *)(lVar10 + 8);
        if (lVar10 == 0) {
          while (uVar4 = (int)plVar7 + 1, plVar7 = (longlong *)(ulonglong)uVar4, uVar4 < uVar12) {
            lVar10 = plVar2[(longlong)plVar7];
            if (lVar10 != 0) goto LAB_143129d47;
          }
        }
      } while (lVar10 != 0);
    }
LAB_143129d81:
    pcVar5 = (code *)CAkEffectsMgr::GetSinkPlugin(*(undefined4 *)(param_1 + 0x18));
  }
  uVar8 = local_d4;
  if ((local_d4 & 0xf00) == 0x100) {
    uVar12 = local_d4 >> 0xc;
    if ((((byte)(local_d4 >> 0x15) ^ (byte)(local_d4 >> 0x10)) & 1) != 0) {
      uVar12 = uVar12 & 0xffffffcf | 0x600;
    }
    bVar9 = 0;
    for (uVar8 = uVar12; uVar8 != 0; uVar8 = uVar8 & uVar8 - 1) {
      bVar9 = bVar9 + 1;
    }
    uVar8 = uVar12 << 0xc | (uint)bVar9 | 0x100;
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    *(undefined4 *)(param_1 + 0x58) = 0xe611314a;
  }
LAB_143129e43:
  if (local_38 != (longlong *)0x0) {
    iVar3 = (**(code **)(*local_38 + 0x10))();
    if (iVar3 == 1) {
      pppuVar1 = (undefined ***)(param_1 + 0xe8);
      if (&local_98 != pppuVar1) {
        AkSinkPluginParams::TakeFrom(pppuVar1,&local_98);
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = 0;
        local_b0 = 0xff;
        local_a8 = 0xff;
        local_a0 = 0;
        FUN_14318cae0(pppuVar1,&local_c8,0);
        *(uint *)(param_1 + 0x3c) = uVar8;
        *(undefined4 *)(param_1 + 0x170) = 1;
        CAkOutputMgr::CallSinkCallback(param_1 + 0x58,0,1);
      }
      uVar13 = 1;
      goto LAB_143129d96;
    }
    if (DAT_146b50e38 != (code *)0x0) {
      pIVar6 = AK::SoundEngine::GetGlobalPluginContext();
      (*DAT_146b50e38)(pIVar6,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),0,
                       iVar3);
    }
    (*(code *)local_98[4])(&local_98);
  }
LAB_143129d93:
  uVar13 = 0;
LAB_143129d96:
  if (plVar11 != (longlong *)0x0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  local_98 = &PTR__scalar_deleting_destructor__145ac6aa0;
  FUN_14318cc80(&local_98);
  local_98 = &PTR__scalar_deleting_destructor__145ac6a78;
  FUN_14318ccc0(&local_98);
  return uVar13;
}



// FUNCTION 143129f00 FUN_143129f00 body=280 status=ok
// SIG undefined FUN_143129f00(void)

longlong FUN_143129f00(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  
  lVar4 = FUN_14312b1a0((undefined8 *)(param_1 + 0xb0));
  if (lVar4 != 0) {
    iVar3 = CAkSpeakerPan::CreateSpreadCache(param_2,*(undefined4 *)(param_1 + 0x4c),lVar4);
    if (iVar3 == 1) {
      return lVar4;
    }
    puVar5 = *(uint **)(param_1 + 0xb0);
    puVar2 = puVar5 + (ulonglong)*(uint *)(param_1 + 0xb8) * 6;
    if (puVar5 != puVar2) {
      do {
        if (((*puVar5 & 0x7fffffff) == (param_2 & 0x7fffffff)) && (-1 < (int)(*puVar5 ^ param_2)))
        break;
        puVar5 = puVar5 + 6;
      } while (puVar5 != puVar2);
      if (puVar5 != puVar2) {
        if (puVar5 < puVar2 + -6) {
          puVar5 = puVar5 + 0xb;
          do {
            puVar5[-0xb] = puVar5[-5];
            if (*(void **)(puVar5 + -9) != (void *)0x0) {
              puVar5[-7] = 0;
              AK::MemoryMgr::Falign(g_DefaultPoolId,*(void **)(puVar5 + -9));
              puVar5[-9] = 0;
              puVar5[-8] = 0;
              puVar5[-6] = 0;
            }
            *(undefined8 *)(puVar5 + -9) = *(undefined8 *)(puVar5 + -3);
            puVar5[-7] = puVar5[-1];
            puVar5[-6] = *puVar5;
            puVar5[-3] = 0;
            puVar5[-2] = 0;
            puVar5[-1] = 0;
            puVar5[0] = 0;
            puVar1 = puVar5 + -5;
            puVar5 = puVar5 + 6;
          } while (puVar1 < puVar2 + -6);
        }
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
      }
    }
  }
  return 0;
}



// FUNCTION 14312a020 DeleteDeviceAndDisconnectMix body=95 status=ok
// SIG undefined DeleteDeviceAndDisconnectMix(void)

void AkDevice::DeleteDeviceAndDisconnectMix(longlong param_1)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = g_LEngineDefaultPoolId;
  pvVar1 = *(void **)(param_1 + 0x168);
  if (pvVar1 != (void *)0x0) {
    AkVPL::~AkVPL(pvVar1);
    AK::MemoryMgr::Free(lVar2,pvVar1);
    *(undefined1 *)(param_1 + 0x174) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x174) = 1;
  return;
}



// FUNCTION 14312a080 DestroyPanCaches body=422 status=ok
// SIG undefined DestroyPanCaches(void)

void AkDevice::DestroyPanCaches(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0x78);
  puVar1 = puVar2;
  if (puVar2 != puVar2 + (ulonglong)*(uint *)(param_1 + 0x80) * 4) {
    do {
      CAkSpeakerPan::DestroyPanCache(*puVar1,puVar1 + 2);
      puVar1 = puVar1 + 4;
      puVar2 = *(undefined4 **)(param_1 + 0x78);
    } while (puVar1 != puVar2 + (ulonglong)*(uint *)(param_1 + 0x80) * 4);
  }
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,puVar2);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x68);
  pvVar3 = pvVar4;
  if (pvVar4 != (void *)((ulonglong)*(uint *)(param_1 + 0x70) * 0x10 + (longlong)pvVar4)) {
    do {
      AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)((longlong)pvVar3 + 8));
      pvVar3 = (void *)((longlong)pvVar3 + 0x10);
      pvVar4 = *(void **)(param_1 + 0x68);
    } while (pvVar3 != (void *)((ulonglong)*(uint *)(param_1 + 0x70) * 0x10 + (longlong)pvVar4));
  }
  if (pvVar4 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar4);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0xb0);
  pvVar3 = pvVar4;
  if (pvVar4 != (void *)((longlong)pvVar4 + (ulonglong)*(uint *)(param_1 + 0xb8) * 0x18)) {
    do {
      if (*(void **)((longlong)pvVar4 + 8) != (void *)0x0) {
        *(undefined4 *)((longlong)pvVar4 + 0x10) = 0;
        AK::MemoryMgr::Falign(g_DefaultPoolId,*(void **)((longlong)pvVar4 + 8));
        *(undefined8 *)((longlong)pvVar4 + 8) = 0;
        *(undefined4 *)((longlong)pvVar4 + 0x14) = 0;
      }
      pvVar4 = (void *)((longlong)pvVar4 + 0x18);
      pvVar3 = *(void **)(param_1 + 0xb0);
    } while (pvVar4 != (void *)((longlong)pvVar3 + (ulonglong)*(uint *)(param_1 + 0xb8) * 0x18));
  }
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar3);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  return;
}



// FUNCTION 14312a230 FindDevice body=270 status=ok
// SIG undefined FindDevice(void)

longlong * CAkOutputMgr::FindDevice(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *param_1;
  if (lVar5 == 0) {
    if (DAT_146b50e50 != (longlong *)0x0) {
      plVar6 = DAT_146b50e50;
      do {
        if (plVar6[2] == param_1[1]) {
          return plVar6;
        }
        plVar6 = (longlong *)plVar6[1];
        plVar3 = DAT_146b50e50;
      } while (plVar6 != (longlong *)0x0);
      for (; plVar3 != (longlong *)0x0; plVar3 = (longlong *)plVar3[1]) {
        cVar4 = (**(code **)(*plVar3 + 0x60))(plVar3);
        if (cVar4 != '\0') {
          return plVar3;
        }
      }
    }
    return (longlong *)0x0;
  }
  piVar1 = (int *)(lVar5 + 0x170);
  if (*piVar1 == -1) {
    do {
      lVar5 = *(longlong *)(lVar5 + 0x88);
      if (lVar5 == 0) goto LAB_14312a279;
    } while (*(int *)(lVar5 + 0x170) == -1);
    *piVar1 = *(int *)(lVar5 + 0x170);
  }
LAB_14312a279:
  iVar2 = *piVar1;
  plVar6 = DAT_146b50e50;
  do {
    if (plVar6 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    if ((int)plVar6[0xb] == iVar2) {
      lVar5 = param_1[1];
      cVar4 = FUN_143129850(plVar6 + 4,lVar5);
      if (cVar4 != '\0') {
        return plVar6;
      }
      if (((*(char *)((longlong)plVar6 + 0x176) == '\0') && ((int)plVar6[6] == 0)) &&
         (cVar4 = FUN_143129850(&DAT_146b50e58,lVar5), cVar4 == '\0')) {
        return plVar6;
      }
    }
    plVar6 = (longlong *)plVar6[1];
  } while( true );
}



// FUNCTION 14312a340 FrameEnd body=143 status=ok
// SIG undefined FrameEnd(void)

void AkDevice::FrameEnd(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x158);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x160);
    uVar1 = (uint)*(byte *)(puVar3 + 1) * (uint)*(ushort *)(puVar3 + 2) * 2;
    if (*(short *)((longlong)puVar3 + 0x12) == 0) {
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar3,0,(ulonglong)uVar1);
      puVar3 = *(undefined8 **)(param_1 + 0x160);
      lVar2 = *(longlong *)(param_1 + 0x158);
    }
    AkCaptureFile::PassSampleData(lVar2,*puVar3,uVar1);
    *(undefined2 *)(*(longlong *)(param_1 + 0x160) + 0x12) = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0x148) + 0x48))();
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x154);
  return;
}



// FUNCTION 14312a3d0 GetDevice body=103 status=ok
// SIG undefined GetDevice(void)

longlong * CAkOutputMgr::GetDevice(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = DAT_146b50e50;
  if (param_1 != 0) {
    while( true ) {
      if (plVar1 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      if (plVar1[2] == param_1) break;
      plVar1 = (longlong *)plVar1[1];
    }
    return plVar1;
  }
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    cVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    if (cVar2 != '\0') break;
    plVar1 = (longlong *)plVar1[1];
  }
  return plVar1;
}



// FUNCTION 14312a480 FUN_14312a480 body=9 status=ok
// SIG undefined FUN_14312a480(void)

void FUN_14312a480(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  *param_2 = 0;
  *param_3 = 0;
  return;
}



// FUNCTION 14312a4a0 GetPrimaryDevice body=57 status=ok
// SIG undefined GetPrimaryDevice(void)

longlong * CAkOutputMgr::GetPrimaryDevice(void)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = DAT_146b50e50;
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
    cVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    if (cVar2 != '\0') break;
    plVar1 = (longlong *)plVar1[1];
  }
  return plVar1;
}



// FUNCTION 14312a4f0 GetSpeakerAngles body=158 status=ok
// SIG undefined GetSpeakerAngles(void)

undefined8
AkDevice::GetSpeakerAngles(longlong param_1,longlong param_2,uint *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  if (*(longlong *)(param_1 + 0x148) != 0) {
    uVar2 = 0x633;
    bVar3 = 0;
    do {
      bVar3 = bVar3 + 1;
      uVar2 = uVar2 & uVar2 - 1;
    } while (uVar2 != 0);
    uVar2 = (uint)(bVar3 >> 1);
    if (param_2 == 0) {
      *param_3 = uVar2;
    }
    else {
      uVar1 = *param_3;
      if (uVar2 <= *param_3) {
        uVar1 = uVar2;
      }
      *param_3 = uVar1;
      CAkSpeakerPan::ConvertSpeakerAngles(*(undefined8 *)(param_1 + 0x40),uVar1,param_2);
    }
    *param_4 = *(float *)(param_1 + 0x50) * 57.295776;
    return 1;
  }
  return 2;
}



// FUNCTION 14312a590 Init body=504 status=ok
// SIG undefined Init(void)

int CAkOutputMgr::Init(void)

{
  long lVar1;
  undefined8 *puVar2;
  BOOL BVar3;
  int iVar4;
  DWORD_PTR DVar5;
  void *pvVar6;
  undefined8 *puVar7;
  DWORD local_res8 [2];
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  DAT_146b50e1f = 0;
  DAT_146b50e30 = 0;
  DAT_146b50e1e = 0;
  DAT_1467bdcd0 = 1;
  DAT_146b50e28 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  if (DAT_146b50e28 != (HANDLE)0x0) {
    DAT_146b50e20 =
         CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)DAT_146b50d3c,FUN_14312bd60,(LPVOID)0x0,
                      0,local_res8);
    if (DAT_146b50e20 != (HANDLE)0x0) {
      AKPLATFORM::AkSetThreadName(local_res8[0],"AK Suspended");
      BVar3 = SetThreadPriority(DAT_146b50e20,DAT_146b50d34);
      if (((BVar3 != 0) || (DAT_146b50d34 == 0x10000)) &&
         ((DAT_146b50d38 == 0 ||
          (DVar5 = SetThreadAffinityMask(DAT_146b50e20,(ulonglong)DAT_146b50d38), DVar5 != 0)))) {
        if (DAT_146b50e20 == (HANDLE)0x0) {
          return 2;
        }
        FUN_14312bac0(1,0);
        local_c = 0;
        local_18 = 0;
        local_10 = 0;
        pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x178);
        if ((pvVar6 != (void *)0x0) &&
           (puVar7 = (undefined8 *)AkDevice::AkDevice(pvVar6,&local_18,0,1),
           puVar7 != (undefined8 *)0x0)) {
          iVar4 = FUN_1431298e0(puVar7,1);
          lVar1 = g_DefaultPoolId;
          if (iVar4 == 1) {
            iVar4 = AkDevice::InitDefaultAngles(puVar7);
            lVar1 = g_DefaultPoolId;
            if (iVar4 != 1) {
              (**(code **)*puVar7)(puVar7,0);
              AK::MemoryMgr::Free(lVar1,puVar7);
              return iVar4;
            }
            puVar7[1] = 0;
            puVar2 = puVar7;
            if (DAT_146b50e50 != (undefined8 *)0x0) {
              *(undefined8 **)((longlong)DAT_146b50e48 + 8) = puVar7;
              puVar2 = DAT_146b50e50;
            }
            DAT_146b50e50 = puVar2;
            DAT_146b50e40 = DAT_146b50e40 + 1;
            DAT_146b50e48 = puVar7;
            return 1;
          }
          (**(code **)*puVar7)(puVar7,0);
          AK::MemoryMgr::Free(lVar1,puVar7);
        }
        return 0x34;
      }
      CloseHandle(DAT_146b50e20);
    }
    DAT_146b50e20 = (HANDLE)0x0;
  }
  return 2;
}



// FUNCTION 14312a790 InitDefaultAngles body=146 status=ok
// SIG undefined InitDefaultAngles(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void AkDevice::InitDefaultAngles(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  byte bVar6;
  undefined4 local_res8 [2];
  undefined8 auStack_30 [5];
  
  uVar5 = 0x633;
  bVar6 = 0;
  do {
    bVar6 = bVar6 + 1;
    uVar5 = uVar5 & uVar5 - 1;
  } while (uVar5 != 0);
  uVar3 = (ulonglong)(uint)(bVar6 >> 1) * 4;
  uVar4 = uVar3 + 0xf;
  if (uVar4 <= uVar3) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_30[0] = 0x14312a7e7;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x14312a7fe;
  CAkSpeakerPan::GetDefaultSpeakerAngles(uVar1,&stack0xfffffffffffffff8 + lVar2,local_res8);
  *(undefined8 *)((longlong)auStack_30 + lVar2) = 0x14312a811;
  SetSpeakerAngles(param_1,&stack0xfffffffffffffff8 + lVar2,(uint)(bVar6 >> 1),local_res8[0]);
  return;
}



// FUNCTION 14312a830 InitMainDevice body=288 status=ok
// SIG undefined InitMainDevice(void)

int CAkOutputMgr::InitMainDevice(ulong *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  __uint64 _Var4;
  undefined8 uVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_38 = *(undefined8 *)param_1;
  uStack_30 = *(undefined8 *)(param_1 + 2);
  local_20 = 0;
  local_18 = 0;
  _Var4 = AK::SoundEngine::GetOutputID(*param_1,param_1[1]);
  plVar1 = DAT_146b50e50;
  do {
    if (plVar1 == (longlong *)0x0) {
LAB_14312a8ee:
      iVar3 = FUN_14312c0b0(_Var4,&local_38,param_1[1],local_28,1,1,1);
      if (((iVar3 == 1) && (DAT_146b50e50 != (longlong *)0x0)) &&
         (*(ulong *)(DAT_146b50e50 + 0xb) == *param_1)) {
        DAT_1467bdcd1 = 0;
      }
      else {
        DAT_1467bdcd1 = 1;
      }
      return iVar3;
    }
    cVar2 = (**(code **)(*plVar1 + 0x60))(plVar1);
    if (cVar2 != '\0') {
      if (plVar1 != (longlong *)0x0) {
        if (plVar1[2] == _Var4) {
          if (*(char *)((longlong)plVar1 + 0x175) != '\0') {
            if (((int)plVar1[0x2e] != 0) && ((int)plVar1[3] != 0xb5)) {
              return 1;
            }
            goto LAB_14312a8c8;
          }
LAB_14312a8e7:
          uVar5 = 0;
        }
        else {
LAB_14312a8c8:
          if (((*(char *)((longlong)plVar1 + 0x175) == '\0') || ((int)plVar1[0x2e] == 0)) ||
             ((int)plVar1[3] == 0xb5)) goto LAB_14312a8e7;
          uVar5 = 1;
        }
        RemoveOutputDevice(plVar1[2],uVar5);
      }
      goto LAB_14312a8ee;
    }
    plVar1 = (longlong *)plVar1[1];
  } while( true );
}



// FUNCTION 14312a950 FUN_14312a950 body=7 status=ok
// SIG undefined FUN_14312a950(void)

void FUN_14312a950(void)

{
  FUN_14312a980(0);
  return;
}



// FUNCTION 14312a980 FUN_14312a980 body=772 status=ok
// SIG undefined FUN_14312a980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14312a980(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  IAkGlobalPluginContext *pIVar13;
  ulonglong uVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  byte bVar18;
  uint local_res10 [2];
  uint local_res18 [2];
  undefined8 auStack_70 [5];
  undefined4 local_48 [4];
  
  lVar5 = DAT_146b50e50;
  if (DAT_1467bdca8 < 1) {
    DAT_1467bdca8 = 0x15;
  }
  if ((uint)((ulonglong)*(uint *)(DAT_146b50b78 + 0x78) %
            (1000 / (longlong)DAT_1467bdca8 & 0xffffffffU)) < (uint)DAT_146b50d60) {
    param_1 = '\x01';
  }
  if ((DAT_146b50e1c != '\0') && (DAT_146b50e50 != 0)) {
    DAT_146b50e1c = '\0';
    if (DAT_146b50e38 != (code *)0x0) {
      auStack_70[0] = 0x14312aa12;
      pIVar13 = AK::SoundEngine::GetGlobalPluginContext();
      local_48[0] = 1;
      auStack_70[0] = 0x14312aa29;
      (*DAT_146b50e38)(pIVar13,*(undefined4 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x5c),2);
    }
    auStack_70[0] = 0x14312aa3a;
    FUN_1431298e0(DAT_146b50e50,0);
    if (*(int *)(DAT_146b50e50 + 0x170) != 2) {
      *(undefined4 *)(DAT_146b50e50 + 0x170) = 2;
      auStack_70[0] = 0x14312aa54;
      bVar9 = AK::SoundEngine::IsInitialized();
      if (bVar9) {
        auStack_70[0] = 0x14312aa68;
        CAkAudioThread::WakeupEventsConsumer(DAT_146b50b78 + 0x80);
      }
    }
    param_1 = '\0';
  }
  cVar7 = DAT_146b50e1d;
  uVar14 = (ulonglong)DAT_146b50e40 * 8 + 0xf;
  if (uVar14 <= (ulonglong)DAT_146b50e40 * 8) {
    uVar14 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x14312aa9d;
  lVar6 = -(uVar14 & 0xfffffffffffffff0);
  uVar14 = 0;
  local_res18[0] = 0;
  bVar18 = 1;
  local_res10[0] = 0xffffffff;
  for (lVar5 = DAT_146b50e50; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 8)) {
    iVar16 = 2;
    plVar3 = *(longlong **)(lVar5 + 0x148);
    iVar12 = *(int *)(lVar5 + 0x170);
    iVar17 = iVar16;
    if ((plVar3 != (longlong *)0x0) && (iVar17 = iVar12, DAT_146b50e1e == '\0')) {
      if (iVar12 != 1) {
        iVar12 = iVar16;
      }
      pcVar4 = *(code **)(*plVar3 + 0x38);
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14312aafb;
      iVar11 = (*pcVar4)(plVar3,local_res18);
      iVar17 = iVar12;
      if (iVar11 == 2) {
        if (DAT_146b50e38 != (code *)0x0) {
          *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14312ab0f;
          pIVar13 = AK::SoundEngine::GetGlobalPluginContext();
          uVar1 = *(undefined4 *)(lVar5 + 0x5c);
          uVar2 = *(undefined4 *)(lVar5 + 0x58);
          *(undefined4 *)((longlong)local_48 + lVar6) = 2;
          *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14312ab26;
          (*DAT_146b50e38)(pIVar13,uVar2,uVar1,2);
        }
        *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14312ab30;
        FUN_1431298e0(lVar5,0);
        iVar17 = iVar16;
      }
    }
    if (((*(char *)(lVar5 + 0x175) == '\0') || (*(int *)(lVar5 + 0x170) == 0)) ||
       (*(int *)(lVar5 + 0x18) == 0xb5)) {
      bVar15 = 1;
    }
    else {
      bVar15 = 0;
    }
    if (iVar17 == 1) {
LAB_14312abb3:
      uVar8 = local_res10[0];
      if ((bVar15 == 0) && (uVar8 = local_res18[0], local_res10[0] < local_res18[0])) {
        uVar8 = local_res10[0];
      }
      local_res10[0] = uVar8;
      bVar18 = bVar18 & bVar15;
    }
    else if ((iVar17 == 2) && (param_1 != '\0')) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14312ab6c;
      cVar10 = FUN_143129b00(lVar5);
      if (cVar10 == '\0') {
        *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14312ab7a;
        FUN_1431298e0(lVar5,0);
        iVar12 = 2;
      }
      else {
        *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14312ab8b;
        CAkAudioMgr::StampTimeLastBuffer(DAT_146b50b78);
        iVar12 = 1;
      }
      *(longlong *)(&stack0xffffffffffffffc8 + uVar14 * 8 + lVar6) = lVar5;
      uVar14 = (ulonglong)((int)uVar14 + 1);
      if (iVar12 == 1) {
        pcVar4 = *(code **)(**(longlong **)(lVar5 + 0x148) + 0x38);
        *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14312abae;
        iVar12 = (*pcVar4)();
        if (iVar12 == 1) goto LAB_14312abb3;
      }
    }
  }
  if (DAT_146b50e40 == 0) {
    DAT_146b50e1d = bVar18;
    return 0;
  }
  DAT_146b50e1d = bVar18;
  if (bVar18 == 0) {
    if ((cVar7 != '\0') && (DAT_146b50e1e == '\0')) {
      plVar3 = *(longlong **)(DAT_146b50e50 + 0x148);
      pcVar4 = *(code **)(*plVar3 + 0x38);
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14312ac59;
      (*pcVar4)(plVar3,local_res10);
    }
LAB_14312ac59:
    if ((int)uVar14 != 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14312ac65;
      CAkLEngine::ReevaluateGraph(0);
    }
  }
  else {
    plVar3 = *(longlong **)(DAT_146b50e50 + 0x148);
    if (plVar3 != (longlong *)0x0) {
      pcVar4 = *(code **)(*plVar3 + 0x38);
      *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14312ac11;
      iVar12 = (*pcVar4)(plVar3,local_res10);
      if (iVar12 == 1) {
        if (cVar7 == '\0') {
          *(undefined8 *)((longlong)auStack_70 + lVar6) = 0x14312ac26;
          FUN_14312bac0(1,1);
          local_res10[0] = 0;
        }
        goto LAB_14312ac59;
      }
    }
    DAT_146b50e1c = '\x01';
    local_res10[0] = 0;
  }
  return local_res10[0];
}



// FUNCTION 14312acb0 PushData body=185 status=ok
// SIG undefined PushData(void)

void AkDevice::PushData(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 local_res8;
  undefined4 uStackX_c;
  
  local_res8 = (float)param_3;
  uStackX_c = (float)((ulonglong)param_3 >> 0x20);
  uStackX_c = uStackX_c * DAT_1467bdcdc * *(float *)(param_1 + 0x154);
  local_res8 = local_res8 * DAT_1467bdcd8 * *(float *)(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_14318d600(param_2,*(undefined8 *)(param_1 + 0x160),CONCAT44(uStackX_c,local_res8));
    *(undefined2 *)(*(longlong *)(param_1 + 0x160) + 0x12) = *(undefined2 *)(param_2 + 0x12);
  }
                    /* WARNING: Could not recover jumptable at 0x00014312ad65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x148) + 0x40))
            (*(longlong **)(param_1 + 0x148),param_2,CONCAT44(uStackX_c,local_res8));
  return;
}



// FUNCTION 14312ad70 RemoveOutputDevice body=460 status=ok
// SIG undefined RemoveOutputDevice(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 CAkOutputMgr::RemoveOutputDevice(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  long lVar5;
  char cVar6;
  IAkGlobalPluginContext *pIVar7;
  longlong *plVar8;
  
  plVar2 = (longlong *)0x0;
  plVar3 = DAT_146b50e50;
  while( true ) {
    if (plVar3 == (longlong *)0x0) {
      return 2;
    }
    if (plVar3[2] == param_1) break;
    plVar2 = plVar3;
    plVar3 = (longlong *)plVar3[1];
  }
  plVar8 = DAT_146b50e50;
  if (param_1 == 0) {
    for (; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[1]) {
      cVar6 = (**(code **)(*plVar8 + 0x60))(plVar8);
      if (cVar6 != '\0') goto LAB_14312adec;
    }
    plVar8 = (longlong *)0x0;
LAB_14312adec:
    if ((plVar8 != (longlong *)0x0) &&
       (lVar4 = plVar8[6], *(undefined4 *)(plVar8 + 6) = 0, (int)lVar4 != 0)) {
      _DAT_146b50e68 = 0;
      for (plVar1 = DAT_146b50e50; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[1]) {
        if (plVar8 != plVar1) {
          AkUnion<unsigned___int64,AkHybridAllocator<8,8>,1>(&DAT_146b50e58,plVar1 + 4);
        }
      }
    }
  }
  else {
    for (; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[1]) {
      if (plVar8[2] == param_1) goto LAB_14312adec;
    }
  }
  if (((param_2 != '\0') && ((int)plVar3[3] != 0xb5)) && (DAT_146b50e38 != (code *)0x0)) {
    pIVar7 = AK::SoundEngine::GetGlobalPluginContext();
    (*DAT_146b50e38)(pIVar7,(int)plVar3[0xb],*(undefined4 *)((longlong)plVar3 + 0x5c),1,1);
  }
  plVar8 = (longlong *)plVar3[1];
  if (plVar3 != DAT_146b50e50) {
    plVar2[1] = plVar3[1];
    plVar8 = DAT_146b50e50;
  }
  DAT_146b50e50 = plVar8;
  lVar5 = g_DefaultPoolId;
  if (plVar3 == DAT_146b50e48) {
    DAT_146b50e48 = plVar2;
  }
  DAT_146b50e40 = DAT_146b50e40 + -1;
  (**(code **)*plVar3)(plVar3,0);
  AK::MemoryMgr::Free(lVar5,plVar3);
  CAkLEngine::ReevaluateGraph(0);
  if ((DAT_146b50e10 != (void *)0x0) && (DAT_146b50e50 == (longlong *)0x0)) {
    AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50e10);
    DAT_146b50e10 = (void *)0x0;
  }
  return 1;
}



// FUNCTION 14312af40 ResetMainDevice body=29 status=ok
// SIG undefined ResetMainDevice(void)

void CAkOutputMgr::ResetMainDevice(void)

{
  DAT_146b50e1c = 1;
  if (DAT_146b50b78 != 0) {
    CAkAudioThread::WakeupEventsConsumer(DAT_146b50b78 + 0x80);
    return;
  }
  return;
}



// FUNCTION 14312af60 FUN_14312af60 body=208 status=ok
// SIG undefined FUN_14312af60(void)

ulonglong FUN_14312af60(void *param_1,uint param_2)

{
  uint uVar1;
  AKRESULT AVar2;
  void *pvVar3;
  undefined4 extraout_var;
  __uint64 _Var4;
  ulonglong uVar5;
  uint uVar6;
  void *pvVar7;
  
  uVar6 = *(uint *)((longlong)param_1 + 0x10);
  pvVar3 = (void *)(ulonglong)uVar6;
  if ((uVar6 <= param_2) && (*(uint *)((longlong)param_1 + 0x14) < param_2)) {
    uVar6 = (*(uint *)((longlong)param_1 + 0x14) - uVar6) + param_2;
    _Var4 = (ulonglong)uVar6 << 3;
    pvVar7 = param_1;
    if (8 < _Var4) {
      pvVar3 = AK::MemoryMgr::Malign(g_DefaultPoolId,_Var4,8);
      pvVar7 = pvVar3;
    }
    if (pvVar7 == (void *)0x0) {
      return (ulonglong)pvVar3 & 0xffffffffffffff00;
    }
    pvVar3 = *(void **)((longlong)param_1 + 8);
    if ((pvVar3 != (void *)0x0) && (pvVar3 != pvVar7)) {
      uVar1 = *(uint *)((longlong)param_1 + 0x10);
      uVar5 = 0;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)((longlong)pvVar7 + uVar5 * 8) =
               *(undefined8 *)(*(longlong *)((longlong)param_1 + 8) + uVar5 * 8);
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1);
        pvVar3 = *(void **)((longlong)param_1 + 8);
      }
      if (param_1 != pvVar3) {
        AVar2 = AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar3);
        pvVar3 = (void *)CONCAT44(extraout_var,AVar2);
      }
    }
    *(void **)((longlong)param_1 + 8) = pvVar7;
    *(uint *)((longlong)param_1 + 0x14) = uVar6;
  }
  *(uint *)((longlong)param_1 + 0x10) = param_2;
  return CONCAT71((int7)((ulonglong)pvVar3 >> 8),1);
}



// FUNCTION 14312b030 FUN_14312b030 body=362 status=ok
// SIG undefined FUN_14312b030(void)

uint * FUN_14312b030(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  
  puVar5 = (uint *)*param_1;
  uVar2 = *(uint *)(param_1 + 1);
  puVar8 = puVar5 + (ulonglong)uVar2 * 4;
  for (; (puVar5 != puVar8 &&
         (((uVar3 = *puVar5, (uVar3 & 0xff) != (param_2 & 0xff) ||
           (((uVar3 ^ param_2) & 0xf00) != 0)) || (((uVar3 ^ param_2) & 0xfffff000) != 0))));
      puVar5 = puVar5 + 4) {
  }
  puVar6 = (uint *)0x0;
  puVar7 = puVar5 + 2;
  if (puVar5 == puVar8) {
    puVar7 = puVar6;
  }
  if (puVar7 != (uint *)0x0) {
    return puVar7;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc) + 1;
    puVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar3 << 4);
    if (puVar5 == (uint *)0x0) {
      return (uint *)0x0;
    }
    puVar8 = (uint *)*param_1;
    if ((puVar8 != (uint *)0x0) && (puVar8 != puVar5)) {
      uVar9 = (ulonglong)*(uint *)(param_1 + 1);
      puVar7 = puVar5;
      if (uVar9 != 0) {
        do {
          if (puVar7 != (uint *)0x0) {
            *(undefined1 *)puVar7 = 0;
            *puVar7 = *puVar7 & 0xff;
          }
          puVar1 = (undefined8 *)((longlong)puVar7 + (*param_1 - (longlong)puVar5));
          uVar4 = puVar1[1];
          *(undefined8 *)puVar7 = *puVar1;
          *(undefined8 *)(puVar7 + 2) = uVar4;
          uVar9 = uVar9 - 1;
          puVar7 = puVar7 + 4;
        } while (uVar9 != 0);
        puVar8 = (uint *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,puVar8);
    }
    *param_1 = (longlong)puVar5;
    *(uint *)((longlong)param_1 + 0xc) = uVar3;
    puVar5 = puVar6;
    if (uVar3 <= uVar2) goto LAB_14312b179;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  puVar5 = (uint *)((ulonglong)uVar2 * 0x10 + *param_1);
  if (puVar5 != (uint *)0x0) {
    *(undefined1 *)puVar5 = 0;
    *puVar5 = *puVar5 & 0xff;
  }
LAB_14312b179:
  if (puVar5 != (uint *)0x0) {
    *puVar5 = param_2;
    puVar6 = puVar5 + 2;
  }
  return puVar6;
}



// FUNCTION 14312b1a0 FUN_14312b1a0 body=476 status=ok
// SIG undefined FUN_14312b1a0(void)

uint * FUN_14312b1a0(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  void *pvVar4;
  void *pvVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  uint *puVar10;
  
  uVar2 = *(uint *)(param_1 + 1);
  puVar3 = (uint *)*param_1;
  puVar10 = puVar3 + (ulonglong)uVar2 * 6;
  if (puVar3 != puVar10) {
    do {
      if (((*puVar3 & 0x7fffffff) == (param_2 & 0x7fffffff)) && (-1 < (int)(*puVar3 ^ param_2)))
      break;
      puVar3 = puVar3 + 6;
    } while (puVar3 != puVar10);
  }
  puVar8 = puVar3 + 2;
  if (puVar3 == puVar10) {
    puVar8 = (uint *)0x0;
  }
  if (puVar8 != (uint *)0x0) {
    return puVar8;
  }
  if (*(uint *)((longlong)param_1 + 0xc) <= uVar2) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar4 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 * 0x18);
    if (pvVar4 == (void *)0x0) {
      return (uint *)0x0;
    }
    pvVar5 = (void *)*param_1;
    if ((pvVar5 != (void *)0x0) && (pvVar5 != pvVar4)) {
      uVar6 = (ulonglong)*(uint *)(param_1 + 1);
      if (uVar6 != 0) {
        puVar9 = (undefined8 *)((longlong)pvVar4 + 0x10);
        do {
          if (puVar9 + -2 != (undefined8 *)0x0) {
            puVar9[-1] = 0;
            *puVar9 = 0;
          }
          puVar7 = (undefined4 *)((longlong)puVar9 + *param_1 + (-0x10 - (longlong)pvVar4));
          *(undefined4 *)(puVar9 + -2) = *puVar7;
          if ((void *)puVar9[-1] != (void *)0x0) {
            *(undefined4 *)puVar9 = 0;
            AK::MemoryMgr::Falign(g_DefaultPoolId,(void *)puVar9[-1]);
            puVar9[-1] = 0;
            *(undefined4 *)((longlong)puVar9 + 4) = 0;
          }
          puVar9[-1] = *(undefined8 *)(puVar7 + 2);
          *(undefined4 *)puVar9 = puVar7[4];
          *(undefined4 *)((longlong)puVar9 + 4) = puVar7[5];
          puVar9 = puVar9 + 3;
          *(undefined8 *)(puVar7 + 2) = 0;
          *(undefined8 *)(puVar7 + 4) = 0;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
        pvVar5 = (void *)*param_1;
      }
      AK::MemoryMgr::Free(g_DefaultPoolId,pvVar5);
    }
    puVar10 = (uint *)0x0;
    *param_1 = (longlong)pvVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    if (uVar1 <= uVar2) goto LAB_14312b35b;
  }
  puVar10 = (uint *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 0x18);
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
  if (puVar10 == (uint *)0x0) {
    return (uint *)0x0;
  }
  puVar10[2] = 0;
  puVar10[3] = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
LAB_14312b35b:
  if (puVar10 == (uint *)0x0) {
    return (uint *)0x0;
  }
  *puVar10 = param_2;
  return puVar10 + 2;
}



// FUNCTION 14312b380 SetDeviceSuspended body=308 status=ok
// SIG undefined SetDeviceSuspended(void)

undefined8 CAkOutputMgr::SetDeviceSuspended(char param_1,char param_2,uint param_3)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if ((param_1 == DAT_146b50e1e) && (param_2 == DAT_1467bdcd0)) {
    return 3;
  }
  if (param_3 < DAT_146b50e30) {
    param_3 = DAT_146b50e30;
  }
  if (DAT_1467bdca8 < param_3) {
    DAT_146b50e30 = param_3 - DAT_1467bdca8;
    FUN_1431412a0(DAT_146b50b78,param_1);
    if ((DAT_146b50e1e == '\0') || (DAT_1467bdcd0 != '\0')) {
      return 1;
    }
    param_2 = '\x01';
    param_1 = '\x01';
  }
  else {
    DAT_146b50e30 = 0;
  }
  DAT_1467bdcd0 = param_2;
  if ((DAT_146b50e1e == '\0') && (param_1 == '\0')) {
    DAT_1467bdcd0 = '\x01';
  }
  if (param_1 == '\0') {
    DAT_146b50e1e = 0;
    for (lVar1 = DAT_146b50e50; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      if (*(int *)(lVar1 + 0x170) != 1 && *(int *)(lVar1 + 0x170) != 2) {
        *(undefined4 *)(lVar1 + 0x170) = 2;
        bVar2 = AK::SoundEngine::IsInitialized();
        if (bVar2) {
          CAkAudioThread::WakeupEventsConsumer(DAT_146b50b78 + 0x80);
        }
      }
    }
    FUN_14312a980(1);
    return 1;
  }
  DAT_146b50e1e = param_1;
  uVar3 = FUN_14312bac0(DAT_1467bdcd0,1);
  return uVar3;
}



// FUNCTION 14312b4c0 SetListenersOnDevice body=119 status=ok
// SIG undefined SetListenersOnDevice(void)

undefined8
CAkOutputMgr::SetListenersOnDevice(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = GetDevice(param_3);
  if (lVar1 != 0) {
    FUN_14312c000(lVar1 + 0x20,param_1);
    *(undefined4 *)(lVar1 + 0x38) = param_2;
    AkUnion<unsigned___int64,AkHybridAllocator<8,8>,1>(&DAT_146b50e58,lVar1 + 0x20);
    return 1;
  }
  return 2;
}



// FUNCTION 14312b540 SetSpeakerAngles body=696 status=ok
// SIG undefined SetSpeakerAngles(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int AkDevice::SetSpeakerAngles(longlong param_1,longlong param_2,uint param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  __uint64 _Var15;
  float local_res20 [2];
  undefined8 auStack_60 [5];
  float local_38 [4];
  
  if ((param_4 < -90.0) || (90.0 < param_4)) {
    iVar6 = 0x1f;
  }
  else {
    uVar14 = param_3;
    if (param_3 < *(uint *)(param_1 + 0x48)) {
      uVar14 = *(uint *)(param_1 + 0x48);
    }
    _Var15 = (ulonglong)uVar14 * 4;
    auStack_60[0] = 0x14312b5a4;
    pvVar8 = AK::MemoryMgr::Malloc(g_DefaultPoolId,_Var15);
    if (pvVar8 == (void *)0x0) {
      iVar6 = 2;
    }
    else {
      uVar9 = _Var15 + 0xf;
      if (uVar9 <= _Var15) {
        uVar9 = 0xffffffffffffff0;
      }
      auStack_60[0] = 0x14312b5d1;
      lVar5 = -(uVar9 & 0xfffffffffffffff0);
      uVar7 = 0;
      lVar12 = (longlong)local_38 + lVar5;
      if (3 < param_3) {
        lVar11 = param_2 - lVar12;
        uVar7 = (param_3 - 4 >> 2) + 1;
        puVar10 = (undefined4 *)((longlong)local_38 + lVar5 + 4);
        uVar9 = (ulonglong)uVar7;
        uVar7 = uVar7 * 4;
        do {
          puVar10[-1] = *(undefined4 *)(lVar11 + -4 + (longlong)puVar10);
          *puVar10 = *(undefined4 *)(lVar11 + (longlong)puVar10);
          puVar10[1] = *(undefined4 *)(lVar11 + 4 + (longlong)puVar10);
          puVar10[2] = *(undefined4 *)(lVar11 + 8 + (longlong)puVar10);
          puVar10 = puVar10 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      if (uVar7 < param_3) {
        uVar9 = (ulonglong)(param_3 - uVar7);
        puVar10 = (undefined4 *)(lVar12 + (ulonglong)uVar7 * 4);
        do {
          *puVar10 = *(undefined4 *)((longlong)puVar10 + (param_2 - lVar12));
          puVar10 = puVar10 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar7 = param_3;
      if (param_3 < *(uint *)(param_1 + 0x48)) {
        do {
          uVar13 = uVar7 + 1;
          *(float *)(lVar12 + (ulonglong)uVar7 * 4) =
               *(float *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar7 * 4) * 57.295776;
          uVar7 = uVar13;
        } while (uVar13 < *(uint *)(param_1 + 0x48));
      }
      *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x14312b6a0;
      iVar6 = CAkSpeakerPan::SetSpeakerAngles(lVar12,param_3,pvVar8,local_res20);
      if (iVar6 == 1) {
        pvVar3 = *(void **)(param_1 + 0x40);
        if (pvVar3 != (void *)0x0) {
          *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x14312b6bb;
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar3);
        }
        *(void **)(param_1 + 0x40) = pvVar8;
        *(uint *)(param_1 + 0x48) = uVar14;
        *(float *)(param_1 + 0x4c) = 1.0 / local_res20[0];
        *(float *)(param_1 + 0x50) = param_4 * 0.017453292;
      }
      else {
        *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x14312b6f2;
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar8);
      }
      puVar10 = *(undefined4 **)(param_1 + 0x78);
      if (puVar10 != puVar10 + (ulonglong)*(uint *)(param_1 + 0x80) * 4) {
        do {
          uVar1 = *(undefined4 *)(param_1 + 0x50);
          uVar4 = *(undefined8 *)(param_1 + 0x40);
          uVar2 = *puVar10;
          *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x14312b724;
          CAkSpeakerPan::CreatePanCache(uVar2,uVar4,uVar1,puVar10 + 2);
          puVar10 = puVar10 + 4;
        } while (puVar10 !=
                 (undefined4 *)
                 ((ulonglong)*(uint *)(param_1 + 0x80) * 0x10 + *(longlong *)(param_1 + 0x78)));
      }
      lVar12 = *(longlong *)(param_1 + 0x68);
      if (lVar12 != (ulonglong)*(uint *)(param_1 + 0x70) * 0x10 + lVar12) {
        do {
          pvVar8 = *(void **)(lVar12 + 8);
          *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x14312b75f;
          AK::MemoryMgr::Free(g_DefaultPoolId,pvVar8);
          lVar12 = lVar12 + 0x10;
        } while (lVar12 != (ulonglong)*(uint *)(param_1 + 0x70) * 0x10 +
                           *(longlong *)(param_1 + 0x68));
      }
      *(undefined4 *)(param_1 + 0x70) = 0;
      lVar12 = *(longlong *)(param_1 + 0xb0);
      if (lVar12 != lVar12 + (ulonglong)*(uint *)(param_1 + 0xb8) * 0x18) {
        do {
          pvVar8 = *(void **)(lVar12 + 8);
          if (pvVar8 != (void *)0x0) {
            *(undefined4 *)(lVar12 + 0x10) = 0;
            *(undefined8 *)((longlong)auStack_60 + lVar5) = 0x14312b7a9;
            AK::MemoryMgr::Falign(g_DefaultPoolId,pvVar8);
            *(undefined8 *)(lVar12 + 8) = 0;
            *(undefined4 *)(lVar12 + 0x14) = 0;
          }
          lVar12 = lVar12 + 0x18;
        } while (lVar12 != *(longlong *)(param_1 + 0xb0) +
                           (ulonglong)*(uint *)(param_1 + 0xb8) * 0x18);
      }
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  return iVar6;
}



// FUNCTION 14312b800 SignalAudioThread body=49 status=ok
// SIG undefined SignalAudioThread(void)

undefined8 AkDevice::SignalAudioThread(longlong param_1)

{
  if (*(char *)(param_1 + 0x175) != '\0') {
    CAkAudioThread::WakeupEventsConsumer(DAT_146b50b78 + 0x80);
    return 1;
  }
  return 2;
}



// FUNCTION 14312b840 StartOutputCapture body=256 status=ok
// SIG undefined StartOutputCapture(void)

void AkDevice::StartOutputCapture(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  if ((*(longlong *)(param_1 + 0x158) == 0) &&
     (uVar1 = *(uint *)(param_1 + 0x3c), *(longlong *)(param_1 + 0x160) == 0)) {
    puVar3 = AK::MemoryMgr::Malloc(g_LEngineDefaultPoolId,0x18);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)0x0;
    }
    else {
      *(undefined1 *)(puVar3 + 1) = 0;
      *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) & 0xff;
      *(undefined8 *)((longlong)puVar3 + 0xc) = 0x2b;
      *puVar3 = 0;
    }
    *(undefined8 **)(param_1 + 0x160) = puVar3;
    if ((puVar3 != (undefined8 *)0x0) &&
       (pvVar4 = AK::MemoryMgr::Malign
                           (g_LEngineDefaultPoolId,
                            (ulonglong)((uVar1 & 0xff) * (uint)DAT_1467bdcb8 * 2),0x10),
       uVar2 = DAT_1467bdcb8, pvVar4 != (void *)0x0)) {
      puVar3 = *(undefined8 **)(param_1 + 0x160);
      *puVar3 = pvVar4;
      *(ushort *)(puVar3 + 2) = uVar2;
      *(undefined2 *)((longlong)puVar3 + 0x12) = 0;
      *(uint *)(puVar3 + 1) = uVar1;
      puVar3 = (undefined8 *)FUN_1431534e0();
      uVar5 = (**(code **)*puVar3)(puVar3,param_2,DAT_1467bdcac,0x10,1,uVar1);
      *(undefined8 *)(param_1 + 0x158) = uVar5;
    }
  }
  return;
}



// FUNCTION 14312b940 StartOutputCapture body=372 status=ok
// SIG undefined StartOutputCapture(void)

void CAkOutputMgr::StartOutputCapture(void *param_1)

{
  short *psVar1;
  longlong *plVar2;
  size_t _Size;
  longlong *plVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar8;
  longlong lVar7;
  
  if ((DAT_146b50e10 == (void *)0x0) && (DAT_1467bdcd1 == '\0')) {
    lVar6 = -1;
    do {
      lVar7 = lVar6;
      lVar6 = lVar7 + 1;
    } while (*(short *)((longlong)param_1 + lVar6 * 2) != 0);
    if (lVar6 != 0) {
      _Size = lVar6 * 2;
      DAT_146b50e10 = AK::MemoryMgr::Malloc(g_DefaultPoolId,_Size + 4);
      if (DAT_146b50e10 != (void *)0x0) {
        ::_guard_xfg_dispatch_icall_nop(DAT_146b50e10,param_1,_Size);
        DAT_146b50e18 = (uint)lVar7;
        while ((DAT_146b50e18 != 0 &&
               (*(char *)((longlong)param_1 + (ulonglong)DAT_146b50e18 * 2) != '.'))) {
          DAT_146b50e18 = DAT_146b50e18 - 1;
        }
        lVar7 = (ulonglong)DAT_146b50e18 * 2;
        ::_guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)DAT_146b50e10 + lVar7 + 2),(void *)(lVar7 + (longlong)param_1)
                   ,(lVar6 - (ulonglong)DAT_146b50e18) * 2);
        *(undefined2 *)(_Size + 2 + (longlong)DAT_146b50e10) = 0;
        *(undefined2 *)((longlong)DAT_146b50e10 + (ulonglong)DAT_146b50e18 * 2) = 0x30;
        for (plVar2 = DAT_146b50e50; plVar3 = DAT_146b50e50, plVar2 != (longlong *)0x0;
            plVar2 = (longlong *)plVar2[1]) {
          while ((plVar8 = (longlong *)0x0, plVar3 != (longlong *)0x0 &&
                 (cVar4 = (**(code **)(*plVar3 + 0x60))(plVar3), plVar8 = plVar3, cVar4 == '\0'))) {
            plVar3 = (longlong *)plVar3[1];
          }
          pvVar5 = param_1;
          if (plVar2[2] != plVar8[2]) {
            psVar1 = (short *)((longlong)DAT_146b50e10 + (ulonglong)DAT_146b50e18 * 2);
            *psVar1 = *psVar1 + 1;
            pvVar5 = DAT_146b50e10;
          }
          AkDevice::StartOutputCapture(plVar2,pvVar5);
        }
      }
    }
  }
  return;
}



// FUNCTION 14312bac0 FUN_14312bac0 body=352 status=ok
// SIG undefined FUN_14312bac0(void)

int FUN_14312bac0(undefined1 param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 local_28 [4];
  undefined4 local_24;
  
  iVar4 = 1;
  for (lVar1 = DAT_146b50e50; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
    if (*(int *)(lVar1 + 0x170) == 0) {
      iVar2 = 1;
    }
    else {
      plVar3 = (longlong *)(**(code **)(PTR_PTR_1467be108 + 8))(&PTR_PTR_1467be108,0x28);
      if (plVar3 == (longlong *)0x0) {
        iVar2 = 0x34;
      }
      else {
        *plVar3 = 0;
        plVar3[1] = 0;
        plVar3[2] = 0;
        plVar3[3] = 0;
        plVar3[4] = 0;
        CAkSinkBase::CAkSinkBase(plVar3);
        *plVar3 = (longlong)&PTR_FUN_145ac6b40;
        *(undefined1 *)(plVar3 + 3) = 0;
        *(uint *)(plVar3 + 3) = *(uint *)(plVar3 + 3) & 0xff;
        plVar3[2] = 0;
        *(undefined8 *)((longlong)plVar3 + 0x1c) = 0x2b;
        local_24 = *(undefined4 *)(lVar1 + 100);
        iVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,0,0,0,local_28);
        if (iVar2 == 1) {
          (**(code **)(*(longlong *)(lVar1 + 0xe8) + 0x20))();
          *(undefined4 *)(lVar1 + 0x3c) = local_24;
          *(longlong **)(lVar1 + 0x148) = plVar3;
          *(undefined4 *)(lVar1 + 0x170) = 0;
          *(undefined4 *)(lVar1 + 0x18) = 0xb5;
        }
      }
    }
    if ((iVar4 == 1) && (iVar2 != 1)) {
      iVar4 = iVar2;
    }
  }
  CAkLEngine::ReevaluateGraph(0);
  DAT_146b50e1d = iVar4 == 1;
  DAT_1467bdcd0 = param_1;
  SetEvent(DAT_146b50e28);
  return iVar4;
}



// FUNCTION 14312bc20 StopOutputCapture body=128 status=ok
// SIG undefined StopOutputCapture(void)

void AkDevice::StopOutputCapture(longlong param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  if (*(longlong *)(param_1 + 0x158) != 0) {
    AkCaptureFile::StopCapture();
    *(undefined8 *)(param_1 + 0x158) = 0;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x160);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(uint *)(puVar1 + 1) = *(uint *)(puVar1 + 1) & 0xff;
    pvVar2 = (void *)*puVar1;
    *puVar1 = 0;
    if (pvVar2 != (void *)0x0) {
      AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,pvVar2);
    }
    if (*(void **)(param_1 + 0x160) != (void *)0x0) {
      AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(param_1 + 0x160));
    }
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  return;
}



// FUNCTION 14312bca0 StopOutputCapture body=184 status=ok
// SIG undefined StopOutputCapture(void)

void CAkOutputMgr::StopOutputCapture(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  
  for (lVar3 = DAT_146b50e50; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 8)) {
    if (*(longlong *)(lVar3 + 0x158) != 0) {
      AkCaptureFile::StopCapture();
      *(undefined8 *)(lVar3 + 0x158) = 0;
    }
    puVar1 = *(undefined8 **)(lVar3 + 0x160);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(uint *)(puVar1 + 1) = *(uint *)(puVar1 + 1) & 0xff;
      pvVar2 = (void *)*puVar1;
      *puVar1 = 0;
      if (pvVar2 != (void *)0x0) {
        AK::MemoryMgr::Falign(g_LEngineDefaultPoolId,pvVar2);
      }
      if (*(void **)(lVar3 + 0x160) != (void *)0x0) {
        AK::MemoryMgr::Free(g_LEngineDefaultPoolId,*(void **)(lVar3 + 0x160));
      }
      *(undefined8 *)(lVar3 + 0x160) = 0;
    }
  }
  if (DAT_146b50e10 != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50e10);
    DAT_146b50e10 = (void *)0x0;
  }
  return;
}



// FUNCTION 14312bd60 FUN_14312bd60 body=137 status=ok
// SIG undefined FUN_14312bd60(void)

undefined8 FUN_14312bd60(void)

{
  DWORD dwMilliseconds;
  
  dwMilliseconds = DAT_1467bdca8;
joined_r0x00014312bd73:
  if (DAT_146b50e1f != '\0') {
    return 0;
  }
  do {
    WaitForSingleObject(DAT_146b50e28,0xffffffff);
    while( true ) {
      if (DAT_146b50e1d == '\0') goto joined_r0x00014312bd73;
      if (DAT_146b50e1f != '\0') {
        return 0;
      }
      if (DAT_146b50b78 == 0) break;
      if (DAT_1467bdcd0 != '\0') {
        CAkAudioThread::WakeupEventsConsumer(DAT_146b50b78 + 0x80);
      }
      Sleep(dwMilliseconds);
    }
  } while( true );
}



// FUNCTION 14312bdf0 Term body=494 status=ok
// SIG undefined Term(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CAkOutputMgr::Term(void)

{
  long lVar1;
  char cVar2;
  IAkGlobalPluginContext *pIVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar4 = (longlong *)0x0;
  plVar5 = DAT_146b50e50;
  if (DAT_146b50e50 != (longlong *)0x0) {
    do {
      if ((plVar4 == (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar5 + 0x60))(plVar5), cVar2 != '\0')) {
        plVar6 = (longlong *)plVar5[1];
        plVar4 = plVar5;
      }
      else {
        if (DAT_146b50e38 != (code *)0x0) {
          pIVar3 = AK::SoundEngine::GetGlobalPluginContext();
          (*DAT_146b50e38)(pIVar3,(int)plVar5[0xb],*(undefined4 *)((longlong)plVar5 + 0x5c),1,1);
        }
        lVar1 = g_DefaultPoolId;
        plVar6 = (longlong *)plVar5[1];
        (**(code **)*plVar5)(plVar5,0);
        AK::MemoryMgr::Free(lVar1,plVar5);
      }
      plVar5 = plVar6;
    } while (plVar6 != (longlong *)0x0);
    if (plVar4 != (longlong *)0x0) {
      if (DAT_146b50e38 != (code *)0x0) {
        pIVar3 = AK::SoundEngine::GetGlobalPluginContext();
        (*DAT_146b50e38)(pIVar3,(int)plVar4[0xb],*(undefined4 *)((longlong)plVar4 + 0x5c),1,1);
      }
      lVar1 = g_DefaultPoolId;
      (**(code **)*plVar4)(plVar4,0);
      AK::MemoryMgr::Free(lVar1,plVar4);
    }
  }
  DAT_146b50e50 = (longlong *)0x0;
  DAT_146b50e48 = 0;
  DAT_146b50e40 = 0;
  DAT_1467bdcdc = 0x3f800000;
  DAT_1467bdcd8 = 0x3f800000;
  if (DAT_146b50e10 != (void *)0x0) {
    AK::MemoryMgr::Free(g_DefaultPoolId,DAT_146b50e10);
    DAT_146b50e10 = (void *)0x0;
  }
  if (DAT_146b50e60 != (undefined *)0x0) {
    _DAT_146b50e68 = 0;
    if (DAT_146b50e60 != &DAT_146b50e58) {
      AK::MemoryMgr::Falign(g_DefaultPoolId,DAT_146b50e60);
    }
    DAT_146b50e60 = (undefined *)0x0;
    _DAT_146b50e6c = 0;
  }
  DAT_146b50e1d = 0;
  DAT_1467bdcd1 = 1;
  if (DAT_146b50e20 != (HANDLE)0x0) {
    DAT_146b50e1f = 1;
    SetEvent(DAT_146b50e28);
    WaitForSingleObject(DAT_146b50e20,0xffffffff);
    CloseHandle(DAT_146b50e20);
    DAT_146b50e20 = (HANDLE)0x0;
  }
  if (DAT_146b50e28 != (HANDLE)0x0) {
    CloseHandle(DAT_146b50e28);
  }
  DAT_146b50e1c = 0;
  DAT_146b50e28 = (HANDLE)0x0;
  return;
}



// FUNCTION 14312bfe0 TopNodeDeleted body=19 status=ok
// SIG undefined TopNodeDeleted(void)

void AkDevice::TopNodeDeleted(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  return;
}



// FUNCTION 14312c000 FUN_14312c000 body=118 status=ok
// SIG undefined FUN_14312c000(void)

void FUN_14312c000(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 2) = 0;
    if (param_1 != puVar1) {
      AK::MemoryMgr::Falign(g_DefaultPoolId,puVar1);
    }
    param_1[1] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  puVar1 = (undefined8 *)param_2[1];
  if (param_2 == (undefined8 *)param_2[1]) {
    *param_1 = *param_2;
    puVar1 = param_1;
  }
  param_1[1] = puVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 14312c080 UpdateTargetRtpcParam body=39 status=ok
// SIG undefined UpdateTargetRtpcParam(void)

void PluginRTPCSub::UpdateTargetRtpcParam
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  FUN_14318cdf0(param_5,1,param_3,param_2,param_4,param_5);
  return;
}



// FUNCTION 14312c0b0 FUN_14312c0b0 body=914 status=ok
// SIG undefined FUN_14312c0b0(void)

int FUN_14312c0b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  longlong lVar1;
  short *psVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  void *pvVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  __uint64 _Var14;
  uint uVar15;
  uint uVar16;
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_38;
  
  pvVar9 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x178);
  if ((pvVar9 != (void *)0x0) &&
     (puVar10 = (undefined8 *)AkDevice::AkDevice(pvVar9,param_2,param_1,param_6),
     puVar10 != (undefined8 *)0x0)) {
    cVar7 = FUN_143129b00(puVar10);
    if ((cVar7 != '\0') || (iVar8 = FUN_1431298e0(puVar10,0), lVar5 = g_DefaultPoolId, iVar8 == 1))
    {
      iVar8 = AkDevice::InitDefaultAngles(puVar10);
      lVar5 = g_DefaultPoolId;
      puVar6 = DAT_146b50e50;
      if (iVar8 != 1) {
        (**(code **)*puVar10)(puVar10,0);
        AK::MemoryMgr::Free(lVar5,puVar10);
        return iVar8;
      }
      do {
        if (puVar6 == (undefined8 *)0x0) {
          puVar10[1] = 0;
          puVar6 = puVar10;
          if (DAT_146b50e50 != (undefined8 *)0x0) {
            *(undefined8 **)((longlong)DAT_146b50e48 + 8) = puVar10;
            puVar6 = DAT_146b50e50;
          }
          DAT_146b50e50 = puVar6;
          DAT_146b50e40 = DAT_146b50e40 + 1;
          DAT_146b50e48 = puVar10;
          CAkOutputMgr::SetListenersOnDevice(param_4,param_5,puVar10[2]);
          CAkLEngine::ReevaluateGraph(0);
          if (DAT_146b50e10 != 0) {
            lVar11 = -1;
            do {
              lVar1 = lVar11 * 2;
              lVar11 = lVar11 + 1;
            } while (*(short *)(DAT_146b50e10 + 2 + lVar1) != 0);
            psVar2 = (short *)(DAT_146b50e10 + -10 + lVar11 * 2);
            *psVar2 = *psVar2 + 1;
            AkDevice::StartOutputCapture(puVar10,DAT_146b50e10);
          }
          return 1;
        }
        uVar16 = 0;
        if (*(int *)(puVar6 + 0xb) == *(int *)(puVar10 + 0xb)) {
          if ((*(char *)((longlong)puVar6 + 0x176) == '\0') && (*(int *)(puVar6 + 6) == 0)) {
            local_40 = (undefined8 *)0x0;
            local_38 = 0;
            lVar11 = CAkConnectedListeners::GetDefault();
            if (local_40 == (undefined8 *)0x0) {
              uVar15 = local_38._4_4_;
              uVar16 = (uint)local_38;
            }
            else {
              local_38 = (ulonglong)local_38._4_4_ << 0x20;
              if (&local_48 != local_40) {
                AK::MemoryMgr::Falign(g_DefaultPoolId,local_40);
                uVar16 = (uint)local_38;
              }
              local_40 = (undefined8 *)0x0;
              local_38 = local_38 & 0xffffffff;
              uVar15 = 0;
            }
            uVar3 = *(uint *)(lVar11 + 0xb0);
            if ((uVar3 < uVar16) || (uVar3 <= uVar15)) {
LAB_14312c2b8:
              local_38 = CONCAT44(local_38._4_4_,uVar3);
              uVar13 = 0;
              if (*(int *)(lVar11 + 0xb0) != 0) {
                do {
                  uVar16 = (int)uVar13 + 1;
                  local_40[uVar13] = *(undefined8 *)(uVar13 * 8 + *(longlong *)(lVar11 + 0xa8));
                  uVar13 = (ulonglong)uVar16;
                } while (uVar16 < *(uint *)(lVar11 + 0xb0));
              }
            }
            else {
              uVar15 = (uVar15 - uVar16) + uVar3;
              _Var14 = (ulonglong)uVar15 << 3;
              if (_Var14 < 9) {
                puVar12 = &local_48;
LAB_14312c26b:
                if ((local_40 != (undefined8 *)0x0) && (local_40 != puVar12)) {
                  uVar13 = 0;
                  if ((ulonglong)uVar16 != 0) {
                    do {
                      puVar12[uVar13] = local_40[uVar13];
                      uVar13 = uVar13 + 1;
                    } while (uVar13 < uVar16);
                  }
                  if (&local_48 != local_40) {
                    AK::MemoryMgr::Falign(g_DefaultPoolId,local_40);
                  }
                }
                local_38 = (ulonglong)uVar15 << 0x20;
                local_40 = puVar12;
                goto LAB_14312c2b8;
              }
              puVar12 = AK::MemoryMgr::Malign(g_DefaultPoolId,_Var14,8);
              if (puVar12 != (undefined8 *)0x0) {
                uVar16 = (uint)local_38;
                goto LAB_14312c26b;
              }
            }
            lVar11 = CAkOutputMgr::GetDevice(puVar6[2]);
            if (lVar11 != 0) {
              puVar4 = *(undefined8 **)(lVar11 + 0x28);
              puVar12 = (undefined8 *)(lVar11 + 0x20);
              if (puVar4 != (undefined8 *)0x0) {
                *(undefined4 *)(lVar11 + 0x30) = 0;
                if (puVar12 != puVar4) {
                  AK::MemoryMgr::Falign(g_DefaultPoolId,puVar4);
                }
                *(undefined8 *)(lVar11 + 0x28) = 0;
                *(undefined4 *)(lVar11 + 0x34) = 0;
              }
              if (&local_48 == local_40) {
                *puVar12 = local_48;
                local_40 = puVar12;
              }
              *(undefined8 **)(lVar11 + 0x28) = local_40;
              *(uint *)(lVar11 + 0x30) = (uint)local_38;
              *(uint *)(lVar11 + 0x34) = local_38._4_4_;
              local_40 = (undefined8 *)0x0;
              local_38 = 0;
              *(undefined4 *)(lVar11 + 0x38) = 0;
              AkUnion<unsigned___int64,AkHybridAllocator<8,8>,1>(&DAT_146b50e58,puVar12);
            }
          }
          *(undefined1 *)((longlong)puVar6 + 0x176) = 1;
          *(undefined1 *)((longlong)puVar10 + 0x176) = 1;
        }
        puVar6 = (undefined8 *)puVar6[1];
      } while( true );
    }
    (**(code **)*puVar10)(puVar10,0);
    AK::MemoryMgr::Free(lVar5,puVar10);
  }
  return 0x34;
}



// FUNCTION 14312c450 CAkSink body=69 status=ok
// SIG undefined CAkSink(void)

undefined8 * CAkSink::CAkSink(undefined8 *param_1)

{
  CAkSinkBase::CAkSinkBase();
  *param_1 = &PTR_FUN_145ac6bc8;
  *(undefined1 *)(param_1 + 2) = 0;
  *(uint *)(param_1 + 2) = *(uint *)(param_1 + 2) & 0xff;
  *(undefined1 *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xff;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0x2b;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 14312c4a0 FUN_14312c4a0 body=43 status=ok
// SIG undefined FUN_14312c4a0(void)

undefined8 * FUN_14312c4a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14312c4d0 FUN_14312c4d0 body=43 status=ok
// SIG undefined FUN_14312c4d0(void)

undefined8 * FUN_14312c4d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = AK::IAkPlugin::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14312c500 AkCreateDefaultSink body=48 status=ok
// SIG undefined AkCreateDefaultSink(void)

void AkCreateDefaultSink(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_145ac6c48;
    return;
  }
  return;
}



// FUNCTION 14312c530 AllocBuffer body=146 status=ok
// SIG undefined AllocBuffer(void)

undefined4 CAkSink::AllocBuffer(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  void *_Dst;
  uint uVar2;
  
  uVar2 = (param_2 & 0xff) * (uint)DAT_1467bdcb8 * 4;
  _Dst = AK::MemoryMgr::Malign(g_LEngineDefaultPoolId,(ulonglong)uVar2,0x10);
  if (_Dst == (void *)0x0) {
    uVar1 = 0x34;
  }
  else {
    ::_guard_xfg_dispatch_icall_nop(_Dst,0,(ulonglong)uVar2);
    *(undefined8 *)(param_1 + 0x24) = 0x2b;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(ushort *)(param_1 + 0x28) = DAT_1467bdcb8;
    uVar1 = 1;
    *(void **)(param_1 + 0x18) = _Dst;
    *(undefined2 *)(param_1 + 0x2a) = 0;
    *(uint *)(param_1 + 0x20) = param_2;
  }
  return uVar1;
}



// FUNCTION 14312c5d0 FindDevice body=322 status=ok
// SIG undefined FindDevice(void)

IMMDevice * FindDevice(int param_1,ulong param_2,ulong *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint local_res18 [2];
  IMMDevice *local_res20;
  longlong *local_28;
  longlong *local_20;
  
  uVar2 = 0;
  *param_3 = 0xffffffff;
  local_res20 = (IMMDevice *)0x0;
  local_20 = (longlong *)0x0;
  CoCreateInstance((IID *)&DAT_144177ea8,(LPUNKNOWN)0x0,0x17,(IID *)&DAT_144177eb8,&local_20);
  if (local_20 == (longlong *)0x0) {
    local_res20 = (IMMDevice *)0x0;
  }
  else {
    uVar3 = 2;
    if (param_1 != 0xb0) {
      uVar3 = uVar2;
    }
    (**(code **)(*local_20 + 0x20))(local_20,0,uVar3,&local_res20);
    if (local_res20 != (IMMDevice *)0x0) {
      uVar1 = AK::GetDeviceID(local_res20);
      *param_3 = uVar1;
      (**(code **)(*(longlong *)local_res20 + 0x10))();
      local_res20 = (IMMDevice *)0x0;
    }
    if (param_2 == 0) {
      param_2 = *param_3;
    }
    local_28 = (longlong *)0x0;
    (**(code **)(*local_20 + 0x18))(local_20,0,0xf,&local_28);
    if (local_28 != (longlong *)0x0) {
      local_res18[0] = 0;
      (**(code **)(*local_28 + 0x18))(local_28,local_res18);
      if (local_res18[0] != 0) {
        do {
          (**(code **)(*local_28 + 0x20))(local_28,uVar2,&local_res20);
          if (local_res20 != (IMMDevice *)0x0) {
            uVar1 = AK::GetDeviceID(local_res20);
            if (uVar1 == param_2) break;
            (**(code **)(*(longlong *)local_res20 + 0x10))();
            local_res20 = (IMMDevice *)0x0;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < local_res18[0]);
      }
      (**(code **)(*local_28 + 0x10))();
    }
    (**(code **)(*local_20 + 0x10))();
  }
  return local_res20;
}



// FUNCTION 14312c740 FUN_14312c740 body=840 status=ok
// SIG undefined FUN_14312c740(void)

undefined8
FUN_14312c740(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  ulong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  IMMDevice *pIVar7;
  uint uVar8;
  uint uVar9;
  uint local_res8 [2];
  int local_res18 [2];
  undefined8 local_38;
  undefined8 local_30;
  
  (**(code **)(*param_3 + 0x18))(param_3,local_res18,local_res8);
  uVar8 = DAT_146b50d68 & 7;
  if ((uVar8 == 0) || (uVar8 == 7)) {
    uVar8 = DAT_1467bdce0;
  }
  lVar1 = CONCAT44(param_5._4_4_,(ulong)param_5);
  uVar9 = local_res8[0] >> 0x10;
  local_38 = 0;
  local_30 = (ulonglong)*(uint *)(lVar1 + 4) << 0x20;
  *(undefined8 *)(param_1 + 8) = 0;
  local_res8[0] = uVar9;
  if ((uVar8 & 2) != 0) {
    lVar4 = 0;
    if ((local_res18[0] != 0) || (uVar9 == 0xb0)) {
      param_5._0_4_ = 0;
      lVar4 = FindDevice(uVar9,local_res18[0],&param_5);
      if (lVar4 == 0) {
        return 2;
      }
    }
    lVar5 = (**(code **)(PTR_PTR_1467be108 + 8))(&PTR_PTR_1467be108,0xd0);
    if (lVar5 == 0) {
      return 2;
    }
    plVar6 = (longlong *)FUN_14318e730(lVar5);
    if (plVar6 == (longlong *)0x0) {
      return 2;
    }
    iVar2 = (**(code **)(*plVar6 + 0x80))(plVar6,lVar4,uVar9,&DAT_146b50d20,&local_38,1);
    if (iVar2 == 1) {
      DAT_1467bdce0 = 2;
      *(longlong **)(param_1 + 8) = plVar6;
    }
    else {
      (**(code **)(*plVar6 + 8))(plVar6,&PTR_PTR_1467be108);
      if (iVar2 == 2) {
        return 2;
      }
    }
  }
  uVar9 = local_res8[0];
  plVar6 = *(longlong **)(param_1 + 8);
  if (plVar6 != (longlong *)0x0) goto LAB_14312ca61;
  if ((uVar8 & 1) != 0) {
    param_5._0_4_ = 0;
    pIVar7 = (IMMDevice *)FindDevice(local_res8[0],local_res18[0],&param_5);
    if (pIVar7 != (IMMDevice *)0x0) {
      uVar3 = AK::GetDeviceID(pIVar7);
      for (lVar4 = DAT_146b50e50; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 8)) {
        if (((*(int *)(lVar4 + 0x18) - 0xaeU < 4) &&
            ((ulong)((ulonglong)*(undefined8 *)(lVar4 + 0x10) >> 0x20) == uVar3)) &&
           (*(int *)(lVar4 + 0x170) == 1)) {
          plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0x148) + 8);
          *(int *)(plVar6 + 0xb) = (int)plVar6[0xb] + 1;
          goto LAB_14312c9c2;
        }
      }
      if ((((ulong)param_5 == uVar3) && (lVar4 = CAkOutputMgr::GetPrimaryDevice(), lVar4 != 0)) &&
         ((*(int *)(lVar4 + 0x18) - 0xaeU < 4 && (*(int *)(lVar4 + 0x170) == 1)))) {
        plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0x148) + 8);
        *(int *)(plVar6 + 0xb) = (int)plVar6[0xb] + 1;
      }
      else {
        lVar4 = (**(code **)(PTR_PTR_1467be108 + 8))(&PTR_PTR_1467be108,0xe0);
        if (((lVar4 != 0) &&
            (plVar6 = (longlong *)CAkSinkWasapi::CAkSinkWasapi(lVar4), plVar6 != (longlong *)0x0))
           && (iVar2 = CAkSinkWasapi::Init(plVar6,pIVar7,&local_38,uVar9,1), iVar2 != 1)) {
          (**(code **)(*plVar6 + 8))(plVar6,&PTR_PTR_1467be108);
          plVar6 = (longlong *)0x0;
        }
      }
LAB_14312c9c2:
      (**(code **)(*(longlong *)pIVar7 + 0x10))(pIVar7);
      if (plVar6 != (longlong *)0x0) {
        DAT_1467bdce0 = 1;
      }
    }
    *(longlong **)(param_1 + 8) = plVar6;
  }
  if (plVar6 != (longlong *)0x0) goto LAB_14312ca61;
  if ((uVar8 & 4) == 0) {
    return 2;
  }
  lVar4 = (**(code **)(PTR_PTR_1467be108 + 8))(&PTR_PTR_1467be108,0x60);
  if ((lVar4 == 0) ||
     (plVar6 = (longlong *)CAkSinkDirectSound::CAkSinkDirectSound(lVar4), plVar6 == (longlong *)0x0)
     ) {
LAB_14312ca4f:
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar2 = FUN_14318e020(plVar6,&DAT_146b50d20,local_30._4_4_ >> 0xc);
    if (iVar2 != 1) {
      (**(code **)(*plVar6 + 8))(plVar6,&PTR_PTR_1467be108);
      goto LAB_14312ca4f;
    }
    DAT_1467bdce0 = 4;
  }
  *(longlong **)(param_1 + 8) = plVar6;
  if (plVar6 == (longlong *)0x0) {
    return 2;
  }
LAB_14312ca61:
  *(int *)(lVar1 + 4) = (int)plVar6[2];
  return 1;
}



// FUNCTION 14312caa0 Term body=77 status=ok
// SIG undefined Term(void)

undefined8 CAkDefaultSink::Term(undefined8 *param_1,longlong *param_2)

{
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 8))();
    param_1[1] = 0;
  }
  (**(code **)*param_1)(param_1,0);
  (**(code **)(*param_2 + 0x10))(param_2,param_1);
  return 1;
}



// FUNCTION 14312caf0 CAkAudioThread body=18 status=ok
// SIG undefined CAkAudioThread(void)

undefined8 * CAkAudioThread::CAkAudioThread(undefined8 *param_1)

{
  *param_1 = DAT_146b50830;
  *(undefined1 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 14312cb10 FUN_14312cb10 body=136 status=ok
// SIG undefined FUN_14312cb10(void)

undefined8 FUN_14312cb10(undefined8 *param_1)

{
  DWORD DVar1;
  
  DAT_146b50e80 = GetCurrentThreadId();
  CAkLEngine::OnThreadStart();
  if (DAT_146b50e88 != 0) {
    SetEvent(*(HANDLE *)(DAT_146b50e88 + 8));
  }
  DVar1 = 0x102;
  do {
    if ((DVar1 == 0) || (DVar1 == 0x102)) {
      FUN_14313d8f0(DAT_146b50b78);
    }
    DVar1 = DAT_1467bdcb0;
    if (DAT_146b50e1e != '\0') {
      DVar1 = 0xffffffff;
    }
    DVar1 = WaitForSingleObject((HANDLE)*param_1,DVar1);
  } while (*(char *)(param_1 + 1) == '\0');
  CAkLEngine::OnThreadEnd();
  return 0;
}



// FUNCTION 14312cba0 FUN_14312cba0 body=328 status=ok
// SIG undefined FUN_14312cba0(void)

undefined8 FUN_14312cba0(LPVOID param_1)

{
  BOOL BVar1;
  DWORD_PTR DVar2;
  DWORD local_res8 [2];
  undefined1 local_18 [8];
  HANDLE local_10;
  
  *(undefined1 *)((longlong)param_1 + 8) = 0;
  local_10 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  DAT_146b50e88 = local_18;
  DAT_146b50e78 =
       CreateThread((LPSECURITY_ATTRIBUTES)0x0,(ulonglong)DAT_146b50d30,FUN_14312cb10,param_1,0,
                    local_res8);
  if (DAT_146b50e78 == (HANDLE)0x0) {
    DAT_146b50e78 = (HANDLE)0x0;
  }
  else {
    AKPLATFORM::AkSetThreadName(local_res8[0],"AK::EventManager");
    BVar1 = SetThreadPriority(DAT_146b50e78,DAT_146b50d28);
    if ((BVar1 == 0) && (DAT_146b50d28 != 0x10000)) {
      CloseHandle(DAT_146b50e78);
      DAT_146b50e78 = (HANDLE)0x0;
    }
    else {
      if (DAT_146b50d2c != 0) {
        DVar2 = SetThreadAffinityMask(DAT_146b50e78,(ulonglong)DAT_146b50d2c);
        if (DVar2 == 0) {
          CloseHandle(DAT_146b50e78);
          DAT_146b50e78 = (HANDLE)0x0;
          goto LAB_14312cc98;
        }
      }
      if (DAT_146b50e78 != (HANDLE)0x0) {
        WaitForSingleObject(local_10,0xffffffff);
        if (local_10 != (HANDLE)0x0) {
          CloseHandle(local_10);
        }
        return 1;
      }
    }
  }
LAB_14312cc98:
  if (local_10 != (HANDLE)0x0) {
    CloseHandle(local_10);
  }
  return 2;
}



// FUNCTION 14312ccf0 Stop body=91 status=ok
// SIG undefined Stop(void)

void CAkAudioThread::Stop(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 1;
  if (DAT_146b50e78 != (HANDLE)0x0) {
    if ((HANDLE)*param_1 != (HANDLE)0x0) {
      SetEvent((HANDLE)*param_1);
    }
    WaitForSingleObject(DAT_146b50e78,0xffffffff);
    CloseHandle(DAT_146b50e78);
    DAT_146b50e78 = (HANDLE)0x0;
    DAT_146b50e80 = 0;
  }
  return;
}



// FUNCTION 14312cd50 WakeupEventsConsumer body=16 status=ok
// SIG undefined WakeupEventsConsumer(void)

void CAkAudioThread::WakeupEventsConsumer(undefined8 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014312cd58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetEvent((HANDLE)*param_1);
    return;
  }
  return;
}



// FUNCTION 14312cd60 ReadBytesMem body=29 status=ok
// SIG undefined ReadBytesMem(ReadBytesMem * this, void * param_1, long param_2)

/* public: __cdecl AK::ReadBytesMem::ReadBytesMem(void const * __ptr64,long) __ptr64 */

ReadBytesMem * __thiscall
AK::ReadBytesMem::ReadBytesMem(ReadBytesMem *this,void *param_1,long param_2)

{
                    /* 0x312cd60  9  ??0ReadBytesMem@AK@@QEAA@PEBXJ@Z */
  *(long *)(this + 8) = param_2;
  *(undefined ***)this = &PTR_ReadBytes_145ac6cc0;
  *(void **)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}



// FUNCTION 14312cd80 ReadBytesMem body=26 status=ok
// SIG undefined ReadBytesMem(ReadBytesMem * this)

/* public: __cdecl AK::ReadBytesMem::ReadBytesMem(void) __ptr64 */

ReadBytesMem * __thiscall AK::ReadBytesMem::ReadBytesMem(ReadBytesMem *this)

{
                    /* 0x312cd80  10  ??0ReadBytesMem@AK@@QEAA@XZ */
  *(undefined ***)this = &PTR_ReadBytes_145ac6cc0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}



// FUNCTION 14312cda0 WriteBytesMem body=33 status=ok
// SIG undefined WriteBytesMem(WriteBytesMem * this)

/* public: __cdecl AK::WriteBytesMem::WriteBytesMem(void) __ptr64 */

WriteBytesMem * __thiscall AK::WriteBytesMem::WriteBytesMem(WriteBytesMem *this)

{
                    /* 0x312cda0  22  ??0WriteBytesMem@AK@@QEAA@XZ */
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  *(undefined ***)this = &PTR_WriteBytes_145ac6cd0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return this;
}



// FUNCTION 14312cdd0 ~ReadBytesMem body=11 status=ok
// SIG void ~ReadBytesMem(ReadBytesMem * this)

/* public: virtual __cdecl AK::ReadBytesMem::~ReadBytesMem(void) __ptr64 */

void __thiscall AK::ReadBytesMem::~ReadBytesMem(ReadBytesMem *this)

{
                    /* 0x312cdd0  36  ??1ReadBytesMem@AK@@UEAA@XZ */
  *(undefined ***)this = &PTR_ReadBytes_145ac6cc0;
  return;
}



// FUNCTION 14312cde0 ~WriteBytesMem body=28 status=ok
// SIG void ~WriteBytesMem(WriteBytesMem * this)

/* public: virtual __cdecl AK::WriteBytesMem::~WriteBytesMem(void) __ptr64 */

void __thiscall AK::WriteBytesMem::~WriteBytesMem(WriteBytesMem *this)

{
                    /* 0x312cde0  44  ??1WriteBytesMem@AK@@UEAA@XZ */
  *(undefined ***)this = &PTR_WriteBytes_145ac6cd0;
  if (*(void **)(this + 0x10) != (void *)0x0) {
    MemoryMgr::Free(*(long *)(this + 0x1c),*(void **)(this + 0x10));
    return;
  }
  return;
}



// FUNCTION 14312ce00 FUN_14312ce00 body=140 status=ok
// SIG undefined FUN_14312ce00(void)

undefined8 * FUN_14312ce00(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((param_2 & 2) != 0) {
    lVar2 = param_1[-1];
    puVar1 = param_1 + lVar2 * 4;
    for (; lVar2 != 0; lVar2 = lVar2 + -1) {
      puVar1[-4] = &PTR_ReadBytes_145ac6cc0;
      puVar1 = puVar1 + -4;
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1 + -1,param_1[-1] * 0x20 + 8);
    }
    return param_1 + -1;
  }
  *param_1 = &PTR_ReadBytes_145ac6cc0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14312ce90 `vector_deleting_destructor' body=210 status=ok
// SIG undefined `vector_deleting_destructor'(void)

undefined8 * AK::WriteBytesMem::_vector_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((param_2 & 2) == 0) {
    *param_1 = &PTR_WriteBytes_145ac6cd0;
    if ((void *)param_1[2] != (void *)0x0) {
      MemoryMgr::Free(*(long *)((longlong)param_1 + 0x1c),(void *)param_1[2]);
    }
    if ((param_2 & 1) != 0) {
      FMemory::operator_delete(param_1,0x20);
    }
    return param_1;
  }
  lVar3 = param_1[-1];
  puVar1 = param_1 + lVar3 * 4;
  while (puVar2 = puVar1, lVar3 != 0) {
    puVar1 = puVar2 + -4;
    lVar3 = lVar3 + -1;
    *puVar1 = &PTR_WriteBytes_145ac6cd0;
    if ((void *)puVar2[-2] != (void *)0x0) {
      MemoryMgr::Free(*(long *)((longlong)puVar2 + -4),(void *)puVar2[-2]);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1 + -1,param_1[-1] * 0x20 + 8);
  }
  return param_1 + -1;
}



// FUNCTION 14312cf70 Attach body=16 status=ok
// SIG void Attach(ReadBytesMem * this, void * param_1, long param_2)

/* public: void __cdecl AK::ReadBytesMem::Attach(void const * __ptr64,long) __ptr64 */

void __thiscall AK::ReadBytesMem::Attach(ReadBytesMem *this,void *param_1,long param_2)

{
                    /* 0x312cf70  69  ?Attach@ReadBytesMem@AK@@QEAAXPEBXJ@Z */
  *(long *)(this + 8) = param_2;
  *(void **)(this + 0x10) = param_1;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}



// FUNCTION 14312cf80 Clear body=8 status=ok
// SIG void Clear(WriteBytesMem * this)

/* public: virtual void __cdecl AK::WriteBytesMem::Clear(void) __ptr64 */

void __thiscall AK::WriteBytesMem::Clear(WriteBytesMem *this)

{
                    /* 0x312cf80  89  ?Clear@WriteBytesMem@AK@@UEAAXXZ */
  *(undefined4 *)(this + 0x18) = 0;
  return;
}



// FUNCTION 14312cf90 Detach body=17 status=ok
// SIG uchar * Detach(WriteBytesMem * this)

/* public: virtual unsigned char * __ptr64 __cdecl AK::WriteBytesMem::Detach(void) __ptr64 */

uchar * __thiscall AK::WriteBytesMem::Detach(WriteBytesMem *this)

{
  uchar *puVar1;
  
                    /* 0x312cf90  109  ?Detach@WriteBytesMem@AK@@UEAAPEAEXZ */
  puVar1 = *(uchar **)(this + 0x10);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return puVar1;
}



// FUNCTION 14312cfb0 ReadBytes body=123 status=ok
// SIG bool ReadBytes(ReadBytesMem * this, void * param_1, long param_2, long * param_3)

/* public: virtual bool __cdecl AK::ReadBytesMem::ReadBytes(void * __ptr64,long,long & __ptr64)
   __ptr64 */

bool __thiscall
AK::ReadBytesMem::ReadBytes(ReadBytesMem *this,void *param_1,long param_2,long *param_3)

{
  int iVar1;
  
                    /* 0x312cfb0  343  ?ReadBytes@ReadBytesMem@AK@@UEAA_NPEAXJAEAJ@Z */
  if (*(longlong *)(this + 0x10) == 0) {
    return false;
  }
  iVar1 = *(int *)(this + 8) - *(int *)(this + 0x18);
  if (param_2 < iVar1) {
    iVar1 = param_2;
  }
  ::_guard_xfg_dispatch_icall_nop
            (param_1,(void *)(*(longlong *)(this + 0x10) + (longlong)*(int *)(this + 0x18)),
             (longlong)iVar1);
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
  *param_3 = iVar1;
  return iVar1 == param_2;
}



// FUNCTION 14312d030 Reserve body=168 status=ok
// SIG bool Reserve(WriteBytesMem * this, long param_1)

/* public: virtual bool __cdecl AK::WriteBytesMem::Reserve(long) __ptr64 */

bool __thiscall AK::WriteBytesMem::Reserve(WriteBytesMem *this,long param_1)

{
  uint uVar1;
  void *_Src;
  uint uVar2;
  void *_Dst;
  
                    /* 0x312d030  365  ?Reserve@WriteBytesMem@AK@@UEAA_NJ@Z */
  uVar1 = *(uint *)(this + 8);
  if (param_1 <= (int)uVar1) {
    return true;
  }
  _Src = *(void **)(this + 0x10);
  uVar2 = param_1 + 0x3ff + (param_1 + 0x3ff >> 0x1f & 0x3ffU) & 0xfffffc00;
  *(uint *)(this + 8) = uVar2;
  _Dst = MemoryMgr::Malloc(*(long *)(this + 0x1c),(longlong)(int)uVar2);
  *(void **)(this + 0x10) = _Dst;
  if (_Src == (void *)0x0) {
    if (_Dst != (void *)0x0) {
      return true;
    }
  }
  else {
    if (_Dst != (void *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,_Src,(ulonglong)uVar1);
      MemoryMgr::Free(*(long *)(this + 0x1c),_Src);
      return true;
    }
    *(void **)(this + 0x10) = _Src;
  }
  *(uint *)(this + 8) = uVar1;
  return false;
}



// FUNCTION 14312d0e0 SetMemPool body=59 status=ok
// SIG void SetMemPool(WriteBytesMem * this, long param_1)

/* public: void __cdecl AK::WriteBytesMem::SetMemPool(long) __ptr64 */

void __thiscall AK::WriteBytesMem::SetMemPool(WriteBytesMem *this,long param_1)

{
                    /* 0x312d0e0  424  ?SetMemPool@WriteBytesMem@AK@@QEAAXJ@Z */
  if ((*(int *)(this + 0x1c) != -1) && (*(void **)(this + 0x10) != (void *)0x0)) {
    MemoryMgr::Free(*(int *)(this + 0x1c),*(void **)(this + 0x10));
    *(undefined8 *)(this + 0x10) = 0;
  }
  *(long *)(this + 0x1c) = param_1;
  return;
}



// FUNCTION 14312d120 WriteBytes body=100 status=ok
// SIG bool WriteBytes(WriteBytesMem * this, void * param_1, long param_2, long * param_3)

/* public: virtual bool __cdecl AK::WriteBytesMem::WriteBytes(void const * __ptr64,long,long &
   __ptr64) __ptr64 */

bool __thiscall
AK::WriteBytesMem::WriteBytes(WriteBytesMem *this,void *param_1,long param_2,long *param_3)

{
  char cVar1;
  
                    /* 0x312d120  525  ?WriteBytes@WriteBytesMem@AK@@UEAA_NPEBXJAEAJ@Z */
  cVar1 = (**(code **)(*(longlong *)this + 0x20))(this,*(int *)(this + 0x18) + param_2);
  if (cVar1 != '\0') {
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)*(int *)(this + 0x18) + *(longlong *)(this + 0x10)),param_1,
               (ulonglong)(uint)param_2);
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + param_2;
    *param_3 = param_2;
  }
  return cVar1 != '\0';
}



// FUNCTION 14312d190 FUN_14312d190 body=132 status=ok
// SIG undefined FUN_14312d190(void)

undefined8 * FUN_14312d190(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd));
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return param_1;
}



// FUNCTION 14312d220 ~CAkStateMgr body=11 status=ok
// SIG undefined ~CAkStateMgr(void)

void CAkStateMgr::~CAkStateMgr(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014312d224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 14312d230 FUN_14312d230 body=198 status=ok
// SIG undefined FUN_14312d230(void)

longlong FUN_14312d230(longlong param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  pvVar3 = *(void **)(param_1 + 0x38);
  pvVar2 = (void *)0x0;
  while (pvVar1 = pvVar3, pvVar1 != (void *)0x0) {
    if (pvVar1 == *(void **)(param_1 + 0x38)) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)((longlong)pvVar1 + 8);
    }
    else {
      *(undefined8 *)((longlong)pvVar2 + 8) = *(undefined8 *)((longlong)pvVar1 + 8);
    }
    if (pvVar1 == *(void **)(param_1 + 0x30)) {
      *(void **)(param_1 + 0x30) = pvVar2;
    }
    AK::MemoryMgr::Free(g_DefaultPoolId,pvVar1);
    pvVar2 = pvVar1;
    pvVar3 = *(void **)((longlong)pvVar1 + 8);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    AK::MemoryMgr::Free(g_DefaultPoolId,*(void **)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14312d300 FUN_14312d300 body=441 status=ok
// SIG undefined FUN_14312d300(void)

undefined8 FUN_14312d300(longlong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulonglong uVar7;
  void *pvVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  piVar4 = (int *)*param_1;
  piVar11 = piVar4 + (ulonglong)*(uint *)(param_1 + 1) * 4;
  for (; (piVar4 != piVar11 && (*piVar4 != param_2)); piVar4 = piVar4 + 4) {
  }
  piVar9 = (int *)0x0;
  piVar10 = piVar4 + 2;
  if (piVar4 == piVar11) {
    piVar10 = piVar9;
  }
  if (piVar10 != (int *)0x0) {
    return 1;
  }
  puVar5 = AK::MemoryMgr::Malloc(g_DefaultPoolId,0x28);
  if (puVar5 == (undefined8 *)0x0) {
    return 2;
  }
  *puVar5 = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  uVar2 = *(uint *)(param_1 + 1);
  piVar4 = (int *)*param_1;
  piVar11 = piVar4 + (ulonglong)uVar2 * 4;
  for (; (piVar4 != piVar11 && (*piVar4 != param_2)); piVar4 = piVar4 + 4) {
  }
  piVar10 = piVar4 + 2;
  if (piVar4 == piVar11) {
    piVar10 = piVar9;
  }
  if (piVar10 == (int *)0x0) {
    if (uVar2 < *(uint *)((longlong)param_1 + 0xc)) {
LAB_14312d446:
      uVar2 = *(uint *)(param_1 + 1);
      *(uint *)(param_1 + 1) = uVar2 + 1;
      piVar10 = (int *)((ulonglong)uVar2 * 0x10 + *param_1);
      if (piVar10 == (int *)0x0) goto LAB_14312d468;
      *piVar10 = param_2;
      piVar10 = piVar10 + 2;
      goto LAB_14312d460;
    }
    uVar1 = *(uint *)((longlong)param_1 + 0xc) + 1;
    pvVar6 = AK::MemoryMgr::Malloc(g_DefaultPoolId,(ulonglong)uVar1 << 4);
    if (pvVar6 != (void *)0x0) {
      pvVar8 = (void *)*param_1;
      if ((pvVar8 != (void *)0x0) && (pvVar8 != pvVar6)) {
        uVar7 = (ulonglong)*(uint *)(param_1 + 1);
        if (uVar7 != 0) {
          do {
            uVar3 = ((undefined8 *)((longlong)piVar9 + *param_1))[1];
            *(undefined8 *)((longlong)piVar9 + (longlong)pvVar6) =
                 *(undefined8 *)((longlong)piVar9 + *param_1);
            ((undefined8 *)((longlong)piVar9 + (longlong)pvVar6))[1] = uVar3;
            uVar7 = uVar7 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar7 != 0);
          pvVar8 = (void *)*param_1;
        }
        AK::MemoryMgr::Free(g_DefaultPoolId,pvVar8);
      }
      *param_1 = (longlong)pvVar6;
      *(uint *)((longlong)param_1 + 0xc) = uVar1;
      if (uVar1 <= uVar2) goto LAB_14312d468;
      goto LAB_14312d446;
    }
  }
  else {
LAB_14312d460:
    *(undefined8 **)piVar10 = puVar5;
  }
  if (piVar10 != (int *)0x0) {
    return 1;
  }
LAB_14312d468:
  AkStateGroupInfo::Term(puVar5);
  AK::MemoryMgr::Free(g_DefaultPoolId,puVar5);
  return 2;
}


