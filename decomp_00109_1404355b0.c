// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1404355b0 FUN_1404355b0 body=38 status=ok
// SIG undefined FUN_1404355b0(void)

void FUN_1404355b0(void)

{
  FUN_143a02410(&DAT_1468324f0,&PTR_145cca6f0,0);
  DAT_146ba3ca0 = 1;
  return;
}



// FUNCTION 140435970 FUN_140435970 body=34 status=ok
// SIG undefined FUN_140435970(void)

void FUN_140435970(void)

{
  FUN_1432bdc50(&DAT_146bcc438,0);
  atexit((_func_5014 *)&LAB_143ec5fb0);
  return;
}



// FUNCTION 1404359b0 FUN_1404359b0 body=45 status=ok
// SIG undefined FUN_1404359b0(void)

void FUN_1404359b0(void)

{
  FUN_14373a7e0(&DAT_146bcc470,"common.base.network.netlobby",2);
  atexit((_func_5014 *)&LAB_143ec5fd0);
  return;
}



// FUNCTION 1404359f0 singletonEntry'' body=59 status=ok
// SIG undefined singletonEntry''(void)

void `dynamic_initializer_for_'hkConcurrency::singletonEntry__(void)

{
  hkBaseSystem::InitNode::internalConstruct
            (&DAT_146bcc4f8,"$hkConcurrency",&LAB_143df9fb0,FUN_14370bf30,&DAT_146bcc4f0,1);
  return;
}



// FUNCTION 140435a30 FUN_140435a30 body=32 status=ok
// SIG undefined FUN_140435a30(void)

void FUN_140435a30(void)

{
  DAT_146bcc558 = TlsAlloc();
  atexit((_func_5014 *)&LAB_143ec5ff0);
  return;
}



// FUNCTION 140435a50 FUN_140435a50 body=45 status=ok
// SIG undefined FUN_140435a50(void)

void FUN_140435a50(void)

{
  FUN_14373a7e0(&DAT_146bcc560,"common.base.determinism.default",2);
  atexit((_func_5014 *)&LAB_143ec6000);
  return;
}



// FUNCTION 140435a80 FUN_140435a80 body=45 status=ok
// SIG undefined FUN_140435a80(void)

void FUN_140435a80(void)

{
  FUN_14373a7e0(&DAT_146bcce30,"hkGeometryProcessing",3);
  atexit((_func_5014 *)&LAB_143ec6010);
  return;
}



// FUNCTION 140435ab0 FUN_140435ab0 body=45 status=ok
// SIG undefined FUN_140435ab0(void)

void FUN_140435ab0(void)

{
  FUN_14373a7e0(&DAT_146bcced0,"common.geoproc.convexhull",2);
  atexit((_func_5014 *)&LAB_143ec6020);
  return;
}



// FUNCTION 140435b20 FUN_140435b20 body=45 status=ok
// SIG undefined FUN_140435b20(void)

void FUN_140435b20(void)

{
  FUN_14373a7e0(&DAT_146bccf70,"common.geoproc.mesh",2);
  atexit((_func_5014 *)&LAB_143ec6040);
  return;
}



// FUNCTION 140435bd0 FUN_140435bd0 body=45 status=ok
// SIG undefined FUN_140435bd0(void)

void FUN_140435bd0(void)

{
  FUN_14373a7e0(&DAT_146bcd090,"common.geoproc.convexhull",2);
  atexit((_func_5014 *)&LAB_143ec6050);
  return;
}



// FUNCTION 140435c00 FUN_140435c00 body=45 status=ok
// SIG undefined FUN_140435c00(void)

void FUN_140435c00(void)

{
  FUN_14373a7e0(&DAT_146bcd110,"geo.cgo",2);
  atexit((_func_5014 *)&LAB_143ec6060);
  return;
}



// FUNCTION 140435c70 `vector_constructor_iterator' body=72 status=ok
// SIG undefined `vector_constructor_iterator'(void)

void _vector_constructor_iterator_(longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    (*param_4)(param_1);
    param_1 = param_1 + param_2;
  }
  return;
}



// FUNCTION 140435cc0 `vector_destructor_iterator' body=83 status=ok
// SIG undefined `vector_destructor_iterator'(void)

void _vector_destructor_iterator_(longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  if (param_3 != 0) {
    param_1 = param_2 * param_3 + param_1;
    do {
      param_1 = param_1 - param_2;
      (*param_4)(param_1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140435d20 FUN_140435d20 body=43 status=ok
// SIG undefined FUN_140435d20(void)

undefined8 * FUN_140435d20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140435d50 GetPoolName body=3 status=ok
// SIG wchar_t * GetPoolName(long param_1)

/* wchar_t * __ptr64 __cdecl AK::MemoryMgr::GetPoolName(long) */

wchar_t * __cdecl AK::MemoryMgr::GetPoolName(long param_1)

{
                    /* 0x435d50  194  ?GetPoolName@MemoryMgr@AK@@YAPEA_WJ@Z
                       0x435d50  216  ?GetTimeStamp@Monitor@AK@@YAJXZ
                       0x435d50  472  ?StopProfileThreadUsage@MemoryMgr@AK@@YAKJ@Z */
  return (wchar_t *)0x0;
}



// FUNCTION 140435d60 FUN_140435d60 body=8 status=ok
// SIG undefined FUN_140435d60(void)

bool FUN_140435d60(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 8) == param_2;
}



// FUNCTION 140435d70 IsPromotedBuild body=3 status=ok
// SIG undefined IsPromotedBuild(void)

undefined1 BuildSettings::IsPromotedBuild(void)

{
  return 1;
}



// FUNCTION 140435d80 FUN_140435d80 body=64 status=ok
// SIG undefined FUN_140435d80(void)

void FUN_140435d80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>,class_IModuleInterface*___ptr64___cdecl(void)>
              ::vftable;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 140435dc0 FUN_140435dc0 body=11 status=ok
// SIG undefined FUN_140435dc0(void)

void FUN_140435dc0(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140435dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 140435dd0 FUN_140435dd0 body=11 status=ok
// SIG undefined FUN_140435dd0(void)

undefined8 * FUN_140435dd0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x20);
  return param_2;
}



// FUNCTION 140435de0 FUN_140435de0 body=43 status=ok
// SIG undefined FUN_140435de0(void)

undefined8 * FUN_140435de0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140435e10 FUN_140435e10 body=1653 status=ok
// SIG undefined FUN_140435e10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_140435e10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined2 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong *local_158;
  longlong *local_150;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [8];
  undefined1 local_128 [8];
  longlong *local_120;
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [8];
  longlong *local_a0;
  longlong *local_88;
  undefined1 local_5c;
  ulonglong local_38;
  
  uVar5 = DAT_1468b6160;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  uVar4 = FText::FText(local_108);
  local_1a8 = (undefined8 *)uVar5;
  FUN_141660a80(local_a8,0x42c80000,uVar4,1);
  FSlowTask::Initialize(local_a8);
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_100 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_100 + 8))(local_100,1);
      }
    }
  }
  uVar5 = FText::FText(local_f0);
  FSlowTask::EnterProgressFrame(local_a8,0x41200000,uVar5);
  plVar11 = (longlong *)0x0;
  local_1a8 = &DAT_1468e2360;
  local_178 = (undefined2 *)0x0;
  local_170 = 0;
  FConfigCacheIni::GetString(DAT_1468b6148,L"/Script/Engine.Engine",L"GameEngine",&local_178);
  puVar10 = &DAT_143f3eda8;
  if ((int)local_170 != 0) {
    puVar10 = local_178;
  }
  uVar5 = FUN_142937670();
  local_1a0 = 0;
  local_1a8 = (undefined8 *)((ulonglong)local_1a8 & 0xffffffff00000000);
  lVar6 = FUN_141799830(uVar5,0,puVar10,0);
  if (lVar6 == 0) {
    puVar10 = &DAT_143f3eda8;
    if ((int)local_170 != 0) {
      puVar10 = local_178;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0xcdc,L"Failed to load UnrealEd Engine class \'%s\'.",puVar10);
    local_1a8 = (undefined8 *)&DAT_143f3eda8;
    if ((int)local_170 != 0) {
      local_1a8 = (undefined8 *)local_178;
    }
    FDebug::AssertFailed
              (&DAT_143f3a67f,"Unknown",0xcdc,L"Failed to load UnrealEd Engine class \'%s\'.");
  }
  local_168 = 0;
  uVar5 = GetTransientPackage();
  local_160 = 0;
  FUN_1417846f0(uVar5,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_1a8 = (undefined8 *)((ulonglong)local_1a8 & 0xffffffff00000000);
  DAT_146b17150 = (longlong *)FUN_1417985e0(lVar6,uVar5,0,0);
  if (local_178 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar7 = (longlong *)GetMoviePlayer();
  (**(code **)(*plVar7 + 0x18))(plVar7);
  FUN_142883f60(DAT_146b17150);
  QueryPerformanceCounter(&local_148);
  DAT_1468b5a78 = (double)local_148.QuadPart * DAT_1468b02f8 + 16777216.0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  QueryPerformanceCounter(&local_140);
  *(DWORD *)(param_1 + 0x30) = local_140.s.LowPart;
  *(longlong *)(param_1 + 0x28) = (longlong)(int)(*(double *)(param_1 + 0x20) / DAT_1464a97c8);
  uVar5 = FText::FText(local_d8);
  FSlowTask::EnterProgressFrame(local_a8,0x42700000,uVar5);
  (**(code **)(*DAT_146b17150 + 0x290))(DAT_146b17150,param_1);
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1465351c0);
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af040);
  uVar5 = FText::FText(local_c0);
  FSlowTask::EnterProgressFrame(local_a8,0x41f00000,uVar5);
  cVar3 = FUN_1415bac00();
  if (cVar3 != '\0') {
    if (DAT_1468b616c == '\0') {
      puVar8 = (undefined8 *)FName::FName(local_138,"SessionServices",1);
      uVar5 = *puVar8;
      uVar4 = FUN_14168dc80();
      plVar7 = (longlong *)FUN_141690010(uVar4,uVar5);
      plVar9 = (longlong *)(**(code **)(*plVar7 + 0x48))(plVar7,local_128);
      plVar7 = (longlong *)(param_1 + 0x48);
      if (plVar7 != plVar9) {
        *plVar7 = *plVar9;
        *plVar9 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,plVar9 + 1);
      }
      if (local_120 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_120 + 1;
        lVar6 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*local_120)(local_120);
          LOCK();
          piVar1 = (int *)((longlong)local_120 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*local_120 + 8))(local_120,1);
          }
        }
      }
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar7 + 8))();
      }
    }
    lVar6 = operator_new(0x20);
    plVar7 = plVar11;
    if (lVar6 != 0) {
      plVar7 = (longlong *)FEngineService::FEngineService(lVar6);
    }
    *(longlong **)(param_1 + 0x40) = plVar7;
  }
  plVar7 = (longlong *)IProjectManager::Get();
  cVar3 = (**(code **)(*plVar7 + 0x18))(plVar7,6);
  if (cVar3 != '\0') {
    plVar7 = (longlong *)FUN_1416ba600();
    cVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,6);
    if (cVar3 != '\0') {
      (**(code **)(*DAT_146b17150 + 0x298))();
      puVar8 = (undefined8 *)FName::FName(local_130,"Media",1);
      uVar5 = *puVar8;
      uVar4 = FUN_14168dc80();
      plVar7 = (longlong *)FUN_141690010(uVar4,uVar5);
      if (plVar7 != (longlong *)0x0) {
        plVar9 = (longlong *)operator_new(8);
        local_158 = plVar11;
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_GetTimecode_143f3ef80;
          local_158 = plVar9;
        }
        plVar9 = (longlong *)operator_new(0x18);
        local_150 = plVar11;
        if (plVar9 != (longlong *)0x0) {
          *(undefined4 *)(plVar9 + 1) = 1;
          *plVar9 = (longlong)&PTR_FUN_143f3f2d0;
          *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
          plVar9[2] = (longlong)local_158;
          local_150 = plVar9;
        }
        SharedPointerInternals::EnableSharedFromThis(&local_158,local_158,local_158);
        (**(code **)(*plVar7 + 0x98))(plVar7,&local_158);
        plVar7 = local_150;
        if (local_150 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_150 + 1;
          lVar6 = *plVar9;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_150)(local_150);
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
      DAT_1468c2176 = 1;
      FUN_14288d5f0(1,3);
      plVar7 = (longlong *)FMemory::Realloc(0,0x20);
      local_118 = plVar7;
      if (plVar7 == (longlong *)0x0) {
        if ((DAT_1468e22b0 != 0) && (DAT_1468e22a8 != (longlong *)0x0)) {
          (**(code **)(*DAT_1468e22a8 + 0x28))(DAT_1468e22a8,0);
          if (DAT_1468e22a8 != (longlong *)0x0) {
            DAT_1468e22a8 = (longlong *)FMemory::Realloc(DAT_1468e22a8,0,0);
          }
          DAT_1468e22b0 = 0;
        }
      }
      else {
        *plVar7 = (longlong)&PTR_GetPoolName_143f3f048;
        plVar7[1] = (longlong)GameLoopIsStarved;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar7[3] = lVar6;
        *plVar7 = (longlong)&PTR_GetPoolName_143f3f090;
        FUN_14043acd0(plVar7,&DAT_1468e22a8);
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        local_118 = (longlong *)FMemory::Realloc(plVar7,0,0);
        if (local_118 != (longlong *)0x0) {
          FMemory::Free(local_118);
        }
      }
      uVar5 = FUN_1415d80a0();
      FThreadHeartBeat::Start(uVar5);
      TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af058);
      goto LAB_1404363e0;
    }
  }
  DAT_1468c217e = 1;
  plVar11 = (longlong *)0x1;
LAB_1404363e0:
  FUN_14166a2b0(local_a8);
  local_5c = 0;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_88 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_a0 + 1;
    lVar6 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar1 = (int *)((longlong)local_a0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
  }
  return plVar11;
}



// FUNCTION 140436490 FUN_140436490 body=4324 status=ok
// SIG undefined FUN_140436490(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140436490(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  long lVar14;
  DWORD DVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  DWORD *pDVar26;
  longlong *plVar27;
  longlong *plVar28;
  int iVar29;
  double dVar30;
  float fVar31;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong *local_1c0;
  int local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  LARGE_INTEGER local_190;
  LARGE_INTEGER local_188;
  LARGE_INTEGER local_180;
  undefined8 local_178;
  longlong *local_170;
  longlong local_168;
  longlong local_160;
  LARGE_INTEGER local_158;
  LARGE_INTEGER local_150;
  undefined1 local_148 [8];
  longlong *local_140;
  float local_138;
  code *local_130;
  longlong **pplStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  code *local_e8 [2];
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined4 local_a8;
  undefined1 local_98 [24];
  undefined1 local_80 [64];
  
  local_1a8 = FUN_1415a9720();
  uVar17 = FUN_1415d80a0();
  FUN_1415df310(uVar17,1);
  lVar14 = FUN_1415d7fb0();
  AK::MemoryMgr::StartProfileThreadUsage(lVar14);
  if ((DAT_146ac3ac6 == '\0') && (DAT_1468b5054 == 0)) {
    FUN_141ee6aa0();
  }
  plVar18 = (longlong *)GetMoviePlayer();
  cVar10 = (**(code **)(*plVar18 + 0x60))(plVar18);
  plVar18 = (longlong *)GetMoviePlayer();
  cVar11 = (**(code **)(*plVar18 + 0xd0))(plVar18);
  plVar18 = (longlong *)GetMoviePlayer();
  cVar12 = (**(code **)(*plVar18 + 200))(plVar18);
  if (cVar12 == '\0') {
    plVar18 = (longlong *)GetMoviePlayer();
    (**(code **)(*plVar18 + 0x58))(plVar18);
  }
  FUN_1415a0880(local_148,0);
  uVar8 = DAT_1468c21b0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x38))();
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af1f0);
  plVar18 = (longlong *)FUN_141672640();
  (**(code **)(*plVar18 + 0x40))(plVar18);
  if ((((DAT_1468b5a25 != '\0') && (*(ulonglong *)(param_1 + 0x28) != 0)) &&
      (*(ulonglong *)(param_1 + 0x28) < DAT_1468c21b0)) ||
     ((*(double *)(param_1 + 0x20) != 0.0 &&
      (*(double *)(param_1 + 0x20) < *(double *)(param_1 + 0x18))))) {
    FUN_1416a8180(0);
  }
  FUN_142894670(DAT_146b17150);
  cVar12 = FUN_1424a3f80();
  if (cVar12 == '\0') {
    if (cVar10 == '\0') {
      local_1a0 = uVar8;
      if ((DAT_146ac3ac6 == '\0') || (cVar12 = IsInRenderingThread(), cVar12 == '\0')) {
        if ((DAT_146ac3ac5 == '\0') &&
           (((cVar12 = FUN_1415ad720(&DAT_1468e2448), cVar12 != '\0' || (DAT_1468c21ae == '\0')) ||
            (DVar15 = GetCurrentThreadId(), DVar15 == DAT_1468c21c0)))) {
          local_198 = uVar8;
          uVar17 = FBaseGraphTask::GetSmallTaskAllocator();
          <lambda_8b7e82a525f135deee2954234f42f866>::operator()(&local_198,uVar17);
        }
        else {
          plVar18 = (longlong *)FUN_14043adb0(local_98,0,0xff);
          *(ulonglong *)(*plVar18 + 0x10) = uVar8;
          lVar19 = *plVar18;
          lVar7 = plVar18[2];
          lVar23 = plVar18[1];
          lVar22 = *(longlong *)(lVar19 + 0x20);
          piVar2 = (int *)(lVar22 + 0x48);
          if (lVar22 != 0) {
            LOCK();
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          local_1b0 = lVar22;
          FUN_140445100(lVar19,lVar23,(int)lVar7,1);
          if (lVar22 != 0) {
            LOCK();
            iVar29 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar29 == 1) {
              FGraphEvent::Recycle(local_1b0);
            }
          }
        }
      }
      else {
        uVar17 = FBaseGraphTask::GetSmallTaskAllocator();
        <lambda_8b7e82a525f135deee2954234f42f866>::operator()(&local_1a0,uVar17);
      }
      DAT_14684ff26 = 1;
      lVar19 = GetMoviePlayer();
      *(code **)(lVar19 + 8) = FUN_14043b740;
    }
  }
  else {
    FUN_142498030(1);
  }
  if (((longlong *)DAT_146b17150[0xf6] != (longlong *)0x0) &&
     (lVar19 = (**(code **)(*(longlong *)DAT_146b17150[0xf6] + 0x148))(), lVar19 != 0)) {
    uVar17 = (**(code **)(*(longlong *)DAT_146b17150[0xf6] + 0x148))();
    cVar12 = FUN_142549fc0(uVar17);
    if (cVar12 != '\0') {
      FUN_1428712f0(DAT_146b17150,0);
    }
  }
  FUN_14231f760(DAT_146b17150,(float)DAT_1464a97d0);
  ResetAsyncLoadingStats();
  (**(code **)(*DAT_1468c2208 + 0x58))();
  plVar27 = (longlong *)0x0;
  local_1c0 = (longlong *)0x0;
  plVar18 = (longlong *)FMemory::Realloc(0,0x20,0);
  local_1b8 = 2;
  local_1c0 = plVar18;
  if (plVar18 != (longlong *)0x0) {
    *plVar18 = (longlong)&PTR_GetPoolName_143f3f188;
    plVar18[1] = (longlong)FUN_141ede5c0;
    lVar19 = FDelegateHandle::GenerateNewID();
    plVar18[3] = lVar19;
    *plVar18 = (longlong)&PTR_GetPoolName_143f3f1d0;
  }
  AK::MemoryMgr::StartProfileThreadUsage(0);
  if (local_1b8 == 0) {
LAB_14043680c:
    if (local_1c0 != (longlong *)0x0) {
      FMemory::Free(local_1c0);
    }
  }
  else if (local_1c0 != (longlong *)0x0) {
    (**(code **)(*local_1c0 + 0x28))(local_1c0,0);
    if (local_1c0 != (longlong *)0x0) {
      local_1c0 = (longlong *)FMemory::Realloc(local_1c0,0,0);
    }
    local_1b8 = 0;
    goto LAB_14043680c;
  }
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_160 = lVar19;
  if ((*(int *)(lVar19 + 0x38) < DAT_146850130) &&
     (_Init_thread_header(&DAT_146850130), DAT_146850130 == -1)) {
    FName::FName(&DAT_146850128,L"GbxPerfAnalytics",1);
    _Init_thread_footer(&DAT_146850130);
  }
  uVar17 = DAT_146850128;
  uVar20 = FUN_14168dc80();
  cVar12 = FModuleManager::IsModuleLoaded(uVar20,uVar17);
  if (cVar12 == '\0') {
    if ((*(int *)(lVar19 + 0x38) < DAT_146850150) &&
       (_Init_thread_header(&DAT_146850150), DAT_146850150 == -1)) {
      DAT_146850140 = 0;
      DAT_146850138 = &PTR_FUN_143f3ee80;
      _DAT_146850148 = 0;
      atexit(FUN_143e3dde0);
      _Init_thread_footer(&DAT_146850150);
    }
    plVar18 = (longlong *)&DAT_146850138;
  }
  else {
    if ((*(int *)(lVar19 + 0x38) < DAT_146850130) &&
       (_Init_thread_header(&DAT_146850130), DAT_146850130 == -1)) {
      FName::FName(&DAT_146850128,L"GbxPerfAnalytics",1);
      _Init_thread_footer(&DAT_146850130);
    }
    uVar17 = DAT_146850128;
    uVar20 = FUN_14168dc80();
    plVar18 = (longlong *)FModuleManager::GetModule(uVar20,uVar17);
  }
  (**(code **)(*plVar18 + 0x40))(plVar18,(float)DAT_1464a97d0);
  QueryPerformanceCounter(&local_190);
  dVar30 = (double)local_190.QuadPart * DAT_1468b02f8 + 16777216.0;
  DAT_146b171a4 = (float)((dVar30 - _DAT_146850120) * 1000.0) * 0.25 + DAT_146b171a4 * 0.75;
  DAT_146b171a0 = 1000.0 / DAT_146b171a4;
  _DAT_146850120 = dVar30;
  if (cVar10 == '\0') {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar12 = FUN_1415ad720(&DAT_1468e2448), cVar12 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar15 = GetCurrentThreadId(), DVar15 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_180);
      DAT_14653517d = 1;
      FlushPendingDeleteRHIResources_RenderThread();
      QueryPerformanceCounter(&local_188);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_188.s.LowPart - local_180._0_4_);
    }
    else {
      pDVar26 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar18 = TlsGetValue(*pDVar26);
      if (plVar18 == (longlong *)0x0) {
        plVar21 = (longlong *)operator_new(0x18);
        plVar18 = plVar27;
        if (plVar21 != (longlong *)0x0) {
          *plVar21 = 0;
          plVar21[1] = 0;
          *(int *)(plVar21 + 2) = 0;
          plVar18 = plVar21;
        }
        TlsSetValue(*pDVar26,plVar18);
      }
      plVar21 = (longlong *)plVar18[1];
      if (plVar21 == (longlong *)0x0) {
        plVar21 = (longlong *)*plVar18;
        if (plVar21 == (longlong *)0x0) {
          plVar21 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar26 + 2);
          plVar18[1] = (longlong)plVar21;
          if (plVar21 == (longlong *)0x0) {
            puVar25 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar18[1] = (longlong)puVar25;
            lVar23 = 0x1f;
            do {
              puVar3 = puVar25 + 0x20;
              *puVar25 = puVar3;
              lVar23 = lVar23 + -1;
              puVar25 = puVar3;
            } while (lVar23 != 0);
            *puVar3 = 0;
            plVar21 = (longlong *)plVar18[1];
          }
          *(int *)(plVar18 + 2) = 0x20;
          iVar29 = 0x20;
        }
        else {
          plVar18[1] = (longlong)plVar21;
          iVar29 = 0x20;
          *plVar18 = 0;
          *(int *)(plVar18 + 2) = 0x20;
        }
      }
      else {
        iVar29 = (int)plVar18[2];
      }
      plVar18[1] = *plVar21;
      *(int *)(plVar18 + 2) = iVar29 + -1;
      *(undefined4 *)(plVar21 + 1) = 0xff;
      *plVar21 = (longlong)&PTR_FUN_143f3edd8;
      local_120 = 0;
      *(undefined4 *)((longlong)plVar21 + 0xc) = 1;
      *plVar21 = (longlong)&PTR_FUN_143f3f100;
      *(undefined1 *)((longlong)plVar21 + 0x11) = 0;
      plVar21[3] = 0;
      local_178 = 0;
      FUN_140445370(plVar21,0,0xff,1);
    }
  }
  FUN_1424d5b50();
  FWindowsPlatformApplicationMisc::PumpMessages(1);
  if ((*(int *)(lVar19 + 0x38) < DAT_146850188) &&
     (_Init_thread_header(&DAT_146850188), DAT_146850188 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"t.IdleWhenNotForeground");
    plVar18 = plVar27;
    if (plVar21 != (longlong *)0x0) {
      plVar18 = (longlong *)(**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_146850180 = plVar18;
    _Init_thread_footer(&DAT_146850188);
  }
  cVar12 = '\0';
  bVar6 = false;
  if (((int)*DAT_146850180 != 0) && (cVar13 = FUN_1416d58e0(), cVar13 == '\0')) {
    cVar12 = '\x01';
    bVar6 = true;
    plVar21 = (longlong *)DAT_146b17150[0x183];
    plVar18 = plVar21 + (int)DAT_146b17150[0x184];
    for (; plVar21 != plVar18; plVar21 = plVar21 + 1) {
      cVar13 = FUN_1428c5cf0(*(undefined8 *)(*plVar21 + 0x288));
      if (cVar13 == '\0') {
        cVar12 = '\0';
        bVar6 = false;
        goto LAB_140436c62;
      }
    }
    FUN_1416b1760(0x3dcccccd);
  }
LAB_140436c62:
  lVar23 = DAT_146b19a68;
  if (DAT_146b19b70 != 0.0) {
    if (DAT_146b19a68 != 0) {
      lVar22 = UWorld::GetWorldSettings(DAT_146b19a68,0,1);
      if (DAT_146b19b70 != *(float *)(lVar22 + 0x588)) {
        lVar23 = UWorld::GetWorldSettings(lVar23,0,1);
        *(float *)(lVar23 + 0x588) = DAT_146b19b70;
      }
    }
    DAT_146b19b70 = 0.0;
  }
  uVar17 = FPlatformFileManager::Get();
  FPlatformFileManager::TickActivePlatformFile(uVar17);
  lVar23 = DAT_1469f4590;
  if (((DAT_1469f4590 != 0) && (cVar12 == '\0')) && ((cVar10 == '\0' || (cVar11 != '\0')))) {
    FSlateApplication::PollGameDeviceState(DAT_1469f4590);
    FUN_14189a240(lVar23);
  }
  if ((*(int *)(lVar19 + 0x38) < DAT_146850198) &&
     (_Init_thread_header(&DAT_146850198), DAT_146850198 == -1)) {
    FName::FName(&DAT_146850190,L"Media",1);
    _Init_thread_footer(&DAT_146850198);
  }
  uVar17 = DAT_146850190;
  uVar20 = FUN_14168dc80();
  plVar18 = (longlong *)FUN_141690010(uVar20,uVar17);
  local_170 = plVar18;
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0xb0))(plVar18);
  }
  (**(code **)(*DAT_146b17150 + 0x2b0))(DAT_146b17150,(float)DAT_1464a97d0,cVar12);
  plVar21 = (longlong *)GetMoviePlayer();
  cVar11 = (**(code **)(*plVar21 + 0x60))(plVar21);
  if (cVar11 != '\0') {
    plVar21 = (longlong *)GetMoviePlayer();
    cVar11 = (**(code **)(*plVar21 + 200))(plVar21);
    if (cVar11 != '\0') goto LAB_140436dc4;
  }
  plVar21 = (longlong *)GetMoviePlayer();
  (**(code **)(*plVar21 + 0x50))(plVar21,1);
LAB_140436dc4:
  if (DAT_146b09470 != 0) {
    FShaderCompilingManager::ProcessAsyncResults(DAT_146b09470,1,0);
  }
  if (DAT_146af2450 != 0) {
    AK::MemoryMgr::StartProfileThreadUsage((long)DAT_146af2450);
  }
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0xb8))(plVar18);
  }
  local_1d8 = 0;
  cVar11 = (**(code **)(*DAT_146b17150 + 0x4c0))();
  plVar21 = plVar27;
  if (((longlong *)DAT_146b17150[0xf6] != (longlong *)0x0) &&
     (lVar19 = (**(code **)(*(longlong *)DAT_146b17150[0xf6] + 0x148))(), lVar19 != 0)) {
    plVar21 = *(longlong **)(lVar19 + 0x108);
  }
  local_1d0 = 0;
  local_1c8 = 0;
  if ((plVar21 == (longlong *)0x0) || (*DAT_146850070 == 0)) {
    bVar5 = false;
  }
  else {
    plVar24 = (longlong *)FUN_142420250(plVar21,local_f8);
    if (&local_1d0 != plVar24) {
      if ((int)local_1c8 != 0) {
        plVar28 = (longlong *)(local_1d0 + 0x10);
        iVar29 = (int)local_1c8;
        do {
          if (plVar28[1] != 0) {
            FMemory::Free();
          }
          plVar18 = (longlong *)*plVar28;
          if (plVar18 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar18 + 1;
            lVar19 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar19 == 1) {
              (**(code **)*plVar18)(plVar18);
              LOCK();
              piVar2 = (int *)((longlong)plVar18 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar18 + 8))(plVar18,1);
              }
            }
          }
          plVar28 = plVar28 + 5;
          iVar29 = iVar29 + -1;
          plVar18 = local_170;
        } while (iVar29 != 0);
      }
      if (local_1d0 != 0) {
        FMemory::Free();
      }
      local_1d0 = *plVar24;
      *plVar24 = 0;
      local_1c8 = plVar24[1];
      plVar24[1] = 0;
    }
    bVar5 = true;
    FUN_1404384f0(local_f8);
  }
  if (((cVar11 != '\0') && (fVar31 = (float)DAT_1464a97d0, plVar21 != (longlong *)0x0)) &&
     (cVar11 = FUN_142422b30(plVar21), cVar11 != '\0')) {
    local_140 = plVar21;
    local_138 = fVar31;
    plVar24 = (longlong *)FUN_14043af00(local_80,0,2);
    pplStack_128 = &local_140;
    local_130 = FUN_14043a660;
    lVar19 = *plVar24;
    *(undefined4 *)(lVar19 + 0x10) = 0x4043a660;
    *(undefined4 *)(lVar19 + 0x14) = 1;
    *(longlong ***)(lVar19 + 0x18) = pplStack_128;
    lVar19 = *plVar24;
    lVar7 = plVar24[2];
    lVar23 = plVar24[1];
    lVar22 = *(longlong *)(lVar19 + 0x28);
    if (lVar22 != 0) {
      LOCK();
      *(int *)(lVar22 + 0x48) = *(int *)(lVar22 + 0x48) + 1;
      UNLOCK();
    }
    FUN_1404455e0(lVar19,lVar23,(int)lVar7,1);
    local_118 = 0;
    local_1d8 = lVar22;
  }
  dVar30 = DAT_1464a97d0;
  local_b8 = 0;
  local_a8 = 0;
  puVar25 = (undefined8 *)FUN_140438ef0(0x10,local_d8);
  if (puVar25 != (undefined8 *)0x0) {
    puVar25[1] = dVar30;
    *puVar25 = &PTR_FUN_143f3f228;
  }
  local_e8[0] = FUN_14043a6d0;
  plVar24 = (longlong *)FUN_1415a4b00(local_1a8,&local_168,local_e8);
  lVar19 = *plVar24;
  if (local_168 != 0) {
    LOCK();
    piVar2 = (int *)(local_168 + 0x48);
    iVar29 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar29 == 1) {
      FGraphEvent::Recycle();
    }
  }
  plVar24 = (longlong *)GetMoviePlayer();
  cVar11 = (**(code **)(*plVar24 + 0x60))(plVar24);
  if (((DAT_1469f4590 != 0) && (!bVar6)) && ((cVar11 == '\0' && (cVar10 == '\0')))) {
    FUN_140443860(param_1);
    FUN_1418c5190(DAT_1469f4590,1,0);
  }
  FUN_1424c2fe0(0);
  if (bVar5) {
    FUN_142409400(plVar21,&local_1d0);
  }
  lVar23 = local_1d8;
  uVar9 = DAT_1468e3590;
  if (local_1d8 != 0) {
    uVar17 = FUN_14168db40();
    FCsvProfiler::BeginStat(uVar17,"ConcurrentWithSlateTickTasks_Wait",uVar9);
    uVar17 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(uVar17,&local_1d8,0xff);
    local_1d8 = 0;
    if (lVar23 != 0) {
      LOCK();
      piVar2 = (int *)(lVar23 + 0x48);
      iVar29 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar29 == 1) {
        FGraphEvent::Recycle(lVar23);
      }
    }
    uVar17 = FUN_14168db40();
    FCsvProfiler::EndStat(uVar17,"ConcurrentWithSlateTickTasks_Wait",uVar9);
  }
  lVar23 = local_160;
  if ((*(int *)(local_160 + 0x38) < DAT_1468501a8) &&
     (_Init_thread_header(&DAT_1468501a8), DAT_1468501a8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    DAT_1468501a0 =
         (longlong *)
         (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.DelaySceneRenderCompletion");
    _Init_thread_footer(&DAT_1468501a8);
  }
  if ((DAT_1468501a0 == (longlong *)0x0) ||
     (uVar16 = (**(code **)(*DAT_1468501a0 + 0x68))(), uVar16 < 2)) {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar12 = FUN_1415ad720(&DAT_1468e2448), cVar12 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar15 = GetCurrentThreadId(), DVar15 == DAT_1468c21c0)))) {
      FBaseGraphTask::GetSmallTaskAllocator();
      QueryPerformanceCounter(&local_150);
      FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,0);
      QueryPerformanceCounter(&local_158);
      DAT_146ac3af4 = DAT_146ac3af4 + (local_158.s.LowPart - local_150._0_4_);
    }
    else {
      pDVar26 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
      plVar21 = TlsGetValue(*pDVar26);
      if (plVar21 == (longlong *)0x0) {
        plVar24 = (longlong *)operator_new(0x18);
        plVar21 = plVar27;
        if (plVar24 != (longlong *)0x0) {
          *plVar24 = 0;
          plVar24[1] = 0;
          *(int *)(plVar24 + 2) = 0;
          plVar21 = plVar24;
        }
        TlsSetValue(*pDVar26,plVar21);
      }
      plVar24 = (longlong *)plVar21[1];
      if (plVar24 == (longlong *)0x0) {
        plVar24 = (longlong *)*plVar21;
        if (plVar24 == (longlong *)0x0) {
          plVar24 = (longlong *)TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar26 + 2);
          plVar21[1] = (longlong)plVar24;
          if (plVar24 == (longlong *)0x0) {
            puVar25 = (undefined8 *)FMemory::Malloc(0x2000,0);
            plVar21[1] = (longlong)puVar25;
            lVar22 = 0x1f;
            do {
              puVar3 = puVar25 + 0x20;
              *puVar25 = puVar3;
              lVar22 = lVar22 + -1;
              puVar25 = puVar3;
            } while (lVar22 != 0);
            *puVar3 = 0;
            plVar24 = (longlong *)plVar21[1];
          }
          iVar29 = 0x20;
          *(int *)(plVar21 + 2) = 0x20;
        }
        else {
          iVar29 = 0x20;
          plVar21[1] = (longlong)plVar24;
          *(int *)(plVar21 + 2) = 0x20;
          *plVar21 = 0;
        }
      }
      else {
        iVar29 = (int)plVar21[2];
      }
      plVar21[1] = *plVar24;
      local_110 = 0;
      *(int *)(plVar21 + 2) = iVar29 + -1;
      *(undefined4 *)(plVar24 + 1) = 0xff;
      *plVar24 = (longlong)&PTR_FUN_143f3edd8;
      local_108 = 0;
      *(undefined4 *)((longlong)plVar24 + 0xc) = 1;
      *plVar24 = (longlong)&PTR_FUN_143f3f120;
      *(undefined1 *)((longlong)plVar24 + 0x11) = 0;
      plVar24[3] = 0;
      FUN_140445370(plVar24,0,0xff,1);
    }
  }
  if (cVar11 == '\0') {
    (**(code **)(*DAT_146ab6358 + 0x3c0))(DAT_146ab6358,(float)DAT_1464a97d0);
  }
  DAT_1468c21b0 = DAT_1468c21b0 + 1;
  if (6 < DAT_1468c21b0) {
    *(double *)(param_1 + 0x18) = DAT_1464a97d0 + *(double *)(param_1 + 0x18);
  }
  lVar22 = *(longlong *)(param_1 + 0x38);
  uVar17 = GetPendingCleanupObjects();
  *(undefined8 *)(param_1 + 0x38) = uVar17;
  if ((*(int *)(lVar23 + 0x38) < DAT_1468501c8) &&
     (_Init_thread_header(&DAT_1468501c8), DAT_1468501c8 == -1)) {
    DAT_1468501b0 = 0;
    DAT_1468501b8 = 0;
    atexit(FUN_143e3dca0);
    _Init_thread_footer(&DAT_1468501c8);
  }
  if ((*(int *)(lVar23 + 0x38) < DAT_1468501d8) &&
     (_Init_thread_header(&DAT_1468501d8), DAT_1468501d8 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar21 = (longlong *)(**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.OneFrameThreadLag")
    ;
    if (plVar21 != (longlong *)0x0) {
      plVar27 = (longlong *)(**(code **)(*plVar21 + 0x38))(plVar21);
    }
    DAT_1468501d0 = plVar27;
    _Init_thread_footer(&DAT_1468501d8);
  }
  FFrameEndSync::Sync(&DAT_1468501b0,(int)*DAT_1468501d0 != 0);
  if (lVar22 != 0) {
    FPendingCleanupObjects::~FPendingCleanupObjects(lVar22);
    FMemory::operator_delete(lVar22,0x10);
  }
  FUN_141733100();
  FUN_1415ad7b0(local_1a8);
  fVar31 = (float)DAT_1464a97d0;
  uVar17 = FUN_14164ab60();
  FUN_14159c300(uVar17,fVar31);
  if (lVar19 == 0) {
    fVar31 = (float)DAT_1464a97d0;
    uVar17 = FUN_14164bfd0();
    FUN_14159c300(uVar17,fVar31);
  }
  uVar17 = FUN_1415d8270();
  FUN_1415e74e0(uVar17);
  FUN_1428913c0(DAT_146b17150);
  if (plVar18 != (longlong *)0x0) {
    (**(code **)(*plVar18 + 0xa8))(plVar18);
  }
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af208);
  FUN_1428712f0(DAT_146b17150,3);
  cVar11 = FUN_1424a3f80();
  if (cVar11 == '\0') {
    if (cVar10 == '\0') {
      FUN_14043b740();
    }
  }
  else {
    FUN_14249c9f0(1);
  }
  FWindowsPlatformTime::GetCPUTime(local_100);
  FUN_1404384f0(&local_1d0);
  if (local_1d8 != 0) {
    LOCK();
    piVar2 = (int *)(local_1d8 + 0x48);
    iVar29 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar29 == 1) {
      FGraphEvent::Recycle(local_1d8);
    }
  }
  FUN_1415a0ec0(local_148);
  return;
}



// FUNCTION 140437580 ClearPendingCleanupObjects body=81 status=ok
// SIG undefined ClearPendingCleanupObjects(void)

void FEngineLoop::ClearPendingCleanupObjects(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    FPendingCleanupObjects::~FPendingCleanupObjects(lVar1);
    FMemory::operator_delete(lVar1,0x10);
    *(undefined8 *)(param_1 + 0x38) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 1404375e0 FUN_1404375e0 body=52 status=ok
// SIG undefined FUN_1404375e0(void)

undefined8 FUN_1404375e0(undefined8 param_1,ulonglong param_2)

{
  FUN_140438b40();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 140437620 FUN_140437620 body=43 status=ok
// SIG undefined FUN_140437620(void)

undefined8 * FUN_140437620(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140437650 FUN_140437650 body=43 status=ok
// SIG undefined FUN_140437650(void)

undefined8 * FUN_140437650(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ece8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140437680 FUN_140437680 body=98 status=ok
// SIG undefined FUN_140437680(void)

undefined8 * FUN_140437680(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[1],1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404376f0 FUN_1404376f0 body=98 status=ok
// SIG undefined FUN_1404376f0(void)

undefined8 * FUN_1404376f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ecf0;
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  (**(code **)(*DAT_1468b1f88 + 0x90))(DAT_1468b1f88,param_1[1],1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140437760 StartProfileThreadUsage body=3 status=ok
// SIG void StartProfileThreadUsage(long param_1)

/* void __cdecl AK::MemoryMgr::StartProfileThreadUsage(long) */

void __cdecl AK::MemoryMgr::StartProfileThreadUsage(long param_1)

{
                    /* 0x437760  465  ?StartProfileThreadUsage@MemoryMgr@AK@@YAXJ@Z
                       0x437760  479  ?Term@MusicEngine@AK@@YAXXZ */
  return;
}



// FUNCTION 140437770 CanBeUsedOnAnyThread body=3 status=ok
// SIG undefined CanBeUsedOnAnyThread(void)

undefined1 FOutputDevice::CanBeUsedOnAnyThread(void)

{
  return 0;
}



// FUNCTION 140437780 IsCompactable body=20 status=ok
// SIG undefined IsCompactable(void)

bool IDelegateInstance::IsCompactable(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x18))();
  return cVar1 == '\0';
}



// FUNCTION 1404377a0 CreateCopy body=74 status=ok
// SIG undefined CreateCopy(void)

void TBaseRawMethodDelegateInstance<0,FActorIteratorState,TTypeWrapper<void>___cdecl(AActor_*)>::
     CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &DAT_143f3ed00;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_143f3ed48;
  }
  return;
}



// FUNCTION 1404377f0 FUN_1404377f0 body=21 status=ok
// SIG undefined FUN_1404377f0(void)

undefined8 FUN_1404377f0(longlong param_1)

{
  (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 140437810 FUN_140437810 body=192 status=ok
// SIG undefined FUN_140437810(void)

undefined8 * FUN_140437810(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res10 [8];
  
  plVar3 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar3 != (longlong *)0x0) {
    plVar3[1] = param_3;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f048;
    lVar4 = FDelegateHandle::GenerateNewID();
    plVar3[3] = lVar4;
    *plVar3 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  *param_2 = 0;
  if (plVar3 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,1);
    puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res10);
    iVar1 = (int)param_1[1];
    uVar2 = *puVar5;
    *(int *)(param_1 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
    }
    *param_2 = uVar2;
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
    *puVar5 = plVar3;
    *(undefined4 *)(puVar5 + 1) = 2;
  }
  return param_2;
}



// FUNCTION 1404378d0 Convert<char,wchar_t> body=140 status=ok
// SIG undefined Convert<char,wchar_t>(void)

short * FGenericPlatformString::Convert<char,wchar_t>
                  (short *param_1,int param_2,char *param_3,int param_4,short param_5)

{
  bool bVar1;
  short sVar2;
  char *pcVar3;
  int iVar4;
  
  bVar1 = false;
  pcVar3 = param_3;
  iVar4 = param_4;
  if (param_4 != 0) {
    do {
      if (param_2 == 0) {
        return (short *)0x0;
      }
      if (*pcVar3 < '\0') {
        bVar1 = true;
        sVar2 = param_5;
      }
      else {
        sVar2 = (short)*pcVar3;
      }
      param_2 = param_2 + -1;
      *param_1 = sVar2;
      param_1 = param_1 + 1;
      iVar4 = iVar4 + -1;
      pcVar3 = pcVar3 + 1;
    } while (iVar4 != 0);
    if (bVar1) {
      LogBogusChars<wchar_t,char>(param_3,param_4);
    }
  }
  return param_1;
}



// FUNCTION 140437960 CopyToEmpty<FString> body=186 status=ok
// SIG undefined CopyToEmpty<FString>(void)

void TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
               (undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
  }
  return;
}



// FUNCTION 140437a20 CopyToEmpty<wchar_t> body=108 status=ok
// SIG undefined CopyToEmpty<wchar_t>(void)

void TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
               (undefined8 *param_1,void *param_2,int param_3,int param_4,int param_5)

{
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  ResizeForCopy(param_1,param_3 + param_5,param_4);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_1,param_2,(longlong)param_3 * 2);
  return;
}



// FUNCTION 140437a90 Emplace<FString_const_&> body=367 status=ok
// SIG undefined Emplace<FString_const_&>(void)

int * TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString_const_&>
                (longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  bool bVar7;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  FString::FString(local_30,param_3);
  *(undefined4 *)(local_30 + 2) = 0xffffffff;
  bVar7 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    FindId(param_1,local_res8);
    bVar7 = local_res8[0] != -1;
    if (bVar7) {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + (longlong)local_res8[0] * 0x18) != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(lVar2 + (longlong)local_res8[0] * 0x18),local_30,0x10);
      TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_140437bdb;
    }
  }
  cVar3 = ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar3 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_30;
    }
    uVar4 = FUN_140438070(puVar6);
    uVar4 = (int)param_1[9] - 1U & uVar4;
    *(uint *)((longlong)local_30 + 0x14) = uVar4;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 2) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar4) * 4) = iVar1
    ;
  }
LAB_140437bdb:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar7;
  }
  return param_2;
}



// FUNCTION 140437c00 FUN_140437c00 body=781 status=ok
// SIG undefined FUN_140437c00(void)

int * FUN_140437c00(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  void *_Dst;
  char cVar11;
  uint uVar12;
  longlong *_Src;
  int iVar13;
  bool local_res8;
  
  iVar7 = 1;
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
    iVar2 = *(int *)((longlong)iVar9 * 0x20 + 4 + *param_1);
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar9;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  _Src = (longlong *)((longlong)iVar9 * 0x20 + *param_1);
  plVar6 = (longlong *)param_3[1];
  *_Src = *(longlong *)*param_3;
  _Src[1] = 0;
  *(undefined4 *)(_Src + 2) = 0;
  if (((plVar6 != _Src + 1) && ((int)plVar6[1] != 0)) && ((longlong *)*plVar6 != (longlong *)0x0)) {
    (**(code **)(*(longlong *)*plVar6 + 0x30))();
  }
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar12 != 1) {
    lVar3 = *_Src;
    iVar9 = iVar13;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar6 +
                       ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar10 != -1) {
        do {
          iVar9 = iVar10;
          if (*(longlong *)((longlong)iVar10 * 0x20 + *param_1) == lVar3) break;
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + *param_1);
          iVar9 = iVar13;
        } while (iVar10 != -1);
      }
    }
    local_res8 = iVar9 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar9 * 0x20 + *param_1);
      TBaseDelegate<FText>::~TBaseDelegate<FText>((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar7 = *param_2;
      bVar4 = (byte)iVar7 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar7;
      }
      puVar8 = (undefined4 *)((longlong)iVar7 * 0x20 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar8[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar7;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar6 +
                       (longlong)((int)(iVar7 + (iVar7 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_140437ee4;
    }
  }
  if (3 < uVar12) {
    uVar5 = (uVar12 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar7 = 0x20;
    cVar11 = '\0';
    if (uVar5 != 0) {
      iVar7 = 0x1f - iVar13;
    }
    uVar5 = (uVar12 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar5 != 0) {
      for (; uVar5 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar5 != 0) {
      cVar11 = '\x1f' - (char)iVar13;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*_Src >> 0x20) + (int)*_Src & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140437ee4:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 140437f10 FUN_140437f10 body=63 status=ok
// SIG undefined FUN_140437f10(void)

void FUN_140437f10(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14171bfe0();
  FUN_141799410(uVar1,param_1,param_2,param_3);
  return;
}



// FUNCTION 140437f50 NewObject<USaveGame> body=149 status=ok
// SIG undefined NewObject<USaveGame>(void)

void NewObject<USaveGame>
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
               undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  if (param_3 == 0) {
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
  }
  FUN_1417985e0(param_2,param_1,param_3,param_4,0,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 140437ff0 Stricmp<wchar_t,wchar_t> body=122 status=ok
// SIG undefined Stricmp<wchar_t,wchar_t>(void)

int FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(longlong param_1,wint_t *param_2)

{
  wint_t wVar1;
  wint_t wVar2;
  
  param_1 = param_1 - (longlong)param_2;
  for (; (wVar1 = *(wint_t *)(param_1 + (longlong)param_2), wVar1 != 0 || (*param_2 != 0));
      param_2 = param_2 + 1) {
    if (wVar1 != *param_2) {
      wVar1 = towlower(wVar1);
      wVar2 = towlower(*param_2);
      if (wVar1 != wVar2) {
        return (uint)wVar1 - (uint)wVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140438070 FUN_140438070 body=154 status=ok
// SIG undefined FUN_140438070(void)

uint FUN_140438070(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *param_1;
  while (uVar1 != 0) {
    param_1 = param_1 + 1;
    if ((uVar1 & 0xff00) == 0) {
      iVar2 = toupper((int)(char)uVar1);
      uVar1 = (ushort)(char)iVar2;
    }
    else {
      uVar1 = towupper(uVar1);
    }
    uVar3 = *(uint *)(&DAT_1464acab0 + (ulonglong)(byte)((byte)uVar3 ^ (byte)uVar1) * 4) ^
            uVar3 >> 8;
    uVar3 = *(uint *)(&DAT_1464acab0 + (((ulonglong)(uVar1 >> 8) ^ (ulonglong)uVar3) & 0xff) * 4) ^
            uVar3 >> 8;
    uVar1 = *param_1;
  }
  return uVar3;
}



// FUNCTION 140438110 TArray<FFormatArgumentValue,FDefaultAllocator> body=227 status=ok
// SIG undefined TArray<FFormatArgumentValue,FDefaultAllocator>(void)

undefined8 *
TArray<FFormatArgumentValue,FDefaultAllocator>::TArray<FFormatArgumentValue,FDefaultAllocator>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)*param_2;
  lVar1 = (param_2[1] - (longlong)puVar5) / 6 + (param_2[1] - (longlong)puVar5 >> 0x3f);
  *param_1 = 0;
  uVar4 = (lVar1 >> 3) - (lVar1 >> 0x3f);
  *(int *)(param_1 + 1) = (int)uVar4;
  if ((int)uVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  ResizeForCopy(param_1,uVar4 & 0xffffffff,0);
  puVar2 = (undefined4 *)*param_1;
  do {
    *puVar2 = *puVar5;
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar5 + 2);
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar5 + 2);
    puVar2[2] = puVar5[2];
    *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar5 + 2);
    *(undefined1 *)(puVar2 + 10) = 0;
    if (*(char *)(puVar5 + 10) != '\0') {
      FText::FText(puVar2 + 4,puVar5 + 4);
      *(undefined1 *)(puVar2 + 10) = 1;
    }
    puVar2 = puVar2 + 0xc;
    puVar5 = puVar5 + 0xc;
    uVar3 = (int)uVar4 - 1;
    uVar4 = (ulonglong)uVar3;
  } while (uVar3 != 0);
  return param_1;
}



// FUNCTION 140438200 FOutputDeviceStdOutput body=94 status=ok
// SIG undefined FOutputDeviceStdOutput(void)

undefined8 * FOutputDeviceStdOutput::FOutputDeviceStdOutput(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  *(undefined2 *)(param_1 + 1) = 0x100;
  *param_1 = &PTR_FUN_143f3ef98;
  *(undefined1 *)(param_1 + 2) = 4;
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar2,L"AllowStdOutLogVerbosity");
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 2) = 5;
  }
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Param(uVar2,L"FullStdOutLogOutput");
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 2) = 7;
  }
  return param_1;
}



// FUNCTION 140438260 FUN_140438260 body=529 status=ok
// SIG undefined FUN_140438260(void)

undefined1 * FUN_140438260(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x20] = 0;
  if (param_2[0x20] != '\0') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    param_1[0x20] = 1;
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  lVar1 = *(longlong *)(param_2 + 0x40);
  *(longlong *)(param_1 + 0x40) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  lVar1 = *(longlong *)(param_2 + 0x50);
  *(longlong *)(param_1 + 0x50) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  lVar1 = *(longlong *)(param_2 + 0x60);
  *(longlong *)(param_1 + 0x60) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  lVar1 = *(longlong *)(param_2 + 0x70);
  *(longlong *)(param_1 + 0x70) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  lVar1 = *(longlong *)(param_2 + 0x80);
  *(longlong *)(param_1 + 0x80) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  lVar1 = *(longlong *)(param_2 + 0x98);
  *(longlong *)(param_1 + 0x98) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  lVar1 = *(longlong *)(param_2 + 0xa8);
  *(longlong *)(param_1 + 0xa8) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb1] = param_2[0xb1];
  param_1[0xb2] = param_2[0xb2];
  param_1[0xb3] = param_2[0xb3];
  *(uint *)(param_1 + 0xb4) =
       *(uint *)(param_1 + 0xb4) ^ (*(uint *)(param_1 + 0xb4) ^ *(uint *)(param_2 + 0xb4)) & 1;
  uVar2 = (*(uint *)(param_1 + 0xb4) ^ *(uint *)(param_2 + 0xb4)) & 2 ^ *(uint *)(param_1 + 0xb4);
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)(param_2 + 0xb4)) & 4 ^ uVar2;
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)(param_2 + 0xb4)) & 8 ^ uVar2;
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)(param_2 + 0xb4)) & 0x10 ^ uVar2;
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)(param_2 + 0xb4)) & 0x20 ^ uVar2;
  *(uint *)(param_1 + 0xb4) = uVar2;
  uVar2 = (uVar2 ^ *(uint *)(param_2 + 0xb4)) & 0x40 ^ uVar2;
  *(uint *)(param_1 + 0xb4) = uVar2;
  *(uint *)(param_1 + 0xb4) = (uVar2 ^ *(uint *)(param_2 + 0xb4)) & 0x80 ^ uVar2;
  return param_1;
}



// FUNCTION 140438480 FString body=105 status=ok
// SIG undefined FString(void)

undefined8 * FString::FString(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
  ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 2);
  return param_1;
}



// FUNCTION 1404384f0 FUN_1404384f0 body=173 status=ok
// SIG undefined FUN_1404384f0(void)

void FUN_1404384f0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x10);
    do {
      if (plVar7[1] != 0) {
        FMemory::Free();
      }
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 5;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1404385a0 ~TArray<FFormatArgumentValue,FDefaultAllocator> body=168 status=ok
// SIG undefined ~TArray<FFormatArgumentValue,FDefaultAllocator>(void)

void TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
               (longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    pcVar7 = (char *)(lVar5 + 0x28);
    do {
      if (*pcVar7 != '\0') {
        *pcVar7 = '\0';
        plVar4 = *(longlong **)(pcVar7 + -0x10);
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
      }
      pcVar7 = pcVar7 + 0x30;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140438650 ~TArray<FString,FDefaultAllocator> body=86 status=ok
// SIG undefined ~TArray<FString,FDefaultAllocator>(void)

void TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1404386b0 ~TBaseDelegate<FText> body=100 status=ok
// SIG undefined ~TBaseDelegate<FText>(void)

void TBaseDelegate<FText>::~TBaseDelegate<FText>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)*param_1;
  }
  if ((plVar2 != (longlong *)0x0) ||
     (((int)param_1[1] != 0 && (plVar2 = (longlong *)*param_1, plVar2 != (longlong *)0x0)))) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    if (*param_1 != 0) {
      lVar1 = FMemory::Realloc(*param_1,0,0);
      *param_1 = lVar1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140438720 ~TRefCountPtr<FRHIIndexBuffer> body=171 status=ok
// SIG undefined ~TRefCountPtr<FRHIIndexBuffer>(void)

void TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) != '\0') ||
         ((DAT_146ab62f5 == '\0' && (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 != '\0')))
         ) {
                    /* WARNING: Could not recover jumptable at 0x0001404387c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar3)(puVar3,1);
        return;
      }
      LOCK();
      bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
      if (bVar7) {
        *(int *)((longlong)puVar3 + 0xc) = 1;
      }
      UNLOCK();
      if (bVar7) {
        uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
        if (uVar5 == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
        }
        *(undefined8 **)(lVar6 + 8) = puVar3;
        FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1404387d0 ~TSharedPtr<FTcpSerializedMessage,1> body=77 status=ok
// SIG undefined ~TSharedPtr<FTcpSerializedMessage,1>(void)

void TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 140438820 ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=398 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_1404388e1;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1404388e1:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iStack_1c * 0x28) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404389b0 ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=397 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
               (longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar3 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_140438a71;
      uVar3 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_140438a71:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)((longlong)iStack_1c * 0x20 + *param_1 + 8) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,0);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140438b40 FUN_140438b40 body=125 status=ok
// SIG undefined FUN_140438b40(void)

void FUN_140438b40(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_143f3ecc8;
  plVar4 = (longlong *)param_1[10];
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
  if (param_1[1] == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 140438bc0 ~FFormatArgumentValue body=94 status=ok
// SIG undefined ~FFormatArgumentValue(void)

void FFormatArgumentValue::~FFormatArgumentValue(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
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
  }
  return;
}



// FUNCTION 140438c20 FUN_140438c20 body=546 status=ok
// SIG undefined FUN_140438c20(void)

void FUN_140438c20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xa8);
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
  plVar4 = *(longlong **)(param_1 + 0x98);
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
  plVar4 = *(longlong **)(param_1 + 0x80);
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
  plVar4 = *(longlong **)(param_1 + 0x70);
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
  plVar4 = *(longlong **)(param_1 + 0x60);
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
  plVar4 = *(longlong **)(param_1 + 0x50);
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
  plVar4 = *(longlong **)(param_1 + 0x40);
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
  plVar4 = *(longlong **)(param_1 + 0x30);
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
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 140438e50 ~FSlowTask body=152 status=ok
// SIG undefined ~FSlowTask(void)

void FSlowTask::~FSlowTask(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x4c) != '\0') {
    *(undefined1 *)(param_1 + 0x4c) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x20);
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
  plVar4 = *(longlong **)(param_1 + 8);
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



// FUNCTION 140438ef0 FUN_140438ef0 body=156 status=ok
// SIG undefined FUN_140438ef0(void)

longlong * FUN_140438ef0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_2 + 6);
  plVar2 = (longlong *)0x0;
  if ((uVar3 != 0) && (plVar2 = (longlong *)param_2[4], (longlong *)param_2[4] == (longlong *)0x0))
  {
    plVar2 = param_2;
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
    uVar3 = *(uint *)(param_2 + 6);
  }
  uVar5 = (uint)(param_1 + 0xfU >> 4);
  if (uVar3 == uVar5) goto LAB_140438f6b;
  lVar1 = param_2[4];
  if (uVar5 < 3) {
    if (lVar1 != 0) {
      lVar4 = 0;
LAB_140438f5c:
      lVar1 = FMemory::Realloc(lVar1,lVar4,0);
      param_2[4] = lVar1;
    }
  }
  else if ((lVar1 != 0) || (uVar5 != 0)) {
    lVar4 = (longlong)(int)uVar5 << 4;
    goto LAB_140438f5c;
  }
  *(uint *)(param_2 + 6) = uVar5;
LAB_140438f6b:
  plVar2 = (longlong *)param_2[4];
  if ((longlong *)param_2[4] == (longlong *)0x0) {
    plVar2 = param_2;
  }
  return plVar2;
}



// FUNCTION 140438f90 operator_new body=116 status=ok
// SIG undefined operator_new(void)

longlong operator_new(int param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = (int)param_2[1];
  if (iVar4 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)*param_2;
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    iVar4 = (int)param_2[1];
  }
  iVar1 = (int)(param_1 + 0xf + (param_1 + 0xf >> 0x1f & 0xfU)) >> 4;
  if (iVar4 != iVar1) {
    if ((*param_2 != 0) || (iVar1 != 0)) {
      lVar2 = FMemory::Realloc(*param_2,(longlong)iVar1 << 4,0);
      *param_2 = lVar2;
    }
    *(int *)(param_2 + 1) = iVar1;
  }
  return *param_2;
}



// FUNCTION 140439010 operator= body=123 status=ok
// SIG undefined operator=(void)

longlong *
SharedPointerInternals::FSharedReferencer<1>::operator=(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)*param_2;
  plVar4 = (longlong *)*param_1;
  if (plVar3 != plVar4) {
    *param_2 = 0;
    *param_1 = (longlong)plVar3;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar4 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 140439090 operator= body=201 status=ok
// SIG undefined operator=(void)

longlong * TRefCountPtr<FRHIIndexBuffer>::operator=(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar3 = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      if ((*(char *)(puVar3 + 2) == '\0') &&
         ((DAT_146ab62f5 != '\0' || (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))
         ) {
        LOCK();
        bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
        if (bVar7) {
          *(int *)((longlong)puVar3 + 0xc) = 1;
        }
        UNLOCK();
        if (bVar7) {
          uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
          if (uVar5 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
          }
          *(undefined8 **)(lVar6 + 8) = puVar3;
          FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
          return param_1;
        }
      }
      else {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140439160 FUN_140439160 body=641 status=ok
// SIG undefined FUN_140439160(void)

undefined1 * FUN_140439160(undefined1 *param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  *param_1 = *param_2;
  puVar2 = (undefined8 *)(param_2 + 8);
  if ((undefined8 *)(param_1 + 8) != puVar2) {
    *(undefined8 *)(param_1 + 8) = *puVar2;
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x10,param_2 + 0x10);
  }
  if (param_2 + 0x18 != param_1 + 0x18) {
    if (param_1[0x20] != '\0') {
      param_1[0x20] = 0;
    }
    if (param_2[0x20] != '\0') {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      param_1[0x20] = 1;
    }
  }
  puVar2 = (undefined8 *)(param_2 + 0x28);
  if ((undefined8 *)(param_1 + 0x28) != puVar2) {
    *(undefined8 *)(param_1 + 0x28) = *puVar2;
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x30,param_2 + 0x30);
  }
  puVar2 = (undefined8 *)(param_2 + 0x38);
  if ((undefined8 *)(param_1 + 0x38) != puVar2) {
    *(undefined8 *)(param_1 + 0x38) = *puVar2;
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x40,param_2 + 0x40);
  }
  puVar2 = (undefined8 *)(param_2 + 0x48);
  if ((undefined8 *)(param_1 + 0x48) != puVar2) {
    *(undefined8 *)(param_1 + 0x48) = *puVar2;
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,param_2 + 0x50);
  }
  puVar2 = (undefined8 *)(param_2 + 0x58);
  if ((undefined8 *)(param_1 + 0x58) != puVar2) {
    *(undefined8 *)(param_1 + 0x58) = *puVar2;
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x60,param_2 + 0x60);
  }
  puVar2 = (undefined8 *)(param_2 + 0x68);
  if ((undefined8 *)(param_1 + 0x68) != puVar2) {
    *(undefined8 *)(param_1 + 0x68) = *puVar2;
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x70,param_2 + 0x70);
  }
  puVar2 = (undefined8 *)(param_2 + 0x78);
  if ((undefined8 *)(param_1 + 0x78) != puVar2) {
    *(undefined8 *)(param_1 + 0x78) = *puVar2;
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x80,param_2 + 0x80);
  }
  puVar2 = (undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  if ((undefined8 *)(param_1 + 0x90) != puVar2) {
    *(undefined8 *)(param_1 + 0x90) = *puVar2;
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x98,param_2 + 0x98);
  }
  puVar2 = (undefined8 *)(param_2 + 0xa0);
  if ((undefined8 *)(param_1 + 0xa0) != puVar2) {
    *(undefined8 *)(param_1 + 0xa0) = *puVar2;
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa8,param_2 + 0xa8);
  }
  param_1[0xb0] = param_2[0xb0];
  param_1[0xb1] = param_2[0xb1];
  param_1[0xb2] = param_2[0xb2];
  param_1[0xb3] = param_2[0xb3];
  *(uint *)(param_1 + 0xb4) =
       *(uint *)(param_1 + 0xb4) ^ (*(uint *)(param_1 + 0xb4) ^ *(uint *)(param_2 + 0xb4)) & 1;
  uVar1 = (*(uint *)(param_2 + 0xb4) ^ *(uint *)(param_1 + 0xb4)) & 2 ^ *(uint *)(param_1 + 0xb4);
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0xb4)) & 4 ^ uVar1;
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0xb4)) & 8 ^ uVar1;
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0xb4)) & 0x10 ^ uVar1;
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0xb4)) & 0x20 ^ uVar1;
  *(uint *)(param_1 + 0xb4) = uVar1;
  uVar1 = (uVar1 ^ *(uint *)(param_2 + 0xb4)) & 0x40 ^ uVar1;
  *(uint *)(param_1 + 0xb4) = uVar1;
  *(uint *)(param_1 + 0xb4) = (uVar1 ^ *(uint *)(param_2 + 0xb4)) & 0x80 ^ uVar1;
  return param_1;
}



// FUNCTION 1404393f0 operator= body=75 status=ok
// SIG undefined operator=(void)

longlong * FString::operator=(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 140439440 operator= body=112 status=ok
// SIG undefined operator=(void)

undefined8 * FString::operator=(undefined8 *param_1,undefined8 *param_2)

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
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1404394b0 operator() body=192 status=ok
// SIG undefined operator()(void)

void <lambda_3a30a28eca5df303629c884075297862>::operator()(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_18;
  longlong *local_10;
  
  lVar5 = operator_new(0xc0);
  if (lVar5 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = FUN_1424de5b0(lVar5);
  }
  local_10 = (longlong *)operator_new(0x18);
  if (local_10 != (longlong *)0x0) {
    *(undefined4 *)(local_10 + 1) = 1;
    *local_10 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)local_10 + 0xc) = 1;
    local_10[2] = local_18;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  FUN_1416fad10(param_2,&local_18);
  plVar4 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
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



// FUNCTION 140439570 operator() body=145 status=ok
// SIG undefined operator()(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int <lambda_77ab3509084d769d35664a24fa16d156>::operator()(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  cVar2 = (**(code **)*param_1)(((undefined8 *)*param_1)[1],local_res8);
  if (cVar2 == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)param_1[2];
    if (iVar4 == 0) {
      uVar3 = FLockFreeLinkPolicy::AllocLockFreeLink();
      *(undefined4 *)param_1[2] = uVar3;
      uVar1 = *(uint *)param_1[2];
      if (uVar1 == 0) {
        _DAT_00000008 = param_1[1];
        return *(int *)param_1[2];
      }
      *(longlong *)((&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18 + 8) =
           param_1[1];
      return *(int *)param_1[2];
    }
  }
  return iVar4;
}



// FUNCTION 140439610 operator() body=398 status=ok
// SIG undefined operator()(void)

void <lambda_8b7e82a525f135deee2954234f42f866>::operator()(undefined8 *param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  short *psVar11;
  short *local_28;
  int local_20;
  
  FRHICommandListExecutor::LatchBypass(&DAT_146ab6e68);
  DAT_1464aaa90 = DAT_1464aaa90 + 1;
  FString::PrintfImpl(&local_28,L"Frame %d",*param_1);
  AK::MemoryMgr::StartProfileThreadUsage(0x464aa744);
  uVar4 = DAT_1464aa73c;
  lVar5 = -1;
  psVar11 = &DAT_143f3eda8;
  if (local_20 != 0) {
    psVar11 = local_28;
  }
  do {
    lVar3 = lVar5 + 1;
    lVar5 = lVar5 + 1;
  } while (psVar11[lVar3] != 0);
  iVar2 = (int)lVar5 * 2;
  lVar5 = (longlong)(iVar2 + 2);
  uVar10 = *(longlong *)(param_2 + 0x30) + 1U & 0xfffffffffffffffe;
  uVar6 = lVar5 + uVar10;
  if (*(ulonglong *)(param_2 + 0x38) < uVar6) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,iVar2 + 4);
    uVar10 = *(longlong *)(param_2 + 0x30) + 1U & 0xfffffffffffffffe;
    uVar6 = lVar5 + uVar10;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar6;
  lVar5 = uVar10 - (longlong)psVar11;
  do {
    sVar1 = *psVar11;
    *(short *)(lVar5 + (longlong)psVar11) = sVar1;
    psVar11 = psVar11 + 1;
  } while (sVar1 != 0);
  puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar9 + 4;
  if (*(undefined8 **)(param_2 + 0x38) < puVar7) {
    FMemStackBase::AllocateNewChunk(param_2 + 0x30,0x28);
    puVar9 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar9 + 4;
  }
  *(undefined8 **)(param_2 + 0x30) = puVar7;
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  **(undefined8 **)(param_2 + 8) = puVar9;
  *(undefined8 **)(param_2 + 8) = puVar9 + 1;
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_143f3ede8;
  puVar9[2] = uVar10;
  *(undefined4 *)(puVar9 + 3) = uVar4;
  uVar8 = FRealtimeGPUProfiler::Get();
  FRealtimeGPUProfiler::BeginFrame(uVar8,param_2);
  FRHICommandList::BeginFrame(param_2);
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af220);
  if (local_28 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404397a0 FUN_1404397a0 body=43 status=ok
// SIG undefined FUN_1404397a0(void)

undefined8 * FUN_1404397a0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1404397d0 FUN_1404397d0 body=43 status=ok
// SIG undefined FUN_1404397d0(void)

undefined8 * FUN_1404397d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140439800 FUN_140439800 body=43 status=ok
// SIG undefined FUN_140439800(void)

undefined8 * FUN_140439800(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ed90;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140439830 FUN_140439830 body=97 status=ok
// SIG undefined FUN_140439830(void)

undefined8 * FUN_140439830(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143f3f218;
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



// FUNCTION 1404398a0 FUN_1404398a0 body=97 status=ok
// SIG undefined FUN_1404398a0(void)

undefined8 * FUN_1404398a0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143f3f0d8;
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



// FUNCTION 140439910 FUN_140439910 body=97 status=ok
// SIG undefined FUN_140439910(void)

undefined8 * FUN_140439910(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143f3f100;
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



// FUNCTION 140439980 FUN_140439980 body=97 status=ok
// SIG undefined FUN_140439980(void)

undefined8 * FUN_140439980(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143f3f120;
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



// FUNCTION 1404399f0 FUN_1404399f0 body=97 status=ok
// SIG undefined FUN_1404399f0(void)

undefined8 * FUN_1404399f0(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143f3f110;
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



// FUNCTION 140439a60 FUN_140439a60 body=97 status=ok
// SIG undefined FUN_140439a60(void)

undefined8 * FUN_140439a60(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_143f3f038;
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



// FUNCTION 140439ad0 FUN_140439ad0 body=43 status=ok
// SIG undefined FUN_140439ad0(void)

undefined8 * FUN_140439ad0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140439b00 FUN_140439b00 body=43 status=ok
// SIG undefined FUN_140439b00(void)

undefined8 * FUN_140439b00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3ef70;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 140439b30 FUN_140439b30 body=43 status=ok
// SIG undefined FUN_140439b30(void)

undefined8 * FUN_140439b30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3edd8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140439b60 FUN_140439b60 body=72 status=ok
// SIG undefined FUN_140439b60(void)

undefined8 * FUN_140439b60(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140439bb0 FUN_140439bb0 body=43 status=ok
// SIG undefined FUN_140439bb0(void)

undefined8 * FUN_140439bb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143f3ef98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140439be0 FUN_140439be0 body=43 status=ok
// SIG undefined FUN_140439be0(void)

undefined8 * FUN_140439be0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 140439c10 Add body=266 status=ok
// SIG undefined Add(void)

int TBitArray<FDefaultBitArrayAllocator>::Add(longlong param_1,char param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar6 = iVar2 + param_3;
  *(int *)(param_1 + 0x18) = iVar6;
  if (*(int *)(param_1 + 0x1c) < iVar6) {
    uVar3 = (int)(iVar6 + 0x1f + (iVar6 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    if (uVar3 < 5) {
      iVar4 = 4;
    }
    else {
      uVar5 = FMemory::QuantizeSize
                        ((((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3) * 4 +
                         0x40,0);
      iVar6 = *(int *)(param_1 + 0x18);
      iVar4 = (int)(uVar5 >> 2);
      if (iVar4 < (int)uVar3) {
        iVar4 = 0x7fffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar4 << 5;
    Realloc(param_1,iVar6 - param_3);
  }
  if (param_3 == 1) {
    lVar9 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar9 = param_1;
    }
    lVar7 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5);
    uVar3 = *(uint *)(lVar9 + lVar7 * 4);
    puVar1 = (uint *)(lVar9 + lVar7 * 4);
    uVar8 = 1 << ((byte)iVar2 & 0x1f);
    if (param_2 == '\0') {
      *puVar1 = ~uVar8 & uVar3;
    }
    else {
      *puVar1 = uVar8 | uVar3;
    }
  }
  else {
    SetRange(param_1,iVar2,param_3,param_2);
  }
  return iVar2;
}



// FUNCTION 140439d20 AddUninitialized body=214 status=ok
// SIG undefined AddUninitialized(void)

int * TSparseArray<TSetElement<TTuple<FFlareSpacecraftDescription_const_*,int>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::AddUninitialized(longlong *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar4 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar4);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0);
  }
  else {
    iVar4 = (int)param_1[6];
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar3 = *(int *)(*param_1 + 4 + (longlong)iVar4 * 0x18);
    *(int *)(param_1 + 6) = iVar3;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar2 = (uint *)((longlong)plVar5 + (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar4 & 0x1f);
  *(longlong *)(param_2 + 2) = *param_1 + (longlong)iVar4 * 0x18;
  return param_2;
}



// FUNCTION 140439e00 FUN_140439e00 body=1227 status=ok
// SIG undefined FUN_140439e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140439e00(void)

{
  short sVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  long lVar11;
  longlong lVar12;
  uint uVar13;
  short *psVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  undefined2 *puVar17;
  byte local_res8 [8];
  undefined1 local_res10 [8];
  undefined2 *local_88;
  ulonglong local_80;
  longlong local_78 [6];
  longlong local_48 [2];
  longlong local_38 [2];
  
  FUN_1415fda00();
  puVar16 = (undefined2 *)0x0;
  puVar17 = puVar16;
  do {
    sVar1 = *(short *)((longlong)L"Fatal error!\r\n\r\n" + (longlong)puVar17);
    *(short *)((longlong)&DAT_1468b6170 + (longlong)puVar17) = sVar1;
    puVar17 = puVar17 + 1;
  } while (sVar1 != 0);
  FUN_1416a62e0();
  AK::MemoryMgr::StartProfileThreadUsage((long)puVar17);
  uVar6 = FDateTime::Now(local_res10);
  plVar7 = (longlong *)FDateTime::ToString(uVar6,&local_88);
  if (plVar7 != &DAT_1468e2438) {
    if (DAT_1468e2438 != 0) {
      FMemory::Free();
    }
    DAT_1468e2438 = *plVar7;
    *plVar7 = 0;
    _DAT_1468e2440 = (undefined4)plVar7[1];
    _DAT_1468e2444 = *(undefined4 *)((longlong)plVar7 + 0xc);
    plVar7[1] = 0;
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FWindowsPlatformProcess::SetCurrentWorkingDirectoryToBaseDir();
  puVar8 = (undefined8 *)FUN_1415c3d50();
  (**(code **)*puVar8)();
  AK::MemoryMgr::StartProfileThreadUsage((long)puVar8);
  uVar6 = FCommandLine::Get();
  cVar3 = FParse::Param(uVar6,L"purgatorymallocproxy");
  if (cVar3 != '\0') {
    FMemory::EnablePurgatoryTests();
  }
  uVar6 = FCommandLine::Get();
  cVar3 = FParse::Param(uVar6,L"poisonmallocproxy");
  if (cVar3 != '\0') {
    FMemory::EnablePoisonTests();
  }
  plVar7 = (longlong *)FUN_1415c3d50();
  puVar8 = (undefined8 *)FPaths::ProjectLogDir(&local_88);
  psVar14 = &DAT_143f3eda8;
  if (*(int *)(puVar8 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*puVar8;
  }
  (**(code **)(*plVar7 + 0x58))(plVar7,puVar17,0);
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  plVar7 = (longlong *)FUN_1415c3d50();
  uVar6 = FDateTime::Now(local_res10);
  puVar8 = (undefined8 *)FDateTime::ToString(uVar6,local_38);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar17 = &DAT_143f3eda8;
  }
  else {
    puVar17 = (undefined2 *)*puVar8;
  }
  puVar8 = (undefined8 *)FPaths::ProjectLogDir(local_48);
  if (*(int *)(puVar8 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar8;
  }
  uVar6 = FEngineVersion::Current();
  uVar5 = FEngineVersionBase::GetChangelist(uVar6);
  FString::PrintfImpl(&local_88,L"%sunreal-v%i-%s.dmp",puVar15,uVar5,puVar17);
  puVar17 = &DAT_143f3eda8;
  if ((int)local_80 != 0) {
    puVar17 = local_88;
  }
  puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0xe0))(plVar7,local_78 + 4,puVar17);
  if (*(int *)(puVar8 + 1) != 0) {
    psVar14 = (short *)*puVar8;
  }
  lVar12 = (longlong)&DAT_1468b2810 - (longlong)psVar14;
  do {
    sVar1 = *psVar14;
    *(short *)(lVar12 + (longlong)psVar14) = sVar1;
    psVar14 = psVar14 + 1;
  } while (sVar1 != 0);
  if (local_78[4] != 0) {
    FMemory::Free();
  }
  if (local_88 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  FUN_1415b7ef0();
  FUN_1416508d0();
  FGenericPlatformStackWalk::Init();
  FUN_14043a700();
  plVar7 = (longlong *)FUN_1416ba600();
  plVar9 = (longlong *)IProjectManager::Get();
  plVar10 = (longlong *)FLogSuppressionInterface::Get();
  (**(code **)(*plVar10 + 0x10))(plVar10);
  cVar3 = (**(code **)(*plVar9 + 0x18))(plVar9,0);
  if ((cVar3 == '\0') || (cVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,0), cVar3 == '\0')) {
    uVar6 = 0;
  }
  else {
    plVar9 = (longlong *)FMemory::Realloc(0,0x20);
    if (plVar9 != (longlong *)0x0) {
      plVar9[1] = (longlong)plVar7;
      *plVar9 = (longlong)&PTR_GetPoolName_143f3f240;
      lVar12 = FDelegateHandle::GenerateNewID();
      plVar9[3] = lVar12;
      *plVar9 = (longlong)&PTR_GetPoolName_143f3f288;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af1a8,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,local_res10);
      iVar2 = DAT_1464af1b0;
      lVar12 = (longlong)DAT_1464af1b0;
      DAT_1464af1b0 = DAT_1464af1b0 + 1;
      if (DAT_1464af1b4 < DAT_1464af1b0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af1a8,iVar2);
      }
      puVar8 = (undefined8 *)(lVar12 * 0x10 + DAT_1464af1a8);
      *puVar8 = plVar9;
      *(undefined4 *)(puVar8 + 1) = 2;
    }
    FUN_140443510();
    if (DAT_1468b6158 != (longlong *)0x0) {
      uVar6 = FCommandLine::Get();
      cVar3 = FParse::Param(uVar6,&DAT_143f3a748);
      if (cVar3 != '\0') {
        (**(code **)(*DAT_1468b6158 + 0x40))(DAT_1468b6158,1);
      }
    }
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    FUN_1416a0990(local_78 + 2,local_78);
    FString::PrintfImpl(local_48,&DAT_143f3a454,0xb6bff20);
    FString::PrintfImpl(local_38,L"%02d",0);
    if (local_38[0] != 0) {
      FMemory::Free();
    }
    if (local_48[0] != 0) {
      FMemory::Free();
    }
    cVar3 = FOutputDevice::CanBeUsedOnAnyThread();
    local_88 = (undefined2 *)0x0;
    lVar11 = 0x43f3aba8;
    local_80 = 0;
    psVar14 = &DAT_143f39f24;
    if (cVar3 != '\0') {
      psVar14 = &DAT_143f3aba8;
    }
    if (*psVar14 != 0) {
      lVar12 = -1;
      do {
        lVar12 = lVar12 + 1;
      } while (psVar14[lVar12] != 0);
      uVar13 = (int)lVar12 + 1;
      local_80 = (ulonglong)uVar13;
      if (0 < (int)uVar13) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
      }
      puVar16 = local_88;
      puVar17 = local_88;
      FGenericPlatformString::Memcpy(local_88,psVar14,(longlong)(int)uVar13 * 2);
      lVar11 = (long)puVar17;
    }
    AK::MemoryMgr::StartProfileThreadUsage(lVar11);
    FColorList::CreateColorMap(&PTR_PTR_1464aa9b0);
    local_res8[0] = 0;
    FConfigCacheIni::GetBool
              (DAT_1468b6148,L"AutomationTesting",L"bForceSmokeTests",local_res8,&DAT_1468e2360);
    uVar6 = FCommandLine::Get();
    bVar4 = FParse::Param(uVar6,L"bForceSmokeTests");
    bVar4 = local_res8[0] | bVar4;
    local_res8[0] = bVar4;
    lVar12 = FUN_141649d10();
    *(byte *)(lVar12 + 0x1d8) = bVar4;
    TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af028);
    if (puVar16 != (undefined2 *)0x0) {
      FMemory::Free(puVar16);
    }
    if (local_78[0] != 0) {
      FMemory::Free();
    }
    if (local_78[2] != 0) {
      FMemory::Free();
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 14043a2d0 FUN_14043a2d0 body=596 status=ok
// SIG undefined FUN_14043a2d0(void)

void FUN_14043a2d0(void)

{
  bool bVar1;
  int iVar2;
  short *psVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_18;
  ulonglong local_10;
  
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af190);
  psVar3 = (short *)FCommandLine::Get();
  local_10 = 0;
  local_18 = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (psVar3[lVar6] != 0);
    uVar5 = (int)lVar6 + 1;
    local_10 = (ulonglong)uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,psVar3,(longlong)(int)uVar5 * 2);
  }
  iVar2 = FUN_141592950(&local_18,L"CreatePak",1,0,0xffffffff);
  if (iVar2 != -1) {
    lVar6 = FUN_14164b110();
    if (lVar6 != 0) {
      bVar1 = true;
      goto LAB_14043a379;
    }
  }
  bVar1 = false;
LAB_14043a379:
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (bVar1) {
    plVar4 = (longlong *)GetDerivedDataCacheRef();
    (**(code **)(*plVar4 + 0x78))(plVar4,1);
  }
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af178);
  if (DAT_1468b5010 != (longlong *)0x0) {
    (**(code **)(*DAT_1468b5010 + 8))();
  }
  if ((DAT_1468b5028 != (longlong *)0x0) && (DAT_1468b5028 != DAT_1468b5020)) {
    (**(code **)(*DAT_1468b5028 + 8))(DAT_1468b5028);
    DAT_1468b5028 = (longlong *)0x0;
  }
  if (DAT_1468b5020 != (longlong *)0x0) {
    (**(code **)(*DAT_1468b5020 + 8))();
  }
  if (DAT_1468b5018 != (longlong *)0x0) {
    (**(code **)(*DAT_1468b5018 + 8))();
  }
  if (DAT_146b09470 != 0) {
    FUN_14275e710();
    lVar6 = DAT_146b09470;
    if (DAT_146b09470 != 0) {
      if (*(longlong *)(DAT_146b09470 + 0x138) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + 0x128) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + 0x118) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + 0x108) != 0) {
        FMemory::Free();
      }
      plVar4 = *(longlong **)(lVar6 + 0xe8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,1);
      }
      *(undefined4 *)(lVar6 + 0xe0) = 0;
      if (*(longlong *)(lVar6 + 0xd8) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,FShaderMapFinalizeResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(lVar6 + 0x98,0);
      if (*(longlong *)(lVar6 + 0xb8) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar6 + 0x98) != 0) {
        FMemory::Free();
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x70));
      *(undefined4 *)(lVar6 + 0x60) = 0;
      if (*(longlong *)(lVar6 + 0x58) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<int,FShaderMapCompileResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar6 + 0x18);
      if (*(longlong *)(lVar6 + 8) != 0) {
        FMemory::Free();
      }
      FMemory::operator_delete(lVar6,0x168);
    }
    DAT_146b09470 = 0;
  }
  return;
}



// FUNCTION 14043a530 Broadcast body=143 status=ok
// SIG undefined Broadcast(void)

void TBaseMulticastDelegate<void>::Broadcast(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  iVar5 = *(int *)((longlong)param_1 + 0x14);
  bVar2 = false;
  iVar4 = (int)param_1[1] + -1;
  lVar6 = (longlong)iVar4;
  if (-1 < iVar4) {
    lVar7 = lVar6 << 4;
    bVar2 = false;
    do {
      if ((*(int *)(lVar7 + 8 + *param_1) == 0) ||
         (plVar1 = *(longlong **)(lVar7 + *param_1), plVar1 == (longlong *)0x0)) {
LAB_14043a580:
        bVar2 = true;
      }
      else {
        cVar3 = (**(code **)(*plVar1 + 0x40))();
        if (cVar3 == '\0') goto LAB_14043a580;
      }
      lVar7 = lVar7 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
    iVar5 = *(int *)((longlong)param_1 + 0x14);
  }
  *(int *)((longlong)param_1 + 0x14) = iVar5 + -1;
  if (bVar2) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14043a660 FUN_14043a660 body=76 status=ok
// SIG undefined FUN_14043a660(void)

void FUN_14043a660(longlong *param_1)

{
  int iVar1;
  
  if (0 < *DAT_146850058) {
    iVar1 = rand();
    FUN_1416b1760((float)iVar1 * 9.155553e-08);
  }
  if (*param_1 != 0) {
    UDemoNetDriver::TickFlushAsyncEndOfFrame(*param_1,(int)param_1[1]);
    return;
  }
  return;
}



// FUNCTION 14043a6c0 FUN_14043a6c0 body=8 status=ok
// SIG undefined FUN_14043a6c0(void)

void FUN_14043a6c0(undefined8 param_1,undefined8 *param_2)

{
  <lambda_77ab3509084d769d35664a24fa16d156>::operator()(param_1,*param_2);
  return;
}



// FUNCTION 14043a6d0 FUN_14043a6d0 body=42 status=ok
// SIG undefined FUN_14043a6d0(void)

void FUN_14043a6d0(double *param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = *param_1;
  uVar2 = FUN_14164bfd0();
  FUN_14159c300(uVar2,(float)dVar1);
  return;
}



// FUNCTION 14043a700 FUN_14043a700 body=928 status=ok
// SIG undefined FUN_14043a700(void)

void FUN_14043a700(void)

{
  wchar_t wVar1;
  longlong *plVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  wint_t *pwVar8;
  wchar_t *pwVar9;
  undefined2 *local_38;
  undefined8 local_30;
  undefined2 *local_28;
  int local_20;
  
  local_38 = (undefined2 *)0x0;
  local_30 = 0;
  cVar3 = FConfigCacheIni::GetString(DAT_1468b6148,L"LogFiles",L"LogTimes",&local_38,&DAT_1468e2360)
  ;
  if (cVar3 != '\0') {
    pwVar8 = &DAT_143f3a5d0;
    puVar7 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar7 = local_38;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar7 + -0xa1f9d2e8) + (longlong)pwVar8);
      if ((wVar4 == 0) && (*pwVar8 == 0)) goto LAB_14043a7ba;
      if (wVar4 != *pwVar8) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar8);
        if (wVar4 != wVar5) goto LAB_14043a7b0;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
  goto LAB_14043a951;
LAB_14043a7b0:
  if (wVar4 != wVar5) {
    pwVar8 = &DAT_143f3a5e0;
    puVar7 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar7 = local_38;
    }
    do {
      wVar4 = *(wint_t *)((longlong)(puVar7 + -0xa1f9d2f0) + (longlong)pwVar8);
      if ((wVar4 == 0) && (*pwVar8 == 0)) goto LAB_14043a92d;
      if (wVar4 != *pwVar8) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar8);
        if (wVar4 != wVar5) goto LAB_14043a854;
      }
      pwVar8 = pwVar8 + 1;
    } while( true );
  }
LAB_14043a7ba:
  plVar2 = DAT_1468500d8;
  FString::PrintfImpl(&local_28,&DAT_143f3edc0,0);
  puVar7 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar7 = local_28;
  }
  (**(code **)(*plVar2 + 0x60))(plVar2,puVar7,0x4000000);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  goto LAB_14043a951;
LAB_14043a854:
  if (wVar4 != wVar5) {
    pwVar9 = L"SinceStart";
    puVar7 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar7 = local_38;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar7 + -0xa1f9d2f4) + (longlong)pwVar9);
      if ((wVar1 == L'\0') && (*pwVar9 == L'\0')) goto LAB_14043a8ba;
      if (wVar1 != *pwVar9) {
        wVar4 = towlower(wVar1);
        wVar5 = towlower(*pwVar9);
        if (wVar4 != wVar5) goto LAB_14043a8b0;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
LAB_14043a92d:
  uVar6 = 1;
  goto LAB_14043a932;
LAB_14043a907:
  if (wVar4 == wVar5) {
LAB_14043a911:
    uVar6 = 3;
    goto LAB_14043a932;
  }
  puVar7 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar7 = local_38;
  }
  cVar3 = FToBoolHelper::FromCStringWide(puVar7);
  if (cVar3 != '\0') goto LAB_14043a92d;
  goto LAB_14043a951;
LAB_14043a8b0:
  if (wVar4 != wVar5) {
    pwVar9 = L"Local";
    puVar7 = &DAT_143f3eda8;
    if ((int)local_30 != 0) {
      puVar7 = local_38;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar7 + -0xa1f9d300) + (longlong)pwVar9);
      if ((wVar1 == L'\0') && (*pwVar9 == L'\0')) goto LAB_14043a911;
      if (wVar1 != *pwVar9) {
        wVar4 = towlower(wVar1);
        wVar5 = towlower(*pwVar9);
        if (wVar4 != wVar5) goto LAB_14043a907;
      }
      pwVar9 = pwVar9 + 1;
    } while( true );
  }
LAB_14043a8ba:
  uVar6 = 2;
LAB_14043a932:
  IConsoleVariable::Set(DAT_1468500d8,uVar6,0x4000000);
LAB_14043a951:
  uVar6 = FCommandLine::Get();
  cVar3 = FParse::Param(uVar6,L"LOGTIMES");
  plVar2 = DAT_1468500d8;
  if (cVar3 == '\0') {
    uVar6 = FCommandLine::Get();
    cVar3 = FParse::Param(uVar6,L"UTCLOGTIMES");
    plVar2 = DAT_1468500d8;
    if (cVar3 == '\0') {
      uVar6 = FCommandLine::Get();
      cVar3 = FParse::Param(uVar6,L"NOLOGTIMES");
      if (cVar3 == '\0') {
        uVar6 = FCommandLine::Get();
        cVar3 = FParse::Param(uVar6,L"LOGTIMESINCESTART");
        if (cVar3 == '\0') {
          uVar6 = FCommandLine::Get();
          cVar3 = FParse::Param(uVar6,L"LOCALLOGTIMES");
          if (cVar3 == '\0') goto LAB_14043aa82;
          uVar6 = 3;
        }
        else {
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 0;
      }
      IConsoleVariable::Set(DAT_1468500d8,uVar6,0x7000000);
    }
    else {
      FString::PrintfImpl(&local_28,&DAT_143f3edc0,1);
      puVar7 = &DAT_143f3eda8;
      if (local_20 != 0) {
        puVar7 = local_28;
      }
      (**(code **)(*plVar2 + 0x60))(plVar2,puVar7,0x7000000);
      if (local_28 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
  }
  else {
    FString::PrintfImpl(&local_28,&DAT_143f3edc0,1);
    puVar7 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar7 = local_28;
    }
    (**(code **)(*plVar2 + 0x60))(plVar2,puVar7,0x7000000);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
LAB_14043aa82:
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14043aaa0 CompactInvocationList body=188 status=ok
// SIG undefined CompactInvocationList(void)

void FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(longlong *param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((*(int *)((longlong)param_1 + 0x14) < 1) &&
     ((param_2 == '\0' ||
      (*(int *)(param_1 + 2) = (int)param_1[2] + -1, (int)param_1[2] <= (int)param_1[1])))) {
    iVar1 = (int)param_1[1];
    uVar6 = 0;
    uVar7 = uVar6;
    iVar5 = iVar1;
    if (0 < iVar1) {
      do {
        if (((*(int *)(uVar6 + 8 + *param_1) == 0) ||
            (plVar2 = *(longlong **)(uVar6 + *param_1), plVar2 == (longlong *)0x0)) ||
           (cVar3 = (**(code **)(*plVar2 + 0x10))(), cVar3 != '\0')) {
          TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl(param_1,uVar7,1,1);
        }
        else {
          uVar7 = (ulonglong)((int)uVar7 + 1);
          uVar6 = uVar6 + 0x10;
        }
        iVar5 = (int)param_1[1];
      } while ((int)uVar7 < iVar5);
    }
    iVar4 = iVar5 * 2;
    if (iVar4 < 3) {
      iVar4 = 2;
    }
    *(int *)(param_1 + 2) = iVar4;
    if ((iVar4 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14043ab60 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::ConditionalRehash
          (longlong param_1,uint param_2,char param_3)

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



// FUNCTION 14043ac10 FUN_14043ac10 body=39 status=ok
// SIG undefined FUN_14043ac10(void)

void FUN_14043ac10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f130;
    return;
  }
  return;
}



// FUNCTION 14043ac40 FUN_14043ac40 body=56 status=ok
// SIG undefined FUN_14043ac40(void)

void FUN_14043ac40(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140438ef0(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f3f228;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 14043ac80 FUN_14043ac80 body=66 status=ok
// SIG undefined FUN_14043ac80(void)

void FUN_14043ac80(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143f3f240;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_143f3f288;
  }
  return;
}



// FUNCTION 14043acd0 FUN_14043acd0 body=66 status=ok
// SIG undefined FUN_14043acd0(void)

void FUN_14043acd0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143f3f048;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_143f3f090;
  }
  return;
}



// FUNCTION 14043ad20 FUN_14043ad20 body=66 status=ok
// SIG undefined FUN_14043ad20(void)

void FUN_14043ad20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143f3f188;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_143f3f1d0;
  }
  return;
}



// FUNCTION 14043ad70 FUN_14043ad70 body=56 status=ok
// SIG undefined FUN_14043ad70(void)

void FUN_14043ad70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143f3f148;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 14043adb0 FUN_14043adb0 body=332 status=ok
// SIG undefined FUN_14043adb0(void)

undefined8 * FUN_14043adb0(undefined8 *param_1,longlong param_2,undefined4 param_3)

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
  *plVar6 = (longlong)&PTR_FUN_143f3f218;
  *(undefined1 *)(plVar6 + 3) = 0;
  plVar6[4] = 0;
  *param_1 = plVar6;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  return param_1;
}



// FUNCTION 14043af00 FUN_14043af00 body=372 status=ok
// SIG undefined FUN_14043af00(void)

undefined8 * FUN_14043af00(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_143f3f110;
  *(undefined1 *)(plVar8 + 4) = 0;
  plVar8[5] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 14043b080 CreateTask body=372 status=ok
// SIG undefined CreateTask(void)

undefined8 *
TGraphTask<FReturnGraphTask>::CreateTask(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_res8;
  longlong local_res10;
  
  plVar8 = (longlong *)0x0;
  iVar9 = 0;
  if (param_2 != 0) {
    iVar9 = *(int *)(param_2 + 0x28);
  }
  pDVar3 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  plVar4 = TlsGetValue(*pDVar3);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)operator_new(0x18);
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = 0;
      plVar4[1] = 0;
      *(undefined4 *)(plVar4 + 2) = 0;
      plVar8 = plVar4;
    }
    TlsSetValue(*pDVar3,plVar8);
    plVar4 = plVar8;
  }
  plVar8 = (longlong *)plVar4[1];
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)*plVar4;
    if (plVar8 == (longlong *)0x0) {
      lVar5 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar3 + 2);
      plVar4[1] = lVar5;
      if (lVar5 == 0) {
        puVar6 = (undefined8 *)FMemory::Malloc(0x2000,0);
        plVar4[1] = (longlong)puVar6;
        lVar5 = 0x1f;
        do {
          puVar2 = puVar6 + 0x20;
          *puVar6 = puVar2;
          lVar5 = lVar5 + -1;
          puVar6 = puVar2;
        } while (lVar5 != 0);
        *puVar2 = 0;
      }
      plVar8 = (longlong *)plVar4[1];
      iVar7 = 0x20;
      *(undefined4 *)(plVar4 + 2) = 0x20;
    }
    else {
      iVar7 = 0x20;
      plVar4[1] = (longlong)plVar8;
      *(undefined4 *)(plVar4 + 2) = 0x20;
      *plVar4 = 0;
    }
  }
  else {
    iVar7 = (int)plVar4[2];
  }
  plVar4[1] = *plVar8;
  *(int *)(plVar4 + 2) = iVar7 + -1;
  plVar4 = (longlong *)FUN_1415914c0(&local_res8);
  *param_1 = plVar8;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = param_3;
  local_res10 = *plVar4;
  *plVar4 = 0;
  *plVar8 = (longlong)&PTR_FUN_143f3edd8;
  *(undefined4 *)(plVar8 + 1) = 0xff;
  *(int *)((longlong)plVar8 + 0xc) = iVar9 + 1;
  *plVar8 = (longlong)&PTR_FUN_143f3f038;
  *(undefined1 *)((longlong)plVar8 + 0x14) = 0;
  plVar8[3] = local_res10;
  if (local_res8 != 0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 0x48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      FGraphEvent::Recycle();
    }
  }
  return param_1;
}



// FUNCTION 14043b200 FUN_14043b200 body=22 status=ok
// SIG undefined FUN_14043b200(void)

void FUN_14043b200(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014043b211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14043b220 FUN_14043b220 body=21 status=ok
// SIG undefined FUN_14043b220(void)

void FUN_14043b220(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014043b231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14043b240 FUN_14043b240 body=209 status=ok
// SIG undefined FUN_14043b240(void)

void FUN_14043b240(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  LARGE_INTEGER local_res20;
  
  lVar2 = FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  uVar1 = local_res20.s.LowPart;
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af238);
  FRHICommandList::EndFrame(lVar2);
  uVar3 = FRealtimeGPUProfiler::Get();
  FRealtimeGPUProfiler::EndFrame(uVar3,lVar2);
  puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 2;
  if (*(undefined8 **)(lVar2 + 0x38) < puVar4) {
    FMemStackBase::AllocateNewChunk(lVar2 + 0x30,0x18);
    puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x30) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 2;
  }
  *(undefined8 **)(lVar2 + 0x30) = puVar4;
  *(int *)(lVar2 + 0x14) = *(int *)(lVar2 + 0x14) + 1;
  **(undefined8 **)(lVar2 + 8) = puVar5;
  *(undefined8 **)(lVar2 + 8) = puVar5 + 1;
  puVar5[1] = 0;
  *puVar5 = &PTR_LAB_143f3edf8;
  AK::MemoryMgr::StartProfileThreadUsage((long)puVar5);
  QueryPerformanceCounter(&local_res20);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res20.s.LowPart - uVar1);
  return;
}



// FUNCTION 14043b320 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Empty
               (longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 14043b3a0 Empty body=472 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<int,FShaderMapFinalizeResults>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar3) goto LAB_14043b471;
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
LAB_14043b471:
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
      lVar5 = (longlong)iStack_2c * 0x80 + *param_1;
      *(undefined4 *)(lVar5 + 0x70) = 0;
      if (*(longlong *)(lVar5 + 0x68) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<FVertexFactoryType_const_*,TArray<FShaderPipelineType_const_*,FDefaultAllocator>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                (lVar5 + 0x28);
      if (*(longlong *)(lVar5 + 0x10) != 0) {
        FMemory::Free();
      }
      local_30 = local_30 & ~uStack_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
    } while (iStack_2c < (int)puStack_38[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
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



// FUNCTION 14043b580 Empty body=405 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_14043b651;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_14043b651:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)(*param_1 + (longlong)iStack_1c * 0x18) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 14043b720 EnableSharedFromThis body=21 status=ok
// SIG undefined EnableSharedFromThis(void)

void SharedPointerInternals::EnableSharedFromThis(void)

{
  return;
}



// FUNCTION 14043b740 FUN_14043b740 body=419 status=ok
// SIG undefined FUN_14043b740(void)

void FUN_14043b740(void)

{
  undefined8 *puVar1;
  char cVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (DAT_14684ff26 != '\0') {
    if ((DAT_146ac3ac5 == '\0') &&
       (((cVar2 = FUN_1415ad720(&DAT_1468e2448), cVar2 != '\0' || (DAT_1468c21ae == '\0')) ||
        (DVar3 = GetCurrentThreadId(), DVar3 == DAT_1468c21c0)))) {
      FUN_14043b240(local_res8,2,local_res10);
      DAT_14684ff26 = 0;
      return;
    }
    pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
    plVar5 = TlsGetValue(*pDVar4);
    plVar8 = (longlong *)0x0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)operator_new(0x18);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = 0;
        plVar5[1] = 0;
        *(undefined4 *)(plVar5 + 2) = 0;
        plVar8 = plVar5;
      }
      TlsSetValue(*pDVar4,plVar8);
      plVar5 = plVar8;
    }
    plVar8 = (longlong *)plVar5[1];
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)*plVar5;
      if (plVar8 == (longlong *)0x0) {
        lVar6 = TLockFreePointerListLIFOPad<void_*,128>::Pop(pDVar4 + 2);
        plVar5[1] = lVar6;
        if (lVar6 == 0) {
          puVar7 = (undefined8 *)FMemory::Malloc(0x2000,0);
          plVar5[1] = (longlong)puVar7;
          lVar6 = 0x1f;
          do {
            puVar1 = puVar7 + 0x20;
            *puVar7 = puVar1;
            lVar6 = lVar6 + -1;
            puVar7 = puVar1;
          } while (lVar6 != 0);
          *puVar1 = 0;
        }
        plVar8 = (longlong *)plVar5[1];
        iVar9 = 0x20;
        *(undefined4 *)(plVar5 + 2) = 0x20;
      }
      else {
        iVar9 = 0x20;
        plVar5[1] = (longlong)plVar8;
        *(undefined4 *)(plVar5 + 2) = 0x20;
        *plVar5 = 0;
      }
    }
    else {
      iVar9 = (int)plVar5[2];
    }
    plVar5[1] = *plVar8;
    local_res18 = 0;
    *(int *)(plVar5 + 2) = iVar9 + -1;
    *(undefined4 *)(plVar8 + 1) = 0xff;
    *plVar8 = (longlong)&PTR_FUN_143f3edd8;
    local_res20 = 0;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_143f3f0d8;
    *(undefined1 *)((longlong)plVar8 + 0x11) = 0;
    plVar8[3] = 0;
    FUN_140445370(plVar8,0,0xff,1);
    DAT_14684ff26 = '\0';
  }
  return;
}



// FUNCTION 14043b960 ExecuteIfSafe body=21 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseFunctorDelegateInstance<void___cdecl(TArray<FString,FDefaultAllocator>_&),<lambda_410c8f539b1b18b398167d15ed82fd1a>_>
::ExecuteIfSafe(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x18))();
  return 1;
}



// FUNCTION 14043b980 ExecuteIfSafe body=14 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined1 TBaseStaticDelegateInstance<void___cdecl(void)>::ExecuteIfSafe(longlong param_1)

{
  (**(code **)(param_1 + 8))();
  return 1;
}



// FUNCTION 14043b990 ExecuteIfSafe body=35 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseStaticDelegateInstance<void___cdecl(bool,__int64,int)>::ExecuteIfSafe
          (longlong param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4)

{
  (**(code **)(param_1 + 8))(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 14043b9c0 ExecuteTask body=238 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<TEnqueueUniqueRenderCommandType<`FEngineLoop::Tick'::`7'::BeginFrameName,<lambda_8b7e82a525f135deee2954234f42f866>_>_>
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
  <lambda_8b7e82a525f135deee2954234f42f866>::operator()(param_1 + 2,uVar3);
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_143f3f218;
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



// FUNCTION 14043bab0 FUN_14043bab0 body=237 status=ok
// SIG undefined FUN_14043bab0(void)

void FUN_14043bab0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  FUN_14043b240(param_1 + 2,param_3,param_1 + 3);
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *param_1 = &PTR_FUN_143f3f0d8;
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



// FUNCTION 14043bba0 FUN_14043bba0 body=258 status=ok
// SIG undefined FUN_14043bba0(void)

void FUN_14043bba0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  DAT_14653517d = 1;
  FlushPendingDeleteRHIResources_RenderThread();
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_143f3f100;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
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



// FUNCTION 14043bcb0 FUN_14043bcb0 body=260 status=ok
// SIG undefined FUN_14043bcb0(void)

void FUN_14043bcb0(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  LARGE_INTEGER local_res8;
  LARGE_INTEGER local_res20;
  
  FBaseGraphTask::GetSmallTaskAllocator();
  QueryPerformanceCounter(&local_res20);
  FRHICommandListBase::WaitForTasks(&DAT_146ab6e78,0);
  QueryPerformanceCounter(&local_res8);
  DAT_146ac3af4 = DAT_146ac3af4 + (local_res8.s.LowPart - local_res20._0_4_);
  *param_1 = &PTR_FUN_143f3f120;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
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



// FUNCTION 14043bdc0 ExecuteTask body=252 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FExecuteConcurrentWithSlateTickTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  DWORD *pDVar3;
  longlong *lpTlsValue;
  longlong *plVar4;
  longlong *plVar5;
  
  (*(code *)param_1[2])(param_1[3]);
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_141591a60(param_1[5],param_2,param_3);
  *param_1 = &PTR_FUN_143f3f110;
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



// FUNCTION 14043bec0 ExecuteTask body=263 status=ok
// SIG undefined ExecuteTask(void)

void TGraphTask<FReturnGraphTask>::ExecuteTask
               (undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  DWORD *pDVar4;
  longlong *lpTlsValue;
  longlong *plVar5;
  
  plVar3 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar3 + 0x40))(plVar3,*(undefined4 *)(param_1 + 2));
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  FUN_141591a60(param_1[3],param_2,param_3);
  *param_1 = &PTR_FUN_143f3f038;
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
  pDVar4 = (DWORD *)FBaseGraphTask::GetSmallTaskAllocator();
  lpTlsValue = TlsGetValue(*pDVar4);
  plVar3 = (longlong *)0x0;
  if (lpTlsValue == (longlong *)0x0) {
    plVar5 = (longlong *)operator_new(0x18);
    lpTlsValue = plVar3;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = 0;
      plVar5[1] = 0;
      *(undefined4 *)(plVar5 + 2) = 0;
      lpTlsValue = plVar5;
    }
    TlsSetValue(*pDVar4,lpTlsValue);
  }
  if ((int)lpTlsValue[2] < 0x20) {
    plVar3 = (longlong *)lpTlsValue[1];
  }
  else {
    if (*lpTlsValue != 0) {
      TLockFreePointerListLIFOPad<void_*,128>::Push(pDVar4 + 2);
    }
    *lpTlsValue = lpTlsValue[1];
    lpTlsValue[1] = 0;
    *(undefined4 *)(lpTlsValue + 2) = 0;
  }
  *param_1 = plVar3;
  *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  lpTlsValue[1] = (longlong)param_1;
  return;
}



// FUNCTION 14043bfd0 FUN_14043bfd0 body=898 status=ok
// SIG undefined FUN_14043bfd0(void)

void FUN_14043bfd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [32];
  
  DAT_1468b6158 = 0;
  DAT_1468c2176 = 0;
  FUN_1416f7d70(0xffffffff);
  cVar7 = IStreamingManager::HasShutdown();
  if (cVar7 == '\0') {
    FUN_1428501d0();
    plVar8 = (longlong *)IStreamingManager::Get();
    (**(code **)(*plVar8 + 0x20))(plVar8,0,0);
  }
  puVar9 = *(undefined8 **)(param_1 + 0x40);
  if (puVar9 != (undefined8 *)0x0) {
    plVar8 = (longlong *)puVar9[3];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8,1);
        }
      }
    }
    iVar11 = *(int *)(puVar9 + 1);
    plVar8 = (longlong *)*puVar9;
    if (iVar11 != 0) {
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 2;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      plVar8 = (longlong *)*puVar9;
    }
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
    FMemory::operator_delete(puVar9,0x20);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    local_50 = (longlong *)0x0;
    if ((undefined8 *)(param_1 + 0x48) != &local_58) {
      *(undefined8 *)(param_1 + 0x48) = 0;
      local_58 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x50,&local_50);
      plVar8 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          iVar11 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)(*local_50 + 8))(local_50,1);
          }
        }
      }
    }
  }
  if (DAT_146af2450 != (undefined8 *)0x0) {
    FDistanceFieldAsyncQueue::Shutdown();
    if (DAT_146af2450 != (undefined8 *)0x0) {
      (**(code **)*DAT_146af2450)(DAT_146af2450,1);
    }
  }
  if (DAT_146b17150 != (longlong *)0x0) {
    (**(code **)(*DAT_146b17150 + 0x2a8))();
    if (DAT_146b17150 != (longlong *)0x0) {
      (**(code **)(*DAT_146b17150 + 0x2a0))();
    }
  }
  FUN_1418c3ff0(1);
  TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af070);
  cVar7 = FUN_1428b2230();
  if (cVar7 != '\0') {
    FEngineFontServices::Destroy();
  }
  puVar9 = (undefined8 *)FName::FName(local_res10,"AssetRegistry",1);
  uVar10 = FUN_14168dc80();
  FModuleManager::UnloadModule(uVar10,*puVar9,1);
  FUN_14043a2d0();
  TermGamePhys();
  FUN_142674d50();
  FUN_141ee6720();
  FUN_141a10350();
  FShaderCodeLibrary::Shutdown();
  uVar10 = FRealtimeGPUProfiler::Get();
  FRealtimeGPUProfiler::Release(uVar10);
  FUN_141a10300();
  cVar7 = FUN_141593710();
  if (cVar7 != '\0') {
    plVar8 = (longlong *)FTaskGraphInterface::Get();
    cVar7 = (**(code **)(*plVar8 + 0x20))(plVar8,0);
    if (cVar7 != '\0') {
      plVar8 = (longlong *)TGraphTask<FReturnGraphTask>::CreateTask(local_48,0,2);
      *(undefined4 *)(*plVar8 + 0x10) = 0;
      lVar5 = *plVar8;
      lVar6 = plVar8[2];
      lVar3 = plVar8[1];
      lVar4 = *(longlong *)(lVar5 + 0x18);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
        UNLOCK();
      }
      local_res8 = lVar4;
      FUN_1404458a0(lVar5,lVar3,(int)lVar6,1);
      uVar10 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar10,&local_res8,0x102);
      if (lVar4 != 0) {
        LOCK();
        piVar2 = (int *)(lVar4 + 0x48);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          FGraphEvent::Recycle(lVar4);
        }
      }
    }
  }
  RHIExit();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146850168) {
    _Init_thread_header(&DAT_146850168);
    if (DAT_146850168 == -1) {
      FName::FName(&DAT_146850160,"HotReload",1);
      _Init_thread_footer(&DAT_146850168);
    }
  }
  plVar8 = (longlong *)FModuleManager::GetModulePtr_Internal(DAT_146850160);
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x40))(plVar8);
  }
  uVar10 = FUN_14168dc80();
  FUN_141696410(uVar10);
  FUN_142010530();
  FTaskGraphInterface::Shutdown();
  FUN_1423e17d0();
  return;
}



// FUNCTION 14043c360 FindFirstSetBit body=161 status=ok
// SIG undefined FindFirstSetBit(void)

void TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 2);
  uVar4 = (ulonglong)(int)*param_1;
  uVar1 = *(uint *)(lVar2 + 0x18);
  lVar6 = *(longlong *)(lVar2 + 0x10);
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    lVar6 = lVar2;
  }
  uVar5 = *(uint *)(lVar6 + uVar4 * 4) & param_1[4];
  while( true ) {
    if (uVar5 != 0) {
      uVar5 = -uVar5 & uVar5;
      iVar3 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      param_1[1] = uVar5;
      if (uVar5 == 0) {
        iVar3 = 0x20;
      }
      else {
        iVar3 = 0x1f - iVar3;
      }
      uVar5 = (param_1[6] - iVar3) + 0x1f;
      if ((int)uVar1 < (int)uVar5) {
        uVar5 = uVar1;
      }
      param_1[5] = uVar5;
      return;
    }
    param_1[6] = param_1[6] + 0x20;
    uVar5 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar5;
    *param_1 = uVar5;
    if ((int)(((int)(uVar1 - 1) >> 0x1f & 0x1fU) + (uVar1 - 1)) >> 5 < (int)uVar5) break;
    uVar5 = *(uint *)(lVar6 + (longlong)(int)uVar5 * 4);
    param_1[4] = 0xffffffff;
  }
  param_1[5] = uVar1;
  return;
}



// FUNCTION 14043c410 FindId body=234 status=ok
// SIG undefined FindId(void)

int * TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindId
                (longlong *param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_143f3eda8;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    iVar2 = FUN_140438070(puVar5);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar7 = *param_1;
      do {
        lVar1 = (longlong)iVar2 * 0x18;
        if (*(int *)(param_3 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*param_3;
        }
        if (*(int *)(lVar1 + 8 + lVar7) == 0) {
          puVar6 = &DAT_143f3eda8;
        }
        else {
          puVar6 = *(undefined2 **)(lVar1 + lVar7);
        }
        iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar5);
        if (iVar3 == 0) {
          *param_2 = iVar2;
          return param_2;
        }
        lVar7 = *param_1;
        iVar2 = *(int *)(lVar1 + 0x10 + lVar7);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 14043c500 GameLoopIsStarved body=194 status=ok
// SIG undefined GameLoopIsStarved(void)

/* WARNING: Removing unreachable block (ram,0x00014043c5aa) */

void GameLoopIsStarved(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 in_R9;
  longlong *plVar4;
  
  FUN_141ee22f0();
  uVar3 = 0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20,0,in_R9,0);
  plVar4 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f188;
    plVar1[1] = (longlong)FUN_141ede5c0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f1d0;
  }
  AK::MemoryMgr::StartProfileThreadUsage((long)CONCAT71((int7)((ulonglong)uVar3 >> 8),1));
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar2 = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar2 = FMemory::Realloc(plVar4,0,0);
    }
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  return;
}



// FUNCTION 14043c5d0 GetAddress body=5 status=ok
// SIG undefined GetAddress(void)

longlong UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>::
         GetAddress(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14043c5e0 FUN_14043c5e0 body=11 status=ok
// SIG undefined FUN_14043c5e0(void)

undefined8 * FUN_14043c5e0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}



// FUNCTION 14043c5f0 FUN_14043c5f0 body=881 status=ok
// SIG undefined FUN_14043c5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14043c5f0(wchar_t *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  short sVar4;
  wchar_t _C;
  wint_t wVar5;
  wint_t wVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  undefined8 uVar12;
  longlong lVar13;
  short *psVar14;
  wchar_t *_Str1;
  undefined2 *puVar15;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  short *local_118;
  int local_110;
  undefined1 local_108 [8];
  LARGE_INTEGER local_100;
  longlong local_f8 [2];
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [24];
  undefined1 local_b8 [32];
  undefined1 local_98 [8];
  longlong *local_90;
  longlong *local_78;
  undefined1 local_4c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar9 = FUN_14164c050();
  TBaseMulticastDelegate<void>::Broadcast(uVar9);
  uVar9 = FDateTime::Now(local_108);
  puVar10 = (undefined8 *)FDateTime::ToString(uVar9,local_f8);
  if (*(int *)(puVar10 + 1) == 0) {
    puVar15 = &DAT_143f3eda8;
  }
  else {
    puVar15 = (undefined2 *)*puVar10;
  }
  uVar9 = FEngineVersion::Current();
  uVar7 = FEngineVersionBase::GetChangelist(uVar9);
  FString::PrintfImpl(&local_118,L"unreal-v%i-%s.dmp",uVar7,puVar15);
  psVar14 = &DAT_143f3eda8;
  if (local_110 != 0) {
    psVar14 = local_118;
  }
  lVar13 = (longlong)&DAT_1468b2810 - (longlong)psVar14;
  do {
    sVar4 = *psVar14;
    *(short *)(lVar13 + (longlong)psVar14) = sVar4;
    psVar14 = psVar14 + 1;
  } while (sVar4 != 0);
  if (local_118 != (short *)0x0) {
    FMemory::Free();
  }
  if (local_f8[0] != 0) {
    FMemory::Free();
  }
  pwVar11 = (wchar_t *)FCommandLine::RemoveExeName(param_1);
  if (param_1 != (wchar_t *)0x0) {
    wVar5 = towupper(0x2d);
    lVar13 = -1;
    do {
      lVar13 = lVar13 + 1;
    } while ((&DAT_143f39e58)[lVar13] != 0);
    _C = *param_1;
    while (_C != L'\0') {
      _Str1 = param_1 + 1;
      wVar6 = towupper(_C);
      if ((wVar6 == wVar5) &&
         (iVar8 = _wcsnicmp(_Str1,L"cmd",(longlong)((int)lVar13 + -1)), iVar8 == 0)) {
        if ((_Str1 != (wchar_t *)0x2) && (param_1 < pwVar11)) {
          DAT_14684ff20 = 1;
          goto LAB_14043c747;
        }
        break;
      }
      param_1 = _Str1;
      _C = *_Str1;
    }
  }
  DAT_14684ff20 = 0;
LAB_14043c747:
  iVar8 = FUN_140440800(&PTR_PTR_1461f6030,pwVar11);
  uVar9 = DAT_1468b6160;
  if ((iVar8 == 0) && (DAT_1468c217e == '\0')) {
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_e8,L"Loading...",L"EngineInit",L"EngineInit_Loading");
    local_128 = uVar9;
    FUN_141660a80(local_98,0x42c80000,uVar12,1);
    FSlowTask::Initialize(local_98);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        iVar8 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    uVar9 = FText::FText(local_d0);
    FSlowTask::EnterProgressFrame(local_98,0x42a00000,uVar9);
    uVar9 = FText::FText(local_b8);
    FSlowTask::EnterProgressFrame(local_98,0x41a00000,uVar9);
    iVar8 = FUN_140435e10(&PTR_PTR_1461f6030);
    FUN_14166a2b0(local_98);
    local_4c = 0;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_78 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      lVar13 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_90 + 8))(local_90,1);
        }
      }
    }
    QueryPerformanceCounter(&local_100);
    while (DAT_1468c217e == '\0') {
      FUN_140436490(&PTR_PTR_1461f6030);
    }
  }
  DAT_1468c217e = 1;
  FUN_14043bfd0(&PTR_PTR_1461f6030);
  return iVar8;
}



// FUNCTION 14043c970 GuardedMainWrapper body=46 status=ok
// SIG undefined GuardedMainWrapper(void)

void GuardedMainWrapper(void)

{
  if (DAT_1461f6018 != '\0') {
    FUN_14043c5f0();
    return;
  }
  FUN_14043c5f0();
  return;
}



// FUNCTION 14043c9b0 FUN_14043c9b0 body=266 status=ok
// SIG undefined FUN_14043c9b0(void)

void FUN_14043c9b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  longlong local_res10;
  
  plVar1 = (longlong *)(param_1 + 0x38);
  TRefCountPtr<FRHIIndexBuffer>::operator=(plVar1,0);
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*DAT_146ab6358 + 0x110))
              (DAT_146ab6358,&local_res10,*(longlong *)(param_1 + 0x40),&DAT_146b09668,
               *(undefined4 *)(param_1 + 0x30));
    if (plVar1 != &local_res10) {
      puVar4 = (undefined8 *)*plVar1;
      *plVar1 = local_res10;
      lVar7 = 0;
      local_res10 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          if ((*(char *)(puVar4 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
            LOCK();
            bVar8 = *(int *)((longlong)puVar4 + 0xc) == 0;
            if (bVar8) {
              *(int *)((longlong)puVar4 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar8) {
              uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar6 != 0) {
                lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar7 + 8) = puVar4;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
      }
    }
    TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
  }
  return;
}



// FUNCTION 14043cac0 FUN_14043cac0 body=286 status=ok
// SIG undefined FUN_14043cac0(void)

void FUN_14043cac0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  longlong local_res18 [2];
  
  if (DAT_146ab62c8 != '\0') {
    (**(code **)(*param_1 + 0x40))();
    plVar1 = param_1 + 7;
    TRefCountPtr<FRHIIndexBuffer>::operator=(plVar1,0);
    if (param_1[8] != 0) {
      (**(code **)(*DAT_146ab6358 + 0x110))
                (DAT_146ab6358,local_res18,param_1[8],&DAT_146b09668,(int)param_1[6]);
      if (plVar1 != local_res18) {
        puVar4 = (undefined8 *)*plVar1;
        *plVar1 = local_res18[0];
        lVar7 = 0;
        local_res18[0] = 0;
        if (puVar4 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar4 + 1);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            if ((*(char *)(puVar4 + 2) == '\0') &&
               ((DAT_146ab62f5 != '\0' ||
                (cVar5 = FOutputDevice::CanBeUsedOnAnyThread(), cVar5 == '\0')))) {
              LOCK();
              bVar8 = *(int *)((longlong)puVar4 + 0xc) == 0;
              if (bVar8) {
                *(int *)((longlong)puVar4 + 0xc) = 1;
              }
              UNLOCK();
              if (bVar8) {
                uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
                if (uVar6 != 0) {
                  lVar7 = (&DAT_1468a81f8)[uVar6 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
                }
                *(undefined8 **)(lVar7 + 8) = puVar4;
                FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
              }
            }
            else {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
        }
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_res18);
    }
  }
  return;
}



// FUNCTION 14043cbe0 FUN_14043cbe0 body=39 status=ok
// SIG undefined FUN_14043cbe0(void)

void FUN_14043cbe0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = FDefaultModuleImpl::vftable;
    return;
  }
  return;
}



// FUNCTION 14043cc10 InitializeStdOutDevice body=93 status=ok
// SIG undefined InitializeStdOutDevice(void)

void InitializeStdOutDevice(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = operator_new(0x18);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FOutputDeviceStdOutput::FOutputDeviceStdOutput(lVar3);
  }
  puVar2 = DAT_1468500b0;
  if (DAT_1468500b0 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*DAT_1468500b0;
    DAT_1468500b0 = (undefined8 *)uVar4;
    (*(code *)*puVar1)(puVar2,1);
    uVar4 = DAT_1468500b0;
  }
  DAT_1468500b0 = (undefined8 *)uVar4;
  uVar4 = DAT_1468500b0;
  uVar5 = FUN_141672640();
  FOutputDeviceRedirector::AddOutputDevice(uVar5,uVar4);
  return;
}



// FUNCTION 14043cc70 InvalidParameterHandler body=226 status=ok
// SIG undefined InvalidParameterHandler(void)

void InvalidParameterHandler(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,undefined4 param_4)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
  pwVar3 = L"Unknown";
  if (param_3 != (wchar_t *)0x0) {
    pwVar3 = param_3;
  }
  pwVar1 = L"Unknown";
  if (param_2 != (wchar_t *)0x0) {
    pwVar1 = param_2;
  }
  pwVar2 = L"Unknown";
  if (param_1 != (wchar_t *)0x0) {
    pwVar2 = param_1;
  }
  LowLevelFatalErrorHandler
            ("Unknown",0x5b,
             L"SECURE CRT: Invalid parameter detected.\nExpression: %s Function: %s. File: %s Line: %d\n"
             ,pwVar2,pwVar1,pwVar3,param_4);
  pwVar3 = L"Unknown";
  if (param_3 != (wchar_t *)0x0) {
    pwVar3 = param_3;
  }
  pwVar1 = L"Unknown";
  if (param_2 != (wchar_t *)0x0) {
    pwVar1 = param_2;
  }
  pwVar2 = L"Unknown";
  if (param_1 != (wchar_t *)0x0) {
    pwVar2 = param_1;
  }
  FDebug::AssertFailed
            ((longlong)L"(Engine Initialization) Total time: %.2f seconds" + 99,"Unknown",0x5b,
             L"SECURE CRT: Invalid parameter detected.\nExpression: %s Function: %s. File: %s Line: %d\n"
             ,pwVar2,pwVar1,pwVar3,param_4);
  return;
}



// FUNCTION 14043cd60 FUN_14043cd60 body=129 status=ok
// SIG undefined FUN_14043cd60(void)

ulonglong FUN_14043cd60(void)

{
  longlong lVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar5 = DAT_146b17150;
  if (DAT_146b17150 != 0) {
    lVar3 = FUN_142937670();
    lVar1 = *(longlong *)(lVar5 + 0x10);
    iVar2 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar2;
    if ((*(int *)(lVar1 + 0x90) < iVar2) ||
       (uVar4 = *(ulonglong *)(lVar1 + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar2 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      lVar5 = FUN_14244f660(lVar5);
      if (lVar5 != 0) {
        iVar2 = FUN_1428cf800(lVar5);
        return (ulonglong)CONCAT31((int3)(iVar2 - 1U >> 8),iVar2 - 1U < 2);
      }
      return 0xffffff00;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14043cdf0 FUN_14043cdf0 body=884 status=ok
// SIG undefined FUN_14043cdf0(void)

undefined8 FUN_14043cdf0(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_108 [24];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  
  *param_2 = 0;
  uVar2 = FPlatformFileManager::Get();
  plVar3 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar2);
  UCheatManagerGunfire::GetAllCheats(local_78,"ConditionallyCreateFileWrapper");
  UCheatManagerGunfire::GetAllCheats(local_a8,"ConditionallyCreateFileWrapper - Create PackFile");
  UCheatManagerGunfire::GetAllCheats(local_c0,"WrapperFile->GetPlatformFile");
  uVar2 = FPlatformFileManager::Get();
  plVar4 = (longlong *)FUN_1415dcff0(uVar2,L"PakFile");
  FUN_140591050(local_c0);
  if ((plVar4 == (longlong *)0x0) ||
     (cVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,plVar3,param_1), cVar1 == '\0')) {
    plVar4 = (longlong *)0x0;
  }
  else {
    UCheatManagerGunfire::GetAllCheats(local_108,"WrapperFile->Initialize");
    cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,plVar3,param_1);
    if (cVar1 == '\0') {
      plVar4 = (longlong *)0x0;
    }
    FUN_140591050(local_108);
  }
  plVar5 = (longlong *)0x0;
  FUN_140591050(local_a8);
  if (plVar4 != (longlong *)0x0) {
    UCheatManagerGunfire::GetAllCheats(local_108,"FPlatformFileManager Set Pltform PakFile");
    uVar2 = FPlatformFileManager::Get();
    FPlatformFileManager::SetPlatformFile(uVar2,plVar4);
    FUN_140591050(local_108);
    plVar3 = plVar4;
  }
  UCheatManagerGunfire::GetAllCheats
            (local_90,"ConditionallyCreateFileWrapper - Create CachedReadFile");
  UCheatManagerGunfire::GetAllCheats(local_108,"WrapperFile->GetPlatformFile");
  uVar2 = FPlatformFileManager::Get();
  plVar4 = (longlong *)FUN_1415dcff0(uVar2,L"CachedReadFile");
  FUN_140591050(local_108);
  plVar6 = plVar5;
  if ((plVar4 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,plVar3,param_1), cVar1 != '\0')) {
    UCheatManagerGunfire::GetAllCheats(local_f0,"WrapperFile->Initialize");
    cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,plVar3,param_1);
    if (cVar1 == '\0') {
      plVar4 = plVar5;
    }
    FUN_140591050(local_f0);
    plVar6 = plVar4;
  }
  FUN_140591050(local_90);
  if (plVar6 != (longlong *)0x0) {
    UCheatManagerGunfire::GetAllCheats(local_f0,"FPlatformFileManager Set Pltform CachedReadFile");
    uVar2 = FPlatformFileManager::Get();
    FPlatformFileManager::SetPlatformFile(uVar2,plVar6);
    FUN_140591050(local_f0);
    plVar3 = plVar6;
  }
  FUN_140591050(local_78);
  UCheatManagerGunfire::GetAllCheats(local_60,"FPlatformFileManager::Get().SandboxFile");
  UCheatManagerGunfire::GetAllCheats(local_f0,"WrapperFile->GetPlatformFile");
  uVar2 = FPlatformFileManager::Get();
  plVar4 = (longlong *)FUN_1415dcff0(uVar2,L"SandboxFile");
  FUN_140591050(local_f0);
  if ((plVar4 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,plVar3,param_1), cVar1 != '\0')) {
    UCheatManagerGunfire::GetAllCheats(local_d8,"WrapperFile->Initialize");
    cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,plVar3,param_1);
    if (cVar1 == '\0') {
      plVar4 = plVar5;
    }
    FUN_140591050(local_d8);
    if (plVar4 != (longlong *)0x0) {
      uVar2 = FPlatformFileManager::Get();
      FPlatformFileManager::SetPlatformFile(uVar2,plVar4);
      plVar3 = plVar4;
    }
  }
  FUN_140591050(local_60);
  UCheatManagerGunfire::GetAllCheats(local_30,"FPlatformFileManager::Get().LogFile");
  UCheatManagerGunfire::GetAllCheats(local_d8,"WrapperFile->GetPlatformFile");
  uVar2 = FPlatformFileManager::Get();
  plVar4 = (longlong *)FUN_1415dcff0(uVar2,L"LogFile");
  FUN_140591050(local_d8);
  if ((plVar4 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*plVar4 + 0x18))(plVar4,plVar3,param_1), cVar1 != '\0')) {
    UCheatManagerGunfire::GetAllCheats(local_48,"WrapperFile->Initialize");
    cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,plVar3,param_1);
    if (cVar1 == '\0') {
      plVar4 = plVar5;
    }
    FUN_140591050(local_48);
    if (plVar4 != (longlong *)0x0) {
      uVar2 = FPlatformFileManager::Get();
      FPlatformFileManager::SetPlatformFile(uVar2,plVar4);
      plVar3 = plVar4;
    }
  }
  FUN_140591050(local_30);
  uVar2 = FPlatformFileManager::Get();
  plVar4 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar2);
  *param_2 = plVar3 != plVar4;
  return 1;
}



// FUNCTION 14043d170 FUN_14043d170 body=1573 status=ok
// SIG undefined FUN_14043d170(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14043d170(void)

{
  int *piVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  wchar_t wVar5;
  wchar_t wVar6;
  char cVar7;
  wint_t wVar8;
  wint_t wVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  wchar_t *pwVar13;
  uint uVar14;
  short *psVar15;
  longlong lVar16;
  char *pcVar17;
  longlong lVar18;
  undefined2 *puVar19;
  wchar_t *_Source;
  undefined1 auStack_1e8 [32];
  wchar_t *local_1c8;
  wchar_t *local_1b8;
  int local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  ulonglong local_190;
  longlong local_188;
  undefined4 *local_178;
  ulonglong *puStack_170;
  longlong local_168;
  undefined1 local_160 [8];
  longlong *local_158;
  undefined8 local_148;
  longlong local_140;
  longlong local_138 [2];
  longlong local_128 [2];
  undefined1 local_118 [16];
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined4 local_98 [4];
  undefined1 local_88 [24];
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  cVar7 = FUN_1416755d0();
  if (cVar7 == '\0') {
    return;
  }
  plVar10 = (longlong *)FUN_1415c3d50();
  puVar11 = (undefined8 *)FUN_141672e70(local_128);
  _Source = L"";
  if (*(int *)(puVar11 + 1) == 0) {
    puVar19 = &DAT_143f3eda8;
  }
  else {
    puVar19 = (undefined2 *)*puVar11;
  }
  uVar12 = (**(code **)(*plVar10 + 0xf8))(plVar10,local_138,puVar19);
  FUN_141671940(&local_1b8,uVar12,1);
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  pwVar13 = L"";
  if (local_1b0 != 0) {
    pwVar13 = local_1b8;
  }
  lVar18 = (longlong)&DAT_146299580 - (longlong)pwVar13;
  do {
    wVar5 = *pwVar13;
    wVar6 = *(wchar_t *)((longlong)pwVar13 + lVar18);
    if (wVar5 != wVar6) break;
    pwVar13 = pwVar13 + 1;
  } while (wVar6 != L'\0');
  if ((wVar5 != wVar6) && ((DAT_146299580 == 0 || (DAT_14686c500 != '\0')))) {
    psVar15 = &DAT_146299580;
    pwVar13 = L"";
    if (local_1b0 != 0) {
      pwVar13 = local_1b8;
    }
    do {
      wVar8 = *(wint_t *)((longlong)(pwVar13 + -0xa314cac0) + (longlong)psVar15);
      if ((wVar8 == 0) && (*psVar15 == 0)) goto LAB_14043d2dc;
      if (wVar8 != *psVar15) {
        wVar8 = towlower(wVar8);
        wVar9 = towlower(*psVar15);
        if (wVar8 != wVar9) goto LAB_14043d2d0;
      }
      psVar15 = psVar15 + 1;
    } while( true );
  }
LAB_14043d741:
  if (local_1b8 != (wchar_t *)0x0) {
    FMemory::Free(local_1b8);
  }
  return;
LAB_14043d2d0:
  if (wVar8 == wVar9) {
LAB_14043d2dc:
    if (local_1b0 != 0) {
      _Source = local_1b8;
    }
    wcsncpy(&DAT_146299580,_Source,0x3f);
    _DAT_1462995fe = 0;
  }
  else {
    local_198 = 0;
    local_190 = 0;
    lVar18 = -1;
    lVar16 = lVar18;
    if (DAT_146299580 != 0) {
      do {
        lVar16 = lVar16 + 1;
      } while ((&DAT_146299580)[lVar16] != 0);
      uVar14 = (int)lVar16 + 1;
      local_190 = (ulonglong)uVar14;
      if (0 < (int)uVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,0);
      }
      FGenericPlatformString::Memcpy(local_198,&DAT_146299580,(longlong)(int)uVar14 * 2);
    }
    local_1a0 = 0;
    pwVar13 = L"";
    if (local_1b0 != 0) {
      pwVar13 = local_1b8;
    }
    local_1a8 = 0;
    if ((pwVar13 != (wchar_t *)0x0) && (*pwVar13 != L'\0')) {
      do {
        lVar18 = lVar18 + 1;
      } while (pwVar13[lVar18] != L'\0');
      uVar14 = (int)lVar18 + 1;
      local_1a0 = (ulonglong)uVar14;
      if (0 < (int)uVar14) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,0);
      }
      FGenericPlatformString::Memcpy(local_1a8,pwVar13,(longlong)(int)uVar14 * 2);
    }
    lVar18 = FText::FromString(local_c8,&local_198);
    local_168 = lVar18;
    lVar16 = FText::FromString(local_b0,&local_1a8);
    local_188 = lVar16;
    uVar12 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_f0,
                        L"The name of the .uproject file (\'{0}\') must match the name of the project passed in the command line (\'{1}\')."
                        ,L"Core",L"MismatchedGameNames");
    puVar11 = (undefined8 *)FTextFormat::FTextFormat(local_d8,uVar12);
    local_98[0] = 4;
    FText::FText(local_88,lVar16);
    local_70 = 1;
    local_68 = 4;
    FText::FText(local_58,lVar18);
    local_178 = local_98;
    local_40 = 1;
    puStack_170 = local_38;
    local_148 = *puVar11;
    local_140 = puVar11[1];
    if (local_140 != 0) {
      LOCK();
      *(int *)(local_140 + 8) = *(int *)(local_140 + 8) + 1;
      UNLOCK();
    }
    uVar12 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_118,&local_178);
    uVar12 = FText::Format(local_108,&local_148,uVar12);
    FText::FText(local_160,uVar12);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_100 + 1;
      lVar18 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_118);
    lVar18 = 2;
    pcVar17 = &stack0xfffffffffffffff0;
    do {
      lVar18 = lVar18 + -1;
      pcVar2 = pcVar17 + -0x30;
      if (*pcVar2 != '\0') {
        *pcVar2 = '\0';
        plVar10 = *(longlong **)(pcVar17 + -0x40);
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar10 + 1;
          lVar16 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar16 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
      pcVar17 = pcVar2;
    } while (lVar18 != 0);
    plVar10 = (longlong *)puVar11[1];
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar10 + 1;
      lVar18 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    plVar10 = *(longlong **)(local_188 + 8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar10 + 1;
      lVar18 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    plVar10 = *(longlong **)(local_168 + 8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar10 + 1;
      lVar18 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    if (local_e8 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_e8 + 1;
      lVar18 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_e8)(local_e8);
        LOCK();
        piVar1 = (int *)((longlong)local_e8 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_e8 + 8))(local_e8,1);
        }
      }
    }
    if (local_1a8 != 0) {
      FMemory::Free();
    }
    if (local_198 != 0) {
      FMemory::Free();
    }
    if (DAT_1468c2178 == '\0') {
      FUN_1416786b0(0,local_160,0);
    }
    wcsncpy(&DAT_146299580,L"",0x3f);
    _DAT_1462995fe = 0;
    if (DAT_1468c2178 == '\0') {
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    puVar11 = (undefined8 *)FText::ToString(local_160);
    if (*(int *)(puVar11 + 1) == 0) {
      puVar19 = &DAT_143f3eda8;
    }
    else {
      puVar19 = (undefined2 *)*puVar11;
    }
    LowLevelFatalErrorHandler("Unknown",0x296,&DAT_143f3be50,puVar19);
    puVar11 = (undefined8 *)FText::ToString(local_160);
    if (*(int *)(puVar11 + 1) != 0) {
      _Source = (wchar_t *)*puVar11;
    }
    local_1c8 = _Source;
    FDebug::AssertFailed(&DAT_143f39fae,"Unknown",0x296,&DAT_143f3be60);
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_158 + 1;
      lVar18 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_158 + 8))(local_158,1);
        }
      }
    }
  }
  goto LAB_14043d741;
}



// FUNCTION 14043d7a0 LaunchHasIncompleteGameName body=593 status=ok
// SIG undefined LaunchHasIncompleteGameName(void)

undefined8 LaunchHasIncompleteGameName(void)

{
  int iVar1;
  char cVar2;
  wint_t wVar3;
  wint_t wVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined2 *puVar13;
  undefined2 *local_38;
  int local_30;
  int local_2c;
  undefined2 *local_28;
  int local_20;
  int local_1c;
  ulonglong uVar12;
  
  if (DAT_146299580 == 0) {
    return 0;
  }
  lVar10 = 0;
  do {
    wVar3 = *(wint_t *)((longlong)&DAT_146299580 + lVar10);
    if ((wVar3 == 0) && (*(short *)((longlong)&DAT_143f3edc8 + lVar10) == 0)) {
      return 0;
    }
    if (wVar3 != *(wint_t *)((longlong)&DAT_143f3edc8 + lVar10)) {
      wVar3 = towlower(wVar3);
      wVar4 = towlower(*(wint_t *)((longlong)&DAT_143f3edc8 + lVar10));
      if (wVar3 != wVar4) {
        if (wVar3 == wVar4) {
          return 0;
        }
        cVar2 = FUN_1416755d0();
        if (cVar2 != '\0') {
          return 0;
        }
        puVar5 = (undefined8 *)FPaths::RootDir(&local_28);
        uVar11 = 0xffffffffffffffff;
        do {
          uVar12 = uVar11;
          uVar11 = uVar12 + 1;
        } while ((&DAT_146299580)[uVar11] != 0);
        if ((*(int *)(puVar5 + 1) != 0) || (iVar8 = 2, (int)uVar12 == -2)) {
          iVar8 = 1;
        }
        local_38 = (undefined2 *)*puVar5;
        *puVar5 = 0;
        local_30 = *(int *)(puVar5 + 1);
        local_2c = *(int *)((longlong)puVar5 + 0xc);
        puVar5[1] = 0;
        if (local_2c < iVar8 + (int)uVar11 + local_30) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_38);
        }
        FString::PathAppend(&local_38,&DAT_146299580,uVar11 & 0xffffffff);
        if (local_28 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        uVar6 = FPlatformFileManager::Get();
        plVar7 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar6);
        puVar9 = &DAT_143f3eda8;
        if (local_30 != 0) {
          puVar9 = local_38;
        }
        cVar2 = (**(code **)(*plVar7 + 0xd0))(plVar7,puVar9);
        puVar9 = local_38;
        if (cVar2 == '\0') {
          lVar10 = (longlong)local_30;
          local_28 = (undefined2 *)0x0;
          local_20 = local_30;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (&local_28,(5 - (uint)(local_30 != 0)) + local_30,0);
          puVar13 = local_28;
          _guard_xfg_dispatch_icall_nop(local_28,puVar9,lVar10 * 2);
          iVar8 = local_20;
          lVar10 = (longlong)local_20;
          local_20 = (5 - (uint)(local_20 != 0)) + local_20;
          if (local_1c < local_20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,iVar8);
            puVar13 = local_28;
          }
          iVar1 = local_20;
          builtin_wcsncpy(puVar13 + (lVar10 - (ulonglong)(iVar8 != 0)),L"Game",5);
          uVar6 = FPlatformFileManager::Get();
          plVar7 = (longlong *)FPlatformFileManager::GetPlatformFile(uVar6);
          puVar9 = &DAT_143f3eda8;
          if (iVar1 != 0) {
            puVar9 = puVar13;
          }
          cVar2 = (**(code **)(*plVar7 + 0xd0))(plVar7,puVar9);
          if (cVar2 != '\0') {
            if (puVar13 != (undefined2 *)0x0) {
              FMemory::Free(puVar13);
            }
            if (local_38 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            return 1;
          }
          if (puVar13 != (undefined2 *)0x0) {
            FMemory::Free(puVar13);
          }
        }
        if (local_38 == (undefined2 *)0x0) {
          return 0;
        }
        FMemory::Free();
        return 0;
      }
    }
    lVar10 = lVar10 + 2;
  } while( true );
}



// FUNCTION 14043da00 FUN_14043da00 body=2047 status=ok
// SIG undefined FUN_14043da00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14043da00(undefined8 param_1,wchar_t **param_2)

{
  wchar_t _C;
  char cVar1;
  wint_t wVar2;
  wint_t wVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 *puVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  wint_t *pwVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  ulonglong local_c0;
  int local_b8;
  wchar_t *local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  ulonglong local_90;
  wchar_t *local_88;
  longlong local_80 [2];
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  wchar_t *local_58;
  wchar_t *local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (DAT_14686c500 != '\0') {
    wcsncpy(&DAT_146299580,L"",0x3f);
    pwVar10 = (wchar_t *)0x0;
    _DAT_1462995fe = 0;
    local_98 = (wchar_t *)0x0;
    local_90 = 0;
    local_d8 = (wchar_t *)0x0;
    local_d0 = 0;
    cVar1 = ParseGameProjectFromCommandLine(param_1,&local_98,&local_d8);
    pwVar6 = local_d8;
    if (cVar1 != '\x01') {
      pwVar6 = (wchar_t *)FWindowsPlatformProcess::ExecutableName(1);
      iVar9 = 0;
      if (local_d8 == pwVar6) {
        pwVar7 = local_d8;
        uVar18 = (uint)local_d0;
      }
      else {
        pwVar7 = pwVar10;
        if ((pwVar6 != (wchar_t *)0x0) && (*pwVar6 != L'\0')) {
          lVar14 = -1;
          do {
            lVar14 = lVar14 + 1;
          } while (pwVar6[lVar14] != L'\0');
          pwVar7 = (wchar_t *)(ulonglong)((int)lVar14 + 1);
        }
        uVar4 = local_d0._4_4_;
        local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
        uVar12 = (uint)pwVar7;
        pwVar11 = pwVar10;
        if (uVar4 != uVar12) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_d8,pwVar7);
          pwVar11 = (wchar_t *)(local_d0 & 0xffffffff);
          uVar4 = local_d0._4_4_;
        }
        uVar18 = uVar12 + (int)pwVar11;
        local_d0 = CONCAT44(local_d0._4_4_,uVar18);
        if ((int)uVar4 < (int)uVar18) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8);
          uVar18 = (uint)local_d0;
        }
        pwVar7 = local_d8;
        if (uVar12 != 0) {
          _guard_xfg_dispatch_icall_nop(local_d8,pwVar6,(longlong)(int)uVar12 * 2);
        }
      }
      for (pwVar11 = pwVar7; pwVar6 = pwVar7, pwVar11 != pwVar7 + (int)uVar18; pwVar11 = pwVar11 + 1
          ) {
        if (*pwVar11 == L'-') {
          iVar17 = (int)((longlong)pwVar11 - (longlong)pwVar7 >> 1);
          if (iVar17 != -1) {
            if (uVar18 == 0) {
              local_a0 = L"";
              iVar13 = iVar9;
            }
            else {
              iVar13 = uVar18 - 1;
              local_a0 = pwVar7;
            }
            iVar5 = iVar9;
            if ((-1 < iVar17) && (iVar5 = iVar13, iVar17 < iVar13)) {
              iVar5 = iVar17;
            }
            local_c8 = (wchar_t *)0x0;
            uVar18 = iVar5 + 1;
            if (iVar5 == 0) {
              uVar18 = 0;
            }
            local_c0 = (ulonglong)uVar18;
            pwVar6 = pwVar10;
            if (0 < (int)uVar18) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_c8,0);
              pwVar6 = local_c8;
              uVar18 = (uint)local_c0;
              if (0 < (int)(uint)local_c0) {
                wcsncpy(local_c8,local_a0,(longlong)iVar5);
                pwVar6[iVar5] = L'\0';
              }
            }
            if (pwVar7 != (wchar_t *)0x0) {
              FMemory::Free(pwVar7);
            }
          }
          break;
        }
      }
      pwVar7 = L"";
      if (uVar18 != 0) {
        pwVar7 = pwVar6;
      }
      wcsncpy(&DAT_146299580,pwVar7,0x3f);
      _DAT_1462995fe = 0;
      pwVar15 = &DAT_143f3b8c8;
      pwVar7 = L"";
      if (uVar18 != 0) {
        pwVar7 = pwVar6;
      }
      pwVar7 = pwVar7 + -0xa1f9dc64;
      local_a0 = pwVar7;
      do {
        wVar2 = *(wint_t *)((longlong)pwVar7 + (longlong)pwVar15);
        if ((wVar2 == 0) && (*pwVar15 == 0)) goto LAB_14043df50;
        if (wVar2 != *pwVar15) {
          wVar2 = towlower(wVar2);
          wVar3 = towlower(*pwVar15);
          pwVar7 = local_a0;
          if (wVar2 != wVar3) goto LAB_14043dcbb;
        }
        pwVar15 = pwVar15 + 1;
      } while( true );
    }
    pwVar7 = L"";
    if ((uint)local_d0 != 0) {
      pwVar7 = local_d8;
    }
    wcsncpy(&DAT_146299580,pwVar7,0x3f);
    pwVar7 = local_98;
    _DAT_1462995fe = 0;
    if (param_2 != &local_98) {
      lVar14 = (longlong)(int)local_90;
      *(int *)(param_2 + 1) = (int)local_90;
      if (((int)local_90 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_90 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(*param_2,pwVar7,lVar14 * 2);
      }
    }
    goto LAB_14043df47;
  }
  lVar14 = 0;
  local_c8 = (wchar_t *)0x0;
  local_c0 = 0;
  local_b0 = (wchar_t *)0x0;
  local_a8 = 0;
  cVar1 = ParseGameProjectFromCommandLine(param_1,&local_c8,&local_b0);
  pwVar6 = local_b0;
  if (cVar1 == '\x01') {
    pwVar15 = (wint_t *)&DAT_146299580;
    pwVar6 = L"";
    if ((int)local_a8 != 0) {
      pwVar6 = local_b0;
    }
    do {
      wVar2 = *(wint_t *)((longlong)(pwVar6 + -0xa314cac0) + (longlong)pwVar15);
      if ((wVar2 == 0) && (*pwVar15 == 0)) goto LAB_14043e0c5;
      if (wVar2 != *pwVar15) {
        wVar2 = towlower(wVar2);
        wVar3 = towlower(*pwVar15);
        if (wVar2 != wVar3) goto LAB_14043e082;
      }
      pwVar15 = pwVar15 + 1;
    } while( true );
  }
  goto LAB_14043e135;
LAB_14043dcbb:
  if (wVar2 != wVar3) {
    local_d8 = (wchar_t *)0x0;
    local_d0._0_4_ = uVar18;
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_d8,(2 - (uint)(uVar18 != 0)) + uVar18,0)
    ;
    pwVar7 = local_d8;
    local_a0 = local_d8;
    _guard_xfg_dispatch_icall_nop(local_d8,pwVar6,(longlong)(int)uVar18 * 2);
    uVar4 = (uint)local_d0;
    lVar14 = (longlong)(int)(uint)local_d0;
    iVar17 = (2 - (uint)((uint)local_d0 != 0)) + (uint)local_d0;
    local_d0 = CONCAT44(local_d0._4_4_,iVar17);
    if ((int)local_d0._4_4_ < iVar17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_d8,uVar4);
      local_a0 = local_d8;
      pwVar7 = local_d8;
      iVar17 = (uint)local_d0;
    }
    pwVar7[lVar14 - (ulonglong)(uVar4 != 0)] = L'.';
    (pwVar7 + (lVar14 - (ulonglong)(uVar4 != 0)))[1] = L'\0';
    puVar8 = (undefined8 *)FUN_1416bb0a0(local_80);
    if (iVar17 < 2) {
      pwVar7 = (wchar_t *)*puVar8;
      *puVar8 = 0;
      iVar5 = *(int *)(puVar8 + 1);
      puVar8[1] = 0;
    }
    else {
      iVar13 = *(int *)(puVar8 + 1) + -1;
      if (*(int *)(puVar8 + 1) == 0) {
        iVar13 = iVar9;
      }
      if ((iVar17 != 0) || (pwVar7 = (wchar_t *)0x1, iVar13 == 0)) {
        pwVar7 = pwVar10;
      }
      iVar5 = iVar13 + (int)pwVar7 + iVar17;
      local_88 = local_d8;
      local_b0 = local_d8;
      local_a0 = (wchar_t *)0x0;
      local_a8 = CONCAT44(local_d0._4_4_,iVar17);
      iVar9 = local_d0._4_4_;
      local_b8 = iVar13;
      if ((int)local_d0._4_4_ < iVar5) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b0,iVar5);
        iVar17 = (int)local_a8;
        iVar9 = local_a8._4_4_;
      }
      local_d8 = (wchar_t *)*puVar8;
      pwVar7 = local_b0;
      iVar5 = iVar17;
      local_88 = local_b0;
      if (iVar13 != 0) {
        iVar5 = iVar17 + (uint)(iVar17 == 0) + iVar13;
        local_a8 = CONCAT44(local_a8._4_4_,iVar5);
        if (iVar9 < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_b0,iVar17);
          local_88 = local_b0;
          iVar5 = (int)local_a8;
        }
        pwVar7 = local_88 + ((longlong)iVar17 - (ulonglong)(iVar17 != 0));
        lVar14 = (longlong)local_b8;
        local_b0 = local_88;
        _guard_xfg_dispatch_icall_nop(pwVar7,local_d8,lVar14 * 2);
        pwVar7[lVar14] = L'\0';
        pwVar7 = local_88;
      }
    }
    local_c8 = (wchar_t *)0x0;
    local_c0 = 0;
    local_70 = &DAT_143f3b768;
    local_50 = L"";
    if (iVar5 != 0) {
      local_50 = pwVar7;
    }
    local_68 = &DAT_143f3a9cc;
    local_58 = L"";
    if (uVar18 != 0) {
      local_58 = pwVar6;
    }
    local_60 = &DAT_143f3a95c;
    FPaths::CombineInternal(&local_c8,&local_70,5);
    if (local_98 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    local_90 = local_c0;
    iVar9 = (uint)local_c0;
    local_98 = local_c8;
    local_c0 = 0;
    local_c8 = (wchar_t *)0x0;
    if (pwVar7 != (wchar_t *)0x0) {
      FMemory::Free(pwVar7);
      iVar9 = (int)local_90;
    }
    if (local_a0 != (wchar_t *)0x0) {
      FMemory::Free(local_a0);
      iVar9 = (int)local_90;
    }
    if (local_80[0] != 0) {
      FMemory::Free();
      iVar9 = (int)local_90;
    }
    pwVar7 = local_98;
    if (param_2 != &local_98) {
      *(int *)(param_2 + 1) = iVar9;
      if ((iVar9 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,iVar9);
        _guard_xfg_dispatch_icall_nop(*param_2,pwVar7,(longlong)iVar9 * 2);
      }
    }
LAB_14043df47:
    FUN_141680d90(&local_98);
  }
LAB_14043df50:
  if (DAT_14685017c == '\0') {
    DAT_14685017c = '\x01';
    if (DAT_146299580 != 0) {
      do {
        _C = pwVar10[0xa314cac0];
        if ((_C == L'\0') && (pwVar10[0xa1f9f6e4] == L'\0')) break;
        if (_C != pwVar10[0xa1f9f6e4]) {
          wVar2 = towlower(_C);
          wVar3 = towlower(pwVar10[0xa1f9f6e4]);
          if (wVar2 != wVar3) goto LAB_14043dfa8;
        }
        pwVar10 = pwVar10 + 1;
      } while( true );
    }
    goto LAB_14043dfb2;
  }
  goto LAB_14043dfea;
LAB_14043dfa8:
  if (wVar2 == wVar3) {
LAB_14043dfb2:
    LowLevelFatalErrorHandler
              ("Unknown",0x249,
               L"Non-agnostic games on cooked platforms require a uproject file be specified.");
    FDebug::AssertFailed
              (&DAT_143f39f27,"Unknown",0x249,
               L"Non-agnostic games on cooked platforms require a uproject file be specified.");
  }
LAB_14043dfea:
  pwVar10 = local_98;
  if (pwVar6 != (wchar_t *)0x0) {
    FMemory::Free(pwVar6);
    pwVar10 = local_98;
  }
  goto LAB_14043e1cc;
LAB_14043e179:
  if (wVar2 == wVar3) goto LAB_14043e183;
  goto LAB_14043e1bb;
LAB_14043e082:
  if (wVar2 != wVar3) {
    LowLevelFatalErrorHandler
              ("Unknown",0x25d,
               L"Non-agnostic games cannot load projects on cooked platforms - try running UE4Game."
              );
    FDebug::AssertFailed
              (&DAT_143f39f93,"Unknown",0x25d,
               L"Non-agnostic games cannot load projects on cooked platforms - try running UE4Game."
              );
  }
LAB_14043e0c5:
  pwVar6 = local_b0;
  pwVar10 = L"";
  if ((int)local_a8 != 0) {
    pwVar10 = local_b0;
  }
  wcsncpy(&DAT_146299580,pwVar10,0x3f);
  pwVar10 = local_c8;
  _DAT_1462995fe = 0;
  if (param_2 != &local_c8) {
    lVar16 = (longlong)(int)(uint)local_c0;
    *(uint *)(param_2 + 1) = (uint)local_c0;
    if (((uint)local_c0 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_c0 & 0xffffffff);
      _guard_xfg_dispatch_icall_nop(*param_2,pwVar10,lVar16 * 2);
    }
  }
  FUN_141680d90(&local_c8);
LAB_14043e135:
  if (DAT_146299580 != 0) {
    do {
      wVar2 = *(wint_t *)((longlong)&DAT_146299580 + lVar14);
      if ((wVar2 == 0) && (*(short *)((longlong)&DAT_143f3edc8 + lVar14) == 0)) break;
      if (wVar2 != *(wint_t *)((longlong)&DAT_143f3edc8 + lVar14)) {
        wVar2 = towlower(wVar2);
        wVar3 = towlower(*(wint_t *)((longlong)&DAT_143f3edc8 + lVar14));
        if (wVar2 != wVar3) goto LAB_14043e179;
      }
      lVar14 = lVar14 + 2;
    } while( true );
  }
LAB_14043e183:
  LowLevelFatalErrorHandler("Unknown",0x26c,L"Could not set game name!");
  FDebug::AssertFailed(&DAT_143f39f96,"Unknown",0x26c,L"Could not set game name!");
LAB_14043e1bb:
  pwVar10 = local_c8;
  if (pwVar6 != (wchar_t *)0x0) {
    FMemory::Free(pwVar6);
    pwVar10 = local_c8;
  }
LAB_14043e1cc:
  if (pwVar10 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 14043e200 FUN_14043e200 body=1713 status=ok
// SIG undefined FUN_14043e200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14043e200(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  undefined1 local_198 [8];
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  undefined1 local_158 [8];
  longlong *local_150;
  undefined1 local_140 [24];
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined1 local_f8 [24];
  undefined1 local_e0 [24];
  undefined1 local_c8 [24];
  undefined1 local_b0 [24];
  undefined1 local_98 [8];
  longlong *local_90;
  longlong *local_78;
  undefined1 local_4c;
  ulonglong local_28;
  
  uVar7 = DAT_1468b6160;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  uVar6 = FText::FText(local_158);
  local_258 = uVar7;
  FUN_141660a80(local_98,0x42c80000,uVar6,1);
  FSlowTask::Initialize(local_98);
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_150 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar2 = (int *)((longlong)local_150 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_150 + 8))(local_150,1);
      }
    }
  }
  uVar7 = FText::FText(local_140);
  FSlowTask::EnterProgressFrame(local_98,0x41200000,uVar7);
  puVar8 = (undefined8 *)FName::FName(local_1a8,L"Core",1);
  uVar7 = FUN_14168dc80();
  FUN_141690010(uVar7,*puVar8);
  puVar8 = (undefined8 *)FName::FName(local_1a0,L"Networking",1);
  uVar7 = FUN_14168dc80();
  FUN_141690010(uVar7,*puVar8);
  uVar7 = FText::FText(local_128);
  FSlowTask::EnterProgressFrame(local_98,0x41200000,uVar7);
  FWindowsPlatformApplicationMisc::LoadStartupModules();
  uVar7 = FText::FText(local_110);
  FSlowTask::EnterProgressFrame(local_98,0x41200000,uVar7);
  cVar5 = FUN_1415bac00();
  if (cVar5 != '\0') {
    puVar8 = (undefined8 *)FName::FName(local_198,"Messaging",1);
    uVar7 = *puVar8;
    uVar6 = FUN_14168dc80();
    FUN_141690010(uVar6,uVar7);
  }
  puVar8 = (undefined8 *)FName::FName(local_190,"MRMesh",1);
  uVar7 = *puVar8;
  uVar6 = FUN_14168dc80();
  FUN_141690010(uVar6,uVar7);
  uVar7 = FText::FText(local_f8);
  FSlowTask::EnterProgressFrame(local_98,0x41200000,uVar7);
  uVar7 = FText::FText(local_e0);
  FSlowTask::EnterProgressFrame(local_98,0x41200000,uVar7);
  puVar8 = (undefined8 *)FName::FName(local_188,"Slate",1);
  uVar7 = FUN_14168dc80();
  FUN_141690010(uVar7,*puVar8);
  puVar8 = (undefined8 *)FName::FName(local_180,&DAT_143f3a944,1);
  uVar7 = FUN_14168dc80();
  FUN_141690010(uVar7,*puVar8);
  uVar7 = FText::FText(local_c8);
  FSlowTask::EnterProgressFrame(local_98,0x41a00000,uVar7);
  uVar7 = FText::FText(local_b0);
  FSlowTask::EnterProgressFrame(local_98,0x41f00000,uVar7);
  puVar8 = (undefined8 *)FName::FName(local_178,L"Overlay",1);
  uVar7 = FUN_14168dc80();
  FUN_141690010(uVar7,*puVar8);
  puVar8 = (undefined8 *)FName::FName(local_170,L"MediaAssets",1);
  uVar7 = FUN_14168dc80();
  FUN_141690010(uVar7,*puVar8);
  puVar8 = (undefined8 *)FName::FName(local_168,L"ClothingSystemRuntime",1);
  uVar7 = FUN_14168dc80();
  FUN_141690010(uVar7,*puVar8);
  puVar8 = (undefined8 *)FName::FName(local_160,L"PacketHandler",1);
  uVar7 = FUN_14168dc80();
  FUN_141690010(uVar7,*puVar8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146850130) {
    _Init_thread_header(&DAT_146850130);
    if (DAT_146850130 == -1) {
      FName::FName(&DAT_146850128,L"GbxPerfAnalytics",1);
      _Init_thread_footer(&DAT_146850130);
    }
  }
  uVar7 = DAT_146850128;
  uVar6 = FUN_14168dc80();
  FUN_141690010(uVar6,uVar7);
  FUN_1415abb40();
  FUN_142484ab0();
  local_240 = 0xb;
  local_248 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,0);
  FGenericPlatformString::Memcpy(local_248,L"PrePhysics",0x16);
  FUN_1415ac2c0(0,0,&local_248);
  local_238 = 0;
  local_230 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,0);
  FGenericPlatformString::Memcpy(local_238,L"StartPhysics",0x1a);
  FUN_1415ac2c0(0,1,&local_238);
  local_228 = 0;
  local_220 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
  FGenericPlatformString::Memcpy(local_228,L"DuringPhysics",0x1c);
  FUN_1415ac2c0(0,2,&local_228);
  local_218 = 0;
  local_210 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
  FGenericPlatformString::Memcpy(local_218,L"EndPhysics",0x16);
  FUN_1415ac2c0(0,3,&local_218);
  local_208 = 0;
  local_200 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
  FGenericPlatformString::Memcpy(local_208,L"PostPhysics",0x18);
  FUN_1415ac2c0(0,4,&local_208);
  local_1f8 = 0;
  local_1f0 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1f8,0);
  FGenericPlatformString::Memcpy(local_1f8,L"PostUpdateWork",0x1e);
  FUN_1415ac2c0(0,5,&local_1f8);
  local_1e8 = 0;
  local_1e0 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1e8,0);
  FGenericPlatformString::Memcpy(local_1e8,L"LastDemotable",0x1c);
  FUN_1415ac2c0(0,6,&local_1e8);
  local_1d8 = 0;
  local_1d0 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,0);
  FGenericPlatformString::Memcpy(local_1d8,L"NewlySpawned",0x1a);
  FUN_1415ac2c0(0,7,&local_1d8);
  local_1c8 = 0;
  local_1c0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1c8,0);
  FGenericPlatformString::Memcpy(local_1c8,L"Undefined",0x14);
  FUN_1415ac2c0(1,0,&local_1c8);
  local_1b8 = 0;
  local_1b0 = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,0);
  FGenericPlatformString::Memcpy(local_1b8,L"Undefined",0x14);
  FUN_1415ac2c0(2,0,&local_1b8);
  FUN_14166a2b0(local_98);
  local_4c = 0;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)local_78 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_78 + 8))(local_78,1);
      }
    }
  }
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_90 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_90 + 8))(local_90,1);
      }
    }
  }
  return 1;
}



// FUNCTION 14043e8c0 LoadStartupModules body=603 status=ok
// SIG undefined LoadStartupModules(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FEngineLoop::LoadStartupModules(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [8];
  longlong *local_80;
  longlong *local_68;
  undefined1 local_3c;
  ulonglong local_18;
  
  uVar6 = DAT_1468b6160;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar5 = FText::FText(local_e8);
  local_f8 = uVar6;
  FUN_141660a80(local_88,0x40400000,uVar5,1);
  FSlowTask::Initialize(local_88);
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_e0 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  uVar6 = FText::FText(local_d0);
  FSlowTask::EnterProgressFrame(local_88,0x3f800000,uVar6);
  plVar7 = (longlong *)IProjectManager::Get();
  cVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,3);
  if (cVar4 != '\0') {
    plVar7 = (longlong *)FUN_1416ba600();
    cVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,3);
    if (cVar4 != '\0') {
      uVar6 = FText::FText(local_b8);
      FSlowTask::EnterProgressFrame(local_88,0x3f800000,uVar6);
      plVar7 = (longlong *)IProjectManager::Get();
      cVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,4);
      if (cVar4 != '\0') {
        plVar7 = (longlong *)FUN_1416ba600();
        cVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,4);
        if (cVar4 != '\0') {
          uVar6 = FText::FText(local_a0);
          FSlowTask::EnterProgressFrame(local_88,0x3f800000,uVar6);
          plVar7 = (longlong *)IProjectManager::Get();
          cVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,5);
          if (cVar4 != '\0') {
            plVar7 = (longlong *)FUN_1416ba600();
            cVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,5);
            if (cVar4 != '\0') {
              uVar6 = 1;
              goto LAB_14043ea66;
            }
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_14043ea66:
  FUN_14166a2b0(local_88);
  local_3c = 0;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_68 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_80 + 1;
    lVar3 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  return uVar6;
}



// FUNCTION 14043eb20 SetContentFromStream body=87 status=ok
// SIG undefined SetContentFromStream(void)

ulonglong FNullHttpRequest::SetContentFromStream(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong in_RAX;
  ulonglong uVar7;
  
  plVar4 = *(longlong **)(param_2 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    uVar6 = (int)lVar5 - 1;
    uVar7 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar7 = (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        uVar7 = (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    return uVar7 & 0xffffffffffffff00;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 14043eb80 OnMatchFound body=77 status=ok
// SIG undefined OnMatchFound(void)

void FTurnBasedMatchmakerDelegate::OnMatchFound(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 8);
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



// FUNCTION 14043ebd0 FUN_14043ebd0 body=500 status=ok
// SIG undefined FUN_14043ebd0(void)

void FUN_14043ebd0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  wchar_t *_Dest;
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  short *psVar9;
  undefined8 local_res8;
  short *local_38;
  ulonglong local_30;
  
  local_38 = (short *)0x0;
  local_30 = 0;
  local_res8 = param_1;
  cVar1 = FParse::Token(&local_res8,&local_38,0);
  while (cVar1 != '\0') {
    uVar8 = 0;
    if (((int)local_30 == 0) || (*local_38 != 0x2d)) {
      iVar4 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar4);
      }
      psVar9 = local_38;
      puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_2);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0;
        lVar7 = (longlong)(int)local_30;
        *(int *)(puVar6 + 1) = (int)local_30;
        if ((int)local_30 == 0) {
          *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar6,local_30 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop((void *)*puVar6,psVar9,lVar7 * 2);
        }
      }
    }
    else {
      iVar4 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar4 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar4 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar4);
      }
      puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *param_3);
      if (puVar6 != (undefined8 *)0x0) {
        uVar5 = (int)local_30 - 1;
        if ((int)local_30 == 0) {
          uVar5 = uVar8;
        }
        if (1 < uVar5) {
          uVar5 = 1;
        }
        uVar2 = (int)local_30 - 1;
        if ((int)local_30 == 0) {
          uVar2 = uVar8;
        }
        uVar3 = uVar5;
        if ((uVar5 < 0x80000001) && (uVar3 = uVar2, 0x80000000 < uVar2)) {
          uVar3 = 0x80000000;
        }
        *puVar6 = 0;
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
        psVar9 = &DAT_143f3eda8;
        if ((int)local_30 != 0) {
          psVar9 = local_38;
        }
        iVar4 = uVar3 - uVar5;
        uVar2 = iVar4 + 1;
        if (iVar4 == 0) {
          uVar2 = uVar8;
        }
        *(uint *)(puVar6 + 1) = uVar2;
        if ((0 < (int)uVar2) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(puVar6,0), 0 < *(int *)(puVar6 + 1))) {
          _Dest = (wchar_t *)*puVar6;
          wcsncpy(_Dest,psVar9 + (int)uVar5,(longlong)iVar4);
          _Dest[iVar4] = L'\0';
        }
      }
    }
    cVar1 = FParse::Token(&local_res8,&local_38);
  }
  if (local_38 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14043edd0 ParseGameProjectFromCommandLine body=593 status=ok
// SIG undefined ParseGameProjectFromCommandLine(void)

undefined8 ParseGameProjectFromCommandLine(undefined8 param_1,void **param_2,undefined8 *param_3)

{
  void *pvVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  void *local_78;
  ulonglong local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50 [2];
  longlong local_40 [3];
  
  local_58 = param_1;
  FParse::Token(&local_78,&local_58,0);
  FString::TrimStartInline(&local_78);
  iVar3 = 0;
  if (*param_2 != &DAT_143f3a014) {
    *(undefined4 *)(param_2 + 1) = 0;
    iVar8 = iVar3;
    if (*(int *)((longlong)param_2 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2);
      iVar8 = *(int *)(param_2 + 1);
    }
    *(int *)(param_2 + 1) = iVar8;
    if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
  }
  if ((undefined *)*param_3 != &DAT_143f3a084) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_3);
      iVar3 = *(int *)(param_3 + 1);
    }
    *(int *)(param_3 + 1) = iVar3;
    if (*(int *)((longlong)param_3 + 0xc) < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_3);
    }
  }
  if (((int)local_70 != 0) && ((int)local_70 != 1)) {
    cVar2 = FString::StartsWith(&local_78,&DAT_143f3a0b4,1);
    pvVar1 = local_78;
    if (cVar2 == '\0') {
      local_68 = (void *)0x0;
      iVar3 = (int)local_70;
      local_60 = iVar3;
      if (iVar3 == 0) {
        local_5c = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,local_70 & 0xffffffff,0);
        _guard_xfg_dispatch_icall_nop(local_68,pvVar1,(longlong)iVar3 * 2);
      }
      puVar4 = (undefined8 *)FUN_1416bb0a0(local_50);
      puVar5 = (undefined8 *)FUN_141672300(local_40,&local_68,0);
      puVar7 = &DAT_143f3eda8;
      if (*(int *)(puVar4 + 1) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = (undefined2 *)*puVar4;
      }
      if (*(int *)(puVar5 + 1) != 0) {
        puVar7 = (undefined2 *)*puVar5;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar7,puVar9);
      if (local_40[0] != 0) {
        FMemory::Free();
      }
      if (local_50[0] != 0) {
        FMemory::Free();
      }
      pvVar1 = local_78;
      if (iVar3 == 0) {
        if (param_2 != &local_78) {
          iVar3 = (int)local_70;
          *(int *)(param_2 + 1) = iVar3;
          if ((iVar3 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
            *(undefined4 *)((longlong)param_2 + 0xc) = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(param_2,local_70 & 0xffffffff);
            _guard_xfg_dispatch_icall_nop(*param_2,pvVar1,(longlong)iVar3 * 2);
          }
        }
        uVar6 = FUN_141671940(local_50,param_2,1);
        FString::operator=(param_3,uVar6);
        if (local_50[0] != 0) {
          FMemory::Free();
        }
        if (local_68 != (void *)0x0) {
          FMemory::Free();
        }
        uVar6 = 1;
        goto LAB_14043efec;
      }
      FPaths::IsRelative(&local_78);
      if (local_68 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
  uVar6 = 0;
LAB_14043efec:
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 14043f030 Pop body=292 status=ok
// SIG undefined Pop(void)

undefined8 TLockFreePointerListLIFOPad<void_*,128>::Pop(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  LOCK();
  uVar3 = *(ulonglong *)(param_1 + 0x80);
  if (uVar3 == 0) {
    *(ulonglong *)(param_1 + 0x80) = 0;
    uVar3 = 0;
  }
  UNLOCK();
  uVar6 = (uint)uVar3;
  do {
    uVar2 = uVar6 & 0x3ffffff;
    if ((uVar3 & 0x3ffffff) == 0) {
LAB_14043f101:
      if (uVar2 != 0) {
        uVar1 = *(undefined8 *)
                 ((&DAT_1468a81f8)[uVar2 >> 0xe] + 8 + (ulonglong)(uVar6 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
        return uVar1;
      }
      return 0;
    }
    uVar5 = (uVar3 & 0xfffffffffc000000) + 0x4000000;
    if (uVar5 < (uVar3 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    lVar4 = 0;
    if (uVar2 != 0) {
      lVar4 = (&DAT_1468a81f8)[uVar2 >> 0xe] + (ulonglong)(uVar6 & 0x3fff) * 0x18;
    }
    LOCK();
    bVar7 = uVar3 == *(ulonglong *)(param_1 + 0x80);
    if (bVar7) {
      *(ulonglong *)(param_1 + 0x80) = *(uint *)(lVar4 + 0x10) | uVar5;
    }
    UNLOCK();
    if (bVar7) {
      *(undefined4 *)(lVar4 + 0x10) = 0;
      goto LAB_14043f101;
    }
    LOCK();
    uVar3 = *(ulonglong *)(param_1 + 0x80);
    if (uVar3 == 0) {
      *(ulonglong *)(param_1 + 0x80) = 0;
      uVar3 = 0;
    }
    UNLOCK();
    uVar6 = (uint)uVar3;
  } while( true );
}



// FUNCTION 14043f160 FUN_14043f160 body=1292 status=ok
// SIG undefined FUN_14043f160(void)

void FUN_14043f160(void)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined8 *local_res10;
  undefined4 *local_18;
  undefined8 local_10;
  
  lVar6 = 0;
  local_10 = 0x41;
  local_18 = (undefined4 *)0x0;
  TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(&local_18,0);
  *local_18 = DAT_1464ca1c4;
  local_18[1] = DAT_1464ca1ec;
  local_18[2] = DAT_1464ca214;
  local_18[3] = DAT_1464ca23c;
  local_18[4] = DAT_1464ca264;
  local_18[5] = DAT_1464ca28c;
  local_18[6] = DAT_1464ca2b4;
  local_18[7] = DAT_1464ca2dc;
  local_18[8] = DAT_1464ca304;
  local_18[9] = DAT_1464ca32c;
  local_18[10] = DAT_1464ca354;
  local_18[0xb] = DAT_1464ca37c;
  local_18[0xc] = DAT_1464ca3a4;
  local_18[0xd] = DAT_1464ca3cc;
  local_18[0xe] = DAT_1464ca3f4;
  local_18[0xf] = DAT_1464ca41c;
  local_18[0x10] = DAT_1464ca444;
  local_18[0x11] = DAT_1464ca46c;
  local_18[0x12] = DAT_1464ca494;
  local_18[0x13] = DAT_1464ca4bc;
  local_18[0x14] = DAT_1464ca4e4;
  local_18[0x15] = DAT_1464ca50c;
  local_18[0x16] = DAT_1464ca534;
  local_18[0x17] = DAT_1464ca55c;
  local_18[0x18] = DAT_1464ca584;
  local_18[0x19] = DAT_1464ca5ac;
  local_18[0x1a] = DAT_1464ca5d4;
  local_18[0x1b] = DAT_1464ca5fc;
  local_18[0x1c] = DAT_1464ca624;
  local_18[0x1d] = DAT_1464ca64c;
  local_18[0x1e] = DAT_1464ca674;
  local_18[0x1f] = DAT_1464ca69c;
  local_18[0x20] = DAT_1464ca6c4;
  local_18[0x21] = DAT_1464ca6ec;
  local_18[0x22] = DAT_1464ca714;
  local_18[0x23] = DAT_1464ca73c;
  local_18[0x24] = DAT_1464ca764;
  local_18[0x25] = DAT_1464ca78c;
  local_18[0x26] = DAT_1464ca7b4;
  local_18[0x27] = DAT_1464ca7dc;
  local_18[0x28] = DAT_1464ca804;
  local_18[0x29] = DAT_1464ca82c;
  local_18[0x2a] = DAT_1464ca854;
  local_18[0x2b] = DAT_1464ca87c;
  local_18[0x2c] = DAT_1464ca8a4;
  local_18[0x2d] = DAT_1464ca8cc;
  local_18[0x2e] = DAT_1464ca8f4;
  local_18[0x2f] = DAT_1464ca91c;
  local_18[0x30] = DAT_1464ca944;
  local_18[0x31] = DAT_1464ca96c;
  local_18[0x32] = DAT_1464ca994;
  local_18[0x33] = DAT_1464ca9bc;
  local_18[0x34] = DAT_1464ca9e4;
  local_18[0x35] = DAT_1464caa0c;
  local_18[0x36] = DAT_1464caa34;
  local_18[0x37] = DAT_1464caa5c;
  local_18[0x38] = DAT_1464caa84;
  local_18[0x39] = DAT_1464caaac;
  local_18[0x3a] = DAT_1464caad4;
  local_18[0x3b] = DAT_1464caafc;
  local_18[0x3c] = DAT_1464cab24;
  local_18[0x3d] = DAT_1464cab4c;
  local_18[0x3e] = DAT_1464cab74;
  local_18[0x3f] = DAT_1464cab9c;
  local_18[0x40] = DAT_1464cabc4;
  FUN_141ed1030(&local_18);
  if (DAT_146ab62c8 != '\0') {
    (**(code **)(PTR_PTR_146534c80 + 0x40))(&PTR_PTR_146534c80);
    TRefCountPtr<FRHIIndexBuffer>::operator=(&DAT_146534cb8,0);
    if (DAT_146534cc0 != 0) {
      (**(code **)(*DAT_146ab6358 + 0x110))
                (DAT_146ab6358,&local_res10,DAT_146534cc0,&DAT_146b09668,DAT_146534cb0);
      puVar3 = DAT_146534cb8;
      DAT_146534cb8 = local_res10;
      local_res10 = (undefined8 *)0x0;
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          if ((*(char *)(puVar3 + 2) == '\0') &&
             ((DAT_146ab62f5 != '\0' ||
              (cVar4 = FOutputDevice::CanBeUsedOnAnyThread(), cVar4 == '\0')))) {
            LOCK();
            bVar7 = *(int *)((longlong)puVar3 + 0xc) == 0;
            if (bVar7) {
              *(int *)((longlong)puVar3 + 0xc) = 1;
            }
            UNLOCK();
            if (bVar7) {
              uVar5 = FLockFreeLinkPolicy::AllocLockFreeLink();
              if (uVar5 != 0) {
                lVar6 = (&DAT_1468a81f8)[uVar5 >> 0xe] + (ulonglong)(uVar5 & 0x3fff) * 0x18;
              }
              *(undefined8 **)(lVar6 + 8) = puVar3;
              FLockFreePointerListLIFORoot<128,1>::Push(&DAT_146ab6940);
            }
          }
          else {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
      }
      TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(&local_res10);
    }
  }
  if (local_18 != (undefined4 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14043f670 FUN_14043f670 body=4488 status=ok
// SIG undefined FUN_14043f670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14043f670(longlong param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION p_Var2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  short *psVar5;
  void *_Src;
  char cVar6;
  BOOL BVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  FILE *_File;
  longlong *plVar11;
  longlong *plVar12;
  long lVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined2 *puVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  undefined2 *puVar20;
  undefined2 *puVar21;
  ulonglong uVar22;
  int iVar23;
  longlong *plVar24;
  bool bVar25;
  undefined1 auStack_478 [32];
  undefined8 *local_458;
  ulonglong local_450;
  ulonglong local_448;
  undefined8 local_440;
  undefined1 local_438;
  char local_428;
  char local_427 [7];
  undefined2 *local_420;
  ulonglong local_418;
  undefined8 local_410;
  undefined2 *local_408;
  undefined8 local_400;
  undefined2 *local_3f8;
  int local_3f0;
  int local_3ec;
  longlong local_3e8;
  ulonglong local_3e0;
  longlong *local_3d8;
  ulonglong local_3d0;
  undefined2 *local_3c8;
  int local_3c0;
  int local_3bc;
  undefined2 *local_3b8;
  int local_3b0;
  int local_3ac;
  longlong local_3a8;
  ulonglong local_3a0;
  longlong local_398;
  ulonglong local_390;
  longlong local_388;
  ulonglong local_380;
  longlong *local_378;
  undefined8 local_370;
  undefined2 *local_368;
  int local_360;
  longlong local_358;
  undefined8 local_350;
  longlong local_348;
  undefined8 local_340;
  undefined1 local_338 [4];
  undefined1 local_334 [4];
  undefined8 local_330;
  undefined4 local_328;
  undefined1 local_320 [8];
  undefined1 local_318 [8];
  undefined1 local_310 [8];
  LARGE_INTEGER local_308;
  LARGE_INTEGER local_300;
  longlong local_2f8 [2];
  longlong local_2e8 [2];
  undefined1 local_2d8 [24];
  undefined1 local_2c0 [8];
  longlong *local_2b8;
  undefined1 local_2a8 [24];
  undefined1 local_290 [24];
  undefined1 local_278 [24];
  undefined1 local_260 [24];
  undefined1 local_248 [24];
  undefined1 local_230 [24];
  undefined1 local_218 [24];
  undefined1 local_200 [24];
  undefined1 local_1e8 [24];
  undefined1 local_1d0 [24];
  undefined1 local_1b8 [24];
  undefined1 local_1a0 [24];
  undefined1 local_188 [24];
  undefined1 local_170 [24];
  undefined1 local_158 [24];
  undefined1 local_140 [24];
  longlong local_128;
  undefined8 local_120;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  int local_f4;
  longlong local_e8;
  undefined4 local_e0;
  undefined1 local_d8 [112];
  undefined2 *local_68;
  wchar_t *local_60;
  undefined2 *local_58;
  wchar_t *local_50;
  ulonglong local_48;
  
  puVar20 = DAT_1468b6160;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_2c0,L"Initializing...",L"EngineLoop",L"EngineLoop_Initializing");
  local_458 = (undefined8 *)puVar20;
  FUN_141660a80(local_d8,0x42c80000,uVar8,1);
  FSlowTask::Initialize(local_d8);
  uVar22 = 1;
  if (local_2b8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_2b8 + 1;
    lVar18 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*local_2b8)(local_2b8);
      LOCK();
      piVar1 = (int *)((longlong)local_2b8 + 0xc);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        (**(code **)(*local_2b8 + 8))(local_2b8,1);
      }
    }
  }
  _Src = DAT_1468500c0;
  puVar20 = (undefined2 *)0x0;
  local_368 = (undefined2 *)0x0;
  iVar19 = (int)DAT_1468500c8;
  local_360 = iVar19;
  if (iVar19 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_368,DAT_1468500c8 & 0xffffffff,0);
    puVar20 = local_368;
    _guard_xfg_dispatch_icall_nop(local_368,_Src,(longlong)iVar19 * 2);
  }
  iVar19 = local_360;
  local_3a0 = 0;
  local_3a8 = 0;
  if (DAT_146299580 != 0) {
    lVar18 = -1;
    do {
      lVar18 = lVar18 + 1;
    } while ((&DAT_146299580)[lVar18] != 0);
    uVar17 = (int)lVar18 + 1;
    local_3a0 = (ulonglong)uVar17;
    if (0 < (int)uVar17) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3a8,0);
    }
    FGenericPlatformString::Memcpy(local_3a8,&DAT_146299580,(longlong)(int)uVar17 * 2);
  }
  uVar8 = FPaths::ProjectContentDir(local_2f8);
  FShaderCodeLibrary::OpenLibrary(&local_3a8,uVar8);
  if (local_2f8[0] != 0) {
    FMemory::Free();
  }
  if (local_3a8 != 0) {
    FMemory::Free();
  }
  cVar6 = BuildSettings::IsPromotedBuild();
  if (cVar6 != '\0') {
    puVar9 = (undefined8 *)FUN_14167cf00(local_2e8);
    if (*(int *)(puVar9 + 1) == 0) {
      puVar21 = &DAT_143f3eda8;
    }
    else {
      puVar21 = (undefined2 *)*puVar9;
    }
    local_398 = 0;
    local_390 = 0;
    if (DAT_146299580 != 0) {
      lVar18 = -1;
      do {
        lVar18 = lVar18 + 1;
      } while ((&DAT_146299580)[lVar18] != 0);
      uVar17 = (int)lVar18 + 1;
      local_390 = (ulonglong)uVar17;
      if (0 < (int)uVar17) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_398,0);
      }
      FGenericPlatformString::Memcpy(local_398,&DAT_146299580,(longlong)(int)uVar17 * 2);
    }
    local_60 = L"InstalledContent";
    local_58 = &DAT_146299580;
    local_358 = 0;
    local_50 = L"Content";
    local_350 = 0;
    local_68 = puVar21;
    FPaths::CombineInternal(&local_358,&local_68,4);
    FShaderCodeLibrary::OpenLibrary(&local_398,&local_358);
    if (local_358 != 0) {
      FMemory::Free();
    }
    if (local_398 != 0) {
      FMemory::Free();
    }
    if (local_2e8[0] != 0) {
      FMemory::Free();
    }
  }
  FUN_14160c830();
  FPackageName::RegisterShortPackageNamesForUObjectModules();
  uVar8 = FText::FText(local_1b8);
  FSlowTask::EnterProgressFrame(local_d8,0x40a00000,uVar8);
  puVar9 = (undefined8 *)FName::FName(local_320,"AssetRegistry",1);
  uVar8 = FUN_14168dc80();
  FUN_141690010(uVar8,*puVar9);
  FUN_1417940e0();
  UCheatManagerGunfire::GetAllCheats
            (local_2a8,"FPackageLocalizationManager::Get().PerformLazyInitialization()");
  uVar8 = FUN_1416f8860();
  FUN_1417009a0(uVar8);
  FUN_140591050(local_2a8);
  puVar14 = local_290;
  UCheatManagerGunfire::GetAllCheats(puVar14,"InitDefaultMaterials etc");
  lVar13 = (long)puVar14;
  FUN_142570f00();
  AK::MemoryMgr::StartProfileThreadUsage(lVar13);
  AK::MemoryMgr::StartProfileThreadUsage(lVar13);
  FUN_140591050(local_290);
  UCheatManagerGunfire::GetAllCheats(local_278,"IStreamingManager::Get()");
  IStreamingManager::Get();
  FUN_140591050(local_278);
  uVar8 = FText::FText(local_1a0);
  FSlowTask::EnterProgressFrame(local_d8,0x40a00000,uVar8);
  uVar8 = FUN_14168dc80();
  FUN_141695550(uVar8);
  if (DAT_14684ff23 != '\0') {
    UCheatManagerGunfire::GetAllCheats(local_260,"DisableDisregardForGC");
    FUN_141789b10(&DAT_1469e91a0);
    FUN_140591050(local_260);
  }
  uVar8 = FText::FText(local_188);
  FSlowTask::EnterProgressFrame(local_d8,0x41200000,uVar8);
  UCheatManagerGunfire::GetAllCheats(local_248,"LoadStartupCoreModules");
  cVar6 = FUN_14043e200(param_1);
  FUN_140591050(local_248);
  if (cVar6 == '\0') goto LAB_14044079b;
  uVar8 = FText::FText(local_170);
  FSlowTask::EnterProgressFrame(local_d8,0x41200000,uVar8);
  UCheatManagerGunfire::GetAllCheats
            (local_2d8,
             "IProjectManager::Get().LoadModulesForProject(ELoadingPhase::PreLoadingScreen)");
  plVar10 = (longlong *)IProjectManager::Get();
  cVar6 = (**(code **)(*plVar10 + 0x18))(plVar10,2);
  if (cVar6 != '\0') {
    plVar10 = (longlong *)FUN_1416ba600();
    cVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,2);
    if (cVar6 != '\0') {
      lVar13 = (long)local_2d8;
      FUN_140591050();
      if (DAT_1468b616c == '\0') {
        plVar10 = (longlong *)GetMoviePlayer();
        cVar6 = (**(code **)(*plVar10 + 0x60))();
        lVar13 = (long)plVar10;
        if (cVar6 == '\0') {
          UCheatManagerGunfire::GetAllCheats
                    (local_230,"FPreLoadScreenManager::Get()->Initialize etc");
          lVar18 = *(longlong *)(DAT_1469f4590 + 0x18);
          if (lVar18 != 0) {
            plVar10 = (longlong *)GetMoviePlayer();
            (**(code **)(*plVar10 + 8))(plVar10,lVar18);
          }
          lVar13 = (long)local_230;
          FUN_140591050();
        }
      }
      AK::MemoryMgr::StartProfileThreadUsage(lVar13);
      uVar8 = FText::FText(local_158);
      FSlowTask::EnterProgressFrame(local_d8,0x40a00000,uVar8);
      if (DAT_1468b616c == '\0') {
        plVar10 = (longlong *)GetMoviePlayer();
        cVar6 = (**(code **)(*plVar10 + 0x60))(plVar10);
        if (cVar6 == '\0') {
          UCheatManagerGunfire::GetAllCheats(local_218,"PlayFirstPreLoadScreen etc");
          plVar10 = (longlong *)GetMoviePlayer();
          (**(code **)(*plVar10 + 0x40))(plVar10);
          FUN_140591050(local_218);
        }
      }
      plVar10 = (longlong *)GetMoviePlayer();
      (**(code **)(*plVar10 + 0x60))(plVar10);
      FUN_140437810(&DAT_1464b5830,local_318,StartRenderCommandFenceBundler);
      FUN_140437810(&DAT_1464b5848,local_310,StopRenderCommandFenceBundler);
      UCheatManagerGunfire::GetAllCheats(local_200,"LoadStartupModules");
      cVar6 = FEngineLoop::LoadStartupModules(param_1);
      FUN_140591050(local_200);
      if (cVar6 == '\0') goto LAB_14044079b;
      if (DAT_1469e91ac != '\0') {
        UCheatManagerGunfire::GetAllCheats(local_1e8,"CloseDisregardForGC");
        FUN_141785f70(&DAT_1469e91a0);
        FUN_140591050(local_1e8);
      }
      FUN_1416ffac0();
      plVar10 = (longlong *)UOnlineEngineInterface::Get();
      local_418 = 0;
      cVar6 = (**(code **)(*plVar10 + 0x278))(plVar10,0);
      if (cVar6 != '\0') {
        local_330 = 0;
        local_328 = 0;
        puVar9 = (undefined8 *)operator_new(0x20,&local_330);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = &PTR_GetPoolName_143f3f148;
          puVar9[1] = FUN_14043cd60;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar9[3] = uVar8;
        }
        FUN_141659540(&local_330);
      }
      uVar8 = FText::FText(local_140);
      FSlowTask::EnterProgressFrame(local_d8,0x40a00000,uVar8);
      if (DAT_14684ff22 == '\0') {
        if (DAT_14684ff24 == '\0') {
          puVar21 = &DAT_143f3eda8;
          if (iVar19 != 0) {
            puVar21 = puVar20;
          }
          plVar10 = (longlong *)FUN_140437f10(0xffffffffffffffff,puVar21);
          if (plVar10 == (longlong *)0x0) {
            if ((DAT_1468b6158 != (longlong *)0x0) && (DAT_1468c217a == '\0')) {
              (**(code **)(*DAT_1468b6158 + 0x40))(DAT_1468b6158,1);
            }
            DAT_1468c217e = '\x01';
            goto LAB_14044079b;
          }
          if (DAT_14684ff20 == '\0') {
            if ((DAT_1468b6158 != (longlong *)0x0) && (DAT_1468c217a == '\0')) {
              (**(code **)(*DAT_1468b6158 + 0x40))(DAT_1468b6158,1);
            }
          }
          else {
            if ((DAT_1468b6158 != (longlong *)0x0) &&
               (cVar6 = (**(code **)(*DAT_1468b6158 + 0x50))(), cVar6 != '\0')) {
              uVar8 = FUN_141672640();
              FOutputDeviceRedirector::RemoveOutputDevice(uVar8,DAT_1468b6158);
            }
            FWindowsPlatformMisc::SetGracefulTerminationHandler();
          }
          _File = (FILE *)__acrt_iob_func(1);
          setvbuf(_File,(char *)0x0,4,0);
          lVar18 = plVar10[0x1f];
          if (lVar18 == 0) {
            (**(code **)(*plVar10 + 0x368))(plVar10);
            lVar18 = plVar10[0x1f];
          }
          if (DAT_1468c217e != '\0') goto LAB_14044079b;
          DAT_1468c2172 = (byte)(*(uint *)(lVar18 + 0x78) >> 1) & 1;
          DAT_1468c2173 = *(byte *)(lVar18 + 0x78) & 1;
          if ((*(byte *)(lVar18 + 0x78) & 4) != 0) {
            DAT_1468c217e = '\x01';
            goto LAB_14044079b;
          }
          DAT_1468b616c = '\x01';
          if ((*(byte *)(lVar18 + 0x78) & 8) == 0) {
            uVar8 = FUN_141672640();
            FOutputDeviceRedirector::RemoveOutputDevice(uVar8,DAT_1468b6158);
          }
          psVar5 = DAT_14684ff38;
          local_388 = 0;
          local_380 = 0;
          if ((DAT_14684ff38 != (short *)0x0) && (*DAT_14684ff38 != 0)) {
            lVar18 = -1;
            do {
              lVar18 = lVar18 + 1;
            } while (DAT_14684ff38[lVar18] != 0);
            uVar17 = (int)lVar18 + 1;
            local_380 = (ulonglong)uVar17;
            if (0 < (int)uVar17) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_388,0);
            }
            FGenericPlatformString::Memcpy(local_388,psVar5,(longlong)(int)uVar17 * 2);
          }
          plVar11 = (longlong *)plVar10[0x1f];
          if (plVar11 == (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x368))(plVar10);
            plVar11 = (longlong *)plVar10[0x1f];
          }
          (**(code **)(*plVar11 + 0x280))(plVar11,&local_388);
          if (local_388 != 0) {
            FMemory::Free();
          }
          if (DAT_146b17150 == (longlong *)0x0) {
            local_458 = &DAT_1468e2360;
            local_408 = (undefined2 *)0x0;
            local_400 = 0;
            FConfigCacheIni::GetString
                      (DAT_1468b6148,L"/Script/Engine.Engine",L"GameEngine",&local_408);
            puVar21 = &DAT_143f3eda8;
            if ((int)local_400 != 0) {
              puVar21 = local_408;
            }
            uVar8 = FUN_14292cb70();
            local_450 = 0;
            local_458 = (undefined8 *)((ulonglong)local_458 & 0xffffffff00000000);
            lVar18 = FUN_141799830(uVar8,0,puVar21,0);
            if (lVar18 == 0) {
              puVar21 = &DAT_143f3eda8;
              if ((int)local_400 != 0) {
                puVar21 = local_408;
              }
              LowLevelFatalErrorHandler
                        ("Unknown",0xa8f,L"Failed to load Engine class \'%s\'.",puVar21);
              local_458 = (undefined8 *)&DAT_143f3eda8;
              if ((int)local_400 != 0) {
                local_458 = (undefined8 *)local_408;
              }
              FDebug::AssertFailed
                        (&DAT_143f3a0f3,"Unknown",0xa8f,L"Failed to load Engine class \'%s\'.");
            }
            local_410 = 0;
            uVar8 = GetTransientPackage();
            local_448 = 0;
            local_450 = local_450 & 0xffffffffffffff00;
            local_458 = (undefined8 *)0x0;
            DAT_146b17150 = (longlong *)NewObject<USaveGame>(uVar8,lVar18,0,0);
            FUN_142883f60(DAT_146b17150);
            (**(code **)(*DAT_146b17150 + 0x290))(DAT_146b17150,param_1);
            if (local_408 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
          TBaseMulticastDelegate<void>::Broadcast(&DAT_1464af040);
          plVar11 = (longlong *)IProjectManager::Get();
          (**(code **)(*plVar11 + 0x18))(plVar11,6);
          plVar11 = (longlong *)FUN_1416ba600();
          (**(code **)(*plVar11 + 0x10))(plVar11,6);
          uVar8 = FUN_141649d10();
          FUN_1416584c0(uVar8);
          plVar11 = (longlong *)0x0;
          local_420 = (undefined2 *)0x0;
          uVar8 = GetTransientPackage();
          local_410 = 0;
          FUN_1417846f0(uVar8,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          local_438 = 0;
          local_440 = 0;
          local_448 = local_448 & 0xffffffffffffff00;
          local_450 = 0;
          local_458 = (undefined8 *)((ulonglong)local_458 & 0xffffffff00000000);
          plVar12 = (longlong *)FUN_1417985e0(plVar10,uVar8,0,0);
          iVar19 = *(int *)((longlong)plVar12 + 0xc);
          plVar10 = plVar11;
          if (iVar19 < (int)DAT_1469e91c4) {
            uVar15 = iVar19 >> 0x1f & 0xffff;
            uVar17 = iVar19 + uVar15;
            plVar10 = (longlong *)
                      (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar17 >> 0x10) * 8) +
                      (longlong)(int)((uVar17 & 0xffff) - uVar15) * 0x18);
          }
          *(uint *)(plVar10 + 1) = *(uint *)(plVar10 + 1) | 0x40000000;
          QueryPerformanceCounter(&local_308);
          UObject::ParseParms(plVar12,DAT_14684ff38);
          FParse::Param(DAT_14684ff38,L"outputerror");
          FUN_141695890();
          psVar5 = DAT_14684ff38;
          local_3e8 = 0;
          local_3e0 = 0;
          if ((DAT_14684ff38 != (short *)0x0) && (*DAT_14684ff38 != 0)) {
            lVar18 = -1;
            do {
              lVar18 = lVar18 + 1;
            } while (DAT_14684ff38[lVar18] != 0);
            uVar17 = (int)lVar18 + 1;
            local_3e0 = (ulonglong)uVar17;
            if (0 < (int)uVar17) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e8,0);
            }
            FGenericPlatformString::Memcpy(local_3e8,psVar5,(longlong)(int)uVar17 * 2);
          }
          uVar17 = (**(code **)(*plVar12 + 0x278))(plVar12,&local_3e8);
          uVar22 = (ulonglong)uVar17;
          local_418 = CONCAT44(local_418._4_4_,uVar17);
          if (local_3e8 != 0) {
            FMemory::Free();
          }
          FUN_141695890();
          DAT_1468c217e = '\x01';
          if ((*(byte *)(plVar12 + 0xf) & 0x10) != 0) {
            local_3d8 = (longlong *)0x0;
            local_370 = 0;
            local_3d0 = 0;
            local_378 = (longlong *)0x0;
            local_420 = DAT_1468b6160;
            p_Var2 = (LPCRITICAL_SECTION)(DAT_1468b6160 + 0x1c);
            BVar7 = TryEnterCriticalSection(p_Var2);
            if (BVar7 == 0) {
              EnterCriticalSection(p_Var2);
            }
            plVar10 = plVar11;
            plVar12 = plVar11;
            if (&local_3d8 != (longlong **)(local_420 + 0x14)) {
              local_458 = (undefined8 *)((ulonglong)local_458 & 0xffffffff00000000);
              TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
                        (&local_3d8,*(longlong **)(local_420 + 0x14),
                         *(undefined4 *)(local_420 + 0x18),0);
              plVar10 = (longlong *)(local_3d0 & 0xffffffff);
              plVar12 = local_3d8;
            }
            LeaveCriticalSection(p_Var2);
            local_420 = DAT_1468b6160;
            p_Var2 = (LPCRITICAL_SECTION)(DAT_1468b6160 + 0x1c);
            BVar7 = TryEnterCriticalSection(p_Var2);
            if (BVar7 == 0) {
              EnterCriticalSection(p_Var2);
            }
            iVar19 = 0;
            if (&local_378 != (longlong **)(local_420 + 0xc)) {
              local_458 = (undefined8 *)((ulonglong)local_458 & 0xffffffff00000000);
              TArray<FString,FDefaultAllocator>::CopyToEmpty<FString>
                        (&local_378,*(longlong **)(local_420 + 0xc),
                         *(undefined4 *)(local_420 + 0x10),0);
              plVar11 = local_378;
              iVar19 = (int)local_370;
            }
            LeaveCriticalSection(p_Var2);
            uVar17 = (uint)plVar10;
            if ((uVar17 != 0) || (iVar19 != 0)) {
              if (DAT_1468c2178 == '\0') {
                uVar8 = FCommandLine::Get();
                cVar6 = FParse::Param(uVar8,L"DUMPALLWARNINGS");
                iVar23 = 0x32;
                if (cVar6 != '\0') goto LAB_1404402b8;
              }
              else {
LAB_1404402b8:
                iVar23 = iVar19 + uVar17;
              }
              local_f8 = 0xffffffff;
              local_128 = 0;
              local_120 = 0;
              local_108 = 0;
              local_100 = 0;
              local_f4 = 0;
              local_e8 = 0;
              local_e0 = 0;
              TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Empty
                        (&local_128,iVar23);
              plVar24 = plVar12 + (longlong)(int)uVar17 * 2;
              for (; plVar12 != plVar24; plVar12 = plVar12 + 2) {
                local_428 = '\0';
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                Emplace<FString_const_&>(&local_128,local_338,plVar12,&local_428);
                if ((local_428 == '\0') && (iVar23 < (int)local_120 - local_f4)) break;
              }
              TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Empty
                        (&local_128,iVar23);
              for (plVar12 = plVar11; plVar12 != plVar11 + (longlong)iVar19 * 2;
                  plVar12 = plVar12 + 2) {
                local_427[0] = '\0';
                TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
                Emplace<FString_const_&>(&local_128,local_334,plVar12,local_427);
                if ((local_427[0] == '\0') && (iVar23 < (int)local_120 - local_f4)) break;
              }
              local_e0 = 0;
              if (local_e8 != 0) {
                FMemory::Free();
              }
              TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              ::Empty(&local_128,0);
              if (local_108 != 0) {
                FMemory::Free();
              }
              if (local_128 != 0) {
                FMemory::Free();
              }
              uVar22 = local_418 & 0xffffffff;
            }
            plVar12 = plVar11;
            if (((int)uVar22 == 0) && (uVar17 != 0)) {
              uVar22 = 1;
            }
            for (; iVar19 != 0; iVar19 = iVar19 + -1) {
              if (*plVar12 != 0) {
                FMemory::Free();
              }
              plVar12 = plVar12 + 2;
            }
            plVar12 = local_3d8;
            plVar24 = local_3d8;
            if (plVar11 != (longlong *)0x0) {
              FMemory::Free(plVar11);
              plVar12 = local_3d8;
              plVar24 = local_3d8;
            }
            while (plVar11 = local_3d8, uVar17 != 0) {
              local_3d8 = plVar24;
              if (*plVar12 != 0) {
                FMemory::Free();
              }
              uVar17 = (int)plVar10 - 1;
              plVar10 = (longlong *)(ulonglong)uVar17;
              plVar12 = plVar12 + 2;
              plVar24 = local_3d8;
              local_3d8 = plVar11;
            }
            bVar25 = local_3d8 != (longlong *)0x0;
            puVar20 = local_368;
            local_3d8 = plVar24;
            if (bVar25) {
              FMemory::Free(plVar11);
              puVar20 = local_368;
            }
          }
          QueryPerformanceCounter(&local_300);
          goto LAB_14044079b;
        }
        if (DAT_14684ff25 != '\0') {
          local_3f8 = (undefined2 *)0x0;
          local_3f0 = iVar19;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                    (&local_3f8,(0xb - (uint)(iVar19 != 0)) + iVar19,0);
          puVar21 = local_3f8;
          _guard_xfg_dispatch_icall_nop(local_3f8,puVar20,(longlong)iVar19 * 2);
          iVar23 = local_3f0;
          lVar18 = (longlong)local_3f0;
          local_3f0 = (0xb - (uint)(local_3f0 != 0)) + local_3f0;
          if (local_3ec < local_3f0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3f8,iVar23);
            puVar21 = local_3f8;
          }
          lVar18 = lVar18 - (ulonglong)(iVar23 != 0);
          pwVar3 = puVar21 + lVar18;
          pwVar3[0] = L'C';
          pwVar3[1] = L'o';
          pwVar3[2] = L'm';
          pwVar3[3] = L'm';
          pwVar3[4] = L'a';
          pwVar3[5] = L'n';
          pwVar3[6] = L'd';
          pwVar3[7] = L'l';
          *(undefined4 *)(puVar21 + lVar18 + 8) = 0x740065;
          puVar21[lVar18 + 10] = 0;
          puVar16 = &DAT_143f3eda8;
          if (local_3f0 != 0) {
            puVar16 = puVar21;
          }
          lVar18 = FUN_140437f10(0xffffffffffffffff,puVar16);
          if (puVar21 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          if (lVar18 != 0) {
            local_3c8 = (undefined2 *)0x0;
            local_458 = (undefined8 *)CONCAT44(local_458._4_4_,0xb - (uint)(iVar19 != 0));
            TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_3c8,puVar20,iVar19,0);
            iVar23 = local_3c0;
            lVar18 = (longlong)local_3c0;
            local_3c0 = (0xb - (uint)(local_3c0 != 0)) + local_3c0;
            if (local_3bc < local_3c0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c8,iVar23);
            }
            puVar21 = local_3c8;
            lVar18 = lVar18 - (ulonglong)(iVar23 != 0);
            puVar16 = &DAT_143f3eda8;
            if (local_3c0 != 0) {
              puVar16 = local_3c8;
            }
            pwVar3 = local_3c8 + lVar18;
            pwVar3[0] = L'C';
            pwVar3[1] = L'o';
            pwVar3[2] = L'm';
            pwVar3[3] = L'm';
            pwVar3[4] = L'a';
            pwVar3[5] = L'n';
            pwVar3[6] = L'd';
            pwVar3[7] = L'l';
            *(undefined4 *)(local_3c8 + lVar18 + 8) = 0x740065;
            local_3c8[lVar18 + 10] = 0;
            LowLevelFatalErrorHandler
                      ("Unknown",0xb2e,
                       L"You probably meant to call a commandlet. Please use the full name %s.",
                       puVar16);
            if (puVar21 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            local_3b8 = (undefined2 *)0x0;
            local_458 = (undefined8 *)CONCAT44(local_458._4_4_,0xb - (uint)(iVar19 != 0));
            TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_3b8,puVar20,iVar19,0);
            iVar19 = local_3b0;
            lVar18 = (longlong)local_3b0;
            local_3b0 = (0xb - (uint)(local_3b0 != 0)) + local_3b0;
            if (local_3ac < local_3b0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3b8,iVar19);
            }
            puVar21 = local_3b8;
            lVar18 = lVar18 - (ulonglong)(iVar19 != 0);
            local_458 = (undefined8 *)&DAT_143f3eda8;
            if (local_3b0 != 0) {
              local_458 = (undefined8 *)local_3b8;
            }
            puVar4 = (undefined4 *)(local_3b8 + lVar18);
            *puVar4 = 0x6f0043;
            puVar4[1] = 0x6d006d;
            puVar4[2] = 0x6e0061;
            puVar4[3] = 0x6c0064;
            *(undefined4 *)(local_3b8 + lVar18 + 8) = 0x740065;
            local_3b8[lVar18 + 10] = 0;
            FDebug::AssertFailed
                      (&DAT_143f3a67e,"Unknown",0xb2e,
                       L"You probably meant to call a commandlet. Please use the full name %s.");
            if (puVar21 != (undefined2 *)0x0) {
              FMemory::Free(puVar21);
            }
          }
        }
      }
      if (DAT_1468c217e != '\0') {
        if (DAT_146b17150 != (longlong *)0x0) {
          (**(code **)(*DAT_146b17150 + 0x2a0))();
        }
        FUN_14043a2d0();
        goto LAB_14044079b;
      }
      local_340 = 0;
      local_348 = 0;
      uVar8 = FCommandLine::Get();
      cVar6 = FParse::Param(uVar8,L"DUMPMOVIE");
      if (cVar6 == '\0') {
        uVar8 = FCommandLine::Get();
        cVar6 = FParse::Value(uVar8,L"-MATINEESSCAPTURE=",&local_348,1);
        if (cVar6 != '\0') goto LAB_14044071c;
        if ((DAT_1468c2180 != 0) || (DAT_1468c21d8 != '\0')) goto LAB_140440726;
        DAT_1464aaa48 = 1;
      }
      else {
LAB_14044071c:
        DAT_1468c2180 = -1;
LAB_140440726:
        DAT_1464aaa48 = 0;
      }
      FMemory::operator_delete(DAT_14684ff30);
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar8 = FUN_1424f49c0();
      FUN_1424fa7c0(uVar8,6);
      UCheatManagerGunfire::GetAllCheats(local_1d0,"RunSmokeTests");
      uVar8 = FUN_141649d10();
      FUN_1416584c0(uVar8);
      FUN_140591050(local_1d0);
      uVar22 = 0;
      if (local_348 != 0) {
        FMemory::Free();
      }
      goto LAB_14044079b;
    }
  }
  FUN_140591050(local_2d8);
LAB_14044079b:
  if (puVar20 != (undefined2 *)0x0) {
    FMemory::Free(puVar20);
  }
  FUN_14166a2b0(local_d8);
  FSlowTask::~FSlowTask(local_d8);
  return uVar22;
}



// FUNCTION 140440800 FUN_140440800 body=11532 status=ok
// SIG undefined FUN_140440800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140440800(undefined8 param_1,short *param_2,undefined8 param_3,wchar_t *param_4)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  wchar_t wVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *plVar10;
  char cVar11;
  char cVar12;
  wint_t wVar13;
  wint_t wVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  undefined4 uVar18;
  AKRESULT AVar19;
  int iVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  short *psVar25;
  short *psVar26;
  wchar_t **ppwVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  undefined2 *puVar30;
  ErrorCode EVar31;
  undefined2 *puVar32;
  ErrorLevel EVar33;
  DWORD_PTR dwThreadAffinityMask;
  wchar_t *pwVar34;
  undefined1 *puVar35;
  uint uVar36;
  int iVar37;
  longlong lVar38;
  wchar_t *pwVar39;
  ulong uVar40;
  undefined2 *puVar41;
  wchar_t *pwVar42;
  int iVar43;
  int iVar44;
  bool bVar45;
  undefined1 auStackY_a28 [32];
  ulong uVar46;
  undefined8 in_stack_fffffffffffff5f8;
  undefined1 in_stack_fffffffffffff600;
  char local_9f7 [7];
  wchar_t *local_9f0;
  int local_9e8;
  int local_9e4;
  uint local_9e0;
  char local_9dc;
  undefined2 *local_9d8;
  undefined8 local_9d0;
  undefined1 local_9c8 [8];
  undefined2 *local_9c0;
  int local_9b8;
  undefined4 local_9b4;
  longlong *local_9b0;
  undefined8 local_9a8;
  wchar_t *local_9a0;
  short *local_998;
  longlong *local_990;
  undefined8 local_988;
  undefined2 *local_980;
  ulonglong local_978;
  undefined2 *local_970;
  ulonglong local_968;
  undefined2 *local_960;
  undefined8 local_958;
  wchar_t *local_950;
  int local_948;
  int local_944;
  undefined1 local_940 [24];
  short *local_928;
  longlong local_920;
  ulonglong local_918;
  longlong local_910;
  ulonglong local_908;
  longlong local_900;
  ulonglong local_8f8;
  short *local_8f0;
  ulonglong local_8e8;
  wchar_t *local_8e0;
  int local_8d8;
  int local_8d4;
  undefined2 *local_8d0;
  int local_8c8;
  int local_8c4;
  undefined4 *local_8b8;
  undefined1 *puStack_8b0;
  undefined2 *local_8a8;
  undefined8 local_8a0;
  longlong local_898;
  undefined8 local_890;
  undefined8 local_888;
  longlong local_880;
  longlong local_878;
  undefined8 local_870;
  undefined2 *local_868;
  int local_860;
  longlong local_858;
  undefined8 local_850;
  undefined2 *local_848;
  int local_840;
  undefined2 *local_838;
  int local_830;
  LARGE_INTEGER local_828;
  LARGE_INTEGER local_820;
  undefined8 local_818;
  undefined2 *local_810;
  int local_808;
  undefined8 local_800;
  longlong local_7f8;
  undefined2 *local_7f0;
  undefined4 *local_7e8;
  undefined8 local_7e0;
  longlong local_7d8;
  undefined2 *local_7d0;
  int local_7c8;
  undefined8 *local_7c0;
  undefined1 local_7b8 [8];
  undefined1 local_7b0 [8];
  undefined1 local_7a8 [8];
  undefined1 local_7a0 [8];
  undefined1 local_798 [8];
  undefined1 local_790 [8];
  undefined1 local_788 [8];
  undefined1 local_780 [8];
  undefined1 local_778 [8];
  undefined1 local_770 [8];
  undefined1 local_768 [16];
  undefined4 *local_758;
  undefined1 *puStack_750;
  undefined1 local_748 [16];
  longlong local_738 [2];
  longlong local_728 [2];
  longlong local_718 [2];
  longlong local_708 [2];
  longlong local_6f8 [2];
  longlong local_6e8 [2];
  longlong local_6d8 [2];
  longlong local_6c8 [2];
  longlong local_6b8 [2];
  longlong local_6a8 [2];
  longlong local_698 [2];
  longlong local_688 [2];
  longlong local_678 [2];
  longlong local_668 [2];
  undefined1 local_658 [16];
  undefined1 local_648 [16];
  undefined1 local_638 [8];
  undefined1 local_630 [8];
  longlong *local_628;
  undefined1 local_618 [8];
  longlong *local_610;
  undefined1 local_600 [24];
  undefined1 local_5e8 [24];
  undefined1 local_5d0 [24];
  undefined1 local_5b8 [24];
  undefined1 local_5a0 [24];
  undefined1 local_588 [24];
  undefined1 local_570 [24];
  undefined1 local_558 [24];
  undefined1 local_540 [24];
  undefined1 local_528 [24];
  undefined1 local_510 [8];
  longlong *local_508;
  undefined1 local_4f8 [24];
  undefined1 local_4e0 [24];
  undefined1 local_4c8 [24];
  undefined1 local_4b0 [24];
  undefined1 local_498 [24];
  undefined1 local_480 [24];
  undefined1 local_468 [8];
  longlong *local_460;
  undefined1 local_450 [24];
  undefined1 local_438 [24];
  undefined1 local_420 [24];
  undefined1 local_408 [24];
  undefined1 local_3f0 [24];
  undefined1 local_3d8 [24];
  undefined1 local_3c0 [24];
  undefined1 local_3a8 [24];
  undefined1 local_390 [24];
  undefined1 local_378 [24];
  undefined1 local_360 [24];
  undefined1 local_348 [24];
  undefined1 local_330 [24];
  undefined1 local_318 [24];
  undefined1 local_300 [24];
  undefined1 local_2e8 [24];
  undefined1 local_2d0 [24];
  undefined1 local_2b8 [24];
  undefined1 local_2a0 [24];
  undefined1 local_288 [24];
  undefined1 local_270 [24];
  undefined1 local_258 [24];
  undefined1 local_240 [24];
  undefined1 local_228 [24];
  undefined1 local_210 [24];
  undefined1 local_1f8 [24];
  undefined1 local_1e0 [16];
  longlong *local_1d0;
  undefined1 *local_1b8 [2];
  undefined1 local_1a8 [32];
  undefined8 local_188;
  undefined4 local_178;
  undefined1 local_168 [24];
  undefined1 local_150 [24];
  undefined1 local_138 [24];
  undefined4 local_120 [4];
  undefined1 local_110 [8];
  longlong *local_108;
  char local_f8;
  undefined1 local_f0 [8];
  undefined1 local_e8 [112];
  undefined2 *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStackY_a28;
  pwVar39 = (wchar_t *)0x0;
  iVar20 = 0;
  local_9e0 = 0;
  local_928 = param_2;
  local_818 = param_1;
  FMemory::SetupTLSCachesOnCurrentThread();
  UCheatManagerGunfire::GetAllCheats(local_940,"FEngineLoop::PreInit");
  FUN_1415b0f20(param_2);
  UCheatManagerGunfire::GetAllCheats(local_540,"LLM Init");
  FUN_140591050(local_540);
  UCheatManagerGunfire::GetAllCheats(local_528,"InitTaggedStorage");
  FUN_140591050(local_528);
  cVar11 = FParse::Param(param_2,L"UTF8Output");
  if (cVar11 != '\0') {
    FWindowsPlatformMisc::SetUTF8Output();
  }
  FWindowsPlatformProcess::SetCurrentWorkingDirectoryToBaseDir();
  cVar11 = FUN_141658fa0(param_2);
  if (cVar11 == '\0') {
    FUN_140591050(local_940);
    return 0xffffffff;
  }
  FUN_1416a55a0();
  plVar21 = (longlong *)FMemory::Realloc(0,0x20);
  local_1d0 = plVar21;
  if (plVar21 != (longlong *)0x0) {
    *plVar21 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar21[1] = (longlong)DeferredPhysResourceCleanup;
    lVar22 = FDelegateHandle::GenerateNewID();
    plVar21[3] = lVar22;
    *plVar21 = (longlong)&PTR_GetPoolName_143f3f090;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b5848,1);
    (**(code **)(*plVar21 + 0x20))(plVar21,local_638);
    iVar43 = DAT_1464b5850;
    lVar22 = (longlong)DAT_1464b5850;
    DAT_1464b5850 = DAT_1464b5850 + 1;
    if (DAT_1464b5854 < DAT_1464b5850) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b5848,iVar43);
    }
    puVar23 = (undefined8 *)(lVar22 * 0x10 + _DAT_1464b5848);
    *puVar23 = plVar21;
    *(undefined4 *)(puVar23 + 1) = 2;
  }
  local_9d8 = (undefined2 *)0x0;
  local_9d0 = 0;
  UCheatManagerGunfire::GetAllCheats(local_5a0,"LaunchSetGameName");
  cVar11 = FUN_14043da00(param_2,&local_9d8);
  FUN_140591050(local_5a0);
  if (cVar11 == '\0') {
    if (local_9d8 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FUN_140591050(local_940);
    return 1;
  }
  UCheatManagerGunfire::GetAllCheats(local_4f8,"CreateConsoleOutputDevice");
  local_7c0 = (undefined8 *)FWindowsPlatformApplicationMisc::CreateConsoleOutputDevice();
  puVar23 = DAT_1468500a8;
  puVar28 = local_7c0;
  if (DAT_1468500a8 != (undefined8 *)0x0) {
    puVar28 = (undefined8 *)*DAT_1468500a8;
    DAT_1468500a8 = local_7c0;
    (*(code *)*puVar28)(puVar23,1);
    puVar28 = DAT_1468500a8;
  }
  DAT_1468500a8 = puVar28;
  FUN_140591050(local_4f8);
  plVar21 = (longlong *)FUN_141672640();
  (**(code **)(*plVar21 + 0x58))(plVar21,1);
  uVar24 = FCommandLine::Get();
  cVar11 = FParse::Param(uVar24,L"stdout");
  if (cVar11 != '\0') {
    InitializeStdOutDevice();
  }
  if (DAT_14685017d == '\0') {
    local_858 = 0;
    local_850 = 0;
    FUN_140445bc0(&local_810,
                  "FzsabtgpIIX|vgzfzsaIIB|{qzbf5[AIIV`ggp{aCpgf|z{II\\xtrp5S|yp5Pmpv`a|z{5Zea|z{fIIWzgqpgyt{qf&;pmpII"
                 );
    FUN_140445bc0(&local_7d0,"Qpw`rrpg");
    param_4 = (wchar_t *)&local_858;
    puVar41 = &DAT_143f3eda8;
    if (local_7c8 != 0) {
      puVar41 = local_7d0;
    }
    puVar30 = &DAT_143f3eda8;
    if (local_808 != 0) {
      puVar30 = local_810;
    }
    FUN_1416a6530(0xffffffff80000002,puVar30,puVar41);
    if (1 < (int)local_850) {
                    /* WARNING: Subroutine does not return */
      _exit(0);
    }
    DAT_14685017d = '\x01';
    if (local_7d0 != (undefined2 *)0x0) {
      FMemory::Free(local_7d0);
    }
    if (local_810 != (undefined2 *)0x0) {
      FMemory::Free(local_810);
    }
    if (local_858 != 0) {
      FMemory::Free();
    }
  }
  FWindowsPlatformProcess::SetCurrentWorkingDirectoryToBaseDir();
  UCheatManagerGunfire::GetAllCheats(local_4e0,"Fix up the relative project path");
  cVar11 = FUN_1416755d0();
  puVar41 = local_9d8;
  if (cVar11 != '\0') {
    FUN_141672e70(&local_838);
    cVar11 = FPaths::FileExists(&local_838);
    if (cVar11 == '\0') {
      puVar30 = &DAT_143f3eda8;
      if (local_830 != 0) {
        puVar30 = local_838;
      }
      FGenericPlatformMisc::LowLevelOutputDebugStringf(L"Project file not found: %s",puVar30);
      psVar25 = (short *)FUN_1416ac480();
      local_918 = 0;
      local_920 = 0;
      if ((psVar25 != (short *)0x0) && (*psVar25 != 0)) {
        lVar22 = -1;
        do {
          lVar22 = lVar22 + 1;
        } while (psVar25[lVar22] != 0);
        uVar36 = (int)lVar22 + 1;
        local_918 = (ulonglong)uVar36;
        if (0 < (int)uVar36) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_920,0);
        }
        FGenericPlatformString::Memcpy(local_920,psVar25,(longlong)(int)uVar36 * 2);
      }
      uVar24 = FUN_14168e270();
      param_4 = (wchar_t *)&local_920;
      FUProjectDictionary::GetRelativeProjectPathForGame(uVar24,&local_868,&DAT_146299580);
      if (local_920 != 0) {
        FMemory::Free();
      }
      if (1 < local_860) {
        FUN_141680d90(&local_868);
        psVar25 = (short *)FCommandLine::Get();
        local_968 = 0;
        local_970 = (undefined2 *)0x0;
        if ((psVar25 != (short *)0x0) && (*psVar25 != 0)) {
          lVar22 = -1;
          do {
            lVar22 = lVar22 + 1;
          } while (psVar25[lVar22] != 0);
          uVar36 = (int)lVar22 + 1;
          local_968 = (ulonglong)uVar36;
          if (0 < (int)uVar36) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_970,0);
          }
          FGenericPlatformString::Memcpy(local_970,psVar25,(longlong)(int)uVar36 * 2);
        }
        puVar30 = &DAT_143f3eda8;
        if (local_860 != 0) {
          puVar30 = local_868;
        }
        puVar32 = &DAT_143f3eda8;
        if ((int)local_9d0 != 0) {
          puVar32 = puVar41;
        }
        param_4 = (wchar_t *)0x0;
        FString::ReplaceInline(&local_970,puVar32,puVar30);
        puVar30 = &DAT_143f3eda8;
        if ((int)local_968 != 0) {
          puVar30 = local_970;
        }
        FUN_141658fa0(puVar30);
        local_928 = (short *)FCommandLine::Get();
        if (local_970 != (undefined2 *)0x0) {
          FMemory::Free();
        }
      }
      if (local_868 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (local_838 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  FUN_140591050(local_4e0);
  UCheatManagerGunfire::GetAllCheats(local_4c8,"Init Output Devices");
  DAT_1468e28f0 = FUN_1416d1f90();
  DAT_1468b6160 = FUN_1416d2000();
  FUN_140591050(local_4c8);
  UCheatManagerGunfire::GetAllCheats(local_4b0,"LaunchCheckForFileOverride");
  psVar25 = local_928;
  cVar11 = FUN_14043cdf0(local_928,local_9c8);
  FUN_140591050(local_4b0);
  if (cVar11 == '\0') {
    if (puVar41 != (undefined2 *)0x0) {
      FMemory::Free(puVar41);
    }
    FUN_140591050(local_940);
    return 1;
  }
  UCheatManagerGunfire::GetAllCheats(local_498,"IFileManager::Get().ProcessCommandLineOptions");
  puVar23 = (undefined8 *)FUN_1415c3d50();
  (**(code **)*puVar23)(puVar23);
  FUN_140591050(local_498);
  if ((DAT_14686c500 != '\0') && (cVar11 = LaunchHasIncompleteGameName(), cVar11 != '\0')) {
    local_910 = 0;
    local_908 = 0;
    if (DAT_146299580 != 0) {
      lVar22 = -1;
      do {
        lVar22 = lVar22 + 1;
      } while ((&DAT_146299580)[lVar22] != 0);
      uVar36 = (int)lVar22 + 1;
      local_908 = (ulonglong)uVar36;
      if (0 < (int)uVar36) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_910,0);
      }
      FGenericPlatformString::Memcpy(local_910,&DAT_146299580,(longlong)(int)uVar36 * 2);
    }
    FText::FromString(local_618,&local_910);
    if (local_910 != 0) {
      FMemory::Free();
    }
    lVar22 = FText::FText(local_168,local_618);
    uVar24 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_468,
                        L"Error: UE4Editor does not append \'Game\' to the passed in game name.\nYou must use the full name.\nYou specified \'{0}\', use \'{0}Game\'."
                        ,L"LaunchEngineLoop",L"RequiresGamePrefix");
    puVar23 = (undefined8 *)FTextFormat::FTextFormat(local_1e0,uVar24);
    local_120[0] = 4;
    FText::FText(local_110,lVar22);
    local_800 = *puVar23;
    local_8b8 = local_120;
    puStack_8b0 = local_f0;
    local_7f8 = puVar23[1];
    local_f8 = '\x01';
    if (local_7f8 != 0) {
      LOCK();
      *(int *)(local_7f8 + 8) = *(int *)(local_7f8 + 8) + 1;
      UNLOCK();
      puVar41 = local_9d8;
    }
    local_758 = local_8b8;
    puStack_750 = puStack_8b0;
    uVar24 = TArray<FFormatArgumentValue,FDefaultAllocator>::
             TArray<FFormatArgumentValue,FDefaultAllocator>(local_748,&local_758);
    uVar24 = FText::Format(local_510,&local_800,uVar24);
    FText::FText(local_630,uVar24);
    if (local_508 != (longlong *)0x0) {
      LOCK();
      plVar21 = local_508 + 1;
      lVar38 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      puVar41 = local_9d8;
      if ((int)lVar38 == 1) {
        (**(code **)*local_508)(local_508);
        LOCK();
        piVar2 = (int *)((longlong)local_508 + 0xc);
        iVar20 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        puVar41 = local_9d8;
        if (iVar20 == 1) {
          (**(code **)(*local_508 + 8))(local_508,1);
          puVar41 = local_9d8;
        }
      }
    }
    TArray<FFormatArgumentValue,FDefaultAllocator>::~TArray<FFormatArgumentValue,FDefaultAllocator>
              (local_748);
    if ((local_f8 != '\0') && (local_f8 = '\0', local_108 != (longlong *)0x0)) {
      LOCK();
      plVar21 = local_108 + 1;
      lVar38 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      puVar41 = local_9d8;
      if ((int)lVar38 == 1) {
        (**(code **)*local_108)(local_108);
        LOCK();
        piVar2 = (int *)((longlong)local_108 + 0xc);
        iVar20 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        puVar41 = local_9d8;
        if (iVar20 == 1) {
          (**(code **)(*local_108 + 8))(local_108,1);
          puVar41 = local_9d8;
        }
      }
    }
    plVar21 = (longlong *)puVar23[1];
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar21 + 1;
      lVar38 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      puVar41 = local_9d8;
      if ((int)lVar38 == 1) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        iVar20 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        puVar41 = local_9d8;
        if (iVar20 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
          puVar41 = local_9d8;
        }
      }
    }
    plVar21 = *(longlong **)(lVar22 + 8);
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar21 + 1;
      lVar22 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      puVar41 = local_9d8;
      if ((int)lVar22 == 1) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar2 = (int *)((longlong)plVar21 + 0xc);
        iVar20 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        puVar41 = local_9d8;
        if (iVar20 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
          puVar41 = local_9d8;
        }
      }
    }
    FUN_1416786b0(0,local_630,0);
    if (local_628 != (longlong *)0x0) {
      LOCK();
      plVar21 = local_628 + 1;
      lVar22 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      puVar41 = local_9d8;
      if ((int)lVar22 == 1) {
        (**(code **)*local_628)(local_628);
        LOCK();
        piVar2 = (int *)((longlong)local_628 + 0xc);
        iVar20 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        puVar41 = local_9d8;
        if (iVar20 == 1) {
          (**(code **)(*local_628 + 8))(local_628,1);
          puVar41 = local_9d8;
        }
      }
    }
    if (local_460 != (longlong *)0x0) {
      LOCK();
      plVar21 = local_460 + 1;
      lVar22 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      puVar41 = local_9d8;
      if ((int)lVar22 == 1) {
        (**(code **)*local_460)(local_460);
        LOCK();
        piVar2 = (int *)((longlong)local_460 + 0xc);
        iVar20 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        puVar41 = local_9d8;
        if (iVar20 == 1) {
          (**(code **)(*local_460 + 8))(local_460,1);
          puVar41 = local_9d8;
        }
      }
    }
    if (local_610 != (longlong *)0x0) {
      LOCK();
      plVar21 = local_610 + 1;
      lVar22 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      puVar41 = local_9d8;
      if ((int)lVar22 == 1) {
        (**(code **)*local_610)(local_610);
        LOCK();
        piVar2 = (int *)((longlong)local_610 + 0xc);
        iVar20 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        puVar41 = local_9d8;
        if (iVar20 == 1) {
          (**(code **)(*local_610 + 8))(local_610,1);
          puVar41 = local_9d8;
        }
      }
    }
    if (puVar41 != (undefined2 *)0x0) {
      FMemory::Free(puVar41);
    }
    FUN_140591050(local_940);
    return 1;
  }
  DAT_1468c21c0 = GetCurrentThreadId();
  dwThreadAffinityMask = 0;
  DAT_1468c21ae = 1;
  FUN_1415ac290(&DAT_1468e2448);
  FUN_1415b79c0(&DAT_1468e2448);
  FWindowsPlatformProcess::SetThreadAffinityMask(&DAT_ffffffffffffffff,dwThreadAffinityMask);
  lVar22 = -1;
  do {
    lVar22 = lVar22 + 1;
  } while (psVar25[lVar22] != 0);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = (longlong)((int)lVar22 + 1);
  uVar24 = SUB168(ZEXT816(2) * auVar5,0);
  if (SUB168(ZEXT816(2) * auVar5,8) != 0) {
    uVar24 = 0xffffffffffffffff;
  }
  psVar26 = (short *)operator_new(uVar24);
  DAT_14684ff30 = psVar26;
  do {
    sVar3 = *psVar25;
    psVar25 = psVar25 + 1;
    *psVar26 = sVar3;
    psVar26 = psVar26 + 1;
  } while (sVar3 != 0);
  local_998 = DAT_14684ff30;
  FParse::Token(&local_9f0,&local_998,0);
  psVar25 = (short *)FUN_1415b8330();
  local_8f8 = 0;
  local_900 = 0;
  if ((psVar25 != (short *)0x0) && (*psVar25 != 0)) {
    lVar22 = -1;
    do {
      lVar22 = lVar22 + 1;
    } while (psVar25[lVar22] != 0);
    uVar36 = (int)lVar22 + 1;
    local_8f8 = (ulonglong)uVar36;
    if (0 < (int)uVar36) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_900,0);
    }
    FGenericPlatformString::Memcpy(local_900,psVar25,(longlong)(int)uVar36 * 2);
  }
  local_898 = 0;
  local_890 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_898,0);
  FGenericPlatformString::Memcpy(local_898,L"/Engine",0x10);
  AK::MemoryMgr::StartProfileThreadUsage((long)&local_898);
  if (local_898 != 0) {
    FMemory::Free();
  }
  if (local_900 != 0) {
    FMemory::Free();
  }
  local_990 = (longlong *)0x0;
  local_988 = 0;
  local_9b0 = (longlong *)0x0;
  local_9a8 = 0;
  FUN_14043ebd0(DAT_14684ff30,&local_990,&local_9b0);
  plVar21 = local_990;
  iVar43 = (int)local_988;
  bVar45 = false;
  bVar9 = false;
  pwVar42 = pwVar39;
  if (0 < (int)local_988) {
    do {
      iVar44 = (int)pwVar42;
      cVar11 = FString::EndsWith(plVar21 + (longlong)iVar44 * 2,L"Commandlet",1);
      if (cVar11 != '\0') {
        ppwVar27 = (wchar_t **)(plVar21 + (longlong)iVar44 * 2);
        bVar45 = true;
        bVar9 = true;
        if (&local_9f0 != ppwVar27) {
          local_9e8 = *(int *)(ppwVar27 + 1);
          lVar22 = (longlong)local_9e8;
          pwVar42 = *ppwVar27;
          if ((local_9e8 == 0) && (local_9e4 == 0)) {
            local_9e4 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_9f0,local_9e8);
            _guard_xfg_dispatch_icall_nop(local_9f0,pwVar42,lVar22 * 2);
            bVar45 = true;
          }
        }
        break;
      }
      bVar45 = false;
      pwVar42 = (wchar_t *)(ulonglong)(iVar44 + 1U);
    } while ((int)(iVar44 + 1U) < iVar43);
  }
  iVar44 = (int)local_9a8;
  pwVar42 = pwVar39;
  if ((int)local_9a8 < 1) {
    if (bVar45) {
LAB_140441407:
      DAT_1468b616c = '\x01';
    }
  }
  else {
    do {
      if (bVar45) goto LAB_140441407;
      iVar15 = (int)pwVar42;
      cVar11 = FString::StartsWith(local_9b0 + (longlong)iVar15 * 2,L"RUN=",1);
      if (cVar11 != '\0') {
        ppwVar27 = (wchar_t **)(local_9b0 + (longlong)iVar15 * 2);
        bVar9 = true;
        if (&local_9f0 != ppwVar27) {
          local_9e8 = *(int *)(ppwVar27 + 1);
          lVar22 = (longlong)local_9e8;
          pwVar42 = *ppwVar27;
          if ((local_9e8 == 0) && (local_9e4 == 0)) {
            local_9e4 = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_9f0,local_9e8);
            _guard_xfg_dispatch_icall_nop(local_9f0,pwVar42,lVar22 * 2);
          }
        }
        goto LAB_140441407;
      }
      pwVar42 = (wchar_t *)(ulonglong)(iVar15 + 1U);
      bVar45 = bVar9;
    } while ((int)(iVar15 + 1U) < iVar44);
  }
  FString::TrimStartAndEndInline(&local_9f0);
  pwVar42 = local_9f0;
  lVar22 = (longlong)local_9e8;
  local_9c0 = (undefined2 *)0x0;
  local_9b8 = local_9e8;
  if (local_9e8 == 0) {
    local_9b4 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_9c0,local_9e8,0);
    _guard_xfg_dispatch_icall_nop(local_9c0,pwVar42,lVar22 * 2);
  }
  FPaths::NormalizeFilename(&local_9c0);
  pwVar42 = pwVar39;
  if (DAT_146299580 != 0) {
    do {
      wVar4 = pwVar42[0xa314cac0];
      if ((wVar4 == L'\0') && (pwVar42[0xa1f9f6e4] == L'\0')) break;
      if (wVar4 != pwVar42[0xa1f9f6e4]) {
        wVar13 = towlower(wVar4);
        wVar14 = towlower(pwVar42[0xa1f9f6e4]);
        if (wVar13 != wVar14) goto LAB_1404414cc;
      }
      pwVar42 = pwVar42 + 1;
    } while( true );
  }
LAB_14044152a:
  bVar45 = false;
LAB_14044152c:
  cVar11 = FUN_1416755d0();
  if (cVar11 == '\0') {
LAB_140441585:
    local_9dc = '\0';
  }
  else {
    puVar23 = (undefined8 *)FUN_141672e70(local_738);
    if (*(int *)(puVar23 + 1) == 0) {
      puVar30 = &DAT_143f3eda8;
    }
    else {
      puVar30 = (undefined2 *)*puVar23;
    }
    local_9e0 = 1;
    puVar32 = &DAT_143f3eda8;
    if (local_9b8 != 0) {
      puVar32 = local_9c0;
    }
    iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar32,puVar30);
    if (iVar15 != 0) goto LAB_140441585;
    local_9dc = '\x01';
    local_9e0 = 1;
  }
  if (((local_9e0 & 1) != 0) && (local_9e0 = local_9e0 & 0xfffffffe, local_738[0] != 0)) {
    FMemory::Free();
  }
  cVar11 = FUN_1416755d0();
  if (cVar11 == '\0') {
LAB_140441608:
    bVar6 = false;
    local_9f7[0] = '\0';
  }
  else {
    local_9e0 = local_9e0 | 6;
    uVar24 = FUN_141672e70(local_718);
    puVar23 = (undefined8 *)FPaths::GetCleanFilename(local_728,uVar24);
    if (*(int *)(puVar23 + 1) == 0) {
      puVar30 = &DAT_143f3eda8;
    }
    else {
      puVar30 = (undefined2 *)*puVar23;
    }
    pwVar42 = L"";
    if (local_9e8 != 0) {
      pwVar42 = local_9f0;
    }
    iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(pwVar42,puVar30);
    if (iVar15 != 0) goto LAB_140441608;
    bVar6 = true;
    local_9f7[0] = '\x01';
  }
  if (((local_9e0 & 4) != 0) && (local_9e0 = local_9e0 & 0xfffffffb, local_728[0] != 0)) {
    FMemory::Free();
  }
  if (((local_9e0 & 2) != 0) && (local_9e0 = local_9e0 & 0xfffffffd, local_718[0] != 0)) {
    FMemory::Free();
  }
  psVar25 = local_998;
  if (((bVar45) || (local_9dc != '\0')) || (bVar6)) {
    local_8f0 = (short *)0x0;
    local_8e8 = 0;
    if ((local_998 == (short *)0x0) || (*local_998 == 0)) {
LAB_1404416c4:
      psVar26 = &DAT_143f3eda8;
      psVar25 = DAT_14684ff30;
    }
    else {
      lVar22 = -1;
      do {
        lVar22 = lVar22 + 1;
      } while (local_998[lVar22] != 0);
      uVar36 = (int)lVar22 + 1;
      local_8e8 = (ulonglong)uVar36;
      if (0 < (int)uVar36) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8f0,0);
      }
      psVar26 = local_8f0;
      FGenericPlatformString::Memcpy(local_8f0,psVar25,(longlong)(int)uVar36 * 2);
      psVar25 = DAT_14684ff30;
      if ((int)local_8e8 == 0) goto LAB_1404416c4;
    }
    do {
      sVar3 = *psVar26;
      psVar26 = psVar26 + 1;
      *psVar25 = sVar3;
      psVar25 = psVar25 + 1;
    } while (sVar3 != 0);
    local_998 = DAT_14684ff30;
    FUN_141658fa0();
    ppwVar27 = (wchar_t **)FParse::Token(local_708,&local_998,0);
    if (&local_9f0 != ppwVar27) {
      if (local_9f0 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      local_9f0 = *ppwVar27;
      *ppwVar27 = (wchar_t *)0x0;
      local_9e8 = *(int *)(ppwVar27 + 1);
      local_9e4 = *(int *)((longlong)ppwVar27 + 0xc);
      ppwVar27[1] = (wchar_t *)0x0;
    }
    while( true ) {
      if (local_708[0] != 0) {
        FMemory::Free();
      }
      FString::TrimStartInline(&local_9f0);
      puVar23 = (undefined8 *)FUN_1416bb0a0(local_6e8);
      puVar28 = (undefined8 *)FUN_141672300(local_6f8,&local_9f0,0);
      if (*(int *)(puVar23 + 1) == 0) {
        puVar30 = &DAT_143f3eda8;
      }
      else {
        puVar30 = (undefined2 *)*puVar23;
      }
      if (*(int *)(puVar28 + 1) == 0) {
        puVar32 = &DAT_143f3eda8;
      }
      else {
        puVar32 = (undefined2 *)*puVar28;
      }
      iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar32,puVar30);
      if (local_6f8[0] != 0) {
        FMemory::Free();
      }
      if (local_6e8[0] != 0) {
        FMemory::Free();
      }
      if (iVar15 != 0) break;
      ppwVar27 = (wchar_t **)FParse::Token(local_6d8,&local_998);
      local_708[0] = local_6d8[0];
      if (&local_9f0 != ppwVar27) {
        if (local_9f0 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        local_9f0 = *ppwVar27;
        *ppwVar27 = (wchar_t *)0x0;
        local_9e8 = *(int *)(ppwVar27 + 1);
        local_9e4 = *(int *)((longlong)ppwVar27 + 0xc);
        ppwVar27[1] = (wchar_t *)0x0;
        local_708[0] = local_6d8[0];
      }
    }
    if ((local_9dc != '\0') || (local_9f7[0] != '\0')) {
      puVar23 = (undefined8 *)FUN_141672e70(local_6c8);
      if (*(int *)(puVar23 + 1) == 0) {
        puVar30 = &DAT_143f3eda8;
      }
      else {
        puVar30 = (undefined2 *)*puVar23;
      }
      FUN_1415c0f30(&local_848,puVar30);
      if (local_6c8[0] != 0) {
        FMemory::Free();
      }
      puVar23 = (undefined8 *)FUN_141672e70(local_6b8);
      if (*(int *)(puVar23 + 1) == 0) {
        puVar30 = &DAT_143f3eda8;
      }
      else {
        puVar30 = (undefined2 *)*puVar23;
      }
      puVar32 = &DAT_143f3eda8;
      if (local_840 != 0) {
        puVar32 = local_848;
      }
      iVar15 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar32,puVar30);
      if (local_6b8[0] != 0) {
        FMemory::Free();
      }
      if (iVar15 != 0) {
        FUN_141680d90(&local_848);
      }
      if (local_848 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (local_8f0 != (short *)0x0) {
      FMemory::Free();
    }
  }
  DAT_14684ff22 = '\0';
  DAT_14684ff38 = (short *)0x0;
  iVar15 = 0;
  if (bVar9) {
    cVar11 = FString::StartsWith(&local_9f0,L"run=",1);
    if (cVar11 != '\0') {
      if (local_9e8 == 0) {
        param_4 = L"";
        iVar37 = iVar20;
      }
      else {
        param_4 = local_9f0;
        iVar37 = local_9e8 + -1;
      }
      iVar1 = iVar37 + -4;
      iVar16 = iVar20;
      if ((-1 < iVar1) && (iVar16 = iVar37, iVar1 < iVar37)) {
        iVar16 = iVar1;
      }
      local_948 = 0;
      local_944 = 0;
      local_950 = (wchar_t *)0x0;
      pwVar42 = param_4 + ((longlong)iVar37 - (longlong)iVar16);
      if ((pwVar42 != (wchar_t *)0x0) && (*pwVar42 != L'\0')) {
        lVar22 = -1;
        do {
          lVar22 = lVar22 + 1;
        } while (pwVar42[lVar22] != L'\0');
        iVar37 = (int)lVar22 + 1;
        local_948 = iVar37;
        if (0 < iVar37) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_950,0);
        }
        FGenericPlatformString::Memcpy(local_950,pwVar42,(longlong)iVar37 * 2);
      }
      iVar37 = local_948;
      if (local_9f0 != (wchar_t *)0x0) {
        FMemory::Free(local_9f0);
      }
      local_9f0 = local_950;
      local_9e4 = local_944;
      local_9e8 = iVar37;
      cVar11 = FString::EndsWith(&local_9f0,L"Commandlet",1);
      iVar37 = local_9e8;
      if (cVar11 == '\0') {
        lVar22 = (longlong)local_9e8;
        local_9e8 = (0xb - (uint)(local_9e8 != 0)) + local_9e8;
        if (local_9e4 < local_9e8) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9f0,iVar37);
        }
        builtin_wcsncpy(local_9f0 + (lVar22 - (ulonglong)(iVar37 != 0)),L"Commandlet",0xb);
      }
    }
    DAT_14684ff38 = local_998;
  }
  DAT_14684ff22 = '\0';
  DAT_1468b5a25 = '\0';
  uVar24 = FCommandLine::Get();
  cVar11 = FParse::Param(uVar24,L"Deterministic");
  if (cVar11 == '\0') {
    uVar24 = FCommandLine::Get();
    cVar12 = FParse::Param(uVar24,L"UseFixedTimeStep");
    if (cVar12 != '\0') goto LAB_140441a9b;
    DAT_1468b5a26 = 0;
LAB_140441aa6:
    if (DAT_1468b5a25 != '\0') goto LAB_140441ac7;
    uVar24 = FCommandLine::Get();
    cVar11 = FParse::Param(uVar24,L"FixedSeed");
    DAT_1468b5a24 = '\0';
    if (cVar11 != '\0') goto LAB_140441ac7;
  }
  else {
LAB_140441a9b:
    DAT_1468b5a26 = 1;
    if (cVar11 == '\0') goto LAB_140441aa6;
LAB_140441ac7:
    DAT_1468b5a24 = '\x01';
  }
  pwVar42 = pwVar39;
  uVar18 = 0;
  if (DAT_1468b5a24 == '\0') {
    QueryPerformanceCounter(&local_828);
    QueryPerformanceCounter(&local_820);
    pwVar42 = (wchar_t *)(ulonglong)local_820.s.LowPart;
    uVar18 = local_828.s.LowPart;
  }
  srand(uVar18);
  FUN_1415b61a0(pwVar42);
  if ((DAT_14686c500 == '\0') && (pwVar42 = pwVar39, DAT_146299580 != 0)) {
    do {
      wVar4 = pwVar42[0xa314cac0];
      if ((wVar4 == L'\0') && (pwVar42[0xa1f9f6e4] == L'\0')) break;
      if (wVar4 != pwVar42[0xa1f9f6e4]) {
        wVar13 = towlower(wVar4);
        wVar14 = towlower(pwVar42[0xa1f9f6e4]);
        if (wVar13 != wVar14) goto LAB_140441b7c;
      }
      pwVar42 = pwVar42 + 1;
    } while( true );
  }
LAB_140441c74:
  cVar11 = FUN_1416755d0();
  if (cVar11 != '\0') {
    UCheatManagerGunfire::GetAllCheats(local_600,"IProjectManager::Get().LoadProjectFile");
    plVar21 = (longlong *)IProjectManager::Get();
    lVar22 = *plVar21;
    uVar24 = FUN_141672e70(local_688);
    cVar11 = (**(code **)(lVar22 + 0x10))(plVar21,uVar24);
    if (local_688[0] != 0) {
      FMemory::Free();
    }
    if (cVar11 == '\0') {
      FUN_140591050(local_600);
      plVar21 = local_9b0;
      plVar7 = local_9b0;
      if (local_9c0 != (undefined2 *)0x0) {
        FMemory::Free();
        plVar21 = local_9b0;
        plVar7 = local_9b0;
      }
      for (; plVar10 = local_9b0, iVar44 != 0; iVar44 = iVar44 + -1) {
        local_9b0 = plVar7;
        if (*plVar21 != 0) {
          FMemory::Free();
        }
        plVar21 = plVar21 + 2;
        plVar7 = local_9b0;
        local_9b0 = plVar10;
      }
      bVar45 = local_9b0 != (longlong *)0x0;
      local_9b0 = plVar7;
      plVar21 = local_990;
      plVar8 = local_990;
      if (bVar45) {
        FMemory::Free(plVar10);
        plVar21 = local_990;
        plVar8 = local_990;
      }
      for (; plVar7 = local_990, iVar43 != 0; iVar43 = iVar43 + -1) {
        local_990 = plVar8;
        if (*plVar21 != 0) {
          FMemory::Free();
        }
        plVar21 = plVar21 + 2;
        plVar8 = local_990;
        local_990 = plVar7;
      }
      bVar45 = local_990 != (longlong *)0x0;
      local_990 = plVar8;
      if (bVar45) {
        FMemory::Free(plVar7);
      }
      if (local_9f0 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      if (puVar41 != (undefined2 *)0x0) {
        FMemory::Free(puVar41);
      }
      FUN_140591050(local_940);
      return 1;
    }
    plVar21 = (longlong *)IProjectManager::Get();
    cVar11 = (**(code **)(*plVar21 + 0x98))(plVar21);
    uVar36 = local_9e0;
    if (cVar11 == '\0') {
LAB_140441dbe:
      bVar45 = false;
    }
    else {
      uVar36 = local_9e0 | 8;
      local_9e0 = uVar36;
      uVar24 = FPaths::EnterpriseDir(local_678);
      cVar11 = FPaths::DirectoryExists(uVar24);
      if (cVar11 == '\0') goto LAB_140441dbe;
      bVar45 = true;
    }
    if (((uVar36 & 8) != 0) && (local_9e0 = uVar36 & 0xfffffff7, local_678[0] != 0)) {
      FMemory::Free();
    }
    if (bVar45) {
      uVar24 = FGenericPlatformMisc::GetUBTPlatform();
      puVar23 = (undefined8 *)FPaths::EnterpriseDir(local_668);
      if (*(int *)(puVar23 + 1) == 0) {
        local_78 = &DAT_143f3eda8;
      }
      else {
        local_78 = (undefined2 *)*puVar23;
      }
      local_70 = L"Binaries";
      local_8a8 = (undefined2 *)0x0;
      local_8a0 = 0;
      local_68 = uVar24;
      FPaths::CombineInternal(&local_8a8,&local_78,3);
      puVar30 = &DAT_143f3eda8;
      if ((int)local_8a0 != 0) {
        puVar30 = local_8a8;
      }
      uVar24 = FUN_14168dc80();
      FUN_14168a410(uVar24,puVar30,0);
      if (local_8a8 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (local_668[0] != 0) {
        FMemory::Free();
      }
    }
    FUN_140591050(local_600);
  }
  uVar46 = (ulong)in_stack_fffffffffffff5f8;
  pwVar42 = pwVar39;
  if (DAT_146299580 != 0) {
    do {
      uVar46 = (ulong)in_stack_fffffffffffff5f8;
      wVar4 = pwVar42[0xa314cac0];
      if ((wVar4 == L'\0') && (pwVar42[0xa1f9f6e4] == L'\0')) break;
      if (wVar4 != pwVar42[0xa1f9f6e4]) {
        wVar13 = towlower(wVar4);
        wVar14 = towlower(pwVar42[0xa1f9f6e4]);
        uVar46 = (ulong)in_stack_fffffffffffff5f8;
        if (wVar13 != wVar14) goto LAB_140441f0c;
      }
      pwVar42 = pwVar42 + 1;
    } while( true );
  }
LAB_140441fa1:
  UCheatManagerGunfire::GetAllCheats(local_450,"FTaskGraphInterface::Startup");
  uVar18 = FUN_1416a5660();
  FUN_14159a1a0(uVar18);
  plVar21 = (longlong *)FTaskGraphInterface::Get();
  (**(code **)(*plVar21 + 0x28))(plVar21,2);
  FUN_140591050(local_450);
  UCheatManagerGunfire::GetAllCheats(local_438,"LoadCoreModules");
  puVar23 = (undefined8 *)FName::FName(&local_9a0,L"CoreUObject",1);
  uVar24 = FUN_14168dc80();
  lVar22 = FUN_141690010(uVar24,*puVar23);
  FUN_140591050(local_438);
  if (lVar22 == 0) {
    plVar21 = local_9b0;
    plVar7 = local_9b0;
    if (local_9c0 != (undefined2 *)0x0) {
      FMemory::Free();
      plVar21 = local_9b0;
      plVar7 = local_9b0;
    }
    for (; plVar10 = local_9b0, iVar44 != 0; iVar44 = iVar44 + -1) {
      local_9b0 = plVar7;
      if (*plVar21 != 0) {
        FMemory::Free();
      }
      plVar21 = plVar21 + 2;
      plVar7 = local_9b0;
      local_9b0 = plVar10;
    }
    bVar45 = local_9b0 != (longlong *)0x0;
    local_9b0 = plVar7;
    plVar21 = local_990;
    plVar8 = local_990;
    if (bVar45) {
      FMemory::Free(plVar10);
      plVar21 = local_990;
      plVar8 = local_990;
    }
    for (; plVar7 = local_990, iVar43 != 0; iVar43 = iVar43 + -1) {
      local_990 = plVar8;
      if (*plVar21 != 0) {
        FMemory::Free();
      }
      plVar21 = plVar21 + 2;
      plVar8 = local_990;
      local_990 = plVar7;
    }
    bVar45 = local_990 != (longlong *)0x0;
    local_990 = plVar8;
    if (bVar45) {
      FMemory::Free(plVar7);
    }
    if (local_9f0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (puVar41 != (undefined2 *)0x0) {
      FMemory::Free(puVar41);
    }
    FUN_140591050(local_940);
    return 1;
  }
  InitializeRenderingCVarsCaching();
  if (((local_9e8 == 0) || (local_9e8 == 1)) || (iVar37 = _wcsnicmp(local_9f0,L"-",1), iVar37 == 0))
  {
    DAT_14684ff25 = '\0';
  }
  else {
    DAT_14684ff25 = '\x01';
  }
  cVar11 = FUN_1415bac00();
  if (cVar11 != '\0') {
    UCheatManagerGunfire::GetAllCheats(local_420,"Init FQueuedThreadPool\'s");
    iVar37 = 0x80;
    if (DAT_14684ff22 != '\0') {
      iVar37 = 1000;
    }
    DAT_1468b5010 = (longlong *)FQueuedThreadPool::Allocate();
    uVar18 = FUN_1416a58c0();
    (**(code **)*DAT_1468b5010)(DAT_1468b5010,uVar18,iVar37 << 10,5);
    (**(code **)(*DAT_1468b5010 + 0x38))(DAT_1468b5010,2,1);
    DAT_1468b5020 = (longlong *)FQueuedThreadPool::Allocate();
    param_4 = (wchar_t *)&DAT_00000004;
    (**(code **)*DAT_1468b5020)(DAT_1468b5020,2,0x20000);
    (**(code **)(*DAT_1468b5020 + 0x38))(DAT_1468b5020,3,1);
    DAT_1468b5028 = DAT_1468b5020;
    FUN_140591050(local_420);
  }
  DAT_1468b6158 = (longlong)DAT_1468500a8;
  UCheatManagerGunfire::GetAllCheats(local_408,"LoadPreInitModules");
  puVar23 = (undefined8 *)FName::FName(local_7b8,L"Engine",1);
  uVar24 = FUN_14168dc80();
  FUN_141690010(uVar24,*puVar23);
  puVar23 = (undefined8 *)FName::FName(local_7b0,L"Renderer",1);
  uVar24 = FUN_14168dc80();
  FUN_141690010(uVar24,*puVar23);
  puVar23 = (undefined8 *)FName::FName(local_7a8,L"AnimGraphRuntime",1);
  uVar24 = FUN_14168dc80();
  FUN_141690010(uVar24,*puVar23);
  FUN_1416d5930();
  if (DAT_146ab62f7 == '\0') {
    FUN_14168dc80();
    puVar23 = (undefined8 *)FName::FName(local_768,"SlateRHIRenderer",1);
    uVar24 = *puVar23;
    uVar29 = FUN_14168dc80();
    FUN_141690010(uVar29,uVar24);
  }
  puVar23 = (undefined8 *)FName::FName(local_7a0,L"ScaleformUI",1);
  uVar24 = FUN_14168dc80();
  FUN_141690010(uVar24,*puVar23);
  puVar23 = (undefined8 *)FName::FName(local_798,L"Landscape",1);
  uVar24 = FUN_14168dc80();
  FUN_141690010(uVar24,*puVar23);
  puVar23 = (undefined8 *)FName::FName(local_790,L"ShaderCore",1);
  uVar24 = FUN_14168dc80();
  FUN_141690010(uVar24,*puVar23);
  FUN_140591050(local_408);
  uVar40 = 0x40445ca0;
  FUN_140437810(&DAT_1464af208,local_788);
  uVar24 = FUN_14168db40();
  FUN_14168f470(uVar24);
  UCheatManagerGunfire::GetAllCheats(local_3f0,"AppInit");
  cVar11 = FUN_140439e00();
  FUN_140591050(local_3f0);
  if (cVar11 == '\0') {
    plVar21 = local_9b0;
    plVar7 = local_9b0;
    if (local_9c0 != (undefined2 *)0x0) {
      FMemory::Free();
      plVar21 = local_9b0;
      plVar7 = local_9b0;
    }
    for (; plVar10 = local_9b0, iVar44 != 0; iVar44 = iVar44 + -1) {
      local_9b0 = plVar7;
      if (*plVar21 != 0) {
        FMemory::Free();
      }
      plVar21 = plVar21 + 2;
      plVar7 = local_9b0;
      local_9b0 = plVar10;
    }
    bVar45 = local_9b0 != (longlong *)0x0;
    local_9b0 = plVar7;
    plVar21 = local_990;
    plVar8 = local_990;
    if (bVar45) {
      FMemory::Free(plVar10);
      plVar21 = local_990;
      plVar8 = local_990;
    }
    for (; plVar7 = local_990, iVar43 != 0; iVar43 = iVar43 + -1) {
      local_990 = plVar8;
      if (*plVar21 != 0) {
        FMemory::Free();
      }
      plVar21 = plVar21 + 2;
      plVar8 = local_990;
      local_990 = plVar7;
    }
    bVar45 = local_990 != (longlong *)0x0;
    local_990 = plVar8;
    if (bVar45) {
      FMemory::Free(plVar7);
    }
    if (local_9f0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (puVar41 != (undefined2 *)0x0) {
      FMemory::Free(puVar41);
    }
    FUN_140591050(local_940);
    return 1;
  }
  UCheatManagerGunfire::GetAllCheats(local_3d8,"InitializeNewAsyncIO");
  uVar24 = FPlatformFileManager::Get();
  FPlatformFileManager::InitializeNewAsyncIO(uVar24);
  FUN_140591050(local_3d8);
  cVar11 = FUN_1415bac00();
  if (cVar11 != '\0') {
    EVar33 = 0x43f3cd30;
    EVar31 = (ErrorCode)local_3c0;
    UCheatManagerGunfire::GetAllCheats();
    DAT_1468b5018 = (longlong *)FQueuedThreadPool::Allocate();
    AVar19 = AK::Monitor::PostCode
                       (EVar31,EVar33,uVar40,(__uint64)param_4,uVar46,
                        (bool)in_stack_fffffffffffff600);
    (**(code **)*DAT_1468b5018)(DAT_1468b5018,AVar19,0x18000,1);
    (**(code **)(*DAT_1468b5018 + 0x38))(DAT_1468b5018,1,1);
    FUN_140591050(local_3c0);
  }
  UCheatManagerGunfire::GetAllCheats(local_3a8,"System settings and cvar init");
  FSystemSettings::Initialize(&PTR_PTR_146534f38,DAT_14684ff22);
  puVar30 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar30 = DAT_1468e2360;
  }
  FUN_141643200(L"/Script/Engine.RendererSettings",puVar30,0x3000000,0);
  puVar30 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar30 = DAT_1468e2360;
  }
  FUN_141643200(L"/Script/Engine.RendererOverrideSettings",puVar30,0x3000000,0);
  puVar30 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar30 = DAT_1468e2360;
  }
  FUN_141643200(L"/Script/Engine.StreamingSettings",puVar30,0x3000000,0);
  puVar30 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar30 = DAT_1468e2360;
  }
  FUN_141643200(L"/Script/Engine.GarbageCollectionSettings",puVar30,0x3000000,0);
  puVar30 = &DAT_143f3eda8;
  if (DAT_1468e2368 != 0) {
    puVar30 = DAT_1468e2360;
  }
  FUN_141643200(L"/Script/Engine.NetworkSettings",puVar30,0x3000000,0);
  FUN_142414670(0);
  if (DAT_1468b616c == '\0') {
    FUN_142488db0();
  }
  FUN_140591050(local_3a8);
  UCheatManagerGunfire::GetAllCheats(local_390,"Scalability::LoadState");
  if ((DAT_14684ff22 == '\0') || (puVar23 = &DAT_1468e23a0, DAT_1468e23a8 < 2)) {
    puVar23 = &DAT_1468e2420;
  }
  Scalability::LoadState(puVar23);
  FUN_140591050(local_390);
  cVar11 = FGenericPlatformMisc::UseRenderThread();
  if (cVar11 != '\0') {
    DAT_146ac3ac6 = '\x01';
  }
  UCheatManagerGunfire::GetAllCheats(local_378,"LoadConsoleVariablesFromINI");
  FConfigCacheIni::LoadConsoleVariablesFromINI();
  FUN_140591050(local_378);
  UCheatManagerGunfire::GetAllCheats(local_360,"Platform Initialization");
  FWindowsPlatformMisc::PlatformInit();
  FUN_1416d4770();
  FWindowsPlatformMemory::Init();
  FUN_140591050(local_360);
  lVar22 = DAT_1468b6158;
  if (DAT_1468b6158 != 0) {
    psVar25 = &DAT_143f3eda8;
    if (DAT_1468e2418 != 0) {
      psVar25 = DAT_1468e2410;
    }
    if (*(short **)(DAT_1468b6158 + 0x10) != psVar25) {
      pwVar42 = pwVar39;
      if ((psVar25 != (short *)0x0) && (*psVar25 != 0)) {
        lVar38 = -1;
        do {
          lVar38 = lVar38 + 1;
        } while (psVar25[lVar38] != 0);
        pwVar42 = (wchar_t *)(ulonglong)((int)lVar38 + 1);
      }
      *(undefined4 *)(DAT_1468b6158 + 0x18) = 0;
      iVar43 = (int)pwVar42;
      pwVar34 = pwVar39;
      if (*(int *)(lVar22 + 0x1c) != iVar43) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(lVar22 + 0x10,pwVar42);
        pwVar34 = (wchar_t *)(ulonglong)*(uint *)(lVar22 + 0x18);
      }
      iVar44 = iVar43 + (int)pwVar34;
      *(int *)(lVar22 + 0x18) = iVar44;
      if (*(int *)(lVar22 + 0x1c) < iVar44) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(lVar22 + 0x10);
      }
      if (iVar43 != 0) {
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar22 + 0x10),psVar25,(longlong)iVar43 * 2);
      }
    }
  }
  cVar11 = FWindowsPlatformMisc::CommandLineCommands();
  if (cVar11 == '\0') {
    FUN_1416a8180(0);
  }
  DAT_14684ff24 = '\0';
  if (DAT_14684ff22 == '\0') {
    DAT_1468c2172 = 1;
    DAT_1468c2173 = 1;
    DAT_1468b616c = '\x01';
    uVar24 = FCommandLine::Get();
    DAT_1468b616d = FParse::Param(uVar24,L"AllowCommandletRendering");
    uVar24 = FCommandLine::Get();
    DAT_1468b616e = FParse::Param(uVar24,L"AllowCommandletAudio");
    if ((DAT_14684ff25 == '\0') ||
       (cVar11 = FString::EndsWith(&local_9f0,L"Commandlet",1), cVar11 == '\0')) {
      bVar45 = false;
    }
    else {
      bVar45 = true;
    }
    if (DAT_14684ff25 == '\0') {
      cVar11 = FString::StartsWith(&local_9f0,L"run=",1);
      if (cVar11 == '\0') {
        if (!bVar45) {
LAB_1404428e4:
          DAT_14684ff24 = '\x01';
          DAT_1468c2172 = 1;
          DAT_1468c2173 = 0;
          DAT_1468b616c = '\0';
        }
      }
      else {
        if (local_9e8 == 0) {
          pwVar42 = L"";
        }
        else {
          iVar20 = local_9e8 + -1;
          pwVar42 = local_9f0;
        }
        iVar43 = iVar20 + -4;
        iVar44 = iVar15;
        if ((-1 < iVar43) && (iVar44 = iVar20, iVar43 < iVar20)) {
          iVar44 = iVar43;
        }
        local_8e0 = (wchar_t *)0x0;
        local_8d8 = 0;
        local_8d4 = 0;
        pwVar42 = pwVar42 + ((longlong)iVar20 - (longlong)iVar44);
        if ((pwVar42 != (wchar_t *)0x0) && (*pwVar42 != L'\0')) {
          lVar22 = -1;
          do {
            lVar22 = lVar22 + 1;
          } while (pwVar42[lVar22] != L'\0');
          iVar20 = (int)lVar22 + 1;
          local_8d8 = iVar20;
          if (0 < iVar20) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8e0,0);
          }
          iVar15 = local_8d8;
          pwVar39 = local_8e0;
          FGenericPlatformString::Memcpy(local_8e0,pwVar42,(longlong)iVar20 * 2);
        }
        iVar20 = local_8d4;
        if (local_9f0 != (wchar_t *)0x0) {
          FMemory::Free(local_9f0);
        }
        local_9f0 = pwVar39;
        local_9e8 = iVar15;
        local_9e4 = iVar20;
        cVar11 = FString::EndsWith(&local_9f0,L"Commandlet",1);
        iVar20 = local_9e8;
        if (cVar11 == '\0') {
          lVar22 = (longlong)local_9e8;
          local_9e8 = (0xb - (uint)(local_9e8 != 0)) + local_9e8;
          if (local_9e4 < local_9e8) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9f0,iVar20);
          }
          builtin_wcsncpy(local_9f0 + (lVar22 - (ulonglong)(iVar20 != 0)),L"Commandlet",0xb);
        }
      }
    }
    else if (!bVar45) {
      local_8d0 = (undefined2 *)0x0;
      TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_8d0,local_9f0,local_9e8,0);
      iVar20 = local_8c8;
      lVar22 = (longlong)local_8c8;
      local_8c8 = (0xb - (uint)(local_8c8 != 0)) + local_8c8;
      if (local_8c4 < local_8c8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_8d0,iVar20);
      }
      puVar30 = local_8d0;
      lVar22 = lVar22 - (ulonglong)(iVar20 != 0);
      puVar32 = &DAT_143f3eda8;
      if (local_8c8 != 0) {
        puVar32 = local_8d0;
      }
      pwVar39 = local_8d0 + lVar22;
      pwVar39[0] = L'C';
      pwVar39[1] = L'o';
      pwVar39[2] = L'm';
      pwVar39[3] = L'm';
      pwVar39[4] = L'a';
      pwVar39[5] = L'n';
      pwVar39[6] = L'd';
      pwVar39[7] = L'l';
      *(undefined4 *)(local_8d0 + lVar22 + 8) = 0x740065;
      local_8d0[lVar22 + 10] = 0;
      lVar22 = FUN_140437f10(0xffffffffffffffff,puVar32);
      if (puVar30 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      iVar20 = local_9e8;
      if (lVar22 == 0) goto LAB_1404428e4;
      lVar22 = (longlong)local_9e8;
      local_9e8 = (0xb - (uint)(local_9e8 != 0)) + local_9e8;
      if (local_9e4 < local_9e8) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_9f0,iVar20);
      }
      builtin_wcsncpy(local_9f0 + (lVar22 - (ulonglong)(iVar20 != 0)),L"Commandlet",0xb);
    }
  }
  DAT_14684ff23 = DAT_14684ff22;
  if (((DAT_1468500b0 == 0) && (DAT_14684ff22 == '\0')) && (DAT_14684ff24 == '\0')) {
    UCheatManagerGunfire::GetAllCheats(local_348,"InitializeStdOutDevice");
    InitializeStdOutDevice();
    FUN_140591050(local_348);
  }
  UCheatManagerGunfire::GetAllCheats(local_330,"IPlatformFeaturesModule::Get()");
  if (DAT_146850158 == (undefined8 *)0x0) {
    DAT_146850158 = (undefined8 *)operator_new(8);
    if (DAT_146850158 == (undefined8 *)0x0) {
      DAT_146850158 = (undefined8 *)0x0;
    }
    else {
      *DAT_146850158 = &PTR_FUN_143f3eef8;
    }
  }
  FUN_140591050(local_330);
  UCheatManagerGunfire::GetAllCheats(local_5e8,"InitGamePhys");
  cVar11 = FUN_1426e3720();
  if (cVar11 == '\0') {
    FUN_140591050(local_5e8);
    if (local_9c0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_9b0);
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_990);
    if (local_9f0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (puVar41 != (undefined2 *)0x0) {
      FMemory::Free(puVar41);
    }
    FUN_140591050(local_940);
    return 1;
  }
  FUN_140591050(local_5e8);
  FUN_1416acd50();
  if (DAT_14684ff22 != '\0') {
    uVar24 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                       (local_318,L"Editor not supported in this mode.",L"Engine",
                        L"EditorNotSupported");
    FUN_1416786b0(0,uVar24,0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_318);
    FUN_1416a8180(0);
    if (local_9c0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_9b0);
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_990);
    if (local_9f0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (puVar41 != (undefined2 *)0x0) {
      FMemory::Free(puVar41);
    }
    FUN_140591050(local_940);
    return 1;
  }
  plVar21 = (longlong *)FUN_141672640();
  (**(code **)(*plVar21 + 0x58))(plVar21,0);
  FUN_14160c6f0();
  FUN_1418a0d80();
  FUN_1424fd300();
  cVar11 = FUN_141636a40();
  if (cVar11 != '\0') {
    local_9f7[0] = '\0';
    FConfigCacheIni::GetBool(DAT_1468b6148,L"Audio",L"UseAudioThread",local_9f7);
    FAudioThread::SetUseThreadedAudio(local_9f7[0]);
  }
  cVar11 = FUN_1415bac00();
  if ((cVar11 != '\0') && ((DAT_14684ff24 != '\0' || (DAT_14684ff22 != '\0')))) {
    UCheatManagerGunfire::GetAllCheats(local_300,"FPlatformSplash::Show()");
    FWindowsPlatformSplash::Show();
    FUN_140591050(local_300);
  }
  puVar23 = (undefined8 *)FName::FName(local_780,L"ScaleformUI",1);
  uVar24 = FUN_14168dc80();
  FUN_141690010(uVar24,*puVar23);
  if ((DAT_14684ff22 == '\0') && (DAT_14684ff24 == '\0')) {
    EKeys::Initialize();
    FCoreStyle::ResetToDefault();
  }
  else {
    UCheatManagerGunfire::GetAllCheats(local_2e8,"FSlateApplication::Create()");
    FUN_141893930();
    FUN_140591050(local_2e8);
  }
  uVar24 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                     (local_2d0,L"Initializing...",L"EngineLoop",L"EngineLoop_Initializing");
  FUN_141660a80(local_e8,0x42c80000,uVar24,1);
  FSlowTask::Initialize(local_e8);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_2d0);
  uVar24 = FText::FText(local_150);
  FSlowTask::EnterProgressFrame(local_e8,0x41200000,uVar24);
  local_188 = 0;
  local_178 = 0;
  puVar23 = (undefined8 *)FUN_140438ef0(0x10,local_1a8);
  if (puVar23 != (undefined8 *)0x0) {
    *puVar23 = &PTR_FUN_143f3f130;
  }
  local_1b8[0] = &LAB_14043a6b0;
  uVar24 = FUN_1416f8860();
  FUN_1416fadd0(uVar24,local_1b8);
  UCheatManagerGunfire::GetAllCheats(local_2b8,"FUniformBufferStruct::InitializeStructs()");
  FUniformBufferStruct::InitializeStructs();
  FUN_140591050(local_2b8);
  UCheatManagerGunfire::GetAllCheats(local_2a0,"RHIInit");
  FUN_141ed0ab0(DAT_14684ff22);
  FUN_140591050(local_2a0);
  UCheatManagerGunfire::GetAllCheats(local_288,"FShaderCodeLibrary::InitForRuntime");
  FUN_1419f1df0(DAT_146ab62cc);
  FUN_140591050(local_288);
  UCheatManagerGunfire::GetAllCheats(local_270,"FShaderPipelineCache::Initialize");
  FUN_1419f36c0(DAT_146ab62cc);
  FUN_140591050(local_270);
  FUN_141a0cce0(0);
  FUN_1419ff1b0();
  psVar25 = (short *)FCommandLine::Get();
  local_978 = 0;
  local_980 = (undefined2 *)0x0;
  if ((psVar25 == (short *)0x0) || (*psVar25 == 0)) {
LAB_140442eb9:
    puVar30 = &DAT_143f3eda8;
  }
  else {
    lVar22 = -1;
    do {
      lVar22 = lVar22 + 1;
    } while (psVar25[lVar22] != 0);
    uVar36 = (int)lVar22 + 1;
    local_978 = (ulonglong)uVar36;
    if (0 < (int)uVar36) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_980,0);
    }
    FGenericPlatformString::Memcpy(local_980,psVar25,(longlong)(int)uVar36 * 2);
    puVar30 = local_980;
    if ((int)local_978 == 0) goto LAB_140442eb9;
  }
  cVar11 = FParse::Param(puVar30,L"NoShaderCompile");
  UCheatManagerGunfire::GetAllCheats(local_258,"GetRendererModule");
  GetRendererModule();
  FUN_140591050(local_258);
  FExternalTextureRegistry::Get();
  UCheatManagerGunfire::GetAllCheats(local_240,"InitializeShaderTypes");
  InitializeShaderTypes();
  FUN_140591050(local_240);
  uVar24 = FText::FText(local_138);
  FSlowTask::EnterProgressFrame(local_e8,0x41f00000,uVar24);
  if (((cVar11 == '\0') && (iVar20 = FUN_141592950(&local_980,L"cookcommandlet",1,0), iVar20 == -1))
     && (iVar20 = FUN_141592950(&local_980,L"run=cook",1,0), iVar20 == -1)) {
    UCheatManagerGunfire::GetAllCheats(local_5d0,"CompileGlobalShaderMap");
    CompileGlobalShaderMap(0);
    if (DAT_1468c217e != '\0') {
      FUN_140591050(local_5d0);
      if (local_980 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      FUN_14166a2b0(local_e8);
      FSlowTask::~FSlowTask(local_e8);
      if (local_9c0 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_9b0);
      TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_990);
      if (local_9f0 != (wchar_t *)0x0) {
        FMemory::Free();
      }
      if (puVar41 != (undefined2 *)0x0) {
        FMemory::Free(puVar41);
      }
      FUN_140591050(local_940);
      return 1;
    }
    FUN_140591050(local_5d0);
  }
  UCheatManagerGunfire::GetAllCheats(local_228,"CreateMoviePlayer");
  FUN_142010380();
  FUN_140591050(local_228);
  UCheatManagerGunfire::GetAllCheats(local_210,"PostInitRHI");
  FUN_14043f160();
  FUN_140591050(local_210);
  if (DAT_146ac3ac6 != '\0') {
    if (DAT_146ab6326 != '\0') {
      DAT_146ab6381 = 1;
      uVar24 = FCommandLine::Get();
      cVar11 = FParse::Param(uVar24,L"rhithread");
      if (cVar11 == '\0') {
        uVar24 = FCommandLine::Get();
        cVar11 = FParse::Param(uVar24,L"norhithread");
        if (cVar11 != '\0') {
          DAT_146ab6381 = 0;
        }
      }
      else {
        DAT_146ab6381 = 1;
      }
    }
    UCheatManagerGunfire::GetAllCheats(local_1f8,"StartRenderingThread");
    FUN_141ee60a0();
    FUN_140591050(local_1f8);
  }
  if (DAT_1468b616c == '\0') {
    if (DAT_146ab62f7 == '\0') {
      FUN_14168dc80();
      puVar23 = (undefined8 *)FName::FName(local_770,"SlateRHIRenderer",1);
      uVar24 = *puVar23;
      uVar29 = FUN_14168dc80();
      plVar21 = (longlong *)FModuleManager::GetModule(uVar29,uVar24);
      puVar35 = local_658;
      uVar36 = local_9e0 | 0x20;
    }
    else {
      FUN_14168dc80();
      puVar23 = (undefined8 *)FName::FName(local_778,"SlateNullRenderer",1);
      uVar24 = *puVar23;
      uVar29 = FUN_14168dc80();
      plVar21 = (longlong *)FUN_141690010(uVar29,uVar24);
      puVar35 = local_648;
      uVar36 = local_9e0 | 0x10;
    }
    puVar23 = (undefined8 *)(**(code **)(*plVar21 + 0x40))(plVar21,puVar35);
    lVar22 = puVar23[1];
    uVar24 = *puVar23;
    if (lVar22 != 0) {
      LOCK();
      *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
      UNLOCK();
      puVar41 = local_9d8;
    }
    local_888 = uVar24;
    local_880 = lVar22;
    if ((uVar36 & 0x20) != 0) {
      uVar36 = uVar36 & 0xffffffdf;
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_658);
    }
    if ((uVar36 & 0x10) != 0) {
      TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_648);
    }
    plVar21 = DAT_1469f4590;
    UCheatManagerGunfire::GetAllCheats(local_588,"CurrentSlateApp.InitializeRenderer");
    uVar29 = uVar24;
    if (lVar22 != 0) {
      LOCK();
      *(int *)(lVar22 + 8) = *(int *)(lVar22 + 8) + 1;
      UNLOCK();
      uVar29 = local_888;
      puVar41 = local_9d8;
    }
    local_7e0 = uVar24;
    local_7d8 = lVar22;
    (**(code **)(*plVar21 + 0x170))(plVar21,&local_7e0,0);
    FUN_140591050(local_588);
    UCheatManagerGunfire::GetAllCheats(local_570,"FEngineFontServices::Create");
    FUN_1428a1e60();
    FUN_140591050(local_570);
    UCheatManagerGunfire::GetAllCheats(local_558,"GetMoviePlayer()->SetupLoadingScreenFromIni");
    plVar21 = (longlong *)GetMoviePlayer();
    (**(code **)(*plVar21 + 0x70))(plVar21);
    FUN_140591050(local_558);
    UCheatManagerGunfire::GetAllCheats
              (local_5b8,"LoadModulesForProject(ELoadingPhase::PreEarlyLoadingScreen)");
    plVar21 = (longlong *)IProjectManager::Get();
    cVar11 = (**(code **)(*plVar21 + 0x18))(plVar21,1);
    if (cVar11 != '\0') {
      plVar21 = (longlong *)FUN_1416ba600();
      cVar11 = (**(code **)(*plVar21 + 0x10))(plVar21,1);
      if (cVar11 != '\0') {
        FUN_140591050(local_5b8);
        plVar21 = (longlong *)GetMoviePlayer();
        cVar11 = (**(code **)(*plVar21 + 0x30))(plVar21);
        if (cVar11 != '\0') {
          UCheatManagerGunfire::GetAllCheats(local_480,"EarlyStartupMovie");
          plVar21 = (longlong *)GetMoviePlayer();
          (**(code **)(*plVar21 + 8))(plVar21,uVar29);
          plVar21 = (longlong *)GetMoviePlayer();
          (**(code **)(*plVar21 + 0x38))(plVar21);
          FUN_140591050(local_480);
        }
        plVar21 = DAT_1464aef20;
        if (DAT_1464aef20 == DAT_1464aef20 + (longlong)DAT_1464aef28 * 2) {
LAB_140443395:
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_888);
        }
        else {
          do {
            if (((int)plVar21[1] != 0) && (*plVar21 != 0)) {
              TBaseMulticastDelegate<void>::Broadcast(&DAT_1464aef20);
              goto LAB_140443395;
            }
            plVar21 = plVar21 + 2;
          } while (plVar21 != DAT_1464aef20 + (longlong)DAT_1464aef28 * 2);
          TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_888);
        }
        goto LAB_140443438;
      }
    }
    FUN_140591050(local_5b8);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_888);
    if (local_980 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FUN_14166a2b0(local_e8);
    FSlowTask::~FSlowTask(local_e8);
    if (local_9c0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_9b0);
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_990);
    if (local_9f0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (puVar41 != (undefined2 *)0x0) {
      FMemory::Free(puVar41);
    }
    FUN_140591050(local_940);
    uVar18 = 1;
  }
  else {
    FUN_1428a1e60();
LAB_140443438:
    FString::operator=(&DAT_1468500c0,&local_9f0);
    uVar18 = FUN_14043f670(local_818,local_928);
    if (local_980 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    FUN_14166a2b0(local_e8);
    FSlowTask::~FSlowTask(local_e8);
    if (local_9c0 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_9b0);
    TArray<FString,FDefaultAllocator>::~TArray<FString,FDefaultAllocator>(&local_990);
    if (local_9f0 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    if (puVar41 != (undefined2 *)0x0) {
      FMemory::Free(puVar41);
    }
    FUN_140591050(local_940);
  }
  return uVar18;
LAB_1404414cc:
  psVar25 = &DAT_146299580;
  pwVar42 = L"";
  if (local_9e8 != 0) {
    pwVar42 = local_9f0;
  }
  pwVar42 = pwVar42 + -0xa314cac0;
  local_9a0 = pwVar42;
  do {
    wVar13 = *(wint_t *)((longlong)psVar25 + (longlong)pwVar42);
    if ((wVar13 == 0) && (*psVar25 == 0)) {
      bVar45 = true;
      goto LAB_14044152c;
    }
    if (wVar13 != *psVar25) {
      wVar13 = towlower(wVar13);
      wVar14 = towlower(*psVar25);
      pwVar42 = local_9a0;
      if (wVar13 != wVar14) goto LAB_14044152a;
    }
    psVar25 = psVar25 + 1;
  } while( true );
LAB_140441b7c:
  if ((wVar13 != wVar14) && (cVar11 = FUN_1416755d0(), cVar11 == '\0')) {
    puVar23 = (undefined8 *)FUN_1416bb0a0(local_698);
    if (*(int *)(puVar23 + 1) == 0) {
      param_4 = L"";
    }
    else {
      param_4 = (wchar_t *)*puVar23;
    }
    FString::PrintfImpl(&local_8b8,L"%s.%s",&DAT_146299580);
    local_7e8 = (undefined4 *)&DAT_143f3eda8;
    if ((int)puStack_8b0 != 0) {
      local_7e8 = local_8b8;
    }
    puVar23 = (undefined8 *)FPaths::ProjectDir(local_6a8);
    if (*(int *)(puVar23 + 1) == 0) {
      local_7f0 = &DAT_143f3eda8;
    }
    else {
      local_7f0 = (undefined2 *)*puVar23;
    }
    local_878 = 0;
    local_870 = 0;
    FPaths::CombineInternal(&local_878,&local_7f0,2);
    if (local_6a8[0] != 0) {
      FMemory::Free();
    }
    if (local_8b8 != (undefined4 *)0x0) {
      FMemory::Free();
    }
    if (local_698[0] != 0) {
      FMemory::Free();
    }
    FUN_141680d90(&local_878);
    if (local_878 != 0) {
      FMemory::Free();
    }
  }
  goto LAB_140441c74;
LAB_140441f0c:
  uVar24 = FGenericPlatformMisc::GetUBTPlatform();
  local_60 = FUN_1415b0fe0();
  local_58 = L"Binaries";
  local_960 = (undefined2 *)0x0;
  local_958 = 0;
  local_50 = uVar24;
  FPaths::CombineInternal(&local_960,&local_60,3);
  puVar30 = &DAT_143f3eda8;
  if ((int)local_958 != 0) {
    puVar30 = local_960;
  }
  FWindowsPlatformProcess::AddDllDirectory(puVar30);
  lVar17 = FUN_14168dc80();
  AK::MemoryMgr::StartProfileThreadUsage(lVar17);
  FUN_14043d170();
  if (local_960 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  goto LAB_140441fa1;
}



// FUNCTION 140443510 FUN_140443510 body=847 status=ok
// SIG undefined FUN_140443510(void)

void FUN_140443510(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  int local_60;
  int local_5c;
  undefined2 *local_58;
  undefined8 local_50;
  longlong local_48 [2];
  
  uVar6 = FCommandLine::Get();
  cVar3 = FParse::Param(uVar6,L"nohmd");
  if (cVar3 == '\0') {
    uVar6 = FCommandLine::Get();
    cVar3 = FParse::Param(uVar6,L"emulatestereo");
    if (cVar3 == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146850178) &&
         (_Init_thread_header(&DAT_146850178), DAT_146850178 == -1)) {
        FName::FName(&DAT_146850170,&DAT_143f3ef90,1);
        _Init_thread_footer(&DAT_146850178);
      }
      uVar6 = DAT_146850170;
      plVar7 = (longlong *)FUN_141593110();
      iVar16 = 0;
      local_68 = 0;
      local_5c = 0;
      iVar15 = 0;
      iVar5 = (**(code **)(*plVar7 + 8))(plVar7,uVar6);
      iVar14 = 0;
      lVar8 = 0;
      if (0 < iVar5) {
        do {
          lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,uVar6,iVar14);
          if (lVar8 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = lVar8 + -8;
          }
          local_60 = iVar15 + 1;
          if (iVar16 < local_60) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_68,iVar15);
            iVar16 = local_5c;
          }
          iVar14 = iVar14 + 1;
          *(longlong *)(local_68 + (longlong)iVar15 * 8) = lVar8;
          lVar8 = local_68;
          iVar15 = local_60;
        } while (iVar14 < iVar5);
      }
      local_58 = (undefined2 *)0x0;
      local_50 = 0;
      uVar9 = FCommandLine::Get();
      cVar3 = FParse::Value(uVar9,L"hmd=",&local_58,1);
      for (iVar16 = 0; (-1 < iVar16 && (iVar16 < iVar15)); iVar16 = iVar16 + 1) {
        plVar1 = *(longlong **)(lVar8 + (longlong)iVar16 * 8);
        if (cVar3 == '\0') {
          cVar4 = (**(code **)(*plVar1 + 0x50))(plVar1);
          bVar17 = cVar4 == '\0';
        }
        else {
          local_78 = (longlong *)0x0;
          local_70 = 0;
          (**(code **)(*plVar1 + 0x48))(plVar1,&local_78);
          plVar10 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,local_48);
          uVar2 = local_70;
          lVar8 = (longlong)(int)local_70;
          iVar5 = (int)local_70 + 1;
          local_70 = CONCAT44(local_70._4_4_,iVar5);
          if (local_70._4_4_ < iVar5) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_78,uVar2 & 0xffffffff);
          }
          plVar11 = local_78 + lVar8 * 2;
          *plVar11 = 0;
          *plVar11 = *plVar10;
          *plVar10 = 0;
          *(int *)(plVar11 + 1) = (int)plVar10[1];
          *(undefined4 *)((longlong)plVar11 + 0xc) = *(undefined4 *)((longlong)plVar10 + 0xc);
          plVar10[1] = 0;
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          plVar11 = local_78 + (longlong)(int)local_70 * 2;
          for (plVar10 = local_78; bVar17 = true, plVar10 != plVar11; plVar10 = plVar10 + 2) {
            if ((int)plVar10[1] == 0) {
              puVar13 = &DAT_143f3eda8;
            }
            else {
              puVar13 = (undefined2 *)*plVar10;
            }
            puVar12 = &DAT_143f3eda8;
            if ((int)local_50 != 0) {
              puVar12 = local_58;
            }
            iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar13);
            if (iVar5 == 0) {
              bVar17 = false;
              break;
            }
          }
          plVar10 = local_78;
          for (iVar5 = (int)local_70; iVar5 != 0; iVar5 = iVar5 + -1) {
            if (*plVar10 != 0) {
              FMemory::Free();
            }
            plVar10 = plVar10 + 2;
          }
          lVar8 = local_68;
          if (local_78 != (longlong *)0x0) {
            FMemory::Free(local_78);
            lVar8 = local_68;
          }
        }
        if (bVar17) {
          (**(code **)(*plVar7 + 0x20))(plVar7,uVar6,plVar1 + 1);
        }
      }
      if (local_58 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (lVar8 != 0) {
        FMemory::Free(lVar8);
      }
    }
  }
  return;
}



// FUNCTION 140443860 FUN_140443860 body=1311 status=ok
// SIG undefined FUN_140443860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140443860(void)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  char cVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  int iVar20;
  undefined1 auStack_398 [32];
  undefined4 local_378;
  undefined1 local_368 [8];
  undefined8 local_360;
  longlong local_358;
  longlong *plStack_350;
  longlong local_348;
  int local_340;
  longlong *local_338;
  longlong local_330;
  longlong *local_328;
  undefined1 local_320 [8];
  longlong *local_318;
  undefined1 local_308 [8];
  undefined8 local_300;
  undefined8 local_2f8;
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  uint local_254;
  undefined1 local_248 [184];
  undefined1 local_190 [8];
  undefined1 local_188 [288];
  undefined1 *local_68;
  int local_60;
  longlong *local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_398;
  bVar8 = false;
  bVar7 = false;
  local_360 = DAT_1469f4590;
  plVar19 = *(longlong **)(DAT_146b17150 + 0xc18);
  plVar17 = plVar19 + *(int *)(DAT_146b17150 + 0xc20);
  local_338 = plVar17;
  if (plVar19 != plVar17) {
    do {
      lVar15 = 0;
      lVar14 = *(longlong *)(*plVar19 + 0x288);
      if ((lVar14 != 0) && (cVar11 = UWorld::IsGameWorld(lVar14), cVar11 != '\0')) {
        lVar12 = UWorld::GetGameViewport(lVar14);
        if (lVar12 == 0) {
          plVar13 = &local_358;
          local_358 = 0;
          plStack_350 = (longlong *)0x0;
          bVar7 = true;
        }
        else {
          bVar8 = true;
          plVar13 = (longlong *)FUN_14247fef0(lVar12,local_320);
          lVar15 = *plVar13;
        }
        plVar5 = (longlong *)plVar13[1];
        plVar13[1] = 0;
        *plVar13 = 0;
        plVar13 = plStack_350;
        if ((bVar7) && (bVar7 = false, plStack_350 != (longlong *)0x0)) {
          LOCK();
          plVar6 = plStack_350 + 1;
          lVar12 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plStack_350)(plStack_350);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plStack_350 + 8))(plStack_350,1);
            }
          }
        }
        plVar13 = local_318;
        if ((bVar8) && (bVar8 = false, local_318 != (longlong *)0x0)) {
          LOCK();
          plVar6 = local_318 + 1;
          lVar12 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*local_318)(local_318);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13,1);
            }
          }
        }
        if (lVar15 != 0) {
          FWidgetPath::FWidgetPath(local_190);
          uVar10 = local_360;
          local_368[0] = DAT_1464b9ee8;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_330 = lVar15;
          local_328 = plVar5;
          FUN_14189ada0(local_360,&local_330,local_190,local_368);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar5 + 1;
            lVar15 = *plVar13;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)lVar15 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          cVar11 = FWidgetPath::IsValid(local_190);
          if (cVar11 != '\0') {
            UWorld::GetPlayerControllerIterator(lVar14,&local_348);
            while( true ) {
              if ((local_340 < 0) || (*(int *)(local_348 + 8) <= local_340)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              plVar17 = local_338;
              if (!bVar9) break;
              lVar14 = FWeakObjectPtr::Get();
              if ((lVar14 != 0) && (lVar14 = *(longlong *)(lVar14 + 0x508), lVar14 != 0)) {
                lVar15 = ULocalPlayer::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
                  bVar9 = false;
                }
                else {
                  bVar9 = true;
                }
                if (bVar9) {
                  uVar4 = *(undefined4 *)(lVar14 + 0x108);
                  uVar16 = FUN_140438260(local_248,lVar14 + 0x110);
                  local_378 = 10;
                  FUN_1418b2b10(uVar10,local_190,uVar16,uVar4);
                  local_254 = local_254 & 0xffffff00;
                  local_308[0] = 0;
                  local_2d8 = 0;
                  uStack_2d0 = 0;
                  local_2c8 = 0;
                  uStack_2c0 = 0;
                  local_2b8 = 0;
                  uStack_2b0 = 0;
                  local_2a8 = 0;
                  uStack_2a0 = 0;
                  local_298 = 0;
                  uStack_290 = 0;
                  local_278 = 0;
                  uStack_270 = 0;
                  local_268 = 0;
                  uStack_260 = 0;
                  local_300 = 0;
                  local_2f8 = 0;
                  local_2e8 = 0;
                  local_2e0 = 0;
                  local_288 = 0;
                  local_280 = 0;
                  local_258 = 0x20702;
                  FUN_140439160(lVar14 + 0x110,local_308);
                  FUN_140438c20();
                }
              }
              local_340 = local_340 + 1;
            }
          }
          if (local_38 != 0) {
            plVar13 = (longlong *)(local_40 + 8);
            iVar20 = local_38;
            do {
              plVar6 = (longlong *)*plVar13;
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar6 + 1;
                lVar14 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar14 == 1) {
                  (**(code **)*plVar6)(plVar6);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                }
              }
              plVar13 = plVar13 + 2;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
          if (local_40 != 0) {
            FMemory::Free();
          }
          plVar13 = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_48 + 1;
            lVar14 = *plVar6;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)lVar14 == 1) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              iVar20 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plVar13 + 8))(plVar13,1);
              }
            }
          }
          puVar18 = local_188;
          if (local_68 != (undefined1 *)0x0) {
            puVar18 = local_68;
          }
          if (local_60 != 0) {
            plVar13 = (longlong *)(puVar18 + 0x40);
            iVar20 = local_60;
            do {
              plVar6 = (longlong *)*plVar13;
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar6 + 1;
                lVar14 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar14 == 1) {
                  (**(code **)*plVar6)(plVar6);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar6 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar6 + 8))(plVar6,1);
                  }
                }
              }
              plVar13 = plVar13 + 9;
              iVar20 = iVar20 + -1;
            } while (iVar20 != 0);
          }
          if (local_68 != (undefined1 *)0x0) {
            FMemory::Free();
          }
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar5 + 1;
          lVar14 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar20 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar20 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar17);
  }
  return;
}



// FUNCTION 140443d80 Push body=198 status=ok
// SIG undefined Push(void)

void FLockFreePointerListLIFORoot<128,1>::Push(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  do {
    LOCK();
    uVar1 = *(ulonglong *)(param_1 + 0x80);
    if (uVar1 == 0) {
      *(ulonglong *)(param_1 + 0x80) = 0;
      uVar1 = 0;
    }
    UNLOCK();
    uVar3 = (uVar1 & 0xfffffffffc000000) + 0x4000000;
    if (uVar3 < (uVar1 & 0xfffffffffc000000)) {
      LockFreeTagCounterHasOverflowed();
    }
    lVar2 = 0;
    if (param_2 != 0) {
      lVar2 = (&DAT_1468a81f8)[param_2 >> 0xe] + (ulonglong)(param_2 & 0x3fff) * 0x18;
    }
    *(uint *)(lVar2 + 0x10) = (uint)uVar1 & 0x3ffffff;
    LOCK();
    bVar4 = uVar1 == *(ulonglong *)(param_1 + 0x80);
    if (bVar4) {
      *(ulonglong *)(param_1 + 0x80) = param_2 | uVar3;
    }
    UNLOCK();
  } while (!bVar4);
  return;
}



// FUNCTION 140443e50 Push body=88 status=ok
// SIG undefined Push(void)

void TLockFreePointerListLIFOPad<void_*,128>::Push(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (&DAT_1468a81f8)[uVar1 >> 0xe] + (ulonglong)(uVar1 & 0x3fff) * 0x18;
  }
  *(undefined8 *)(lVar2 + 8) = param_2;
  FLockFreePointerListLIFORoot<128,1>::Push(param_1);
  return;
}



// FUNCTION 140443eb0 Realloc body=232 status=ok
// SIG undefined Realloc(void)

void TBitArray<FDefaultBitArrayAllocator>::Realloc(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *_Dst;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  
  _Dst = (void *)0x0;
  iVar1 = (int)(param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU)) >> 5;
  lVar7 = (longlong)iVar1;
  pvVar5 = *(void **)((longlong)param_1 + 0x10);
  iVar2 = *(int *)((longlong)param_1 + 0x1c) + 0x1f;
  uVar3 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
  if (uVar3 < 5) {
    if (pvVar5 == (void *)0x0) goto LAB_140443f5d;
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar5,lVar7 << 2);
    pvVar5 = *(void **)((longlong)param_1 + 0x10);
    if (pvVar5 == (void *)0x0) goto LAB_140443f5d;
    lVar6 = 0;
  }
  else {
    if (pvVar5 == (void *)0x0) {
      if (uVar3 != 0) {
        _Dst = (void *)FMemory::Realloc(0,(longlong)(int)uVar3 << 2,0);
        *(void **)((longlong)param_1 + 0x10) = _Dst;
      }
      ::_guard_xfg_dispatch_icall_nop(_Dst,param_1,lVar7 << 2);
      goto LAB_140443f5d;
    }
    lVar6 = (longlong)(int)uVar3 << 2;
  }
  uVar4 = FMemory::Realloc(pvVar5,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar4;
LAB_140443f5d:
  if (uVar3 != 0) {
    pvVar5 = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      pvVar5 = param_1;
    }
    ::_guard_xfg_dispatch_icall_nop
              ((void *)((longlong)pvVar5 + lVar7 * 4),0,(longlong)(int)(uVar3 - iVar1) << 2);
  }
  return;
}



// FUNCTION 140443fa0 Rehash body=530 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<FName,TBaseDelegate<IModuleInterface_*>_>,TDefaultMapHashableKeyFuncs<FName,TBaseDelegate<IModuleInterface_*>,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
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
    lVar5 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar5;
  }
  uVar8 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar8 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar8) {
      uVar10 = 0;
      uVar12 = (ulonglong)uVar8;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar9 * 4) = 0xffffffff;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puStack_28;
      }
      uVar8 = *puVar13;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar5 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar4) goto LAB_1404440df;
        uVar8 = puVar13[lVar5 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar3 < iStack_44) {
LAB_1404440df:
        iStack_44 = iVar3;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        puVar11 = (undefined8 *)((longlong)iStack_1c * 0x20 + *param_1);
        uVar8 = (int)((ulonglong)*puVar11 >> 0x20) + (int)*puVar11 & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar11 + 0x1c) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar11 + 3) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar8) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1404441c0 Rehash body=544 status=ok
// SIG undefined Rehash(void)

void TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
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
    lVar7 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar7;
  }
  uVar6 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar6 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar6) {
      uVar12 = 0;
      uVar13 = (ulonglong)uVar6;
      do {
        uVar11 = (longlong)(int)*plVar2 - 1U & uVar12;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        uVar12 = uVar12 + 1;
        *(undefined4 *)((longlong)plVar8 + uVar11 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar4 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar4 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar6 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        lVar7 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar9 = local_58 + 1;
        bVar5 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar9;
        if (bVar5) goto LAB_1404442ff;
        uVar6 = puVar14[lVar7 + 1];
      }
      uStack_54 = -uVar6 & uVar6;
      iVar9 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar9 = 0x20;
      }
      else {
        iVar9 = 0x1f - iVar9;
      }
      iStack_44 = (iStack_40 - iVar9) + 0x1f;
      if (iVar4 < iStack_44) {
LAB_1404442ff:
        iStack_44 = iVar4;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar4) {
      do {
        iVar4 = iStack_1c;
        puVar3 = (undefined8 *)(*param_1 + (longlong)iStack_1c * 0x18);
        if (*(int *)(*param_1 + 8 + (longlong)iStack_1c * 0x18) == 0) {
          puVar10 = &DAT_143f3eda8;
        }
        else {
          puVar10 = (undefined2 *)*puVar3;
        }
        uVar6 = FUN_140438070(puVar10);
        uVar6 = (int)*plVar2 - 1U & uVar6;
        *(uint *)((longlong)puVar3 + 0x14) = uVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(puVar3 + 2) =
             *(undefined4 *)
              ((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar6) * 4) =
             iVar4;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 1404443e0 RemoveAtSwapImpl body=242 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<FDelegateBase,FHeapAllocator>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  if (param_3 != 0) {
    plVar4 = (longlong *)(*param_1 + (longlong)param_2 * 0x10);
    iVar5 = param_3;
    do {
      if (((int)plVar4[1] != 0) && (plVar1 = (longlong *)*plVar4, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*plVar4 != 0) {
          lVar2 = FMemory::Realloc(*plVar4,0,0);
          *plVar4 = lVar2;
        }
        *(undefined4 *)(plVar4 + 1) = 0;
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar5 = (int)param_1[1];
    iVar3 = (iVar5 - param_2) - param_3;
    if (param_3 <= iVar3) {
      iVar3 = param_3;
    }
    if (iVar3 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x10),
                 (void *)((longlong)(iVar5 - iVar3) * 0x10 + *param_1),(longlong)iVar3 << 4);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 - param_3;
    if (param_4 != '\0') {
      ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1404444e0 RemoveAtUninitialized body=176 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<FString>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x18;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x18;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140444590 ResizeAllocation body=149 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 8);
  if (param_3 < 2) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 2);
    pvVar1 = *(void **)((longlong)param_1 + 8);
    if (pvVar1 == (void *)0x0) {
      return;
    }
    param_4 = 0;
  }
  else {
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
      if (param_3 != 0) {
        pvVar1 = (void *)FMemory::Realloc(0,(int)param_3 * param_4,0);
        *(void **)((longlong)param_1 + 8) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 2);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  return;
}



// FUNCTION 140444630 ResizeForCopy body=132 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x30,0);
    iVar3 = (int)(uVar1 / 0x30);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x30,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1404446c0 ResizeForCopy body=111 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FString,FDefaultAllocator>::ResizeForCopy(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 4,0);
    iVar1 = (int)(uVar2 >> 4);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 4,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 140444730 ResizeForCopy body=108 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 2,0);
    iVar1 = (int)(uVar2 >> 1);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if ((iVar1 != param_3) && ((*param_1 != 0 || (iVar1 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 * 2,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  return;
}



// FUNCTION 1404447a0 ResizeGrow body=120 status=ok
// SIG undefined ResizeGrow(void)

void TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar3 = FMemory::QuantizeSize(lVar4 * 4,0);
  iVar2 = (int)(uVar3 >> 2);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar4 = FMemory::Realloc(*param_1,(longlong)iVar2 << 2,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 140444820 ResizeGrow body=120 status=ok
// SIG undefined ResizeGrow(void)

void TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar3 = FMemory::QuantizeSize(lVar4 * 8,0);
  iVar2 = (int)(uVar3 >> 3);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar4 = FMemory::Realloc(*param_1,(longlong)iVar2 << 3,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 1404448a0 ResizeGrow body=140 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar3 = FMemory::QuantizeSize(lVar2 * 0x18,0);
  iVar4 = (int)(uVar3 / 0x18);
  if (iVar4 < (int)uVar1) {
    iVar4 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  if ((*param_1 != 0) || (iVar4 != 0)) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x18,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140444930 ResizeGrow body=116 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
     ResizeGrow(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar3 = FMemory::QuantizeSize(lVar4 << 5,0);
  iVar2 = (int)(uVar3 >> 5);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar4 = FMemory::Realloc(*param_1,(longlong)iVar2 << 5,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 1404449b0 ResizeGrow body=232 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x28);
  uVar2 = 4;
  if (4 < uVar1) {
    if ((*(int *)((longlong)param_1 + 0x2c) != 0) || (4 < uVar1)) {
      uVar2 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(uVar2 * 8,0);
    uVar2 = uVar3 >> 3 & 0xffffffff;
    if ((int)(uVar3 >> 3) < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  uVar1 = (uint)uVar2;
  *(uint *)((longlong)param_1 + 0x2c) = uVar1;
  pvVar4 = *(void **)((longlong)param_1 + 0x20);
  if (uVar1 < 5) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x20);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar1 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar1 << 3,0);
        *(void **)((longlong)param_1 + 0x20) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar1 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
  return;
}



// FUNCTION 140444aa0 ResizeGrow body=116 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar3 = FMemory::QuantizeSize(lVar4 << 4,0);
  iVar2 = (int)(uVar3 >> 4);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar4 = FMemory::Realloc(*param_1,(longlong)iVar2 << 4,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 140444b20 ResizeGrow body=113 status=ok
// SIG undefined ResizeGrow(void)

void TArray<wchar_t,FDefaultAllocator>::ResizeGrow(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar4 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
  }
  uVar3 = FMemory::QuantizeSize(lVar4 * 2,0);
  iVar2 = (int)(uVar3 >> 1);
  if (iVar2 < (int)uVar1) {
    iVar2 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  if ((*param_1 != 0) || (iVar2 != 0)) {
    lVar4 = FMemory::Realloc(*param_1,(longlong)iVar2 * 2,0);
    *param_1 = lVar4;
  }
  return;
}



// FUNCTION 140444ba0 ResizeShrink body=137 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar3) << 4)) || (iVar3 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar3)) {
      if (0 < iVar3) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar3 << 4,0);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = (int)(uVar1 >> 4);
      }
      goto LAB_140444bfd;
    }
    if (iVar3 == 0) goto LAB_140444bfd;
  }
  iVar3 = iVar4;
LAB_140444bfd:
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 << 4,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140444c30 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

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
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x18,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140444cb0 ResizeTo body=99 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 5,0);
    iVar1 = (int)(uVar2 >> 5);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 5,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140444d20 ResizeTo body=120 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x28,0);
    iVar3 = (int)(uVar1 / 0x28);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x28,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140444da0 ResizeTo body=99 status=ok
// SIG undefined ResizeTo(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::ResizeTo
               (longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 7,0);
    iVar1 = (int)(uVar2 >> 7);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 7,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140444e10 ResizeTo body=99 status=ok
// SIG undefined ResizeTo(void)

void TArray<FDelegateBase,FHeapAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 << 4,0);
    iVar1 = (int)(uVar2 >> 4);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 << 4,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140444e80 ResizeTo body=96 status=ok
// SIG undefined ResizeTo(void)

void TArray<wchar_t,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 2,0);
    iVar1 = (int)(uVar2 >> 1);
    if (iVar1 < param_2) {
      iVar1 = 0x7fffffff;
    }
  }
  if (iVar1 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar1;
    if ((*param_1 != 0) || (iVar1 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar1 * 2,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140444ee0 Serialize body=7 status=ok
// SIG undefined Serialize(void)

void FOutputDevice::Serialize(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140444ee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



// FUNCTION 140444ef0 Serialize body=136 status=ok
// SIG undefined Serialize(void)

void FOutputDeviceStdOutput::Serialize
               (longlong param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  FILE *_File;
  undefined2 *puVar2;
  longlong local_18 [3];
  
  if (param_3 <= *(byte *)(param_1 + 0x10)) {
    puVar1 = (undefined8 *)
             FUN_1416704c0(local_18,param_3,param_4,param_2,DAT_1468c21d0,0xbff0000000000000);
    if (*(int *)(puVar1 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*puVar1;
    }
    wprintf(L"%s\n",puVar2);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    _File = (FILE *)__acrt_iob_func(1);
                    /* WARNING: Could not recover jumptable at 0x000140444f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fflush(_File);
    return;
  }
  return;
}



// FUNCTION 140444f80 Set body=92 status=ok
// SIG undefined Set(void)

void IConsoleVariable::Set(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  int local_10;
  
  FString::PrintfImpl(&local_18,&DAT_143f3edc0,param_2);
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  (**(code **)(*param_1 + 0x60))(param_1,puVar1,param_3);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140444fe0 SetRange body=285 status=ok
// SIG undefined SetRange(void)

void TBitArray<FDefaultBitArrayAllocator>::SetRange
               (longlong param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  
  if (param_3 != 0) {
    uVar5 = param_2 >> 0x1f & 0x1f;
    iVar2 = param_2 + uVar5;
    uVar7 = iVar2 >> 5;
    iVar6 = param_3 + param_2 + 0x1f;
    uVar5 = -1 << (((byte)iVar2 & 0x1f) - (char)uVar5 & 0x1f);
    iVar6 = ((int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5) - uVar7;
    uVar10 = 0xffffffff >> (0x20 - ((byte)(param_3 + param_2) & 0x1f) & 0x1f);
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = param_1;
    }
    uVar1 = *(uint *)(lVar3 + (ulonglong)uVar7 * 4);
    puVar8 = (uint *)(lVar3 + (ulonglong)uVar7 * 4);
    if (param_4 != '\0') {
      if (iVar6 == 1) {
        *puVar8 = uVar10 & uVar5 | uVar1;
        return;
      }
      *puVar8 = uVar1 | uVar5;
      puVar8 = puVar8 + 1;
      uVar5 = iVar6 - 2;
      puVar9 = puVar8;
      if (uVar5 != 0) {
        puVar9 = puVar8 + uVar5;
        for (uVar4 = (ulonglong)uVar5; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = 0xffffffff;
          puVar8 = puVar8 + 1;
        }
      }
      *puVar9 = *puVar9 | uVar10;
      return;
    }
    if (iVar6 == 1) {
      *puVar8 = ~(uVar10 & uVar5) & uVar1;
      return;
    }
    *puVar8 = ~uVar5 & uVar1;
    puVar8 = puVar8 + 1;
    uVar5 = iVar6 - 2;
    puVar9 = puVar8;
    if (uVar5 != 0) {
      puVar9 = puVar8 + uVar5;
      for (uVar4 = (ulonglong)uVar5; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
    }
    *puVar9 = *puVar9 & ~uVar10;
  }
  return;
}



// FUNCTION 140445100 FUN_140445100 body=611 status=ok
// SIG undefined FUN_140445100(void)

void FUN_140445100(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
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
          goto LAB_1404452b7;
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
LAB_1404452b7:
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



// FUNCTION 140445370 FUN_140445370 body=611 status=ok
// SIG undefined FUN_140445370(void)

void FUN_140445370(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 8) = DAT_1464a8210;
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
          goto LAB_140445527;
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
LAB_140445527:
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



// FUNCTION 1404455e0 FUN_1404455e0 body=691 status=ok
// SIG undefined FUN_1404455e0(void)

void FUN_1404455e0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  
  *(undefined1 *)(param_1 + 0x20) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146850098 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146850098 != 0x1000)) ||
     (uVar3 = DAT_1468500a0, iVar4 != 0)) {
    uVar3 = DAT_14685009c | DAT_146850098;
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
          goto LAB_1404457e7;
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
LAB_1404457e7:
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



// FUNCTION 1404458a0 FUN_1404458a0 body=611 status=ok
// SIG undefined FUN_1404458a0(void)

void FUN_1404458a0(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

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
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x10);
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
          goto LAB_140445a57;
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
LAB_140445a57:
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



// FUNCTION 140445b10 Stristr body=171 status=ok
// SIG undefined Stristr(void)

wchar_t * TCString<wchar_t>::Stristr(wchar_t *param_1,wint_t *param_2)

{
  wchar_t _C;
  wint_t wVar1;
  wint_t wVar2;
  int iVar3;
  wchar_t *_Str1;
  longlong lVar4;
  
  if ((param_2 != (wint_t *)0x0) && (param_1 != (wchar_t *)0x0)) {
    wVar1 = towupper(*param_2);
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    _C = *param_1;
    while (_C != L'\0') {
      _Str1 = param_1 + 1;
      wVar2 = towupper(_C);
      if ((wVar2 == wVar1) &&
         (iVar3 = _wcsnicmp(_Str1,(wchar_t *)(param_2 + 1),(longlong)((int)lVar4 + -1)), iVar3 == 0)
         ) {
        return param_1;
      }
      param_1 = _Str1;
      _C = *_Str1;
    }
  }
  return (wchar_t *)0x0;
}



// FUNCTION 140445bc0 FUN_140445bc0 body=195 status=ok
// SIG undefined FUN_140445bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140445bc0(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_158 [32];
  undefined2 local_138;
  byte local_128 [272];
  ulonglong local_18;
  longlong lVar6;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  bVar1 = *param_2;
  pbVar3 = local_128;
  if (bVar1 != 0) {
    do {
      *pbVar3 = bVar1 ^ 0x15;
      pbVar3 = pbVar3 + 1;
      bVar1 = pbVar3[(longlong)param_2 - (longlong)local_128];
    } while (bVar1 != 0);
  }
  *pbVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (local_128[0] != 0) {
    lVar6 = -1;
    do {
      lVar5 = lVar6 + 1;
      lVar2 = lVar6 + 1;
      lVar6 = lVar5;
    } while (local_128[lVar2] != 0);
    iVar4 = (int)lVar5 + 1;
    *(int *)(param_1 + 1) = iVar4;
    if (0 < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    local_138 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(*param_1,iVar4,local_128,iVar4);
  }
  return param_1;
}



// FUNCTION 140445c90 FUN_140445c90 body=16 status=ok
// SIG undefined FUN_140445c90(void)

undefined8 FUN_140445c90(void)

{
  FUN_1416a6ea0();
  return 0;
}



// FUNCTION 140445ca0 FUN_140445ca0 body=389 status=ok
// SIG undefined FUN_140445ca0(void)

/* WARNING: Removing unreachable block (ram,0x000140445dde) */

void FUN_140445ca0(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 local_b8 [64];
  ulonglong local_78;
  
  uVar1 = (ulonglong)DAT_146ac3ad4;
  dVar3 = DAT_1468b02f8 * 1000.0;
  uVar2 = FUN_14168db40();
  FCsvProfiler::RecordCustomStat(uVar2,"RenderThreadTime",0,(float)(dVar3 * (double)uVar1),0);
  uVar1 = (ulonglong)DAT_146ac3afc;
  dVar3 = DAT_1468b02f8 * 1000.0;
  uVar2 = FUN_14168db40();
  FCsvProfiler::RecordCustomStat(uVar2,"GameThreadTime",0,(float)(dVar3 * (double)uVar1),0);
  uVar1 = (ulonglong)DAT_146b17160;
  dVar3 = DAT_1468b02f8 * 1000.0;
  uVar2 = FUN_14168db40();
  FCsvProfiler::RecordCustomStat(uVar2,"GPUTime",0,(float)(dVar3 * (double)uVar1),0);
  uVar1 = (ulonglong)DAT_146ac3af8;
  dVar3 = DAT_1468b02f8 * 1000.0;
  uVar2 = FUN_14168db40();
  FCsvProfiler::RecordCustomStat(uVar2,"RHIThreadTime",0,(float)(dVar3 * (double)uVar1),0);
  FUN_1416a13c0(local_b8);
  uVar2 = FUN_14168db40();
  FCsvProfiler::RecordCustomStat(uVar2,"MemoryFreeMB",0,(float)(local_78 >> 10) * 0.0009765625,0);
  return;
}



// FUNCTION 140445e30 WaitUntilTaskCompletes body=225 status=ok
// SIG undefined WaitUntilTaskCompletes(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FTaskGraphInterface::WaitUntilTaskCompletes
               (longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  longlong local_50 [4];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_28 = 1;
  local_30 = (longlong *)0x0;
  TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow(local_50,0);
  plVar5 = local_50;
  if (local_30 != (longlong *)0x0) {
    plVar5 = local_30;
  }
  lVar3 = *param_2;
  *plVar5 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0x48) = *(int *)(lVar3 + 0x48) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x48))(param_1,local_50,param_3);
  plVar5 = local_50;
  iVar4 = (int)local_28;
  if (local_30 != (longlong *)0x0) {
    plVar5 = local_30;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      LOCK();
      piVar1 = (int *)(*plVar5 + 0x48);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        FGraphEvent::Recycle();
      }
    }
    plVar5 = plVar5 + 1;
  }
  if (local_30 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140445f20 FUN_140445f20 body=602 status=ok
// SIG undefined FUN_140445f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_140445f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  short sVar1;
  char cVar2;
  DWORD DVar3;
  uint uVar4;
  LPWSTR pWVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_858 [32];
  byte local_838 [4];
  uint local_834;
  WCHAR local_828 [1024];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_858;
  _set_invalid_parameter_handler(InvalidParameterHandler);
  DAT_1469e4218 = param_1;
  pWVar5 = GetCommandLineW();
  _guard_xfg_dispatch_icall_nop(local_828,0,0x800);
  lVar6 = 0;
  do {
    sVar1 = *(short *)((longlong)L"UnrealEngine4" + lVar6);
    *(short *)((longlong)local_828 + lVar6) = sVar1;
    lVar6 = lVar6 + 2;
  } while (sVar1 != 0);
  DAT_14684ff28 = CreateMutexW((LPSECURITY_ATTRIBUTES)0x0,1,local_828);
  if (DAT_14684ff28 != (HANDLE)0x0) {
    DVar3 = GetLastError();
    if (DVar3 != 0xb7) {
      cVar2 = FParse::Param(pWVar5,L"NEVERFIRST");
      if (cVar2 == '\0') {
        DAT_1464aaa4b = 1;
        goto LAB_140446018;
      }
    }
    if (DAT_14684ff28 != (HANDLE)0x0) {
      ReleaseMutex(DAT_14684ff28);
      DAT_14684ff28 = (HANDLE)0x0;
    }
  }
  DAT_1464aaa4b = 0;
LAB_140446018:
  cVar2 = FParse::Param(pWVar5,L"crashreports");
  if (cVar2 != '\0') {
    DAT_1468b1f81 = 1;
  }
  cVar2 = FParse::Param(pWVar5,L"noinnerexception");
  if ((cVar2 != '\0') || (DAT_1468b5a25 != '\0')) {
    DAT_1461f6018 = 0;
  }
  cVar2 = FParse::Param(pWVar5,L"useautoreporter");
  if (cVar2 != '\0') {
    DAT_1464a8d80 = 0;
  }
  SetUnhandledExceptionFilter(FUN_140445c90);
  DAT_1468c217d = 1;
  uVar4 = GuardedMainWrapper(pWVar5,param_1,param_2,param_4);
  DAT_1468c217d = 0;
  local_834 = uVar4;
  FGenericPlatformApplicationMisc::TearDown();
  if (DAT_1468b6148 != (undefined8 *)0x0) {
    FConfigCacheIni::Exit();
    if (DAT_1468b6148 != (undefined8 *)0x0) {
      (**(code **)*DAT_1468b6148)(DAT_1468b6148,1);
    }
    DAT_1468b6148 = (undefined8 *)0x0;
  }
  lVar6 = FUN_141672640();
  if (lVar6 != 0) {
    plVar7 = (longlong *)FUN_141672640();
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  FInternationalization::TearDown();
  local_838[0] = 0;
  cVar2 = FUN_1416a3270(local_838);
  if (cVar2 != '\0') {
    uVar4 = (uint)local_838[0];
  }
  if (DAT_14684ff28 != (HANDLE)0x0) {
    ReleaseMutex(DAT_14684ff28);
    DAT_14684ff28 = (HANDLE)0x0;
  }
  if (DAT_14684ff21 != '\0') {
    Sleep(0xffffffff);
  }
  return uVar4;
}



// FUNCTION 1404461e0 __local_stdio_printf_options body=8 status=ok
// SIG undefined __local_stdio_printf_options(void)

undefined * __local_stdio_printf_options(void)

{
  return &DAT_146850118;
}



// FUNCTION 1404461f0 wprintf body=85 status=ok
// SIG int wprintf(wchar_t * _Format, ...)

int __cdecl wprintf(wchar_t *_Format,...)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 in_RDX;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res10 = in_RDX;
  local_res18 = in_R8;
  local_res20 = in_R9;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)__local_stdio_printf_options();
  iVar3 = __stdio_common_vfwprintf(*puVar2,uVar1,_Format,0,&local_res10);
  return iVar3;
}



// FUNCTION 140446250 FUN_140446250 body=590 status=ok
// SIG undefined FUN_140446250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140446250(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_a8 [32];
  undefined2 local_88;
  wchar_t *local_78;
  int local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined8 local_50;
  wchar_t *local_48;
  wchar_t *local_40;
  undefined2 *local_38;
  undefined2 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_1 + 8) = 0;
  FPaths::EngineDir(&local_78);
  local_68 = (wchar_t *)0x0;
  local_48 = L"";
  if (local_70 != 0) {
    local_48 = local_78;
  }
  local_60 = 0;
  local_40 = L"Binaries/ThirdParty/bifrost";
  FPaths::CombineInternal(&local_68,&local_48,2);
  if (local_78 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  local_78 = local_68;
  local_70 = (int)local_60;
  local_6c = local_60._4_4_;
  local_60 = 0xc;
  local_68 = (wchar_t *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  pwVar1 = local_68;
  local_88 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_68,0xc,"bifrost.dll");
  local_58 = (wchar_t *)0x0;
  local_50 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  pwVar2 = local_58;
  local_88 = 0x3f;
  FGenericPlatformString::Convert<char,wchar_t>(local_58,4,&DAT_143f3f3dc);
  if ((1 < (int)local_50) && (1 < (int)local_60)) {
    local_48 = (wchar_t *)0x0;
    local_40 = (wchar_t *)0x8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    pwVar3 = local_48;
    local_88 = 0x3f;
    FGenericPlatformString::Convert<char,wchar_t>(local_48,8,"Release");
    local_30 = L"";
    if ((int)local_60 != 0) {
      local_30 = pwVar1;
    }
    local_38 = L"";
    if ((int)local_40 != 0) {
      local_38 = pwVar3;
    }
    local_40 = L"";
    if ((int)local_50 != 0) {
      local_40 = pwVar2;
    }
    local_48 = L"";
    if (local_70 != 0) {
      local_48 = local_78;
    }
    local_58 = (wchar_t *)0x0;
    local_50 = 0;
    FPaths::CombineInternal(&local_58,&local_48,4);
    if (local_78 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    pwVar5 = L"";
    if ((int)local_50 != 0) {
      pwVar5 = local_58;
    }
    local_78 = local_58;
    local_70 = (int)local_50;
    local_6c = local_50._4_4_;
    uVar4 = FWindowsPlatformProcess::GetDllHandle(pwVar5);
    *(undefined8 *)(param_1 + 8) = uVar4;
    if (pwVar3 != (wchar_t *)0x0) {
      FMemory::Free(pwVar3);
    }
  }
  if (pwVar1 != (wchar_t *)0x0) {
    FMemory::Free(pwVar1);
  }
  if (pwVar2 != (wchar_t *)0x0) {
    FMemory::Free(pwVar2);
  }
  if (local_78 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1404464a0 FUN_1404464a0 body=32 status=ok
// SIG undefined FUN_1404464a0(void)

void FUN_1404464a0(longlong param_1)

{
  FWindowsPlatformProcess::FreeDllHandle(*(HMODULE *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1404464c0 FUN_1404464c0 body=43 status=ok
// SIG undefined FUN_1404464c0(void)

undefined8 * FUN_1404464c0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IModuleInterface::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1404464f0 FUN_1404464f0 body=64 status=ok
// SIG undefined FUN_1404464f0(void)

void FUN_1404464f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_143f3f4f8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  }
  return;
}



// FUNCTION 140446530 FUN_140446530 body=51 status=ok
// SIG undefined FUN_140446530(void)

void FUN_140446530(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong local_res10 [3];
  
  lVar1 = *param_1;
  if ((*(longlong *)(lVar1 + 0x60) != 0) && (*(int *)(*(longlong *)(lVar1 + 0x60) + 0x10) == 0)) {
    local_res10[0] = param_2 & 0xffffffff00000000;
    (**(code **)(lVar1 + 0x40))(lVar1,local_res10);
  }
  return;
}



// FUNCTION 140446570 FUN_140446570 body=111 status=ok
// SIG undefined FUN_140446570(void)

void FUN_140446570(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  
  lVar1 = *param_2;
  pvVar5 = bifrost::_guard_xfg_dispatch_icall_nop(0x70);
  uVar2 = *(undefined4 *)(lVar1 + 0x44);
  uVar3 = *(undefined4 *)(lVar1 + 0x48);
  uVar4 = *(undefined4 *)(lVar1 + 0x4c);
  *(undefined4 *)((longlong)pvVar5 + 0x40) = *(undefined4 *)(lVar1 + 0x40);
  *(undefined4 *)((longlong)pvVar5 + 0x44) = uVar2;
  *(undefined4 *)((longlong)pvVar5 + 0x48) = uVar3;
  *(undefined4 *)((longlong)pvVar5 + 0x4c) = uVar4;
  uVar2 = *(undefined4 *)(lVar1 + 0x54);
  uVar3 = *(undefined4 *)(lVar1 + 0x58);
  uVar4 = *(undefined4 *)(lVar1 + 0x5c);
  *(undefined4 *)((longlong)pvVar5 + 0x50) = *(undefined4 *)(lVar1 + 0x50);
  *(undefined4 *)((longlong)pvVar5 + 0x54) = uVar2;
  *(undefined4 *)((longlong)pvVar5 + 0x58) = uVar3;
  *(undefined4 *)((longlong)pvVar5 + 0x5c) = uVar4;
  if (*(code **)((longlong)pvVar5 + 0x48) != (code *)0x0) {
    (**(code **)((longlong)pvVar5 + 0x48))(pvVar5,lVar1);
  }
  *(undefined8 *)((longlong)pvVar5 + 0x60) = *(undefined8 *)(lVar1 + 0x60);
  lVar1 = *(longlong *)(lVar1 + 0x68);
  *(longlong *)((longlong)pvVar5 + 0x68) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *param_1 = pvVar5;
  return;
}



// FUNCTION 1404465e0 FUN_1404465e0 body=30 status=ok
// SIG undefined FUN_1404465e0(void)

void FUN_1404465e0(undefined8 *param_1)

{
  FUN_140446d80(*param_1);
  bifrost::free((void *)*param_1);
  return;
}



// FUNCTION 140446600 FUN_140446600 body=43 status=ok
// SIG undefined FUN_140446600(void)

ulonglong FUN_140446600(ulonglong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  undefined4 local_res8 [8];
  
  uVar1 = *param_1;
  local_res8[0] = *param_2;
  if (*(longlong *)(uVar1 + 0x60) != 0) {
    *(undefined4 *)(*(longlong *)(uVar1 + 0x60) + 0x10) = local_res8[0];
    uVar1 = (**(code **)(uVar1 + 0x40))(uVar1,local_res8);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 140446640 Convert_Impl<char_*> body=738 status=ok
// SIG undefined Convert_Impl<char_*>(void)

void FTCHARToUTF8_Convert::Convert_Impl<char_*>
               (longlong *param_1,uint param_2,longlong param_3,int param_4)

{
  ushort uVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint local_res10 [2];
  
  if (0 < param_4) {
    lVar6 = 0;
    uVar9 = 0xffffffff;
    local_res10[0] = param_2;
    do {
      uVar1 = *(ushort *)(param_3 + lVar6 * 2);
      uVar5 = (uint)uVar1;
      if (uVar1 - 0xd800 < 0x400) {
        if (uVar9 != 0xffffffff) {
          pbVar2 = (byte *)*param_1;
          iVar7 = (int)pbVar2;
          if (((uVar9 < 0x110000) && (1 < uVar9 - 0xfffe)) &&
             ((0x3ff < uVar9 - 0xd800 && (0x3ff < uVar9 - 0xdc00)))) {
            if (uVar9 < 0x80) goto LAB_14044678e;
            bVar8 = (byte)uVar9;
            if (0x7ff < uVar9) {
              if (0xffff < uVar9) {
                if (param_2 < 4) goto LAB_140446711;
                *pbVar2 = (byte)(uVar9 >> 0x12) | 0xf0;
                pbVar2[1] = (byte)(uVar9 >> 0xc) & 0x3f | 0x80;
                pbVar2[2] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
                pbVar2[3] = bVar8 & 0x3f | 0x80;
                iVar4 = iVar7 + 4;
                goto LAB_140446794;
              }
              if (2 < param_2) {
                *pbVar2 = (byte)(uVar9 >> 0xc) | 0xe0;
                pbVar2[1] = (byte)(uVar9 >> 6) & 0x3f | 0x80;
                pbVar2[2] = bVar8 & 0x3f | 0x80;
                iVar4 = iVar7 + 3;
                goto LAB_140446794;
              }
LAB_140446711:
              *pbVar2 = 0x3f;
              goto LAB_140446791;
            }
            if (param_2 < 2) goto LAB_140446711;
            *pbVar2 = (byte)(uVar9 >> 6) | 0xc0;
            pbVar2[1] = bVar8 & 0x3f | 0x80;
            iVar4 = iVar7 + 2;
          }
          else {
            uVar9 = 0x3f;
LAB_14044678e:
            *pbVar2 = (byte)uVar9;
LAB_140446791:
            iVar4 = iVar7 + 1;
          }
LAB_140446794:
          iVar4 = iVar4 - iVar7;
          if (iVar4 < 1) {
            return;
          }
          *param_1 = *param_1 + (longlong)iVar4;
          param_2 = param_2 - iVar4;
          local_res10[0] = param_2;
        }
      }
      else {
        if (uVar9 != 0xffffffff) {
          if (uVar1 - 0xdc00 < 0x400) {
            uVar5 = uVar5 + 0xfca02400 + uVar9 * 0x400;
          }
          else {
            cVar3 = WriteCodepointToBuffer<char_*>(uVar9,param_1,local_res10);
            param_2 = local_res10[0];
            if (cVar3 == '\0') {
              return;
            }
          }
          uVar9 = 0xffffffff;
        }
        pbVar2 = (byte *)*param_1;
        iVar7 = (int)pbVar2;
        if ((((uVar5 < 0x110000) && (1 < uVar5 - 0xfffe)) && (0x3ff < uVar5 - 0xd800)) &&
           (0x3ff < uVar5 - 0xdc00)) {
          if (uVar5 < 0x80) goto LAB_1404468ea;
          bVar8 = (byte)uVar5;
          if (0x7ff < uVar5) {
            if (0xffff < uVar5) {
              if (param_2 < 4) goto LAB_140446872;
              *pbVar2 = (byte)(uVar5 >> 0x12) | 0xf0;
              pbVar2[1] = (byte)(uVar5 >> 0xc) & 0x3f | 0x80;
              pbVar2[2] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
              pbVar2[3] = bVar8 & 0x3f | 0x80;
              iVar4 = iVar7 + 4;
              goto LAB_1404468ef;
            }
            if (2 < param_2) {
              *pbVar2 = (byte)(uVar5 >> 0xc) | 0xe0;
              pbVar2[1] = (byte)(uVar5 >> 6) & 0x3f | 0x80;
              pbVar2[2] = bVar8 & 0x3f | 0x80;
              iVar4 = iVar7 + 3;
              goto LAB_1404468ef;
            }
LAB_140446872:
            *pbVar2 = 0x3f;
            goto LAB_1404468ec;
          }
          if (param_2 < 2) goto LAB_140446872;
          *pbVar2 = (byte)(uVar5 >> 6) | 0xc0;
          pbVar2[1] = bVar8 & 0x3f | 0x80;
          iVar4 = iVar7 + 2;
        }
        else {
          uVar5 = 0x3f;
LAB_1404468ea:
          *pbVar2 = (byte)uVar5;
LAB_1404468ec:
          iVar4 = iVar7 + 1;
        }
LAB_1404468ef:
        iVar4 = iVar4 - iVar7;
        if (iVar4 < 1) {
          return;
        }
        *param_1 = *param_1 + (longlong)iVar4;
        param_2 = param_2 - iVar4;
        uVar5 = uVar9;
        local_res10[0] = param_2;
      }
      uVar9 = uVar5;
      lVar6 = lVar6 + 1;
    } while (lVar6 < param_4);
  }
  return;
}



// FUNCTION 140446930 Convert_Impl<UE4StringConv_Private::FCountingOutputIterator> body=560 status=ok
// SIG undefined Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>(void)

void FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
               (int *param_1,uint param_2,longlong param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint local_res10 [2];
  
  if (0 < param_4) {
    lVar6 = 0;
    uVar7 = 0xffffffff;
    iVar8 = 1;
    local_res10[0] = param_2;
    do {
      uVar1 = *(ushort *)(param_3 + lVar6 * 2);
      uVar5 = (uint)uVar1;
      if (uVar1 - 0xd800 < 0x400) {
        if (uVar7 != 0xffffffff) {
          iVar4 = *param_1;
          if (((uVar7 < 0xfffe) || (uVar7 - 0x10000 < 0x100000)) &&
             ((0x3ff < uVar7 - 0xd800 && ((0x3ff < uVar7 - 0xdc00 && (0x7f < uVar7)))))) {
            if (uVar7 < 0x800) {
              iVar3 = 2 - (uint)(param_2 < 2);
              local_res10[0] = param_2 - iVar3;
              *param_1 = iVar3 + iVar4;
              param_2 = local_res10[0];
            }
            else if (uVar7 < 0x10000) {
              iVar3 = 3;
              if (param_2 < 3) {
                iVar3 = iVar8;
              }
              local_res10[0] = param_2 - iVar3;
              *param_1 = iVar3 + iVar4;
              param_2 = local_res10[0];
            }
            else {
              iVar3 = iVar8;
              if (3 < param_2) {
                iVar3 = 4;
              }
              local_res10[0] = param_2 - iVar3;
              *param_1 = iVar3 + iVar4;
              param_2 = local_res10[0];
            }
          }
          else {
            local_res10[0] = param_2 - 1;
            *param_1 = iVar4 + 1;
            param_2 = local_res10[0];
          }
        }
      }
      else {
        if (uVar7 != 0xffffffff) {
          if (uVar1 - 0xdc00 < 0x400) {
            uVar5 = uVar5 + 0xfca02400 + uVar7 * 0x400;
          }
          else {
            cVar2 = WriteCodepointToBuffer<UE4StringConv_Private::FCountingOutputIterator>
                              (uVar7,param_1,local_res10);
            param_2 = local_res10[0];
            if (cVar2 == '\0') {
              return;
            }
          }
          uVar7 = 0xffffffff;
        }
        if ((((uVar5 < 0xfffe) || (uVar5 - 0x10000 < 0x100000)) && (0x3ff < uVar5 - 0xd800)) &&
           ((0x3ff < uVar5 - 0xdc00 && (0x7f < uVar5)))) {
          if (uVar5 < 0x800) {
            iVar4 = 2 - (uint)(param_2 < 2);
          }
          else if (uVar5 < 0x10000) {
            iVar4 = 3;
            if (param_2 < 3) {
              iVar4 = iVar8;
            }
          }
          else {
            iVar4 = iVar8;
            if (3 < param_2) {
              iVar4 = 4;
            }
          }
        }
        else {
          iVar4 = 1;
        }
        local_res10[0] = param_2 - iVar4;
        *param_1 = iVar4 + *param_1;
        uVar5 = uVar7;
        param_2 = local_res10[0];
      }
      uVar7 = uVar5;
      lVar6 = lVar6 + 1;
    } while (lVar6 < param_4);
  }
  return;
}



// FUNCTION 140446b60 WriteCodepointToBuffer<char_*> body=260 status=ok
// SIG undefined WriteCodepointToBuffer<char_*>(void)

ulonglong FTCHARToUTF8_Convert::WriteCodepointToBuffer<char_*>
                    (uint param_1,longlong *param_2,uint *param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint3 uVar3;
  ulonglong in_RAX;
  byte bVar4;
  int iVar5;
  int iVar6;
  
  pbVar2 = (byte *)*param_2;
  uVar1 = *param_3;
  iVar6 = (int)pbVar2;
  if (((param_1 < 0x110000) && (in_RAX = (ulonglong)(param_1 - 0xfffe), 1 < param_1 - 0xfffe)) &&
     (in_RAX = (ulonglong)(param_1 - 0xd800), 0x7ff < param_1 - 0xd800)) {
    if (param_1 < 0x80) goto LAB_140446c46;
    bVar4 = (byte)param_1;
    uVar3 = (uint3)(param_1 >> 8);
    if (param_1 < 0x800) {
      if (1 < uVar1) {
        in_RAX = (ulonglong)CONCAT31(uVar3 >> 6,(char)(param_1 >> 6)) | 0xc0;
        *pbVar2 = (byte)in_RAX;
        pbVar2[1] = bVar4 & 0x3f | 0x80;
        iVar5 = iVar6 + 2;
        goto LAB_140446c4c;
      }
    }
    else if (param_1 < 0x10000) {
      if (2 < uVar1) {
        *pbVar2 = (byte)(param_1 >> 0xc) | 0xe0;
        in_RAX = (ulonglong)CONCAT31(uVar3 >> 6,(char)(param_1 >> 6)) & 0xffffffffffffff3f | 0x80;
        pbVar2[1] = (byte)in_RAX;
        pbVar2[2] = bVar4 & 0x3f | 0x80;
        iVar5 = iVar6 + 3;
        goto LAB_140446c4c;
      }
    }
    else if (3 < uVar1) {
      *pbVar2 = (byte)(param_1 >> 0x12) | 0xf0;
      pbVar2[1] = (byte)(param_1 >> 0xc) & 0x3f | 0x80;
      in_RAX = (ulonglong)CONCAT31(uVar3 >> 6,(char)(param_1 >> 6)) & 0xffffffffffffff3f | 0x80;
      pbVar2[2] = (byte)in_RAX;
      pbVar2[3] = bVar4 & 0x3f | 0x80;
      iVar5 = iVar6 + 4;
      goto LAB_140446c4c;
    }
    *pbVar2 = 0x3f;
  }
  else {
    param_1 = 0x3f;
LAB_140446c46:
    *pbVar2 = (byte)param_1;
  }
  iVar5 = iVar6 + 1;
LAB_140446c4c:
  iVar5 = iVar5 - iVar6;
  if (iVar5 < 1) {
    return in_RAX & 0xffffffffffffff00;
  }
  *param_2 = *param_2 + (longlong)iVar5;
  *param_3 = *param_3 - iVar5;
  return CONCAT71((int7)(int3)((uint)iVar5 >> 8),1);
}



// FUNCTION 140446c70 WriteCodepointToBuffer<UE4StringConv_Private::FCountingOutputIterator> body=216 status=ok
// SIG undefined WriteCodepointToBuffer<UE4StringConv_Private::FCountingOutputIterator>(void)

undefined8
FTCHARToUTF8_Convert::WriteCodepointToBuffer<UE4StringConv_Private::FCountingOutputIterator>
          (uint param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  uint3 uVar3;
  int iVar4;
  
  uVar1 = *param_3;
  iVar2 = *param_2;
  if ((((0xfffd < param_1) && (0xfffff < param_1 - 0x10000)) || (param_1 - 0xd800 < 0x400)) ||
     ((param_1 - 0xdc00 < 0x400 || (param_1 < 0x80)))) {
    *param_2 = iVar2 + 1;
    *param_3 = *param_3 - 1;
    return 1;
  }
  uVar3 = (uint3)((uint)iVar2 >> 8);
  if (param_1 < 0x800) {
    iVar4 = 2 - (uint)(uVar1 < 2);
    *param_2 = iVar4 + iVar2;
    *param_3 = *param_3 - iVar4;
    return CONCAT71((uint7)uVar3,1);
  }
  if (param_1 < 0x10000) {
    iVar4 = 3;
    if (uVar1 < 3) {
      iVar4 = 1;
    }
    *param_2 = iVar4 + iVar2;
    *param_3 = *param_3 - iVar4;
    return CONCAT71((uint7)uVar3,1);
  }
  iVar4 = 1;
  if (3 < uVar1) {
    iVar4 = 4;
  }
  *param_2 = iVar4 + iVar2;
  *param_3 = *param_3 - iVar4;
  return CONCAT71((uint7)uVar3,1);
}



// FUNCTION 140446d50 FUN_140446d50 body=33 status=ok
// SIG undefined FUN_140446d50(void)

undefined8 * FUN_140446d50(undefined8 *param_1)

{
  FUN_1417818c0();
  *param_1 = &PTR_FUN_143f3f648;
  return param_1;
}



// FUNCTION 140446d80 FUN_140446d80 body=110 status=ok
// SIG undefined FUN_140446d80(void)

void FUN_140446d80(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x68);
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
  if (*(code **)(param_1 + 0x58) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140446de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x58))(param_1);
  return;
}



// FUNCTION 140446df0 FUN_140446df0 body=52 status=ok
// SIG undefined FUN_140446df0(void)

undefined8 FUN_140446df0(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 140446e30 FUN_140446e30 body=1153 status=ok
// SIG undefined FUN_140446e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140446e30(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  int *piVar1;
  void *_Src;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  AccountId local_298;
  void *local_290;
  int local_288;
  undefined4 local_284;
  undefined1 local_280;
  longlong local_278;
  undefined1 local_260;
  undefined1 local_258;
  longlong local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  void *local_1f8 [8];
  code *local_1b8;
  code *local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  void *local_198 [8];
  code *local_158;
  code *local_150;
  undefined1 *local_148;
  code *local_140;
  undefined1 local_138 [64];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  longlong *local_d0;
  undefined1 local_c8 [64];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2c8;
  local_288 = (int)param_3[1];
  lVar5 = (longlong)local_288;
  _Src = (void *)*param_3;
  local_218 = 0;
  uStack_210 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_290 = (void *)0x0;
  if (local_288 == 0) {
    local_284 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_290,local_288,0);
    _guard_xfg_dispatch_icall_nop(local_290,_Src,lVar5 * 2);
  }
  local_280 = 0;
  local_278 = 0;
  local_260 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_258 = 0;
  local_240 = 0;
  puVar4 = (undefined4 *)FUN_140447410(&local_290,local_208);
  local_228 = *puVar4;
  uStack_224 = puVar4[1];
  uStack_220 = puVar4[2];
  uStack_21c = puVar4[3];
  local_298 = bifrost::users::_guard_xfg_dispatch_icall_nop(param_2,&local_228,&local_238);
  if (local_278 != 0) {
    FMemory::Free();
  }
  if (local_250 != 0) {
    FMemory::Free();
  }
  if (local_290 != (void *)0x0) {
    FMemory::Free();
  }
  plVar2 = (longlong *)param_1[1];
  plVar6 = plVar2;
  plVar7 = (longlong *)0x0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar2[1];
    bVar8 = iVar3 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar6 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar8) {
      LOCK();
      bVar8 = iVar3 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = (longlong *)*param_1;
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar6 = plVar2 + 1;
          lVar5 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar6 = plVar2 + 1;
          lVar5 = *plVar6;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          plVar6 = plVar2;
          if ((int)lVar5 == 1) {
            (**(code **)*plVar2)(plVar2);
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
        break;
      }
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  *(undefined4 *)(param_1 + 2) = 0;
  local_88 = *(undefined8 *)(param_4 + 0x40);
  uStack_80 = *(code **)(param_4 + 0x48);
  local_78 = *(undefined4 *)(param_4 + 0x50);
  uStack_74 = *(undefined4 *)(param_4 + 0x54);
  uStack_70 = *(undefined4 *)(param_4 + 0x58);
  uStack_6c = *(undefined4 *)(param_4 + 0x5c);
  if (uStack_80 != (code *)0x0) {
    (*uStack_80)(local_c8,param_4);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_f8 = *(undefined8 *)(param_4 + 0x40);
  uStack_f0 = *(code **)(param_4 + 0x48);
  local_e8 = *(undefined4 *)(param_4 + 0x50);
  uStack_e4 = *(undefined4 *)(param_4 + 0x54);
  uStack_e0 = *(undefined4 *)(param_4 + 0x58);
  uStack_dc = *(undefined4 *)(param_4 + 0x5c);
  local_68 = plVar7;
  local_60 = plVar6;
  if (uStack_f0 != (code *)0x0) {
    (*uStack_f0)(local_138,param_4);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_1b8 = FUN_140446530;
  local_1b0 = FUN_140446570;
  local_1a8 = &LAB_140446630;
  local_1a0 = FUN_1404465e0;
  local_d8 = plVar7;
  local_d0 = plVar6;
  local_1f8[0] = bifrost::_guard_xfg_dispatch_icall_nop(0x70);
  *(undefined4 *)((longlong)local_1f8[0] + 0x40) = (undefined4)local_f8;
  *(undefined4 *)((longlong)local_1f8[0] + 0x44) = local_f8._4_4_;
  *(undefined4 *)((longlong)local_1f8[0] + 0x48) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)local_1f8[0] + 0x4c) = uStack_f0._4_4_;
  *(ulonglong *)((longlong)local_1f8[0] + 0x50) = CONCAT44(uStack_e4,local_e8);
  *(ulonglong *)((longlong)local_1f8[0] + 0x58) = CONCAT44(uStack_dc,uStack_e0);
  if (*(code **)((longlong)local_1f8[0] + 0x48) != (code *)0x0) {
    (**(code **)((longlong)local_1f8[0] + 0x48))(local_1f8[0],local_138);
  }
  *(longlong **)((longlong)local_1f8[0] + 0x60) = local_d8;
  *(longlong **)((longlong)local_1f8[0] + 0x68) = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  local_158 = FUN_140446600;
  local_150 = FUN_140446570;
  local_148 = &LAB_140446630;
  local_140 = FUN_1404465e0;
  local_198[0] = bifrost::_guard_xfg_dispatch_icall_nop(0x70);
  *(undefined4 *)((longlong)local_198[0] + 0x40) = (undefined4)local_88;
  *(undefined4 *)((longlong)local_198[0] + 0x44) = local_88._4_4_;
  *(undefined4 *)((longlong)local_198[0] + 0x48) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)local_198[0] + 0x4c) = uStack_80._4_4_;
  *(ulonglong *)((longlong)local_198[0] + 0x50) = CONCAT44(uStack_74,local_78);
  *(ulonglong *)((longlong)local_198[0] + 0x58) = CONCAT44(uStack_6c,uStack_70);
  if (*(code **)((longlong)local_198[0] + 0x48) != (code *)0x0) {
    (**(code **)((longlong)local_198[0] + 0x48))(local_198[0],local_c8);
  }
  *(longlong **)((longlong)local_198[0] + 0x60) = local_68;
  *(longlong **)((longlong)local_198[0] + 0x68) = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  local_2a8 = 0x4014000000000000;
  bifrost::users::_guard_xfg_dispatch_icall_nop(param_2,local_298,local_198,local_1f8);
  plVar2 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_d0 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_d0)(local_d0);
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
  if ((code *)CONCAT44(uStack_dc,uStack_e0) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_dc,uStack_e0))(local_138);
  }
  plVar2 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_60 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_60)(local_60);
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
  if ((code *)CONCAT44(uStack_6c,uStack_70) != (code *)0x0) {
    (*(code *)CONCAT44(uStack_6c,uStack_70))(local_c8);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  if (*param_3 != 0) {
    FMemory::Free();
  }
  if (*(code **)(param_4 + 0x58) != (code *)0x0) {
    (**(code **)(param_4 + 0x58))(param_4);
  }
  return;
}



// FUNCTION 1404472c0 FUN_1404472c0 body=85 status=ok
// SIG undefined FUN_1404472c0(void)

undefined8 FUN_1404472c0(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/Object.h",0x577,
             L"Pure virtual not implemented (%s)",L"UObject::GetArchetypeOverride");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject/Object.h",0x577,
             L"Pure virtual not implemented (%s)",L"UObject::GetArchetypeOverride");
  return 0;
}



// FUNCTION 140447320 FUN_140447320 body=13 status=ok
// SIG undefined FUN_140447320(void)

undefined8 * FUN_140447320(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140447330 GetDetailedInfoInternal body=62 status=ok
// SIG undefined GetDetailedInfoInternal(void)

undefined8 * UObject::GetDetailedInfoInternal(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x1b;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"No_Detailed_Info_Specified",0x36);
  return param_2;
}



// FUNCTION 140447370 FUN_140447370 body=39 status=ok
// SIG undefined FUN_140447370(void)

undefined8 FUN_140447370(undefined8 param_1,undefined8 param_2)

{
  FName::FName(param_2,&DAT_143f3eda8,1);
  return param_2;
}



// FUNCTION 1404473a0 FUN_1404473a0 body=6 status=ok
// SIG undefined FUN_1404473a0(void)

undefined8 FUN_1404473a0(void)

{
  return 2;
}



// FUNCTION 1404473b0 FUN_1404473b0 body=47 status=ok
// SIG undefined FUN_1404473b0(void)

void FUN_1404473b0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &PTR_FUN_143f3f350;
    return;
  }
  return;
}



// FUNCTION 1404473f0 GetArchetypeFromRequiredInfo body=19 status=ok
// SIG undefined GetArchetypeFromRequiredInfo(void)

void UObject::GetArchetypeFromRequiredInfo(void)

{
  FUN_141785090();
  return;
}



// FUNCTION 140447410 FUN_140447410 body=476 status=ok
// SIG undefined FUN_140447410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140447410(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  ulonglong uVar10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  longlong lStack_f0;
  char local_e8 [128];
  char *local_68;
  char *local_60;
  int local_58;
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 7) == '\0') {
    if (*(int *)(param_1 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_1;
    }
    local_68 = (char *)0x0;
    uVar10 = 0xffffffffffffffff;
    uVar8 = uVar10;
    if (puVar7 == (undefined2 *)0x0) {
      local_60 = (char *)0x0;
      local_58 = 0;
    }
    else {
      do {
        uVar9 = uVar8;
        uVar8 = uVar9 + 1;
      } while (puVar7[uVar8] != 0);
      local_f8 = (char *)((ulonglong)local_f8 & 0xffffffff00000000);
      FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
                (&local_f8,(int)uVar8 * 4,puVar7,uVar8 & 0xffffffff);
      local_58 = (int)local_f8;
      uVar1 = (int)local_f8 + 1;
      pcVar5 = (char *)0x0;
      if ((0x80 < uVar1) && (pcVar5 = (char *)0x0, uVar1 != 0)) {
        pcVar5 = (char *)FMemory::Realloc(0,(longlong)(int)uVar1,0);
        local_68 = pcVar5;
      }
      local_f8 = local_e8;
      if (pcVar5 != (char *)0x0) {
        local_f8 = pcVar5;
      }
      local_60 = local_f8;
      FTCHARToUTF8_Convert::Convert_Impl<char_*>(&local_f8,uVar1,puVar7,(int)uVar9 + 2);
    }
    do {
      uVar8 = uVar10;
      pcVar5 = local_60;
      uVar10 = uVar8 + 1;
    } while (local_60[uVar10] != '\0');
    pcVar6 = (char *)FMemory::Malloc(uVar8 + 2,0);
    param_1[8] = pcVar6;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      *pcVar6 = cVar2;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    lVar3 = param_1[8];
    lStack_f0 = lVar3 + uVar10;
    local_f8._0_4_ = (int)lVar3;
    local_f8._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
    *(int *)(param_1 + 9) = (int)local_f8;
    *(undefined4 *)((longlong)param_1 + 0x4c) = local_f8._4_4_;
    param_1[10] = lStack_f0;
    if (local_68 != (char *)0x0) {
      local_f8 = (char *)lVar3;
      FMemory::Free();
    }
    *(undefined1 *)(param_1 + 7) = 1;
  }
  uVar4 = param_1[10];
  *param_2 = param_1[9];
  param_2[1] = uVar4;
  return param_2;
}



// FUNCTION 1404475f0 FUN_1404475f0 body=47 status=ok
// SIG undefined FUN_1404475f0(void)

longlong FUN_1404475f0(void)

{
  if (DAT_1468501e0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1468501e0,&PTR_s__Script_Bifrost_143f3fa28);
  }
  return DAT_1468501e0;
}



// FUNCTION 140447620 FUN_140447620 body=151 status=ok
// SIG undefined FUN_140447620(void)

longlong FUN_140447620(void)

{
  if (DAT_1468501f0 == 0) {
    FUN_14171ccd0(L"/Script/Bifrost",L"BifrostSettings",&DAT_1468501f0,FUN_140447710,0x28,0x10000000
                  ,0,L"Engine",&LAB_1404476e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468501f0;
}



// FUNCTION 1404476f0 GetBoundProgramCounterForTimerManager body=3 status=ok
// SIG undefined GetBoundProgramCounterForTimerManager(void)

undefined8
TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
::GetBoundProgramCounterForTimerManager(void)

{
  return 0;
}



// FUNCTION 140447710 FUN_140447710 body=3 status=ok
// SIG undefined FUN_140447710(void)

void FUN_140447710(void)

{
  return;
}



// FUNCTION 140447720 FUN_140447720 body=47 status=ok
// SIG undefined FUN_140447720(void)

longlong FUN_140447720(void)

{
  if (DAT_1468501e8 == 0) {
    FUN_141786440(&DAT_1468501e8,&PTR_FUN_143f3f910);
  }
  return DAT_1468501e8;
}



// FUNCTION 140447750 FUN_140447750 body=71 status=ok
// SIG undefined FUN_140447750(void)

void FUN_140447750(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  (**(code **)(*param_2 + 0x90))(param_2,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x000140447793. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  return;
}



// FUNCTION 1404477a0 FUN_1404477a0 body=78 status=ok
// SIG undefined FUN_1404477a0(void)

undefined8 FUN_1404477a0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x218))(param_2,param_1[1]);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3);
  }
  return param_3;
}



// FUNCTION 1404477f0 FUN_1404477f0 body=98 status=ok
// SIG undefined FUN_1404477f0(void)

undefined8 * FUN_1404477f0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_143f47bd8;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      cohtml::Property::operator_delete(param_1);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 140447860 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FGlobalShaderType::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FShaderType::~FShaderType();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x150);
  }
  return param_1;
}



// FUNCTION 1404478a0 FUN_1404478a0 body=140 status=ok
// SIG undefined FUN_1404478a0(void)

longlong FUN_1404478a0(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UBoolProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1404478f7;
  }
  lVar3 = 0;
LAB_1404478f7:
  (**(code **)(*param_2 + 0x120))
            (param_2,(*(byte *)(lVar3 + 0x73) &
                     *(byte *)((longlong)*(int *)(lVar3 + 0x44) +
                              (ulonglong)*(byte *)(lVar3 + 0x71) + param_3)) != 0);
  return param_3;
}



// FUNCTION 140447930 FUN_140447930 body=169 status=ok
// SIG undefined FUN_140447930(void)

longlong FUN_140447930(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  byte bVar3;
  byte *pbVar4;
  longlong lVar5;
  char local_res8 [8];
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 != 0) {
    lVar2 = UBoolProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140447987;
  }
  lVar5 = 0;
LAB_140447987:
  local_res8[0] = '\0';
  (**(code **)(*param_2 + 0x210))(param_2,local_res8);
  pbVar4 = (byte *)((longlong)*(int *)(lVar5 + 0x44) + (ulonglong)*(byte *)(lVar5 + 0x71) + param_3)
  ;
  if (local_res8[0] == '\0') {
    bVar3 = 0;
  }
  else {
    bVar3 = *(byte *)(lVar5 + 0x72);
  }
  *pbVar4 = ~*(byte *)(lVar5 + 0x73) & *pbVar4 | bVar3;
  return param_3;
}



// FUNCTION 1404479e0 FUN_1404479e0 body=78 status=ok
// SIG undefined FUN_1404479e0(void)

undefined8 * FUN_1404479e0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456270(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f47580;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140447a30 FUN_140447a30 body=128 status=ok
// SIG undefined FUN_140447a30(void)

undefined8 FUN_140447a30(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UBoolProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140447a87;
  }
  lVar3 = 0;
LAB_140447a87:
  param_2 = (ulonglong)*(byte *)(lVar3 + 0x71) + param_2;
  *(bool *)param_3 = (*(byte *)(lVar3 + 0x73) & *(byte *)(*(int *)(lVar3 + 0x44) + param_2)) != 0;
  return CONCAT71((int7)((ulonglong)param_2 >> 8),1);
}



// FUNCTION 140447ab0 FUN_140447ab0 body=126 status=ok
// SIG undefined FUN_140447ab0(void)

longlong FUN_140447ab0(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UByteProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140447b06;
  }
  lVar3 = 0;
LAB_140447b06:
  (**(code **)(*param_2 + 0xd0))(param_2,*(undefined1 *)(*(int *)(lVar3 + 0x44) + param_3));
  return param_3;
}



// FUNCTION 140447b30 FUN_140447b30 body=140 status=ok
// SIG undefined FUN_140447b30(void)

longlong FUN_140447b30(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UByteProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140447b87;
  }
  lVar3 = 0;
LAB_140447b87:
  local_res8[0] = 0;
  (**(code **)(*param_2 + 0x1b8))(param_2,local_res8);
  *(undefined1 *)(*(int *)(lVar3 + 0x44) + param_3) = local_res8[0];
  return param_3;
}



// FUNCTION 140447bc0 FUN_140447bc0 body=78 status=ok
// SIG undefined FUN_140447bc0(void)

undefined8 * FUN_140447bc0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456270(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f475f8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140447c10 FUN_140447c10 body=65 status=ok
// SIG undefined FUN_140447c10(void)

undefined8 FUN_140447c10(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  float fVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = (**(code **)(*plVar1 + 0x3b0))(plVar1,*(int *)((longlong)plVar1 + 0x44) + param_2);
  fVar3 = (float)lVar2;
  if (lVar2 < 0) {
    fVar3 = fVar3 + 1.8446744e+19;
  }
  *param_3 = fVar3;
  return 1;
}



// FUNCTION 140447c60 FUN_140447c60 body=190 status=ok
// SIG undefined FUN_140447c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140447c60(longlong param_1,longlong param_2,void *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  undefined2 *puVar2;
  ulonglong _Size;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  int local_d0;
  undefined1 local_c8 [128];
  longlong local_48;
  void *local_40;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar1 = *(longlong **)(param_1 + 0x18);
  (**(code **)(*plVar1 + 0x3c0))(plVar1,&local_d8,*(int *)((longlong)plVar1 + 0x44) + param_2);
  puVar2 = &DAT_143f3eda8;
  if (local_d0 != 0) {
    puVar2 = local_d8;
  }
  TStringConversion<FTCHARToUTF8_Convert,128>::TStringConversion<FTCHARToUTF8_Convert,128>
            (local_c8,puVar2);
  _Size = (ulonglong)local_38;
  if ((param_3 != (void *)0x0) && (_Size <= *param_4)) {
    _guard_xfg_dispatch_icall_nop(param_3,local_40,_Size);
  }
  *param_4 = _Size;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_d8 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return 1;
}



// FUNCTION 140447d20 FUN_140447d20 body=125 status=ok
// SIG undefined FUN_140447d20(void)

longlong FUN_140447d20(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UIntProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140447d76;
  }
  lVar3 = 0;
LAB_140447d76:
  (**(code **)(*param_2 + 0x108))(param_2,*(undefined4 *)(*(int *)(lVar3 + 0x44) + param_3));
  return param_3;
}



// FUNCTION 140447da0 FUN_140447da0 body=142 status=ok
// SIG undefined FUN_140447da0(void)

longlong FUN_140447da0(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UIntProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140447df7;
  }
  lVar3 = 0;
LAB_140447df7:
  local_res8[0] = 0;
  (**(code **)(*param_2 + 0x1f8))(param_2,local_res8);
  *(undefined4 *)(*(int *)(lVar3 + 0x44) + param_3) = local_res8[0];
  return param_3;
}



// FUNCTION 140447e30 FUN_140447e30 body=78 status=ok
// SIG undefined FUN_140447e30(void)

undefined8 * FUN_140447e30(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456270(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f47670;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140447e80 FUN_140447e80 body=52 status=ok
// SIG undefined FUN_140447e80(void)

undefined8 FUN_140447e80(longlong param_1,longlong param_2,float *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  lVar2 = (**(code **)(*plVar1 + 0x3a8))(plVar1,*(int *)((longlong)plVar1 + 0x44) + param_2);
  *param_3 = (float)lVar2;
  return 1;
}



// FUNCTION 140447ec0 FUN_140447ec0 body=125 status=ok
// SIG undefined FUN_140447ec0(void)

longlong FUN_140447ec0(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UUInt32Property::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140447f16;
  }
  lVar3 = 0;
LAB_140447f16:
  (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*(int *)(lVar3 + 0x44) + param_3));
  return param_3;
}



// FUNCTION 140447f40 FUN_140447f40 body=142 status=ok
// SIG undefined FUN_140447f40(void)

longlong FUN_140447f40(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UUInt32Property::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140447f97;
  }
  lVar3 = 0;
LAB_140447f97:
  local_res8[0] = 0;
  (**(code **)(*param_2 + 0x1f0))(param_2,local_res8);
  *(undefined4 *)(*(int *)(lVar3 + 0x44) + param_3) = local_res8[0];
  return param_3;
}



// FUNCTION 140447fd0 FUN_140447fd0 body=78 status=ok
// SIG undefined FUN_140447fd0(void)

undefined8 * FUN_140447fd0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456270(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f476e8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140448020 FUN_140448020 body=125 status=ok
// SIG undefined FUN_140448020(void)

longlong FUN_140448020(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UInt64Property::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140448076;
  }
  lVar3 = 0;
LAB_140448076:
  (**(code **)(*param_2 + 0xf8))(param_2,*(undefined8 *)(*(int *)(lVar3 + 0x44) + param_3));
  return param_3;
}



// FUNCTION 1404480a0 FUN_1404480a0 body=145 status=ok
// SIG undefined FUN_1404480a0(void)

longlong FUN_1404480a0(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UInt64Property::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1404480f7;
  }
  lVar3 = 0;
LAB_1404480f7:
  local_res8 = 0;
  (**(code **)(*param_2 + 0x1e8))(param_2,&local_res8);
  *(undefined8 *)(*(int *)(lVar3 + 0x44) + param_3) = local_res8;
  return param_3;
}



// FUNCTION 140448140 FUN_140448140 body=78 status=ok
// SIG undefined FUN_140448140(void)

undefined8 * FUN_140448140(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456270(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f47760;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140448190 FUN_140448190 body=125 status=ok
// SIG undefined FUN_140448190(void)

longlong FUN_140448190(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UUInt64Property::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1404481e6;
  }
  lVar3 = 0;
LAB_1404481e6:
  (**(code **)(*param_2 + 0xf0))(param_2,*(undefined8 *)(*(int *)(lVar3 + 0x44) + param_3));
  return param_3;
}



// FUNCTION 140448210 FUN_140448210 body=145 status=ok
// SIG undefined FUN_140448210(void)

longlong FUN_140448210(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UUInt64Property::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140448267;
  }
  lVar3 = 0;
LAB_140448267:
  local_res8 = 0;
  (**(code **)(*param_2 + 0x1e0))(param_2,&local_res8);
  *(undefined8 *)(*(int *)(lVar3 + 0x44) + param_3) = local_res8;
  return param_3;
}



// FUNCTION 1404482b0 FUN_1404482b0 body=78 status=ok
// SIG undefined FUN_1404482b0(void)

undefined8 * FUN_1404482b0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_140456270(puVar1,param_1);
    *puVar1 = &PTR_FUN_143f477d8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140448300 FUN_140448300 body=126 status=ok
// SIG undefined FUN_140448300(void)

longlong FUN_140448300(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UFloatProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140448356;
  }
  lVar3 = 0;
LAB_140448356:
  (**(code **)(*param_2 + 200))(param_2,*(undefined4 *)(*(int *)(lVar3 + 0x44) + param_3));
  return param_3;
}



// FUNCTION 140448380 FUN_140448380 body=147 status=ok
// SIG undefined FUN_140448380(void)

longlong FUN_140448380(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 local_res8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = UFloatProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1404483d7;
  }
  lVar3 = 0;
LAB_1404483d7:
  local_res8[0] = 0;
  (**(code **)(*param_2 + 0x1b0))(param_2,local_res8);
  *(undefined4 *)(*(int *)(lVar3 + 0x44) + param_3) = local_res8[0];
  return param_3;
}


