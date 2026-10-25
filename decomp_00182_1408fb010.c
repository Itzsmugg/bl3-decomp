// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1408fb010 Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_CRC(void)

{
  return 0xacde162d;
}



// FUNCTION 1408fb020 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneMediaSectionParams::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862c28 == 0) {
    if (DAT_146862c00 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146862c00,&PTR_s__Script_MediaCompositing_14414a0c8);
    }
    lVar1 = DAT_146862c00;
    uVar2 = FUN_1408fb000();
    DAT_146862c28 = GetStaticStruct(FUN_1408fb180,lVar1,L"MovieSceneMediaSectionParams",0x30,uVar2);
  }
  return;
}



// FUNCTION 1408fb0a0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneMediaSectionTemplate::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862c18 == 0) {
    if (DAT_146862c00 == 0) {
      UE4CodeGen_Private::ConstructUPackage
                (&DAT_146862c00,&PTR_s__Script_MediaCompositing_14414a0c8);
    }
    lVar1 = DAT_146862c00;
    uVar2 = Get_Z_Construct_UScriptStruct_FMovieSceneMediaSectionTemplate_CRC();
    DAT_146862c18 =
         GetStaticStruct(FUN_1408fb1b0,lVar1,L"MovieSceneMediaSectionTemplate",0x50,uVar2);
  }
  return;
}



// FUNCTION 1408fb120 FUN_1408fb120 body=47 status=ok
// SIG undefined FUN_1408fb120(void)

longlong FUN_1408fb120(void)

{
  if (DAT_146862c08 == 0) {
    FUN_141786440(&DAT_146862c08,&PTR_FUN_144149af0);
  }
  return DAT_146862c08;
}



// FUNCTION 1408fb150 FUN_1408fb150 body=47 status=ok
// SIG undefined FUN_1408fb150(void)

longlong FUN_1408fb150(void)

{
  if (DAT_146862c38 == 0) {
    FUN_141786440(&DAT_146862c38,&PTR_StaticClass_144149f20);
  }
  return DAT_146862c38;
}



// FUNCTION 1408fb180 FUN_1408fb180 body=47 status=ok
// SIG undefined FUN_1408fb180(void)

longlong FUN_1408fb180(void)

{
  if (DAT_146862c30 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862c30,&PTR_FUN_146287650);
  }
  return DAT_146862c30;
}



// FUNCTION 1408fb1b0 FUN_1408fb1b0 body=47 status=ok
// SIG undefined FUN_1408fb1b0(void)

longlong FUN_1408fb1b0(void)

{
  if (DAT_146862c20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862c20,&PTR_FUN_146287480);
  }
  return DAT_146862c20;
}



// FUNCTION 1408fb1e0 FUN_1408fb1e0 body=34 status=ok
// SIG undefined FUN_1408fb1e0(void)

void FUN_1408fb1e0(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = 0x14dd9a1c;
  uStack_14 = 0x41be7cff;
  uStack_10 = 0x1abab9b1;
  uStack_c = 0x71b5ecc6;
  FUN_140901860(0x14dd9a1c,&local_18,param_2);
  return;
}



// FUNCTION 1408fb210 FUN_1408fb210 body=34 status=ok
// SIG undefined FUN_1408fb210(void)

void FUN_1408fb210(undefined8 param_1,undefined8 param_2)

{
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = 0x8ac3587a;
  uStack_14 = 0x42d84ae7;
  uStack_10 = 0x600ae099;
  uStack_c = 0xff9ee13;
  FUN_140901860(0x8ac3587a,&local_18,param_2);
  return;
}



// FUNCTION 1408fb240 CreatePlayer body=162 status=ok
// SIG undefined CreatePlayer(void)

undefined8 * FWmfMediaModule::CreatePlayer(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 8) == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  lVar1 = operator_new(0x50);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1408fbb50(lVar1,param_3);
  }
  puVar3 = (undefined8 *)operator_new(0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *puVar3 = &PTR_FUN_1441591c0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    puVar3[2] = uVar2;
  }
  *param_2 = uVar2;
  param_2[1] = puVar3;
  SharedPointerInternals::EnableSharedFromThis(param_2,uVar2,uVar2);
  return param_2;
}



// FUNCTION 1408fb2f0 StartupModule body=182 status=ok
// SIG undefined StartupModule(void)

void FWmfMediaModule::StartupModule(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  HRESULT HVar4;
  HMODULE pHVar5;
  longlong *plVar6;
  undefined1 local_res10 [24];
  
  pHVar5 = LoadLibraryW(L"shlwapi.dll");
  if (pHVar5 != (HMODULE)0x0) {
    pHVar5 = LoadLibraryW(L"mf.dll");
    if (pHVar5 != (HMODULE)0x0) {
      pHVar5 = LoadLibraryW(L"mfplat.dll");
      if (pHVar5 != (HMODULE)0x0) {
        pHVar5 = LoadLibraryW(L"mfplay.dll");
        if (pHVar5 != (HMODULE)0x0) {
          HVar4 = ::_guard_xfg_dispatch_icall_nop(0x20070,0);
          if (-1 < HVar4) {
            puVar2 = (undefined8 *)FName::FName(local_res10,"Media",1);
            uVar1 = *puVar2;
            uVar3 = FUN_14168dc80();
            plVar6 = (longlong *)FUN_141690010(uVar3,uVar1);
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x48))(plVar6,param_1 + -8);
            }
            *(undefined1 *)(param_1 + 8) = 1;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1408fb3b0 ShutdownModule body=80 status=ok
// SIG undefined ShutdownModule(void)

void FWmfMediaModule::ShutdownModule(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_res8 [32];
  
  if (*(char *)(param_1 + 8) != '\0') {
    puVar1 = (undefined8 *)FName::FName(local_res8,"Media",1);
    plVar2 = (longlong *)FModuleManager::GetModulePtr_Internal(*puVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x50))(plVar2,param_1 + -8);
    }
    ::_guard_xfg_dispatch_icall_nop();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 1408fb400 FUN_1408fb400 body=54 status=ok
// SIG undefined FUN_1408fb400(void)

undefined8 * FUN_1408fb400(undefined8 *param_1,ulonglong param_2)

{
  param_1[1] = IModuleInterface::vftable;
  *param_1 = &PTR__purecall_143f9a338;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1408fb440 FUN_1408fb440 body=25 status=ok
// SIG undefined FUN_1408fb440(void)

void FUN_1408fb440(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408fb451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x90))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 1408fb470 FUN_1408fb470 body=210 status=ok
// SIG undefined FUN_1408fb470(void)

undefined8 *
FUN_1408fb470(longlong *param_1,undefined8 *param_2,longlong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res10 [8];
  
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  plVar7 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = (longlong)&PTR_GetPoolName_144159a58;
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    *(undefined4 *)(plVar7 + 3) = uVar5;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uVar6;
    plVar7[1] = param_3;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
    *plVar7 = (longlong)&PTR_GetPoolName_144159aa0;
  }
  *param_2 = 0;
  if (plVar7 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar9;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar9 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar9 = plVar7;
    *(undefined4 *)(puVar9 + 1) = 3;
  }
  return param_2;
}



// FUNCTION 1408fb550 GetDefault<UWmfMediaSettings> body=51 status=ok
// SIG undefined GetDefault<UWmfMediaSettings>(void)

longlong GetDefault<UWmfMediaSettings>(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UWmfMediaSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return lVar2;
}



// FUNCTION 1408fb590 HeapSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_> body=435 status=ok
// SIG undefined HeapSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>(void)

void AlgoImpl::
     HeapSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
               (undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  iVar2 = (param_2 + -2) / 2;
  if (-1 < iVar2) {
    iVar8 = iVar2 * 2 + 1;
    iVar6 = iVar8;
    iVar5 = iVar2;
joined_r0x0001408fb5d6:
    do {
      if (iVar8 < param_2) {
        iVar3 = iVar2 * 2 + 1;
        iVar8 = iVar2 * 2 + 2;
        iVar4 = iVar3;
        if (iVar8 < param_2) {
          uVar1 = param_1[iVar3];
          fVar9 = (float)IHeadMountedDisplayModule::GetModulePriority(param_1[iVar8]);
          fVar10 = (float)IHeadMountedDisplayModule::GetModulePriority(uVar1);
          iVar4 = iVar8;
          if (fVar10 < fVar9) {
            iVar4 = iVar3;
          }
        }
        uVar1 = param_1[iVar4];
        fVar9 = (float)IHeadMountedDisplayModule::GetModulePriority(param_1[iVar2]);
        fVar10 = (float)IHeadMountedDisplayModule::GetModulePriority(uVar1);
        if (fVar10 < fVar9) {
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar4];
          iVar8 = iVar4 * 2 + 1;
          param_1[iVar4] = uVar1;
          iVar2 = iVar4;
          goto joined_r0x0001408fb5d6;
        }
      }
      iVar8 = iVar6 + -2;
      iVar2 = iVar5 + -1;
      iVar6 = iVar8;
      iVar5 = iVar2;
    } while (-1 < iVar2);
  }
  param_2 = param_2 + -1;
  lVar7 = (longlong)param_2;
  if (0 < param_2) {
    do {
      iVar2 = 0;
      uVar1 = *param_1;
      *param_1 = param_1[lVar7];
      param_1[lVar7] = uVar1;
      if (1 < param_2) {
        do {
          iVar5 = iVar2 * 2 + 1;
          iVar8 = iVar2 * 2 + 2;
          iVar6 = iVar5;
          if (iVar8 < param_2) {
            uVar1 = param_1[iVar5];
            fVar9 = (float)IHeadMountedDisplayModule::GetModulePriority(param_1[iVar8]);
            fVar10 = (float)IHeadMountedDisplayModule::GetModulePriority(uVar1);
            iVar6 = iVar8;
            if (fVar10 < fVar9) {
              iVar6 = iVar5;
            }
          }
          uVar1 = param_1[iVar6];
          fVar9 = (float)IHeadMountedDisplayModule::GetModulePriority(param_1[iVar2]);
          fVar10 = (float)IHeadMountedDisplayModule::GetModulePriority(uVar1);
          if (fVar9 <= fVar10) break;
          uVar1 = param_1[iVar2];
          param_1[iVar2] = param_1[iVar6];
          param_1[iVar6] = uVar1;
          iVar2 = iVar6;
        } while (iVar6 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      lVar7 = lVar7 + -1;
    } while (0 < lVar7);
  }
  return;
}



// FUNCTION 1408fb750 IntroSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_> body=743 status=ok
// SIG undefined IntroSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_3a8 [32];
  int local_388;
  longlong *local_380;
  longlong local_368;
  longlong local_358;
  longlong lStack_350;
  undefined4 local_348;
  undefined1 local_340 [744];
  ulonglong local_58;
  
  if (1 < param_2) {
    local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
    lStack_350 = param_1 + (param_2 - 1) * 8;
    fVar9 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar9 = fVar9 + 1.8446744e+19;
    }
    local_358 = param_1;
    fVar9 = ::_guard_xfg_dispatch_icall_nop(fVar9);
    local_348 = (undefined4)(longlong)(fVar9 + fVar9);
    ::_guard_xfg_dispatch_icall_nop(local_340,0,0x2e8);
    plVar6 = &local_358;
    do {
      puVar4 = (undefined8 *)*plVar6;
      puVar5 = (undefined8 *)plVar6[1];
      local_368 = plVar6[2];
      local_388 = (int)local_368;
      lVar2 = ((longlong)puVar5 - (longlong)puVar4 >> 3) + 1;
      puVar3 = puVar4;
      local_380 = plVar6;
      if ((int)local_368 != 0) {
LAB_1408fb832:
        if (8 < lVar2) {
          if (lVar2 < 0) {
            lVar2 = lVar2 + 1;
          }
          puVar7 = puVar5 + 1;
          uVar1 = puVar3[lVar2 >> 1];
          puVar3[lVar2 >> 1] = *puVar3;
          *puVar3 = uVar1;
          puVar4 = puVar3;
LAB_1408fb861:
          puVar4 = puVar4 + 1;
          if (puVar4 <= puVar5) goto code_r0x0001408fb86a;
          goto LAB_1408fb886;
        }
        for (; puVar7 = puVar3, puVar4 = puVar3, puVar3 < puVar5; puVar5 = puVar5 + -1) {
          while (puVar4 = puVar4 + 1, puVar4 <= puVar5) {
            uVar1 = *puVar4;
            fVar9 = (float)IHeadMountedDisplayModule::GetModulePriority(*puVar7);
            fVar10 = (float)IHeadMountedDisplayModule::GetModulePriority(uVar1);
            if (fVar10 < fVar9) {
              puVar7 = puVar4;
            }
          }
          uVar1 = *puVar7;
          *puVar7 = *puVar5;
          *puVar5 = uVar1;
          plVar6 = local_380;
        }
        goto LAB_1408fb96b;
      }
LAB_1408fb95c:
      HeapSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
                (puVar4,lVar2,param_3,param_4);
LAB_1408fb96b:
      plVar6 = plVar6 + -3;
    } while (&local_358 <= plVar6);
  }
  return;
code_r0x0001408fb86a:
  uVar1 = *puVar4;
  fVar9 = (float)IHeadMountedDisplayModule::GetModulePriority(*puVar3);
  fVar10 = (float)IHeadMountedDisplayModule::GetModulePriority(uVar1);
  if (fVar9 <= fVar10) goto LAB_1408fb861;
LAB_1408fb886:
  do {
    puVar8 = puVar7;
    puVar7 = puVar8 + -1;
    if (puVar7 <= puVar3) break;
    uVar1 = *puVar3;
    fVar9 = (float)IHeadMountedDisplayModule::GetModulePriority(*puVar7);
    fVar10 = (float)IHeadMountedDisplayModule::GetModulePriority(uVar1);
  } while (fVar9 <= fVar10);
  if (puVar4 <= puVar7) {
    uVar1 = *puVar4;
    *puVar4 = *puVar7;
    *puVar7 = uVar1;
    goto LAB_1408fb861;
  }
  uVar1 = *puVar3;
  *puVar3 = *puVar7;
  local_388 = local_388 + -1;
  *puVar7 = uVar1;
  if ((longlong)((longlong)puVar7 + (-8 - (longlong)puVar3) & 0xfffffffffffffff8U) <
      (longlong)((longlong)puVar5 - (longlong)puVar4 & 0xfffffffffffffff8U)) {
    if (puVar4 < puVar5) {
      *plVar6 = (longlong)puVar4;
      plVar6[1] = (longlong)puVar5;
      *(int *)(plVar6 + 2) = local_388;
      plVar6 = plVar6 + 3;
      local_380 = plVar6;
    }
    if (puVar7 <= puVar3 + 1) goto LAB_1408fb96b;
    puVar5 = puVar8 + -2;
    puVar4 = puVar3;
  }
  else {
    if (puVar3 + 1 < puVar7) {
      *plVar6 = (longlong)puVar3;
      plVar6[1] = (longlong)(puVar8 + -2);
      *(int *)(plVar6 + 2) = local_388;
      plVar6 = plVar6 + 3;
      local_380 = plVar6;
    }
    if (puVar5 <= puVar4) goto LAB_1408fb96b;
  }
  lVar2 = ((longlong)puVar5 - (longlong)puVar4 >> 3) + 1;
  puVar3 = puVar4;
  if (local_388 == 0) goto LAB_1408fb95c;
  goto LAB_1408fb832;
}



// FUNCTION 1408fba40 NewIntrusiveReferenceController<FWmfMediaOverlaySample> body=99 status=ok
// SIG undefined NewIntrusiveReferenceController<FWmfMediaOverlaySample>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<FWmfMediaOverlaySample>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_1441599a8;
    puVar1[2] = &PTR_FUN_1441595e8;
    puVar1[3] = 0;
    FText::FText(puVar1 + 4);
    puVar1[7] = 0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1408fbab0 FFormat body=150 status=ok
// SIG undefined FFormat(void)

undefined8 * FWmfMediaTracks::FFormat::FFormat(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *param_2 = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  uVar1 = *(undefined8 *)((longlong)param_2 + 0x44);
  *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)((longlong)param_2 + 0x3c);
  *(undefined8 *)((longlong)param_1 + 0x44) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)((longlong)param_2 + 0x54);
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_2 + 0x5c);
  param_1[0xc] = param_2[0xc];
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  return param_1;
}



// FUNCTION 1408fbb50 FUN_1408fbb50 body=503 status=ok
// SIG undefined FUN_1408fbb50(void)

undefined8 * FUN_1408fbb50(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_18;
  longlong *local_10;
  
  plVar7 = (longlong *)0x0;
  *param_1 = &PTR_Close_144159280;
  param_1[1] = &PTR_CanBeUsedOnAnyThread_144159318;
  param_1[2] = &PTR_CanBeUsedOnAnyThread_144159330;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar4 = (longlong *)operator_new(0xf0);
  plVar6 = plVar7;
  if (plVar4 != (longlong *)0x0) {
    *(undefined1 *)(plVar4 + 2) = 0;
    *plVar4 = (longlong)&PTR_LAB_144159388;
    *(undefined4 *)((longlong)plVar4 + 0x14) = 0;
    plVar4[1] = (longlong)&PTR_CanControl_1441593b0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(plVar4 + 3));
    SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar4 + 3),4000);
    plVar4[8] = 0;
    plVar4[9] = 0;
    plVar5 = (longlong *)operator_new(0x10);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar6 = plVar5;
    }
    plVar4[0xb] = (longlong)plVar6;
    plVar4[10] = (longlong)plVar6;
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    *(undefined1 *)(plVar4 + 0xe) = 0;
    plVar4[0xf] = 0;
    plVar4[0x10] = 0;
    plVar4[0x11] = 0;
    *(undefined4 *)(plVar4 + 0x12) = 0;
    *(undefined1 *)(plVar4 + 0x13) = 0;
    plVar4[0x14] = 0;
    *(undefined1 *)(plVar4 + 0x16) = 0;
    plVar4[0x17] = 0;
    *(undefined1 *)(plVar4 + 0x18) = 0;
    *(undefined4 *)((longlong)plVar4 + 0xc4) = 0;
    plVar4[0x19] = 0;
    plVar4[0x1a] = 0;
    plVar4[0x1b] = 0;
    plVar4[0x1c] = 0;
    plVar6 = plVar4;
  }
  param_1[7] = plVar6;
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 8))(plVar6);
  }
  plVar6 = (longlong *)operator_new(0x1c0);
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_144159980;
    FUN_1408fbd50(plVar6 + 2);
    plVar7 = plVar6;
  }
  local_18 = plVar7 + 2;
  local_10 = plVar7;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar7 = local_10;
  param_1[8] = local_18;
  param_1[9] = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1408fbd50 FUN_1408fbd50 body=885 status=ok
// SIG undefined FUN_1408fbd50(void)

undefined8 * FUN_1408fbd50(undefined8 *param_1)

{
  undefined8 *puVar1;
  LPCRITICAL_SECTION p_Var2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_144159410;
  param_1[1] = &PTR_GetAudioTrackFormat_144159448;
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    p_Var2 = (LPCRITICAL_SECTION)operator_new(0x38);
    if (p_Var2 == (LPCRITICAL_SECTION)0x0) {
      p_Var2 = (LPCRITICAL_SECTION)0x0;
    }
    else {
      InitializeCriticalSection(p_Var2);
      SetCriticalSectionSpinCount(p_Var2,4000);
      p_Var2[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      p_Var2[1].LockCount = 0;
      p_Var2[1].RecursionCount = 0;
    }
    puVar5 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)operator_new(0x18);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar3 + 1) = 1;
      *puVar3 = &PTR_DestroyObject_144159ae8;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
      puVar3[2] = p_Var2;
      puVar5 = puVar3;
    }
    *puVar1 = p_Var2;
    puVar1[1] = puVar5;
    SharedPointerInternals::EnableSharedFromThis(puVar1,p_Var2,p_Var2);
  }
  puVar5 = (undefined8 *)0x0;
  param_1[2] = puVar1;
  param_1[4] = &PTR_Enqueue_144148060;
  param_1[6] = 0;
  param_1[5] = &PTR_Dequeue_144148080;
  puVar3 = (undefined8 *)operator_new(0x18);
  puVar1 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar1 = puVar3;
  }
  param_1[9] = puVar1;
  param_1[8] = puVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = &PTR_Enqueue_144148060;
  param_1[0xd] = &PTR_Dequeue_144148080;
  param_1[0xe] = 0;
  puVar3 = (undefined8 *)operator_new(0x18);
  puVar1 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar1 = puVar3;
  }
  param_1[0x11] = puVar1;
  param_1[0x10] = puVar1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x14),4000);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = &PTR_Enqueue_144148060;
  param_1[0x21] = &PTR_Dequeue_144148080;
  param_1[0x22] = 0;
  puVar3 = (undefined8 *)operator_new(0x18);
  puVar1 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar1 = puVar3;
  }
  param_1[0x25] = puVar1;
  param_1[0x24] = puVar1;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0xffffffffffffffff;
  param_1[0x2a] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    p_Var2 = (LPCRITICAL_SECTION)operator_new(0x38);
    if (p_Var2 == (LPCRITICAL_SECTION)0x0) {
      p_Var2 = (LPCRITICAL_SECTION)0x0;
    }
    else {
      InitializeCriticalSection(p_Var2);
      SetCriticalSectionSpinCount(p_Var2,4000);
      p_Var2[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      p_Var2[1].LockCount = 0;
      p_Var2[1].RecursionCount = 0;
    }
    puVar4 = (undefined8 *)operator_new(0x18);
    puVar3 = puVar5;
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar4 + 1) = 1;
      *puVar4 = &PTR_DestroyObject_144159af8;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 1;
      puVar4[2] = p_Var2;
      puVar3 = puVar4;
    }
    *puVar1 = p_Var2;
    puVar1[1] = puVar3;
    SharedPointerInternals::EnableSharedFromThis(puVar1,p_Var2,p_Var2);
  }
  param_1[0x2c] = puVar1;
  param_1[0x2e] = &PTR_Enqueue_144148060;
  param_1[0x30] = 0;
  param_1[0x2f] = &PTR_Dequeue_144148080;
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar5 = puVar1;
  }
  param_1[0x33] = puVar5;
  param_1[0x32] = puVar5;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  return param_1;
}



// FUNCTION 1408fc0d0 FUN_1408fc0d0 body=128 status=ok
// SIG undefined FUN_1408fc0d0(void)

void FUN_1408fc0d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x30);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 1408fc150 ~TArray<FWmfMediaTracks::FFormat,FDefaultAllocator> body=116 status=ok
// SIG undefined ~TArray<FWmfMediaTracks::FFormat,FDefaultAllocator>(void)

void TArray<FWmfMediaTracks::FFormat,FDefaultAllocator>::
     ~TArray<FWmfMediaTracks::FFormat,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if ((longlong *)plVar1[1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[1] + 0x10))();
      }
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      plVar1 = plVar1 + 0xe;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1408fc1d0 ~TArray<FWmfMediaTracks::FTrack,FDefaultAllocator> body=220 status=ok
// SIG undefined ~TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>(void)

void TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>::
     ~TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  plVar6 = (longlong *)*param_1;
  iVar7 = *(int *)(param_1 + 1);
  if (iVar7 != 0) {
    do {
      if (plVar6[9] != 0) {
        FMemory::Free();
      }
      if (plVar6[7] != 0) {
        FMemory::Free();
      }
      if ((longlong *)plVar6[6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar6[6] + 0x10))();
      }
      TArray<FWmfMediaTracks::FFormat,FDefaultAllocator>::
      ~TArray<FWmfMediaTracks::FFormat,FDefaultAllocator>(plVar6 + 4);
      plVar4 = (longlong *)plVar6[2];
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
      if ((longlong *)*plVar6 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar6 + 0x10))();
      }
      plVar6 = plVar6 + 0xd;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    plVar6 = (longlong *)*param_1;
  }
  if (plVar6 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar6);
  return;
}



// FUNCTION 1408fc2b0 ~FFormat body=64 status=ok
// SIG undefined ~FFormat(void)

void FWmfMediaTracks::FFormat::~FFormat(longlong *param_1)

{
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408fc2e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1408fc2f0 ~FWmfMediaOverlaySample body=156 status=ok
// SIG undefined ~FWmfMediaOverlaySample(void)

void FWmfMediaOverlaySample::~FWmfMediaOverlaySample(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_1441595e8;
  plVar4 = (longlong *)param_1[3];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = &PTR__purecall_143f595c8;
    return;
  }
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
    *param_1 = &PTR__purecall_143f595c8;
    return;
  }
  *param_1 = &PTR__purecall_143f595c8;
  return;
}



// FUNCTION 1408fc390 ~FWmfMediaTracks body=639 status=ok
// SIG undefined ~FWmfMediaTracks(void)

void FWmfMediaTracks::~FWmfMediaTracks(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  *param_1 = &PTR_FUN_144159410;
  param_1[1] = &PTR_GetAudioTrackFormat_144159448;
  Shutdown();
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(lVar4 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FMemory::operator_delete(lVar4,0x10);
  }
  lVar4 = param_1[0x2c];
  param_1[2] = 0;
  if (lVar4 != 0) {
    plVar5 = *(longlong **)(lVar4 + 8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar5 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    FMemory::operator_delete(lVar4,0x10);
  }
  param_1[0x2c] = 0;
  TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>::
  ~TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>(param_1 + 0x34);
  param_1[0x2e] = &PTR_Enqueue_144148060;
  param_1[0x2f] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x32);
  param_1[0x2f] = &PTR__purecall_143fcfdf8;
  param_1[0x2e] = &PTR__purecall_143fcfdf8;
  if ((longlong *)param_1[0x28] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x28] + 0x10))();
  }
  TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>::
  ~TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>(param_1 + 0x26);
  param_1[0x20] = &PTR_Enqueue_144148060;
  param_1[0x21] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x24);
  param_1[0x21] = &PTR__purecall_143fcfdf8;
  param_1[0x20] = &PTR__purecall_143fcfdf8;
  if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x1d] + 0x10))();
  }
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>::
  ~TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>(param_1 + 0x12);
  param_1[0xc] = &PTR_Enqueue_144148060;
  param_1[0xd] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x10);
  param_1[0xd] = &PTR__purecall_143fcfdf8;
  param_1[0xc] = &PTR__purecall_143fcfdf8;
  TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>::
  ~TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>(param_1 + 10);
  param_1[4] = &PTR_Enqueue_144148060;
  param_1[5] = &PTR_Dequeue_144148080;
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>(param_1 + 8)
  ;
  param_1[5] = &PTR__purecall_143fcfdf8;
  param_1[4] = &PTR__purecall_143fcfdf8;
  param_1[1] = &PTR__purecall_144146770;
  *param_1 = &PTR_CanBeUsedOnAnyThread_144146738;
  return;
}



// FUNCTION 1408fc610 operator= body=75 status=ok
// SIG undefined operator=(void)

longlong * TComPtr<FWmfMediaStreamSink>::operator=(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      plVar2 = (longlong *)*param_1;
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    *param_1 = *param_2;
  }
  return param_1;
}



// FUNCTION 1408fc660 operator== body=147 status=ok
// SIG undefined operator==(void)

undefined8 TRange<float>::operator==(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((cVar1 != '\x02') && (param_1[8] != '\x02')) {
    if ((((*(float *)(param_1 + 0xc) < *(float *)(param_1 + 4)) ||
         ((*(float *)(param_1 + 4) == *(float *)(param_1 + 0xc) &&
          ((cVar1 == '\0' || (param_1[8] == '\0')))))) && (*param_2 != '\x02')) &&
       (param_2[8] != '\x02')) {
      if (*(float *)(param_2 + 0xc) < *(float *)(param_2 + 4)) {
        return 1;
      }
      if (*(float *)(param_2 + 4) == *(float *)(param_2 + 0xc)) {
        if (*param_2 == '\0') {
          return 1;
        }
        if (param_2[8] == '\0') {
          return 1;
        }
      }
    }
  }
  if (((cVar1 == *param_2) &&
      (((cVar1 == '\x02' || (*(float *)(param_2 + 4) == *(float *)(param_1 + 4))) &&
       (param_1[8] == param_2[8])))) &&
     ((param_1[8] == '\x02' || (*(float *)(param_2 + 0xc) == *(float *)(param_1 + 0xc))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1408fc700 FUN_1408fc700 body=250 status=ok
// SIG undefined FUN_1408fc700(void)

void FUN_1408fc700(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  longlong *local_res10;
  undefined8 local_18;
  longlong local_10;
  
  plVar3 = (longlong *)param_1[6];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (!bVar6) {
      while( true ) {
        LOCK();
        bVar6 = iVar5 == (int)plVar3[1];
        if (bVar6) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
        }
        UNLOCK();
        if (bVar6) break;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar6 = iVar5 == 0;
        if (bVar6) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar6) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = param_1[5];
        if (lVar4 != 0) {
          local_18 = *param_1;
          local_10 = param_1[1];
          if (local_10 != 0) {
            LOCK();
            *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
            UNLOCK();
          }
          FUN_1409066b0(&local_res10,&local_18,param_1 + 2,*(undefined1 *)(param_1 + 4));
          FUN_140904f20(lVar4,local_res10,param_1 + 2);
          if (local_res10 != (longlong *)0x0) {
            (**(code **)(*local_res10 + 0x10))(local_res10);
          }
        }
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1408fc850 FUN_1408fc850 body=66 status=ok
// SIG undefined FUN_1408fc850(void)

undefined8 * FUN_1408fc850(undefined8 *param_1,ulonglong param_2)

{
  FUN_1408fc0d0(param_1 + 1);
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1408fc8a0 FUN_1408fc8a0 body=43 status=ok
// SIG undefined FUN_1408fc8a0(void)

undefined8 * FUN_1408fc8a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 1408fc8d0 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::
TReferenceControllerWithDeleter<FWmfMediaAudioSample,TMediaObjectPool<FWmfMediaAudioSample>::TDeleter>
::_scalar_deleting_destructor_(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR__purecall_143f3edb0;
  plVar3 = (longlong *)param_1[3];
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
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1408fc940 FUN_1408fc940 body=104 status=ok
// SIG undefined FUN_1408fc940(void)

undefined8 * FUN_1408fc940(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Bytes_144159540;
  param_1[1] = &PTR_StartProfileThreadUsage_144159580;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_StartProfileThreadUsage_144159528;
  *param_1 = &PTR__purecall_1441594e8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1408fc9b0 `scalar_deleting_destructor' body=82 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWmfMediaBinarySample::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_GetBoundProgramCounterForTimerManager_1441595c0;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_144159598;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1408fca10 `scalar_deleting_destructor' body=155 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWmfMediaByteStream::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_LAB_144159790;
  param_1[1] = &PTR_LAB_1441597c0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  plVar4 = (longlong *)param_1[4];
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
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1408fcab0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FWmfMediaOverlaySample::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FWmfMediaOverlaySample();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1408fcaf0 `scalar_deleting_destructor' body=321 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FWmfMediaPlayer::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong local_18 [2];
  
  *param_1 = &PTR_Close_144159280;
  param_1[1] = &PTR_CanBeUsedOnAnyThread_144159318;
  param_1[2] = &PTR_CanBeUsedOnAnyThread_144159330;
  iVar5 = (**(code **)(*(longlong *)(param_1[7] + 8) + 0x18))();
  if (iVar5 != 0) {
    FWmfMediaSession::Shutdown(param_1[7]);
    plVar3 = param_1 + 5;
    param_1[3] = 0;
    if (plVar3 != local_18) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      *plVar3 = 0;
      param_1[6] = 0;
    }
    FWmfMediaTracks::Shutdown(param_1[8]);
    (*(code *)**(undefined8 **)param_1[4])((undefined8 *)param_1[4],9);
    (*(code *)**(undefined8 **)param_1[4])((undefined8 *)param_1[4],1);
  }
  plVar3 = (longlong *)param_1[9];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if (param_1[5] != 0) {
    FMemory::Free();
  }
  param_1[2] = &PTR_CanBeUsedOnAnyThread_1441467d8;
  param_1[1] = &PTR_CanBeUsedOnAnyThread_144146688;
  *param_1 = &PTR__purecall_1441466a0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1408fcc40 FUN_1408fcc40 body=43 status=ok
// SIG undefined FUN_1408fcc40(void)

undefined8 * FUN_1408fcc40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_144159850;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1408fcc70 `scalar_deleting_destructor' body=75 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FWmfMediaSampler::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_LAB_144159680;
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 5);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1408fccc0 FUN_1408fccc0 body=305 status=ok
// SIG undefined FUN_1408fccc0(void)

undefined8 * FUN_1408fccc0(undefined8 *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_144159388;
  param_1[1] = &PTR_CanControl_1441593b0;
  FWmfMediaSession::Shutdown();
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x16) != '\0') {
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    *(undefined1 *)(param_1 + 0x13) = 0;
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  if ((longlong *)param_1[0x10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x10] + 0x10))();
  }
  if ((longlong *)param_1[0xf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xf] + 0x10))();
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x10))();
  }
  lVar1 = param_1[0xb];
  while (lVar1 != 0) {
    puVar2 = (undefined8 *)param_1[0xb];
    param_1[0xb] = *puVar2;
    FMemory::operator_delete(puVar2,0x10);
    lVar1 = param_1[0xb];
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x10))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  param_1[1] = &PTR__purecall_144136680;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1408fce00 `scalar_deleting_destructor' body=104 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FWmfMediaTextureSample::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_Bytes_144159710;
  param_1[1] = &PTR_StartProfileThreadUsage_144159778;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR_StartProfileThreadUsage_144159528;
  *param_1 = &PTR__purecall_144146aa0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1408fce70 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWmfMediaTracks::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FWmfMediaTracks();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b0);
  }
  return param_1;
}



// FUNCTION 1408fceb0 FUN_1408fceb0 body=43 status=ok
// SIG undefined FUN_1408fceb0(void)

undefined8 * FUN_1408fceb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_1441594e8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408fcee0 FUN_1408fcee0 body=43 status=ok
// SIG undefined FUN_1408fcee0(void)

undefined8 * FUN_1408fcee0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144159598;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408fcf10 FUN_1408fcf10 body=43 status=ok
// SIG undefined FUN_1408fcf10(void)

undefined8 * FUN_1408fcf10(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_StartProfileThreadUsage_144159528;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408fcf40 AddDefaulted body=163 status=ok
// SIG undefined AddDefaulted(void)

int TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>::AddDefaulted(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x68 + *param_1);
  if (param_2 != 0) {
    lVar2 = (longlong)puVar3 + 0x2c;
    do {
      *puVar3 = 0;
      FText::FText(lVar2 + -0x24);
      *(undefined8 *)(lVar2 + -0xc) = 0;
      puVar3 = puVar3 + 0xd;
      *(undefined8 *)(lVar2 + -4) = 0;
      *(undefined8 *)(lVar2 + 4) = 0;
      *(undefined8 *)(lVar2 + 0xc) = 0;
      *(undefined8 *)(lVar2 + 0x14) = 0;
      *(undefined8 *)(lVar2 + 0x1c) = 0;
      *(undefined8 *)(lVar2 + 0x24) = 0;
      lVar2 = lVar2 + 0x68;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 1408fcff0 FUN_1408fcff0 body=13 status=ok
// SIG undefined FUN_1408fcff0(void)

int FUN_1408fcff0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



// FUNCTION 1408fd010 FUN_1408fd010 body=13 status=ok
// SIG undefined FUN_1408fd010(void)

int FUN_1408fd010(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x1c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



// FUNCTION 1408fd020 FUN_1408fd020 body=13 status=ok
// SIG undefined FUN_1408fd020(void)

int FUN_1408fd020(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x20);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



// FUNCTION 1408fd030 FUN_1408fd030 body=16 status=ok
// SIG undefined FUN_1408fd030(void)

int FUN_1408fd030(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x90);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



// FUNCTION 1408fd040 FUN_1408fd040 body=9101 status=ok
// SIG undefined FUN_1408fd040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1408fd040(longlong param_1,undefined4 param_2,char param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  short *psVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  undefined8 *puVar22;
  undefined2 *puVar23;
  longlong lVar24;
  void *pvVar25;
  void *pvVar26;
  ulonglong uVar27;
  longlong lVar28;
  undefined2 *puVar29;
  void *pvVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_5a8 [32];
  int local_588;
  char local_584;
  undefined8 *local_580;
  longlong *local_578;
  undefined1 local_570;
  undefined1 local_56f;
  int local_56c;
  int local_568;
  int local_564;
  longlong *local_560;
  undefined4 local_558;
  undefined4 local_554;
  uint local_550;
  undefined4 local_54c;
  longlong *local_548;
  undefined1 local_540 [4];
  float local_53c;
  undefined1 local_538;
  float local_534;
  undefined8 local_530;
  short *local_528;
  void *local_520;
  longlong *plStack_518;
  undefined2 *local_510;
  int local_508;
  uint local_500;
  uint local_4fc [3];
  undefined4 local_4f0;
  int local_4ec;
  int local_4e8 [2];
  ulonglong local_4e0 [3];
  int *local_4c8;
  ulonglong *puStack_4c0;
  longlong local_4b8;
  longlong local_4b0;
  undefined8 local_4a8;
  longlong *local_498 [2];
  longlong *local_488;
  longlong *local_480;
  void *local_478;
  int local_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  int local_460;
  undefined4 local_45c;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined1 local_438;
  undefined4 local_434;
  undefined1 local_430;
  undefined4 local_42c;
  undefined8 local_428;
  undefined8 local_420;
  longlong *local_418;
  longlong *local_410;
  void *local_408;
  int local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined1 local_3c8;
  undefined4 local_3c4;
  undefined1 local_3c0;
  undefined4 local_3bc;
  undefined8 local_3b8;
  undefined8 local_3b0;
  longlong *local_3a8;
  longlong *local_3a0;
  void *local_398;
  int local_390;
  undefined4 local_38c;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined1 local_358;
  undefined4 local_354;
  undefined1 local_350;
  undefined4 local_34c;
  undefined8 local_348;
  undefined8 local_340;
  longlong *local_338;
  ulonglong local_330;
  void *local_328;
  int local_320;
  void *local_318;
  int local_310;
  void *local_308;
  int local_300;
  void *local_2f8;
  int local_2f0;
  void *local_2e8;
  int local_2e0;
  void *local_2d8;
  int local_2d0;
  void *local_2c8;
  int local_2c0;
  void *local_2b8;
  int local_2b0;
  void *local_2a8;
  int local_2a0;
  void *local_298;
  int local_290;
  void *local_288;
  int local_280;
  void *local_278;
  int local_270;
  void *local_268;
  int local_260;
  void *local_258;
  int local_250;
  void *local_248;
  int local_240;
  void *local_238;
  int local_230;
  ulonglong local_228;
  ulonglong local_220;
  void *local_218 [2];
  longlong *local_208;
  longlong *local_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  ulonglong local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  float local_1bc;
  undefined1 local_1b8;
  float local_1b4;
  undefined1 local_1b0;
  float local_1ac;
  ulonglong local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong local_198 [2];
  undefined1 local_188 [8];
  longlong *local_180;
  undefined1 local_170 [8];
  longlong *local_168;
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [8];
  longlong *local_138;
  undefined1 local_128 [24];
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  longlong local_d8;
  int local_d0 [4];
  undefined1 local_c0 [24];
  undefined1 local_a8;
  ulonglong local_a0 [13];
  
  local_a0[0] = DAT_1468387a8 ^ (ulonglong)auStack_5a8;
  pvVar30 = (void *)0x0;
  iVar13 = 0;
  local_4fc[1] = 0;
  local_584 = param_3;
  local_54c = param_2;
  local_4b8 = param_1;
  FString::PrintfImpl(&local_328,L"Stream %i\n",param_2);
  pvVar26 = local_328;
  iVar12 = iVar13;
  if (local_320 != 0) {
    iVar12 = local_320 + -1;
  }
  if (iVar12 != 0) {
    iVar14 = (int)param_4[1];
    iVar11 = (uint)(iVar14 == 0) + iVar12 + iVar14;
    *(int *)(param_4 + 1) = iVar11;
    if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
    }
    pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
    *(undefined2 *)((longlong)pvVar25 + (longlong)iVar12 * 2) = 0;
    param_1 = local_4b8;
    param_2 = local_54c;
  }
  if (local_328 != (void *)0x0) {
    FMemory::Free(local_328);
  }
  local_548 = (longlong *)0x0;
  local_4e8[0] = 0;
  iVar12 = (**(code **)(**(longlong **)(param_1 + 0x140) + 0x110))
                     (*(longlong **)(param_1 + 0x140),param_2,local_4e8,&local_548);
  if (iVar12 < 0) {
    iVar12 = (int)param_4[1];
    iVar13 = (0x1c - (uint)(iVar12 != 0)) + iVar12;
    *(int *)(param_4 + 1) = iVar13;
    if (*(int *)((longlong)param_4 + 0xc) < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar12);
    }
    lVar17 = *param_4;
    lVar24 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
    uVar18 = 0;
    builtin_wcsncpy((wchar_t *)(lVar17 + lVar24 * 2),L"\tmissing",8);
    builtin_wcsncpy((wchar_t *)(lVar17 + 0x10 + lVar24 * 2),L" stream ",8);
    builtin_wcsncpy((wchar_t *)(lVar17 + 0x20 + lVar24 * 2),L"descript",8);
    *(undefined4 *)(lVar17 + 0x30 + lVar24 * 2) = 0x72006f;
    *(undefined2 *)(lVar17 + 0x34 + lVar24 * 2) = 10;
    *(undefined2 *)(lVar17 + 0x36 + lVar24 * 2) = 0;
    goto LAB_1408ff379;
  }
  if (local_4e8[0] == 1) {
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x120))(*(longlong **)(param_1 + 0x140),param_2)
    ;
  }
  local_560 = (longlong *)0x0;
  iVar12 = (**(code **)(*local_548 + 0x110))(local_548,&local_560);
  if (iVar12 < 0) {
    iVar12 = (int)param_4[1];
    iVar13 = (0x17 - (uint)(iVar12 != 0)) + iVar12;
    *(int *)(param_4 + 1) = iVar13;
    if (*(int *)((longlong)param_4 + 0xc) < iVar13) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar12);
    }
    lVar17 = *param_4;
    lVar24 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
    builtin_wcsncpy((wchar_t *)(lVar17 + lVar24 * 2),L"\tno hand",8);
    builtin_wcsncpy((wchar_t *)(lVar17 + 0x10 + lVar24 * 2),L"ler avai",8);
    *(undefined8 *)(lVar17 + 0x20 + lVar24 * 2) = 0x6c00620061006c;
    *(undefined4 *)(lVar17 + 0x28 + lVar24 * 2) = 0xa0065;
    *(undefined2 *)(lVar17 + 0x2c + lVar24 * 2) = 0;
LAB_1408ff367:
    uVar18 = 0;
  }
  else {
    iVar12 = (**(code **)(*local_560 + 0x40))(local_560,&local_110);
    if (iVar12 < 0) {
      iVar12 = (int)param_4[1];
      iVar13 = (0x20 - (uint)(iVar12 != 0)) + iVar12;
      *(int *)(param_4 + 1) = iVar13;
      if (*(int *)((longlong)param_4 + 0xc) < iVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar12);
      }
      lVar17 = *param_4;
      lVar24 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
      puVar16 = (undefined8 *)(lVar17 + lVar24 * 2);
      *puVar16 = 0x69006100660009;
      puVar16[1] = 0x2000640065006c;
      puVar16 = (undefined8 *)(lVar17 + 0x10 + lVar24 * 2);
      *puVar16 = 0x640020006f0074;
      puVar16[1] = 0x72006500740065;
      puVar3 = (undefined4 *)(lVar17 + 0x20 + lVar24 * 2);
      *puVar3 = 0x69006d;
      puVar3[1] = 0x65006e;
      puVar3[2] = 0x4d0020;
      puVar3[3] = 0x6a0061;
      *(undefined8 *)(lVar17 + 0x30 + lVar24 * 2) = 0x7900540072006f;
      *(undefined4 *)(lVar17 + 0x38 + lVar24 * 2) = 0x650070;
      *(undefined2 *)(lVar17 + 0x3c + lVar24 * 2) = 10;
      *(undefined2 *)(lVar17 + 0x3e + lVar24 * 2) = 0;
      goto LAB_1408ff367;
    }
    puVar16 = (undefined8 *)WmfMedia::MajorTypeToString(local_198,&local_110);
    if (*(int *)(puVar16 + 1) == 0) {
      puVar29 = &DAT_143f3eda8;
    }
    else {
      puVar29 = (undefined2 *)*puVar16;
    }
    FString::PrintfImpl(&local_318,L"\tType: %s\n",puVar29);
    pvVar26 = local_318;
    iVar12 = iVar13;
    if (local_310 != 0) {
      iVar12 = local_310 + -1;
    }
    if (iVar12 != 0) {
      iVar14 = (int)param_4[1];
      iVar11 = (uint)(iVar14 == 0) + iVar14 + iVar12;
      *(int *)(param_4 + 1) = iVar11;
      if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
      }
      pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
      *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar25) = 0;
    }
    if (local_318 != (void *)0x0) {
      FMemory::Free(local_318);
    }
    if (local_198[0] != 0) {
      FMemory::Free();
    }
    if ((((local_110 != 0x10000073647561) || (local_108 != 0x719b3800aa000080)) &&
        ((local_110 != 0x40cb3dcde69669a0 || (local_108 != 0x16067c3808372e9e)))) &&
       ((local_110 != 0x10000073646976 || (local_108 != 0x719b3800aa000080)))) {
      iVar12 = (int)param_4[1];
      iVar13 = (0x1a - (uint)(iVar12 != 0)) + iVar12;
      *(int *)(param_4 + 1) = iVar13;
      if (*(int *)((longlong)param_4 + 0xc) < iVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar12);
      }
      lVar17 = *param_4;
      lVar24 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
      builtin_wcsncpy((wchar_t *)(lVar17 + lVar24 * 2),L"\tUnsuppo",8);
      builtin_wcsncpy((wchar_t *)(lVar17 + 0x10 + lVar24 * 2),L"rted str",8);
      builtin_wcsncpy((wchar_t *)(lVar17 + 0x20 + lVar24 * 2),L"eam type",8);
      *(undefined2 *)(lVar17 + 0x30 + lVar24 * 2) = 10;
      *(undefined2 *)(lVar17 + 0x32 + lVar24 * 2) = 0;
      goto LAB_1408ff367;
    }
    iVar12 = (**(code **)(*local_548 + 0x38))(local_548,&DAT_144159240,&local_4ec);
    if (iVar12 < 0) {
      local_4ec = iVar13;
    }
    local_56f = local_4ec != 0;
    if (local_4ec != 0) {
      FString::PrintfImpl(&local_308,L"\tProtected content\n");
      pvVar26 = local_308;
      iVar12 = iVar13;
      if (local_300 != 0) {
        iVar12 = local_300 + -1;
      }
      if (iVar12 != 0) {
        iVar14 = (int)param_4[1];
        iVar11 = (uint)(iVar14 == 0) + iVar14 + iVar12;
        *(int *)(param_4 + 1) = iVar11;
        if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
        }
        pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar25) = 0;
      }
      if (local_308 != (void *)0x0) {
        FMemory::Free(local_308);
      }
    }
    local_4fc[0] = 0;
    iVar12 = (**(code **)(*local_560 + 0x20))(local_560,local_4fc);
    if (iVar12 < 0) {
      iVar12 = (int)param_4[1];
      iVar13 = (0x1e - (uint)(iVar12 != 0)) + iVar12;
      *(int *)(param_4 + 1) = iVar13;
      if (*(int *)((longlong)param_4 + 0xc) < iVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar12);
      }
      lVar17 = *param_4;
      lVar24 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
      puVar16 = (undefined8 *)(lVar17 + lVar24 * 2);
      *puVar16 = 0x69006100660009;
      puVar16[1] = 0x2000640065006c;
      puVar16 = (undefined8 *)(lVar17 + 0x10 + lVar24 * 2);
      *puVar16 = 0x670020006f0074;
      puVar16[1] = 0x74002000740065;
      puVar3 = (undefined4 *)(lVar17 + 0x20 + lVar24 * 2);
      *puVar3 = 0x610072;
      puVar3[1] = 0x6b0063;
      puVar3[2] = 0x660020;
      puVar3[3] = 0x72006f;
      *(undefined8 *)(lVar17 + 0x30 + lVar24 * 2) = 0x7300740061006d;
      *(undefined2 *)(lVar17 + 0x38 + lVar24 * 2) = 10;
      *(undefined2 *)(lVar17 + 0x3a + lVar24 * 2) = 0;
      goto LAB_1408ff367;
    }
    local_580 = (undefined8 *)0x0;
    local_564 = -1;
    local_4c8 = (int *)0x0;
    if ((local_110 == 0x10000073647561) && (local_108 == 0x719b3800aa000080)) {
      local_4c8 = (int *)(local_4b8 + 0x148);
      plVar20 = (longlong *)(local_4b8 + 0x50);
LAB_1408fd65c:
      local_564 = TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>::AddDefaulted(plVar20,1);
      local_580 = (undefined8 *)((longlong)local_564 * 0x68 + *plVar20);
    }
    else {
      if ((local_110 == 0x40cb3dcde69669a0) && (local_108 == 0x16067c3808372e9e)) {
        local_4c8 = (int *)(local_4b8 + 0x14c);
        plVar20 = (longlong *)(local_4b8 + 0x90);
        goto LAB_1408fd65c;
      }
      if ((local_110 == 0x11d5e45b72178c25) && (local_108 == -0x540b0c2f4fffd544)) {
        local_4c8 = (int *)(local_4b8 + 0x150);
        plVar20 = (longlong *)(local_4b8 + 0x130);
        goto LAB_1408fd65c;
      }
      if ((local_110 == 0x10000073646976) && (local_108 == 0x719b3800aa000080)) {
        local_4c8 = (int *)(local_4b8 + 0x154);
        plVar20 = (longlong *)(local_4b8 + 0x1a0);
        goto LAB_1408fd65c;
      }
    }
    puVar16 = local_580;
    local_498[0] = (longlong *)0x0;
    (**(code **)(*local_560 + 0x38))(local_560,local_498);
    *(undefined4 *)((longlong)puVar16 + 0x5c) = 0xffffffff;
    lVar17 = GetDefault<UWmfMediaSettings>();
    local_500 = 0;
    local_570 = *(undefined1 *)(lVar17 + 0x28);
    pvVar26 = pvVar30;
    if (local_4fc[0] != 0) {
LAB_1408fd700:
      FString::PrintfImpl(&local_2f8,L"\tFormat %i\n",pvVar26);
      pvVar25 = local_2f8;
      iVar12 = iVar13;
      if (local_2f0 != 0) {
        iVar12 = local_2f0 + -1;
      }
      if (iVar12 != 0) {
        iVar14 = (int)param_4[1];
        iVar11 = (uint)(iVar14 == 0) + iVar14 + iVar12;
        *(int *)(param_4 + 1) = iVar11;
        if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
        }
        pvVar26 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar26,pvVar25,(longlong)iVar12 * 2);
        *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar26) = 0;
        pvVar26 = (void *)(ulonglong)local_500;
      }
      if (local_2f8 != (void *)0x0) {
        FMemory::Free(local_2f8);
      }
      local_578 = (longlong *)0x0;
      iVar12 = (**(code **)(*local_560 + 0x28))(local_560,pvVar26,&local_578);
      if (-1 < iVar12) {
        if ((local_110 == 0x40cb3dcde69669a0) && (local_108 == 0x16067c3808372e9e)) {
          local_100 = 0;
          local_f8 = 0;
        }
        else {
          iVar12 = (**(code **)(*local_578 + 0x50))(local_578,&DAT_145dc7e30,&local_100);
          if (iVar12 < 0) {
            iVar12 = (int)param_4[1];
            iVar14 = (0x1a - (uint)(iVar12 != 0)) + iVar12;
            *(int *)(param_4 + 1) = iVar14;
            if (*(int *)((longlong)param_4 + 0xc) < iVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar12);
            }
            lVar17 = *param_4;
            lVar24 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
            puVar16 = (undefined8 *)(lVar17 + lVar24 * 2);
            *puVar16 = 0x61006600090009;
            puVar16[1] = 0x640065006c0069;
            puVar16 = (undefined8 *)(lVar17 + 0x10 + lVar24 * 2);
            *puVar16 = 0x20006f00740020;
            puVar16[1] = 0x20007400650067;
            puVar3 = (undefined4 *)(lVar17 + 0x20 + lVar24 * 2);
            *puVar3 = 0x750073;
            puVar3[1] = 0x2d0062;
            puVar3[2] = 0x790074;
            puVar3[3] = 0x650070;
            *(undefined2 *)(lVar17 + 0x30 + lVar24 * 2) = 10;
            *(undefined2 *)(lVar17 + 0x32 + lVar24 * 2) = 0;
            goto LAB_1408fde69;
          }
        }
        WmfMedia::SubTypeToString(&local_510,&local_100);
        puVar29 = &DAT_143f3eda8;
        if (local_508 != 0) {
          puVar29 = local_510;
        }
        FString::PrintfImpl(&local_2e8,L"\t\tCodec: %s\n",puVar29);
        pvVar26 = local_2e8;
        iVar12 = iVar13;
        if (local_2e0 != 0) {
          iVar12 = local_2e0 + -1;
        }
        if (iVar12 != 0) {
          iVar14 = (int)param_4[1];
          iVar11 = (uint)(iVar14 == 0) + iVar12 + iVar14;
          *(int *)(param_4 + 1) = iVar11;
          if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
          }
          pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
          *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar25) = 0;
        }
        if (local_2e8 != (void *)0x0) {
          FMemory::Free(local_2e8);
        }
        WmfMedia::CreateOutputType(&local_338,local_578,local_570,local_584);
        plVar1 = local_338;
        plVar20 = local_578;
        if (local_338 != (longlong *)0x0) {
          local_588 = -1;
          if ((local_110 == 0x10000073647561) && (local_108 == 0x719b3800aa000080)) {
            iVar12 = (**(code **)(*local_578 + 0x38))(local_578,&DAT_145dc7e70,&local_554);
            if (iVar12 < 0) {
              local_554 = 0x10;
            }
            iVar12 = (**(code **)(*local_578 + 0x38))(local_578,&DAT_145dc7e50,&local_558);
            if (iVar12 < 0) {
              local_558 = 0;
            }
            iVar12 = (**(code **)(*local_578 + 0x38))(local_578,&DAT_145dc7e60,&local_568);
            plVar20 = local_578;
            if (iVar12 < 0) {
              local_568 = iVar13;
            }
            local_488 = local_578;
            if (local_578 != (longlong *)0x0) {
              (**(code **)(*local_578 + 8))(local_578);
            }
            local_480 = plVar1;
            (**(code **)(*plVar1 + 8))(plVar1);
            puVar29 = local_510;
            lVar17 = (longlong)local_508;
            local_478 = (void *)0x0;
            local_470 = local_508;
            if (local_508 == 0) {
              local_46c = 0;
              pvVar26 = pvVar30;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_478,local_508,0);
              pvVar26 = local_478;
              _guard_xfg_dispatch_icall_nop(local_478,puVar29,lVar17 * 2);
              plVar20 = local_488;
            }
            iVar12 = local_470;
            puVar16 = local_580;
            local_468 = local_554;
            local_588 = *(int *)(local_580 + 5);
            uStack_464 = local_558;
            local_460 = local_568;
            local_4e0[0] = 0;
            local_420 = 0;
            local_520 = (void *)0x0;
            local_45c = 0;
            local_450 = 0;
            uStack_448 = 0;
            uStack_440 = 0;
            local_434 = 0;
            local_42c = 0;
            local_438 = 2;
            local_430 = 2;
            *(int *)(local_580 + 5) = local_588 + 1;
            if (*(int *)((longlong)local_580 + 0x2c) < local_588 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
              ResizeGrow(local_580 + 4,local_588);
            }
            iVar14 = local_568;
            puVar16 = (undefined8 *)((longlong)local_588 * 0x70 + puVar16[4]);
            *puVar16 = plVar20;
            puVar16[1] = local_480;
            puVar16[2] = pvVar26;
            *(undefined4 *)((longlong)puVar16 + 0x1c) = local_46c;
            *(int *)(puVar16 + 3) = iVar12;
            puVar16[4] = CONCAT44(uStack_464,local_468);
            *(int *)(puVar16 + 5) = local_568;
            *(int *)((longlong)puVar16 + 0x2c) = (int)local_520;
            puVar16[6] = local_458;
            *(undefined4 *)(puVar16 + 7) = (undefined4)local_450;
            *(undefined4 *)((longlong)puVar16 + 0x4c) = uStack_440._4_4_;
            *(undefined4 *)((longlong)puVar16 + 0x3c) = local_450._4_4_;
            *(undefined4 *)(puVar16 + 8) = (undefined4)uStack_448;
            *(undefined4 *)((longlong)puVar16 + 0x44) = uStack_448._4_4_;
            *(undefined4 *)(puVar16 + 9) = (undefined4)uStack_440;
            *(undefined1 *)(puVar16 + 10) = 2;
            *(undefined4 *)((longlong)puVar16 + 0x54) = 0;
            *(undefined1 *)(puVar16 + 0xb) = 2;
            *(undefined4 *)((longlong)puVar16 + 0x5c) = 0;
            puVar16[0xc] = local_428;
            *(int *)(puVar16 + 0xd) = (int)local_4e0[0];
            FString::PrintfImpl(&local_2d8,L"\t\tChannels: %i\n",local_558);
            pvVar26 = local_2d8;
            iVar12 = iVar13;
            if (local_2d0 != 0) {
              iVar12 = local_2d0 + -1;
            }
            if (iVar12 != 0) {
              iVar14 = (int)param_4[1];
              iVar11 = (uint)(iVar14 == 0) + iVar12 + iVar14;
              *(int *)(param_4 + 1) = iVar11;
              if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
              }
              pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
              *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar25) = 0;
              iVar14 = local_568;
            }
            if (local_2d8 != (void *)0x0) {
              FMemory::Free(local_2d8);
            }
            FString::PrintfImpl(&local_2c8,L"\t\tSample Rate: %i Hz\n",iVar14);
            pvVar26 = local_2c8;
            iVar12 = iVar13;
            if (local_2c0 != 0) {
              iVar12 = local_2c0 + -1;
            }
            if (iVar12 != 0) {
              iVar14 = (int)param_4[1];
              iVar11 = (uint)(iVar14 == 0) + iVar12 + iVar14;
              *(int *)(param_4 + 1) = iVar11;
              if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
              }
              pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
              *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar25) = 0;
            }
            if (local_2c8 != (void *)0x0) {
              FMemory::Free(local_2c8);
            }
            FString::PrintfImpl(&local_2b8,L"\t\tBits Per Sample: %i\n",local_554);
            pvVar26 = local_2b8;
            iVar12 = iVar13;
            if (local_2b0 != 0) {
              iVar12 = local_2b0 + -1;
            }
            if (iVar12 != 0) {
              iVar14 = (int)param_4[1];
              iVar11 = (uint)(iVar14 == 0) + iVar12 + iVar14;
              *(int *)(param_4 + 1) = iVar11;
              if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
              }
              pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
              *(undefined2 *)((longlong)pvVar25 + (longlong)iVar12 * 2) = 0;
            }
            puVar16 = local_580;
            if (local_2b8 != (void *)0x0) {
              FMemory::Free(local_2b8);
              puVar16 = local_580;
            }
            goto LAB_1408fde43;
          }
          if ((local_110 == 0x40cb3dcde69669a0) && (local_108 == 0x16067c3808372e9e)) {
            local_418 = local_578;
            if (local_578 != (longlong *)0x0) {
              (**(code **)(*local_578 + 8))(local_578);
            }
            local_410 = plVar1;
            (**(code **)(*plVar1 + 8))(plVar1);
            puVar29 = local_510;
            lVar17 = (longlong)local_508;
            local_408 = (void *)0x0;
            local_400 = local_508;
            if (local_508 == 0) {
              local_3fc = 0;
              pvVar26 = pvVar30;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_408,local_508,0);
              pvVar26 = local_408;
              _guard_xfg_dispatch_icall_nop(local_408,puVar29,lVar17 * 2);
              plVar20 = local_418;
            }
            iVar12 = local_400;
            puVar16 = local_580;
            local_520 = (void *)0x0;
            local_3b0 = 0;
            local_3f8 = 0;
            local_588 = *(int *)(local_580 + 5);
            local_3f0 = 0;
            local_3e0 = 0;
            uStack_3dc = 0;
            uStack_3d8 = 0;
            uStack_3d4 = 0;
            uStack_3d0 = 0;
            uStack_3cc = 0;
            local_3c4 = 0;
            local_3bc = 0;
            local_3c8 = 2;
            local_3c0 = 2;
            *(int *)(local_580 + 5) = local_588 + 1;
            if (*(int *)((longlong)local_580 + 0x2c) < local_588 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
              ResizeGrow(local_580 + 4,local_588);
            }
            puVar22 = (undefined8 *)((longlong)local_588 * 0x70 + puVar16[4]);
            *puVar22 = plVar20;
            puVar22[1] = local_410;
            puVar22[2] = pvVar26;
            *(undefined4 *)((longlong)puVar22 + 0x1c) = local_3fc;
            *(int *)(puVar22 + 3) = iVar12;
            puVar22[4] = local_3f8;
            *(undefined4 *)(puVar22 + 5) = (undefined4)local_3f0;
            *(undefined4 *)((longlong)puVar22 + 0x2c) = local_3f0._4_4_;
            puVar22[6] = local_3e8;
            *(undefined4 *)(puVar22 + 7) = local_3e0;
            *(undefined4 *)((longlong)puVar22 + 0x4c) = uStack_3cc;
            *(ulonglong *)((longlong)puVar22 + 0x3c) = CONCAT44(uStack_3d8,uStack_3dc);
            *(ulonglong *)((longlong)puVar22 + 0x44) = CONCAT44(uStack_3d0,uStack_3d4);
            *(undefined1 *)(puVar22 + 10) = 2;
            *(undefined4 *)((longlong)puVar22 + 0x54) = 0;
            *(undefined1 *)(puVar22 + 0xb) = 2;
            *(undefined4 *)((longlong)puVar22 + 0x5c) = 0;
            puVar22[0xc] = local_3b8;
            *(int *)(puVar22 + 0xd) = (int)local_520;
            goto LAB_1408fde43;
          }
          if ((local_110 == 0x11d5e45b72178c25) && (local_108 == -0x540b0c2f4fffd544)) {
            local_3a8 = local_578;
            if (local_578 != (longlong *)0x0) {
              (**(code **)(*local_578 + 8))(local_578);
            }
            local_3a0 = plVar1;
            (**(code **)(*plVar1 + 8))(plVar1);
            puVar29 = local_510;
            lVar17 = (longlong)local_508;
            local_398 = (void *)0x0;
            local_390 = local_508;
            if (local_508 == 0) {
              local_38c = 0;
              pvVar26 = pvVar30;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_398,local_508,0);
              pvVar26 = local_398;
              _guard_xfg_dispatch_icall_nop(local_398,puVar29,lVar17 * 2);
              plVar20 = local_3a8;
            }
            iVar12 = local_390;
            puVar16 = local_580;
            local_520 = (void *)0x0;
            local_340 = 0;
            local_388 = 0;
            local_588 = *(int *)(local_580 + 5);
            local_380 = 0;
            local_370 = 0;
            uStack_36c = 0;
            uStack_368 = 0;
            uStack_364 = 0;
            uStack_360 = 0;
            uStack_35c = 0;
            local_354 = 0;
            local_34c = 0;
            local_358 = 2;
            local_350 = 2;
            *(int *)(local_580 + 5) = local_588 + 1;
            if (*(int *)((longlong)local_580 + 0x2c) < local_588 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::
              ResizeGrow(local_580 + 4,local_588);
            }
            puVar22 = (undefined8 *)((longlong)local_588 * 0x70 + puVar16[4]);
            *puVar22 = plVar20;
            puVar22[1] = local_3a0;
            puVar22[2] = pvVar26;
            *(undefined4 *)((longlong)puVar22 + 0x1c) = local_38c;
            *(int *)(puVar22 + 3) = iVar12;
            puVar22[4] = local_388;
            *(undefined4 *)(puVar22 + 5) = (undefined4)local_380;
            *(undefined4 *)((longlong)puVar22 + 0x2c) = local_380._4_4_;
            puVar22[6] = local_378;
            *(undefined4 *)(puVar22 + 7) = local_370;
            *(undefined4 *)((longlong)puVar22 + 0x4c) = uStack_35c;
            *(ulonglong *)((longlong)puVar22 + 0x3c) = CONCAT44(uStack_368,uStack_36c);
            *(ulonglong *)((longlong)puVar22 + 0x44) = CONCAT44(uStack_360,uStack_364);
            *(undefined1 *)(puVar22 + 10) = 2;
            *(undefined4 *)((longlong)puVar22 + 0x54) = 0;
            *(undefined1 *)(puVar22 + 0xb) = 2;
            *(undefined4 *)((longlong)puVar22 + 0x5c) = 0;
            puVar22[0xc] = local_348;
            *(int *)(puVar22 + 0xd) = (int)local_520;
            goto LAB_1408fde43;
          }
          if ((local_110 != 0x10000073646976) || (local_108 != 0x719b3800aa000080))
          goto LAB_1408fde43;
          iVar12 = (**(code **)(*local_338 + 0x50))(local_338,&DAT_145dc7e30,&local_e0);
          if (-1 < iVar12) {
            iVar12 = (**(code **)(*local_578 + 0x38))(local_578,&DAT_145dc7ea0,local_4fc + 2);
            if (iVar12 < 0) {
              local_4fc[2] = 0;
            }
            iVar12 = (**(code **)(*local_578 + 0x40))(local_578,&DAT_145dc7e90,&local_330);
            if (iVar12 < 0) {
              fVar33 = 0.0;
              FString::PrintfImpl(&local_288,L"\t\tFrame Rate: n/a\n");
              pvVar26 = local_288;
              iVar12 = iVar13;
              if (local_280 != 0) {
                iVar12 = local_280 + -1;
              }
              if (iVar12 != 0) {
                iVar14 = (int)param_4[1];
                iVar11 = (uint)(iVar14 == 0) + iVar14 + iVar12;
                *(int *)(param_4 + 1) = iVar11;
                if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
                }
                pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
                *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar25) = 0;
                pvVar26 = local_288;
              }
            }
            else {
              fVar33 = (float)(local_330 >> 0x20) / (float)(local_330 & 0xffffffff);
              FString::PrintfImpl(&local_298,L"\t\tFrame Rate: %g fps\n",(double)fVar33);
              pvVar26 = local_298;
              iVar12 = iVar13;
              if (local_290 != 0) {
                iVar12 = local_290 + -1;
              }
              if (iVar12 != 0) {
                iVar14 = (int)param_4[1];
                iVar11 = (uint)(iVar14 == 0) + iVar14 + iVar12;
                *(int *)(param_4 + 1) = iVar11;
                if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
                }
                pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
                *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar25) = 0;
                pvVar26 = local_298;
              }
            }
            if (pvVar26 != (void *)0x0) {
              FMemory::Free(pvVar26);
            }
            fVar31 = -1.0;
            fVar32 = -1.0;
            iVar12 = (**(code **)(*local_578 + 0x40))(local_578,&DAT_145dc7ec0,&local_228);
            if (-1 < iVar12) {
              fVar31 = (float)(local_228 >> 0x20) / (float)(local_228 & 0xffffffff);
            }
            iVar12 = (**(code **)(*local_578 + 0x40))(local_578,&DAT_145dc7ed0,&local_220);
            if (-1 < iVar12) {
              fVar32 = (float)(local_220 >> 0x20) / (float)(local_220 & 0xffffffff);
            }
            if ((fVar31 < 0.0) || (fVar32 < 0.0)) {
              fVar31 = fVar33;
              fVar32 = fVar33;
            }
            local_538 = 1;
            local_540[0] = 1;
            local_53c = fVar31;
            local_534 = fVar32;
            FString::PrintfImpl(&local_278,L"\t\tFrame Rate Range: %g - %g fps\n",(double)fVar31,
                                (double)fVar32);
            pvVar26 = local_278;
            iVar12 = iVar13;
            if (local_270 != 0) {
              iVar12 = local_270 + -1;
            }
            if (iVar12 != 0) {
              iVar14 = (int)param_4[1];
              iVar11 = (uint)(iVar14 == 0) + iVar14 + iVar12;
              *(int *)(param_4 + 1) = iVar11;
              if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
              }
              pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
              *(undefined2 *)((longlong)pvVar25 + (longlong)iVar12 * 2) = 0;
            }
            if (local_278 != (void *)0x0) {
              FMemory::Free(local_278);
            }
            if ((fVar31 == fVar32) && (fVar31 == 1.0)) {
              FString::PrintfImpl(&local_268,L"\t\tpossibly a still image stream (may not work)\n");
              pvVar26 = local_268;
              iVar12 = iVar13;
              if (local_260 != 0) {
                iVar12 = local_260 + -1;
              }
              if (iVar12 != 0) {
                iVar14 = (int)param_4[1];
                iVar11 = (uint)(iVar14 == 0) + iVar14 + iVar12;
                *(int *)(param_4 + 1) = iVar11;
                if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
                }
                pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
                *(undefined2 *)((longlong)pvVar25 + (longlong)iVar12 * 2) = 0;
              }
              if (local_268 != (void *)0x0) {
                FMemory::Free(local_268);
              }
            }
            cVar10 = local_584;
            if (((local_584 != '\0') && (fVar31 == fVar32)) && (fVar31 == 1.0)) {
              FString::PrintfImpl(&local_258,L"\t\tlikely an unsupported still image stream\n");
              pvVar26 = local_258;
              iVar12 = iVar13;
              if (local_250 != 0) {
                iVar12 = local_250 + -1;
              }
              if (iVar12 != 0) {
                iVar14 = (int)param_4[1];
                iVar11 = (uint)(iVar14 == 0) + iVar12 + iVar14;
                *(int *)(param_4 + 1) = iVar11;
                if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
                }
                pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
                *(undefined2 *)((longlong)pvVar25 + (longlong)iVar12 * 2) = 0;
                pvVar26 = local_258;
              }
              goto LAB_1408fe35c;
            }
            iVar12 = (**(code **)(*local_578 + 0x40))(local_578,&DAT_145dc7e80,local_218);
            uVar27 = _DAT_1468b5ca0;
            if (iVar12 < 0) {
              local_530 = _DAT_1468b5ca0;
              FString::PrintfImpl(&local_238,L"\t\tDimensions: n/a\n");
              iVar12 = iVar13;
              if (local_230 != 0) {
                iVar12 = local_230 + -1;
              }
              local_520 = local_238;
              if (iVar12 != 0) {
                iVar14 = (int)param_4[1];
                iVar11 = (uint)(iVar14 == 0) + iVar12 + iVar14;
                *(int *)(param_4 + 1) = iVar11;
                if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
                }
                pvVar26 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar26,local_520,(longlong)iVar12 * 2);
                *(undefined2 *)((longlong)pvVar26 + (longlong)iVar12 * 2) = 0;
                cVar10 = local_584;
              }
              if (local_238 != (void *)0x0) {
                FMemory::Free(local_238);
              }
              local_4e0[0] = local_530 & 0xffffffff;
              local_520 = (void *)(ulonglong)local_530._4_4_;
              uVar15 = local_530._4_4_;
              local_550 = (uint)local_530;
            }
            else {
              local_520 = local_218[0];
              local_4e0[0] = (ulonglong)local_218[0] >> 0x20;
              local_530 = CONCAT44((int)local_218[0],(int)((ulonglong)local_218[0] >> 0x20));
              FString::PrintfImpl(&local_248,L"\t\tDimensions: %i x %i\n",local_4e0[0],
                                  (ulonglong)local_218[0] & 0xffffffff);
              pvVar26 = local_248;
              iVar12 = iVar13;
              if (local_240 != 0) {
                iVar12 = local_240 + -1;
              }
              if (iVar12 != 0) {
                iVar14 = (int)param_4[1];
                iVar11 = (uint)(iVar14 == 0) + iVar12 + iVar14;
                *(int *)(param_4 + 1) = iVar11;
                if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
                }
                pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
                *(undefined2 *)((longlong)pvVar25 + (longlong)iVar12 * 2) = 0;
                cVar10 = local_584;
              }
              if (local_248 != (void *)0x0) {
                FMemory::Free(local_248);
              }
              uVar27 = local_530;
              uVar15 = (uint)local_520;
              local_550 = (uint)local_4e0[0];
            }
            if ((local_e0 == 0x1000003231564e) && (local_d8 == 0x719b3800aa000080)) {
              if ((cVar10 == '\0') &&
                 (((local_550 = local_550 + 0xf & 0xfffffff0, local_100 == 0x10000034363248 &&
                   (local_f8 == 0x719b3800aa000080)) ||
                  ((local_100 == 0x4ff856223f40f4f0 && (local_f8 == 0x5eee4b587aa1d8b6)))))) {
                uVar15 = uVar15 + 0xf & 0xfffffff0;
              }
              local_4f0 = 4;
              local_4a8 = CONCAT44((int)(uVar15 * 3) / 2,local_550);
            }
            else if ((local_e0 == 0x10000000000016) && (local_d8 == 0x719b3800aa000080)) {
              local_550 = local_550 * 4;
              local_4f0 = 3;
              local_4a8 = uVar27;
            }
            else {
              if (((local_100 == 0x10000034363248) && (local_f8 == 0x719b3800aa000080)) ||
                 ((local_100 == 0x4ff856223f40f4f0 && (local_f8 == 0x5eee4b587aa1d8b6)))) {
                local_550 = local_550 + 0xf & 0xfffffff0;
              }
              local_4f0 = 7;
              local_4a8 = CONCAT44(uVar15,(int)local_550 / 2);
              uVar15 = (int)(local_550 * 2) >> 0x1f;
              local_550 = (local_550 * 2 ^ uVar15) - uVar15;
            }
            local_f0 = 0;
            uStack_ec = 0;
            uStack_e8 = 0;
            uStack_e4 = 0;
            iVar12 = (**(code **)(*local_578 + 0x50))(local_578,&DAT_145dc7eb0,&local_f0);
            if (-1 < iVar12) {
              if ((CONCAT44(uStack_ec,local_f0) == 0x11cec35605589f80) &&
                 (CONCAT44(uStack_e4,uStack_e8) == 0x5a595500aa0001bf)) {
                local_56c = *(int *)(local_580 + 5) + -1;
                lVar17 = (longlong)local_56c;
                if (-1 < local_56c) {
                  lVar24 = lVar17 * 0x70;
                  puVar16 = local_580;
                  do {
                    lVar28 = puVar16[4];
                    if (((*(longlong *)(lVar24 + 0x3c + lVar28) == 0x11d0eb0af72a76a0) &&
                        (*(longlong *)(lVar24 + 0x44 + lVar28) == -0x45e9333fffff1b54)) &&
                       ((cVar10 = TRange<float>::operator==(lVar28 + 0x50 + lVar24,local_540),
                        puVar16 = local_580, cVar10 != '\0' &&
                        ((*(int *)(lVar24 + 0x60 + lVar28) == (int)local_4e0[0] &&
                         (*(int *)(lVar24 + 100 + lVar28) == (int)local_520)))))) {
                      puVar29 = &DAT_143f3eda8;
                      if (local_508 != 0) {
                        puVar29 = local_510;
                      }
                      if (*(int *)(lVar24 + 0x18 + lVar28) == 0) {
                        puVar23 = &DAT_143f3eda8;
                      }
                      else {
                        puVar23 = *(undefined2 **)(lVar24 + 0x10 + lVar28);
                      }
                      iVar12 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23,puVar29);
                      puVar16 = local_580;
                      if (iVar12 == 0) goto LAB_1408fedd3;
                    }
                    local_56c = local_56c + -1;
                    lVar24 = lVar24 + -0x70;
                    lVar17 = lVar17 + -1;
                    fVar31 = local_53c;
                    fVar32 = local_534;
                  } while (-1 < lVar17);
                }
              }
              else if ((CONCAT44(uStack_ec,local_f0) == 0x11d0eb0af72a76a0) &&
                      (CONCAT44(uStack_e4,uStack_e8) == -0x45e9333fffff1b54)) {
                local_56c = *(int *)(local_580 + 5) + -1;
                lVar17 = (longlong)local_56c;
                if (-1 < local_56c) {
                  lVar24 = lVar17 * 0x70;
                  do {
                    lVar28 = local_580[4] + lVar24;
                    if ((((*(longlong *)(lVar28 + 0x3c) == 0x11cec35605589f80) &&
                         (*(longlong *)(lVar28 + 0x44) == 0x5a595500aa0001bf)) &&
                        (cVar10 = TRange<float>::operator==(lVar28 + 0x50,local_540), cVar10 != '\0'
                        )) && ((*(int *)(lVar28 + 0x60) == (int)local_4e0[0] &&
                               (*(int *)(lVar28 + 100) == (int)local_520)))) {
                      puVar29 = &DAT_143f3eda8;
                      if (local_508 != 0) {
                        puVar29 = local_510;
                      }
                      if (*(int *)(lVar28 + 0x18) == 0) {
                        puVar23 = &DAT_143f3eda8;
                      }
                      else {
                        puVar23 = *(undefined2 **)(lVar28 + 0x10);
                      }
                      iVar12 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar23,puVar29);
                      if (iVar12 == 0) {
                        TComPtr<FWmfMediaStreamSink>::operator=(lVar28,&local_578);
                        goto LAB_1408fedd3;
                      }
                    }
                    local_56c = local_56c + -1;
                    lVar24 = lVar24 + -0x70;
                    lVar17 = lVar17 + -1;
                    fVar31 = local_53c;
                    fVar32 = local_534;
                  } while (-1 < lVar17);
                }
              }
            }
            goto LAB_1408febe9;
          }
          FString::PrintfImpl(&local_2a8,L"\t\tfailed to get sub-type");
          pvVar26 = local_2a8;
          iVar12 = iVar13;
          if (local_2a0 != 0) {
            iVar12 = local_2a0 + -1;
          }
          if (iVar12 != 0) {
            iVar14 = (int)param_4[1];
            iVar11 = (uint)(iVar14 == 0) + iVar14 + iVar12;
            *(int *)(param_4 + 1) = iVar11;
            if (*(int *)((longlong)param_4 + 0xc) < iVar11) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar14);
            }
            pvVar25 = (void *)(*param_4 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar25,pvVar26,(longlong)iVar12 * 2);
            *(undefined2 *)((longlong)iVar12 * 2 + (longlong)pvVar25) = 0;
            pvVar26 = local_2a8;
          }
LAB_1408fe35c:
          if (pvVar26 != (void *)0x0) {
            FMemory::Free(pvVar26);
          }
          goto LAB_1408fde52;
        }
        iVar12 = (int)param_4[1];
        iVar14 = (0x20 - (uint)(iVar12 != 0)) + iVar12;
        *(int *)(param_4 + 1) = iVar14;
        if (*(int *)((longlong)param_4 + 0xc) < iVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar12);
        }
        lVar17 = *param_4;
        lVar24 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
        builtin_wcsncpy((wchar_t *)(lVar17 + lVar24 * 2),L"\t\tfailed",8);
        builtin_wcsncpy((wchar_t *)(lVar17 + 0x10 + lVar24 * 2),L" to crea",8);
        builtin_wcsncpy((wchar_t *)(lVar17 + 0x20 + lVar24 * 2),L"te outpu",8);
        *(undefined8 *)(lVar17 + 0x30 + lVar24 * 2) = 0x79007400200074;
        *(undefined4 *)(lVar17 + 0x38 + lVar24 * 2) = 0x650070;
        *(undefined2 *)(lVar17 + 0x3c + lVar24 * 2) = 10;
        *(undefined2 *)(lVar17 + 0x3e + lVar24 * 2) = 0;
        goto LAB_1408fde5b;
      }
      iVar12 = (int)param_4[1];
      iVar14 = (0x1c - (uint)(iVar12 != 0)) + iVar12;
      *(int *)(param_4 + 1) = iVar14;
      if (*(int *)((longlong)param_4 + 0xc) < iVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar12);
      }
      lVar17 = *param_4;
      lVar24 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
      builtin_wcsncpy((wchar_t *)(lVar17 + lVar24 * 2),L"\t\tfailed",8);
      builtin_wcsncpy((wchar_t *)(lVar17 + 0x10 + lVar24 * 2),L" to get ",8);
      builtin_wcsncpy((wchar_t *)(lVar17 + 0x20 + lVar24 * 2),L"media ty",8);
      *(undefined4 *)(lVar17 + 0x30 + lVar24 * 2) = 0x650070;
      *(undefined2 *)(lVar17 + 0x34 + lVar24 * 2) = 10;
      *(undefined2 *)(lVar17 + 0x36 + lVar24 * 2) = 0;
      goto LAB_1408fde69;
    }
LAB_1408fdeca:
    if (*(int *)((longlong)puVar16 + 0x5c) == -1) {
      pvVar26 = pvVar30;
      pvVar25 = pvVar30;
      if (0 < *(int *)(puVar16 + 5)) {
        do {
          iVar13 = (**(code **)(*local_560 + 0x30))
                             (local_560,*(undefined8 *)((longlong)pvVar25 + puVar16[4]));
          iVar12 = (int)pvVar26;
          if (-1 < iVar13) {
            *(int *)((longlong)puVar16 + 0x5c) = iVar12;
            goto LAB_1408fedfd;
          }
          pvVar26 = (void *)(ulonglong)(iVar12 + 1U);
          pvVar25 = (void *)((longlong)pvVar25 + 0x70);
        } while ((int)(iVar12 + 1U) < *(int *)(puVar16 + 5));
        iVar12 = *(int *)((longlong)puVar16 + 0x5c);
LAB_1408fedfd:
        if (iVar12 != -1) goto LAB_1408fee5f;
      }
      iVar12 = (int)param_4[1];
      iVar13 = (0x19 - (uint)(iVar12 != 0)) + iVar12;
      *(int *)(param_4 + 1) = iVar13;
      if (*(int *)((longlong)param_4 + 0xc) < iVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_4,iVar12);
      }
      lVar24 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
      lVar17 = *param_4;
      puVar22 = (undefined8 *)(lVar17 + lVar24 * 2);
      *puVar22 = 0x73006e00750009;
      puVar22[1] = 0x6f007000700075;
      puVar22 = (undefined8 *)(lVar17 + 0x10 + lVar24 * 2);
      *puVar22 = 0x64006500740072;
      puVar22[1] = 0x640065006d0020;
      puVar3 = (undefined4 *)(lVar17 + 0x20 + lVar24 * 2);
      *puVar3 = 0x610069;
      puVar3[1] = 0x740020;
      puVar3[2] = 0x700079;
      puVar3[3] = 0xa0065;
      *(undefined2 *)(lVar17 + 0x30 + lVar24 * 2) = 0;
    }
LAB_1408fee5f:
    piVar2 = local_4c8;
    uVar8 = local_54c;
    if (((*local_4c8 == -1) && (*(int *)((longlong)puVar16 + 0x5c) != -1)) &&
       (iVar12 = (**(code **)(**(longlong **)(local_4b8 + 0x140) + 0x118))
                           (*(longlong **)(local_4b8 + 0x140),local_54c), -1 < iVar12)) {
      *piVar2 = local_564;
    }
    local_528 = (short *)0x0;
    local_4fc[1] = 0;
    iVar12 = (**(code **)(*local_548 + 0x68))(local_548,&DAT_144159230,&local_528,local_4fc + 1);
    psVar9 = local_528;
    if (-1 < iVar12) {
      if ((short *)puVar16[7] != local_528) {
        pvVar26 = pvVar30;
        if ((local_528 != (short *)0x0) && (*local_528 != 0)) {
          lVar17 = -1;
          do {
            lVar17 = lVar17 + 1;
          } while (local_528[lVar17] != 0);
          pvVar26 = (void *)(ulonglong)((int)lVar17 + 1);
        }
        *(undefined4 *)(puVar16 + 8) = 0;
        iVar12 = (int)pvVar26;
        pvVar25 = pvVar30;
        if (*(int *)((longlong)puVar16 + 0x44) != iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar16 + 7,pvVar26);
          pvVar25 = (void *)(ulonglong)*(uint *)(puVar16 + 8);
        }
        iVar13 = (int)pvVar25 + iVar12;
        *(int *)(puVar16 + 8) = iVar13;
        if (*(int *)((longlong)puVar16 + 0x44) < iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar16 + 7);
        }
        if (iVar12 != 0) {
          _guard_xfg_dispatch_icall_nop((void *)puVar16[7],psVar9,(longlong)iVar12 * 2);
        }
      }
      CoTaskMemFree(local_528);
    }
    iVar12 = (**(code **)(*local_548 + 0x68))(local_548,&DAT_144159250,&local_528,local_4fc + 1);
    psVar9 = local_528;
    if (-1 < iVar12) {
      if ((short *)puVar16[9] != local_528) {
        pvVar26 = pvVar30;
        if ((local_528 != (short *)0x0) && (*local_528 != 0)) {
          lVar17 = -1;
          do {
            lVar17 = lVar17 + 1;
          } while (local_528[lVar17] != 0);
          pvVar26 = (void *)(ulonglong)((int)lVar17 + 1);
        }
        *(undefined4 *)(puVar16 + 10) = 0;
        iVar12 = (int)pvVar26;
        if (*(int *)((longlong)puVar16 + 0x54) != iVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar16 + 9,pvVar26);
          pvVar30 = (void *)(ulonglong)*(uint *)(puVar16 + 10);
        }
        iVar13 = iVar12 + (int)pvVar30;
        *(int *)(puVar16 + 10) = iVar13;
        if (*(int *)((longlong)puVar16 + 0x54) < iVar13) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar16 + 9,pvVar30);
        }
        if (iVar12 != 0) {
          _guard_xfg_dispatch_icall_nop((void *)puVar16[9],psVar9,(longlong)iVar12 * 2);
        }
      }
      CoTaskMemFree(local_528);
    }
    if (*(int *)(puVar16 + 10) < 2) {
      local_520 = (void *)0x0;
      plStack_518 = (longlong *)0x0;
      uVar18 = FText::AsNumber(local_128,uVar8,0,&local_520);
      uVar19 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                         (local_158,L"Unnamed Track (Stream {0})",L"FWmfMediaTracks",
                          L"UnnamedStreamFormat");
      plVar20 = (longlong *)FTextFormat::FTextFormat(&local_4a8,uVar19);
      local_d0[0] = 4;
      FText::FText(local_c0,uVar18);
      local_4b8 = *plVar20;
      local_4c8 = local_d0;
      puStack_4c0 = local_a0;
      local_4b0 = plVar20[1];
      local_a8 = 1;
      if (local_4b0 != 0) {
        LOCK();
        *(int *)(local_4b0 + 8) = *(int *)(local_4b0 + 8) + 1;
        UNLOCK();
      }
      uVar19 = TArray<FFormatArgumentValue,FDefaultAllocator>::
               TArray<FFormatArgumentValue,FDefaultAllocator>(local_4e0,&local_4c8);
      uVar19 = FText::Format(local_140,&local_4b8,uVar19);
      FText::FText(local_188,uVar19);
      if (local_138 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_138 + 1;
        lVar17 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar17 == 1) {
          (**(code **)*local_138)(local_138);
          LOCK();
          piVar2 = (int *)((longlong)local_138 + 0xc);
          iVar12 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar12 == 1) {
            (**(code **)(*local_138 + 8))(local_138,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_4e0);
      TOptional<FExpressionError>::Reset(local_c0);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(plVar20);
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(uVar18);
      puVar21 = local_188;
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
    }
    else {
      puVar21 = (undefined1 *)FText::FromString(local_170,puVar16 + 9);
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = true;
    }
    FText::operator=(puVar16 + 1,puVar21);
    if ((bVar4) && (local_168 != (longlong *)0x0)) {
      LOCK();
      plVar20 = local_168 + 1;
      lVar17 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_168)(local_168);
        LOCK();
        piVar2 = (int *)((longlong)local_168 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_168 + 8))(local_168,1);
        }
      }
    }
    if ((bVar5) && (local_180 != (longlong *)0x0)) {
      LOCK();
      plVar20 = local_180 + 1;
      lVar17 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_180)(local_180);
        LOCK();
        piVar2 = (int *)((longlong)local_180 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_180 + 8))(local_180,1);
        }
      }
    }
    if ((bVar6) && (local_150 != (longlong *)0x0)) {
      LOCK();
      plVar20 = local_150 + 1;
      lVar17 = *plVar20;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*local_150)(local_150);
        LOCK();
        piVar2 = (int *)((longlong)local_150 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_150 + 8))(local_150,1);
        }
      }
    }
    plVar20 = plStack_518;
    if ((bVar7) && (plStack_518 != (longlong *)0x0)) {
      LOCK();
      plVar1 = plStack_518 + 1;
      lVar17 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar17 == 1) {
        (**(code **)*plStack_518)(plStack_518);
        LOCK();
        piVar2 = (int *)((longlong)plVar20 + 0xc);
        iVar12 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar20 + 8))(plVar20,1);
        }
      }
    }
    plVar20 = (longlong *)*puVar16;
    if (plVar20 != local_548) {
      if (local_548 != (longlong *)0x0) {
        (**(code **)(*local_548 + 8))(local_548);
        plVar20 = (longlong *)*puVar16;
      }
      if (plVar20 != (longlong *)0x0) {
        (**(code **)(*plVar20 + 0x10))();
      }
      *puVar16 = local_548;
    }
    plVar20 = (longlong *)puVar16[6];
    if (plVar20 != local_560) {
      if (local_560 != (longlong *)0x0) {
        (**(code **)(*local_560 + 8))(local_560);
        plVar20 = (longlong *)puVar16[6];
      }
      if (plVar20 != (longlong *)0x0) {
        (**(code **)(*plVar20 + 0x10))();
      }
      puVar16[6] = local_560;
    }
    uVar18 = 1;
    *(undefined1 *)(puVar16 + 0xb) = local_56f;
    *(undefined4 *)(puVar16 + 0xc) = uVar8;
    if (local_498[0] != (longlong *)0x0) {
      (**(code **)(*local_498[0] + 0x10))();
    }
  }
  if (local_560 != (longlong *)0x0) {
    (**(code **)(*local_560 + 0x10))();
  }
LAB_1408ff379:
  if (local_548 != (longlong *)0x0) {
    (**(code **)(*local_548 + 0x10))();
  }
  return uVar18;
LAB_1408fedd3:
  local_588 = local_56c;
  fVar31 = local_53c;
  fVar32 = local_534;
LAB_1408febe9:
  puVar16 = local_580;
  if (local_588 == -1) {
    local_208 = local_578;
    if (local_578 != (longlong *)0x0) {
      (**(code **)(*local_578 + 8))();
    }
    local_200 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    FString::FString(local_1f8,&local_510);
    local_588 = *(int *)(puVar16 + 5);
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = local_4fc[2];
    local_1d8 = local_4a8;
    local_1d0 = local_550;
    local_1b8 = local_540[0];
    local_1b0 = local_538;
    local_1a0 = local_4f0;
    local_19c = 0;
    local_1cc = local_f0;
    uStack_1c8 = uStack_ec;
    uStack_1c4 = uStack_e8;
    uStack_1c0 = uStack_e4;
    *(int *)(puVar16 + 5) = local_588 + 1;
    local_1bc = fVar33;
    local_1b4 = fVar31;
    local_1ac = fVar32;
    local_1a8 = uVar27;
    if (*(int *)((longlong)puVar16 + 0x2c) < local_588 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeGrow
                (puVar16 + 4,local_588);
    }
    FWmfMediaTracks::FFormat::FFormat((longlong)local_588 * 0x70 + puVar16[4],&local_208);
    FWmfMediaTracks::FFormat::~FFormat(&local_208);
  }
LAB_1408fde43:
  if (local_578 == local_498[0]) {
    *(int *)((longlong)puVar16 + 0x5c) = local_588;
  }
LAB_1408fde52:
  (**(code **)(*plVar1 + 0x10))(plVar1);
LAB_1408fde5b:
  if (local_510 != (undefined2 *)0x0) {
    FMemory::Free();
  }
LAB_1408fde69:
  if (local_578 != (longlong *)0x0) {
    (**(code **)(*local_578 + 0x10))();
  }
  local_500 = local_500 + 1;
  pvVar26 = (void *)(ulonglong)local_500;
  puVar16 = local_580;
  if (local_4fc[0] <= local_500) goto LAB_1408fdeca;
  goto LAB_1408fd700;
}



// FUNCTION 1408ff3d0 FUN_1408ff3d0 body=1722 status=ok
// SIG undefined FUN_1408ff3d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1408ff3d0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  UINT UVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar11;
  uint uVar12;
  int *piVar13;
  code *pcVar14;
  longlong *plVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  int local_88;
  longlong *local_80;
  uint local_78;
  int local_74;
  undefined8 *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  iVar3 = *(int *)((longlong)param_2 + 0x5c);
  uVar4 = (ulonglong)iVar3;
  if ((iVar3 < 0) || (*(int *)(param_2 + 5) <= iVar3)) goto LAB_1408ff9e5;
  puVar17 = (undefined8 *)(uVar4 * 0x70 + param_2[4]);
  local_70 = param_2;
  local_68 = param_1;
  local_60 = param_3;
  (**(code **)(*(longlong *)puVar17[1] + 0x50))((longlong *)puVar17[1],&DAT_145dc7e20,&local_58);
  if ((local_58 == 0x10000073647561) && (local_50 == 0x719b3800aa000080)) {
    UVar2 = waveOutGetNumDevs();
    uVar4 = CONCAT44(extraout_var,UVar2);
    if (UVar2 == 0) goto LAB_1408ff9e5;
    if (DAT_146b17150 != (longlong *)0x0) {
      uVar4 = (**(code **)(*DAT_146b17150 + 0x388))();
      if ((char)uVar4 == '\0') goto LAB_1408ff9e5;
      if (DAT_146b17150 != (longlong *)0x0) goto LAB_1408ff499;
    }
    uVar4 = GetDefault<UWmfMediaSettings>();
    if (*(char *)(uVar4 + 0x2a) == '\0') goto LAB_1408ff9e5;
  }
LAB_1408ff499:
  uVar4 = (**(code **)(*(longlong *)param_2[6] + 0x30))((longlong *)param_2[6],*puVar17);
  if ((int)uVar4 < 0) {
LAB_1408ff9e5:
    return uVar4 & 0xffffffffffffff00;
  }
  plVar8 = (longlong *)0x0;
  local_98 = (longlong *)0x0;
  if (((local_58 == 0x10000073647561) && (local_50 == 0x719b3800aa000080)) &&
     (lVar5 = GetDefault<UWmfMediaSettings>(), *(char *)(lVar5 + 0x2a) != '\0')) {
    iVar3 = _guard_xfg_dispatch_icall_nop(&local_98);
    if (iVar3 < 0) {
      uVar4 = 0;
      goto LAB_1408ff9b9;
    }
    piVar13 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x38);
    if ((*piVar13 < DAT_146850178) && (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
      FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
      _Init_thread_footer(&DAT_146850178);
    }
    uVar1 = DAT_146850170;
    plVar6 = (longlong *)FUN_141593110();
    iVar3 = (**(code **)(*plVar6 + 8))(plVar6,uVar1);
    if (iVar3 < 1) goto LAB_1408ff68d;
    if ((*piVar13 < DAT_146850178) && (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
      FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
      _Init_thread_footer(&DAT_146850178);
    }
    uVar1 = DAT_146850170;
    plVar6 = (longlong *)FUN_141593110();
    iVar3 = 0;
    local_80 = (longlong *)0x0;
    local_74 = 0;
    local_90 = plVar6;
    local_88 = (**(code **)(*plVar6 + 8))(plVar6,uVar1);
    iVar16 = 0;
    plVar15 = plVar8;
    uVar12 = 0;
    if (0 < local_88) {
      do {
        lVar5 = (**(code **)(*plVar6 + 0x10))(plVar6,uVar1,iVar16);
        if (lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = lVar5 + -8;
        }
        iVar11 = (int)plVar8;
        local_78 = iVar11 + 1;
        if (iVar3 < (int)local_78) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_80,plVar8);
          plVar15 = local_80;
          iVar3 = local_74;
        }
        plVar8 = (longlong *)(ulonglong)local_78;
        iVar16 = iVar16 + 1;
        plVar15[iVar11] = lVar5;
        plVar6 = local_90;
        param_2 = local_70;
        uVar12 = local_78;
      } while (iVar16 < local_88);
    }
    AlgoImpl::
    IntroSortInternal<IHeadMountedDisplayModule_*,FIdentityFunctor,TDereferenceWrapper<IHeadMountedDisplayModule_*,IHeadMountedDisplayModule::FCompareModulePriority>_>
              (plVar15,(longlong)(int)uVar12,local_c8[0],local_c8);
    plVar8 = (longlong *)*plVar15;
    FMemory::Free(plVar15);
    (**(code **)(*plVar8 + 0x70))(plVar8,&local_b8);
    if (iStack_b0 < 2) {
LAB_1408ff677:
      param_3 = local_60;
      param_1 = local_68;
      if (local_b8 != (code *)0x0) {
        FMemory::Free();
        param_3 = local_60;
        param_1 = local_68;
      }
      goto LAB_1408ff68d;
    }
    pcVar14 = (code *)&DAT_143f3eda8;
    if (iStack_b0 != 0) {
      pcVar14 = local_b8;
    }
    iVar3 = (**(code **)(*local_98 + 200))(local_98,&DAT_144159260,pcVar14);
    if (-1 < iVar3) goto LAB_1408ff677;
    if (local_b8 != (code *)0x0) {
      FMemory::Free();
      uVar4 = 0;
      goto LAB_1408ff9b9;
    }
  }
  else {
    plVar6 = (longlong *)operator_new(0x40);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_LAB_144159680;
      plVar6[1] = 0;
      plVar6[2] = 0;
      plVar6[3] = 2;
      *(undefined4 *)(plVar6 + 4) = 0;
      plVar6[5] = 0;
      plVar6[6] = 0;
      plVar6[7] = 2;
      (**(code **)(*plVar6 + 8))(plVar6);
      plVar8 = plVar6;
    }
    if ((local_58 == 0x10000073647561) && (local_50 == 0x719b3800aa000080)) {
      iStack_b0 = 0;
      local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
      plVar6 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar6 != (longlong *)0x0) {
        plVar6[1] = param_1;
        *plVar6 = (longlong)&PTR_GetPoolName_1441599c8;
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_b8;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_b8._4_4_;
        *(int *)(plVar6 + 3) = iStack_b0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_ac;
        *(undefined4 *)(plVar6 + 4) = 0;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar5;
        *plVar6 = (longlong)&PTR_GetPoolName_144159a10;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8 + 1,1);
        (**(code **)(*plVar6 + 0x20))(plVar6,&local_90);
        iVar3 = (int)plVar8[2];
        *(int *)(plVar8 + 2) = iVar3 + 1;
        if (*(int *)((longlong)plVar8 + 0x14) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8 + 1,iVar3);
        }
        puVar7 = (undefined8 *)((longlong)iVar3 * 0x10 + plVar8[1]);
        *puVar7 = plVar6;
        *(undefined4 *)(puVar7 + 1) = 3;
        param_2 = local_70;
      }
      local_b8 = FUN_140903bf0;
LAB_1408ff808:
      iStack_b0 = 0;
      FUN_1408fb470(plVar8 + 5,&local_90,param_1,&local_b8);
    }
    else {
      if ((local_58 == 0x40cb3dcde69669a0) && (local_50 == 0x16067c3808372e9e)) {
        local_b8 = FWmfMediaTracks::HandleMediaSamplerCaptionSample;
        goto LAB_1408ff808;
      }
      if ((local_58 == 0x11d5e45b72178c25) && (local_50 == -0x540b0c2f4fffd544)) {
        local_b8 = FUN_1409040b0;
        goto LAB_1408ff808;
      }
      if ((local_58 == 0x10000073646976) && (local_50 == 0x719b3800aa000080)) {
        local_b8 = FUN_1409042c0;
        goto LAB_1408ff808;
      }
    }
    iVar3 = _guard_xfg_dispatch_icall_nop(puVar17[1],plVar8,&local_98);
    if (iVar3 < 0) {
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
        uVar4 = 0;
        goto LAB_1408ff9b9;
      }
    }
    else {
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
LAB_1408ff68d:
      if (local_98 != (longlong *)0x0) {
        uVar10 = 0;
        uVar9 = 0;
        local_a0 = (longlong *)0x0;
        iVar3 = _guard_xfg_dispatch_icall_nop(0,&local_a0);
        uVar4 = uVar10;
        if ((((-1 < iVar3) &&
             (iVar3 = (**(code **)(*local_a0 + 0x108))(local_a0,local_98), -1 < iVar3)) &&
            (iVar3 = (**(code **)(*local_a0 + 0xa8))(local_a0,&DAT_144159200,0), -1 < iVar3)) &&
           ((iVar3 = (**(code **)(*local_a0 + 0xa8))(local_a0,&DAT_144159210,0), uVar4 = uVar9,
            -1 < iVar3 && (iVar3 = (**(code **)(*param_3 + 0x110))(param_3,local_a0), -1 < iVar3))))
        {
          local_a8 = (longlong *)0x0;
          iVar3 = _guard_xfg_dispatch_icall_nop(1,&local_a8);
          uVar4 = uVar10;
          if ((((-1 < iVar3) &&
               ((iVar3 = (**(code **)(*local_a8 + 0xd8))
                                   (local_a8,&DAT_1441591d0,*(undefined8 *)(param_1 + 0xe8)),
                -1 < iVar3 &&
                (iVar3 = (**(code **)(*local_a8 + 0xd8))
                                   (local_a8,&DAT_1441591e0,*(undefined8 *)(param_1 + 0x140)),
                -1 < iVar3)))) &&
              (iVar3 = (**(code **)(*local_a8 + 0xd8))(local_a8,&DAT_1441591f0,*param_2),
              uVar4 = uVar9, -1 < iVar3)) &&
             ((iVar3 = (**(code **)(*param_3 + 0x110))(param_3,local_a8), -1 < iVar3 &&
              (iVar3 = (**(code **)(*local_a8 + 0x140))(local_a8,0,local_a0,0), -1 < iVar3)))) {
            uVar4 = 1;
          }
          if (local_a8 != (longlong *)0x0) {
            (**(code **)(*local_a8 + 0x10))();
          }
        }
        if (local_a0 != (longlong *)0x0) {
          (**(code **)(*local_a0 + 0x10))();
        }
        goto LAB_1408ff9b9;
      }
    }
  }
  uVar4 = 0;
LAB_1408ff9b9:
  if (local_98 == (longlong *)0x0) {
    return uVar4;
  }
  (**(code **)(*local_98 + 0x10))();
  return uVar4;
}



// FUNCTION 1408ffa90 Append body=88 status=ok
// SIG undefined Append(void)

void TArray<unsigned_char,FDefaultAllocator>::Append(longlong *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_3) {
    ResizeGrow(param_1,iVar1);
  }
  ::_guard_xfg_dispatch_icall_nop((void *)((longlong)iVar1 + *param_1),param_2,(longlong)param_3);
  return;
}



// FUNCTION 1408ffaf0 AppendStats body=1141 status=ok
// SIG undefined AppendStats(void)

void FWmfMediaTracks::AppendStats(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  void *pvVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined2 *puVar11;
  void *local_48;
  int local_40;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  }
  iVar10 = (int)param_2[1];
  iVar4 = (0xe - (uint)(iVar10 != 0)) + iVar10;
  *(int *)(param_2 + 1) = iVar4;
  if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
  }
  lVar7 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
  builtin_wcsncpy((wchar_t *)(*param_2 + lVar7 * 2),L"Audio Tr",8);
  lVar7 = *param_2 + lVar7 * 2;
  *(undefined8 *)(lVar7 + 0x10) = 0x73006b00630061;
  *(undefined2 *)(lVar7 + 0x18) = 10;
  *(undefined2 *)(lVar7 + 0x1a) = 0;
  if (*(int *)(param_1 + 0x58) == 0) {
    iVar10 = (int)param_2[1];
    iVar4 = (7 - (uint)(iVar10 != 0)) + iVar10;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    lVar8 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
    lVar7 = *param_2;
    *(undefined8 *)(lVar7 + lVar8 * 2) = 0x6e006f006e0009;
    lVar7 = lVar7 + lVar8 * 2;
    *(undefined4 *)(lVar7 + 8) = 0xa0065;
    *(undefined2 *)(lVar7 + 0xc) = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x50);
    lVar8 = (longlong)*(int *)(param_1 + 0x58) * 0x68 + lVar7;
    while (lVar7 != lVar8) {
      puVar6 = (undefined8 *)FText::ToString(lVar7 + 8);
      iVar10 = 0;
      if (*(int *)(puVar6 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar6;
      }
      FString::PrintfImpl(&local_48,L"\t%s\n",puVar11);
      pvVar2 = local_48;
      if (local_40 != 0) {
        iVar10 = local_40 + -1;
      }
      if (iVar10 != 0) {
        iVar4 = (int)param_2[1];
        iVar5 = (uint)(iVar4 == 0) + iVar4 + iVar10;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar10 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
      iVar10 = (int)param_2[1];
      iVar4 = (0x16 - (uint)(iVar10 != 0)) + iVar10;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
      }
      lVar7 = lVar7 + 0x68;
      lVar9 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
      builtin_wcsncpy((wchar_t *)(*param_2 + lVar9 * 2),L"\t\tNot im",8);
      lVar9 = *param_2 + lVar9 * 2;
      ((wchar_t *)(lVar9 + 0x10))[0] = L'p';
      ((wchar_t *)(lVar9 + 0x10))[1] = L'l';
      ((wchar_t *)(lVar9 + 0x14))[0] = L'e';
      ((wchar_t *)(lVar9 + 0x14))[1] = L'm';
      ((wchar_t *)(lVar9 + 0x18))[0] = L'e';
      ((wchar_t *)(lVar9 + 0x18))[1] = L'n';
      ((wchar_t *)(lVar9 + 0x1c))[0] = L't';
      ((wchar_t *)(lVar9 + 0x1c))[1] = L'e';
      *(undefined8 *)(lVar9 + 0x20) = 0x65007900200064;
      *(undefined2 *)(lVar9 + 0x28) = 0x74;
      *(undefined2 *)(lVar9 + 0x2a) = 0;
    }
  }
  iVar10 = (int)param_2[1];
  iVar4 = (0xe - (uint)(iVar10 != 0)) + iVar10;
  *(int *)(param_2 + 1) = iVar4;
  if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
  }
  lVar7 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
  builtin_wcsncpy((wchar_t *)(*param_2 + lVar7 * 2),L"Video Tr",8);
  lVar7 = *param_2 + lVar7 * 2;
  *(undefined8 *)(lVar7 + 0x10) = 0x73006b00630061;
  *(undefined2 *)(lVar7 + 0x18) = 10;
  *(undefined2 *)(lVar7 + 0x1a) = 0;
  if (*(int *)(param_1 + 0x1a8) == 0) {
    iVar10 = (int)param_2[1];
    iVar4 = (7 - (uint)(iVar10 != 0)) + iVar10;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
    }
    lVar8 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
    lVar7 = *param_2;
    *(undefined8 *)(lVar7 + lVar8 * 2) = 0x6e006f006e0009;
    lVar7 = lVar7 + lVar8 * 2;
    *(undefined4 *)(lVar7 + 8) = 0xa0065;
    *(undefined2 *)(lVar7 + 0xc) = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x1a0);
    lVar8 = (longlong)*(int *)(param_1 + 0x1a8) * 0x68 + lVar7;
    while (lVar7 != lVar8) {
      puVar6 = (undefined8 *)FText::ToString(lVar7 + 8);
      iVar10 = 0;
      if (*(int *)(puVar6 + 1) == 0) {
        puVar11 = &DAT_143f3eda8;
      }
      else {
        puVar11 = (undefined2 *)*puVar6;
      }
      FString::PrintfImpl(&local_48,L"\t%s\n",puVar11);
      pvVar2 = local_48;
      if (local_40 != 0) {
        iVar10 = local_40 + -1;
      }
      if (iVar10 != 0) {
        iVar4 = (int)param_2[1];
        iVar5 = (uint)(iVar4 == 0) + iVar4 + iVar10;
        *(int *)(param_2 + 1) = iVar5;
        if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar4);
        }
        pvVar1 = (void *)(*param_2 + ((longlong)iVar4 - (ulonglong)(iVar4 != 0)) * 2);
        ::_guard_xfg_dispatch_icall_nop(pvVar1,pvVar2,(longlong)iVar10 * 2);
        *(undefined2 *)((longlong)pvVar1 + (longlong)iVar10 * 2) = 0;
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
      iVar10 = (int)param_2[1];
      iVar4 = (0x16 - (uint)(iVar10 != 0)) + iVar10;
      *(int *)(param_2 + 1) = iVar4;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar10);
      }
      lVar7 = lVar7 + 0x68;
      lVar9 = (longlong)iVar10 - (ulonglong)(iVar10 != 0);
      builtin_wcsncpy((wchar_t *)(*param_2 + lVar9 * 2),L"\t\tNot im",8);
      lVar9 = *param_2 + lVar9 * 2;
      ((wchar_t *)(lVar9 + 0x10))[0] = L'p';
      ((wchar_t *)(lVar9 + 0x10))[1] = L'l';
      ((wchar_t *)(lVar9 + 0x14))[0] = L'e';
      ((wchar_t *)(lVar9 + 0x14))[1] = L'm';
      ((wchar_t *)(lVar9 + 0x18))[0] = L'e';
      ((wchar_t *)(lVar9 + 0x18))[1] = L'n';
      ((wchar_t *)(lVar9 + 0x1c))[0] = L't';
      ((wchar_t *)(lVar9 + 0x1c))[1] = L'e';
      *(undefined8 *)(lVar9 + 0x20) = 0x65007900200064;
      *(undefined2 *)(lVar9 + 0x28) = 0x74;
      *(undefined2 *)(lVar9 + 0x2a) = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001408fff5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 1408fff70 BeginRead body=259 status=ok
// SIG undefined BeginRead(void)

HRESULT FWmfMediaByteStream::BeginRead
                  (longlong param_1,IUnknownVtbl *param_2,undefined4 param_3,
                  IMFAsyncCallback *param_4,IUnknown *param_5)

{
  HRESULT HVar1;
  IUnknown *punkObject;
  IMFAsyncResult *local_res20;
  
  if ((param_4 != (IMFAsyncCallback *)0x0) && (param_2 != (IUnknownVtbl *)0x0)) {
    punkObject = (IUnknown *)operator_new(0x20);
    if (punkObject != (IUnknown *)0x0) {
      punkObject[1].lpVtbl = (IUnknownVtbl *)0x0;
      punkObject->lpVtbl = (IUnknownVtbl *)&PTR_LAB_144159850;
      punkObject[2].lpVtbl = param_2;
      *(undefined4 *)&punkObject[3].lpVtbl = param_3;
      *(undefined4 *)((longlong)&punkObject[3].lpVtbl + 4) = 0;
      FUN_1408fd010(punkObject);
      local_res20 = (IMFAsyncResult *)0x0;
      HVar1 = ::_guard_xfg_dispatch_icall_nop(punkObject,param_4,param_5,&local_res20);
      if (-1 < HVar1) {
        *(undefined1 *)(param_1 + 8) = 1;
        HVar1 = ::_guard_xfg_dispatch_icall_nop
                          (1,(IMFAsyncCallback *)(param_1 + -8),(IUnknown *)local_res20);
        (*local_res20->lpVtbl->Release)(local_res20);
      }
      (*punkObject->lpVtbl->Release)(punkObject);
      return HVar1;
    }
    return -0x7ff8fff2;
  }
  return -0x7ff8ffa9;
}



// FUNCTION 1409000a0 CanControl body=195 status=ok
// SIG undefined CanControl(void)

ulonglong FWmfMediaSession::CanControl(longlong param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  BOOL BVar2;
  ulonglong in_RAX;
  byte bVar3;
  undefined4 uVar4;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_2 == 1) {
    if (*(int *)(param_1 + 0xb4) == 3) {
      if ((*(byte *)(param_1 + 0xc) & 4) == 0) {
        uVar4 = 0;
LAB_1409000f9:
        cVar1 = TRangeSet<float>::Contains(param_1 + 0xd0,uVar4);
        if (cVar1 == '\0') goto LAB_140900143;
      }
LAB_140900109:
      bVar3 = 1;
      goto LAB_140900146;
    }
  }
  else if (param_2 == 2) {
    if (*(int *)(param_1 + 0xb4) != 3) {
      uVar4 = 0x3f800000;
      goto LAB_1409000f9;
    }
  }
  else {
    if (param_2 == 3) {
      bVar3 = *(byte *)(param_1 + 8);
      goto LAB_140900146;
    }
    if (((param_2 == 4) && ((*(byte *)(param_1 + 0xc) & 2) != 0)) &&
       (0 < *(longlong *)(param_1 + 0x38))) goto LAB_140900109;
  }
LAB_140900143:
  bVar3 = 0;
LAB_140900146:
  LeaveCriticalSection(lpCriticalSection);
  return (ulonglong)bVar3;
}



// FUNCTION 140900170 Close body=139 status=ok
// SIG undefined Close(void)

void FWmfMediaPlayer::Close(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong local_18 [2];
  
  iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 8) + 0x18))();
  if (iVar2 != 0) {
    FWmfMediaSession::Shutdown(*(undefined8 *)(param_1 + 0x38));
    plVar1 = (longlong *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x18) = 0;
    if (plVar1 != local_18) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    FWmfMediaTracks::Shutdown(*(undefined8 *)(param_1 + 0x40));
    (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),9);
    (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),1);
  }
  return;
}



// FUNCTION 140900200 FUN_140900200 body=622 status=ok
// SIG undefined FUN_140900200(void)

undefined8 FUN_140900200(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  float fVar8;
  longlong local_res8;
  float local_res10 [2];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    if (param_2 == 0.0) {
      if (*(int *)(param_1 + 0xbc) != 3) goto LAB_140900371;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x50))();
    }
    else {
      if (*(int *)(param_1 + 0xbc) == 3) goto LAB_140900371;
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x48))
                        (*(longlong **)(param_1 + 0x60),0,&local_48);
    }
    if (iVar3 < 0) {
      return 0;
    }
    goto LAB_140900371;
  }
  if (0.0 <= param_2) {
    if (*(float *)(param_1 + 0xb8) <= 0.0 && *(float *)(param_1 + 0xb8) != 0.0) goto LAB_1409002a0;
    if (param_2 < 0.0) goto LAB_140900297;
LAB_140900300:
    fVar8 = *(float *)(param_1 + 0xb8);
    if (param_2 == 0.0) {
      if (fVar8 == 0.0) goto LAB_140900312;
    }
    else if (fVar8 != 0.0) goto LAB_140900312;
    if ((*(int *)(param_1 + 0xbc) == 2) || (*(int *)(param_1 + 0xbc) == 5)) {
LAB_140900312:
      uVar6 = 0;
      if (param_2 != fVar8) {
        cVar2 = TRangeSet<float>::Contains(param_1 + 0xd8);
        if (cVar2 == '\0') {
          cVar2 = TRangeSet<float>::Contains(param_1 + 200,param_2);
          if (cVar2 == '\0') {
            return 0;
          }
          uVar6 = 1;
        }
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x18))
                          (*(longlong **)(param_1 + 0x80),uVar6,param_2);
        if (iVar3 < 0) {
          return 0;
        }
        if (*(char *)(param_1 + 0x70) != '\0') {
          return 1;
        }
        fVar8 = *(float *)(param_1 + 0xb8);
        *(undefined1 *)(param_1 + 0x70) = 1;
      }
      if ((0.0 < fVar8 * param_2) && (*(int *)(param_1 + 0xbc) == 3)) {
        return 1;
      }
      if (param_2 == 0.0) {
        return 1;
      }
      if ((*(int *)(param_1 + 0xbc) == 3) && (*(char *)(param_1 + 0x70) == '\0')) {
        return 1;
      }
      if (*(char *)(param_1 + 0xb0) == '\0') {
        plVar5 = (longlong *)
                 (**(code **)(*(longlong *)(param_1 + 8) + 0x30))(param_1 + 8,&local_res8);
      }
      else {
        plVar5 = (longlong *)(param_1 + 0xa8);
      }
      lVar7 = *plVar5;
      if ((lVar7 != 0) || (0.0 <= param_2)) {
        if ((lVar7 == *(longlong *)(param_1 + 0x40)) && (0.0 < param_2)) {
          lVar7 = 0;
        }
      }
      else {
        lVar7 = *(longlong *)(param_1 + 0x40);
      }
      if (*(char *)(param_1 + 0x70) != '\0') {
        if (&local_res8 == (longlong *)(param_1 + 0xa8)) {
          return 1;
        }
        *(longlong *)(param_1 + 0xa8) = lVar7;
        *(undefined1 *)(param_1 + 0xb0) = 1;
        return 1;
      }
      FUN_140900470(param_1);
      return 1;
    }
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x50))();
    if (iVar3 < 0) {
      return 0;
    }
  }
  else {
LAB_140900297:
    if (*(float *)(param_1 + 0xb8) <= 0.0 && *(float *)(param_1 + 0xb8) != 0.0) goto LAB_140900300;
LAB_1409002a0:
    if (*(int *)(param_1 + 0xbc) == 5) goto LAB_140900300;
    puVar4 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 8) + 0x30))(param_1 + 8,&local_res8)
    ;
    puVar1 = (undefined8 *)(param_1 + 0x68);
    *puVar1 = *puVar4;
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x58))();
    if (iVar3 < 0) {
      return 0;
    }
    if ((*(char *)(param_1 + 0xb0) == '\0') && (puVar1 != (undefined8 *)(param_1 + 0xa8))) {
      if (*(char *)(param_1 + 0xb0) != '\0') {
        *(undefined1 *)(param_1 + 0xb0) = 0;
      }
      *(undefined8 *)(param_1 + 0xa8) = *puVar1;
      *(undefined1 *)(param_1 + 0xb0) = 1;
    }
  }
  if (local_res10 != (float *)(param_1 + 0x94)) {
    *(float *)(param_1 + 0x94) = param_2;
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
LAB_140900371:
  *(undefined1 *)(param_1 + 0x70) = 1;
  return 1;
}



// FUNCTION 140900470 FUN_140900470 body=401 status=ok
// SIG undefined FUN_140900470(void)

bool FUN_140900470(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined4 local_res8 [2];
  longlong local_res10;
  longlong local_68;
  ulonglong local_60;
  longlong local_58 [2];
  undefined2 local_48 [4];
  longlong local_40;
  
  lVar6 = 0;
  local_res8[0] = 0;
  local_res10 = param_2;
  if (param_2 == DAT_146287740) {
    pwVar8 = L"<current>";
    lVar7 = lVar6;
  }
  else {
    puVar3 = (undefined8 *)FTimespan::ToString(&local_res10,local_58);
    if (*(int *)(puVar3 + 1) == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)*puVar3;
    }
    lVar7 = 1;
  }
  local_68 = 0;
  local_60 = 0;
  if ((pwVar8 != (wchar_t *)0x0) && (*pwVar8 != L'\0')) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pwVar8[lVar6] != L'\0');
    uVar5 = (int)lVar6 + 1;
    local_60 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    }
    lVar6 = local_68;
    FGenericPlatformString::Memcpy(local_68,pwVar8,(longlong)(int)uVar5 * 2);
  }
  if ((lVar7 != 0) && (local_58[0] != 0)) {
    FMemory::Free();
  }
  plVar4 = (longlong *)(param_1 + 8);
  cVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(plVar4,4);
  if (cVar1 == '\0') {
    local_res10 = DAT_146287740;
    local_48[0] = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x30))(plVar4,local_res8);
    if (local_res10 == *plVar4) {
      local_res10 = DAT_146287740;
      local_48[0] = 0;
    }
    else if (local_res10 == DAT_146287740) {
      local_48[0] = 0;
    }
    else {
      local_40 = local_res10;
      local_48[0] = 0x14;
    }
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x48))
                    (*(longlong **)(param_1 + 0x60),0,local_48);
  if (-1 < iVar2) {
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  if (lVar6 != 0) {
    FMemory::Free(lVar6);
  }
  return -1 < iVar2;
}



// FUNCTION 140900610 FUN_140900610 body=258 status=ok
// SIG undefined FUN_140900610(void)

undefined8 FUN_140900610(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  
  if (*(int *)(param_1 + 0xbc) == 5) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x40))();
    if (iVar2 < 0) {
      return 0;
    }
    if (param_2 == (longlong *)0x0) {
      return 1;
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x38))
                      (*(longlong **)(param_1 + 0x60),1,param_2);
    if (iVar2 < 0) {
      return 0;
    }
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 8) + 0x30))(param_1 + 8,local_res8);
    puVar1 = (undefined8 *)(param_1 + 0x68);
    *puVar1 = *puVar3;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x58))();
    if (iVar2 < 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0xb0) == '\0') {
      if (puVar1 != (undefined8 *)(param_1 + 0xa8)) {
        if (*(char *)(param_1 + 0xb0) != '\0') {
          *(undefined1 *)(param_1 + 0xb0) = 0;
        }
        *(undefined8 *)(param_1 + 0xa8) = *puVar1;
        *(undefined1 *)(param_1 + 0xb0) = 1;
      }
      *puVar1 = 0;
    }
    plVar4 = *(longlong **)(param_1 + 0xa0);
    if (plVar4 != param_2) {
      if (param_2 != (longlong *)0x0) {
        (**(code **)(*param_2 + 8))(param_2);
        plVar4 = *(longlong **)(param_1 + 0xa0);
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *(longlong **)(param_1 + 0xa0) = param_2;
    }
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  return 1;
}



// FUNCTION 140900720 Contains body=177 status=ok
// SIG undefined Contains(void)

ulonglong TRange<float>::Contains(byte *param_1,float param_2)

{
  byte bVar1;
  undefined8 in_RAX;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  byte local_res8 [4];
  float local_resc;
  
  bVar1 = *param_1;
  local_resc = param_2;
  pbVar4 = param_1;
  if (bVar1 == 2) {
    pbVar2 = (byte *)0x2;
  }
  else if (param_2 <= *(float *)(param_1 + 4)) {
    if ((param_2 < *(float *)(param_1 + 4)) || (bVar1 != 1)) {
      pbVar4 = local_res8;
    }
    pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  else {
    pbVar2 = (byte *)(ulonglong)bVar1;
  }
  if (((byte)pbVar2 == bVar1) &&
     (((byte)pbVar2 == 2 || (*(float *)(param_1 + 4) == *(float *)(pbVar4 + 4))))) {
    bVar1 = param_1[8];
    pbVar2 = param_1 + 8;
    bVar3 = bVar1;
    if ((bVar1 != 2) && (*(float *)(param_1 + 0xc) <= param_2)) {
      if ((*(float *)(param_1 + 0xc) < param_2) || (bVar1 != 1)) {
        pbVar2 = local_res8;
      }
      bVar3 = 1;
    }
    if ((bVar3 == bVar1) && ((bVar3 == 2 || (*(float *)(param_1 + 0xc) == *(float *)(pbVar2 + 4)))))
    {
      return CONCAT71((int7)((ulonglong)pbVar2 >> 8),1);
    }
  }
  return (ulonglong)pbVar2 & 0xffffffffffffff00;
}



// FUNCTION 1409007e0 Contains body=180 status=ok
// SIG undefined Contains(void)

ulonglong TRangeSet<float>::Contains(longlong *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  char *in_RAX;
  char *pcVar3;
  int iVar4;
  char local_res8 [4];
  float local_resc;
  char local_res18 [4];
  float local_res1c;
  
  iVar4 = 0;
  do {
    if ((iVar4 < 0) || ((int)param_1[1] <= iVar4)) {
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
    in_RAX = (char *)((longlong)iVar4 * 0x10 + *param_1);
    local_resc = param_2;
    cVar2 = *in_RAX;
    if (cVar2 == '\x02') {
LAB_140900842:
      cVar2 = in_RAX[8];
      pcVar3 = in_RAX + 8;
      local_res1c = param_2;
      local_res18[0] = '\x01';
      if (cVar2 == '\x02') goto LAB_14090088e;
      if ((*(float *)(in_RAX + 0xc) <= param_2) &&
         ((*(float *)(in_RAX + 0xc) < param_2 || (cVar2 != '\x01')))) {
        if (cVar2 != '\x01') goto LAB_140900887;
        pcVar3 = local_res18;
      }
      if (*(float *)(in_RAX + 0xc) == *(float *)(pcVar3 + 4)) {
LAB_14090088e:
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
      }
    }
    else {
      fVar1 = *(float *)(in_RAX + 4);
      pcVar3 = in_RAX;
      if (param_2 <= fVar1) {
        if (param_2 < fVar1) {
          if (cVar2 == '\x01') {
            pcVar3 = local_res8;
            goto LAB_14090083c;
          }
        }
        else if (cVar2 == '\x01') goto LAB_14090083c;
      }
      else {
LAB_14090083c:
        if (fVar1 == *(float *)(pcVar3 + 4)) goto LAB_140900842;
      }
    }
LAB_140900887:
    iVar4 = iVar4 + 1;
  } while( true );
}



// FUNCTION 1409008a0 CopyAttribute body=97 status=ok
// SIG undefined CopyAttribute(void)

ulonglong WmfMedia::CopyAttribute(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_3,&local_28);
  if (-1 < (int)uVar2) {
    uVar1 = (**(code **)(*param_2 + 0x90))(param_2,param_3,&local_28);
    uVar2 = (ulonglong)uVar1;
    PropVariantClear((PROPVARIANT *)&local_28);
  }
  return uVar2;
}



// FUNCTION 140900910 CopyToEmptyStorage body=136 status=ok
// SIG undefined CopyToEmptyStorage(void)

undefined8 *
UE4Function_Private::TFunction_OwnedObject<<lambda_eb5305ab4d85794a734d8fdc0d344ac2>_>::
CopyToEmptyStorage(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140438ef0(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_CopyToEmptyStorage_144159990;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    FString::FString(puVar2 + 3,param_1 + 0x18);
    *(undefined1 *)(puVar2 + 5) = *(undefined1 *)(param_1 + 0x28);
    puVar2[6] = *(undefined8 *)(param_1 + 0x30);
    lVar1 = *(longlong *)(param_1 + 0x38);
    puVar2[7] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1409009a0 FUN_1409009a0 body=74 status=ok
// SIG undefined FUN_1409009a0(void)

void FUN_1409009a0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_144159a58;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_144159aa0;
  }
  return;
}



// FUNCTION 1409009f0 FUN_1409009f0 body=80 status=ok
// SIG undefined FUN_1409009f0(void)

void FUN_1409009f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_1441599c8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_144159a10;
  }
  return;
}



// FUNCTION 140900a40 CreateOutputType body=1114 status=ok
// SIG undefined CreateOutputType(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
WmfMedia::CreateOutputType(undefined8 *param_1,longlong *param_2,char param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  HRESULT HVar6;
  GUID *pGVar7;
  undefined1 auStack_78 [32];
  IMFMediaType *local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  iVar5 = (**(code **)(*param_2 + 0x50))(param_2,&DAT_145dc7e20,&local_40);
  if ((iVar5 < 0) ||
     (iVar5 = (**(code **)(*param_2 + 0x50))(param_2,&DAT_145dc7e30,&local_50), iVar5 < 0)) {
    *param_1 = 0;
    return param_1;
  }
  local_58 = (IMFMediaType *)0x0;
  HVar6 = ::_guard_xfg_dispatch_icall_nop(&local_58);
  if ((HVar6 < 0) ||
     (HVar6 = (*local_58->lpVtbl->SetUINT32)(local_58,(GUID *)&DAT_145dc7e40,1), HVar6 < 0))
  goto LAB_140900c12;
  if ((local_40 == 0x10000073647561) && (local_38 == 0x719b3800aa000080)) {
    if ((CONCAT44(uStack_48,uStack_4c) == -0x620d874bb6b28986) && (iStack_44 == 0x3790dc25)) {
      if (param_3 == '\0') {
        if (((local_50 < 0x12) && ((0x200c4U >> (local_50 & 0x1f) & 1) != 0)) ||
           ((local_50 == 0x1610 || ((local_50 == 0x55 || (local_50 == 1)))))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((!bVar3) && (2 < local_50 - 0x161)) goto LAB_140900c12;
      }
    }
    else if (((CONCAT44(uStack_48,uStack_4c) != -0x55ffff7ffff00000) || (iStack_44 != 0x719b3800))
            && (param_3 == '\0')) goto LAB_140900c12;
    HVar6 = (*local_58->lpVtbl->SetGUID)(local_58,(GUID *)&DAT_145dc7e20,(GUID *)&DAT_145dc7ef0);
    if ((HVar6 < 0) ||
       (((HVar6 = (*local_58->lpVtbl->SetGUID)
                            (local_58,(GUID *)&DAT_145dc7e30,(GUID *)&DAT_145dc7dd0), HVar6 < 0 ||
         (HVar6 = (*local_58->lpVtbl->SetUINT32)(local_58,(GUID *)&DAT_145dc7e70,0x10), HVar6 < 0))
        || (iVar5 = CopyAttribute(param_2,local_58,&DAT_145dc7e50), iVar5 < 0))))
    goto LAB_140900c12;
    iVar5 = CopyAttribute(param_2,local_58,&DAT_145dc7e60);
  }
  else {
    if ((local_40 == 0x11d5e45b72178c25) && (local_38 == -0x540b0c2f4fffd544)) {
      pGVar7 = (GUID *)&DAT_145dc7f60;
    }
    else {
      if ((local_40 != 0x40cb3dcde69669a0) || (local_38 != 0x16067c3808372e9e)) {
        if (((local_40 == 0x10000073646976) && (local_38 == 0x719b3800aa000080)) &&
           (((CONCAT44(uStack_48,uStack_4c) == -0x55ffff7ffff00000 && (iStack_44 == 0x719b3800)) ||
            (param_3 != '\0')))) {
          lVar1 = CONCAT44(uStack_4c,local_50);
          lVar2 = CONCAT44(iStack_44,uStack_48);
          if ((((((lVar1 == 0x10000034363248) && (lVar2 == 0x719b3800aa000080)) ||
                ((lVar1 == 0x4ff856223f40f4f0 && (lVar2 == 0x5eee4b587aa1d8b6)))) &&
               (param_4 != '\0')) ||
              ((((lVar1 == 0x10000043564548 && (lVar2 == 0x719b3800aa000080)) ||
                ((lVar1 == 0x10000053564548 && (lVar2 == 0x719b3800aa000080)))) &&
               ((cVar4 = FWindowsPlatformMisc::VerifyWindowsVersion(10), cVar4 == '\0' &&
                (cVar4 = FWindowsPlatformMisc::VerifyWindowsVersion(6), cVar4 == '\0')))))) ||
             (HVar6 = (*local_58->lpVtbl->SetGUID)
                                (local_58,(GUID *)&DAT_145dc7e20,(GUID *)&DAT_145dc7f00), HVar6 < 0)
             ) goto LAB_140900c12;
          lVar1 = CONCAT44(uStack_4c,local_50);
          lVar2 = CONCAT44(iStack_44,uStack_48);
          if ((((lVar1 == 0x10000043564548) && (lVar2 == 0x719b3800aa000080)) ||
              ((lVar1 == 0x10000053564548 && (lVar2 == 0x719b3800aa000080)))) ||
             (((lVar1 == 0x1000003231564e && (lVar2 == 0x719b3800aa000080)) ||
              ((lVar1 == 0x10000056555949 && (lVar2 == 0x719b3800aa000080)))))) {
            pGVar7 = (GUID *)&DAT_145dc7b10;
          }
          else {
            if ((((lVar1 == 0x10000000000018) && (lVar2 == 0x719b3800aa000080)) ||
                ((lVar1 == 0x10000000000017 && (lVar2 == 0x719b3800aa000080)))) ||
               (((lVar1 == 0x10000000000014 && (lVar2 == 0x719b3800aa000080)) ||
                (((lVar1 == 0x10000000000016 && (lVar2 == 0x719b3800aa000080)) ||
                 ((lVar1 == 0x10000000000015 && (lVar2 == 0x719b3800aa000080)))))))) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            pGVar7 = (GUID *)&DAT_145dc7ac0;
            if (bVar3) {
              pGVar7 = (GUID *)&DAT_145dc7a40;
            }
          }
          HVar6 = (*local_58->lpVtbl->SetGUID)(local_58,(GUID *)&DAT_145dc7e30,pGVar7);
          if ((HVar6 < 0) ||
             ((param_4 != '\0' &&
              ((iVar5 = CopyAttribute(param_2,local_58,&DAT_145dc7e90), iVar5 < 0 ||
               (iVar5 = CopyAttribute(param_2,local_58,&DAT_145dc7e80), iVar5 < 0))))))
          goto LAB_140900c12;
          goto LAB_140900e69;
        }
        goto LAB_140900c12;
      }
      pGVar7 = (GUID *)&DAT_145dc7f20;
    }
    iVar5 = (*local_58->lpVtbl->SetGUID)(local_58,(GUID *)&DAT_145dc7e20,pGVar7);
  }
  if (-1 < iVar5) {
LAB_140900e69:
    *param_1 = local_58;
    return param_1;
  }
LAB_140900c12:
  *param_1 = 0;
  if (local_58 != (IMFMediaType *)0x0) {
    (*local_58->lpVtbl->Release)(local_58);
  }
  return param_1;
}



// FUNCTION 140900ea0 CreateTopology body=395 status=ok
// SIG undefined CreateTopology(void)

undefined8 * FWmfMediaTracks::CreateTopology(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  BOOL BVar3;
  int iVar4;
  longlong *local_res8;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  }
  if ((*(longlong *)(param_1 + 0xe8) == 0) ||
     ((((*(int *)(param_1 + 0x148) == -1 && (*(int *)(param_1 + 0x14c) == -1)) &&
       (*(int *)(param_1 + 0x150) == -1)) && (*(int *)(param_1 + 0x154) == -1)))) {
    *param_2 = 0;
  }
  else {
    local_res8 = (longlong *)0x0;
    iVar4 = ::_guard_xfg_dispatch_icall_nop(&local_res8);
    if (-1 < iVar4) {
      iVar4 = *(int *)(param_1 + 0x148);
      bVar1 = 0;
      if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x58))) {
        bVar1 = FUN_1408ff3d0(param_1,(longlong)iVar4 * 0x68 + *(longlong *)(param_1 + 0x50),
                              local_res8);
      }
      iVar4 = *(int *)(param_1 + 0x14c);
      if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x98))) {
        bVar2 = FUN_1408ff3d0(param_1,(longlong)iVar4 * 0x68 + *(longlong *)(param_1 + 0x90),
                              local_res8);
        bVar1 = bVar1 | bVar2;
      }
      iVar4 = *(int *)(param_1 + 0x150);
      if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x138))) {
        bVar2 = FUN_1408ff3d0(param_1,(longlong)iVar4 * 0x68 + *(longlong *)(param_1 + 0x130),
                              local_res8);
        bVar1 = bVar1 | bVar2;
      }
      iVar4 = *(int *)(param_1 + 0x154);
      if ((-1 < iVar4) && (iVar4 < *(int *)(param_1 + 0x1a8))) {
        bVar2 = FUN_1408ff3d0(param_1,(longlong)iVar4 * 0x68 + *(longlong *)(param_1 + 0x1a0),
                              local_res8);
        bVar1 = bVar1 | bVar2;
      }
      if (bVar1 != 0) {
        *param_2 = local_res8;
        local_res8 = (longlong *)0x0;
        goto LAB_14090100e;
      }
    }
    *param_2 = 0;
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
  }
LAB_14090100e:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return param_2;
}



// FUNCTION 140901030 DestroyObject body=51 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::TIntrusiveReferenceController<FWmfMediaBinarySample>::DestroyObject
               (longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_GetBoundProgramCounterForTimerManager_1441595c0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR__purecall_144159598;
  return;
}



// FUNCTION 140901080 FUN_140901080 body=9 status=ok
// SIG undefined FUN_140901080(void)

void FUN_140901080(longlong param_1)

{
  FWmfMediaTracks::~FWmfMediaTracks(param_1 + 0x10);
  return;
}



// FUNCTION 140901090 DestroyObject body=64 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<FArrayReader,SharedPointerInternals::DefaultDeleter<FArrayReader>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x98) != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(lVar1);
    FMemory::operator_delete(lVar1,0xa8);
    return;
  }
  return;
}



// FUNCTION 1409010d0 FUN_1409010d0 body=279 status=ok
// SIG undefined FUN_1409010d0(void)

void FUN_1409010d0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar3;
  int iVar4;
  BOOL BVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x20);
  plVar6 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    LOCK();
    iVar4 = (int)plVar7[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar7 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar7[1];
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar7;
        if ((plVar7 != (longlong *)0x0) &&
           (lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x10),
           lpCriticalSection != (LPCRITICAL_SECTION)0x0)) {
          if (plVar2 != (longlong *)0x0) {
            BVar5 = TryEnterCriticalSection(lpCriticalSection);
            if (BVar5 == 0) {
              EnterCriticalSection(lpCriticalSection);
            }
            (**(code **)(plVar2[1] + 8))(plVar2 + 1);
            iVar4 = lpCriticalSection[1].LockCount;
            lpCriticalSection[1].LockCount = iVar4 + 1;
            if (lpCriticalSection[1].RecursionCount < iVar4 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (lpCriticalSection + 1,iVar4);
            }
            *(longlong **)(&(lpCriticalSection[1].DebugInfo)->Type + (longlong)iVar4 * 4) = plVar2;
            LeaveCriticalSection(lpCriticalSection);
          }
          goto LAB_140901129;
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar7 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  plVar7 = plVar6;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,1);
  }
LAB_140901129:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140901164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 8))(plVar7,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409011f0 FUN_1409011f0 body=279 status=ok
// SIG undefined FUN_1409011f0(void)

void FUN_1409011f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar3;
  int iVar4;
  BOOL BVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar7 = *(longlong **)(param_1 + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x20);
  plVar6 = plVar7;
  if (plVar7 != (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    LOCK();
    iVar4 = (int)plVar7[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar7 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar7[1];
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar7;
        if ((plVar7 != (longlong *)0x0) &&
           (lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x10),
           lpCriticalSection != (LPCRITICAL_SECTION)0x0)) {
          if (plVar2 != (longlong *)0x0) {
            BVar5 = TryEnterCriticalSection(lpCriticalSection);
            if (BVar5 == 0) {
              EnterCriticalSection(lpCriticalSection);
            }
            (**(code **)(plVar2[1] + 8))(plVar2 + 1);
            iVar4 = lpCriticalSection[1].LockCount;
            lpCriticalSection[1].LockCount = iVar4 + 1;
            if (lpCriticalSection[1].RecursionCount < iVar4 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (lpCriticalSection + 1,iVar4);
            }
            *(longlong **)(&(lpCriticalSection[1].DebugInfo)->Type + (longlong)iVar4 * 4) = plVar2;
            LeaveCriticalSection(lpCriticalSection);
          }
          goto LAB_140901249;
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar7 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  plVar7 = plVar6;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,1);
  }
LAB_140901249:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar7 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140901284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 8))(plVar7,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140901310 DestroyObject body=72 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<TMediaObjectPool<FWmfMediaAudioSample>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWmfMediaAudioSample>::TStorage>_>
     ::DestroyObject(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x10);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    TMediaObjectPool<FWmfMediaAudioSample>::TStorage::Reserve(lpCriticalSection,0);
    if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FMemory::Free();
    }
    DeleteCriticalSection(lpCriticalSection);
    FMemory::operator_delete(lpCriticalSection,0x38);
    return;
  }
  return;
}



// FUNCTION 140901360 DestroyObject body=72 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<TMediaObjectPool<FWmfMediaAudioSample>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWmfMediaAudioSample>::TStorage>_>
     ::DestroyObject(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x10);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    FUN_140906580(lpCriticalSection,0);
    if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FMemory::Free();
    }
    DeleteCriticalSection(lpCriticalSection);
    FMemory::operator_delete(lpCriticalSection,0x38);
    return;
  }
  return;
}



// FUNCTION 1409013b0 DiscardPendingChanges body=80 status=ok
// SIG undefined DiscardPendingChanges(void)

void FWmfMediaSession::DiscardPendingChanges(longlong param_1)

{
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 0xb0) != '\0') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}



// FUNCTION 140901400 FUN_140901400 body=775 status=ok
// SIG undefined FUN_140901400(void)

void FUN_140901400(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  bool bVar8;
  longlong local_48;
  ulonglong local_40;
  longlong local_38 [2];
  
  lVar6 = 0;
  if (*(char *)(param_1 + 0x70) != '\0') {
    bVar8 = *(char *)(param_1 + 0x98) != '\0';
    if (bVar8) {
      FString::PrintfImpl(local_38,&DAT_14414d194,(double)*(float *)(param_1 + 0x94));
      plVar4 = local_38;
    }
    else {
      local_48 = 0;
      local_40 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"<none>",0xe);
      plVar4 = &local_48;
    }
    lVar1 = *plVar4;
    *plVar4 = 0;
    plVar4[1] = 0;
    if ((bVar8) && (local_38[0] != 0)) {
      FMemory::Free();
    }
    if ((!bVar8) && (local_48 != 0)) {
      FMemory::Free();
    }
    bVar8 = false;
    if (*(char *)(param_1 + 0xb0) == '\0') {
      pwVar7 = L"<none>";
    }
    else if (*(longlong *)(param_1 + 0xa8) == DAT_146287740) {
      pwVar7 = L"<current>";
    }
    else {
      bVar8 = true;
      puVar3 = (undefined8 *)FTimespan::ToString((longlong *)(param_1 + 0xa8),local_38);
      if (*(int *)(puVar3 + 1) == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)*puVar3;
      }
    }
    local_48 = 0;
    local_40 = 0;
    if ((pwVar7 != (wchar_t *)0x0) && (*pwVar7 != L'\0')) {
      lVar6 = -1;
      do {
        lVar6 = lVar6 + 1;
      } while (pwVar7[lVar6] != L'\0');
      uVar5 = (int)lVar6 + 1;
      local_40 = (ulonglong)uVar5;
      if (0 < (int)uVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      lVar6 = local_48;
      FGenericPlatformString::Memcpy(local_48,pwVar7,(longlong)(int)uVar5 * 2);
    }
    if ((bVar8) && (local_38[0] != 0)) {
      FMemory::Free();
    }
    bVar8 = *(longlong *)(param_1 + 0xa0) != 0;
    if (bVar8) {
      FString::PrintfImpl(local_38,&DAT_14414d944);
      plVar4 = local_38;
    }
    else {
      local_48 = 0;
      local_40 = 7;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      FGenericPlatformString::Memcpy(local_48,L"<none>",0xe);
      plVar4 = &local_48;
    }
    lVar2 = *plVar4;
    *plVar4 = 0;
    plVar4[1] = 0;
    if ((bVar8) && (local_38[0] != 0)) {
      FMemory::Free();
    }
    if ((!bVar8) && (local_48 != 0)) {
      FMemory::Free();
    }
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
    if (lVar6 != 0) {
      FMemory::Free(lVar6);
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0xa0);
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))(plVar4);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    FUN_140900610(param_1,plVar4);
    if (*(char *)(param_1 + 0x70) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001409016b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(undefined1 *)(param_1 + 0x98) = 0;
    FUN_140900200(param_1,*(undefined4 *)(param_1 + 0x94));
    if (*(char *)(param_1 + 0x70) != '\0') {
      return;
    }
  }
  if (*(char *)(param_1 + 0xb0) != '\0') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
    FUN_140900470(param_1,*(undefined8 *)(param_1 + 0xa8));
  }
  return;
}



// FUNCTION 140901710 Empty body=239 status=ok
// SIG undefined Empty(void)

void TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>::Empty(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  plVar6 = (longlong *)*param_1;
  for (iVar7 = *(int *)(param_1 + 1); iVar7 != 0; iVar7 = iVar7 + -1) {
    if (plVar6[9] != 0) {
      FMemory::Free();
    }
    if (plVar6[7] != 0) {
      FMemory::Free();
    }
    if ((longlong *)plVar6[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar6[6] + 0x10))();
    }
    TArray<FWmfMediaTracks::FFormat,FDefaultAllocator>::
    ~TArray<FWmfMediaTracks::FFormat,FDefaultAllocator>(plVar6 + 4);
    plVar4 = (longlong *)plVar6[2];
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
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar6 + 0x10))();
    }
    plVar6 = plVar6 + 0xd;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<104,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,param_2);
  }
  return;
}



// FUNCTION 140901800 EndRead body=87 status=ok
// SIG undefined EndRead(void)

undefined8 FWmfMediaByteStream::EndRead(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *local_res18 [2];
  
  if (param_3 == (undefined4 *)0x0) {
    return 0x80070057;
  }
  (**(code **)(*param_2 + 0x30))(param_2,local_res18);
  *param_3 = (int)local_res18[0][1];
  (**(code **)(*local_res18[0] + 0x10))();
  *(undefined1 *)(param_1 + 8) = 0;
  return 0;
}



// FUNCTION 140901860 FUN_140901860 body=855 status=ok
// SIG undefined FUN_140901860(void)

void FUN_140901860(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  HRESULT HVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  char local_c8 [4];
  uint local_c4;
  IMFAttributes *local_c0;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  LPVOID local_a8 [2];
  undefined1 local_98 [8];
  longlong *local_90;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong *local_58;
  GUID local_48;
  
  local_48._0_8_ = *param_2;
  local_48.Data4 = *(uchar (*) [8])(param_2 + 1);
  plVar11 = (longlong *)0x0;
  local_b8 = (longlong *)0x0;
  plVar5 = (longlong *)0x0;
  plVar9 = (longlong *)0x0;
  local_b0 = 0;
  uStack_ac = 0;
  local_58 = param_2;
  if (((local_48._0_8_ == 0x41be7cff14dd9a1c) && (local_48.Data4 == (uchar  [8])0x71b5ecc61abab9b1))
     || ((plVar6 = plVar11, plVar10 = plVar11, local_48._0_8_ == 0x42d84ae78ac3587a &&
         (plVar6 = plVar5, plVar10 = plVar9, local_48.Data4 == (uchar  [8])0xff9ee13600ae099)))) {
    local_c0 = (IMFAttributes *)0x0;
    HVar3 = _guard_xfg_dispatch_icall_nop(&local_c0,1);
    if (HVar3 < 0) {
      plVar6 = plVar5;
      plVar10 = plVar9;
      if (local_c0 != (IMFAttributes *)0x0) {
        (*local_c0->lpVtbl->Release)(local_c0);
      }
    }
    else {
      HVar3 = (*local_c0->lpVtbl->SetGUID)(local_c0,(GUID *)&DAT_144159130,&local_48);
      if (HVar3 < 0) {
        plVar6 = plVar5;
        plVar10 = plVar9;
        if (local_c0 != (IMFAttributes *)0x0) {
          (*local_c0->lpVtbl->Release)(local_c0);
        }
      }
      else {
        local_a8[0] = (LPVOID)0x0;
        local_c4 = 0;
        _guard_xfg_dispatch_icall_nop(local_c0,local_a8,&local_c4);
        plVar6 = plVar11;
        plVar10 = plVar11;
        plVar12 = plVar11;
        if (local_c4 == 0) {
          plVar6 = plVar5;
          plVar10 = plVar9;
          if (local_c0 != (IMFAttributes *)0x0) {
            (*local_c0->lpVtbl->Release)(local_c0);
          }
        }
        else {
          do {
            plVar5 = *(longlong **)((longlong)local_a8[0] + (longlong)plVar12 * 8);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
            iVar7 = (int)plVar10;
            local_b0 = iVar7 + 1;
            if ((int)plVar11 < (int)local_b0) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
              plVar11 = (longlong *)(ulonglong)uStack_ac;
              plVar6 = local_b8;
            }
            plVar10 = (longlong *)(ulonglong)local_b0;
            plVar6[iVar7] = (longlong)plVar5;
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 8))(plVar5);
            }
            (**(code **)(*plVar5 + 0x10))(plVar5);
            (**(code **)(*plVar5 + 0x10))(plVar5);
            param_2 = local_58;
            uVar8 = (int)plVar12 + 1;
            plVar12 = (longlong *)(ulonglong)uVar8;
          } while (uVar8 < local_c4);
          CoTaskMemFree(local_a8[0]);
          if (local_c0 != (IMFAttributes *)0x0) {
            (*local_c0->lpVtbl->Release)(local_c0);
          }
        }
      }
    }
  }
  plVar5 = plVar6 + (int)plVar10;
  if (plVar6 != plVar5) {
    do {
      FText::FText(local_98);
      local_80 = 0;
      local_78 = 0;
      local_68 = 0;
      local_60 = 0;
      local_c8[0] = '\0';
      cVar2 = FUN_140902640(*plVar6,local_98,&local_80,local_c8,&local_68);
      if (cVar2 != '\0') {
        if ((*param_2 == 0x42d84ae78ac3587a) && (param_2[1] == 0xff9ee13600ae099)) {
          local_70 = 6;
          if (local_c8[0] != '\0') {
            local_70 = 8;
          }
        }
        else {
          local_70 = 1;
        }
        iVar7 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar7 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar7 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
          ResizeGrow(param_3,iVar7);
        }
        lVar4 = (longlong)iVar7 * 0x40 + *param_3;
        FText::FText(lVar4,local_98);
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *(longlong *)(lVar4 + 0x18) = local_80;
        local_80 = 0;
        *(undefined4 *)(lVar4 + 0x20) = (undefined4)local_78;
        *(undefined4 *)(lVar4 + 0x24) = local_78._4_4_;
        local_78 = 0;
        *(undefined4 *)(lVar4 + 0x28) = local_70;
        *(undefined8 *)(lVar4 + 0x30) = 0;
        *(longlong *)(lVar4 + 0x30) = local_68;
        local_68 = 0;
        *(undefined4 *)(lVar4 + 0x38) = (undefined4)local_60;
        *(undefined4 *)(lVar4 + 0x3c) = local_60._4_4_;
        local_60 = 0;
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_80 != 0) {
        FMemory::Free();
      }
      plVar9 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_90 + 1;
        lVar4 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_90)(local_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      plVar6 = plVar6 + 1;
      param_2 = local_58;
    } while (plVar6 != plVar5);
    plVar10 = (longlong *)(ulonglong)local_b0;
    plVar6 = local_b8;
  }
  uVar8 = (uint)plVar10;
  plVar5 = plVar6;
  while (uVar8 != 0) {
    if ((longlong *)*plVar5 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar5 + 0x10))();
    }
    plVar5 = plVar5 + 1;
    uVar8 = (int)plVar10 - 1;
    plVar10 = (longlong *)(ulonglong)uVar8;
  }
  if (plVar6 != (longlong *)0x0) {
    FMemory::Free(plVar6);
  }
  return;
}



// FUNCTION 140901c20 FUN_140901c20 body=55 status=ok
// SIG undefined FUN_140901c20(void)

undefined8 FUN_140901c20(longlong param_1)

{
  (**(code **)(param_1 + 0x10))
            ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
  return 1;
}



// FUNCTION 140901c60 FUN_140901c60 body=49 status=ok
// SIG undefined FUN_140901c60(void)

undefined8 FUN_140901c60(longlong param_1)

{
  (**(code **)(param_1 + 0x10))
            ((longlong)(int)*(undefined8 *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),
             (int)*(code **)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 140901ca0 FUN_140901ca0 body=406 status=ok
// SIG undefined FUN_140901ca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140901ca0(longlong param_1,undefined8 param_2,longlong **param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined1 local_60 [8];
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined8 *)(param_1 + 0x28);
  local_88 = (longlong *)0x0;
  plStack_80 = (longlong *)0x0;
  cVar6 = (**(code **)(*(longlong *)(param_1 + 0x28) + 8))(puVar1,&local_88);
  if (cVar6 != '\0') {
    (**(code **)(*local_88 + 0x30))(local_88,&local_68);
    plVar7 = (longlong *)(**(code **)(*local_88 + 0x10))(local_88,local_40);
    local_58 = local_68;
    local_60[0] = 1;
    local_48 = *plVar7 + local_68;
    local_50 = 0;
    cVar6 = TRange<FTimespan>::Overlaps(param_2,local_60);
    if ((cVar6 != '\0') && (cVar6 = (**(code **)*puVar1)(puVar1,&local_88), cVar6 != '\0')) {
      local_78 = local_88;
      plStack_70 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      if (&local_78 != param_3) {
        local_78 = *param_3;
        plStack_70 = param_3[1];
        local_38 = local_88;
        plStack_30 = plStack_80;
        *param_3 = local_88;
        param_3[1] = plStack_80;
      }
      plVar7 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_70 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_70 + 8))(plStack_70,1);
          }
        }
      }
      uVar8 = 1;
      goto LAB_140901dde;
    }
  }
  uVar8 = 0;
LAB_140901dde:
  plVar7 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_80 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_80)(plStack_80);
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
  return uVar8;
}



// FUNCTION 140901e40 FUN_140901e40 body=405 status=ok
// SIG undefined FUN_140901e40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140901e40(longlong param_1,undefined8 param_2,longlong **param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined1 local_60 [8];
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  puVar1 = (undefined8 *)(param_1 + 0x68);
  local_88 = (longlong *)0x0;
  plStack_80 = (longlong *)0x0;
  cVar6 = (**(code **)(*(longlong *)(param_1 + 0x68) + 8))(puVar1,&local_88);
  if (cVar6 != '\0') {
    (**(code **)(*local_88 + 0x18))(local_88,&local_68);
    plVar7 = (longlong *)(**(code **)*local_88)(local_88,local_40);
    local_58 = local_68;
    local_60[0] = 1;
    local_48 = *plVar7 + local_68;
    local_50 = 0;
    cVar6 = TRange<FTimespan>::Overlaps(param_2,local_60);
    if ((cVar6 != '\0') && (cVar6 = (**(code **)*puVar1)(puVar1,&local_88), cVar6 != '\0')) {
      local_78 = local_88;
      plStack_70 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      if (&local_78 != param_3) {
        local_78 = *param_3;
        plStack_70 = param_3[1];
        local_38 = local_88;
        plStack_30 = plStack_80;
        *param_3 = local_88;
        param_3[1] = plStack_80;
      }
      plVar7 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_70 + 1;
        lVar5 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar3 = (int *)((longlong)plVar7 + 0xc);
          iVar4 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_70 + 8))(plStack_70,1);
          }
        }
      }
      uVar8 = 1;
      goto LAB_140901f7d;
    }
  }
  uVar8 = 0;
LAB_140901f7d:
  plVar7 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_80 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_80)(plStack_80);
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
  return uVar8;
}



// FUNCTION 140901fe0 FUN_140901fe0 body=408 status=ok
// SIG undefined FUN_140901fe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140901fe0(longlong param_1,undefined8 param_2,longlong **param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined1 local_60 [8];
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)(param_1 + 0x108);
  local_88 = (longlong *)0x0;
  plStack_80 = (longlong *)0x0;
  cVar5 = (**(code **)(*plVar2 + 8))(plVar2,&local_88);
  if (cVar5 != '\0') {
    (**(code **)(*local_88 + 0x18))(local_88,&local_68);
    plVar6 = (longlong *)(**(code **)(*local_88 + 8))(local_88,local_40);
    local_58 = local_68;
    local_60[0] = 1;
    local_48 = *plVar6 + local_68;
    local_50 = 0;
    cVar5 = TRange<FTimespan>::Overlaps(param_2,local_60);
    if ((cVar5 != '\0') && (cVar5 = (**(code **)*plVar2)(plVar2,&local_88), cVar5 != '\0')) {
      local_78 = local_88;
      plStack_70 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      if (&local_78 != param_3) {
        local_78 = *param_3;
        plStack_70 = param_3[1];
        local_38 = local_88;
        plStack_30 = plStack_80;
        *param_3 = local_88;
        param_3[1] = plStack_80;
      }
      plVar2 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_70 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_70 + 8))(plStack_70,1);
          }
        }
      }
      uVar7 = 1;
      goto LAB_140902120;
    }
  }
  uVar7 = 0;
LAB_140902120:
  plVar2 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_80 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140902180 FUN_140902180 body=408 status=ok
// SIG undefined FUN_140902180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140902180(longlong param_1,undefined8 param_2,longlong **param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined1 local_60 [8];
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)(param_1 + 0x178);
  local_88 = (longlong *)0x0;
  plStack_80 = (longlong *)0x0;
  cVar5 = (**(code **)(*plVar2 + 8))(plVar2,&local_88);
  if (cVar5 != '\0') {
    (**(code **)(*local_88 + 0x38))(local_88,&local_68);
    plVar6 = (longlong *)(**(code **)(*local_88 + 0x10))(local_88,local_40);
    local_58 = local_68;
    local_60[0] = 1;
    local_48 = *plVar6 + local_68;
    local_50 = 0;
    cVar5 = TRange<FTimespan>::Overlaps(param_2,local_60);
    if ((cVar5 != '\0') && (cVar5 = (**(code **)*plVar2)(plVar2,&local_88), cVar5 != '\0')) {
      local_78 = local_88;
      plStack_70 = plStack_80;
      if (plStack_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
        UNLOCK();
      }
      if (&local_78 != param_3) {
        local_78 = *param_3;
        plStack_70 = param_3[1];
        local_38 = local_88;
        plStack_30 = plStack_80;
        *param_3 = local_88;
        param_3[1] = plStack_80;
      }
      plVar2 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar6 = plStack_70 + 1;
        lVar4 = *plVar6;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_70 + 8))(plStack_70,1);
          }
        }
      }
      uVar7 = 1;
      goto LAB_1409022c0;
    }
  }
  uVar7 = 0;
LAB_1409022c0:
  plVar2 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_80 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140902320 FlushSamples body=63 status=ok
// SIG undefined FlushSamples(void)

void FWmfMediaTracks::FlushSamples(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x10))(param_1 + 0x20);
  (**(code **)(*(longlong *)(param_1 + 0x60) + 0x10))(param_1 + 0x60);
  (**(code **)(*(longlong *)(param_1 + 0x100) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00014090235b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x170) + 0x10))();
  return;
}



// FUNCTION 140902360 FUN_140902360 body=464 status=ok
// SIG undefined FUN_140902360(void)

undefined8 FUN_140902360(undefined8 param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  void *local_28;
  int local_20;
  
  uVar6 = (ulonglong)param_2;
  local_48 = 0;
  lVar9 = 4;
  local_40 = 0;
  do {
    uVar5 = uVar6 & 0xff;
    iVar2 = isprint((int)uVar5);
    iVar4 = 0;
    if (iVar2 == 0) {
      FString::PrintfImpl(&local_28,L"[%d]",uVar5);
      pvVar7 = local_28;
      uVar5 = local_40;
      if (local_20 != 0) {
        iVar4 = local_20 + -1;
      }
      if (iVar4 != 0) {
        iVar2 = (int)local_40;
        lVar8 = (longlong)(int)local_40;
        iVar3 = (uint)((int)local_40 == 0) + iVar4 + (int)local_40;
        local_40 = CONCAT44(local_40._4_4_,iVar3);
        if (local_40._4_4_ < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,uVar5 & 0xffffffff);
        }
        pvVar1 = (void *)(local_48 + (lVar8 - (ulonglong)(iVar2 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar7,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
        pvVar7 = local_28;
      }
    }
    else {
      FString::PrintfImpl(&local_38,&DAT_14414f82c,uVar5);
      pvVar7 = local_38;
      uVar5 = local_40;
      if (local_30 != 0) {
        iVar4 = local_30 + -1;
      }
      if (iVar4 != 0) {
        iVar2 = (int)local_40;
        lVar8 = (longlong)(int)local_40;
        iVar3 = (uint)((int)local_40 == 0) + (int)local_40 + iVar4;
        local_40 = CONCAT44(local_40._4_4_,iVar3);
        if (local_40._4_4_ < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,uVar5 & 0xffffffff);
        }
        pvVar1 = (void *)(local_48 + (lVar8 - (ulonglong)(iVar2 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar1,pvVar7,(longlong)iVar4 * 2);
        *(undefined2 *)((longlong)iVar4 * 2 + (longlong)pvVar1) = 0;
        pvVar7 = local_38;
      }
    }
    if (pvVar7 != (void *)0x0) {
      FMemory::Free(pvVar7);
    }
    uVar6 = uVar6 >> 8;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  FString::Reverse(&local_48,param_1);
  if (local_48 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 140902530 GetAudioTrackFormat body=189 status=ok
// SIG undefined GetAudioTrackFormat(void)

undefined8
FWmfMediaTracks::GetAudioTrackFormat(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  BOOL BVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  }
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x50) <= param_2)) ||
      (lVar2 = (longlong)param_2 * 0x68 + *(longlong *)(param_1 + 0x48), param_3 < 0)) ||
     ((*(int *)(lVar2 + 0x28) <= param_3 ||
      (lVar2 = (longlong)param_3 * 0x70 + *(longlong *)(lVar2 + 0x20), lVar2 == 0)))) {
    uVar3 = 0;
  }
  else {
    *param_4 = *(undefined4 *)(lVar2 + 0x20);
    param_4[1] = *(undefined4 *)(lVar2 + 0x24);
    param_4[2] = *(undefined4 *)(lVar2 + 0x28);
    FString::operator=(param_4 + 4,lVar2 + 0x10);
    uVar3 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return uVar3;
}



// FUNCTION 1409025f0 GetCapabilities body=67 status=ok
// SIG undefined GetCapabilities(void)

undefined8 FWmfMediaByteStream::GetCapabilities(longlong param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  *param_2 = 5;
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}



// FUNCTION 140902640 FUN_140902640 body=1957 status=ok
// SIG undefined FUN_140902640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_140902640(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
             void **param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  short *psVar4;
  undefined8 *puVar5;
  void **ppvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  wchar_t *pwVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  void *pvVar19;
  void *pvVar20;
  void *pvVar21;
  void *pvVar22;
  undefined1 auStack_178 [32];
  char local_158;
  void *local_150;
  undefined8 local_148;
  short *local_140;
  int local_138;
  undefined4 local_134;
  int local_130 [2];
  void *local_128;
  uint local_120;
  uint local_11c;
  undefined8 *local_118;
  int local_110;
  int local_10c;
  longlong local_108;
  ulonglong local_100;
  undefined8 *local_f8;
  int local_f0;
  int local_ec;
  void *local_e8;
  uint local_e0;
  uint local_dc;
  void *local_d8;
  uint local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  undefined8 local_c0;
  void **local_b8;
  void *local_b0;
  int local_a8;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [8];
  longlong *local_80;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_b8 = param_5;
  local_c8 = param_3;
  local_c0 = param_4;
  iVar7 = (**(code **)(*param_1 + 0x50))(param_1,&DAT_144159130,&local_70);
  if (iVar7 < 0) {
    return 0;
  }
  lVar11 = local_70 + -0x41be7cff14dd9a1c;
  if (lVar11 == 0) {
    lVar11 = local_68 + -0x71b5ecc61abab9b1;
  }
  if (lVar11 != 0) {
    if (local_70 != 0x42d84ae78ac3587a) {
      return 0;
    }
    if (local_68 != 0xff9ee13600ae099) {
      return 0;
    }
  }
  local_158 = lVar11 == 0;
  local_140 = (short *)0x0;
  local_130[1] = 0;
  iVar7 = (**(code **)(*param_1 + 0x68))(param_1,&DAT_144159150,&local_140,local_130 + 1);
  psVar4 = local_140;
  lVar11 = -1;
  if (iVar7 < 0) {
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_88,L"Unknown",L"WmfMedia",L"UnknownCaptureDeviceName");
    FText::operator=(param_2,uVar12);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar18 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  else {
    local_108 = 0;
    local_100 = 0;
    if ((local_140 != (short *)0x0) && (lVar18 = lVar11, *local_140 != 0)) {
      do {
        lVar18 = lVar18 + 1;
      } while (local_140[lVar18] != 0);
      uVar16 = (int)lVar18 + 1;
      local_100 = (ulonglong)uVar16;
      if (0 < (int)uVar16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0);
      }
      FGenericPlatformString::Memcpy(local_108,psVar4,(longlong)(int)uVar16 * 2);
    }
    uVar12 = FText::FromString(local_a0,&local_108);
    FText::operator=(param_2,uVar12);
    if (local_98 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_98 + 1;
      lVar18 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_98)(local_98);
        LOCK();
        piVar2 = (int *)((longlong)local_98 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_98 + 8))(local_98,1);
        }
      }
    }
    if (local_108 != 0) {
      FMemory::Free();
    }
    CoTaskMemFree(local_140);
  }
  cVar15 = local_158;
  iVar7 = 0;
  if (local_158 == '\0') {
    local_134 = 0;
    iVar8 = (**(code **)(*param_1 + 0x38))(param_1,&DAT_144159170,&local_134);
    if (-1 < iVar8) {
      FString::PrintfImpl(&local_b0,L"Max Buffers: %i",local_134);
      pvVar21 = local_b0;
      if (local_a8 != 0) {
        iVar7 = local_a8 + -1;
      }
      if (iVar7 != 0) {
        iVar8 = (int)param_3[1];
        iVar9 = (uint)(iVar8 == 0) + iVar8 + iVar7;
        *(int *)(param_3 + 1) = iVar9;
        if (*(int *)((longlong)param_3 + 0xc) < iVar9) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3,iVar8);
        }
        pvVar19 = (void *)(*param_3 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar19,pvVar21,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)pvVar19 + (longlong)iVar7 * 2) = 0;
      }
      cVar15 = local_158;
      if (local_b0 != (void *)0x0) {
        FMemory::Free(local_b0);
        cVar15 = local_158;
      }
    }
    goto LAB_140902b5a;
  }
  local_138 = 0;
  iVar8 = (**(code **)(*param_1 + 0x38))(param_1,&DAT_144159190,&local_138);
  if (iVar8 < 0) goto LAB_140902b5a;
  local_150 = (void *)0x0;
  if (local_138 == 0) {
    local_148 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
    pwVar14 = L"Console";
LAB_140902916:
    uVar12 = 0x10;
  }
  else if (local_138 == 1) {
    local_148 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
    uVar12 = 0x16;
    pwVar14 = L"Multimedia";
  }
  else {
    if (local_138 != 2) {
      local_148 = 8;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
      pwVar14 = L"Unknown";
      goto LAB_140902916;
    }
    local_148 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
    uVar12 = 0x1e;
    pwVar14 = L"Communications";
  }
  pvVar21 = local_150;
  FGenericPlatformString::Memcpy(local_150,pwVar14,uVar12);
  iVar8 = (int)local_148 + -1;
  if ((int)local_148 == 0) {
    iVar8 = iVar7;
  }
  local_f8 = (undefined8 *)0x0;
  local_ec = 0;
  local_f0 = iVar8 + 7;
  if (0 < local_f0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0);
  }
  iVar9 = local_ec;
  iVar7 = local_f0;
  puVar5 = local_f8;
  *local_f8 = 0x65006c006f0052;
  *(undefined4 *)(local_f8 + 1) = 0x20003a;
  _guard_xfg_dispatch_icall_nop((void *)((longlong)local_f8 + 0xc),pvVar21,(longlong)iVar8 * 2);
  *(undefined2 *)((longlong)puVar5 + (longlong)iVar8 * 2 + 0xc) = 0;
  local_118 = puVar5;
  local_10c = iVar9;
  if (iVar9 < (int)(iVar7 + 1 + (uint)(iVar7 == 0))) {
    local_110 = iVar7;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_118);
    iVar7 = local_110;
  }
  local_110 = (2 - (uint)(iVar7 != 0)) + iVar7;
  if (local_10c < local_110) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,iVar7);
  }
  plVar1 = local_c8;
  puVar5 = local_118;
  puVar3 = (undefined2 *)((longlong)local_118 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)) * 2);
  *puVar3 = 10;
  puVar3[1] = 0;
  if ((local_110 != 0) && (iVar7 = local_110 + -1, iVar7 != 0)) {
    iVar8 = (int)local_c8[1];
    iVar9 = (uint)(iVar8 == 0) + iVar8 + iVar7;
    *(int *)(local_c8 + 1) = iVar9;
    if (*(int *)((longlong)local_c8 + 0xc) < iVar9) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,iVar8);
    }
    pvVar19 = (void *)(*plVar1 + ((longlong)iVar8 - (ulonglong)(iVar8 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar19,puVar5,(longlong)iVar7 * 2);
    *(undefined2 *)((longlong)pvVar19 + (longlong)iVar7 * 2) = 0;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FMemory::Free(puVar5);
  }
  cVar15 = local_158;
  if (pvVar21 != (void *)0x0) {
    FMemory::Free(pvVar21);
    cVar15 = local_158;
  }
LAB_140902b5a:
  local_130[0] = 0;
  iVar7 = (**(code **)(*param_1 + 0x38))(param_1,&DAT_144159140,local_130);
  pwVar14 = L"vidcap://";
  *(bool *)local_c0 = -1 < iVar7 && local_130[0] == 0;
  puVar13 = (undefined4 *)&DAT_144159160;
  if (cVar15 != '\0') {
    puVar13 = (undefined4 *)&DAT_144159180;
  }
  local_60 = *puVar13;
  uStack_5c = puVar13[1];
  uStack_58 = puVar13[2];
  uStack_54 = puVar13[3];
  if (cVar15 != '\0') {
    pwVar14 = L"audcap://";
  }
  pvVar19 = (void *)0x0;
  local_d8 = (void *)0x0;
  local_cc = 0;
  lVar18 = lVar11;
  pvVar21 = pvVar19;
  if (*pwVar14 != L'\0') {
    do {
      lVar18 = lVar18 + 1;
    } while (pwVar14[lVar18] != L'\0');
    uVar16 = (int)lVar18 + 1;
    local_d0 = uVar16;
    if (0 < (int)uVar16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,0);
    }
    pvVar21 = local_d8;
    pvVar19 = (void *)(ulonglong)local_d0;
    FGenericPlatformString::Memcpy(local_d8,pwVar14,(longlong)(int)uVar16 * 2);
  }
  pvVar20 = (void *)0x0;
  uVar16 = (uint)pvVar19;
  iVar7 = (**(code **)(*param_1 + 0x68))(param_1,&local_60,&local_140,local_130 + 1);
  psVar4 = local_140;
  if (-1 < iVar7) {
    uVar17 = 0;
    if ((local_140 == (short *)0x0) || (*local_140 == 0)) {
      local_e8 = (void *)0x0;
      local_e0 = uVar16;
      if (uVar16 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_e8,pvVar19,0);
        pvVar20 = local_e8;
        _guard_xfg_dispatch_icall_nop(local_e8,pvVar21,(longlong)(int)uVar16 * 2);
        uVar16 = local_e0;
        uVar17 = local_dc;
      }
    }
    else {
      do {
        lVar11 = lVar11 + 1;
      } while (local_140[lVar11] != 0);
      iVar7 = (int)lVar11;
      if ((uVar16 != 0) || (uVar10 = 1, iVar7 == 0)) {
        uVar10 = uVar17;
      }
      local_128 = (void *)0x0;
      local_120 = uVar16;
      if ((uVar16 == 0) && (uVar10 + iVar7 == 0)) {
        local_11c = 0;
        pvVar22 = pvVar20;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,uVar16 + uVar10 + iVar7,0);
        pvVar22 = local_128;
        _guard_xfg_dispatch_icall_nop(local_128,pvVar21,(longlong)(int)uVar16 * 2);
        pvVar20 = (void *)(ulonglong)local_11c;
        pvVar19 = (void *)(ulonglong)local_120;
      }
      uVar17 = (uint)pvVar20;
      uVar16 = (uint)pvVar19;
      pvVar20 = pvVar22;
      if (iVar7 != 0) {
        local_120 = iVar7 + (uint)(uVar16 == 0) + uVar16;
        if ((int)uVar17 < (int)local_120) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,pvVar19);
          pvVar20 = local_128;
          uVar17 = local_11c;
        }
        uVar10 = local_120;
        pvVar21 = (void *)((longlong)pvVar20 +
                          ((longlong)(int)uVar16 - (ulonglong)(uVar16 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar21,psVar4,(longlong)iVar7 * 2);
        *(undefined2 *)((longlong)pvVar21 + (longlong)iVar7 * 2) = 0;
        uVar16 = uVar10;
      }
    }
    ppvVar6 = local_b8;
    if (local_b8 == &local_e8) {
      if (pvVar20 != (void *)0x0) {
        FMemory::Free(pvVar20);
      }
    }
    else {
      if (*local_b8 != (void *)0x0) {
        FMemory::Free();
      }
      *ppvVar6 = pvVar20;
      *(uint *)(ppvVar6 + 1) = uVar16;
      *(uint *)((longlong)ppvVar6 + 0xc) = uVar17;
    }
    CoTaskMemFree(local_140);
    pvVar21 = local_d8;
  }
  if (pvVar21 != (void *)0x0) {
    FMemory::Free(pvVar21);
  }
  return 1;
}



// FUNCTION 140902e00 GetLength body=89 status=ok
// SIG undefined GetLength(void)

undefined8 FWmfMediaByteStream::GetLength(longlong param_1,undefined8 *param_2)

{
  BOOL BVar1;
  undefined8 uVar2;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))();
  *param_2 = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return 0;
}



// FUNCTION 140902e80 GetInfo body=37 status=ok
// SIG undefined GetInfo(void)

undefined8 FWmfMediaPlayer::GetInfo(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,*(longlong *)(param_1 + 0x40) + 200);
  return param_2;
}



// FUNCTION 140902eb0 FUN_140902eb0 body=89 status=ok
// SIG undefined FUN_140902eb0(void)

undefined8 FUN_140902eb0(longlong param_1,undefined8 *param_2)

{
  BOOL BVar1;
  undefined8 uVar2;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))();
  *param_2 = uVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return 0;
}



// FUNCTION 140902f10 GetModulePriority body=467 status=ok
// SIG undefined GetModulePriority(void)

undefined4 IHeadMountedDisplayModule::GetModulePriority(longlong *param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined4 local_res8 [2];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  
  local_58 = (longlong *)0x0;
  local_50 = 0;
  (**(code **)(*param_1 + 0x48))(param_1,&local_58);
  (**(code **)(*param_1 + 0x40))(param_1,&local_38);
  uVar2 = local_50;
  if (local_30 < 2) {
    local_48 = 0;
    local_40 = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    lVar7 = local_48;
    FGenericPlatformString::Memcpy(local_48,L"Default",0x10);
    uVar2 = local_50;
    lVar6 = (longlong)(int)local_50;
    iVar4 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar4);
    if (local_50._4_4_ < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar2 & 0xffffffff);
    }
    plVar5 = local_58 + lVar6 * 2;
    *plVar5 = lVar7;
    *(undefined4 *)(plVar5 + 1) = (undefined4)local_40;
    *(undefined4 *)((longlong)plVar5 + 0xc) = local_40._4_4_;
  }
  else {
    lVar7 = (longlong)(int)local_50;
    iVar4 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,iVar4);
    if (local_50._4_4_ < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_58,uVar2 & 0xffffffff);
    }
    _Src = local_38;
    plVar5 = local_58 + lVar7 * 2;
    *plVar5 = 0;
    *(int *)(plVar5 + 1) = local_30;
    if (local_30 == 0) {
      *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar5,local_30,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*plVar5,_Src,(longlong)local_30 * 2);
    }
  }
  plVar8 = local_58 + (longlong)(int)local_50 * 2;
  local_res8[0] = 0;
  for (plVar5 = local_58; plVar5 != plVar8; plVar5 = plVar5 + 2) {
    if ((int)plVar5[1] == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*plVar5;
    }
    cVar3 = FConfigCacheIni::GetFloat
                      (DAT_1468b6148,L"HMDPluginPriority",puVar9,local_res8,&DAT_1468e2360);
    if (cVar3 != '\0') break;
  }
  uVar1 = local_res8[0];
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  plVar5 = local_58;
  for (iVar4 = (int)local_50; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return uVar1;
}



// FUNCTION 1409030f0 GetNumTrackFormats body=198 status=ok
// SIG undefined GetNumTrackFormats(void)

undefined4 FWmfMediaTracks::GetNumTrackFormats(longlong param_1,int param_2,int param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  }
  if (param_2 == 0) {
    if (-1 < param_3) {
      if (param_3 < *(int *)(param_1 + 0x50)) {
        uVar2 = *(undefined4 *)((longlong)param_3 * 0x68 + 0x28 + *(longlong *)(param_1 + 0x48));
        goto LAB_14090313f;
      }
LAB_14090317a:
      if (-1 < param_3) {
        if (*(int *)(param_1 + 0x130) <= param_3) goto LAB_140903186;
LAB_140903192:
        uVar2 = 1;
        goto LAB_14090313f;
      }
    }
  }
  else {
    if (param_2 == 1) {
LAB_140903186:
      if (param_3 < 0) goto LAB_14090313d;
      if (param_3 < *(int *)(param_1 + 0x90)) goto LAB_140903192;
    }
    else {
      if (param_2 == 2) goto LAB_14090317a;
      if (param_2 != 6) goto LAB_14090313d;
    }
    if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x1a0))) {
      uVar2 = *(undefined4 *)((longlong)param_3 * 0x68 + 0x28 + *(longlong *)(param_1 + 0x198));
      goto LAB_14090313f;
    }
  }
LAB_14090313d:
  uVar2 = 0;
LAB_14090313f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return uVar2;
}



// FUNCTION 1409031c0 GetNumTracks body=131 status=ok
// SIG undefined GetNumTracks(void)

undefined4 FWmfMediaTracks::GetNumTracks(longlong param_1,int param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  }
  if (param_2 == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x50);
  }
  else if (param_2 == 1) {
    uVar2 = *(undefined4 *)(param_1 + 0x90);
  }
  else if (param_2 == 2) {
    uVar2 = *(undefined4 *)(param_1 + 0x130);
  }
  else if (param_2 == 6) {
    uVar2 = *(undefined4 *)(param_1 + 0x1a0);
  }
  else {
    uVar2 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return uVar2;
}



// FUNCTION 140903250 FUN_140903250 body=123 status=ok
// SIG undefined FUN_140903250(void)

undefined8 * FUN_140903250(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146862c50) {
    _Init_thread_header(&DAT_146862c50);
    if (DAT_146862c50 == -1) {
      FName::FName(&DAT_146862c48,L"WmfMedia",1);
      _Init_thread_footer(&DAT_146862c50);
    }
  }
  *param_2 = DAT_146862c48;
  return param_2;
}



// FUNCTION 1409032f0 Num_Implementation body=4 status=ok
// SIG undefined Num_Implementation(void)

undefined4 UNiagaraPreviewAxis_InterpParamBase::Num_Implementation(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



// FUNCTION 140903360 GetStats body=36 status=ok
// SIG undefined GetStats(void)

undefined8 * FWmfMediaPlayer::GetStats(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FWmfMediaTracks::AppendStats(*(undefined8 *)(param_1 + 0x40));
  return param_2;
}



// FUNCTION 1409033a0 GetMaxPlayersPerTeam body=4 status=ok
// SIG undefined GetMaxPlayersPerTeam(void)

undefined4 UPartyBeaconState::GetMaxPlayersPerTeam(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// FUNCTION 1409033b0 GetSupportedRates body=199 status=ok
// SIG undefined GetSupportedRates(void)

undefined8 * FWmfMediaSession::GetSupportedRates(longlong param_1,undefined8 *param_2,int param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar2 = 0xc0;
  if (param_3 != 0) {
    lVar2 = 0xd0;
  }
  *param_2 = 0;
  iVar5 = (int)((longlong *)(lVar2 + param_1))[1];
  lVar2 = *(longlong *)(lVar2 + param_1);
  *(int *)(param_2 + 1) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar5,0);
    puVar3 = (undefined1 *)*param_2;
    puVar4 = (undefined4 *)(lVar2 + 4);
    do {
      *puVar3 = *(undefined1 *)(puVar4 + -1);
      *(undefined4 *)(puVar3 + 4) = *puVar4;
      puVar3[8] = *(undefined1 *)(puVar4 + 1);
      *(undefined4 *)(puVar3 + 0xc) = puVar4[2];
      iVar5 = iVar5 + -1;
      puVar3 = puVar3 + 0x10;
      puVar4 = puVar4 + 4;
    } while (iVar5 != 0);
  }
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 140903480 GetText body=30 status=ok
// SIG undefined GetText(void)

undefined8 FWmfMediaOverlaySample::GetText(longlong param_1,undefined8 param_2)

{
  FText::FText(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 1409034a0 GetTime body=150 status=ok
// SIG undefined GetTime(void)

undefined8 * FWmfMediaSession::GetTime(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  BOOL BVar2;
  int iVar3;
  int local_res8 [4];
  undefined8 local_res18;
  undefined1 local_res20 [8];
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    iVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,0,local_res8);
    if ((-1 < iVar3) && (local_res8[0] != 0)) {
      if (local_res8[0] == 2) {
        *param_2 = *(undefined8 *)(param_1 + 0x60);
        goto LAB_140903521;
      }
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))
                        (*(longlong **)(param_1 + 0x70),0,&local_res18,local_res20);
      if (-1 < iVar3) {
        *param_2 = local_res18;
        goto LAB_140903521;
      }
    }
  }
  *param_2 = 0;
LAB_140903521:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return param_2;
}



// FUNCTION 140903540 GetTopologyFromEvent body=111 status=ok
// SIG undefined GetTopologyFromEvent(void)

int WmfMedia::GetTopologyFromEvent(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  short local_28 [4];
  undefined8 *local_20;
  undefined8 local_18;
  
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_20 = (undefined8 *)0x0;
  local_18 = 0;
  iVar1 = (**(code **)(*param_1 + 0x120))(param_1,local_28);
  if (-1 < iVar1) {
    if (local_28[0] == 0xd) {
      iVar1 = (**(code **)*local_20)(local_20,&DAT_144159960,param_2);
    }
    else {
      iVar1 = -0x7fff0001;
    }
  }
  PropVariantClear((PROPVARIANT *)local_28);
  return iVar1;
}



// FUNCTION 1409035b0 GetTrackDisplayName body=263 status=ok
// SIG undefined GetTrackDisplayName(void)

undefined8
FWmfMediaTracks::GetTrackDisplayName(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  longlong lVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x98);
  lVar2 = (longlong)param_4;
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_3 == 0) {
    if ((-1 < param_4) && (param_4 < *(int *)(param_1 + 0x50))) {
      lVar2 = *(longlong *)(param_1 + 0x48) + lVar2 * 0x68 + 8;
      goto LAB_140903688;
    }
  }
  else if (param_3 == 1) {
    if ((-1 < param_4) && (param_4 < *(int *)(param_1 + 0x90))) {
      lVar2 = *(longlong *)(param_1 + 0x88) + lVar2 * 0x68 + 8;
      goto LAB_140903688;
    }
  }
  else if (param_3 == 2) {
    if ((-1 < param_4) && (param_4 < *(int *)(param_1 + 0x130))) {
      lVar2 = *(longlong *)(param_1 + 0x128) + lVar2 * 0x68 + 8;
      goto LAB_140903688;
    }
  }
  else if (((param_3 == 6) && (-1 < param_4)) && (param_4 < *(int *)(param_1 + 0x1a0))) {
    lVar2 = *(longlong *)(param_1 + 0x198) + lVar2 * 0x68 + 8;
    goto LAB_140903688;
  }
  lVar2 = FUN_1404b03b0();
LAB_140903688:
  FText::FText(param_2,lVar2);
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 1409036c0 FUN_1409036c0 body=227 status=ok
// SIG undefined FUN_1409036c0(void)

undefined4 FUN_1409036c0(longlong param_1,int param_2,int param_3)

{
  BOOL BVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_3;
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  }
  if (param_2 == 0) {
    if (-1 < param_3) {
      if (*(int *)(param_1 + 0x50) <= param_3) goto LAB_140903749;
      lVar3 = lVar3 * 0x68 + *(longlong *)(param_1 + 0x48);
      goto LAB_140903792;
    }
  }
  else {
    if (param_2 == 1) {
LAB_140903762:
      if (param_3 < 0) goto LAB_14090370d;
      if (param_3 < *(int *)(param_1 + 0x90)) {
        lVar3 = lVar3 * 0x68 + *(longlong *)(param_1 + 0x88);
        goto LAB_140903792;
      }
    }
    else {
      if (param_2 == 2) {
LAB_140903749:
        if (param_3 < 0) goto LAB_14090370d;
        if (param_3 < *(int *)(param_1 + 0x130)) {
          lVar3 = lVar3 * 0x68 + *(longlong *)(param_1 + 0x128);
          goto LAB_140903792;
        }
        goto LAB_140903762;
      }
      if (param_2 != 6) goto LAB_14090370d;
    }
    if ((-1 < param_3) && (param_3 < *(int *)(param_1 + 0x1a0))) {
      lVar3 = lVar3 * 0x68 + *(longlong *)(param_1 + 0x198);
LAB_140903792:
      if (lVar3 != 0) {
        uVar2 = *(undefined4 *)(lVar3 + 0x5c);
        goto LAB_140903712;
      }
    }
  }
LAB_14090370d:
  uVar2 = 0xffffffff;
LAB_140903712:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return uVar2;
}



// FUNCTION 1409037b0 GetTrackLanguage body=308 status=ok
// SIG undefined GetTrackLanguage(void)

undefined8 *
FWmfMediaTracks::GetTrackLanguage(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  longlong lVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x98);
  lVar2 = (longlong)param_4;
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_3 == 0) {
    if ((-1 < param_4) && (param_4 < *(int *)(param_1 + 0x50))) {
      FString::FString(param_2,*(longlong *)(param_1 + 0x48) + lVar2 * 0x68 + 0x38);
      goto LAB_1409038bd;
    }
  }
  else if (param_3 == 1) {
    if ((-1 < param_4) && (param_4 < *(int *)(param_1 + 0x90))) {
      FString::FString(param_2,*(longlong *)(param_1 + 0x88) + lVar2 * 0x68 + 0x38);
      goto LAB_1409038bd;
    }
  }
  else if (param_3 == 2) {
    if ((-1 < param_4) && (param_4 < *(int *)(param_1 + 0x130))) {
      FString::FString(param_2,*(longlong *)(param_1 + 0x128) + lVar2 * 0x68 + 0x38);
      goto LAB_1409038bd;
    }
  }
  else if (((param_3 == 6) && (-1 < param_4)) && (param_4 < *(int *)(param_1 + 0x1a0))) {
    FString::FString(param_2,*(longlong *)(param_1 + 0x198) + lVar2 * 0x68 + 0x38);
    goto LAB_1409038bd;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1409038bd:
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 1409038f0 GetTrackName body=308 status=ok
// SIG undefined GetTrackName(void)

undefined8 *
FWmfMediaTracks::GetTrackName(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  longlong lVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x98);
  lVar2 = (longlong)param_4;
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (param_3 == 0) {
    if ((-1 < param_4) && (param_4 < *(int *)(param_1 + 0x50))) {
      FString::FString(param_2,*(longlong *)(param_1 + 0x48) + lVar2 * 0x68 + 0x48);
      goto LAB_1409039fd;
    }
  }
  else if (param_3 == 1) {
    if ((-1 < param_4) && (param_4 < *(int *)(param_1 + 0x90))) {
      FString::FString(param_2,*(longlong *)(param_1 + 0x88) + lVar2 * 0x68 + 0x48);
      goto LAB_1409039fd;
    }
  }
  else if (param_3 == 2) {
    if ((-1 < param_4) && (param_4 < *(int *)(param_1 + 0x130))) {
      FString::FString(param_2,*(longlong *)(param_1 + 0x128) + lVar2 * 0x68 + 0x48);
      goto LAB_1409039fd;
    }
  }
  else if (((param_3 == 6) && (-1 < param_4)) && (param_4 < *(int *)(param_1 + 0x1a0))) {
    FString::FString(param_2,*(longlong *)(param_1 + 0x198) + lVar2 * 0x68 + 0x48);
    goto LAB_1409039fd;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1409039fd:
  LeaveCriticalSection(lpCriticalSection);
  return param_2;
}



// FUNCTION 140903a40 FUN_140903a40 body=30 status=ok
// SIG undefined FUN_140903a40(void)

undefined8 FUN_140903a40(longlong param_1,undefined8 param_2)

{
  FString::FString(param_2,param_1 + 0x28);
  return param_2;
}



// FUNCTION 140903a60 GetVideoTrackFormat body=225 status=ok
// SIG undefined GetVideoTrackFormat(void)

undefined8
FWmfMediaTracks::GetVideoTrackFormat(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  BOOL BVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  }
  if ((((param_2 < 0) || (*(int *)(param_1 + 0x1a0) <= param_2)) ||
      (lVar2 = (longlong)param_2 * 0x68 + *(longlong *)(param_1 + 0x198), param_3 < 0)) ||
     ((*(int *)(lVar2 + 0x28) <= param_3 ||
      (lVar2 = (longlong)param_3 * 0x70 + *(longlong *)(lVar2 + 0x20), lVar2 == 0)))) {
    uVar3 = 0;
  }
  else {
    *param_4 = *(undefined4 *)(lVar2 + 0x60);
    param_4[1] = *(undefined4 *)(lVar2 + 100);
    param_4[2] = *(undefined4 *)(lVar2 + 0x4c);
    *(undefined1 *)(param_4 + 3) = *(undefined1 *)(lVar2 + 0x50);
    param_4[4] = *(undefined4 *)(lVar2 + 0x54);
    *(undefined1 *)(param_4 + 5) = *(undefined1 *)(lVar2 + 0x58);
    param_4[6] = *(undefined4 *)(lVar2 + 0x5c);
    FString::operator=(param_4 + 8,lVar2 + 0x10);
    uVar3 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return uVar3;
}



// FUNCTION 140903b50 GuidToString body=156 status=ok
// SIG undefined GuidToString(void)

undefined8 WmfMedia::GuidToString(undefined8 param_1,undefined4 *param_2)

{
  FString::PrintfImpl(param_1,L"%08x-%04x-%04x-%02x%02x%02x%02x%02x%02x%02x%02x",*param_2,
                      *(undefined2 *)(param_2 + 1),*(undefined2 *)((longlong)param_2 + 6),
                      *(undefined1 *)(param_2 + 2),*(undefined1 *)((longlong)param_2 + 9),
                      *(undefined1 *)((longlong)param_2 + 10),
                      *(undefined1 *)((longlong)param_2 + 0xb),*(undefined1 *)(param_2 + 3),
                      *(undefined1 *)((longlong)param_2 + 0xd),
                      *(undefined1 *)((longlong)param_2 + 0xe),
                      *(undefined1 *)((longlong)param_2 + 0xf));
  return param_1;
}



// FUNCTION 140903bf0 FUN_140903bf0 body=820 status=ok
// SIG undefined FUN_140903bf0(void)

void FUN_140903bf0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  longlong *plVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  LPCRITICAL_SECTION lpCriticalSection_00;
  longlong lVar8;
  BOOL BVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *local_48;
  longlong *plStack_40;
  undefined8 *local_38;
  longlong *plStack_30;
  
  if (param_2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa0);
    BVar9 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar9 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar10 = *(int *)(param_1 + 0x148);
    if ((-1 < iVar10) && (iVar10 < *(int *)(param_1 + 0x58))) {
      lVar12 = (longlong)iVar10 * 0x68 + *(longlong *)(param_1 + 0x50);
      iVar5 = *(int *)(lVar12 + 0x5c);
      if (((-1 < iVar10) &&
          (((iVar10 < *(int *)(param_1 + 0x58) && (-1 < iVar5)) && (iVar5 < *(int *)(lVar12 + 0x28))
           ))) && (lVar12 = (longlong)iVar5 * 0x70 + *(longlong *)(lVar12 + 0x20), lVar12 != 0)) {
        puVar1 = (undefined8 *)(param_1 + 0x20);
        iVar10 = (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(puVar1);
        if (iVar10 < 0x200) {
          iVar10 = *(int *)(lVar12 + 0x28);
          iVar5 = *(int *)(lVar12 + 0x24);
          plVar13 = *(longlong **)(param_1 + 0x10);
          puVar11 = (undefined8 *)0x0;
          lpCriticalSection_00 = (LPCRITICAL_SECTION)*plVar13;
          BVar9 = TryEnterCriticalSection(lpCriticalSection_00);
          if (BVar9 == 0) {
            EnterCriticalSection(lpCriticalSection_00);
          }
          if (0 < lpCriticalSection_00[1].LockCount) {
            puVar11 = *(undefined8 **)
                       ((longlong)lpCriticalSection_00[1].DebugInfo +
                       (longlong)lpCriticalSection_00[1].LockCount * 8 + -8);
            lpCriticalSection_00[1].LockCount = lpCriticalSection_00[1].LockCount + -1;
          }
          LeaveCriticalSection(lpCriticalSection_00);
          if (puVar11 == (undefined8 *)0x0) {
            puVar11 = (undefined8 *)operator_new(0x40);
            if (puVar11 == (undefined8 *)0x0) {
              puVar11 = (undefined8 *)0x0;
            }
            else {
              *puVar11 = &PTR_Bytes_144159540;
              puVar11[1] = &PTR_StartProfileThreadUsage_144159580;
              puVar11[2] = 0;
              puVar11[3] = 0;
              *(undefined4 *)(puVar11 + 4) = 0;
              puVar11[5] = 0;
              *(undefined4 *)(puVar11 + 6) = 0;
              puVar11[7] = 0;
            }
          }
          (**(code **)puVar11[1])(puVar11 + 1);
          lVar8 = *plVar13;
          plVar13 = (longlong *)plVar13[1];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
            UNLOCK();
          }
          plStack_40 = (longlong *)operator_new(0x28);
          if (plStack_40 != (longlong *)0x0) {
            plStack_40[2] = lVar8;
            plStack_40[3] = (longlong)plVar13;
            plVar13 = (longlong *)0x0;
            *(undefined4 *)(plStack_40 + 1) = 1;
            *(undefined4 *)((longlong)plStack_40 + 0xc) = 1;
            *plStack_40 = (longlong)&PTR_FUN_144159b28;
            plStack_40[4] = (longlong)puVar11;
          }
          local_48 = puVar11;
          SharedPointerInternals::EnableSharedFromThis(&local_48,puVar11,puVar11);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
          puVar11 = local_48;
          uVar6 = *(undefined4 *)(lVar12 + 0x28);
          uVar7 = *(undefined4 *)(lVar12 + 0x24);
          if (param_3 != 0) {
            *(undefined4 *)(local_48 + 3) = 0;
            if (*(int *)((longlong)local_48 + 0x1c) < (int)param_3) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeTo(local_48 + 2,param_3);
            }
            TArray<unsigned_char,FDefaultAllocator>::Append(puVar11 + 2,param_2,param_3);
            *(undefined4 *)(puVar11 + 6) = uVar6;
            puVar11[7] = param_5;
            *(undefined4 *)(puVar11 + 4) = uVar7;
            puVar11[5] = ((ulonglong)param_3 * 10000000) / ((ulonglong)(uint)(iVar10 * iVar5) * 2);
            local_38 = local_48;
            plStack_30 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
              UNLOCK();
            }
            (**(code **)*puVar1)(puVar1,&local_38);
            plVar13 = plStack_30;
            if (plStack_30 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_30 + 1;
              lVar12 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*plStack_30)(plStack_30);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                iVar10 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar13 + 8))(plVar13,1);
                }
              }
            }
          }
          plVar13 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar3 = plStack_40 + 1;
            lVar12 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*plStack_40)(plStack_40);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              iVar10 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar10 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 140903f30 HandleMediaSamplerCaptionSample body=370 status=ok
// SIG undefined HandleMediaSamplerCaptionSample(void)

void FWmfMediaTracks::HandleMediaSamplerCaptionSample
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  BOOL BVar7;
  int iVar8;
  longlong *local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  if (param_2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa0);
    BVar7 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar7 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if ((-1 < *(int *)(param_1 + 0x14c)) && (*(int *)(param_1 + 0x14c) < *(int *)(param_1 + 0x98)))
    {
      puVar1 = (undefined8 *)(param_1 + 0x60);
      iVar8 = (**(code **)(*(longlong *)(param_1 + 0x60) + 8))(puVar1);
      if (iVar8 < 0x100) {
        plStack_20 = (longlong *)
                     SharedPointerInternals::NewIntrusiveReferenceController<FWmfMediaOverlaySample>
                               ();
        local_28 = plStack_20 + 2;
        SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
        cVar6 = FUN_1409048f0(local_28,param_2,param_5,param_4);
        if (cVar6 != '\0') {
          local_18 = local_28;
          plStack_10 = plStack_20;
          if (plStack_20 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
            UNLOCK();
          }
          (**(code **)*puVar1)(puVar1,&local_18);
          plVar5 = plStack_10;
          if (plStack_10 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_10 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plStack_10)(plStack_10);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              iVar8 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar8 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
        }
        plVar5 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_20 + 1;
          lVar4 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_20)(plStack_20);
            LOCK();
            piVar3 = (int *)((longlong)plVar5 + 0xc);
            iVar8 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1409040b0 FUN_1409040b0 body=523 status=ok
// SIG undefined FUN_1409040b0(void)

void FUN_1409040b0(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  longlong lVar3;
  BOOL BVar4;
  int iVar5;
  longlong *plVar6;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  
  if (param_2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa0);
    BVar4 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar4 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    if ((-1 < *(int *)(param_1 + 0x150)) && (*(int *)(param_1 + 0x150) < *(int *)(param_1 + 0x138)))
    {
      plVar2 = (longlong *)(param_1 + 0x100);
      iVar5 = (**(code **)(*plVar2 + 8))(plVar2);
      if (iVar5 < 0x100) {
        plVar6 = (longlong *)operator_new(0x38);
        plStack_40 = (longlong *)0x0;
        if (plVar6 != (longlong *)0x0) {
          *(undefined4 *)(plVar6 + 1) = 1;
          *plVar6 = (longlong)&PTR_DestroyObject_1441599b8;
          *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
          plVar6[2] = (longlong)&PTR_GetBoundProgramCounterForTimerManager_1441595c0;
          plVar6[3] = 0;
          plVar6[4] = 0;
          plVar6[5] = 0;
          plVar6[6] = 0;
          plStack_40 = plVar6;
        }
        local_48 = plStack_40 + 2;
        SharedPointerInternals::EnableSharedFromThis(&local_48,local_48,local_48);
        plVar6 = local_48;
        if (param_3 != 0) {
          *(undefined4 *)(local_48 + 2) = 0;
          if (*(int *)((longlong)local_48 + 0x14) < param_3) {
            TArray<unsigned_char,FDefaultAllocator>::ResizeTo(local_48 + 1,param_3);
          }
          TArray<unsigned_char,FDefaultAllocator>::Append(plVar6 + 1,param_2,param_3);
          plVar6[4] = param_5;
          plVar6[3] = param_4;
          local_38 = local_48;
          plStack_30 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
            UNLOCK();
          }
          (**(code **)*plVar2)(plVar2,&local_38);
          plVar2 = plStack_30;
          if (plStack_30 != (longlong *)0x0) {
            LOCK();
            plVar6 = plStack_30 + 1;
            lVar3 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar3 == 1) {
              (**(code **)*plStack_30)(plStack_30);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
        }
        plVar2 = plStack_40;
        if (plStack_40 != (longlong *)0x0) {
          LOCK();
          plVar6 = plStack_40 + 1;
          lVar3 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*plStack_40)(plStack_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar5 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 1409042c0 FUN_1409042c0 body=957 status=ok
// SIG undefined FUN_1409042c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409042c0(longlong param_1,longlong param_2,uint param_3,longlong param_4,
                  undefined8 param_5)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  LPCRITICAL_SECTION lpCriticalSection_00;
  BOOL BVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  float fVar11;
  undefined8 *local_48;
  longlong *plStack_40;
  undefined8 *local_38;
  longlong *plStack_30;
  
  if (param_2 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xa0);
    BVar5 = TryEnterCriticalSection(lpCriticalSection);
    if (BVar5 == 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar6 = *(int *)(param_1 + 0x154);
    if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x1a8))) {
      lVar9 = *(longlong *)(param_1 + 0x1a0);
      lVar8 = (longlong)iVar6 * 0x68;
      iVar3 = *(int *)(lVar8 + 0x5c + lVar9);
      if ((-1 < iVar6) &&
         ((((iVar6 < *(int *)(param_1 + 0x1a8) && (-1 < iVar3)) &&
           (iVar3 < *(int *)(lVar8 + 0x28 + lVar9))) &&
          ((lVar9 = (longlong)iVar3 * 0x70 + *(longlong *)(lVar8 + 0x20 + lVar9), lVar9 != 0 &&
           ((uint)(*(int *)(lVar9 + 0x34) * *(int *)(lVar9 + 0x38)) <= param_3)))))) {
        plVar2 = (longlong *)(param_1 + 0x170);
        iVar6 = (**(code **)(*plVar2 + 8))(plVar2);
        if (iVar6 < 8) {
          if (param_4 == 0) {
            fVar11 = *(float *)(lVar9 + 0x4c);
            if (fVar11 <= 0.0) {
              fVar11 = 30.0;
            }
            param_4 = (longlong)(1e+07 / fVar11);
          }
          plVar4 = *(longlong **)(param_1 + 0x160);
          puVar7 = (undefined8 *)0x0;
          lpCriticalSection_00 = (LPCRITICAL_SECTION)*plVar4;
          BVar5 = TryEnterCriticalSection(lpCriticalSection_00);
          if (BVar5 == 0) {
            EnterCriticalSection(lpCriticalSection_00);
          }
          if (0 < lpCriticalSection_00[1].LockCount) {
            puVar7 = *(undefined8 **)
                      ((longlong)lpCriticalSection_00[1].DebugInfo +
                      (longlong)lpCriticalSection_00[1].LockCount * 8 + -8);
            lpCriticalSection_00[1].LockCount = lpCriticalSection_00[1].LockCount + -1;
          }
          LeaveCriticalSection(lpCriticalSection_00);
          if (puVar7 == (undefined8 *)0x0) {
            puVar7 = (undefined8 *)operator_new();
            if (puVar7 == (undefined8 *)0x0) {
              puVar7 = (undefined8 *)0x0;
            }
            else {
              *puVar7 = &PTR_Bytes_144159710;
              puVar7[1] = &PTR_StartProfileThreadUsage_144159778;
              puVar7[2] = 0;
              puVar7[3] = 0;
              puVar7[4] = _DAT_1468b5ca0;
              puVar7[5] = 0;
              puVar7[6] = _DAT_1468b5ca0;
              puVar7[7] = 0;
              puVar7[8] = 0;
            }
          }
          (**(code **)puVar7[1])(puVar7 + 1);
          plVar10 = (longlong *)plVar4[1];
          lVar8 = *plVar4;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
          }
          plStack_40 = (longlong *)operator_new(0x28);
          if (plStack_40 != (longlong *)0x0) {
            plStack_40[2] = lVar8;
            plStack_40[3] = (longlong)plVar10;
            plVar10 = (longlong *)0x0;
            *plStack_40 = (longlong)&PTR_FUN_144159b18;
            *(undefined4 *)(plStack_40 + 1) = 1;
            *(undefined4 *)((longlong)plStack_40 + 0xc) = 1;
            plStack_40[4] = (longlong)puVar7;
          }
          local_48 = puVar7;
          SharedPointerInternals::EnableSharedFromThis(&local_48,puVar7,puVar7);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
          puVar7 = local_48;
          iVar6 = *(int *)(lVar9 + 0x68);
          if (((iVar6 != 0) && (param_3 != 0)) &&
             ((iVar3 = *(int *)(lVar9 + 0x38), iVar3 != 0 &&
              ((uint)(iVar3 * *(int *)(lVar9 + 0x34)) <= param_3)))) {
            *(undefined4 *)(local_48 + 3) = 0;
            if (*(int *)((longlong)local_48 + 0x1c) < (int)param_3) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeTo(local_48 + 2,param_3);
            }
            TArray<unsigned_char,FDefaultAllocator>::Append(puVar7 + 2,param_2,param_3);
            puVar7[5] = param_4;
            *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(lVar9 + 0x30);
            *(undefined4 *)((longlong)puVar7 + 0x24) = *(undefined4 *)(lVar9 + 0x34);
            *(undefined4 *)(puVar7 + 6) = *(undefined4 *)(lVar9 + 0x60);
            *(undefined4 *)((longlong)puVar7 + 0x34) = *(undefined4 *)(lVar9 + 100);
            *(int *)(puVar7 + 7) = iVar6;
            *(int *)((longlong)puVar7 + 0x3c) = iVar3;
            puVar7[8] = param_5;
            local_38 = local_48;
            plStack_30 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
              UNLOCK();
            }
            (**(code **)*plVar2)(plVar2,&local_38);
            plVar2 = plStack_30;
            if (plStack_30 != (longlong *)0x0) {
              LOCK();
              plVar4 = plStack_30 + 1;
              lVar9 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar9 == 1) {
                (**(code **)*plStack_30)(plStack_30);
                LOCK();
                piVar1 = (int *)((longlong)plVar2 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar2 + 8))(plVar2,1);
                }
              }
            }
          }
          plVar2 = plStack_40;
          if (plStack_40 != (longlong *)0x0) {
            LOCK();
            plVar4 = plStack_40 + 1;
            lVar9 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar9 == 1) {
              (**(code **)*plStack_40)(plStack_40);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2,1);
              }
            }
          }
        }
      }
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}



// FUNCTION 140904680 HandleSessionEnded body=165 status=ok
// SIG undefined HandleSessionEnded(void)

void FWmfMediaSession::HandleSessionEnded(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  undefined8 local_res10 [3];
  
  puVar2 = (undefined8 *)operator_new();
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 5;
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    *puVar1 = puVar2;
  }
  *(undefined4 *)(param_1 + 0xbc) = 5;
  if (*(char *)(param_1 + 0xc0) != '\0') {
    if (0.0 < *(float *)(param_1 + 0xb8) || *(float *)(param_1 + 0xb8) == 0.0) {
      local_res10[0] = 0;
      puVar2 = local_res10;
    }
    else {
      local_res8 = *(undefined8 *)(param_1 + 0x40);
      puVar2 = &local_res8;
    }
    if (puVar2 != (undefined8 *)(param_1 + 0xa8)) {
      *(undefined8 *)(param_1 + 0xa8) = *puVar2;
      *(undefined1 *)(param_1 + 0xb0) = 1;
    }
    FUN_140901400(param_1);
    return;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  return;
}



// FUNCTION 140904730 HandleSessionTopologyStatus body=443 status=ok
// SIG undefined HandleSessionTopologyStatus(void)

void FWmfMediaSession::HandleSessionTopologyStatus(longlong param_1,int param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  int local_res18 [2];
  longlong *local_res20;
  short local_38 [4];
  undefined8 *local_30;
  undefined8 local_28;
  
  local_res18[0] = 0;
  iVar2 = (**(code **)(*param_3 + 0x38))(param_3,&DAT_145dc7a20,local_res18);
  if (-1 < iVar2) {
    local_res20 = (longlong *)0x0;
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    local_38[3] = 0;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    iVar2 = (**(code **)(*param_3 + 0x120))(param_3,local_38);
    if (-1 < iVar2) {
      if (local_38[0] == 0xd) {
        iVar2 = (**(code **)*local_30)(local_30,&DAT_144159960,&local_res20);
      }
      else {
        iVar2 = -0x7fff0001;
      }
    }
    PropVariantClear((PROPVARIANT *)local_38);
    if ((-1 < iVar2) && (local_res20 == *(longlong **)(param_1 + 0x48))) {
      if (*(int *)(param_1 + 0xbc) == 1) {
        DiscardPendingChanges(param_1);
      }
      else if (param_2 < 0) {
        if (*(int *)(param_1 + 0xbc) == 4) {
          *(undefined4 *)(param_1 + 0xbc) = 1;
          puVar3 = (undefined8 *)operator_new(0x10);
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            *(undefined4 *)(puVar3 + 1) = 4;
            puVar1 = *(undefined8 **)(param_1 + 0x50);
            *(undefined8 **)(param_1 + 0x50) = puVar3;
            *puVar1 = puVar3;
          }
        }
        DiscardPendingChanges(param_1);
      }
      else if (local_res18[0] == 100) {
        FUN_14090da60(param_1);
        if (*(int *)(param_1 + 0xbc) == 4) {
          *(undefined4 *)(param_1 + 0xbc) = 5;
          puVar3 = (undefined8 *)operator_new(0x10);
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            *(undefined4 *)(puVar3 + 1) = 3;
            puVar1 = *(undefined8 **)(param_1 + 0x50);
            *(undefined8 **)(param_1 + 0x50) = puVar3;
            *puVar1 = puVar3;
          }
        }
        else if ((*(int *)(param_1 + 0xbc) == 2) && (*(char *)(param_1 + 0xb0) == '\0')) {
          if ((undefined8 *)(param_1 + 0xa8) != &DAT_146287740) {
            if (*(char *)(param_1 + 0xb0) != '\0') {
              *(undefined1 *)(param_1 + 0xb0) = 0;
            }
            *(undefined8 *)(param_1 + 0xa8) = DAT_146287740;
            *(undefined1 *)(param_1 + 0xb0) = 1;
          }
          *(undefined1 *)(param_1 + 0x70) = 1;
        }
        FUN_140901400(param_1);
      }
    }
    if (local_res20 != (longlong *)0x0) {
      (**(code **)(*local_res20 + 0x10))();
    }
  }
  return;
}



// FUNCTION 1409048f0 FUN_1409048f0 body=1340 status=ok
// SIG undefined FUN_1409048f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1409048f0(longlong param_1,longlong param_2,wchar_t *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined2 *puVar13;
  int iVar14;
  uint uVar15;
  wchar_t *pwVar16;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  undefined8 local_1e0;
  undefined2 *local_1d8;
  ulonglong local_1d0;
  wchar_t *local_1c8;
  int local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  longlong local_1b0 [2];
  wchar_t *local_1a0;
  int local_198;
  undefined4 local_194;
  undefined1 local_190 [8];
  longlong *local_188;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [256];
  longlong local_68;
  short *local_60;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if (param_2 == 0) {
    uVar8 = 0;
  }
  else {
    local_1e8 = 0;
    local_1e0 = 0;
    local_1c8 = param_3;
    local_1b8 = param_1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146862c68) &&
       (_Init_thread_header(&DAT_146862c68), DAT_146862c68 == -1)) {
      local_1b0[0] = 0;
      local_1b0[1] = 0x2d;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_1b0,0);
      FGenericPlatformString::Memcpy
                (local_1b0[0],L"<(?:[^>=]|=\'[^\']*\'|=\"[^\"]*\"|=[^\'\"][^\\s>]*)*>",0x5a);
      FUN_1415cd4d0(&DAT_146862c58,local_1b0);
      if (local_1b0[0] != 0) {
        FMemory::Free();
      }
      atexit(FUN_143e44e80);
      _Init_thread_footer(&DAT_146862c68);
    }
    TStringConversion<TStringConvert<char,wchar_t>,128>::
    TStringConversion<TStringConvert<char,wchar_t>,128>(local_168,param_2);
    local_1d8 = (undefined2 *)0x0;
    local_1d0 = 0;
    if ((local_60 != (short *)0x0) && (*local_60 != 0)) {
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (local_60[lVar12] != 0);
      uVar9 = (int)lVar12 + 1;
      local_1d0 = (ulonglong)uVar9;
      if (0 < (int)uVar9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
      }
      FGenericPlatformString::Memcpy(local_1d8,local_60,(longlong)(int)uVar9 * 2);
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    FUN_1415cd370(local_190,&DAT_146862c58,&local_1d8);
    uVar9 = 0xffffffff;
    cVar5 = FUN_1415d6d60(local_190);
    if (cVar5 != '\0') {
      do {
        if (uVar9 != 0xffffffff) {
          uVar6 = FUN_1415dc140(local_190);
          uVar15 = (int)local_1d0 - 1;
          if ((int)local_1d0 == 0) {
            uVar15 = 0;
          }
          if (uVar9 < uVar15) {
            uVar15 = uVar9;
          }
          uVar9 = (int)local_1d0 - 1;
          if ((int)local_1d0 == 0) {
            uVar9 = 0;
          }
          uVar10 = uVar15;
          if ((uVar15 <= uVar6) && (uVar10 = uVar9, uVar6 < uVar9)) {
            uVar10 = uVar6;
          }
          puVar13 = &DAT_143f3eda8;
          if ((int)local_1d0 != 0) {
            puVar13 = local_1d8;
          }
          iVar11 = uVar10 - uVar15;
          local_1a0 = (wchar_t *)0x0;
          local_194 = 0;
          iVar14 = iVar11 + 1;
          if (iVar11 == 0) {
            iVar14 = 0;
          }
          pwVar16 = local_1a0;
          local_198 = iVar14;
          if ((0 < iVar14) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,0), iVar14 = local_198,
             pwVar16 = local_1a0, 0 < local_198)) {
            wcsncpy(local_1a0,puVar13 + (int)uVar15,(longlong)iVar11);
            pwVar16[iVar11] = L'\0';
          }
          uVar4 = local_1e0;
          if ((iVar14 != 0) && (iVar14 = iVar14 + -1, iVar14 != 0)) {
            iVar11 = (int)local_1e0;
            lVar12 = (longlong)(int)local_1e0;
            iVar7 = (uint)((int)local_1e0 == 0) + (int)local_1e0 + iVar14;
            local_1e0 = CONCAT44(local_1e0._4_4_,iVar7);
            if (local_1e0._4_4_ < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,uVar4 & 0xffffffff);
            }
            pvVar3 = (void *)(local_1e8 + (lVar12 - (ulonglong)(iVar11 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar3,pwVar16,(longlong)iVar14 * 2);
            *(undefined2 *)((longlong)iVar14 * 2 + (longlong)pvVar3) = 0;
          }
          if (pwVar16 != (wchar_t *)0x0) {
            FMemory::Free(pwVar16);
          }
        }
        uVar9 = FUN_1415dc1f0(local_190);
        cVar5 = FUN_1415d6d60(local_190);
        param_3 = local_1c8;
      } while (cVar5 != '\0');
      param_1 = local_1b8;
      if (-1 < (int)uVar9) {
        uVar15 = uVar9 + 0x7fffffff;
        uVar6 = (int)local_1d0 - 1;
        if ((int)local_1d0 == 0) {
          uVar6 = 0;
        }
        if (uVar9 < uVar6) {
          uVar6 = uVar9;
        }
        uVar9 = (int)local_1d0 - 1;
        if ((int)local_1d0 == 0) {
          uVar9 = 0;
        }
        uVar10 = uVar6;
        if ((uVar6 <= uVar15) && (uVar10 = uVar9, uVar15 < uVar9)) {
          uVar10 = uVar15;
        }
        puVar13 = &DAT_143f3eda8;
        if ((int)local_1d0 != 0) {
          puVar13 = local_1d8;
        }
        iVar11 = uVar10 - uVar6;
        local_1c8 = (wchar_t *)0x0;
        local_1bc = 0;
        pwVar16 = (wchar_t *)0x0;
        iVar14 = iVar11 + 1;
        if (iVar11 == 0) {
          iVar14 = 0;
        }
        local_1c0 = iVar14;
        if ((0 < iVar14) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0), iVar14 = local_1c0,
           pwVar16 = local_1c8, 0 < local_1c0)) {
          wcsncpy(local_1c8,puVar13 + (int)uVar6,(longlong)iVar11);
          pwVar16[iVar11] = L'\0';
        }
        uVar4 = local_1e0;
        if ((iVar14 != 0) && (iVar14 = iVar14 + -1, iVar14 != 0)) {
          iVar11 = (int)local_1e0;
          lVar12 = (longlong)(int)local_1e0;
          iVar7 = (uint)((int)local_1e0 == 0) + (int)local_1e0 + iVar14;
          local_1e0 = CONCAT44(local_1e0._4_4_,iVar7);
          if (local_1e0._4_4_ < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,uVar4 & 0xffffffff);
          }
          pvVar3 = (void *)(local_1e8 + (lVar12 - (ulonglong)(iVar11 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar3,pwVar16,(longlong)iVar14 * 2);
          *(undefined2 *)((longlong)pvVar3 + (longlong)iVar14 * 2) = 0;
        }
        param_1 = local_1b8;
        if (pwVar16 != (wchar_t *)0x0) {
          FMemory::Free(pwVar16);
          param_1 = local_1b8;
        }
      }
    }
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_188 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar2 = (int *)((longlong)local_188 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_188 + 8))(local_188,1);
        }
      }
    }
    if (local_1d8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    lVar12 = 0x7fffffffffffffff;
    if (-1 < param_4) {
      lVar12 = param_4;
    }
    *(longlong *)(param_1 + 8) = lVar12;
    uVar8 = FText::FromString(local_180,&local_1e8);
    FText::operator=(param_1 + 0x10,uVar8);
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_178 + 1;
      lVar12 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar2 = (int *)((longlong)local_178 + 0xc);
        iVar14 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
    *(wchar_t **)(param_1 + 0x28) = param_3;
    if (local_1e8 != 0) {
      FMemory::Free();
    }
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 140904e30 Initialize body=238 status=ok
// SIG undefined Initialize(void)

undefined8 FWmfMediaSession::Initialize(longlong param_1,char param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  HRESULT HVar2;
  BOOL BVar3;
  int iVar4;
  undefined8 uVar5;
  IMFAttributes *local_res18 [2];
  
  Shutdown();
  local_res18[0] = (IMFAttributes *)0x0;
  HVar2 = ::_guard_xfg_dispatch_icall_nop(local_res18,2);
  if (HVar2 < 0) {
    uVar5 = 0;
    goto LAB_140904eff;
  }
  if (param_2 != '\0') {
    cVar1 = FWindowsPlatformMisc::VerifyWindowsVersion(6);
    if (cVar1 != '\0') {
      (*local_res18[0]->lpVtbl->SetUINT32)(local_res18[0],(GUID *)&DAT_144155808,1);
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x18);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar4 = ::_guard_xfg_dispatch_icall_nop(local_res18[0],param_1 + 0x60);
  if (iVar4 < 0) {
LAB_140904eee:
    uVar5 = 0;
  }
  else {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))
                      (*(longlong **)(param_1 + 0x60),param_1,0);
    if (iVar4 < 0) goto LAB_140904eee;
    *(undefined4 *)(param_1 + 0xbc) = 4;
    uVar5 = 1;
  }
  LeaveCriticalSection(lpCriticalSection);
LAB_140904eff:
  if (local_res18[0] != (IMFAttributes *)0x0) {
    (*local_res18[0]->lpVtbl->Release)(local_res18[0]);
  }
  return uVar5;
}



// FUNCTION 140904f20 FUN_140904f20 body=466 status=ok
// SIG undefined FUN_140904f20(void)

void FUN_140904f20(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined1 uVar3;
  BOOL BVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int local_res8 [2];
  longlong *local_res10;
  
  FWmfMediaTracks::Shutdown();
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  }
  *(undefined1 *)(param_1 + 0xf0) = 1;
  *(undefined1 *)(param_1 + 0x158) = 1;
  if (param_2 != (longlong *)0x0) {
    local_res10 = (longlong *)0x0;
    iVar5 = (**(code **)(*param_2 + 0x40))(param_2,&local_res10);
    if (-1 < iVar5) {
      local_res8[0] = 0;
      iVar5 = (**(code **)(*local_res10 + 0x108))(local_res10,local_res8);
      if (-1 < iVar5) {
        if (*(longlong **)(param_1 + 0xe8) != param_2) {
          (**(code **)(*param_2 + 8))(param_2);
          if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
          }
          *(longlong **)(param_1 + 0xe8) = param_2;
        }
        FString::operator=(param_1 + 0xd8,param_3);
        plVar7 = *(longlong **)(param_1 + 0x140);
        if (plVar7 != local_res10) {
          if (local_res10 != (longlong *)0x0) {
            (**(code **)(*local_res10 + 8))(local_res10);
            plVar7 = *(longlong **)(param_1 + 0x140);
          }
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 0x10))();
          }
          *(longlong **)(param_1 + 0x140) = local_res10;
        }
        uVar3 = FString::StartsWith(param_3,L"vidcap://",1);
        iVar5 = local_res8[0] + -1;
        if (-1 < iVar5) {
          plVar7 = (longlong *)(param_1 + 200);
          do {
            FUN_1408fd040(param_1,iVar5,uVar3,plVar7);
            iVar2 = *(int *)(param_1 + 0xd0);
            iVar6 = (2 - (uint)(iVar2 != 0)) + iVar2;
            *(int *)(param_1 + 0xd0) = iVar6;
            if (*(int *)(param_1 + 0xd4) < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar7,iVar2);
            }
            iVar5 = iVar5 + -1;
            puVar1 = (undefined2 *)(*plVar7 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
            *puVar1 = 10;
            puVar1[1] = 0;
          } while (-1 < iVar5);
        }
      }
    }
    if (local_res10 != (longlong *)0x0) {
      (**(code **)(*local_res10 + 0x10))();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 140905100 InitializeModule body=83 status=ok
// SIG undefined InitializeModule(void)

undefined8 * FStaticallyLinkedModuleRegistrant<FWmfMediaModule>::InitializeModule(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_144159078;
  puVar1[1] = &PTR_LAB_144159090;
  puVar2 = puVar1 + 1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



// FUNCTION 140905160 FUN_140905160 body=583 status=ok
// SIG undefined FUN_140905160(void)

undefined1 FUN_140905160(longlong param_1,undefined8 *param_2,undefined8 param_3,byte param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  undefined1 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong local_108 [2];
  byte local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined1 local_e0 [8];
  longlong *local_d8;
  undefined1 *local_c8 [2];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  code *local_78 [6];
  undefined8 local_48;
  undefined4 local_38;
  
  plVar9 = (longlong *)UWmfMediaSettings::GetPrivateStaticClass();
  lVar10 = plVar9[0x1f];
  if (lVar10 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar10 = plVar9[0x1f];
  }
  cVar7 = FWmfMediaSession::Initialize
                    (*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(lVar10 + 0x29));
  uVar8 = 0;
  if (cVar7 != '\0') {
    FString::operator=(param_1 + 0x28,param_3);
    local_f0 = *(undefined8 *)(param_1 + 0x40);
    plVar9 = *(longlong **)(param_1 + 0x48);
    local_48 = 0;
    local_38 = 0;
    local_78[0] = AK::MemoryMgr::StartProfileThreadUsage;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
    }
    uVar4 = *param_2;
    plVar5 = (longlong *)param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    FString::FString(local_108,param_3);
    local_98 = 0;
    local_88 = 0;
    local_f8 = param_4;
    local_e8 = plVar9;
    puVar11 = (undefined8 *)FUN_140438ef0(0x40,local_b8);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &PTR_CopyToEmptyStorage_144159990;
      puVar11[1] = uVar4;
      puVar11[2] = plVar5;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      FString::FString(puVar11 + 3,local_108);
      *(byte *)(puVar11 + 5) = local_f8;
      puVar11[6] = local_f0;
      puVar11[7] = local_e8;
      plVar9 = (longlong *)0x0;
    }
    local_c8[0] = &LAB_140900090;
    FUN_1408edc50(local_e0,(param_4 ^ 1) + 1,local_c8,local_78);
    plVar6 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d8 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_d8 + 8))(local_d8,1);
        }
      }
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
    if (local_108[0] != 0) {
      FMemory::Free();
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar5 + 1;
      lVar10 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    uVar8 = 1;
  }
  return uVar8;
}



// FUNCTION 1409053b0 Invoke body=239 status=ok
// SIG undefined Invoke(void)

undefined8 FWmfMediaByteStream::Invoke(longlong param_1,longlong *param_2)

{
  IUnknown *pIVar1;
  int iVar2;
  HRESULT HVar3;
  uint local_res10 [2];
  IMFAsyncResult *local_res18;
  IUnknown *local_res20;
  longlong *local_18 [2];
  
  local_18[0] = (longlong *)0x0;
  iVar2 = (**(code **)(*param_2 + 0x18))(param_2,local_18);
  if (-1 < iVar2) {
    local_res18 = (IMFAsyncResult *)0x0;
    iVar2 = (**(code **)*local_18[0])(local_18[0],&DAT_1441598a0,&local_res18);
    if ((-1 < iVar2) &&
       ((local_res20 = (IUnknown *)0x0, local_res18 == (IMFAsyncResult *)0x0 ||
        (HVar3 = (*local_res18->lpVtbl->GetObjectA)(local_res18,&local_res20), -1 < HVar3)))) {
      pIVar1 = local_res20;
      (**(code **)(*(longlong *)(param_1 + 8) + 0x48))
                ((longlong *)(param_1 + 8),local_res20[2].lpVtbl,
                 *(int *)&local_res20[3].lpVtbl - *(int *)&local_res20[1].lpVtbl,local_res10);
      pIVar1[1].lpVtbl =
           (IUnknownVtbl *)
           ((longlong)&(pIVar1[1].lpVtbl)->QueryInterface + (ulonglong)local_res10[0]);
      if (local_res18 != (IMFAsyncResult *)0x0) {
        (*local_res18->lpVtbl->SetStatus)(local_res18,0);
        ::_guard_xfg_dispatch_icall_nop(local_res18);
        if (local_res18 != (IMFAsyncResult *)0x0) {
          (*local_res18->lpVtbl->Release)(local_res18);
        }
      }
      if (local_res20 != (IUnknown *)0x0) {
        (*local_res20->lpVtbl->Release)(local_res20);
      }
      if (local_18[0] != (longlong *)0x0) {
        (**(code **)(*local_18[0] + 0x10))();
      }
    }
  }
  return 0;
}



// FUNCTION 1409054a0 FUN_1409054a0 body=1223 status=ok
// SIG undefined FUN_1409054a0(void)

undefined8 FUN_1409054a0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  BOOL BVar4;
  int iVar5;
  undefined8 *puVar6;
  int local_res8 [4];
  int local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  longlong *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  BVar4 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (BVar4 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  plVar2 = *(longlong **)(param_1 + 0x60);
  if (plVar2 == (longlong *)0x0) goto LAB_140905952;
  local_58 = (longlong *)0x0;
  iVar5 = (**(code **)(*plVar2 + 0x28))(plVar2,param_2,&local_58);
  if (-1 < iVar5) {
    local_res18[0] = 0;
    iVar5 = (**(code **)(*local_58 + 0x108))(local_58,local_res18);
    if (-1 < iVar5) {
      local_res8[0] = 1;
      (**(code **)(*local_58 + 0x118))(local_58,local_res8);
      switch(local_res18[0]) {
      case 1:
        *(undefined4 *)(param_1 + 0xbc) = 1;
        if (*(char *)(param_1 + 0x98) != '\0') {
          *(undefined1 *)(param_1 + 0x98) = 0;
        }
        if (*(char *)(param_1 + 0xb0) != '\0') {
          *(undefined1 *)(param_1 + 0xb0) = 0;
        }
        if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
          *(undefined8 *)(param_1 + 0xa0) = 0;
        }
        *(undefined1 *)(param_1 + 0x70) = 0;
        (**(code **)(**(longlong **)(param_1 + 0x60) + 0x60))();
        break;
      case 0x65:
        if ((local_res8[0] < 0) ||
           (iVar5 = WmfMedia::GetTopologyFromEvent(local_58,param_1 + 0x48), iVar5 < 0)) {
          if (*(int *)(param_1 + 0xbc) == 4) {
            *(undefined4 *)(param_1 + 0xbc) = 1;
            puVar6 = (undefined8 *)operator_new(0x10);
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = 0;
              *(undefined4 *)(puVar6 + 1) = 4;
              puVar3 = *(undefined8 **)(param_1 + 0x50);
              *(undefined8 **)(param_1 + 0x50) = puVar6;
              *puVar3 = puVar6;
            }
          }
          goto LAB_1409056b5;
        }
        if (*(int *)(param_1 + 0xbc) != 4) {
          FUN_140901400(param_1);
        }
        break;
      case 0x67:
        if (local_res8[0] < 0) goto LAB_1409056b5;
        iVar5 = *(int *)(param_1 + 0xbc);
        if ((iVar5 == 2) && (*(float *)(param_1 + 0xb8) == 0.0)) {
          *(undefined4 *)(param_1 + 0xbc) = 3;
LAB_14090579f:
          puVar6 = (undefined8 *)operator_new(0x10);
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar6 + 1) = 8;
LAB_14090584c:
            *puVar6 = 0;
            puVar3 = *(undefined8 **)(param_1 + 0x50);
            *(undefined8 **)(param_1 + 0x50) = puVar6;
            *puVar3 = puVar6;
          }
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0x80);
          if (plVar2 == (longlong *)0x0) {
            *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
          }
          else {
            local_64 = 0;
            (**(code **)(*plVar2 + 0x20))(plVar2,&local_64,param_1 + 0xb8);
            iVar5 = *(int *)(param_1 + 0xbc);
          }
          if (iVar5 == 3) goto LAB_14090579f;
          *(undefined4 *)(param_1 + 0xbc) = 3;
          if (*(float *)(param_1 + 0xb8) == 0.0) {
            if (local_60 != (undefined4 *)(param_1 + 0x94)) {
              *(undefined4 *)(param_1 + 0x94) = 0;
              *(undefined1 *)(param_1 + 0x98) = 1;
            }
            *(undefined1 *)(param_1 + 0x70) = 1;
            FUN_140901400(param_1);
            break;
          }
          puVar6 = (undefined8 *)operator_new(0x10);
          if (puVar6 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar6 + 1) = 6;
            goto LAB_14090584c;
          }
        }
        FUN_140901400(param_1);
        break;
      case 0x68:
        if (local_res8[0] < 0) goto LAB_1409056b5;
        *(undefined4 *)(param_1 + 0xbc) = 2;
LAB_140905681:
        puVar6 = (undefined8 *)operator_new(0x10);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 1) = 7;
          puVar3 = *(undefined8 **)(param_1 + 0x50);
          *(undefined8 **)(param_1 + 0x50) = puVar6;
          *puVar3 = puVar6;
        }
        FUN_140901400(param_1);
        break;
      case 0x69:
        if (-1 < local_res8[0]) {
          *(undefined4 *)(param_1 + 0xbc) = 5;
          goto LAB_140905681;
        }
LAB_1409056b5:
        if (*(char *)(param_1 + 0x98) != '\0') {
          *(undefined1 *)(param_1 + 0x98) = 0;
        }
        if (*(char *)(param_1 + 0xb0) != '\0') {
          *(undefined1 *)(param_1 + 0xb0) = 0;
        }
        if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
          *(undefined8 *)(param_1 + 0xa0) = 0;
        }
        *(undefined1 *)(param_1 + 0x70) = 0;
        break;
      case 0x6a:
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        break;
      case 0x6b:
        FWmfMediaSession::HandleSessionEnded(param_1);
        break;
      case 0x6c:
        if (local_res8[0] < 0) {
          plVar2 = *(longlong **)(param_1 + 0x80);
          if (plVar2 != (longlong *)0x0) {
            local_68 = 0;
            (**(code **)(*plVar2 + 0x20))(plVar2,&local_68,param_1 + 0xb8);
          }
        }
        else {
          local_50 = 0;
          local_48 = 0;
          local_40 = 0;
          iVar5 = (**(code **)(*local_58 + 0x120))(local_58,&local_50);
          if ((-1 < iVar5) && ((short)local_50 == 4)) {
            *(undefined4 *)(param_1 + 0xb8) = (undefined4)local_48;
            FUN_140901400(param_1);
            break;
          }
        }
        FUN_140901400(param_1);
        break;
      case 0x6e:
        uVar1 = *(undefined4 *)(param_1 + 0x14);
        iVar5 = (**(code **)(*local_58 + 0x38))(local_58,&DAT_145dc7a10,local_res20);
        if (iVar5 < 0) {
          local_res20[0] = uVar1;
        }
        *(undefined4 *)(param_1 + 0x14) = local_res20[0];
        break;
      case 0x6f:
        FWmfMediaSession::HandleSessionTopologyStatus(param_1,local_res8[0],local_58);
        break;
      case 0x7a:
        *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 1;
        puVar6 = (undefined8 *)operator_new(0x10);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 1) = 0;
          puVar3 = *(undefined8 **)(param_1 + 0x50);
          *(undefined8 **)(param_1 + 0x50) = puVar6;
          *puVar3 = puVar6;
        }
        break;
      case 0x7b:
        *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffffe;
        break;
      case 0x7e:
        *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) | 2;
        puVar6 = (undefined8 *)operator_new(0x10);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + 1) = 2;
          puVar3 = *(undefined8 **)(param_1 + 0x50);
          *(undefined8 **)(param_1 + 0x50) = puVar6;
          *puVar3 = puVar6;
        }
        break;
      case 0x7f:
        *(uint *)(param_1 + 0xc4) = *(uint *)(param_1 + 0xc4) & 0xfffffffd;
      }
      if ((((local_res18[0] != 0x6a) && (*(int *)(param_1 + 0xbc) != 1)) &&
          (plVar2 = *(longlong **)(param_1 + 0x60), plVar2 != (longlong *)0x0)) &&
         (iVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1,0), iVar5 < 0)) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0xbc) = 1;
      }
    }
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
LAB_140905952:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return 0;
}



// FUNCTION 140905a30 FUN_140905a30 body=116 status=ok
// SIG undefined FUN_140905a30(void)

undefined8 FUN_140905a30(longlong param_1,uint *param_2)

{
  char cVar1;
  BOOL BVar2;
  
  if (param_2 == (uint *)0x0) {
    return 0x80070057;
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa0))();
  *param_2 = (uint)(cVar1 != '\0');
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return 0;
}



// FUNCTION 140905ac0 MajorTypeToString body=848 status=ok
// SIG undefined MajorTypeToString(void)

undefined8 * WmfMedia::MajorTypeToString(undefined8 *param_1,longlong *param_2)

{
  if ((*param_2 == 0x4b06810381a412e6) && (param_2[1] == -0x53dbef879de7807b)) {
    *param_1 = 0;
    param_1[1] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"Default",0x10);
    return param_1;
  }
  if ((*param_2 == 0x10000073647561) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"Audio",0xc);
    return param_1;
  }
  if ((*param_2 == 0x10000073646976) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"Video",0xc);
    return param_1;
  }
  if ((*param_2 == 0x44949d047b4b6fe6) && (param_2[1] == -0x1b37892ff481eb42)) {
    *param_1 = 0;
    param_1[1] = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"Protected",0x14);
    return param_1;
  }
  if ((*param_2 == 0x40cb3dcde69669a0) && (param_2[1] == 0x16067c3808372e9e)) {
    *param_1 = 0;
    param_1[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"SAMI",10);
    return param_1;
  }
  if ((*param_2 == 0x11d5e45b72178c22) && (param_2[1] == -0x540b0c2f4fffd544)) {
    *param_1 = 0;
    param_1[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"Script",0xe);
    return param_1;
  }
  if ((*param_2 == 0x11d5e45b72178c23) && (param_2[1] == -0x540b0c2f4fffd544)) {
    *param_1 = 0;
    param_1[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"Image",0xc);
    return param_1;
  }
  if ((*param_2 == 0x11d5e45b72178c24) && (param_2[1] == -0x540b0c2f4fffd544)) {
    *param_1 = 0;
    param_1[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"HTML",10);
    return param_1;
  }
  if ((*param_2 == 0x11d5e45b72178c25) && (param_2[1] == -0x540b0c2f4fffd544)) {
    *param_1 = 0;
    param_1[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"Binary",0xe);
    return param_1;
  }
  if ((*param_2 == 0x11d5e45b72178c26) && (param_2[1] == -0x540b0c2f4fffd544)) {
    *param_1 = 0;
    param_1[1] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"FileTransfer",0x1a);
    return param_1;
  }
  if ((*param_2 == 0x11ce524fe436eb83) && (param_2[1] == 0x70a70baf2000539f)) {
    *param_1 = 0;
    param_1[1] = 7;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    FGenericPlatformString::Memcpy(*param_1,L"Stream",0xe);
    return param_1;
  }
  GuidToString();
  return param_1;
}



// FUNCTION 140905e10 OnClockPause body=22 status=ok
// SIG undefined OnClockPause(void)

undefined8 FWmfMediaSampler::OnClockPause(longlong param_1)

{
  TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 8,0);
  return 0;
}



// FUNCTION 140905e30 OnClockRestart body=25 status=ok
// SIG undefined OnClockRestart(void)

undefined8 FWmfMediaSampler::OnClockRestart(longlong param_1)

{
  TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 8,1);
  return 0;
}



// FUNCTION 140905e50 OnClockStart body=25 status=ok
// SIG undefined OnClockStart(void)

undefined8 FWmfMediaSampler::OnClockStart(longlong param_1)

{
  TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 8,2);
  return 0;
}



// FUNCTION 140905e70 OnClockStop body=25 status=ok
// SIG undefined OnClockStop(void)

undefined8 FWmfMediaSampler::OnClockStop(longlong param_1)

{
  TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast(param_1 + 8,3);
  return 0;
}



// FUNCTION 140905e90 OnProcessSample body=221 status=ok
// SIG undefined OnProcessSample(void)

undefined8
FWmfMediaSampler::OnProcessSample
          (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  iVar6 = *(int *)(param_1 + 0x3c);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x30) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_140905f1d:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_6,param_7,param_5,param_4);
        if (cVar4 == '\0') goto LAB_140905f1d;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x3c);
  }
  *(int *)(param_1 + 0x3c) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x28),0);
  }
  return 0;
}



// FUNCTION 140905f70 FUN_140905f70 body=220 status=ok
// SIG undefined FUN_140905f70(void)

ulonglong FUN_140905f70(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  undefined8 local_18;
  longlong *local_10;
  
  (**(code **)*param_1)();
  uVar7 = (**(code **)(*(longlong *)*param_2 + 0x98))();
  if ((uVar7 != 0) && (1 < *(int *)(param_3 + 8))) {
    local_18 = *param_2;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_10 = plVar4;
    bVar6 = FUN_140905160(param_1,&local_18,param_3,0);
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
    return (ulonglong)bVar6;
  }
  return uVar7 & 0xffffffffffffff00;
}



// FUNCTION 140906050 Open body=147 status=ok
// SIG undefined Open(void)

ulonglong FWmfMediaPlayer::Open(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar2 = (**(code **)*param_1)();
  if (*(int *)(param_2 + 8) < 2) {
    return uVar2 & 0xffffffffffffff00;
  }
  if (param_3 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    FName::FName(local_res8,"PrecacheFile",1);
    uVar1 = (**(code **)(*param_3 + 0x28))(param_3,local_res8,0);
  }
  local_18 = 0;
  uStack_10 = 0;
  uVar2 = FUN_140905160(param_1,&local_18,param_2,uVar1);
  return uVar2;
}



// FUNCTION 1409060f0 Overlaps body=301 status=ok
// SIG undefined Overlaps(void)

ulonglong TRange<FTimespan>::Overlaps(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulonglong in_RAX;
  uint7 uVar6;
  
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    in_RAX = 0;
    if ((param_1[0x10] != '\x02') &&
       ((*(longlong *)(param_1 + 0x18) < *(longlong *)(param_1 + 8) ||
        ((*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x18) &&
         ((cVar1 == '\0' || (param_1[0x10] == '\0')))))))) goto LAB_140906216;
  }
  cVar2 = *param_2;
  if (cVar2 != '\x02') {
    in_RAX = 0;
    if ((param_2[0x10] != '\x02') &&
       ((*(longlong *)(param_2 + 0x18) < *(longlong *)(param_2 + 8) ||
        ((*(longlong *)(param_2 + 8) == *(longlong *)(param_2 + 0x18) &&
         ((cVar2 == '\0' || (param_2[0x10] == '\0')))))))) goto LAB_140906216;
  }
  uVar6 = (uint7)(in_RAX >> 8);
  if ((param_1[0x10] == '\x02') || (cVar2 == '\x02')) {
    in_RAX = CONCAT71(uVar6,1);
  }
  else {
    in_RAX = (ulonglong)uVar6 << 8;
  }
  if ((cVar1 == '\x02') || (param_2[0x10] == '\x02')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  bVar4 = true;
  bVar3 = true;
  if ((char)in_RAX == '\0') {
    if ((param_1[0x10] != '\x01') || (cVar2 != '\x01')) {
      bVar4 = false;
    }
    in_RAX = 0;
    bVar3 = *(longlong *)(param_2 + 8) < *(longlong *)(param_1 + 0x18);
    if (bVar4) {
      bVar3 = *(longlong *)(param_2 + 8) <= *(longlong *)(param_1 + 0x18);
    }
  }
  bVar4 = true;
  if (!bVar5) {
    if ((cVar1 == '\x01') && (param_2[0x10] == '\x01')) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    in_RAX = 0;
    bVar4 = *(longlong *)(param_1 + 8) < *(longlong *)(param_2 + 0x18);
    if (bVar5) {
      bVar4 = *(longlong *)(param_1 + 8) <= *(longlong *)(param_2 + 0x18);
    }
  }
  if ((bVar3) && (bVar4)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
LAB_140906216:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1409062a0 FUN_1409062a0 body=223 status=ok
// SIG undefined FUN_1409062a0(void)

undefined8 FUN_1409062a0(longlong param_1,undefined8 param_2,ulonglong param_3,uint *param_4)

{
  BOOL BVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))();
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))();
  if ((uint)uVar3 < (uint)param_3) {
    param_3 = uVar3;
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))();
  uVar5 = (uint)param_3;
  if ((longlong)(uVar3 - (param_3 & 0xffffffff)) < lVar4) {
    uVar5 = (uint)uVar3 - (int)lVar2;
  }
  if (uVar5 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x50))
              (*(longlong **)(param_1 + 0x10),param_2,uVar5);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar5;
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))
            (*(longlong **)(param_1 + 0x10),(ulonglong)uVar5 + lVar2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return 0;
}



// FUNCTION 140906380 Release body=44 status=ok
// SIG undefined Release(void)

int FWmfMediaByteStream::Release(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 10;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if ((iVar3 == 0) && (param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x28))(param_1,(int)lVar2);
  }
  return iVar3;
}



// FUNCTION 1409063c0 Release body=44 status=ok
// SIG undefined Release(void)

int FWmfMediaReadState::Release(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x1c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar3 = iVar2 + -1;
  if ((iVar3 == 0) && (param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x18))(param_1,iVar2);
  }
  return iVar3;
}



// FUNCTION 1409063f0 Release body=44 status=ok
// SIG undefined Release(void)

int FWmfMediaSampler::Release(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  
  LOCK();
  plVar1 = param_1 + 4;
  lVar2 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  iVar3 = (int)lVar2 + -1;
  if ((iVar3 == 0) && (param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x58))(param_1,(int)lVar2);
  }
  return iVar3;
}



// FUNCTION 140906420 Release body=52 status=ok
// SIG undefined Release(void)

int FWmfMediaSession::Release(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x90);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  iVar3 = iVar2 + -1;
  if ((iVar3 == 0) && (param_1 != 0)) {
    (**(code **)(*(longlong *)(param_1 + 8) + 0x58))(param_1 + 8,iVar2);
  }
  return iVar3;
}



// FUNCTION 140906460 Reserve body=285 status=ok
// SIG undefined Reserve(void)

void TMediaObjectPool<FWmfMediaAudioSample>::TStorage::Reserve
               (LPCRITICAL_SECTION param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  BOOL BVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  BVar4 = TryEnterCriticalSection(param_1);
  if (BVar4 == 0) {
    EnterCriticalSection(param_1);
  }
  uVar1 = param_1[1].LockCount;
  while (param_2 < uVar1) {
    plVar3 = *(longlong **)
              ((longlong)param_1[1].DebugInfo + (longlong)param_1[1].LockCount * 8 + -8);
    param_1[1].LockCount = param_1[1].LockCount + -1;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,1);
    }
    uVar1 = param_1[1].LockCount;
  }
  if (param_2 != uVar1) {
    do {
      puVar5 = (undefined8 *)operator_new(0x40);
      puVar6 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_Bytes_144159540;
        puVar5[1] = &PTR_StartProfileThreadUsage_144159580;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *(undefined4 *)(puVar5 + 4) = 0;
        puVar5[5] = 0;
        *(undefined4 *)(puVar5 + 6) = 0;
        puVar5[7] = 0;
        puVar6 = puVar5;
      }
      iVar2 = param_1[1].LockCount;
      param_1[1].LockCount = iVar2 + 1;
      if (param_1[1].RecursionCount < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar2);
      }
      *(undefined8 **)(&(param_1[1].DebugInfo)->Type + (longlong)iVar2 * 4) = puVar6;
    } while ((uint)param_1[1].LockCount < param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x000140906576. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 140906580 FUN_140906580 body=303 status=ok
// SIG undefined FUN_140906580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140906580(LPCRITICAL_SECTION param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  BOOL BVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  BVar4 = TryEnterCriticalSection(param_1);
  if (BVar4 == 0) {
    EnterCriticalSection(param_1);
  }
  uVar1 = param_1[1].LockCount;
  while (param_2 < uVar1) {
    plVar3 = *(longlong **)
              ((longlong)param_1[1].DebugInfo + (longlong)param_1[1].LockCount * 8 + -8);
    param_1[1].LockCount = param_1[1].LockCount + -1;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,1);
    }
    uVar1 = param_1[1].LockCount;
  }
  if (param_2 != uVar1) {
    do {
      puVar5 = (undefined8 *)operator_new(0x48);
      puVar6 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &PTR_Bytes_144159710;
        puVar5[1] = &PTR_StartProfileThreadUsage_144159778;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = _DAT_1468b5ca0;
        puVar5[5] = 0;
        puVar5[6] = _DAT_1468b5ca0;
        puVar5[7] = 0;
        puVar5[8] = 0;
        puVar6 = puVar5;
      }
      iVar2 = param_1[1].LockCount;
      param_1[1].LockCount = iVar2 + 1;
      if (param_1[1].RecursionCount < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar2);
      }
      *(undefined8 **)(&(param_1[1].DebugInfo)->Type + (longlong)iVar2 * 4) = puVar6;
    } while ((uint)param_1[1].LockCount < param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001409066a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 1409066b0 FUN_1409066b0 body=1509 status=ok
// SIG undefined FUN_1409066b0(void)

undefined8 * FUN_1409066b0(undefined8 *param_1,undefined8 **param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  HRESULT HVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  IMFAttributes *pIVar10;
  MF_ATTRIBUTE_TYPE *pType;
  bool bVar11;
  GUID *pGVar12;
  longlong *plVar13;
  uint uStackX_14;
  IMFAttributes *local_70;
  IMFAttributes *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 *local_48;
  longlong *local_40;
  undefined8 *local_38;
  longlong *local_30;
  
  if (*param_2 == (undefined8 *)0x0) {
    cVar2 = FString::StartsWith(param_3,L"audcap://",1);
    if ((cVar2 == '\0') && (cVar3 = FString::StartsWith(param_3,L"vidcap://",1), cVar3 == '\0')) {
      cVar2 = FString::StartsWith(param_3,L"file://",1);
      if (cVar2 == '\0') goto LAB_140906a1d;
      lVar8 = *param_3;
      if (param_4 == '\0') {
        plVar7 = (longlong *)FUN_1415c3d50();
        puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x18))(plVar7,lVar8 + 0xe,0);
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 == (longlong *)0x0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          *(undefined4 *)(plVar7 + 1) = 1;
          *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
          *plVar7 = (longlong)&PTR_FUN_143f3f2e0;
          plVar7[2] = (longlong)puVar6;
        }
        local_38 = puVar6;
        local_30 = plVar7;
        SharedPointerInternals::EnableSharedFromThis(&local_38,puVar6,puVar6);
        if (param_2 != &local_38) {
          *param_2 = puVar6;
          local_38 = (undefined8 *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_30);
          plVar7 = local_30;
        }
LAB_1409068f0:
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar7 + 1;
          lVar8 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
      }
      else {
        puVar6 = (undefined8 *)operator_new(0xa8);
        if (puVar6 == (undefined8 *)0x0) {
          puVar6 = (undefined8 *)0x0;
        }
        else {
          FArchive::FArchive(puVar6);
          puVar6[0x12] = 0;
          puVar6[0x13] = 0;
          puVar6[0x14] = 0;
          *puVar6 = &PTR__scalar_deleting_destructor__143f747a8;
          FArchive::SetIsLoading(puVar6,1);
          FArchive::SetIsPersistent(puVar6,0);
        }
        cVar2 = FUN_141676460(puVar6 + 0x13,lVar8 + 0xe,0);
        if (cVar2 != '\0') {
          plVar7 = (longlong *)operator_new(0x18);
          if (plVar7 == (longlong *)0x0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            *(undefined4 *)(plVar7 + 1) = 1;
            *(undefined4 *)((longlong)plVar7 + 0xc) = 1;
            *plVar7 = (longlong)&PTR_DestroyObject_144159b08;
            plVar7[2] = (longlong)puVar6;
          }
          local_48 = puVar6;
          local_40 = plVar7;
          SharedPointerInternals::EnableSharedFromThis(&local_48,puVar6,puVar6);
          if (param_2 != &local_48) {
            *param_2 = puVar6;
            local_48 = (undefined8 *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,&local_40);
            plVar7 = local_40;
          }
          goto LAB_1409068f0;
        }
        if (puVar6 != (undefined8 *)0x0) {
          if (puVar6[0x13] != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(puVar6);
          FMemory::operator_delete(puVar6,0xa8);
        }
      }
      if ((*param_2 == (longlong *)0x0) || (lVar8 = (**(code **)(**param_2 + 0x98))(), lVar8 == 0))
      {
        *param_1 = 0;
        goto LAB_140906c69;
      }
      goto LAB_140906a1d;
    }
    lVar8 = *param_3;
    local_70 = (IMFAttributes *)0x0;
    HVar5 = _guard_xfg_dispatch_icall_nop(&local_70,2);
    if (HVar5 < 0) {
      *param_1 = 0;
      pIVar10 = local_70;
    }
    else {
      pGVar12 = (GUID *)&DAT_1441591b0;
      if (cVar2 != '\0') {
        pGVar12 = (GUID *)&DAT_1441591a0;
      }
      HVar5 = (*local_70->lpVtbl->SetGUID)(local_70,(GUID *)&DAT_144159130,pGVar12);
      if (HVar5 < 0) {
        *param_1 = 0;
        pIVar10 = local_70;
      }
      else {
        pGVar12 = (GUID *)&DAT_144159160;
        if (cVar2 != '\0') {
          pGVar12 = (GUID *)&DAT_144159180;
        }
        HVar5 = (*local_70->lpVtbl->SetString)(local_70,pGVar12,(LPCWSTR)(lVar8 + 0x12));
        if (HVar5 < 0) {
          *param_1 = 0;
          pIVar10 = local_70;
        }
        else {
          local_58 = (longlong *)0x0;
          iVar4 = _guard_xfg_dispatch_icall_nop(local_70,&local_58);
          pIVar10 = local_70;
          if (iVar4 < 0) {
            *param_1 = 0;
            if (local_58 != (longlong *)0x0) {
              (**(code **)(*local_58 + 0x10))();
              pIVar10 = local_70;
            }
          }
          else {
            *param_1 = local_58;
            local_58 = (longlong *)0x0;
          }
        }
      }
    }
  }
  else {
LAB_140906a1d:
    bVar11 = false;
    plVar7 = (longlong *)0x0;
    local_68 = (IMFAttributes *)0x0;
    iVar4 = _guard_xfg_dispatch_icall_nop(&local_68);
    if (iVar4 < 0) {
      *param_1 = 0;
      if (local_68 != (IMFAttributes *)0x0) {
        (*local_68->lpVtbl->Release)(local_68);
      }
      plVar7 = param_2[1];
      if (plVar7 == (longlong *)0x0) {
        return param_1;
      }
      LOCK();
      plVar9 = plVar7 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 != 1) {
        return param_1;
      }
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 != 1) {
        return param_1;
      }
      (**(code **)(*plVar7 + 8))(plVar7,1);
      return param_1;
    }
    local_60 = (longlong *)0x0;
    if (*param_2 == (undefined8 *)0x0) {
      if ((int)param_3[1] == 0) {
        pGVar12 = (GUID *)&DAT_143f3eda8;
      }
      else {
        pGVar12 = (GUID *)*param_3;
      }
      HVar5 = (*local_68->lpVtbl->GetItem)(local_68,pGVar12,(PROPVARIANT *)0x1);
      if (-1 < HVar5) goto LAB_140906bd1;
      *param_1 = 0;
    }
    else {
      plVar9 = (longlong *)operator_new(0x58);
      if (plVar9 == (longlong *)0x0) {
        plVar13 = (longlong *)((ulonglong)uStackX_14 << 0x20);
      }
      else {
        plVar13 = param_2[1];
        puVar6 = *param_2;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        *(undefined1 *)(plVar9 + 2) = 0;
        *plVar9 = (longlong)&PTR_LAB_144159790;
        plVar9[1] = (longlong)&PTR_LAB_1441597c0;
        plVar9[3] = (longlong)puVar6;
        plVar9[4] = (longlong)plVar13;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        InitializeCriticalSection((LPCRITICAL_SECTION)(plVar9 + 5));
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar9 + 5),4000);
        *(undefined4 *)(plVar9 + 10) = 0;
        bVar11 = true;
        (**(code **)(*plVar9 + 8))(plVar9);
        plVar7 = plVar9;
      }
      if ((bVar11) && (plVar13 != (longlong *)0x0)) {
        LOCK();
        plVar9 = plVar13 + 1;
        lVar8 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      pGVar12 = (GUID *)(plVar7 + 1);
      if (plVar7 == (longlong *)0x0) {
        pGVar12 = (GUID *)0x0;
      }
      if ((int)param_3[1] == 0) {
        pType = (MF_ATTRIBUTE_TYPE *)&DAT_143f3eda8;
      }
      else {
        pType = (MF_ATTRIBUTE_TYPE *)*param_3;
      }
      HVar5 = (*local_68->lpVtbl->GetItemType)(local_68,pGVar12,pType);
      if (HVar5 < 0) {
        *param_1 = 0;
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      else {
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
LAB_140906bd1:
        local_50 = (longlong *)0x0;
        iVar4 = (**(code **)*local_60)(local_60,&DAT_144159970,&local_50);
        if (iVar4 < 0) {
          *param_1 = 0;
          if (local_50 != (longlong *)0x0) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
        else {
          *param_1 = local_50;
          local_50 = (longlong *)0x0;
        }
      }
    }
    pIVar10 = local_68;
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
      pIVar10 = local_68;
    }
  }
  if (pIVar10 != (IMFAttributes *)0x0) {
    (*pIVar10->lpVtbl->Release)(pIVar10);
  }
LAB_140906c69:
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
  return param_1;
}



// FUNCTION 140906ca0 FUN_140906ca0 body=175 status=ok
// SIG undefined FUN_140906ca0(void)

undefined8
FUN_140906ca0(longlong param_1,int param_2,longlong param_3,undefined8 param_4,undefined8 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  BVar3 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (BVar3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  }
  if (*(char *)(param_1 + 8) == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x10);
    lVar2 = *plVar1;
    if (param_2 == 1) {
      lVar4 = (**(code **)(lVar2 + 0x90))(plVar1);
      param_3 = param_3 + lVar4;
    }
    (**(code **)(lVar2 + 0xa8))(plVar1,param_3);
    if (param_5 != (undefined8 *)0x0) {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))();
      *param_5 = uVar5;
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return uVar5;
}



// FUNCTION 140906d50 FUN_140906d50 body=204 status=ok
// SIG undefined FUN_140906d50(void)

ulonglong FUN_140906d50(undefined8 *param_1,longlong *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  BOOL BVar2;
  ulonglong in_RAX;
  longlong lVar3;
  
  if (param_1[0xb] != 0) {
    in_RAX = (**(code **)*param_1)(param_1,4);
    if ((char)in_RAX != '\0') {
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 2);
      BVar2 = TryEnterCriticalSection(lpCriticalSection);
      if (BVar2 == 0) {
        EnterCriticalSection(lpCriticalSection);
      }
      if (((*(uint *)((longlong)param_1 + 0xb4) < 2) || (lVar3 = *param_2, lVar3 < 0)) ||
         ((longlong)param_1[7] < lVar3)) {
        bVar1 = 0;
      }
      else if (*(char *)(param_1 + 0xd) == '\0') {
        bVar1 = FUN_140900470(param_1 + -1,lVar3);
      }
      else {
        if (param_2 != param_1 + 0x14) {
          if (*(char *)(param_1 + 0x15) != '\0') {
            *(undefined1 *)(param_1 + 0x15) = 0;
            lVar3 = *param_2;
          }
          param_1[0x14] = lVar3;
          *(undefined1 *)(param_1 + 0x15) = 1;
        }
        bVar1 = 1;
      }
      LeaveCriticalSection(lpCriticalSection);
      return (ulonglong)bVar1;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140906e20 SelectTrack body=340 status=ok
// SIG undefined SelectTrack(void)

ulonglong FWmfMediaTracks::SelectTrack(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  BOOL BVar2;
  int iVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (*(longlong *)(param_1 + 0x138) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  }
  if (param_2 == 0) {
    lVar4 = 0x140;
    lVar5 = 0x48;
LAB_140906ebc:
    iVar3 = *(int *)(lVar4 + param_1);
    plVar1 = (longlong *)(lVar5 + param_1);
    if (param_3 != iVar3) {
      if ((param_3 != -1) && ((param_3 < 0 || ((int)plVar1[1] <= param_3)))) goto LAB_140906f38;
      if (iVar3 != -1) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x120))
                          (*(longlong **)(param_1 + 0x138),
                           *(undefined4 *)((longlong)iVar3 * 0x68 + 0x60 + *plVar1));
        if (iVar3 < 0) goto LAB_140906f38;
        *(int *)(lVar4 + param_1) = -1;
        *(undefined1 *)(param_1 + 0x150) = 1;
      }
      if (param_3 != -1) {
        iVar3 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x118))
                          (*(longlong **)(param_1 + 0x138),
                           *(undefined4 *)((longlong)param_3 * 0x68 + 0x60 + *plVar1));
        if (iVar3 < 0) goto LAB_140906f38;
        *(int *)(lVar4 + param_1) = param_3;
        *(undefined1 *)(param_1 + 0x150) = 1;
      }
    }
    uVar6 = 1;
  }
  else {
    if (param_2 == 1) {
      lVar4 = 0x144;
      lVar5 = 0x88;
      goto LAB_140906ebc;
    }
    if (param_2 == 2) {
      lVar4 = 0x148;
      lVar5 = 0x128;
      goto LAB_140906ebc;
    }
    if (param_2 == 6) {
      lVar4 = 0x14c;
      lVar5 = 0x198;
      goto LAB_140906ebc;
    }
LAB_140906f38:
    uVar6 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return uVar6;
}



// FUNCTION 140906f80 FUN_140906f80 body=139 status=ok
// SIG undefined FUN_140906f80(void)

undefined8 FUN_140906f80(longlong param_1,ulonglong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  BVar1 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar1 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(char *)(param_1 + 8) == '\0') {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))();
    if (uVar2 < param_2) {
      param_2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))();
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xa8))(*(longlong **)(param_1 + 0x10),param_2);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  LeaveCriticalSection(lpCriticalSection);
  return uVar3;
}



// FUNCTION 140907020 SetRate body=191 status=ok
// SIG undefined SetRate(void)

ulonglong FWmfMediaSession::SetRate(longlong param_1,undefined4 param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  ulonglong in_RAX;
  undefined4 local_res10 [6];
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar3 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  cVar1 = TRangeSet<float>::Contains(param_1 + 0xc0,param_2);
  if (cVar1 == '\0') {
    cVar1 = TRangeSet<float>::Contains(param_1 + 0xd0,param_2);
    if (cVar1 == '\0') {
      bVar2 = 0;
      goto LAB_1409070c2;
    }
  }
  if (*(char *)(param_1 + 0x68) == '\0') {
    bVar2 = FUN_140900200(param_1 + -8,param_2);
  }
  else {
    if (local_res10 != (undefined4 *)(param_1 + 0x8c)) {
      *(undefined4 *)(param_1 + 0x8c) = param_2;
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    bVar2 = 1;
  }
LAB_1409070c2:
  LeaveCriticalSection(lpCriticalSection);
  return (ulonglong)bVar2;
}



// FUNCTION 1409070e0 SetTrackFormat body=209 status=ok
// SIG undefined SetTrackFormat(void)

undefined8 FWmfMediaTracks::SetTrackFormat(longlong param_1,int param_2,int param_3,int param_4)

{
  BOOL BVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  }
  if (param_2 == 0) {
    lVar2 = 0x48;
LAB_140907150:
    if ((-1 < param_3) && (param_3 < (int)((longlong *)(lVar2 + param_1))[1])) {
      lVar2 = (longlong)param_3 * 0x68 + *(longlong *)(lVar2 + param_1);
      if (*(int *)(lVar2 + 0x5c) != param_4) {
        if ((param_4 < 0) || (*(int *)(lVar2 + 0x28) <= param_4)) goto LAB_140907182;
        *(int *)(lVar2 + 0x5c) = param_4;
        *(undefined1 *)(param_1 + 0x150) = 1;
      }
      uVar3 = 1;
      goto LAB_140907185;
    }
  }
  else {
    if (param_2 == 1) {
      lVar2 = 0x88;
      goto LAB_140907150;
    }
    if (param_2 == 2) {
      lVar2 = 0x128;
      goto LAB_140907150;
    }
    if (param_2 == 6) {
      lVar2 = 0x198;
      goto LAB_140907150;
    }
  }
LAB_140907182:
  uVar3 = 0;
LAB_140907185:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return uVar3;
}



// FUNCTION 1409071c0 SetVideoTrackFrameRate body=313 status=ok
// SIG undefined SetVideoTrackFrameRate(void)

bool FWmfMediaTracks::SetVideoTrackFrameRate(longlong param_1,int param_2,int param_3,float param_4)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  undefined8 *puVar8;
  bool bVar9;
  
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  }
  if ((((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1a0))) &&
      (lVar6 = (longlong)param_2 * 0x68 + *(longlong *)(param_1 + 0x198), -1 < param_3)) &&
     ((param_3 < *(int *)(lVar6 + 0x28) &&
      (puVar8 = (undefined8 *)((longlong)param_3 * 0x70 + *(longlong *)(lVar6 + 0x20)),
      puVar8 != (undefined8 *)0x0)))) {
    if (param_4 == *(float *)((longlong)puVar8 + 0x4c)) {
      bVar9 = true;
      goto LAB_1409072ce;
    }
    cVar1 = TRange<float>::Contains(puVar8 + 10,param_4);
    if ((cVar1 != '\0') && (0.0 <= param_4)) {
      pfVar4 = (float *)&DAT_144151b10;
      do {
        if (param_4 == *pfVar4) {
          fVar7 = pfVar4[1];
          uVar5 = (ulonglong)(uint)pfVar4[2];
          goto LAB_1409072a5;
        }
        pfVar4 = pfVar4 + 4;
      } while ((longlong)pfVar4 < 0x144151ba0);
      if (param_4 <= 214748.0) {
        uVar5 = 10000;
        fVar7 = (float)(int)(param_4 * 10000.0);
LAB_1409072a5:
        iVar3 = (**(code **)(*(longlong *)*puVar8 + 0xb0))
                          ((longlong *)*puVar8,&DAT_145dc7e90,(ulonglong)(uint)fVar7 << 0x20 | uVar5
                          );
        bVar9 = -1 < iVar3;
        goto LAB_1409072ce;
      }
    }
  }
  bVar9 = false;
LAB_1409072ce:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x98));
  return bVar9;
}



// FUNCTION 140907300 Shutdown body=359 status=ok
// SIG undefined Shutdown(void)

void FWmfMediaSession::Shutdown(longlong param_1)

{
  BOOL BVar1;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    if (BVar1 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    }
    if (*(char *)(param_1 + 0x98) != '\0') {
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    if (*(char *)(param_1 + 0xb0) != '\0') {
      *(undefined1 *)(param_1 + 0xb0) = 0;
    }
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))();
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    *(undefined1 *)(param_1 + 0x70) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x60))();
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x68))();
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x10))();
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x78) + 0x10))();
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    *(undefined1 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (*(char *)(param_1 + 0x98) != '\0') {
      *(undefined1 *)(param_1 + 0x98) = 0;
    }
    *(undefined4 *)(param_1 + 0xc4) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 0;
    if (*(int *)(param_1 + 0xd4) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 200,0);
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (*(int *)(param_1 + 0xe4) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xd8,0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 140907470 Shutdown body=290 status=ok
// SIG undefined Shutdown(void)

void FWmfMediaTracks::Shutdown(longlong param_1)

{
  BOOL BVar1;
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  }
  TMediaObjectPool<FWmfMediaAudioSample>::TStorage::Reserve(**(undefined8 **)(param_1 + 0x10),0);
  FUN_140906580(**(undefined8 **)(param_1 + 0x160),0);
  *(undefined8 *)(param_1 + 0x148) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x150) = 0xffffffffffffffff;
  TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>::Empty(param_1 + 0x50,0);
  TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>::Empty(param_1 + 0x130,0);
  TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>::Empty(param_1 + 0x90,0);
  TArray<FWmfMediaTracks::FTrack,FDefaultAllocator>::Empty(param_1 + 0x1a0,0);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 200,0);
  }
  if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x60))();
    if (*(longlong **)(param_1 + 0xe8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x10))();
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
  }
  if (*(longlong **)(param_1 + 0x140) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x140) + 0x10))();
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014090758b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 1409075a0 SubTypeToString body=24271 status=ok
// SIG undefined SubTypeToString(void)

undefined8 * WmfMedia::SubTypeToString(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong local_28 [2];
  longlong local_18 [2];
  
  if ((*param_2 == 0) && (param_2[1] == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"Null",10);
    return param_1;
  }
  if ((*param_2 == 0x4fc5566219e4a5aa) && (param_2[1] == 0x57108e025817c0a0)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"Jpeg",10);
    return param_1;
  }
  if ((*param_2 == 0x10000000000016) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 6;
    if (*(int *)((longlong)param_1 + 0xc) < 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"RGB32",0xc);
    return param_1;
  }
  if ((*param_2 == 0x11cfdb46e06d8023) && (param_2[1] == -0x154493a07fff2e4c)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 0x11;
    if (*(int *)((longlong)param_1 + 0xc) < 0x11) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"MPEG-2 Transport",0x22);
    return param_1;
  }
  if ((*param_2 == 0x45dcd330263067d1) && (param_2[1] == -0x1e1c1b7926cb964a)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 0xf;
    if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"MPEG-2 Program",0x1e);
    return param_1;
  }
  if ((*param_2 == 0x10000000000016) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 6;
    if (*(int *)((longlong)param_1 + 0xc) < 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"RGB32",0xc);
    return param_1;
  }
  if ((*param_2 == 0x10000000000015) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 7;
    if (*(int *)((longlong)param_1 + 0xc) < 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"ARGB32",0xe);
    return param_1;
  }
  if ((*param_2 == 0x10000000000014) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 6;
    if (*(int *)((longlong)param_1 + 0xc) < 6) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"RGB24",0xc);
    return param_1;
  }
  if ((*param_2 == 0x10000000000018) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 7;
    if (*(int *)((longlong)param_1 + 0xc) < 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"RGB525",0xe);
    return param_1;
  }
  if ((*param_2 == 0x10000000000017) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 7;
    if (*(int *)((longlong)param_1 + 0xc) < 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"RGB565",0xe);
    return param_1;
  }
  if ((*param_2 == 0x10000000000029) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"RGB8",10);
    return param_1;
  }
  if ((*param_2 == 0x10000034344941) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"AI44",10);
    return param_1;
  }
  if ((*param_2 == 0x10000056555941) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"AYUV",10);
    return param_1;
  }
  if ((*param_2 == 0x10000032595559) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"YUY2",10);
    return param_1;
  }
  if ((*param_2 == 0x10000055595659) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"YVYU",10);
    return param_1;
  }
  if ((*param_2 == 0x10000039555659) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"YVU9",10);
    return param_1;
  }
  if ((*param_2 == 0x10000059565955) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"UYVY",10);
    return param_1;
  }
  if ((*param_2 == 0x1000003131564e) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"NV11",10);
    return param_1;
  }
  if ((*param_2 == 0x1000003231564e) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"NV12",10);
    return param_1;
  }
  if ((*param_2 == 0x10000032315659) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"YV12",10);
    return param_1;
  }
  if ((*param_2 == 0x10000030323449) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"I420",10);
    return param_1;
  }
  if ((*param_2 == 0x10000056555949) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"IYUV",10);
    return param_1;
  }
  if ((*param_2 == 0x10000030313259) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"Y210",10);
    return param_1;
  }
  if ((*param_2 == 0x10000036313259) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"Y216",10);
    return param_1;
  }
  if ((*param_2 == 0x10000030313459) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"Y410",10);
    return param_1;
  }
  if ((*param_2 == 0x10000036313459) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"Y416",10);
    return param_1;
  }
  if ((*param_2 == 0x10000050313459) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"Y41P",10);
    return param_1;
  }
  if ((*param_2 == 0x10000054313459) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"Y41T",10);
    return param_1;
  }
  if ((*param_2 == 0x10000054323459) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"Y42T",10);
    return param_1;
  }
  if ((*param_2 == 0x10000030313250) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"P210",10);
    return param_1;
  }
  if ((*param_2 == 0x10000036313250) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"P216",10);
    return param_1;
  }
  if ((*param_2 == 0x10000030313050) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"P010",10);
    return param_1;
  }
  if ((*param_2 == 0x10000036313050) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"P016",10);
    return param_1;
  }
  if ((*param_2 == 0x10000030313276) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"v210",10);
    return param_1;
  }
  if ((*param_2 == 0x10000036313276) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"v216",10);
    return param_1;
  }
  if ((*param_2 == 0x10000030313476) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"v410",10);
    return param_1;
  }
  if ((*param_2 == 0x1000003334504d) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"MP43",10);
    return param_1;
  }
  if ((*param_2 == 0x1000005334504d) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"MP4S",10);
    return param_1;
  }
  if ((*param_2 == 0x1000003253344d) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"M4S2",10);
    return param_1;
  }
  if ((*param_2 == 0x1000005634504d) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"MP4V",10);
    return param_1;
  }
  if ((*param_2 == 0x10000031564d57) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"WMV1",10);
    return param_1;
  }
  if ((*param_2 == 0x10000032564d57) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"WMV2",10);
    return param_1;
  }
  if ((*param_2 == 0x10000033564d57) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"WMV3",10);
    return param_1;
  }
  if ((*param_2 == 0x10000031435657) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"WVC1",10);
    return param_1;
  }
  if ((*param_2 == 0x1000003153534d) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"MSS1",10);
    return param_1;
  }
  if ((*param_2 == 0x1000003253534d) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"MSS2",10);
    return param_1;
  }
  if ((*param_2 == 0x1000003147504d) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"MPG1",10);
    return param_1;
  }
  if ((*param_2 == 0x1000006c737664) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"DVSL",10);
    return param_1;
  }
  if ((*param_2 == 0x10000064737664) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"DVSD",10);
    return param_1;
  }
  if ((*param_2 == 0x10000064687664) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"DVHD",10);
    return param_1;
  }
  if ((*param_2 == 0x10000035327664) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"DV25",10);
    return param_1;
  }
  if ((*param_2 == 0x10000030357664) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"DV50",10);
    return param_1;
  }
  if ((*param_2 == 0x10000031687664) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"DVH1",10);
    return param_1;
  }
  if ((*param_2 == 0x10000020637664) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 4;
    if (*(int *)((longlong)param_1 + 0xc) < 4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,&DAT_14414a6d8,8);
    return param_1;
  }
  if ((*param_2 == 0x10000034363248) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"H264",10);
    return param_1;
  }
  if ((*param_2 == 0x10000047504a4d) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"MJPG",10);
    return param_1;
  }
  if ((*param_2 == 0x1000004f303234) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"420O",10);
    return param_1;
  }
  if ((*param_2 == 0x10000043564548) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 5;
    if (*(int *)((longlong)param_1 + 0xc) < 5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"HEVC",10);
    return param_1;
  }
  if ((*param_2 == 0x10000053564548) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 8;
    if (*(int *)((longlong)param_1 + 0xc) < 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"HEVC ES",0x10);
    return param_1;
  }
  if ((*param_2 == 0x4ff856223f40f4f0) && (param_2[1] == 0x5eee4b587aa1d8b6)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 8;
    if (*(int *)((longlong)param_1 + 0xc) < 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"H264 ES",0x10);
    return param_1;
  }
  if ((*param_2 == 0x11cfdb46e06d8026) && (param_2[1] == -0x154493a07fff2e4c)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 7;
    if (*(int *)((longlong)param_1 + 0xc) < 7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"MPEG-2",0xe);
    return param_1;
  }
  if ((*param_2 == 0x1000003032344d) && (param_2[1] == 0x719b3800aa000080)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 8;
    if (*(int *)((longlong)param_1 + 0xc) < 8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"LifeCam",0x10);
    return param_1;
  }
  if ((*param_2 == 0x494d767a61766331) && (param_2[1] == 0x3790dc259df278b4)) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 1) = 10;
    if (*(int *)((longlong)param_1 + 0xc) < 10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    FGenericPlatformString::Memcpy(*param_1,L"QuickTime",0x14);
    return param_1;
  }
  if ((*(longlong *)((longlong)param_2 + 4) == -0x7fff2e4bee3024ba) &&
     (*(int *)((longlong)param_2 + 0xc) == -0x154493a1)) {
    iVar1 = (int)*param_2;
    if (iVar1 == -0x1f927f1c) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MPEG-2 AC3",0x16);
      return param_1;
    }
    if (iVar1 == -0x1f927fd5) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MPEG-2 Audio",0x1a);
      return param_1;
    }
    if (iVar1 == -0x1f927fd4) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Dolby AC-3",0x16);
      return param_1;
    }
    if (iVar1 == -0x1f927fcd) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 4;
      if (*(int *)((longlong)param_1 + 0xc) < 4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,&DAT_14414a7c8,8);
      return param_1;
    }
    if (iVar1 == -0x1f927fce) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 9;
      if (*(int *)((longlong)param_1 + 0xc) < 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DVD LPCM",0x12);
      return param_1;
    }
    if (iVar1 == -0x1f927fcc) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 5;
      if (*(int *)((longlong)param_1 + 0xc) < 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"SDDS",10);
      return param_1;
    }
    if (iVar1 == -0x1f927fd3) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DVD Subpicture",0x1e);
      return param_1;
    }
    if (iVar1 == -0x1f927f1d) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MPEG-2 Video",0x1a);
      return param_1;
    }
  }
  if (((*(longlong *)((longlong)param_2 + 4) == -0x55ffff7ffff00000) &&
      (*(int *)((longlong)param_2 + 0xc) == 0x719b3800)) ||
     ((*(longlong *)((longlong)param_2 + 4) == -0x620d874bb6b28986 &&
      (*(int *)((longlong)param_2 + 0xc) == 0x3790dc25)))) {
    iVar1 = (int)*param_2;
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x15;
      if (*(int *)((longlong)param_1 + 0xc) < 0x15) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Unknown Audio Format",0x2a);
      return param_1;
    }
    if (iVar1 == 1) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 4;
      if (*(int *)((longlong)param_1 + 0xc) < 4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,&DAT_14414a868,8);
      return param_1;
    }
    if (iVar1 == 2) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 6;
      if (*(int *)((longlong)param_1 + 0xc) < 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"ADPCM",0xc);
      return param_1;
    }
    if (iVar1 == 3) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"IEEE Float",0x16);
      return param_1;
    }
    if (iVar1 == 4) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 6;
      if (*(int *)((longlong)param_1 + 0xc) < 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"VSELP",0xc);
      return param_1;
    }
    if (iVar1 == 5) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 9;
      if (*(int *)((longlong)param_1 + 0xc) < 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"IBM CVSD",0x12);
      return param_1;
    }
    if (iVar1 == 6) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 5;
      if (*(int *)((longlong)param_1 + 0xc) < 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"aLaw",10);
      return param_1;
    }
    if (iVar1 == 7) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 5;
      if (*(int *)((longlong)param_1 + 0xc) < 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"uLaw",10);
      return param_1;
    }
    if (iVar1 == 8) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 4;
      if (*(int *)((longlong)param_1 + 0xc) < 4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,&DAT_14414a8e0,8);
      return param_1;
    }
    if (iVar1 == 9) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 4;
      if (*(int *)((longlong)param_1 + 0xc) < 4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,&DAT_14414a8e8,8);
      return param_1;
    }
    if (iVar1 == 10) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"WMA Voice 9",0x18);
      return param_1;
    }
    if (iVar1 == 0xb) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"WMA Voice 10",0x1a);
      return param_1;
    }
    if (iVar1 == 0x10) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"OKI ADPCM",0x14);
      return param_1;
    }
    if (iVar1 == 0x11) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x10;
      if (*(int *)((longlong)param_1 + 0xc) < 0x10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Intel DVI ADPCM",0x20);
      return param_1;
    }
    if (iVar1 == 0x12) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x11;
      if (*(int *)((longlong)param_1 + 0xc) < 0x11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Videologic ADPCM",0x22);
      return param_1;
    }
    if (iVar1 == 0x13) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Sierra ADPCM",0x1a);
      return param_1;
    }
    if (iVar1 == 0x14) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"G723 ADPCM",0x16);
      return param_1;
    }
    if (iVar1 == 0x15) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DIGISTD",0x10);
      return param_1;
    }
    if (iVar1 == 0x16) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DIGIFIX",0x10);
      return param_1;
    }
    if (iVar1 == 0x17) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Dialogic ADPCM",0x1e);
      return param_1;
    }
    if (iVar1 == 0x18) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x13;
      if (*(int *)((longlong)param_1 + 0xc) < 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Media Vision ADPCM",0x26);
      return param_1;
    }
    if (iVar1 == 0x19) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"HP CU Codec",0x18);
      return param_1;
    }
    if (iVar1 == 0x1a) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"HP DynVoice",0x18);
      return param_1;
    }
    if (iVar1 == 0x20) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Yamaha ADPCM",0x1a);
      return param_1;
    }
    if (iVar1 == 0x21) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 7;
      if (*(int *)((longlong)param_1 + 0xc) < 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Sonarc",0xe);
      return param_1;
    }
    if (iVar1 == 0x22) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x15;
      if (*(int *)((longlong)param_1 + 0xc) < 0x15) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DPS Group TrueSpeech",0x2a);
      return param_1;
    }
    if (iVar1 == 0x23) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Echo Speech 1",0x1c);
      return param_1;
    }
    if (iVar1 == 0x24) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 5;
      if (*(int *)((longlong)param_1 + 0xc) < 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"AF36",10);
      return param_1;
    }
    if (iVar1 == 0x25) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 5;
      if (*(int *)((longlong)param_1 + 0xc) < 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"APTX",10);
      return param_1;
    }
    if (iVar1 == 0x26) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 5;
      if (*(int *)((longlong)param_1 + 0xc) < 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"AF10",10);
      return param_1;
    }
    if (iVar1 == 0x27) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Prosody 1622",0x1a);
      return param_1;
    }
    if (iVar1 == 0x28) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 4;
      if (*(int *)((longlong)param_1 + 0xc) < 4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,&DAT_14414ab48,8);
      return param_1;
    }
    if (iVar1 == 0x30) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Dolby AC2",0x14);
      return param_1;
    }
    if (iVar1 == 0x31) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"GSM 610",0x10);
      return param_1;
    }
    if (iVar1 == 0x32) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MSN Audio",0x14);
      return param_1;
    }
    if (iVar1 == 0x33) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Antex ADPCME",0x1a);
      return param_1;
    }
    if (iVar1 == 0x34) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x18;
      if (*(int *)((longlong)param_1 + 0xc) < 0x18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Control Resources VQLPC",0x30);
      return param_1;
    }
    if (iVar1 == 0x35) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 9;
      if (*(int *)((longlong)param_1 + 0xc) < 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DigiReal",0x12);
      return param_1;
    }
    if (iVar1 == 0x36) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DigiADPCM",0x14);
      return param_1;
    }
    if (iVar1 == 0x37) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x17;
      if (*(int *)((longlong)param_1 + 0xc) < 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Control Resources CR10",0x2e);
      return param_1;
    }
    if (iVar1 == 0x38) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"VBX ADPCM",0x14);
      return param_1;
    }
    if (iVar1 == 0x39) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Crystal IMA ADPCM",0x24);
      return param_1;
    }
    if (iVar1 == 0x3a) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Echo Speech 3",0x1c);
      return param_1;
    }
    if (iVar1 == 0x3b) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Rockwell ADPCM",0x1e);
      return param_1;
    }
    if (iVar1 == 0x3c) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Rockwell DigiTalk",0x24);
      return param_1;
    }
    if (iVar1 == 0x3d) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 6;
      if (*(int *)((longlong)param_1 + 0xc) < 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Xebec",0xc);
      return param_1;
    }
    if (iVar1 == 0x40) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"G721 ADPCM",0x16);
      return param_1;
    }
    if (iVar1 == 0x41) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"G728 CELP",0x14);
      return param_1;
    }
    if (iVar1 == 0x42) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 7;
      if (*(int *)((longlong)param_1 + 0xc) < 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MSG723",0xe);
      return param_1;
    }
    if (iVar1 == 0x43) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Intel G723.1",0x1a);
      return param_1;
    }
    if (iVar1 == 0x44) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Intel G729",0x16);
      return param_1;
    }
    if (iVar1 == 0x45) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Sharp G726",0x16);
      return param_1;
    }
    if (iVar1 == 0x50) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 5;
      if (*(int *)((longlong)param_1 + 0xc) < 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MPEG",10);
      return param_1;
    }
    if (iVar1 == 0x52) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"InSoft RT24",0x18);
      return param_1;
    }
    if (iVar1 == 0x53) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"InSoft PAC",0x16);
      return param_1;
    }
    if (iVar1 == 0x55) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MPEG Layer 3",0x1a);
      return param_1;
    }
    if (iVar1 == 0x59) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Lucent G723",0x18);
      return param_1;
    }
    if (iVar1 == 0x60) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Cirrus Logic",0x1a);
      return param_1;
    }
    if (iVar1 == 0x61) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"ESS PCM",0x10);
      return param_1;
    }
    if (iVar1 == 0x62) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware",0x10);
      return param_1;
    }
    if (iVar1 == 99) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Canopus ATRAC",0x1c);
      return param_1;
    }
    if (iVar1 == 100) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"APICOM G726",0x18);
      return param_1;
    }
    if (iVar1 == 0x65) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"APICOM G722",0x18);
      return param_1;
    }
    if (iVar1 == 0x66) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 5;
      if (*(int *)((longlong)param_1 + 0xc) < 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DSAT",10);
      return param_1;
    }
    if (iVar1 == 0x67) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DSAT Display",0x1a);
      return param_1;
    }
    if (iVar1 == 0x69) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x15;
      if (*(int *)((longlong)param_1 + 0xc) < 0x15) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware Byte Aligned",0x2a);
      return param_1;
    }
    if (iVar1 == 0x70) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware AC8",0x18);
      return param_1;
    }
    if (iVar1 == 0x71) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware AC10",0x1a);
      return param_1;
    }
    if (iVar1 == 0x72) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware AC16",0x1a);
      return param_1;
    }
    if (iVar1 == 0x73) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware AC20",0x1a);
      return param_1;
    }
    if (iVar1 == 0x74) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware RT24",0x1a);
      return param_1;
    }
    if (iVar1 == 0x75) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware RT29",0x1a);
      return param_1;
    }
    if (iVar1 == 0x76) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware RT29HW",0x1e);
      return param_1;
    }
    if (iVar1 == 0x77) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware VR12",0x1a);
      return param_1;
    }
    if (iVar1 == 0x78) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware VR18",0x1a);
      return param_1;
    }
    if (iVar1 == 0x79) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware TQ40",0x1a);
      return param_1;
    }
    if (iVar1 == 0x7a) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware SC3",0x18);
      return param_1;
    }
    if (iVar1 == 0x7b) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware SC3.1",0x1c);
      return param_1;
    }
    if (iVar1 == 0x80) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Softsound",0x14);
      return param_1;
    }
    if (iVar1 == 0x81) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Voxware TQ60",0x1a);
      return param_1;
    }
    if (iVar1 == 0x82) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 7;
      if (*(int *)((longlong)param_1 + 0xc) < 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MSRT24",0xe);
      return param_1;
    }
    if (iVar1 == 0x83) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"AT&T G729A",0x16);
      return param_1;
    }
    if (iVar1 == 0x84) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 5;
      if (*(int *)((longlong)param_1 + 0xc) < 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"NVI2",10);
      return param_1;
    }
    if (iVar1 == 0x85) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x10;
      if (*(int *)((longlong)param_1 + 0xc) < 0x10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DataFusion G726",0x20);
      return param_1;
    }
    if (iVar1 == 0x86) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DataFusion GSM610",0x24);
      return param_1;
    }
    if (iVar1 == 0x88) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x11;
      if (*(int *)((longlong)param_1 + 0xc) < 0x11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Iterated Systems",0x22);
      return param_1;
    }
    if (iVar1 == 0x89) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"OnLive!",0x10);
      return param_1;
    }
    if (iVar1 == 0x8a) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Multitude FT SX20",0x24);
      return param_1;
    }
    if (iVar1 == 0x8b) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x17;
      if (*(int *)((longlong)param_1 + 0xc) < 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Infocom ITS G721 ADPCM",0x2e);
      return param_1;
    }
    if (iVar1 == 0x8c) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Convedia G729",0x1c);
      return param_1;
    }
    if (iVar1 == 0x8d) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Congruency",0x16);
      return param_1;
    }
    if (iVar1 == 0x91) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 6;
      if (*(int *)((longlong)param_1 + 0xc) < 6) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"SBC24",0xc);
      return param_1;
    }
    if (iVar1 == 0x92) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x10;
      if (*(int *)((longlong)param_1 + 0xc) < 0x10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Dolby AC3 SPDIF",0x20);
      return param_1;
    }
    if (iVar1 == 0x93) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x10;
      if (*(int *)((longlong)param_1 + 0xc) < 0x10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MediaSonic G723",0x20);
      return param_1;
    }
    if (iVar1 == 0x94) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Prosody 8kps",0x1a);
      return param_1;
    }
    if (iVar1 == 0x97) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"ZyXEL ADPCM",0x18);
      return param_1;
    }
    if (iVar1 == 0x98) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Philips LPCBB",0x1c);
      return param_1;
    }
    if (iVar1 == 0x99) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Studer Packed",0x1c);
      return param_1;
    }
    if (iVar1 == 0xa0) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x11;
      if (*(int *)((longlong)param_1 + 0xc) < 0x11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Malden PhonyTalk",0x22);
      return param_1;
    }
    if (iVar1 == 0xa1) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Racal GSM",0x14);
      return param_1;
    }
    if (iVar1 == 0xa2) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Racal G720.A",0x1a);
      return param_1;
    }
    if (iVar1 == 0xa3) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Racal G723.1",0x1a);
      return param_1;
    }
    if (iVar1 == 0xa4) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Racal Tetra ACELP",0x24);
      return param_1;
    }
    if (iVar1 == 0xb0) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"NEC AAC",0x10);
      return param_1;
    }
    if (iVar1 == 0xff) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Raw AAC-1",0x14);
      return param_1;
    }
    if (iVar1 == 0x100) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Rhetorex ADPCM",0x1e);
      return param_1;
    }
    if (iVar1 == 0x101) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"BeCubed IRAT",0x1a);
      return param_1;
    }
    if (iVar1 == 0x111) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Vivo G723",0x14);
      return param_1;
    }
    if (iVar1 == 0x112) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"vivo Siren",0x16);
      return param_1;
    }
    if (iVar1 == 0x120) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Philips Celp",0x1a);
      return param_1;
    }
    if (iVar1 == 0x121) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x10;
      if (*(int *)((longlong)param_1 + 0xc) < 0x10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Philips Grundig",0x20);
      return param_1;
    }
    if (iVar1 == 0x123) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 9;
      if (*(int *)((longlong)param_1 + 0xc) < 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DEC G723",0x12);
      return param_1;
    }
    if (iVar1 == 0x125) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Sanyo ADPCM",0x18);
      return param_1;
    }
    if (iVar1 == 0x130) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x13;
      if (*(int *)((longlong)param_1 + 0xc) < 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Sipro Lab ACEPLNET",0x26);
      return param_1;
    }
    if (iVar1 == 0x131) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x14;
      if (*(int *)((longlong)param_1 + 0xc) < 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Sipro Lab ACELP4800",0x28);
      return param_1;
    }
    if (iVar1 == 0x132) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x13;
      if (*(int *)((longlong)param_1 + 0xc) < 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Sipro Lab ACELP8v3",0x26);
      return param_1;
    }
    if (iVar1 == 0x133) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Spiro Lab G729",0x1e);
      return param_1;
    }
    if (iVar1 == 0x134) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x10;
      if (*(int *)((longlong)param_1 + 0xc) < 0x10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Spiro Lab G729A",0x20);
      return param_1;
    }
    if (iVar1 == 0x135) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x11;
      if (*(int *)((longlong)param_1 + 0xc) < 0x11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Spiro Lab Kelvin",0x22);
      return param_1;
    }
    if (iVar1 == 0x136) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"VoiceAge AMR",0x1a);
      return param_1;
    }
    if (iVar1 == 0x140) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x16;
      if (*(int *)((longlong)param_1 + 0xc) < 0x16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Dictaphone G726 ADPCM",0x2c);
      return param_1;
    }
    if (iVar1 == 0x141) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Dictaphone CELP68",0x24);
      return param_1;
    }
    if (iVar1 == 0x142) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Dictaphone CELP54",0x24);
      return param_1;
    }
    if (iVar1 == 0x150) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x13;
      if (*(int *)((longlong)param_1 + 0xc) < 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Qualcomm PureVoice",0x26);
      return param_1;
    }
    if (iVar1 == 0x151) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x13;
      if (*(int *)((longlong)param_1 + 0xc) < 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Qualcomm Half-Rate",0x26);
      return param_1;
    }
    if (iVar1 == 0x155) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x19;
      if (*(int *)((longlong)param_1 + 0xc) < 0x19) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Ring Zero Systems TUBGSM",0x32);
      return param_1;
    }
    if (iVar1 == 0x160) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Microsoft Audio 1",0x24);
      return param_1;
    }
    if (iVar1 == 0x161) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x16;
      if (*(int *)((longlong)param_1 + 0xc) < 0x16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Windows Media Audio 2",0x2c);
      return param_1;
    }
    if (iVar1 == 0x162) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x16;
      if (*(int *)((longlong)param_1 + 0xc) < 0x16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Windows Media Audio 3",0x2c);
      return param_1;
    }
    if (iVar1 == 0x163) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x1c;
      if (*(int *)((longlong)param_1 + 0xc) < 0x1c) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Window Media Audio Lossless",0x38);
      return param_1;
    }
    if (iVar1 == 0x164) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x1a;
      if (*(int *)((longlong)param_1 + 0xc) < 0x1a) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Windows Media Audio SPDIF",0x34);
      return param_1;
    }
    if (iVar1 == 0x170) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Unisys ADPCM",0x1a);
      return param_1;
    }
    if (iVar1 == 0x171) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Unisys uLaw",0x18);
      return param_1;
    }
    if (iVar1 == 0x172) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Unisys aLaw",0x18);
      return param_1;
    }
    if (iVar1 == 0x173) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Unisys 16k",0x16);
      return param_1;
    }
    if (iVar1 == 0x174) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x11;
      if (*(int *)((longlong)param_1 + 0xc) < 0x11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"SyCom ACM SYC008",0x22);
      return param_1;
    }
    if (iVar1 == 0x175) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x17;
      if (*(int *)((longlong)param_1 + 0xc) < 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"SyCom ACM SYC701 G726L",0x2e);
      return param_1;
    }
    if (iVar1 == 0x176) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x18;
      if (*(int *)((longlong)param_1 + 0xc) < 0x18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"SyCom ACM SYC701 CELP54",0x30);
      return param_1;
    }
    if (iVar1 == 0x177) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x18;
      if (*(int *)((longlong)param_1 + 0xc) < 0x18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"SyCom ACM SYC701 CELP68",0x30);
      return param_1;
    }
    if (iVar1 == 0x178) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x1a;
      if (*(int *)((longlong)param_1 + 0xc) < 0x1a) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Knowledge Adventure ADPCM",0x34);
      return param_1;
    }
    if (iVar1 == 0x180) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x16;
      if (*(int *)((longlong)param_1 + 0xc) < 0x16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Fraunhofer MPEG-2 AAC",0x2c);
      return param_1;
    }
    if (iVar1 == 400) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 7;
      if (*(int *)((longlong)param_1 + 0xc) < 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DTS DS",0xe);
      return param_1;
    }
    if (iVar1 == 0x200) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x14;
      if (*(int *)((longlong)param_1 + 0xc) < 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Creative Labs ADPCM",0x28);
      return param_1;
    }
    if (iVar1 == 0x202) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x1b;
      if (*(int *)((longlong)param_1 + 0xc) < 0x1b) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Creative Labs FastSpeech 8",0x36);
      return param_1;
    }
    if (iVar1 == 0x203) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x1c;
      if (*(int *)((longlong)param_1 + 0xc) < 0x1c) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Creative Labs FastSpeech 10",0x38);
      return param_1;
    }
    if (iVar1 == 0x210) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"UHER ADPCM",0x16);
      return param_1;
    }
    if (iVar1 == 0x215) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Ulead DV Audio",0x1e);
      return param_1;
    }
    if (iVar1 == 0x216) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x11;
      if (*(int *)((longlong)param_1 + 0xc) < 0x11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Ulead DV Audio.1",0x22);
      return param_1;
    }
    if (iVar1 == 0x220) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Quarterdeck",0x18);
      return param_1;
    }
    if (iVar1 == 0x230) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"I-link VC",0x14);
      return param_1;
    }
    if (iVar1 == 0x240) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"RAW SPORT",0x14);
      return param_1;
    }
    if (iVar1 == 0x241) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x13;
      if (*(int *)((longlong)param_1 + 0xc) < 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"ESS Technology AC3",0x26);
      return param_1;
    }
    if (iVar1 == 0x249) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x14;
      if (*(int *)((longlong)param_1 + 0xc) < 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Generic Passthrough",0x28);
      return param_1;
    }
    if (iVar1 == 0x250) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"IPI HSX",0x10);
      return param_1;
    }
    if (iVar1 == 0x251) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"IPI RPELP",0x14);
      return param_1;
    }
    if (iVar1 == 0x260) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x16;
      if (*(int *)((longlong)param_1 + 0xc) < 0x16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Consistent Software 2",0x2c);
      return param_1;
    }
    if (iVar1 == 0x270) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 9;
      if (*(int *)((longlong)param_1 + 0xc) < 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Sony SCX",0x12);
      return param_1;
    }
    if (iVar1 == 0x271) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 9;
      if (*(int *)((longlong)param_1 + 0xc) < 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Sony SCY",0x12);
      return param_1;
    }
    if (iVar1 == 0x272) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Sony ATRAC3",0x18);
      return param_1;
    }
    if (iVar1 == 0x273) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 9;
      if (*(int *)((longlong)param_1 + 0xc) < 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Sony SPC",0x12);
      return param_1;
    }
    if (iVar1 == 0x280) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Telum Audio",0x18);
      return param_1;
    }
    if (iVar1 == 0x281) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Telum IA Audio",0x1e);
      return param_1;
    }
    if (iVar1 == 0x285) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Norcom ADPCM",0x1a);
      return param_1;
    }
    if (iVar1 == 0x300) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x14;
      if (*(int *)((longlong)param_1 + 0xc) < 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Fujitsu Towns Sound",0x28);
      return param_1;
    }
    if (iVar1 == 0x350) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 9;
      if (*(int *)((longlong)param_1 + 0xc) < 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Micronas",0x12);
      return param_1;
    }
    if (iVar1 == 0x351) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x11;
      if (*(int *)((longlong)param_1 + 0xc) < 0x11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Micronas CELP833",0x22);
      return param_1;
    }
    if (iVar1 == 0x400) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Brooktree Digital",0x24);
      return param_1;
    }
    if (iVar1 == 0x401) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Intel Music Coder",0x24);
      return param_1;
    }
    if (iVar1 == 0x402) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Indeo Audio",0x18);
      return param_1;
    }
    if (iVar1 == 0x450) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"QDesign Music",0x1c);
      return param_1;
    }
    if (iVar1 == 0x500) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"On2 VP7",0x10);
      return param_1;
    }
    if (iVar1 == 0x501) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"On2 VP6",0x10);
      return param_1;
    }
    if (iVar1 == 0x680) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"AT&T VME VMPCM",0x1e);
      return param_1;
    }
    if (iVar1 == 0x681) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 9;
      if (*(int *)((longlong)param_1 + 0xc) < 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"AT&T TPC",0x12);
      return param_1;
    }
    if (iVar1 == 0x8ae) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x13;
      if (*(int *)((longlong)param_1 + 0xc) < 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Lightwave Lossless",0x26);
      return param_1;
    }
    if (iVar1 == 0x1000) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Olivetti GSM",0x1a);
      return param_1;
    }
    if (iVar1 == 0x1001) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Olivetti ADPCM",0x1e);
      return param_1;
    }
    if (iVar1 == 0x1002) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Olivetti CELP",0x1c);
      return param_1;
    }
    if (iVar1 == 0x1003) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Olivetti SBC",0x1a);
      return param_1;
    }
    if (iVar1 == 0x1004) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Olivetti OPR",0x1a);
      return param_1;
    }
    if (iVar1 == 0x1100) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Lernout & Hauspie",0x24);
      return param_1;
    }
    if (iVar1 == 0x1101) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x17;
      if (*(int *)((longlong)param_1 + 0xc) < 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Lernout & Hauspie CELP",0x2e);
      return param_1;
    }
    if (iVar1 == 0x1102) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x17;
      if (*(int *)((longlong)param_1 + 0xc) < 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Lernout & Hauspie SBC8",0x2e);
      return param_1;
    }
    if (iVar1 == 0x1103) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x18;
      if (*(int *)((longlong)param_1 + 0xc) < 0x18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Lernout & Hauspie SBC12",0x30);
      return param_1;
    }
    if (iVar1 == 0x1104) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x18;
      if (*(int *)((longlong)param_1 + 0xc) < 0x18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Lernout & Hauspie SBC16",0x30);
      return param_1;
    }
    if (iVar1 == 0x1400) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 7;
      if (*(int *)((longlong)param_1 + 0xc) < 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Norris",0xe);
      return param_1;
    }
    if (iVar1 == 0x1401) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"ISIAudio 2",0x16);
      return param_1;
    }
    if (iVar1 == 0x1500) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x1d;
      if (*(int *)((longlong)param_1 + 0xc) < 0x1d) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"AT&T SoundSpace Musicompress",0x3a);
      return param_1;
    }
    if (iVar1 == 0x1600) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MPEG ADT5 AAC",0x1c);
      return param_1;
    }
    if (iVar1 == 0x1601) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MPEG RAW AAC",0x1a);
      return param_1;
    }
    if (iVar1 == 0x1602) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MPEG LOAS",0x14);
      return param_1;
    }
    if (iVar1 == 0x1608) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x14;
      if (*(int *)((longlong)param_1 + 0xc) < 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Nokia MPEG ADT5 AAC",0x28);
      return param_1;
    }
    if (iVar1 == 0x1609) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x13;
      if (*(int *)((longlong)param_1 + 0xc) < 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Nokia MPEG RAW AAC",0x26);
      return param_1;
    }
    if (iVar1 == 0x160a) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x17;
      if (*(int *)((longlong)param_1 + 0xc) < 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Vodafone MPEG ADTS AAC",0x2e);
      return param_1;
    }
    if (iVar1 == 0x160b) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x16;
      if (*(int *)((longlong)param_1 + 0xc) < 0x16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Vodafone MPEG RAW AAC",0x2c);
      return param_1;
    }
    if (iVar1 == 0x1610) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MPEG HEAAC",0x16);
      return param_1;
    }
    if (iVar1 == 0x181c) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x14;
      if (*(int *)((longlong)param_1 + 0xc) < 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"voxware RT24 Speech",0x28);
      return param_1;
    }
    if (iVar1 == 0x1971) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x17;
      if (*(int *)((longlong)param_1 + 0xc) < 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Sonic Foundry Lossless",0x2e);
      return param_1;
    }
    if (iVar1 == 0x1979) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Innings ADPCM",0x1c);
      return param_1;
    }
    if (iVar1 == 0x1c07) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Lucent SX8300P",0x1e);
      return param_1;
    }
    if (iVar1 == 0x1c0c) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Lucent SX5363S",0x1e);
      return param_1;
    }
    if (iVar1 == 0x1f03) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"CUSeeMe",0x10);
      return param_1;
    }
    if (iVar1 == 0x1fc4) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x13;
      if (*(int *)((longlong)param_1 + 0xc) < 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"NTCSoft ALF2CM ACM",0x26);
      return param_1;
    }
    if (iVar1 == 0x2000) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x14;
      if (*(int *)((longlong)param_1 + 0xc) < 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"FAST Multimedia DVM",0x28);
      return param_1;
    }
    if (iVar1 == 0x2001) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 5;
      if (*(int *)((longlong)param_1 + 0xc) < 5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"DTS2",10);
      return param_1;
    }
    if (iVar1 == 0x3313) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 9;
      if (*(int *)((longlong)param_1 + 0xc) < 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MAKEAVIS",0x12);
      return param_1;
    }
    if (iVar1 == 0x4143) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x11;
      if (*(int *)((longlong)param_1 + 0xc) < 0x11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Divio MPEG-4 AAC",0x22);
      return param_1;
    }
    if (iVar1 == 0x4201) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x19;
      if (*(int *)((longlong)param_1 + 0xc) < 0x19) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Nokia Adaptive Multirate",0x32);
      return param_1;
    }
    if (iVar1 == 0x4243) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Divio G726",0x16);
      return param_1;
    }
    if (iVar1 == 0x434c) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"LEAD Speech",0x18);
      return param_1;
    }
    if (iVar1 == 0x564c) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"LEAD Vorbis",0x18);
      return param_1;
    }
    if (iVar1 == 0x5756) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x11;
      if (*(int *)((longlong)param_1 + 0xc) < 0x11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"xiph.org WavPack",0x22);
      return param_1;
    }
    if (iVar1 == 0x674f) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Ogg Vorbis Mode 1",0x24);
      return param_1;
    }
    if (iVar1 == 0x6750) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Ogg Vorbis Mode 2",0x24);
      return param_1;
    }
    if (iVar1 == 0x6751) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Ogg Vorbis Mode 3",0x24);
      return param_1;
    }
    if (iVar1 == 0x676f) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x17;
      if (*(int *)((longlong)param_1 + 0xc) < 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Ogg Vorbis Mode 1 Plus",0x2e);
      return param_1;
    }
    if (iVar1 == 0x6770) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x17;
      if (*(int *)((longlong)param_1 + 0xc) < 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Ogg Vorbis Mode 2 Plus",0x2e);
      return param_1;
    }
    if (iVar1 == 0x6771) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x17;
      if (*(int *)((longlong)param_1 + 0xc) < 0x17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Ogg Vorbis Mode 3 Plus",0x2e);
      return param_1;
    }
    if (iVar1 == 0x7000) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 9;
      if (*(int *)((longlong)param_1 + 0xc) < 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"3COM NBX",0x12);
      return param_1;
    }
    if (iVar1 == 0x706d) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 9;
      if (*(int *)((longlong)param_1 + 0xc) < 9) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"FAAD AAC",0x12);
      return param_1;
    }
    if (iVar1 == 0x7361) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"AMR Narrowband",0x1e);
      return param_1;
    }
    if (iVar1 == 0x7362) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"AMR Wideband",0x1a);
      return param_1;
    }
    if (iVar1 == 0x7363) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"AMR Wideband Plus",0x24);
      return param_1;
    }
    if (iVar1 == 0x7a21) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"GSMA/3GPP CBR",0x1c);
      return param_1;
    }
    if (iVar1 == 0x7a22) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"GSMA/3GPP VBR SID",0x24);
      return param_1;
    }
    if (iVar1 == 0xa100) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x18;
      if (*(int *)((longlong)param_1 + 0xc) < 0x18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Converse Infosys G723.1",0x30);
      return param_1;
    }
    if (iVar1 == 0xa101) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x18;
      if (*(int *)((longlong)param_1 + 0xc) < 0x18) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Converse Infosys AVQSBC",0x30);
      return param_1;
    }
    if (iVar1 == 0xa102) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x15;
      if (*(int *)((longlong)param_1 + 0xc) < 0x15) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Converse Infosys SBC",0x2a);
      return param_1;
    }
    if (iVar1 == 0xa103) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x1b;
      if (*(int *)((longlong)param_1 + 0xc) < 0x1b) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Symbol Technologies G729.A",0x36);
      return param_1;
    }
    if (iVar1 == 0xa104) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x16;
      if (*(int *)((longlong)param_1 + 0xc) < 0x16) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"VoiceAge AMR Wideband",0x2c);
      return param_1;
    }
    if (iVar1 == 0xa105) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Ingenient G726",0x1e);
      return param_1;
    }
    if (iVar1 == 0xa106) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"MPEG-4 AAC",0x16);
      return param_1;
    }
    if (iVar1 == 0xa107) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Encore G726",0x18);
      return param_1;
    }
    if (iVar1 == 0xa108) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"ZOLL Medical ASAO",0x24);
      return param_1;
    }
    if (iVar1 == 0xa109) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x15;
      if (*(int *)((longlong)param_1 + 0xc) < 0x15) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"xiph.org Speex Voice",0x2a);
      return param_1;
    }
    if (iVar1 == 0xa10a) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Vianix MASC",0x18);
      return param_1;
    }
    if (iVar1 == 0xa10b) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x22;
      if (*(int *)((longlong)param_1 + 0xc) < 0x22) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Windows Media 9 Spectrum Analyzer",0x44);
      return param_1;
    }
    if (iVar1 == 0xa10c) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x2b;
      if (*(int *)((longlong)param_1 + 0xc) < 0x2b) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Windows Media Foundation Spectrum Analyzer",0x56);
      return param_1;
    }
    if (iVar1 == 0xa10d) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"GSM 610",0x10);
      return param_1;
    }
    if (iVar1 == 0xa10e) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"GSM 620",0x10);
      return param_1;
    }
    if (iVar1 == 0xa10f) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"GSM 660",0x10);
      return param_1;
    }
    if (iVar1 == 0xa110) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 8;
      if (*(int *)((longlong)param_1 + 0xc) < 8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"GSM 690",0x10);
      return param_1;
    }
    if (iVar1 == 0xa111) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x20;
      if (*(int *)((longlong)param_1 + 0xc) < 0x20) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"GSM Adaptive Multirate Wideband",0x40);
      return param_1;
    }
    if (iVar1 == 0xa112) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Polycom G722",0x1a);
      return param_1;
    }
    if (iVar1 == 0xa113) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xd;
      if (*(int *)((longlong)param_1 + 0xc) < 0xd) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Polycom G728",0x1a);
      return param_1;
    }
    if (iVar1 == 0xa114) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Polycom G729.A",0x1e);
      return param_1;
    }
    if (iVar1 == 0xa115) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Polycom Siren",0x1c);
      return param_1;
    }
    if (iVar1 == 0xa116) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xf;
      if (*(int *)((longlong)param_1 + 0xc) < 0xf) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Global IP ILBC",0x1e);
      return param_1;
    }
    if (iVar1 == 0xa117) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 10;
      if (*(int *)((longlong)param_1 + 0xc) < 10) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"RadioTime",0x14);
      return param_1;
    }
    if (iVar1 == 0xa118) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x11;
      if (*(int *)((longlong)param_1 + 0xc) < 0x11) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Nice Systems ACA",0x22);
      return param_1;
    }
    if (iVar1 == 0xa119) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x13;
      if (*(int *)((longlong)param_1 + 0xc) < 0x13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Nice Systems ADPCM",0x26);
      return param_1;
    }
    if (iVar1 == 0xa11a) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Vocord G721",0x18);
      return param_1;
    }
    if (iVar1 == 0xa11b) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Vocord G726",0x18);
      return param_1;
    }
    if (iVar1 == 0xa11c) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Vocord G722.1",0x1c);
      return param_1;
    }
    if (iVar1 == 0xa11d) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Vocord G728",0x18);
      return param_1;
    }
    if (iVar1 == 0xa11e) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xc;
      if (*(int *)((longlong)param_1 + 0xc) < 0xc) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Vocord G729",0x18);
      return param_1;
    }
    if (iVar1 == 0xa11f) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Vocord G729.A",0x1c);
      return param_1;
    }
    if (iVar1 == 0xa120) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xe;
      if (*(int *)((longlong)param_1 + 0xc) < 0xe) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Vocord G723.1",0x1c);
      return param_1;
    }
    if (iVar1 == 0xa121) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0xb;
      if (*(int *)((longlong)param_1 + 0xc) < 0xb) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Vocord LBC",0x16);
      return param_1;
    }
    if (iVar1 == 0xa122) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x12;
      if (*(int *)((longlong)param_1 + 0xc) < 0x12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"Nice Systems G728",0x24);
      return param_1;
    }
    if (iVar1 == 0xa123) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x14;
      if (*(int *)((longlong)param_1 + 0xc) < 0x14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"France Telecom G729",0x28);
      return param_1;
    }
    if (iVar1 == 0xa124) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 7;
      if (*(int *)((longlong)param_1 + 0xc) < 7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"CODIAN",0xe);
      return param_1;
    }
    if (iVar1 == 0xf1ac) {
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined4 *)(param_1 + 1) = 0x15;
      if (*(int *)((longlong)param_1 + 0xc) < 0x15) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      }
      FGenericPlatformString::Memcpy(*param_1,L"flac.sourceforge.net",0x2a);
      return param_1;
    }
  }
  puVar2 = (undefined8 *)FUN_140902360(local_18,(int)*param_2);
  puVar4 = &DAT_143f3eda8;
  if (*(int *)(puVar2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*puVar2;
  }
  puVar2 = (undefined8 *)GuidToString(local_28,param_2);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar4 = (undefined2 *)*puVar2;
  }
  FString::PrintfImpl(param_1,L"%s (%s)",puVar4,puVar3);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14090d470 FUN_14090d470 body=1189 status=ok
// SIG undefined FUN_14090d470(void)

void FUN_14090d470(longlong param_1)

{
  LPCRITICAL_SECTION p_Var1;
  char cVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  BOOL BVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong local_res8;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  lVar17 = *(longlong *)(param_1 + 0x40);
  p_Var1 = (LPCRITICAL_SECTION)(lVar17 + 0xa0);
  local_res8 = param_1;
  BVar8 = TryEnterCriticalSection(p_Var1);
  if (BVar8 == 0) {
    EnterCriticalSection(p_Var1);
  }
  cVar2 = *(char *)(lVar17 + 0xf0);
  cVar3 = *(char *)(lVar17 + 0x158);
  LeaveCriticalSection(p_Var1);
  if (cVar2 != '\0') {
    (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),9);
  }
  if (cVar3 == '\0') goto LAB_14090d799;
  cVar7 = FWindowsPlatformMisc::VerifyWindowsVersion(10);
  if (cVar7 == '\0') {
    plVar16 = (longlong *)UWmfMediaSettings::GetPrivateStaticClass();
    lVar17 = plVar16[0x1f];
    if (lVar17 == 0) {
      (**(code **)(*plVar16 + 0x368))(plVar16);
      lVar17 = plVar16[0x1f];
    }
    FWmfMediaSession::Initialize(*(undefined8 *)(param_1 + 0x38),*(undefined1 *)(lVar17 + 0x29));
    lVar17 = *(longlong *)(param_1 + 0x40);
    local_58 = lVar17;
    if (*(longlong *)(lVar17 + 0xe8) != 0) {
      local_48 = 0;
      uStack_40 = 0;
      FUN_1409066b0(&local_60,&local_48,lVar17 + 0xd8,0);
      plVar16 = (longlong *)(lVar17 + 8);
      uVar9 = (**(code **)(*(longlong *)(lVar17 + 8) + 0x18))(plVar16,6);
      uVar10 = (**(code **)(*plVar16 + 0x28))(plVar16,6,uVar9);
      uVar11 = (**(code **)(*plVar16 + 0x18))(plVar16,0);
      uVar12 = (**(code **)(*plVar16 + 0x28))(plVar16,0,uVar11);
      uVar13 = (**(code **)(*plVar16 + 0x18))(plVar16,1);
      uVar14 = (**(code **)(*plVar16 + 0x28))(plVar16,1,uVar13);
      FUN_140904f20(local_58,local_60,lVar17 + 0xd8);
      (**(code **)(*plVar16 + 0x50))(plVar16,6,uVar9,uVar10);
      (**(code **)(*plVar16 + 0x48))(plVar16,6,uVar9);
      (**(code **)(*plVar16 + 0x50))(plVar16,0,uVar11,uVar12);
      (**(code **)(*plVar16 + 0x48))(plVar16,0,uVar11);
      (**(code **)(*plVar16 + 0x50))(plVar16,1,uVar13,uVar14);
      (**(code **)(*plVar16 + 0x48))(plVar16,1,uVar13);
      param_1 = local_res8;
      if (local_60 != (longlong *)0x0) {
        (**(code **)(*local_60 + 0x10))(local_60);
        param_1 = local_res8;
      }
    }
  }
  lVar20 = 0;
  lVar17 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(lVar17 + 0xe8) == 0) {
LAB_14090d759:
    bVar6 = true;
  }
  else {
    p_Var1 = (LPCRITICAL_SECTION)(lVar17 + 0xa0);
    BVar8 = TryEnterCriticalSection(p_Var1);
    if (BVar8 == 0) {
      EnterCriticalSection(p_Var1);
    }
    plVar16 = *(longlong **)(lVar17 + 0x140);
    if (plVar16 != (longlong *)0x0) {
      local_res8 = 0;
      (**(code **)(*plVar16 + 0x40))(plVar16,&DAT_144159220,&local_res8);
      lVar20 = local_res8;
    }
    LeaveCriticalSection(p_Var1);
    lVar17 = *(longlong *)(param_1 + 0x38);
    local_58 = lVar20;
    plVar16 = (longlong *)FWmfMediaTracks::CreateTopology(*(undefined8 *)(param_1 + 0x40),&local_50)
    ;
    if (*(longlong *)(lVar17 + 0x60) == 0) {
      lVar20 = 1;
      goto LAB_14090d759;
    }
    p_Var1 = (LPCRITICAL_SECTION)(lVar17 + 0x18);
    BVar8 = TryEnterCriticalSection(p_Var1);
    if (BVar8 == 0) {
      EnterCriticalSection(p_Var1);
    }
    if (*(int *)(lVar17 + 0xbc) == 4) {
      if (*plVar16 == 0) {
        FUN_14090da60(lVar17);
        *(undefined4 *)(lVar17 + 0xbc) = 5;
        puVar18 = (undefined8 *)operator_new(0x10);
        if (puVar18 != (undefined8 *)0x0) {
          *puVar18 = 0;
          *(undefined4 *)(puVar18 + 1) = 3;
          puVar4 = *(undefined8 **)(lVar17 + 0x50);
          *(undefined8 **)(lVar17 + 0x50) = puVar18;
          *puVar4 = puVar18;
        }
      }
      else {
        iVar15 = (**(code **)(**(longlong **)(lVar17 + 0x60) + 0x38))
                           (*(longlong **)(lVar17 + 0x60),1);
        if (iVar15 < 0) {
          *(undefined4 *)(lVar17 + 0xbc) = 1;
          puVar18 = (undefined8 *)operator_new(0x10);
          if (puVar18 != (undefined8 *)0x0) {
            *puVar18 = 0;
            *(undefined4 *)(puVar18 + 1) = 4;
            puVar4 = *(undefined8 **)(lVar17 + 0x50);
            *(undefined8 **)(lVar17 + 0x50) = puVar18;
            *puVar4 = puVar18;
          }
        }
      }
    }
    else {
      plVar5 = (longlong *)*plVar16;
      if (*(char *)(lVar17 + 0x70) == '\0') {
        FUN_140900610(lVar17);
      }
      else {
        plVar19 = *(longlong **)(lVar17 + 0xa0);
        if (plVar19 != plVar5) {
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 8))(plVar5);
            plVar19 = *(longlong **)(lVar17 + 0xa0);
          }
          if (plVar19 != (longlong *)0x0) {
            (**(code **)(*plVar19 + 0x10))();
          }
          *(longlong *)(lVar17 + 0xa0) = *plVar16;
        }
      }
    }
    *(longlong *)(lVar17 + 0x40) = local_58;
    LeaveCriticalSection(p_Var1);
    bVar6 = false;
    lVar20 = 1;
  }
  if ((lVar20 != 0) && (local_50 != (longlong *)0x0)) {
    (**(code **)(*local_50 + 0x10))();
  }
  if (bVar6) {
    FWmfMediaSession::Shutdown(*(undefined8 *)(param_1 + 0x38));
    (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),4);
  }
LAB_14090d799:
  if ((cVar2 != '\0') || (cVar3 != '\0')) {
    lVar17 = *(longlong *)(param_1 + 0x40);
    BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(lVar17 + 0xa0));
    if (BVar8 == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar17 + 0xa0));
    }
    *(undefined1 *)(lVar17 + 0xf0) = 0;
    *(undefined1 *)(lVar17 + 0x158) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar17 + 0xa0));
  }
  return;
}



// FUNCTION 14090d920 FUN_14090d920 body=309 status=ok
// SIG undefined FUN_14090d920(void)

void FUN_14090d920(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong local_res8;
  undefined4 *local_28;
  undefined8 local_20;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  uVar9 = 0;
  local_28 = (undefined4 *)0x0;
  local_20 = 0;
  if ((0 < *(longlong *)(lVar2 + 0x40)) &&
     (((**(code **)(*(longlong *)(lVar2 + 8) + 0x30))(lVar2 + 8,&local_res8), local_res8 < 0 ||
      (*(longlong *)(lVar2 + 0x40) < local_res8)))) {
    if (*(char *)(lVar2 + 0xc0) == '\0') {
      (**(code **)(**(longlong **)(lVar2 + 0x60) + 0x58))();
    }
    FWmfMediaSession::HandleSessionEnded(lVar2);
  }
  while (puVar4 = local_28, lVar7 = **(longlong **)(lVar2 + 0x58), lVar7 != 0) {
    uVar1 = *(undefined4 *)(lVar7 + 8);
    uVar3 = *(undefined8 *)(lVar2 + 0x58);
    *(longlong *)(lVar2 + 0x58) = lVar7;
    *(undefined4 *)(lVar7 + 8) = 0;
    FMemory::operator_delete(uVar3,0x10);
    uVar8 = local_20;
    lVar7 = (longlong)(int)local_20;
    iVar5 = (int)local_20 + 1;
    local_20 = CONCAT44(local_20._4_4_,iVar5);
    if (local_20._4_4_ < iVar5) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_28,uVar8 & 0xffffffff);
    }
    local_28[lVar7] = uVar1;
  }
  uVar8 = (ulonglong)((longlong)(local_28 + (int)local_20) + (3 - (longlong)local_28)) >> 2;
  if (local_28 + (int)local_20 < local_28) {
    uVar8 = uVar9;
  }
  puVar6 = local_28;
  if (uVar8 != 0) {
    do {
      (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),*puVar6);
      uVar9 = uVar9 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar9 != uVar8);
  }
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  FMemory::Free(puVar4);
  return;
}



// FUNCTION 14090da60 FUN_14090da60 body=755 status=ok
// SIG undefined FUN_14090da60(void)

void FUN_14090da60(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  longlong *local_res18;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x10))();
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x10))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x88);
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*plVar1 + 0x10))();
    *plVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 200,0);
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0xe4) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xd8,0);
  }
  plVar2 = *(longlong **)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (plVar2 != (longlong *)0x0) {
    local_res18 = (longlong *)0x0;
    iVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,&local_res18);
    if (-1 < iVar3) {
      (**(code **)*local_res18)(local_res18,&DAT_144159920,param_1 + 0x78);
    }
    iVar3 = _guard_xfg_dispatch_icall_nop
                      (*(undefined8 *)(param_1 + 0x60),&DAT_144159270,&DAT_144159930,param_1 + 0x80)
    ;
    if (-1 < iVar3) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x20))
                        (*(longlong **)(param_1 + 0x80),0,param_1 + 0xb8);
      if (iVar3 < 0) {
        *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
      }
    }
    _guard_xfg_dispatch_icall_nop
              (*(undefined8 *)(param_1 + 0x60),&DAT_144159270,&DAT_144159940,plVar1);
    plVar2 = (longlong *)*plVar1;
    if (plVar2 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,1,0);
      local_res8[0] = 0;
      local_res10[0] = 0;
      *(bool *)(param_1 + 0x10) = -1 < iVar3;
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x18))((longlong *)*plVar1,0,1,local_res10);
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0,1,local_res8);
        if (-1 < iVar3) {
          local_44 = local_res10[0];
          local_3c = local_res8[0];
          local_48[0] = 1;
          local_40 = 1;
          TRangeSet<float>::Add(param_1 + 200,local_48);
        }
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x18))((longlong *)*plVar1,1,1,local_res10);
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,1,1,local_res8);
        if (-1 < iVar3) {
          local_44 = local_res8[0];
          local_3c = local_res10[0];
          local_48[0] = 1;
          local_40 = 1;
          TRangeSet<float>::Add(param_1 + 200,local_48);
        }
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x18))((longlong *)*plVar1,0,0,local_res10);
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,0,0,local_res8);
        if (-1 < iVar3) {
          local_44 = local_res10[0];
          local_3c = local_res8[0];
          local_48[0] = 1;
          local_40 = 1;
          TRangeSet<float>::Add(param_1 + 0xd8,local_48);
        }
      }
      iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x18))((longlong *)*plVar1,1,0,local_res10);
      if (-1 < iVar3) {
        iVar3 = (**(code **)(*(longlong *)*plVar1 + 0x20))((longlong *)*plVar1,1,0,local_res8);
        if (-1 < iVar3) {
          local_44 = local_res8[0];
          local_3c = local_res10[0];
          local_48[0] = 1;
          local_40 = 1;
          TRangeSet<float>::Add(param_1 + 0xd8,local_48);
        }
      }
    }
    if (local_res18 != (longlong *)0x0) {
      (**(code **)(*local_res18 + 0x10))();
    }
  }
  return;
}



// FUNCTION 14090dd60 FUN_14090dd60 body=2211 status=ok
// SIG undefined FUN_14090dd60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14090dd60(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  char cVar5;
  wint_t wVar6;
  wint_t wVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  wint_t *pwVar15;
  undefined8 *puVar16;
  wint_t *pwVar17;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined4 local_290;
  undefined2 *local_288;
  undefined8 local_280;
  undefined4 *local_268;
  ulonglong *puStack_260;
  longlong *local_258;
  undefined4 *puStack_250;
  longlong local_248;
  undefined8 local_240;
  longlong local_238;
  undefined8 local_230;
  longlong local_228;
  longlong local_220;
  undefined8 local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [8];
  longlong *local_1c0;
  undefined1 local_1b0 [8];
  longlong *local_1a8;
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
  undefined1 local_f8 [16];
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined4 local_b8 [4];
  undefined1 local_a8 [8];
  longlong *local_a0;
  char local_90;
  undefined4 local_88 [4];
  undefined1 local_78 [8];
  longlong *local_70;
  char local_60;
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  local_288 = (undefined2 *)0x0;
  local_280 = 0;
  local_238 = 0;
  local_230 = 0;
  local_248 = 0;
  local_240 = 4;
  local_258 = param_3;
  local_228 = param_1;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  lVar10 = local_248;
  FGenericPlatformString::Memcpy(local_248,&DAT_144147308,8);
  local_290 = 0;
  local_298 = 0;
  cVar5 = FUN_1404e14f0(param_2,&local_248,&local_288,&local_238);
  if (lVar10 != 0) {
    FMemory::Free(lVar10);
  }
  if (cVar5 == '\0') {
    plVar12 = (longlong *)CONCAT44(local_208._4_4_,(undefined4)local_208);
    puVar3 = (undefined4 *)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
    if (param_5 != (longlong *)0x0) {
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_198,L"No URI scheme found",L"FWmfMediaFactoryModule",L"NoSchemeFound"
                        );
      iVar8 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_5,iVar8);
      }
      FText::FText(*param_5 + (longlong)iVar8 * 0x18,uVar9);
      puVar3 = (undefined4 *)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
      plVar12 = (longlong *)CONCAT44(local_208._4_4_,(undefined4)local_208);
      local_118 = local_190;
joined_r0x00014090e134:
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_118 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        plVar12 = (longlong *)CONCAT44(local_208._4_4_,(undefined4)local_208);
        puVar3 = (undefined4 *)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
        if ((int)lVar10 == 1) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar2 = (int *)((longlong)local_118 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar12 = (longlong *)CONCAT44(local_208._4_4_,(undefined4)local_208);
          puVar3 = (undefined4 *)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
          if (iVar8 == 1) {
            (**(code **)(*local_118 + 8))(local_118,1);
            plVar12 = (longlong *)CONCAT44(local_208._4_4_,(undefined4)local_208);
            puVar3 = (undefined4 *)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
          }
        }
      }
    }
  }
  else {
    puVar11 = *(undefined8 **)(param_1 + 0x30);
    puVar16 = puVar11 + (longlong)*(int *)(param_1 + 0x38) * 2;
    if (puVar11 != puVar16) {
      do {
        puVar14 = &DAT_143f3eda8;
        if ((int)local_280 != 0) {
          puVar14 = local_288;
        }
        if (*(int *)(puVar11 + 1) == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)*puVar11;
        }
        iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar13,puVar14);
        if (iVar8 == 0) {
          pwVar15 = &DAT_144159bf0;
          pwVar17 = &DAT_144159bf0;
          puVar14 = &DAT_143f3eda8;
          if ((int)local_280 != 0) {
            puVar14 = local_288;
          }
          goto LAB_14090e1e6;
        }
        puVar11 = puVar11 + 2;
      } while (puVar11 != puVar16);
    }
    plVar12 = (longlong *)CONCAT44(local_208._4_4_,(undefined4)local_208);
    puVar3 = (undefined4 *)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
    if (param_5 != (longlong *)0x0) {
      lVar10 = FText::FromString(local_d0,&local_288);
      uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_120,L"The URI scheme \'{0}\' is not supported",
                         L"FWmfMediaFactoryModule",L"SchemeNotSupported");
      puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_f8,uVar9);
      local_88[0] = 4;
      FText::FText(local_78,lVar10);
      local_218 = *puVar11;
      local_268 = local_88;
      puStack_260 = local_58;
      local_210 = puVar11[1];
      local_60 = '\x01';
      if (local_210 != 0) {
        LOCK();
        *(int *)(local_210 + 8) = *(int *)(local_210 + 8) + 1;
        UNLOCK();
      }
      local_1e8 = local_268;
      uStack_1e0 = puStack_260;
      uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
              TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8,&local_1e8);
      uVar9 = FText::Format(local_138,&local_218,uVar9);
      FText::FText(local_1b0,uVar9);
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_130 + 1;
        lVar4 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar2 = (int *)((longlong)local_130 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_130 + 8))(local_130,1);
          }
        }
      }
      TArray<FFormatArgumentValue,FDefaultAllocator>::
      ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1d8);
      if ((local_60 != '\0') && (local_60 = '\0', local_70 != (longlong *)0x0)) {
        LOCK();
        plVar12 = local_70 + 1;
        lVar4 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar2 = (int *)((longlong)local_70 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
      plVar12 = (longlong *)puVar11[1];
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      plVar12 = *(longlong **)(lVar10 + 8);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar12 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar2 = (int *)((longlong)plVar12 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12,1);
          }
        }
      }
      iVar8 = (int)param_5[1];
      *(int *)(param_5 + 1) = iVar8 + 1;
      if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_5,iVar8);
      }
      FText::FText(*param_5 + (longlong)iVar8 * 0x18,local_1b0);
      if (local_1a8 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_1a8 + 1;
        lVar10 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_1a8)(local_1a8);
          LOCK();
          piVar2 = (int *)((longlong)local_1a8 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*local_1a8 + 8))(local_1a8,1);
          }
        }
      }
      puVar3 = (undefined4 *)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
      plVar12 = (longlong *)CONCAT44(local_208._4_4_,(undefined4)local_208);
      goto joined_r0x00014090e134;
    }
  }
LAB_14090e160:
  uVar9 = 0;
  goto LAB_14090e162;
LAB_14090e1e6:
  wVar6 = *(wint_t *)((longlong)pwVar17 + (longlong)(puVar14 + -0xa20acdf8));
  if ((wVar6 == 0) && (*pwVar17 == 0)) goto LAB_14090e228;
  if (wVar6 != *pwVar17) {
    wVar6 = towlower(wVar6);
    wVar7 = towlower(*pwVar17);
    if (wVar6 != wVar7) goto LAB_14090e219;
  }
  pwVar17 = pwVar17 + 1;
  goto LAB_14090e1e6;
LAB_14090e219:
  if (wVar6 == wVar7) {
LAB_14090e228:
    FUN_141672300(&local_268,&local_238,0);
    cVar5 = TArray<FString,FDefaultAllocator>::Contains<FString>(local_228 + 0x10,&local_268);
    if (cVar5 == '\0') {
      if (param_5 != (longlong *)0x0) {
        lVar10 = FText::FromString(local_e8,&local_268);
        uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                          (local_168,L"The file extension \'{0}\' is not supported",
                           L"FWmfMediaFactoryModule",L"ExtensionNotSupported");
        plVar12 = (longlong *)FTextFormat::FTextFormat(local_108,uVar9);
        local_b8[0] = 4;
        FText::FText(local_a8,lVar10);
        local_228 = *plVar12;
        local_258 = (longlong *)local_b8;
        puStack_250 = local_88;
        local_220 = plVar12[1];
        local_90 = '\x01';
        if (local_220 != 0) {
          LOCK();
          *(int *)(local_220 + 8) = *(int *)(local_220 + 8) + 1;
          UNLOCK();
        }
        local_208 = local_258;
        uStack_200 = puStack_250;
        uVar9 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                TArray<FFormatArgumentValue,FDefaultAllocator>(local_1f8,&local_208);
        uVar9 = FText::Format(local_180,&local_228,uVar9);
        FText::FText(local_1c8,uVar9);
        if (local_178 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_178 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_178)(local_178);
            LOCK();
            piVar2 = (int *)((longlong)local_178 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_178 + 8))(local_178,1);
            }
          }
        }
        TArray<FFormatArgumentValue,FDefaultAllocator>::
        ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1f8);
        if ((local_90 != '\0') && (local_90 = '\0', local_a0 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_a0 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)local_a0 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_a0 + 8))(local_a0,1);
            }
          }
        }
        plVar12 = (longlong *)plVar12[1];
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar12 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        plVar12 = *(longlong **)(lVar10 + 8);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar12 + 1;
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar2 = (int *)((longlong)plVar12 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        iVar8 = (int)param_5[1];
        *(int *)(param_5 + 1) = iVar8 + 1;
        if (*(int *)((longlong)param_5 + 0xc) < iVar8 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(param_5,iVar8);
        }
        FText::FText(*param_5 + (longlong)iVar8 * 0x18,local_1c8);
        if (local_1c0 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_1c0 + 1;
          lVar10 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_1c0)(local_1c0);
            LOCK();
            piVar2 = (int *)((longlong)local_1c0 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_1c0 + 8))(local_1c0,1);
            }
          }
        }
        if (local_160 != (longlong *)0x0) {
          LOCK();
          plVar12 = local_160 + 1;
          lVar10 = *plVar12;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_160)(local_160);
            LOCK();
            piVar2 = (int *)((longlong)local_160 + 0xc);
            iVar8 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*local_160 + 8))(local_160,1);
            }
          }
        }
      }
      plVar12 = local_208;
      puVar3 = uStack_200;
      if (local_268 != (undefined4 *)0x0) {
        FMemory::Free();
        plVar12 = local_208;
        puVar3 = uStack_200;
      }
      goto LAB_14090e160;
    }
    if (local_268 != (undefined4 *)0x0) {
      FMemory::Free();
    }
  }
  plVar12 = local_258;
  if ((param_4 != (longlong *)0x0) && (local_258 != (longlong *)0x0)) {
    FName::FName(&local_258,"PrecacheFile",1);
    cVar5 = (**(code **)(*plVar12 + 0x28))(plVar12,&local_258,0);
    if (cVar5 != '\0') {
      puVar14 = &DAT_143f3eda8;
      if ((int)local_280 != 0) {
        puVar14 = local_288;
      }
      do {
        wVar6 = *(wint_t *)((longlong)pwVar15 + (longlong)(puVar14 + -0xa20acdf8));
        if ((wVar6 == 0) && (*pwVar15 == 0)) break;
        if (wVar6 != *pwVar15) {
          wVar6 = towlower(wVar6);
          wVar7 = towlower(*pwVar15);
          if (wVar6 != wVar7) goto LAB_14090e566;
        }
        pwVar15 = pwVar15 + 1;
      } while( true );
    }
  }
  goto LAB_14090e5fc;
LAB_14090e566:
  if (wVar6 != wVar7) {
    uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_150,L"Precaching is supported for local files only",
                       L"FWmfMediaFactoryModule",L"PrecachingNotSupported");
    iVar8 = (int)param_4[1];
    *(int *)(param_4 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_4 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_4,iVar8);
    }
    FText::FText(*param_4 + (longlong)iVar8 * 0x18,uVar9);
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_148 + 1;
      lVar10 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar2 = (int *)((longlong)local_148 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_148 + 8))(local_148,1);
        }
      }
    }
  }
LAB_14090e5fc:
  puVar3 = (undefined4 *)CONCAT44(uStack_200._4_4_,(undefined4)uStack_200);
  plVar12 = (longlong *)CONCAT44(local_208._4_4_,(undefined4)local_208);
  uVar9 = 1;
LAB_14090e162:
  local_208 = plVar12;
  uStack_200 = puVar3;
  if (local_238 != 0) {
    FMemory::Free();
  }
  if (local_288 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar9;
}



// FUNCTION 14090e610 CreatePlayer body=315 status=ok
// SIG undefined CreatePlayer(void)

undefined8 *
FWmfMediaFactoryModule::CreatePlayer(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined4 local_res10 [2];
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_res10[0] = 0;
  puVar5 = (undefined8 *)FName::FName(local_res10,"WmfMedia",1);
  uVar8 = *puVar5;
  uVar6 = FUN_14168dc80();
  plVar7 = (longlong *)FUN_141690010(uVar6,uVar8);
  bVar9 = plVar7 == (longlong *)0x0;
  if (bVar9) {
    puVar5 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    uVar8 = 0;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar7 + 0x40))(plVar7,local_18,param_3);
    uVar8 = *puVar5;
  }
  *param_2 = uVar8;
  param_2[1] = puVar5[1];
  puVar5[1] = 0;
  *puVar5 = 0;
  plVar7 = plStack_20;
  if (bVar9) {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  if ((!bVar9) && (local_10 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  }
  return param_2;
}



// FUNCTION 14090e750 GetDisplayName body=47 status=ok
// SIG undefined GetDisplayName(void)

undefined8 FWmfMediaFactoryModule::GetDisplayName(undefined8 param_1,undefined8 param_2)

{
  FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
            (param_2,L"Windows Media Foundation",L"FWmfMediaFactoryModule",L"MediaPlayerDisplayName"
            );
  return param_2;
}



// FUNCTION 14090e780 FUN_14090e780 body=123 status=ok
// SIG undefined FUN_14090e780(void)

undefined8 * FUN_14090e780(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146862cc0) {
    _Init_thread_header(&DAT_146862cc0);
    if (DAT_146862cc0 == -1) {
      FName::FName(&DAT_146862cb8,L"WmfMedia",1);
      _Init_thread_footer(&DAT_146862cc0);
    }
  }
  *param_2 = DAT_146862cb8;
  return param_2;
}



// FUNCTION 14090e820 StartupModule body=3176 status=ok
// SIG undefined StartupModule(void)

void FWmfMediaFactoryModule::StartupModule(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 4;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159d90,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159d98,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"3gp2",10);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"3gpp",10);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159dc0,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"adts",10);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159dd8,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159de0,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"m2ts",10);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159df8,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159e00,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159e08,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159e10,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159e18,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"sami",10);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159e30,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159e38,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159e40,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159e48,8);
  iVar1 = *(int *)(param_1 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1 + 1;
  if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 8));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"Windows",0x10);
  iVar1 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar1 + 1;
  if (*(int *)(param_1 + 0x24) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x18,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x18));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"audcap",0xe);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159bf0,10);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"http",10);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"httpd",0xc);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"https",0xc);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144159e90,8);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"rtsp",10);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"rtspt",0xc);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"rtspu",0xc);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
  local_28 = 0;
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  local_20 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"vidcap",0xe);
  iVar1 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x30) = iVar1 + 1;
  if (*(int *)(param_1 + 0x34) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x28,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x28));
  *puVar5 = uVar2;
  *(undefined4 *)(puVar5 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar5 + 0xc) = local_20._4_4_;
  puVar5 = (undefined8 *)FName::FName(local_res8,"Media",1);
  uVar2 = *puVar5;
  uVar3 = FUN_14168dc80();
  plVar4 = (longlong *)FUN_141690010(uVar3,uVar2);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x68))(plVar4,param_1 + -8);
  }
  return;
}



// FUNCTION 14090f490 UWmfMediaSettings body=43 status=ok
// SIG undefined UWmfMediaSettings(void)

undefined8 * UWmfMediaSettings::UWmfMediaSettings(undefined8 *param_1)

{
  FUN_1417818c0();
  *(undefined2 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_143fca7c0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 14090f4c0 FUN_14090f4c0 body=104 status=ok
// SIG undefined FUN_14090f4c0(void)

undefined8 * FUN_14090f4c0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = &PTR_FUN_144159b48;
  puVar1[1] = &PTR_LAB_144159b80;
  puVar1[2] = 0;
  puVar2 = puVar1 + 1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return puVar2;
}



// FUNCTION 14090f530 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWmfMediaSettings::GetPrivateStaticClass(void)

{
  if (DAT_146862cd8 == 0) {
    FUN_14171ccd0(L"/Script/WmfMediaFactory",L"WmfMediaSettings",&DAT_146862cd8,FUN_140447710,0x30,
                  0x10000004,0,L"Engine",&LAB_14090f620,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146862cd8;
}



// FUNCTION 14090f5f0 FUN_14090f5f0 body=47 status=ok
// SIG undefined FUN_14090f5f0(void)

longlong FUN_14090f5f0(void)

{
  if (DAT_146862cc8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146862cc8,&PTR_s__Script_WmfMediaFactory_14415a088);
  }
  return DAT_146862cc8;
}



// FUNCTION 14090f630 FUN_14090f630 body=47 status=ok
// SIG undefined FUN_14090f630(void)

longlong FUN_14090f630(void)

{
  if (DAT_146862cd0 == 0) {
    FUN_141786440(&DAT_146862cd0,&PTR_GetPrivateStaticClass_144159f20);
  }
  return DAT_146862cd0;
}



// FUNCTION 14090f670 Exec body=346 status=ok
// SIG undefined Exec(void)

undefined1
FTcpMessagingModule::Exec(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  cVar1 = FParse::Command(local_res18,L"TCPMESSAGING",1);
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = FParse::Command(local_res18,L"STATUS",1);
  if (cVar1 == '\0') {
    cVar1 = FParse::Command(local_res18,L"RESTART",1);
    if (cVar1 != '\0') {
      RestartServices(param_1);
      return 1;
    }
    cVar1 = FParse::Command(local_res18,L"SHUTDOWN",1);
    if (cVar1 != '\0') {
      ShutdownBridge(param_1);
      return 1;
    }
    FOutputDevice::Log(param_4,L"Usage: TCPMESSAGING <Command>");
    FOutputDevice::Log(param_4,&DAT_143f3eda8);
    FOutputDevice::Log(param_4,L"Command");
    FOutputDevice::Log(param_4,L"    RESTART = Restarts the message bridge, if enabled");
    FOutputDevice::Log(param_4,L"    SHUTDOWN = Shut down the message bridge, if running");
    pwVar2 = L"    STATUS = Displays the status of the TCP message transport";
  }
  else {
    FOutputDevice::LogfImpl(param_4,L"Protocol Version: %d",1);
    if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
      pwVar2 = L"Message Bridge: Not initialized.";
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
      pwVar2 = L"Message Bridge: Initialized and enabled";
      if (cVar1 == '\0') {
        pwVar2 = L"Message Bridge: Initialized, but disabled";
      }
    }
  }
  FOutputDevice::Log(param_4,pwVar2);
  return 1;
}



// FUNCTION 14090f7d0 ShutdownModule body=53 status=ok
// SIG undefined ShutdownModule(void)

void FTcpMessagingModule::ShutdownModule(longlong param_1)

{
  param_1 = param_1 + -8;
  FUN_140483870(&DAT_1464af388,param_1);
  FUN_140483870(&DAT_1464af370,param_1);
  ShutdownBridge(param_1);
  return;
}



// FUNCTION 14090f810 AddOutgoingConnection body=175 status=ok
// SIG undefined AddOutgoingConnection(void)

void FTcpMessagingModule::AddOutgoingConnection(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_res20 [8];
  
  cVar5 = FIPv4Endpoint::Parse(param_2);
  if ((cVar5 != '\0') && (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 != (longlong *)0x0)) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar7 = iVar6 == 0;
    if (bVar7) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (!bVar7) {
      while( true ) {
        LOCK();
        bVar7 = iVar6 == (int)plVar3[1];
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar7) break;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar7 = iVar6 == 0;
        if (bVar7) {
          *(int *)(plVar3 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar7) {
          return;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x18) != 0) {
          FUN_140911190(*(longlong *)(param_1 + 0x18),local_res20);
        }
        LOCK();
        plVar1 = plVar3 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          iVar6 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14090f8c0 RemoveOutgoingConnection body=231 status=ok
// SIG undefined RemoveOutgoingConnection(void)

void FTcpMessagingModule::RemoveOutgoingConnection(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined8 local_res20;
  
  cVar7 = FIPv4Endpoint::Parse(param_2,&local_res20);
  if ((cVar7 != '\0') && (plVar5 = *(longlong **)(param_1 + 0x20), plVar5 != (longlong *)0x0)) {
    LOCK();
    iVar8 = (int)plVar5[1];
    bVar10 = iVar8 == 0;
    if (bVar10) {
      *(int *)(plVar5 + 1) = 0;
      iVar8 = 0;
    }
    UNLOCK();
    if (!bVar10) {
      while( true ) {
        LOCK();
        bVar10 = iVar8 == (int)plVar5[1];
        if (bVar10) {
          *(int *)(plVar5 + 1) = iVar8 + 1;
        }
        UNLOCK();
        if (bVar10) break;
        LOCK();
        iVar8 = (int)plVar5[1];
        bVar10 = iVar8 == 0;
        if (bVar10) {
          *(int *)(plVar5 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar10) {
          return;
        }
      }
      if (plVar5 != (longlong *)0x0) {
        lVar6 = *(longlong *)(param_1 + 0x18);
        if ((lVar6 != 0) && (puVar9 = (undefined8 *)operator_new(0x10), puVar9 != (undefined8 *)0x0)
           ) {
          *puVar9 = 0;
          puVar9[1] = local_res20;
          LOCK();
          puVar3 = (undefined8 *)(lVar6 + 0xc0);
          puVar4 = (undefined8 *)*puVar3;
          *puVar3 = puVar9;
          UNLOCK();
          LOCK();
          *puVar4 = puVar9;
          UNLOCK();
        }
        LOCK();
        plVar1 = plVar5 + 1;
        lVar6 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14090f9b0 `scalar_deleting_destructor' body=177 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FTcpMessagingModule::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x18);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *(undefined ***)(param_1 + 8) = IModuleInterface::vftable;
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14090fa70 FUN_14090fa70 body=369 status=ok
// SIG undefined FUN_14090fa70(void)

longlong *
FUN_14090fa70(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  
  plVar3 = (longlong *)param_4[1];
  lVar4 = *param_1;
  uVar5 = *param_4;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)param_3[1];
  uVar7 = *param_3;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar4 + 0x10) = uVar7;
  *(longlong **)(lVar4 + 0x18) = plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  *(longlong **)(lVar4 + 0x28) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(lVar4 + 0x30) = 0;
  iVar12 = *(int *)(param_5 + 1);
  param_5 = (undefined8 *)*param_5;
  *(int *)(lVar4 + 0x38) = iVar12;
  if (iVar12 == 0) {
    *(undefined4 *)(lVar4 + 0x3c) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(lVar4 + 0x30,iVar12,0);
    puVar11 = *(undefined8 **)(lVar4 + 0x30);
    do {
      *puVar11 = *param_5;
      lVar4 = param_5[1];
      puVar11[1] = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      puVar11 = puVar11 + 2;
      param_5 = param_5 + 2;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar12 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  lVar4 = *param_1;
  lVar10 = param_1[2];
  lVar8 = param_1[1];
  lVar9 = *(longlong *)(lVar4 + 0x48);
  *param_2 = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 0x48) = *(int *)(lVar9 + 0x48) + 1;
    UNLOCK();
  }
  FUN_140915370(lVar4,lVar8,(int)lVar10,1);
  return param_2;
}



// FUNCTION 14090fbf0 FUN_14090fbf0 body=644 status=ok
// SIG undefined FUN_14090fbf0(void)

int * FUN_14090fbf0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *_Src;
  int iVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  char cVar19;
  bool local_res8;
  int local_res10 [2];
  
  iVar18 = 1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar15 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar15);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar15 = (int)param_1[6];
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar15 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar15;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar15 & 0x1f);
  puVar5 = (undefined4 *)*param_3;
  uVar8 = puVar5[1];
  uVar9 = puVar5[2];
  uVar10 = puVar5[3];
  _Src = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x28);
  puVar6 = (undefined8 *)param_3[1];
  *_Src = *puVar5;
  _Src[1] = uVar8;
  _Src[2] = uVar9;
  _Src[3] = uVar10;
  *(undefined8 *)(_Src + 4) = *puVar6;
  lVar17 = puVar6[1];
  *(longlong *)(_Src + 6) = lVar17;
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  _Src[8] = 0xffffffff;
  local_res8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    lVar17 = (longlong)local_res10[0];
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      lVar7 = *param_1;
      plVar14 = *(longlong **)(lVar7 + 0x18 + lVar17 * 0x28);
      iVar18 = local_res10[0];
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar14 + 1;
        lVar11 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          iVar15 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar18 = local_res10[0];
          if (iVar15 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
            iVar18 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar7 + lVar17 * 0x28),_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar18;
      goto LAB_14090fe50;
    }
  }
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar16) {
    uVar13 = (uVar16 >> 1) + 8;
    iVar18 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    iVar15 = 0x20;
    cVar19 = '\0';
    if (uVar13 != 0) {
      iVar15 = 0x1f - iVar18;
    }
    uVar13 = (uVar16 >> 1) + 7;
    iVar18 = 0x1f;
    if (uVar13 != 0) {
      for (; uVar13 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uVar13 != 0) {
      cVar19 = '\x1f' - (char)iVar18;
    }
    iVar18 = 1 << (~(byte)((iVar15 << 0x1a) >> 0x1f) & 0x20U - cVar19 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar18 <= (int)param_1[9])))) {
    iVar18 = *param_2;
    uVar16 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar16 = (int)param_1[9] - 1U & uVar16;
    _Src[9] = uVar16;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    _Src[8] = *(undefined4 *)
               ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar18;
  }
  else {
    *(int *)(param_1 + 9) = iVar18;
    TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14090fe50:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14090fe80 FUN_14090fe80 body=754 status=ok
// SIG undefined FUN_14090fe80(void)

int * FUN_14090fe80(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  void *_Dst;
  char cVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  bool local_res8;
  
  iVar8 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar10 * 0x20 + 4 + *param_1);
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar14 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar14 +
                   (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  plVar14 = (longlong *)((longlong)iVar10 * 0x20 + *param_1);
  uVar3 = param_3[1];
  *plVar14 = *(longlong *)*param_3;
  FString::FString(plVar14 + 1,uVar3);
  *(undefined4 *)(plVar14 + 3) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar13 != 1) {
    lVar4 = *plVar14;
    iVar10 = iVar15;
    if (uVar13 != 0) {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar11 = *(int *)((longlong)plVar7 +
                       ((longlong)((int)((ulonglong)lVar4 >> 0x20) + (int)lVar4) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar11 != -1) {
        do {
          iVar10 = iVar11;
          if (*(longlong *)((longlong)iVar11 * 0x20 + *param_1) == lVar4) break;
          iVar11 = *(int *)((longlong)iVar11 * 0x20 + 0x18 + *param_1);
          iVar10 = iVar15;
        } while (iVar11 != -1);
      }
    }
    local_res8 = iVar10 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar10 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar14,0x18);
      iVar8 = *param_2;
      bVar5 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      puVar9 = (undefined4 *)((longlong)iVar8 * 0x20 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      puVar9[1] = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar14 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar14 == (longlong *)0x0) {
        plVar14 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar14 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_140910149;
    }
  }
  if (3 < uVar13) {
    uVar6 = (uVar13 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar15;
    }
    uVar6 = (uVar13 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar12 = '\x1f' - (char)iVar15;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar13 = (int)((ulonglong)*plVar14 >> 0x20) + (int)*plVar14 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar14 + 0x1c) = uVar13;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar14 + 3) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140910149:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140910180 TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageContext,1>_> body=230 status=ok
// SIG undefined TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageContext,1>_>(void)

undefined8 *
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageContext,1>_>::
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageContext,1>_>
          (undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  
  plVar4 = (longlong *)param_4[1];
  uVar10 = *param_4;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  param_1[1] = param_2;
  *param_1 = &PTR_GetPoolName_14415b6e8;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 3) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
  param_1[4] = uVar10;
  param_1[5] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar10 = FDelegateHandle::GenerateNewID();
  param_1[6] = uVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  *param_1 = &PTR_GetPoolName_14415b730;
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 140910270 FArrayReader body=89 status=ok
// SIG undefined FArrayReader(void)

undefined8 * FArrayReader::FArrayReader(undefined8 *param_1,undefined1 param_2)

{
  FArchive::FArchive();
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__143f747a8;
  FArchive::SetIsLoading(param_1,1);
  FArchive::SetIsPersistent(param_1,param_2);
  return param_1;
}



// FUNCTION 1409102d0 FTcpMessageTransport body=434 status=ok
// SIG undefined FTcpMessageTransport(void)

undefined8 *
FTcpMessageTransport::FTcpMessageTransport
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  puVar5 = (undefined8 *)0x0;
  *param_1 = &PTR_IsPromotedBuild_14415b050;
  param_1[1] = &PTR_GetDebugName_14415b080;
  param_1[2] = *param_2;
  param_1[3] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_1 + 3,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[3],_Src,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_1 + 5) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  uVar2 = FName::FName(local_res8,L"WINDOWS",1);
  uVar2 = FUN_1419c6b80(uVar2);
  param_1[6] = uVar2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  puVar3 = (undefined8 *)operator_new(0x30);
  puVar4 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    *(undefined8 *)((longlong)puVar3 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar4 = puVar3;
  }
  param_1[0x15] = puVar4;
  param_1[0x14] = puVar4;
  puVar3 = (undefined8 *)operator_new(0x18);
  puVar4 = puVar5;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar4 = puVar3;
  }
  param_1[0x17] = puVar4;
  param_1[0x16] = puVar4;
  puVar4 = (undefined8 *)operator_new(0x10);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
    puVar5 = puVar4;
  }
  param_1[0x19] = puVar5;
  param_1[0x18] = puVar5;
  param_1[0x1b] = 0;
  uVar2 = FUN_1415d42a0(param_1,L"FTcpMessageTransport",0x20000,0,0xffffffffffffffff);
  param_1[0x1a] = uVar2;
  return param_1;
}



// FUNCTION 140910490 FUN_140910490 body=321 status=ok
// SIG undefined FUN_140910490(void)

undefined8 *
FUN_140910490(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_res20 [2];
  
  puVar2 = (undefined8 *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_Init_14415b3f8;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar2 = puVar1;
  }
  param_1[9] = puVar2;
  param_1[8] = puVar2;
  FDateTime::UtcNow(param_1 + 10);
  param_1[0xb] = *param_3;
  FGuid::NewGuid(param_1 + 0xc);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = param_2;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = param_4;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x19),4000);
  local_res20[0] = 0;
  (**(code **)(*(longlong *)param_1[0x11] + 0xd8))((longlong *)param_1[0x11],0x200000,local_res20);
  (**(code **)(*(longlong *)param_1[0x11] + 0xd0))((longlong *)param_1[0x11],0x200000,local_res20);
  return param_1;
}



// FUNCTION 1409105e0 FUN_1409105e0 body=146 status=ok
// SIG undefined FUN_1409105e0(void)

void FUN_1409105e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[5];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = IDelegateInstance::vftable;
    return;
  }
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
    *param_1 = IDelegateInstance::vftable;
    return;
  }
  *param_1 = IDelegateInstance::vftable;
  return;
}



// FUNCTION 140910680 FUN_140910680 body=121 status=ok
// SIG undefined FUN_140910680(void)

void FUN_140910680(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  while (lVar3 != 0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    if (lVar3 != 0) {
      plVar4 = *(longlong **)(lVar3 + 0x28);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && (plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      FMemory::operator_delete(lVar3,0x30);
    }
    lVar3 = *(longlong *)(param_1 + 8);
  }
  return;
}



// FUNCTION 140910700 ~FJsonStructDeserializerBackend body=114 status=ok
// SIG undefined ~FJsonStructDeserializerBackend(void)

void FJsonStructDeserializerBackend::~FJsonStructDeserializerBackend(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[5];
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
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR__purecall_1441594e8;
  return;
}



// FUNCTION 140910780 ~FAkAudioEventEvaluationData body=146 status=ok
// SIG undefined ~FAkAudioEventEvaluationData(void)

void FAkAudioEventEvaluationData::~FAkAudioEventEvaluationData(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[2];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = &PTR__purecall_144147258;
    return;
  }
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
    *param_1 = &PTR__purecall_144147258;
    return;
  }
  *param_1 = &PTR__purecall_144147258;
  return;
}



// FUNCTION 140910820 operator<< body=86 status=ok
// SIG undefined operator<<(void)

undefined8 operator<<(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,param_2);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return param_1;
}



// FUNCTION 140910880 FUN_140910880 body=241 status=ok
// SIG undefined FUN_140910880(void)

longlong * FUN_140910880(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 local_28 [16];
  undefined1 *local_18;
  undefined1 **local_10;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2,4);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2 + 1,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,param_2 + 1,4);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_28,param_1);
  local_18 = local_28;
  local_10 = &local_18;
  FUN_141661f40(&local_18,param_2 + 2);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_28);
  return param_1;
}



// FUNCTION 140910980 FUN_140910980 body=389 status=ok
// SIG undefined FUN_140910980(void)

longlong * FUN_140910980(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  puVar6 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = (int)param_2[1];
  }
  plVar3 = (longlong *)param_1[1];
  if ((int *)plVar3[1] < (int *)*plVar3 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if ((((char)bVar1 < '\0') || (local_res8[0] < 0)) ||
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) != 0 && (0x100000 < local_res8[0])))) {
    *(byte *)(param_1 + 5) = bVar1 | 0x80;
    return param_1;
  }
  if ((bVar1 & 1) == 0) {
    *(int *)(param_2 + 1) = local_res8[0];
    if (0 < local_res8[0]) {
      do {
        operator<<(param_1,(longlong)(int)puVar6 * 0x10 + *param_2);
        uVar7 = (int)puVar6 + 1;
        puVar6 = (undefined8 *)(ulonglong)uVar7;
      } while ((int)uVar7 < (int)param_2[1]);
    }
    return param_1;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != local_res8[0]) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_2,local_res8[0]);
  }
  puVar8 = puVar6;
  if (local_res8[0] < 1) {
    return param_1;
  }
  do {
    iVar2 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar2);
    }
    puVar4 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_2);
    puVar5 = puVar6;
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar5 = puVar4;
    }
    operator<<(param_1,puVar5);
    uVar7 = (int)puVar8 + 1;
    puVar8 = (undefined8 *)(ulonglong)uVar7;
  } while ((int)uVar7 < local_res8[0]);
  return param_1;
}



// FUNCTION 140910b20 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TBaseRawMethodDelegateInstance<0,FMessageRouter,TTypeWrapper<void>___cdecl(void),TSharedRef<IMessageContext,1>_>
::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1409105e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 140910b60 FUN_140910b60 body=97 status=ok
// SIG undefined FUN_140910b60(void)

undefined8 * FUN_140910b60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_14415b428;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 140910bd0 FUN_140910bd0 body=72 status=ok
// SIG undefined FUN_140910bd0(void)

undefined8 * FUN_140910bd0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14415b688;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140910c20 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FBufferArchive::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  FArchive::~FArchive(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 140910c70 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FJsonStructDeserializerBackend::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FJsonStructDeserializerBackend();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140910cb0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FAkAudioEventEvaluationData::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FAkAudioEventEvaluationData();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140910cf0 FUN_140910cf0 body=263 status=ok
// SIG undefined FUN_140910cf0(void)

undefined8 * FUN_140910cf0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  
  *param_1 = &PTR_GetAddress_14415b0c0;
  if (param_1[0xe] != 0) {
    cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x15);
    if (cVar5 != '\0') {
      plVar6 = (longlong *)FWeakObjectPtr::Get(param_1 + 0x15);
      (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1[0xe],1);
    }
    FMemory::Free(param_1[0xe]);
    param_1[0xe] = 0;
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  plVar6 = (longlong *)param_1[0xc];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  *param_1 = &PTR__purecall_14415afe8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 140910e00 FUN_140910e00 body=180 status=ok
// SIG undefined FUN_140910e00(void)

undefined8 * FUN_140910e00(undefined8 *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR_Init_14415b168;
  plVar2 = (longlong *)param_1[6];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,1);
    plVar2 = (longlong *)param_1[6];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,1);
    }
  }
  if ((*(char *)(param_1 + 1) != '\0') && (param_1[4] != 0)) {
    uVar1 = FName::FName(local_res8,L"WINDOWS",1);
    plVar2 = (longlong *)FUN_1419c6b80(uVar1);
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1[4]);
    param_1[4] = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 7);
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 140910ec0 `scalar_deleting_destructor' body=326 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FTcpMessageTransport::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_IsPromotedBuild_14415b050;
  param_1[1] = &PTR_GetDebugName_14415b080;
  plVar1 = (longlong *)param_1[0x1a];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = (longlong *)param_1[0x1a];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  FUN_140915880(param_1 + 1);
  lVar2 = param_1[0x19];
  while (lVar2 != 0) {
    puVar3 = (undefined8 *)param_1[0x19];
    param_1[0x19] = *puVar3;
    FMemory::operator_delete(puVar3,0x10);
    lVar2 = param_1[0x19];
  }
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>
            (param_1 + 0x16);
  FUN_140910680(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FTextRenderComponentMIDCache::FKey,TSharedPtr<FTextRenderComponentMIDCache::FMIDData_const_,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 10,0);
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 8);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  param_1[1] = &PTR__purecall_144159598;
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe0);
  }
  return param_1;
}



// FUNCTION 140911010 FUN_140911010 body=327 status=ok
// SIG undefined FUN_140911010(void)

undefined8 * FUN_140911010(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  *param_1 = &PTR_Init_14415b3f8;
  plVar6 = (longlong *)param_1[0x12];
  if (plVar6 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x15) != '\0') {
      *(undefined1 *)(param_1 + 0x15) = 0;
      (**(code **)(*plVar6 + 0x20))();
      plVar6 = (longlong *)param_1[0x12];
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,1);
    }
  }
  if (param_1[0x11] != 0) {
    uVar5 = FName::FName(local_res8,L"WINDOWS",1);
    plVar6 = (longlong *)FUN_1419c6b80(uVar5);
    (**(code **)(*plVar6 + 0x28))(plVar6,param_1[0x11]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x19));
  plVar6 = (longlong *)param_1[0x17];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  TQueue<TSharedPtr<IMediaAudioSample,1>,0>::~TQueue<TSharedPtr<IMediaAudioSample,1>,0>(param_1 + 8)
  ;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  plVar6 = (longlong *)param_1[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  *param_1 = &PTR_IsPromotedBuild_143f60558;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 140911160 FUN_140911160 body=43 status=ok
// SIG undefined FUN_140911160(void)

undefined8 * FUN_140911160(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_14415afe8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140911190 FUN_140911190 body=794 status=ok
// SIG undefined FUN_140911190(void)

longlong * FUN_140911190(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong *puVar4;
  void *_Src;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 local_res18 [8];
  void *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  undefined2 local_68 [2];
  undefined4 local_64;
  undefined2 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  
  local_80 = 0x26;
  plVar10 = (longlong *)0x0;
  local_88 = (void *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  _Src = local_88;
  FGenericPlatformString::Memcpy(local_88,L"FTcpMessageTransport.RemoteConnection",0x4c);
  lVar13 = (longlong)(int)local_80;
  local_68[0] = 0;
  local_64 = DAT_1469f59a0;
  local_60 = 0;
  local_58 = (void *)0x0;
  local_50 = (int)local_80;
  if ((int)local_80 == 0) {
    local_4c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,local_80 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar13 * 2);
  }
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  plVar7 = (longlong *)FUN_1408d5630(local_68);
  plVar8 = plVar7;
  if (local_58 != (void *)0x0) {
    plVar8 = (longlong *)FMemory::Free();
  }
  if (_Src != (void *)0x0) {
    plVar8 = (longlong *)FMemory::Free(_Src);
  }
  if (plVar7 == (longlong *)0x0) {
    return plVar8;
  }
  (**(code **)(*DAT_1469f5998 + 0x70))(DAT_1469f5998,&local_78,0,0);
  (**(code **)(*local_78 + 0x10))(local_78,*param_2);
  (**(code **)(*local_78 + 0x30))(local_78,*(undefined2 *)(param_2 + 1));
  cVar5 = (**(code **)(*plVar7 + 0x18))(plVar7,local_78);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    lVar13 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (cVar5 == '\0') {
    uVar9 = FName::FName(local_res18,L"WINDOWS",1);
    plVar10 = (longlong *)FUN_1419c6b80(uVar9);
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x28))(plVar10,plVar7);
    return plVar10;
  }
  lVar13 = operator_new(0xf0);
  plVar8 = plVar10;
  if (lVar13 != 0) {
    plVar8 = (longlong *)FUN_140910490(lVar13,plVar7,param_2,*(undefined4 *)(param_1 + 0x28));
  }
  plVar11 = (longlong *)operator_new(0x18);
  plVar7 = plVar10;
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    *plVar11 = (longlong)&PTR_FUN_14410cc48;
    plVar11[2] = (longlong)plVar8;
    plVar7 = plVar11;
  }
  plVar11 = plVar8 + 1;
  if (plVar8 == (longlong *)0x0) {
    plVar11 = plVar10;
  }
  if (plVar11 != (longlong *)0x0) {
    if ((*plVar11 != 0) && (plVar11[1] != 0)) {
      piVar1 = (int *)(plVar11[1] + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (0 < iVar6) goto LAB_140911437;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    *plVar11 = (longlong)plVar8;
    plVar10 = (longlong *)plVar11[1];
    if (plVar7 != plVar10) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar10 = (longlong *)plVar11[1];
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      plVar11[1] = (longlong)plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar7 + 1;
      lVar13 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
LAB_140911437:
  puVar12 = (undefined8 *)operator_new(0x18);
  if (puVar12 == (undefined8 *)0x0) {
    plVar10 = (longlong *)0x0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      puVar2 = (uint *)(plVar7 + 1);
      uVar3 = *puVar2;
      plVar10 = (longlong *)(ulonglong)uVar3;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar3 == 1) {
        plVar10 = (longlong *)(**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          plVar10 = (longlong *)(**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
  }
  else {
    *puVar12 = 0;
    puVar12[1] = plVar8;
    puVar12[2] = plVar7;
    LOCK();
    puVar4 = *(ulonglong **)(param_1 + 0xb0);
    *(undefined8 **)(param_1 + 0xb0) = puVar12;
    UNLOCK();
    LOCK();
    plVar10 = (longlong *)*puVar4;
    *puVar4 = (ulonglong)puVar12;
    UNLOCK();
  }
  return plVar10;
}



// FUNCTION 1409114b0 FUN_1409114b0 body=156 status=ok
// SIG undefined FUN_1409114b0(void)

undefined8 FUN_1409114b0(longlong param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int local_res18 [4];
  
  do {
    if (param_3 < 1) {
      return 1;
    }
    while( true ) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x68))
                        (*(longlong **)(param_1 + 0x88),1,10000000);
      plVar1 = *(longlong **)(param_1 + 0x88);
      if (cVar2 != '\0') break;
      iVar3 = (**(code **)(*plVar1 + 0x70))();
      if (iVar3 == 2) {
        return 0;
      }
    }
    local_res18[0] = 0;
    cVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,param_2,param_3,local_res18);
    if (cVar2 == '\0') {
      return 0;
    }
    param_3 = param_3 - local_res18[0];
    param_2 = param_2 + local_res18[0];
  } while( true );
}



// FUNCTION 140911550 Build body=558 status=ok
// SIG undefined Build(void)

longlong * FMessageBridgeBuilder::Build(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar3[1];
    bVar10 = iVar6 == 0;
    if (bVar10) {
      *(int *)(plVar3 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (!bVar10) {
      while( true ) {
        LOCK();
        bVar10 = iVar6 == (int)plVar3[1];
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar10) break;
        LOCK();
        iVar6 = (int)plVar3[1];
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(plVar3 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar10) {
          return param_2;
        }
      }
      if (plVar3 != (longlong *)0x0) {
        lVar4 = *(longlong *)(param_1 + 0x10);
        if (lVar4 != 0) {
          puVar7 = (undefined8 *)FName::FName(local_res10,"Messaging",1);
          uVar5 = *puVar7;
          uVar8 = FUN_14168dc80();
          plVar9 = (longlong *)FUN_141690010(uVar8,uVar5);
          local_58 = *(undefined8 *)(param_1 + 0x28);
          local_50 = *(longlong **)(param_1 + 0x30);
          if (local_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_50 + 1) = (int)local_50[1] + 1;
            UNLOCK();
          }
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          local_68 = lVar4;
          local_60 = plVar3;
          plVar9 = (longlong *)
                   (**(code **)(*plVar9 + 0x40))(plVar9,local_48,param_1,&local_68,&local_58);
          if (param_2 != plVar9) {
            *param_2 = *plVar9;
            *plVar9 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_2 + 1,plVar9 + 1);
          }
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar9 = local_40 + 1;
            lVar4 = *plVar9;
            *(int *)plVar9 = (int)*plVar9 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar1 = (int *)((longlong)local_40 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_40 + 8))(local_40,1);
              }
            }
          }
          plVar9 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_60 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          plVar9 = local_50;
          if (local_50 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_50 + 1;
            lVar4 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_50)(local_50);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          if ((longlong *)*param_2 != (longlong *)0x0) {
            puVar7 = *(undefined8 **)*param_2;
            if (*(char *)(param_1 + 0x20) == '\0') {
              (*(code *)puVar7[1])();
            }
            else {
              (*(code *)*puVar7)();
            }
          }
        }
        LOCK();
        plVar9 = plVar3 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140911780 FUN_140911780 body=103 status=ok
// SIG undefined FUN_140911780(void)

void FUN_140911780(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x38);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_14415b6e8;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar3[2] = *(undefined8 *)(param_1 + 0x10);
    puVar3[3] = uVar2;
    puVar3[4] = *(undefined8 *)(param_1 + 0x20);
    lVar1 = *(longlong *)(param_1 + 0x28);
    puVar3[5] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[6] = *(undefined8 *)(param_1 + 0x30);
    *puVar3 = &PTR_GetPoolName_14415b730;
  }
  return;
}



// FUNCTION 1409117f0 FUN_1409117f0 body=64 status=ok
// SIG undefined FUN_1409117f0(void)

void FUN_1409117f0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_14415b6a8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 140911830 FUN_140911830 body=1328 status=ok
// SIG undefined FUN_140911830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140911830(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_178 [32];
  uint local_158;
  uint local_154;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  undefined8 local_138;
  undefined1 local_130 [8];
  undefined1 local_128 [16];
  undefined1 *local_118;
  undefined1 **local_110;
  undefined1 local_108 [16];
  undefined1 *local_f8;
  undefined1 **local_f0;
  undefined8 *local_e8;
  longlong *local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong local_a8 [2];
  undefined4 local_98 [4];
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar9 = (longlong *)param_2[1];
  param_2 = (longlong *)*param_2;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar9 + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  puVar11 = (undefined8 *)0x0;
  param_2[7] = 0x400;
  local_150 = 0;
  (**(code **)(*param_2 + 0x40))(param_2,&local_150);
  puVar7 = (undefined8 *)FName::ToString(&local_150,local_a8);
  if (*(int *)(puVar7 + 1) == 0) {
    puVar12 = &DAT_143f3eda8;
  }
  else {
    puVar12 = (undefined2 *)*puVar7;
  }
  uVar8 = FUN_14171c950();
  uVar8 = FUN_141799780(uVar8,0xffffffffffffffff,puVar12);
  FWeakObjectPtr::operator=(param_1 + 0xa8,uVar8);
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  plVar9 = (longlong *)FWeakObjectPtr::IsValid(param_1 + 0xa8,0,1);
  if ((char)plVar9 != '\0') {
    FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_128,param_2);
    local_118 = local_128;
    local_110 = &local_118;
    FUN_141661f40(&local_118,param_1 + 0x8c);
    FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_128);
    plVar9 = (longlong *)param_2[1];
    local_158 = 0;
    if ((uint *)plVar9[1] < (uint *)*plVar9 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,&local_158,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,&local_158,4);
      }
    }
    else {
      local_158 = *(uint *)*plVar9;
      *plVar9 = *plVar9 + 4;
    }
    plVar9 = (longlong *)(ulonglong)local_158;
    if (local_158 < 0x401) {
      *(undefined4 *)(param_1 + 0x80) = 0;
      if (*(uint *)(param_1 + 0x84) != local_158) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x78,local_158);
        plVar9 = (longlong *)(ulonglong)local_158;
      }
      uVar5 = (uint)plVar9;
      while (0 < (int)uVar5) {
        iVar3 = *(int *)(param_1 + 0x80);
        local_158 = (int)plVar9 - 1;
        *(int *)(param_1 + 0x80) = iVar3 + 1;
        if (*(int *)(param_1 + 0x84) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x78,iVar3);
        }
        puVar13 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x78));
        puVar7 = puVar11;
        if (puVar13 != (undefined8 *)0x0) {
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar7 = puVar13;
        }
        FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_108,param_2);
        local_f8 = local_108;
        local_f0 = &local_f8;
        FUN_141661f40(&local_f8,puVar7);
        FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_108);
        plVar9 = (longlong *)(ulonglong)local_158;
        uVar5 = local_158;
      }
      puVar4 = *(undefined1 **)param_2[1];
      if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
        plVar9 = (longlong *)(**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x88,1);
      }
      else {
        *(undefined1 *)(param_1 + 0x88) = *puVar4;
        plVar9 = (longlong *)param_2[1];
        *plVar9 = *plVar9 + 1;
      }
      if (*(byte *)(param_1 + 0x88) < 4) {
        FUN_1404c11e0(param_2,param_1 + 0xa0);
        FUN_1404c11e0(param_2,param_1 + 0x68);
        plVar9 = (longlong *)param_2[1];
        local_154 = 0;
        if ((uint *)plVar9[1] < (uint *)*plVar9 + 1) {
          (**(code **)(*param_2 + 0x50))(param_2,&local_154,4);
          if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
            FArchive::ByteSwap(param_2,&local_154,4);
          }
        }
        else {
          local_154 = *(uint *)*plVar9;
          *plVar9 = *plVar9 + 4;
        }
        plVar9 = (longlong *)(ulonglong)local_154;
        if ((int)local_154 < 0x81) {
          if (0 < (int)local_154) {
            local_e8 = &local_148;
            local_e0 = &local_140;
            do {
              local_154 = (int)plVar9 - 1;
              local_148 = 0;
              local_140 = 0;
              local_138 = 0;
              (**(code **)(*param_2 + 0x40))(param_2,&local_148);
              FUN_14158ce90(param_2,&local_140);
              FUN_14090fe80(param_1 + 8,local_130,&local_e8,0);
              if (local_140 != 0) {
                FMemory::Free();
              }
              plVar9 = (longlong *)(ulonglong)local_154;
            } while (0 < (int)local_154);
          }
          lVar10 = FWeakObjectPtr::Get(param_1 + 0xa8);
          uVar8 = FMemory::Malloc((longlong)
                                  (*(int *)(lVar10 + 0x40) + -1 + *(int *)(lVar10 + 0x44) &
                                  -*(int *)(lVar10 + 0x44)),0);
          *(undefined8 *)(param_1 + 0x70) = uVar8;
          plVar9 = (longlong *)FWeakObjectPtr::Get(param_1 + 0xa8);
          (**(code **)(*plVar9 + 0x2a8))(plVar9,*(undefined8 *)(param_1 + 0x70),1);
          local_d0 = 0;
          local_d8 = &PTR_LAB_14415b128;
          local_c8 = 0;
          puVar7 = (undefined8 *)operator_new(0x70);
          local_b8 = puVar11;
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = &PTR__scalar_deleting_destructor__143f60768;
            puVar7[1] = 0;
            puVar7[2] = 0;
            *(undefined4 *)(puVar7 + 3) = 0;
            puVar7[4] = param_2;
            puVar7[5] = 0;
            puVar7[6] = 0;
            puVar7[7] = 0;
            puVar7[8] = 0;
            puVar7[9] = 0;
            puVar7[10] = 0;
            puVar7[0xb] = 0;
            puVar7[0xc] = 1;
            *(undefined2 *)(puVar7 + 0xd) = 0;
            local_b8 = puVar7;
          }
          puVar7 = (undefined8 *)operator_new(0x18);
          if (puVar7 != (undefined8 *)0x0) {
            *(undefined4 *)(puVar7 + 1) = 1;
            *puVar7 = &PTR_FUN_143f3f2e0;
            *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
            puVar7[2] = local_b8;
            puVar11 = puVar7;
          }
          local_b0 = puVar11;
          SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
          uVar8 = FWeakObjectPtr::Get(param_1 + 0xa8);
          local_98[0] = 1;
          local_88 = FUN_1407c3030;
          local_58 = (longlong *)0x0;
          local_48 = 0;
          bVar6 = FUN_142a52120(*(undefined8 *)(param_1 + 0x70),uVar8,&local_d8,local_98);
          if (local_48 != 0) {
            plVar9 = local_78;
            if (local_58 != (longlong *)0x0) {
              plVar9 = local_58;
            }
            if (plVar9 != (longlong *)0x0) {
              (**(code **)(*plVar9 + 0x10))(plVar9,0);
            }
          }
          if (local_58 != (longlong *)0x0) {
            FMemory::Free();
          }
          FJsonStructDeserializerBackend::~FJsonStructDeserializerBackend(&local_d8);
          return (ulonglong)bVar6;
        }
      }
    }
  }
  return (ulonglong)plVar9 & 0xffffffffffffff00;
}



// FUNCTION 140911d60 FUN_140911d60 body=22 status=ok
// SIG undefined FUN_140911d60(void)

void FUN_140911d60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140911d71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x60))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 140911d80 FUN_140911d80 body=1508 status=ok
// SIG undefined FUN_140911d80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140911d80(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  undefined1 auStack_188 [32];
  undefined1 local_168 [4];
  int local_164;
  undefined8 local_160;
  int local_158;
  uint uStack_154;
  uint *puStack_150;
  undefined4 local_148;
  uint uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  undefined8 uStack_118;
  int local_110;
  int local_10c;
  undefined **local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  uint uStack_e4;
  uint *local_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined1 *local_b8;
  undefined1 **local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  plVar9 = (longlong *)*param_1;
  lVar7 = (**(code **)(*plVar9 + 0x18))(plVar9);
  if (lVar7 == 0) {
    return;
  }
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9);
  cVar6 = FWeakObjectPtr::IsValid(uVar8,0,1);
  if (cVar6 == '\0') {
    return;
  }
  plVar9 = (longlong *)*param_1;
  plVar4 = (longlong *)param_1[2];
  lVar7 = (**(code **)(*plVar9 + 0x18))(plVar9);
  if (lVar7 != 0) {
    uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9);
    cVar6 = FWeakObjectPtr::IsValid(uVar8,0,1);
    if (cVar6 != '\0') {
      uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9);
      lVar7 = FWeakObjectPtr::Get(uVar8);
      local_160 = *(undefined8 *)(lVar7 + 0x18);
      goto LAB_140911e4f;
    }
  }
  local_160 = 0;
LAB_140911e4f:
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_160);
  uVar8 = (**(code **)(*(longlong *)*param_1 + 0x40))();
  FBinaryArchiveFormatter::FBinaryArchiveFormatter(local_c8,plVar4);
  local_b8 = local_c8;
  local_b0 = &local_b8;
  FUN_141661f40(&local_b8,uVar8);
  FBinaryArchiveFormatter::~FBinaryArchiveFormatter(local_c8);
  uVar8 = (**(code **)(*(longlong *)*param_1 + 0x30))();
  FUN_140910980(plVar4,uVar8);
  local_168[0] = (**(code **)(*(longlong *)*param_1 + 0x38))();
  plVar9 = (longlong *)plVar4[1];
  if ((undefined1 *)plVar9[1] < (undefined1 *)*plVar9 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,local_168,1);
  }
  else {
    local_168[0] = *(undefined1 *)*plVar9;
    *plVar9 = *plVar9 + 1;
  }
  uVar8 = (**(code **)(*(longlong *)*param_1 + 0x58))();
  FUN_1404c11e0(plVar4,uVar8);
  uVar8 = (**(code **)(*(longlong *)*param_1 + 0x10))();
  FUN_1404c11e0(plVar4,uVar8);
  lVar7 = (*(code *)**(undefined8 **)*param_1)();
  local_164 = *(int *)(lVar7 + 8) - *(int *)(lVar7 + 0x34);
  plVar9 = (longlong *)plVar4[1];
  if ((int *)plVar9[1] < (int *)*plVar9 + 1) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_164,4);
    if ((*(byte *)((longlong)plVar4 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(plVar4,&local_164,4);
    }
  }
  else {
    local_164 = *(int *)*plVar9;
    *plVar9 = *plVar9 + 4;
  }
  plVar9 = (longlong *)(*(code *)**(undefined8 **)*param_1)();
  uVar3 = *(uint *)(plVar9 + 5);
  local_158 = 0;
  uStack_154 = 1;
  puVar1 = (uint *)(plVar9 + 2);
  uStack_144 = 0;
  iStack_140 = 0;
  if (uVar3 != 0) {
    puVar15 = (uint *)plVar9[4];
    if ((uint *)plVar9[4] == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = *puVar15;
    iStack_140 = 0;
    local_158 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_158;
      iStack_140 = iStack_140 + 0x20;
      iVar11 = local_158 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_158;
      local_158 = iVar11;
      if (bVar5) goto LAB_140912035;
      uVar12 = puVar15[lVar7 + 1];
    }
    uStack_154 = -uVar12 & uVar12;
    local_110 = 0x1f;
    if (uStack_154 != 0) {
      for (; uStack_154 >> local_110 == 0; local_110 = local_110 + -1) {
      }
    }
    if (uStack_154 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - local_110;
    }
    uStack_144 = (iStack_140 - iVar11) + 0x1f;
    if ((int)uVar3 < (int)uStack_144) {
LAB_140912035:
      uStack_144 = uVar3;
    }
  }
  local_148 = 0xffffffff;
  uStack_124 = *(uint *)(plVar9 + 5);
  uStack_130 = CONCAT44(uStack_154,local_158);
  uStack_d8 = 0xffffffff;
  uStack_d4 = uStack_144;
  uStack_118 = CONCAT44(uStack_13c,iStack_140);
  iVar11 = (int)uStack_124 >> 5;
  local_138 = (int)plVar9;
  uStack_134 = (undefined4)((ulonglong)plVar9 >> 0x20);
  uStack_128 = -1 << ((byte)uStack_124 & 0x1f);
  uStack_120 = uStack_124 & 0xffffffe0;
  uStack_11c = uStack_144;
  local_f0 = local_138;
  uStack_ec = uStack_134;
  iStack_e8 = local_158;
  uStack_e4 = uStack_154;
  puStack_150 = puVar1;
  local_e0 = puVar1;
  local_d0 = uStack_118;
  local_138 = iVar11;
  uVar12 = uStack_124;
  if (uStack_124 != uVar3) {
    puVar15 = (uint *)plVar9[4];
    if ((uint *)plVar9[4] == (uint *)0x0) {
      puVar15 = puVar1;
    }
    uVar12 = puVar15[iVar11] & uStack_128;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_138;
      uStack_120 = uStack_120 + 0x20;
      iVar11 = local_138 + 1;
      bVar5 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_138;
      local_138 = iVar11;
      if (bVar5) goto LAB_140912131;
      uVar12 = puVar15[lVar7 + 1];
      uStack_128 = 0xffffffff;
    }
    uVar12 = -uVar12 & uVar12;
    local_10c = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> local_10c == 0; local_10c = local_10c + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar11 = 0x20;
    }
    else {
      iVar11 = 0x1f - local_10c;
    }
    uStack_124 = (uStack_120 - iVar11) + 0x1f;
    uVar12 = uStack_124;
    if ((int)uVar3 < (int)uStack_124) {
LAB_140912131:
      uStack_124 = uVar3;
      uVar12 = uVar3;
    }
  }
  while( true ) {
    if (((uStack_d4 == uVar12) && (local_e0 == puVar1)) &&
       ((longlong *)CONCAT44(uStack_ec,local_f0) == plVar9)) break;
    lVar7 = (longlong)(int)uStack_d4 * 0x20 + *(longlong *)CONCAT44(uStack_ec,local_f0);
    (**(code **)(*plVar4 + 0x40))(plVar4,lVar7);
    FUN_14158ce90(plVar4,lVar7 + 8);
    uStack_d8 = uStack_d8 & ~uStack_e4;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_e8);
  }
  local_108 = &PTR_FUN_14415b650;
  plVar9 = (longlong *)operator_new(0x28);
  local_f8 = (longlong *)0x0;
  local_100 = local_f8;
  if (plVar9 != (longlong *)0x0) {
    plVar9[1] = (longlong)plVar4;
    *plVar9 = (longlong)&PTR_FUN_14415b688;
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    local_100 = plVar9;
  }
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *plVar9 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    plVar9[2] = (longlong)local_100;
    local_f8 = plVar9;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_100,local_100,local_100);
  plVar9 = (longlong *)*param_1;
  uVar8 = (**(code **)(*plVar9 + 0x20))(plVar9);
  uVar8 = FWeakObjectPtr::Get(uVar8);
  uVar10 = (**(code **)(*plVar9 + 0x18))(plVar9);
  local_98 = 1;
  local_88 = FUN_1407c3030;
  local_94 = 1;
  local_58 = (longlong *)0x0;
  local_48 = 0;
  FUN_142a540e0(uVar10,uVar8,&local_108,&local_98);
  if (local_48 != 0) {
    plVar9 = local_78;
    if (local_58 != (longlong *)0x0) {
      plVar9 = local_58;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free();
  }
  puVar13 = (undefined8 *)param_1[4];
  puVar14 = puVar13 + (longlong)*(int *)(param_1 + 5) * 2;
  plVar9 = local_f8;
  for (; local_f8 = plVar9, puVar13 != puVar14; puVar13 = puVar13 + 2) {
    local_a8 = param_1[2];
    local_a0 = param_1[3];
    if (local_a0 != 0) {
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
    }
    FTcpMessageTransportConnection::Send(*puVar13,&local_a8);
    plVar9 = local_f8;
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar9 + 1;
    lVar7 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      iVar11 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar11 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return;
}



// FUNCTION 140912370 Execute body=66 status=ok
// SIG undefined Execute(void)

void TBaseRawMethodDelegateInstance<0,FMessageRouter,TTypeWrapper<void>___cdecl(void),TSharedRef<IMessageContext,1>_>
     ::Execute(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar2 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  lVar1 = *(longlong *)(param_1 + 8);
  local_30 = *(longlong *)(param_1 + 0x28);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar2)(iStack_18 + lVar1,&local_38);
  return;
}



// FUNCTION 1409123c0 ExecuteIfSafe body=68 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageContext,1>_>::
ExecuteIfSafe(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  uStack_1c = *(undefined4 *)(param_1 + 0x14);
  pcVar2 = *(code **)(param_1 + 0x10);
  iStack_18 = *(int *)(param_1 + 0x18);
  uStack_14 = *(undefined4 *)(param_1 + 0x1c);
  lVar1 = *(longlong *)(param_1 + 8);
  local_30 = *(longlong *)(param_1 + 0x28);
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar2)(iStack_18 + lVar1,&local_38);
  return 1;
}



// FUNCTION 140912410 ExecuteTask body=348 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FTcpSerializeMessageTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  FUN_140911d80(param_1 + 2,param_3,param_1 + 9);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 6);
  plVar7 = (longlong *)param_1[5];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  plVar7 = (longlong *)param_1[3];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14415b428;
  if (param_1[9] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[9] + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  *param_1 = &PTR_FUN_143f3edd8;
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar5 = TlsGetValue(*pDVar4);
  plVar7 = (longlong *)0x0;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)operator_new(0x18);
    plVar5 = plVar7;
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = 0;
      plVar6[1] = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar5 = plVar6;
    }
    TlsSetValue(*pDVar4,plVar5);
  }
  if ((int)plVar5[2] < 0x20) {
    plVar7 = (longlong *)plVar5[1];
  }
  else {
    if (*plVar5 != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *plVar5 = plVar5[1];
    plVar5[1] = 0;
    *(undefined4 *)(plVar5 + 2) = 0;
  }
  *param_1 = plVar7;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  plVar5[1] = (longlong)param_1;
  return;
}



// FUNCTION 140912570 GetArchiveName body=208 status=ok
// SIG undefined GetArchiveName(void)

undefined8 * FBufferArchive::GetArchiveName(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  short *psVar4;
  undefined2 *puVar5;
  short *local_28;
  int local_20;
  longlong local_18 [2];
  
  puVar1 = (undefined8 *)FName::ToString(param_1 + 0xa0,local_18);
  if (*(int *)(puVar1 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar1;
  }
  FString::PrintfImpl(&local_28,L"FBufferArchive %s",puVar5);
  psVar4 = &DAT_143f3eda8;
  if (local_20 != 0) {
    psVar4 = local_28;
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (psVar4[lVar3] != 0);
    iVar2 = (int)lVar3 + 1;
    *(int *)(param_2 + 1) = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    }
    FGenericPlatformString::Memcpy(*param_2,psVar4,(longlong)iVar2 * 2);
  }
  if (local_28 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140912660 GetDebugName body=39 status=ok
// SIG undefined GetDebugName(void)

undefined8 FTcpMessageTransport::GetDebugName(undefined8 param_1,undefined8 param_2)

{
  FName::FName(param_2,"TcpMessageTransport",1);
  return param_2;
}



// FUNCTION 140912690 GetMessage body=5 status=ok
// SIG undefined GetMessage(void)

undefined8 FTcpDeserializedMessage::GetMessage(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



// FUNCTION 1409126e0 FUN_1409126e0 body=614 status=ok
// SIG undefined FUN_1409126e0(void)

void FUN_1409126e0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  lVar4 = *param_2;
  local_78 = *(undefined1 (*) [16])(lVar4 + 0x70);
  iVar2 = local_78._0_4_;
  iVar6 = local_78._4_4_;
  iVar7 = local_78._8_4_;
  iVar8 = local_78._12_4_;
  uStack_80 = local_78._8_8_;
  local_88 = local_78._0_8_;
  if (*(int *)(lVar4 + 0x28) == 1) {
    plVar5 = (longlong *)param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
    }
    local_64 = iVar2;
    iStack_60 = iVar6;
    iStack_5c = iVar7;
    iStack_58 = iVar8;
    plVar9 = (longlong *)operator_new();
    plVar10 = (longlong *)0x0;
    plVar11 = plVar5;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = 0;
      *(undefined1 *)(plVar9 + 1) = 1;
      *(undefined8 *)((longlong)plVar9 + 0xc) = local_88;
      *(undefined8 *)((longlong)plVar9 + 0x14) = uStack_80;
      plVar9[4] = lVar4;
      plVar9[5] = (longlong)plVar5;
      plVar11 = plVar10;
      plVar10 = plVar9;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      puVar3 = *(undefined8 **)(param_1 + 0xa0);
      *(longlong **)(param_1 + 0xa0) = plVar10;
      UNLOCK();
      LOCK();
      *puVar3 = plVar10;
      UNLOCK();
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    (**(code **)**(undefined8 **)(param_1 + 0xd8))(*(undefined8 **)(param_1 + 0xd8),local_78);
  }
  else if (((iVar8 != 0 || iVar7 != 0) || iVar2 != 0) || iVar6 != 0) {
    plVar5 = (longlong *)param_2[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
    }
    local_3c = iVar2;
    iStack_38 = iVar6;
    iStack_34 = iVar7;
    iStack_30 = iVar8;
    plVar9 = (longlong *)operator_new();
    plVar10 = (longlong *)0x0;
    plVar11 = plVar5;
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = 0;
      *(undefined1 *)(plVar9 + 1) = 0;
      *(undefined8 *)((longlong)plVar9 + 0xc) = local_88;
      *(undefined8 *)((longlong)plVar9 + 0x14) = uStack_80;
      plVar9[4] = lVar4;
      plVar9[5] = (longlong)plVar5;
      plVar11 = plVar10;
      plVar10 = plVar9;
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      puVar3 = *(undefined8 **)(param_1 + 0xa0);
      *(longlong **)(param_1 + 0xa0) = plVar10;
      UNLOCK();
      LOCK();
      *puVar3 = plVar10;
      UNLOCK();
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 8))(*(longlong **)(param_1 + 0xd8),local_78);
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar5 + 1;
    lVar4 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140912950 FUN_140912950 body=409 status=ok
// SIG undefined FUN_140912950(void)

undefined8 FUN_140912950(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar4 = operator_new(0xf0);
  plVar8 = (longlong *)0x0;
  plVar5 = plVar8;
  if (lVar4 != 0) {
    plVar5 = (longlong *)FUN_140910490(lVar4,param_2,param_3,0);
  }
  plVar6 = (longlong *)operator_new(0x18);
  plVar9 = plVar8;
  if (plVar6 != (longlong *)0x0) {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_14410cc48;
    plVar6[2] = (longlong)plVar5;
    plVar9 = plVar6;
  }
  plVar6 = plVar5 + 1;
  if (plVar5 == (longlong *)0x0) {
    plVar6 = plVar8;
  }
  if (plVar6 != (longlong *)0x0) {
    if ((*plVar6 != 0) && (plVar6[1] != 0)) {
      piVar1 = (int *)(plVar6[1] + 8);
      LOCK();
      iVar3 = *piVar1;
      if (iVar3 == 0) {
        *piVar1 = 0;
        iVar3 = 0;
      }
      UNLOCK();
      if (0 < iVar3) goto LAB_140912a77;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *plVar6 = (longlong)plVar5;
    plVar8 = (longlong *)plVar6[1];
    if (plVar9 != plVar8) {
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar6[1];
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
      plVar6[1] = (longlong)plVar9;
    }
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar9 + 1;
      lVar4 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
LAB_140912a77:
  puVar7 = (undefined8 *)operator_new(0x18);
  if (puVar7 == (undefined8 *)0x0) {
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar9 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
  }
  else {
    *puVar7 = 0;
    puVar7[1] = plVar5;
    puVar7[2] = plVar9;
    LOCK();
    puVar2 = *(undefined8 **)(param_1 + 0xb0);
    *(undefined8 **)(param_1 + 0xb0) = puVar7;
    UNLOCK();
    LOCK();
    *puVar2 = puVar7;
    UNLOCK();
  }
  return 1;
}



// FUNCTION 140912af0 Init body=700 status=ok
// SIG undefined Init(void)

bool FTcpListener::Init(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uStack_14e;
  void *local_148;
  int local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_120;
  void *local_118;
  ulonglong local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_104;
  longlong local_f8 [2];
  undefined1 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined8 local_c4;
  longlong local_b8 [2];
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 local_84;
  longlong local_78 [2];
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined8 local_44;
  longlong local_38 [2];
  undefined1 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    local_118 = (void *)0x0;
    local_110 = 0x14;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
    _Src = local_118;
    FGenericPlatformString::Memcpy(local_118,L"FTcpListener server",0x28);
    uVar1 = DAT_1469f59a0;
    lVar3 = (longlong)(int)local_110;
    local_88 = 0;
    local_87 = 0;
    uVar4 = 0;
    uVar5 = 0;
    local_148 = (void *)0x0;
    local_140 = (int)local_110;
    if ((int)local_110 == 0) {
      local_13c = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_148,local_110 & 0xffffffff,0,param_4,0,0);
      ::_guard_xfg_dispatch_icall_nop(local_148,_Src,lVar3 * 2);
      local_87 = (undefined1)((ushort)uVar4 >> 8);
      local_88 = (undefined1)uVar4;
    }
    local_84 = CONCAT26(uStack_14e,CONCAT24(uVar5,uVar1));
    local_138 = 0;
    local_134 = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_124 = 1;
    FString::FString(local_78,&local_148);
    local_68 = local_138;
    local_64 = local_134;
    local_60 = local_130;
    local_5c = local_12c;
    local_58 = local_128;
    local_54 = local_124;
    local_50 = local_120;
    local_c4 = *(undefined8 *)(param_1 + 0xc);
    local_c8 = local_88;
    local_87 = 1;
    local_c7 = 1;
    local_84 = local_c4;
    FString::FString(local_b8,local_78);
    local_a8 = local_68;
    local_a4 = local_64;
    local_98 = local_58;
    local_94 = local_54;
    local_90 = local_50;
    local_108 = local_c8;
    local_107 = local_c7;
    local_104 = local_c4;
    local_a0 = 1;
    local_9c = 8;
    FString::FString(local_f8,local_b8);
    local_e8 = local_a8;
    local_e4 = local_a4;
    local_e0 = local_a0;
    local_dc = local_9c;
    local_d8 = local_98;
    local_d4 = local_94;
    local_48 = local_108;
    local_47 = local_107;
    local_44 = local_104;
    local_d0 = 0x200000;
    FString::FString(local_38,local_f8);
    local_28 = local_e8;
    local_24 = local_e4;
    local_20 = local_e0;
    local_1c = local_dc;
    local_18 = local_d8;
    local_14 = local_d4;
    local_10 = local_d0;
    uVar2 = FUN_1408d5630(&local_48);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_f8[0] != 0) {
      FMemory::Free();
    }
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_148 != (void *)0x0) {
      FMemory::Free();
    }
    if (_Src != (void *)0x0) {
      FMemory::Free(_Src);
    }
  }
  return *(longlong *)(param_1 + 0x20) != 0;
}



// FUNCTION 140912db0 Init body=12 status=ok
// SIG undefined Init(void)

bool FTcpMessageTransportConnection::Init(longlong param_1)

{
  return *(longlong *)(param_1 + 0x88) != 0;
}



// FUNCTION 140912dc0 FUN_140912dc0 body=1987 status=ok
// SIG undefined FUN_140912dc0(void)

void FUN_140912dc0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  void *pvVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  longlong local_148;
  undefined8 local_140;
  longlong *local_138;
  int local_130;
  int local_12c;
  longlong local_128;
  int local_120;
  int local_11c;
  undefined8 local_118;
  longlong *local_110;
  longlong local_108;
  longlong *local_100;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_a0;
  undefined1 local_98;
  longlong local_90;
  longlong *local_88;
  longlong local_80 [2];
  undefined1 local_70 [8];
  longlong *local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  undefined1 local_48 [16];
  
  FTcpMessagingModule::ShutdownBridge();
  plVar8 = (longlong *)UTcpMessagingSettings::GetPrivateStaticClass();
  lVar18 = plVar8[0x1f];
  if (lVar18 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar18 = plVar8[0x1f];
  }
  iVar15 = 0;
  local_f8 = (void *)0x0;
  local_f0 = *(int *)(lVar18 + 0x38);
  lVar16 = (longlong)local_f0;
  pvVar4 = *(void **)(lVar18 + 0x30);
  local_128 = 0;
  local_120 = 0;
  local_11c = 0;
  if (local_f0 == 0) {
    local_ec = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_f0,0);
    _guard_xfg_dispatch_icall_nop(local_f8,pvVar4,lVar16 * 2);
  }
  uVar9 = FCommandLine::Get();
  FParse::Value(uVar9,L"TcpMessagingListen=",&local_f8,1);
  cVar6 = FIPv4Endpoint::Parse(&local_f8,&local_res8);
  local_138 = (longlong *)0x0;
  local_130 = 0;
  if (cVar6 == '\0') {
    local_res8 = CONCAT26(uRam00000001469f59ae,CONCAT24(DAT_1469f59ac,DAT_1469f59a8));
  }
  local_12c = 0;
  lVar16 = *(longlong *)(lVar18 + 0x40);
  lVar17 = (longlong)*(int *)(lVar18 + 0x48) * 0x10 + lVar16;
  iVar14 = local_130;
  for (; lVar16 != lVar17; lVar16 = lVar16 + 0x10) {
    local_130 = iVar14 + 1;
    if (local_12c < local_130) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_138,iVar14);
    }
    FString::FString(local_138 + (longlong)iVar14 * 2,lVar16);
    iVar14 = local_130;
  }
  local_e8 = 0;
  local_e0 = 0;
  local_130 = iVar14;
  uVar9 = FCommandLine::Get();
  cVar6 = FParse::Value(uVar9,L"TcpMessagingConnect=",&local_e8,1);
  if (cVar6 != '\0') {
    FUN_141594550(&local_e8,&local_138,&DAT_14415a11c,1);
  }
  if (local_e8 != 0) {
    FMemory::Free();
  }
  plVar11 = local_138 + (longlong)local_130 * 2;
  iVar14 = iVar15;
  for (plVar8 = local_138; plVar8 != plVar11; plVar8 = plVar8 + 2) {
    cVar6 = FIPv4Endpoint::Parse(plVar8,&local_res10);
    if (cVar6 != '\0') {
      local_120 = iVar15 + 1;
      if (iVar14 < local_120) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128,iVar15);
        iVar14 = local_11c;
      }
      *(undefined8 *)(local_128 + (longlong)iVar15 * 8) = local_res10;
      iVar15 = local_120;
    }
  }
  local_140 = 0x21;
  local_148 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
  FGenericPlatformString::Memcpy(local_148,L"Initializing TcpMessaging bridge",0x42);
  if (iVar15 != 0) {
    FString::PrintfImpl(&local_c8,L" for %d outgoing connections",iVar15);
    pvVar4 = local_c8;
    uVar5 = local_140;
    iVar15 = 0;
    if (local_c0 != 0) {
      iVar15 = local_c0 + -1;
    }
    if (iVar15 != 0) {
      iVar14 = (int)local_140;
      lVar16 = (longlong)(int)local_140;
      iVar7 = (uint)((int)local_140 == 0) + (int)local_140 + iVar15;
      local_140 = CONCAT44(local_140._4_4_,iVar7);
      if (local_140._4_4_ < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar5 & 0xffffffff);
      }
      pvVar3 = (void *)(local_148 + (lVar16 - (ulonglong)(iVar14 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar3,pvVar4,(longlong)iVar15 * 2);
      *(undefined2 *)((longlong)iVar15 * 2 + (longlong)pvVar3) = 0;
    }
    if (local_c8 != (void *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  uVar5 = local_140;
  if (((int)local_res8 != DAT_1469f59a8) || (local_res8._4_2_ != DAT_1469f59ac)) {
    iVar15 = (int)local_140;
    lVar16 = (longlong)(int)local_140;
    iVar14 = (0x10 - (uint)((int)local_140 != 0)) + (int)local_140;
    local_140 = CONCAT44(local_140._4_4_,iVar14);
    if (local_140._4_4_ < iVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,uVar5 & 0xffffffff);
      iVar14 = (int)local_140;
    }
    builtin_wcsncpy((wchar_t *)(local_148 + (lVar16 - (ulonglong)(iVar15 != 0)) * 2),
                    L", listening on ",0x10);
    uVar9 = FIPv4Endpoint::ToString(&local_res8,local_80);
    FText::FromString(local_60,uVar9);
    if (local_80[0] != 0) {
      FMemory::Free();
    }
    puVar10 = (undefined8 *)FText::ToString(local_60);
    iVar15 = *(int *)(puVar10 + 1) + -1;
    if (*(int *)(puVar10 + 1) == 0) {
      iVar15 = 0;
    }
    pvVar4 = (void *)*puVar10;
    if (iVar15 != 0) {
      iVar7 = (uint)(iVar14 == 0) + iVar15 + iVar14;
      local_140 = CONCAT44(local_140._4_4_,iVar7);
      if (local_140._4_4_ < iVar7) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,iVar14);
      }
      pvVar3 = (void *)(local_148 + ((longlong)iVar14 - (ulonglong)(iVar14 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar3,pvVar4,(longlong)iVar15 * 2);
      *(undefined2 *)((longlong)iVar15 * 2 + (longlong)pvVar3) = 0;
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_58 + 1;
      lVar16 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar16 == 1) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_58 + 8))(local_58,1);
        }
      }
    }
  }
  plVar8 = (longlong *)0x0;
  lVar16 = operator_new(0xe0);
  if (lVar16 == 0) {
    local_108 = 0;
  }
  else {
    local_108 = FTcpMessageTransport::FTcpMessageTransport
                          (lVar16,&local_res8,&local_128,*(undefined4 *)(lVar18 + 0x50));
  }
  plVar11 = (longlong *)operator_new(0x18);
  if (plVar11 != (longlong *)0x0) {
    *(undefined4 *)(plVar11 + 1) = 1;
    *plVar11 = (longlong)&PTR_FUN_14410cc48;
    *(undefined4 *)((longlong)plVar11 + 0xc) = 1;
    plVar11[2] = local_108;
    plVar8 = plVar11;
  }
  local_100 = plVar8;
  SharedPointerInternals::EnableSharedFromThis(&local_108,local_108,local_108);
  plVar11 = local_100;
  *(longlong *)(param_1 + 0x20) = local_108;
  plVar8 = *(longlong **)(param_1 + 0x28);
  if (local_100 != plVar8) {
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_100 + 0xc) = *(int *)((longlong)local_100 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x28);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    *(longlong **)(param_1 + 0x28) = plVar11;
  }
  plVar8 = local_100;
  lVar18 = local_108 + 8;
  if (local_108 == 0) {
    lVar18 = 0;
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  puVar12 = (undefined4 *)FGuid::NewGuid(local_48);
  local_b8 = *puVar12;
  uStack_b4 = puVar12[1];
  uStack_b0 = puVar12[2];
  uStack_ac = puVar12[3];
  puVar10 = (undefined8 *)FName::FName(local_res18,"Messaging",1);
  uVar9 = *puVar10;
  uVar13 = FUN_14168dc80();
  plVar11 = (longlong *)FUN_141690010(uVar13,uVar9);
  puVar10 = (undefined8 *)(**(code **)(*plVar11 + 0x50))(plVar11,local_70);
  local_a8 = *puVar10;
  local_a0 = (longlong *)puVar10[1];
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_a0 + 0xc) = *(int *)((longlong)local_a0 + 0xc) + 1;
    UNLOCK();
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_68 + 1;
    lVar16 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar16 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  local_98 = 0;
  local_88 = (longlong *)0x0;
  local_d0 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_d8 = 0;
  local_90 = lVar18;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_88,&local_d0);
  plVar11 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_d0 + 1;
    lVar18 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  FMessageBridgeBuilder::Build(&local_b8,&local_118);
  if ((undefined8 *)(param_1 + 0x10) != &local_118) {
    *(undefined8 *)(param_1 + 0x10) = local_118;
    local_118 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x18,&local_110);
  }
  plVar11 = local_110;
  if (local_110 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_110 + 1;
    lVar18 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_110)(local_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_110 + 8))(local_110,1);
      }
    }
  }
  plVar11 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_88 + 1;
    lVar18 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    iVar15 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar15 == 1) && (local_a0 != (longlong *)0x0)) {
      (**(code **)(*local_a0 + 8))(local_a0,1);
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar8 + 1;
    lVar18 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_100 + 1;
    lVar18 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  plVar8 = local_138;
  iVar15 = local_130;
  if (local_148 != 0) {
    FMemory::Free();
    plVar8 = local_138;
    iVar15 = local_130;
  }
  for (; iVar15 != 0; iVar15 = iVar15 + -1) {
    if (*plVar8 != 0) {
      FMemory::Free();
    }
    plVar8 = plVar8 + 2;
  }
  if (local_138 != (longlong *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_128 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140913590 FUN_140913590 body=134 status=ok
// SIG undefined FUN_140913590(void)

undefined8 * FUN_140913590(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)operator_new();
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FSelfRegisteringExec::FSelfRegisteringExec();
  *puVar1 = &PTR__scalar_deleting_destructor__14415aba8;
  puVar1[1] = &PTR_LAB_14415abb8;
  puVar1[2] = 0;
  puVar2 = puVar1 + 1;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar2;
}



// FUNCTION 140913620 FUN_140913620 body=2077 status=ok
// SIG undefined FUN_140913620(void)

bool FUN_140913620(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  longlong **pplVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  BOOL BVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  undefined ***pppuVar15;
  longlong *plVar16;
  bool bVar17;
  longlong *plVar18;
  undefined4 local_res8;
  undefined4 uStackX_c;
  int local_res10 [2];
  uint local_res18 [2];
  int local_res20 [2];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  longlong *plStack_1d8;
  undefined1 local_1d0 [24];
  undefined **local_1b8;
  longlong *local_1b0;
  byte local_18f;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined **local_f8 [18];
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  
  bVar17 = false;
  local_res8 = 0;
  uVar9 = FName::FName(local_108,L"WINDOWS",1);
  FUN_1419c6b80(uVar9);
  local_res18[0] = 0;
  cVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x60))
                    (*(longlong **)(param_1 + 0x88),&local_res8,1,local_1d0,2);
  if (cVar6 != '\0') {
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x68))
                      (*(longlong **)(param_1 + 0x88),0,10000000);
    if (cVar6 == '\0') {
      iVar7 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x70))();
      return iVar7 != 2;
    }
    if (*(char *)(param_1 + 0x81) != '\0') {
LAB_1409138a2:
      plVar18 = (longlong *)CONCAT44(uStackX_c,local_res8);
      piVar2 = (int *)(param_1 + 0xc0);
      do {
        plVar16 = (longlong *)0x0;
        iVar7 = *piVar2;
        local_res10[0] = 0;
        if (iVar7 == 0) {
          cVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                            (*(longlong **)(param_1 + 0x88),local_res18);
          if (cVar6 == '\0') {
            return true;
          }
          if (local_res18[0] < 4) {
            return true;
          }
          FArchive::FArchive(&local_1b8);
          local_118 = 0;
          local_128 = 0;
          lStack_120 = 0;
          local_1b8 = &PTR__scalar_deleting_destructor__143f747a8;
          FArchive::SetIsLoading(&local_1b8,1);
          FArchive::SetIsPersistent(&local_1b8,1);
          uVar5 = local_118;
          if ((int)local_118 < 4) {
            local_118 = CONCAT44(local_118._4_4_,4);
            if (local_118._4_4_ < 4) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&lStack_120,uVar5 & 0xffffffff);
            }
          }
          else if ((4 < (int)local_118) && (iVar7 = (int)local_118 + -4, iVar7 != 0)) {
            iVar14 = ((int)local_118 - iVar7) + -4;
            if (iVar14 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lStack_120 + 4),(void *)((int)local_118 + lStack_120),
                         (longlong)iVar14);
            }
            local_118 = CONCAT44(local_118._4_4_,(int)local_118 - iVar7);
            TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&lStack_120);
          }
          local_res10[0] = 0;
          cVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x60))
                            (*(longlong **)(param_1 + 0x88),lStack_120,4,local_res10,0);
          if (cVar6 == '\0') {
            if (lStack_120 != 0) {
              FMemory::Free();
            }
            pppuVar15 = &local_1b8;
            goto LAB_140913957;
          }
          *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + (longlong)local_res10[0];
          if ((int *)local_1b0[1] < (int *)*local_1b0 + 1) {
            (*(code *)local_1b8[10])(&local_1b8,piVar2,4);
            if ((local_18f & 0x10) != 0) {
              FArchive::ByteSwap(&local_1b8,piVar2,4);
            }
          }
          else {
            *piVar2 = *(int *)*local_1b0;
            *local_1b0 = *local_1b0 + 4;
          }
          lVar11 = operator_new(0xa8);
          plVar12 = plVar16;
          if (lVar11 != 0) {
            plVar12 = (longlong *)FArrayReader::FArrayReader(lVar11,1);
          }
          plVar13 = (longlong *)operator_new(0x18);
          if (plVar13 != (longlong *)0x0) {
            *(undefined4 *)(plVar13 + 1) = 1;
            *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
            *plVar13 = (longlong)&PTR_DestroyObject_144159b08;
            plVar13[2] = (longlong)plVar12;
            plVar16 = plVar13;
          }
          pplVar3 = (longlong **)(param_1 + 0xb0);
          local_1f0 = plVar12;
          local_1e8 = plVar16;
          SharedPointerInternals::EnableSharedFromThis(&local_1f0,plVar12,plVar12);
          if (pplVar3 != &local_1f0) {
            *pplVar3 = plVar12;
            local_1f0 = (longlong *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb8,&local_1e8);
            plVar16 = local_1e8;
          }
          if (plVar16 != (longlong *)0x0) {
            LOCK();
            plVar12 = plVar16 + 1;
            lVar11 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar16 + 8))(plVar16,1);
              }
            }
          }
          plVar16 = *pplVar3;
          iVar7 = *piVar2;
          iVar14 = (int)plVar16[0x14];
          if (iVar14 < iVar7) {
            *(int *)(plVar16 + 0x14) = iVar7;
            if (*(int *)((longlong)plVar16 + 0xa4) < iVar7) {
              TArray<unsigned_char,FDefaultAllocator>::ResizeGrow();
            }
          }
          else if ((iVar7 < iVar14) && (iVar7 != iVar14)) {
            *(int *)(plVar16 + 0x14) = iVar7;
            TArray<unsigned_char,FDefaultAllocator>::ResizeShrink();
          }
          if (lStack_120 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(&local_1b8);
          iVar7 = *piVar2;
        }
        plVar12 = (longlong *)0x0;
        plVar16 = (longlong *)(param_1 + 0xb0);
        local_res10[0] = 0;
        cVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x60))
                          (*(longlong **)(param_1 + 0x88),
                           ((longlong)*(int *)(*plVar16 + 0xa0) - (longlong)iVar7) +
                           *(longlong *)(*plVar16 + 0x98),iVar7,local_res10,0);
        if (cVar6 == '\0') {
          return false;
        }
        if (local_res10[0] < 1) {
          return true;
        }
        *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + (longlong)local_res10[0];
        *piVar2 = *piVar2 - local_res10[0];
        if (*piVar2 == 0) {
          puVar10 = (undefined8 *)operator_new(0xb0);
          if (puVar10 == (undefined8 *)0x0) {
            puVar10 = (undefined8 *)0x0;
          }
          else {
            *puVar10 = &PTR_GetAddress_14415b0c0;
            bVar17 = true;
            puVar10[1] = 0;
            puVar10[2] = 0;
            puVar10[5] = 0;
            puVar10[6] = 0;
            *(undefined4 *)(puVar10 + 7) = 0xffffffff;
            *(undefined4 *)((longlong)puVar10 + 0x3c) = 0;
            puVar10[9] = 0;
            *(undefined4 *)(puVar10 + 10) = 0;
            puVar10[0xb] = 0;
            puVar10[0xc] = 0;
            puVar10[0xe] = 0;
            puVar10[0xf] = 0;
            puVar10[0x10] = 0;
            *(undefined8 *)((longlong)puVar10 + 0x8c) = 0;
            *(undefined8 *)((longlong)puVar10 + 0x94) = 0;
            *(undefined4 *)(puVar10 + 0x15) = 0xffffffff;
            *(undefined4 *)((longlong)puVar10 + 0xac) = 0;
            plVar18 = plVar12;
          }
          if ((bVar17) && (bVar17 = false, plVar18 != (longlong *)0x0)) {
            LOCK();
            plVar13 = plVar18 + 1;
            lVar11 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar7 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar7 == 1) {
                (**(code **)(*plVar18 + 8))(plVar18,1);
              }
            }
          }
          cVar6 = FUN_140911830(puVar10,plVar16);
          if (cVar6 != '\0') {
            plVar13 = (longlong *)operator_new(0x18);
            if (plVar13 != (longlong *)0x0) {
              *(undefined4 *)(plVar13 + 1) = 1;
              *plVar13 = (longlong)&PTR_FUN_14415b778;
              *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
              plVar13[2] = (longlong)puVar10;
              plVar12 = plVar13;
            }
            local_200 = puVar10;
            local_1f8 = plVar12;
            SharedPointerInternals::EnableSharedFromThis(&local_200,puVar10,puVar10);
            puVar10 = (undefined8 *)operator_new(0x18);
            if (puVar10 != (undefined8 *)0x0) {
              *puVar10 = 0;
              puVar10[1] = local_200;
              puVar10[2] = local_1f8;
              local_1f8 = (longlong *)0x0;
              local_200 = (undefined8 *)0x0;
              LOCK();
              puVar4 = *(undefined8 **)(param_1 + 0x40);
              *(undefined8 **)(param_1 + 0x40) = puVar10;
              UNLOCK();
              LOCK();
              *puVar4 = puVar10;
              UNLOCK();
            }
            plVar12 = local_1f8;
            if (local_1f8 != (longlong *)0x0) {
              LOCK();
              plVar13 = local_1f8 + 1;
              lVar11 = *plVar13;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_1f8)(local_1f8);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
            }
          }
          local_1e0 = 0;
          plStack_1d8 = (longlong *)0x0;
          if (plVar16 != &local_1e0) {
            *plVar16 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xb8,&plStack_1d8);
            plVar16 = plStack_1d8;
            if (plStack_1d8 != (longlong *)0x0) {
              LOCK();
              plVar12 = plStack_1d8 + 1;
              lVar11 = *plVar12;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plStack_1d8)(plStack_1d8);
                LOCK();
                piVar1 = (int *)((longlong)plVar16 + 0xc);
                iVar7 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar7 == 1) {
                  (**(code **)(*plStack_1d8 + 8))(plStack_1d8,1);
                }
              }
            }
          }
        }
      } while( true );
    }
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x30))
                      (*(longlong **)(param_1 + 0x88),local_res18);
    if ((cVar6 == '\0') || (local_res18[0] < 0x18)) {
      return true;
    }
    FArchive::FArchive(local_f8);
    local_58 = 0;
    local_68 = 0;
    lStack_60 = 0;
    local_f8[0] = &PTR__scalar_deleting_destructor__143f747a8;
    FArchive::SetIsLoading(local_f8,1);
    FArchive::SetIsPersistent(local_f8,1);
    uVar5 = local_58;
    if ((int)local_58 < 0x18) {
      local_58 = CONCAT44(local_58._4_4_,0x18);
      if (local_58._4_4_ < 0x18) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&lStack_60,uVar5 & 0xffffffff);
      }
    }
    else if ((0x18 < (int)local_58) && ((int)local_58 + -0x18 != 0)) {
      local_58 = CONCAT44(local_58._4_4_,(int)local_58 - ((int)local_58 + -0x18));
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&lStack_60);
    }
    local_res20[0] = 0;
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x60))
                      (*(longlong **)(param_1 + 0x88),lStack_60,0x18,local_res20,0);
    if (cVar6 != '\0') {
      *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x98) + (longlong)local_res20[0];
      local_218 = 0;
      local_210 = 0;
      uStack_208 = 0;
      FUN_140910880(local_f8,&local_218);
      if (((int)local_218 == 0x45504943) && (local_218._4_4_ == 1)) {
        if (((uStack_208._4_4_ != 0 || (int)uStack_208 != 0) || local_210._4_4_ != 0) ||
            (int)local_210 != 0) {
          *(undefined4 *)(param_1 + 0x84) = 1;
          *(undefined1 *)(param_1 + 0x81) = 1;
          *(int *)(param_1 + 0x70) = (int)local_210;
          *(int *)(param_1 + 0x74) = local_210._4_4_;
          *(int *)(param_1 + 0x78) = (int)uStack_208;
          *(int *)(param_1 + 0x7c) = uStack_208._4_4_;
          puVar10 = (undefined8 *)FDateTime::UtcNow(local_100);
          *(undefined8 *)(param_1 + 0x50) = *puVar10;
          BVar8 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
          if (BVar8 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
          }
          *(undefined4 *)(param_1 + 0x28) = 1;
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
          TBaseDelegate<void>::ExecuteIfBound(param_1 + 0x18);
          if (lStack_60 != 0) {
            FMemory::Free();
          }
          FArchive::~FArchive(local_f8);
          goto LAB_1409138a2;
        }
      }
    }
    if (lStack_60 != 0) {
      FMemory::Free();
    }
    pppuVar15 = local_f8;
LAB_140913957:
    FArchive::~FArchive(pppuVar15);
  }
  return false;
}



// FUNCTION 140913e40 RestartServices body=142 status=ok
// SIG undefined RestartServices(void)

void FTcpMessagingModule::RestartServices(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)UTcpMessagingSettings::GetPrivateStaticClass();
  lVar3 = plVar2[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar3 = plVar2[0x1f];
  }
  if (*(char *)(lVar3 + 0x28) == '\0') {
    uVar4 = FCommandLine::Get();
    cVar1 = FParse::Param(uVar4,L"TcpMessagingListen=");
    if (cVar1 == '\0') {
      uVar4 = FCommandLine::Get();
      cVar1 = FParse::Param(uVar4,L"TcpMessagingConnect=");
      if (cVar1 == '\0') {
        ShutdownBridge(param_1);
        return;
      }
    }
  }
  FUN_140912dc0(param_1);
  return;
}



// FUNCTION 140913ed0 FUN_140913ed0 body=750 status=ok
// SIG undefined FUN_140913ed0(void)

undefined8 FUN_140913ed0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  char local_res8 [8];
  undefined2 local_res10 [4];
  undefined1 local_res18 [4];
  undefined2 local_res1c;
  undefined1 local_res20 [8];
  undefined1 local_78 [8];
  longlong local_70 [2];
  longlong *local_60;
  longlong *local_58;
  
  uVar7 = FName::FName(local_res20,L"WINDOWS",1);
  plVar8 = (longlong *)FUN_1419c6b80(uVar7);
  (**(code **)(*plVar8 + 0x70))(plVar8,&local_60,0,0);
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x28) == '\0') {
    do {
      local_res8[0] = '\0';
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                        (*(longlong **)(param_1 + 0x20),local_res8,param_1 + 0x18);
      if (cVar6 == '\0') {
LAB_14091413b:
        FUN_1416b1760();
      }
      else if (local_res8[0] == '\0') {
        if (lVar3 == 0) goto LAB_14091413b;
      }
      else {
        local_70[0] = 0;
        local_70[1] = 0x14;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_70,0);
        FGenericPlatformString::Memcpy(local_70[0],L"FTcpListener client",0x28);
        plVar8 = (longlong *)
                 (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))
                           (*(longlong **)(param_1 + 0x20),local_60,local_70);
        if (local_70[0] != 0) {
          FMemory::Free();
        }
        if (plVar8 != (longlong *)0x0) {
          if (((*(int *)(param_1 + 0x40) != 0) &&
              (*(longlong **)(param_1 + 0x38) != (longlong *)0x0)) &&
             (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))(), plVar5 = local_58,
             plVar9 = local_60, cVar6 != '\0')) {
            if (local_58 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_58 + 1) = (int)local_58[1] + 1;
              UNLOCK();
            }
            (**(code **)(*local_60 + 0x28))(local_60,local_res18);
            (**(code **)(*plVar9 + 0x40))(plVar9,local_res10);
            local_res1c = local_res10[0];
            plVar9 = (longlong *)0x0;
            if (*(int *)(param_1 + 0x40) != 0) {
              plVar9 = *(longlong **)(param_1 + 0x38);
            }
            cVar6 = (**(code **)(*plVar9 + 0x38))(plVar9,plVar8,local_res18);
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar5 + 1;
              lVar4 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
            }
            if (cVar6 != '\0') goto LAB_140914140;
          }
          (**(code **)(*plVar8 + 8))(plVar8);
          uVar7 = FName::FName(local_78,L"WINDOWS",1);
          plVar9 = (longlong *)FUN_1419c6b80(uVar7);
          (**(code **)(*plVar9 + 0x28))(plVar9,plVar8);
        }
      }
LAB_140914140:
    } while (*(char *)(param_1 + 0x28) == '\0');
  }
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_58 + 1;
    lVar3 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)local_58 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
      }
    }
  }
  return 0;
}



// FUNCTION 1409141c0 FUN_1409141c0 body=2183 status=ok
// SIG undefined FUN_1409141c0(void)

undefined8 FUN_1409141c0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  int iVar18;
  undefined4 uVar19;
  int local_res10;
  short sStackX_1c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong *plStack_f0;
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68 [6];
  
  cVar2 = *(char *)(param_1 + 0x2c);
  do {
    if (cVar2 != '\0') {
      return 0;
    }
    plVar17 = (longlong *)(param_1 + 0x40);
    local_118 = 0;
    uStack_110 = (longlong *)0x0;
    while (plVar12 = uStack_110, lVar13 = **(longlong **)(param_1 + 0xb8), lVar13 != 0) {
      plVar12 = (longlong *)(lVar13 + 8);
      if (&local_118 != plVar12) {
        local_118 = *plVar12;
        *plVar12 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_110,lVar13 + 0x10);
      }
      lVar4 = *(longlong *)(param_1 + 0xb8);
      *(longlong *)(param_1 + 0xb8) = lVar13;
      local_f8 = 0;
      plStack_f0 = (longlong *)0x0;
      if (plVar12 != &local_f8) {
        *plVar12 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(lVar13 + 0x10,&plStack_f0);
        plVar12 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_f0 + 1;
          lVar13 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plStack_f0 + 8))(plStack_f0,1);
            }
          }
        }
      }
      if (lVar4 != 0) {
        plVar12 = *(longlong **)(lVar4 + 0x10);
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar12 + 1;
          lVar13 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12,1);
            }
          }
        }
        FMemory::operator_delete(lVar4,0x18);
      }
      plVar12 = uStack_110;
      lVar13 = local_118;
      local_a8 = FUN_1409126e0;
      uStack_a0 = 0;
      if (uStack_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_110 + 1) = (int)uStack_110[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(uStack_110 + 1) = (int)uStack_110[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(uStack_110 + 1) = (int)uStack_110[1] + 1;
        UNLOCK();
      }
      pplVar7 = (longlong **)(local_118 + 0x18);
      plVar9 = (longlong *)FMemory::Realloc(0,0x40);
      local_e8[0] = plVar9;
      if (plVar9 != (longlong *)0x0) {
        local_78 = (undefined4)local_a8;
        uStack_74 = local_a8._4_4_;
        uStack_70 = uStack_a0;
        uStack_6c = uStack_9c;
        local_88 = (undefined4)local_118;
        uStack_84 = local_118._4_4_;
        uStack_80 = (undefined4)uStack_110;
        uStack_7c = uStack_110._4_4_;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          plVar12 = uStack_110;
        }
        TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageContext,1>_>
        ::
        TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),TSharedRef<IMessageContext,1>_>
                  (plVar9,param_1,&local_78,&local_88);
      }
      plVar8 = uStack_110;
      plVar15 = (longlong *)0x0;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar12 + 1;
        lVar4 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*uStack_110)(uStack_110);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*uStack_110 + 8))(uStack_110,1);
          }
        }
        plVar8 = uStack_110;
        LOCK();
        plVar12 = plVar12 + 1;
        lVar4 = *plVar12;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        plVar9 = local_e8[0];
        plVar15 = uStack_110;
        if ((int)lVar4 == 1) {
          (**(code **)*uStack_110)(uStack_110);
          plVar15 = uStack_110;
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = local_e8[0];
          if (iVar14 == 1) {
            (**(code **)(*uStack_110 + 8))(uStack_110,1);
            plVar9 = local_e8[0];
          }
        }
      }
      if (local_e8 == pplVar7) {
LAB_140914472:
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          local_e8[0] = (longlong *)FMemory::Realloc(plVar9,0,0);
          if (local_e8[0] != (longlong *)0x0) {
            FMemory::Free(local_e8[0]);
          }
        }
      }
      else {
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x30))(plVar9,pplVar7);
          goto LAB_140914472;
        }
        if ((*(int *)(lVar13 + 0x20) != 0) && (plVar12 = *pplVar7, plVar12 != (longlong *)0x0)) {
          (**(code **)(*plVar12 + 0x28))(plVar12,0);
          if (*pplVar7 != (longlong *)0x0) {
            plVar12 = (longlong *)FMemory::Realloc(*pplVar7,0,0);
            *pplVar7 = plVar12;
          }
          *(undefined4 *)(lVar13 + 0x20) = 0;
        }
      }
      plVar12 = uStack_110;
      plVar9 = (longlong *)0x0;
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar15 = plVar15 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        plVar9 = uStack_110;
        if ((int)lVar13 == 1) {
          (**(code **)*uStack_110)(uStack_110);
          plVar9 = uStack_110;
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*uStack_110 + 8))(uStack_110,1);
          }
        }
      }
      *(undefined1 *)(local_118 + 0xa8) = 1;
      puVar10 = (undefined8 *)FIPv4Endpoint::ToString(local_118 + 0x58,local_68);
      if (*(int *)(puVar10 + 1) == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*puVar10;
      }
      FString::PrintfImpl(&local_b8,L"FTcpMessageTransportConnection %s",puVar16);
      lVar13 = local_118;
      puVar16 = &DAT_143f3eda8;
      if (local_b0 != 0) {
        puVar16 = local_b8;
      }
      uVar11 = FUN_1415d42a0(local_118,puVar16,0x20000,0,0xffffffffffffffff);
      *(undefined8 *)(lVar13 + 0x90) = uVar11;
      if (local_b8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      iVar14 = *(int *)(param_1 + 0x48);
      *(int *)(param_1 + 0x48) = iVar14 + 1;
      if (*(int *)(param_1 + 0x4c) < iVar14 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar17,iVar14);
      }
      plVar12 = (longlong *)((longlong)iVar14 * 0x10 + *plVar17);
      *plVar12 = local_118;
      plVar12[1] = (longlong)plVar9;
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
      }
    }
    if (uStack_110 != (longlong *)0x0) {
      LOCK();
      plVar9 = uStack_110 + 1;
      lVar13 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*uStack_110)(uStack_110);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar14 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar14 == 1) {
          (**(code **)(*uStack_110 + 8))(uStack_110,1);
        }
      }
    }
LAB_140914640:
    lVar13 = **(longlong **)(param_1 + 200);
    if (lVar13 != 0) {
      uVar11 = *(undefined8 *)(lVar13 + 8);
      uVar5 = *(undefined8 *)(param_1 + 200);
      *(longlong *)(param_1 + 200) = lVar13;
      *(longlong *)(lVar13 + 8) = param_1;
      FMemory::operator_delete(uVar5);
      lVar13 = 0;
      if (0 < *(int *)(param_1 + 0x48)) {
        plVar12 = (longlong *)*plVar17;
        sStackX_1c = (short)((ulonglong)uVar11 >> 0x20);
        do {
          lVar4 = *plVar12;
          if (((int)*(undefined8 *)(lVar4 + 0x58) == (int)uVar11) &&
             ((short)((ulonglong)*(undefined8 *)(lVar4 + 0x58) >> 0x20) == sStackX_1c)) {
            if (*(longlong **)(lVar4 + 0x90) != (longlong *)0x0) {
              *(undefined1 *)(lVar4 + 0xa8) = 0;
              (**(code **)(**(longlong **)(lVar4 + 0x90) + 0x20))();
              plVar12 = *(longlong **)(lVar4 + 0x90);
              if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x28))(plVar12,1);
              }
              *(undefined8 *)(lVar4 + 0x90) = 0;
            }
            if (*(longlong **)(lVar4 + 0x88) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(lVar4 + 0x88) + 8))();
            }
            break;
          }
          lVar13 = lVar13 + 1;
          plVar12 = plVar12 + 2;
        } while (lVar13 < *(int *)(param_1 + 0x48));
      }
      goto LAB_140914640;
    }
    iVar18 = 0;
    iVar14 = 0;
    local_res10 = 0;
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar13 = 0;
      do {
        iVar3 = *(int *)(*(longlong *)(lVar13 + *plVar17) + 0x28);
        if (iVar3 == 1) {
          iVar18 = iVar18 + 1;
        }
        else if (iVar3 == 3) {
          TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
                    (plVar17,iVar14,1,1);
          iVar14 = iVar14 + -1;
          lVar13 = lVar13 + -0x10;
        }
        iVar14 = iVar14 + 1;
        lVar13 = lVar13 + 0x10;
        local_res10 = iVar18;
      } while (iVar14 < *(int *)(param_1 + 0x48));
    }
    plVar17 = (longlong *)*plVar17;
    plVar12 = plVar17 + (longlong)*(int *)(param_1 + 0x48) * 2;
    for (; plVar17 != plVar12; plVar17 = plVar17 + 2) {
      local_c8 = 0;
      local_108 = 0;
      uStack_100 = (longlong *)0x0;
      uStack_c0 = 0;
      while( true ) {
        plVar9 = uStack_100;
        lVar13 = *plVar17;
        lVar4 = **(longlong **)(lVar13 + 0x48);
        if (lVar4 == 0) break;
        puVar10 = (undefined8 *)(lVar4 + 8);
        if (&local_108 != puVar10) {
          local_108 = *puVar10;
          *puVar10 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_100,lVar4 + 0x10);
        }
        lVar6 = *(longlong *)(lVar13 + 0x48);
        *(longlong *)(lVar13 + 0x48) = lVar4;
        local_d8 = 0;
        plStack_d0 = (longlong *)0x0;
        if (puVar10 != &local_d8) {
          *puVar10 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(lVar4 + 0x10,&plStack_d0);
          plVar9 = plStack_d0;
          if (plStack_d0 != (longlong *)0x0) {
            LOCK();
            plVar15 = plStack_d0 + 1;
            lVar4 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plStack_d0)(plStack_d0);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plStack_d0 + 8))(plStack_d0,1);
              }
            }
          }
        }
        if (lVar6 != 0) {
          plVar9 = *(longlong **)(lVar6 + 0x10);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar9 + 1;
            lVar4 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar9 + 8))(plVar9,1);
              }
            }
          }
          FMemory::operator_delete(lVar6,0x18);
        }
        plVar9 = uStack_100;
        local_c8 = *(undefined8 *)(lVar13 + 0x70);
        uStack_c0 = *(undefined8 *)(lVar13 + 0x78);
        if (uStack_100 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_100 + 1) = (int)uStack_100[1] + 1;
          UNLOCK();
        }
        local_98 = (undefined4)local_108;
        uStack_94 = local_108._4_4_;
        uStack_90 = (undefined4)uStack_100;
        uStack_8c = uStack_100._4_4_;
        if (uStack_100 != (longlong *)0x0) {
          LOCK();
          *(int *)(uStack_100 + 1) = (int)uStack_100[1] + 1;
          UNLOCK();
        }
        (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))
                  (*(longlong **)(param_1 + 0xd8),&local_98,&local_c8);
        plVar15 = (longlong *)CONCAT44(uStack_8c,uStack_90);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar15 + 1;
          lVar13 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          plVar9 = uStack_100;
          if ((int)lVar13 == 1) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar9 = uStack_100;
            if (iVar14 == 1) {
              (**(code **)(*plVar15 + 8))(plVar15,1);
              plVar9 = uStack_100;
            }
          }
        }
        plVar15 = uStack_100;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar9 + 1;
          lVar13 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*uStack_100)(uStack_100);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            iVar14 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar14 == 1) {
              (**(code **)(*uStack_100 + 8))(uStack_100,1);
            }
          }
        }
      }
      if (uStack_100 != (longlong *)0x0) {
        LOCK();
        plVar15 = uStack_100 + 1;
        lVar13 = *plVar15;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*uStack_100)(uStack_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*uStack_100 + 8))(uStack_100,1);
          }
        }
      }
    }
    if (local_res10 < 1) {
      uVar19 = 0x3f800000;
    }
    else {
      uVar19 = 0x3c23d70a;
    }
    FUN_1416b1760(uVar19);
    cVar2 = *(char *)(param_1 + 0x2c);
  } while( true );
}



// FUNCTION 140914a50 FUN_140914a50 body=1762 status=ok
// SIG undefined FUN_140914a50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140914a50(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  void *_Src;
  char cVar6;
  BOOL BVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  int local_res8 [2];
  undefined8 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined2 uStack_22e;
  void *local_228;
  int local_220;
  undefined4 local_21c;
  undefined1 local_218;
  undefined4 local_214;
  undefined1 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined1 local_204;
  undefined4 local_200;
  void *local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined8 local_1e4;
  longlong local_1d8 [2];
  undefined1 local_1c8;
  undefined4 local_1c4;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4;
  undefined4 local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined1 local_198;
  undefined1 local_197;
  undefined8 local_194;
  longlong local_188 [2];
  undefined1 local_178;
  undefined4 local_174;
  undefined1 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 local_164;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140 [8];
  undefined1 local_138 [16];
  undefined **local_128 [18];
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  
  plVar12 = (longlong *)0x0;
  local_res8[0] = 0;
  cVar6 = *(char *)(param_1 + 0xa8);
  plVar13 = plVar12;
  do {
    if (cVar6 == '\0') {
      BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
      if (BVar7 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
      }
      *(undefined4 *)(param_1 + 0x28) = 3;
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
      if (((*(int *)(param_1 + 0x20) != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0))
         && (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(), cVar6 != '\0')) {
        if (*(int *)(param_1 + 0x20) != 0) {
          plVar12 = *(longlong **)(param_1 + 0x18);
        }
        (**(code **)(*plVar12 + 0x40))();
      }
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      puVar11 = (undefined8 *)FDateTime::UtcNow(local_138);
      *(undefined8 *)(param_1 + 0x30) = *puVar11;
      if ((*(int *)(param_1 + 0x20) != 0) &&
         (plVar12 = *(longlong **)(param_1 + 0x18), plVar12 != (longlong *)0x0)) {
        (**(code **)(*plVar12 + 0x28))(plVar12,0);
        if (*(longlong *)(param_1 + 0x18) != 0) {
          uVar9 = FMemory::Realloc(*(longlong *)(param_1 + 0x18),0,0);
          *(undefined8 *)(param_1 + 0x18) = uVar9;
        }
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      return 0;
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
      BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
      if (BVar7 == 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
      }
      uVar9 = FName::FName(local_res18,L"WINDOWS",1);
      FUN_1419c6b80(uVar9);
      cVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x68))
                        (*(longlong **)(param_1 + 0x88),1,0);
      if (cVar6 != '\0') {
        local_res10 = 0;
        FArchive::FArchive(local_128);
        local_90 = &local_80;
        local_98 = 0;
        local_128[0] = &PTR_FUN_143f4a100;
        local_88 = 0;
        FArchive::SetIsSaving(local_128,1);
        FArchive::SetIsPersistent(local_128,0);
        local_150 = *(undefined8 *)(param_1 + 0x60);
        uStack_148 = *(undefined8 *)(param_1 + 0x68);
        local_80 = 0;
        local_78 = 0;
        local_128[0] = &PTR__scalar_deleting_destructor__14415b438;
        local_158 = 0x45504943;
        local_154 = 1;
        FUN_140910880(local_128,&local_158);
        iVar14 = 0x18;
        lVar15 = local_80;
        do {
          while( true ) {
            cVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x68))
                              (*(longlong **)(param_1 + 0x88),1,10000000);
            plVar10 = *(longlong **)(param_1 + 0x88);
            if (cVar6 != '\0') break;
            iVar8 = (**(code **)(*plVar10 + 0x70))();
            if (iVar8 == 2) {
LAB_140914beb:
              if (local_80 != 0) {
                FMemory::Free();
              }
              FArchive::~FArchive(local_128);
              LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
              goto LAB_140914ca2;
            }
          }
          local_res8[0] = 0;
          cVar6 = (**(code **)(*plVar10 + 0x50))(plVar10,lVar15,iVar14,local_res8);
          if (cVar6 == '\0') goto LAB_140914beb;
          iVar14 = iVar14 - local_res8[0];
          lVar15 = lVar15 + local_res8[0];
        } while (0 < iVar14);
        *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 0x18;
        *(undefined1 *)(param_1 + 0x80) = 1;
        if (local_80 != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(local_128);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
    }
    cVar6 = FUN_140913620(param_1);
    if ((cVar6 == '\0') ||
       (iVar14 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x70))(), iVar14 == 2)) {
LAB_140914ca2:
      if (*(char *)(param_1 + 0xa8) != '\0') {
        if (*(int *)(param_1 + 0xac) < 1) {
          *(undefined1 *)(param_1 + 0xa8) = 0;
        }
        else {
          bVar4 = false;
          BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
          if (BVar7 == 0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
          }
          (**(code **)(**(longlong **)(param_1 + 0x88) + 8))();
          uVar9 = FName::FName(local_res20,L"WINDOWS",1);
          plVar10 = (longlong *)FUN_1419c6b80(uVar9);
          (**(code **)(*plVar10 + 0x28))(plVar10,*(undefined8 *)(param_1 + 0x88));
          *(undefined8 *)(param_1 + 0x88) = 0;
          FUN_1416b1760();
          local_1f8 = (void *)0x0;
          local_1f0 = 0x26;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
          _Src = local_1f8;
          FGenericPlatformString::Memcpy(local_1f8,L"FTcpMessageTransport.RemoteConnection",0x4c);
          uVar5 = DAT_1469f59a0;
          lVar15 = (longlong)(int)local_1f0;
          local_228 = (void *)0x0;
          local_220 = (int)local_1f0;
          if ((int)local_1f0 == 0) {
            local_21c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_228,local_1f0 & 0xffffffff,0);
            _guard_xfg_dispatch_icall_nop(local_228,_Src,lVar15 * 2);
          }
          local_1e8 = 0;
          local_1e7 = 0;
          local_1e4 = CONCAT26(uStack_22e,(uint6)uVar5);
          local_218 = 0;
          local_214 = 0;
          local_210 = 0;
          local_208 = 0;
          local_204 = 0;
          local_200 = 0x200000;
          FString::FString(local_1d8,&local_228);
          local_1c8 = local_218;
          local_1c4 = local_214;
          local_1c0 = local_210;
          local_1bc = local_20c;
          local_1b4 = local_204;
          local_1b0 = local_200;
          local_198 = local_1e8;
          local_197 = local_1e7;
          local_194 = local_1e4;
          local_1b8 = 0x200000;
          FString::FString(local_188,local_1d8);
          local_178 = local_1c8;
          local_174 = local_1c4;
          local_170 = local_1c0;
          local_16c = local_1bc;
          local_168 = local_1b8;
          local_164 = local_1b4;
          local_160 = local_1b0;
          uVar9 = FUN_1408d5630(&local_198);
          *(undefined8 *)(param_1 + 0x88) = uVar9;
          if (local_188[0] != 0) {
            FMemory::Free();
          }
          if (local_1d8[0] != 0) {
            FMemory::Free();
          }
          if (local_228 != (void *)0x0) {
            FMemory::Free();
          }
          if (_Src != (void *)0x0) {
            FMemory::Free(_Src);
          }
          if (*(longlong *)(param_1 + 0x88) == 0) {
LAB_140914f28:
            bVar3 = false;
          }
          else {
            plVar13 = (longlong *)0x1;
            (**(code **)(*DAT_1469f5998 + 0x70))(DAT_1469f5998,&local_1a8,0,0);
            (**(code **)(*local_1a8 + 0x10))(local_1a8,*(undefined4 *)(param_1 + 0x58));
            (**(code **)(*local_1a8 + 0x30))(local_1a8,*(undefined2 *)(param_1 + 0x5c));
            cVar6 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x18))
                              (*(longlong **)(param_1 + 0x88),local_1a8);
            if (cVar6 == '\0') goto LAB_140914f28;
            bVar3 = true;
          }
          plVar10 = local_1a0;
          if ((plVar13 != (longlong *)0x0) &&
             (plVar13 = (longlong *)0x0, local_1a0 != (longlong *)0x0)) {
            LOCK();
            plVar1 = local_1a0 + 1;
            lVar15 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*local_1a0)(local_1a0);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              iVar14 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
          if (bVar3) {
            *(undefined2 *)(param_1 + 0x80) = 0;
            bVar4 = true;
            *(undefined4 *)(param_1 + 0x28) = 2;
            *(undefined8 *)(param_1 + 0x78) = 0;
            *(undefined8 *)(param_1 + 0x70) = 0;
          }
          else {
            if (*(longlong *)(param_1 + 0x88) != 0) {
              uVar9 = FName::FName(local_140,L"WINDOWS",1);
              plVar10 = (longlong *)FUN_1419c6b80(uVar9);
              (**(code **)(*plVar10 + 0x28))(plVar10,*(undefined8 *)(param_1 + 0x88));
              *(undefined8 *)(param_1 + 0x88) = 0;
            }
            *(undefined1 *)(param_1 + 0xa8) = 0;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
          if ((((bVar4) && (*(int *)(param_1 + 0x20) != 0)) &&
              (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) &&
             (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))(), cVar6 != '\0')) {
            if (*(int *)(param_1 + 0x20) == 0) {
              (**(code **)(_DAT_00000000 + 0x40))(0);
            }
            else {
              (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
            }
          }
        }
      }
    }
    FUN_1416b1810();
    cVar6 = *(char *)(param_1 + 0xa8);
  } while( true );
}



// FUNCTION 140915140 Send body=548 status=ok
// SIG undefined Send(void)

undefined8 FTcpMessageTransportConnection::Send(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  BOOL BVar7;
  undefined4 local_res8 [2];
  undefined **local_e8;
  longlong *local_e0;
  byte local_bf;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40 [3];
  
  BVar7 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  if (BVar7 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  }
  if ((*(int *)(param_1 + 0x28) == 1) && (*(char *)(param_1 + 0x80) != '\0')) {
    lVar4 = *param_2;
    FArchive::FArchive(&local_e8);
    local_58 = 0;
    local_e8 = &PTR_FUN_143f4a100;
    local_50 = local_40;
    local_48 = 0;
    FArchive::SetIsSaving(&local_e8,1);
    FArchive::SetIsPersistent(&local_e8,1);
    local_e8 = &PTR__scalar_deleting_destructor__14415b438;
    local_40[0] = 0;
    local_40[1] = 0;
    local_res8[0] = *(undefined4 *)(lVar4 + 0xb0);
    if ((undefined4 *)local_e0[1] < (undefined4 *)*local_e0 + 1) {
      FMemoryWriter::Serialize(&local_e8,local_res8,4);
      if ((local_bf & 0x10) != 0) {
        FArchive::ByteSwap(&local_e8,local_res8,4);
      }
    }
    else {
      local_res8[0] = *(undefined4 *)*local_e0;
      *local_e0 = *local_e0 + 4;
    }
    cVar6 = FUN_1409114b0(param_1,local_40[0],4);
    if (cVar6 != '\0') {
      *(longlong *)(param_1 + 0xa0) = *(longlong *)(param_1 + 0xa0) + 4;
      cVar6 = FUN_1409114b0(param_1,*(undefined8 *)(lVar4 + 0xa8),*(undefined4 *)(lVar4 + 0xb0));
      if (cVar6 != '\0') {
        *(longlong *)(param_1 + 0xa0) =
             *(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(lVar4 + 0xb0);
        if (local_40[0] != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(&local_e8);
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
        TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
        return 1;
      }
    }
    if (local_40[0] != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_e8);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(param_2);
    return 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 200));
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return 0;
}



// FUNCTION 140915370 FUN_140915370 body=614 status=ok
// SIG undefined FUN_140915370(void)

void FUN_140915370(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 8) = 0xff;
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
          goto LAB_140915527;
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
LAB_140915527:
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



// FUNCTION 1409155e0 ShutdownBridge body=159 status=ok
// SIG undefined ShutdownBridge(void)

void FTcpMessagingModule::ShutdownBridge(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *local_10;
  
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x10))();
    FUN_1416b1760(0x3dcccccd);
    local_10 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x10) != &local_18) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x18,&local_10);
      plVar5 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140915680 FUN_140915680 body=443 status=ok
// SIG undefined FUN_140915680(void)

undefined8 FUN_140915680(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(undefined8 *)(param_1 + 0xd0) = param_2;
  if ((*(int *)(param_1 + 8) != DAT_1469f59a8) || (*(short *)(param_1 + 0xc) != DAT_1469f59ac)) {
    puVar2 = (undefined8 *)operator_new(0x48);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar3 = (undefined8 *)FTimespan::FromSeconds(local_res8,0x3ff0000000000000);
      *(undefined1 *)(puVar2 + 1) = 1;
      *puVar2 = &PTR_Init_14415b168;
      *(undefined8 *)((longlong)puVar2 + 0xc) = *(undefined8 *)(param_1 + 8);
      puVar2[3] = *puVar3;
      puVar2[4] = 0;
      *(undefined1 *)(puVar2 + 5) = 0;
      puVar2[7] = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      uVar4 = FUN_1415d42a0(puVar2,L"FTcpListener",0x2000,0,0xffffffffffffffff);
      puVar2[6] = uVar4;
    }
    *(undefined8 **)(param_1 + 0x30) = puVar2;
    uStack_10 = 0;
    local_18 = FUN_140912950;
    plVar8 = puVar2 + 7;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_GetPoolName_14415b6a8;
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_18;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_18._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_10;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_c;
      plVar5[1] = param_1 + -8;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar6;
    }
    if (&local_18 != plVar8) {
      if (plVar5 == (longlong *)0x0) {
        if ((*(int *)(puVar2 + 8) != 0) && (plVar1 = (longlong *)*plVar8, plVar1 != (longlong *)0x0)
           ) {
          (**(code **)(*plVar1 + 0x28))(plVar1,0);
          if (*plVar8 != 0) {
            lVar6 = FMemory::Realloc(*plVar8,0,0);
            *plVar8 = lVar6;
          }
          *(undefined4 *)(puVar2 + 8) = 0;
        }
      }
      else {
        (**(code **)(*plVar5 + 0x30))(plVar5,plVar8);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      lVar6 = FMemory::Realloc(plVar5,0,0);
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  lVar6 = lVar7 + (longlong)*(int *)(param_1 + 0x18) * 8;
  for (; lVar7 != lVar6; lVar7 = lVar7 + 8) {
    FUN_140911190(param_1 + -8,lVar7);
  }
  return 1;
}



// FUNCTION 140915860 Stop body=20 status=ok
// SIG undefined Stop(void)

void FTcpMessageTransportConnection::Stop(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014091586f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x88) + 8))();
    return;
  }
  return;
}



// FUNCTION 140915880 FUN_140915880 body=587 status=ok
// SIG undefined FUN_140915880(void)

void FUN_140915880(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 local_res8;
  undefined8 local_38;
  longlong *plStack_30;
  
  *(undefined1 *)(param_1 + 0x24) = 1;
  plVar9 = *(longlong **)(param_1 + 0x30);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,1);
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  plVar9 = *(longlong **)(param_1 + 0x38);
  uVar8 = (ulonglong)*(int *)(param_1 + 0x40);
  plVar10 = plVar9 + uVar8 * 2;
  if (plVar9 != plVar10) {
    do {
      lVar3 = *plVar9;
      if (*(longlong **)(lVar3 + 0x90) != (longlong *)0x0) {
        *(undefined1 *)(lVar3 + 0xa8) = 0;
        (**(code **)(**(longlong **)(lVar3 + 0x90) + 0x20))();
        plVar4 = *(longlong **)(lVar3 + 0x90);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,1);
        }
        *(undefined8 *)(lVar3 + 0x90) = 0;
      }
      if (*(longlong **)(lVar3 + 0x88) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar3 + 0x88) + 8))();
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != plVar10);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x40);
  }
  if ((int)uVar8 != 0) {
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    do {
      plVar10 = (longlong *)*plVar9;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar10 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
      plVar9 = plVar9 + 2;
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0x38,0);
  }
  while (lVar3 = **(longlong **)(param_1 + 0xb0), lVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0xb0);
    *(longlong *)(param_1 + 0xb0) = lVar3;
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
    if ((undefined8 *)(lVar3 + 8) != &local_38) {
      *(undefined8 *)(lVar3 + 8) = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(lVar3 + 0x10,&plStack_30);
      plVar9 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar10 = plStack_30 + 1;
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plStack_30 + 8))(plStack_30,1);
          }
        }
      }
    }
    if (lVar5 != 0) {
      plVar9 = *(longlong **)(lVar5 + 0x10);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar9 + 1;
        lVar3 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      FMemory::operator_delete(lVar5,0x18);
    }
  }
  while (lVar3 = **(longlong **)(param_1 + 0xc0), lVar3 != 0) {
    uVar6 = *(undefined8 *)(param_1 + 0xc0);
    *(longlong *)(param_1 + 0xc0) = lVar3;
    *(undefined8 *)(lVar3 + 8) = local_res8;
    FMemory::operator_delete(uVar6,0x10);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  return;
}



// FUNCTION 140915ad0 FUN_140915ad0 body=1795 status=ok
// SIG undefined FUN_140915ad0(void)

ulonglong FUN_140915ad0(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  DWORD *pDVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  int local_res20 [2];
  longlong *local_118;
  uint local_110;
  int local_10c;
  longlong *local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e4;
  undefined8 uStack_dc;
  longlong local_d0;
  longlong *plStack_c8;
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
  if (0x400 < *(int *)(uVar4 + 8)) {
    return uVar4 & 0xffffffffffffff00;
  }
  plVar13 = (longlong *)0x0;
  local_e8 = '\0';
  local_e4 = 0;
  uStack_dc = 0;
  local_d0 = 0;
  plStack_c8 = (longlong *)0x0;
  while (plVar7 = plStack_c8, lVar10 = **(longlong **)(param_1 + 0xa0), lVar10 != 0) {
    local_e8 = *(char *)(lVar10 + 8);
    plVar5 = (longlong *)(lVar10 + 0x20);
    local_e4 = *(longlong *)(lVar10 + 0xc);
    uStack_dc = *(undefined8 *)(lVar10 + 0x14);
    plVar3 = plStack_c8;
    if (&local_d0 != plVar5) {
      local_d0 = *plVar5;
      *plVar5 = 0;
      plVar3 = *(longlong **)(lVar10 + 0x28);
      *(undefined8 *)(lVar10 + 0x28) = 0;
      if (plStack_c8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plStack_c8 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          lVar14 = *plStack_c8;
          plStack_c8 = plVar3;
          (**(code **)(lVar14 + 8))(plVar7,1);
          plVar3 = plStack_c8;
        }
      }
    }
    plStack_c8 = plVar3;
    lVar14 = *(longlong *)(param_1 + 0xa0);
    *(longlong *)(param_1 + 0xa0) = lVar10;
    local_80 = 0;
    uStack_78 = 0;
    local_94 = 0;
    uStack_8c = 0;
    *(undefined1 *)(lVar10 + 8) = 0;
    local_9c._4_1_ = 0;
    *(undefined4 *)(lVar10 + 0xc) = 0;
    *(undefined4 *)(lVar10 + 0x10) = 0;
    *(undefined4 *)(lVar10 + 0x14) = 0;
    *(undefined4 *)(lVar10 + 0x18) = 0;
    if ((undefined8 *)(lVar10 + 0x20) != &local_80) {
      *(undefined8 *)(lVar10 + 0x20) = 0;
      plVar7 = *(longlong **)(lVar10 + 0x28);
      *(undefined8 *)(lVar10 + 0x28) = 0;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
    }
    if (lVar14 != 0) {
      plVar7 = *(longlong **)(lVar14 + 0x28);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar11 == 1) && (plVar7 != (longlong *)0x0)) {
          (**(code **)(*plVar7 + 8))(plVar7,1);
        }
      }
      FMemory::operator_delete(lVar14,0x30);
    }
    if (local_e8 == '\0') {
      FUN_1406cda60(param_1 + 0x48,&local_e4);
    }
    else {
      local_f0 = plStack_c8;
      local_f8 = 0;
      if (plStack_c8 != (longlong *)0x0) {
        LOCK();
        iVar11 = (int)plStack_c8[1];
        bVar15 = iVar11 == 0;
        if (bVar15) {
          *(int *)(plStack_c8 + 1) = 0;
          iVar11 = 0;
        }
        UNLOCK();
        while (!bVar15) {
          LOCK();
          bVar15 = iVar11 == (int)plStack_c8[1];
          if (bVar15) {
            *(int *)(plStack_c8 + 1) = iVar11 + 1;
          }
          UNLOCK();
          if (bVar15) {
            local_f8 = 0;
            if (plStack_c8 != (longlong *)0x0) {
              local_f8 = local_d0;
            }
            goto LAB_140915ca7;
          }
          LOCK();
          iVar11 = (int)plStack_c8[1];
          bVar15 = iVar11 == 0;
          if (bVar15) {
            *(int *)(plStack_c8 + 1) = 0;
            iVar11 = 0;
          }
          UNLOCK();
        }
        local_f0 = (longlong *)0x0;
LAB_140915ca7:
        if (local_f8 != 0) {
          local_70 = &local_e4;
          local_68 = &local_f8;
          FUN_14090fbf0(param_1 + 0x48,&local_9c,&local_70,0);
        }
        plVar7 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_f0 + 1;
          lVar10 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)lVar10 == 1) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            iVar11 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar7 + 8))(plVar7,1);
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
  local_118 = (longlong *)0x0;
  uVar12 = 0;
  local_110 = 0;
  local_10c = 0;
  if ((int)param_3[1] == 0) {
    plVar13 = *(longlong **)(param_1 + 0x38);
    plVar5 = plVar13 + (longlong)*(int *)(param_1 + 0x40) * 2;
    local_108 = (longlong *)0x0;
    local_100 = 0;
    local_100._4_4_ = 0;
    plVar7 = local_108;
    iVar11 = local_100._4_4_;
    for (; plVar13 != plVar5; plVar13 = plVar13 + 2) {
      lVar10 = *plVar13;
      local_108 = plVar7;
      if (*(int *)(lVar10 + 0x28) == 1) {
        iVar11 = (int)uVar4;
        uVar12 = iVar11 + 1;
        local_100._4_4_ = (int)(local_100 >> 0x20);
        local_100 = CONCAT44(local_100._4_4_,uVar12);
        if (local_100._4_4_ < (int)uVar12) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_108,uVar4);
          lVar10 = *plVar13;
          uVar12 = (uint)local_100;
        }
        uVar4 = (ulonglong)uVar12;
        local_108[(longlong)iVar11 * 2] = lVar10;
        lVar10 = plVar13[1];
        (local_108 + (longlong)iVar11 * 2)[1] = lVar10;
        if (lVar10 != 0) {
          LOCK();
          *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
          UNLOCK();
          uVar4 = local_100 & 0xffffffff;
        }
      }
      uVar12 = (uint)uVar4;
      plVar7 = local_108;
      iVar11 = local_100._4_4_;
    }
    local_100 = 0;
    local_108 = (longlong *)0x0;
    local_118 = plVar7;
    local_110 = uVar12;
    local_10c = iVar11;
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_108);
LAB_140915f26:
    plVar13 = (longlong *)0x0;
    if (uVar12 != 0) {
      plVar5 = (longlong *)operator_new(0xb8);
      plVar7 = plVar13;
      if (plVar5 != (longlong *)0x0) {
        local_c0 = 0;
        FArchive::FArchive(plVar5);
        plVar5[0x12] = 0;
        *plVar5 = (longlong)&PTR_FUN_143f4a100;
        plVar5[0x14] = local_c0;
        plVar5[0x13] = (longlong)(plVar5 + 0x15);
        FArchive::SetIsSaving(plVar5,1);
        FArchive::SetIsPersistent(plVar5,1);
        *plVar5 = (longlong)&PTR__scalar_deleting_destructor__14415b208;
        plVar5[0x15] = 0;
        plVar5[0x16] = 0;
        plVar7 = plVar5;
      }
      plVar5 = (longlong *)operator_new(0x18);
      local_a8 = plVar13;
      if (plVar5 != (longlong *)0x0) {
        *(undefined4 *)(plVar5 + 1) = 1;
        *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
        plVar5[2] = (longlong)plVar7;
        local_a8 = plVar5;
      }
      local_b0 = plVar7;
      SharedPointerInternals::EnableSharedFromThis(&local_b0,plVar7,plVar7);
      pDVar6 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar7 = TlsGetValue(*pDVar6);
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)operator_new(0x18);
        if (plVar7 != (longlong *)0x0) {
          *plVar7 = 0;
          plVar7[1] = 0;
          *(undefined4 *)(plVar7 + 2) = 0;
          plVar13 = plVar7;
        }
        TlsSetValue(*pDVar6,plVar13);
        plVar7 = plVar13;
      }
      local_60 = (longlong *)plVar7[1];
      if (local_60 == (longlong *)0x0) {
        local_60 = (longlong *)*plVar7;
        if (local_60 == (longlong *)0x0) {
          local_60 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar6 + 2);
          plVar7[1] = (longlong)local_60;
          if (local_60 == (longlong *)0x0) {
            puVar8 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar7[1] = (longlong)puVar8;
            lVar10 = 0x1f;
            do {
              puVar2 = puVar8 + 0x20;
              *puVar8 = puVar2;
              lVar10 = lVar10 + -1;
              puVar8 = puVar2;
            } while (lVar10 != 0);
            *puVar2 = 0;
            local_60 = (longlong *)plVar7[1];
          }
          iVar11 = 0x20;
          *(undefined4 *)(plVar7 + 2) = 0x20;
        }
        else {
          iVar11 = 0x20;
          plVar7[1] = (longlong)local_60;
          *(undefined4 *)(plVar7 + 2) = 0x20;
          *plVar7 = 0;
        }
      }
      else {
        iVar11 = (int)plVar7[2];
      }
      plVar7[1] = *local_60;
      *(int *)(plVar7 + 2) = iVar11 + -1;
      *(undefined4 *)(local_60 + 1) = 0xff;
      *local_60 = (longlong)&PTR_FUN_143f3edd8;
      local_48 = 0;
      local_40 = 0;
      *(undefined4 *)((longlong)local_60 + 0xc) = 1;
      *local_60 = (longlong)&PTR_FUN_14415b428;
      *(undefined1 *)(local_60 + 8) = 0;
      local_60[9] = 0;
      local_58 = 0;
      local_50 = 0xff;
      FUN_14090fa70(&local_60,&local_b8,param_2,&local_b0,&local_118);
      if (local_b8 != 0) {
        LOCK();
        piVar1 = (int *)(local_b8 + 0x48);
        iVar11 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          FGraphEvent::Recycle(local_b8);
        }
      }
      plVar13 = local_a8;
      uVar4 = 1;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_a8 + 1;
        lVar10 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          iVar11 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
          }
        }
      }
      goto LAB_140916173;
    }
  }
  else {
    lVar10 = *param_3;
    lVar14 = (longlong)(int)param_3[1] * 0x10 + lVar10;
    if (lVar10 != lVar14) {
      do {
        lVar9 = 0;
        TSet<TTuple<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FTcpMessageTransportConnection,0>,0>,FDefaultSetAllocator>
        ::FindId((longlong *)(param_1 + 0x48),local_res20,lVar10);
        if (local_res20[0] != -1) {
          lVar9 = *(longlong *)(param_1 + 0x48) + (longlong)local_res20[0] * 0x28;
        }
        plVar7 = (longlong *)(lVar9 + 0x10);
        if (lVar9 == 0) {
          plVar7 = (longlong *)0x0;
        }
        if ((plVar7 != (longlong *)0x0) && (*(int *)(*plVar7 + 0x28) == 1)) {
          iVar11 = (int)uVar4;
          for (plVar5 = plVar13; plVar5 != plVar13 + (longlong)iVar11 * 2; plVar5 = plVar5 + 2) {
            if (*plVar5 == *plVar7) {
              if ((int)((longlong)plVar5 - (longlong)plVar13 >> 4) != -1) goto LAB_140915f09;
              break;
            }
          }
          local_110 = iVar11 + 1;
          if (local_10c < (int)local_110) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_118,uVar4);
            plVar13 = local_118;
          }
          uVar4 = (ulonglong)local_110;
          plVar13[(longlong)iVar11 * 2] = *plVar7;
          lVar9 = plVar7[1];
          plVar13[(longlong)iVar11 * 2 + 1] = lVar9;
          if (lVar9 != 0) {
            LOCK();
            *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
            UNLOCK();
            uVar4 = (ulonglong)local_110;
            plVar13 = local_118;
          }
        }
LAB_140915f09:
        uVar12 = (uint)uVar4;
        lVar10 = lVar10 + 0x10;
      } while (lVar10 != lVar14);
      goto LAB_140915f26;
    }
  }
  uVar4 = 0;
LAB_140916173:
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_118);
  if (plStack_c8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plStack_c8 + 0xc);
    iVar11 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar11 == 1) && (plStack_c8 != (longlong *)0x0)) {
      (**(code **)(*plStack_c8 + 8))(plStack_c8,1);
    }
  }
  return uVar4;
}



// FUNCTION 1409161e0 FUN_1409161e0 body=1083 status=ok
// SIG undefined FUN_1409161e0(void)

void FUN_1409161e0(longlong param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  short *psVar8;
  ulonglong uVar9;
  short *psVar10;
  longlong local_res8;
  short *local_38;
  undefined8 local_30;
  
  uVar5 = 0;
  local_38 = (short *)0x0;
  local_30 = 0;
  iVar4 = *(int *)(param_2 + 1) + 0x10;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = 0x11;
  }
  uVar7 = uVar5;
  uVar9 = uVar5;
  local_res8 = param_1;
  if (0 < iVar4) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
    uVar9 = local_30 >> 0x20;
    uVar7 = local_30 & 0xffffffff;
  }
  iVar6 = (int)uVar7;
  iVar4 = (2 - (uint)(iVar6 != 0)) + iVar6;
  if ((int)uVar9 < iVar4) {
    local_30._0_4_ = iVar4;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,uVar7);
    uVar9 = (ulonglong)local_30._4_4_;
  }
  iVar4 = (int)uVar9;
  local_38[(longlong)iVar6 - (ulonglong)(iVar6 != 0)] = 0x22;
  (local_38 + ((longlong)iVar6 - (ulonglong)(iVar6 != 0)))[1] = 0;
  psVar8 = local_38;
  if (*(int *)(param_2 + 1) != 0) {
    psVar10 = (short *)*param_2;
    sVar2 = *psVar10;
    while (sVar2 != 0) {
      iVar4 = (int)uVar9;
      switch(sVar2) {
      case 8:
        local_30._0_4_ = 3;
        if (iVar4 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          uVar9 = (ulonglong)local_30._4_4_;
          psVar8 = local_38;
        }
        psVar8[0] = 0x5c;
        psVar8[1] = 0x62;
        psVar8[2] = 0;
        break;
      case 9:
        local_30._0_4_ = 3;
        if (iVar4 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          uVar9 = (ulonglong)local_30._4_4_;
          psVar8 = local_38;
        }
        psVar8[0] = 0x5c;
        psVar8[1] = 0x74;
        psVar8[2] = 0;
        break;
      case 10:
        local_30._0_4_ = 3;
        if (iVar4 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          uVar9 = (ulonglong)local_30._4_4_;
          psVar8 = local_38;
        }
        psVar8[0] = 0x5c;
        psVar8[1] = 0x6e;
        psVar8[2] = 0;
        break;
      default:
        if (sVar2 != 0) {
          local_30._0_4_ = 2;
          if (iVar4 < 2) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38);
            uVar9 = (ulonglong)local_30._4_4_;
            psVar8 = local_38;
          }
          *psVar8 = sVar2;
          psVar8[1] = 0;
        }
        break;
      case 0xc:
        local_30._0_4_ = 3;
        if (iVar4 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          uVar9 = (ulonglong)local_30._4_4_;
          psVar8 = local_38;
        }
        psVar8[0] = 0x5c;
        psVar8[1] = 0x66;
        psVar8[2] = 0;
        break;
      case 0xd:
        local_30._0_4_ = 3;
        if (iVar4 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          uVar9 = (ulonglong)local_30._4_4_;
          psVar8 = local_38;
        }
        psVar8[0] = 0x5c;
        psVar8[1] = 0x72;
        psVar8[2] = 0;
        break;
      case 0x22:
        local_30._0_4_ = 3;
        if (iVar4 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          uVar9 = (ulonglong)local_30._4_4_;
          psVar8 = local_38;
        }
        psVar8[0] = 0x5c;
        psVar8[1] = 0x22;
        psVar8[2] = 0;
        break;
      case 0x5c:
        local_30._0_4_ = 3;
        if (iVar4 < 3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
          uVar9 = (ulonglong)local_30._4_4_;
          psVar8 = local_38;
        }
        psVar8[0] = 0x5c;
        psVar8[1] = 0x5c;
        psVar8[2] = 0;
      }
      iVar4 = (int)uVar9;
      psVar1 = psVar10 + 1;
      psVar10 = psVar10 + 1;
      param_1 = local_res8;
      sVar2 = *psVar1;
    }
  }
  local_30 = CONCAT44(local_30._4_4_,2);
  iVar6 = 2;
  if (iVar4 < 2) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    psVar8 = local_38;
    iVar6 = (int)local_30;
  }
  *psVar8 = 0x22;
  psVar10 = &DAT_143f3eda8;
  if (iVar6 != 0) {
    psVar10 = psVar8;
  }
  psVar8[1] = 0;
  plVar3 = *(longlong **)(param_1 + 8);
  while( true ) {
    iVar4 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar4 = 0;
    }
    if (iVar4 <= (int)uVar5) break;
    local_res8 = CONCAT62(local_res8._2_6_,*psVar10);
    (**(code **)(*plVar3 + 0x50))(plVar3,&local_res8,2);
    uVar5 = (ulonglong)((int)uVar5 + 1);
    psVar10 = psVar10 + 1;
  }
  if (psVar8 != (short *)0x0) {
    FMemory::Free(psVar8);
  }
  return;
}



// FUNCTION 1409166a0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UTcpMessagingSettings::GetPrivateStaticClass(void)

{
  if (DAT_146862cf8 == 0) {
    FUN_14171ccd0(L"/Script/TcpMessaging",L"TcpMessagingSettings",&DAT_146862cf8,FUN_140447710,0x58,
                  0x10000004,0,L"Engine",FUN_140916790,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146862cf8;
}



// FUNCTION 140916760 FUN_140916760 body=47 status=ok
// SIG undefined FUN_140916760(void)

longlong FUN_140916760(void)

{
  if (DAT_146862ce8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146862ce8,&PTR_s__Script_TcpMessaging_14415b980);
  }
  return DAT_146862ce8;
}



// FUNCTION 140916790 FUN_140916790 body=59 status=ok
// SIG undefined FUN_140916790(void)

void FUN_140916790(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__14415b9a8;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  return;
}



// FUNCTION 1409167d0 `scalar_deleting_destructor' body=140 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UTcpMessagingSettings::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x48);
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x40);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140916860 FUN_140916860 body=47 status=ok
// SIG undefined FUN_140916860(void)

longlong FUN_140916860(void)

{
  if (DAT_146862cf0 == 0) {
    FUN_141786440(&DAT_146862cf0,&PTR_GetPrivateStaticClass_14415b7d0);
  }
  return DAT_146862cf0;
}



// FUNCTION 1409168a0 FUN_1409168a0 body=1750 status=ok
// SIG undefined FUN_1409168a0(void)

undefined1 FUN_1409168a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  undefined8 local_res18;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined8 *local_a8;
  undefined1 local_a0 [8];
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [2];
  undefined1 local_48 [8];
  longlong *local_40;
  
  local_res18 = param_3;
  cVar5 = FParse::Command(&local_res18,L"UDPMESSAGING",1);
  if (cVar5 == '\0') {
    return 0;
  }
  cVar5 = FParse::Command(&local_res18,L"STATUS",1);
  if (cVar5 == '\0') {
    cVar5 = FParse::Command(&local_res18,L"RESTART",1);
    if (cVar5 == '\0') {
      cVar5 = FParse::Command(&local_res18,L"SHUTDOWN",1);
      if (cVar5 == '\0') {
        FOutputDevice::Log(param_4,L"Usage: UDPMESSAGING <Command>");
        FOutputDevice::Log(param_4,&DAT_143f3eda8);
        FOutputDevice::Log(param_4,L"Command");
        FOutputDevice::Log(param_4,
                           L"    RESTART = Restarts the message bridge and message tunnel, if enabled"
                          );
        FOutputDevice::Log(param_4,
                           L"    SHUTDOWN = Shut down the message bridge and message tunnel, if running"
                          );
        FOutputDevice::Log(param_4,L"    STATUS = Displays the status of the UDP message transport")
        ;
      }
      else {
        FTcpMessagingModule::ShutdownBridge(param_1);
        FUN_140921cc0(param_1);
      }
    }
    else {
      FUN_140921260(param_1);
    }
  }
  else {
    plVar7 = (longlong *)UUdpMessagingSettings::GetPrivateStaticClass();
    lVar14 = plVar7[0x1f];
    if (lVar14 == 0) {
      (**(code **)(*plVar7 + 0x368))(plVar7);
      lVar14 = plVar7[0x1f];
    }
    FOutputDevice::LogfImpl(param_4,L"Protocol Version: %i",10);
    if (*(longlong **)(param_1 + 0x10) == (longlong *)0x0) {
      pwVar13 = L"Message Bridge: Not initialized.";
    }
    else {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
      pwVar13 = L"Message Bridge: Initialized and enabled";
      if (cVar5 == '\0') {
        pwVar13 = L"Message Bridge: Initialized, but disabled";
      }
    }
    FOutputDevice::Log(param_4,pwVar13);
    if (*(int *)(lVar14 + 0x38) < 2) {
      puVar8 = (undefined8 *)FIPv4Endpoint::ToString(&DAT_1469f59a8,local_98);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar8;
      }
      FOutputDevice::LogfImpl(param_4,L"    Unicast Endpoint: %s (default)",puVar17);
      if (local_98[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*(int *)(lVar14 + 0x38) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = *(undefined2 **)(lVar14 + 0x30);
      }
      FOutputDevice::LogfImpl(param_4,L"    Unicast Endpoint: %s",puVar17);
    }
    if (*(int *)(lVar14 + 0x48) < 2) {
      local_c8 = 0xe6000001;
      local_b0 = 0xe6000001;
      local_ac = 0x1a0a;
      puVar8 = (undefined8 *)FIPv4Endpoint::ToString(&local_b0,local_88);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar8;
      }
      FOutputDevice::LogfImpl(param_4,L"    Multicast Endpoint: %s (default)",puVar17);
      if (local_88[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*(int *)(lVar14 + 0x48) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = *(undefined2 **)(lVar14 + 0x40);
      }
      FOutputDevice::LogfImpl(param_4,L"    Multicast Endpoint: %s",puVar17);
    }
    FOutputDevice::LogfImpl(param_4,L"    Multicast TTL: %i",*(undefined1 *)(lVar14 + 0x50));
    if (*(int *)(lVar14 + 0x60) < 1) {
      FOutputDevice::Log(param_4,L"    Static Endpoints: None");
    }
    else {
      FOutputDevice::Log(param_4,L"    Static Endpoints:");
      puVar8 = *(undefined8 **)(lVar14 + 0x58);
      puVar10 = puVar8 + (longlong)*(int *)(lVar14 + 0x60) * 2;
      for (; puVar8 != puVar10; puVar8 = puVar8 + 2) {
        if (*(int *)(puVar8 + 1) == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*puVar8;
        }
        FOutputDevice::LogfImpl(param_4,L"        %s",puVar17);
      }
    }
    if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
      pwVar13 = L"Message Tunnel: Not initialized.";
    }
    else {
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
      pwVar13 = L"Message Tunnel: Initialized and started";
      if (cVar5 == '\0') {
        pwVar13 = L"Message Tunnel: Initialized, but stopped";
      }
    }
    FOutputDevice::Log(param_4,pwVar13);
    if (*(int *)(lVar14 + 0x78) < 2) {
      puVar8 = (undefined8 *)FIPv4Endpoint::ToString(&DAT_1469f59a8,local_78);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar8;
      }
      FOutputDevice::LogfImpl(param_4,L"    Unicast Endpoint: %s (default)",puVar17);
      if (local_78[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*(int *)(lVar14 + 0x78) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = *(undefined2 **)(lVar14 + 0x70);
      }
      FOutputDevice::LogfImpl(param_4,L"    Unicast Endpoint: %s",puVar17);
    }
    if (*(int *)(lVar14 + 0x88) < 2) {
      local_c8 = 0xe6000001;
      local_c4 = 0x1a0a;
      puVar8 = (undefined8 *)FIPv4Endpoint::ToString(&local_c8,local_68);
      if (*(int *)(puVar8 + 1) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = (undefined2 *)*puVar8;
      }
      FOutputDevice::LogfImpl(param_4,L"    Multicast Endpoint: %s (default)",puVar17);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
    }
    else {
      if (*(int *)(lVar14 + 0x88) == 0) {
        puVar17 = &DAT_143f3eda8;
      }
      else {
        puVar17 = *(undefined2 **)(lVar14 + 0x80);
      }
      FOutputDevice::LogfImpl(param_4,L"    Multicast Endpoint: %s",puVar17);
    }
    if (*(int *)(lVar14 + 0x98) < 1) {
      FOutputDevice::Log(param_4,L"    Remote Endpoints: None");
    }
    else {
      FOutputDevice::Log(param_4,L"    Remote Endpoints:");
      puVar8 = *(undefined8 **)(lVar14 + 0x90);
      puVar10 = puVar8 + (longlong)*(int *)(lVar14 + 0x98) * 2;
      for (; puVar8 != puVar10; puVar8 = puVar8 + 2) {
        if (*(int *)(puVar8 + 1) == 0) {
          puVar17 = &DAT_143f3eda8;
        }
        else {
          puVar17 = (undefined2 *)*puVar8;
        }
        FOutputDevice::LogfImpl(param_4,L"        %s",puVar17);
      }
    }
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
      FOutputDevice::LogfImpl(param_4,L"    Total Bytes In: %i",uVar9);
      uVar9 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
      FOutputDevice::LogfImpl(param_4,L"    Total Bytes Out: %i",uVar9);
      local_c0 = (undefined8 *)0x0;
      local_b8 = 0;
      iVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                        (*(longlong **)(param_1 + 0x20),&local_c0);
      if (iVar6 < 1) {
        FOutputDevice::Log(param_4,L"  Active Connections: None");
      }
      else {
        FOutputDevice::Log(param_4,L"  Active Connections:");
        local_a8 = local_c0 + (longlong)(int)local_b8 * 2;
        puVar8 = local_c0;
        if (local_c0 != local_a8) {
          do {
            cVar5 = (**(code **)(*(longlong *)*puVar8 + 0x28))();
            puVar12 = &DAT_1468e22d8;
            if (cVar5 == '\0') {
              puVar12 = &DAT_1468e22f0;
            }
            puVar10 = (undefined8 *)FText::ToString(puVar12);
            if (*(int *)(puVar10 + 1) == 0) {
              puVar17 = &DAT_143f3eda8;
            }
            else {
              puVar17 = (undefined2 *)*puVar10;
            }
            plVar7 = (longlong *)*puVar8;
            uVar9 = (**(code **)(*plVar7 + 0x20))(plVar7,local_a0);
            puVar10 = (undefined8 *)FTimespan::ToString(uVar9,local_58);
            if (*(int *)(puVar10 + 1) == 0) {
              puVar16 = &DAT_143f3eda8;
            }
            else {
              puVar16 = (undefined2 *)*puVar10;
            }
            uVar9 = (**(code **)(*plVar7 + 0x18))(plVar7,local_48);
            puVar10 = (undefined8 *)FText::ToString(uVar9);
            if (*(int *)(puVar10 + 1) == 0) {
              puVar15 = &DAT_143f3eda8;
            }
            else {
              puVar15 = (undefined2 *)*puVar10;
            }
            uVar9 = (**(code **)(*plVar7 + 0x10))(plVar7);
            uVar11 = (**(code **)(*plVar7 + 8))(plVar7);
            FOutputDevice::LogfImpl
                      (param_4,L"  > %s, Open: %s, Uptime: %s, Bytes Received: %i, Bytes Sent: %i",
                       puVar15,puVar17,puVar16,uVar11,uVar9);
            plVar7 = local_40;
            if (local_40 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_40 + 1;
              lVar14 = *plVar4;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)lVar14 == 1) {
                (**(code **)*local_40)(local_40);
                LOCK();
                piVar1 = (int *)((longlong)plVar7 + 0xc);
                iVar6 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar7 + 8))(plVar7,1);
                }
              }
            }
            if (local_58[0] != 0) {
              FMemory::Free();
            }
            puVar8 = puVar8 + 2;
          } while (puVar8 != local_a8);
        }
      }
      if ((int)local_b8 != 0) {
        plVar7 = local_c0 + 1;
        iVar6 = (int)local_b8;
        do {
          plVar4 = (longlong *)*plVar7;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar4 + 1;
            lVar14 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar7 = plVar7 + 2;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (local_c0 != (undefined8 *)0x0) {
        FMemory::Free(local_c0);
      }
    }
  }
  return 1;
}



// FUNCTION 140916f80 ShutdownModule body=61 status=ok
// SIG undefined ShutdownModule(void)

void FUdpMessagingModule::ShutdownModule(longlong param_1)

{
  param_1 = param_1 + -8;
  FUN_140483870(&DAT_1464af388,param_1);
  FUN_140483870(&DAT_1464af370,param_1);
  FTcpMessagingModule::ShutdownBridge(param_1);
  FUN_140921cc0(param_1);
  return;
}



// FUNCTION 140916fc0 FUN_140916fc0 body=195 status=ok
// SIG undefined FUN_140916fc0(void)

longlong FUN_140916fc0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x28);
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
  plVar4 = *(longlong **)(param_1 + 0x18);
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
  *(undefined ***)(param_1 + 8) = IModuleInterface::vftable;
  FSelfRegisteringExec::~FSelfRegisteringExec(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140917090 FUN_140917090 body=288 status=ok
// SIG undefined FUN_140917090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_140917090(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_70 [4];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  puVar1 = (undefined4 *)*param_1;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  FUN_140918140(param_2 + 4,local_108);
  local_28 = 0;
  if (local_30 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_70,0);
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_88);
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_e8);
  return param_2;
}



// FUNCTION 1409171b0 FUN_1409171b0 body=288 status=ok
// SIG undefined FUN_1409171b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1409171b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_128 [32];
  undefined1 local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_70 [4];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_140918140(param_2 + 1,local_108);
  local_28 = 0;
  if (local_30 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(local_70,0);
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_88);
  local_a0 = 0;
  if (local_a8 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_e8);
  return param_2;
}



// FUNCTION 1409172d0 FUN_1409172d0 body=669 status=ok
// SIG undefined FUN_1409172d0(void)

int * FUN_1409172d0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  void *_Dst;
  bool local_res8;
  
  iVar8 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar6 = *(int *)((longlong)iVar9 * 0x20 + 4 + *param_1);
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar6 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = false;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar12 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar12 = *puVar12 | 1 << ((byte)iVar9 & 0x1f);
  puVar12 = (uint *)((longlong)iVar9 * 0x20 + *param_1);
  *puVar12 = *(uint *)*param_3;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0xffffffff;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar11 != 1) {
    iVar7 = iVar13;
    if (uVar11 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar12) * 4);
      if (iVar6 != -1) {
        do {
          iVar7 = iVar6;
          if (*(uint *)((longlong)iVar6 * 0x20 + *param_1) == *puVar12) break;
          iVar6 = *(int *)((longlong)iVar6 * 0x20 + 0x18 + *param_1);
          iVar7 = iVar13;
        } while (iVar6 != -1);
      }
    }
    local_res8 = iVar7 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar7 * 0x20 + *param_1);
      plVar5 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar8 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar12,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar7;
      goto LAB_140917548;
    }
  }
  if (3 < uVar11) {
    uVar4 = (uVar11 >> 1) + 8;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    iVar13 = 0x20;
    if (uVar4 != 0) {
      iVar13 = 0x1f - iVar8;
    }
    uVar4 = (uVar11 >> 1) + 7;
    iVar8 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar10 = '\0';
    }
    else {
      cVar10 = '\x1f' - (char)iVar8;
    }
    iVar8 = 1 << (~(byte)((iVar13 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    uVar11 = (int)param_1[9] - 1U & *puVar12;
    puVar12[7] = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    puVar12[6] = *(uint *)((longlong)plVar5 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    TSet<TTuple<FDeviceId,TArray<FKey,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FDeviceId,TArray<FKey,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140917548:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140917570 FUN_140917570 body=487 status=ok
// SIG undefined FUN_140917570(void)

int * FUN_140917570(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  void *_Src;
  void *_Dst;
  bool bVar8;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar7 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar7 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
      FUN_140921040(param_1,iVar7);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar7 = (int)param_1[6];
    iVar3 = *(int *)((longlong)iVar7 * 0x100 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x100 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar7;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar7 & 0x1f);
  _Src = (void *)((longlong)iVar7 * 0x100 + *param_1);
  FUN_140917090(param_3,_Src);
  *(undefined4 *)((longlong)_Src + 0xf8) = 0xffffffff;
  bVar8 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FUN_14091dde0(param_1,local_res8,_Src);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)local_res8[0] * 0x100 + *param_1);
      FUdpMessageProcessor::FNodeInfo::~FNodeInfo((longlong)_Dst + 0x10);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0xf8);
      TSparseArray<TSetElement<TTuple<FGuid,FUdpMessageProcessor::FNodeInfo>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140917735;
    }
  }
  cVar4 = FUN_14091b5c0(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar7 = *param_2;
    uVar5 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)_Src + 0xfc) = uVar5;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)((longlong)_Src + 0xf8) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar7
    ;
  }
LAB_140917735:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 140917760 FUN_140917760 body=568 status=ok
// SIG undefined FUN_140917760(void)

int * FUN_140917760(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  undefined4 *_Src;
  void *_Dst;
  bool local_res8;
  int local_res10 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)((longlong)iVar14 * 0x38 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x38 + *param_1) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar14;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar14 & 0x1f);
  puVar5 = (undefined4 *)*param_3;
  _Src = (undefined4 *)((longlong)iVar14 * 0x38 + *param_1);
  uVar6 = puVar5[1];
  uVar7 = puVar5[2];
  uVar8 = puVar5[3];
  local_res8 = false;
  *_Src = *puVar5;
  _Src[1] = uVar6;
  _Src[2] = uVar7;
  _Src[3] = uVar8;
  *(undefined8 *)(_Src + 4) = 0;
  *(undefined8 *)(_Src + 6) = 0;
  *(undefined8 *)(_Src + 8) = 0;
  *(undefined8 *)(_Src + 10) = 0;
  _Src[0xc] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_res10[0] * 0x38 + *param_1);
      plVar13 = *(longlong **)((longlong)_Dst + 0x18);
      iVar14 = local_res10[0];
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        lVar9 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          iVar14 = local_res10[0];
          if (iVar4 == 1) {
            (**(code **)(*plVar13 + 8))(plVar13,1);
            iVar14 = local_res10[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x30);
      TSparseArray<TSetElement<TTuple<FUniqueNetIdSteam,TSharedPtr<FOnlineAuthSteam::FSteamAuthUser,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar14;
      goto LAB_14091796c;
    }
  }
  cVar10 = TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
           ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar10 == '\0') {
    iVar14 = *param_2;
    uVar12 = FCrc::MemCrc_DEPRECATED(_Src,0x10);
    uVar12 = (int)param_1[9] - 1U & uVar12;
    _Src[0xd] = uVar12;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    _Src[0xc] = *(undefined4 *)
                 ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar14;
  }
LAB_14091796c:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1409179a0 FUN_1409179a0 body=785 status=ok
// SIG undefined FUN_1409179a0(void)

uint * FUN_1409179a0(longlong *param_1,uint *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint *puVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  void *_Dst;
  char cVar12;
  uint uVar13;
  int *_Src;
  undefined4 uVar14;
  bool bVar15;
  uint local_res8 [2];
  
  iVar10 = 1;
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeGrow(param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)((longlong)(int)uVar11 * 0xf8 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar8 * 0xf8 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = uVar11;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 +
                   (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar11 & 0x1f);
  _Src = (int *)((longlong)(int)uVar11 * 0xf8 + *param_1);
  FUN_1409171b0(param_3,_Src);
  _Src[0x3c] = -1;
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8[0] = local_res8[0] & 0xffffff00;
  if (uVar11 != 1) {
    TSet<TTuple<FIPv4Endpoint,FUdpMessageProcessor::FNodeInfo>,TDefaultMapHashableKeyFuncs<FIPv4Endpoint,FUdpMessageProcessor::FNodeInfo,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,_Src);
    uVar5 = local_res8[0];
    lVar9 = (longlong)(int)local_res8[0];
    bVar15 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      _Dst = (void *)(lVar9 * 0xf8 + *param_1);
      FUdpMessageProcessor::FNodeInfo::~FNodeInfo((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0xf0);
      uVar11 = *param_2;
      bVar3 = (byte)uVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)((longlong)(int)param_1[6] * 0xf8 + *param_1) = uVar11;
      }
      puVar6 = (undefined4 *)((longlong)(int)uVar11 * 0xf8 + *param_1);
      *puVar6 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      puVar6[1] = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar11;
      plVar7 = (longlong *)param_1[4];
      *param_2 = uVar5;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_140917c88;
    }
  }
  if (3 < uVar11) {
    uVar5 = (uVar11 >> 1) + 8;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar5 != 0) {
      iVar8 = 0x1f - iVar10;
    }
    uVar5 = (uVar11 >> 1) + 7;
    iVar10 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar12 = '\x1f' - (char)iVar10;
    }
    iVar10 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar2 = *(ushort *)(_Src + 1);
    uVar5 = *_Src - (uint)uVar2 ^ (uint)(uVar2 >> 0xd);
    uVar11 = (-0x61c88647 - uVar5) - (uint)uVar2 ^ uVar5 << 8;
    uVar13 = (uVar2 - uVar11) - uVar5 ^ uVar11 >> 0xd;
    uVar5 = (uVar5 - uVar11) - uVar13 ^ uVar13 >> 0xc;
    uVar11 = (uVar11 - uVar5) - uVar13 ^ uVar5 << 0x10;
    uVar13 = (uVar13 - uVar11) - uVar5 ^ uVar11 >> 5;
    uVar5 = (uVar5 - uVar11) - uVar13 ^ uVar13 >> 3;
    uVar11 = (uVar11 - uVar5) - uVar13 ^ uVar5 << 10;
    uVar11 = ((uVar13 - uVar11) - uVar5 ^ uVar11 >> 0xf) & (int)param_1[9] - 1U;
    _Src[0x3d] = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    _Src[0x3c] = *(int *)((longlong)plVar7 +
                         ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(uint *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    FUN_140920770(param_1);
  }
LAB_140917c88:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 140917cc0 FUN_140917cc0 body=620 status=ok
// SIG undefined FUN_140917cc0(void)

int * FUN_140917cc0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  void *_Dst;
  bool bVar13;
  
  iVar9 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar7 = *(int *)((longlong)iVar11 * 0x20 + 4 + *param_1);
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar7 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar12 = (uint *)((longlong)plVar6 +
                    (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar12 = *puVar12 | 1 << ((byte)iVar11 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  bVar13 = false;
  puVar12 = (uint *)((longlong)iVar11 * 0x20 + *param_1);
  *puVar12 = *(uint *)*param_3;
  *(undefined8 *)(puVar12 + 2) = *puVar3;
  *(undefined8 *)(puVar12 + 4) = puVar3[1];
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar12[6] = 0xffffffff;
  iVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar11 != 1) {
    iVar8 = iVar9;
    if (iVar11 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar6 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*puVar12) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(uint *)((longlong)iVar7 * 0x20 + *param_1) == *puVar12) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + *param_1);
          iVar8 = iVar9;
        } while (iVar7 != -1);
      }
    }
    bVar13 = iVar8 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar8 * 0x20 + *param_1);
      plVar6 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar6 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,puVar12,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = iVar8;
      goto LAB_140917f04;
    }
  }
  cVar5 = TSet<TTuple<int,TArray<int,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,FDefaultAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar11,0);
  if (cVar5 == '\0') {
    uVar10 = (int)param_1[9] - 1U & *puVar12;
    puVar12[7] = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar12[6] = *(uint *)((longlong)plVar6 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_140917f04:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar13;
  }
  return param_2;
}



// FUNCTION 140917f30 FUN_140917f30 body=385 status=ok
// SIG undefined FUN_140917f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140917f30(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  uStack_40 = (longlong *)((undefined8 *)*param_1)[1];
  local_48 = *(undefined8 *)*param_1;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_40 + 1) = (int)uStack_40[1] + 1;
    UNLOCK();
  }
  if (&local_48 != param_2) {
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uVar7 = *param_2;
    plVar10 = (longlong *)param_2[1];
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    *(undefined4 *)param_2 = (undefined4)local_48;
    *(undefined4 *)((longlong)param_2 + 4) = local_48._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
    local_48 = uVar7;
    uStack_40 = plVar10;
  }
  plVar10 = uStack_40;
  if (uStack_40 != (longlong *)0x0) {
    LOCK();
    plVar12 = uStack_40 + 1;
    lVar8 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*uStack_40)(uStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*uStack_40 + 8))(uStack_40,1);
      }
    }
  }
  TArray<TSharedPtr<FUdpReassembledMessage,1>,FDefaultAllocator>::RemoveAtSwapImpl
            (param_1,0,1,param_4);
  iVar2 = (int)param_1[1];
  iVar11 = 0;
  lVar8 = *param_1;
  if (1 < iVar2) {
    do {
      iVar3 = iVar11 * 2;
      iVar9 = iVar3 + 1;
      if (iVar3 + 2 < iVar2) {
        if (*(ulonglong *)(*(longlong *)(lVar8 + (longlong)iVar9 * 0x10) + 0x58) <
            *(ulonglong *)(*(longlong *)(lVar8 + ((longlong)iVar3 + 2) * 0x10) + 0x58)) {
          iVar9 = iVar3;
        }
        iVar9 = iVar9 + 1;
      }
      plVar12 = (longlong *)((longlong)iVar11 * 0x10 + lVar8);
      plVar10 = (longlong *)((longlong)iVar9 * 0x10 + lVar8);
      if (*(ulonglong *)(*plVar12 + 0x58) <= *(ulonglong *)(*plVar10 + 0x58)) {
        return;
      }
      if (plVar12 != plVar10) {
        lVar4 = plVar10[1];
        lVar5 = *plVar12;
        lVar6 = plVar12[1];
        *plVar12 = *plVar10;
        plVar12[1] = lVar4;
        *plVar10 = lVar5;
        plVar10[1] = lVar6;
      }
      iVar11 = iVar9;
    } while (iVar9 * 2 + 1 < iVar2);
  }
  return;
}



// FUNCTION 1409180c0 FMemoryReader body=116 status=ok
// SIG undefined FMemoryReader(void)

undefined8 * FMemoryReader::FMemoryReader(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  FArchive::FArchive();
  param_1[0x12] = 0;
  *param_1 = &PTR_FUN_143f4a3a0;
  param_1[0x13] = param_2;
  param_1[0x14] = 0x7fffffffffffffff;
  FArchive::SetIsLoading(param_1,1);
  FArchive::SetIsPersistent(param_1,param_3);
  return param_1;
}



// FUNCTION 140918140 FUN_140918140 body=414 status=ok
// SIG undefined FUN_140918140(void)

undefined8 * FUN_140918140(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)(param_2 + 3);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_1 + 4,param_2 + 4);
  if (param_2[0xc] == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 0xb,param_2 + 0xb,4);
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)(param_2 + 0xd) = 0;
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_2[0x11] = 0;
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  TSparseArray<TSetElement<TTuple<int,TSharedPtr<FUdpReassembledMessage,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_1 + 0x13,param_2 + 0x13);
  if (param_2[0x1b] == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 0x1a,param_2 + 0x1a,4);
  }
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  param_1[0x1b] = param_2[0x1b];
  param_2[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 1409182e0 FUN_1409182e0 body=829 status=ok
// SIG undefined FUN_1409182e0(void)

undefined8 *
FUN_1409182e0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 *local_res20;
  longlong local_48;
  longlong *local_40;
  
  *param_1 = &PTR_FUN_14415d7e0;
  param_1[1] = &PTR_LAB_14415d810;
  plVar7 = (longlong *)operator_new(0x20);
  plVar12 = (longlong *)0x0;
  plVar8 = plVar12;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar8 = plVar7;
  }
  param_1[3] = plVar8;
  param_1[2] = plVar8;
  plVar7 = (longlong *)operator_new(0x28);
  plVar8 = plVar12;
  if (plVar7 != (longlong *)0x0) {
    *plVar7 = 0;
    plVar7[1] = 0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    plVar7[4] = 0;
    plVar8 = plVar7;
  }
  param_1[5] = plVar8;
  plVar7 = param_1 + 0x24;
  param_1[4] = plVar8;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  plVar8 = param_1 + 0x18;
  *(undefined4 *)((longlong)param_1 + 0x94) = *param_3;
  *(undefined4 *)(param_1 + 0x13) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0xa4) = *param_4;
  param_1[0x16] = param_2;
  param_1[0x17] = 0;
  *plVar8 = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *plVar7 = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  lVar9 = FUN_1415ab270(0);
  plVar10 = (longlong *)operator_new(0x18);
  if (plVar10 != (longlong *)0x0) {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_14415dfe8;
    plVar10[2] = lVar9;
    plVar12 = plVar10;
  }
  local_48 = lVar9;
  local_40 = plVar12;
  SharedPointerInternals::EnableSharedFromThis(&local_48,lVar9,lVar9);
  if (plVar7 != &local_48) {
    *plVar7 = lVar9;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x25,&local_40);
    plVar12 = local_40;
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar12 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar12 + 8))(plVar12,1);
      }
    }
  }
  uVar11 = FUN_1415d42a0(param_1,L"FUdpMessageProcessor",0x20000,1,0xffffffffffffffff);
  param_1[0x23] = uVar11;
  plVar12 = (longlong *)UUdpMessagingSettings::GetPrivateStaticClass();
  lVar9 = plVar12[0x1f];
  if (lVar9 == 0) {
    (**(code **)(*plVar12 + 0x368))(plVar12);
    lVar9 = plVar12[0x1f];
  }
  lVar14 = *(longlong *)(lVar9 + 0x58);
  lVar9 = (longlong)*(int *)(lVar9 + 0x60) * 0x10 + lVar14;
  for (; lVar14 != lVar9; lVar14 = lVar14 + 0x10) {
    cVar6 = FIPv4Endpoint::Parse(lVar14,&local_res18);
    if (cVar6 != '\0') {
      TSet<TTuple<FIPv4Endpoint,FUdpMessageProcessor::FNodeInfo>,TDefaultMapHashableKeyFuncs<FIPv4Endpoint,FUdpMessageProcessor::FNodeInfo,0>,FDefaultSetAllocator>
      ::FindId(plVar8,local_res8,&local_res18);
      if ((local_res8[0] == -1) || (lVar13 = (longlong)local_res8[0] * 0xf8 + *plVar8, lVar13 == 0))
      {
        local_res20 = &local_res18;
        FUN_1409179a0(plVar8,local_res10,&local_res20,0);
        lVar13 = (longlong)local_res10[0] * 0xf8 + *plVar8;
      }
      *(undefined8 *)(lVar13 + 8) = local_res18;
    }
  }
  return param_1;
}


