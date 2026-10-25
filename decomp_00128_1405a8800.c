// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1405a8800 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<PropertyTemplate::TCachedValue<unsigned_char>,TInlineAllocator<1,FDefaultAllocator>_>::
     ResizeTo(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 2) {
      iVar2 = 1;
    }
    else {
      uVar1 = FMemory::QuantizeSize((longlong)(int)param_2 * 0xc,0);
      iVar2 = (int)(uVar1 / 0xc);
      if (iVar2 < (int)param_2) {
        iVar2 = 0x7fffffff;
      }
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = iVar2;
    TInlineAllocator<1,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<unsigned_char,FName>_>::
    ResizeAllocation(param_1,*(undefined4 *)(param_1 + 0x18),iVar2,0xc);
  }
  return;
}



// FUNCTION 1405a8880 ResizeTo body=112 status=ok
// SIG undefined ResizeTo(void)

void TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x2c,0);
    iVar3 = (int)(uVar1 / 0x2c);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x2c,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 1405a88f0 FUN_1405a88f0 body=247 status=ok
// SIG undefined FUN_1405a88f0(void)

void FUN_1405a88f0(longlong param_1)

{
  __uint64 *p_Var1;
  __uint64 _Var2;
  AKRESULT AVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  ulong local_res8 [2];
  AkOutputSettings local_18 [16];
  
  p_Var1 = (__uint64 *)(param_1 + 0x2d0);
  _Var2 = *p_Var1;
  AK::GetWindowsDeviceName(-1,local_res8,0xf);
  AVar3 = AK::SoundEngine::GetDeviceSpatialAudioSupport(local_res8[0]);
  if ((AVar3 == 1) && (*(char *)(param_1 + 0x2d8) != '\0')) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((_Var2 != 0) != bVar6) {
    uVar4 = AK::SoundEngine::GetIDFromString("Master Audio Bus");
    if (bVar6 == false) {
      uVar5 = AK::SoundEngine::GetIDFromString("System");
      AK::SoundEngine::SetBusDevice(uVar4,uVar5);
      if (*p_Var1 != 0) {
        AK::SoundEngine::RemoveOutput(*p_Var1);
        *p_Var1 = 0;
      }
    }
    else {
      AkOutputSettings::AkOutputSettings(local_18,"Microsoft_Spatial_Sound_Platform_Output",0,0,0);
      AVar3 = AK::SoundEngine::AddOutput(local_18,p_Var1,(__uint64 *)0x0,0);
      if (AVar3 == 1) {
        AK::SoundEngine::SetBusDevice(uVar4,*(ulong *)p_Var1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1405a8a50 FUN_1405a8a50 body=212 status=ok
// SIG undefined FUN_1405a8a50(void)

void FUN_1405a8a50(longlong *param_1,long param_2,AkCurveInterpolation param_3)

{
  ulong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *param_1;
  if ((((lVar2 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar2 + 0xd0))) &&
     (uVar1 = *(ulong *)(param_1 + 2), *(longlong *)(lVar2 + 0xc0) != 0)) {
    *(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1;
    if (uVar1 != 0) {
      for (lVar3 = *(longlong *)(lVar2 + 0xe0); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 8)) {
        if (uVar1 == *(ulong *)(lVar3 + 0x20)) {
          lVar4 = FWeakObjectPtr::Get(lVar3 + 0x18);
          if (lVar4 != 0) {
            AK::SoundEngine::ExecuteActionOnEvent
                      (*(ulong *)(lVar4 + 0x28),2,*(__uint64 *)(lVar2 + 0xd0),param_2,param_3,uVar1)
            ;
            *(undefined1 *)(lVar3 + 0x40) = 0;
          }
          break;
        }
      }
    }
    FUN_1405a53f0(lVar2);
  }
  return;
}



// FUNCTION 1405a8b30 FUN_1405a8b30 body=280 status=ok
// SIG undefined FUN_1405a8b30(void)

void FUN_1405a8b30(longlong *param_1,float param_2,byte param_3)

{
  ulong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  if ((((lVar4 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar4 + 0xd0))) &&
     (uVar1 = *(ulong *)(param_1 + 2), *(longlong *)(lVar4 + 0xc0) != 0)) {
    *(int *)(lVar4 + 0x2e4) = *(int *)(lVar4 + 0x2e4) + 1;
    if (uVar1 != 0) {
      for (lVar2 = *(longlong *)(lVar4 + 0xe0); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 8)) {
        if (uVar1 == *(ulong *)(lVar2 + 0x20)) {
          lVar3 = FWeakObjectPtr::Get(lVar2 + 0x18);
          if (lVar3 != 0) {
            AK::SoundEngine::ExecuteActionOnEvent
                      (*(ulong *)(lVar3 + 0x28),2,*(__uint64 *)(lVar4 + 0xd0),
                       (int)(param_2 * 1000.0),(uint)param_3,uVar1);
            *(undefined1 *)(lVar2 + 0x40) = 0;
          }
          break;
        }
      }
    }
    FUN_1405a53f0(lVar4);
    lVar4 = *param_1;
  }
  if (((lVar4 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar4 + 0xd0))) {
    *(int *)(lVar4 + 0x2e8) = *(int *)(lVar4 + 0x2e8) + -1;
    *param_1 = 0;
    param_1[1] = -1;
  }
  return;
}



// FUNCTION 1405a8c50 FUN_1405a8c50 body=98 status=ok
// SIG undefined FUN_1405a8c50(void)

void FUN_1405a8c50(longlong param_1)

{
  longlong lVar1;
  BOOL BVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x34) != '\0')) {
    lVar1 = *(longlong *)(lVar1 + 8);
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xf8));
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xf8));
    }
    *(undefined1 *)(lVar1 + 0x122) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xf8));
  }
  return;
}



// FUNCTION 1405a8cc0 FUN_1405a8cc0 body=643 status=ok
// SIG undefined FUN_1405a8cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405a8cc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_338 [32];
  undefined1 local_318 [64];
  longlong local_2d8;
  undefined8 local_2c8;
  undefined2 local_2b8;
  undefined1 local_2b6;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined2 local_220;
  longlong local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined2 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  longlong local_88;
  undefined8 local_80;
  undefined2 local_78;
  undefined4 local_74;
  longlong local_68;
  undefined8 local_60;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x28);
  plVar5 = plVar1;
  do {
    if (plVar5 == plVar1 + iVar6) {
LAB_1405a8d79:
      local_2d8 = 0;
      local_2c8 = 0;
      local_2b4 = 0;
      local_2a8 = 0;
      local_2a0 = 0;
      local_298 = 0;
      local_290 = 0;
      local_288 = 0;
      local_280 = 0;
      local_278 = 0;
      local_270 = 0;
      local_268 = 0;
      local_260 = 0;
      local_240 = 0;
      local_228 = 0;
      local_220 = 0;
      local_208 = 0;
      local_200 = 0;
      local_1ec = 0;
      local_1dc = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_68 = 0;
      local_60 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0;
      local_1e8 = 0;
      local_2b8 = 2;
      local_2b6 = 1;
      local_2b0 = 0x3f800000;
      local_2ac = 0x3f800000;
      local_258 = 0;
      uStack_250 = 0;
      local_248 = 0xffffffffffffffff;
      local_238 = 0;
      uStack_230 = 0;
      local_1f8 = _DAT_1468b5d90;
      local_1f0 = DAT_1468b5d98;
      local_1e0 = 0x101;
      local_1d8 = _DAT_1468b5d90;
      local_1d0 = DAT_1468b5d98;
      local_74 = 0x3f800000;
      FUN_140591420(param_2,local_318);
      if (local_50 != 0) {
        FMemory::Free();
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
      if (local_208 != 0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_268);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_278);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_288);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_298);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_2a8);
      if (local_2d8 != 0) {
        FMemory::Free();
      }
      iVar6 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar6 + 1;
      if (*(int *)(param_1 + 0x1c) < iVar6 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar6);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 8) = param_2;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
      return;
    }
    if (*plVar5 == param_2) {
      iVar4 = (int)((longlong)plVar5 - (longlong)plVar1 >> 3);
      if (iVar4 != -1) {
        iVar3 = (iVar6 - iVar4) + -1;
        if (0 < iVar3) {
          iVar3 = 1;
        }
        if (iVar3 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar1 + iVar4,plVar1 + (iVar6 - iVar3),(longlong)iVar3 << 3);
          iVar6 = *(int *)(param_1 + 0x28);
        }
        *(int *)(param_1 + 0x28) = iVar6 + -1;
      }
      goto LAB_1405a8d79;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 1405a8f50 FUN_1405a8f50 body=414 status=ok
// SIG undefined FUN_1405a8f50(void)

void FUN_1405a8f50(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if (param_1 != (longlong *)0x0) {
    lVar3 = param_1[0x24];
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0();
    }
    lVar3 = FUN_14059d370(lVar3,0);
    if (lVar3 == 0) {
      FUN_14059f190(param_1);
      return;
    }
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x30000000) == 0) {
      if ((*(int *)(lVar3 + 0x17c) <= *(int *)(lVar3 + 0x178)) && ((char)param_1[0x5c] == '\x03')) {
        lVar4 = param_1[0x24];
        if (lVar4 == 0) {
          lVar4 = FUN_1423407b0(param_1);
        }
        lVar5 = *(longlong *)(lVar3 + 0x120);
        if (lVar5 == 0) {
          lVar5 = FUN_1423407b0(lVar3);
        }
        if (lVar4 == lVar5) {
          (**(code **)(*param_1 + 0x288))(param_1);
          lVar4 = param_1[0x6f];
          if (lVar4 != 0) {
            *(int *)(lVar4 + 0x2e4) = *(int *)(lVar4 + 0x2e4) + 1;
            FUN_140596c00(lVar4);
            FUN_1405a53f0(lVar4);
          }
          if (param_1[0x6f] != 0) {
            FUN_1405a53f0();
            param_1[0x6f] = 0;
          }
          FUN_1405a3ab0(param_1,1);
          iVar1 = *(int *)(lVar3 + 0x188);
          *(int *)(lVar3 + 0x188) = iVar1 + 1;
          if (*(int *)(lVar3 + 0x18c) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar3 + 0x180,iVar1);
          }
          *(longlong **)(*(longlong *)(lVar3 + 0x180) + (longlong)iVar1 * 8) = param_1;
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x0001405a90d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x3b0))(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1405a90f0 FUN_1405a90f0 body=284 status=ok
// SIG undefined FUN_1405a90f0(void)

undefined8 FUN_1405a90f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  cVar4 = *(char *)(param_1 + 0x8428);
  while (cVar4 != '\0') {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x8420) + 0x20))
                      (*(longlong **)(param_1 + 0x8420),0xffffffff,0);
    if (cVar4 != '\0') {
      LOCK();
      iVar5 = *(int *)(param_1 + 0x840c);
      if (iVar5 == 0) {
        *(int *)(param_1 + 0x840c) = 0;
        iVar5 = 0;
      }
      UNLOCK();
      LOCK();
      iVar6 = *(int *)(param_1 + 0x8408);
      if (iVar6 == 0) {
        *(int *)(param_1 + 0x8408) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (iVar5 < iVar6) {
        do {
          LOCK();
          iVar5 = *(int *)(param_1 + 0x840c);
          if (iVar5 == 0) {
            *(int *)(param_1 + 0x840c) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          FUN_14059e390(param_1 + 8 + (longlong)iVar5 * 0x210,0);
          LOCK();
          *(int *)(param_1 + 0x840c) = *(int *)(param_1 + 0x840c) + 1;
          UNLOCK();
          LOCK();
          iVar5 = *(int *)(param_1 + 0x840c);
          if (iVar5 == 0) {
            *(int *)(param_1 + 0x840c) = 0;
            iVar5 = 0;
          }
          UNLOCK();
          LOCK();
          iVar6 = *(int *)(param_1 + 0x8408);
          if (iVar6 == 0) {
            *(int *)(param_1 + 0x8408) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        } while (iVar5 < iVar6);
      }
      while (lVar1 = **(longlong **)(param_1 + 0x8418), lVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar1 + 8);
        uVar3 = *(undefined8 *)(param_1 + 0x8418);
        *(longlong *)(param_1 + 0x8418) = lVar1;
        *(undefined8 *)(lVar1 + 8) = 0;
        FMemory::operator_delete(uVar3,0x10);
        FUN_14059e390(uVar2,1);
      }
    }
    cVar4 = *(char *)(param_1 + 0x8428);
  }
  return 0;
}



// FUNCTION 1405a9210 SavePreAnimatedState body=452 status=ok
// SIG undefined SavePreAnimatedState(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FMovieScenePreAnimatedState::SavePreAnimatedState
               (longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
               char param_5,undefined8 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  longlong *local_1b0;
  int local_1a8 [2];
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined8 *local_188;
  undefined1 *local_180;
  undefined1 local_178 [192];
  longlong local_b8;
  undefined8 local_b0;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  if (param_5 != '\0') {
    lVar1 = 0;
    local_1a0 = 0xffffffff;
    if (param_4 != 0) {
      FWeakObjectPtr::operator=(&local_198,param_4);
      local_1a0 = CONCAT44(uStack_194,local_198);
    }
    TSet<TTuple<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_1a8,&local_1a0);
    if (local_1a8[0] != -1) {
      lVar1 = (longlong)local_1a8[0] * 0x148 + *param_1;
    }
    lVar2 = lVar1 + 8;
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    if (lVar2 == 0) {
      FWeakObjectPtr::operator=(&local_198,param_4);
      local_b8 = 0;
      local_b0 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = local_198;
      local_44 = uStack_194;
      local_188 = &local_1a0;
      local_180 = local_178;
      FUN_14058ded0(param_1,local_1a8,&local_188,0);
      lVar2 = *param_1 + (longlong)local_1a8[0] * 0x148 + 8;
      TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>::
      ~TArray<TPreAnimatedToken<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>,FDefaultAllocator>
                (&local_58);
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_b8 != 0) {
        FMemory::Free();
      }
    }
    local_188 = (undefined8 *)*param_6;
    local_180 = (undefined1 *)CONCAT44(local_180._4_4_,*(undefined4 *)(param_6 + 1));
    local_1b8 = param_3;
    local_1b0 = param_1;
    TMovieSceneSavedTokens<TInlineValue<IMovieScenePreAnimatedToken,32,8>_>::OnPreAnimated
              (lVar2,param_5,param_2,&local_188);
  }
  return;
}



// FUNCTION 1405a93e0 FUN_1405a93e0 body=60 status=ok
// SIG undefined FUN_1405a93e0(void)

void FUN_1405a93e0(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
    *(float *)(lVar1 + 0x68) = param_2;
    AK::SoundEngine::SetScalingFactor(*(__uint64 *)(lVar1 + 0xd0),param_2);
    FUN_1405a53f0(lVar1);
    return;
  }
  return;
}



// FUNCTION 1405a9420 FUN_1405a9420 body=61 status=ok
// SIG undefined FUN_1405a9420(void)

void FUN_1405a9420(undefined8 param_1,float param_2)

{
  undefined8 local_28;
  float local_20;
  float local_10;
  
  local_20 = param_2 * 0.02;
  if (local_20 <= 0.01) {
    local_20 = 0.01;
  }
  local_28 = CONCAT44(local_20,local_20);
  local_10 = local_20;
  FUN_142399c30(local_20,&local_28);
  return;
}



// FUNCTION 1405a9460 FUN_1405a9460 body=87 status=ok
// SIG undefined FUN_1405a9460(void)

float FUN_1405a9460(longlong param_1,float param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float local_res8;
  float fStackX_c;
  
  local_res8 = (float)param_3;
  fStackX_c = (float)((ulonglong)param_3 >> 0x20);
  if ((fStackX_c < local_res8) ||
     (fVar2 = (param_2 - local_res8) / (fStackX_c - local_res8), fVar2 < 0.0)) {
    fVar2 = 0.0;
  }
  else if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  fVar1 = *(float *)(param_1 + 0x30);
  if (*(float *)(param_1 + 0x34) < fVar1) {
    return 0.0;
  }
  return (*(float *)(param_1 + 0x34) - fVar1) * fVar2 + fVar1;
}



// FUNCTION 1405a94c0 FUN_1405a94c0 body=97 status=ok
// SIG undefined FUN_1405a94c0(void)

void FUN_1405a94c0(longlong *param_1,long param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) {
    lVar1 = FUN_14059bf10(lVar1,(int)param_1[2]);
    if (lVar1 != 0) {
      AK::SoundEngine::SeekOnEvent
                (*(ulong *)(lVar1 + 0x28),*(__uint64 *)(*param_1 + 0xd0),param_2,false,
                 *(ulong *)(param_1 + 2));
    }
  }
  return;
}



// FUNCTION 1405a9530 Serialize body=5 status=ok
// SIG undefined Serialize(void)

void AActor::Serialize(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lStackX_8;
  undefined8 uStackX_10;
  undefined8 uStackX_18;
  
  uStackX_18 = *(undefined8 *)(param_1 + 0x20);
  lStackX_8 = *(longlong *)(param_1 + 0x10);
  uStackX_10 = *(undefined8 *)(param_1 + 0x18);
  if ((*(uint *)(lStackX_8 + 8) >> 10 & 1) != 0) {
    (**(code **)(*param_2 + 0x70))(param_2);
    if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
      if ((*(longlong *)(lStackX_8 + 0xf8) != 0) && (0 < *(int *)(lStackX_8 + 0x40))) {
        (**(code **)(*param_2 + 0x70))(param_2);
      }
    }
  }
  if (((*(byte *)(param_2 + 5) & 3) == 0) && ((*(byte *)((longlong)param_2 + 0x2a) & 8) == 0)) {
    (**(code **)(*param_2 + 0x40))(param_2,&uStackX_10);
    if (-1 < *(char *)((longlong)param_2 + 0x29)) {
      (**(code **)(*param_2 + 0x30))(param_2,&uStackX_18);
    }
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x30))(param_2,&lStackX_8);
    }
  }
  lVar2 = FUN_14171bfe0();
  if (lStackX_8 != lVar2) {
    FUN_1417645f0(param_1,param_2);
  }
  FUN_141740770(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    LOCK();
    DAT_1464b56f4 = DAT_1464b56f4 + 1;
    UNLOCK();
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x44);
  lVar2 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 0x40) + -1 + iVar1 & -iVar1);
  (**(code **)(*param_2 + 0x78))(param_2,lVar2,lVar2);
  return;
}



// FUNCTION 1405a9540 FUN_1405a9540 body=33 status=ok
// SIG undefined FUN_1405a9540(void)

void FUN_1405a9540(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 0x311) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x378);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
    *(undefined1 *)(lVar1 + 0x62) = param_2;
    FUN_1405a53f0();
    return;
  }
  return;
}



// FUNCTION 1405a9570 FUN_1405a9570 body=129 status=ok
// SIG undefined FUN_1405a9570(void)

void FUN_1405a9570(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  if (param_2 != 0) {
    uVar1 = FUN_1405b5580();
    lVar2 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 0x300) = param_2;
      *(longlong *)(param_1 + 0x308) = lVar2;
    }
  }
  if (((*(longlong *)(param_1 + 0x378) != 0) && (*(longlong *)(param_1 + 0x300) != 0)) &&
     (*(longlong *)(param_1 + 0x308) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x308) + 0x10))(*(longlong **)(param_1 + 0x308),param_1);
  }
  return;
}



// FUNCTION 1405a9600 FUN_1405a9600 body=155 status=ok
// SIG undefined FUN_1405a9600(void)

void FUN_1405a9600(longlong *param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (((lVar1 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) {
    lVar1 = FUN_14059bf10(lVar1,(int)param_1[2]);
    if (lVar1 != 0) {
      AK::SoundEngine::SeekOnEvent
                (*(ulong *)(lVar1 + 0x28),*(__uint64 *)(*param_1 + 0xd0),(int)(param_2 * 1000.0),
                 false,*(ulong *)(param_1 + 2));
    }
  }
  lVar1 = *param_1;
  if (((lVar1 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) {
    *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
    *param_1 = 0;
    param_1[1] = -1;
  }
  return;
}



// FUNCTION 1405a96a0 FUN_1405a96a0 body=677 status=ok
// SIG undefined FUN_1405a96a0(void)

void FUN_1405a96a0(void)

{
  void *_Dst;
  int iVar1;
  void *_Src;
  ulonglong uVar2;
  char cVar3;
  undefined8 *puVar4;
  wchar_t *pwVar5;
  short *psVar6;
  longlong lVar7;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  void *_Src_00;
  longlong lVar12;
  uint uVar13;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  longlong local_28 [2];
  longlong lVar8;
  
  puVar4 = (undefined8 *)FPaths::ProjectContentDir(local_28);
  _Src_00 = (void *)0x0;
  iVar1 = *(int *)(puVar4 + 1);
  local_48 = (void *)*puVar4;
  *puVar4 = 0;
  local_40._0_4_ = *(int *)(puVar4 + 1);
  local_40._4_4_ = *(int *)((longlong)puVar4 + 0xc);
  puVar4[1] = 0;
  if (local_40._4_4_ < (int)((0xc - (uint)(iVar1 != 0)) + (int)local_40)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
  }
  FString::PathAppend(&local_48,L"WwiseAudio",10);
  iVar1 = local_40._4_4_;
  local_38 = local_48;
  iVar9 = (int)local_40 + (2 - (uint)((int)local_40 != 0));
  local_48 = (void *)0x0;
  local_30 = CONCAT44(local_40._4_4_,(int)local_40);
  local_40 = 0;
  if (iVar1 < iVar9) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
  }
  FString::PathAppend(&local_38,&DAT_143fc6874,0);
  uVar2 = local_30;
  _Src = local_38;
  iVar1 = (uint)local_30;
  lVar12 = (longlong)(int)(uint)local_30;
  local_38 = (void *)0x0;
  local_30 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  iVar9 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar9 = 0;
  }
  pwVar5 = AK::StreamMgr::GetCurrentLanguage();
  lVar11 = -1;
  lVar7 = -1;
  do {
    lVar8 = lVar7;
    lVar7 = lVar8 + 1;
  } while (pwVar5[lVar7] != L'\0');
  if ((ulonglong)(lVar8 + 2 + (longlong)iVar9) < 0x104) {
    DAT_1461fd050 = iVar1;
    if ((iVar1 == 0) && (DAT_1461fd054 == 0)) {
      DAT_1461fd054 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&DAT_1461fd048,uVar2 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(DAT_1461fd048,_Src,lVar12 * 2);
    }
    psVar6 = (short *)FUN_1415a96e0();
    cVar3 = FString::EndsWith(&DAT_1461fd048,psVar6,1);
    if (cVar3 == '\0') {
      local_38 = (void *)0x0;
      local_30 = 0;
      if ((psVar6 != (short *)0x0) && (*psVar6 != 0)) {
        do {
          lVar11 = lVar11 + 1;
        } while (psVar6[lVar11] != 0);
        uVar10 = (int)lVar11 + 1;
        local_30 = (ulonglong)uVar10;
        uVar13 = uVar10;
        if (0 < (int)uVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          uVar13 = (uint)local_30;
        }
        _Src_00 = local_38;
        FGenericPlatformString::Memcpy(local_38,psVar6,(longlong)(int)uVar10 * 2);
        iVar1 = DAT_1461fd050;
        if ((uVar13 != 0) && (iVar9 = uVar13 - 1, iVar9 != 0)) {
          lVar12 = (longlong)DAT_1461fd050;
          DAT_1461fd050 = (uint)(DAT_1461fd050 == 0) + DAT_1461fd050 + iVar9;
          if (DAT_1461fd054 < DAT_1461fd050) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1461fd048,iVar1);
          }
          _Dst = (void *)((longlong)DAT_1461fd048 + (lVar12 - (ulonglong)(iVar1 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(_Dst,_Src_00,(longlong)iVar9 * 2);
          *(undefined2 *)((longlong)iVar9 * 2 + (longlong)_Dst) = 0;
        }
      }
      if (_Src_00 != (void *)0x0) {
        FMemory::Free(_Src_00);
      }
    }
    FPaths::DirectoryExists(&DAT_1461fd048);
  }
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}



// FUNCTION 1405a9950 FUN_1405a9950 body=114 status=ok
// SIG undefined FUN_1405a9950(void)

void FUN_1405a9950(longlong *param_1,longlong param_2,float param_3,float param_4,byte param_5)

{
  __uint64 _Var1;
  
  if ((param_2 != 0) && (param_1[0x5b] != 0)) {
    _Var1 = (**(code **)(*param_1 + 0x548))();
    AK::SoundEngine::SetRTPCValue
              (*(ulong *)(param_2 + 0x28),param_3,_Var1,(int)(param_4 * 1000.0),(uint)param_5,false)
    ;
  }
  return;
}



// FUNCTION 1405a99d0 FUN_1405a99d0 body=93 status=ok
// SIG undefined FUN_1405a99d0(void)

void FUN_1405a99d0(longlong *param_1,undefined1 param_2)

{
  DWORD DVar1;
  
  if (DAT_1468c21ae != '\0') {
    DVar1 = GetCurrentThreadId();
    if (DVar1 != DAT_1468c21c0) {
                    /* WARNING: Could not recover jumptable at 0x0001405a9a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x360))(param_1,param_2);
      return;
    }
  }
  UActorComponent::SetComponentTickEnabled(param_1,param_2);
  return;
}



// FUNCTION 1405a9a30 FUN_1405a9a30 body=720 status=ok
// SIG undefined FUN_1405a9a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405a9a30(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_e8 [32];
  LARGE_INTEGER local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((DAT_1468536c6 != '\0') || (plVar4 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
    plVar4 = (longlong *)0x0;
  }
  plVar6 = plVar4 + 0x43;
  if (plVar4 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  if ((((plVar6 != (longlong *)0x0) && (local_c8.QuadPart = *param_1, local_c8.QuadPart != 0)) &&
      (param_1[1] != -1)) &&
     ((lVar3 = *(longlong *)(local_c8.QuadPart + 0xd0), param_1[1] == lVar3 && (param_2 != 0)))) {
    local_c0 = -1;
    if (lVar3 != -1) {
      *(int *)(local_c8.QuadPart + 0x2e8) = *(int *)(local_c8.QuadPart + 0x2e8) + 1;
      local_c0 = lVar3;
    }
    FUN_1405a64e0(&local_c8);
    lVar3 = *param_1;
    local_a8 = 0xffffffff;
    uStack_a0 = 0xffffffff;
    local_88 = 0;
    lStack_80 = (ulonglong)uRam00000001468536ec << 0x20;
    local_b8 = 0;
    local_b0 = -1;
    local_98 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = CONCAT44(uRam00000001468536e4 & uRam00000001468536f4,_DAT_1468536e0 & _DAT_1468536f0)
    ;
    uStack_60 = CONCAT44(uRam00000001468536ec & uRam00000001468536fc,
                         uRam00000001468536e8 & uRam00000001468536f8);
    if (((lVar3 != 0) && (lVar5 = param_1[1], lVar5 != -1)) &&
       ((lVar5 == *(longlong *)(lVar3 + 0xd0) &&
        (local_b8 = lVar3, local_b0 = lVar5, *(longlong *)(lVar3 + 0xd0) != -1)))) {
      *(int *)(lVar3 + 0x2e8) = *(int *)(lVar3 + 0x2e8) + 1;
    }
    FWeakObjectPtr::operator=(&local_a8,param_2);
    local_88 = *param_4;
    lStack_80 = param_4[1];
    local_78 = param_4[2];
    uStack_70 = param_4[3];
    iVar2 = (int)plVar6[1];
    local_68 = param_4[4];
    uStack_60 = param_4[5];
    local_48 = 0;
    *(int *)(plVar6 + 1) = iVar2 + 1;
    local_98 = param_3;
    if (*(int *)((longlong)plVar6 + 0xc) < iVar2 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow(plVar6,iVar2)
      ;
    }
    lVar3 = *plVar6;
    lVar5 = (longlong)iVar2 * 0x80;
    *(longlong *)(lVar5 + lVar3) = local_b8;
    *(undefined8 *)(lVar5 + 8 + lVar3) = 0xffffffffffffffff;
    if ((local_b8 != 0) && (*(longlong *)(local_b8 + 0xd0) != -1)) {
      *(int *)(local_b8 + 0x2e8) = *(int *)(local_b8 + 0x2e8) + 1;
      *(longlong *)(lVar5 + 8 + lVar3) = *(longlong *)(local_b8 + 0xd0);
    }
    *(undefined4 *)(lVar5 + 0x10 + lVar3) = (undefined4)local_a8;
    *(undefined4 *)(lVar5 + 0x14 + lVar3) = local_a8._4_4_;
    *(undefined4 *)(lVar5 + 0x18 + lVar3) = (undefined4)uStack_a0;
    *(undefined4 *)(lVar5 + 0x1c + lVar3) = uStack_a0._4_4_;
    *(undefined8 *)(lVar5 + 0x20 + lVar3) = local_98;
    puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar3);
    *puVar1 = local_88;
    puVar1[1] = lStack_80;
    puVar1 = (undefined8 *)(lVar5 + 0x40 + lVar3);
    *puVar1 = local_78;
    puVar1[1] = uStack_70;
    puVar1 = (undefined8 *)(lVar5 + 0x50 + lVar3);
    *puVar1 = local_68;
    puVar1[1] = uStack_60;
    *(undefined8 *)(lVar5 + 0x60 + lVar3) = local_58;
    *(undefined4 *)(lVar5 + 0x68 + lVar3) = local_50;
    *(undefined8 *)(lVar5 + 0x70 + lVar3) = local_48;
    QueryPerformanceCounter(&local_c8);
    FUN_1405affa0(plVar6,*plVar6 + lVar5,
                  SUB84((double)local_c8.QuadPart * DAT_1468b02f8 + 16777216.0,0));
    if (((local_b8 != 0) && (local_b0 != -1)) && (local_b0 == *(longlong *)(local_b8 + 0xd0))) {
      *(int *)(local_b8 + 0x2e8) = *(int *)(local_b8 + 0x2e8) + -1;
    }
  }
  lVar3 = *param_1;
  if (((lVar3 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar3 + 0xd0))) {
    *(int *)(lVar3 + 0x2e8) = *(int *)(lVar3 + 0x2e8) + -1;
    *param_1 = 0;
    param_1[1] = -1;
  }
  return;
}



// FUNCTION 1405a9d00 FUN_1405a9d00 body=673 status=ok
// SIG undefined FUN_1405a9d00(void)

void FUN_1405a9d00(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  LARGE_INTEGER local_res8;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_b8;
  undefined8 local_78;
  undefined4 local_70;
  
  if ((DAT_1468536c6 != '\0') || (plVar10 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
    plVar10 = (longlong *)0x0;
  }
  plVar12 = plVar10 + 0x43;
  if (plVar10 == (longlong *)0x0) {
    plVar12 = (longlong *)0x0;
  }
  if ((((plVar12 != (longlong *)0x0) && (local_e8 = *param_1, local_e8 != 0)) && (param_1[1] != -1))
     && (lVar3 = *(longlong *)(local_e8 + 0xd0), param_1[1] == lVar3)) {
    local_e0 = -1;
    if (lVar3 != -1) {
      *(int *)(local_e8 + 0x2e8) = *(int *)(local_e8 + 0x2e8) + 1;
      local_e0 = lVar3;
    }
    FUN_1405a64e0(&local_e8);
    lVar3 = *param_1;
    lVar11 = 0;
    local_b8 = 0;
    lVar14 = -1;
    if (((lVar3 != 0) && (lVar13 = param_1[1], lVar13 != -1)) &&
       ((lVar13 == *(longlong *)(lVar3 + 0xd0) &&
        (lVar11 = lVar3, lVar14 = lVar13, *(longlong *)(lVar3 + 0xd0) != -1)))) {
      *(int *)(lVar3 + 0x2e8) = *(int *)(lVar3 + 0x2e8) + 1;
    }
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    uVar8 = param_2[4];
    uVar9 = param_2[5];
    iVar2 = (int)plVar12[1];
    *(int *)(plVar12 + 1) = iVar2 + 1;
    if (*(int *)((longlong)plVar12 + 0xc) < iVar2 + 1) {
      TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                (plVar12,iVar2);
    }
    lVar3 = *plVar12;
    lVar13 = (longlong)iVar2 * 0x80;
    *(longlong *)(lVar13 + lVar3) = lVar11;
    *(undefined8 *)(lVar13 + 8 + lVar3) = 0xffffffffffffffff;
    if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0xd0) != -1)) {
      *(int *)(lVar11 + 0x2e8) = *(int *)(lVar11 + 0x2e8) + 1;
      *(longlong *)(lVar13 + 8 + lVar3) = *(longlong *)(lVar11 + 0xd0);
    }
    *(undefined4 *)(lVar13 + 0x10 + lVar3) = 0xffffffff;
    *(undefined4 *)(lVar13 + 0x14 + lVar3) = 0;
    *(undefined4 *)(lVar13 + 0x18 + lVar3) = 0xffffffff;
    *(undefined4 *)(lVar13 + 0x1c + lVar3) = 0;
    *(undefined8 *)(lVar13 + 0x20 + lVar3) = local_b8;
    puVar1 = (undefined8 *)(lVar13 + 0x30 + lVar3);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)(lVar13 + 0x40 + lVar3);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)(lVar13 + 0x50 + lVar3);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    *(undefined8 *)(lVar13 + 0x60 + lVar3) = local_78;
    *(undefined4 *)(lVar13 + 0x68 + lVar3) = local_70;
    *(undefined8 *)(lVar13 + 0x70 + lVar3) = 0;
    QueryPerformanceCounter(&local_res8);
    FUN_1405affa0(plVar12,*plVar12 + lVar13,(double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0
                 );
    if (((lVar11 != 0) && (lVar14 != -1)) && (lVar14 == *(longlong *)(lVar11 + 0xd0))) {
      *(int *)(lVar11 + 0x2e8) = *(int *)(lVar11 + 0x2e8) + -1;
    }
  }
  lVar3 = *param_1;
  if (((lVar3 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar3 + 0xd0))) {
    *(int *)(lVar3 + 0x2e8) = *(int *)(lVar3 + 0x2e8) + -1;
    *param_1 = 0;
    param_1[1] = -1;
  }
  return;
}



// FUNCTION 1405a9fb0 FUN_1405a9fb0 body=147 status=ok
// SIG undefined FUN_1405a9fb0(void)

void FUN_1405a9fb0(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x2e8);
  if (puVar1 != param_2) {
    iVar2 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 0x2f0) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x2f4) == 0)) {
      *(undefined4 *)(param_1 + 0x2f4) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 5);
    }
  }
  *(undefined1 *)(param_1 + 0x430) = param_3;
  *(undefined1 *)(param_1 + 0x2f8) = param_4;
  FUN_1405b0f30(param_1);
  return;
}



// FUNCTION 1405aa050 FUN_1405aa050 body=11 status=ok
// SIG undefined FUN_1405aa050(void)

void FUN_1405aa050(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2d8) = param_2;
  FUN_1405a88f0();
  return;
}



// FUNCTION 1405aa060 FUN_1405aa060 body=64 status=ok
// SIG undefined FUN_1405aa060(void)

void FUN_1405aa060(longlong param_1,float param_2,float param_3,byte param_4)

{
  if ((param_1 != 0) && (DAT_1468536c5 != '\0')) {
    AK::SoundEngine::SetRTPCValue
              (*(ulong *)(param_1 + 0x28),param_2,0xffffffffffffffff,(int)(param_3 * 1000.0),
               (uint)param_4,false);
  }
  return;
}



// FUNCTION 1405aa0a0 FUN_1405aa0a0 body=35 status=ok
// SIG undefined FUN_1405aa0a0(void)

void FUN_1405aa0a0(longlong param_1)

{
  if (((DAT_1468536c5 != '\0') && (param_1 != 0)) && (*(longlong *)(param_1 + 0x30) != 0)) {
    AK::SoundEngine::SetState
              (*(ulong *)(*(longlong *)(param_1 + 0x30) + 0x28),*(ulong *)(param_1 + 0x28));
    return;
  }
  return;
}



// FUNCTION 1405aa0d0 FUN_1405aa0d0 body=581 status=ok
// SIG undefined FUN_1405aa0d0(void)

void FUN_1405aa0d0(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  __uint64 _Var3;
  __uint64 _Var4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  int local_res10;
  int local_res20 [2];
  undefined8 **local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  
  FUN_1405a6580();
  lVar5 = *(longlong *)(param_2 + 0x378);
  uVar6 = 0;
  puVar9 = *(undefined8 **)(lVar5 + 0x110);
  if (*(undefined8 **)(lVar5 + 0x110) == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)(lVar5 + 0x100);
  }
  uVar8 = (longlong)*(int *)(lVar5 + 0x118) & 0x1fffffffffffffff;
  if (puVar9 + *(int *)(lVar5 + 0x118) < puVar9) {
    uVar8 = uVar6;
  }
  if (uVar8 != 0) {
    plVar7 = (longlong *)(param_1 + 0x80);
    uVar10 = uVar6;
    do {
      FWeakObjectPtr::operator=(&local_78,*puVar9);
      local_70 = local_78;
      TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
      ::FindId(plVar7);
      if ((local_res10 == -1) || (lVar5 = (longlong)local_res10 * 0x20 + *plVar7, lVar5 == 0)) {
        local_70 = &local_78;
        FUN_14058d050(plVar7,local_res20,&local_70,0);
        lVar5 = (longlong)local_res20[0] * 0x20 + *plVar7;
      }
      uStack_5c = *(undefined4 *)(param_2 + 0x220);
      local_58 = *(undefined4 *)(param_2 + 0x224);
      uStack_54 = *(undefined4 *)(param_2 + 0x228);
      iVar2 = *(int *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x10) = iVar2 + 1;
      local_68 = param_2;
      uStack_60 = param_3;
      if (*(int *)(lVar5 + 0x14) < iVar2 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow((longlong *)(lVar5 + 8));
      }
      lVar5 = *(longlong *)(lVar5 + 8);
      puVar9 = puVar9 + 1;
      uVar10 = uVar10 + 1;
      puVar1 = (undefined4 *)(lVar5 + (longlong)iVar2 * 0x18);
      *puVar1 = (undefined4)local_68;
      puVar1[1] = local_68._4_4_;
      puVar1[2] = uStack_60;
      puVar1[3] = uStack_5c;
      *(ulonglong *)(lVar5 + 0x10 + (longlong)iVar2 * 0x18) = CONCAT44(uStack_54,local_58);
    } while (uVar10 != uVar8);
  }
  if ((*(longlong *)(param_1 + 0x210) != 0) && (lVar5 = *(longlong *)(param_2 + 0x378), lVar5 != 0))
  {
    AK::SoundEngine::SetGameObjectAuxSendValues(*(__uint64 *)(lVar5 + 0xd0),(AkAuxSendValue *)0x0,0)
    ;
    plVar7 = *(longlong **)(lVar5 + 0x110);
    if (*(longlong **)(lVar5 + 0x110) == (longlong *)0x0) {
      plVar7 = (longlong *)(lVar5 + 0x100);
    }
    uVar8 = (longlong)*(int *)(lVar5 + 0x118) & 0x1fffffffffffffff;
    if (plVar7 + *(int *)(lVar5 + 0x118) < plVar7) {
      uVar8 = uVar6;
    }
    if (uVar8 != 0) {
      do {
        if ((longlong *)*plVar7 != (longlong *)0x0) {
          _Var3 = *(__uint64 *)(lVar5 + 0xd0);
          _Var4 = (**(code **)(*(longlong *)*plVar7 + 0x548))();
          AK::SoundEngine::SetGameObjectOutputBusVolume(_Var3,_Var4,1.0);
        }
        plVar7 = plVar7 + 1;
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar8);
    }
  }
  return;
}



// FUNCTION 1405aa320 SetKeyframeTime body=427 status=ok
// SIG undefined SetKeyframeTime(void)

uint UInterpTrackAkAudioEvent::SetKeyframeTime
               (longlong param_1,uint param_2,float param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 in_R8;
  longlong lVar9;
  longlong local_28 [4];
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x98) <= (int)param_2)) {
    return param_2;
  }
  plVar1 = (longlong *)(param_1 + 0x90);
  lVar9 = *plVar1;
  lVar7 = (longlong)(int)param_2 * 0x20;
  if ((char)param_4 == '\0') {
    *(float *)(lVar7 + lVar9) = param_3;
  }
  else {
    uVar2 = *(undefined8 *)(lVar7 + 8 + lVar9);
    FString::FString(local_28,lVar9 + 0x10 + lVar7,in_R8,param_4,*(undefined4 *)(lVar7 + lVar9));
    lVar9 = *plVar1;
    if (*(longlong *)(lVar9 + 0x10 + lVar7) != 0) {
      FMemory::Free();
      lVar9 = *plVar1;
    }
    iVar5 = *(int *)(param_1 + 0x98);
    iVar3 = (iVar5 - param_2) + -1;
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar7 + lVar9),(void *)((longlong)(int)(param_2 + 1) * 0x20 + lVar9),
                 (longlong)iVar3 << 5);
      iVar5 = *(int *)(param_1 + 0x98);
    }
    *(int *)(param_1 + 0x98) = iVar5 + -1;
    TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(plVar1);
    uVar6 = 0;
    param_2 = 0;
    if (0 < *(int *)(param_1 + 0x98)) {
      pfVar4 = (float *)*plVar1;
      uVar8 = uVar6;
      do {
        param_2 = (uint)uVar8;
        if (param_3 < *pfVar4 || param_3 == *pfVar4) break;
        param_2 = param_2 + 1;
        uVar8 = (ulonglong)param_2;
        uVar6 = uVar6 + 1;
        pfVar4 = pfVar4 + 8;
      } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x98));
    }
    iVar5 = *(int *)(param_1 + 0x98);
    *(int *)(param_1 + 0x98) = iVar5 + 1;
    if (*(int *)(param_1 + 0x9c) < iVar5 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar5);
    }
    lVar7 = (longlong)(int)param_2 * 0x20;
    ::_guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + lVar7 + 0x20),(void *)(*plVar1 + lVar7),
               (longlong)(int)(iVar5 - param_2) << 5);
    lVar9 = *plVar1;
    *(undefined8 *)(lVar7 + lVar9) = 0;
    *(undefined8 *)(lVar7 + 8 + lVar9) = 0;
    *(undefined8 *)(lVar7 + 0x10 + lVar9) = 0;
    *(undefined8 *)(lVar7 + 0x18 + lVar9) = 0;
    lVar9 = *plVar1;
    *(undefined8 *)(lVar7 + 8 + lVar9) = uVar2;
    *(float *)(lVar7 + lVar9) = param_3;
    FString::operator=(lVar9 + 0x10 + lVar7,local_28);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 1405aa4d0 FUN_1405aa4d0 body=696 status=ok
// SIG undefined FUN_1405aa4d0(void)

void FUN_1405aa4d0(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint *puVar12;
  longlong *plVar13;
  int local_98;
  uint uStack_94;
  uint uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int iStack_70;
  uint uStack_6c;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 uStack_48;
  uint *puStack_40;
  uint uStack_38;
  uint uStack_34;
  undefined8 uStack_30;
  
  lVar2 = param_2 + 0x100;
  *(undefined4 *)(param_2 + 0x118) = 0;
  if (0x7fffffff < *(uint *)(param_2 + 0x11c)) {
    TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
    ::ResizeTo(lVar2,0);
  }
  if (*(char *)(param_2 + 0x61) == '\0') {
    lVar5 = *param_1;
    plVar13 = (longlong *)(lVar5 + 0x130);
    lVar6 = *(longlong *)(param_2 + 200);
    uVar3 = *(uint *)(lVar5 + 0x158);
    puVar1 = (uint *)(lVar5 + 0x140);
    local_98 = 0;
    uStack_94 = 1;
    uStack_84 = 0;
    iStack_80 = 0;
    if (uVar3 != 0) {
      puVar12 = *(uint **)(lVar5 + 0x150);
      if (*(uint **)(lVar5 + 0x150) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar4 = *puVar12;
      iStack_80 = 0;
      local_98 = 0;
      while (uVar4 == 0) {
        lVar10 = (longlong)local_98;
        iStack_80 = iStack_80 + 0x20;
        iVar8 = local_98 + 1;
        bVar7 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
        local_98 = iVar8;
        if (bVar7) goto LAB_1405aa60c;
        uVar4 = puVar12[lVar10 + 1];
      }
      uStack_94 = -uVar4 & uVar4;
      iVar8 = 0x1f;
      if (uStack_94 != 0) {
        for (; uStack_94 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_94 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_84 = (iStack_80 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_1405aa60c:
        uStack_84 = uVar3;
      }
    }
    uVar4 = *(uint *)(lVar5 + 0x158);
    uStack_60 = 0xffffffff;
    uStack_5c = uStack_84;
    local_58 = CONCAT44(uStack_7c,iStack_80);
    uStack_48 = CONCAT44(uStack_94,local_98);
    uVar11 = uVar4 & 0xffffffe0;
    iStack_70 = local_98;
    uStack_6c = uStack_94;
    local_68 = puVar1;
    local_50 = plVar13;
    puStack_40 = puVar1;
    uStack_30 = local_58;
    uStack_38 = uStack_60;
    uStack_34 = uStack_5c;
    uStack_84 = uVar4;
    if (uVar4 != uVar3) {
      puVar12 = *(uint **)(lVar5 + 0x150);
      if (*(uint **)(lVar5 + 0x150) == (uint *)0x0) {
        puVar12 = puVar1;
      }
      uVar9 = puVar12[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
      iVar8 = (int)uVar4 >> 5;
      while (uVar9 == 0) {
        uVar11 = uVar11 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8)
        goto LAB_1405aa6d2;
        uVar9 = puVar12[(longlong)iVar8 + 1];
        iVar8 = iVar8 + 1;
      }
      uVar9 = -uVar9 & uVar9;
      iVar8 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uVar9 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      uStack_84 = (uVar11 - iVar8) + 0x1f;
      if ((int)uVar3 < (int)uStack_84) {
LAB_1405aa6d2:
        uStack_84 = uVar3;
      }
    }
    while ((uStack_5c != uStack_84 || (local_68 != puVar1))) {
      lVar5 = *(longlong *)(*plVar13 + (longlong)(int)uStack_5c * 0x10);
      lVar10 = *(longlong *)(lVar5 + 0x120);
      if (lVar10 == 0) {
        lVar10 = FUN_1423407b0();
      }
      if (lVar10 == lVar6) {
        iVar8 = *(int *)(param_2 + 0x118);
        *(int *)(param_2 + 0x118) = iVar8 + 1;
        if (*(int *)(param_2 + 0x11c) < iVar8 + 1) {
          TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
          ::ResizeGrow(lVar2,iVar8);
        }
        lVar10 = *(longlong *)(param_2 + 0x110);
        if (*(longlong *)(param_2 + 0x110) == 0) {
          lVar10 = lVar2;
        }
        *(longlong *)(lVar10 + (longlong)iVar8 * 8) = lVar5;
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    }
  }
  else if (*(char *)(param_2 + 0x61) == '\x01') {
    AK::SoundEngine::SetListeners(*(__uint64 *)(param_2 + 0xd0),(__uint64 *)(param_1 + 2),1);
    return;
  }
  return;
}



// FUNCTION 1405aa790 FUN_1405aa790 body=34 status=ok
// SIG undefined FUN_1405aa790(void)

void FUN_1405aa790(longlong param_1,float param_2)

{
  if (param_2 < 0.0) {
    *(undefined4 *)(param_1 + 0x1cc) = 0;
    return;
  }
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  *(float *)(param_1 + 0x1cc) = param_2;
  return;
}



// FUNCTION 1405aa7c0 FUN_1405aa7c0 body=119 status=ok
// SIG undefined FUN_1405aa7c0(void)

void FUN_1405aa7c0(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)(param_1 + 0x2e8);
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2f4)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (puVar1,0);
  }
  if (param_2 != puVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x2ec);
    uVar3 = *(undefined4 *)(param_1 + 0x2f0);
    uVar4 = *(undefined4 *)(param_1 + 0x2f4);
    uVar5 = *param_2;
    uVar6 = param_2[1];
    *(undefined4 *)param_2 = *(undefined4 *)puVar1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    *puVar1 = uVar5;
    *(undefined8 *)(param_1 + 0x2f0) = uVar6;
  }
  *(undefined1 *)(param_1 + 0x430) = param_3;
  *(undefined1 *)(param_1 + 0x2f8) = param_4;
  FUN_1405b0f30(param_1);
  return;
}



// FUNCTION 1405aa840 FUN_1405aa840 body=185 status=ok
// SIG undefined FUN_1405aa840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405aa840(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar1 = *(int *)(param_1 + 0x50);
  iVar8 = (int)param_2;
  if (iVar1 < iVar8) {
    iVar9 = iVar8 - iVar1;
    *(int *)(param_1 + 0x50) = iVar8;
    if (*(int *)(param_1 + 0x54) < iVar8) {
      FUN_1405a82e0(param_1,iVar1);
    }
    uVar6 = uRam00000001468536fc;
    uVar5 = uRam00000001468536f8;
    uVar4 = uRam00000001468536f4;
    uVar3 = _DAT_1468536f0;
    lVar7 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar7 = param_1;
    }
    puVar2 = (undefined4 *)(lVar7 + (longlong)iVar1 * 0x40);
    uVar10 = uRam00000001468536ec;
    for (; uRam00000001468536ec = uVar10, iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = uVar10;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)(puVar2 + 6) = 0;
      uVar10 = uRam00000001468536e4 & uVar4;
      uVar11 = uRam00000001468536e8 & uVar5;
      uVar12 = uRam00000001468536ec & uVar6;
      puVar2[8] = _DAT_1468536e0 & uVar3;
      puVar2[9] = uVar10;
      puVar2[10] = uVar11;
      puVar2[0xb] = uVar12;
      puVar2 = puVar2 + 0x10;
      uVar10 = uRam00000001468536ec;
    }
  }
  else if (iVar8 < iVar1) {
    FUN_1405a62e0(param_1,param_2,iVar1 - iVar8,param_3);
    return;
  }
  return;
}



// FUNCTION 1405aa900 FUN_1405aa900 body=144 status=ok
// SIG undefined FUN_1405aa900(void)

void FUN_1405aa900(longlong param_1,int param_2)

{
  ulong uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *(int *)(param_1 + 0x1d0) = param_2;
  AK::SoundEngine::SetPanningRule((uint)(param_2 == 2),0);
  plVar2 = (longlong *)FUN_1405b9970();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  if ((*(int *)(lVar3 + 0x138) != 0) && (*(int *)(lVar3 + 0x138) != 1)) {
    uVar1 = AK::SoundEngine::GetIDFromString(*(wchar_t **)(lVar3 + 0x130));
    AK::SoundEngine::SetRTPCValue(uVar1,(float)param_2,0xffffffffffffffff,0,4,false);
  }
  return;
}



// FUNCTION 1405aa990 FUN_1405aa990 body=190 status=ok
// SIG undefined FUN_1405aa990(void)

undefined8 FUN_1405aa990(longlong param_1,int param_2,char param_3,longlong param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
  }
  if (param_2 != 0) {
    for (lVar1 = *(longlong *)(param_1 + 0xe0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      if (param_2 == *(int *)(lVar1 + 0x20)) {
        *(char *)(lVar1 + 0x41) = param_3;
        if (((param_4 != 0) &&
            (FWeakObjectPtr::operator=(lVar1 + 0x18,param_4), *(char *)(param_1 + 0xf8) == '\0')) &&
           (fVar3 = (float)FUN_14059ca00(param_1), *(float *)(param_1 + 300) <= fVar3 * fVar3)) {
          *(undefined1 *)(param_1 + 0x139) = 1;
          FUN_1405b1860(param_1,0);
        }
        if (param_3 == '\0') {
          FUN_1405a04f0(param_1,lVar1,1);
        }
        uVar2 = 1;
        goto LAB_1405aa9d2;
      }
    }
  }
  uVar2 = 0;
LAB_1405aa9d2:
  if (param_1 != 0) {
    FUN_1405a53f0(param_1);
  }
  return uVar2;
}



// FUNCTION 1405aaa50 FUN_1405aaa50 body=120 status=ok
// SIG undefined FUN_1405aaa50(void)

void FUN_1405aaa50(longlong param_1,longlong param_2,float param_3,float param_4,
                  AkCurveInterpolation param_5,ulong param_6)

{
  __uint64 _Var1;
  
  if ((((param_2 != 0) && (_Var1 = *(__uint64 *)(param_1 + 0xd0), _Var1 != 0)) &&
      (*(longlong *)(param_1 + 0xc0) != 0)) && (*(char *)(param_1 + 0xd8) == '\0')) {
    if (param_6 == 0) {
      AK::SoundEngine::SetRTPCValue
                (*(ulong *)(param_2 + 0x28),param_3,_Var1,(int)(param_4 * 1000.0),param_5 & 0xff,
                 false);
      return;
    }
    AK::SoundEngine::SetRTPCValueOnObjectWithPlayingID
              (*(ulong *)(param_2 + 0x28),param_3,_Var1,param_6,(int)(param_4 * 1000.0),
               param_5 & 0xff,false);
  }
  return;
}



// FUNCTION 1405aaad0 FUN_1405aaad0 body=95 status=ok
// SIG undefined FUN_1405aaad0(void)

void FUN_1405aaad0(longlong param_1,longlong param_2,float param_3,float param_4,byte param_5)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  if ((((lVar1 != 0) && (param_2 != 0)) && (*(__uint64 *)(lVar1 + 0xd0) != 0)) &&
     ((*(longlong *)(lVar1 + 0xc0) != 0 && (*(char *)(lVar1 + 0xd8) == '\0')))) {
    AK::SoundEngine::SetRTPCValue
              (*(ulong *)(param_2 + 0x28),param_3,*(__uint64 *)(lVar1 + 0xd0),
               (int)(param_4 * 1000.0),(uint)param_5,false);
  }
  return;
}



// FUNCTION 1405aab30 FUN_1405aab30 body=44 status=ok
// SIG undefined FUN_1405aab30(void)

void FUN_1405aab30(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 0x314) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x378);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
    *(undefined4 *)(lVar1 + 100) = *(undefined4 *)(param_1 + 0x314);
    FUN_1405a53f0();
    return;
  }
  return;
}



// FUNCTION 1405aab70 FUN_1405aab70 body=139 status=ok
// SIG undefined FUN_1405aab70(void)

void FUN_1405aab70(undefined8 param_1,undefined1 (*param_2) [12],undefined8 param_3,
                  undefined4 param_4,undefined4 param_5)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  FRotator::Quaternion(param_3,&local_58);
  local_48 = local_58;
  uStack_40 = uStack_50;
  local_28._4_4_ = param_4;
  local_28._0_4_ = param_4;
  local_28._8_4_ = param_4;
  local_28._12_4_ = 0;
  local_38._12_4_ = 0;
  local_38._0_12_ = *param_2;
  FUN_1405aac00(param_1,&local_48,param_5);
  return;
}



// FUNCTION 1405aac00 FUN_1405aac00 body=270 status=ok
// SIG undefined FUN_1405aac00(void)

void FUN_1405aac00(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  
  if (param_1 != (undefined8 *)0x0) {
    *(int *)((longlong)param_1 + 0x2e4) = *(int *)((longlong)param_1 + 0x2e4) + 1;
  }
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)((longlong)param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 5);
  fVar11 = 0.0001;
  if (ABS(fVar2 - fVar3) <= 0.0001) {
    fVar10 = ABS(fVar2 - fVar4);
    if ((fVar10 <= 0.0001) && (ABS(fVar3 - fVar4) <= 0.0001)) goto LAB_1405aaca5;
  }
  fVar10 = ABS(fVar2);
  fVar11 = ABS(fVar3);
  if (ABS(fVar3) <= fVar10) {
    fVar11 = fVar10;
  }
  if (fVar11 <= ABS(fVar4)) {
    fVar11 = ABS(fVar4);
  }
  auVar1._4_4_ = fVar11;
  auVar1._0_4_ = fVar11;
  auVar1._8_4_ = fVar11;
  auVar1._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar1;
LAB_1405aaca5:
  FUN_1405aa840(fVar10,1,1,fVar11,fVar2);
  uVar8 = param_2[1];
  puVar9 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar9 = param_1;
  }
  *puVar9 = *param_2;
  puVar9[1] = uVar8;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 3);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(puVar9 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar9 + 0x14) = uVar5;
  *(undefined4 *)(puVar9 + 3) = uVar6;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar7;
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar6 = *(undefined4 *)(param_2 + 5);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)puVar9 + 0x24) = uVar5;
  *(undefined4 *)(puVar9 + 5) = uVar6;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar7;
  puVar9 = (undefined8 *)param_1[8];
  if ((undefined8 *)param_1[8] == (undefined8 *)0x0) {
    puVar9 = param_1;
  }
  *(undefined4 *)(puVar9 + 6) = param_3;
  FUN_1405b0a40(param_1,0);
  FUN_1405a53f0(param_1);
  return;
}



// FUNCTION 1405aad10 FUN_1405aad10 body=509 status=ok
// SIG undefined FUN_1405aad10(void)

/* WARNING: Removing unreachable block (ram,0x0001405aadca) */

void FUN_1405aad10(longlong param_1,longlong *param_2)

{
  AKRESULT AVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  ulong local_res18 [2];
  float local_res20 [2];
  float *local_48;
  ulong local_40;
  undefined4 local_3c;
  
  if (DAT_1468536c5 != '\0') {
    pfVar4 = (float *)0x0;
    uVar3 = 0;
    local_res20[0] = 0.0;
    local_48 = (float *)0x0;
    local_3c = 0;
    local_res18[0] = 0;
    AVar1 = AK::SoundEngine::GetSpeakerAngles
                      ((float *)0x0,local_res18,local_res20,*(__uint64 *)(param_1 + 0x2d0));
    pfVar6 = pfVar4;
    if (AVar1 == 1) {
      lVar5 = (longlong)(int)local_res18[0];
      pfVar6 = (float *)0x0;
      if (local_res18[0] != 0) {
        if ((int)local_res18[0] < 1) {
          pfVar6 = pfVar4;
          if (((int)local_res18[0] < 0) && (uVar3 = 0, local_res18[0] != 0)) {
            local_40 = local_res18[0];
            TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(&local_48);
            pfVar6 = local_48;
            uVar3 = local_40;
          }
        }
        else {
          local_40 = local_res18[0];
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_48);
          pfVar6 = local_48;
          _guard_xfg_dispatch_icall_nop(local_48,0,lVar5 << 2);
          uVar3 = local_40;
        }
        AK::SoundEngine::GetSpeakerAngles
                  (pfVar6,local_res18,local_res20,*(__uint64 *)(param_1 + 0x2d0));
      }
    }
    uVar2 = uVar3;
    if ((int)param_2[1] <= (int)uVar3) {
      uVar2 = *(ulong *)(param_2 + 1);
    }
    lVar5 = (longlong)(int)uVar2;
    if (3 < lVar5) {
      lVar8 = (lVar5 - 4U >> 2) + 1;
      pfVar4 = (float *)(lVar8 * 4);
      pfVar7 = pfVar6 + 2;
      do {
        pfVar7[-2] = *(float *)((longlong)pfVar7 + *param_2 + -(longlong)pfVar6 + -8);
        pfVar7[-1] = *(float *)((longlong)pfVar7 + *param_2 + -(longlong)pfVar6 + -4);
        *pfVar7 = *(float *)((longlong)pfVar7 + (*param_2 - (longlong)pfVar6));
        pfVar7[1] = *(float *)((longlong)pfVar7 + *param_2 + (4 - (longlong)pfVar6));
        lVar8 = lVar8 + -1;
        pfVar7 = pfVar7 + 4;
      } while (lVar8 != 0);
    }
    for (; (longlong)pfVar4 < lVar5; pfVar4 = (float *)((longlong)pfVar4 + 1)) {
      pfVar6[(longlong)pfVar4] = *(float *)(*param_2 + (longlong)pfVar4 * 4);
    }
    AK::SoundEngine::SetSpeakerAngles(pfVar6,uVar3,54.7,*(__uint64 *)(param_1 + 0x2d0));
    if (pfVar6 != (float *)0x0) {
      FMemory::Free(pfVar6);
    }
  }
  return;
}



// FUNCTION 1405aaf10 FUN_1405aaf10 body=57 status=ok
// SIG undefined FUN_1405aaf10(void)

void FUN_1405aaf10(longlong param_1,longlong param_2)

{
  if ((((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
      (*(__uint64 *)(param_1 + 0xd0) != 0)) &&
     ((*(longlong *)(param_1 + 0xc0) != 0 && (*(char *)(param_1 + 0xd8) == '\0')))) {
    AK::SoundEngine::SetSwitch
              (*(ulong *)(*(longlong *)(param_2 + 0x30) + 0x28),*(ulong *)(param_2 + 0x28),
               *(__uint64 *)(param_1 + 0xd0));
    return;
  }
  return;
}



// FUNCTION 1405aaf50 FUN_1405aaf50 body=69 status=ok
// SIG undefined FUN_1405aaf50(void)

void FUN_1405aaf50(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  if ((((lVar1 != 0) && (param_2 != 0)) && (*(longlong *)(param_2 + 0x30) != 0)) &&
     (((*(__uint64 *)(lVar1 + 0xd0) != 0 && (*(longlong *)(lVar1 + 0xc0) != 0)) &&
      (*(char *)(lVar1 + 0xd8) == '\0')))) {
    AK::SoundEngine::SetSwitch
              (*(ulong *)(*(longlong *)(param_2 + 0x30) + 0x28),*(ulong *)(param_2 + 0x28),
               *(__uint64 *)(lVar1 + 0xd0));
    return;
  }
  return;
}



// FUNCTION 1405aafa0 FUN_1405aafa0 body=274 status=ok
// SIG undefined FUN_1405aafa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405aafa0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar5 = 0;
  plVar1 = (longlong *)(param_1 + 0x70);
  uVar8 = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  uVar7 = uVar8;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<FInterpCurvePoint<FVector>,FDefaultAllocator>::ResizeTo(plVar1,0);
    uVar7 = *(uint *)(param_1 + 0x78);
  }
  if (0 < (int)uVar7) {
    pfVar4 = (float *)*plVar1;
    uVar9 = uVar5;
    do {
      uVar8 = (uint)uVar9;
      if (0.0 < *pfVar4 || *pfVar4 == 0.0) break;
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)uVar8;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 0xb;
    } while ((longlong)uVar5 < (longlong)(int)uVar7);
  }
  *(uint *)(param_1 + 0x78) = uVar7 + 1;
  if (*(int *)(param_1 + 0x7c) < (int)(uVar7 + 1)) {
    TArray<UTTLCameraModifier::FTTLCameraPostFx,FDefaultAllocator>::ResizeGrow(plVar1,uVar7);
  }
  lVar6 = (longlong)(int)uVar8 * 0x2c;
  _guard_xfg_dispatch_icall_nop
            ((void *)(*plVar1 + lVar6 + 0x2c),(void *)(*plVar1 + lVar6),
             (longlong)(int)(uVar7 - uVar8) * 0x2c);
  uVar3 = DAT_1468b5d98;
  lVar2 = *plVar1;
  *(undefined8 *)(lVar6 + 4 + lVar2) = _DAT_1468b5d90;
  *(undefined8 *)(lVar6 + 0x10 + lVar2) = 0;
  *(undefined4 *)(lVar6 + 0xc + lVar2) = uVar3;
  *(undefined4 *)(lVar6 + 0x18 + lVar2) = 0;
  *(undefined8 *)(lVar6 + 0x1c + lVar2) = 0;
  *(undefined4 *)(lVar6 + lVar2) = 0;
  *(undefined4 *)(lVar6 + 0x24 + lVar2) = 0;
  *(undefined1 *)(lVar6 + 0x28 + lVar2) = 0;
  return;
}



// FUNCTION 1405ab0c0 SetTrackToSensibleDefault body=63 status=ok
// SIG undefined SetTrackToSensibleDefault(void)

void UInterpTrackAkAudioRTPC::SetTrackToSensibleDefault(longlong param_1)

{
  undefined4 local_res8 [8];
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<20,4>_>,FDefaultAllocator>::ResizeTo
              (param_1 + 0x70,0);
  }
  local_res8[0] = 0;
  FInterpCurve<float>::AddPoint(param_1 + 0x70,0,local_res8);
  return;
}



// FUNCTION 1405ab100 SetExitArrowEnabled body=7 status=ok
// SIG undefined SetExitArrowEnabled(void)

void UUGCampaign::SetExitArrowEnabled(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2e0) = param_2;
  return;
}



// FUNCTION 1405ab110 FUN_1405ab110 body=611 status=ok
// SIG undefined FUN_1405ab110(void)

void FUN_1405ab110(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x60);
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
          goto LAB_1405ab2c7;
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
LAB_1405ab2c7:
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



// FUNCTION 1405ab390 FUN_1405ab390 body=46 status=ok
// SIG undefined FUN_1405ab390(void)

void FUN_1405ab390(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    FUN_1405adde0(*(longlong *)(param_1 + 0x2d8),param_1);
    *(undefined8 *)(param_1 + 0x2d8) = 0;
  }
  return;
}



// FUNCTION 1405ab3c0 FUN_1405ab3c0 body=163 status=ok
// SIG undefined FUN_1405ab3c0(void)

void FUN_1405ab3c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  lVar3 = lVar5;
  if ((param_2 != 0) &&
     (plVar1 = *(longlong **)(param_2 + 0x528), lVar3 = 0, plVar1 != (longlong *)0x0)) {
    uVar2 = UProgressBar::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      lVar4 = FWeakObjectPtr::Get(&DAT_1461fd030);
      if (lVar3 == lVar4) goto LAB_1405ab419;
    }
  }
  lVar5 = lVar3;
LAB_1405ab419:
  FWeakObjectPtr::operator=(&DAT_1461fd030,lVar5);
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    FUN_14059fa50();
    return;
  }
  return;
}



// FUNCTION 1405ab470 FUN_1405ab470 body=524 status=ok
// SIG undefined FUN_1405ab470(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1405ab470(longlong *param_1,undefined8 param_2,char param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_248 [32];
  undefined4 local_228;
  undefined1 local_224 [12];
  undefined4 local_218;
  undefined1 local_208 [448];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  if ((param_1 == (longlong *)0x0) &&
     ((param_4 == 0 || (param_1 = (longlong *)FUN_14238b320(param_4), param_1 == (longlong *)0x0))))
  {
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((lVar2 == 0) || (cVar1 = FUN_1428c5af0(lVar2), cVar1 == '\0')) {
      plVar3 = (longlong *)0x0;
    }
    else if (param_3 == '\0') {
      plVar3 = (longlong *)FUN_14058e4d0(param_1);
      if (plVar3 != (longlong *)0x0) {
        FUN_14234b270(plVar3,lVar2);
      }
    }
    else {
      plVar3 = (longlong *)FUN_14059d650(lVar2);
    }
    lVar5 = param_4;
    if (param_4 == 0) {
      lVar5 = param_1[0x2d];
    }
    if ((plVar3 != (longlong *)0x0) && (lVar5 != 0)) {
      if (param_4 == 0) {
        (**(code **)(*param_1 + 0x578))(param_1,&local_228,local_224);
      }
      else {
        local_228 = *(undefined4 *)(param_4 + 0x1e8);
      }
      if ((*(byte *)(plVar3 + 0x17) & 1) == 0) {
        *(byte *)((longlong)plVar3 + 0x24c) = *(byte *)((longlong)plVar3 + 0x24c) | 0x10;
        *(ulonglong *)((longlong)plVar3 + 0x204) = CONCAT44(local_228,local_228);
        *(undefined4 *)((longlong)plVar3 + 0x20c) = local_228;
        local_218 = local_228;
        FUN_142399e30(plVar3,lVar5,param_2);
        FUN_14234b270(plVar3,lVar2);
      }
      else {
        FUN_14237e6d0(local_208,plVar3,1,1);
        FUN_142382f60(plVar3,lVar5,&DAT_146af29ec,param_2);
        FUN_1405a9420(plVar3,local_228);
        FUN_14237f990(local_208);
      }
      cVar1 = (**(code **)(*plVar3 + 0x2a0))(plVar3);
      if (cVar1 == '\0') {
        (**(code **)(*plVar3 + 0x280))(plVar3,0);
      }
      uVar4 = FUN_1405b5580();
      lVar2 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar4);
      if (lVar2 == 0) {
        param_1 = (longlong *)FUN_14238b320(plVar3);
      }
      FUN_1405a9570(plVar3,param_1);
    }
  }
  return plVar3;
}



// FUNCTION 1405ab680 FUN_1405ab680 body=974 status=ok
// SIG undefined FUN_1405ab680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1405ab680(longlong *param_1,float *param_2,float param_3,float *param_4,char param_5)

{
  float *pfVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auVar9 [16];
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong local_38;
  longlong lStack_30;
  undefined1 local_28 [32];
  
  iVar4 = _isnan((double)*param_2);
  if (((iVar4 == 0) && (iVar4 = _isnan((double)param_2[1]), iVar4 == 0)) &&
     (iVar4 = _isnan((double)param_2[2]), iVar4 == 0)) {
    if (((param_1 == (longlong *)0x0) ||
        (lVar5 = (**(code **)(*param_1 + 0x148))(param_1), lVar5 == 0)) ||
       (cVar3 = FUN_1428c5af0(lVar5), cVar3 == '\0')) {
      plVar6 = (longlong *)0x0;
    }
    else {
      if (param_5 == '\0') {
        uVar7 = UWorld::GetWorldSettings(lVar5,0,1);
        plVar6 = (longlong *)FUN_14058e4d0(uVar7);
        if (plVar6 != (longlong *)0x0) {
          FUN_14234b270(plVar6,lVar5);
        }
      }
      else {
        plVar6 = (longlong *)FUN_14059d650();
      }
      if (plVar6 != (longlong *)0x0) {
        param_3 = param_3 * 0.02;
        fVar12 = param_2[2];
        fVar10 = *param_4;
        if (param_3 <= 0.01) {
          param_3 = 0.01;
        }
        *(undefined8 *)((longlong)plVar6 + 0x1ec) = *(undefined8 *)param_2;
        plVar6[0x3f] = *(longlong *)param_4;
        *(ulonglong *)((longlong)plVar6 + 0x204) = CONCAT44(param_3,param_3);
        *(float *)((longlong)plVar6 + 500) = fVar12;
        *(float *)(plVar6 + 0x40) = param_4[2];
        lStack_30 = CONCAT44(lStack_30._4_4_,param_3);
        *(float *)((longlong)plVar6 + 0x20c) = param_3;
        fVar12 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
        if (ABS(fVar10) < ABS(fVar12)) {
          fVar12 = fVar10;
        }
        fVar10 = fVar10 - fVar12;
        if (fVar10 < 0.0) {
          fVar10 = fVar10 + 360.0;
        }
        if (fVar10 == 0.0) {
          fVar10 = param_4[1];
          fVar12 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
          if (ABS(fVar10) < ABS(fVar12)) {
            fVar12 = fVar10;
          }
          fVar10 = fVar10 - fVar12;
          if (fVar10 < 0.0) {
            fVar10 = fVar10 + 360.0;
          }
          if (fVar10 == 0.0) {
            fVar10 = param_4[2];
            fVar12 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
            if (ABS(fVar10) < ABS(fVar12)) {
              fVar12 = fVar10;
            }
            fVar10 = fVar10 - fVar12;
            if (fVar10 < 0.0) {
              fVar10 = fVar10 + 360.0;
            }
            if (fVar10 == 0.0) {
              lVar2 = plVar6[0x6f];
              *(undefined1 *)((longlong)plVar6 + 0x311) = 3;
              if ((lVar2 != 0) &&
                 (*(int *)(lVar2 + 0x2e4) = *(int *)(lVar2 + 0x2e4) + 1, lVar2 != 0)) {
                *(undefined1 *)(lVar2 + 0x62) = 3;
                FUN_1405a53f0();
              }
            }
          }
        }
        if ((*(byte *)(plVar6 + 0x17) & 1) == 0) {
          FUN_14234b270(plVar6,lVar5);
        }
        else {
          pfVar1 = (float *)(plVar6 + 0x50);
          if (((*(float *)(plVar6 + 0x3f) != *pfVar1) ||
              (*(float *)((longlong)plVar6 + 0x1fc) != *(float *)((longlong)plVar6 + 0x284))) ||
             (*(float *)(plVar6 + 0x40) != *(float *)(plVar6 + 0x51))) {
            local_38 = *(longlong *)*(undefined1 (*) [12])(plVar6 + 0x3f);
            auVar9._12_4_ = 0;
            auVar9._0_12_ = *(undefined1 (*) [12])(plVar6 + 0x3f);
            auVar9 = divps(auVar9,_DAT_146853930);
            fVar13 = (float)DAT_146853930;
            fVar14 = DAT_146853930._4_4_;
            fVar15 = DAT_146853930._8_4_;
            fVar10 = (float)local_38 - (float)(int)auVar9._0_4_ * fVar13;
            fVar12 = (float)((ulonglong)local_38 >> 0x20) - (float)(int)auVar9._4_4_ * fVar14;
            fVar16 = *(float *)(plVar6 + 0x40) - (float)(int)auVar9._8_4_ * fVar15;
            fVar10 = (float)(((uint)(fVar10 + fVar13) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                            (uint)(fVar10 + fVar13));
            fVar12 = (float)(((uint)(fVar12 + fVar14) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                            (uint)(fVar12 + fVar14));
            fVar16 = (float)(((uint)(fVar16 + fVar15) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                            (uint)(fVar16 + fVar15));
            uVar11 = ((uint)(fVar16 - fVar15) ^ (uint)fVar16) &
                     -(uint)(fRam0000000146853928 < fVar16) ^ (uint)fVar16;
            lStack_30 = CONCAT44(lStack_30._4_4_,uVar11);
            *(ulonglong *)pfVar1 =
                 CONCAT44(((uint)(fVar12 - fVar14) ^ (uint)fVar12) &
                          -(uint)(fRam0000000146853924 < fVar12) ^ (uint)fVar12,
                          ((uint)(fVar10 - fVar13) ^ (uint)fVar10) &
                          -(uint)(_DAT_146853920 < fVar10) ^ (uint)fVar10);
            *(uint *)(plVar6 + 0x51) = uVar11;
            plVar8 = (longlong *)FRotator::Quaternion(pfVar1,local_28);
            lVar5 = plVar8[1];
            plVar6[0x4e] = *plVar8;
            plVar6[0x4f] = lVar5;
          }
          local_38 = plVar6[0x4e];
          lStack_30 = plVar6[0x4f];
          FUN_14239b520(plVar6,plVar6[0x32],plVar6[0x33],0,&local_38,0);
        }
        cVar3 = (**(code **)(*plVar6 + 0x2a0))(plVar6);
        if (cVar3 == '\0') {
          (**(code **)(*plVar6 + 0x280))(plVar6,0);
        }
      }
    }
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  return plVar6;
}



// FUNCTION 1405aba50 FUN_1405aba50 body=93 status=ok
// SIG undefined FUN_1405aba50(void)

void FUN_1405aba50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x530) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x460);
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x468);
      FUN_1405acdf0(lVar1);
      *(undefined8 *)(lVar1 + 0x2d0) = uVar2;
      FUN_1405a1640(lVar1);
    }
    *(undefined1 *)(param_1 + 0x530) = 1;
  }
  return;
}



// FUNCTION 1405abab0 FUN_1405abab0 body=46 status=ok
// SIG undefined FUN_1405abab0(void)

void FUN_1405abab0(longlong param_1,undefined8 param_2)

{
  FUN_1405acdf0();
  *(undefined8 *)(param_1 + 0x2d0) = param_2;
  FUN_1405a1640(param_1);
  return;
}



// FUNCTION 1405abae0 FUN_1405abae0 body=603 status=ok
// SIG undefined FUN_1405abae0(void)

void FUN_1405abae0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  int iVar7;
  int iVar8;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  int local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  int local_40;
  int local_3c;
  longlong local_38 [2];
  longlong local_28 [2];
  
  if (DAT_1468536c5 != '\0') {
    plVar1 = (longlong *)FUN_1405b9970();
    lVar5 = plVar1[0x1f];
    if (lVar5 == 0) {
      (**(code **)(*plVar1 + 0x368))(plVar1);
      lVar5 = plVar1[0x1f];
    }
    puVar2 = (undefined8 *)FUN_141672d20(local_28,lVar5 + 0x48);
    puVar3 = (undefined8 *)FPaths::ProjectDir(local_38);
    iVar7 = *(int *)(puVar2 + 1) + -1;
    if (*(int *)(puVar2 + 1) == 0) {
      iVar7 = 0;
    }
    iVar8 = 2;
    if ((*(int *)(puVar3 + 1) != 0) || (iVar4 = iVar8, iVar7 == -1)) {
      iVar4 = 1;
    }
    local_68 = (wchar_t *)*puVar3;
    *puVar3 = 0;
    local_60._0_4_ = *(int *)(puVar3 + 1);
    local_60._4_4_ = *(int *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    if (local_60._4_4_ < iVar7 + iVar4 + (int)local_60) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
    }
    FString::PathAppend(&local_68,*puVar2,iVar7);
    iVar7 = local_60._4_4_;
    local_40 = (int)local_60;
    local_48 = local_68;
    iVar4 = (int)local_60 + (0x1d - (uint)((int)local_60 != 0));
    local_68 = (wchar_t *)0x0;
    local_3c = local_60._4_4_;
    local_60 = 0;
    if (iVar7 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_48);
    }
    FString::PathAppend(&local_48,L"GeneratedSoundBanks/Editor/",0x1b);
    if (local_68 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    FPaths::ProjectLogDir(&local_58);
    pwVar6 = L"";
    if (local_40 != 0) {
      pwVar6 = local_48;
    }
    FUN_141677bd0(&local_58,pwVar6);
    pwVar6 = local_58;
    iVar7 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      iVar7 = 0;
    }
    if ((local_50 != 0) || (iVar7 == -1)) {
      iVar8 = 1;
    }
    local_68 = (wchar_t *)0x0;
    local_60 = CONCAT44(local_60._4_4_,local_50);
    if ((local_50 == 0) && (iVar8 + iVar7 == 0)) {
      local_60 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar8 + iVar7 + local_50,0);
      _guard_xfg_dispatch_icall_nop(local_68,pwVar6,(longlong)local_50 * 2);
    }
    FString::PathAppend(&local_68,*param_2,iVar7);
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    pwVar6 = L"";
    if ((int)local_60 != 0) {
      pwVar6 = local_68;
    }
    local_58 = local_68;
    local_50 = (int)local_60;
    local_4c = local_60._4_4_;
    AK::SoundEngine::StartOutputCapture(pwVar6);
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (local_48 != (wchar_t *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405abd40 FUN_1405abd40 body=476 status=ok
// SIG undefined FUN_1405abd40(void)

void FUN_1405abd40(undefined8 *param_1)

{
  void *_Dst;
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  void *local_38;
  int local_30;
  int local_2c;
  void *local_28;
  undefined8 local_20;
  
  lVar2 = DAT_1468536c8;
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    local_30 = *(int *)(param_1 + 1);
    lVar5 = (longlong)local_30;
    pvVar1 = (void *)*param_1;
    local_38 = (void *)0x0;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
      _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar5 * 2);
    }
    local_28 = (void *)0x0;
    local_20 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    FGenericPlatformString::Convert<char,wchar_t>(local_28,5,&DAT_143fc75b4,5,0x3f);
    cVar4 = FString::EndsWith(&local_38,&local_28,1);
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
    if (cVar4 == '\0') {
      local_28 = (void *)0x0;
      local_20 = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      pvVar1 = local_28;
      FGenericPlatformString::Convert<char,wchar_t>(local_28,5,&DAT_143fc7e88,5,0x3f);
      iVar3 = local_30;
      if (((int)local_20 != 0) && (iVar6 = (int)local_20 + -1, iVar6 != 0)) {
        lVar5 = (longlong)local_30;
        local_30 = (uint)(local_30 == 0) + local_30 + iVar6;
        if (local_2c < local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar3);
        }
        _Dst = (void *)((longlong)local_38 + (lVar5 - (ulonglong)(iVar3 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,(longlong)iVar6 * 2);
        *(undefined2 *)((longlong)iVar6 * 2 + (longlong)_Dst) = 0;
      }
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
    }
    FUN_1405abae0(lVar2,&local_38);
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405abf20 FUN_1405abf20 body=484 status=ok
// SIG undefined FUN_1405abf20(void)

void FUN_1405abf20(undefined8 *param_1)

{
  void *_Dst;
  void *pvVar1;
  size_t _Size;
  int iVar2;
  char cVar3;
  ErrorCode EVar4;
  ErrorLevel EVar5;
  void *pvVar6;
  longlong lVar7;
  ulong uVar8;
  size_t sVar9;
  __uint64 _Var10;
  int iVar11;
  undefined4 in_stack_ffffffffffffffb8;
  undefined2 uVar13;
  ulong uVar12;
  undefined1 in_stack_ffffffffffffffc0;
  void *local_38;
  int local_30;
  int local_2c;
  void *local_28;
  undefined8 local_20;
  
  uVar13 = (undefined2)((uint)in_stack_ffffffffffffffb8 >> 0x10);
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    local_30 = *(int *)(param_1 + 1);
    lVar7 = (longlong)local_30;
    pvVar1 = (void *)*param_1;
    local_38 = (void *)0x0;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_30,0);
      _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar7 * 2);
    }
    local_28 = (void *)0x0;
    local_20 = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
    _Var10 = 6;
    uVar12 = CONCAT22(uVar13,0x3f);
    FGenericPlatformString::Convert<char,wchar_t>(local_28,6,".prof");
    uVar8 = 1;
    EVar5 = (ErrorLevel)&local_28;
    cVar3 = FString::EndsWith(&local_38);
    if (local_28 != (void *)0x0) {
      FMemory::Free();
    }
    if (cVar3 == '\0') {
      local_28 = (void *)0x0;
      local_20 = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
      pvVar1 = local_28;
      uVar8 = 0x43fc7e98;
      _Var10 = 6;
      uVar12 = CONCAT22((short)(uVar12 >> 0x10),0x3f);
      EVar5 = 6;
      FGenericPlatformString::Convert<char,wchar_t>(local_28);
      iVar2 = local_30;
      if (((int)local_20 != 0) && (iVar11 = (int)local_20 + -1, iVar11 != 0)) {
        lVar7 = (longlong)local_30;
        local_30 = (uint)(local_30 == 0) + iVar11 + local_30;
        if (local_2c < local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,iVar2);
        }
        _Dst = (void *)((longlong)local_38 + (lVar7 - (ulonglong)(iVar2 != 0)) * 2);
        _Size = (longlong)iVar11 * 2;
        pvVar6 = pvVar1;
        sVar9 = _Size;
        _guard_xfg_dispatch_icall_nop(_Dst,pvVar1,_Size);
        uVar8 = (ulong)sVar9;
        EVar5 = (ErrorLevel)pvVar6;
        *(undefined2 *)(_Size + (longlong)_Dst) = 0;
      }
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
    }
    if (DAT_1468536c5 != '\0') {
      EVar4 = 0x43f3eda8;
      if (local_30 != 0) {
        EVar4 = (ErrorCode)local_38;
      }
      AK::Monitor::PostCode(EVar4,EVar5,uVar8,_Var10,uVar12,(bool)in_stack_ffffffffffffffc0);
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1405ac110 FUN_1405ac110 body=807 status=ok
// SIG undefined FUN_1405ac110(void)

void FUN_1405ac110(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  BOOL BVar14;
  char *pcVar15;
  undefined8 uVar16;
  char *pcVar17;
  longlong lVar18;
  int local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  char *local_68;
  uint uStack_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  lVar8 = DAT_1468536d0;
  if (DAT_1468536d0 == 0) {
    return;
  }
  if (param_1 < 0x801) {
    if (param_1 == 0x800) {
LAB_1405ac293:
      if (param_2 == (undefined8 *)0x0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *param_2;
      }
      iVar7 = *(int *)(DAT_1468536d0 + 0x18);
      lVar18 = (longlong)iVar7;
      uVar10 = *(undefined8 *)((longlong)param_2 + 0x14);
      uVar11 = *(undefined8 *)((longlong)param_2 + 0x1c);
      uVar4 = *(undefined4 *)(param_2 + 2);
      uVar12 = *(undefined8 *)((longlong)param_2 + 0x24);
      uVar13 = *(undefined8 *)((longlong)param_2 + 0x2c);
      uVar5 = *(undefined4 *)(param_2 + 7);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
      *(int *)(DAT_1468536d0 + 0x18) = iVar7 + 1;
      if (*(int *)(lVar8 + 0x1c) < iVar7 + 1) {
        TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(lVar8 + 0x10,iVar7);
      }
      lVar8 = *(longlong *)(lVar8 + 0x10);
      puVar1 = (undefined8 *)(lVar8 + lVar18 * 0x48);
      *puVar1 = CONCAT44(uStack_74,0x7f00);
      puVar1[1] = uVar16;
      puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar18 * 0x48);
      *puVar1 = 0;
      puVar1[1] = CONCAT44(uVar5,uVar4);
      puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar18 * 0x48);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar18 * 0x48);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      *(ulonglong *)(lVar8 + 0x40 + lVar18 * 0x48) = CONCAT44(uStack_34,uVar6);
      return;
    }
    if (0x100 < param_1) {
      if ((param_1 - 0x200U & 0xfffffdff) != 0) {
        return;
      }
      goto LAB_1405ac293;
    }
    if (param_1 == 0x100) goto LAB_1405ac293;
    if (param_1 == 1) {
      if (param_2 == (undefined8 *)0x0) {
        local_78 = 1;
        uStack_70 = 0;
      }
      else {
        uStack_70 = *param_2;
        local_78 = 1;
      }
    }
    else {
      if (param_1 == 4) {
        if (param_2 == (undefined8 *)0x0) {
          uStack_70 = 0;
        }
        else {
          uStack_70 = *param_2;
        }
        local_58 = *(undefined4 *)(param_2 + 3);
        uStack_54 = *(undefined4 *)((longlong)param_2 + 0x1c);
        local_78 = 4;
        if (param_2[4] == 0) {
          return;
        }
        uStack_60 = uStack_60 & 0xffffff00;
        lVar18 = -1;
        do {
          lVar18 = lVar18 + 1;
        } while (*(char *)(param_2[4] + lVar18) != '\0');
        iStack_5c = (int)lVar18 + 1;
        local_68 = (char *)FMemory::Malloc(iStack_5c,0);
        pcVar17 = (char *)param_2[4];
        pcVar15 = local_68;
        do {
          cVar3 = *pcVar17;
          pcVar17 = pcVar17 + 1;
          *pcVar15 = cVar3;
          pcVar15 = pcVar15 + 1;
        } while (cVar3 != '\0');
        goto LAB_1405ac3a8;
      }
      if (param_1 != 8) {
        return;
      }
      if (param_2 == (undefined8 *)0x0) {
        uStack_70 = 0;
      }
      else {
        uStack_70 = *param_2;
      }
      iStack_5c = *(int *)(param_2 + 3);
      local_58 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uStack_60 = *(uint *)(param_2 + 4);
      local_78 = 8;
    }
  }
  else {
    if (param_1 < 0x1000001) {
      if (param_1 != 0x1000000) {
        if ((param_1 - 0x1000U & 0xffffcfff) != 0) {
          return;
        }
        if (param_1 == 0x3000) {
          return;
        }
        goto LAB_1405ac293;
      }
    }
    else if (param_1 != 0x2000000) {
      if (param_1 != 0x4000000) {
        return;
      }
      if (param_2 == (undefined8 *)0x0) {
        uStack_70 = 0;
      }
      else {
        uStack_70 = *param_2;
      }
      iStack_5c = *(int *)(param_2 + 3);
      local_58 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uStack_60 = *(uint *)((longlong)param_2 + 0x14);
      uStack_54 = CONCAT31(uStack_54._1_3_,*(undefined1 *)(param_2 + 4));
      local_78 = 0x4000000;
      goto LAB_1405ac3a0;
    }
    if (param_2 == (undefined8 *)0x0) {
      uStack_70 = 0;
    }
    else {
      uStack_70 = *param_2;
    }
    uStack_60 = *(uint *)((longlong)param_2 + 0x14);
    iStack_5c = *(int *)(param_2 + 3);
    local_78 = param_1;
  }
LAB_1405ac3a0:
  local_68 = (char *)0x0;
LAB_1405ac3a8:
  BVar14 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x20));
  if (BVar14 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x20));
  }
  iVar7 = *(int *)(lVar8 + 0x18);
  lVar18 = (longlong)iVar7;
  *(int *)(lVar8 + 0x18) = iVar7 + 1;
  if (*(int *)(lVar8 + 0x1c) < iVar7 + 1) {
    TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(lVar8 + 0x10,iVar7);
  }
  lVar9 = *(longlong *)(lVar8 + 0x10);
  puVar1 = (undefined8 *)(lVar9 + lVar18 * 0x48);
  *puVar1 = CONCAT44(uStack_74,local_78);
  puVar1[1] = uStack_70;
  puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar18 * 0x48);
  *puVar1 = local_68;
  puVar1[1] = CONCAT44(iStack_5c,uStack_60);
  puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar18 * 0x48);
  *puVar1 = CONCAT44(uStack_54,local_58);
  puVar1[1] = uStack_50;
  puVar2 = (undefined4 *)(lVar9 + 0x30 + lVar18 * 0x48);
  *puVar2 = local_48;
  puVar2[1] = uStack_44;
  puVar2[2] = uStack_40;
  puVar2[3] = uStack_3c;
  *(ulonglong *)(lVar9 + 0x40 + lVar18 * 0x48) = CONCAT44(uStack_34,local_38);
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar8 + 0x20));
  return;
}



// FUNCTION 1405ac440 FUN_1405ac440 body=232 status=ok
// SIG undefined FUN_1405ac440(void)

void FUN_1405ac440(int param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = FUN_1405ac530();
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x50);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar4 = (longlong *)FUN_1405ac530();
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar5 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar5 = plVar4 + 7;
    }
    iVar2 = *(int *)((longlong)plVar5 + ((longlong)(int)plVar4[9] - 1U & (longlong)param_1) * 4);
    if (iVar2 != -1) {
      do {
        plVar5 = (longlong *)(*plVar4 + (longlong)iVar2 * 0x18);
        if (*(int *)(*plVar4 + (longlong)iVar2 * 0x18) == param_1) {
          if (iVar2 != -1) goto LAB_1405ac4e3;
          break;
        }
        iVar2 = (int)plVar5[2];
      } while (iVar2 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1405ac4e3:
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if ((plVar4 == (longlong *)0x0) || (plVar4 = (longlong *)*plVar4, plVar4 == (longlong *)0x0)) {
    *(undefined4 *)(param_2 + 0xc) = 0x11;
  }
  else {
    (**(code **)(*plVar4 + 8))(plVar4,param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001405ac521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1405ac530 FUN_1405ac530 body=224 status=ok
// SIG undefined FUN_1405ac530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1405ac530(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146853b18) {
    _Init_thread_header(&DAT_146853b18);
    if (DAT_146853b18 == -1) {
      _DAT_146853ad0 = 0xffffffff;
      _DAT_146853aa0 = 0;
      _DAT_146853aa8 = 0;
      _DAT_146853ac0 = 0;
      _DAT_146853ac8 = 0;
      _DAT_146853ad4 = 0;
      DAT_146853ae0 = 0;
      _DAT_146853ae8 = 0;
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_146853af0);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_146853af0,4000);
      SetAudioInputCallbacks(FUN_1405ac440,FUN_1405ac610,FUN_1405ac6f0);
      atexit(FUN_143e3fc60);
      _Init_thread_footer(&DAT_146853b18);
      return &DAT_146853aa0;
    }
  }
  return &DAT_146853aa0;
}



// FUNCTION 1405ac610 FUN_1405ac610 body=222 status=ok
// SIG undefined FUN_1405ac610(void)

void FUN_1405ac610(int param_1,undefined8 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar1;
  BOOL BVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar4 = FUN_1405ac530();
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar4 + 0x50);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar5 = (longlong *)FUN_1405ac530();
  if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
    plVar6 = (longlong *)plVar5[8];
    if ((longlong *)plVar5[8] == (longlong *)0x0) {
      plVar6 = plVar5 + 7;
    }
    iVar3 = *(int *)((longlong)plVar6 + ((longlong)(int)plVar5[9] - 1U & (longlong)param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)(*plVar5 + (longlong)iVar3 * 0x18);
        if (*(int *)(*plVar5 + (longlong)iVar3 * 0x18) == param_1) {
          if (iVar3 != -1) goto LAB_1405ac6b3;
          break;
        }
        iVar3 = (int)plVar6[2];
      } while (iVar3 != -1);
    }
  }
  plVar6 = (longlong *)0x0;
LAB_1405ac6b3:
  plVar5 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if ((plVar5 != (longlong *)0x0) && (puVar1 = (undefined8 *)*plVar5, puVar1 != (undefined8 *)0x0))
  {
    (**(code **)*puVar1)(puVar1,param_1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001405ac6e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1405ac6f0 FUN_1405ac6f0 body=220 status=ok
// SIG undefined FUN_1405ac6f0(void)

undefined8 FUN_1405ac6f0(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  lVar3 = FUN_1405ac530();
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x50);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar4 = (longlong *)FUN_1405ac530();
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar5 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar5 = plVar4 + 7;
    }
    iVar2 = *(int *)((longlong)plVar5 + ((longlong)(int)plVar4[9] - 1U & (longlong)param_1) * 4);
    if (iVar2 != -1) {
      do {
        plVar5 = (longlong *)(*plVar4 + (longlong)iVar2 * 0x18);
        if (*(int *)(*plVar4 + (longlong)iVar2 * 0x18) == param_1) {
          if (iVar2 != -1) goto LAB_1405ac783;
          break;
        }
        iVar2 = (int)plVar5[2];
      } while (iVar2 != -1);
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1405ac783:
  plVar4 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  if ((plVar4 == (longlong *)0x0) || (plVar4 = (longlong *)*plVar4, plVar4 == (longlong *)0x0)) {
    uVar6 = 0x3f800000;
  }
  else {
    uVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar6;
}



// FUNCTION 1405ac7d0 FUN_1405ac7d0 body=286 status=ok
// SIG undefined FUN_1405ac7d0(void)

void FUN_1405ac7d0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  lVar3 = FUN_14058e3e0(param_2);
  *(undefined1 *)(lVar3 + 8) = 0;
  if (((*(char *)(*param_2 + 0x349) != '\0') || (*(char *)(param_1 + 0x1d) != '\0')) ||
     (*(char *)(param_1 + 0x1c) == '\0')) {
    cVar2 = FUN_14059ee90();
    if ((cVar2 == '\0') && (cVar2 = FUN_14059ee00(), cVar2 == '\0')) {
      return;
    }
    if ((*(char *)(param_1 + 0x1d) == '\0') || (*(longlong *)(param_1 + 0x10) == 0)) {
      lVar1 = *(longlong *)(lVar3 + 0x10);
      if ((lVar1 != 0) &&
         ((((*(longlong *)(lVar3 + 0x18) != -1 &&
            (*(longlong *)(lVar3 + 0x18) == *(longlong *)(lVar1 + 0xd0))) &&
           (*(longlong *)(lVar1 + 0xd0) != 0)) &&
          ((*(longlong *)(lVar1 + 0xc0) != 0 && (*(char *)(lVar1 + 0xd8) == '\0')))))) {
        AK::SoundEngine::StopPlayingID(*(ulong *)(lVar3 + 0x20),0,4);
      }
    }
    else {
      local_38 = 0;
      local_30 = 0;
      FUN_1405a2d20(*(longlong *)(lVar3 + 0x10),&local_28,*(longlong *)(param_1 + 0x10),0,0,
                    &local_38);
      if (((local_28 != 0) && (local_20 != -1)) && (local_20 == *(longlong *)(local_28 + 0xd0))) {
        *(int *)(local_28 + 0x2e8) = *(int *)(local_28 + 0x2e8) + -1;
        return;
      }
    }
  }
  return;
}



// FUNCTION 1405ac8f0 FUN_1405ac8f0 body=63 status=ok
// SIG undefined FUN_1405ac8f0(void)

void FUN_1405ac8f0(longlong *param_1,long param_2,AkCurveInterpolation param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if ((((lVar1 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) &&
     (((*(longlong *)(lVar1 + 0xd0) != 0 && (*(longlong *)(lVar1 + 0xc0) != 0)) &&
      (*(char *)(lVar1 + 0xd8) == '\0')))) {
    AK::SoundEngine::StopPlayingID(*(ulong *)(param_1 + 2),param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1405ac930 FUN_1405ac930 body=151 status=ok
// SIG undefined FUN_1405ac930(void)

void FUN_1405ac930(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    for (lVar1 = *(longlong *)(param_1 + 0xe0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
      AK::SoundEngine::StopPlayingID(*(ulong *)(lVar1 + 0x20),0,4);
    }
    AK::SoundEngine::StopMIDIOnEvent(0,*(__uint64 *)(param_1 + 0xd0));
    lVar1 = *(longlong *)(param_1 + 0xe0);
    while ((lVar1 != 0 && (*(longlong *)(param_1 + 0xc0) != 0))) {
      FUN_1405a04f0(param_1,lVar1,1);
      lVar1 = *(longlong *)(param_1 + 0xe0);
    }
  }
  FUN_1405a53f0(param_1);
  return;
}



// FUNCTION 1405ac9d0 FUN_1405ac9d0 body=39 status=ok
// SIG undefined FUN_1405ac9d0(void)

void FUN_1405ac9d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FUN_1405ac930();
  }
  *(undefined1 *)(param_1 + 0x403) = 0;
  return;
}



// FUNCTION 1405aca10 FUN_1405aca10 body=77 status=ok
// SIG undefined FUN_1405aca10(void)

void FUN_1405aca10(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x530) != '\0') {
    FUN_140597570();
    lVar1 = *(longlong *)(param_1 + 0x460);
    if (lVar1 != 0) {
      FUN_1405acdf0(lVar1);
      *(undefined8 *)(lVar1 + 0x2d0) = 0;
    }
    *(undefined1 *)(param_1 + 0x530) = 0;
  }
  return;
}



// FUNCTION 1405aca60 FUN_1405aca60 body=216 status=ok
// SIG undefined FUN_1405aca60(void)

void FUN_1405aca60(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  BOOL BVar3;
  
  cVar2 = FUN_14059ee90(param_1 + 0x10);
  if (((((cVar2 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 != 0)) &&
       (*(longlong *)(param_1 + 0x18) != -1)) &&
      ((*(longlong *)(param_1 + 0x18) == *(longlong *)(lVar1 + 0xd0) &&
       (*(longlong *)(lVar1 + 0xd0) != 0)))) &&
     ((*(longlong *)(lVar1 + 0xc0) != 0 && (*(char *)(lVar1 + 0xd8) == '\0')))) {
    AK::SoundEngine::StopPlayingID(*(ulong *)(param_1 + 0x20),0,4);
  }
  if (*(char *)(param_1 + 0x34) != '\0') {
    lVar1 = *(longlong *)(param_1 + 8);
    if ((*(longlong *)(lVar1 + 0xe0) != 0) && (*(longlong *)(lVar1 + 0xe0) == param_1)) {
      *(undefined8 *)(lVar1 + 0xe0) = 0;
      BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xf8));
      if (BVar3 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xf8));
      }
      *(undefined1 *)(lVar1 + 0x120) = 0;
      FUN_1405a74f0(lVar1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0xf8));
    }
    *(undefined1 *)(param_1 + 0x34) = 0;
  }
  return;
}



// FUNCTION 1405acb40 FUN_1405acb40 body=141 status=ok
// SIG undefined FUN_1405acb40(void)

void FUN_1405acb40(longlong *param_1,float param_2,byte param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    if ((((param_1[1] != -1) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) &&
        (*(longlong *)(lVar1 + 0xd0) != 0)) &&
       ((*(longlong *)(lVar1 + 0xc0) != 0 && (*(char *)(lVar1 + 0xd8) == '\0')))) {
      AK::SoundEngine::StopPlayingID(*(ulong *)(param_1 + 2),(int)(param_2 * 1000.0),(uint)param_3);
      lVar1 = *param_1;
    }
    if (((lVar1 != 0) && (param_1[1] != -1)) && (param_1[1] == *(longlong *)(lVar1 + 0xd0))) {
      *(int *)(lVar1 + 0x2e8) = *(int *)(lVar1 + 0x2e8) + -1;
      *param_1 = 0;
      param_1[1] = -1;
    }
  }
  return;
}



// FUNCTION 1405acbd0 FUN_1405acbd0 body=423 status=ok
// SIG undefined FUN_1405acbd0(void)

void FUN_1405acbd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulong *puVar8;
  
  pvVar3 = ThreadLocalStoragePointer;
  lVar1 = *(longlong *)(param_1 + 0x378);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
    if ((*(int *)(*(longlong *)((longlong)pvVar3 + (ulonglong)_tls_index * 8) + 0x38) <
         DAT_146853970) && (_Init_thread_header(&DAT_146853970), DAT_146853970 == -1)) {
      atexit((_func_5014 *)&LAB_143e3fc40);
      _Init_thread_footer(&DAT_146853970);
    }
    puVar8 = DAT_146853960;
    for (lVar2 = *(longlong *)(lVar1 + 0xe0); DAT_146853960 = puVar8, lVar2 != 0;
        lVar2 = *(longlong *)(lVar2 + 8)) {
      cVar4 = FUN_14058c1e0(lVar2 + 0x18);
      if (cVar4 != '\0') {
        lVar6 = (longlong)DAT_146853968;
        DAT_146853968 = DAT_146853968 + 1;
        if (DAT_14685396c < DAT_146853968) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&DAT_146853960);
        }
        DAT_146853960[lVar6] = *(ulong *)(lVar2 + 0x20);
      }
      puVar8 = DAT_146853960;
    }
    uVar7 = 0;
    uVar5 = (ulonglong)((longlong)(puVar8 + DAT_146853968) + (3 - (longlong)puVar8)) >> 2;
    if (puVar8 + DAT_146853968 < puVar8) {
      uVar5 = uVar7;
    }
    if (uVar5 != 0) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x378);
        if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0xd0) != 0)) &&
            (*(longlong *)(lVar2 + 0xc0) != 0)) && (*(char *)(lVar2 + 0xd8) == '\0')) {
          AK::SoundEngine::StopPlayingID(*puVar8,0,4);
        }
        puVar8 = puVar8 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar5);
    }
    DAT_146853968 = 0;
    if ((DAT_14685396c < 0) && (DAT_14685396c != 0)) {
      TArray<float,FDefaultAllocator>::ResizeTo(&DAT_146853960,0);
    }
    FUN_1405a53f0(lVar1);
  }
  return;
}



// FUNCTION 1405acd80 FUN_1405acd80 body=107 status=ok
// SIG undefined FUN_1405acd80(void)

void FUN_1405acd80(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0x403) != '\0')) {
    FUN_1405a3150(param_1,&local_28,param_2,0);
    if ((local_28 != 0) && ((local_20 != -1 && (local_20 == *(longlong *)(local_28 + 0xd0))))) {
      *(int *)(local_28 + 0x2e8) = *(int *)(local_28 + 0x2e8) + -1;
    }
    *(undefined1 *)(param_1 + 0x403) = 0;
  }
  FUN_1405acdf0(param_1);
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  return;
}



// FUNCTION 1405acdf0 FUN_1405acdf0 body=109 status=ok
// SIG undefined FUN_1405acdf0(void)

void FUN_1405acdf0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x403) != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x408);
    if ((((lVar1 != 0) && (*(longlong *)(param_1 + 0x410) != -1)) &&
        (*(longlong *)(param_1 + 0x410) == *(longlong *)(lVar1 + 0xd0))) &&
       (((*(longlong *)(lVar1 + 0xd0) != 0 && (*(longlong *)(lVar1 + 0xc0) != 0)) &&
        (*(char *)(lVar1 + 0xd8) == '\0')))) {
      AK::SoundEngine::StopPlayingID(*(ulong *)(param_1 + 0x418),0,4);
    }
    *(undefined1 *)(param_1 + 0x403) = 0;
  }
  return;
}



// FUNCTION 1405acec0 SupportsMultipleRows body=23 status=ok
// SIG undefined SupportsMultipleRows(void)

bool UMovieSceneTrack::SupportsMultipleRows(longlong param_1)

{
  int iVar1;
  
  iVar1 = FMovieSceneBlendTypeField::Num(param_1 + 0x54);
  return iVar1 != 0;
}



// FUNCTION 1405acee0 FUN_1405acee0 body=85 status=ok
// SIG undefined FUN_1405acee0(void)

undefined1 FUN_1405acee0(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x109,
             L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::SupportsType");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\moviescene\\public\\MovieSceneTrack.h",0x109,
             L"Pure virtual not implemented (%s)",L"UMovieSceneTrack::SupportsType");
  return 0;
}



// FUNCTION 1405acf40 FUN_1405acf40 body=999 status=ok
// SIG undefined FUN_1405acf40(void)

void FUN_1405acf40(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  void *local_48;
  ulonglong local_40;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  
  if (*(longlong *)(param_1 + 0x378) != 0) {
    FUN_140595fe0();
  }
  lVar3 = DAT_1468536c8;
  if (((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) {
    lVar4 = *param_2;
    lVar6 = *(longlong *)(param_1 + 0x378);
    if (lVar4 != lVar6) {
      if (lVar6 != 0) {
        FUN_1405a53f0(lVar6);
        *(undefined8 *)(param_1 + 0x378) = 0;
        lVar4 = *param_2;
        lVar6 = 0;
      }
      if (lVar4 != 0) {
        *(longlong *)(param_1 + 0x378) = lVar4;
        *(int *)(lVar4 + 0x2e4) = *(int *)(lVar4 + 0x2e4) + 1;
        lVar6 = *(longlong *)(param_1 + 0x378);
      }
    }
    FUN_140595ce0(*(longlong *)(lVar6 + 0xc0) + 0x50);
    lVar4 = *(longlong *)(param_1 + 0x378);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x2e4) = *(int *)(lVar4 + 0x2e4) + 1, lVar4 != 0)) {
      local_38 = FUN_1405a0a00;
      iStack_30 = 0;
      *(longlong *)(lVar4 + 0x2d8) = param_1;
      FUN_14058c4b0(lVar4 + 0x70,param_1,&local_38);
      local_38 = FUN_1405a0cc0;
      iStack_30 = 0;
      FUN_14058c4b0(lVar4 + 0x80,param_1,&local_38);
      iStack_30 = 0;
      local_38 = (code *)&LAB_1405a0230;
      plVar1 = (longlong *)(lVar4 + 0xa0);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143fcff50;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_38._4_4_;
        *(int *)(plVar5 + 3) = iStack_30;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_2c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar6;
        *plVar5 = (longlong)&PTR_FUN_143fcff98;
      }
      if (&local_38 != plVar1) {
        if (plVar5 == (longlong *)0x0) {
          if ((*(int *)(lVar4 + 0xa8) != 0) &&
             (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar1 != 0) {
              lVar6 = FMemory::Realloc(*plVar1,0,0);
              *plVar1 = lVar6;
            }
            *(undefined4 *)(lVar4 + 0xa8) = 0;
          }
        }
        else {
          (**(code **)(*plVar5 + 0x30))(plVar5,plVar1);
        }
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar6 = FMemory::Realloc(plVar5,0,0);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
      iStack_30 = 0;
      local_38 = FUN_1405a0750;
      plVar1 = (longlong *)(lVar4 + 0xb0);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_38._4_4_;
        *(int *)(plVar5 + 3) = iStack_30;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_2c;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar6;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
      }
      if (&local_38 != plVar1) {
        if (plVar5 == (longlong *)0x0) {
          if ((*(int *)(lVar4 + 0xb8) != 0) &&
             (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x28))(plVar2,0);
            if (*plVar1 != 0) {
              lVar6 = FMemory::Realloc(*plVar1,0,0);
              *plVar1 = lVar6;
            }
            *(undefined4 *)(lVar4 + 0xb8) = 0;
          }
        }
        else {
          (**(code **)(*plVar5 + 0x30))(plVar5,plVar1);
        }
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar6 = FMemory::Realloc(plVar5,0,0);
        if (lVar6 != 0) {
          FMemory::Free(lVar6);
        }
      }
      *(undefined1 *)(lVar4 + 0x61) = *(undefined1 *)(param_1 + 0x310);
      *(undefined1 *)(lVar4 + 0x60) = *(undefined1 *)(param_1 + 0x430);
      *(undefined1 *)(lVar4 + 0x62) = *(undefined1 *)(param_1 + 0x311);
      *(undefined4 *)(lVar4 + 100) = *(undefined4 *)(param_1 + 0x314);
      FUN_1405b0f30(param_1);
      if ((*(longlong *)(param_1 + 0x300) != 0) && (*(longlong *)(param_1 + 0x308) != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x308) + 0x10))
                  (*(longlong **)(param_1 + 0x308),param_1);
      }
      if (0 < *(int *)(param_1 + 0x3a8) - *(int *)(param_1 + 0x3d4)) {
        local_48 = (void *)0x0;
        local_40 = 0;
        TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
        GenerateKeyArray<TSizedDefaultAllocator<32>_>(param_1 + 0x3a0,&local_48);
        _Src = local_48;
        lVar6 = (longlong)(int)local_40;
        local_38 = (code *)0x0;
        iStack_30 = (int)local_40;
        if ((int)local_40 == 0) {
          uStack_2c = 0;
        }
        else {
          TArray<int,FDefaultAllocator>::ResizeForCopy(&local_38,local_40 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar6 << 2);
        }
        FUN_1405a4000(lVar3,param_1,&local_38);
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
      }
      FUN_1405a53f0(lVar4);
    }
  }
  if (*param_2 != 0) {
    FUN_1405a53f0();
    *param_2 = 0;
  }
  return;
}



// FUNCTION 1405ad330 FUN_1405ad330 body=463 status=ok
// SIG undefined FUN_1405ad330(void)

void FUN_1405ad330(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  IAkFileLocationResolver *pIVar3;
  long lVar4;
  
  if (DAT_1468536c5 == '\x01') {
    FUN_1405978e0(0);
    if (DAT_146853710 != (longlong *)0x0) {
      (**(code **)(*DAT_146853710 + 0x10))();
      (**(code **)(*(longlong *)DAT_146853710[0x1084] + 0x10))();
      (**(code **)(*DAT_146853718 + 0x20))();
      plVar1 = DAT_146853718;
      DAT_146853718 = (longlong *)0x0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,1);
      }
      plVar1 = DAT_146853710;
      DAT_146853710 = (longlong *)0x0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,1);
      }
    }
    if (*(longlong *)(param_1 + 0x210) != 0) {
      *(longlong *)(param_1 + 0x210) = 0;
      FUN_1405919f0();
    }
    FUN_1405adce0(param_1 + 0x1e8,*(undefined8 *)(param_1 + 0x1f8));
    AK::SoundEngine::UnregisterGameObj(*(__uint64 *)(param_1 + 0x1f0));
    AK::SoundEngine::UnregisterGlobalCallback(FUN_140595060,4);
    FUN_140483870(&DAT_146535808,param_1);
    lVar4 = 0x465357a8;
    FUN_140483870(&DAT_1465357a8,param_1);
    AK::MemoryMgr::StartProfileThreadUsage(lVar4);
    bVar2 = AK::SoundEngine::IsInitialized();
    if (bVar2) {
      AK::SoundEngine::Term();
    }
    AK::SoundEngine::UnregisterAudioDeviceStatusCallback();
    if (DAT_146853918 != 0) {
      FUN_1415b5910();
      DAT_146853918 = 0;
    }
    pIVar3 = AK::StreamMgr::GetFileLocationResolver();
    if (pIVar3 == (IAkFileLocationResolver *)&PTR_PTR_1461fd038) {
      AK::StreamMgr::SetFileLocationResolver((IAkFileLocationResolver *)0x0);
    }
    AK::StreamMgr::DestroyDevice(DAT_1461fd05c);
    if (AK::IAkStreamMgr::m_pStreamMgr != (IAkStreamMgr *)0x0) {
      (**(code **)(*(longlong *)AK::IAkStreamMgr::m_pStreamMgr + 8))();
    }
    AK::MemoryMgr::Term();
    plVar1 = DAT_1468536d0;
    if (DAT_1468536d0 != (longlong *)0x0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)(DAT_1468536d0 + 4));
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(plVar1,0x48);
      DAT_1468536d0 = (longlong *)0x0;
    }
    DAT_1468536c5 = '\0';
  }
  FUN_140483870(&DAT_146535808,param_1);
  return;
}



// FUNCTION 1405ad500 FUN_1405ad500 body=533 status=ok
// SIG undefined FUN_1405ad500(void)

void FUN_1405ad500(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  LARGE_INTEGER local_res8;
  
  fVar10 = (float)param_2;
  uVar11 = (undefined4)((ulonglong)param_2 >> 0x20);
  FUN_142357eb0();
  if (*(longlong *)(param_1 + 0x378) == 0) {
    FUN_1405a0750(param_1);
    return;
  }
  QueryPerformanceCounter(&local_res8);
  dVar4 = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
  if (0.0 < *(double *)(param_1 + 0x3f8)) {
    fVar10 = (float)(dVar4 - *(double *)(param_1 + 0x3f8));
    uVar11 = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x378);
  *(double *)(param_1 + 0x3f8) = dVar4;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1;
  }
  plVar8 = (longlong *)0x0;
  if (((*(longlong *)(param_1 + 0x380) != 0) && (*(longlong *)(param_1 + 0x388) != 0)) ||
     (bVar5 = false, *(char *)(param_1 + 0x400) != '\0')) {
    bVar5 = false;
    if ((*(longlong *)(param_1 + 0x380) == 0) ||
       (plVar7 = *(longlong **)(param_1 + 0x388), plVar7 == (longlong *)0x0)) {
      FUN_1405b0f30(param_1);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x378);
      lVar3 = *plVar7;
      uVar9 = FUN_14059ca00();
      cVar6 = (**(code **)(lVar3 + 0x10))(plVar7,param_1,uVar9,lVar2 + 0x120);
      if (cVar6 == '\0') {
        FUN_14059e780(param_1);
      }
      else {
        plVar7 = plVar8;
        if (*(longlong *)(param_1 + 0x380) != 0) {
          plVar7 = *(longlong **)(param_1 + 0x388);
        }
        (**(code **)(*plVar7 + 0x18))(plVar7,param_1);
        FUN_1405b0f30(param_1);
        bVar5 = true;
      }
    }
  }
  cVar6 = *(char *)(param_1 + 0x401);
  if (cVar6 != '\0') goto LAB_1405ad6cf;
  if ((*(longlong *)(param_1 + 0x300) == 0) || (*(longlong *)(param_1 + 0x308) == 0)) {
LAB_1405ad6b2:
    FUN_1405b1ab0(param_1,CONCAT44(uVar11,fVar10));
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x308) + 0x18))(*(longlong **)(param_1 + 0x308),param_1);
    if (*(longlong *)(param_1 + 0x300) != 0) {
      plVar8 = *(longlong **)(param_1 + 0x308);
    }
    cVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
    if (cVar6 == '\0') goto LAB_1405ad6b2;
  }
  FUN_1405ae630(lVar1,dVar4);
  cVar6 = *(char *)(param_1 + 0x401);
LAB_1405ad6cf:
  if ((cVar6 != '\0') || ((!bVar5 && (*(char *)(lVar1 + 0xf8) == '\0')))) {
    FUN_14059e780(param_1);
  }
  if (lVar1 != 0) {
    FUN_1405a53f0(lVar1);
  }
  return;
}



// FUNCTION 1405ad720 FUN_1405ad720 body=87 status=ok
// SIG undefined FUN_1405ad720(void)

void FUN_1405ad720(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x530) != '\0') {
    FUN_140597570();
    lVar1 = *(longlong *)(param_1 + 0x460);
    if (lVar1 != 0) {
      FUN_1405acdf0(lVar1);
      *(undefined8 *)(lVar1 + 0x2d0) = 0;
    }
    *(undefined1 *)(param_1 + 0x530) = 0;
    return;
  }
  FUN_1405aba50();
  return;
}



// FUNCTION 1405ad780 FUN_1405ad780 body=147 status=ok
// SIG undefined FUN_1405ad780(void)

void FUN_1405ad780(void *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_1468b616c != '\0') {
    return;
  }
  if (DAT_1468536c6 != '\0') {
    return;
  }
  if (DAT_1468536c5 == '\0') {
    return;
  }
  if (DAT_1468536c8 == 0) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x50);
  if (iVar1 == 1) {
    AK::SoundEngine::CancelBankCallbackCookie(param_1);
    if (*(int *)((longlong)param_1 + 0x50) == 1) {
      LOCK();
      bVar2 = *(int *)((longlong)param_1 + 0x54) == 0;
      if (bVar2) {
        *(int *)((longlong)param_1 + 0x54) = 0;
      }
      UNLOCK();
      if (bVar2) {
        *(undefined4 *)((longlong)param_1 + 0x50) = 2;
      }
      else {
        LOCK();
        iVar1 = *(int *)((longlong)param_1 + 0x54);
        if (iVar1 == 0) {
          *(int *)((longlong)param_1 + 0x54) = 0;
          iVar1 = 0;
        }
        UNLOCK();
        if (iVar1 == -1) {
          *(undefined4 *)((longlong)param_1 + 0x50) = 0;
        }
      }
    }
    iVar1 = *(int *)((longlong)param_1 + 0x50);
    if (iVar1 != 2) goto LAB_1405ad805;
  }
  if (iVar1 == 0) {
    return;
  }
  AK::SoundEngine::UnloadBank
            (*(ulong *)((longlong)param_1 + 0x28),(void *)0x0,
             (_func_void_ulong_void_ptr_AKRESULT_long_void_ptr *)0x0,(void *)0x0);
LAB_1405ad805:
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  return;
}



// FUNCTION 1405ad820 FUN_1405ad820 body=10 status=ok
// SIG undefined FUN_1405ad820(void)

void FUN_1405ad820(void *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  if (DAT_1468b616c != '\0') {
    return;
  }
  if (DAT_1468536c6 != '\0') {
    return;
  }
  if (DAT_1468536c5 == '\0') {
    return;
  }
  if (DAT_1468536c8 == 0) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x50);
  if (iVar1 == 1) {
    AK::SoundEngine::CancelBankCallbackCookie(param_1);
    if (*(int *)((longlong)param_1 + 0x50) == 1) {
      LOCK();
      bVar2 = *(int *)((longlong)param_1 + 0x54) == 0;
      if (bVar2) {
        *(int *)((longlong)param_1 + 0x54) = 0;
      }
      UNLOCK();
      if (bVar2) {
        *(undefined4 *)((longlong)param_1 + 0x50) = 2;
      }
      else {
        LOCK();
        iVar1 = *(int *)((longlong)param_1 + 0x54);
        if (iVar1 == 0) {
          *(int *)((longlong)param_1 + 0x54) = 0;
          iVar1 = 0;
        }
        UNLOCK();
        if (iVar1 == -1) {
          *(undefined4 *)((longlong)param_1 + 0x50) = 0;
        }
      }
    }
    iVar1 = *(int *)((longlong)param_1 + 0x50);
    if (iVar1 != 2) goto LAB_1405ad805;
  }
  if (iVar1 == 0) {
    return;
  }
  AK::SoundEngine::UnloadBank
            (*(ulong *)((longlong)param_1 + 0x28),(void *)0x0,
             (_func_void_ulong_void_ptr_AKRESULT_long_void_ptr *)0x0,(void *)0x0);
LAB_1405ad805:
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  return;
}



// FUNCTION 1405ad830 FUN_1405ad830 body=120 status=ok
// SIG undefined FUN_1405ad830(void)

void FUN_1405ad830(longlong param_1,longlong param_2)

{
  BOOL BVar1;
  longlong local_res10 [3];
  
  if ((param_2 != 0) && (DAT_1468536c5 != '\0')) {
    local_res10[0] = param_2;
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
    }
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x1a8,local_res10);
    TArray<FName,FDefaultAllocator>::Remove(param_1 + 0x1b8,local_res10);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
  }
  return;
}



// FUNCTION 1405ad8b0 FUN_1405ad8b0 body=578 status=ok
// SIG undefined FUN_1405ad8b0(void)

void FUN_1405ad8b0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  BOOL BVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  uint *puVar11;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  }
  uStack_84 = 1;
  plVar9 = (longlong *)(param_1 + 0xd0);
  uVar2 = *(uint *)(param_1 + 0xf8);
  puVar1 = (uint *)(param_1 + 0xe0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar11 = *(uint **)(param_1 + 0xf0);
    if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar3 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar4) goto LAB_1405ad9ad;
      uVar3 = puVar11[lVar8 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_1405ad9ad:
      uStack_74 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0xf8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar3 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar9;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar3;
  if (uVar3 != uVar2) {
    puVar11 = *(uint **)(param_1 + 0xf0);
    if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar7 = puVar11[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar6 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_1405ada73;
      uVar7 = puVar11[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar10 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_1405ada73:
      uStack_74 = uVar2;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    FUN_1405a5e30((longlong)(int)uStack_4c * 0x60 + *plVar9 + 8,param_2);
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x0001405adaeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  return;
}



// FUNCTION 1405adb00 FUN_1405adb00 body=94 status=ok
// SIG undefined FUN_1405adb00(void)

void FUN_1405adb00(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong local_18;
  longlong local_10;
  
  if (param_2 != 0) {
    uVar1 = FUN_1405b9b40();
    local_10 = UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    if ((local_10 != 0) && (*(longlong *)(param_1 + 0x210) != 0)) {
      local_18 = param_2;
      FUN_1405adb60(*(longlong *)(param_1 + 0x210),&local_18);
    }
  }
  return;
}



// FUNCTION 1405adb60 FUN_1405adb60 body=380 status=ok
// SIG undefined FUN_1405adb60(void)

void FUN_1405adb60(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  if ((*param_2 != 0) && (param_2[1] != 0)) {
    FUN_140596e90();
    lVar9 = (longlong)*(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) != 0) {
      lVar5 = **(longlong **)(param_1 + 0x10);
      iVar10 = 0;
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (*(longlong **)(param_1 + 0x10))[1];
      }
      if (*param_2 == 0) {
        lVar1 = 0;
      }
      else {
        lVar1 = param_2[1];
      }
      if ((lVar4 == lVar1) && (lVar5 == *param_2)) {
        bVar6 = 0;
      }
      else {
        bVar6 = 1;
      }
      lVar5 = 0;
      iVar7 = 0;
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar7 + 1;
        if (lVar5 < lVar9) {
          plVar2 = (longlong *)(lVar5 * 0x10 + *(longlong *)(param_1 + 0x10));
          do {
            if (*plVar2 == 0) {
              lVar4 = 0;
            }
            else {
              lVar4 = plVar2[1];
            }
            if (*param_2 == 0) {
              lVar1 = 0;
            }
            else {
              lVar1 = param_2[1];
            }
            if ((lVar4 == lVar1) && (*plVar2 == *param_2)) {
              bVar3 = 0;
            }
            else {
              bVar3 = 1;
            }
            if (bVar6 != bVar3) break;
            iVar8 = iVar8 + 1;
            lVar5 = lVar5 + 1;
            plVar2 = plVar2 + 2;
          } while (lVar5 < lVar9);
        }
        if (bVar6 != 0) {
          if (iVar10 != iVar7) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar10 * 0x10 + *(longlong *)(param_1 + 0x10)),
                       (void *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x10)),
                       (longlong)(iVar8 - iVar7) << 4);
          }
          iVar10 = iVar10 + (iVar8 - iVar7);
        }
        bVar6 = bVar6 ^ 1;
        iVar7 = iVar8;
      } while (lVar5 < lVar9);
      *(int *)(param_1 + 0x18) = iVar10;
    }
  }
  return;
}



// FUNCTION 1405adce0 FUN_1405adce0 body=251 status=ok
// SIG undefined FUN_1405adce0(void)

void FUN_1405adce0(longlong param_1,__uint64 param_2)

{
  __uint64 *p_Var1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (param_2 != 0xffffffffffffffff) {
    AK::SoundEngine::UnregisterGameObj(param_2);
    lVar2 = (longlong)*(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar6 = 0;
      bVar7 = **(__uint64 **)(param_1 + 0x18) != param_2;
      lVar3 = 0;
      iVar4 = 0;
      do {
        lVar3 = lVar3 + 1;
        iVar5 = iVar4 + 1;
        if (lVar3 < lVar2) {
          p_Var1 = (__uint64 *)(*(longlong *)(param_1 + 0x18) + lVar3 * 8);
          do {
            if (bVar7 != (*p_Var1 != param_2)) break;
            iVar5 = iVar5 + 1;
            lVar3 = lVar3 + 1;
            p_Var1 = p_Var1 + 1;
          } while (lVar3 < lVar2);
        }
        if (bVar7 != false) {
          if (iVar6 != iVar4) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar6 * 8),
                       (void *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 8),
                       (longlong)(iVar5 - iVar4) << 3);
          }
          iVar6 = iVar6 + (iVar5 - iVar4);
        }
        bVar7 = (bool)(bVar7 ^ 1);
        iVar4 = iVar5;
      } while (lVar3 < lVar2);
      *(int *)(param_1 + 0x20) = iVar6;
    }
  }
  return;
}



// FUNCTION 1405adde0 FUN_1405adde0 body=509 status=ok
// SIG undefined FUN_1405adde0(void)

void FUN_1405adde0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  BOOL BVar2;
  int iVar3;
  __uint64 _Var4;
  longlong lVar5;
  longlong lVar6;
  __uint64 *p_Var7;
  __uint64 *p_Var8;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  }
  if ((*(longlong *)(param_1 + 0x1e8) != 0) && (param_2 != (longlong *)0x0)) {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Remove
              (*(longlong *)(param_1 + 0x1e8) + 0x130,param_2);
    _Var4 = (**(code **)(*param_2 + 0x548))(param_2);
    AK::SoundEngine::UnregisterGameObj(_Var4);
    FWeakObjectPtr::operator=(&local_res8,param_2);
    local_res18[0] = local_res8;
    TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Remove(*(longlong *)(param_1 + 0x1e8) + 0x80,local_res18);
    FUN_1405ae740(param_1 + 0x1e8);
    FUN_14059fa50(*(undefined8 *)(param_1 + 0x1e8));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  lVar1 = *(longlong *)(param_1 + 0x210);
  if (lVar1 != 0) {
    lVar5 = (**(code **)(*param_2 + 0x548))(param_2);
    BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
    if (BVar2 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
    }
    if (*(int *)(lVar1 + 0x88) != *(int *)(lVar1 + 0xb4)) {
      lVar6 = *(longlong *)(lVar1 + 0xc0);
      if (*(longlong *)(lVar1 + 0xc0) == 0) {
        lVar6 = lVar1 + 0xb8;
      }
      iVar3 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) * 0x17 + (int)lVar5) &
                               (longlong)*(int *)(lVar1 + 200) - 1U) * 4);
      if (iVar3 != -1) {
        lVar6 = *(longlong *)(lVar1 + 0x80);
        do {
          p_Var7 = (__uint64 *)(lVar6 + (longlong)iVar3 * 0x18);
          if (*(longlong *)(lVar6 + (longlong)iVar3 * 0x18) == lVar5) {
            if (iVar3 != -1) goto LAB_1405adf43;
            break;
          }
          iVar3 = (int)p_Var7[2];
        } while (iVar3 != -1);
      }
    }
    p_Var7 = (__uint64 *)0x0;
LAB_1405adf43:
    p_Var8 = p_Var7 + 1;
    if (p_Var7 == (__uint64 *)0x0) {
      p_Var8 = (__uint64 *)0x0;
    }
    if (p_Var8 != (__uint64 *)0x0) {
      AK::SoundEngine::SendPluginCustomGameData(DAT_14685385c,*p_Var8,6,0x40,0xbbb,(void *)0x0,0);
      FUN_1405adce0(*(longlong *)(lVar1 + 8) + 0x1e8,*p_Var8);
    }
    TSet<TTuple<unsigned___int64,FVulkanShader_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanShader_*,0>,FDefaultSetAllocator>
    ::Remove((longlong *)(lVar1 + 0x80),lVar5);
    FUN_1405a5cc0(lVar1 + 0x120,lVar5);
    FUN_1405a5f90(lVar1 + 0xd0,lVar5);
    FUN_1405af2e0(lVar1,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  }
  return;
}



// FUNCTION 1405adfe0 FUN_1405adfe0 body=206 status=ok
// SIG undefined FUN_1405adfe0(void)

void FUN_1405adfe0(int param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  int iVar2;
  BOOL BVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar4 = (longlong *)FUN_1405ac530();
  lVar5 = 0;
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar7 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar7 = plVar4 + 7;
    }
    iVar2 = *(int *)((longlong)plVar7 + ((longlong)(int)plVar4[9] - 1U & (longlong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *plVar4;
      do {
        lVar8 = (longlong)iVar2;
        if (*(int *)(lVar1 + lVar8 * 0x18) == param_1) {
          lVar5 = 0;
          if ((iVar2 != -1) && (lVar1 = lVar1 + lVar8 * 0x18, lVar1 != 0)) {
            lVar5 = *(longlong *)(lVar1 + 8);
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + lVar8 * 0x18);
      } while (iVar2 != -1);
    }
  }
  if (lVar5 == param_2) {
    lVar5 = FUN_1405ac530();
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar5 + 0x50);
    BVar3 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar3 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    uVar6 = FUN_1405ac530();
    TSet<TTuple<int,UHomeItem_*>,TDefaultMapHashableKeyFuncs<int,UHomeItem_*,0>,FDefaultSetAllocator>
    ::Remove(uVar6,param_1);
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1405ae0b0 FUN_1405ae0b0 body=120 status=ok
// SIG undefined FUN_1405ae0b0(void)

void FUN_1405ae0b0(longlong param_1,undefined8 param_2)

{
  BOOL BVar1;
  undefined8 local_res8;
  undefined8 local_res18;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 600));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 600));
  }
  FWeakObjectPtr::operator=(&local_res8,param_2);
  local_res18 = local_res8;
  TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,FDefaultAllocator>,0>,FDefaultSetAllocator>
  ::Remove(param_1 + 0x280,&local_res18);
                    /* WARNING: Could not recover jumptable at 0x0001405ae121. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 600));
  return;
}



// FUNCTION 1405ae130 FUN_1405ae130 body=1266 status=ok
// SIG undefined FUN_1405ae130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1405ae130(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  float fVar2;
  longlong *plVar3;
  char cVar4;
  BOOL BVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  LARGE_INTEGER local_res8;
  double local_res18 [2];
  longlong local_58;
  double *local_50;
  
  BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  if (BVar5 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  }
  *(undefined4 *)(param_1 + 0x1d4) = param_2;
  if (DAT_1468536c5 != '\0') {
    uVar12 = 0;
    LOCK();
    bVar17 = DAT_1461fd06c == 0;
    if (bVar17) {
      DAT_1461fd06c = 0;
    }
    UNLOCK();
    if (!bVar17) {
      LOCK();
      DAT_1461fd06c = 0;
      UNLOCK();
      FUN_1405a88f0(param_1);
    }
    FUN_1405978e0(1);
    if (*(longlong *)(param_1 + 0x210) != 0) {
      FUN_1405b2e10();
    }
    if (DAT_1468536d0 != 0) {
      FUN_1405a36f0();
    }
    FUN_14059a7c0(param_1);
    AK::SoundEngine::RenderAudio(true);
    if (DAT_1468536c5 != '\0') {
      fVar19 = DAT_1464a97d8 * 100.0;
      if (*(char *)(param_1 + 0x1c8) != '\0') {
        fVar19 = 0.0;
      }
      fVar2 = *(float *)(param_1 + 0x1cc);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146853a98) &&
         (_Init_thread_header(&DAT_146853a98), DAT_146853a98 == -1)) {
        DAT_146853a94 = AK::SoundEngine::GetIDFromString("Master_Volume");
        _Init_thread_footer(&DAT_146853a98);
      }
      AK::SoundEngine::SetRTPCValue(DAT_146853a94,fVar19 * fVar2,0xffffffffffffffff,0,4,false);
    }
    FUN_1405b1fc0(param_1 + 0x1e8);
    bVar17 = false;
    DAT_1461fd024 = DAT_1461fd024 + 1;
    lVar14 = (longlong)(DAT_1461fd018 + -1);
    if (-1 < DAT_1461fd018 + -1) {
      lVar8 = lVar14 << 4;
      bVar17 = false;
      do {
        if (((*(int *)(lVar8 + 8 + DAT_1461fd010) == 0) ||
            (plVar7 = *(longlong **)(lVar8 + DAT_1461fd010), plVar7 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar7 + 0x40))(plVar7,param_1 + 0x130), cVar4 == '\0')) {
          bVar17 = true;
        }
        lVar8 = lVar8 + -0x10;
        lVar14 = lVar14 + -1;
      } while (-1 < lVar14);
    }
    iVar16 = DAT_1461fd018;
    DAT_1461fd024 = DAT_1461fd024 + -1;
    if ((bVar17) && (DAT_1461fd024 < 1)) {
      uVar9 = uVar12;
      uVar15 = uVar12;
      if (0 < DAT_1461fd018) {
        do {
          if (((*(int *)(uVar9 + 8 + DAT_1461fd010) == 0) ||
              (*(longlong **)(uVar9 + DAT_1461fd010) == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(**(longlong **)(uVar9 + DAT_1461fd010) + 0x10))(), cVar4 != '\0')
             ) {
            TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(&DAT_1461fd010,uVar15,1,1);
          }
          else {
            uVar15 = (ulonglong)((int)uVar15 + 1);
            uVar9 = uVar9 + 0x10;
          }
        } while ((int)uVar15 < DAT_1461fd018);
      }
      _DAT_1461fd020 = DAT_1461fd018 * 2;
      if (_DAT_1461fd020 < 3) {
        _DAT_1461fd020 = 2;
      }
      if ((_DAT_1461fd020 < iVar16) && (DAT_1461fd01c != DAT_1461fd018)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_1461fd010);
      }
    }
    BVar5 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
    if (BVar5 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
    }
    plVar7 = *(longlong **)(param_1 + 0x1b8);
    uVar9 = (longlong)*(int *)(param_1 + 0x1c0) & 0x1fffffffffffffff;
    if (plVar7 + *(int *)(param_1 + 0x1c0) < plVar7) {
      uVar9 = uVar12;
    }
    if (uVar9 != 0) {
      do {
        lVar14 = *plVar7;
        if (lVar14 != 0) {
          plVar1 = (longlong *)(param_1 + 0x1a8);
          plVar3 = (longlong *)*plVar1;
          iVar16 = *(int *)(param_1 + 0x1b0);
          for (plVar6 = plVar3; plVar6 != plVar3 + iVar16; plVar6 = plVar6 + 1) {
            if (*plVar6 == lVar14) {
              if ((int)((longlong)plVar6 - (longlong)plVar3 >> 3) != -1) goto LAB_1405ae42e;
              break;
            }
          }
          *(int *)(param_1 + 0x1b0) = iVar16 + 1;
          if (*(int *)(param_1 + 0x1b4) < iVar16 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
          }
          *(longlong *)(*plVar1 + (longlong)iVar16 * 8) = lVar14;
        }
LAB_1405ae42e:
        plVar7 = plVar7 + 1;
        uVar12 = uVar12 + 1;
      } while (uVar12 != uVar9);
    }
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x1c4)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1b8,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x180));
    FUN_1405b44e0(param_1);
    FUN_1405b2460(param_1 + 0x50);
    QueryPerformanceCounter(&local_res8);
    lVar14 = (longlong)*(int *)(param_1 + 0x230);
    local_res18[0] = (double)local_res8.QuadPart * DAT_1468b02f8 + 16777216.0;
    if (*(int *)(param_1 + 0x230) != 0) {
      iVar16 = 0;
      if (**(longlong **)(param_1 + 0x228) == 0) {
        bVar17 = false;
      }
      else {
        bVar17 = *(longlong *)(**(longlong **)(param_1 + 0x228) + 0xe0) != 0;
      }
      lVar8 = 0;
      iVar10 = 0;
      do {
        lVar8 = lVar8 + 1;
        iVar11 = iVar10 + 1;
        if (lVar8 < lVar14) {
          plVar7 = (longlong *)(*(longlong *)(param_1 + 0x228) + lVar8 * 8);
          do {
            bVar18 = false;
            if (*plVar7 != 0) {
              bVar18 = *(longlong *)(*plVar7 + 0xe0) != 0;
            }
            if (bVar17 != bVar18) break;
            iVar11 = iVar11 + 1;
            lVar8 = lVar8 + 1;
            plVar7 = plVar7 + 1;
          } while (lVar8 < lVar14);
        }
        iVar13 = iVar11 - iVar10;
        if (bVar17 == false) {
          plVar7 = (longlong *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar10 * 8);
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            if (*plVar7 != 0) {
              FUN_1405a53f0();
              *plVar7 = 0;
            }
            plVar7 = plVar7 + 1;
          }
        }
        else {
          if (iVar16 != iVar10) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar16 * 8),
                       (void *)(*(longlong *)(param_1 + 0x228) + (longlong)iVar10 * 8),
                       (longlong)iVar13 << 3);
          }
          iVar16 = iVar16 + iVar13;
        }
        bVar17 = (bool)(bVar17 ^ 1);
        iVar10 = iVar11;
      } while (lVar8 < lVar14);
      *(int *)(param_1 + 0x230) = iVar16;
    }
    local_50 = local_res18;
    local_58 = param_1 + 0x218;
    FUN_14058eea0(param_1 + 0x218,&local_58);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  return 1;
}



// FUNCTION 1405ae630 FUN_1405ae630 body=109 status=ok
// SIG undefined FUN_1405ae630(void)

void FUN_1405ae630(longlong param_1,double param_2)

{
  double dVar1;
  
  if (((*(longlong *)(param_1 + 0xd0) != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
     (*(char *)(param_1 + 0xd8) == '\0')) {
    dVar1 = *(double *)(param_1 + 0x130);
    *(double *)(param_1 + 0x130) = param_2;
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      FUN_1405ae6a0();
      FUN_1405a06e0(param_1);
      return;
    }
    FUN_1405b1860(SUB84(param_2,0),param_2 - dVar1);
    FUN_1405ae6a0(param_1);
    return;
  }
  return;
}



// FUNCTION 1405ae6a0 FUN_1405ae6a0 body=150 status=ok
// SIG undefined FUN_1405ae6a0(void)

void FUN_1405ae6a0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  char cVar3;
  float fVar4;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    fVar4 = (float)FUN_14059ca00();
    if (*(float *)(param_1 + 300) <= fVar4 * fVar4) {
      cVar3 = '\x01';
      goto LAB_1405ae6dd;
    }
  }
  cVar3 = '\0';
LAB_1405ae6dd:
  *(char *)(param_1 + 0xf8) = cVar3;
  if (((cVar3 != cVar1) && (*(int *)(param_1 + 0xa8) != 0)) &&
     (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0xa8) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0xa0);
      }
      (**(code **)(*plVar2 + 0x40))(plVar2,cVar3);
    }
  }
  return;
}



// FUNCTION 1405ae740 FUN_1405ae740 body=825 status=ok
// SIG undefined FUN_1405ae740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1405ae740(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  __uint64 _Var11;
  ulonglong uVar12;
  __uint64 *p_Var13;
  uint uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  __uint64 *p_Var17;
  __uint64 *p_Var18;
  uint uVar19;
  __uint64 *p_Var20;
  uint *puVar21;
  undefined1 auStack_e8 [32];
  uint local_c8;
  uint uStack_c4;
  uint *puStack_c0;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  uint *local_98;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  longlong *local_80;
  undefined8 uStack_78;
  uint *puStack_70;
  uint uStack_68;
  uint uStack_64;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  puVar16 = auStack_e8;
  local_38 = DAT_1468387a8 ^ (ulonglong)&local_c8;
  lVar5 = *param_1;
  p_Var20 = (__uint64 *)0x0;
  lVar10 = (longlong)(*(int *)(lVar5 + 0x138) - *(int *)(lVar5 + 0x164)) * 8;
  p_Var17 = p_Var20;
  if (lVar10 != 0) {
    uVar12 = lVar10 + 0x1e;
    if (uVar12 <= lVar10 + 0xfU) {
      uVar12 = 0xffffffffffffff0;
    }
    puVar16 = auStack_e8 + -(uVar12 & 0xfffffffffffffff0);
    p_Var17 = (__uint64 *)((longlong)&puStack_c0 + -(uVar12 & 0xfffffffffffffff0));
  }
  plVar1 = (longlong *)(lVar5 + 0x130);
  local_48 = (undefined1 *)0x0;
  puVar2 = (uint *)(lVar5 + 0x140);
  local_40 = 0;
  uVar3 = *(uint *)(lVar5 + 0x158);
  local_c8 = 0;
  uStack_c4 = 1;
  uStack_b4 = 0;
  uStack_b0 = 0;
  if (uVar3 != 0) {
    puVar21 = *(uint **)(lVar5 + 0x150);
    if (*(uint **)(lVar5 + 0x150) == (uint *)0x0) {
      puVar21 = puVar2;
    }
    uVar4 = *puVar21;
    p_Var13 = p_Var20;
    p_Var18 = p_Var20;
    while (uVar4 == 0) {
      iVar9 = (int)p_Var13;
      uStack_b0 = (int)p_Var18 + 0x20;
      p_Var18 = (__uint64 *)(ulonglong)uStack_b0;
      local_c8 = iVar9 + 1;
      p_Var13 = (__uint64 *)(ulonglong)local_c8;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1405ae89c;
      uVar4 = puVar21[(longlong)iVar9 + 1];
    }
    uStack_c4 = -uVar4 & uVar4;
    iVar9 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_b4 = (uStack_b0 - iVar9) + 0x1f;
    if ((int)uVar3 < (int)uStack_b4) {
LAB_1405ae89c:
      uStack_b4 = uVar3;
    }
  }
  uVar4 = *(uint *)(lVar5 + 0x158);
  uStack_90 = 0xffffffff;
  uStack_8c = uStack_b4;
  local_88 = CONCAT44(uStack_ac,uStack_b0);
  uStack_78 = CONCAT44(uStack_c4,local_c8);
  local_b8 = -1 << ((byte)uVar4 & 0x1f);
  uVar19 = uVar4 & 0xffffffe0;
  uStack_a0 = local_c8;
  uStack_9c = uStack_c4;
  puStack_c0 = puVar2;
  uStack_b4 = uVar4;
  local_98 = puVar2;
  local_80 = plVar1;
  puStack_70 = puVar2;
  uStack_60 = local_88;
  local_a8 = plVar1;
  uStack_68 = uStack_90;
  uStack_64 = uStack_8c;
  if (uVar4 != uVar3) {
    puVar21 = *(uint **)(lVar5 + 0x150);
    if (*(uint **)(lVar5 + 0x150) == (uint *)0x0) {
      puVar21 = puVar2;
    }
    uVar14 = puVar21[(int)uVar4 >> 5] & local_b8;
    iVar9 = (int)uVar4 >> 5;
    while (uVar14 == 0) {
      uVar19 = uVar19 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar9) goto LAB_1405ae964;
      uVar14 = puVar21[(longlong)iVar9 + 1];
      local_b8 = 0xffffffff;
      iVar9 = iVar9 + 1;
    }
    uVar14 = -uVar14 & uVar14;
    iVar9 = 0x1f;
    if (uVar14 != 0) {
      for (; uVar14 >> iVar9 == 0; iVar9 = iVar9 + -1) {
      }
    }
    if (uVar14 == 0) {
      iVar9 = 0x20;
    }
    else {
      iVar9 = 0x1f - iVar9;
    }
    uStack_b4 = (uVar19 - iVar9) + 0x1f;
    uVar4 = uStack_b4;
    if ((int)uVar3 < (int)uStack_b4) {
LAB_1405ae964:
      uStack_b4 = uVar3;
      uVar4 = uVar3;
    }
  }
  do {
    if (((uStack_8c == uVar4) && (local_98 == puVar2)) && (local_a8 == plVar1)) {
      *(undefined8 *)(puVar16 + -8) = 0x1405aea33;
      AK::SoundEngine::SetDefaultListeners(p_Var17,(ulong)p_Var20);
      if (local_48 != (undefined1 *)0x0) {
        *(undefined8 *)(puVar16 + -8) = 0x1405aea44;
        FMemory::Free();
      }
      *(undefined8 *)(puVar16 + -8) = 0x1405aea53;
      return;
    }
    plVar6 = *(longlong **)(*local_a8 + (longlong)(int)uStack_8c * 0x10);
    lVar10 = plVar6[0x24];
    p_Var13 = p_Var20;
    if (lVar10 == 0) {
      *(undefined8 *)(puVar16 + -8) = 0x1405ae9aa;
      lVar10 = FUN_1423407b0(plVar6);
      if (lVar10 != 0) goto LAB_1405ae9af;
    }
    else {
LAB_1405ae9af:
      *(undefined8 *)(puVar16 + -8) = 0x1405ae9b7;
      cVar8 = UWorld::IsGameWorld(lVar10);
      uVar12 = local_40;
      if (cVar8 != '\0') {
        lVar10 = (longlong)(int)local_40;
        iVar9 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,iVar9);
        if (local_40._4_4_ < iVar9) {
          *(undefined8 *)(puVar16 + -8) = 0x1405ae9de;
          TArray<TArray<FMeshBatchAndRelevance,TMemStackAllocator<0>_>_*,TInlineAllocator<2,FDefaultAllocator>_>
          ::ResizeGrow(local_58,uVar12 & 0xffffffff);
        }
        puVar15 = local_58;
        if (local_48 != (undefined1 *)0x0) {
          puVar15 = local_48;
        }
        *(longlong **)(puVar15 + lVar10 * 8) = plVar6;
        pcVar7 = *(code **)(*plVar6 + 0x548);
        *(undefined8 *)(puVar16 + -8) = 0x1405aea08;
        _Var11 = (*pcVar7)(plVar6);
        p_Var13 = (__uint64 *)(ulonglong)((ulong)p_Var20 + 1);
        p_Var17[(longlong)p_Var20] = _Var11;
      }
    }
    uStack_90 = uStack_90 & ~uStack_9c;
    *(undefined8 *)(puVar16 + -8) = 0x1405aea23;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
    p_Var20 = p_Var13;
  } while( true );
}



// FUNCTION 1405aea80 FUN_1405aea80 body=2127 status=ok
// SIG undefined FUN_1405aea80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405aea80(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  __uint64 _Var3;
  bool bVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined *puVar10;
  int *piVar11;
  __uint64 _Var12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 *puVar15;
  int *piVar16;
  ulonglong uVar17;
  uint *puVar18;
  longlong *plVar19;
  int *piVar20;
  uint *puVar21;
  longlong *plVar22;
  longlong *plVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_218 [32];
  float *local_1f8;
  uint local_1e8;
  uint uStack_1e4;
  undefined4 *puStack_1e0;
  int local_1d8;
  int iStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  int local_1c8 [2];
  undefined8 *local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong local_198;
  longlong *local_190;
  longlong local_188;
  undefined8 local_180;
  undefined4 uStack_178;
  float fStack_174;
  undefined8 local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  uint uStack_158;
  uint uStack_154;
  undefined4 *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined4 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  float local_110;
  char local_10c;
  undefined1 local_108 [128];
  undefined1 *local_88;
  undefined8 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_80._0_4_ = 0;
  local_1a0 = *(longlong **)(param_2 + 0x110);
  if (*(longlong **)(param_2 + 0x110) == (longlong *)0x0) {
    local_1a0 = (longlong *)(param_2 + 0x100);
  }
  local_80 = 0;
  local_88 = (undefined1 *)0x0;
  local_190 = local_1a0 + *(int *)(param_2 + 0x118);
  local_1a8 = param_2;
  local_198 = param_1;
  if (local_1a0 != local_190) {
    uVar17 = (ulonglong)_tls_index;
    local_188 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar17 * 8);
    do {
      pvVar5 = ThreadLocalStoragePointer;
      plVar13 = (longlong *)*local_1a0;
      fVar26 = 1.0;
      local_1b8 = plVar13;
      if ((*(int *)(local_188 + 0x38) < DAT_146853cb0) &&
         (_Init_thread_header(&DAT_146853cb0), DAT_146853cb0 == -1)) {
        DAT_146853c60 = 0;
        _DAT_146853c68 = 0;
        DAT_146853c80 = (uint *)0x0;
        _DAT_146853c88 = 0;
        _DAT_146853c90 = 0xffffffff;
        DAT_146853c94 = 0;
        DAT_146853ca0 = (undefined *)0x0;
        DAT_146853ca8 = 0;
        atexit(FUN_143e3fd60);
        _Init_thread_footer(&DAT_146853cb0);
      }
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
                (&DAT_146853c60);
      local_1c0 = (undefined8 *)0x0;
      if (plVar13 != (longlong *)0x0) {
        lVar8 = (**(code **)(*plVar13 + 0x548))(plVar13);
        if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
          lVar9 = *(longlong *)(param_1 + 0xc0);
          if (*(longlong *)(param_1 + 0xc0) == 0) {
            lVar9 = param_1 + 0xb8;
          }
          iVar6 = *(int *)(lVar9 + ((longlong)((int)((ulonglong)lVar8 >> 0x20) * 0x17 + (int)lVar8)
                                   & (longlong)*(int *)(param_1 + 200) - 1U) * 4);
          if (iVar6 != -1) {
            do {
              lVar9 = *(longlong *)(param_1 + 0x80) + (longlong)iVar6 * 0x18;
              if (*(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar6 * 0x18) == lVar8) {
                if ((iVar6 != -1) && (lVar9 != 0)) {
                  local_1c0 = (undefined8 *)(lVar9 + 8);
                  goto LAB_1405aec92;
                }
                break;
              }
              iVar6 = *(int *)(lVar9 + 0x10);
            } while (iVar6 != -1);
          }
        }
        local_1c0 = (undefined8 *)0x0;
      }
LAB_1405aec92:
      lVar8 = local_1a8;
      plVar19 = *(longlong **)(param_1 + 0x20);
      fVar25 = 1.0;
      plVar23 = plVar19 + (longlong)*(int *)(param_1 + 0x28) * 2;
      if (plVar19 != plVar23) {
        lVar9 = *(longlong *)((longlong)pvVar5 + uVar17 * 8);
        plVar22 = local_1b8;
        fVar24 = fVar25;
        do {
          if ((*(int *)(lVar9 + 0x38) < DAT_146853cc8) &&
             (_Init_thread_header(&DAT_146853cc8), DAT_146853cc8 == -1)) {
            DAT_146853cb8 = (uint *)0x0;
            _DAT_146853cc0 = 0;
            atexit((_func_5014 *)&LAB_143e3fd40);
            _Init_thread_footer(&DAT_146853cc8);
          }
          lVar14 = _DAT_146853cc0;
          plVar13 = (longlong *)0x0;
          uVar2 = DAT_146853cc4;
          _DAT_146853cc0 = (ulonglong)DAT_146853cc4 << 0x20;
          if ((lVar14 < 0) && (uVar2 != 0)) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::
            ResizeTo(&DAT_146853cb8,0);
          }
          local_10c = '\0';
          if (*plVar19 != 0) {
            plVar13 = (longlong *)plVar19[1];
          }
          local_1f8 = &local_110;
          (**(code **)(*plVar13 + 0x20))(plVar13,lVar8,plVar22,&DAT_146853cb8);
          fVar25 = local_110;
          if (local_10c == '\0') {
            fVar25 = 1.0;
          }
          if (fVar24 <= fVar25) {
            fVar25 = fVar24;
          }
          puVar21 = DAT_146853cb8 + (longlong)DAT_146853cc0 * 3;
          plVar13 = local_1b8;
          param_1 = local_198;
          for (puVar18 = DAT_146853cb8; local_1b8 = plVar13, local_198 = param_1, puVar18 != puVar21
              ; puVar18 = puVar18 + 3) {
            if (DAT_146853c68 != DAT_146853c94) {
              puVar10 = DAT_146853ca0;
              if (DAT_146853ca0 == (undefined *)0x0) {
                puVar10 = &DAT_146853c98;
              }
              iVar6 = *(int *)(puVar10 + (longlong)(int)(DAT_146853ca8 - 1U & *puVar18) * 4);
              while (iVar6 != -1) {
                lVar14 = (longlong)iVar6;
                if (*(uint *)(DAT_146853c60 + lVar14 * 0x10) == *puVar18) {
                  if ((iVar6 != -1) && (lVar14 = DAT_146853c60 + lVar14 * 0x10, lVar14 != 0))
                  goto LAB_1405aee54;
                  break;
                }
                iVar6 = *(int *)(DAT_146853c60 + 8 + lVar14 * 0x10);
              }
            }
            local_1b0 = puVar18;
            FUN_14058d450(&DAT_146853c60,local_1c8,&local_1b0,0);
            lVar14 = (longlong)local_1c8[0] * 0x10 + DAT_146853c60;
LAB_1405aee54:
            fVar24 = (float)puVar18[1];
            if ((float)puVar18[1] <= *(float *)(lVar14 + 4)) {
              fVar24 = *(float *)(lVar14 + 4);
            }
            *(float *)(lVar14 + 4) = fVar24;
            if ((float)puVar18[2] <= fVar26) {
              fVar26 = (float)puVar18[2];
            }
            plVar22 = local_1b8;
            plVar13 = local_1b8;
            param_1 = local_198;
          }
          plVar19 = plVar19 + 2;
          local_10c = 0;
          fVar24 = fVar25;
        } while (plVar19 != plVar23);
      }
      uVar17 = local_80;
      if (local_1c0 != (undefined8 *)0x0) {
        local_180 = *local_1c0;
        lVar8 = (longlong)(int)(ulong)local_80;
        uStack_178 = DAT_14685385c;
        iVar6 = (ulong)local_80 + 1;
        local_80 = CONCAT44(local_80._4_4_,iVar6);
        fStack_174 = fVar25;
        if (local_80._4_4_ < iVar6) {
          TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>::
          ResizeGrow(local_108,uVar17 & 0xffffffff);
        }
        puVar15 = local_108;
        if (local_88 != (undefined1 *)0x0) {
          puVar15 = local_88;
        }
        *(undefined8 *)(puVar15 + lVar8 * 0x10) = local_180;
        *(ulonglong *)((longlong)(puVar15 + lVar8 * 0x10) + 8) = CONCAT44(fStack_174,uStack_178);
      }
      piVar20 = (int *)0x0;
      iVar6 = DAT_146853c88;
      puStack_1e0 = &DAT_146853c70;
      local_1e8 = 0;
      uStack_1e4 = 1;
      iStack_1d4 = 0;
      uStack_1d0 = 0;
      if (DAT_146853c88 != 0) {
        puVar21 = DAT_146853c80;
        if (DAT_146853c80 == (uint *)0x0) {
          puVar21 = &DAT_146853c70;
        }
        uVar2 = *puVar21;
        piVar16 = piVar20;
        piVar11 = piVar20;
        while (uVar2 == 0) {
          iVar7 = (int)piVar16;
          uStack_1d0 = (int)piVar11 + 0x20;
          piVar11 = (int *)(ulonglong)uStack_1d0;
          local_1e8 = iVar7 + 1;
          piVar16 = (int *)(ulonglong)local_1e8;
          if ((int)(DAT_146853c88 + -1 + (DAT_146853c88 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar7) {
            iStack_1d4 = DAT_146853c88;
            goto LAB_1405aefcd;
          }
          uVar2 = puVar21[(longlong)iVar7 + 1];
        }
        uStack_1e4 = -uVar2 & uVar2;
        iVar7 = 0x1f;
        if (uStack_1e4 != 0) {
          for (; uStack_1e4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uStack_1e4 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        iStack_1d4 = (uStack_1d0 - iVar7) + 0x1f;
        if (DAT_146853c88 < iStack_1d4) {
          iStack_1d4 = DAT_146853c88;
        }
      }
LAB_1405aefcd:
      uStack_148 = CONCAT44(iStack_1d4,0xffffffff);
      local_140 = CONCAT44(uStack_1cc,uStack_1d0);
      uStack_130 = CONCAT44(uStack_1e4,local_1e8);
      local_138 = &DAT_146853c60;
      iStack_1d4 = DAT_146853c88;
      puStack_128 = &DAT_146853c70;
      local_1d8 = -1 << ((byte)_DAT_146853c88 & 0x1f);
      local_160 = 0x46853c60;
      uStack_15c = 1;
      uStack_158 = local_1e8;
      uStack_154 = uStack_1e4;
      local_150 = &DAT_146853c70;
      uStack_120 = uStack_148;
      uStack_118 = local_140;
      while( true ) {
        param_2 = local_1a8;
        if (((uStack_148._4_4_ == iVar6) && (local_150 == &DAT_146853c70)) &&
           ((longlong *)CONCAT44(uStack_15c,local_160) == &DAT_146853c60)) break;
        local_1b0 = *(uint **)(*(longlong *)CONCAT44(uStack_15c,local_160) +
                              (longlong)uStack_148._4_4_ * 0x10);
        if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
          lVar8 = *(longlong *)(param_1 + 0x70);
          if (*(longlong *)(param_1 + 0x70) == 0) {
            lVar8 = param_1 + 0x68;
          }
          iVar7 = *(int *)(lVar8 + ((longlong)*(int *)(param_1 + 0x78) - 1U &
                                   (longlong)(int)local_1b0) * 4);
          if (iVar7 != -1) {
            do {
              piVar16 = (int *)((longlong)iVar7 * 0x70 + *(longlong *)(param_1 + 0x30));
              if (*piVar16 == (int)local_1b0) {
                if (iVar7 != -1) goto LAB_1405af0b0;
                break;
              }
              iVar7 = piVar16[0x1a];
            } while (iVar7 != -1);
          }
        }
        piVar16 = piVar20;
LAB_1405af0b0:
        piVar11 = piVar16 + 2;
        if (piVar16 == (int *)0x0) {
          piVar11 = piVar20;
        }
        if (piVar11 != (int *)0x0) {
          lVar8 = (**(code **)(*plVar13 + 0x548))(plVar13);
          uVar17 = local_80;
          if (piVar11[6] != piVar11[0x11]) {
            piVar16 = *(int **)(piVar11 + 0x14);
            if (*(int **)(piVar11 + 0x14) == (int *)0x0) {
              piVar16 = piVar11 + 0x12;
            }
            iVar7 = piVar16[(longlong)((int)((ulonglong)lVar8 >> 0x20) * 0x17 + (int)lVar8) &
                            (longlong)piVar11[0x16] - 1U];
            if (iVar7 != -1) {
              do {
                piVar16 = (int *)(*(longlong *)(piVar11 + 4) + (longlong)iVar7 * 0x18);
                if (*(longlong *)(*(longlong *)(piVar11 + 4) + (longlong)iVar7 * 0x18) == lVar8) {
                  if (iVar7 != -1) goto LAB_1405af143;
                  break;
                }
                iVar7 = piVar16[4];
              } while (iVar7 != -1);
            }
          }
          piVar16 = piVar20;
LAB_1405af143:
          piVar11 = piVar16 + 2;
          if (piVar16 == (int *)0x0) {
            piVar11 = piVar20;
          }
          if (piVar11 != (int *)0x0) {
            local_170 = *(undefined8 *)piVar11;
            lVar8 = (longlong)(int)(ulong)local_80;
            uStack_168 = DAT_146853858;
            iVar7 = (ulong)local_80 + 1;
            uStack_164 = local_1b0._4_4_;
            local_80 = CONCAT44(local_80._4_4_,iVar7);
            if (local_80._4_4_ < iVar7) {
              TArray<FObjectInitializer::FOverrides::FOverride,TInlineAllocator<8,FDefaultAllocator>_>
              ::ResizeGrow(local_108,uVar17 & 0xffffffff);
            }
            puVar15 = local_108;
            if (local_88 != (undefined1 *)0x0) {
              puVar15 = local_88;
            }
            puVar1 = (undefined4 *)(puVar15 + lVar8 * 0x10);
            *puVar1 = (undefined4)local_170;
            puVar1[1] = local_170._4_4_;
            puVar1[2] = uStack_168;
            puVar1[3] = uStack_164;
          }
        }
        uStack_148 = CONCAT44(uStack_148._4_4_,(uint)uStack_148 & ~uStack_154);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_158);
      }
      _Var3 = *(__uint64 *)(local_1a8 + 0xd0);
      _Var12 = (**(code **)(*plVar13 + 0x548))(plVar13);
      AK::SoundEngine::SetGameObjectOutputBusVolume(_Var3,_Var12,fVar26);
      uVar17 = (ulonglong)_tls_index;
      local_1a0 = local_1a0 + 1;
    } while (local_1a0 != local_190);
  }
  bVar4 = 0 < (int)(ulong)local_80;
  if ((0 < (int)(ulong)local_80) || (*(char *)(param_2 + 0xf9) != '\0')) {
    puVar15 = local_108;
    if (local_88 != (undefined1 *)0x0) {
      puVar15 = (undefined1 *)0x0;
    }
    AK::SoundEngine::SetGameObjectAuxSendValues
              (*(__uint64 *)(param_2 + 0xd0),
               (AkAuxSendValue *)((ulonglong)puVar15 | (ulonglong)local_88),(ulong)local_80);
  }
  *(bool *)(param_2 + 0xf9) = bVar4;
  if (local_88 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1405af2e0 FUN_1405af2e0 body=3252 status=ok
// SIG undefined FUN_1405af2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405af2e0(longlong param_1,char param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  __uint64 *p_Var8;
  __uint64 *p_Var9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  longlong *plVar16;
  __uint64 *p_Var17;
  longlong lVar18;
  uint *puVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  float fVar24;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  uint uStack_1a4;
  uint uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  uint uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  longlong *local_170;
  undefined8 local_168;
  longlong local_160;
  longlong *local_158;
  longlong *local_150;
  undefined8 uStack_148;
  uint *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 uStack_120;
  uint *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulonglong local_100;
  undefined4 local_f0;
  undefined4 local_e0;
  undefined4 local_d0;
  undefined4 local_c0;
  undefined4 local_b0;
  longlong *local_a8;
  ulonglong uStack_a0;
  uint *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  local_160 = param_1;
  if (param_2 != '\0') {
    plVar21 = *(longlong **)(param_1 + 0x20);
    plVar6 = plVar21 + (longlong)*(int *)(param_1 + 0x28) * 2;
    for (; plVar21 != plVar6; plVar21 = plVar21 + 2) {
      uStack_1b0 = (uint *)0x0;
      local_1b8 = (longlong *)*plVar21;
      if (local_1b8 != (longlong *)0x0) {
        uStack_1b0 = (uint *)plVar21[1];
      }
      FUN_140596e90(param_1,&local_1b8);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146853c58) && (_Init_thread_header(&DAT_146853c58), DAT_146853c58 == -1))
  {
    atexit((_func_5014 *)&LAB_143e3fc20);
    _Init_thread_footer(&DAT_146853c58);
  }
  DAT_146853c50 = 0;
  if ((DAT_146853c54 < 0) && (DAT_146853c54 != 0)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(&DAT_146853c48);
  }
  plVar21 = *(longlong **)(param_1 + 0x10);
  local_158 = plVar21 + (longlong)*(int *)(param_1 + 0x18) * 2;
  if (plVar21 != local_158) {
    do {
      plVar6 = (longlong *)0x0;
      lVar5 = *plVar21;
      plVar22 = plVar6;
      if (lVar5 != 0) {
        plVar22 = (longlong *)plVar21[1];
      }
      local_1b8 = (longlong *)0x100000000;
      lVar12 = *(longlong *)(local_160 + 8);
      lVar15 = lVar12 + 0x130;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      uVar13 = *(uint *)(lVar12 + 0x158);
      puVar14 = (uint *)(lVar12 + 0x140);
      if (uVar13 != 0) {
        puVar19 = *(uint **)(lVar12 + 0x150);
        if (*(uint **)(lVar12 + 0x150) == (uint *)0x0) {
          puVar19 = puVar14;
        }
        uVar2 = *puVar19;
        plVar16 = plVar6;
        while (uVar2 == 0) {
          iVar3 = (int)plVar6;
          uStack_1a0 = (int)plVar16 + 0x20;
          plVar16 = (longlong *)(ulonglong)uStack_1a0;
          plVar6 = (longlong *)(ulonglong)(iVar3 + 1U);
          uVar1 = (ulonglong)local_1b8 >> 0x20;
          local_1b8 = (longlong *)CONCAT44((int)uVar1,iVar3 + 1U);
          if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
          goto LAB_1405af4c4;
          uVar2 = puVar19[(longlong)iVar3 + 1];
        }
        uVar2 = -uVar2 & uVar2;
        iVar3 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        local_1b8 = (longlong *)CONCAT44(uVar2,SUB84(local_1b8,0));
        if (uVar2 == 0) {
          iVar3 = 0x20;
        }
        else {
          iVar3 = 0x1f - iVar3;
        }
        uStack_1a4 = (uStack_1a0 - iVar3) + 0x1f;
        if ((int)uVar13 < (int)uStack_1a4) {
LAB_1405af4c4:
          uStack_1a4 = uVar13;
        }
      }
      local_1a8 = 0xffffffff;
      uStack_6c = *(uint *)(lVar12 + 0x158);
      uStack_110 = CONCAT44(uStack_1a4,0xffffffff);
      local_178 = CONCAT44(uStack_19c,uStack_1a0);
      uStack_120 = (ulonglong)local_1b8;
      uStack_70 = -1 << ((byte)uStack_6c & 0x1f);
      uVar2 = uStack_6c & 0xffffffe0;
      uStack_190 = (uint *)local_1b8;
      uStack_180 = 0xffffffff;
      uStack_17c = uStack_1a4;
      uStack_1b0 = puVar14;
      local_198 = lVar15;
      local_128 = (longlong *)lVar15;
      puStack_118 = puVar14;
      uStack_108 = local_178;
      local_188 = puVar14;
      uVar10 = uStack_6c;
      if (uStack_6c != uVar13) {
        puVar19 = *(uint **)(lVar12 + 0x150);
        if (*(uint **)(lVar12 + 0x150) == (uint *)0x0) {
          puVar19 = puVar14;
        }
        uVar10 = puVar19[(int)uStack_6c >> 5] & uStack_70;
        iVar3 = (int)uStack_6c >> 5;
        while (uVar10 == 0) {
          uVar2 = uVar2 + 0x20;
          if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
          goto LAB_1405af598;
          uVar10 = puVar19[(longlong)iVar3 + 1];
          uStack_70 = 0xffffffff;
          iVar3 = iVar3 + 1;
        }
        uVar10 = -uVar10 & uVar10;
        iVar3 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        if (uVar10 == 0) {
          iVar3 = 0x20;
        }
        else {
          iVar3 = 0x1f - iVar3;
        }
        uStack_6c = (uVar2 - iVar3) + 0x1f;
        uVar10 = uStack_6c;
        if ((int)uVar13 < (int)uStack_6c) {
LAB_1405af598:
          uStack_6c = uVar13;
          uVar10 = uVar13;
        }
      }
      while( true ) {
        if (((uStack_17c == uVar10) && (local_188 == puVar14)) && (local_198 == lVar15))
        goto LAB_1405af652;
        plVar6 = plVar22;
        if (lVar5 == 0) {
          plVar6 = (longlong *)0x0;
        }
        fVar24 = (float)(**(code **)(*plVar6 + 0x10))();
        if (0.0001 < fVar24) break;
        uStack_180 = uStack_180 & ~uStack_190._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_190);
      }
      lVar12 = (longlong)DAT_146853c50;
      DAT_146853c50 = DAT_146853c50 + 1;
      if (DAT_146853c54 < DAT_146853c50) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146853c48);
      }
      plVar16 = DAT_146853c48 + lVar12 * 2;
      plVar6 = (longlong *)0x0;
      if (lVar5 != 0) {
        plVar6 = plVar22;
      }
      plVar16[1] = (longlong)plVar6;
      *plVar16 = lVar5;
LAB_1405af652:
      plVar21 = plVar21 + 2;
      param_1 = local_160;
    } while (plVar21 != local_158);
  }
  plVar6 = (longlong *)0x0;
  plVar21 = *(longlong **)(param_1 + 0x20);
  iVar3 = 0;
  plVar23 = plVar21 + (longlong)*(int *)(param_1 + 0x28) * 2;
  local_1b8 = (longlong *)0x0;
  uStack_1b0._4_4_ = 0;
  plVar22 = plVar6;
  plVar16 = plVar6;
  for (; plVar21 != plVar23; plVar21 = plVar21 + 2) {
    lVar12 = 0;
    lVar5 = *plVar21;
    if (lVar5 != 0) {
      lVar12 = plVar21[1];
    }
    for (plVar7 = DAT_146853c48; plVar7 != DAT_146853c48 + (longlong)DAT_146853c50 * 2;
        plVar7 = plVar7 + 2) {
      lVar15 = 0;
      if (*plVar7 != 0) {
        lVar15 = plVar7[1];
      }
      lVar4 = lVar12;
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      if ((lVar15 == lVar4) && (*plVar7 == lVar5)) goto LAB_1405af74e;
    }
    iVar3 = (int)plVar6;
    uStack_1b0._0_4_ = iVar3 + 1;
    if ((int)plVar16 < (int)(uint)uStack_1b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_1b8);
      plVar16 = (longlong *)(ulonglong)uStack_1b0._4_4_;
      plVar22 = local_1b8;
    }
    plVar6 = (longlong *)(ulonglong)(uint)uStack_1b0;
    plVar7 = plVar22 + (longlong)iVar3 * 2;
    *plVar7 = 0;
    plVar7[1] = 0;
    *plVar7 = *plVar21;
    if (*plVar21 == 0) {
      plVar7[1] = 0;
    }
    else {
      plVar7[1] = plVar21[1];
    }
LAB_1405af74e:
    iVar3 = (int)plVar6;
  }
  plVar21 = plVar22 + (longlong)iVar3 * 2;
  for (; plVar22 != plVar21; plVar22 = plVar22 + 2) {
    local_168 = 0;
    local_170 = (longlong *)*plVar22;
    if (local_170 != (longlong *)0x0) {
      local_168 = plVar22[1];
    }
    FUN_140596e90(param_1,&local_170);
  }
  plVar6 = (longlong *)0x0;
  iVar3 = 0;
  plVar23 = DAT_146853c48 + (longlong)DAT_146853c50 * 2;
  local_170 = (longlong *)0x0;
  local_168 = local_168 & 0xffffffff;
  plVar22 = plVar6;
  plVar21 = plVar6;
  for (plVar16 = DAT_146853c48; plVar16 != plVar23; plVar16 = plVar16 + 2) {
    lVar15 = 0;
    lVar5 = *plVar16;
    lVar12 = lVar15;
    if (lVar5 != 0) {
      lVar12 = plVar16[1];
    }
    plVar7 = *(longlong **)(param_1 + 0x20);
    plVar20 = plVar7 + (longlong)*(int *)(param_1 + 0x28) * 2;
    for (; plVar7 != plVar20; plVar7 = plVar7 + 2) {
      lVar4 = lVar15;
      if (*plVar7 != 0) {
        lVar4 = plVar7[1];
      }
      lVar18 = lVar12;
      if (lVar5 == 0) {
        lVar18 = lVar15;
      }
      if ((lVar4 == lVar18) && (*plVar7 == lVar5)) goto LAB_1405af882;
    }
    iVar3 = (int)plVar6;
    uVar13 = iVar3 + 1;
    uVar1 = local_168 >> 0x20;
    local_168 = CONCAT44((int)uVar1,uVar13);
    if ((int)plVar21 < (int)uVar13) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_170,plVar6);
      plVar21 = (longlong *)(local_168 >> 0x20);
      plVar22 = local_170;
      uVar13 = (uint)local_168;
    }
    plVar6 = (longlong *)(ulonglong)uVar13;
    lVar5 = 0;
    plVar7 = plVar22 + (longlong)iVar3 * 2;
    *plVar7 = 0;
    plVar7[1] = 0;
    *plVar7 = *plVar16;
    if (*plVar16 != 0) {
      lVar5 = plVar16[1];
    }
    plVar7[1] = lVar5;
LAB_1405af882:
    iVar3 = (int)plVar6;
  }
  plVar21 = plVar22 + (longlong)iVar3 * 2;
  for (; plVar22 != plVar21; plVar22 = plVar22 + 2) {
    local_198 = *plVar22;
    uStack_190 = (uint *)0x0;
    if (local_198 != 0) {
      uStack_190 = (uint *)plVar22[1];
    }
    FUN_140593200(param_1,&local_198);
  }
  lVar5 = *(longlong *)(param_1 + 8);
  local_158 = (longlong *)(lVar5 + 0x130);
  uVar13 = *(uint *)(lVar5 + 0x158);
  puVar14 = (uint *)(lVar5 + 0x140);
  local_198 = 0x100000000;
  local_188._4_4_ = 0;
  uStack_180 = 0;
  if (uVar13 != 0) {
    puVar19 = *(uint **)(lVar5 + 0x150);
    if (*(uint **)(lVar5 + 0x150) == (uint *)0x0) {
      puVar19 = puVar14;
    }
    uVar2 = *puVar19;
    uStack_180 = 0;
    iVar3 = 0;
    while (uVar2 == 0) {
      uStack_180 = uStack_180 + 0x20;
      uVar1 = local_198 >> 0x20;
      local_198 = CONCAT44((int)uVar1,iVar3 + 1);
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
      goto LAB_1405af994;
      uVar2 = puVar19[(longlong)iVar3 + 1];
      iVar3 = iVar3 + 1;
    }
    uVar2 = -uVar2 & uVar2;
    iVar3 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    local_198 = CONCAT44(uVar2,(undefined4)local_198);
    if (uVar2 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    local_188._4_4_ = (uStack_180 - iVar3) + 0x1f;
    if ((int)uVar13 < (int)local_188._4_4_) {
LAB_1405af994:
      local_188._4_4_ = uVar13;
    }
  }
  local_188._0_4_ = 0xffffffff;
  uStack_6c = *(uint *)(lVar5 + 0x158);
  uStack_138 = CONCAT44(local_188._4_4_,0xffffffff);
  uStack_130 = CONCAT44(uStack_17c,uStack_180);
  uStack_148 = local_198;
  uStack_70 = -1 << ((byte)uStack_6c & 0x1f);
  uVar2 = uStack_6c & 0xffffffe0;
  uStack_120 = local_198;
  if (uStack_6c != uVar13) {
    puVar19 = *(uint **)(lVar5 + 0x150);
    if (*(uint **)(lVar5 + 0x150) == (uint *)0x0) {
      puVar19 = puVar14;
    }
    uVar10 = puVar19[(int)uStack_6c >> 5] & uStack_70;
    iVar3 = (int)uStack_6c >> 5;
    while (uVar10 == 0) {
      uVar2 = uVar2 + 0x20;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
      goto LAB_1405afa65;
      uVar10 = puVar19[(longlong)iVar3 + 1];
      uStack_70 = 0xffffffff;
      iVar3 = iVar3 + 1;
    }
    uVar10 = -uVar10 & uVar10;
    iVar3 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    uStack_6c = (uVar2 - iVar3) + 0x1f;
    if ((int)uVar13 < (int)uStack_6c) {
LAB_1405afa65:
      uStack_6c = uVar13;
    }
  }
  local_100 = (ulonglong)uStack_6c;
  uStack_190 = puVar14;
  local_150 = local_158;
  puStack_140 = puVar14;
  local_128 = local_158;
  puStack_118 = puVar14;
  uStack_110 = uStack_138;
  uStack_108 = uStack_130;
  do {
    p_Var9 = (__uint64 *)0x0;
    if (((uStack_110._4_4_ == (int)local_100) && (puStack_118 == puVar14)) &&
       (local_128 == local_158)) {
      if (local_170 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_1b8 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    plVar21 = *(longlong **)(*local_128 + (longlong)uStack_110._4_4_ * 0x10);
    lVar5 = (**(code **)(*plVar21 + 0x548))(plVar21);
    if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
      lVar12 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar12 = param_1 + 0xb8;
      }
      iVar3 = *(int *)(lVar12 + ((longlong)((int)((ulonglong)lVar5 >> 0x20) * 0x17 + (int)lVar5) &
                                (longlong)*(int *)(param_1 + 200) - 1U) * 4);
      if (iVar3 != -1) {
        do {
          p_Var8 = (__uint64 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar3 * 0x18);
          if (*(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar3 * 0x18) == lVar5) {
            if (iVar3 != -1) goto LAB_1405afb33;
            break;
          }
          iVar3 = (int)p_Var8[2];
        } while (iVar3 != -1);
      }
    }
    p_Var8 = p_Var9;
LAB_1405afb33:
    p_Var17 = p_Var8 + 1;
    if (p_Var8 == (__uint64 *)0x0) {
      p_Var17 = p_Var9;
    }
    if (p_Var17 != (__uint64 *)0x0) {
      local_f0 = *(undefined4 *)((longlong)plVar21 + 0x2e4);
      uStack_64 = (undefined4)plVar21[0x5d];
      uStack_70 = (uint)plVar21[0x60];
      local_e0 = (undefined4)plVar21[0x5e];
      local_d0 = *(undefined4 *)((longlong)plVar21 + 0x2fc);
      local_80 = CONCAT44(*(undefined4 *)((longlong)plVar21 + 0x2f4),
                          *(undefined4 *)((longlong)plVar21 + 0x2ec)) ^ 0x80000000;
      uStack_78._4_4_ = *(uint *)(plVar21 + 0x5f) ^ 0x80000000;
      uStack_68 = *(uint *)(plVar21 + 0x5c) ^ 0x80000000;
      uStack_78._0_4_ = local_e0;
      uStack_6c = local_d0;
      local_60 = local_f0;
      AK::SoundEngine::SetPosition(*p_Var17,(AkTransform *)&local_80);
    }
    plVar6 = (longlong *)(param_1 + 0x30);
    uVar13 = *(uint *)(param_1 + 0x58);
    puVar14 = (uint *)(param_1 + 0x40);
    local_80 = 0x100000000;
    uStack_6c = 0;
    uStack_68 = 0;
    if (uVar13 != 0) {
      puVar19 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar19 = puVar14;
      }
      uVar2 = *puVar19;
      p_Var8 = p_Var9;
      while (uVar2 == 0) {
        iVar3 = (int)p_Var9;
        uStack_68 = (int)p_Var8 + 0x20;
        p_Var8 = (__uint64 *)(ulonglong)uStack_68;
        p_Var9 = (__uint64 *)(ulonglong)(iVar3 + 1U);
        uVar1 = local_80 >> 0x20;
        local_80 = CONCAT44((int)uVar1,iVar3 + 1U);
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto LAB_1405afc8f;
        uVar2 = puVar19[(longlong)iVar3 + 1];
      }
      uVar2 = -uVar2 & uVar2;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      local_80 = CONCAT44(uVar2,(undefined4)local_80);
      if (uVar2 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_6c = (uStack_68 - iVar3) + 0x1f;
      if ((int)uVar13 < (int)uStack_6c) {
LAB_1405afc8f:
        uStack_6c = uVar13;
      }
    }
    uVar2 = *(uint *)(param_1 + 0x58);
    uStack_138 = CONCAT44(uStack_6c,0xffffffff);
    uStack_130 = CONCAT44(uStack_64,uStack_68);
    uStack_70 = -1 << ((byte)uVar2 & 0x1f);
    uStack_a0 = local_80;
    uVar10 = uVar2 & 0xffffffe0;
    uStack_148 = local_80;
    uStack_6c = uVar2;
    if (uVar2 != uVar13) {
      puVar19 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar19 = puVar14;
      }
      uVar11 = puVar19[(int)uVar2 >> 5] & uStack_70;
      iVar3 = (int)uVar2 >> 5;
      while (uVar11 == 0) {
        uVar10 = uVar10 + 0x20;
        if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar3)
        goto LAB_1405afd58;
        uVar11 = puVar19[(longlong)iVar3 + 1];
        uStack_70 = 0xffffffff;
        iVar3 = iVar3 + 1;
      }
      uVar11 = -uVar11 & uVar11;
      iVar3 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      if (uVar11 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uStack_6c = (uVar10 - iVar3) + 0x1f;
      if ((int)uVar13 < (int)uStack_6c) {
LAB_1405afd58:
        uStack_6c = uVar13;
      }
    }
    uVar13 = uStack_6c;
    local_150 = plVar6;
    puStack_140 = puVar14;
    local_a8 = plVar6;
    puStack_98 = puVar14;
    uStack_90 = uStack_138;
    uStack_88 = uStack_130;
    uStack_78 = puVar14;
    while( true ) {
      lVar5 = (longlong)(int)uStack_138._4_4_;
      if (((uStack_138._4_4_ == uVar13) && (puStack_140 == puVar14)) && (local_150 == plVar6))
      break;
      lVar12 = *local_150;
      lVar15 = (**(code **)(*plVar21 + 0x548))(plVar21);
      lVar5 = lVar5 * 0x70;
      if (*(int *)(lVar5 + 0x20 + lVar12) != *(int *)(lVar5 + 0x4c + lVar12)) {
        lVar18 = lVar12 + 0x50 + lVar5;
        lVar4 = *(longlong *)(lVar18 + 8);
        if (lVar4 == 0) {
          lVar4 = lVar18;
        }
        iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar15 >> 0x20) * 0x17 + (int)lVar15)
                                 & (longlong)*(int *)(lVar5 + 0x60 + lVar12) - 1U) * 4);
        if (iVar3 != -1) {
          lVar5 = *(longlong *)(lVar5 + 0x18 + lVar12);
          do {
            p_Var9 = (__uint64 *)(lVar5 + (longlong)iVar3 * 0x18);
            if (*(longlong *)(lVar5 + (longlong)iVar3 * 0x18) == lVar15) {
              if (iVar3 != -1) goto LAB_1405afe13;
              break;
            }
            iVar3 = (int)p_Var9[2];
          } while (iVar3 != -1);
        }
      }
      p_Var9 = (__uint64 *)0x0;
LAB_1405afe13:
      p_Var8 = p_Var9 + 1;
      if (p_Var9 == (__uint64 *)0x0) {
        p_Var8 = (__uint64 *)0x0;
      }
      if (p_Var8 != (__uint64 *)0x0) {
        local_c0 = *(undefined4 *)((longlong)plVar21 + 0x2e4);
        uStack_64 = (undefined4)plVar21[0x5d];
        uStack_70 = *(uint *)(plVar21 + 0x60);
        local_b0 = (undefined4)plVar21[0x5e];
        uStack_6c = *(uint *)((longlong)plVar21 + 0x2fc);
        uStack_190 = (uint *)CONCAT44(uStack_190._4_4_,uStack_6c);
        local_80 = CONCAT44(*(undefined4 *)((longlong)plVar21 + 0x2f4),
                            *(undefined4 *)((longlong)plVar21 + 0x2ec)) ^ 0x80000000;
        uStack_78._4_4_ = *(uint *)(plVar21 + 0x5f) ^ 0x80000000;
        uStack_68 = *(uint *)(plVar21 + 0x5c) ^ 0x80000000;
        uStack_78._0_4_ = local_b0;
        local_60 = local_c0;
        AK::SoundEngine::SetPosition(*p_Var8,(AkTransform *)&local_80);
      }
      uStack_138 = CONCAT44(uStack_138._4_4_,(uint)uStack_138 & ~uStack_148._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_148);
    }
    uStack_110 = CONCAT44(uStack_110._4_4_,(uint)uStack_110 & ~uStack_120._4_4_);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_120);
    puVar14 = (uint *)(local_158 + 2);
    param_1 = local_160;
  } while( true );
}



// FUNCTION 1405affa0 FUN_1405affa0 body=2706 status=ok
// SIG undefined FUN_1405affa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405affa0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar11;
  undefined1 auVar10 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar12 [16];
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
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auStack_178 [32];
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
  undefined8 local_108;
  undefined1 local_f8 [8];
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
  ulonglong local_b8;
  
  local_b8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  auVar8 = *(undefined1 (*) [16])(param_2 + 10);
  fVar24 = auVar8._0_4_;
  fVar27 = auVar8._4_4_;
  fVar14 = auVar8._8_4_;
  fVar44 = auVar8._12_4_;
  fVar15 = *(float *)(param_2 + 6);
  fVar17 = *(float *)((longlong)param_2 + 0x34);
  fVar19 = *(float *)(param_2 + 7);
  fVar30 = *(float *)((longlong)param_2 + 0x3c);
  fVar31 = *(float *)(param_2 + 8);
  fVar25 = *(float *)((longlong)param_2 + 0x44);
  fVar26 = *(float *)(param_2 + 9);
  fVar13 = *(float *)((longlong)param_2 + 0x4c);
  local_108 = param_3;
  _local_f8 = auVar8;
  plVar5 = (longlong *)FWeakObjectPtr::Get(param_2 + 2);
  if (plVar5 == (longlong *)0x0) {
    lVar6 = FWeakObjectPtr::Get(param_2 + 3);
    fVar20 = fRam00000001468536e8;
    fVar18 = fRam00000001468536e4;
    fVar11 = _DAT_1468536e0;
    if (lVar6 == 0) goto LAB_1405b0947;
    lVar6 = *(longlong *)(lVar6 + 0x168);
    if (lVar6 == 0) {
      fVar23 = 0.0;
      fVar28 = 0.0;
      fVar29 = 0.0;
      fVar32 = 0.0;
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar16 = 0.0;
      local_c8 = (float)((uint)_DAT_1468536e0 & _DAT_1468536f0);
      fStack_c4 = (float)((uint)fRam00000001468536e4 & uRam00000001468536f4);
      fStack_c0 = (float)((uint)fRam00000001468536e8 & uRam00000001468536f8);
      fVar37 = (float)((uint)fRam00000001468536ec & uRam00000001468536fc);
      fVar33 = fRam00000001468536ec;
    }
    else {
      fVar21 = *(float *)(lVar6 + 0x210);
      fVar22 = *(float *)(lVar6 + 0x214);
      fVar16 = *(float *)(lVar6 + 0x218);
      fVar23 = *(float *)(lVar6 + 0x220);
      fVar28 = *(float *)(lVar6 + 0x224);
      fVar29 = *(float *)(lVar6 + 0x228);
      fVar32 = *(float *)(lVar6 + 0x22c);
      local_c8 = *(float *)(lVar6 + 0x230);
      fStack_c4 = *(float *)(lVar6 + 0x234);
      fStack_c0 = *(float *)(lVar6 + 0x238);
      fVar37 = *(float *)(lVar6 + 0x23c);
      fVar33 = *(float *)(lVar6 + 0x21c);
    }
    auVar1._4_4_ = fStack_c4;
    auVar1._0_4_ = local_c8;
    auVar1._8_4_ = fStack_c0;
    auVar1._12_4_ = fVar37;
    auVar8 = minps(auVar8,auVar1);
    auVar10._4_4_ = -(uint)(auVar8._4_4_ < fRam00000001468537b4);
    auVar10._0_4_ = -(uint)(auVar8._0_4_ < _DAT_1468537b0);
    auVar10._8_4_ = -(uint)(auVar8._8_4_ < fRam00000001468537b8);
    auVar10._12_4_ = -(uint)(auVar8._12_4_ < fRam00000001468537bc);
    iVar4 = movmskps((int)lVar6,auVar10);
    if (iVar4 != 0) {
      fVar32 = fVar22 + fVar22;
      fVar38 = fVar16 + fVar16;
      fVar48 = fVar24 * local_c8;
      fVar49 = fVar27 * fStack_c4;
      fVar50 = fVar14 * fStack_c0;
      fVar40 = (fVar21 + fVar21) * fVar21;
      fVar13 = (fVar21 + fVar21) * fVar33;
      fVar34 = fVar17 + fVar17;
      fVar39 = fVar19 + fVar19;
      fVar41 = (fVar38 * fVar33 + fVar32 * fVar21) * local_c8;
      fVar42 = (fVar13 + fVar38 * fVar22) * fStack_c4;
      fVar43 = (fVar32 * fVar33 + fVar38 * fVar21) * fStack_c0;
      fVar45 = fStack_c4 * (fVar32 * fVar21 - fVar38 * fVar33);
      fVar46 = fStack_c0 * (fVar38 * fVar22 - fVar13);
      fVar47 = local_c8 * (fVar38 * fVar21 - fVar32 * fVar33);
      fVar33 = (fVar15 + fVar15) * fVar15;
      fVar13 = (float)((uint)((_DAT_1468536e0 - (fVar38 * fVar16 + fVar32 * fVar22)) * local_c8) &
                      _DAT_1468536f0);
      fVar16 = (float)((uint)((fRam00000001468536e4 - (fVar38 * fVar16 + fVar40)) * fStack_c4) &
                      uRam00000001468536f4);
      fVar21 = (float)((uint)((fRam00000001468536e8 - (fVar32 * fVar22 + fVar40)) * fStack_c0) &
                      uRam00000001468536f8);
      fVar22 = (float)((uint)((fRam00000001468536ec - (fVar40 + fVar40)) * fVar37) &
                      uRam00000001468536fc);
      fVar32 = (fVar15 + fVar15) * fVar30;
      fVar40 = (fVar39 * fVar30 + fVar34 * fVar15) * fVar24;
      fVar35 = (fVar32 + fVar39 * fVar17) * fVar27;
      fVar36 = (fVar34 * fVar30 + fVar39 * fVar15) * fVar14;
      fVar38 = fVar27 * (fVar34 * fVar15 - fVar39 * fVar30);
      fVar32 = fVar14 * (fVar39 * fVar17 - fVar32);
      fVar30 = fVar24 * (fVar39 * fVar15 - fVar34 * fVar30);
      fVar24 = (float)((uint)((_DAT_1468536e0 - (fVar39 * fVar19 + fVar34 * fVar17)) * fVar24) &
                      _DAT_1468536f0);
      fVar27 = (float)((uint)((fRam00000001468536e4 - (fVar39 * fVar19 + fVar33)) * fVar27) &
                      uRam00000001468536f4);
      fVar14 = (float)((uint)((fRam00000001468536e8 - (fVar34 * fVar17 + fVar33)) * fVar14) &
                      uRam00000001468536f8);
      fVar15 = (float)((uint)((fRam00000001468536ec - (fVar33 + fVar33)) * fVar44) &
                      uRam00000001468536fc);
      local_148 = fVar40 * fVar45 + fVar24 * fVar13 + fVar30 * fVar43 + fVar15 * fVar23;
      fStack_144 = fVar40 * fVar16 + fVar24 * fVar41 + fVar30 * fVar46 + fVar15 * fVar28;
      fStack_140 = fVar40 * fVar42 + fVar24 * fVar47 + fVar30 * fVar21 + fVar15 * fVar29;
      fStack_13c = fVar40 * fVar22 + fVar24 * fVar22 + fVar30 * fVar22 +
                   fVar15 * fRam00000001468536ec;
      local_138 = fVar27 * fVar45 + fVar38 * fVar13 + fVar35 * fVar43 + fVar15 * fVar23;
      fStack_134 = fVar27 * fVar16 + fVar38 * fVar41 + fVar35 * fVar46 + fVar15 * fVar28;
      fStack_130 = fVar27 * fVar42 + fVar38 * fVar47 + fVar35 * fVar21 + fVar15 * fVar29;
      fStack_12c = fVar27 * fVar22 + fVar38 * fVar22 + fVar35 * fVar22 +
                   fVar15 * fRam00000001468536ec;
      local_128 = fVar32 * fVar45 + fVar36 * fVar13 + fVar14 * fVar43 + fVar15 * fVar23;
      fStack_124 = fVar32 * fVar16 + fVar36 * fVar41 + fVar14 * fVar46 + fVar15 * fVar28;
      fStack_120 = fVar32 * fVar42 + fVar36 * fVar47 + fVar14 * fVar21 + fVar15 * fVar29;
      fStack_11c = fVar32 * fVar22 + fVar36 * fVar22 + fVar14 * fVar22 +
                   fVar15 * fRam00000001468536ec;
      local_118 = fVar25 * fVar45 + fVar31 * fVar13 + fVar26 * fVar43 +
                  fRam00000001468536ec * fVar23;
      fStack_114 = fVar25 * fVar16 + fVar31 * fVar41 + fVar26 * fVar46 +
                   fRam00000001468536ec * fVar28;
      fStack_110 = fVar25 * fVar42 + fVar31 * fVar47 + fVar26 * fVar21 +
                   fRam00000001468536ec * fVar29;
      fStack_10c = fVar25 * fVar22 + fVar31 * fVar22 + fVar26 * fVar22 +
                   fRam00000001468536ec * fRam00000001468536ec;
      FMatrix::RemoveScaling(&local_148);
      fVar24 = (float)(-(uint)(_DAT_1468537b0 <= fVar48) & (_DAT_1468537a0 ^ (uint)fVar11) ^
                      _DAT_1468537a0);
      fVar27 = (float)(-(uint)(fRam00000001468537b4 <= fVar49) &
                       (uRam00000001468537a4 ^ (uint)fVar18) ^ uRam00000001468537a4);
      fVar14 = (float)(-(uint)(fRam00000001468537b8 <= fVar50) &
                       (uRam00000001468537a8 ^ (uint)fVar20) ^ uRam00000001468537a8);
      local_148 = local_148 * fVar24;
      fStack_144 = fStack_144 * fVar24;
      fStack_140 = fStack_140 * fVar24;
      fStack_134 = fStack_134 * fVar27;
      fStack_130 = fStack_130 * fVar27;
      local_138 = local_138 * fVar27;
      fStack_124 = fStack_124 * fVar14;
      fStack_120 = fStack_120 * fVar14;
      local_128 = local_128 * fVar14;
      FQuat::FQuat(local_f8,&local_148);
      goto LAB_1405b038c;
    }
    fVar38 = fVar17 * fVar21;
    fVar39 = fVar15 * fVar21;
    fVar31 = fVar31 * local_c8;
    fVar25 = fVar25 * fStack_c4;
    fVar26 = fVar26 * fStack_c0;
    fVar13 = fVar13 * fVar37;
    fVar20 = fVar15 * fVar22;
    fVar34 = fVar17 * fVar22;
    fVar11 = fVar16 * fVar15;
    fVar18 = fVar16 * fVar19;
    fVar15 = fVar30 * fVar21 * _DAT_146853770 + fVar15 * fVar33 + fVar19 * fVar22 * _DAT_146853760 +
             fVar16 * fVar17 * _DAT_146853750;
    fVar17 = fVar19 * fVar21 * fRam0000000146853774 + fVar17 * fVar33 +
             fVar30 * fVar22 * fRam0000000146853764 + fVar11 * fRam0000000146853754;
    fVar19 = fVar38 * fRam0000000146853778 + fVar19 * fVar33 + fVar20 * fRam0000000146853768 +
             fVar16 * fVar30 * fRam0000000146853758;
    fVar30 = fVar39 * fRam000000014685377c + fVar30 * fVar33 + fVar34 * fRam000000014685376c +
             fVar18 * fRam000000014685375c;
    fVar11 = fVar26 * fVar22 - fVar25 * fVar16;
    fVar18 = fVar31 * fVar16 - fVar26 * fVar21;
    fVar20 = fVar25 * fVar21 - fVar31 * fVar22;
    fVar34 = fVar13 * fVar33 - fVar13 * fVar33;
    fVar11 = fVar11 + fVar11;
    fVar18 = fVar18 + fVar18;
    fVar20 = fVar20 + fVar20;
    fVar34 = fVar34 + fVar34;
    fVar31 = (fVar20 * fVar22 - fVar18 * fVar16) + fVar11 * fVar33 + fVar31 + fVar23;
    fVar25 = (fVar11 * fVar16 - fVar20 * fVar21) + fVar18 * fVar33 + fVar25 + fVar28;
    fVar26 = (fVar18 * fVar21 - fVar11 * fVar22) + fVar20 * fVar33 + fVar26 + fVar29;
    fVar13 = (fVar34 * fVar33 - fVar34 * fVar33) + fVar34 * fVar33 + fVar13 + fVar32;
LAB_1405b093d:
    fVar48 = fVar24 * local_c8;
    fVar49 = fVar27 * fStack_c4;
    fVar50 = fVar14 * fStack_c0;
  }
  else {
    uVar3 = (**(code **)(*plVar5 + 0x420))(plVar5,&local_e8,param_2[4],0);
    fVar20 = fRam00000001468536e8;
    fVar18 = fRam00000001468536e4;
    fVar11 = _DAT_1468536e0;
    auVar2._4_4_ = fStack_c4;
    auVar2._0_4_ = local_c8;
    auVar2._8_4_ = fStack_c0;
    auVar2._12_4_ = fStack_bc;
    auVar8 = minps(auVar8,auVar2);
    auVar9._4_4_ = -(uint)(auVar8._4_4_ < fRam00000001468537b4);
    auVar9._0_4_ = -(uint)(auVar8._0_4_ < _DAT_1468537b0);
    auVar9._8_4_ = -(uint)(auVar8._8_4_ < fRam00000001468537b8);
    auVar9._12_4_ = -(uint)(auVar8._12_4_ < fRam00000001468537bc);
    iVar4 = movmskps(uVar3,auVar9);
    fVar37 = fStack_bc;
    if (iVar4 == 0) {
      fVar16 = local_e8 * fVar17;
      fVar21 = local_e8 * fVar15;
      fVar31 = local_c8 * fVar31;
      fVar25 = fStack_c4 * fVar25;
      fVar26 = fStack_c0 * fVar26;
      fStack_bc = fStack_bc * fVar13;
      fVar18 = fStack_e4 * fVar15;
      fVar20 = fStack_e4 * fVar17;
      fVar13 = fStack_e0 * fVar15;
      fVar11 = fStack_e0 * fVar19;
      fVar15 = local_e8 * fVar30 * _DAT_146853770 + fStack_dc * fVar15 +
               fStack_e4 * fVar19 * _DAT_146853760 + fStack_e0 * fVar17 * _DAT_146853750;
      fVar17 = local_e8 * fVar19 * fRam0000000146853774 + fStack_dc * fVar17 +
               fStack_e4 * fVar30 * fRam0000000146853764 + fVar13 * fRam0000000146853754;
      fVar19 = fVar16 * fRam0000000146853778 + fStack_dc * fVar19 + fVar18 * fRam0000000146853768 +
               fStack_e0 * fVar30 * fRam0000000146853758;
      fVar30 = fVar21 * fRam000000014685377c + fStack_dc * fVar30 + fVar20 * fRam000000014685376c +
               fVar11 * fRam000000014685375c;
      fVar13 = fVar26 * fStack_e4 - fVar25 * fStack_e0;
      fVar11 = fVar31 * fStack_e0 - fVar26 * local_e8;
      fVar18 = fVar25 * local_e8 - fVar31 * fStack_e4;
      fVar20 = fStack_bc * fStack_dc - fStack_bc * fStack_dc;
      fVar13 = fVar13 + fVar13;
      fVar11 = fVar11 + fVar11;
      fVar18 = fVar18 + fVar18;
      fVar20 = fVar20 + fVar20;
      fVar31 = (fVar18 * fStack_e4 - fVar11 * fStack_e0) + fVar13 * fStack_dc + fVar31 + local_d8;
      fVar25 = (fVar13 * fStack_e0 - fVar18 * local_e8) + fVar11 * fStack_dc + fVar25 + fStack_d4;
      fVar26 = (fVar11 * local_e8 - fVar13 * fStack_e4) + fVar18 * fStack_dc + fVar26 + fStack_d0;
      fVar13 = (fVar20 * fStack_dc - fVar20 * fStack_dc) + fVar20 * fStack_dc + fStack_bc +
               fStack_cc;
      goto LAB_1405b093d;
    }
    fVar13 = fStack_e4 + fStack_e4;
    fVar16 = fStack_e0 + fStack_e0;
    fVar48 = local_c8 * fVar24;
    fVar49 = fStack_c4 * fVar27;
    fVar50 = fStack_c0 * fVar14;
    fVar27 = local_e8 * (local_e8 + local_e8);
    fVar24 = fStack_dc * (local_e8 + local_e8);
    fVar45 = (fStack_dc * fVar16 + local_e8 * fVar13) * local_c8;
    fVar46 = (fVar24 + fStack_e4 * fVar16) * fStack_c4;
    fVar47 = (fStack_dc * fVar13 + local_e8 * fVar16) * fStack_c0;
    fVar32 = fStack_c4 * (local_e8 * fVar13 - fStack_dc * fVar16);
    fVar33 = fStack_c0 * (fStack_e4 * fVar16 - fVar24);
    fVar34 = local_c8 * (local_e8 * fVar16 - fStack_dc * fVar13);
    fVar21 = fVar17 + fVar17;
    fVar22 = fVar19 + fVar19;
    fVar24 = (float)((uint)((_DAT_1468536e0 - (fStack_e0 * fVar16 + fStack_e4 * fVar13)) * local_c8)
                    & _DAT_1468536f0);
    fVar14 = (float)((uint)((fRam00000001468536e4 - (fStack_e0 * fVar16 + fVar27)) * fStack_c4) &
                    uRam00000001468536f4);
    fVar13 = (float)((uint)((fRam00000001468536e8 - (fStack_e4 * fVar13 + fVar27)) * fStack_c0) &
                    uRam00000001468536f8);
    fVar16 = (float)((uint)((fRam00000001468536ec - (fVar27 + fVar27)) * fStack_bc) &
                    uRam00000001468536fc);
    fVar23 = fVar15 * (fVar15 + fVar15);
    fVar27 = (fVar15 + fVar15) * fVar30;
    fVar38 = (fVar22 * fVar30 + fVar21 * fVar15) * (float)local_f8._0_4_;
    fVar39 = (fVar27 + fVar22 * fVar17) * (float)local_f8._4_4_;
    fVar40 = (fVar21 * fVar30 + fVar22 * fVar15) * fStack_f0;
    fVar28 = (float)local_f8._4_4_ * (fVar21 * fVar15 - fVar22 * fVar30);
    fVar29 = fStack_f0 * (fVar22 * fVar17 - fVar27);
    fVar30 = (float)local_f8._0_4_ * (fVar22 * fVar15 - fVar21 * fVar30);
    fVar27 = (float)((uint)((_DAT_1468536e0 - (fVar19 * fVar22 + fVar17 * fVar21)) *
                           (float)local_f8._0_4_) & _DAT_1468536f0);
    fVar15 = (float)((uint)((fRam00000001468536e4 - (fVar19 * fVar22 + fVar23)) *
                           (float)local_f8._4_4_) & uRam00000001468536f4);
    fVar17 = (float)((uint)((fRam00000001468536e8 - (fVar17 * fVar21 + fVar23)) * fStack_f0) &
                    uRam00000001468536f8);
    fVar19 = (float)((uint)((fRam00000001468536ec - (fVar23 + fVar23)) * fStack_ec) &
                    uRam00000001468536fc);
    local_148 = fVar38 * fVar32 + fVar27 * fVar24 + fVar30 * fVar47 + fVar19 * local_d8;
    fStack_144 = fVar38 * fVar14 + fVar27 * fVar45 + fVar30 * fVar33 + fVar19 * fStack_d4;
    fStack_140 = fVar38 * fVar46 + fVar27 * fVar34 + fVar30 * fVar13 + fVar19 * fStack_d0;
    fStack_13c = fVar38 * fVar16 + fVar27 * fVar16 + fVar30 * fVar16 + fVar19 * fRam00000001468536ec
    ;
    local_138 = fVar15 * fVar32 + fVar28 * fVar24 + fVar39 * fVar47 + fVar19 * local_d8;
    fStack_134 = fVar15 * fVar14 + fVar28 * fVar45 + fVar39 * fVar33 + fVar19 * fStack_d4;
    fStack_130 = fVar15 * fVar46 + fVar28 * fVar34 + fVar39 * fVar13 + fVar19 * fStack_d0;
    fStack_12c = fVar15 * fVar16 + fVar28 * fVar16 + fVar39 * fVar16 + fVar19 * fRam00000001468536ec
    ;
    local_128 = fVar29 * fVar32 + fVar40 * fVar24 + fVar17 * fVar47 + fVar19 * local_d8;
    fStack_124 = fVar29 * fVar14 + fVar40 * fVar45 + fVar17 * fVar33 + fVar19 * fStack_d4;
    fStack_120 = fVar29 * fVar46 + fVar40 * fVar34 + fVar17 * fVar13 + fVar19 * fStack_d0;
    fStack_11c = fVar29 * fVar16 + fVar40 * fVar16 + fVar17 * fVar16 + fVar19 * fRam00000001468536ec
    ;
    local_118 = fVar25 * fVar32 + fVar31 * fVar24 + fVar26 * fVar47 +
                fRam00000001468536ec * local_d8;
    fStack_114 = fVar25 * fVar14 + fVar31 * fVar45 + fVar26 * fVar33 +
                 fRam00000001468536ec * fStack_d4;
    fStack_110 = fVar25 * fVar46 + fVar31 * fVar34 + fVar26 * fVar13 +
                 fRam00000001468536ec * fStack_d0;
    fStack_10c = fVar25 * fVar16 + fVar31 * fVar16 + fVar26 * fVar16 +
                 fRam00000001468536ec * fRam00000001468536ec;
    FMatrix::RemoveScaling(&local_148);
    fVar24 = (float)(-(uint)(_DAT_1468537b0 <= fVar48) & (_DAT_1468537a0 ^ (uint)fVar11) ^
                    _DAT_1468537a0);
    fVar27 = (float)(-(uint)(fRam00000001468537b4 <= fVar49) & (uRam00000001468537a4 ^ (uint)fVar18)
                    ^ uRam00000001468537a4);
    fVar14 = (float)(-(uint)(fRam00000001468537b8 <= fVar50) & (uRam00000001468537a8 ^ (uint)fVar20)
                    ^ uRam00000001468537a8);
    local_148 = local_148 * fVar24;
    fStack_140 = fStack_140 * fVar24;
    fStack_144 = fStack_144 * fVar24;
    fStack_130 = fStack_130 * fVar27;
    fStack_134 = fStack_134 * fVar27;
    local_138 = local_138 * fVar27;
    fStack_120 = fStack_120 * fVar14;
    local_128 = local_128 * fVar14;
    fStack_124 = fStack_124 * fVar14;
    FQuat::FQuat(local_f8,&local_148);
LAB_1405b038c:
    local_158 = 0x322bcc77;
    auVar12._0_4_ = (float)local_f8._0_4_ * (float)local_f8._0_4_ + fStack_f0 * fStack_f0;
    auVar12._4_4_ = (float)local_f8._4_4_ * (float)local_f8._4_4_ + fStack_ec * fStack_ec;
    auVar12._8_4_ = fStack_f0 * fStack_f0 + (float)local_f8._0_4_ * (float)local_f8._0_4_;
    auVar12._12_4_ = fStack_ec * fStack_ec + (float)local_f8._4_4_ * (float)local_f8._4_4_;
    fVar15 = auVar12._4_4_ + auVar12._0_4_;
    fVar17 = auVar12._8_4_ + auVar12._4_4_;
    fVar19 = auVar12._12_4_ + auVar12._8_4_;
    fVar31 = auVar12._0_4_ + auVar12._12_4_;
    auVar8._4_4_ = fVar17;
    auVar8._0_4_ = fVar15;
    auVar8._8_4_ = fVar19;
    auVar8._12_4_ = fVar31;
    auVar8 = rsqrtps(auVar12,auVar8);
    fVar24 = auVar8._0_4_;
    fVar27 = auVar8._4_4_;
    fVar14 = auVar8._8_4_;
    fVar30 = auVar8._12_4_;
    fVar24 = (_DAT_146853790 - fVar24 * fVar24 * fVar15 * _DAT_146853790) * fVar24 + fVar24;
    fVar27 = (fRam0000000146853794 - fVar27 * fVar27 * fVar17 * fRam0000000146853794) * fVar27 +
             fVar27;
    fVar14 = (fRam0000000146853798 - fVar14 * fVar14 * fVar19 * fRam0000000146853798) * fVar14 +
             fVar14;
    fVar30 = (fRam000000014685379c - fVar30 * fVar30 * fVar31 * fRam000000014685379c) * fVar30 +
             fVar30;
    fVar13 = 0.0;
    fVar15 = (float)(((uint)(((_DAT_146853790 - fVar24 * fVar24 * fVar15 * _DAT_146853790) * fVar24
                             + fVar24) * (float)local_f8._0_4_) ^ _DAT_146853780) &
                     -(uint)(1e-08 <= fVar15) ^ _DAT_146853780);
    fVar17 = (float)(((uint)(((fRam0000000146853794 -
                              fVar27 * fVar27 * fVar17 * fRam0000000146853794) * fVar27 + fVar27) *
                            (float)local_f8._4_4_) ^ uRam0000000146853784) &
                     -(uint)(1e-08 <= fVar17) ^ uRam0000000146853784);
    fVar19 = (float)(((uint)(((fRam0000000146853798 -
                              fVar14 * fVar14 * fVar19 * fRam0000000146853798) * fVar14 + fVar14) *
                            fStack_f0) ^ uRam0000000146853788) & -(uint)(1e-08 <= fVar19) ^
                    uRam0000000146853788);
    fVar30 = (float)(((uint)(((fRam000000014685379c -
                              fVar30 * fVar30 * fVar31 * fRam000000014685379c) * fVar30 + fVar30) *
                            fStack_ec) ^ uRam000000014685378c) & -(uint)(1e-08 <= fVar31) ^
                    uRam000000014685378c);
    fVar31 = local_118;
    fVar25 = fStack_114;
    fVar26 = fStack_110;
  }
  fVar44 = fVar37 * fVar44;
  fVar24 = fVar48;
  fVar27 = fVar49;
  fVar14 = fVar50;
LAB_1405b0947:
  lVar6 = *param_2;
  lVar7 = 0;
  if (((lVar6 != 0) && (param_2[1] != -1)) && (param_2[1] == *(longlong *)(lVar6 + 0xd0))) {
    *(int *)(lVar6 + 0x2e4) = *(int *)(lVar6 + 0x2e4) + 1;
    lVar7 = lVar6;
  }
  local_e8 = fVar15;
  fStack_e4 = fVar17;
  fStack_e0 = fVar19;
  fStack_dc = fVar30;
  local_d8 = fVar31;
  fStack_d4 = fVar25;
  fStack_d0 = fVar26;
  fStack_cc = fVar13;
  local_c8 = fVar24;
  fStack_c4 = fVar27;
  fStack_c0 = fVar14;
  fStack_bc = fVar44;
  FUN_1405aac00(lVar7,&local_e8,0x3f800000);
  FUN_1405ae630(lVar7);
  if (lVar7 != 0) {
    FUN_1405a53f0(lVar7);
  }
  return;
}



// FUNCTION 1405b0a40 FUN_1405b0a40 body=1254 status=ok
// SIG undefined FUN_1405b0a40(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405b0a40(ulonglong param_1,char param_2)

{
  undefined4 uVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [8];
  longlong lVar9;
  ulonglong uVar10;
  float *pfVar11;
  AkTransform *pAVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  uint uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  MultiPositionType MVar21;
  ulonglong uVar22;
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
  undefined8 uStack_120;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  float local_f0 [2];
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  float fStack_d0;
  undefined1 local_c8 [16];
  ulonglong local_b8;
  
  puVar14 = auStack_118;
  local_b8 = DAT_1468387a8 ^ (ulonglong)local_f8;
  if (param_1 != 0) {
    *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
  }
  if ((*(int *)(param_1 + 0x50) == 0) || ((*(longlong *)(param_1 + 0xe0) == 0 && (param_2 == '\0')))
     ) {
    *(undefined1 *)(param_1 + 0x138) = 1;
    goto LAB_1405b0ea8;
  }
  uVar22 = 0;
  MVar21 = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 700)) {
    uStack_120 = 0x1405b0b02;
    TArray<int,TInlineAllocator<1,FDefaultAllocator>_>::ResizeTo(param_1 + 0x2a8,0);
  }
  uVar17 = 0x80;
  if (*(int *)(param_1 + 0x50) < 0x81) {
    uVar17 = *(uint *)(param_1 + 0x50);
  }
  lVar9 = (longlong)(int)uVar17 * 0x30;
  puVar14 = auStack_118;
  if (lVar9 == 0) goto LAB_1405b0ea8;
  uVar10 = lVar9 + 0x1e;
  if (uVar10 <= lVar9 + 0xfU) {
    uVar10 = 0xffffffffffffff0;
  }
  uStack_120 = 0x1405b0b48;
  lVar9 = -(uVar10 & 0xfffffffffffffff0);
  pAVar12 = (AkTransform *)((longlong)local_f0 + lVar9);
  puVar14 = auStack_118 + lVar9;
  if (pAVar12 == (AkTransform *)0x0) goto LAB_1405b0ea8;
  if (0 < (int)uVar17) {
    fVar31 = (float)DAT_143f4d530;
    fVar29 = DAT_143f4d530._4_4_;
    fVar30 = DAT_143f4d530._8_4_;
    puVar16 = (ulonglong *)(local_e8 + lVar9 + 4);
    local_c8._8_4_ = fVar31;
    local_c8._0_8_ = DAT_143f4d530._4_8_;
    local_c8._12_4_ = DAT_143f4d530._12_4_;
    uVar20 = (ulonglong)uVar17;
    uVar10 = uVar22;
    do {
      uVar15 = *(ulonglong *)(param_1 + 0x40);
      if (*(ulonglong *)(param_1 + 0x40) == 0) {
        uVar15 = param_1;
      }
      pfVar11 = (float *)(uVar15 + uVar10);
      fVar4 = *pfVar11;
      fVar5 = pfVar11[1];
      fVar6 = pfVar11[2];
      fVar7 = pfVar11[3];
      local_f0[0] = pfVar11[5];
      fVar23 = fVar5 * 0.0 - fVar6 * 0.0;
      fVar25 = fVar6 * 1.0 - fVar4 * 0.0;
      fVar27 = fVar4 * 0.0 - fVar5 * 1.0;
      fVar23 = fVar23 + fVar23;
      fVar25 = fVar25 + fVar25;
      fVar27 = fVar27 + fVar27;
      fStack_d0 = (fVar23 * fVar6 - fVar27 * fVar4) + fVar7 * fVar25 + 0.0;
      fVar24 = fVar5 * fVar30 - fVar6 * fVar29;
      fVar26 = fVar6 * fVar31 - fVar4 * fVar30;
      fVar28 = fVar4 * fVar29 - fVar5 * fVar31;
      fVar24 = fVar24 + fVar24;
      fVar26 = fVar26 + fVar26;
      fVar28 = fVar28 + fVar28;
      *(ulonglong *)((longlong)puVar16 + 0xc) = CONCAT44(pfVar11[6],pfVar11[4]) ^ 0x80000000;
      *(float *)((longlong)puVar16 + 0x14) = local_f0[0];
      fVar32 = (fVar24 * fVar6 - fVar28 * fVar4) + fVar7 * fVar26 + fVar29;
      *(ulonglong *)((longlong)puVar16 + -0xc) =
           CONCAT44((fVar25 * fVar4 - fVar23 * fVar5) + fVar7 * fVar27 + 0.0,
                    (fVar27 * fVar5 - fVar25 * fVar6) + fVar7 * fVar23 + 1.0) ^ 0x80000000;
      *(float *)((longlong)puVar16 + -4) = fStack_d0;
      *puVar16 = CONCAT44((fVar26 * fVar4 - fVar24 * fVar5) + fVar7 * fVar28 + fVar30,
                          (fVar28 * fVar5 - fVar26 * fVar6) + fVar7 * fVar24 + fVar31) ^ 0x80000000;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,fVar32);
      *(float *)(puVar16 + 1) = fVar32;
      *(undefined4 *)(puVar16 + 3) = 0x3ff3f;
      uVar10 = uVar10 + 0x40;
      *(float *)((longlong)puVar16 + 0x1c) = pfVar11[0xc];
      *(float *)(puVar16 + 4) = pfVar11[8];
      puVar16 = puVar16 + 6;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  if (uVar17 == 1) {
    if ((1.0 < *(float *)(local_c8 + lVar9 + 4) || *(float *)(local_c8 + lVar9 + 4) == 1.0) ||
       (*(float *)(local_c8 + lVar9) != 1.0)) goto LAB_1405b0d40;
    _Var2 = *(__uint64 *)(param_1 + 0xd0);
    *(undefined8 *)(auStack_118 + lVar9 + -8) = 0x1405b0d34;
    AK::SoundEngine::SetPosition(_Var2,pAVar12);
  }
  else {
    MVar21 = (MultiPositionType)*(byte *)(param_1 + 0x60);
LAB_1405b0d40:
    _Var2 = *(__uint64 *)(param_1 + 0xd0);
    *(undefined8 *)(auStack_118 + lVar9 + -8) = 0x1405b0d4c;
    AK::SoundEngine::SetMultiplePositions(_Var2,(AkChannelEmitter *)pAVar12,(ushort)uVar17,MVar21);
  }
  *(undefined1 *)(param_1 + 0x138) = 0;
  fVar31 = 0.0;
  uVar10 = *(ulonglong *)(param_1 + 0x40);
  if (*(ulonglong *)(param_1 + 0x40) == 0) {
    uVar10 = param_1;
  }
  uVar15 = (longlong)*(int *)(param_1 + 0x50) * 0x40 + uVar10;
  uVar20 = uVar22;
  if (uVar10 < uVar15) {
    puVar16 = *(ulonglong **)(param_1 + 0x110);
    if (*(ulonglong **)(param_1 + 0x110) == (ulonglong *)0x0) {
      puVar16 = (ulonglong *)(param_1 + 0x100);
    }
    uVar19 = (longlong)*(int *)(param_1 + 0x118) & 0x1fffffffffffffff;
    if (puVar16 + *(int *)(param_1 + 0x118) < puVar16) {
      uVar19 = uVar22;
    }
    do {
      auVar8 = local_e8;
      if (uVar19 != 0) {
        auVar8 = *(undefined1 (*) [8])(uVar10 + 0x10);
        uStack_e0 = *(undefined8 *)(uVar10 + 0x18);
        local_e8._4_4_ = (undefined4)((ulonglong)auVar8 >> 0x20);
        local_e8._0_4_ = SUB84(auVar8,0);
        uVar13 = uVar22;
        puVar18 = puVar16;
        do {
          uVar3 = *puVar18;
          local_f0[0] = *(float *)(uVar3 + 0x2e8);
          fVar29 = (float)local_e8._0_4_ - (float)*(undefined8 *)(uVar3 + 0x2e0);
          fVar30 = (float)local_e8._4_4_ -
                   (float)((ulonglong)*(undefined8 *)(uVar3 + 0x2e0) >> 0x20);
          fVar29 = fVar30 * fVar30 + fVar29 * fVar29 +
                   ((float)uStack_e0 - local_f0[0]) * ((float)uStack_e0 - local_f0[0]);
          if ((uVar20 == 0) || (fVar29 < fVar31)) {
            uVar20 = uVar3;
            fVar31 = fVar29;
          }
          puVar18 = puVar18 + 1;
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar19);
      }
      local_e8 = auVar8;
      uVar10 = uVar10 + 0x40;
    } while (uVar10 < uVar15);
  }
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x120) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x128) = DAT_1468b5d98;
  puVar14 = auStack_118 + lVar9;
  if (uVar20 != 0) {
    *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(uVar20 + 0x2e0);
    uVar1 = *(undefined4 *)(uVar20 + 0x2e8);
    *(float *)(param_1 + 300) = fVar31;
    *(undefined4 *)(param_1 + 0x128) = uVar1;
    puVar14 = auStack_118 + lVar9;
  }
LAB_1405b0ea8:
  *(undefined8 *)(puVar14 + -8) = 0x1405b0eb0;
  FUN_1405a53f0(param_1);
  *(undefined8 *)(puVar14 + -8) = 0x1405b0ebc;
  return;
}



// FUNCTION 1405b0f30 FUN_1405b0f30 body=2198 status=ok
// SIG undefined FUN_1405b0f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405b0f30(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 uVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar23;
  uint uVar24;
  uint uVar27;
  uint uVar28;
  undefined1 auVar25 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar26 [16];
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
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [8];
  undefined8 uStack_160;
  undefined1 local_158 [8];
  undefined8 uStack_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [8];
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
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
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x2e4) = *(int *)(lVar1 + 0x2e4) + 1, lVar1 == 0)) {
    uVar9 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x2f0) == 0) {
      uVar24 = *(uint *)(param_1 + 0x230) & _DAT_1468537c0;
      uVar27 = *(uint *)(param_1 + 0x234) & uRam00000001468537c4;
      auVar49._4_4_ = uVar27;
      auVar49._0_4_ = uVar24;
      uVar28 = *(uint *)(param_1 + 0x238) & uRam00000001468537c8;
      auVar25._12_4_ = *(uint *)(param_1 + 0x23c) & uRam00000001468537cc;
      auVar49._8_4_ = uVar28;
      auVar49._12_4_ = auVar25._12_4_;
      auVar18._4_4_ = uVar28;
      auVar18._0_4_ = uVar27;
      auVar18._8_4_ = uVar24;
      auVar18._12_4_ = auVar25._12_4_;
      auVar50 = minps(auVar49,auVar18);
      local_118 = *(undefined8 *)(param_1 + 0x210);
      uStack_110 = *(undefined8 *)(param_1 + 0x218);
      auVar25._4_4_ = uVar24;
      auVar25._0_4_ = uVar28;
      auVar25._8_4_ = uVar27;
      auVar50 = minps(auVar50,auVar25);
      fVar48 = auVar50._0_4_ * 50.0;
      FQuat::Rotator(&local_118,local_138);
      auVar50 = *(undefined1 (*) [16])(param_1 + 0x220);
      uVar10 = *(undefined4 *)(param_1 + 0x2e4);
      FRotator::Quaternion(local_138,&local_128);
      local_178 = CONCAT44(fStack_124,local_128);
      uStack_170 = CONCAT44(fStack_11c,fStack_120);
      uStack_160._4_4_ = 0;
      _local_168 = auVar50._0_12_;
      local_158._4_4_ = fVar48;
      local_158._0_4_ = fVar48;
      uStack_150._0_4_ = fVar48;
      uStack_150._4_4_ = 0;
      FUN_1405aac00(lVar1,&local_178,uVar10);
    }
    else {
      pfVar12 = (float *)(param_1 + 0x210);
      if (*(char *)(param_1 + 0x2f8) == '\0') {
        pfVar12 = (float *)&DAT_1468b5b70;
      }
      local_128 = *(float *)*(undefined1 (*) [16])(pfVar12 + 8);
      fStack_124 = pfVar12[9];
      fStack_120 = pfVar12[10];
      fStack_11c = pfVar12[0xb];
      _local_138 = *(undefined1 (*) [16])(pfVar12 + 8);
      fVar48 = pfVar12[4];
      fVar33 = pfVar12[5];
      local_118 = *(undefined8 *)(pfVar12 + 4);
      fVar36 = pfVar12[6];
      fVar37 = pfVar12[7];
      uStack_110 = *(undefined8 *)(pfVar12 + 6);
      fVar3 = *pfVar12;
      fVar4 = pfVar12[1];
      fVar5 = pfVar12[2];
      fVar6 = pfVar12[3];
      if (((0.0001 < ABS(local_128 - fStack_124)) || (0.0001 < ABS(local_128 - fStack_120))) ||
         (fVar29 = local_128, fVar30 = fStack_124, fVar31 = fStack_120, fVar32 = fStack_11c,
         0.0001 < ABS(fStack_124 - fStack_120))) {
        fVar29 = ABS(fStack_124);
        if (ABS(local_128) <= ABS(fStack_124)) {
          fVar29 = ABS(local_128);
        }
        if (ABS(fStack_120) <= fVar29) {
          fVar29 = ABS(fStack_120);
        }
        fVar32 = 0.0;
        local_138._4_4_ = fVar29;
        local_138._0_4_ = fVar29;
        fStack_130 = fVar29;
        fStack_12c = 0.0;
        fVar30 = fVar29;
        fVar31 = fVar29;
      }
      if (*(char *)(param_1 + 0x2f8) == '\0') {
        fVar44 = 1.0;
      }
      else {
        fVar44 = *(float *)(param_1 + 0x2e4);
      }
      FUN_1405aa840(lVar1,*(int *)(param_1 + 0x2f0),1);
      iVar16 = 0;
      if (0 < *(int *)(param_1 + 0x2f0)) {
        lVar15 = 0;
        lVar14 = 0;
        fVar39 = fVar6;
        fVar34 = fVar6;
        fVar42 = fVar6;
        fVar35 = fVar6;
        local_d8 = fVar6;
        fStack_d4 = fVar6;
        fStack_d0 = fVar6;
        fStack_cc = fVar6;
        do {
          lVar13 = *(longlong *)(lVar1 + 0x40);
          if (*(longlong *)(lVar1 + 0x40) == 0) {
            lVar13 = lVar1;
          }
          *(float *)(lVar13 + 0x30 + lVar15) =
               fVar44 * *(float *)(lVar14 + 0x1c + *(longlong *)(param_1 + 0x2e8));
          lVar13 = *(longlong *)(param_1 + 0x2e8);
          fVar22 = *(float *)(lVar14 + 0x18 + lVar13);
          uVar10 = FRotator::Quaternion(lVar13 + 0xc + (longlong)iVar16 * 0x20,&local_f8);
          fVar23 = fRam00000001468536e8;
          fVar21 = fRam00000001468536e4;
          fVar17 = _DAT_1468536e0;
          fVar56 = *(float *)(lVar14 + 8 + lVar13);
          fVar55 = *(float *)(lVar14 + 4 + lVar13);
          fVar54 = *(float *)(lVar14 + lVar13);
          auVar19._4_4_ = fVar22;
          auVar19._0_4_ = fVar22;
          auVar19._8_4_ = fVar22;
          auVar19._12_4_ = 0;
          local_e8 = _DAT_1468537b0;
          fStack_e4 = fRam00000001468537b4;
          fStack_e0 = fRam00000001468537b8;
          fStack_dc = fRam00000001468537bc;
          auVar50._4_4_ = fVar30;
          auVar50._0_4_ = fVar29;
          auVar50._8_4_ = fVar31;
          auVar50._12_4_ = fVar32;
          auVar50 = minps(auVar19,auVar50);
          auVar20._4_4_ = -(uint)(auVar50._4_4_ < fRam00000001468537b4);
          auVar20._0_4_ = -(uint)(auVar50._0_4_ < _DAT_1468537b0);
          auVar20._8_4_ = -(uint)(auVar50._8_4_ < fRam00000001468537b8);
          auVar20._12_4_ = -(uint)(auVar50._12_4_ < fRam00000001468537bc);
          iVar11 = movmskps(uVar10,auVar20);
          if (iVar11 == 0) {
            fVar54 = fVar54 * fVar29;
            fVar55 = fVar55 * fVar30;
            fVar56 = fVar56 * fVar31;
            fVar52 = fVar32 * 0.0;
            fVar45 = fStack_ec * fVar3 * _DAT_146853770 + fVar39 * local_f8 +
                     fStack_f0 * fVar4 * _DAT_146853760 + fStack_f4 * fVar5 * _DAT_146853750;
            fVar46 = fStack_f0 * fVar3 * fRam0000000146853774 + fVar34 * fStack_f4 +
                     fStack_ec * fVar4 * fRam0000000146853764 +
                     local_f8 * fVar5 * fRam0000000146853754;
            fVar47 = fStack_f4 * fVar3 * fRam0000000146853778 + fVar42 * fStack_f0 +
                     local_f8 * fVar4 * fRam0000000146853768 +
                     fStack_ec * fVar5 * fRam0000000146853758;
            fVar51 = local_f8 * fVar3 * fRam000000014685377c + fVar35 * fStack_ec +
                     fStack_f4 * fVar4 * fRam000000014685376c +
                     fStack_f0 * fVar5 * fRam000000014685375c;
            fVar38 = fVar56 * fVar4 - fVar55 * fVar5;
            fVar40 = fVar54 * fVar5 - fVar56 * fVar3;
            fVar41 = fVar55 * fVar3 - fVar54 * fVar4;
            fVar43 = fVar52 * fVar6 - fVar52 * fVar6;
            fVar38 = fVar38 + fVar38;
            fVar40 = fVar40 + fVar40;
            fVar41 = fVar41 + fVar41;
            fVar43 = fVar43 + fVar43;
            fVar17 = fVar22 * fVar29;
            fVar21 = fVar22 * fVar30;
            fVar22 = fVar22 * fVar31;
            fVar23 = fVar32 * 0.0;
            fVar54 = (fVar41 * fVar4 - fVar40 * fVar5) + fVar38 * fVar39 + fVar54 + fVar48;
            fVar55 = (fVar38 * fVar5 - fVar41 * fVar3) + fVar40 * fVar34 + fVar55 + fVar33;
            fVar56 = (fVar40 * fVar3 - fVar38 * fVar4) + fVar41 * fVar42 + fVar56 + fVar36;
            fVar38 = (fVar43 * fVar6 - fVar43 * fVar6) + fVar43 * fVar35 + fVar52 + fVar37;
          }
          else {
            fVar33 = fVar4 + fVar4;
            fVar36 = fVar5 + fVar5;
            local_128 = fVar22 * fVar29;
            fStack_124 = fVar22 * fVar30;
            fStack_120 = fVar22 * fVar31;
            fStack_11c = fVar32 * 0.0;
            fVar38 = (fVar3 + fVar3) * fVar3;
            fVar34 = (fVar3 + fVar3) * fVar34;
            fVar35 = fStack_f4 + fStack_f4;
            fVar37 = fStack_f0 + fStack_f0;
            fVar51 = (fVar36 * fVar39 + fVar33 * fVar3) * fVar29;
            fVar52 = (fVar34 + fVar36 * fVar4) * fVar30;
            fVar53 = (fVar33 * fVar42 + fVar36 * fVar3) * fVar31;
            fVar40 = fVar30 * (fVar33 * fVar3 - fVar36 * fVar39);
            fVar41 = fVar31 * (fVar36 * fVar4 - fVar34);
            fVar43 = fVar29 * (fVar36 * fVar3 - fVar33 * fVar42);
            fVar39 = (local_f8 + local_f8) * local_f8;
            fVar48 = (float)((uint)((_DAT_1468536e0 - (fVar36 * fVar5 + fVar33 * fVar4)) * fVar29) &
                            _DAT_1468536f0);
            fVar36 = (float)((uint)((fRam00000001468536e4 - (fVar36 * fVar5 + fVar38)) * fVar30) &
                            uRam00000001468536f4);
            fVar29 = (float)((uint)((fRam00000001468536e8 - (fVar33 * fVar4 + fVar38)) * fVar31) &
                            uRam00000001468536f8);
            fVar31 = (float)((uint)((fRam00000001468536ec - (fVar38 + fVar38)) * fVar32) &
                            uRam00000001468536fc);
            fVar33 = (local_f8 + local_f8) * fStack_ec;
            fVar45 = (fVar37 * fStack_ec + fVar35 * local_f8) * fVar22;
            fVar46 = (fVar33 + fVar37 * fStack_f4) * fVar22;
            fVar47 = (fVar35 * fStack_ec + fVar37 * local_f8) * fVar22;
            fVar34 = fVar22 * (fVar35 * local_f8 - fVar37 * fStack_ec);
            fVar42 = fVar22 * (fVar37 * fStack_f4 - fVar33);
            fVar38 = fVar22 * (fVar37 * local_f8 - fVar35 * fStack_ec);
            fVar33 = (float)((uint)((_DAT_1468536e0 - (fVar37 * fStack_f0 + fVar35 * fStack_f4)) *
                                   fVar22) & _DAT_1468536f0);
            fVar37 = (float)((uint)((fRam00000001468536e4 - (fVar37 * fStack_f0 + fVar39)) * fVar22)
                            & uRam00000001468536f4);
            fVar30 = (float)((uint)((fRam00000001468536e8 - (fVar35 * fStack_f4 + fVar39)) * fVar22)
                            & uRam00000001468536f8);
            fVar32 = (float)((uint)((fRam00000001468536ec - (fVar39 + fVar39)) * 0.0) &
                            uRam00000001468536fc);
            local_178._0_4_ =
                 fVar45 * fVar40 + fVar33 * fVar48 + fVar38 * fVar53 + fVar32 * (float)local_118;
            local_178._4_4_ =
                 fVar45 * fVar36 + fVar33 * fVar51 + fVar38 * fVar41 + fVar32 * local_118._4_4_;
            uStack_170._0_4_ =
                 fVar45 * fVar52 + fVar33 * fVar43 + fVar38 * fVar29 + fVar32 * (float)uStack_110;
            uStack_170._4_4_ =
                 fVar45 * fVar31 + fVar33 * fVar31 + fVar38 * fVar31 + fVar32 * fRam00000001468536ec
            ;
            local_168._4_4_ =
                 fVar37 * fVar36 + fVar34 * fVar51 + fVar46 * fVar41 + fVar32 * local_118._4_4_;
            local_168._0_4_ =
                 fVar37 * fVar40 + fVar34 * fVar48 + fVar46 * fVar53 + fVar32 * (float)local_118;
            uStack_160._0_4_ =
                 fVar37 * fVar52 + fVar34 * fVar43 + fVar46 * fVar29 + fVar32 * (float)uStack_110;
            uStack_160._4_4_ =
                 fVar37 * fVar31 + fVar34 * fVar31 + fVar46 * fVar31 + fVar32 * fRam00000001468536ec
            ;
            local_158._4_4_ =
                 fVar42 * fVar36 + fVar47 * fVar51 + fVar30 * fVar41 + fVar32 * local_118._4_4_;
            local_158._0_4_ =
                 fVar42 * fVar40 + fVar47 * fVar48 + fVar30 * fVar53 + fVar32 * (float)local_118;
            uStack_150._0_4_ =
                 fVar42 * fVar52 + fVar47 * fVar43 + fVar30 * fVar29 + fVar32 * (float)uStack_110;
            uStack_150._4_4_ =
                 fVar42 * fVar31 + fVar47 * fVar31 + fVar30 * fVar31 + fVar32 * fRam00000001468536ec
            ;
            local_148 = fVar55 * fVar40 + fVar54 * fVar48 + fVar56 * fVar53 +
                        fRam00000001468536ec * (float)local_118;
            fStack_144 = fVar55 * fVar36 + fVar54 * fVar51 + fVar56 * fVar41 +
                         fRam00000001468536ec * local_118._4_4_;
            fStack_140 = fVar55 * fVar52 + fVar54 * fVar43 + fVar56 * fVar29 +
                         fRam00000001468536ec * (float)uStack_110;
            fStack_13c = fVar55 * fVar31 + fVar54 * fVar31 + fVar56 * fVar31 +
                         fRam00000001468536ec * fRam00000001468536ec;
            FMatrix::RemoveScaling(&local_178);
            auVar19 = _local_158;
            auVar50 = _local_168;
            fVar48 = (float)(-(uint)(local_e8 <= local_128) & (_DAT_1468537a0 ^ (uint)fVar17) ^
                            _DAT_1468537a0);
            fVar33 = (float)(-(uint)(fStack_e4 <= fStack_124) &
                             (uRam00000001468537a4 ^ (uint)fVar21) ^ uRam00000001468537a4);
            fVar37 = (float)(-(uint)(fStack_e0 <= fStack_120) &
                             (uRam00000001468537a8 ^ (uint)fVar23) ^ uRam00000001468537a8);
            local_178 = CONCAT44(local_178._4_4_ * fVar48,(float)local_178 * fVar48);
            uStack_170 = CONCAT44(uStack_170._4_4_,(float)uStack_170 * fVar48);
            fVar48 = (float)uStack_160 * fVar33;
            fVar36 = (float)local_168._0_4_ * fVar33;
            auVar7._4_8_ = uStack_160;
            auVar7._0_4_ = (float)local_168._4_4_ * fVar33;
            local_168 = (undefined1  [8])(auVar7._0_8_ << 0x20);
            uStack_160._4_4_ = auVar50._12_4_;
            uStack_160._0_4_ = fVar48;
            fVar48 = (float)uStack_150 * fVar37;
            fVar33 = (float)local_158._0_4_ * fVar37;
            auVar8._4_8_ = uStack_150;
            auVar8._0_4_ = (float)local_158._4_4_ * fVar37;
            local_158 = (undefined1  [8])(auVar8._0_8_ << 0x20);
            uStack_150._4_4_ = auVar19._12_4_;
            uStack_150._0_4_ = fVar48;
            local_168._0_4_ = fVar36;
            local_158._0_4_ = fVar33;
            FQuat::FQuat(&local_108,&local_178);
            auVar26._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
            auVar26._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
            auVar26._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
            auVar26._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
            fVar29 = auVar26._4_4_ + auVar26._0_4_;
            fVar30 = auVar26._8_4_ + auVar26._4_4_;
            fVar31 = auVar26._12_4_ + auVar26._8_4_;
            fVar32 = auVar26._0_4_ + auVar26._12_4_;
            auVar2._4_4_ = fVar30;
            auVar2._0_4_ = fVar29;
            auVar2._8_4_ = fVar31;
            auVar2._12_4_ = fVar32;
            auVar50 = rsqrtps(auVar26,auVar2);
            fVar48 = auVar50._0_4_;
            fVar33 = auVar50._4_4_;
            fVar36 = auVar50._8_4_;
            fVar37 = auVar50._12_4_;
            fVar48 = (_DAT_146853790 - fVar48 * fVar48 * fVar29 * _DAT_146853790) * fVar48 + fVar48;
            fVar33 = (fRam0000000146853794 - fVar33 * fVar33 * fVar30 * fRam0000000146853794) *
                     fVar33 + fVar33;
            fVar36 = (fRam0000000146853798 - fVar36 * fVar36 * fVar31 * fRam0000000146853798) *
                     fVar36 + fVar36;
            fVar37 = (fRam000000014685379c - fVar37 * fVar37 * fVar32 * fRam000000014685379c) *
                     fVar37 + fVar37;
            fVar38 = 0.0;
            fVar45 = (float)(((uint)(((_DAT_146853790 - fVar48 * fVar48 * fVar29 * _DAT_146853790) *
                                      fVar48 + fVar48) * local_108) ^ _DAT_146853780) &
                             -(uint)(1e-08 <= fVar29) ^ _DAT_146853780);
            fVar46 = (float)(((uint)(((fRam0000000146853794 -
                                      fVar33 * fVar33 * fVar30 * fRam0000000146853794) * fVar33 +
                                     fVar33) * fStack_104) ^ uRam0000000146853784) &
                             -(uint)(1e-08 <= fVar30) ^ uRam0000000146853784);
            fVar47 = (float)(((uint)(((fRam0000000146853798 -
                                      fVar36 * fVar36 * fVar31 * fRam0000000146853798) * fVar36 +
                                     fVar36) * fStack_100) ^ uRam0000000146853788) &
                             -(uint)(1e-08 <= fVar31) ^ uRam0000000146853788);
            fVar51 = (float)(((uint)(((fRam000000014685379c -
                                      fVar37 * fVar37 * fVar32 * fRam000000014685379c) * fVar37 +
                                     fVar37) * fStack_fc) ^ uRam000000014685378c) &
                             -(uint)(1e-08 <= fVar32) ^ uRam000000014685378c);
            fVar54 = local_148;
            fVar55 = fStack_144;
            fVar56 = fStack_140;
            fVar29 = (float)local_138._0_4_;
            fVar30 = (float)local_138._4_4_;
            fVar31 = fStack_130;
            fVar32 = fStack_12c;
            fVar48 = (float)local_118;
            fVar33 = local_118._4_4_;
            fVar36 = (float)uStack_110;
            fVar37 = uStack_110._4_4_;
            fVar17 = local_128;
            fVar21 = fStack_124;
            fVar22 = fStack_120;
            fVar23 = fStack_11c;
            fVar39 = local_d8;
            fVar34 = fStack_d4;
            fVar42 = fStack_d0;
            fVar35 = fStack_cc;
            local_108 = fVar45;
            fStack_104 = fVar46;
            fStack_100 = fVar47;
            fStack_fc = fVar51;
          }
          lVar13 = *(longlong *)(lVar1 + 0x40);
          if (*(longlong *)(lVar1 + 0x40) == 0) {
            lVar13 = lVar1;
          }
          iVar16 = iVar16 + 1;
          lVar14 = lVar14 + 0x20;
          pfVar12 = (float *)(lVar13 + lVar15);
          *pfVar12 = fVar45;
          pfVar12[1] = fVar46;
          pfVar12[2] = fVar47;
          pfVar12[3] = fVar51;
          pfVar12 = (float *)(lVar13 + 0x10 + lVar15);
          *pfVar12 = fVar54;
          pfVar12[1] = fVar55;
          pfVar12[2] = fVar56;
          pfVar12[3] = fVar38;
          pfVar12 = (float *)(lVar13 + 0x20 + lVar15);
          *pfVar12 = fVar17;
          pfVar12[1] = fVar21;
          pfVar12[2] = fVar22;
          pfVar12[3] = fVar23;
          lVar15 = lVar15 + 0x40;
        } while (iVar16 < *(int *)(param_1 + 0x2f0));
      }
      FUN_1405b0a40(lVar1,0);
    }
    uVar9 = 0;
  }
  *(undefined1 *)(param_1 + 0x400) = uVar9;
  if (lVar1 != 0) {
    FUN_1405a53f0(lVar1);
  }
  return;
}



// FUNCTION 1405b17d0 FUN_1405b17d0 body=144 status=ok
// SIG undefined FUN_1405b17d0(void)

void FUN_1405b17d0(longlong param_1)

{
  float fVar1;
  float fVar2;
  
  if ((*(char *)(param_1 + 0x401) != '\0') && (*(char *)(param_1 + 0x402) == '\0')) {
    if (((*(longlong *)(param_1 + 0x378) == 0) ||
        (*(longlong *)(*(longlong *)(param_1 + 0x378) + 0xe0) == 0)) &&
       (*(longlong *)(param_1 + 0x2d0) == 0)) {
      FUN_1405a6580(DAT_1468536c8,param_1);
      return;
    }
    if (*(longlong *)(param_1 + 0x2d0) == 0) {
      fVar2 = 0.0;
    }
    else {
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x2d0) + 0x38);
    }
    fVar1 = (float)FUN_14059ca00();
    if (fVar2 <= fVar1) {
      fVar2 = fVar1;
    }
    FUN_1405aa0d0(DAT_1468536c8,param_1,fVar2);
  }
  return;
}



// FUNCTION 1405b1860 FUN_1405b1860 body=581 status=ok
// SIG undefined FUN_1405b1860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405b1860(ulonglong param_1,double param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_58;
  float fStack_54;
  float fStack_50;
  
  if (((*(longlong *)(param_1 + 0xd0) != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
     (*(char *)(param_1 + 0xd8) == '\0')) {
    fVar14 = 0.0;
    uVar5 = 0;
    *(undefined1 *)(param_1 + 0x139) = 0;
    uVar10 = *(ulonglong *)(param_1 + 0x40);
    if (*(ulonglong *)(param_1 + 0x40) == 0) {
      uVar10 = param_1;
    }
    uVar7 = (longlong)*(int *)(param_1 + 0x50) * 0x40 + uVar10;
    uVar8 = uVar5;
    if (uVar10 < uVar7) {
      puVar6 = *(ulonglong **)(param_1 + 0x110);
      if (*(ulonglong **)(param_1 + 0x110) == (ulonglong *)0x0) {
        puVar6 = (ulonglong *)(param_1 + 0x100);
      }
      uVar9 = (longlong)*(int *)(param_1 + 0x118) & 0x1fffffffffffffff;
      if (puVar6 + *(int *)(param_1 + 0x118) < puVar6) {
        uVar8 = 0;
        uVar9 = uVar5;
      }
      do {
        if (uVar9 != 0) {
          fStack_50 = (float)*(undefined8 *)(uVar10 + 0x18);
          fStack_54 = (float)((ulonglong)*(undefined8 *)(uVar10 + 0x10) >> 0x20);
          local_58 = (float)*(undefined8 *)(uVar10 + 0x10);
          uVar3 = uVar5;
          puVar4 = puVar6;
          do {
            uVar2 = *puVar4;
            fVar12 = local_58 - (float)*(undefined8 *)(uVar2 + 0x2e0);
            fVar13 = fStack_54 - (float)((ulonglong)*(undefined8 *)(uVar2 + 0x2e0) >> 0x20);
            fVar11 = fStack_50 - *(float *)(uVar2 + 0x2e8);
            fVar11 = fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11;
            if ((uVar8 == 0) || (fVar11 < fVar14)) {
              uVar8 = uVar2;
              fVar14 = fVar11;
            }
            puVar4 = puVar4 + 1;
            uVar3 = uVar3 + 1;
          } while (uVar3 != uVar9);
        }
        uVar10 = uVar10 + 0x40;
      } while (uVar10 < uVar7);
    }
    *(undefined4 *)(param_1 + 300) = 0;
    *(undefined8 *)(param_1 + 0x120) = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x128) = DAT_1468b5d98;
    if (uVar8 != 0) {
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(uVar8 + 0x2e0);
      uVar1 = *(undefined4 *)(uVar8 + 0x2e8);
      *(float *)(param_1 + 300) = fVar14;
      *(undefined4 *)(param_1 + 0x128) = uVar1;
    }
    fVar14 = (float)((double)*(float *)(param_1 + 0x13c) - param_2);
    *(float *)(param_1 + 0x13c) = fVar14;
    if (((*(char *)(param_1 + 0x62) != '\0') && ((param_2 == 0.0 || (fVar14 <= 0.0)))) &&
       (fVar14 = (float)FUN_14059ca00(param_1), *(float *)(param_1 + 300) <= fVar14 * fVar14)) {
      FUN_1405a6ba0(param_1);
    }
  }
  return;
}



// FUNCTION 1405b1ab0 FUN_1405b1ab0 body=1281 status=ok
// SIG undefined FUN_1405b1ab0(void)

void FUN_1405b1ab0(longlong *param_1,float param_2)

{
  longlong lVar1;
  AKRESULT AVar2;
  int iVar3;
  longlong *plVar4;
  __uint64 _Var5;
  undefined8 *puVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_a8;
  float local_a0;
  undefined1 local_9c [20];
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  if (((param_1[0x6f] != 0) && (*(int *)((longlong)param_1 + 0x42c) != 0)) &&
     ((plVar4 = (longlong *)FUN_14238b320(), plVar4 != (longlong *)0x0 ||
      (plVar4 = (longlong *)param_1[0x23], plVar4 != (longlong *)0x0)))) {
    (**(code **)(*plVar4 + 0x308))(plVar4,&local_d8);
    fVar7 = local_d4 * local_d4;
    fVar14 = local_d8 * local_d8;
    fVar10 = local_d0 * local_d0;
    _Var5 = (**(code **)(*param_1 + 0x548))(param_1);
    AVar2 = AK::SoundEngine::SetRTPCValue(0xbf62fa7e,SQRT(fVar14 + fVar7 + fVar10),_Var5,0,4,false);
    lVar1 = plVar4[0x2d];
    if (lVar1 == 0) {
      uVar8 = (undefined4)DAT_1468b5da0;
      uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_b0 = (float)DAT_1468b5da8;
    }
    else {
      local_88 = *(float *)(lVar1 + 0x210);
      fStack_84 = *(float *)(lVar1 + 0x214);
      fStack_80 = *(float *)(lVar1 + 0x218);
      fStack_7c = *(float *)(lVar1 + 0x21c);
      auVar13._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_84);
      auVar13._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_88);
      auVar13._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_80);
      auVar13._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_7c);
      iVar3 = movmskps(AVar2,auVar13);
      if (iVar3 != 0) {
        *(float *)(lVar1 + 0x250) = local_88;
        *(float *)(lVar1 + 0x254) = fStack_84;
        *(float *)(lVar1 + 600) = fStack_80;
        *(float *)(lVar1 + 0x25c) = fStack_7c;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_88,local_9c);
        *(undefined8 *)(lVar1 + 0x260) = *puVar6;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      uVar8 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
      local_b0 = (float)*(undefined4 *)(lVar1 + 0x268);
    }
    local_b8 = CONCAT44(uVar9,uVar8);
    local_a8 = local_b8;
    local_a0 = local_b0;
    FRotator::Vector(&local_a8,&local_c8);
    fVar10 = 0.0;
    fVar7 = 0.0;
    if (0.0001 < param_2) {
      fVar7 = *(float *)((longlong)param_1 + 0x394) - fStack_c4;
      fVar7 = SQRT(fVar7 * fVar7 +
                   (*(float *)(param_1 + 0x72) - local_c8) * (*(float *)(param_1 + 0x72) - local_c8)
                   + (*(float *)(param_1 + 0x73) - local_c0) *
                     (*(float *)(param_1 + 0x73) - local_c0)) * (1.0 / param_2);
    }
    param_1[0x72] = CONCAT44(fStack_c4,local_c8);
    *(float *)(param_1 + 0x73) = local_c0;
    _Var5 = (**(code **)(*param_1 + 0x548))(param_1);
    AK::SoundEngine::SetRTPCValue(0x452b4474,fVar7,_Var5,0,4,false);
    lVar1 = param_1[0x6f];
    if (*(int *)(lVar1 + 0x118) != 0) {
      fVar15 = *(float *)(lVar1 + 0x120) - *(float *)(param_1 + 0x44);
      fVar16 = *(float *)(lVar1 + 0x124) - *(float *)((longlong)param_1 + 0x224);
      fVar17 = *(float *)(lVar1 + 0x128) - *(float *)(param_1 + 0x45);
      fVar11 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
      fVar7 = fVar15;
      fVar14 = fVar16;
      fVar12 = fVar17;
      if ((fVar11 != 1.0) &&
         (fVar7 = DAT_1468b5d90, fVar14 = DAT_1468b5d94, fVar12 = DAT_1468b5d98, 1e-08 <= fVar11)) {
        auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
        fVar12 = auVar13._0_4_;
        fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
        fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
        fVar7 = fVar15 * fVar12;
        fVar14 = fVar16 * fVar12;
        fVar12 = fVar17 * fVar12;
      }
      _Var5 = (**(code **)(*param_1 + 0x548))(param_1);
      AK::SoundEngine::SetRTPCValue
                (0x99f8e44c,local_d8 * fVar7 + local_d4 * fVar14 + local_d0 * fVar12,_Var5,0,4,false
                );
    }
    lVar1 = plVar4[0x2d];
    if (lVar1 == 0) {
      local_a0 = DAT_1468b5d98;
      puVar6 = &local_a8;
      local_a8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
    else {
      puVar6 = &local_b8;
      local_b0 = (float)*(undefined4 *)(lVar1 + 0x228);
      local_b8 = *(undefined8 *)(lVar1 + 0x220);
    }
    local_a0 = *(float *)(puVar6 + 1);
    fVar14 = *(float *)(param_1 + 0x44) - (float)*puVar6;
    fVar7 = *(float *)((longlong)param_1 + 0x224) - (float)((ulonglong)*puVar6 >> 0x20);
    local_b0 = *(float *)(param_1 + 0x45) - local_a0;
    local_b8 = CONCAT44(fVar7,fVar14);
    if (0.0 < param_2) {
      fVar7 = fVar7 - *(float *)((longlong)param_1 + 0x424);
      fVar14 = fVar14 - *(float *)(param_1 + 0x84);
      fVar10 = SQRT(fVar7 * fVar7 + fVar14 * fVar14 +
                    (local_b0 - *(float *)(param_1 + 0x85)) *
                    (local_b0 - *(float *)(param_1 + 0x85))) * (1.0 / param_2);
    }
    param_1[0x84] = local_b8;
    *(float *)(param_1 + 0x85) = local_b0;
    _Var5 = (**(code **)(*param_1 + 0x548))(param_1);
    AK::SoundEngine::SetRTPCValue(0x11524e6b,fVar10,_Var5,0,4,false);
  }
  return;
}



// FUNCTION 1405b1fc0 FUN_1405b1fc0 body=592 status=ok
// SIG undefined FUN_1405b1fc0(void)

void FUN_1405b1fc0(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  BOOL BVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  uint *puVar12;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  if (BVar6 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  }
  lVar4 = *param_1;
  plVar10 = (longlong *)(lVar4 + 0x130);
  uStack_84 = 1;
  uVar2 = *(uint *)(lVar4 + 0x158);
  puVar1 = (uint *)(lVar4 + 0x140);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar12 = *(uint **)(lVar4 + 0x150);
    if (*(uint **)(lVar4 + 0x150) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar3 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar5) goto LAB_1405b20bd;
      uVar3 = puVar12[lVar9 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (iStack_70 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_1405b20bd:
      uStack_74 = uVar2;
    }
  }
  uVar3 = *(uint *)(lVar4 + 0x158);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar11 = uVar3 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar10;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar3;
  if (uVar3 != uVar2) {
    puVar12 = *(uint **)(lVar4 + 0x150);
    if (*(uint **)(lVar4 + 0x150) == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar8 = puVar12[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar7 = (int)uVar3 >> 5;
    while (uVar8 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_1405b2183;
      uVar8 = puVar12[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = -uVar8 & uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar11 - iVar7) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_1405b2183:
      uStack_74 = uVar2;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    FUN_1405b2210(*(undefined8 *)(*plVar10 + (longlong)(int)uStack_4c * 0x10));
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  if (*(longlong *)(*param_1 + 0x210) != 0) {
    FUN_1405af2e0(*(longlong *)(*param_1 + 0x210),0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001405b2209. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146853800);
  return;
}



// FUNCTION 1405b2210 FUN_1405b2210 body=591 status=ok
// SIG undefined FUN_1405b2210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405b2210(longlong *param_1,char param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  __uint64 _Var5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 local_70;
  undefined4 local_60;
  ulonglong local_58;
  undefined4 local_50;
  ulonglong local_4c;
  undefined4 local_44;
  ulonglong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  *(int *)(param_1 + 0x5c) = (int)param_1[0x44];
  *(undefined4 *)((longlong)param_1 + 0x2e4) = *(undefined4 *)((longlong)param_1 + 0x224);
  *(int *)(param_1 + 0x5d) = (int)param_1[0x45];
  fVar1 = *(float *)(param_1 + 0x42);
  fVar2 = *(float *)((longlong)param_1 + 0x214);
  fVar3 = *(float *)(param_1 + 0x43);
  fVar4 = *(float *)((longlong)param_1 + 0x21c);
  fVar6 = fVar2 * 0.0 - fVar3 * 0.0;
  fVar7 = fVar3 * 1.0 - fVar1 * 0.0;
  fVar8 = fVar1 * 0.0 - fVar2 * 1.0;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  *(ulonglong *)((longlong)param_1 + 0x2ec) =
       CONCAT44((fVar6 * fVar3 - fVar8 * fVar1) + fVar4 * fVar7 + 0.0,
                (fVar8 * fVar2 - fVar7 * fVar3) + fVar4 * fVar6 + 1.0);
  *(float *)((longlong)param_1 + 0x2f4) = (fVar7 * fVar1 - fVar6 * fVar2) + fVar4 * fVar8 + 0.0;
  fVar1 = *(float *)(param_1 + 0x42);
  fVar2 = *(float *)((longlong)param_1 + 0x214);
  fVar3 = *(float *)(param_1 + 0x43);
  fVar4 = *(float *)((longlong)param_1 + 0x21c);
  fVar6 = fVar2 * 1.0 - fVar3 * 0.0;
  fVar7 = fVar3 * 0.0 - fVar1 * 1.0;
  fVar8 = fVar1 * 0.0 - fVar2 * 0.0;
  fVar6 = fVar6 + fVar6;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  param_1[0x5f] =
       CONCAT44((fVar6 * fVar3 - fVar8 * fVar1) + fVar4 * fVar7 + 0.0,
                (fVar8 * fVar2 - fVar7 * fVar3) + fVar4 * fVar6 + 0.0);
  *(float *)(param_1 + 0x60) = (fVar7 * fVar1 - fVar6 * fVar2) + fVar4 * fVar8 + 1.0;
  if (param_2 != '\0') {
    local_80 = *(undefined4 *)((longlong)param_1 + 0x2e4);
    local_70 = (undefined4)param_1[0x5e];
    local_60 = *(undefined4 *)((longlong)param_1 + 0x2fc);
    local_58 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x2f4),
                        *(undefined4 *)((longlong)param_1 + 0x2ec)) ^ 0x80000000;
    local_4c = CONCAT44((int)param_1[0x60],(int)param_1[0x5f]) ^ 0x80000000;
    local_40 = CONCAT44((int)param_1[0x5d],(int)param_1[0x5c]) ^ 0x80000000;
    local_50 = local_70;
    local_44 = local_60;
    local_38 = local_80;
    _Var5 = (**(code **)(*param_1 + 0x548))();
    AK::SoundEngine::SetPosition(_Var5,(AkTransform *)&local_58);
  }
  return;
}



// FUNCTION 1405b2460 FUN_1405b2460 body=718 status=ok
// SIG undefined FUN_1405b2460(void)

void FUN_1405b2460(longlong param_1)

{
  int iVar1;
  LARGE_INTEGER *pLVar2;
  double *pdVar3;
  double dVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  int iVar18;
  LARGE_INTEGER local_58;
  LARGE_INTEGER LStack_50;
  longlong local_48;
  longlong lStack_40;
  
  QueryPerformanceCounter(&local_58);
  iVar12 = *(int *)(param_1 + 0x10);
  dVar7 = (double)local_58.QuadPart * DAT_1468b02f8 + 16777216.0;
joined_r0x0001405b2497:
  if ((iVar12 < 1) ||
     (plVar5 = *(longlong **)(param_1 + 8), dVar7 < (double)plVar5[1] || dVar7 == (double)plVar5[1])
     ) {
    return;
  }
  iVar18 = *(int *)(param_1 + 0x10);
  local_48 = *plVar5;
  lStack_40 = plVar5[1];
  iVar12 = iVar18 + -1;
  if (0 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    _guard_xfg_dispatch_icall_nop
              (plVar5,plVar5 + (longlong)(iVar18 - iVar12) * 2,(longlong)iVar12 << 4);
    iVar18 = *(int *)(param_1 + 0x10);
  }
  lVar11 = local_48;
  lVar6 = *(longlong *)(param_1 + 8);
  iVar18 = iVar18 + -1;
  iVar12 = 0;
  *(int *)(param_1 + 0x10) = iVar18;
  if (1 < iVar18) {
    do {
      iVar15 = iVar12 * 2 + 1;
      iVar1 = iVar12 * 2 + 2;
      iVar16 = iVar15;
      if ((iVar1 < iVar18) &&
         (dVar4 = *(double *)(lVar6 + 8 + (longlong)iVar1 * 0x10),
         pdVar3 = (double *)(lVar6 + 8 + (longlong)iVar15 * 0x10), iVar16 = iVar1,
         *pdVar3 <= dVar4 && dVar4 != *pdVar3)) {
        iVar16 = iVar15;
      }
      puVar17 = (undefined8 *)((longlong)iVar12 * 0x10 + lVar6);
      puVar13 = (undefined8 *)((longlong)iVar16 * 0x10 + lVar6);
      if ((double)puVar17[1] < (double)puVar13[1] || (double)puVar17[1] == (double)puVar13[1])
      break;
      if (puVar17 != puVar13) {
        uVar8 = puVar13[1];
        uVar9 = *puVar17;
        uVar10 = puVar17[1];
        *puVar17 = *puVar13;
        puVar17[1] = uVar8;
        *puVar13 = uVar9;
        puVar13[1] = uVar10;
      }
      iVar12 = iVar16;
    } while (iVar16 * 2 + 1 < iVar18);
  }
  if (local_48 != 0) {
    *(int *)(local_48 + 0x2e4) = *(int *)(local_48 + 0x2e4) + 1;
    if (((*(longlong *)(local_48 + 0xd0) != 0) && (*(longlong *)(local_48 + 0xc0) != 0)) &&
       (*(char *)(local_48 + 0xd8) == '\0')) {
      dVar4 = *(double *)(local_48 + 0x130);
      *(double *)(local_48 + 0x130) = dVar7;
      if (*(longlong *)(local_48 + 0xe0) == 0) {
        FUN_1405ae6a0();
        FUN_1405a06e0(lVar11);
      }
      else {
        FUN_1405b1860(local_48,SUB84(dVar7 - dVar4,0));
        FUN_1405ae6a0(lVar11);
      }
    }
    plVar14 = *(longlong **)(param_1 + 0x18);
    plVar5 = plVar14 + *(int *)(param_1 + 0x20);
    for (; plVar14 != plVar5; plVar14 = plVar14 + 1) {
      if (*plVar14 == lVar11) {
        if ((*(int *)(lVar11 + 0x2e4) == 2) && (*(longlong *)(lVar11 + 0xe0) == 0)) {
          FUN_140596c00(lVar11);
        }
        else {
          iVar12 = *(int *)(param_1 + 0x10);
          LStack_50 = (LARGE_INTEGER)(dVar7 + 0.2);
          local_58.QuadPart = lVar11;
          *(int *)(param_1 + 0x10) = iVar12 + 1;
          if (*(int *)(param_1 + 0x14) < iVar12 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar12);
          }
          pLVar2 = (LARGE_INTEGER *)(*(longlong *)(param_1 + 8) + (longlong)iVar12 * 0x10);
          pLVar2->QuadPart = (LONGLONG)local_58;
          pLVar2[1] = LStack_50;
          lVar6 = *(longlong *)(param_1 + 8);
          iVar12 = *(int *)(param_1 + 0x10) + -1;
          if (0 < iVar12) goto LAB_1405b26b0;
        }
        break;
      }
    }
    goto LAB_1405b26f2;
  }
  goto LAB_1405b26fa;
  while( true ) {
    if (puVar17 != puVar13) {
      uVar8 = puVar13[1];
      uVar9 = *puVar17;
      uVar10 = puVar17[1];
      *puVar17 = *puVar13;
      puVar17[1] = uVar8;
      *puVar13 = uVar9;
      puVar13[1] = uVar10;
    }
    if (iVar12 < 1) break;
LAB_1405b26b0:
    puVar17 = (undefined8 *)((longlong)iVar12 * 0x10 + lVar6);
    iVar12 = (iVar12 + -1) / 2;
    puVar13 = (undefined8 *)((longlong)iVar12 * 0x10 + lVar6);
    if ((double)puVar13[1] < (double)puVar17[1] || (double)puVar13[1] == (double)puVar17[1]) break;
  }
LAB_1405b26f2:
  FUN_1405a53f0(lVar11);
LAB_1405b26fa:
  iVar12 = *(int *)(param_1 + 0x10);
  goto joined_r0x0001405b2497;
}



// FUNCTION 1405b2740 FUN_1405b2740 body=141 status=ok
// SIG undefined FUN_1405b2740(void)

void FUN_1405b2740(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  
  if (*(float *)(param_1 + 0x10) < *(float *)(param_2 + 0x74)) {
    *(undefined1 *)(param_2 + 0x70) = 1;
    return;
  }
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 8);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 8);
    if (*(longlong *)(lVar2 + 0xe0) == 0) {
      uVar3 = 0;
      goto LAB_1405b2795;
    }
  }
  uVar3 = 1;
LAB_1405b2795:
  local_res8 = *(undefined4 *)(param_1 + 0x24);
  local_resc = *(undefined4 *)(param_1 + 0x28);
  FLatentResponse::FinishAndTriggerIf
            (param_2,uVar3,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),
             &local_res8);
  return;
}



// FUNCTION 1405b27d0 FUN_1405b27d0 body=81 status=ok
// SIG undefined FUN_1405b27d0(void)

void FUN_1405b27d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  local_res8 = *(undefined4 *)(param_1 + 0x2c);
  local_resc = *(undefined4 *)(param_1 + 0x30);
  cVar1 = FUN_14059ee90(param_1 + 8);
  FLatentResponse::FinishAndTriggerIf
            (param_2,cVar1 == '\0',*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
             &local_res8);
  return;
}



// FUNCTION 1405b2840 FUN_1405b2840 body=1485 status=ok
// SIG undefined FUN_1405b2840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405b2840(int *param_1,int *param_2,longlong param_3,undefined8 param_4,longlong *param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int *piVar12;
  undefined4 *puVar13;
  uint uVar14;
  longlong *plVar15;
  undefined4 local_res8;
  undefined4 local_resc;
  ulonglong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 *local_98;
  int local_90;
  char local_88 [4];
  int local_84;
  char local_80;
  int local_7c;
  undefined **local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58;
  
  lVar6 = FUN_14058e3e0(param_4);
  iVar5 = *param_1;
  plVar15 = (longlong *)(lVar6 + 0x10);
  if (((iVar5 != 0) && ((iVar5 != 1 || (*(int *)(param_3 + 0x20) != 0)))) &&
     ((iVar5 != 2 || (*(int *)(param_3 + 0x20) != 1)))) {
    if (*(char *)(lVar6 + 8) == '\0') {
      return;
    }
    cVar4 = FUN_14059ee90(plVar15);
    if (cVar4 == '\0') {
      return;
    }
    FUN_1405ac7d0(param_1,param_4);
    return;
  }
  if (*(longlong *)(param_1 + 2) == 0) {
    return;
  }
  if (*(char *)(lVar6 + 8) != '\0') {
    return;
  }
  *(undefined1 *)(lVar6 + 8) = 1;
  if (((param_2[3] != 0 || param_2[2] != 0) || param_2[1] != 0) || *param_2 != 0) {
    if ((int)param_5[0x16] != *(int *)((longlong)param_5 + 0xdc)) {
      plVar7 = (longlong *)param_5[0x1d];
      if ((longlong *)param_5[0x1d] == (longlong *)0x0) {
        plVar7 = param_5 + 0x1c;
      }
      iVar5 = *(int *)((longlong)plVar7 +
                      ((longlong)(int)param_5[0x1e] - 1U & (longlong)param_2[4]) * 4);
      if (iVar5 != -1) {
        do {
          piVar12 = (int *)((longlong)iVar5 * 0xc0 + param_5[0x15]);
          if (*piVar12 == param_2[4]) {
            if (((iVar5 != -1) && (piVar12 != (int *)0x0)) && (piVar12 + 2 != (int *)0x0)) {
              FMovieSceneObjectCache::FindBoundObjects(piVar12 + 2,&local_98,param_2,param_5);
              goto LAB_1405b297b;
            }
            break;
          }
          iVar5 = piVar12[0x2e];
        } while (iVar5 != -1);
      }
    }
    local_98 = (undefined4 *)0x0;
    local_90 = 0;
LAB_1405b297b:
    puVar1 = local_98 + (longlong)local_90 * 2;
    puVar13 = local_98;
    do {
      if (puVar13 == puVar1) {
        return;
      }
      local_res8 = *puVar13;
      local_resc = puVar13[1];
      lVar8 = FWeakObjectPtr::Get(&local_res8);
      if (lVar8 != 0) {
        lVar9 = FUN_1428dfc70();
        iVar5 = *(int *)(lVar9 + 0x90);
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < iVar5) ||
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)iVar5 * 8)
            != lVar9 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          lVar8 = FUN_14059b7e0(lVar8,CONCAT71((int7)(int3)((uint)iVar5 >> 8),1));
          goto LAB_1405b2aa2;
        }
      }
      puVar13 = puVar13 + 2;
    } while( true );
  }
  cVar4 = FUN_14059ee90(plVar15);
  if ((cVar4 == '\0') || (lVar8 = FUN_14059ae60(plVar15,0), lVar8 == 0)) {
    local_c0 = DAT_1468b5da8;
    local_b0 = DAT_1468b5d98;
    local_c8 = DAT_1468b5da0;
    local_b8 = _DAT_1468b5d90;
    uVar10 = (**(code **)(*param_5 + 0x70))(param_5);
    lVar8 = FUN_1405ab680(uVar10,&local_b8,param_1[6],&local_c8,1);
  }
  else {
    lVar8 = FUN_14059ae60(plVar15,0);
  }
LAB_1405b2aa2:
  if (lVar8 == 0) {
    return;
  }
  lVar11 = FUN_1405a3150(lVar8,&local_b8,*(undefined8 *)(param_1 + 2),0);
  FUN_1405913a0(plVar15);
  lVar9 = CONCAT44(uStack_ac,local_b0);
  *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(lVar11 + 0x10);
  if (((local_b8 == 0) || (lVar9 == -1)) || (lVar9 != *(longlong *)(local_b8 + 0xd0))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((bVar2) && (lVar9 != -1)) && (*(longlong *)(local_b8 + 0xd0) == lVar9)) {
    *(int *)(local_b8 + 0x2e8) = *(int *)(local_b8 + 0x2e8) + -1;
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 2) + 0x28);
  if ((((iVar5 == -0x9ee201b) || (iVar5 == 0x99dd5bb)) ||
      ((iVar5 == -0x2ce73dbd ||
       (((iVar5 == 0x62856fc7 || (iVar5 == 0x4ae334c)) || (iVar5 == -0x7fd3be0c)))))) &&
     (DAT_1468536c5 != '\0')) {
    plVar7 = (longlong *)0x0;
    if (DAT_1468536c6 == '\0') {
      plVar7 = DAT_1468536c8;
    }
    (**(code **)(*plVar7 + 0x18))();
  }
  if ((*(char *)((longlong)param_1 + 0x1d) == '\0') && ((char)param_1[7] != '\0')) {
    local_58 = 0;
  }
  else {
    local_58 = 1;
  }
  local_68 = -1;
  local_78 = &PTR_FUN_143fce230;
  local_70 = *plVar15;
  if ((local_70 != 0) && (*(longlong *)(local_70 + 0xd0) != -1)) {
    *(int *)(local_70 + 0x2e8) = *(int *)(local_70 + 0x2e8) + 1;
    local_68 = *(longlong *)(local_70 + 0xd0);
  }
  local_60 = *(undefined4 *)(lVar6 + 0x20);
  lVar6 = DAT_146853958;
  if (DAT_146853958 == 0) {
    lVar6 = FMovieSceneAnimTypeID::Initialize(&DAT_146853958,0);
  }
  local_b0 = (undefined4)param_5[0x5b];
  local_b8 = param_5[0x5a];
  FMovieScenePreAnimatedState::SavePreAnimatedState
            (param_5 + 0x1f,lVar6,&local_78,lVar8,*(undefined1 *)((longlong)param_5 + 0x2dc),
             &local_b8);
  if (((local_70 == 0) || (local_68 == -1)) || (local_68 != *(longlong *)(local_70 + 0xd0))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((bVar2) && (local_68 != -1)) && (*(longlong *)(local_70 + 0xd0) == local_68)) {
    *(int *)(local_70 + 0x2e8) = *(int *)(local_70 + 0x2e8) + -1;
  }
  FMovieSceneEvaluationRange::TimeRangeToNumberRange(local_88,param_3);
  if (((*(char *)((longlong)param_1 + 0x1d) == '\0') && (local_88[0] != '\x02')) &&
     (local_80 != '\x02')) {
    if (*(int *)(param_3 + 0x20) == 0) {
      uVar14 = local_7c - param_1[9];
    }
    else {
      if (*(int *)(param_3 + 0x20) != 1) goto LAB_1405b2d50;
      uVar14 = param_1[10] - local_84;
    }
    local_c8 = (ulonglong)uVar14;
    fVar3 = ((float)((longlong)param_1[0xc] * (longlong)(int)uVar14) + (float)param_1[0xc] * 0.0) /
            (float)param_1[0xb];
    if (((0.1 < fVar3) && (cVar4 = FUN_14059ee90(plVar15), cVar4 != '\0')) &&
       (*(longlong *)(param_1 + 2) != 0)) {
      AK::SoundEngine::SeekOnEvent
                (*(ulong *)(*(longlong *)(param_1 + 2) + 0x28),*(__uint64 *)(*plVar15 + 0xd0),
                 (int)(fVar3 * 1000.0),false,0);
    }
  }
LAB_1405b2d50:
  if ((*(longlong *)(lVar8 + 0x120) != 0) || (lVar6 = FUN_1423407b0(lVar8), lVar6 != 0)) {
    lVar6 = *(longlong *)(lVar8 + 0x120);
    if (lVar6 == 0) {
      lVar6 = FUN_1423407b0(lVar8);
    }
    if ((~(byte)(*(uint *)(lVar6 + 0x830) >> 5) & 1) != 0) goto LAB_1405b2dc3;
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 2) + 0x28);
  if (((iVar5 != -0x9ee201b) && (iVar5 != 0x99dd5bb)) &&
     ((iVar5 != -0x2ce73dbd &&
      (((iVar5 != 0x62856fc7 && (iVar5 != 0x4ae334c)) && (iVar5 != -0x7fd3be0c)))))) {
    return;
  }
LAB_1405b2dc3:
  if (DAT_1468536c5 != '\0') {
    plVar15 = (longlong *)0x0;
    if (DAT_1468536c6 == '\0') {
      plVar15 = DAT_1468536c8;
    }
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  return;
}



// FUNCTION 1405b2e10 FUN_1405b2e10 body=1844 status=ok
// SIG undefined FUN_1405b2e10(void)

/* WARNING: Removing unreachable block (ram,0x0001405b3271) */

void FUN_1405b2e10(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  __uint64 _Var11;
  longlong lVar12;
  longlong lVar13;
  __uint64 *p_Var14;
  __uint64 *p_Var15;
  __uint64 *p_Var16;
  int *piVar17;
  __uint64 *p_Var18;
  uint uVar19;
  uint uVar20;
  __uint64 *p_Var21;
  uint uVar22;
  __uint64 *p_Var23;
  __uint64 *p_Var24;
  __uint64 *p_Var25;
  ulong local_res8;
  uint local_108;
  uint uStack_104;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  __uint64 *p_Stack_e0;
  undefined4 local_d8;
  uint uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  __uint64 *local_c8;
  undefined8 uStack_c0;
  __uint64 *p_Stack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  __uint64 *local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  __uint64 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  __uint64 *local_78;
  __uint64 *p_Stack_70;
  __uint64 *p_Stack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = *(longlong *)(param_1 + 8);
  p_Var21 = (__uint64 *)(lVar3 + 0x130);
  uVar2 = *(uint *)(lVar3 + 0x158);
  p_Stack_e0 = (__uint64 *)(lVar3 + 0x140);
  local_e8 = (__uint64 *)0x100000000;
  uStack_d4 = 0;
  iStack_d0 = 0;
  if (uVar2 != 0) {
    p_Var23 = *(__uint64 **)(lVar3 + 0x150);
    if (*(__uint64 **)(lVar3 + 0x150) == (__uint64 *)0x0) {
      p_Var23 = p_Stack_e0;
    }
    uVar9 = (uint)*p_Var23;
    iStack_d0 = 0;
    iVar10 = 0;
    while (uVar9 == 0) {
      iStack_d0 = iStack_d0 + 0x20;
      uVar8 = (ulonglong)local_e8 >> 0x20;
      local_e8 = (__uint64 *)CONCAT44((int)uVar8,iVar10 + 1);
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_1405b2ef2;
      uVar9 = *(uint *)((longlong)p_Var23 + (longlong)iVar10 * 4 + 4);
      iVar10 = iVar10 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar10 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    local_e8 = (__uint64 *)CONCAT44(uVar9,SUB84(local_e8,0));
    if (uVar9 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_d4 = (iStack_d0 - iVar10) + 0x1f;
    if ((int)uVar2 < (int)uStack_d4) {
LAB_1405b2ef2:
      uStack_d4 = uVar2;
    }
  }
  local_d8 = 0xffffffff;
  uStack_f4 = *(uint *)(lVar3 + 0x158);
  uStack_b0 = CONCAT44(uStack_d4,0xffffffff);
  uStack_a8 = CONCAT44(uStack_cc,iStack_d0);
  uStack_c0 = local_e8;
  p_Var23 = uStack_c0;
  uStack_c0._0_4_ = SUB84(local_e8,0);
  uStack_c0._4_4_ = (uint)((ulonglong)local_e8 >> 0x20);
  uVar9 = uStack_f4 & 0xffffffe0;
  uStack_98 = (undefined4)uStack_c0;
  uStack_94 = uStack_c0._4_4_;
  local_c8 = p_Var21;
  uStack_c0 = p_Var23;
  p_Stack_b8 = p_Stack_e0;
  local_90 = p_Stack_e0;
  uStack_88 = uStack_b0;
  local_80 = uStack_a8;
  local_a0 = p_Var21;
  if (uStack_f4 != uVar2) {
    p_Var23 = *(__uint64 **)(lVar3 + 0x150);
    if (*(__uint64 **)(lVar3 + 0x150) == (__uint64 *)0x0) {
      p_Var23 = p_Stack_e0;
    }
    uVar19 = *(uint *)((longlong)p_Var23 + (longlong)((int)uStack_f4 >> 5) * 4) &
             -1 << ((byte)uStack_f4 & 0x1f);
    iVar10 = (int)uStack_f4 >> 5;
    while (uVar19 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
      goto LAB_1405b2fc7;
      uVar19 = *(uint *)((longlong)p_Var23 + (longlong)iVar10 * 4 + 4);
      iVar10 = iVar10 + 1;
    }
    uVar19 = -uVar19 & uVar19;
    iVar10 = 0x1f;
    if (uVar19 != 0) {
      for (; uVar19 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar19 == 0) {
      iVar10 = 0x20;
    }
    else {
      iVar10 = 0x1f - iVar10;
    }
    uStack_f4 = (uVar9 - iVar10) + 0x1f;
    if ((int)uVar2 < (int)uStack_f4) {
LAB_1405b2fc7:
      uStack_f4 = uVar2;
    }
  }
  do {
    uVar2 = uStack_f4;
    p_Var23 = (__uint64 *)0x0;
    if (((uStack_88._4_4_ == uStack_f4) && (local_90 == (__uint64 *)(lVar3 + 0x140))) &&
       (local_a0 == p_Var21)) {
      return;
    }
    plVar4 = *(longlong **)(*local_a0 + (longlong)(int)uStack_88._4_4_ * 0x10);
    _Var11 = (**(code **)(*plVar4 + 0x548))(plVar4);
    if (*(int *)(param_1 + 0x128) != *(int *)(param_1 + 0x154)) {
      lVar12 = *(longlong *)(param_1 + 0x160);
      if (*(longlong *)(param_1 + 0x160) == 0) {
        lVar12 = param_1 + 0x158;
      }
      iVar10 = *(int *)(lVar12 + ((longlong)((int)(_Var11 >> 0x20) * 0x17 + (int)_Var11) &
                                 (longlong)*(int *)(param_1 + 0x168) - 1U) * 4);
      if (iVar10 != -1) {
        do {
          p_Var16 = (__uint64 *)((longlong)iVar10 * 0x90 + *(longlong *)(param_1 + 0x120));
          if (*p_Var16 == _Var11) {
            if (iVar10 != -1) goto LAB_1405b3098;
            break;
          }
          iVar10 = (int)p_Var16[0x11];
        } while (iVar10 != -1);
      }
    }
    p_Var16 = p_Var23;
LAB_1405b3098:
    p_Var24 = p_Var16 + 1;
    if (p_Var16 == (__uint64 *)0x0) {
      p_Var24 = p_Var23;
    }
    _Var11 = (**(code **)(*plVar4 + 0x548))(plVar4);
    if (*(int *)(param_1 + 0xd8) != *(int *)(param_1 + 0x104)) {
      lVar12 = *(longlong *)(param_1 + 0x110);
      if (*(longlong *)(param_1 + 0x110) == 0) {
        lVar12 = param_1 + 0x108;
      }
      iVar10 = *(int *)(lVar12 + ((longlong)((int)(_Var11 >> 0x20) * 0x17 + (int)_Var11) &
                                 (longlong)*(int *)(param_1 + 0x118) - 1U) * 4);
      if (iVar10 != -1) {
        do {
          p_Var16 = (__uint64 *)((longlong)iVar10 * 0x60 + *(longlong *)(param_1 + 0xd0));
          if (*p_Var16 == _Var11) {
            if (iVar10 != -1) goto LAB_1405b3135;
            break;
          }
          iVar10 = (int)p_Var16[0xb];
        } while (iVar10 != -1);
      }
    }
    p_Var16 = p_Var23;
LAB_1405b3135:
    p_Var25 = p_Var16 + 1;
    if (p_Var16 == (__uint64 *)0x0) {
      p_Var25 = p_Var23;
    }
    lVar12 = (**(code **)(*plVar4 + 0x548))(plVar4);
    if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
      lVar13 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar13 = param_1 + 0xb8;
      }
      iVar10 = *(int *)(lVar13 + ((longlong)((int)((ulonglong)lVar12 >> 0x20) * 0x17 + (int)lVar12)
                                 & (longlong)*(int *)(param_1 + 200) - 1U) * 4);
      if (iVar10 != -1) {
        do {
          p_Var15 = (__uint64 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar10 * 0x18);
          if (*(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar10 * 0x18) == lVar12) {
            if (iVar10 != -1) goto LAB_1405b31d3;
            break;
          }
          iVar10 = (int)p_Var15[2];
        } while (iVar10 != -1);
      }
    }
    p_Var15 = p_Var23;
LAB_1405b31d3:
    p_Var14 = p_Var15 + 1;
    if (p_Var15 == (__uint64 *)0x0) {
      p_Var14 = p_Var23;
    }
    if (((p_Var24 != (__uint64 *)0x0) && (p_Var25 != (__uint64 *)0x0)) &&
       (p_Var14 != (__uint64 *)0x0)) {
      local_e8 = (__uint64 *)0x0;
      local_res8 = 0;
      piVar17 = (int *)((longlong)p_Var16 + 0x3c);
      p_Stack_e0 = (__uint64 *)((ulonglong)p_Stack_e0 & 0xffffffff);
      p_Var15 = p_Var16 + 2;
      if (p_Var16 == (__uint64 *)0x0) {
        piVar17 = (int *)&DAT_00000034;
        p_Var15 = (__uint64 *)&DAT_00000008;
      }
      uVar9 = ((int)*p_Var15 - *piVar17) * 0x18 + 0x80;
      if ((int)uVar9 < 1) {
        p_Var16 = p_Var23;
        if (((int)uVar9 < 0) && (uVar9 != 0)) {
          p_Stack_e0 = (__uint64 *)(ulonglong)uVar9;
          TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_e8);
          p_Var16 = local_e8;
          goto LAB_1405b3291;
        }
      }
      else {
        p_Stack_e0 = (__uint64 *)(ulonglong)uVar9;
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_e8);
        p_Var16 = local_e8;
        _guard_xfg_dispatch_icall_nop(local_e8,0,(longlong)(int)uVar9);
LAB_1405b3291:
        local_res8 = (ulong)p_Stack_e0;
      }
      _Var11 = p_Var24[1];
      uStack_104 = 1;
      local_108 = 0;
      *p_Var16 = *p_Var24;
      p_Var16[1] = _Var11;
      _Var11 = p_Var24[3];
      uStack_f4 = 0;
      iStack_f0 = 0;
      p_Var16[2] = p_Var24[2];
      p_Var16[3] = _Var11;
      _Var11 = p_Var24[5];
      p_Var16[4] = p_Var24[4];
      p_Var16[5] = _Var11;
      _Var11 = p_Var24[7];
      p_Var16[6] = p_Var24[6];
      p_Var16[7] = _Var11;
      _Var11 = p_Var24[9];
      p_Var16[8] = p_Var24[8];
      p_Var16[9] = _Var11;
      _Var11 = p_Var24[0xb];
      p_Var16[10] = p_Var24[10];
      p_Var16[0xb] = _Var11;
      _Var11 = p_Var24[0xd];
      p_Var16[0xc] = p_Var24[0xc];
      p_Var16[0xd] = _Var11;
      _Var11 = p_Var24[0xf];
      p_Var15 = p_Var25 + 2;
      p_Var16[0xe] = p_Var24[0xe];
      p_Var16[0xf] = _Var11;
      uVar9 = (uint)p_Var25[5];
      if (uVar9 != 0) {
        p_Var24 = (__uint64 *)p_Var25[4];
        if ((__uint64 *)p_Var25[4] == (__uint64 *)0x0) {
          p_Var24 = p_Var15;
        }
        uVar19 = (uint)*p_Var24;
        p_Var18 = p_Var23;
        iStack_f0 = 0;
        while (uVar19 == 0) {
          iVar10 = (int)p_Var18;
          iStack_f0 = iStack_f0 + 0x20;
          local_108 = iVar10 + 1;
          p_Var18 = (__uint64 *)(ulonglong)local_108;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_1405b3393;
          uVar19 = *(uint *)((longlong)p_Var24 + (longlong)iVar10 * 4 + 4);
        }
        uStack_104 = -uVar19 & uVar19;
        iVar10 = 0x1f;
        if (uStack_104 != 0) {
          for (; uStack_104 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uStack_104 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_f4 = (iStack_f0 - iVar10) + 0x1f;
        if ((int)uVar9 < (int)uStack_f4) {
LAB_1405b3393:
          uStack_f4 = uVar9;
        }
      }
      uVar19 = (uint)p_Var25[5];
      uStack_b0 = CONCAT44(uStack_f4,0xffffffff);
      uStack_a8 = CONCAT44(uStack_ec,iStack_f0);
      uStack_c0 = (__uint64 *)CONCAT44(uStack_104,local_108);
      uVar22 = uVar19 & 0xffffffe0;
      local_c8 = p_Var25;
      p_Stack_b8 = p_Var15;
      local_78 = p_Var25;
      p_Stack_70 = uStack_c0;
      p_Stack_68 = p_Var15;
      uStack_60 = uStack_b0;
      uStack_58 = uStack_a8;
      uStack_f4 = uVar19;
      if (uVar19 != uVar9) {
        p_Var24 = (__uint64 *)p_Var25[4];
        if ((__uint64 *)p_Var25[4] == (__uint64 *)0x0) {
          p_Var24 = p_Var15;
        }
        uVar20 = *(uint *)((longlong)p_Var24 + (longlong)((int)uVar19 >> 5) * 4) &
                 -1 << ((byte)uVar19 & 0x1f);
        iVar10 = (int)uVar19 >> 5;
        while (uVar20 == 0) {
          uVar22 = uVar22 + 0x20;
          if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar10)
          goto LAB_1405b3467;
          uVar20 = *(uint *)((longlong)p_Var24 + (longlong)iVar10 * 4 + 4);
          iVar10 = iVar10 + 1;
        }
        uVar20 = -uVar20 & uVar20;
        iVar10 = 0x1f;
        if (uVar20 != 0) {
          for (; uVar20 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uVar20 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        uStack_f4 = (uVar22 - iVar10) + 0x1f;
        if ((int)uVar9 < (int)uStack_f4) {
LAB_1405b3467:
          uStack_f4 = uVar9;
        }
      }
      while( true ) {
        if (((uStack_b0._4_4_ == uStack_f4) && (p_Stack_b8 == p_Var15)) && (local_c8 == p_Var25))
        break;
        _Var11 = *local_c8;
        puVar1 = (undefined4 *)(_Var11 + 8 + (longlong)(int)uStack_b0._4_4_ * 0x28);
        uVar5 = puVar1[1];
        uVar6 = puVar1[2];
        uVar7 = puVar1[3];
        iVar10 = (int)p_Var23;
        p_Var23 = (__uint64 *)(ulonglong)(iVar10 + 1);
        p_Var24 = p_Var16 + (longlong)iVar10 * 3 + 0x10;
        *(undefined4 *)p_Var24 = *puVar1;
        *(undefined4 *)((longlong)p_Var24 + 4) = uVar5;
        *(undefined4 *)(p_Var24 + 1) = uVar6;
        *(undefined4 *)((longlong)p_Var24 + 0xc) = uVar7;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_c0._4_4_);
        p_Var16[(longlong)iVar10 * 3 + 0x12] =
             *(__uint64 *)(_Var11 + (longlong)(int)uStack_b0._4_4_ * 0x28 + 0x18);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
      }
      AK::SoundEngine::SendPluginCustomGameData
                (DAT_14685385c,*p_Var14,6,0x40,0xbbb,p_Var16,local_res8);
      if (p_Var16 != (__uint64 *)0x0) {
        FMemory::Free(p_Var16);
      }
    }
    uStack_88 = CONCAT44(uStack_88._4_4_,(uint)uStack_88 & ~uStack_94);
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_98);
    uStack_f4 = uVar2;
  } while( true );
}



// FUNCTION 1405b3550 FUN_1405b3550 body=1388 status=ok
// SIG undefined FUN_1405b3550(void)

void FUN_1405b3550(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res20 [8];
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong *local_98;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  
  plVar1 = (longlong *)(param_2 + 0x2e8);
  *(undefined4 *)(param_2 + 0x2f0) = 0;
  if ((*(int *)(param_2 + 0x2f4) < 0) && (*(int *)(param_2 + 0x2f4) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (plVar1,0);
  }
  if (*(longlong *)(param_2 + 0x378) != 0) {
    cVar5 = FUN_14059ea80(param_1 + -0x458);
    lVar10 = *(longlong *)(param_2 + 0x378);
    if (cVar5 == '\0') {
      plVar11 = *(longlong **)(lVar10 + 0x110);
      if (*(longlong **)(lVar10 + 0x110) == (longlong *)0x0) {
        plVar11 = (longlong *)(lVar10 + 0x100);
      }
      fVar20 = 4.3980465e+12;
      fVar19 = 4.3980465e+12;
      local_98 = plVar11 + *(int *)(lVar10 + 0x118);
      local_a0 = plVar11;
      if (plVar11 != local_98) {
        do {
          plVar12 = (longlong *)(param_1 + -0x458);
          uVar14 = 0;
          local_88 = *(undefined8 *)(*plVar11 + 0x2e0);
          local_80 = *(undefined4 *)(*plVar11 + 0x2e8);
          local_a0 = plVar11;
          if ((((*(char *)(param_1 + 0x40) == '\0') &&
               ((**(code **)(*plVar12 + 0x6f0))(plVar12,&local_88,plVar1),
               *(longlong *)(param_1 + 0x50) != 0)) && (0.0 < fVar19)) &&
             ((*(int *)(param_1 + 0xd4) == 0 ||
              (piVar8 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::
                               FindId(param_1 + 0x80,local_res20,plVar12), *piVar8 != -1)))) {
            fVar19 = 0.0;
          }
          plVar12 = *(longlong **)(param_1 + 0x20);
          uVar15 = (longlong)*(int *)(param_1 + 0x28) & 0x1fffffffffffffff;
          if (plVar12 + *(int *)(param_1 + 0x28) < plVar12) {
            uVar15 = uVar14;
          }
          if (uVar15 != 0) {
            do {
              plVar11 = (longlong *)*plVar12;
              if ((((plVar11 != (longlong *)0x0) && ((char)plVar11[0xa6] != '\0')) &&
                  (((char)plVar11[0x93] == '\0' &&
                   (((**(code **)(*plVar11 + 0x6f0))(plVar11,&local_88,plVar1),
                    *(longlong *)(param_1 + 0x50) != 0 && (0.0 < fVar19)))))) &&
                 ((*(int *)(param_1 + 0xd4) == 0 ||
                  (piVar8 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::
                                   FindId(param_1 + 0x80,local_a8,plVar11), *piVar8 != -1)))) {
                fVar19 = 0.0;
              }
              plVar12 = plVar12 + 1;
              uVar14 = uVar14 + 1;
              plVar11 = local_a0;
            } while (uVar14 != uVar15);
          }
          plVar11 = plVar11 + 1;
          local_a0 = plVar11;
        } while (plVar11 != local_98);
      }
      lVar10 = *(longlong *)(param_1 + 0x50);
      if (lVar10 != 0) {
        fVar16 = SQRT(fVar19);
        if (0.0 <= fVar19) {
          if (1.0 <= fVar16) {
            fVar16 = 1.0;
          }
        }
        else {
          fVar16 = 0.0;
        }
        fVar19 = *(float *)(lVar10 + 0x30);
        if (*(float *)(lVar10 + 0x34) < fVar19) {
          fVar19 = 0.0;
        }
        else {
          fVar19 = (*(float *)(lVar10 + 0x34) - fVar19) * fVar16 + fVar19;
        }
        lVar13 = *(longlong *)(param_2 + 0x378);
        if ((((lVar13 != 0) && (*(__uint64 *)(lVar13 + 0xd0) != 0)) &&
            (*(longlong *)(lVar13 + 0xc0) != 0)) && (*(char *)(lVar13 + 0xd8) == '\0')) {
          AK::SoundEngine::SetRTPCValue
                    (*(ulong *)(lVar10 + 0x28),fVar19,*(__uint64 *)(lVar13 + 0xd0),0,4,false);
        }
      }
      FUN_140597570(param_1 + -0x458);
      lVar10 = *(longlong *)(param_2 + 0x378);
      if ((lVar10 != 0) && (*(int *)(lVar10 + 0x2e4) = *(int *)(lVar10 + 0x2e4) + 1, lVar10 != 0)) {
        if (*(int *)(lVar10 + 0x118) != 0) {
          fVar20 = *(float *)(lVar10 + 300);
        }
        FUN_1405a53f0();
      }
      fVar19 = (SQRT(fVar20) - 100.0) * 0.00024414062;
      fVar20 = 0.05;
      if ((0.05 <= fVar19) && (fVar20 = fVar19, 0.3 <= fVar19)) {
        fVar20 = 0.3;
      }
    }
    else {
      if (((lVar10 == 0) || (*(int *)(lVar10 + 0x2e4) = *(int *)(lVar10 + 0x2e4) + 1, lVar10 == 0))
         || (*(int *)(lVar10 + 0x118) == 0)) {
        local_98 = (longlong *)0x0;
        fStack_90 = 0.0;
        if (lVar10 != 0) {
          FUN_1405a53f0(lVar10);
        }
        uVar6 = SUB84(local_98,0);
        uVar17 = (undefined4)((ulonglong)local_98 >> 0x20);
        fVar20 = fStack_90;
      }
      else {
        plVar11 = *(longlong **)(lVar10 + 0x110);
        if (*(longlong **)(lVar10 + 0x110) == (longlong *)0x0) {
          plVar11 = (longlong *)(lVar10 + 0x100);
        }
        uVar3 = *(undefined8 *)(*plVar11 + 0x2e0);
        uVar6 = (undefined4)uVar3;
        uVar17 = (undefined4)((ulonglong)uVar3 >> 0x20);
        fVar20 = *(float *)(*plVar11 + 0x2e8);
        FUN_1405a53f0(lVar10);
      }
      iVar7 = *(int *)(param_2 + 0x2f0);
      *(int *)(param_2 + 0x2f0) = iVar7 + 1;
      if (*(int *)(param_2 + 0x2f4) < iVar7 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
        ::ResizeGrow(plVar1,iVar7);
      }
      uVar18 = *(undefined4 *)(param_1 + 0x48);
      uVar2 = *(undefined4 *)(param_1 + 0x44);
      puVar9 = (undefined8 *)((longlong)iVar7 * 0x20 + *plVar1);
      *puVar9 = CONCAT44(uVar17,uVar6);
      *(float *)(puVar9 + 1) = fVar20;
      *(undefined8 *)((longlong)puVar9 + 0xc) = DAT_1468b5da0;
      uVar6 = DAT_1468b5da8;
      *(undefined4 *)(puVar9 + 3) = uVar2;
      *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar18;
      *(undefined4 *)((longlong)puVar9 + 0x14) = uVar6;
      FUN_140598940(param_1 + -0x458);
      if (((*(longlong *)(param_1 + 0x50) != 0) &&
          (lVar10 = *(longlong *)(param_2 + 0x378), lVar10 != 0)) &&
         ((*(__uint64 *)(lVar10 + 0xd0) != 0 &&
          ((*(longlong *)(lVar10 + 0xc0) != 0 && (*(char *)(lVar10 + 0xd8) == '\0')))))) {
        AK::SoundEngine::SetRTPCValue
                  (*(ulong *)(*(longlong *)(param_1 + 0x50) + 0x28),0.0,*(__uint64 *)(lVar10 + 0xd0)
                   ,0,4,false);
      }
      fVar20 = 0.001;
    }
    uVar6 = UActorComponent::SetComponentTickInterval(param_2,fVar20);
    lVar10 = *(longlong *)(param_1 + -0x2f0);
    if (lVar10 == 0) {
      uVar17 = (undefined4)DAT_1468b5da0;
      uVar18 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      uVar6 = DAT_1468b5da8;
    }
    else {
      fVar20 = *(float *)(lVar10 + 0x210);
      local_98 = *(longlong **)(lVar10 + 0x210);
      fStack_90 = *(float *)(lVar10 + 0x218);
      fStack_8c = *(float *)(lVar10 + 0x21c);
      auVar4._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != *(float *)(lVar10 + 0x214));
      auVar4._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != fVar20);
      auVar4._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_90);
      auVar4._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_8c);
      iVar7 = movmskps(uVar6,auVar4);
      if (iVar7 != 0) {
        *(float *)(lVar10 + 0x250) = fVar20;
        *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
        *(float *)(lVar10 + 600) = fStack_90;
        *(float *)(lVar10 + 0x25c) = fStack_8c;
        puVar9 = (undefined8 *)FQuat::Rotator(&local_98,&local_88);
        *(undefined8 *)(lVar10 + 0x260) = *puVar9;
        *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar9 + 1);
      }
      uVar17 = (undefined4)*(undefined8 *)(lVar10 + 0x260);
      uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x260) >> 0x20);
      uVar6 = *(undefined4 *)(lVar10 + 0x268);
    }
    lVar10 = *plVar1;
    lVar13 = (longlong)*(int *)(param_2 + 0x2f0) * 0x20 + lVar10;
    if (lVar10 != lVar13) {
      puVar9 = (undefined8 *)(lVar10 + 0xc);
      do {
        lVar10 = lVar10 + 0x20;
        *puVar9 = CONCAT44(uVar18,uVar17);
        *(undefined4 *)(puVar9 + 1) = uVar6;
        puVar9 = puVar9 + 4;
      } while (lVar10 != lVar13);
    }
  }
  return;
}



// FUNCTION 1405b3ac0 FUN_1405b3ac0 body=375 status=ok
// SIG undefined FUN_1405b3ac0(void)

void FUN_1405b3ac0(longlong param_1,float param_2,longlong param_3,char param_4)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong local_38;
  longlong local_30;
  
  if (0 < *(int *)(param_1 + 0x98)) {
    fVar1 = *(float *)(param_3 + 0x28);
    if ((fVar1 < param_2) && (param_4 == '\0')) {
      iVar5 = -1;
      iVar8 = *(int *)(param_1 + 0x98) + -1;
      iVar7 = -1;
      if (-1 < iVar8) {
        pfVar2 = *(float **)(param_1 + 0x90);
        lVar4 = -1;
        do {
          if (fVar1 < *pfVar2 || fVar1 == *pfVar2) break;
          iVar7 = iVar7 + 1;
          lVar4 = lVar4 + 1;
          pfVar2 = pfVar2 + 8;
        } while (lVar4 < iVar8);
      }
      iVar6 = -1;
      if (-1 < iVar8) {
        pfVar2 = *(float **)(param_1 + 0x90);
        lVar4 = -1;
        do {
          if (param_2 < *pfVar2 || param_2 == *pfVar2) break;
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 1;
          pfVar2 = pfVar2 + 8;
        } while (lVar4 < iVar8);
      }
      if (iVar7 != iVar6) {
        if (-1 < iVar8) {
          pfVar2 = *(float **)(param_1 + 0x90);
          lVar4 = -1;
          do {
            if (param_2 < *pfVar2 || param_2 == *pfVar2) break;
            iVar5 = iVar5 + 1;
            lVar4 = lVar4 + 1;
            pfVar2 = pfVar2 + 8;
          } while (lVar4 < iVar8);
        }
        iVar7 = 0;
        if (iVar5 != -1) {
          iVar7 = iVar5;
        }
        lVar4 = *(longlong *)((longlong)iVar7 * 0x20 + 8 + *(longlong *)(param_1 + 0x90));
        lVar3 = UInterpTrackInst::GetGroupActor(param_3);
        if ((((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) &&
           ((lVar4 != 0 && (lVar3 != 0)))) {
          lVar3 = FUN_14059b7e0(lVar3,1);
          if (lVar3 != 0) {
            FUN_1405a3150(lVar3,&local_38,lVar4,0);
            if (((local_38 != 0) && (local_30 != -1)) &&
               (local_30 == *(longlong *)(local_38 + 0xd0))) {
              *(int *)(local_38 + 0x2e8) = *(int *)(local_38 + 0x2e8) + -1;
            }
          }
        }
      }
    }
    *(float *)(param_3 + 0x28) = param_2;
  }
  return;
}



// FUNCTION 1405b3c40 FUN_1405b3c40 body=160 status=ok
// SIG undefined FUN_1405b3c40(void)

void FUN_1405b3c40(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 local_res8 [2];
  
  lVar1 = UInterpTrackInst::GetGroupActor(param_3);
  local_res8[0] = 0;
  uVar2 = FInterpCurve<float>::Eval(param_1 + 0x70,param_2,local_res8);
  if ((((DAT_1468536c6 == '\0') && (DAT_1468536c5 != '\0')) && (DAT_1468536c8 != 0)) &&
     ((*(longlong *)(param_1 + 0x90) != 0 && (lVar1 != 0)))) {
    lVar1 = FUN_14059b7e0(lVar1,1);
    if (lVar1 != 0) {
      FUN_1405aaad0(lVar1,*(undefined8 *)(param_1 + 0x90),uVar2,0,4);
    }
  }
  return;
}



// FUNCTION 1405b3ce0 FUN_1405b3ce0 body=782 status=ok
// SIG undefined FUN_1405b3ce0(void)

undefined8 FUN_1405b3ce0(longlong param_1,int param_2,uint param_3,byte param_4,short param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  BOOL BVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong local_res8;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if ((((param_3 != *(byte *)(param_1 + 0x28)) || (param_2 != *(int *)(param_1 + 0x2c))) ||
      (param_4 != *(byte *)(param_1 + 0x30))) || (param_5 != *(short *)(param_1 + 0x32))) {
    FUN_1405aca60();
  }
  if ((*(char *)(param_1 + 0x34) != '\0') || (*(longlong *)(param_1 + 8) == 0)) goto LAB_1405b3e2e;
  if (param_3 == 1) {
    param_3 = 0x4101;
  }
  else if (param_3 == 2) {
    param_3 = 0x3102;
  }
  else if (param_3 == 6) {
    param_3 = 0x60f106;
  }
  else if (param_3 == 8) {
    param_3 = 0x63f108;
  }
  else {
    param_3 = param_3 & 0xff;
  }
  *(uint *)(param_1 + 0x28) = param_3;
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(lVar2 + 0xc);
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar9 = iVar1 >> 0x1f & 0xffff;
    uVar4 = iVar1 + uVar9;
    lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
  }
  else {
    lVar7 = 0;
  }
  if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
    if (*(longlong *)(lVar2 + 0xe0) == 0) {
      if ((char)param_3 == '\0') {
LAB_1405b3dfc:
        cVar3 = '\0';
      }
      else {
        if (param_5 == 0) {
          if (param_4 != 0x10) goto LAB_1405b3dfc;
        }
        else if ((param_5 != 1) || (param_4 != 0x20)) goto LAB_1405b3dfc;
        BVar6 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xf8));
        if (BVar6 == 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xf8));
        }
        uVar4 = *(uint *)(lVar2 + 0x124);
        if (((((param_3 & 0xff) != (uVar4 & 0xff)) || (((uVar4 ^ param_3) & 0xf00) != 0)) ||
            (((uVar4 ^ param_3) & 0xfffff000) != 0)) ||
           (((param_2 != *(int *)(lVar2 + 0x128) || (param_4 != *(byte *)(lVar2 + 300))) ||
            (param_5 != *(short *)(lVar2 + 0x12e))))) {
          FUN_1405a74f0(lVar2);
          FUN_1405976e0(lVar2);
        }
        *(longlong *)(lVar2 + 0xe0) = param_1;
        *(byte *)(lVar2 + 0x12d) = param_4 >> 3;
        *(undefined1 *)(lVar2 + 0x120) = 1;
        *(uint *)(lVar2 + 0x124) = param_3;
        *(int *)(lVar2 + 0x128) = param_2;
        *(byte *)(lVar2 + 300) = param_4;
        *(short *)(lVar2 + 0x12e) = param_5;
        *(bool *)(lVar2 + 0x130) = param_5 != 0;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0xf8));
        cVar3 = '\x01';
      }
    }
    else {
      cVar3 = '\0';
    }
  }
  else {
    cVar3 = '\0';
  }
  *(char *)(param_1 + 0x34) = cVar3;
  if (cVar3 == '\0') {
    return 0;
  }
  *(int *)(param_1 + 0x2c) = param_2;
  *(byte *)(param_1 + 0x30) = param_4;
  *(short *)(param_1 + 0x32) = param_5;
LAB_1405b3e2e:
  if ((*(char *)(param_1 + 0x35) != '\0') && (*(longlong *)(param_1 + 8) != 0)) {
    local_res8 = param_1;
    cVar3 = FUN_1415ad720(&DAT_1468e2448);
    if ((cVar3 == '\0') &&
       ((DAT_1468c21ae != '\0' && (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0)))) {
      local_48 = 0;
      local_38 = 0;
      puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_68);
      if (puVar8 != (undefined8 *)0x0) {
        puVar8[1] = param_1;
        *puVar8 = &PTR_FUN_143f77b70;
      }
      local_78[0] = &LAB_140595c00;
      FUN_14158fcd0(2,local_78);
    }
    else {
      FUN_140591920(&local_res8);
      cVar3 = FUN_14059ee90(param_1 + 0x10);
      if (cVar3 == '\0') {
        FUN_1405aca60(param_1);
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 1405b3ff0 VirtualAlloc body=7 status=ok
// SIG LPVOID VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect)

LPVOID __stdcall VirtualAlloc(LPVOID lpAddress,SIZE_T dwSize,DWORD flAllocationType,DWORD flProtect)

{
  LPVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001405b3ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = VirtualAlloc(lpAddress,dwSize,flAllocationType,flProtect);
  return pvVar1;
}



// FUNCTION 1405b4000 VirtualFreeHook body=7 status=ok
// SIG BOOL VirtualFreeHook(LPVOID lpAddress, SIZE_T dwSize, DWORD dwFreeType)

BOOL __stdcall AK::VirtualFreeHook(LPVOID lpAddress,SIZE_T dwSize,DWORD dwFreeType)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001405b4000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VirtualFree(lpAddress,dwSize,dwFreeType);
  return BVar1;
}



// FUNCTION 1405b4010 FUN_1405b4010 body=550 status=ok
// SIG undefined FUN_1405b4010(void)

void FUN_1405b4010(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res10 [2];
  undefined8 local_68;
  undefined8 local_60 [2];
  int local_50;
  int iStack_4c;
  
  if ((param_2 != 0) &&
     (lVar5 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1), lVar5 != 0)) {
    if (*(longlong *)(lVar5 + 400) == 0) {
      plVar9 = (longlong *)(lVar5 + 0x400);
    }
    else {
      plVar9 = *(longlong **)(*(longlong *)(lVar5 + 400) + 0x98);
    }
    iVar1 = param_3[1];
    FWeakObjectPtr::operator=(&local_68,*(undefined8 *)(param_3 + 4));
    local_60[0] = local_68;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(plVar9,local_res10,local_60);
    plVar8 = (longlong *)0x0;
    plVar7 = plVar8;
    if (local_res10[0] != -1) {
      plVar7 = (longlong *)((longlong)local_res10[0] * 0x20 + *plVar9);
    }
    plVar6 = plVar7 + 1;
    if (plVar7 == (longlong *)0x0) {
      plVar6 = plVar8;
    }
    plVar7 = plVar8;
    if (plVar6 != (longlong *)0x0) {
      plVar7 = (longlong *)*plVar6;
    }
    if ((plVar7 != (longlong *)0x0) &&
       (iVar4 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
                ::Num(plVar7,iVar1), 0 < iVar4)) {
      iStack_4c = -1;
      local_50 = iVar1;
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(plVar7,(int)plVar7[1] - *(int *)((longlong)plVar7 + 0x34),0);
      iVar4 = -1;
      if ((int)plVar7[9] != 0) {
        plVar6 = (longlong *)plVar7[8];
        if ((longlong *)plVar7[8] == (longlong *)0x0) {
          plVar6 = plVar7 + 7;
        }
        iVar4 = *(int *)((longlong)plVar6 + ((longlong)(int)plVar7[9] - 1U & (longlong)iVar1) * 4);
        iStack_4c = iVar4;
        if (iVar4 != -1) {
          do {
            iVar2 = *(int *)(*plVar7 + 0x10 + (longlong)iVar4 * 0x18);
            iStack_4c = iVar4;
            if (*(int *)(*plVar7 + (longlong)iVar4 * 0x18) == iVar1) break;
            iVar4 = iVar2;
            iStack_4c = iVar2;
          } while (iVar2 != -1);
        }
      }
      if ((iStack_4c != -1) && (*(longlong *)(*plVar7 + 8 + (longlong)iVar4 * 0x18) != 0)) {
        return;
      }
    }
    plVar7 = (longlong *)operator_new(0x30);
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_143fcfda8;
      FWeakObjectPtr::operator=(plVar7 + 1,param_2);
      uVar3 = *(undefined8 *)(param_3 + 4);
      plVar7[3] = *(longlong *)(param_3 + 2);
      *(undefined4 *)(plVar7 + 4) = *param_3;
      *(undefined4 *)(plVar7 + 2) = param_4;
      FWeakObjectPtr::operator=((longlong)plVar7 + 0x24,uVar3);
      plVar8 = plVar7;
    }
    FUN_142514cf0(plVar9,*(undefined8 *)(param_3 + 4),iVar1,plVar8);
  }
  return;
}



// FUNCTION 1405b4240 FUN_1405b4240 body=668 status=ok
// SIG undefined FUN_1405b4240(void)

void FUN_1405b4240(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int local_res8 [4];
  undefined8 local_res18;
  undefined8 local_res20;
  int iStack_4c;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  if (((param_1[1] == -1) || (param_1[1] != *(longlong *)(lVar2 + 0xd0))) || ((int)param_1[2] == 0))
  {
    if (lVar2 == 0) {
      return;
    }
    if (param_1[1] == -1) {
      return;
    }
    if (param_1[1] != *(longlong *)(lVar2 + 0xd0)) {
      return;
    }
    *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + -1;
    goto LAB_1405b44c8;
  }
  lVar2 = *(longlong *)(lVar2 + 200);
  plVar7 = (longlong *)0x0;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 400) == 0) {
      plVar8 = (longlong *)(lVar2 + 0x400);
    }
    else {
      plVar8 = *(longlong **)(*(longlong *)(lVar2 + 400) + 0x98);
    }
    iVar1 = param_2[1];
    FWeakObjectPtr::operator=(&local_res18,*(undefined8 *)(param_2 + 4));
    local_res20 = local_res18;
    TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
    ::FindId(plVar8,local_res8,&local_res20);
    plVar6 = plVar7;
    if (local_res8[0] != -1) {
      plVar6 = (longlong *)((longlong)local_res8[0] * 0x20 + *plVar8);
    }
    plVar5 = plVar6 + 1;
    if (plVar6 == (longlong *)0x0) {
      plVar5 = plVar7;
    }
    plVar6 = plVar7;
    if (plVar5 != (longlong *)0x0) {
      plVar6 = (longlong *)*plVar5;
    }
    if ((plVar6 != (longlong *)0x0) &&
       (iVar4 = TMultiMap<int,FPendingLatentAction_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FPendingLatentAction_*,1>_>
                ::Num(plVar6,iVar1), 0 < iVar4)) {
      iStack_4c = -1;
      TSet<TTuple<int,UHomeBag_*>,TDefaultMapHashableKeyFuncs<int,UHomeBag_*,0>,FDefaultSetAllocator>
      ::ConditionalRehash(plVar6,(int)plVar6[1] - *(int *)((longlong)plVar6 + 0x34),0);
      if ((int)plVar6[9] != 0) {
        plVar5 = (longlong *)plVar6[8];
        if ((longlong *)plVar6[8] == (longlong *)0x0) {
          plVar5 = plVar6 + 7;
        }
        iStack_4c = *(int *)((longlong)plVar5 +
                            ((longlong)(int)plVar6[9] - 1U & (longlong)iVar1) * 4);
        if (iStack_4c != -1) {
          do {
            iVar4 = *(int *)(*plVar6 + 0x10 + (longlong)iStack_4c * 0x18);
            if (*(int *)(*plVar6 + (longlong)iStack_4c * 0x18) == iVar1) break;
            iStack_4c = iVar4;
          } while (iVar4 != -1);
        }
      }
      if ((iStack_4c != -1) && (*(longlong *)(*plVar6 + 8 + (longlong)iStack_4c * 0x18) != 0))
      goto LAB_1405b4485;
    }
    plVar6 = (longlong *)operator_new(0x38);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_143fcfd88;
      lVar2 = *param_1;
      plVar6[1] = lVar2;
      plVar6[2] = -1;
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xd0) != -1)) {
        *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + 1;
        plVar6[2] = *(longlong *)(lVar2 + 0xd0);
      }
      uVar3 = *(undefined8 *)(param_2 + 4);
      *(int *)(plVar6 + 3) = (int)param_1[2];
      plVar6[4] = *(longlong *)(param_2 + 2);
      *(undefined4 *)(plVar6 + 5) = *param_2;
      FWeakObjectPtr::operator=((longlong)plVar6 + 0x2c,uVar3);
      plVar7 = plVar6;
    }
    FUN_142514cf0(plVar8,*(undefined8 *)(param_2 + 4),iVar1,plVar7);
  }
LAB_1405b4485:
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return;
  }
  if (param_1[1] == -1) {
    return;
  }
  if (param_1[1] != *(longlong *)(lVar2 + 0xd0)) {
    return;
  }
  *(int *)(lVar2 + 0x2e8) = *(int *)(lVar2 + 0x2e8) + -1;
LAB_1405b44c8:
  param_1[1] = -1;
  *param_1 = 0;
  return;
}



// FUNCTION 1405b44e0 FUN_1405b44e0 body=1573 status=ok
// SIG undefined FUN_1405b44e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1405b44e0(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_188 [32];
  char local_168;
  int local_160;
  uint uStack_15c;
  uint *puStack_158;
  uint local_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  float local_138;
  longlong *local_130;
  int iStack_128;
  uint uStack_124;
  uint *local_120;
  uint uStack_118;
  uint uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  uint *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong local_c8;
  undefined8 local_c0;
  uint local_b8 [4];
  uint *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  local_98 = 0xffffffff;
  plVar1 = (longlong *)(param_1 + 0x80);
  local_c8 = 0;
  puVar15 = (uint *)(param_1 + 0x90);
  local_c0 = 0;
  local_a8 = (uint *)0x0;
  local_a0 = 0;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  uVar2 = *(uint *)(param_1 + 0xa8);
  local_168 = '\0';
  local_160 = 0;
  uStack_15c = 1;
  uStack_14c = 0;
  iStack_148 = 0;
  if (uVar2 != 0) {
    puVar14 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar14 = puVar15;
    }
    uVar3 = *puVar14;
    iStack_148 = 0;
    local_160 = 0;
    while (uVar3 == 0) {
      lVar10 = (longlong)local_160;
      iStack_148 = iStack_148 + 0x20;
      iVar8 = local_160 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_160;
      local_160 = iVar8;
      if (bVar5) goto LAB_1405b4600;
      uVar3 = puVar14[lVar10 + 1];
    }
    uStack_15c = -uVar3 & uVar3;
    iVar8 = 0x1f;
    if (uStack_15c != 0) {
      for (; uStack_15c >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_15c == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_14c = (iStack_148 - iVar8) + 0x1f;
    if ((int)uVar2 < (int)uStack_14c) {
LAB_1405b4600:
      uStack_14c = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0xa8);
  uStack_118 = 0xffffffff;
  uStack_114 = uStack_14c;
  local_110 = CONCAT44(uStack_144,iStack_148);
  uStack_f0 = CONCAT44(uStack_15c,local_160);
  local_150 = -1 << ((byte)uVar3 & 0x1f);
  uVar13 = uVar3 & 0xffffffe0;
  iStack_128 = local_160;
  uStack_124 = uStack_15c;
  puStack_158 = puVar15;
  uStack_14c = uVar3;
  local_120 = puVar15;
  local_f8 = plVar1;
  puStack_e8 = puVar15;
  uStack_d8 = local_110;
  local_130 = plVar1;
  uStack_e0._0_4_ = uStack_118;
  uStack_e0._4_4_ = uStack_114;
  if (uVar3 != uVar2) {
    puVar14 = *(uint **)(param_1 + 0xa0);
    if (*(uint **)(param_1 + 0xa0) == (uint *)0x0) {
      puVar14 = puVar15;
    }
    uVar9 = puVar14[(int)uVar3 >> 5] & local_150;
    iVar8 = (int)uVar3 >> 5;
    while (uVar9 == 0) {
      uVar13 = uVar13 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar8) goto LAB_1405b46d1;
      uVar9 = puVar14[(longlong)iVar8 + 1];
      local_150 = 0xffffffff;
      iVar8 = iVar8 + 1;
    }
    uVar9 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_14c = (uVar13 - iVar8) + 0x1f;
    uVar3 = uStack_14c;
    if ((int)uVar2 < (int)uStack_14c) {
LAB_1405b46d1:
      uStack_14c = uVar2;
      uVar3 = uVar2;
    }
  }
  while (((uStack_114 != uVar3 || (local_120 != puVar15)) || (local_130 != plVar1))) {
    lVar10 = (longlong)(int)uStack_114 * 0x20 + *local_130;
    cVar6 = FWeakObjectPtr::IsValid(lVar10);
    if (cVar6 == '\0') {
      local_168 = '\x01';
    }
    else {
      lVar7 = FWeakObjectPtr::Get(lVar10);
      plVar12 = *(longlong **)(lVar10 + 8);
      local_138 = *(float *)(lVar7 + 0x2e8);
      plVar4 = plVar12 + (longlong)*(int *)(lVar10 + 0x10) * 3;
      local_140 = *(undefined8 *)(lVar7 + 0x2e0);
      for (; plVar12 != plVar4; plVar12 = plVar12 + 3) {
        lVar10 = *plVar12;
        if ((*(longlong *)(lVar10 + 0x380) == 0) || (*(longlong *)(lVar10 + 0x388) == 0)) {
          fVar17 = *(float *)(lVar10 + 0x220) - (float)local_140;
          fVar21 = *(float *)((longlong)plVar12 + 0xc) - (float)local_140;
          local_140._4_4_ = (float)((ulonglong)local_140 >> 0x20);
          fVar20 = *(float *)(plVar12 + 2) - local_140._4_4_;
          fVar22 = *(float *)((longlong)plVar12 + 0x14) - local_138;
          fVar18 = *(float *)(lVar10 + 0x224) - local_140._4_4_;
          fVar19 = *(float *)(lVar10 + 0x228) - local_138;
          fVar23 = *(float *)(plVar12 + 1) * *(float *)(plVar12 + 1);
          if ((fVar18 * fVar18 + fVar17 * fVar17 + fVar19 * fVar19 < fVar23) ||
             (fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22 < fVar23)) {
            puVar11 = &local_100;
            goto LAB_1405b482e;
          }
        }
        else {
          cVar6 = (**(code **)(**(longlong **)(lVar10 + 0x388) + 0x10))
                            (*(longlong **)(lVar10 + 0x388),lVar10,(int)plVar12[1],&local_140);
          if (cVar6 != '\0') {
            puVar11 = &local_108;
LAB_1405b482e:
            FUN_14058cbf0(&local_c8,puVar11,plVar12,0);
          }
        }
      }
    }
    uStack_118 = uStack_118 & ~uStack_124;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_128);
  }
  iVar8 = (int)local_a0;
  puStack_158 = local_b8;
  uStack_15c = 1;
  local_160 = 0;
  uStack_14c = 0;
  iStack_148 = 0;
  if ((int)local_a0 != 0) {
    puVar15 = local_b8;
    if (local_a8 != (uint *)0x0) {
      puVar15 = local_a8;
    }
    uVar2 = *puVar15;
    iStack_148 = 0;
    local_160 = 0;
    while (uVar2 == 0) {
      iStack_148 = iStack_148 + 0x20;
      if ((int)((int)local_a0 + -1 + ((int)local_a0 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_160) {
        uStack_14c = (int)local_a0;
        local_160 = local_160 + 1;
        goto LAB_1405b4916;
      }
      uVar2 = puVar15[(longlong)local_160 + 1];
      local_160 = local_160 + 1;
    }
    uStack_15c = -uVar2 & uVar2;
    iVar16 = 0x1f;
    if (uStack_15c != 0) {
      for (; uStack_15c >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uStack_15c == 0) {
      iVar16 = 0x20;
    }
    else {
      iVar16 = 0x1f - iVar16;
    }
    uStack_14c = (iStack_148 - iVar16) + 0x1f;
    if ((int)local_a0 < (int)uStack_14c) {
      uStack_14c = (int)local_a0;
    }
  }
LAB_1405b4916:
  uStack_114 = uStack_14c;
  uStack_e0 = CONCAT44(uStack_14c,0xffffffff);
  local_110 = CONCAT44(uStack_144,iStack_148);
  local_f8 = &local_c8;
  uStack_f0 = CONCAT44(uStack_15c,local_160);
  local_150 = -1 << ((byte)local_a0 & 0x1f);
  uStack_14c = (int)local_a0;
  iStack_128 = local_160;
  uStack_124 = uStack_15c;
  uStack_118 = 0xffffffff;
  local_120 = puStack_158;
  puStack_e8 = puStack_158;
  uStack_d8 = local_110;
  local_130 = local_f8;
  while (((uStack_114 != iVar8 || (local_120 != local_b8)) || (local_130 != &local_c8))) {
    plVar4 = *(longlong **)(*local_130 + (longlong)(int)uStack_114 * 0x10);
    if (((((*(byte *)((longlong)plVar4 + 0xba) & 4) != 0) &&
         (*(char *)((longlong)plVar4 + 0x401) != '\0')) &&
        (*(char *)((longlong)plVar4 + 0x402) == '\0')) && (plVar4[0x6f] != 0)) {
      FUN_1405a6580(DAT_1468536c8,plVar4);
      *(undefined1 *)((longlong)plVar4 + 0x401) = 0;
      (**(code **)(*plVar4 + 0x358))(plVar4,1);
      if ((char)plVar4[0x80] == '\0') {
        lVar10 = plVar4[0x6f];
        if (lVar10 != 0) {
          *(int *)(lVar10 + 0x2e4) = *(int *)(lVar10 + 0x2e4) + 1;
        }
        FUN_1405ae630(lVar10,0);
        if (lVar10 != 0) {
          FUN_1405a53f0(lVar10);
        }
      }
      else {
        FUN_1405b0f30(plVar4);
      }
      FUN_1405a1640(plVar4);
      FUN_1405b1ab0(plVar4);
      if ((plVar4[0x60] != 0) && (plVar4[0x61] != 0)) {
        (**(code **)(*(longlong *)plVar4[0x61] + 0x18))((longlong *)plVar4[0x61],plVar4);
      }
    }
    uStack_118 = uStack_118 & ~uStack_124;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_128);
  }
  if (local_168 != '\0') {
    FWeakObjectPtr::operator=(&local_100,0);
    local_108 = local_100;
    TSet<TTuple<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UEdGraphPin_Deprecated,FWeakObjectPtr>,TArray<FUnresolvedPinData,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Remove(plVar1,&local_108);
  }
  local_80 = 0;
  if (local_88 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_c8);
  return;
}



// FUNCTION 1405b4b10 FUN_1405b4b10 body=541 status=ok
// SIG undefined FUN_1405b4b10(void)

void FUN_1405b4b10(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  uVar11 = *(uint *)(param_1 + 100);
  uVar2 = *(ushort *)(param_3 + 2);
  uVar5 = (uint)*(byte *)(param_1 + 0x6d) * (uVar11 & 0xff) * (uint)uVar2;
  uVar10 = *(uint *)(param_1 + 0x8c);
  if (uVar5 <= *(uint *)(param_1 + 0x8c)) {
    uVar10 = uVar5;
  }
  if (uVar10 == 0) {
    if (*(char *)(param_1 + 0x62) == '\0') {
      uVar7 = 0x11;
      if (*(char *)(param_1 + 0x60) != '\0') {
        uVar7 = 0x2e;
      }
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar7;
    }
    else {
      if (*(char *)(param_1 + 0x70) == '\0') {
        _guard_xfg_dispatch_icall_nop((void *)*param_3,0,(ulonglong)uVar5);
      }
      else {
        uVar10 = 0;
        if ((char)uVar11 != '\0') {
          do {
            puVar12 = (undefined4 *)
                      (*param_3 + (ulonglong)*(ushort *)(param_3 + 2) * (ulonglong)uVar10 * 4);
            uVar8 = (ulonglong)uVar2;
            if (uVar2 != 0) {
              for (; uVar8 != 0; uVar8 = uVar8 - 1) {
                *puVar12 = 0;
                puVar12 = puVar12 + 1;
              }
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(byte *)(param_1 + 100));
        }
      }
      *(short *)((longlong)param_3 + 0x12) = (short)param_3[2];
      *(undefined4 *)((longlong)param_3 + 0xc) = 0x2d;
    }
  }
  else {
    if (*(char *)(param_1 + 0x70) == '\0') {
      _guard_xfg_dispatch_icall_nop((void *)*param_3,*(void **)(param_1 + 0x78),(ulonglong)uVar5);
    }
    else {
      uVar5 = 0;
      if ((char)uVar11 != '\0') {
        do {
          uVar9 = 0;
          lVar3 = *(longlong *)(param_1 + 0x78);
          lVar1 = *param_3 + (ulonglong)*(ushort *)(param_3 + 2) * (ulonglong)uVar5 * 4;
          if (3 < uVar2) {
            iVar13 = 2;
            puVar12 = (undefined4 *)(lVar1 + 8);
            do {
              iVar6 = *(byte *)(param_1 + 100) * uVar9;
              uVar9 = uVar9 + 4;
              puVar12[-2] = *(undefined4 *)(lVar3 + (ulonglong)(iVar6 + uVar5) * 4);
              puVar12[-1] = *(undefined4 *)
                             (lVar3 + (ulonglong)
                                      ((iVar13 + -1) * (uint)*(byte *)(param_1 + 100) + uVar5) * 4);
              *puVar12 = *(undefined4 *)
                          (lVar3 + (ulonglong)((uint)*(byte *)(param_1 + 100) * iVar13 + uVar5) * 4)
              ;
              iVar6 = iVar13 + 1;
              iVar13 = iVar13 + 4;
              puVar12[1] = *(undefined4 *)
                            (lVar3 + (ulonglong)(iVar6 * (uint)*(byte *)(param_1 + 100) + uVar5) * 4
                            );
              puVar12 = puVar12 + 4;
            } while (uVar9 < uVar2 - 3);
            uVar11 = *(uint *)(param_1 + 100);
          }
          if (uVar9 < uVar2) {
            puVar12 = (undefined4 *)(lVar1 + (ulonglong)uVar9 * 4);
            do {
              iVar13 = *(byte *)(param_1 + 100) * uVar9;
              uVar9 = uVar9 + 1;
              *puVar12 = *(undefined4 *)(lVar3 + (ulonglong)(iVar13 + uVar5) * 4);
              puVar12 = puVar12 + 1;
            } while (uVar9 < uVar2);
            uVar11 = *(uint *)(param_1 + 100);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uVar11 & 0xff));
      }
    }
    *(short *)((longlong)param_3 + 0x12) = (short)param_3[2];
    *(undefined4 *)((longlong)param_3 + 0xc) = 0x2d;
    *(uint *)(param_1 + 0x88) = uVar10;
  }
                    /* WARNING: Could not recover jumptable at 0x0001405b4d26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 1405b4d30 FUN_1405b4d30 body=158 status=ok
// SIG undefined FUN_1405b4d30(void)

void FUN_1405b4d30(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  BOOL BVar7;
  
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  }
  uVar5 = *(uint *)(param_1 + 100);
  bVar1 = *(byte *)(param_1 + 0x70);
  bVar2 = *(byte *)(param_1 + 0x6d);
  uVar4 = *(ushort *)(param_1 + 0x6e);
  bVar3 = *(byte *)(param_1 + 0x6c);
  uVar6 = *(undefined4 *)(param_1 + 0x68);
  param_3[2] = param_3[2] & 0xfff80000;
  param_3[1] = uVar5;
  *param_3 = uVar6;
  param_3[2] = param_3[2] |
               (((bVar1 & 1) << 2 | uVar4 & 3) << 10 | (uint)bVar2 * (uVar5 & 0xff) & 0x3ff) << 6 |
               bVar3 & 0x3f;
                    /* WARNING: Could not recover jumptable at 0x0001405b4dc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 1405b4dd0 FUN_1405b4dd0 body=8 status=ok
// SIG undefined FUN_1405b4dd0(void)

longlong FUN_1405b4dd0(longlong param_1)

{
  return param_1 + -0x458;
}



// FUNCTION 1405b4df0 FUN_1405b4df0 body=47 status=ok
// SIG undefined FUN_1405b4df0(void)

longlong FUN_1405b4df0(void)

{
  if (DAT_146853ff8 == 0) {
    FUN_141786440(&DAT_146853ff8,&PTR_GetPrivateStaticClass_143fd1540);
  }
  return DAT_146853ff8;
}



// FUNCTION 1405b4e20 FUN_1405b4e20 body=47 status=ok
// SIG undefined FUN_1405b4e20(void)

longlong FUN_1405b4e20(void)

{
  if (DAT_146853f60 == 0) {
    FUN_141786a30(&DAT_146853f60,&PTR_FUN_1461fe810);
  }
  return DAT_146853f60;
}



// FUNCTION 1405b4e50 FUN_1405b4e50 body=47 status=ok
// SIG undefined FUN_1405b4e50(void)

longlong FUN_1405b4e50(void)

{
  if (DAT_146853f68 == 0) {
    FUN_141786a30(&DAT_146853f68,&PTR_FUN_1461fe8d0);
  }
  return DAT_146853f68;
}



// FUNCTION 1405b4e80 FUN_1405b4e80 body=47 status=ok
// SIG undefined FUN_1405b4e80(void)

longlong FUN_1405b4e80(void)

{
  if (DAT_146853f70 == 0) {
    FUN_141786a30(&DAT_146853f70,&PTR_FUN_1461fe950);
  }
  return DAT_146853f70;
}



// FUNCTION 1405b4eb0 FUN_1405b4eb0 body=47 status=ok
// SIG undefined FUN_1405b4eb0(void)

longlong FUN_1405b4eb0(void)

{
  if (DAT_146853f78 == 0) {
    FUN_141786a30(&DAT_146853f78,&PTR_FUN_1461fea10);
  }
  return DAT_146853f78;
}



// FUNCTION 1405b4ee0 FUN_1405b4ee0 body=47 status=ok
// SIG undefined FUN_1405b4ee0(void)

longlong FUN_1405b4ee0(void)

{
  if (DAT_146853f80 == 0) {
    FUN_141786a30(&DAT_146853f80,&PTR_FUN_1461feaa0);
  }
  return DAT_146853f80;
}



// FUNCTION 1405b4f10 FUN_1405b4f10 body=47 status=ok
// SIG undefined FUN_1405b4f10(void)

longlong FUN_1405b4f10(void)

{
  if (DAT_146853f88 == 0) {
    FUN_141786a30(&DAT_146853f88,&PTR_FUN_1461feba0);
  }
  return DAT_146853f88;
}



// FUNCTION 1405b4f40 FUN_1405b4f40 body=47 status=ok
// SIG undefined FUN_1405b4f40(void)

longlong FUN_1405b4f40(void)

{
  if (DAT_146853f90 == 0) {
    FUN_141786a30(&DAT_146853f90,&PTR_FUN_1461febe0);
  }
  return DAT_146853f90;
}



// FUNCTION 1405b4f70 FUN_1405b4f70 body=47 status=ok
// SIG undefined FUN_1405b4f70(void)

longlong FUN_1405b4f70(void)

{
  if (DAT_146853f98 == 0) {
    FUN_141786a30(&DAT_146853f98,&PTR_FUN_1461fed80);
  }
  return DAT_146853f98;
}



// FUNCTION 1405b4fa0 FUN_1405b4fa0 body=47 status=ok
// SIG undefined FUN_1405b4fa0(void)

longlong FUN_1405b4fa0(void)

{
  if (DAT_146853fa0 == 0) {
    FUN_141786a30(&DAT_146853fa0,&PTR_FUN_1461fee00);
  }
  return DAT_146853fa0;
}



// FUNCTION 1405b4fd0 FUN_1405b4fd0 body=47 status=ok
// SIG undefined FUN_1405b4fd0(void)

longlong FUN_1405b4fd0(void)

{
  if (DAT_146853fa8 == 0) {
    FUN_141786a30(&DAT_146853fa8,&PTR_FUN_1461fef00);
  }
  return DAT_146853fa8;
}



// FUNCTION 1405b5000 FUN_1405b5000 body=47 status=ok
// SIG undefined FUN_1405b5000(void)

longlong FUN_1405b5000(void)

{
  if (DAT_146853fb0 == 0) {
    FUN_141786a30(&DAT_146853fb0,&PTR_FUN_1461fefc0);
  }
  return DAT_146853fb0;
}



// FUNCTION 1405b5030 FUN_1405b5030 body=47 status=ok
// SIG undefined FUN_1405b5030(void)

longlong FUN_1405b5030(void)

{
  if (DAT_146853fb8 == 0) {
    FUN_141786a30(&DAT_146853fb8,&PTR_FUN_1461ff040);
  }
  return DAT_146853fb8;
}



// FUNCTION 1405b5060 FUN_1405b5060 body=47 status=ok
// SIG undefined FUN_1405b5060(void)

longlong FUN_1405b5060(void)

{
  if (DAT_146853fc0 == 0) {
    FUN_141786a30(&DAT_146853fc0,&PTR_FUN_1461ff0c0);
  }
  return DAT_146853fc0;
}



// FUNCTION 1405b5090 FUN_1405b5090 body=47 status=ok
// SIG undefined FUN_1405b5090(void)

longlong FUN_1405b5090(void)

{
  if (DAT_146853fc8 == 0) {
    FUN_141786a30(&DAT_146853fc8,&PTR_FUN_1461ff250);
  }
  return DAT_146853fc8;
}



// FUNCTION 1405b50c0 FUN_1405b50c0 body=47 status=ok
// SIG undefined FUN_1405b50c0(void)

longlong FUN_1405b50c0(void)

{
  if (DAT_146853fd0 == 0) {
    FUN_141786a30(&DAT_146853fd0,&PTR_FUN_1461ff3c0);
  }
  return DAT_146853fd0;
}



// FUNCTION 1405b50f0 FUN_1405b50f0 body=47 status=ok
// SIG undefined FUN_1405b50f0(void)

longlong FUN_1405b50f0(void)

{
  if (DAT_146853fd8 == 0) {
    FUN_141786a30(&DAT_146853fd8,&PTR_FUN_1461ff440);
  }
  return DAT_146853fd8;
}



// FUNCTION 1405b5120 FUN_1405b5120 body=47 status=ok
// SIG undefined FUN_1405b5120(void)

longlong FUN_1405b5120(void)

{
  if (DAT_146853fe0 == 0) {
    FUN_141786a30(&DAT_146853fe0,&PTR_FUN_1461ff4c0);
  }
  return DAT_146853fe0;
}



// FUNCTION 1405b5150 FUN_1405b5150 body=47 status=ok
// SIG undefined FUN_1405b5150(void)

longlong FUN_1405b5150(void)

{
  if (DAT_146853fe8 == 0) {
    FUN_141786a30(&DAT_146853fe8,&PTR_FUN_1461ff500);
  }
  return DAT_146853fe8;
}



// FUNCTION 1405b5180 FUN_1405b5180 body=47 status=ok
// SIG undefined FUN_1405b5180(void)

longlong FUN_1405b5180(void)

{
  if (DAT_146853ff0 == 0) {
    FUN_141786a30(&DAT_146853ff0,&PTR_FUN_1461ff580);
  }
  return DAT_146853ff0;
}



// FUNCTION 1405b51b0 FUN_1405b51b0 body=53 status=ok
// SIG undefined FUN_1405b51b0(void)

void FUN_1405b51b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *puVar1 = &PTR_FUN_143fd6698;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1405b51f0 FUN_1405b51f0 body=53 status=ok
// SIG undefined FUN_1405b51f0(void)

void FUN_1405b51f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *puVar1 = &PTR_FUN_143fd67b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1405b5230 FUN_1405b5230 body=151 status=ok
// SIG undefined FUN_1405b5230(void)

longlong FUN_1405b5230(void)

{
  if (DAT_146854100 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"WwiseAudioEffect",&DAT_146854100,FUN_1405b7910,0x38,
                  0x10000000,0,L"Engine",&LAB_1405b65e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146854100;
}



// FUNCTION 1405b52d0 FUN_1405b52d0 body=53 status=ok
// SIG undefined FUN_1405b52d0(void)

void FUN_1405b52d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *puVar1 = &PTR_FUN_143fd5520;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1405b5310 FUN_1405b5310 body=162 status=ok
// SIG undefined FUN_1405b5310(void)

longlong FUN_1405b5310(void)

{
  if (DAT_146854110 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"WwiseListenerEnvironmentalEffect",&DAT_146854110,
                  FUN_140447710,0x50,0x10000000,0,L"Engine",&LAB_1405b6660,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405b5230,&LAB_140447700,0);
  }
  return DAT_146854110;
}



// FUNCTION 1405b53c0 FUN_1405b53c0 body=162 status=ok
// SIG undefined FUN_1405b53c0(void)

longlong FUN_1405b53c0(void)

{
  if (DAT_146854120 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"WwiseZoneAudioEffect",&DAT_146854120,FUN_140447710,0x60,
                  0x10000000,0,L"Engine",&LAB_1405b66d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1405b5230,&LAB_140447700,0);
  }
  return DAT_146854120;
}



// FUNCTION 1405b5470 FUN_1405b5470 body=53 status=ok
// SIG undefined FUN_1405b5470(void)

void FUN_1405b5470(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_143fd5638;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1405b54b0 FUN_1405b54b0 body=47 status=ok
// SIG undefined FUN_1405b54b0(void)

longlong FUN_1405b54b0(void)

{
  if (DAT_1468540f8 == 0) {
    FUN_141786440(&DAT_1468540f8,&PTR_FUN_143fd0a40);
  }
  return DAT_1468540f8;
}



// FUNCTION 1405b54e0 FUN_1405b54e0 body=47 status=ok
// SIG undefined FUN_1405b54e0(void)

longlong FUN_1405b54e0(void)

{
  if (DAT_1468540e8 == 0) {
    FUN_141786a30(&DAT_1468540e8,&PTR_FUN_1462007b0);
  }
  return DAT_1468540e8;
}



// FUNCTION 1405b5510 FUN_1405b5510 body=47 status=ok
// SIG undefined FUN_1405b5510(void)

longlong FUN_1405b5510(void)

{
  if (DAT_1468540f0 == 0) {
    FUN_141786a30(&DAT_1468540f0,&PTR_FUN_1462007f0);
  }
  return DAT_1468540f0;
}



// FUNCTION 1405b5580 FUN_1405b5580 body=162 status=ok
// SIG undefined FUN_1405b5580(void)

longlong FUN_1405b5580(void)

{
  if (DAT_146853e08 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"AudioParametersProviderInterface",&DAT_146853e08,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",&LAB_140492380,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146853e08;
}



// FUNCTION 1405b5640 Z_Construct_UPackage__Script_Engine body=47 status=ok
// SIG undefined Z_Construct_UPackage__Script_Engine(void)

longlong Z_Construct_UPackage__Script_Engine(void)

{
  if (DAT_146853f08 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
  }
  return DAT_146853f08;
}



// FUNCTION 1405b5680 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UGeometryCacheTrackStreamable::GetPrivateStaticClass(void)

{
  if (DAT_146854018 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"WwiseWorldComponentPool",&DAT_146854018,FUN_140447710,400,
                  0x10000000,0,L"Engine",FUN_1405b6680,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146854018;
}



// FUNCTION 1405b5730 FUN_1405b5730 body=162 status=ok
// SIG undefined FUN_1405b5730(void)

longlong FUN_1405b5730(void)

{
  if (DAT_146853e18 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"AudioPositioningProviderInterface",&DAT_146853e18,
                  FUN_140447710,0x28,0x10004001,0,L"Engine",FUN_1405b6450,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPackage::StaticClass,&LAB_140447700,0);
  }
  return DAT_146853e18;
}



// FUNCTION 1405b57f0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInterpTrackInstAkAudioEvent::GetPrivateStaticClass(void)

{
  if (DAT_146853e28 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"InterpTrackInstWwiseAudioEvent",&DAT_146853e28,
                  FUN_140447710,0x30,0x10000000,0,L"Engine",&LAB_1405b6480,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UInterpTrackInst::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146853e28;
}



// FUNCTION 1405b58b0 FUN_1405b58b0 body=162 status=ok
// SIG undefined FUN_1405b58b0(void)

longlong FUN_1405b58b0(void)

{
  if (DAT_146854030 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"WwiseAudioComponentPool",&DAT_146854030,FUN_1405b78e0,
                  0x1a0,0x10000000,0,L"Engine",FUN_1405b6580,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_146854030;
}



// FUNCTION 1405b5960 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UInterpTrackInstAkAudioEvent::GetPrivateStaticClass(void)

{
  if (DAT_146853e38 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"InterpTrackInstWwiseAudioRTPC",&DAT_146853e38,
                  FUN_140447710,0x30,0x10000000,0,L"Engine",&LAB_1405b64a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UInterpTrackInst::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146853e38;
}



// FUNCTION 1405b5a10 FUN_1405b5a10 body=47 status=ok
// SIG undefined FUN_1405b5a10(void)

longlong FUN_1405b5a10(void)

{
  if (DAT_146854028 == 0) {
    FUN_141786440(&DAT_146854028,&PTR_FUN_143fd2340);
  }
  return DAT_146854028;
}



// FUNCTION 1405b5a40 FUN_1405b5a40 body=47 status=ok
// SIG undefined FUN_1405b5a40(void)

longlong FUN_1405b5a40(void)

{
  if (DAT_146854020 == 0) {
    FUN_141786a30(&DAT_146854020,&PTR_FUN_1461ffdf0);
  }
  return DAT_146854020;
}



// FUNCTION 1405b5aa0 FUN_1405b5aa0 body=162 status=ok
// SIG undefined FUN_1405b5aa0(void)

longlong FUN_1405b5aa0(void)

{
  if (DAT_146854048 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"WwiseAudioInputEvent",&DAT_146854048,FUN_140447710,0x150,
                  0x10000000,0,L"Engine",&LAB_1405b6600,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPawnAction_Sequence::StaticClass,&LAB_140447700,0);
  }
  return DAT_146854048;
}



// FUNCTION 1405b5b60 FUN_1405b5b60 body=162 status=ok
// SIG undefined FUN_1405b5b60(void)

longlong FUN_1405b5b60(void)

{
  if (DAT_146853ea0 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"MovieSceneWwiseTrack",&DAT_146853ea0,FUN_140447710,0x70,
                  0x10000000,0,L"Engine",&LAB_1405b6520,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7830,&LAB_140447700,0);
  }
  return DAT_146853ea0;
}



// FUNCTION 1405b5c10 FUN_1405b5c10 body=162 status=ok
// SIG undefined FUN_1405b5c10(void)

longlong FUN_1405b5c10(void)

{
  if (DAT_146854058 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"WwiseAuxBus",&DAT_146854058,FUN_140447710,0x38,0x10000000,
                  0,L"Engine",&LAB_1405b6620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1405bbd60,&LAB_140447700,0);
  }
  return DAT_146854058;
}



// FUNCTION 1405b5cc0 FUN_1405b5cc0 body=162 status=ok
// SIG undefined FUN_1405b5cc0(void)

longlong FUN_1405b5cc0(void)

{
  if (DAT_146853eb0 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"MovieSceneWwiseEventSection",&DAT_146853eb0,FUN_140447710,
                  0x118,0x10000000,0,L"Engine",&LAB_1405b6500,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7840,&LAB_140447700,0);
  }
  return DAT_146853eb0;
}



// FUNCTION 1405b5d80 FUN_1405b5d80 body=162 status=ok
// SIG undefined FUN_1405b5d80(void)

longlong FUN_1405b5d80(void)

{
  if (DAT_146854070 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"WwiseBank",&DAT_146854070,FUN_140447710,0x58,0x10000000,0,
                  L"Engine",&LAB_1405b6640,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1405bbd60,&LAB_140447700,0);
  }
  return DAT_146854070;
}



// FUNCTION 1405b5e30 FUN_1405b5e30 body=53 status=ok
// SIG undefined FUN_1405b5e30(void)

void FUN_1405b5e30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *puVar1 = &PTR_FUN_143fd5150;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405b5e70 FUN_1405b5e70 body=162 status=ok
// SIG undefined FUN_1405b5e70(void)

longlong FUN_1405b5e70(void)

{
  if (DAT_146853e58 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"InterpTrackWwiseAudioEvent",&DAT_146853e58,FUN_140447710,
                  0xa8,0x10000000,0,L"Engine",&LAB_1405b64c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UInterpTrackVectorBase::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146853e58;
}



// FUNCTION 1405b5f20 FUN_1405b5f20 body=53 status=ok
// SIG undefined FUN_1405b5f20(void)

void FUN_1405b5f20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_143fd5268;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405b5f60 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AUGDoor::GetPrivateStaticClass(void)

{
  if (DAT_146854000 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"WwiseAudioComponent",&DAT_146854000,
                  UKismetArrayLibrary::StaticRegisterNativesUKismetArrayLibrary,0x440,0x10000000,0,
                  L"Engine",&LAB_1405b6560,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  USoundSourceBus::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146854000;
}



// FUNCTION 1405b6030 FUN_1405b6030 body=53 status=ok
// SIG undefined FUN_1405b6030(void)

void FUN_1405b6030(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_143fd5008;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405b6070 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGTutorialStepBotDestroy::GetPrivateStaticClass(void)

{
  if (DAT_146853ef0 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"WwiseAmbientSound",&DAT_146853ef0,FUN_1405b7880,0x538,
                  0x10000000,0,L"Engine",&LAB_1405b6430,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146853ef0;
}



// FUNCTION 1405b6130 FUN_1405b6130 body=162 status=ok
// SIG undefined FUN_1405b6130(void)

longlong FUN_1405b6130(void)

{
  if (DAT_146853e68 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"InterpTrackWwiseAudioRTPC",&DAT_146853e68,FUN_140447710,
                  0xa0,0x10000000,0,L"Engine",&LAB_1405b64e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UInterpTrackFloatBase::StaticClass,&LAB_140447700,0);
  }
  return DAT_146853e68;
}



// FUNCTION 1405b61f0 FUN_1405b61f0 body=47 status=ok
// SIG undefined FUN_1405b61f0(void)

longlong FUN_1405b61f0(void)

{
  if (DAT_146853ee8 == 0) {
    FUN_141786440(&DAT_146853ee8,&PTR_GetPrivateStaticClass_143fd3930);
  }
  return DAT_146853ee8;
}



// FUNCTION 1405b6220 FUN_1405b6220 body=47 status=ok
// SIG undefined FUN_1405b6220(void)

longlong FUN_1405b6220(void)

{
  if (DAT_146853ec8 == 0) {
    FUN_141786a30(&DAT_146853ec8,&PTR_FUN_1461fdc10);
  }
  return DAT_146853ec8;
}



// FUNCTION 1405b6250 FUN_1405b6250 body=47 status=ok
// SIG undefined FUN_1405b6250(void)

longlong FUN_1405b6250(void)

{
  if (DAT_146853ed0 == 0) {
    FUN_141786a30(&DAT_146853ed0,&PTR_FUN_1461fdc50);
  }
  return DAT_146853ed0;
}



// FUNCTION 1405b6280 FUN_1405b6280 body=47 status=ok
// SIG undefined FUN_1405b6280(void)

longlong FUN_1405b6280(void)

{
  if (DAT_146853ed8 == 0) {
    FUN_141786a30(&DAT_146853ed8,&PTR_FUN_1461fdc90);
  }
  return DAT_146853ed8;
}



// FUNCTION 1405b62b0 FUN_1405b62b0 body=47 status=ok
// SIG undefined FUN_1405b62b0(void)

longlong FUN_1405b62b0(void)

{
  if (DAT_146853ee0 == 0) {
    FUN_141786a30(&DAT_146853ee0,&PTR_FUN_1461fdcd0);
  }
  return DAT_146853ee0;
}



// FUNCTION 1405b62e0 FUN_1405b62e0 body=53 status=ok
// SIG undefined FUN_1405b62e0(void)

void FUN_1405b62e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *puVar1 = &PTR_FUN_143fd5380;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 1405b6340 FUN_1405b6340 body=151 status=ok
// SIG undefined FUN_1405b6340(void)

longlong FUN_1405b6340(void)

{
  if (DAT_146853f00 == 0) {
    FUN_14171ccd0(L"/Script/WwiseAudio",L"WwiseAssetSyncDestination",&DAT_146853f00,FUN_140447710,
                  0x48,0x10000000,0,L"Engine",&LAB_1405b6540,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146853f00;
}



// FUNCTION 1405b63f0 FUN_1405b63f0 body=53 status=ok
// SIG undefined FUN_1405b63f0(void)

void FUN_1405b63f0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_143fd6580;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1405b6450 FUN_1405b6450 body=41 status=ok
// SIG undefined FUN_1405b6450(void)

void FUN_1405b6450(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR_FUN_143fd4d90;
  }
  return;
}



// FUNCTION 1405b6580 FUN_1405b6580 body=82 status=ok
// SIG undefined FUN_1405b6580(void)

void FUN_1405b6580(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142326e40(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__143fd5ca8;
    puVar1[5] = &PTR_LAB_143fd60a0;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
    puVar1[0x32] = 0;
    puVar1[0x33] = 0;
  }
  return;
}



// FUNCTION 1405b6680 FUN_1405b6680 body=68 status=ok
// SIG undefined FUN_1405b6680(void)

void FUN_1405b6680(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142326e40(puVar1,param_1);
    *puVar1 = &PTR_FUN_143fd5880;
    puVar1[5] = &PTR_LAB_143fd5c78;
    puVar1[0x30] = 0;
    puVar1[0x31] = 0;
  }
  return;
}



// FUNCTION 1405b66f0 ~TArray<FDelegateBase,FHeapAllocator> body=145 status=ok
// SIG undefined ~TArray<FDelegateBase,FHeapAllocator>(void)

void TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>
               (undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)*param_1;
  iVar4 = *(int *)(param_1 + 1);
  if (iVar4 != 0) {
    do {
      if (((int)plVar3[1] != 0) && (plVar1 = (longlong *)*plVar3, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar3 != 0) {
          lVar2 = FMemory::Realloc(*plVar3,0,0);
          *plVar3 = lVar2;
        }
        *(undefined4 *)(plVar3 + 1) = 0;
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar3);
  return;
}



// FUNCTION 1405b6790 FUN_1405b6790 body=54 status=ok
// SIG undefined FUN_1405b6790(void)

longlong FUN_1405b6790(longlong param_1)

{
  if ((*(byte *)(*(longlong **)(param_1 + 0x90) + 5) & 8) != 0) {
    FUN_14170bea0(param_1);
    return param_1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
  return param_1;
}



// FUNCTION 1405b67d0 FUN_1405b67d0 body=54 status=ok
// SIG undefined FUN_1405b67d0(void)

longlong FUN_1405b67d0(longlong param_1)

{
  if ((*(byte *)(*(longlong **)(param_1 + 0x90) + 5) & 8) != 0) {
    FArchiveUObject::operator<<(param_1);
    return param_1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
  return param_1;
}



// FUNCTION 1405b6810 FUN_1405b6810 body=54 status=ok
// SIG undefined FUN_1405b6810(void)

longlong FUN_1405b6810(longlong param_1)

{
  if ((*(byte *)(*(longlong **)(param_1 + 0x90) + 5) & 8) != 0) {
    FUN_14170c090(param_1);
    return param_1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))();
  return param_1;
}



// FUNCTION 1405b6850 FUN_1405b6850 body=187 status=ok
// SIG undefined FUN_1405b6850(void)

longlong * FUN_1405b6850(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 local_res8 [8];
  undefined8 local_res18 [2];
  
  if ((*(byte *)((longlong *)param_1[0x12] + 5) & 8) == 0) {
    (**(code **)(*(longlong *)param_1[0x12] + 0x10))();
  }
  else {
    cVar1 = FWeakObjectPtr::IsValid(param_2);
    uVar2 = 0;
    if (cVar1 != '\0') {
      uVar2 = FWeakObjectPtr::Get(param_2);
    }
    local_res18[0] = uVar2;
    if ((((*(byte *)(param_1 + 5) & 1) == 0) && (param_1[0x35] != 0)) &&
       (piVar3 = (int *)FUN_1405b72e0(param_1[0x35],local_res8,uVar2), local_res18[0] = uVar2,
       *piVar3 == -1)) {
      local_res18[0] = 0;
    }
    (**(code **)(*param_1 + 0x30))(param_1,local_res18);
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FWeakObjectPtr::operator=(param_2,local_res18[0]);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1405b6930 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWmfMediaTracks::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 1405b6970 FUN_1405b6970 body=52 status=ok
// SIG undefined FUN_1405b6970(void)

undefined8 FUN_1405b6970(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1405b69b0 `scalar_deleting_destructor' body=90 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FNavLinkRenderingProxy::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 400) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1a0);
  }
  return param_1;
}



// FUNCTION 1405b6a10 FUN_1405b6a10 body=73 status=ok
// SIG undefined FUN_1405b6a10(void)

longlong FUN_1405b6a10(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,400);
  }
  return param_1;
}



// FUNCTION 1405b6c20 Copy body=193 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FAkAudioEventTrackKey>::Copy
          (undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x10);
    do {
      *param_2 = *(undefined4 *)(puVar3 + -2);
      puVar1 = (undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_2 + 2) = puVar3[-1];
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        param_2[6] = iVar2;
        if ((iVar2 == 0) && (param_2[7] == 0)) {
          param_2[7] = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        }
      }
      puVar3 = puVar3 + 4;
      param_4 = param_4 + -1;
      param_2 = param_2 + 8;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405b6d30 FUN_1405b6d30 body=193 status=ok
// SIG undefined FUN_1405b6d30(void)

undefined8 FUN_1405b6d30(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = param_2 + 1;
      *param_2 = puVar3[-1];
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(param_2 + 2) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x14) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          TArray<FRotator,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0xc);
        }
      }
      puVar3 = puVar3 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1405b6e60 FUN_1405b6e60 body=85 status=ok
// SIG undefined FUN_1405b6e60(void)

void FUN_1405b6e60(void)

{
  if (DAT_146853d40 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    DAT_146853d40 = GetStaticEnum(FUN_1405b81b0,DAT_146853f08,L"EAcousticsMode");
  }
  return;
}



// FUNCTION 1405b6ec0 FUN_1405b6ec0 body=85 status=ok
// SIG undefined FUN_1405b6ec0(void)

void FUN_1405b6ec0(void)

{
  if (DAT_146853d38 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    DAT_146853d38 = GetStaticEnum(FUN_1405b81e0,DAT_146853f08,L"EBankLoadState");
  }
  return;
}



// FUNCTION 1405b6f20 FUN_1405b6f20 body=85 status=ok
// SIG undefined FUN_1405b6f20(void)

void FUN_1405b6f20(void)

{
  if (DAT_146853d68 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    DAT_146853d68 = GetStaticEnum(FUN_1405b8210,DAT_146853f08,L"EWwiseAudioComponentMixBehavior");
  }
  return;
}



// FUNCTION 1405b6f80 FUN_1405b6f80 body=85 status=ok
// SIG undefined FUN_1405b6f80(void)

void FUN_1405b6f80(void)

{
  if (DAT_146853d20 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    DAT_146853d20 = GetStaticEnum(FUN_1405b8240,DAT_146853f08,L"EWwiseAudioComponentPoolMode");
  }
  return;
}



// FUNCTION 1405b6fe0 FUN_1405b6fe0 body=85 status=ok
// SIG undefined FUN_1405b6fe0(void)

void FUN_1405b6fe0(void)

{
  if (DAT_146853d70 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    DAT_146853d70 = GetStaticEnum(FUN_1405b8270,DAT_146853f08,L"EWwiseAudioComponentType");
  }
  return;
}



// FUNCTION 1405b7040 FUN_1405b7040 body=85 status=ok
// SIG undefined FUN_1405b7040(void)

void FUN_1405b7040(void)

{
  if (DAT_146853d50 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    DAT_146853d50 = GetStaticEnum(FUN_1405b82a0,DAT_146853f08,L"EWwiseCurveInterpolation");
  }
  return;
}



// FUNCTION 1405b70a0 FUN_1405b70a0 body=85 status=ok
// SIG undefined FUN_1405b70a0(void)

void FUN_1405b70a0(void)

{
  if (DAT_146853d18 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    DAT_146853d18 = GetStaticEnum(FUN_1405b82d0,DAT_146853f08,L"EWwiseEffectType");
  }
  return;
}



// FUNCTION 1405b7100 FUN_1405b7100 body=85 status=ok
// SIG undefined FUN_1405b7100(void)

void FUN_1405b7100(void)

{
  if (DAT_146853d58 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    DAT_146853d58 = GetStaticEnum(FUN_1405b8300,DAT_146853f08,L"EWwiseEventAction");
  }
  return;
}



// FUNCTION 1405b7160 FUN_1405b7160 body=85 status=ok
// SIG undefined FUN_1405b7160(void)

void FUN_1405b7160(void)

{
  if (DAT_146853d48 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    DAT_146853d48 = GetStaticEnum(FUN_1405b8330,DAT_146853f08,L"EWwiseMultiPositionType");
  }
  return;
}



// FUNCTION 1405b71c0 FUN_1405b71c0 body=85 status=ok
// SIG undefined FUN_1405b71c0(void)

void FUN_1405b71c0(void)

{
  if (DAT_146853d28 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    DAT_146853d28 = GetStaticEnum(FUN_1405b8360,DAT_146853f08,L"EWwisePlaybackConfiguration");
  }
  return;
}



// FUNCTION 1405b7220 FUN_1405b7220 body=85 status=ok
// SIG undefined FUN_1405b7220(void)

void FUN_1405b7220(void)

{
  if (DAT_146853d60 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    DAT_146853d60 = GetStaticEnum(FUN_1405b8390,DAT_146853f08,L"EWwisePostEventFlags");
  }
  return;
}



// FUNCTION 1405b7280 FUN_1405b7280 body=85 status=ok
// SIG undefined FUN_1405b7280(void)

void FUN_1405b7280(void)

{
  if (DAT_146853d30 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    DAT_146853d30 = GetStaticEnum(FUN_1405b83c0,DAT_146853f08,L"EWwiseTrackDirectionality");
  }
  return;
}



// FUNCTION 1405b72e0 FUN_1405b72e0 body=269 status=ok
// SIG undefined FUN_1405b72e0(void)

int * FUN_1405b72e0(longlong *param_1,int *param_2,ulonglong param_3)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar4 * 0x18) == param_3) {
          *param_2 = iVar4;
          return param_2;
        }
        iVar4 = *(int *)(*param_1 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1405b73f0 FUN_1405b73f0 body=125 status=ok
// SIG undefined FUN_1405b73f0(void)

undefined8 * FUN_1405b73f0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  lVar1 = *param_1;
  local_1c = 0;
  local_14 = 0;
  uVar2 = FUN_14178ac60(local_28,DAT_146853db8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  *param_2 = local_1c;
  *(undefined4 *)(param_2 + 1) = local_14;
  return param_2;
}



// FUNCTION 1405b74c0 FUN_1405b74c0 body=32 status=ok
// SIG undefined FUN_1405b74c0(void)

bool FUN_1405b74c0(longlong *param_1,longlong *param_2)

{
  (**(code **)(*param_1 + 0xf8))();
  return *param_2 != 0;
}



// FUNCTION 1405b74e0 FUN_1405b74e0 body=5 status=ok
// SIG undefined FUN_1405b74e0(void)

undefined8 FUN_1405b74e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



// FUNCTION 1405b74f0 FUN_1405b74f0 body=6 status=ok
// SIG undefined FUN_1405b74f0(void)

undefined8 FUN_1405b74f0(void)

{
  return 0x75795617;
}



// FUNCTION 1405b7500 FUN_1405b7500 body=6 status=ok
// SIG undefined FUN_1405b7500(void)

undefined8 FUN_1405b7500(void)

{
  return 0xfcffd2b2;
}



// FUNCTION 1405b7510 FUN_1405b7510 body=6 status=ok
// SIG undefined FUN_1405b7510(void)

undefined8 FUN_1405b7510(void)

{
  return 0xf104c5ca;
}



// FUNCTION 1405b7520 FUN_1405b7520 body=6 status=ok
// SIG undefined FUN_1405b7520(void)

undefined8 FUN_1405b7520(void)

{
  return 0xd5a95f85;
}



// FUNCTION 1405b7530 FUN_1405b7530 body=6 status=ok
// SIG undefined FUN_1405b7530(void)

undefined8 FUN_1405b7530(void)

{
  return 0xfc641436;
}



// FUNCTION 1405b7540 FUN_1405b7540 body=6 status=ok
// SIG undefined FUN_1405b7540(void)

undefined8 FUN_1405b7540(void)

{
  return 0x6c1dc231;
}



// FUNCTION 1405b7550 FUN_1405b7550 body=6 status=ok
// SIG undefined FUN_1405b7550(void)

undefined8 FUN_1405b7550(void)

{
  return 0x348d5560;
}



// FUNCTION 1405b7560 FUN_1405b7560 body=6 status=ok
// SIG undefined FUN_1405b7560(void)

undefined8 FUN_1405b7560(void)

{
  return 0x89f76fd2;
}



// FUNCTION 1405b7570 FUN_1405b7570 body=6 status=ok
// SIG undefined FUN_1405b7570(void)

undefined8 FUN_1405b7570(void)

{
  return 0xf0b48f76;
}



// FUNCTION 1405b7680 ResizeForCopy body=111 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 3,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 1405b76f0 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FRotator,FDefaultAllocator>::ResizeForCopy(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xc,0);
    iVar3 = (int)(uVar1 / 0xc);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xc,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1405b7780 Serialize body=112 status=ok
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
  AActor::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1405b77f0 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

longlong UPackage::StaticClass(void)

{
  if (DAT_1469e7718 == 0) {
    FUN_14171ccd0(L"/Script/CoreUObject",L"Interface",&DAT_1469e7718,
                  AK::MemoryMgr::StartProfileThreadUsage,0x28,0x10004001,0,L"Engine",FUN_141729070,
                  InternalVTableHelperCtorCaller<UInterface>,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1469e7718;
}



// FUNCTION 1405b7800 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void UInterpTrackFloatBase::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 1405b7810 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UInterpTrackInst::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1405b7820 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UInterpTrackVectorBase::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1405b7850 StaticClass body=5 status=ok
// SIG undefined StaticClass(void)

void UPawnAction_Sequence::StaticClass(void)

{
  StaticClass();
  return;
}



// FUNCTION 1405b7860 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void USoundSourceBus::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1405b7870 thunk_FUN_1405bbd60 body=5 status=ok
// SIG undefined thunk_FUN_1405bbd60(void)

void thunk_FUN_1405bbd60(void)

{
  FUN_1405bbd60();
  return;
}



// FUNCTION 1405b7880 FUN_1405b7880 body=34 status=ok
// SIG undefined FUN_1405b7880(void)

void FUN_1405b7880(void)

{
  undefined8 uVar1;
  
  uVar1 = AGTutorialStepBotDestroy::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_StartAmbientSound_143fd5498,3);
  return;
}



// FUNCTION 1405b78b0 StaticRegisterNativesUKismetArrayLibrary body=34 status=ok
// SIG undefined StaticRegisterNativesUKismetArrayLibrary(void)

void UKismetArrayLibrary::StaticRegisterNativesUKismetArrayLibrary(void)

{
  undefined8 uVar1;
  
  uVar1 = AUGDoor::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetMaxAttenuationRadius_143fd5750,0x13);
  return;
}



// FUNCTION 1405b78e0 FUN_1405b78e0 body=34 status=ok
// SIG undefined FUN_1405b78e0(void)

void FUN_1405b78e0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405b58b0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetPooledComponent_143fd60f0,1);
  return;
}



// FUNCTION 1405b7910 FUN_1405b7910 body=34 status=ok
// SIG undefined FUN_1405b7910(void)

void FUN_1405b7910(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405b5230();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ActivateEffect_143fd68d8,2);
  return;
}



// FUNCTION 1405b7940 FUN_1405b7940 body=113 status=ok
// SIG undefined FUN_1405b7940(void)

void FUN_1405b7940(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146853e78 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    lVar1 = DAT_146853f08;
    uVar2 = FUN_1405b7500();
    DAT_146853e78 =
         GetStaticStruct(FUN_1405b83f0,lVar1,L"MovieSceneWwiseSectionTemplate",0x58,uVar2);
  }
  return;
}



// FUNCTION 1405b79c0 FUN_1405b79c0 body=113 status=ok
// SIG undefined FUN_1405b79c0(void)

void FUN_1405b79c0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146853e88 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    lVar1 = DAT_146853f08;
    uVar2 = FUN_1405b74f0();
    DAT_146853e88 =
         GetStaticStruct(FUN_1405b8420,lVar1,L"MovieSceneWwiseSectionTemplateData",0x38,uVar2);
  }
  return;
}



// FUNCTION 1405b7a40 FUN_1405b7a40 body=113 status=ok
// SIG undefined FUN_1405b7a40(void)

void FUN_1405b7a40(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146853eb8 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    lVar1 = DAT_146853f08;
    uVar2 = FUN_1405b7510();
    DAT_146853eb8 = GetStaticStruct(FUN_1405b8450,lVar1,L"WwiseAmbSoundCheckpointRecord",1,uVar2);
  }
  return;
}



// FUNCTION 1405b7ac0 FUN_1405b7ac0 body=113 status=ok
// SIG undefined FUN_1405b7ac0(void)

void FUN_1405b7ac0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146853e40 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    lVar1 = DAT_146853f08;
    uVar2 = FUN_1405b7520();
    DAT_146853e40 = GetStaticStruct(FUN_1405b8480,lVar1,L"WwiseAudioEventTrackKey",0x20,uVar2);
  }
  return;
}



// FUNCTION 1405b7b40 FUN_1405b7b40 body=113 status=ok
// SIG undefined FUN_1405b7b40(void)

void FUN_1405b7b40(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468540d0 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    lVar1 = DAT_146853f08;
    uVar2 = FUN_1405b7530();
    DAT_1468540d0 = GetStaticStruct(FUN_1405b84b0,lVar1,L"WwiseEmitterAcousticData",0x1c,uVar2);
  }
  return;
}



// FUNCTION 1405b7bc0 FUN_1405b7bc0 body=113 status=ok
// SIG undefined FUN_1405b7bc0(void)

void FUN_1405b7bc0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468540b0 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    lVar1 = DAT_146853f08;
    uVar2 = FUN_1405b7540();
    DAT_1468540b0 = GetStaticStruct(FUN_1405b84e0,lVar1,L"WwiseEventConfiguration",0x18,uVar2);
  }
  return;
}



// FUNCTION 1405b7c40 FUN_1405b7c40 body=113 status=ok
// SIG undefined FUN_1405b7c40(void)

void FUN_1405b7c40(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468540c0 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    lVar1 = DAT_146853f08;
    uVar2 = FUN_1405b7550();
    DAT_1468540c0 = GetStaticStruct(FUN_1405b8510,lVar1,L"WwiseExternalSourceMediaInfo",0xc,uVar2);
  }
  return;
}



// FUNCTION 1405b7cc0 FUN_1405b7cc0 body=113 status=ok
// SIG undefined FUN_1405b7cc0(void)

void FUN_1405b7cc0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146853f50 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    lVar1 = DAT_146853f08;
    uVar2 = FUN_1405b7560();
    DAT_146853f50 = GetStaticStruct(FUN_1405b8540,lVar1,L"WwiseLocationOverride",0x20,uVar2);
  }
  return;
}



// FUNCTION 1405b7d40 FUN_1405b7d40 body=113 status=ok
// SIG undefined FUN_1405b7d40(void)

void FUN_1405b7d40(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146853f40 == 0) {
    if (DAT_146853f08 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146853f08,&PTR_s__Script_WwiseAudio_143fd54f8);
    }
    lVar1 = DAT_146853f08;
    uVar2 = FUN_1405b7570();
    DAT_146853f40 = GetStaticStruct(FUN_1405b8570,lVar1,L"WwiseMusicTiming",0x14,uVar2);
  }
  return;
}



// FUNCTION 1405b7dc0 FUN_1405b7dc0 body=47 status=ok
// SIG undefined FUN_1405b7dc0(void)

longlong FUN_1405b7dc0(void)

{
  if (DAT_146853e00 == 0) {
    FUN_141786440(&DAT_146853e00,&PTR_FUN_143fd1990);
  }
  return DAT_146853e00;
}



// FUNCTION 1405b7df0 FUN_1405b7df0 body=47 status=ok
// SIG undefined FUN_1405b7df0(void)

longlong FUN_1405b7df0(void)

{
  if (DAT_146853e10 == 0) {
    FUN_141786440(&DAT_146853e10,&PTR_FUN_143fd1b90);
  }
  return DAT_146853e10;
}



// FUNCTION 1405b7e20 FUN_1405b7e20 body=47 status=ok
// SIG undefined FUN_1405b7e20(void)

longlong FUN_1405b7e20(void)

{
  if (DAT_146853e20 == 0) {
    FUN_141786440(&DAT_146853e20,&PTR_GetPrivateStaticClass_143fd1d40);
  }
  return DAT_146853e20;
}



// FUNCTION 1405b7e50 FUN_1405b7e50 body=47 status=ok
// SIG undefined FUN_1405b7e50(void)

longlong FUN_1405b7e50(void)

{
  if (DAT_146853e30 == 0) {
    FUN_141786440(&DAT_146853e30,&PTR_GetPrivateStaticClass_143fd1f60);
  }
  return DAT_146853e30;
}



// FUNCTION 1405b7e80 FUN_1405b7e80 body=47 status=ok
// SIG undefined FUN_1405b7e80(void)

longlong FUN_1405b7e80(void)

{
  if (DAT_146853e50 == 0) {
    FUN_141786440(&DAT_146853e50,&PTR_FUN_143fd3240);
  }
  return DAT_146853e50;
}



// FUNCTION 1405b7eb0 FUN_1405b7eb0 body=47 status=ok
// SIG undefined FUN_1405b7eb0(void)

longlong FUN_1405b7eb0(void)

{
  if (DAT_146853e60 == 0) {
    FUN_141786440(&DAT_146853e60,&PTR_FUN_143fd33c0);
  }
  return DAT_146853e60;
}



// FUNCTION 1405b7ee0 FUN_1405b7ee0 body=47 status=ok
// SIG undefined FUN_1405b7ee0(void)

longlong FUN_1405b7ee0(void)

{
  if (DAT_146853ea8 == 0) {
    FUN_141786440(&DAT_146853ea8,&PTR_FUN_143fd2f80);
  }
  return DAT_146853ea8;
}



// FUNCTION 1405b7f10 FUN_1405b7f10 body=47 status=ok
// SIG undefined FUN_1405b7f10(void)

longlong FUN_1405b7f10(void)

{
  if (DAT_146853e98 == 0) {
    FUN_141786440(&DAT_146853e98,&PTR_FUN_143fd2e20);
  }
  return DAT_146853e98;
}



// FUNCTION 1405b7f40 FUN_1405b7f40 body=47 status=ok
// SIG undefined FUN_1405b7f40(void)

longlong FUN_1405b7f40(void)

{
  if (DAT_146853ef8 == 0) {
    FUN_141786440(&DAT_146853ef8,&PTR_FUN_143fd4520);
  }
  return DAT_146853ef8;
}



// FUNCTION 1405b7f70 FUN_1405b7f70 body=47 status=ok
// SIG undefined FUN_1405b7f70(void)

longlong FUN_1405b7f70(void)

{
  if (DAT_146854040 == 0) {
    FUN_141786440(&DAT_146854040,&PTR_FUN_143fd2710);
  }
  return DAT_146854040;
}



// FUNCTION 1405b7fa0 FUN_1405b7fa0 body=47 status=ok
// SIG undefined FUN_1405b7fa0(void)

longlong FUN_1405b7fa0(void)

{
  if (DAT_146854050 == 0) {
    FUN_141786440(&DAT_146854050,&PTR_FUN_143fd28b0);
  }
  return DAT_146854050;
}


