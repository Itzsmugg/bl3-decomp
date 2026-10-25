// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e2bc00 FUN_140e2bc00 body=338 status=ok
// SIG undefined FUN_140e2bc00(void)

void FUN_140e2bc00(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_res10 [8];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x47d,local_res10);
  lVar2 = param_1[0x58e];
  if (lVar2 == 0) {
    return;
  }
  lVar4 = FUN_140aab880();
  if (lVar4 == 0) {
    return;
  }
  lVar1 = lVar4 + 0x120;
  lVar5 = FWeakObjectPtr::Get(lVar1);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar4 + 0x128)) {
      return;
    }
    if (*(longlong *)(lVar4 + 0x130) == 0) {
      return;
    }
    lVar5 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar1,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0x128) = DAT_1464b56f4;
    }
    lVar5 = FWeakObjectPtr::Get(lVar1);
    if (lVar5 == 0) {
      return;
    }
  }
  lVar4 = FUN_142e1f230();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar4 = UWorld::GetAuthGameMode<ABaseGameMode>(uVar6);
    if ((lVar4 != 0) && (lVar4 = FUN_142d84360(lVar4), lVar4 != 0)) {
      FUN_142dd18b0(lVar4,lVar2,lVar5,1);
    }
  }
  return;
}



// FUNCTION 140e2bd60 FUN_140e2bd60 body=110 status=ok
// SIG undefined FUN_140e2bd60(void)

void FUN_140e2bd60(longlong param_1)

{
  longlong lVar1;
  
  FUN_140c4cfd0();
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x2500,0);
  lVar1 = *(longlong *)(param_1 + 0x10e0);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x2ae8) != 0)) {
    FUN_14234feb0(*(longlong *)(param_1 + 0x2ae8),
                  *(float *)(*(longlong *)(param_1 + 0x4d0) + 0x714) + *(float *)(lVar1 + 0x133c),
                  *(float *)(*(longlong *)(param_1 + 0x4d0) + 0x710) + *(float *)(lVar1 + 0x1340),1)
    ;
    return;
  }
  return;
}



// FUNCTION 140e2bdd0 FUN_140e2bdd0 body=405 status=ok
// SIG undefined FUN_140e2bdd0(void)

void FUN_140e2bdd0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  bool bVar5;
  ulonglong local_res8;
  longlong local_18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_140c4d0b0();
  piVar4 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar4 < DAT_14687038c) {
    _Init_thread_header(&DAT_14687038c);
    if (DAT_14687038c == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14629c540,0);
      FGenericPlatformString::Memcpy(DAT_14629c540,L"ControledMove_Siren_Phaseslam_Momentum",0x4e);
      atexit((_func_5014 *)&LAB_143e56370);
      _Init_thread_footer(&DAT_14687038c);
    }
  }
  if (*piVar4 < DAT_146870398) {
    _Init_thread_header(&DAT_146870398);
    if (DAT_146870398 == -1) {
      FName::FName(&DAT_146870390,L"ControledMove_Siren_Phaseslam_Momentum_C",1);
      _Init_thread_footer(&DAT_146870398);
    }
  }
  bVar5 = false;
  if (((*(longlong *)(param_1 + 0xe68) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe68) + 0x1778), bVar5 = false, lVar1 != 0))
     && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) {
    local_res8 = *(ulonglong *)(lVar1 + 0x18);
    FName::ToString(&local_res8,local_18);
    bVar5 = true;
    cVar3 = FString::StartsWith(local_18,&DAT_14629c540,1);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_140e2be82;
    }
  }
  bVar2 = false;
LAB_140e2be82:
  if ((bVar5) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  if (bVar2) {
    FUN_142dbb5d0(*(longlong *)(param_1 + 0xe68) + 0x8b0,&DAT_146870390);
  }
  return;
}



// FUNCTION 140e2bf70 FUN_140e2bf70 body=173 status=ok
// SIG undefined FUN_140e2bf70(void)

void FUN_140e2bf70(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (*(longlong *)(param_2 + 0x6d8) != 0) {
    lVar2 = FUN_14126dac0(lVar1);
    if (lVar2 != 0) {
      FUN_141269380(lVar2,param_1);
    }
    FUN_14120db40(*(undefined8 *)(param_2 + 0x6d8),param_1);
    FUN_140c58a40(param_1,*(undefined8 *)(param_2 + 0x6d8));
  }
  if (param_1[0x55b] != 0) {
    FUN_142fa9700(param_1[0x55b],DAT_146870220);
  }
  if (lVar1 != 0) {
    lVar1 = FUN_142f6c9f0(lVar1);
    if (lVar1 != 0) {
      FUN_142f68020(lVar1);
    }
  }
  FUN_140c4d100(param_1,param_2);
  return;
}



// FUNCTION 140e2c040 FUN_140e2c040 body=94 status=ok
// SIG undefined FUN_140e2c040(void)

void FUN_140e2c040(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_1[0x55b] != 0) {
    FUN_142fb8580(param_1[0x55b],DAT_146870220);
  }
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar2 = FUN_142f6c9f0(uVar1);
  if (lVar2 != 0) {
    FUN_142f68020(lVar2);
  }
  FUN_140c4d180(param_1,param_2);
  return;
}



// FUNCTION 140e2c0a0 SetContent body=42 status=ok
// SIG undefined SetContent(void)

void UContentWidget::SetContent(long param_1)

{
  FUN_141400bb0();
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 140e2c0d0 SetContent body=42 status=ok
// SIG undefined SetContent(void)

void UContentWidget::SetContent(undefined8 param_1,undefined8 param_2)

{
  FUN_141400bb0();
  FUN_140c4d210(param_1,param_2);
  return;
}



// FUNCTION 140e2c100 FUN_140e2c100 body=666 status=ok
// SIG undefined FUN_140e2c100(void)

void FUN_140e2c100(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if ((param_2 == 0) || (lVar10 = *(longlong *)(param_2 + 0x78), *(longlong *)(param_2 + 0x78) == 0)
     ) {
    lVar10 = param_2;
  }
  FUN_140e3d6d0(param_1,1,0,0);
  bVar5 = false;
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar7 = FUN_14144ee20();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
         ) != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)(param_3 + 0x88) != 0)) {
      cVar6 = FUN_140e3d3f0(param_1,lVar10,*(longlong *)(param_3 + 0x88),0);
      bVar5 = false;
      if (cVar6 != '\0') {
        bVar5 = true;
      }
    }
  }
  lVar7 = param_1 + 0x578;
  lVar8 = FWeakObjectPtr::Get(lVar7);
  if (lVar8 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x580)) && (*(longlong *)(param_1 + 0x588) != 0)) {
      lVar8 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar7,lVar8);
      if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x580) = DAT_1464b56f4;
      }
      lVar8 = FWeakObjectPtr::Get(lVar7);
      if (lVar8 != 0) goto LAB_140e2c22d;
    }
  }
  else {
LAB_140e2c22d:
    lVar7 = UXSkinAnimationProfile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140e2c266;
  }
  lVar8 = 0;
LAB_140e2c266:
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FUN_142c848a0(*(longlong *)(param_1 + 0x458),*(undefined8 *)(param_1 + 0x650));
    FUN_142c848a0(*(undefined8 *)(param_1 + 0x458),*(undefined8 *)(param_1 + 0x628));
  }
  if (lVar10 != 0) {
    lVar7 = FUN_1422312c0(param_1);
    if (lVar7 != 0) {
      lVar7 = FUN_1422312c0(param_1);
      FUN_142880530(*(undefined8 *)(lVar7 + 0xa0),param_1 + 0x680);
      *(undefined8 *)(param_1 + 0x680) = 0;
    }
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_142c848a0(*(longlong *)(param_1 + 0x458),*(undefined8 *)(param_1 + 0x648));
      FUN_142c848a0(*(undefined8 *)(param_1 + 0x458),*(undefined8 *)(param_1 + 0x620));
    }
    if (bVar5) {
      lVar7 = 0x660;
      if (lVar10 != lVar8) {
        lVar7 = 0x638;
      }
      FUN_140e309a0(param_1,local_48,lVar10,lVar7 + param_1);
      plVar9 = local_40;
    }
    else {
      lVar7 = 0x658;
      if (lVar10 != lVar8) {
        lVar7 = 0x630;
      }
      FUN_140e309a0(param_1,local_38,lVar10,lVar7 + param_1);
      plVar9 = local_30;
    }
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
  return;
}



// FUNCTION 140e2c3a0 FUN_140e2c3a0 body=107 status=ok
// SIG undefined FUN_140e2c3a0(void)

void FUN_140e2c3a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_140c4d330();
  if ((char)param_1[0x25] == '\x03') {
    uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = FUN_140aab5e0(uVar1);
    if (lVar2 != 0) {
      FUN_140ab52a0(lVar2,param_1,param_2);
    }
    if (param_1[0x58e] == param_1[0x3ae]) {
      FUN_140e2c6a0(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 140e2c410 FUN_140e2c410 body=505 status=ok
// SIG undefined FUN_140e2c410(void)

void FUN_140e2c410(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_58 [24];
  longlong local_40;
  
  lVar5 = *(longlong *)(param_1 + 0x120);
  if ((((lVar5 != 0) || (lVar5 = FUN_1423407b0(), lVar5 != 0)) &&
      (lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 != 0)) &&
     (lVar5 = *(longlong *)(lVar5 + 0x5a0), lVar5 != 0)) {
    lVar6 = FUN_141484230();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      plVar11 = *(longlong **)(lVar5 + 0x568);
      plVar2 = plVar11 + *(int *)(lVar5 + 0x570);
      for (; plVar11 != plVar2; plVar11 = plVar11 + 1) {
        lVar5 = *plVar11;
        if (lVar5 != 0) {
          plVar1 = (longlong *)(param_1 + 0x188);
          lVar6 = *plVar1;
          lVar10 = (longlong)*(int *)(param_1 + 400) * 0x30 + lVar6;
          for (; lVar6 != lVar10; lVar6 = lVar6 + 0x30) {
            lVar7 = FUN_1405ec200(lVar6);
            if (lVar7 == 0) {
LAB_140e2c552:
              lVar7 = 0;
            }
            else {
              lVar8 = FUN_1414a9b90();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (!bVar3) goto LAB_140e2c552;
            }
            if (lVar7 == lVar5) goto LAB_140e2c564;
          }
          lVar6 = 0;
LAB_140e2c564:
          if (lVar6 == 0) {
            uVar9 = FUN_140e13310(local_58,lVar5,0);
            iVar4 = FUN_140e1f530(plVar1,uVar9);
            if (iVar4 == -1) {
              iVar4 = *(int *)(param_1 + 400);
              *(int *)(param_1 + 400) = iVar4 + 1;
              if (*(int *)(param_1 + 0x194) < iVar4 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
              }
              FUN_140e13260((longlong)iVar4 * 0x30 + *plVar1,uVar9);
            }
            if (local_40 != 0) {
              FMemory::Free();
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e2c610 FUN_140e2c610 body=133 status=ok
// SIG undefined FUN_140e2c610(void)

void FUN_140e2c610(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x150);
  if (lVar3 != 0) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e2c661;
  }
  lVar3 = 0;
LAB_140e2c661:
  *(longlong *)(param_1 + 0x960) = lVar3;
  if (((*(longlong *)(param_1 + 0xa58) != 0) && (lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 0x2a60) != 0)) {
    FUN_142d1fad0();
  }
  return;
}



// FUNCTION 140e2c6a0 FUN_140e2c6a0 body=404 status=ok
// SIG undefined FUN_140e2c6a0(void)

void FUN_140e2c6a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    if (((*(byte *)(param_2 + 0x100) & 4) != 0) ||
       (bVar2 = false, (byte)(*(char *)(param_2 + 0x2f0) - 1U) < 2)) {
      bVar2 = true;
    }
    if ((bVar2) && (lVar1 = param_1[0x58e], lVar1 != 0)) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar6 = *(longlong *)(DAT_146b33f38 + 0x58);
      if (lVar6 != 0) {
        uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar4 = UWorld::GetAuthGameMode<ABaseGameMode>(uVar3);
        if ((lVar4 != 0) && (lVar4 = FUN_142d84360(lVar4), lVar4 != 0)) {
          lVar7 = lVar6 + 0xc40;
          lVar5 = FWeakObjectPtr::Get(lVar7);
          if (lVar5 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if (DAT_1464b56f4 == *(int *)(lVar6 + 0xc48)) {
              return;
            }
            if (*(longlong *)(lVar6 + 0xc50) == 0) {
              return;
            }
            lVar5 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar7,lVar5);
            if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(lVar6 + 0xc48) = DAT_1464b56f4;
            }
            lVar5 = FWeakObjectPtr::Get(lVar7);
            if (lVar5 == 0) {
              return;
            }
          }
          lVar6 = FUN_142e1f230();
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
            FUN_142dd18b0(lVar4,lVar1,lVar5,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e2c840 FUN_140e2c840 body=799 status=ok
// SIG undefined FUN_140e2c840(void)

void FUN_140e2c840(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  void *_Src;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  void *local_108;
  undefined8 local_100;
  undefined1 local_f8;
  longlong local_f0 [2];
  void *local_e0;
  undefined4 local_d8;
  int local_d4;
  longlong local_d0 [5];
  longlong *local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong local_90;
  longlong *local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_f0[0] = 0;
  local_f0[1] = 0;
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_d0[2] = 0;
  local_d0[3] = 0;
  local_f8 = 0;
  if (param_2 == 0) {
    local_108 = (void *)0x0;
    local_100 = 0;
  }
  else {
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_78,L"Unable to sign in to SHiFT. Please try again later.",L"Overlay",
                       L"SignInErrorGeneralFailure");
    puVar8 = (undefined8 *)FText::ToString(uVar7);
    local_108 = (void *)0x0;
    iVar4 = *(int *)(puVar8 + 1);
    _Src = (void *)*puVar8;
    local_100 = CONCAT44(local_100._4_4_,iVar4);
    if (iVar4 == 0) {
      local_100 = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,iVar4,0);
      _guard_xfg_dispatch_icall_nop(local_108,_Src,(longlong)iVar4 * 2);
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_70 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
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
  }
  local_e0 = local_108;
  local_d8 = (undefined4)local_100;
  local_d4 = local_100._4_4_;
  if (param_2 != 0) goto LAB_140e2ca9e;
  local_f8 = 1;
  local_d8 = 0;
  if (local_100._4_4_ != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_e0,0);
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x38);
  if (cVar6 == '\0') goto LAB_140e2ca9e;
  local_98 = *(undefined8 *)(param_1 + 0xb0);
  local_90 = *(longlong *)(param_1 + 0xb8);
  if (local_90 != 0) {
    LOCK();
    *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
    UNLOCK();
  }
  uVar7 = FWeakObjectPtr::Get(param_1 + 0x38);
  lVar9 = FUN_14244c070(uVar7,&local_98);
  if (lVar9 == 0) {
LAB_140e2ca04:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_141432660();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140e2ca04;
  }
  cVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x120))();
  if (cVar6 != '\0') {
    plStack_a0 = (longlong *)FUN_140e107f0(param_1 + 0x38,param_1 + 0xb0);
    local_a8 = plStack_a0 + 2;
    SharedPointerInternals::EnableSharedFromThis(&local_a8,local_a8,local_a8);
    local_88 = local_a8;
    plStack_80 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_a0 + 1) = (int)plStack_a0[1] + 1;
      UNLOCK();
    }
    FUN_140e57f40(lVar9,&local_88);
    plVar1 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_a0 + 1;
      lVar9 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_a0)(plStack_a0);
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
  }
LAB_140e2ca9e:
  local_60[0] = local_f8;
  FString::FString(local_58,local_f0);
  FString::FString(local_48,&local_e0);
  FString::FString(local_38,local_d0);
  FString::FString(local_28,local_d0 + 2);
  FUN_140e38c40(param_1,local_60);
  if (local_d0[2] != 0) {
    FMemory::Free();
  }
  if (local_d0[0] != 0) {
    FMemory::Free();
  }
  if (local_e0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_f0[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e2cb60 FUN_140e2cb60 body=147 status=ok
// SIG undefined FUN_140e2cb60(void)

void FUN_140e2cb60(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  
  plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x198))(plVar1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,"get_shift_code_and_timer",2);
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_143f3eda8;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    (**(code **)(*plVar1 + 0xb0))(plVar1,puVar2);
    (**(code **)(*plVar1 + 0x108))(plVar1,param_3);
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  return;
}



// FUNCTION 140e2cc00 FUN_140e2cc00 body=93 status=ok
// SIG undefined FUN_140e2cc00(void)

void FUN_140e2cc00(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_2);
  if (lVar1 != 0) {
    if (param_3 != '\0') {
      FUN_141460470(lVar1,param_1,0);
    }
    if (*(longlong *)(lVar1 + 0xc48) == param_1) {
      *(undefined8 *)(lVar1 + 0xc48) = 0;
    }
  }
  return;
}



// FUNCTION 140e2cc60 FUN_140e2cc60 body=84 status=ok
// SIG undefined FUN_140e2cc60(void)

void FUN_140e2cc60(longlong param_1,float param_2,float param_3)

{
  undefined4 *puVar1;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_38 [56];
  
  if (0.0 < param_3 - param_2) {
    puVar1 = (undefined4 *)
             (**(code **)(*(longlong *)(param_1 + 0xda8) + 0x40))
                       ((longlong *)(param_1 + 0xda8),local_38);
    local_58 = *puVar1;
    uStack_54 = puVar1[1];
    uStack_50 = puVar1[2];
    uStack_4c = puVar1[3];
    local_48 = *(undefined8 *)(puVar1 + 4);
    FUN_142d55d50(&local_58,param_3 - param_2);
  }
  return;
}



// FUNCTION 140e2ccc0 FUN_140e2ccc0 body=741 status=ok
// SIG undefined FUN_140e2ccc0(void)

void FUN_140e2ccc0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_38;
  
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 != 0) {
    local_50 = *(longlong **)(param_1 + 0xb8);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    local_58 = lVar3;
    lVar3 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar3 + 0x18),&local_68,&local_58);
    plVar4 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_50 + 1;
      lVar3 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    lVar3 = local_68;
    plVar10 = (longlong *)(local_68 + 0x138);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_48 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar4[1] = param_1;
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[2] = (longlong)FUN_140e2cb60;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    uVar8 = 0;
    uVar9 = uVar8;
    if (plVar4 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
      iVar2 = *(int *)(lVar3 + 0x140);
      uVar9 = *puVar6;
      *(int *)(lVar3 + 0x140) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x144) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar10);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    lVar3 = local_68;
    *(undefined8 *)(param_1 + 0xc0) = uVar9;
    plVar10 = (longlong *)(local_68 + 0x150);
    plVar4 = (longlong *)FMemory::Realloc(0,0x30);
    local_38 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar4[1] = param_1;
      *plVar4 = (longlong)&DAT_143f3ed00;
      plVar4[2] = (longlong)FUN_140e2c840;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[4] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar10,1);
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res10);
      iVar2 = *(int *)(lVar3 + 0x158);
      uVar8 = *puVar6;
      *(int *)(lVar3 + 0x158) = iVar2 + 1;
      if (*(int *)(lVar3 + 0x15c) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar10);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
    *(undefined8 *)(param_1 + 200) = uVar8;
    if (local_68 != 0) {
      puVar6 = (undefined8 *)FUN_14057c410();
      plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x198))(plVar4);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x50))(plVar4,"set_display_name",1);
        if (*(int *)(puVar6 + 1) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*puVar6;
        }
        (**(code **)(*plVar4 + 0xb0))(plVar4,puVar7);
        (**(code **)(*plVar4 + 0x58))(plVar4);
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_60 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_60 + 8))(local_60,1);
        }
      }
    }
  }
  FUN_140806db0(param_1,0,0);
  return;
}



// FUNCTION 140e2cfb0 FUN_140e2cfb0 body=341 status=ok
// SIG undefined FUN_140e2cfb0(void)

void FUN_140e2cfb0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    local_20 = *(longlong **)(param_1 + 0x40);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    local_28 = lVar4;
    lVar4 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_18,&local_28);
    plVar6 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_20)(local_20);
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
    if (local_18 != 0) {
      puVar5 = (undefined8 *)FUN_14057c410();
      plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x198))(plVar6);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x50))(plVar6,"set_display_name",1);
        if (*(int *)(puVar5 + 1) == 0) {
          puVar7 = &DAT_143f3eda8;
        }
        else {
          puVar7 = (undefined2 *)*puVar5;
        }
        (**(code **)(*plVar6 + 0xb0))(plVar6,puVar7);
        (**(code **)(*plVar6 + 0x58))(plVar6);
      }
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
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
  }
  FUN_140806db0(param_1,0,0);
  return;
}



// FUNCTION 140e2d110 FUN_140e2d110 body=31 status=ok
// SIG undefined FUN_140e2d110(void)

void FUN_140e2d110(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x2398,local_res8);
  return;
}



// FUNCTION 140e2d130 FUN_140e2d130 body=31 status=ok
// SIG undefined FUN_140e2d130(void)

void FUN_140e2d130(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x23a8,local_res8);
  return;
}



// FUNCTION 140e2d150 FUN_140e2d150 body=51 status=ok
// SIG undefined FUN_140e2d150(void)

void FUN_140e2d150(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    cVar1 = FUN_140e1aba0(param_1,0);
    if (cVar1 == '\0') {
      FUN_140e33e10(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140e2d190 FUN_140e2d190 body=99 status=ok
// SIG undefined FUN_140e2d190(void)

void FUN_140e2d190(longlong *param_1,longlong param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  if (param_1[0x79] == param_2) {
    if (param_1[0x79] != 0) {
      param_1[0x79] = 0;
      FUN_140e29f10();
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    local_18 = param_1[0x74];
    local_28 = (undefined4)param_1[0x72];
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x394);
    uStack_20 = (undefined4)param_1[0x73];
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0x39c);
    FUN_142d6fa00(&local_28,0);
  }
  return;
}



// FUNCTION 140e2d210 FUN_140e2d210 body=199 status=ok
// SIG undefined FUN_140e2d210(void)

void FUN_140e2d210(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  float local_18;
  float local_14;
  float local_10;
  
  cVar6 = FUN_140e1aba0(param_1,0);
  if (((cVar6 != '\0') && (lVar4 = *param_2, lVar4 != 0)) &&
     (*(int *)(lVar4 + 0x30) == *(int *)(param_1 + 0x3fc))) {
    FUN_142be50e0(lVar4,&local_18,0);
    if (((local_18 != DAT_1468b5d90) || (local_14 != DAT_1468b5d94)) || (local_10 != DAT_1468b5d98))
    {
      FUN_140e268e0(param_1,&local_18);
    }
  }
  *(undefined4 *)(param_1 + 0x3fc) = 0xffffffff;
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
  return;
}



// FUNCTION 140e2d2f0 FUN_140e2d2f0 body=77 status=ok
// SIG undefined FUN_140e2d2f0(void)

void FUN_140e2d2f0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x3c8);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_142dfdf30();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x628))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x3f8))(plVar2,param_3);
    }
  }
  return;
}



// FUNCTION 140e2d370 FUN_140e2d370 body=211 status=ok
// SIG undefined FUN_140e2d370(void)

void FUN_140e2d370(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x94) & 0x18) == 0x10) {
    if ((char)param_1[0x556] != '\0') {
      FUN_140e318d0(param_1,0);
    }
    lVar1 = param_1[0x556];
    cVar2 = FUN_140e66930(param_1 + 0x4de);
    if ((char)lVar1 != cVar2) {
      if ((char)lVar1 == '\0') {
        FUN_140e61570(param_1 + 0x4de,*(char *)((longlong)param_1 + 0x2ab1) == '\x01',0);
      }
      else {
        FUN_140e49a70(param_1 + 0x4de,*(char *)((longlong)param_1 + 0x2ab1),1,0);
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x778))(param_1);
    if ((cVar2 == '\0') && (cVar2 = FUN_140e66930(param_1 + 0x4de), cVar2 != '\0')) {
      FUN_140e2fee0(param_1,param_1[0x557]);
    }
  }
  return;
}



// FUNCTION 140e2d450 FUN_140e2d450 body=27 status=ok
// SIG undefined FUN_140e2d450(void)

void FUN_140e2d450(undefined8 param_1)

{
  FUN_140e374b0();
  FUN_140e29f10(param_1);
  return;
}



// FUNCTION 140e2d480 FUN_140e2d480 body=33 status=ok
// SIG undefined FUN_140e2d480(void)

void FUN_140e2d480(longlong param_1,longlong param_2)

{
  if (((*(char *)(param_1 + 0x128) != '\x03') && (param_2 != 0)) &&
     (*(char *)(param_2 + 0x51) != '\0')) {
    FUN_140e436e0(param_1 + 0x2950);
    return;
  }
  return;
}



// FUNCTION 140e2d4b0 FUN_140e2d4b0 body=1155 status=ok
// SIG undefined FUN_140e2d4b0(void)

void FUN_140e2d4b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_144599868;
        puVar2[2] = FUN_140e38bd0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Signin_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445766d0;
        puVar2[2] = &LAB_140e35c10;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Select_Display_Name_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_144599868;
        puVar2[2] = FUN_140e38cb0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Signup_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445766d0;
        puVar2[2] = FUN_140e3dc30;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Update_Shift_Display_Name_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445766d0;
        puVar2[2] = FUN_140e1f9d0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Forgot_Password_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1440f8ff0;
        puVar2[2] = FUN_140e25d10;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Get_Display_Name_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445766d0;
        puVar2[2] = FUN_140e1b9f0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Confirm_Acccount_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1440f8ff0;
        puVar2[2] = FUN_140e25340;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"GET_SHIFT_BASE_URL");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1440f8ff0;
        puVar2[2] = FUN_140e256d0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"GET_SHIFT_LINK_URL");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1440f8ff0;
        puVar2[2] = FUN_140e23c00;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"GET_SHIFT_SUPPORT_ID");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_143f4cf48;
        puVar2[2] = &LAB_140e02040;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"On_Back_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445766f0;
        puVar2[2] = FUN_140e25ea0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Get_Gamepad_Index");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_143f4cf48;
        puVar2[2] = FUN_140e35c30;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Link_Coder_Call");
    }
  }
  return;
}



// FUNCTION 140e2d940 FUN_140e2d940 body=745 status=ok
// SIG undefined FUN_140e2d940(void)

void FUN_140e2d940(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445766d0;
        puVar2[2] = FUN_140e39c70;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Submit_SHiFT_Code_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_143f4cf48;
        puVar2[2] = FUN_140e282c0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Load_Reward_History_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445999a8;
        puVar2[2] = FUN_140e389c0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Signed_Update_Display_Name_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1440f8ff0;
        puVar2[2] = FUN_140e25da0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Get_Display_Name_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1440f8ff0;
        puVar2[2] = FUN_140e25510;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"GET_SHIFT_BASE_URL");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1440f8ff0;
        puVar2[2] = FUN_140e23d60;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"GET_SHIFT_SUPPORT_ID");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_143f4cf48;
        puVar2[2] = &LAB_140e02040;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"On_Back_Notify");
    }
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    if (plVar1 != (longlong *)0x0) {
      puVar2 = cohtml::IEventHandler::operator_new(0x18);
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        *puVar2 = &PTR_FUN_1445766f0;
        puVar2[2] = FUN_140e25ff0;
      }
      puVar2[1] = param_1;
      (**(code **)(*plVar1 + 0x150))(plVar1,"Get_Gamepad_Index");
    }
  }
  return;
}



// FUNCTION 140e2dc30 FUN_140e2dc30 body=134 status=ok
// SIG undefined FUN_140e2dc30(void)

void FUN_140e2dc30(longlong param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x2d8) == 0) {
    return;
  }
  if (param_2 != 0) {
    lVar2 = UXSkinAnimationProfile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e2dc94;
  }
  param_2 = 0;
LAB_140e2dc94:
  FUN_140e2c100(*(undefined8 *)(param_1 + 0x2d8),param_2,param_3);
  return;
}



// FUNCTION 140e2dcc0 FUN_140e2dcc0 body=36 status=ok
// SIG undefined FUN_140e2dcc0(void)

void FUN_140e2dcc0(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_140e3d6d0(param_1,0,1);
  return;
}



// FUNCTION 140e2dcf0 FUN_140e2dcf0 body=38 status=ok
// SIG undefined FUN_140e2dcf0(void)

void FUN_140e2dcf0(undefined8 param_1)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  FUN_140e32cc0(param_1);
  FUN_140e2eec0(param_1,0);
  return;
}



// FUNCTION 140e2dd20 FUN_140e2dd20 body=1026 status=ok
// SIG undefined FUN_140e2dd20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e2dd20(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  cVar4 = *(char *)(param_1 + 0x2e0);
  cVar5 = FUN_140e27720(param_1);
  *(char *)(param_1 + 0x2e0) = cVar5;
  if (cVar5 == cVar4) {
    if (*(longlong **)(param_1 + 0x2d8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x6f8))();
    }
  }
  else {
    FUN_140e1be60(param_1,cVar5);
    if ((*(char *)(param_1 + 0x2e0) != '\0') &&
       (FUN_140e8b4b0(param_1,local_d8,*(undefined8 *)(param_1 + 0x2c0),0),
       local_d0 != (longlong *)0x0)) {
      LOCK();
      plVar9 = local_d0 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    lVar11 = 0x2b8;
    if (*(char *)(param_1 + 0x2e0) == '\0') {
      lVar11 = 0x270;
    }
    lVar11 = *(longlong *)(lVar11 + param_1);
    if (lVar11 != 0) {
      lVar6 = FUN_142e20fc0();
      lVar10 = lVar11;
      do {
        if (lVar10 == lVar6) {
          lVar10 = 0;
          lVar6 = lVar10;
          if (*(longlong *)(param_1 + 0x2d8) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x2d8) + 0x458);
          }
          if (lVar6 == 0) {
            return;
          }
          if (*(char *)(param_1 + 0x2e0) == '\0') {
            puVar7 = (undefined8 *)FName::FName(local_e8,L"DelayIronCubFall",1);
            FUN_140e91300(*(undefined8 *)(param_1 + 0x2d8),0,*puVar7);
            FUN_142c7bae0(lVar6,local_c8,lVar11);
            if (local_c0 != (longlong *)0x0) {
              LOCK();
              plVar9 = local_c0 + 1;
              lVar11 = *plVar9;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*local_c0)(local_c0);
                LOCK();
                piVar1 = (int *)((longlong)local_c0 + 0xc);
                iVar2 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar2 == 1) {
                  (**(code **)(*local_c0 + 8))(local_c0,1);
                }
              }
            }
            FUN_1411e02b0(*(undefined8 *)(param_1 + 0x2d8));
            return;
          }
          puVar7 = (undefined8 *)FName::FName(local_e0,L"DelayIronCubFall",1);
          FUN_140e91300(*(undefined8 *)(param_1 + 0x2d8),1,*puVar7);
          if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar8 = FUN_1423407b0(param_1), lVar8 == 0))
          {
            return;
          }
          lVar8 = *(longlong *)(param_1 + 0x120);
          if (lVar8 == 0) {
            lVar8 = FUN_1423407b0(param_1);
          }
          if (*(longlong *)(lVar8 + 400) == 0) {
            return;
          }
          if (*(longlong *)(*(longlong *)(lVar8 + 400) + 0xa0) == 0) {
            return;
          }
          local_f0 = 0;
          FWeakObjectPtr::operator=(&local_f8,param_1);
          plVar9 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar9 != (longlong *)0x0) {
            *plVar9 = (longlong)&PTR_GetPoolName_1445997d8;
            *(undefined4 *)(plVar9 + 1) = local_f8;
            *(undefined4 *)((longlong)plVar9 + 0xc) = local_f4;
            plVar9[2] = lVar11;
            plVar9[3] = lVar6;
            lVar11 = FDelegateHandle::GenerateNewID();
            plVar9[5] = lVar11;
            *plVar9 = (longlong)&PTR_GetPoolName_144599820;
          }
          lVar11 = *(longlong *)(param_1 + 0x120);
          if (lVar11 == 0) {
            lVar11 = FUN_1423407b0(param_1);
          }
          if (*(longlong *)(lVar11 + 400) != 0) {
            lVar10 = *(longlong *)(*(longlong *)(lVar11 + 400) + 0xa0);
          }
          uVar3 = *(undefined4 *)(param_1 + 0x2c8);
          local_b8 = 0;
          local_b0 = 0;
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x30))(plVar9,&local_b8);
          }
          FWeakObjectPtr::operator=(local_a8,0);
          local_100 = 0xbf800000;
          local_108 = 0;
          local_a0 = 0;
          local_68 = (longlong *)0x0;
          local_58 = 0;
          local_98 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(lVar10,&local_f0,&local_b8,uVar3);
          if (local_58 != 0) {
            plVar12 = local_88;
            if (local_68 != (longlong *)0x0) {
              plVar12 = local_68;
            }
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x10))(plVar12,0);
            }
          }
          if (local_68 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
          if (plVar9 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          lVar11 = FMemory::Realloc(plVar9,0,0);
          if (lVar11 == 0) {
            return;
          }
          FMemory::Free(lVar11);
          return;
        }
        lVar10 = *(longlong *)(lVar10 + 0x30);
      } while (lVar10 != 0);
    }
  }
  return;
}



// FUNCTION 140e2e130 FUN_140e2e130 body=110 status=ok
// SIG undefined FUN_140e2e130(void)

void FUN_140e2e130(longlong param_1)

{
  longlong lVar1;
  
  FUN_140c4eb10();
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x24f0,0);
  lVar1 = *(longlong *)(param_1 + 0x10e0);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x2ae8) != 0)) {
    FUN_14234feb0(*(longlong *)(param_1 + 0x2ae8),
                  *(float *)(*(longlong *)(param_1 + 0x4d0) + 0x714) + *(float *)(lVar1 + 0x133c),
                  *(float *)(*(longlong *)(param_1 + 0x4d0) + 0x710) + *(float *)(lVar1 + 0x1340),1)
    ;
    return;
  }
  return;
}



// FUNCTION 140e2e1a0 FUN_140e2e1a0 body=463 status=ok
// SIG undefined FUN_140e2e1a0(void)

void FUN_140e2e1a0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_res8;
  
  lVar4 = param_1[0x138];
  if (lVar4 != 0) {
    lVar3 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      lVar3 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if ((char)param_1[0x25] == '\x03') {
          FUN_140d12c50(lVar4,0,CONCAT71((int7)((ulonglong)(lVar3 + 0x88) >> 8),1));
        }
        if ((*(longlong **)(lVar4 + 0x848) == param_1) && (*(longlong *)(lVar4 + 0x978) != 0)) {
          FUN_142db28a0();
        }
      }
    }
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar4 != 0) && (iVar2 = FUN_1428cf800(lVar4), iVar2 != 3)) {
    plVar5 = (longlong *)UWorld::GetAuthGameMode<ABaseGameMode>(lVar4);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0xa18))(plVar5,param_1[0x58e]);
    }
    plVar5 = (longlong *)UDynamicEntryBox::GetAllEntries(lVar4);
    plVar6 = (longlong *)*plVar5;
    plVar5 = plVar6 + (int)plVar5[1];
    for (; plVar6 != plVar5; plVar6 = plVar6 + 1) {
      if (((*plVar6 != 0) && ((*(byte *)(*plVar6 + 0x204) & 0x10) != 0)) &&
         (lVar4 = ULevel::GetLevelScriptActor(), lVar4 != 0)) {
        lVar3 = APlayerState::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_res8 = param_1;
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (lVar4 + 0x468,&local_res8);
        }
      }
    }
  }
  if ((param_1[0x21c] != 0) && ((byte)(*(char *)((longlong)param_1 + 0xec1) - 2U) < 3)) {
    FUN_140ad0d20(param_1[0x21c],1);
    return;
  }
  return;
}



// FUNCTION 140e2e370 FUN_140e2e370 body=362 status=ok
// SIG undefined FUN_140e2e370(void)

void FUN_140e2e370(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  cVar3 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar3 != '\0') {
    lVar1 = param_1[0x92];
    if (lVar1 != 0) {
      lVar4 = FUN_1429e18b0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (local_res8 = 0, param_1[0x4d2] != 0)) &&
         (lVar1 = *(longlong *)(lVar1 + 0x528), lVar1 != 0)) {
        lVar4 = FUN_142fd5420();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_142fccb00(lVar1,param_1[0x4d2],0xbf800000,0);
        }
      }
    }
    if (param_1[0x129] != 0) {
      FUN_142ccf6f0(param_1[0x129],0);
      FUN_142cd03e0(param_1[0x129],1);
      FUN_142cd0010(param_1[0x129],1,DAT_146870210);
    }
  }
  lVar1 = param_1[0x124];
  if (lVar1 != 0) {
    puVar5 = (undefined8 *)FName::FName(&local_res8,L"UpperBody",1);
    FUN_142c848a0(lVar1,*puVar5);
    puVar5 = (undefined8 *)FName::FName(&local_res8,L"FullBody",1);
    FUN_142c848a0(lVar1,*puVar5);
  }
  return;
}



// FUNCTION 140e2e4e0 FUN_140e2e4e0 body=240 status=ok
// SIG undefined FUN_140e2e4e0(void)

void FUN_140e2e4e0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_28 [32];
  
  cVar2 = (**(code **)(*param_1 + 0x778))();
  if ((cVar2 != '\0') && (lVar4 = param_1[0x92], lVar4 != 0)) {
    lVar3 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (param_1[0x4d4] != 0)) {
      FUN_142d408e0(param_1[0x4d4],lVar4,0x3f800000,1,0);
    }
  }
  cVar2 = FUN_14059ee90(param_1 + 0x592);
  if ((cVar2 == '\0') && (param_1[0x4d6] != 0)) {
    lVar4 = FUN_14059b7e0(param_1,1);
    if (lVar4 != 0) {
      lVar4 = FUN_1405a3150(lVar4,local_28,param_1[0x4d6],0);
      FUN_1405913a0(param_1 + 0x592,lVar4);
      *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(lVar4 + 0x10);
      FUN_140591060(local_28);
    }
  }
  return;
}



// FUNCTION 140e2e5d0 FUN_140e2e5d0 body=14 status=ok
// SIG undefined FUN_140e2e5d0(void)

void FUN_140e2e5d0(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x23c8,0);
  return;
}



// FUNCTION 140e2e5e0 FUN_140e2e5e0 body=14 status=ok
// SIG undefined FUN_140e2e5e0(void)

void FUN_140e2e5e0(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0x23b8,0);
  return;
}



// FUNCTION 140e2e5f0 FUN_140e2e5f0 body=287 status=ok
// SIG undefined FUN_140e2e5f0(void)

void FUN_140e2e5f0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  cVar3 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar3 != '\0') {
    lVar1 = param_1[0x92];
    if (lVar1 != 0) {
      lVar4 = FUN_1429e18b0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (param_1[0x4d2] != 0)) && (lVar1 = *(longlong *)(lVar1 + 0x528), lVar1 != 0))
      {
        lVar4 = FUN_142fd5420();
        if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_142fcc0b0(lVar1,param_1[0x4d2],(int)param_1[0x4d3],0);
        }
      }
    }
    if (param_1[0x129] != 0) {
      FUN_142ccf6f0(param_1[0x129],1);
      FUN_142cd03e0(param_1[0x129],0);
      FUN_142cd0010(param_1[0x129],0,DAT_146870210);
      return;
    }
  }
  return;
}



// FUNCTION 140e2e710 FUN_140e2e710 body=141 status=ok
// SIG undefined FUN_140e2e710(void)

void FUN_140e2e710(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  
  cVar3 = (**(code **)(*param_1 + 0x778))();
  if ((cVar3 != '\0') && (lVar1 = param_1[0x92], lVar1 != 0)) {
    lVar4 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (param_1[0x4d4] != 0)) {
      FUN_142d49f50(param_1[0x4d4],lVar1);
    }
  }
  FUN_1405ac8f0(param_1 + 0x592,0,4);
  return;
}



// FUNCTION 140e2e7a0 FUN_140e2e7a0 body=165 status=ok
// SIG undefined FUN_140e2e7a0(void)

void FUN_140e2e7a0(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if ((*(longlong *)(param_1 + 0x910) != 0) && (param_2 != (longlong *)0x0)) {
    fVar4 = (float)(**(code **)(*param_2 + 0x18))(param_2,0);
    lVar3 = 0;
    fVar5 = (float)(**(code **)(**(longlong **)(param_1 + 0x910) + 0x408))();
    if (0.0 < fVar5) {
      pfVar1 = *(float **)(param_1 + 0x2ba0);
      pfVar2 = pfVar1 + (longlong)*(int *)(param_1 + 0x2ba8) * 4;
      if (pfVar1 != pfVar2) {
        do {
          if (fVar4 / fVar5 < *pfVar1) break;
          lVar3 = *(longlong *)(pfVar1 + 2);
          pfVar1 = pfVar1 + 4;
        } while (pfVar1 != pfVar2);
        if (lVar3 != 0) {
          FUN_142e35e80(param_1,lVar3);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e2e850 FUN_140e2e850 body=153 status=ok
// SIG undefined FUN_140e2e850(void)

void FUN_140e2e850(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x2c40);
  lVar1 = lVar5 + (longlong)*(int *)(param_1 + 0x2c48) * 0xc;
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0xc) {
    plVar2 = (longlong *)FWeakObjectPtr::Get(lVar5);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = UCircularThrobber::GetPrivateStaticClass();
      lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
      if (lVar4 != 0) {
        if (*(longlong *)(param_1 + 0x908) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x908) + 0x180);
        }
        FUN_142df2ca0(lVar4,uVar3);
      }
    }
  }
  return;
}



// FUNCTION 140e2e8f0 FUN_140e2e8f0 body=306 status=ok
// SIG undefined FUN_140e2e8f0(void)

void FUN_140e2e8f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  longlong local_28 [2];
  
  plVar2 = (longlong *)(param_1 + 0x2a78);
  if ((*plVar2 != 0) && (*(longlong *)(param_1 + 0x2a80) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x2a80) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar3 = *(longlong **)(param_1 + 0x2a80);
      plVar6 = (longlong *)0x0;
      plVar7 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(plVar3 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (plVar6 = (longlong *)0x0, plVar7 = (longlong *)0x0, !bVar8) {
          LOCK();
          bVar8 = iVar5 == (int)plVar3[1];
          if (bVar8) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar8) {
            plVar7 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              plVar6 = (longlong *)*plVar2;
            }
            break;
          }
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar3 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
      }
      FUN_140483870(plVar6 + 0xb,param_1);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
        }
      }
      if (plVar2 != local_28) {
        *plVar2 = 0;
        plVar2 = *(longlong **)(param_1 + 0x2a80);
        *(undefined8 *)(param_1 + 0x2a80) = 0;
        if (plVar2 != (longlong *)0x0) {
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
  if (*(longlong *)(param_1 + 0x2c70) != 0) {
    FUN_14145d830();
    return;
  }
  return;
}



// FUNCTION 140e2ea30 FUN_140e2ea30 body=31 status=ok
// SIG undefined FUN_140e2ea30(void)

void FUN_140e2ea30(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x2388,local_res8);
  return;
}



// FUNCTION 140e2ea50 FUN_140e2ea50 body=288 status=ok
// SIG undefined FUN_140e2ea50(void)

void FUN_140e2ea50(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_140c4f020();
  if ((*(char *)(param_1 + 0x128) == '\x03') &&
     (*(undefined1 *)(param_1 + 0x2b98) = 0, *(char *)(param_1 + 0x1ccd) != '\0')) {
    iVar3 = 2;
    if (*(int *)(param_1 + 0x1520) < 3) {
      iVar3 = *(int *)(param_1 + 0x1520);
    }
    lVar7 = (longlong)iVar3;
    if (0 < iVar3) {
      bVar5 = 0;
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(lVar6 + 0x20 + *(longlong *)(param_1 + 0x1518));
        if (lVar1 != 0) {
          lVar4 = FUN_1413c0f50();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            iVar3 = 0;
            if (0 < *(int *)(param_1 + 0x14e8)) {
              do {
                if (*(longlong *)((longlong)iVar3 * 0x40 + 0x20 + *(longlong *)(param_1 + 0x14e0))
                    == lVar1) {
                  *(byte *)(param_1 + 0x2b98) =
                       *(byte *)(param_1 + 0x2b98) | (char)iVar3 + '\x01' << (bVar5 & 0x1f);
                  break;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < *(int *)(param_1 + 0x14e8));
            }
          }
        }
        bVar5 = bVar5 + 4;
        lVar6 = lVar6 + 0xf8;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
  }
  return;
}



// FUNCTION 140e2eb70 FUN_140e2eb70 body=123 status=ok
// SIG undefined FUN_140e2eb70(void)

void FUN_140e2eb70(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*(longlong *)(param_1 + 0x3d0) != 0) && (*(longlong *)(param_1 + 0x3c8) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x3d0) + 0x938), lVar3 != 0)) {
    lVar3 = FUN_142dcd660(lVar3,0);
    if (lVar3 != 0) {
      cVar1 = FUN_142dddf50(lVar3,*(undefined8 *)(param_1 + 0x3c8));
      if (cVar1 != '\0') {
        iVar2 = FUN_14233f450(param_1);
        if (iVar2 < 3) {
          FUN_1412ed4f0();
          return;
        }
        FUN_1412eda80(param_1);
        return;
      }
    }
  }
  FUN_1412ec970(param_1);
  return;
}



// FUNCTION 140e2ebf0 FUN_140e2ebf0 body=133 status=ok
// SIG undefined FUN_140e2ebf0(void)

void FUN_140e2ebf0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  lVar3 = 0;
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = UWorld::GetGameState<APVPGameState>(uVar2);
  }
  if (((char)param_1[0x25] == '\x03') || ((lVar3 != 0 && (*(char *)(lVar3 + 0x638) != '\0')))) {
    plVar4 = (longlong *)UDamageType::GetPrivateStaticClass();
    lVar3 = plVar4[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar4 + 0x368))(plVar4);
      lVar3 = plVar4[0x1f];
    }
    (**(code **)(*param_1 + 0x550))(param_1,lVar3);
  }
  return;
}



// FUNCTION 140e2ec80 FUN_140e2ec80 body=472 status=ok
// SIG undefined FUN_140e2ec80(void)

void FUN_140e2ec80(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40 [2];
  undefined4 local_30;
  undefined8 local_2c;
  longlong local_20;
  longlong local_18 [2];
  
  local_60 = 0x7f;
  local_68 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  uVar2 = local_68;
  FGenericPlatformString::Memcpy
            (local_68,
             L"/Game/GameData/Challenges/Missions/Challenge_Mission_SideMissionsCompleted_Main.Challenge_Mission_SideMissionsCompleted_Main_C"
             ,0xfe);
  local_50 = (undefined4)local_60;
  local_4c = local_60._4_4_;
  local_48 = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_58 = uVar2;
  FUN_1417978e0(&local_48,&local_58);
  local_20 = local_48;
  local_30 = 0xffffffff;
  local_2c = 0;
  FString::FString(local_18,local_40);
  lVar5 = FWeakObjectPtr::Get(&local_30);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == local_2c._4_4_) || (local_20 == 0)) goto LAB_140e2ee23;
    lVar5 = FUN_141796df0(&local_20);
    FWeakObjectPtr::operator=(&local_30,lVar5);
    if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_2c = CONCAT44(DAT_1464b56f4,(undefined4)local_2c);
    }
    lVar5 = FWeakObjectPtr::Get(&local_30);
    if (lVar5 == 0) goto LAB_140e2ee23;
  }
  lVar6 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
      lVar6 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar7 = FUN_142dfdfe0();
    lVar6 = lVar5;
    do {
      if (lVar6 == lVar7) {
        lVar6 = FUN_142dcdc90(param_1,lVar5);
        if ((((lVar6 != 0) && (*(char *)(lVar6 + 0x51) == '\0')) &&
            (cVar3 = FUN_142dd1270(lVar6), cVar3 != '\0')) &&
           (iVar4 = FUN_142dcf7f0(lVar6), 0 < iVar4)) {
          (**(code **)(*param_1 + 0x410))(param_1,lVar5,1);
        }
        break;
      }
      lVar6 = *(longlong *)(lVar6 + 0x30);
    } while (lVar6 != 0);
  }
LAB_140e2ee23:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e2ee60 FUN_140e2ee60 body=90 status=ok
// SIG undefined FUN_140e2ee60(void)

void FUN_140e2ee60(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_140aae2f0(param_2);
  if ((param_3 != 0) && (iVar1 != 0)) {
    lVar2 = FUN_1405e8ff0(param_2);
    if (lVar2 != 0) {
      FUN_1405f4e50(lVar2,iVar1);
    }
    *(undefined8 *)(param_3 + 0xc48) = 0;
  }
  return;
}



// FUNCTION 140e2eec0 FUN_140e2eec0 body=2384 status=ok
// SIG undefined FUN_140e2eec0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e2eec0(longlong param_1,float param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  undefined4 local_1f0;
  longlong *local_1e8;
  int local_1e0;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  longlong *local_170;
  longlong *local_168;
  longlong *local_158;
  undefined8 local_148;
  undefined4 local_140;
  undefined1 local_138 [8];
  undefined8 local_130;
  code *local_128;
  longlong local_118 [4];
  longlong *local_f8;
  int local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar7 = FUN_1423407b0(), lVar7 == 0)) {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (lVar7 == 0) {
    lVar7 = FUN_1423407b0(param_1);
  }
  if (*(longlong *)(lVar7 + 400) == 0) {
    return;
  }
  if (*(longlong *)(*(longlong *)(lVar7 + 400) + 0xa0) == 0) {
    return;
  }
  if (0.0 < param_2) {
    uVar12 = 0;
    local_1e8 = (longlong *)0x0;
    local_1e0 = 0;
    local_1d8 = FUN_140e2eec0;
    uStack_1d0 = 0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar8 == (longlong *)0x0) {
      if (((local_1e0 != 0) && (local_1e8 != (longlong *)0x0)) &&
         ((**(code **)(*local_1e8 + 0x28))(local_1e8,0), local_1e8 != (longlong *)0x0)) {
        local_1e8 = (longlong *)FMemory::Realloc(local_1e8,0,0);
      }
    }
    else {
      *plVar8 = (longlong)&PTR_FUN_1444f83b8;
      FWeakObjectPtr::operator=(plVar8 + 1,param_1);
      *(undefined4 *)(plVar8 + 2) = (undefined4)local_1d8;
      *(undefined4 *)((longlong)plVar8 + 0x14) = local_1d8._4_4_;
      *(undefined4 *)(plVar8 + 3) = uStack_1d0;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_1cc;
      *(undefined4 *)(plVar8 + 4) = 0;
      lVar7 = FDelegateHandle::GenerateNewID();
      plVar8[5] = lVar7;
      *plVar8 = (longlong)&PTR_FUN_1444f8400;
      TBaseUObjectMethodDelegateInstance<0,UFGInteractWidget,TTypeWrapper<void>___cdecl(void),float>
      ::CreateCopy(plVar8,&local_1e8);
      (**(code **)(*plVar8 + 0x28))(plVar8,0);
      lVar7 = FMemory::Realloc(plVar8,0,0);
      if (lVar7 != 0) {
        FMemory::Free(lVar7);
      }
    }
    lVar7 = *(longlong *)(param_1 + 0x120);
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar7 + 400) != 0) {
      uVar12 = *(undefined8 *)(*(longlong *)(lVar7 + 400) + 0xa0);
    }
    local_148 = 0;
    local_140 = 0;
    if ((local_1e0 != 0) && (local_1e8 != (longlong *)0x0)) {
      (**(code **)(*local_1e8 + 0x30))(local_1e8,&local_148);
    }
    FWeakObjectPtr::operator=(local_138,0);
    local_1f0 = 0xbf800000;
    local_1f8 = 0;
    local_130 = 0;
    local_f8 = (longlong *)0x0;
    local_e8 = 0;
    local_128 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar12,param_1 + 0x2e0,&local_148,param_2);
    if (local_e8 != 0) {
      plVar8 = local_118;
      if (local_f8 != (longlong *)0x0) {
        plVar8 = local_f8;
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0);
      }
    }
    if (local_f8 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_148);
    if (local_1e0 != 0) {
      if (local_1e8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_1e8 + 0x28))(local_1e8,0);
      if (local_1e8 != (longlong *)0x0) {
        local_1e8 = (longlong *)FMemory::Realloc(local_1e8,0,0);
      }
      local_1e0 = 0;
    }
    if (local_1e8 == (longlong *)0x0) {
      return;
    }
    FMemory::Free(local_1e8);
    return;
  }
  lVar7 = FUN_140e814c0(param_1);
  if ((lVar7 != 0) &&
     (plVar8 = (longlong *)FUN_1409ab480(lVar7,local_188,*(undefined8 *)(param_1 + 0x288)),
     *plVar8 != 0)) {
    lVar9 = FUN_14144bcb0();
    lVar7 = *plVar8;
    for (lVar15 = lVar7; lVar15 != 0; lVar15 = *(longlong *)(lVar15 + 0x30)) {
      if (lVar15 == lVar9) goto LAB_140e2f1b7;
    }
  }
  lVar7 = 0;
LAB_140e2f1b7:
  lVar15 = 0;
  lVar9 = lVar15;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    lVar10 = UUGLoadoutBarUW::GetPrivateStaticClass();
    for (lVar13 = *(longlong *)(param_1 + 0x2d0);
        (lVar9 = lVar15, lVar13 != 0 && (lVar9 = *(longlong *)(param_1 + 0x2d0), lVar13 != lVar10));
        lVar13 = *(longlong *)(lVar13 + 0x30)) {
    }
  }
  lVar13 = lVar15;
  if (lVar7 != 0) {
    lVar11 = UUGLoadoutBarUW::GetPrivateStaticClass();
    lVar10 = lVar7;
    do {
      lVar13 = lVar7;
      if (lVar10 == lVar11) break;
      lVar10 = *(longlong *)(lVar10 + 0x30);
      lVar13 = lVar15;
    } while (lVar10 != 0);
  }
  if (lVar9 == lVar13) {
    return;
  }
  *(longlong *)(param_1 + 0x2d0) = lVar7;
  if ((*(longlong *)(param_1 + 0x120) != 0) || (lVar7 = FUN_1423407b0(param_1), lVar7 != 0)) {
    lVar7 = *(longlong *)(param_1 + 0x120);
    if (lVar7 == 0) {
      lVar7 = FUN_1423407b0(param_1);
    }
    if ((*(longlong *)(lVar7 + 400) != 0) && (*(longlong *)(*(longlong *)(lVar7 + 400) + 0xa0) != 0)
       ) {
      lVar7 = *(longlong *)(param_1 + 0x120);
      if (lVar7 == 0) {
        lVar7 = FUN_1423407b0(param_1);
      }
      lVar9 = lVar15;
      if (*(longlong *)(lVar7 + 400) != 0) {
        lVar9 = *(longlong *)(*(longlong *)(lVar7 + 400) + 0xa0);
      }
      FUN_142880530(lVar9,param_1 + 0x2e0);
      *(undefined8 *)(param_1 + 0x2e0) = 0;
    }
  }
  FUN_140e1b380(param_1);
  puVar2 = (undefined4 *)(param_1 + 0x2d8);
  cVar6 = FWeakObjectPtr::IsValid(puVar2);
  if (cVar6 != '\0') {
    uVar12 = FWeakObjectPtr::Get(puVar2);
    FUN_140e8e810(param_1,uVar12);
    FWeakObjectPtr::operator=(&local_1c8,0);
    *puVar2 = local_1c8;
    *(undefined4 *)(param_1 + 0x2dc) = local_1c4;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar7 = *(longlong *)(DAT_146b33f38 + 0xd0);
  if (lVar7 != 0) {
    lVar10 = lVar7 + 0xd8;
    lVar13 = FWeakObjectPtr::Get(lVar10);
    lVar9 = lVar15;
    if (lVar13 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar7 + 0xe0)) &&
         (local_1c0 = (code *)0x0, *(longlong *)(lVar7 + 0xe8) != 0)) {
        lVar13 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar10,lVar13);
        if ((lVar13 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar7 + 0xe0) = DAT_1464b56f4;
        }
        lVar13 = FWeakObjectPtr::Get(lVar10);
        if (lVar13 != 0) goto LAB_140e2f3ab;
      }
    }
    else {
LAB_140e2f3ab:
      lVar7 = FUN_14171bfe0();
      if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar10 = USafeZone::GetPrivateStaticClass();
        lVar7 = lVar13;
        do {
          lVar9 = lVar13;
          if (lVar7 == lVar10) break;
          lVar7 = *(longlong *)(lVar7 + 0x30);
          lVar9 = lVar15;
        } while (lVar7 != 0);
      }
    }
    FUN_140e8b4b0(param_1,local_178,lVar9,1);
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_170 + 1;
      lVar7 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
  }
  lVar7 = FUN_140e20840(param_1,*(undefined8 *)(param_1 + 0x2d0));
  if (lVar7 == 0) {
    return;
  }
  if (*(longlong *)(lVar7 + 0x28) != 0) {
    lVar13 = FUN_1414ca080();
    for (lVar9 = *(longlong *)(lVar7 + 0x28); lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar13) {
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          uVar12 = FUN_140e6f140(param_1);
          FWeakObjectPtr::operator=(puVar2,uVar12);
          cVar6 = FUN_14044af00(puVar2,0);
          if (cVar6 != '\0') {
            local_198 = *(undefined8 *)(lVar7 + 0x30);
            local_190 = *(undefined4 *)(lVar7 + 0x38);
            uVar12 = FWeakObjectPtr::Get(puVar2);
            local_1f8 = 0;
            FUN_14223cb00(uVar12,&local_198,0,0);
          }
        }
        break;
      }
    }
  }
  FUN_140e8b4b0(param_1,&local_1d8,*(undefined8 *)(lVar7 + 0x48),0);
  if (local_1d8 != (code *)0x0) {
    FWeakObjectPtr::operator=(&local_1b0,param_1);
    local_1a8 = local_1b0;
    plVar8 = (longlong *)FMemory::Realloc(0,0x20);
    local_158 = plVar8;
    if (plVar8 != (longlong *)0x0) {
      *plVar8 = (longlong)&PTR_GetPoolName_144599a58;
      *(int *)(plVar8 + 1) = (int)local_1b0;
      *(undefined4 *)((longlong)plVar8 + 0xc) = local_1a8._4_4_;
      lVar9 = FDelegateHandle::GenerateNewID();
      plVar8[3] = lVar9;
      *plVar8 = (longlong)&PTR_GetPoolName_144599aa0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong)local_1d8 + 0x58,1);
      (**(code **)(*plVar8 + 0x20))(plVar8,local_180);
      iVar3 = *(int *)((longlong)local_1d8 + 0x60);
      *(int *)((longlong)local_1d8 + 0x60) = iVar3 + 1;
      if (*(int *)((longlong)local_1d8 + 100) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong)local_1d8 + 0x58,iVar3);
      }
      puVar14 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)((longlong)local_1d8 + 0x58));
      *puVar14 = plVar8;
      *(undefined4 *)(puVar14 + 1) = 2;
    }
  }
  cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x2c8);
  if (cVar6 != '\0') {
    if (0.0 < *(float *)(lVar7 + 0x58)) {
      lVar9 = *(longlong *)(param_1 + 0x120);
      if (lVar9 == 0) {
        lVar9 = FUN_1423407b0(param_1);
      }
      if ((*(longlong *)(lVar9 + 400) != 0) &&
         (*(longlong *)(*(longlong *)(lVar9 + 400) + 0xa0) != 0)) {
        uStack_1b8 = 0;
        local_1c0 = FUN_140e2f820;
        lVar9 = *(longlong *)(param_1 + 0x120);
        if (lVar9 == 0) {
          lVar9 = FUN_1423407b0(param_1);
        }
        if (*(longlong *)(lVar9 + 400) != 0) {
          lVar15 = *(longlong *)(*(longlong *)(lVar9 + 400) + 0xa0);
        }
        uVar4 = *(undefined4 *)(lVar7 + 0x58);
        plVar8 = (longlong *)FMemory::Realloc(0,0x30);
        local_168 = plVar8;
        if (plVar8 != (longlong *)0x0) {
          *plVar8 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar8 + 1,param_1);
          *(undefined4 *)(plVar8 + 2) = (undefined4)local_1c0;
          *(undefined4 *)((longlong)plVar8 + 0x14) = local_1c0._4_4_;
          *(undefined4 *)(plVar8 + 3) = uStack_1b8;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_1b4;
          lVar7 = FDelegateHandle::GenerateNewID();
          plVar8[5] = lVar7;
          *plVar8 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_d8 = 0;
        local_d0 = 0;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x30))(plVar8,&local_d8);
        }
        FWeakObjectPtr::operator=(local_c8,0);
        local_1f0 = 0xbf800000;
        local_1f8 = 0;
        local_c0 = 0;
        local_88 = (longlong *)0x0;
        local_78 = 0;
        local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(lVar15,param_1 + 0x2e8,&local_d8,uVar4);
        if (local_78 != 0) {
          plVar16 = local_a8;
          if (local_88 != (longlong *)0x0) {
            plVar16 = local_88;
          }
          if (plVar16 != (longlong *)0x0) {
            (**(code **)(*plVar16 + 0x10))(plVar16,0);
          }
        }
        if (local_88 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          local_168 = (longlong *)FMemory::Realloc(plVar8,0,0);
          if (local_168 != (longlong *)0x0) {
            FMemory::Free(local_168);
          }
        }
        goto LAB_140e2f788;
      }
    }
    FUN_140e2f820(param_1);
  }
LAB_140e2f788:
  plVar8 = (longlong *)CONCAT44(uStack_1cc,uStack_1d0);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar8 + 1;
    lVar7 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  return;
}



// FUNCTION 140e2f820 FUN_140e2f820 body=186 status=ok
// SIG undefined FUN_140e2f820(void)

void FUN_140e2f820(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  *(undefined4 *)(param_1 + 0x2f4) = 0;
  *(undefined1 *)(param_1 + 0x2f0) = 1;
  lVar5 = FUN_140e20840(param_1,*(undefined8 *)(param_1 + 0x2d0));
  if (lVar5 != 0) {
    param_1 = param_1 + 0x2c8;
    cVar4 = FWeakObjectPtr::IsValid(param_1);
    if (cVar4 != '\0') {
      lVar6 = FWeakObjectPtr::Get(param_1);
      if (*(longlong *)(lVar6 + 0x458) != 0) {
        lVar6 = FWeakObjectPtr::Get(param_1);
        FUN_142c7bc00(*(undefined8 *)(lVar6 + 0x458),local_18,*(undefined8 *)(lVar5 + 0x50),2);
        if (local_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_10 + 1;
          lVar5 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar5 == 1) {
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
      }
    }
  }
  return;
}



// FUNCTION 140e2f8e0 FUN_140e2f8e0 body=41 status=ok
// SIG undefined FUN_140e2f8e0(void)

void FUN_140e2f8e0(longlong param_1)

{
  FUN_140e2ff40(param_1,*(undefined8 *)(param_1 + 0xa10));
  FUN_140e2ff40(param_1,*(undefined8 *)(param_1 + 0xa30));
  return;
}



// FUNCTION 140e2f910 FUN_140e2f910 body=12 status=ok
// SIG undefined FUN_140e2f910(void)

void FUN_140e2f910(longlong param_1)

{
  FUN_140e2ff40(param_1,*(undefined8 *)(param_1 + 0xa18));
  return;
}



// FUNCTION 140e2f920 FUN_140e2f920 body=1462 status=ok
// SIG undefined FUN_140e2f920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e2f920(longlong param_1,undefined8 param_2,longlong param_3,char param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int *piVar10;
  longlong *plVar11;
  undefined1 auStack_408 [32];
  undefined8 *local_3e8;
  longlong *local_3e0;
  undefined1 **local_3d8;
  undefined1 local_3c8 [4];
  int local_3c4 [5];
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined4 local_3a0;
  undefined4 local_398;
  undefined8 local_394;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 local_378;
  int *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  longlong local_348;
  undefined1 local_340;
  undefined1 local_33f;
  undefined8 local_338;
  undefined8 uStack_330;
  longlong local_328;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [32];
  undefined1 *local_2a8 [2];
  longlong local_298 [4];
  longlong *local_278;
  int local_268;
  undefined1 local_258 [520];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  puVar1 = (undefined4 *)(param_1 + 800);
  local_3b0 = 0;
  if ((*(longlong *)(param_1 + 0x330) == 0) ||
     (((*(int *)(param_1 + 0x354) == 0 && *(int *)(param_1 + 0x350) == 0) &&
      *(int *)(param_1 + 0x34c) == 0) && *(int *)(param_1 + 0x348) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  local_3c4[0] = FUN_140aae2f0(param_2);
  if (local_3c4[0] != 0) {
    lVar5 = FUN_1405e8ff0(param_2);
    if (lVar5 != 0) {
      FUN_1405f4e50(lVar5,local_3c4[0]);
    }
    local_3c4[0] = 0;
    *(undefined8 *)(param_3 + 0xc48) = 0;
  }
  cVar3 = FUN_140aa4f60(param_2);
  local_3c8[0] = cVar3 == '\0';
  if ((cVar3 == '\0') && (*(char *)(param_1 + 0x360) == '\0')) {
    return;
  }
  FUN_1405e8b50(puVar1);
  lVar5 = FWeakObjectPtr::Get(puVar1);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x328)) &&
       (local_3c4[1] = 0, local_3c4[2] = 0, *(longlong *)(param_1 + 0x330) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(puVar1);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x328) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(puVar1);
      if (lVar5 != 0) goto LAB_140e2fa81;
    }
  }
  else {
LAB_140e2fa81:
    lVar6 = FUN_140600840();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140e2fac0;
  }
  lVar5 = 0;
LAB_140e2fac0:
  local_3c4[1] = 0;
  local_3c4[2] = 0;
  local_388 = 0;
  local_380 = 0;
  local_378 = 0;
  local_398 = 0xffffffff;
  local_394 = 0;
  if (lVar5 == 0) {
    local_3c4[1] = 0;
    local_3c4[2] = 0;
    local_388 = 0;
  }
  else {
    uVar7 = FSoftObjectPath::FSoftObjectPath(local_2c8,lVar5);
    FSoftObjectPath::operator=(&local_388,uVar7);
    FWeakObjectPtr::operator=(&local_398,lVar5);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_394 = CONCAT44(DAT_1464b56f4,(undefined4)local_394);
  }
  FUN_1405e3130(param_2,&local_398,0);
  local_340 = param_5 == 0;
  local_348 = param_5;
  local_338 = local_3c4;
  local_33f = 0;
  uStack_330 = local_3c8;
  local_278 = (longlong *)0x0;
  local_268 = 0;
  local_328 = param_1;
  puVar8 = (undefined8 *)FUN_140438ef0(0x20,local_298);
  if (puVar8 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar8 + 1) = (undefined4)local_338;
    *(undefined4 *)((longlong)puVar8 + 0xc) = local_338._4_4_;
    *(undefined4 *)(puVar8 + 2) = (undefined4)uStack_330;
    *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_330._4_4_;
    *puVar8 = &PTR_FUN_143f4d0b0;
    puVar8[3] = local_328;
  }
  local_3a0 = 0;
  local_2a8[0] = &LAB_140e1a8d0;
  local_50 = 0;
  local_258[0] = 0;
  local_310 = 0;
  local_320 = *puVar1;
  local_31c = *(undefined4 *)(param_1 + 0x324);
  local_318 = *(undefined4 *)(param_1 + 0x328);
  local_2e0 = *(undefined8 *)(param_1 + 0x330);
  local_3a8 = 0xffffffff00000000;
  local_48 = 0;
  local_308 = 0;
  local_300 = 0;
  local_3c4[1] = 0;
  local_3c4[2] = 0;
  FString::FString(local_2d8,param_1 + 0x338);
  FSoftObjectPath::operator=(&local_310,&local_2e0);
  local_2e8 = *(undefined8 *)(param_1 + 0x358);
  local_2f8 = *(undefined4 *)(param_1 + 0x348);
  uStack_2f4 = *(undefined4 *)(param_1 + 0x34c);
  uStack_2f0 = *(undefined4 *)(param_1 + 0x350);
  uStack_2ec = *(undefined4 *)(param_1 + 0x354);
  local_3d8 = local_2a8;
  local_3e0 = &local_348;
  local_3e8 = &local_3a8;
  FUN_1405f2e30(&local_358,param_2,&local_320,local_258);
  if (local_50 != 0) {
    FMemory::Free();
  }
  if (local_268 != 0) {
    plVar11 = local_298;
    if (local_278 != (longlong *)0x0) {
      plVar11 = local_278;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_278 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_3c4[0] != 0) {
    *(longlong *)(param_3 + 0xc48) = param_1;
    lVar5 = FUN_1405e8e00(param_2);
    if (lVar5 != 0) {
      lVar6 = FUN_1414196e0();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (param_4 != '\0') {
          FUN_141460470(param_3,param_1,1);
        }
        plVar11 = (longlong *)(lVar5 + 0x80);
        if (*(int *)(lVar5 + 0x88) != *(int *)(lVar5 + 0xb4)) {
          lVar6 = *(longlong *)(lVar5 + 0xc0);
          if (*(longlong *)(lVar5 + 0xc0) == 0) {
            lVar6 = lVar5 + 0xb8;
          }
          iVar4 = *(int *)(lVar6 + ((longlong)*(int *)(lVar5 + 200) - 1U & (longlong)local_3c4[0]) *
                                   4);
          if (iVar4 != -1) {
            do {
              piVar10 = (int *)((longlong)iVar4 * 0x80 + *plVar11);
              if (*piVar10 == local_3c4[0]) {
                if ((iVar4 != -1) && (piVar10 != (int *)0x0)) goto LAB_140e2fdbc;
                break;
              }
              iVar4 = piVar10[0x1e];
            } while (iVar4 != -1);
          }
        }
        local_370 = local_3c4;
        FUN_1405dda50(plVar11,local_3c4 + 3,&local_370,0);
        piVar10 = (int *)((longlong)local_3c4[3] * 0x80 + *plVar11);
LAB_140e2fdbc:
        uStack_350 = 0;
        local_358 = FUN_140e2cc00;
        FWeakObjectPtr::operator=(&local_368,param_3);
        plVar11 = (longlong *)(piVar10 + 6);
        local_360 = local_368;
        plVar9 = (longlong *)FMemory::Realloc(0,0x40);
        if (plVar9 != (longlong *)0x0) {
          *plVar9 = (longlong)&PTR_FUN_144599ae8;
          FWeakObjectPtr::operator=(plVar9 + 1,param_1);
          *(undefined4 *)(plVar9 + 2) = (undefined4)local_358;
          *(undefined4 *)((longlong)plVar9 + 0x14) = local_358._4_4_;
          *(undefined4 *)(plVar9 + 3) = uStack_350;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_34c;
          *(int *)(plVar9 + 4) = (int)local_368;
          *(undefined4 *)((longlong)plVar9 + 0x24) = local_360._4_4_;
          *(char *)(plVar9 + 5) = param_4;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar9[6] = lVar5;
          *plVar9 = (longlong)&PTR_FUN_144599b30;
        }
        if (&local_338 != plVar11) {
          if (plVar9 == (longlong *)0x0) {
            if (piVar10[8] == 0) {
              return;
            }
            plVar9 = (longlong *)*plVar11;
            if (plVar9 == (longlong *)0x0) {
              return;
            }
            (**(code **)(*plVar9 + 0x28))(plVar9,0);
            if (*plVar11 != 0) {
              lVar5 = FMemory::Realloc(*plVar11,0,0);
              *plVar11 = lVar5;
            }
            piVar10[8] = 0;
            return;
          }
          (**(code **)(*plVar9 + 0x30))(plVar9,plVar11);
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x28))(plVar9,0);
          lVar5 = FMemory::Realloc(plVar9,0,0);
          if (lVar5 != 0) {
            FMemory::Free(lVar5);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e2fee0 FUN_140e2fee0 body=82 status=ok
// SIG undefined FUN_140e2fee0(void)

void FUN_140e2fee0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (param_2 == 0) {
    FUN_140e5ff10();
    return;
  }
  plVar1 = (longlong *)FUN_140e4c810(param_1 + 0x26f0);
  if (*plVar1 != param_2) {
    FUN_140e58fd0(param_1 + 0x26f0,param_2);
  }
  return;
}



// FUNCTION 140e2ff40 FUN_140e2ff40 body=220 status=ok
// SIG undefined FUN_140e2ff40(void)

void FUN_140e2ff40(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  if (param_2 != 0) {
    if (param_1[0x137] == 0) {
      if ((DAT_1468536c6 != '\0') || (lVar3 = DAT_1468536c8, DAT_1468536c5 == '\0')) {
        lVar3 = 0;
      }
      lVar1 = FUN_140599e90(param_1[0x23]);
      lVar2 = (**(code **)(*param_1 + 0x900))(param_1,1,0);
      if (((lVar3 != 0) && (lVar1 != 0)) && (lVar2 != 0)) {
        lVar3 = FUN_1405ab470(param_1,0,0,lVar2);
        param_1[0x137] = lVar3;
      }
    }
    if (param_1[0x137] != 0) {
      FUN_1405a3150(param_1[0x137],local_28,param_2,0);
      FUN_140591060(local_28);
    }
  }
  return;
}



// FUNCTION 140e30020 FUN_140e30020 body=12 status=ok
// SIG undefined FUN_140e30020(void)

void FUN_140e30020(longlong param_1)

{
  FUN_140e2ff40(param_1,*(undefined8 *)(param_1 + 0xa00));
  return;
}



// FUNCTION 140e30030 FUN_140e30030 body=479 status=ok
// SIG undefined FUN_140e30030(void)

void FUN_140e30030(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d8 [208];
  
  if ((param_2 < 0) || ((int)param_1[0x4db] <= param_2)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (((bVar5) && (*(longlong *)((longlong)param_2 * 8 + param_1[0x4da]) != 0)) &&
     (lVar8 = param_1[0x92], lVar8 != 0)) {
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((((bVar5) && ((*(byte *)(lVar8 + 0x640) & 2) == 0)) &&
        ((cVar6 = (**(code **)(*param_1 + 0x778))(param_1), cVar6 == '\0' ||
         ((((longlong *)param_1[0x99] == (longlong *)0x0 ||
           (cVar6 = (**(code **)(*(longlong *)param_1[0x99] + 0x558))(), cVar6 == '\0')) &&
          ((param_1[0x21c] == 0 || (*(char *)(param_1[0x21c] + 0x10e5) == '\0')))))))) &&
       (lVar8 = FUN_142ceefa0(param_1), lVar8 == 0)) {
      plVar4 = *(longlong **)((longlong)param_2 * 8 + param_1[0x4da]);
      cVar6 = (**(code **)(*plVar4 + 0x290))(plVar4,0);
      if (cVar6 != '\0') {
        FUN_142c62180(local_d8);
        FUN_142d22270(plVar4,local_e8,param_1,local_d8,0);
        if (local_e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_e0 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
            (**(code **)*local_e0)(local_e0);
            LOCK();
            piVar2 = (int *)((longlong)local_e0 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_e0 + 8))(local_e0,1);
            }
          }
        }
        lVar8 = param_1[0x58e];
        if (DAT_14686b358 == '\0') {
          FUN_140c18430(&DAT_14686b350);
        }
        FUN_140c21ae0(DAT_14686b350,lVar8,plVar4);
        FUN_142c63c50(local_d8);
      }
    }
  }
  return;
}



// FUNCTION 140e30210 FUN_140e30210 body=353 status=ok
// SIG undefined FUN_140e30210(void)

void FUN_140e30210(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_28 [8];
  longlong *local_20;
  
  lVar6 = param_1 + 0x578;
  lVar5 = FWeakObjectPtr::Get(lVar6);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x580)) && (*(longlong *)(param_1 + 0x588) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar6,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x580) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar6);
      if (lVar5 != 0) goto LAB_140e302aa;
    }
  }
  else {
LAB_140e302aa:
    lVar6 = UXSkinAnimationProfile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140e302e3;
  }
  lVar5 = 0;
LAB_140e302e3:
  lVar6 = 0x668;
  if (param_2 != lVar5) {
    lVar6 = 0x640;
  }
  FUN_140e309a0(param_1,local_28,param_2,lVar6 + param_1);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (param_3 != '\0') {
    FUN_140e30390(param_1,param_2 == lVar5,0);
  }
  return;
}



// FUNCTION 140e30390 FUN_140e30390 body=776 status=ok
// SIG undefined FUN_140e30390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e30390(longlong param_1,byte param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  int local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_3 <= 0.0) {
    if (param_2 == 0) {
      lVar4 = *(longlong *)(param_1 + 0x610);
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x608);
    }
    if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x458) != 0)) {
      lVar6 = *(longlong *)(param_1 + 0x5f0);
      lVar7 = (longlong)*(int *)(param_1 + 0x5f8) * 0x40 + lVar6;
      if (lVar6 != lVar7) {
        do {
          if (*(longlong *)(lVar6 + 0x28) == *(longlong *)(lVar4 + 0x718)) {
            FUN_142c7bc00(*(longlong *)(param_1 + 0x458),local_b8,
                          *(undefined8 *)(lVar6 + 0x30 + ((ulonglong)param_2 ^ 1) * 8),2);
            if (local_b0 == (longlong *)0x0) {
              return;
            }
            LOCK();
            plVar5 = local_b0 + 1;
            lVar4 = *plVar5;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)lVar4 != 1) {
              return;
            }
            (**(code **)*local_b0)(local_b0);
            LOCK();
            piVar1 = (int *)((longlong)local_b0 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 != 1) {
              return;
            }
            (**(code **)(*local_b0 + 8))(local_b0,1);
            return;
          }
          lVar6 = lVar6 + 0x40;
        } while (lVar6 != lVar7);
      }
    }
  }
  else {
    lVar4 = FUN_1422312c0();
    if (lVar4 != 0) {
      local_c8 = (longlong *)0x0;
      local_c0 = 0;
      plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar5 == (longlong *)0x0) {
        if (((local_c0 != 0) && (local_c8 != (longlong *)0x0)) &&
           ((**(code **)(*local_c8 + 0x28))(local_c8,0), local_c8 != (longlong *)0x0)) {
          local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
        }
      }
      else {
        *plVar5 = (longlong)&PTR_FUN_144599b78;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        plVar5[2] = (longlong)FUN_140e30390;
        *(byte *)(plVar5 + 3) = param_2;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = 0;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[4] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_144599bc0;
        FUN_140e1bd90(plVar5,&local_c8);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        lVar4 = FMemory::Realloc(plVar5,0,0);
        if (lVar4 != 0) {
          FMemory::Free(lVar4);
        }
      }
      lVar4 = FUN_1422312c0(param_1);
      local_a8 = 0;
      local_a0 = 0;
      uVar3 = *(undefined8 *)(lVar4 + 0xa0);
      if ((local_c0 != 0) && (local_c8 != (longlong *)0x0)) {
        (**(code **)(*local_c8 + 0x30))(local_c8,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_d0 = 0xbf800000;
      local_d8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar3,param_1 + 0x680,&local_a8,param_3);
      if (local_48 != 0) {
        plVar5 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar5 = local_58;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (local_c0 != 0) {
        if (local_c8 == (longlong *)0x0) {
          return;
        }
        (**(code **)(*local_c8 + 0x28))(local_c8,0);
        if (local_c8 != (longlong *)0x0) {
          local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
        }
        local_c0 = 0;
      }
      if (local_c8 != (longlong *)0x0) {
        FMemory::Free(local_c8);
      }
    }
  }
  return;
}



// FUNCTION 140e306a0 FUN_140e306a0 body=757 status=ok
// SIG undefined FUN_140e306a0(void)

undefined8
FUN_140e306a0(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_res8;
  
  local_res8 = *param_2;
  lVar2 = 0;
  if (((param_1[300] == 0) || (*(longlong *)(param_1[300] + 0x26f8) == 0)) ||
     (lVar2 = FUN_140e14f30(&local_res8), lVar2 == 0)) {
    lVar3 = AActor::GetWorldSettings(param_1);
    if (lVar3 != 0) {
      lVar3 = AActor::GetWorldSettings(param_1);
      lVar3 = *(longlong *)(lVar3 + 0x658);
      if (lVar3 != 0) {
        lVar4 = FUN_141437aa0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (*(longlong *)(lVar3 + 0x48) != 0)) {
          lVar2 = FUN_140e14f30(&local_res8);
          if (lVar2 != 0) goto LAB_140e30788;
        }
      }
    }
    if (param_1[0x14e] != 0) {
      lVar2 = FUN_140e14f30(&local_res8);
    }
    if (lVar2 == 0) {
      return 0;
    }
  }
LAB_140e30788:
  *param_3 = *(undefined4 *)(lVar2 + 0x10);
  *param_4 = *(undefined8 *)(lVar2 + 0x20);
  lVar3 = *(longlong *)(lVar2 + 8);
  if (lVar3 == 0) goto LAB_140e308f5;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x900))(param_1,0,0);
  if (plVar5 != (longlong *)0x0) {
    lVar4 = param_1[0x136];
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*plVar5 + 0x560))(plVar5,(int)param_1[0x12d]);
      if (lVar4 == 0) {
LAB_140e30824:
        lVar4 = 0;
      }
      else {
        lVar6 = FUN_1429ba110();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140e30824;
      }
      param_1[0x136] = lVar4;
      if (lVar4 == 0) {
        local_res8 = 0;
        lVar3 = (**(code **)(*plVar5 + 0x5a8))(plVar5,(int)param_1[0x12d],lVar3,0);
        param_1[0x136] = lVar3;
      }
    }
    else if (*(longlong *)(lVar4 + 0x90) != lVar3) {
      FUN_1425a2620(lVar4,lVar3);
      thunk_FUN_142588c20(param_1[0x136]);
      (**(code **)(*plVar5 + 0x568))(plVar5,(int)param_1[0x12d],0);
      (**(code **)(*plVar5 + 0x568))(plVar5,(int)param_1[0x12d],param_1[0x136]);
    }
  }
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x900))(param_1,1,0);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x568))(plVar5,(int)param_1[0x12d],0);
    (**(code **)(*plVar5 + 0x568))(plVar5,(int)param_1[0x12d],param_1[0x136]);
  }
LAB_140e308f5:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468702a8) && (_Init_thread_header(&DAT_1468702a8), DAT_1468702a8 == -1))
  {
    FName::FName(&DAT_1468702a0,L"Playback",1);
    _Init_thread_footer(&DAT_1468702a8);
  }
  if (param_1[0x136] != 0) {
    FUN_1425a2750(param_1[0x136],DAT_1468702a0,0);
  }
  FUN_140e2ff40(param_1,*(undefined8 *)(lVar2 + 0x18));
  return 1;
}



// FUNCTION 140e309a0 FUN_140e309a0 body=767 status=ok
// SIG undefined FUN_140e309a0(void)

undefined8 * FUN_140e309a0(longlong param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 local_1f8 [32];
  longlong local_1d8;
  int local_1d0;
  int local_1cc;
  undefined1 local_1c7;
  undefined1 local_128 [56];
  undefined1 local_f0 [200];
  
  if (*param_4 != 0) {
    lVar8 = USafeZone::GetPrivateStaticClass();
    for (lVar9 = *param_4; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar8) {
        if ((*param_4 != 0) && (*(longlong *)(param_1 + 0x458) != 0)) {
          lVar9 = param_1 + 0x578;
          lVar8 = FWeakObjectPtr::Get(lVar9);
          lVar14 = 0;
          if (lVar8 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(param_1 + 0x580)) &&
               (*(longlong *)(param_1 + 0x588) != 0)) {
              lVar8 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar9,lVar8);
              if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(param_1 + 0x580) = DAT_1464b56f4;
              }
              lVar8 = FWeakObjectPtr::Get(lVar9);
              if (lVar8 != 0) goto LAB_140e30a98;
            }
LAB_140e30ace:
            lVar8 = lVar14;
          }
          else {
LAB_140e30a98:
            lVar9 = UXSkinAnimationProfile::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_140e30ace;
          }
          uVar13 = DAT_146870160;
          if (param_3 == lVar8) goto LAB_140e30bb7;
          lVar9 = param_1 + 0x5a0;
          lVar8 = FWeakObjectPtr::Get(lVar9);
          if (lVar8 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(param_1 + 0x5a8)) &&
               (*(longlong *)(param_1 + 0x5b0) != 0)) {
              lVar8 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar9,lVar8);
              if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(param_1 + 0x5a8) = DAT_1464b56f4;
              }
              lVar8 = FWeakObjectPtr::Get(lVar9);
              if (lVar8 != 0) goto LAB_140e30b64;
            }
LAB_140e30b9a:
            lVar8 = lVar14;
          }
          else {
LAB_140e30b64:
            lVar9 = UXSkinAnimationProfile::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_140e30b9a;
          }
          uVar13 = DAT_146870170;
          if (param_3 == lVar8) {
            uVar13 = DAT_146870168;
          }
LAB_140e30bb7:
          FUN_142c62180(local_1f8);
          local_1c7 = 2;
          puVar10 = (undefined8 *)FUN_142c625d0(local_128,&DAT_146b31788,uVar13);
          iVar7 = local_1d0;
          lVar9 = (longlong)local_1d0;
          local_1d0 = local_1d0 + 1;
          if (local_1cc < local_1d0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_1d8,iVar7);
          }
          uVar13 = puVar10[1];
          lVar9 = lVar9 * 0x38;
          *(undefined8 *)(lVar9 + local_1d8) = *puVar10;
          ((undefined8 *)(lVar9 + local_1d8))[1] = uVar13;
          uVar13 = puVar10[3];
          puVar1 = (undefined8 *)(lVar9 + 0x10 + local_1d8);
          *puVar1 = puVar10[2];
          puVar1[1] = uVar13;
          uVar3 = *(undefined4 *)((longlong)puVar10 + 0x24);
          uVar4 = *(undefined4 *)(puVar10 + 5);
          uVar5 = *(undefined4 *)((longlong)puVar10 + 0x2c);
          puVar2 = (undefined4 *)(lVar9 + 0x20 + local_1d8);
          *puVar2 = *(undefined4 *)(puVar10 + 4);
          puVar2[1] = uVar3;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          *(undefined8 *)(lVar9 + 0x30 + local_1d8) = puVar10[6];
          lVar9 = lVar14;
          if (*param_4 != 0) {
            lVar11 = USafeZone::GetPrivateStaticClass();
            for (lVar8 = *param_4;
                (lVar9 = lVar14, lVar8 != 0 && (lVar9 = *param_4, lVar8 != lVar11));
                lVar8 = *(longlong *)(lVar8 + 0x30)) {
            }
          }
          uVar13 = *(undefined8 *)(param_1 + 0x458);
          uVar12 = FUN_1405e0fd0(local_f0,local_1f8);
          FUN_142c7bb40(uVar13,param_2,lVar9,uVar12,0);
          FUN_142c63c50(local_1f8);
          return param_2;
        }
        break;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140e30ca0 FUN_140e30ca0 body=12 status=ok
// SIG undefined FUN_140e30ca0(void)

void FUN_140e30ca0(longlong param_1)

{
  FUN_140e2ff40(param_1,*(undefined8 *)(param_1 + 0xa08));
  return;
}



// FUNCTION 140e30cb0 FUN_140e30cb0 body=672 status=ok
// SIG undefined FUN_140e30cb0(void)

void FUN_140e30cb0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  FUN_142dd5f70();
  if (*(char *)(param_3 + 0x762) == '\0') {
    return;
  }
  lVar6 = FUN_140e21c10(param_1,param_2);
  if (lVar6 == 0) {
    iVar5 = *(int *)(param_1 + 0x560);
    *(int *)(param_1 + 0x560) = iVar5 + 1;
    if (*(int *)(param_1 + 0x564) < iVar5 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x558,iVar5);
    }
    plVar12 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x558));
    *plVar12 = param_3;
    plVar12[1] = (longlong)param_2;
    return;
  }
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (*(longlong *)(param_3 + 0x758) == 0) {
    return;
  }
  lVar7 = FUN_142dfdfe0();
  lVar9 = *(longlong *)(param_3 + 0x758);
  while( true ) {
    if (lVar9 == 0) {
      return;
    }
    if (lVar9 == lVar7) break;
    lVar9 = *(longlong *)(lVar9 + 0x30);
  }
  if (*(longlong *)(param_3 + 0x758) == 0) {
    return;
  }
  uVar8 = FUN_142e035e0();
  lVar9 = (**(code **)(*param_2 + 0x628))(param_2,uVar8);
  if (lVar9 == 0) {
    return;
  }
  if (*(longlong *)(param_3 + 0x758) != 0) {
    lVar10 = FUN_142dfdfe0();
    lVar7 = *(longlong *)(param_3 + 0x758);
    for (lVar11 = lVar7; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x30)) {
      if (lVar11 == lVar10) goto LAB_140e30d90;
    }
  }
  lVar7 = 0;
LAB_140e30d90:
  lVar9 = FUN_142dcdc10(lVar9,lVar7);
  if (((lVar9 != 0) && (cVar4 = FUN_142dd3270(lVar9), cVar4 != '\0')) &&
     (lVar9 = *(longlong *)(lVar9 + 0xd8), lVar9 != 0)) {
    lVar7 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((bVar3) && (lVar7 = *(longlong *)(lVar9 + 0x50), lVar7 != 0)) &&
       ((lVar11 = FUN_140e221a0(param_1,param_3,lVar6), lVar11 == 0 &&
        (plVar12 = (longlong *)FUN_140f61b20(lVar6,lVar7), plVar12 != (longlong *)0x0)))) {
      (**(code **)(*plVar12 + 0x2a8))(plVar12,*(undefined8 *)(param_3 + 0x118));
      FUN_140f8ef30(plVar12,param_3);
      FUN_140f8d9f0(plVar12,*(undefined8 *)(lVar9 + 0x50));
      local_18 = *(undefined4 *)(param_3 + 0x220);
      local_14 = *(undefined4 *)(param_3 + 0x224);
      local_10 = *(undefined4 *)(param_3 + 0x228);
      FUN_140f8ef10(plVar12,&local_18);
      FUN_140f61690(lVar6,plVar12);
      plVar1 = (longlong *)(param_1 + 0x538);
      lVar9 = (longlong)*(int *)(param_1 + 0x540);
      plVar13 = (longlong *)*plVar1;
      plVar2 = plVar13 + lVar9 * 3;
      for (; plVar13 != plVar2; plVar13 = plVar13 + 3) {
        if (*plVar13 == param_3) {
          return;
        }
      }
      iVar5 = *(int *)(param_1 + 0x540) + 1;
      *(int *)(param_1 + 0x540) = iVar5;
      if (*(int *)(param_1 + 0x544) < iVar5) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1);
      }
      lVar7 = *plVar1;
      *(longlong *)(lVar7 + lVar9 * 0x18) = param_3;
      *(longlong *)(lVar7 + 8 + lVar9 * 0x18) = lVar6;
      *(longlong **)(lVar7 + 0x10 + lVar9 * 0x18) = plVar12;
    }
  }
  return;
}



// FUNCTION 140e30f50 FUN_140e30f50 body=367 status=ok
// SIG undefined FUN_140e30f50(void)

void FUN_140e30f50(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_142dd60b0();
  if (*(char *)(param_3 + 0x762) != '\0') {
    lVar5 = FUN_140e21c10(param_1,param_2);
    if (lVar5 == 0) {
      if (param_2 != 0) {
        iVar7 = *(int *)(param_1 + 0x560) + -1;
        if (-1 < iVar7) {
          lVar8 = (longlong)iVar7 << 4;
          lVar9 = (longlong)*(int *)(param_1 + 0x560) << 4;
          lVar5 = lVar8;
          do {
            lVar3 = *(longlong *)(param_1 + 0x558);
            if ((*(longlong *)(lVar8 + 8 + lVar3) == param_2) &&
               (*(longlong *)(lVar8 + lVar3) == param_3)) {
              iVar2 = *(int *)(param_1 + 0x560);
              iVar4 = (iVar2 - iVar7) + -1;
              if (iVar4 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(lVar3 + lVar5),(void *)(lVar9 + lVar3),(longlong)iVar4 << 4);
                iVar2 = *(int *)(param_1 + 0x560);
              }
              *(int *)(param_1 + 0x560) = iVar2 + -1;
              TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1 + 0x558);
            }
            lVar9 = lVar9 + -0x10;
            lVar5 = lVar5 + -0x10;
            lVar8 = lVar8 + -0x10;
            iVar7 = iVar7 + -1;
          } while (-1 < iVar7);
        }
      }
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x538);
      plVar1 = plVar6 + (longlong)*(int *)(param_1 + 0x540) * 3;
      if (plVar6 != plVar1) {
        while ((*plVar6 != param_3 || (plVar6[1] != lVar5))) {
          plVar6 = plVar6 + 3;
          if (plVar6 == plVar1) {
            return;
          }
        }
        FUN_140f8bd80(lVar5,plVar6[2]);
        FUN_140e33f90(param_1,param_3,lVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e310c0 FUN_140e310c0 body=8 status=ok
// SIG undefined FUN_140e310c0(void)

void FUN_140e310c0(undefined8 param_1,undefined8 param_2)

{
  FUN_140e310e0(param_1,param_2,0);
  return;
}



// FUNCTION 140e310d0 thunk_FUN_140e310e0 body=8 status=ok
// SIG undefined thunk_FUN_140e310e0(void)

void thunk_FUN_140e310e0(undefined8 param_1,undefined8 param_2)

{
  FUN_140e310e0(param_1,param_2,1);
  return;
}



// FUNCTION 140e310e0 FUN_140e310e0 body=503 status=ok
// SIG undefined FUN_140e310e0(void)

void FUN_140e310e0(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  lVar10 = *(longlong *)(param_1 + 0x1c8);
  lVar9 = (longlong)*(int *)(param_1 + 0x1d0) * 0x80 + lVar10;
  if (lVar10 != lVar9) {
    lVar8 = lVar10 + 8;
    do {
      cVar2 = FUN_142dd38c0(lVar10);
      if (param_3 == cVar2) {
        iVar3 = *(int *)(lVar8 + 0x58);
        if ((((iVar3 == -1) || (iVar3 < 0)) || ((int)param_2[1] <= iVar3)) ||
           (cVar2 = FUN_140e14eb0((longlong)iVar3 * 0x60 + *param_2,lVar8), cVar2 == '\0')) {
          lVar6 = *param_2;
          lVar1 = param_2[1];
          for (lVar7 = lVar6; lVar7 != (longlong)(int)lVar1 * 0x60 + lVar6; lVar7 = lVar7 + 0x60) {
            FSoftObjectPath::ToString(lVar8 + 0x18,&local_38);
            FSoftObjectPath::ToString(lVar7 + 0x40,&local_48);
            puVar5 = &DAT_143f3eda8;
            if (local_30 != 0) {
              puVar5 = local_38;
            }
            puVar4 = &DAT_143f3eda8;
            if (local_40 != 0) {
              puVar4 = local_48;
            }
            iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
            if (local_48 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (local_38 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            if (iVar3 == 0) {
              lVar6 = (lVar7 - lVar6) / 6 + (lVar7 - lVar6 >> 0x3f);
              iVar3 = (int)(lVar6 >> 4) - (int)(lVar6 >> 0x3f);
              if ((-1 < iVar3) && (iVar3 < (int)param_2[1])) {
                FUN_140e26580((longlong)iVar3 * 0x60 + *param_2,lVar8);
                goto LAB_140e3124c;
              }
              break;
            }
          }
          iVar3 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar3 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
            TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
          }
          FUN_140e13540((longlong)iVar3 * 0x60 + *param_2,lVar8);
          if ((-1 < iVar3) && (iVar3 < (int)param_2[1])) {
LAB_140e3124c:
            *(int *)(lVar8 + 0x58) = iVar3;
          }
        }
        else {
          FUN_140e26580((longlong)*(int *)(lVar8 + 0x58) * 0x60 + *param_2,lVar8);
        }
      }
      lVar10 = lVar10 + 0x80;
      lVar8 = lVar8 + 0x80;
    } while (lVar10 != lVar9);
  }
  return;
}



// FUNCTION 140e312e0 DateTime_ToIso8601 body=97 status=ok
// SIG undefined DateTime_ToIso8601(void)

void ULowEntryExtendedStandardLibrary::DateTime_ToIso8601(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  plVar1 = (longlong *)FUN_140e20c40(param_1,local_18);
  if (param_2 != plVar1) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_2 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e31350 FUN_140e31350 body=624 status=ok
// SIG undefined FUN_140e31350(void)

void FUN_140e31350(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *_Src_00;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *local_50;
  int local_48;
  
  plVar11 = *(longlong **)(param_1 + 0x178);
  plVar9 = plVar11 + (longlong)*(int *)(param_1 + 0x180) * 4;
joined_r0x000140e31387:
  if (plVar11 == plVar9) {
    return;
  }
  local_48 = (int)plVar11[2];
  lVar7 = (longlong)local_48;
  _Src_00 = (longlong *)0x0;
  lVar8 = *plVar11;
  _Src = (void *)plVar11[1];
  local_50 = (longlong *)0x0;
  if (local_48 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_50,local_48,0);
    _Src_00 = local_50;
    _guard_xfg_dispatch_icall_nop(local_50,_Src,lVar7 << 4);
  }
  iVar2 = local_48;
  lVar7 = plVar11[3];
  if (lVar8 != 0) {
    plVar4 = (longlong *)*param_2;
    iVar1 = (int)param_2[1];
    plVar10 = plVar4 + (longlong)iVar1 * 4;
    plVar6 = plVar4;
    plVar5 = plVar4;
    if (plVar4 != plVar10) {
LAB_140e31445:
      if (*plVar6 != lVar8) goto code_r0x000140e3144b;
      lVar8 = (longlong)local_48;
      for (plVar10 = _Src_00; plVar10 != _Src_00 + lVar8 * 2; plVar10 = plVar10 + 2) {
        lVar3 = *(longlong *)(param_1 + 0x120);
        if (lVar3 == 0) {
          lVar3 = FUN_1423407b0(param_1);
        }
        FUN_140e7e6f0(lVar3);
        plVar4 = (longlong *)plVar6[1];
        plVar5 = plVar4 + (longlong)(int)plVar6[2] * 2;
        if (plVar4 != plVar5) {
          do {
            if (*plVar4 == *plVar10) {
              *(int *)(plVar4 + 1) = (int)plVar10[1];
              goto LAB_140e314dd;
            }
            plVar4 = plVar4 + 2;
          } while (plVar4 != plVar5);
        }
        FUN_140e0f1b0(plVar6 + 1,plVar10);
LAB_140e314dd:
      }
      *(int *)(plVar6 + 3) = (int)lVar7;
      goto LAB_140e31577;
    }
joined_r0x000140e3145a:
    do {
      if (plVar5 == plVar10) goto LAB_140e31506;
      if (*plVar5 == lVar8) {
        if ((int)((longlong)plVar5 - (longlong)plVar4 >> 5) != -1) break;
        goto LAB_140e31506;
      }
      plVar5 = plVar5 + 4;
    } while( true );
  }
  goto LAB_140e31577;
code_r0x000140e3144b:
  plVar6 = plVar6 + 4;
  if (plVar6 == plVar10) goto joined_r0x000140e3145a;
  goto LAB_140e31445;
LAB_140e31506:
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_2,iVar1);
  }
  plVar10 = (longlong *)((longlong)iVar1 * 0x20 + *param_2);
  *plVar10 = lVar8;
  plVar10[1] = 0;
  *(int *)(plVar10 + 2) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)plVar10 + 0x14) = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar10 + 1,iVar2,0);
    _guard_xfg_dispatch_icall_nop((void *)plVar10[1],_Src_00,(longlong)iVar2 << 4);
  }
  *(int *)(plVar10 + 3) = (int)lVar7;
LAB_140e31577:
  if (_Src_00 != (longlong *)0x0) {
    FMemory::Free(_Src_00);
  }
  plVar11 = plVar11 + 4;
  goto joined_r0x000140e31387;
}



// FUNCTION 140e315c0 FUN_140e315c0 body=49 status=ok
// SIG undefined FUN_140e315c0(void)

void FUN_140e315c0(longlong param_1)

{
  FUN_140c4fea0();
  FUN_140e8e630(param_1 + 0x2d30,param_1);
  FStringTable::SetOwnerAsset(param_1 + 0x2e18,param_1);
  return;
}



// FUNCTION 140e31600 FUN_140e31600 body=254 status=ok
// SIG undefined FUN_140e31600(void)

void FUN_140e31600(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  FUN_142712690();
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x528) = 0;
    return;
  }
  *plVar3 = (longlong)&PTR_FUN_143f4d170;
  FWeakObjectPtr::operator=(plVar3 + 1,param_1);
  plVar3[2] = (longlong)FUN_140e19710;
  lVar4 = FDelegateHandle::GenerateNewID();
  plVar3[4] = lVar4;
  *plVar3 = (longlong)&PTR_FUN_143f4d1b8;
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465327f0,1);
  puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
  iVar2 = DAT_1465327f8;
  lVar4 = (longlong)DAT_1465327f8;
  uVar1 = *puVar5;
  DAT_1465327f8 = DAT_1465327f8 + 1;
  if (DAT_1465327fc < DAT_1465327f8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465327f0,iVar2);
  }
  puVar5 = (undefined8 *)(lVar4 * 0x10 + DAT_1465327f0);
  *puVar5 = plVar3;
  *(undefined4 *)(puVar5 + 1) = 3;
  *(undefined8 *)(param_1 + 0x528) = uVar1;
  return;
}



// FUNCTION 140e31700 FUN_140e31700 body=180 status=ok
// SIG undefined FUN_140e31700(void)

void FUN_140e31700(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140a6e440();
  uVar1 = FUN_1414aa4c0();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0x55a] = lVar2;
  uVar1 = AUGWeapon_Hook::GetPrivateStaticClass();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0x55b] = lVar2;
  uVar1 = AGFireballProjectile::GetPrivateStaticClass();
  lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  lVar2 = param_1[0x21c];
  param_1[0x55c] = lVar3;
  if ((lVar2 != 0) && (param_1[0x55d] != 0)) {
    FUN_14234feb0(param_1[0x55d],*(float *)(param_1[0x9a] + 0x714) + *(float *)(lVar2 + 0x133c),
                  *(float *)(param_1[0x9a] + 0x710) + *(float *)(lVar2 + 0x1340),1);
    return;
  }
  return;
}



// FUNCTION 140e317c0 FUN_140e317c0 body=100 status=ok
// SIG undefined FUN_140e317c0(void)

void FUN_140e317c0(longlong param_1)

{
  longlong lVar1;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  undefined4 local_10;
  
  if (((*(longlong *)(param_1 + 0x28) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x1200),
      *(longlong *)(param_1 + 0x30) != 0)) && (lVar1 != 0)) {
    local_10 = FUN_140e1a210();
    local_28 = *(undefined8 *)(param_1 + 0x28);
    local_20 = *(undefined8 *)(param_1 + 0x30);
    local_18 = lVar1;
    FUN_140e31d40(param_1,&local_28);
  }
  return;
}



// FUNCTION 140e31830 FUN_140e31830 body=147 status=ok
// SIG undefined FUN_140e31830(void)

void FUN_140e31830(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  FUN_1426a4ac0();
  if ((*(byte *)(param_1 + 0x92) & 0x20) != 0) {
    if (*(longlong *)(param_1 + 0x2718) != 0) {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x2718) + 0xc);
      if (iVar1 < (int)DAT_1469e91c4) {
        uVar4 = iVar1 >> 0x1f & 0xffff;
        uVar2 = iVar1 + uVar4;
        lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar4) * 0x18;
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x30000000) == 0) {
        return;
      }
    }
    if (((*(byte *)(param_1 + 0x94) & 0x18) == 0x10) && (*(char *)(param_1 + 0x13c2) == '\0')) {
      FUN_140e53150(param_1 + 0x26f0,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140e318d0 FUN_140e318d0 body=99 status=ok
// SIG undefined FUN_140e318d0(void)

void FUN_140e318d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != DAT_146870218) {
    cVar1 = FUN_140e53910(param_1 + 0x26f0,DAT_146870218);
    if (cVar1 != '\0') {
      FUN_140e1f5c0(param_1);
    }
  }
  if ((*(longlong *)(param_1 + 0x2718) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x2718) + 0x7f8) == DAT_146b479b0)) {
    FUN_140e5ac50(param_1 + 0x26f0);
    return;
  }
  return;
}



// FUNCTION 140e31940 FUN_140e31940 body=40 status=ok
// SIG undefined FUN_140e31940(void)

void FUN_140e31940(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined2 *)(param_1 + 0x78) = 0;
  uVar1 = FWeakObjectPtr::Get(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  return;
}



// FUNCTION 140e31970 FUN_140e31970 body=933 status=ok
// SIG undefined FUN_140e31970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140e31970(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_90 [32];
  longlong *local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  if ((*(longlong *)(param_1 + 0x28) == 0) || (*(longlong *)(param_1 + 0x38) == 0)) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar5 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x150) != '\0') {
    FUN_140be49c0(*(undefined8 *)(param_1 + 0x38));
    *(undefined1 *)(param_1 + 0x150) = 0;
  }
  *(longlong **)(param_1 + 0xb8) = *(longlong **)(param_1 + 0x28);
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x148))();
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  uVar10 = FUN_140e1a210(param_1,*(undefined8 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x98) = uVar10;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(lVar5 + 0x444);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x830))
            (*(longlong **)(param_1 + 0x28),param_1 + 0xa0,param_1 + 0xac);
  plVar4 = (longlong *)(param_1 + 0x140);
  plVar9 = (longlong *)(*(longlong *)(param_1 + 0x38) + 0xb88);
  plVar7 = (longlong *)0x0;
  if (plVar4 != plVar9) {
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x38) + 0xb90);
    lVar5 = *plVar9;
    *(int *)(param_1 + 0x148) = iVar8;
    if ((iVar8 == 0) && (*(int *)(param_1 + 0x14c) == 0)) {
      *(undefined4 *)(param_1 + 0x14c) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar4,iVar8);
      if (iVar8 != 0) {
        puVar6 = (undefined8 *)(*plVar4 + 8);
        lVar5 = lVar5 - *plVar4;
        do {
          puVar6[-1] = 0;
          *puVar6 = 0;
          lVar1 = *(longlong *)(lVar5 + -8 + (longlong)puVar6);
          puVar6[-1] = lVar1;
          if ((lVar1 != 0) || (plVar4 = plVar7, *(longlong *)(lVar5 + -8 + (longlong)puVar6) != 0))
          {
            plVar4 = *(longlong **)(lVar5 + (longlong)puVar6);
          }
          *puVar6 = plVar4;
          puVar6 = puVar6 + 2;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  puVar6 = (undefined8 *)(param_1 + 200);
  local_b0 = 0;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  local_98 = 0;
  local_a8 = 0x10000;
  local_a0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_a4 = 0;
  local_94 = 0x101;
  local_9c = 0;
  local_a2 = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0x10000;
  *(undefined2 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xec) = 0x101;
  plVar4 = plVar7;
  if ((undefined1 *)(param_1 + 0xf0) != local_90) {
    _guard_xfg_dispatch_icall_nop((undefined1 *)(param_1 + 0xf0),local_90,0x20);
    plVar9 = plVar7;
    uVar10 = 0;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      FMemory::Free();
      plVar9 = local_70;
      plVar4 = local_50;
      uVar10 = (undefined4)local_68;
    }
    *(longlong **)(param_1 + 0x110) = plVar9;
    *(undefined4 *)(param_1 + 0x118) = uVar10;
    *(undefined4 *)(param_1 + 0x11c) = local_68._4_4_;
  }
  local_68 = 0;
  local_70 = (longlong *)0x0;
  if ((undefined1 *)(param_1 + 0x120) == local_60) {
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
      plVar9 = local_70;
      goto LAB_140e31c24;
    }
  }
  else {
    if (plVar4 == (longlong *)0x0) {
      _guard_xfg_dispatch_icall_nop((undefined1 *)(param_1 + 0x120),local_60,0x10);
    }
    plVar9 = plVar7;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      FMemory::Free();
      plVar9 = local_70;
      plVar4 = local_50;
    }
    *(longlong **)(param_1 + 0x130) = plVar4;
    *(undefined4 *)(param_1 + 0x138) = (undefined4)local_48;
    *(undefined4 *)(param_1 + 0x13c) = local_48._4_4_;
    local_48 = 0;
    local_50 = (longlong *)0x0;
LAB_140e31c24:
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
  }
  *puVar6 = DAT_146870178;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x488);
  if (plVar4 != (longlong *)0x0) {
    plVar9 = (longlong *)(**(code **)(*plVar4 + 0x678))(plVar4);
    if (plVar9 != (longlong *)0x0) {
      lVar5 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        (**(code **)(*plVar9 + 0xa78))(plVar9,puVar6,1);
        plVar7 = plVar9;
        goto LAB_140e31cbb;
      }
    }
    FCollisionQueryParams::AddIgnoredActor(puVar6,plVar4);
  }
LAB_140e31cbb:
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x848);
  if ((plVar4 != (longlong *)0x0) && (plVar4 != plVar7)) {
    (**(code **)(*plVar4 + 0xa78))(plVar4,puVar6,1);
  }
  return 1;
}



// FUNCTION 140e31d20 FUN_140e31d20 body=20 status=ok
// SIG undefined FUN_140e31d20(void)

byte FUN_140e31d20(void)

{
  char cVar1;
  
  cVar1 = FUN_140e31970();
  return -(cVar1 != '\0') & 2;
}



// FUNCTION 140e31d40 FUN_140e31d40 body=2555 status=ok
// SIG undefined FUN_140e31d40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e31d40(longlong param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  char cVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
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
  undefined1 auStack_978 [32];
  float *local_958;
  longlong local_950;
  undefined4 local_948;
  undefined1 *local_940;
  float *local_938;
  char local_928;
  float local_918;
  float fStack_914;
  float fStack_910;
  undefined4 uStack_90c;
  float local_908;
  float fStack_904;
  float local_900;
  float local_8f8;
  float local_8f4;
  float local_8f0;
  float local_8e8;
  float local_8e4;
  float local_8e0;
  float local_8c8;
  float local_8c4;
  float local_8c0;
  undefined4 local_8bc;
  float local_8b8;
  float local_8b4;
  float local_8b0;
  undefined4 local_8ac;
  float local_8a8;
  float local_8a4;
  float local_8a0;
  undefined4 local_89c;
  float local_898;
  float local_894;
  float local_890;
  undefined4 local_88c;
  undefined4 local_888;
  float local_878;
  float fStack_874;
  float fStack_870;
  float local_868;
  float fStack_864;
  float fStack_860;
  float local_858;
  float fStack_854;
  float fStack_850;
  float local_848;
  float fStack_844;
  float fStack_840;
  float local_838;
  float local_834;
  float local_830;
  float local_82c;
  float local_828;
  float local_824;
  char local_820;
  float local_81c;
  float local_818;
  undefined1 local_808 [256];
  longlong local_708;
  undefined8 local_700;
  char local_488;
  undefined1 local_478 [16];
  undefined1 local_468 [896];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_978;
  FUN_142dc1ad0(local_478);
  cVar2 = FUN_142dcd6e0(param_2[1],local_478,0);
  (**(code **)(*(longlong *)*param_2 + 0x830))((longlong *)*param_2,&local_8f8,&local_8e8);
  lVar7 = param_2[2];
  fVar27 = *(float *)(lVar7 + 0x50) / *(float *)(param_2 + 3);
  if (*(float *)(lVar7 + 0x4c) <= fVar27) {
    fVar27 = *(float *)(lVar7 + 0x4c);
  }
  fVar27 = fVar27 + (*(float *)(lVar7 + 0x54) - *(float *)(lVar7 + 0x50));
  pfVar5 = (float *)FRotator::Vector(&local_8e8,&local_908);
  fVar18 = DAT_1468b5d98;
  fVar15 = DAT_1468b5d94;
  fVar30 = 0.0;
  fVar29 = fVar27 * *pfVar5;
  fVar31 = 0.0;
  cVar10 = *(char *)(param_1 + 0x4c);
  fVar28 = fVar27 * pfVar5[1];
  local_820 = '\0';
  fVar27 = fVar27 * pfVar5[2];
  local_908 = DAT_1468b5d90;
  fStack_904 = DAT_1468b5d94;
  local_900 = DAT_1468b5d98;
  local_838 = DAT_1468b5d90;
  local_834 = DAT_1468b5d94;
  local_830 = DAT_1468b5d98;
  local_81c = 0.0;
  local_818 = 0.0;
  if ((*(char *)(param_1 + 0x78) == '\0') && (*(char *)(param_1 + 0x79) == '\0')) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  plVar11 = (longlong *)0x0;
  *(char *)(param_1 + 0x4c) = cVar3;
  if (cVar3 == '\0') {
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  local_8c0 = local_8e8 * _DAT_1468701d0 -
              (float)(int)(local_8e8 * _DAT_1468701d0 * _DAT_1468701c0) * _DAT_1468701b0;
  fVar20 = local_8e4 * fRam00000001468701d4 -
           (float)(int)(local_8e4 * fRam00000001468701d4 * fRam00000001468701c4) *
           fRam00000001468701b4;
  fVar22 = local_8e0 * fRam00000001468701d8 -
           (float)(int)(local_8e0 * fRam00000001468701d8 * fRam00000001468701c8) *
           fRam00000001468701b8;
  uVar12 = -(uint)(_DAT_146870180 < (float)((uint)local_8c0 & _DAT_14686fdf0));
  uVar13 = -(uint)(fRam0000000146870184 < (float)((uint)fVar20 & uRam000000014686fdf4));
  uVar14 = -(uint)(fRam0000000146870188 < (float)((uint)fVar22 & uRam000000014686fdf8));
  local_8c0 = (float)(((uint)((float)((uint)local_8c0 & _DAT_1468701a0 | _DAT_146870190) - local_8c0
                             ) ^ (uint)local_8c0) & uVar12 ^ (uint)local_8c0);
  fVar20 = (float)(((uint)((float)((uint)fVar20 & uRam00000001468701a4 | uRam0000000146870194) -
                          fVar20) ^ (uint)fVar20) & uVar13 ^ (uint)fVar20);
  fVar22 = (float)(((uint)((float)((uint)fVar22 & uRam00000001468701a8 | uRam0000000146870198) -
                          fVar22) ^ (uint)fVar22) & uVar14 ^ (uint)fVar22);
  fVar19 = local_8c0 * local_8c0;
  fVar21 = fVar20 * fVar20;
  fVar23 = fVar22 * fVar22;
  local_8c0 = (((((fVar19 * -2.3889859e-08 + 2.7525562e-06) * fVar19 + -0.00019840874) * fVar19 +
                0.008333331) * fVar19 + -0.16666667) * fVar19 + 1.0) * local_8c0;
  fVar20 = (((((fVar21 * -2.3889859e-08 + 2.7525562e-06) * fVar21 + -0.00019840874) * fVar21 +
             0.008333331) * fVar21 + -0.16666667) * fVar21 + 1.0) * fVar20;
  fVar22 = (((((fVar23 * -2.3889859e-08 + 2.7525562e-06) * fVar23 + -0.00019840874) * fVar23 +
             0.008333331) * fVar23 + -0.16666667) * fVar23 + 1.0) * fVar22;
  fVar19 = (((((fVar19 * -2.6051615e-07 + 2.4760495e-05) * fVar19 + -0.0013888378) * fVar19 +
             0.041666638) * fVar19 + -0.5) * fVar19 + 1.0) *
           (float)((_DAT_14686fdb0 ^ _DAT_14686fd60) & uVar12 ^ _DAT_14686fd60);
  fVar21 = (((((fVar21 * -2.6051615e-07 + 2.4760495e-05) * fVar21 + -0.0013888378) * fVar21 +
             0.041666638) * fVar21 + -0.5) * fVar21 + 1.0) *
           (float)((uRam000000014686fdb4 ^ uRam000000014686fd64) & uVar13 ^ uRam000000014686fd64);
  fVar23 = (((((fVar23 * -2.6051615e-07 + 2.4760495e-05) * fVar23 + -0.0013888378) * fVar23 +
             0.041666638) * fVar23 + -0.5) * fVar23 + 1.0) *
           (float)((uRam000000014686fdb8 ^ uRam000000014686fd68) & uVar14 ^ uRam000000014686fd68);
  local_8c8 = fVar21 * fVar19;
  local_8c4 = fVar19 * fVar20;
  local_8bc = 0;
  local_8ac = 0;
  local_89c = 0;
  local_88c = 0x3f800000;
  local_8b8 = fVar21 * fVar22 * local_8c0 - fVar23 * fVar20;
  local_8a0 = fVar23 * fVar19;
  local_8b4 = fVar20 * fVar22 * local_8c0 + fVar23 * fVar21;
  local_8b0 = -(fVar19 * fVar22);
  local_898 = local_8f8;
  local_8a4 = fVar21 * fVar22 - fVar20 * fVar23 * local_8c0;
  local_890 = local_8f0;
  local_8a8 = -(fVar21 * fVar23 * local_8c0 + fVar22 * fVar20);
  local_894 = local_8f4;
  local_918 = fVar29;
  fStack_914 = fVar28;
  fStack_910 = fVar27;
  if (cVar2 == '\0') {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)FUN_142dd0030(local_478);
    if (((plVar6 != (longlong *)0x0) && (lVar7 = FWeakObjectPtr::Get(local_468), lVar7 != 0)) &&
       (*(char *)(lVar7 + 0x47a) == '\0')) {
      plVar6 = plVar11;
    }
  }
  if (plVar6 == (longlong *)0x0) {
    plVar9 = *(longlong **)(param_1 + 0x50);
    if (plVar9 == (longlong *)0x0) goto LAB_140e323a3;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      uVar8 = FUN_142df3580(*param_2);
      iVar4 = FUN_142de8c20(*(undefined8 *)(param_1 + 0x58),uVar8);
      if (iVar4 == 2) {
        *(undefined1 *)(param_1 + 100) = 1;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x50) = plVar6;
    lVar7 = FWeakObjectPtr::Get(local_468);
    if (lVar7 != 0) {
      lVar7 = FWeakObjectPtr::Get(local_468);
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar7 + 0x180);
    }
    *(undefined1 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    plVar9 = plVar6;
  }
  plVar6 = plVar9;
  if (plVar9 != (longlong *)0x0) {
    if ((*(char *)(param_1 + 0x4c) != '\0') && (cVar10 == '\0')) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined1 *)(param_1 + 0x4d) = 1;
    }
    uVar8 = FUN_142e79d90();
    lVar7 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar8);
    if (lVar7 != 0) {
      local_708 = 0;
      local_700 = 0;
      FUN_140e10660(lVar7,local_808);
      local_948 = (undefined4)param_2[3];
      local_938 = &local_838;
      local_940 = local_808;
      local_950 = *param_2;
      local_958 = &local_918;
      FUN_140e1a280(param_1,plVar9,lVar7,&local_8f8);
      if (local_820 != '\0') {
        fVar27 = local_824;
        fVar28 = local_828;
        fVar29 = local_82c;
      }
      FMatrix::InverseFast(&local_8c8,&local_878);
      uStack_90c = 0x3f800000;
      fVar24 = local_848 * 1.0;
      fVar25 = fStack_844 * 1.0;
      fVar26 = fStack_840 * 1.0;
      fVar31 = fVar28 * local_868;
      fVar20 = fVar28 * fStack_864;
      fVar22 = fVar28 * fStack_860;
      fVar15 = fVar27 * local_858;
      fVar18 = fVar27 * fStack_854;
      fVar30 = fVar27 * fStack_850;
      fVar19 = fVar29 * local_878;
      fVar21 = fVar29 * fStack_874;
      fVar23 = fVar29 * fStack_870;
      local_918 = fVar29;
      fStack_914 = fVar28;
      fStack_910 = fVar27;
      FMatrix::InverseFast(&local_8c8,&local_878);
      uStack_90c = 0x3f800000;
      local_908 = (local_848 * 1.0 + local_830 * local_858 +
                  local_834 * local_868 + local_838 * local_878) -
                  (fVar24 + fVar15 + fVar31 + fVar19);
      fVar15 = (fStack_844 * 1.0 + local_830 * fStack_854 +
               local_834 * fStack_864 + local_838 * fStack_874) -
               (fVar25 + fVar18 + fVar20 + fVar21);
      fVar18 = (fStack_840 * 1.0 + local_830 * fStack_850 +
               local_834 * fStack_860 + local_838 * fStack_870) -
               (fVar26 + fVar30 + fVar22 + fVar23);
      fVar30 = local_81c;
      fVar31 = local_818;
      fStack_904 = fVar15;
      local_900 = fVar18;
      if (local_708 != 0) {
        FMemory::Free();
        fVar30 = local_81c;
        fVar31 = local_818;
      }
    }
  }
LAB_140e323a3:
  fVar20 = local_900;
  if ((*(longlong **)(param_1 + 0x40) != plVar6) || (fVar31 != *(float *)(param_1 + 0x74))) {
    *(ulonglong *)(param_1 + 0x68) = CONCAT44(fStack_904,local_908);
    *(float *)(param_1 + 0x70) = local_900;
    *(float *)(param_1 + 0x74) = fVar31;
    *(longlong **)(param_1 + 0x40) = plVar6;
  }
  fVar22 = DAT_1468b5d98;
  fVar31 = DAT_1468b5d94;
  if ((*(char *)(param_1 + 0x78) == '\0') && (*(char *)(param_1 + 0x79) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_928 = FUN_140d02310(*param_2);
  FUN_142dc1ad0(local_808);
  FUN_142dcd6e0(param_2[1],local_808,0);
  cVar2 = FWeakObjectPtr::IsValid(local_808);
  if (cVar2 != '\0') {
    plVar11 = (longlong *)(ulonglong)(local_488 == '\x02');
  }
  cVar10 = '\x01';
  cVar2 = *(char *)(param_1 + 0x4d);
  lVar7 = FUN_140cff230(*param_2);
  if (lVar7 != 0) {
    cVar10 = *(char *)(lVar7 + 0x2a);
  }
  if ((bVar1) &&
     (((((char)plVar11 != '\0' || (cVar2 != '\0')) || (*(char *)(param_1 + 100) != '\0')) &&
      ((local_928 == '\0' && (cVar10 != '\0')))))) {
    lVar7 = *param_2;
    fVar29 = SQRT((fVar28 - local_8f4) * (fVar28 - local_8f4) +
                  (fVar29 - local_8f8) * (fVar29 - local_8f8) +
                  (fVar27 - local_8f0) * (fVar27 - local_8f0));
    fVar27 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar7 + 0x694) * 0.017453292);
    fVar28 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar7 + 0x690) * 0.017453292);
    cVar2 = FUN_140d02390(lVar7);
    lVar7 = param_2[2];
    if (cVar2 == '\0') {
      fVar31 = *(float *)(lVar7 + 0x30);
    }
    else {
      fVar31 = *(float *)(lVar7 + 0x34);
    }
    fVar21 = 1.0 - fVar30 * *(float *)(lVar7 + 0x38);
    fVar19 = fVar29 * 0.043619387;
    fVar23 = (fVar15 - *(float *)(param_1 + 0x6c)) * fVar30 * fVar31;
    fVar15 = (fVar18 - *(float *)(param_1 + 0x70)) * fVar30 * fVar31;
    fVar22 = -fVar19;
    fVar31 = fVar22;
    if ((fVar22 <= fVar23) && (fVar31 = fVar23, fVar19 <= fVar23)) {
      fVar31 = fVar19;
    }
    if ((fVar22 <= fVar15) && (fVar22 = fVar15, fVar19 <= fVar15)) {
      fVar22 = fVar19;
    }
    fVar31 = fVar21 * fVar27 * fVar29 + fVar31;
    fVar22 = fVar21 * fVar28 * fVar29 + fVar22;
    if (fVar29 <= 0.0001) {
      lVar7 = *param_2;
      fVar27 = *(float *)(lVar7 + 0x694);
      fVar15 = *(float *)(lVar7 + 0x690);
    }
    else {
      fVar27 = fVar31 * (1.0 / fVar29);
      if (-1.0 <= fVar27) {
        if (1.0 <= fVar27) {
          fVar27 = 1.0;
        }
      }
      else {
        fVar27 = -1.0;
      }
      fVar27 = _guard_xfg_dispatch_icall_nop(fVar27);
      fVar18 = fVar22 * (1.0 / fVar29);
      fVar27 = fVar27 * 57.295776;
      fVar15 = -1.0;
      if ((-1.0 <= fVar18) && (fVar15 = fVar18, 1.0 <= fVar18)) {
        fVar15 = 1.0;
      }
      fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
      lVar7 = *param_2;
      fVar15 = fVar15 * 57.295776;
    }
    auVar17 = _DAT_14686fd30;
    fVar18 = (float)DAT_14686fd30;
    fVar28 = DAT_14686fd30._4_4_;
    auVar16._4_4_ = fVar27;
    auVar16._0_4_ = fVar15;
    auVar16._8_4_ = local_888;
    auVar16._12_4_ = 0;
    *(undefined4 *)(lVar7 + 0x694) = 0;
    auVar17 = divps(auVar16,auVar17);
    *(undefined4 *)(*param_2 + 0x690) = 0;
    fVar15 = fVar15 - (float)(int)auVar17._0_4_ * fVar18;
    fVar27 = fVar27 - (float)(int)auVar17._4_4_ * fVar28;
    fVar15 = (float)(((uint)(fVar15 + fVar18) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar15 + fVar18));
    fVar27 = (float)(((uint)(fVar27 + fVar28) ^ (uint)fVar27) & -(uint)(0.0 <= fVar27) ^
                    (uint)(fVar27 + fVar28));
    bVar1 = _DAT_14686fd20 < fVar15;
    (**(code **)(*(longlong *)*param_2 + 0xca0))
              ((longlong *)*param_2,
               ((uint)(fVar27 - fVar28) ^ (uint)fVar27) & -(uint)(fRam000000014686fd24 < fVar27) ^
               (uint)fVar27);
    (**(code **)(*(longlong *)*param_2 + 0xc98))
              ((longlong *)*param_2,
               ((uint)(fVar15 - fVar18) ^ (uint)fVar15) & -(uint)bVar1 ^ (uint)fVar15);
  }
  *(ulonglong *)(param_1 + 0x68) = CONCAT44(fStack_904,local_908);
  *(float *)(param_1 + 0x70) = fVar20;
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) - fVar31;
  *(float *)(param_1 + 0x70) = *(float *)(param_1 + 0x70) - fVar22;
  return;
}



// FUNCTION 140e32740 FUN_140e32740 body=953 status=ok
// SIG undefined FUN_140e32740(void)

void FUN_140e32740(longlong param_1,longlong param_2,char param_3,undefined4 param_4,char param_5)

{
  void *pvVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  
  iVar4 = FUN_14233f450();
  if (iVar4 != 3) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar9 = FUN_1413f2350();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
      != lVar9 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x118);
  if (lVar9 == 0) {
LAB_140e32801:
    lVar9 = 0;
  }
  else {
    lVar10 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_140e32801;
  }
  uVar5 = FUN_140c41e20(param_2);
  if ((param_5 != '\0') || (*(char *)(param_2 + 0x249) == '\0')) {
    if (*(char *)(param_2 + 0x249) != '\0') {
      cVar3 = FUN_140e250e0(param_1,*(undefined8 *)(param_2 + 0x10),param_4);
      if (cVar3 != '\0') goto LAB_140e32967;
      if (*(char *)(param_2 + 0x249) != '\0') {
        FUN_140e36f00(param_1,*(undefined8 *)(param_2 + 0x10),param_4,1);
      }
    }
    cVar3 = FUN_140c47970(param_2,param_4,lVar9);
    if (cVar3 != '\0') {
      uVar6 = FUN_140c42b40(param_2,param_4,lVar9);
      uVar7 = FUN_140c41dc0(param_2,param_4,lVar9);
      uVar8 = FUN_140c42ae0(param_2,param_4,lVar9);
      uVar11 = FUN_140c454b0(param_2,param_4,lVar9);
      FUN_140c453f0(param_2,&local_68,param_4,lVar9);
      FUN_140c460a0(param_2,&local_58,param_4,lVar9);
      FUN_140c46160(param_2,&local_48,param_4,lVar9);
      FUN_140e16a30(param_1,lVar9,uVar5,uVar6,uVar7,uVar8,uVar11,&local_68,&local_58,&local_48);
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free();
      }
    }
  }
LAB_140e32967:
  if (param_3 != '\0') {
    uVar6 = FUN_140c42c70(param_2);
    uVar7 = URTC_MobileInputComponent::StopLerpCameraHeight(param_2);
    uVar8 = FUN_140c42c60(param_2);
    local_40 = *(int *)(param_2 + 0x1f8);
    lVar10 = (longlong)local_40;
    pvVar1 = *(void **)(param_2 + 0x1f0);
    uVar11 = *(undefined8 *)(param_2 + 0x1e8);
    local_48 = (void *)0x0;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,local_40,0);
      _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar10 << 3);
    }
    local_50 = *(int *)(param_2 + 0x208);
    lVar10 = (longlong)local_50;
    pvVar1 = *(void **)(param_2 + 0x200);
    local_58 = (void *)0x0;
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_58,local_50,0);
      _guard_xfg_dispatch_icall_nop(local_58,pvVar1,lVar10 << 3);
    }
    local_60 = *(int *)(param_2 + 0x218);
    lVar10 = (longlong)local_60;
    pvVar1 = *(void **)(param_2 + 0x210);
    local_68 = (void *)0x0;
    if (local_60 == 0) {
      local_5c = 0;
    }
    else {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_68,local_60,0);
      _guard_xfg_dispatch_icall_nop(local_68,pvVar1,lVar10 << 3);
    }
    FUN_140e16a30(param_1,lVar9,uVar5,uVar6,uVar7,uVar8,uVar11,&local_48,&local_58,&local_68);
    if (local_68 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140e32b00 FUN_140e32b00 body=82 status=ok
// SIG undefined FUN_140e32b00(void)

longlong FUN_140e32b00(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_2 + 0x218))(param_2,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1f8))(param_2,*(int *)(param_1 + 0x18) + param_3);
  }
  return param_3;
}



// FUNCTION 140e32b60 FUN_140e32b60 body=40 status=ok
// SIG undefined FUN_140e32b60(void)

longlong FUN_140e32b60(longlong param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(*param_2 + 0x1f8))(param_2,*(int *)(param_1 + 0x18) + param_3);
  return param_3;
}



// FUNCTION 140e32b90 FUN_140e32b90 body=163 status=ok
// SIG undefined FUN_140e32b90(void)

void FUN_140e32b90(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((char)param_1[0x25] == '\x03') {
    (**(code **)(*param_1 + 0x448))(param_1,param_2);
  }
  if (param_2 != 0) {
    lVar3 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      param_1[0x58e] = param_2;
      cVar2 = (**(code **)(*param_1 + 0x778))(param_1);
      if ((cVar2 != '\0') && (param_1[0x58f] == 0)) {
        lVar3 = FUN_1413fffa0(param_1);
        param_1[0x58f] = lVar3;
      }
    }
  }
  return;
}



// FUNCTION 140e32c40 FUN_140e32c40 body=113 status=ok
// SIG undefined FUN_140e32c40(void)

void FUN_140e32c40(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FWeakObjectPtr::Get(param_2);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = UCircularThrobber::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      if (*(longlong *)(param_1 + 0x908) != 0) {
        FUN_142df2ca0(lVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x908) + 0x180));
        return;
      }
      FUN_142df2ca0(lVar3,0);
    }
  }
  return;
}



// FUNCTION 140e32cc0 FUN_140e32cc0 body=973 status=ok
// SIG undefined FUN_140e32cc0(void)

void FUN_140e32cc0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [8];
  float local_30;
  undefined4 uStack_2c;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar6 = FUN_140e81550();
  if (lVar6 == 0) {
    return;
  }
  lVar7 = FUN_1412e9ee0();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) {
    return;
  }
  lVar7 = FUN_140e50d60(lVar6,*(undefined8 *)(param_1 + 0x290));
  plVar11 = *(longlong **)(lVar6 + 1000);
  plVar3 = plVar11 + *(int *)(lVar6 + 0x3f0);
  for (; plVar11 != plVar3; plVar11 = plVar11 + 1) {
    if (*plVar11 == lVar7) {
      FUN_140e1c0b0(param_1);
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x2c0) == lVar7) {
    return;
  }
  FUN_140e1c0b0(param_1);
  *(longlong *)(param_1 + 0x2c0) = lVar7;
  FUN_140e1b380(param_1);
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    return;
  }
  lVar6 = FUN_140e247a0(param_1);
  if (lVar6 == 0) {
    return;
  }
  if (*(longlong *)(lVar6 + 0x28) != 0) {
    lVar8 = FUN_1414ca140();
    lVar7 = *(longlong *)(lVar6 + 0x28);
    for (lVar9 = lVar7; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
      if (lVar9 == lVar8) goto LAB_140e32de2;
    }
  }
  lVar7 = 0;
LAB_140e32de2:
  lVar7 = FUN_140e6f140(param_1,lVar7);
  if (lVar7 != 0) {
    lVar9 = FUN_1414ca140();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140e32e37;
  }
  lVar7 = 0;
LAB_140e32e37:
  lVar9 = param_1 + 0x2c8;
  FWeakObjectPtr::operator=(lVar9,lVar7);
  cVar5 = FUN_14044af00(lVar9,0);
  if (cVar5 != '\0') {
    local_50 = *(float *)(lVar6 + 0x44) + *(float *)(param_1 + 0x270);
    local_58 = CONCAT44(*(float *)(lVar6 + 0x40) + *(float *)(param_1 + 0x26c),
                        *(float *)(lVar6 + 0x3c) + *(float *)(param_1 + 0x268));
    local_40 = local_50;
    uVar10 = FWeakObjectPtr::Get(lVar9);
    FUN_14223cb00(uVar10,&local_58,0,0,0);
    local_40 = *(float *)(param_1 + 0x27c) + *(float *)(lVar6 + 0x50);
    local_48 = CONCAT44(*(float *)(param_1 + 0x278) + *(float *)(lVar6 + 0x4c),
                        *(float *)(lVar6 + 0x48) + *(float *)(param_1 + 0x274));
    local_30 = local_40;
    uVar10 = FWeakObjectPtr::Get(lVar9);
    FUN_14223ccb0(uVar10,&local_48,0,0,0);
    FUN_140e8b4b0(param_1,local_38,*(undefined8 *)(param_1 + 600),0);
    plVar3 = (longlong *)CONCAT44(uStack_2c,local_30);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar3 + 1;
      lVar7 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    lVar7 = FWeakObjectPtr::Get(lVar9);
    if (*(longlong *)(lVar7 + 0x458) != 0) {
      lVar7 = FWeakObjectPtr::Get(lVar9);
      FUN_142c7bae0(*(undefined8 *)(lVar7 + 0x458),local_28,*(undefined8 *)(param_1 + 0x260));
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_20 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      if (*(longlong *)(lVar6 + 0x30) != 0) {
        lVar8 = USafeZone::GetPrivateStaticClass();
        lVar6 = *(longlong *)(lVar6 + 0x30);
        for (lVar7 = lVar6; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
          if (lVar7 == lVar8) goto LAB_140e33005;
        }
      }
      lVar6 = 0;
LAB_140e33005:
      lVar7 = FWeakObjectPtr::Get(lVar9);
      FUN_142c7bae0(*(undefined8 *)(lVar7 + 0x458),local_18,lVar6);
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_10 + 1;
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
    }
    uVar10 = FWeakObjectPtr::Get(lVar9);
    FUN_1411e02b0(uVar10);
  }
  return;
}



// FUNCTION 140e33090 FUN_140e33090 body=484 status=ok
// SIG undefined FUN_140e33090(void)

void FUN_140e33090(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res10;
  
  if (param_2 == 0) {
    return;
  }
  local_res10 = param_2;
  lVar5 = FUN_140e10600(param_2);
  if (lVar5 == 0) {
    return;
  }
  iVar8 = (int)param_1[0xa4] + -1;
  if (-1 < iVar8) {
    plVar1 = param_1 + 0xa3;
    lVar5 = (longlong)iVar8 * 8;
    lVar9 = (longlong)(int)param_1[0xa4] << 3;
    lVar10 = lVar5;
    do {
      if ((*(longlong *)(lVar5 + *plVar1) == 0) || (lVar6 = FUN_140e10600(), lVar6 == 0)) {
        iVar4 = (int)param_1[0xa4];
        iVar7 = (iVar4 - iVar8) + -1;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar10 + *plVar1),(void *)(lVar9 + *plVar1),(longlong)iVar7 << 3);
          iVar4 = (int)param_1[0xa4];
        }
        *(int *)(param_1 + 0xa4) = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      lVar9 = lVar9 + -8;
      lVar10 = lVar10 + -8;
      lVar5 = lVar5 + -8;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
  AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0xa3,&local_res10);
  lVar5 = FWeakObjectPtr::Get(param_2 + 0x5d8);
  if (lVar5 != 0) {
    lVar10 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140e331c4;
  }
  lVar5 = 0;
LAB_140e331c4:
  iVar8 = (int)param_1[0xac] + -1;
  if (-1 < iVar8) {
    lVar9 = (longlong)iVar8 << 4;
    plVar1 = param_1 + 0xab;
    lVar6 = (longlong)(int)param_1[0xac] << 4;
    lVar10 = lVar9;
    do {
      lVar2 = *(longlong *)(*plVar1 + 8 + lVar9);
      if (lVar2 == lVar5) {
        (**(code **)(*param_1 + 0x718))(param_1,lVar2,*(undefined8 *)(*plVar1 + lVar9));
        iVar4 = (int)param_1[0xac];
        iVar7 = (iVar4 - iVar8) + -1;
        if (iVar7 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar10 + *plVar1),(void *)(lVar6 + *plVar1),(longlong)iVar7 << 4);
          iVar4 = (int)param_1[0xac];
        }
        *(int *)(param_1 + 0xac) = iVar4 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(plVar1);
      }
      lVar6 = lVar6 + -0x10;
      lVar10 = lVar10 + -0x10;
      lVar9 = lVar9 + -0x10;
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
  }
  return;
}



// FUNCTION 140e33280 FUN_140e33280 body=1601 status=ok
// SIG undefined FUN_140e33280(void)

void FUN_140e33280(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  byte bVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  uint *puVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  longlong local_res10;
  char local_res18;
  int local_res20;
  int local_f8;
  uint uStack_f4;
  uint uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  uint uStack_bc;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  
  if ((param_2 != 0) && (local_res10 = param_2, lVar11 = FUN_140e10600(param_2), lVar11 != 0)) {
    iVar19 = *(int *)(param_1 + 0x530) + -1;
    if (-1 < iVar19) {
      plVar13 = (longlong *)(param_1 + 0x528);
      lVar11 = (longlong)iVar19 * 8;
      lVar23 = (longlong)*(int *)(param_1 + 0x530) << 3;
      lVar24 = lVar11;
      do {
        if ((*(longlong *)(lVar11 + *plVar13) == 0) || (lVar12 = FUN_140e10600(), lVar12 == 0)) {
          iVar10 = *(int *)(param_1 + 0x530);
          iVar15 = (iVar10 - iVar19) + -1;
          if (iVar15 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar24 + *plVar13),(void *)(lVar23 + *plVar13),(longlong)iVar15 << 3
                      );
            iVar10 = *(int *)(param_1 + 0x530);
          }
          *(int *)(param_1 + 0x530) = iVar10 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar13);
        }
        lVar23 = lVar23 + -8;
        lVar24 = lVar24 + -8;
        lVar11 = lVar11 + -8;
        iVar19 = iVar19 + -1;
      } while (-1 < iVar19);
    }
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x528,&local_res10);
    plVar13 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x5d8);
    if (plVar13 != (longlong *)0x0) {
      lVar11 = FUN_14145f370();
      if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
          lVar11 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        uVar14 = FUN_142e035e0();
        lVar11 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar14);
        if (lVar11 != 0) {
          plVar13 = (longlong *)FUN_142dcee70();
          uVar4 = *(uint *)(plVar13 + 5);
          local_f8 = 0;
          uStack_f4 = 1;
          puVar1 = (uint *)(plVar13 + 2);
          uStack_e4 = 0;
          iStack_e0 = 0;
          if (uVar4 != 0) {
            puVar22 = (uint *)plVar13[4];
            if ((uint *)plVar13[4] == (uint *)0x0) {
              puVar22 = puVar1;
            }
            uVar21 = *puVar22;
            iStack_e0 = 0;
            local_f8 = 0;
            while (uVar21 == 0) {
              lVar24 = (longlong)local_f8;
              iStack_e0 = iStack_e0 + 0x20;
              iVar19 = local_f8 + 1;
              bVar5 = (int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_f8;
              local_f8 = iVar19;
              if (bVar5) goto LAB_140e334b2;
              uVar21 = puVar22[lVar24 + 1];
            }
            uStack_f4 = uVar21 - 1 & uVar21 ^ uVar21;
            iVar19 = 0x1f;
            if (uStack_f4 != 0) {
              for (; uStack_f4 >> iVar19 == 0; iVar19 = iVar19 + -1) {
              }
            }
            if (uStack_f4 == 0) {
              iVar19 = 0x20;
            }
            else {
              iVar19 = 0x1f - iVar19;
            }
            uStack_e4 = (iStack_e0 - iVar19) + 0x1f;
            if ((int)uVar4 < (int)uStack_e4) {
LAB_140e334b2:
              uStack_e4 = uVar4;
            }
          }
          uStack_bc = *(uint *)(plVar13 + 5);
          uStack_70 = CONCAT44(uStack_f4,local_f8);
          uStack_60 = 0xffffffff;
          uStack_5c = uStack_e4;
          local_58 = CONCAT44(uStack_dc,iStack_e0);
          uVar21 = uStack_bc & 0xffffffe0;
          local_78 = plVar13;
          local_68 = puVar1;
          if (uStack_bc != uVar4) {
            puVar22 = (uint *)plVar13[4];
            if ((uint *)plVar13[4] == (uint *)0x0) {
              puVar22 = puVar1;
            }
            uVar16 = puVar22[(int)uStack_bc >> 5] & -1 << ((byte)uStack_bc & 0x1f);
            iVar19 = (int)uStack_bc >> 5;
            while (uVar16 == 0) {
              uVar21 = uVar21 + 0x20;
              if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar19)
              goto LAB_140e33584;
              uVar16 = puVar22[(longlong)iVar19 + 1];
              iVar19 = iVar19 + 1;
            }
            uVar16 = uVar16 - 1 & uVar16 ^ uVar16;
            iVar19 = 0x1f;
            if (uVar16 != 0) {
              for (; uVar16 >> iVar19 == 0; iVar19 = iVar19 + -1) {
              }
            }
            if (uVar16 == 0) {
              iVar19 = 0x20;
            }
            else {
              iVar19 = 0x1f - iVar19;
            }
            uStack_bc = (uVar21 - iVar19) + 0x1f;
            if ((int)uVar4 < (int)uStack_bc) {
LAB_140e33584:
              uStack_bc = uVar4;
            }
          }
          while( true ) {
            if ((uStack_5c == uStack_bc) && (local_68 == puVar1)) {
              bVar5 = true;
            }
            else {
              bVar5 = false;
            }
            if ((bVar5) && (local_78 == plVar13)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) break;
            puVar2 = (undefined8 *)(*local_78 + (longlong)(int)uStack_5c * 0x18);
            plVar6 = (longlong *)*puVar2;
            lVar24 = puVar2[1];
            cVar7 = FUN_142dd32c0(lVar11,plVar6);
            local_res10 = CONCAT71(local_res10._1_7_,cVar7);
            cVar8 = FUN_142dd3360(lVar11,plVar6);
            plVar3 = (longlong *)(param_1 + 0x548);
            plVar20 = (longlong *)*plVar3;
            plVar17 = plVar20 + (longlong)*(int *)(param_1 + 0x550) * 5;
            for (; local_res18 = cVar8, plVar20 != plVar17; plVar20 = plVar20 + 5) {
              if ((plVar20[1] == param_2) && (*plVar20 == lVar24)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              if (bVar5) {
                if (plVar20 != (longlong *)0x0) {
                  FUN_140fde540(param_2,plVar20 + 2);
                  lVar23 = (longlong)*(int *)(param_1 + 0x550);
                  if (*(int *)(param_1 + 0x550) != 0) {
                    iVar10 = 0;
                    iVar19 = 0;
                    local_res20 = 0;
                    lVar12 = 0;
                    if ((((longlong *)*plVar3)[1] == param_2) && (*(longlong *)*plVar3 == lVar24)) {
                      bVar18 = 0;
                    }
                    else {
                      bVar18 = 1;
                    }
                    do {
                      lVar12 = lVar12 + 1;
                      iVar15 = iVar19 + 1;
                      if (lVar12 < lVar23) {
                        plVar17 = (longlong *)(*plVar3 + lVar12 * 0x28);
                        do {
                          if ((plVar17[1] == param_2) && (*plVar17 == lVar24)) {
                            bVar9 = 0;
                          }
                          else {
                            bVar9 = 1;
                          }
                          if (bVar18 != bVar9) break;
                          iVar15 = iVar15 + 1;
                          lVar12 = lVar12 + 1;
                          plVar17 = plVar17 + 5;
                        } while (lVar12 < lVar23);
                      }
                      if (bVar18 != 0) {
                        if (iVar10 != iVar19) {
                          _guard_xfg_dispatch_icall_nop
                                    ((void *)(*(longlong *)(param_1 + 0x548) +
                                             (longlong)iVar10 * 0x28),
                                     (void *)(*(longlong *)(param_1 + 0x548) +
                                             (longlong)iVar19 * 0x28),
                                     (longlong)(iVar15 - iVar19) * 0x28);
                          iVar10 = local_res20;
                        }
                        local_res20 = iVar10 + (iVar15 - iVar19);
                        iVar10 = local_res20;
                      }
                      bVar18 = bVar18 ^ 1;
                      iVar19 = iVar15;
                    } while (lVar12 < lVar23);
                    *(int *)(param_1 + 0x550) = iVar10;
                    cVar8 = local_res18;
                    cVar7 = (char)local_res10;
                  }
                }
                break;
              }
            }
            lVar23 = plVar6[0x1f];
            if (lVar23 == 0) {
              (**(code **)(*plVar6 + 0x368))(plVar6);
              lVar23 = plVar6[0x1f];
              if (lVar23 != 0) goto LAB_140e33773;
            }
            else {
LAB_140e33773:
              lVar23 = *(longlong *)(lVar23 + 0xd8);
              if (lVar23 != 0) {
                lVar12 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                  bVar5 = false;
                }
                else {
                  bVar5 = true;
                }
                if (bVar5) {
                  FGuid::NewGuid(&local_88);
                  if (((cVar8 != '\0') && (lVar12 = *(longlong *)(lVar23 + 0x58), lVar12 != 0)) ||
                     ((cVar7 != '\0' && (lVar12 = *(longlong *)(lVar23 + 0x50), lVar12 != 0)))) {
                    if (lVar24 == 0) {
                      fVar25 = 0.0;
                    }
                    else {
                      fVar25 = *(float *)(lVar24 + 0x704);
                    }
                    FUN_140fd4780(param_2,lVar12,lVar24,&local_88,(int)(longlong)fVar25);
                  }
                  lVar23 = (longlong)*(int *)(param_1 + 0x550);
                  plVar20 = (longlong *)*plVar3;
                  plVar17 = plVar20 + lVar23 * 5;
                  for (; plVar20 != plVar17; plVar20 = plVar20 + 5) {
                    if (*plVar20 == lVar24) goto LAB_140e33865;
                  }
                  iVar19 = *(int *)(param_1 + 0x550) + 1;
                  *(int *)(param_1 + 0x550) = iVar19;
                  if (*(int *)(param_1 + 0x554) < iVar19) {
                    TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar3);
                  }
                  lVar12 = *plVar3;
                  *(longlong *)(lVar12 + lVar23 * 0x28) = lVar24;
                  *(longlong *)(lVar12 + 8 + lVar23 * 0x28) = param_2;
                  puVar2 = (undefined8 *)(lVar12 + 0x10 + lVar23 * 0x28);
                  *puVar2 = local_88;
                  puVar2[1] = uStack_80;
                  *(char *)(lVar12 + 0x20 + lVar23 * 0x28) = cVar8;
                }
              }
            }
LAB_140e33865:
            uStack_60 = uStack_60 & ~uStack_70._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_70);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e338d0 FUN_140e338d0 body=1107 status=ok
// SIG undefined FUN_140e338d0(void)

void FUN_140e338d0(longlong param_1,longlong *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  byte bVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  float fVar19;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  
  plVar15 = *(longlong **)(param_1 + 0x528);
  plVar13 = plVar15 + *(int *)(param_1 + 0x530);
  local_68 = plVar13;
  if (plVar15 != plVar13) {
    do {
      lVar2 = *plVar15;
      if (lVar2 != 0) {
        local_80 = plVar15;
        plVar9 = (longlong *)FWeakObjectPtr::Get(lVar2 + 0x5d8);
        if (plVar9 == (longlong *)0x0) {
LAB_140e33986:
          plVar9 = (longlong *)0x0;
        }
        else {
          lVar10 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
          if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
              != lVar10 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_140e33986;
        }
        if (((param_2 == (longlong *)0x0) || (plVar9 == param_2)) && (plVar9 != (longlong *)0x0)) {
          uVar11 = FUN_142e035e0();
          lVar10 = (**(code **)(*plVar9 + 0x628))(plVar9,uVar11);
          local_70 = lVar10;
          if (lVar10 != 0) {
            local_a0 = (longlong *)0x0;
            local_98 = 0;
            uVar11 = FUN_142dcee70(param_1);
            TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
            ::MultiFind<FDefaultAllocator>(uVar11,param_3,&local_a0,0);
            local_88 = local_a0;
            local_78 = local_a0 + (int)local_98;
            if (local_a0 != local_78) {
              plVar9 = (longlong *)(param_1 + 0x548);
              plVar18 = local_a0;
              local_90 = plVar9;
              do {
                lVar3 = *plVar18;
                local_88 = plVar18;
                cVar5 = FUN_142dd32c0(lVar10,param_3);
                cVar6 = FUN_142dd3360(lVar10,param_3);
                plVar15 = (longlong *)*plVar9;
                plVar13 = plVar15 + (longlong)(int)plVar9[1] * 5;
                for (; plVar15 != plVar13; plVar15 = plVar15 + 5) {
                  if ((plVar15[1] == lVar2) && (*plVar15 == lVar3)) {
                    bVar4 = true;
                  }
                  else {
                    bVar4 = false;
                  }
                  if (bVar4) {
                    if (plVar15 != (longlong *)0x0) {
                      FUN_140fde540(lVar2,plVar15 + 2);
                      lVar10 = (longlong)(int)plVar9[1];
                      if ((int)plVar9[1] != 0) {
                        iVar17 = 0;
                        iVar8 = 0;
                        lVar12 = 0;
                        if ((((longlong *)*plVar9)[1] == lVar2) && (*(longlong *)*plVar9 == lVar3))
                        {
                          bVar14 = 0;
                        }
                        else {
                          bVar14 = 1;
                        }
                        do {
                          lVar12 = lVar12 + 1;
                          iVar16 = iVar8 + 1;
                          if (lVar12 < lVar10) {
                            plVar13 = (longlong *)(*plVar9 + lVar12 * 0x28);
                            do {
                              if ((plVar13[1] == lVar2) && (*plVar13 == lVar3)) {
                                bVar7 = 0;
                              }
                              else {
                                bVar7 = 1;
                              }
                              if (bVar14 != bVar7) break;
                              iVar16 = iVar16 + 1;
                              lVar12 = lVar12 + 1;
                              plVar13 = plVar13 + 5;
                            } while (lVar12 < lVar10);
                          }
                          if (bVar14 != 0) {
                            if (iVar17 != iVar8) {
                              _guard_xfg_dispatch_icall_nop
                                        ((void *)(*(longlong *)(param_1 + 0x548) +
                                                 (longlong)iVar17 * 0x28),
                                         (void *)(*(longlong *)(param_1 + 0x548) +
                                                 (longlong)iVar8 * 0x28),
                                         (longlong)(iVar16 - iVar8) * 0x28);
                            }
                            iVar17 = iVar17 + (iVar16 - iVar8);
                          }
                          bVar14 = bVar14 ^ 1;
                          plVar9 = local_90;
                          iVar8 = iVar16;
                        } while (lVar12 < lVar10);
                        *(int *)(local_90 + 1) = iVar17;
                        plVar18 = local_88;
                      }
                    }
                    break;
                  }
                }
                lVar10 = param_3[0x1f];
                if (lVar10 == 0) {
                  (**(code **)(*param_3 + 0x368))(param_3);
                  lVar10 = param_3[0x1f];
                  if (lVar10 != 0) goto LAB_140e33ba9;
                }
                else {
LAB_140e33ba9:
                  lVar10 = *(longlong *)(lVar10 + 0xd8);
                  if (lVar10 != 0) {
                    lVar12 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
                    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                         (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                      bVar4 = false;
                    }
                    else {
                      bVar4 = true;
                    }
                    if (bVar4) {
                      FGuid::NewGuid(&local_58);
                      if (((cVar6 != '\0') && (lVar12 = *(longlong *)(lVar10 + 0x58), lVar12 != 0))
                         || ((cVar5 != '\0' && (lVar12 = *(longlong *)(lVar10 + 0x50), lVar12 != 0))
                            )) {
                        if (lVar3 == 0) {
                          fVar19 = 0.0;
                        }
                        else {
                          fVar19 = *(float *)(lVar3 + 0x704);
                        }
                        FUN_140fd4780(lVar2,lVar12,lVar3,&local_58,(int)(longlong)fVar19);
                      }
                      lVar10 = (longlong)(int)plVar9[1];
                      plVar15 = (longlong *)*plVar9;
                      plVar13 = plVar15 + lVar10 * 5;
                      for (; plVar15 != plVar13; plVar15 = plVar15 + 5) {
                        if (*plVar15 == lVar3) goto LAB_140e33ca5;
                      }
                      iVar8 = (int)plVar9[1] + 1;
                      *(int *)(plVar9 + 1) = iVar8;
                      if (*(int *)((longlong)plVar9 + 0xc) < iVar8) {
                        TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar9);
                      }
                      lVar12 = *plVar9;
                      *(longlong *)(lVar12 + lVar10 * 0x28) = lVar3;
                      *(longlong *)(lVar12 + 8 + lVar10 * 0x28) = lVar2;
                      puVar1 = (undefined8 *)(lVar12 + 0x10 + lVar10 * 0x28);
                      *puVar1 = local_58;
                      puVar1[1] = uStack_50;
                      *(char *)(lVar12 + 0x20 + lVar10 * 0x28) = cVar6;
                    }
                  }
                }
LAB_140e33ca5:
                plVar18 = plVar18 + 1;
                lVar10 = local_70;
                plVar15 = local_80;
                plVar13 = local_68;
                local_88 = plVar18;
              } while (plVar18 != local_78);
            }
            if (local_a0 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
        }
      }
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar13);
  }
  return;
}



// FUNCTION 140e33d30 FUN_140e33d30 body=150 status=ok
// SIG undefined FUN_140e33d30(void)

void FUN_140e33d30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142dd8b90();
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x758) != 0)) {
    lVar1 = FUN_142dfdfe0();
    lVar3 = *(longlong *)(param_2 + 0x758);
    lVar2 = lVar3;
    if (lVar3 != 0) {
      while (lVar2 != lVar1) {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        if (lVar2 == 0) {
          return;
        }
      }
      if (lVar3 != 0) {
        if (lVar3 != 0) {
          lVar1 = FUN_142dfdfe0();
          lVar3 = *(longlong *)(param_2 + 0x758);
          for (lVar2 = lVar3; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (lVar2 == lVar1) goto LAB_140e33db1;
          }
        }
        lVar3 = 0;
LAB_140e33db1:
        FUN_140e338d0(param_1,0,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140e33dd0 FUN_140e33dd0 body=54 status=ok
// SIG undefined FUN_140e33dd0(void)

void FUN_140e33dd0(longlong param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = *(undefined8 *)(param_2 + 2);
  FUN_143088a40(param_1 + -0x458,&local_18,1,0);
  return;
}



// FUNCTION 140e33e10 FUN_140e33e10 body=331 status=ok
// SIG undefined FUN_140e33e10(void)

void FUN_140e33e10(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong local_res8;
  longlong *local_res18 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  if (param_1[0x79] != 0) {
    FUN_1407665e0(param_1[0x79] + 0x290,param_1);
    FUN_1407665e0(param_1[0x79] + 0xf18,param_1);
    FUN_1409a6a90(param_1[0x7a],param_1[0x79]);
    if ((param_1[0x7a] != 0) && (local_res8 = param_1[0x79], local_res8 != 0)) {
      local_res18[0] = &local_res8;
      FUN_140e108a0(param_1[0x7a] + 0x2c40,local_res18);
    }
    FUN_1412ed440(param_1,0,param_2);
    if (param_1[0x79] != 0) {
      param_1[0x79] = 0;
      FUN_140e29f10(param_1);
      (**(code **)(*param_1 + 0x260))(param_1);
    }
    if ((param_2 != '\0') && ((param_2 == '\x01' || (param_2 == '\x02')))) {
      local_18 = param_1[0x74];
      local_28 = (undefined4)param_1[0x72];
      uStack_24 = *(undefined4 *)((longlong)param_1 + 0x394);
      uStack_20 = (undefined4)param_1[0x73];
      uStack_1c = *(undefined4 *)((longlong)param_1 + 0x39c);
      FUN_142d6fa00(&local_28,0);
      if (param_2 == '\x01') {
        local_28 = (undefined4)param_1[0x72];
        uStack_24 = *(undefined4 *)((longlong)param_1 + 0x394);
        uStack_20 = (undefined4)param_1[0x73];
        uStack_1c = *(undefined4 *)((longlong)param_1 + 0x39c);
        local_18 = param_1[0x74];
        uVar1 = FUN_1412ed310(param_1,0);
        FUN_142d6c7b0(&local_28,uVar1,0x3f800000);
      }
    }
  }
  return;
}



// FUNCTION 140e33f60 FUN_140e33f60 body=46 status=ok
// SIG undefined FUN_140e33f60(void)

void FUN_140e33f60(longlong param_1,longlong param_2)

{
  longlong local_res10;
  longlong *local_res18 [2];
  
  if (param_2 != 0) {
    local_res18[0] = &local_res10;
    local_res10 = param_2;
    FUN_140e108a0(param_1 + 0x2c40,local_res18);
  }
  return;
}



// FUNCTION 140e33f90 FUN_140e33f90 body=303 status=ok
// SIG undefined FUN_140e33f90(void)

void FUN_140e33f90(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  lVar3 = (longlong)*(int *)(param_1 + 0x540);
  if (*(int *)(param_1 + 0x540) != 0) {
    uVar4 = 0;
    uVar10 = uVar4;
    if ((**(longlong **)(param_1 + 0x538) == param_2) &&
       ((*(longlong **)(param_1 + 0x538))[1] == param_3)) {
      bVar6 = 0;
      uVar8 = uVar4;
    }
    else {
      bVar6 = 1;
      uVar8 = uVar4;
    }
    do {
      iVar7 = (int)uVar8;
      uVar4 = uVar4 + 1;
      uVar8 = (ulonglong)(iVar7 + 1);
      if ((longlong)uVar4 < lVar3) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x538) + uVar4 * 0x18);
        do {
          if ((*plVar1 == param_2) && (plVar1[1] == param_3)) {
            bVar2 = 0;
          }
          else {
            bVar2 = 1;
          }
          if (bVar6 != bVar2) break;
          uVar8 = (ulonglong)((int)uVar8 + 1);
          uVar4 = uVar4 + 1;
          plVar1 = plVar1 + 3;
        } while ((longlong)uVar4 < lVar3);
      }
      iVar5 = (int)uVar8 - iVar7;
      if (bVar6 != 0) {
        iVar9 = (int)uVar10;
        if (iVar9 != iVar7) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x538) + (longlong)iVar9 * 0x18),
                     (void *)(*(longlong *)(param_1 + 0x538) + (longlong)iVar7 * 0x18),
                     (longlong)iVar5 * 0x18);
        }
        uVar10 = (ulonglong)(uint)(iVar9 + iVar5);
      }
      bVar6 = bVar6 ^ 1;
    } while ((longlong)uVar4 < lVar3);
    *(int *)(param_1 + 0x540) = (int)uVar10;
  }
  return;
}



// FUNCTION 140e340c0 FUN_140e340c0 body=1442 status=ok
// SIG undefined FUN_140e340c0(void)

void FUN_140e340c0(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 local_158;
  void *local_150;
  int local_148;
  int local_144;
  void *local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 local_128;
  void *local_120;
  ulonglong local_118;
  longlong local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  undefined **local_a8;
  char *local_a0;
  undefined1 local_98;
  undefined4 local_90;
  undefined **local_88;
  char *local_80;
  undefined1 local_78;
  undefined4 local_70;
  undefined1 local_68 [8];
  longlong local_60 [2];
  longlong local_50 [2];
  undefined **local_40;
  char *local_38;
  undefined1 local_30;
  undefined4 local_28;
  
  FUN_140e232d0(&local_120);
  local_150 = (void *)0x0;
  local_144 = 0;
  local_140 = (void *)0x0;
  local_138 = 0;
  local_158 = 0;
  iVar7 = (int)local_118;
  local_148 = iVar7;
  if (iVar7 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_150,local_118 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_150,local_120,(longlong)iVar7 * 2);
  }
  if (((param_2 == 0) && (*(longlong *)(param_1 + 0xb0) != 0)) &&
     (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x38), cVar3 != '\0')) {
    local_f8 = *(undefined8 *)(param_1 + 0xb0);
    local_f0 = *(longlong **)(param_1 + 0xb8);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
      UNLOCK();
    }
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x38);
    FUN_140bbc690(uVar4,&local_108,&local_f8);
    plVar6 = local_f0;
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_f0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (local_108 != 0) {
      local_c8 = local_108;
      plStack_c0 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
        UNLOCK();
      }
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x38);
      FUN_140d8d820(*(undefined8 *)(lVar5 + 0x478),&local_c8,param_3);
      plVar6 = plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_c0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      local_b8 = local_108;
      plStack_b0 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
        UNLOCK();
      }
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x38);
      FUN_140bc0780(uVar4,&local_b8,param_3);
      plVar6 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      local_158 = 1;
      iVar7 = (int)local_118;
      local_138 = CONCAT44(local_138._4_4_,iVar7);
      if ((iVar7 == 0) && (local_138._4_4_ == 0)) {
        local_138 = local_118 & 0xffffffff;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                  (&local_140,local_118 & 0xffffffff,local_138._4_4_);
        _guard_xfg_dispatch_icall_nop(local_140,local_120,(longlong)iVar7 * 2);
      }
      local_148 = 0;
      if (local_144 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_150,0);
      }
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
      FUN_140ddbb10(uVar4,"update_display_name_header",param_3);
    }
    local_e8 = *(undefined8 *)(param_1 + 0xb0);
    local_e0 = *(longlong **)(param_1 + 0xb8);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    lVar5 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_d8,&local_e8);
    plVar6 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (((local_d8 != 0) && (*(int *)(local_d8 + 0x90) != 0)) &&
       ((*(longlong **)(local_d8 + 0x88) != (longlong *)0x0 &&
        (((cVar3 = (**(code **)(**(longlong **)(local_d8 + 0x88) + 0x18))(), cVar3 != '\0' &&
          (*(int *)(local_d8 + 0x90) != 0)) &&
         (plVar6 = *(longlong **)(local_d8 + 0x88), plVar6 != (longlong *)0x0)))))) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      if (*(longlong *)(local_d8 + 0x88) != 0) {
        uVar4 = FMemory::Realloc(*(longlong *)(local_d8 + 0x88),0,0);
        *(undefined8 *)(local_d8 + 0x88) = uVar4;
      }
      *(undefined4 *)(local_d8 + 0x90) = 0;
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_d0 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)local_d0 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_100 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_100)(plStack_100);
        LOCK();
        piVar2 = (int *)((longlong)plStack_100 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_100 + 8))(plStack_100,1);
        }
      }
    }
  }
  local_68[0] = local_158;
  FString::FString(local_60,&local_150);
  FString::FString(local_50,&local_140);
  plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x198))(plVar6);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x50))(plVar6,"Update_Shift_Display_Name_Notify_Response",1);
    (**(code **)(*plVar6 + 0x28))(plVar6);
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_130,"name_change_response",local_68);
    if (local_130 != (longlong *)0x0) {
      local_a0 = "success";
      local_98 = 1;
      local_a8 = &PTR_FUN_1445760c0;
      local_90 = 0;
      (**(code **)(*local_130 + 0x18))(local_130,local_128,&local_a8);
      local_a8 = &PTR_FUN_143f47bd8;
      local_80 = "successMessage";
      local_78 = 1;
      local_88 = &PTR_FUN_144576140;
      local_70 = 0x18;
      (**(code **)(*local_130 + 0x18))(local_130,local_128,&local_88);
      local_88 = &PTR_FUN_143f47bd8;
      local_38 = "errorMessage";
      local_30 = 1;
      local_40 = &PTR_FUN_144576140;
      local_28 = 8;
      (**(code **)(*local_130 + 0x18))(local_130,local_128,&local_40);
    }
    cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_130);
    (**(code **)(*plVar6 + 0x48))(plVar6,local_68);
    (**(code **)(*plVar6 + 0x58))(plVar6);
  }
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  if (local_60[0] != 0) {
    FMemory::Free();
  }
  if (local_140 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_150 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_120 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e34670 FUN_140e34670 body=1106 status=ok
// SIG undefined FUN_140e34670(void)

void FUN_140e34670(longlong param_1,int param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 local_b8 [8];
  void *local_b0;
  int local_a8;
  int local_a4;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  ulonglong local_88;
  longlong local_78;
  longlong *plStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  
  FUN_140e232d0(&local_90);
  local_b0 = (void *)0x0;
  local_a4 = 0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_b8[0] = 0;
  iVar7 = (int)local_88;
  local_a8 = iVar7;
  if (iVar7 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_b0,local_88 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_b0,local_90,(longlong)iVar7 * 2);
  }
  if (((param_2 == 0) && (*(longlong *)(param_1 + 0x38) != 0)) &&
     (cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x48), cVar3 != '\0')) {
    local_68 = *(undefined8 *)(param_1 + 0x38);
    local_60 = *(longlong **)(param_1 + 0x40);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    uVar4 = FWeakObjectPtr::Get(param_1 + 0x48);
    FUN_140bbc690(uVar4,&local_78,&local_68);
    plVar6 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (local_78 != 0) {
      local_38 = local_78;
      plStack_30 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
      }
      lVar5 = FWeakObjectPtr::Get(param_1 + 0x48);
      FUN_140d8d820(*(undefined8 *)(lVar5 + 0x478),&local_38,param_3);
      plVar6 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_30 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      local_28 = local_78;
      plStack_20 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
        UNLOCK();
      }
      uVar4 = FWeakObjectPtr::Get(param_1 + 0x48);
      FUN_140bc0780(uVar4,&local_28,param_3);
      plVar6 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_20 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar7 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
      local_b8[0] = 1;
      iVar7 = (int)local_88;
      local_98 = CONCAT44(local_98._4_4_,iVar7);
      if ((iVar7 == 0) && (local_98._4_4_ == 0)) {
        local_98 = local_88 & 0xffffffff;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a0,local_88 & 0xffffffff);
        _guard_xfg_dispatch_icall_nop(local_a0,local_90,(longlong)iVar7 * 2);
      }
      local_a8 = 0;
      if (local_a4 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_b0,0);
      }
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
      FUN_140ddbb10(uVar4,"update_display_name_header",param_3);
    }
    local_58 = *(undefined8 *)(param_1 + 0x38);
    local_50 = *(longlong **)(param_1 + 0x40);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    lVar5 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_48,&local_58);
    plVar6 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
    if (((local_48 != 0) && (*(int *)(local_48 + 0x90) != 0)) &&
       ((*(longlong **)(local_48 + 0x88) != (longlong *)0x0 &&
        (((cVar3 = (**(code **)(**(longlong **)(local_48 + 0x88) + 0x18))(), cVar3 != '\0' &&
          (*(int *)(local_48 + 0x90) != 0)) &&
         (plVar6 = *(longlong **)(local_48 + 0x88), plVar6 != (longlong *)0x0)))))) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      if (*(longlong *)(local_48 + 0x88) != 0) {
        uVar4 = FMemory::Realloc(*(longlong *)(local_48 + 0x88),0,0);
        *(undefined8 *)(local_48 + 0x88) = uVar4;
      }
      *(undefined4 *)(local_48 + 0x90) = 0;
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_70 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plStack_70 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plStack_70 + 8))(plStack_70,1);
        }
      }
    }
  }
  plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x198))(plVar6);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x50))(plVar6,"Signed_Update_Display_Name_Notify_Response",1);
    FUN_140e0f240(plVar6,local_b8);
    (**(code **)(*plVar6 + 0x58))(plVar6);
  }
  if (local_a0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_b0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_90 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e34ad0 FUN_140e34ad0 body=86 status=ok
// SIG undefined FUN_140e34ad0(void)

void FUN_140e34ad0(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  
  if ((char)param_1[0x25] == '\x03') {
    *(undefined1 *)(param_1 + 0x556) = 1;
    *(undefined1 *)((longlong)param_1 + 0x2ab1) = param_2;
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x4a8))();
  if (lVar1 != 0) {
    FUN_1414009a0(param_1,param_2);
  }
  return;
}



// FUNCTION 140e34b30 FUN_140e34b30 body=82 status=ok
// SIG undefined FUN_140e34b30(void)

void FUN_140e34b30(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_142235230();
  if (iVar2 != 3) {
    param_1[0x557] = param_2;
    return;
  }
  cVar1 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar1 != '\0') {
    FUN_141400a60(param_1,param_2);
  }
  return;
}



// FUNCTION 140e34b90 FUN_140e34b90 body=86 status=ok
// SIG undefined FUN_140e34b90(void)

void FUN_140e34b90(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  
  if ((char)param_1[0x25] == '\x03') {
    *(undefined1 *)(param_1 + 0x556) = 0;
    *(undefined1 *)((longlong)param_1 + 0x2ab1) = param_2;
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x4a8))();
  if (lVar1 != 0) {
    FUN_141400c70(param_1,param_2);
  }
  return;
}



// FUNCTION 140e34bf0 FUN_140e34bf0 body=492 status=ok
// SIG undefined FUN_140e34bf0(void)

void FUN_140e34bf0(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_58 [4];
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar2 < 0) {
    if (iVar1 != 0) {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 8) + 0x20);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 7;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      iVar2 = *(int *)(param_1 + 0x14);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (iVar2 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 8,0);
    }
  }
  else {
    if (iVar1 != 0) {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 8) + 0x20);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 7;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  local_54 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  FUN_14099b6f0(param_1 + 0x18,local_58);
  FUN_14099a9b0(&local_20);
  FUN_14099aa40(&local_30);
  TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>(&local_40);
  FUN_14099a950(&local_50);
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_140e1d9f0(param_1 + 0x60,0);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x60);
    for (iVar2 = *(int *)(param_1 + 0x68); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (plVar3[0xc] != 0) {
        FMemory::Free();
      }
      if (plVar3[10] != 0) {
        FMemory::Free();
      }
      if (plVar3[8] != 0) {
        FMemory::Free();
      }
      if (plVar3[6] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0x10;
    }
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x7c);
  iVar1 = *(int *)(param_1 + 0x78);
  if (iVar2 < 0) {
    if (iVar1 != 0) {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x70) + 8);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 3;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      iVar2 = *(int *)(param_1 + 0x7c);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (iVar2 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x70,0);
    }
  }
  else {
    if (iVar1 != 0) {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x70) + 8);
      do {
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 3;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 140e34de0 FUN_140e34de0 body=102 status=ok
// SIG undefined FUN_140e34de0(void)

void FUN_140e34de0(int param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((0 < param_1) && (param_2 != 0)) {
    lVar4 = *(longlong *)(param_2 + 0x170);
    lVar5 = (longlong)*(int *)(param_2 + 0x178) * 0x20 + lVar4;
    if (lVar4 != lVar5) {
      uVar3 = ~(1 << ((byte)param_1 & 0x1f));
      do {
        *(uint *)(lVar4 + 0x18) = *(uint *)(lVar4 + 0x18) & uVar3;
        lVar1 = *(longlong *)(lVar4 + 8);
        lVar2 = (longlong)*(int *)(lVar4 + 0x10) * 0x10 + lVar1;
        for (; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
          *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) & uVar3;
        }
        lVar4 = lVar4 + 0x20;
      } while (lVar4 != lVar5);
    }
  }
  return;
}



// FUNCTION 140e34e50 FUN_140e34e50 body=56 status=ok
// SIG undefined FUN_140e34e50(void)

void FUN_140e34e50(longlong param_1)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(param_1 + 0x3a0);
  local_28 = *(undefined4 *)(param_1 + 0x390);
  uStack_24 = *(undefined4 *)(param_1 + 0x394);
  uStack_20 = *(undefined4 *)(param_1 + 0x398);
  uStack_1c = *(undefined4 *)(param_1 + 0x39c);
  FUN_142d6c7b0(&local_28,0x3f800000,0x3f800000);
  return;
}



// FUNCTION 140e34e90 ResizeAllocation body=161 status=ok
// SIG undefined ResizeAllocation(void)

void TInlineAllocator<8,FDefaultAllocator>::ForElementType<FBlendedCurve>::ResizeAllocation
               (void *param_1,int param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x100);
  if (param_3 < 9) {
    if (pvVar1 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar1,(longlong)param_2 << 5);
    pvVar1 = *(void **)((longlong)param_1 + 0x100);
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
        *(void **)((longlong)param_1 + 0x100) = pvVar1;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar1,param_1,(longlong)param_2 << 5);
      return;
    }
    param_4 = (int)param_3 * param_4;
  }
  uVar2 = FMemory::Realloc(pvVar1,param_4,0);
  *(undefined8 *)((longlong)param_1 + 0x100) = uVar2;
  return;
}



// FUNCTION 140e34f40 ResizeGrow body=137 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FBlendedCurve,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
               (longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (uVar1 < 9) {
    iVar2 = 8;
  }
  else {
    lVar4 = 4;
    if ((*(int *)(param_1 + 0x10c) != 0) || (4 < uVar1)) {
      lVar4 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar4 << 5,0);
    iVar2 = (int)(uVar3 >> 5);
    if (iVar2 < (int)uVar1) {
      iVar2 = 0x7fffffff;
    }
  }
  *(int *)(param_1 + 0x10c) = iVar2;
  TInlineAllocator<8,FDefaultAllocator>::ForElementType<FBlendedCurve>::ResizeAllocation
            (param_1,param_2,iVar2,0x20);
  return;
}



// FUNCTION 140e34fd0 ResizeTo body=110 status=ok
// SIG undefined ResizeTo(void)

void TArray<FBlendedCurve,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
               (longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    if (param_2 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)(int)param_2 << 5,0);
      iVar1 = (int)(uVar2 >> 5);
      if (iVar1 < (int)param_2) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = iVar1;
    TInlineAllocator<8,FDefaultAllocator>::ForElementType<FBlendedCurve>::ResizeAllocation
              (param_1,*(undefined4 *)(param_1 + 0x108),iVar1,0x20);
  }
  return;
}



// FUNCTION 140e35040 FUN_140e35040 body=906 status=ok
// SIG undefined FUN_140e35040(void)

undefined8 FUN_140e35040(longlong param_1,byte param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 **ppuVar6;
  longlong lVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined2 *puVar10;
  undefined2 *local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined8 local_70;
  undefined2 *local_68 [2];
  undefined2 *local_58 [3];
  
  uVar9 = 0;
  bVar8 = (param_2 ^ 1) + 1;
  ppuVar6 = &local_78;
  if (param_2 != 0) {
    ppuVar6 = local_68;
  }
  lVar3 = 0x588;
  if (param_2 == 0) {
    lVar3 = 0x5b0;
  }
  FSoftObjectPath::ToString(lVar3 + param_1,ppuVar6);
  puVar10 = *ppuVar6;
  *ppuVar6 = (undefined2 *)0x0;
  iVar2 = *(int *)(ppuVar6 + 1);
  ppuVar6[1] = (undefined2 *)0x0;
  if (((bVar8 & 2) != 0) && (bVar8 = bVar8 & 0xfd, local_78 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if (((bVar8 & 1) != 0) && (bVar8 = bVar8 & 0xfe, local_68[0] != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  lVar3 = *(longlong *)(param_3 + 0x28);
  local_88 = (undefined2 *)0x0;
  lVar7 = (longlong)*(int *)(param_3 + 0x30) * 0x78 + lVar3;
  local_80 = 0;
  for (; lVar3 != lVar7; lVar3 = lVar3 + 0x78) {
    FSoftObjectPath::ToString(lVar3 + 0x38,&local_78);
    puVar5 = &DAT_143f3eda8;
    if (iVar2 != 0) {
      puVar5 = puVar10;
    }
    puVar4 = &DAT_143f3eda8;
    if ((int)local_70 != 0) {
      puVar4 = local_78;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (iVar1 == 0) {
      FSoftObjectPath::ToString(lVar3 + 0x60,&local_78);
      if (local_88 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      local_88 = local_78;
      local_80 = local_70;
      break;
    }
  }
  local_78 = (undefined2 *)0x0;
  local_70 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  puVar5 = local_78;
  FGenericPlatformString::Memcpy(local_78,L"IronCub",0x10);
  puVar4 = &DAT_143f3eda8;
  if ((int)local_70 != 0) {
    puVar4 = puVar5;
  }
  iVar1 = FUN_141592950(&local_88,puVar4,1,0,0xffffffff);
  if (puVar5 != (undefined2 *)0x0) {
    FMemory::Free(puVar5);
  }
  if (iVar1 != -1) {
    bVar8 = (param_2 ^ 1) * '\x04' + 4 | bVar8;
    ppuVar6 = local_68;
    if (param_2 != 0) {
      ppuVar6 = &local_78;
    }
    lVar3 = 0x5b0;
    if (param_2 == 0) {
      lVar3 = 0x588;
    }
    FSoftObjectPath::ToString(lVar3 + param_1,ppuVar6);
    if (local_58 != ppuVar6) {
      if (puVar10 != (undefined2 *)0x0) {
        FMemory::Free(puVar10);
      }
      puVar10 = *ppuVar6;
      *ppuVar6 = (undefined2 *)0x0;
      iVar2 = *(int *)(ppuVar6 + 1);
      ppuVar6[1] = (undefined2 *)0x0;
    }
    if (((bVar8 & 8) != 0) && (bVar8 = bVar8 & 0xf7, local_68[0] != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    if (((bVar8 & 4) != 0) && (local_78 != (undefined2 *)0x0)) {
      FMemory::Free();
    }
    lVar3 = *(longlong *)(param_3 + 0x28);
    lVar7 = (longlong)*(int *)(param_3 + 0x30) * 0x78 + lVar3;
    for (; lVar3 != lVar7; lVar3 = lVar3 + 0x78) {
      FSoftObjectPath::ToString(lVar3 + 0x38,&local_78);
      puVar5 = &DAT_143f3eda8;
      if (iVar2 != 0) {
        puVar5 = puVar10;
      }
      puVar4 = &DAT_143f3eda8;
      if ((int)local_70 != 0) {
        puVar4 = local_78;
      }
      iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
      if (local_78 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (iVar1 == 0) {
        FSoftObjectPath::ToString(lVar3 + 0x60,&local_78);
        if (local_88 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        local_88 = local_78;
        local_80 = local_70;
        break;
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x5f0);
  lVar7 = (longlong)*(int *)(param_1 + 0x5f8) * 0x40 + lVar3;
  do {
    if (lVar3 == lVar7) {
LAB_140e3539b:
      if (local_88 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (puVar10 != (undefined2 *)0x0) {
        FMemory::Free(puVar10);
      }
      return uVar9;
    }
    FSoftObjectPath::ToString(lVar3 + 0x10,&local_78);
    puVar5 = &DAT_143f3eda8;
    if ((int)local_80 != 0) {
      puVar5 = local_88;
    }
    puVar4 = &DAT_143f3eda8;
    if ((int)local_70 != 0) {
      puVar4 = local_78;
    }
    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
    if (local_78 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (iVar2 == 0) {
      uVar9 = *(undefined8 *)(lVar3 + 0x28);
      goto LAB_140e3539b;
    }
    lVar3 = lVar3 + 0x40;
  } while( true );
}



// FUNCTION 140e353d0 FUN_140e353d0 body=641 status=ok
// SIG undefined FUN_140e353d0(void)

longlong FUN_140e353d0(longlong param_1,undefined8 param_2,undefined8 *param_3,char param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x578;
  if (param_4 == '\0') {
    lVar3 = param_1 + 0x5a0;
  }
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 8)) && (*(longlong *)(lVar3 + 0x10) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 8) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar3);
      if (lVar2 != 0) goto LAB_140e35481;
    }
LAB_140e354b7:
    lVar2 = 0;
  }
  else {
LAB_140e35481:
    lVar3 = UXSkinAnimationProfile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e354b7;
  }
  lVar3 = FUN_1409a72d0(param_2,*param_3,lVar2);
  if (lVar3 == 0) {
    return 0;
  }
  lVar2 = FUN_1413e04a0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  if (*(char *)(lVar3 + 0x110) != '\a') {
    return lVar3;
  }
  lVar3 = param_1 + 0x5a0;
  if (param_4 == '\0') {
    lVar3 = param_1 + 0x578;
  }
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 8)) && (*(longlong *)(lVar3 + 0x10) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 8) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar3);
      if (lVar2 != 0) goto LAB_140e355a5;
    }
  }
  else {
LAB_140e355a5:
    lVar3 = UXSkinAnimationProfile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e355de;
  }
  lVar2 = 0;
LAB_140e355de:
  lVar3 = FUN_1409a72d0(param_2,*param_3,lVar2);
  if (lVar3 != 0) {
    lVar2 = FUN_1413e04a0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
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



// FUNCTION 140e35660 FUN_140e35660 body=66 status=ok
// SIG undefined FUN_140e35660(void)

void FUN_140e35660(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_142d52a00(param_1 + 0x3b0);
  if (cVar2 != '\0') {
    uVar1 = FUN_142d52a20(param_1 + 0x3b0);
    uVar1 = FArchive::operator<<(uVar1);
    FUN_142d6f560(uVar1,0,1);
    return;
  }
  return;
}



// FUNCTION 140e356c0 FUN_140e356c0 body=1228 status=ok
// SIG undefined FUN_140e356c0(void)

void FUN_140e356c0(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  short sVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  float fVar13;
  LARGE_INTEGER local_res10;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b0;
  longlong *local_a8;
  int local_a0;
  double local_98;
  undefined8 local_90;
  char local_87;
  byte local_86;
  
  if ((*(longlong *)(param_2 + 0x178) == 0) ||
     (plVar7 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x34), plVar7 == (longlong *)0x0)) {
    return;
  }
  lVar8 = FUN_1429d7ab0();
  if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  plVar9 = (longlong *)0x0;
  if ((bVar3) &&
     (plVar9 = (longlong *)(**(code **)(*plVar7 + 0x670))(plVar7), plVar9 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar9 + 0x768))(plVar9);
  }
  else {
    cVar4 = '\0';
  }
  FUN_142bd2270(&local_a8,param_1,param_2,0xffffffff);
LAB_140e357f0:
  if ((int)local_a8[1] <= local_a0) goto LAB_140e3583f;
  if ((*(byte *)((longlong)local_a8 + 0x156) & 1) != 0) goto LAB_140e3583f;
  if ((0.0 <= local_98) &&
     (QueryPerformanceCounter(&local_res10),
     local_98 <= (double)local_res10.QuadPart * DAT_1468b02f8 + 16777216.0)) goto LAB_140e3583f;
  bVar3 = true;
  do {
    if (!bVar3) {
      *(int *)(local_a8 + 0x27) = local_a0;
      return;
    }
    plVar7 = (longlong *)
             (**(code **)(**(longlong **)(param_2 + 0x178) + 0x2a8))
                       (*(longlong **)(param_2 + 0x178),
                        ((longlong)(*(int *)(*local_a8 + 4 + (longlong)local_a0 * 0xc) * 2) >> 1) +
                        local_a8[3]);
    if (plVar7 != (longlong *)0x0) {
      if ((cVar4 == '\0') || (lVar8 = (**(code **)(*plVar7 + 0x148))(plVar7), lVar8 == 0)) {
LAB_140e359db:
        if (plVar9 == (longlong *)0x0) {
          cVar5 = '\0';
        }
        else {
          local_b0 = 0;
          local_c0 = 0;
          local_c8 = 0;
          cVar5 = (**(code **)(*plVar9 + 0x738))(plVar9,plVar7,&local_c8,0);
        }
        if ((local_86 & 2) != 0) goto LAB_140e35aaa;
        cVar1 = *(char *)(param_1 + 0x5a);
        if (((cVar1 == '\0') || (cVar1 == '\x01')) ||
           ((cVar1 == '\x02' || ((cVar1 != '\x03' || (cVar5 != '\x01')))))) {
          if ((local_86 & 4) != 0) goto LAB_140e35aa6;
          fVar13 = 0.0;
        }
        else {
          fVar13 = 1.0;
        }
        sVar6 = local_90._4_2_;
        if (local_87 == '\0') {
          local_90 = CONCAT44(local_90._4_4_,(float)local_90 + fVar13);
        }
        else if (local_87 == '\x01') {
          if ((sVar6 == 0) || (fVar13 < (float)local_90)) {
LAB_140e35a8a:
            local_90 = CONCAT44(local_90._4_4_,fVar13);
          }
        }
        else if (local_87 == '\x02') {
          if (sVar6 == 0) goto LAB_140e35a8a;
          if ((float)local_90 < fVar13) {
            local_90 = CONCAT44(local_90._4_4_,fVar13);
          }
        }
LAB_140e35a9f:
        local_90._0_6_ = CONCAT24(sVar6 + 1,(float)local_90);
      }
      else {
        lVar10 = APostProcessVolume::GetPrivateStaticClass();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
            != lVar10 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          plVar12 = (longlong *)plVar7[0x98];
        }
        else {
          lVar10 = FUN_1430e5840();
          if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
              != lVar10 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            plVar12 = (longlong *)plVar7[0x9a];
          }
          else {
            uVar11 = FUN_142a07000();
            plVar12 = (longlong *)(**(code **)(*plVar7 + 0x628))(plVar7,uVar11);
          }
        }
        if (((plVar12 == (longlong *)0x0) ||
            (cVar5 = (**(code **)(*plVar12 + 0x460))(plVar12), cVar5 == '\0')) ||
           (*(float *)(lVar8 + 0x790) - *(float *)(plVar12 + 0x6e) < 0.2)) goto LAB_140e359db;
        if ((local_86 & 2) != 0) goto LAB_140e35aaa;
        if ((local_86 & 4) == 0) {
          sVar6 = local_90._4_2_;
          if (local_87 != '\0') {
            if (local_87 == '\x01') {
              if ((sVar6 == 0) || (0.0 < (float)local_90)) {
LAB_140e359cf:
                local_90 = (ulonglong)local_90._4_4_ << 0x20;
              }
            }
            else if (local_87 == '\x02') {
              if (sVar6 == 0) goto LAB_140e359cf;
              if ((float)local_90 < 0.0) {
                local_90 = (ulonglong)local_90._4_4_ << 0x20;
              }
            }
          }
          goto LAB_140e35a9f;
        }
      }
LAB_140e35aa6:
      local_90 = CONCAT26(local_90._6_2_ + 1,(undefined6)local_90);
    }
LAB_140e35aaa:
    FUN_142bf3280(&local_a8);
    if ((*(byte *)((longlong)local_a8 + 0x156) & 1) != 0) goto LAB_140e357f0;
    local_90 = 0;
    local_86 = local_86 & 0xfd | 1;
    local_a0 = local_a0 + 1;
    if (local_a0 < (int)local_a8[1]) break;
LAB_140e3583f:
    bVar3 = false;
  } while( true );
  do {
    uVar2 = *(uint *)(*local_a8 + 4 + (longlong)local_a0 * 0xc);
    if (((uVar2 >> 0x1e & 1) == 0) && (-1 < (int)uVar2)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  } while ((!bVar3) && (local_a0 = local_a0 + 1, local_a0 < (int)local_a8[1]));
  goto LAB_140e357f0;
}



// FUNCTION 140e35b90 thunk_FUN_140e1d340 body=5 status=ok
// SIG undefined thunk_FUN_140e1d340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_140e1d340(longlong param_1)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_338 [32];
  float *pfStack_318;
  longlong lStack_310;
  undefined *puStack_308;
  undefined1 *puStack_300;
  undefined8 uStack_2f8;
  longlong *plStack_2e8;
  undefined1 uStack_2e0;
  longlong lStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  undefined8 uStack_29c;
  undefined4 uStack_294;
  float fStack_288;
  byte abStack_278 [12];
  undefined4 uStack_26c;
  undefined1 auStack_20c [36];
  undefined1 auStack_1e8 [256];
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  
  uStack_d8 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  uStack_2e0 = *(undefined1 *)(param_1 + 0x90);
  *(undefined1 *)(param_1 + 0x90) = 1;
  FRotator::Vector(param_1 + 0xac,&fStack_2d0);
  fVar2 = *(float *)(param_1 + 0x9c);
  lVar8 = 0;
  plVar14 = *(longlong **)(param_1 + 0x140);
  fVar24 = 1.1754944e-38;
  fStack_2b0 = fStack_2d0 * fVar2;
  fStack_2ac = fStack_2cc * fVar2;
  plVar10 = plVar14 + (longlong)*(int *)(param_1 + 0x148) * 2;
  lStack_2d8 = 0;
  fStack_2a8 = fStack_2c8 * fVar2;
  plStack_2e8 = plVar10;
  if (plVar14 != plVar10) {
    do {
      plVar9 = (longlong *)0x0;
      if ((*plVar14 == 0) || (plVar10 = plStack_2e8, (longlong *)plVar14[1] == (longlong *)0x0)) {
        *(undefined1 *)(param_1 + 0x150) = 1;
      }
      else {
        lVar5 = (**(code **)(*(longlong *)plVar14[1] + 0x98))();
        plVar10 = plStack_2e8;
        if ((((lVar5 != 0) && ((*(uint *)(lVar5 + 0x840) >> 3 & 1) == 0)) &&
            (lVar5 = *(longlong *)(lVar5 + 0x118), lVar5 != 0)) &&
           ((*(byte *)(lVar5 + 0x90) & 0x20) == 0)) {
          if (*plVar14 != 0) {
            plVar9 = (longlong *)plVar14[1];
          }
          lVar6 = (**(code **)(*plVar9 + 0xa0))();
          plVar10 = plStack_2e8;
          lVar8 = lStack_2d8;
          if (((lVar6 != 0) && (*(char *)(lVar6 + 0x26a) != '\0')) &&
             ((*(char *)(lVar6 + 0x269) != '\0' &&
              (cVar4 = FUN_1407c3030(lVar6 + 0x3a0), plVar10 = plStack_2e8, lVar8 = lStack_2d8,
              cVar4 == '\0')))) {
            lVar3 = *(longlong *)(lVar5 + 0x168);
            if (lVar3 == 0) {
              uStack_294 = DAT_1468b5d98;
              puVar7 = &uStack_29c;
              uStack_29c = _DAT_1468b5d90;
            }
            else {
              puVar7 = (undefined8 *)&uStack_2c0;
              uStack_2c0 = *(undefined4 *)(lVar3 + 0x220);
              uStack_2b8 = *(undefined4 *)(lVar3 + 0x228);
              uStack_2bc = *(undefined4 *)(lVar3 + 0x224);
            }
            fStack_288 = *(float *)(puVar7 + 1);
            fVar20 = (float)((ulonglong)*puVar7 >> 0x20) - *(float *)(param_1 + 0xa4);
            fVar22 = (float)*puVar7 - *(float *)(param_1 + 0xa0);
            fVar23 = fStack_288 - *(float *)(param_1 + 0xa8);
            fVar21 = fVar20 * fVar20 + fVar22 * fVar22;
            fVar17 = fVar23 * fVar23 + fVar21;
            fVar16 = fVar17 / (fVar2 * fVar2);
            if (fVar16 <= 0.0) {
              fVar16 = 0.0;
            }
            if (0.0 < 1.0 - fVar16) {
              auVar19 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
              fVar18 = auVar19._0_4_;
              fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
              fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
              fVar17 = fStack_2d0 * fVar22 * fVar18 + fStack_2cc * fVar20 * fVar18 +
                       fStack_2c8 * fVar23 * fVar18;
              if (10000.0 <= fVar21) {
                bVar15 = fVar17 < 0.707;
              }
              else {
                bVar15 = fVar17 < 0.0;
              }
              if (!bVar15) {
                piVar11 = *(int **)(param_1 + 0x130);
                if (*(int **)(param_1 + 0x130) == (int *)0x0) {
                  piVar11 = (int *)(param_1 + 0x120);
                }
                piVar1 = piVar11 + *(int *)(param_1 + 0x138);
                for (; piVar11 != piVar1; piVar11 = piVar11 + 1) {
                  if (*piVar11 == *(int *)(lVar5 + 0xc)) goto LAB_140e1d833;
                }
                puStack_e8 = (undefined1 *)0x0;
                uStack_e0 = 0;
                FUN_140e10660(lVar6,auStack_1e8);
                puStack_300 = auStack_1e8;
                uStack_2f8 = 0;
                lStack_310 = *(longlong *)(param_1 + 0xb8);
                puStack_308 = (undefined *)
                              CONCAT44(puStack_308._4_4_,*(undefined4 *)(param_1 + 0x98));
                pfStack_318 = &fStack_2b0;
                fVar17 = (float)FUN_140e1a280(param_1,lVar5,lVar6,param_1 + 0xa0);
                if (0.0 < fVar17) {
                  puVar12 = auStack_1e8;
                  if (puStack_e8 != (undefined1 *)0x0) {
                    puVar12 = puStack_e8;
                  }
                  puVar13 = puVar12 + (longlong)(int)uStack_e0 * 0x20;
                  if (puVar12 != puVar13) {
                    do {
                      _guard_xfg_dispatch_icall_nop(abStack_278,0,0x90);
                      puStack_308 = &DAT_146aefe68;
                      pfStack_318 = (float *)CONCAT44(pfStack_318._4_4_,3);
                      uStack_26c = 0x3f800000;
                      lStack_310 = param_1 + 200;
                      UWorld::LineTraceSingleByChannel
                                (*(undefined8 *)(param_1 + 0xc0),abStack_278,param_1 + 0xa0,puVar12)
                      ;
                      if (((abStack_278[0] & 1) == 0) ||
                         ((lVar8 = FWeakObjectPtr::Get(auStack_20c), lVar8 != 0 && (lVar8 == lVar5))
                         )) {
                        fVar17 = fVar17 + (1.0 - fVar16);
                        if (fVar17 <= fVar24) {
                          lVar5 = lStack_2d8;
                          fVar17 = fVar24;
                        }
                        fVar24 = fVar17;
                        plVar10 = plStack_2e8;
                        lVar8 = lVar5;
                        lStack_2d8 = lVar5;
                        if (puStack_e8 != (undefined1 *)0x0) {
                          FMemory::Free();
                          plVar10 = plStack_2e8;
                          lStack_2d8 = lVar5;
                        }
                        goto LAB_140e1d833;
                      }
                      puVar12 = puVar12 + 0x20;
                    } while (puVar12 != puVar13);
                  }
                  plVar10 = plStack_2e8;
                  lVar8 = lStack_2d8;
                  if (puStack_e8 != (undefined1 *)0x0) {
                    FMemory::Free();
                    plVar10 = plStack_2e8;
                    lVar8 = lStack_2d8;
                  }
                }
                else {
                  plVar10 = plStack_2e8;
                  lVar8 = lStack_2d8;
                  if (puStack_e8 != (undefined1 *)0x0) {
                    FMemory::Free();
                    plVar10 = plStack_2e8;
                    lVar8 = lStack_2d8;
                  }
                }
              }
            }
          }
        }
      }
LAB_140e1d833:
      plVar14 = plVar14 + 2;
    } while (plVar14 != plVar10);
  }
  FWeakObjectPtr::operator=(param_1 + 0x88,lVar8);
  *(undefined1 *)(param_1 + 0x90) = uStack_2e0;
  return;
}



// FUNCTION 140e35ba0 FUN_140e35ba0 body=112 status=ok
// SIG undefined FUN_140e35ba0(void)

void FUN_140e35ba0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_18;
  longlong *plStack_10;
  
  FUN_142714d90();
  local_18 = 0;
  plStack_10 = (longlong *)0x0;
  (**(code **)(*param_1 + 0x758))(param_1,&local_18);
  plVar5 = plStack_10;
  if (plStack_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_10)(plStack_10);
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
  return;
}



// FUNCTION 140e35c30 FUN_140e35c30 body=220 status=ok
// SIG undefined FUN_140e35c30(void)

void FUN_140e35c30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  local_28 = *(longlong *)(param_1 + 0xb0);
  if (local_28 != 0) {
    local_20 = *(longlong **)(param_1 + 0xb8);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    lVar5 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar5 + 0x18),&local_18,&local_28);
    plVar3 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (local_18 != 0) {
      FUN_142b6f220();
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_10 + 1;
      lVar5 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)local_10 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e35d10 FUN_140e35d10 body=32 status=ok
// SIG undefined FUN_140e35d10(void)

void FUN_140e35d10(undefined8 param_1,undefined8 param_2)

{
  FUN_140e1df50(param_1,param_2,0,0,1);
  return;
}



// FUNCTION 140e35d30 FUN_140e35d30 body=349 status=ok
// SIG undefined FUN_140e35d30(void)

void FUN_140e35d30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar5 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (param_2 != 0)) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar5 = *(longlong *)(DAT_146b33f38 + 200);
      if (lVar5 != 0) {
        fVar7 = (float)FUN_142c98860(lVar5 + 0x100,*(undefined8 *)(param_1 + 0x118));
        fVar8 = (float)FUN_142c98860(param_2 + 0x790,*(undefined8 *)(param_1 + 0x118));
        if (fVar8 == 0.0) {
          fVar8 = 1.0;
        }
        plVar6 = (longlong *)FUN_140cffa10(lVar1);
        if (plVar6 != (longlong *)0x0) {
          iVar3 = (**(code **)(*plVar6 + 0x408))(plVar6);
          iVar4 = FUN_140a32ac0(lVar5,iVar3);
          iVar3 = FUN_140a32ac0(lVar5,iVar3 + 1);
          FUN_140e421f0(plVar6,(int)((float)(iVar3 - iVar4) * fVar7 * fVar8),3,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e35ea0 FUN_140e35ea0 body=102 status=ok
// SIG undefined FUN_140e35ea0(void)

void FUN_140e35ea0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((char)param_1[0x25] == '\x03') && (lVar2 = (**(code **)(*param_1 + 0x680))(), lVar2 != 0)) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(undefined1 *)(lVar2 + 0x5e0) = 0;
    }
  }
  return;
}



// FUNCTION 140e35f10 FUN_140e35f10 body=1505 status=ok
// SIG undefined FUN_140e35f10(void)

void FUN_140e35f10(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  wchar_t *pwVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  longlong *plVar18;
  undefined4 *puVar19;
  wchar_t *pwVar20;
  bool bVar21;
  undefined4 local_res10 [4];
  undefined4 local_res20;
  undefined4 local_res24;
  ulonglong in_stack_fffffffffffffd78;
  longlong *plStack_270;
  longlong *local_260;
  code *local_258;
  undefined4 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [16];
  code *local_228;
  ulonglong uStack_220;
  undefined1 local_218 [8];
  longlong *local_210;
  undefined1 local_208 [32];
  longlong local_1e8;
  int local_1e0;
  int local_1dc;
  undefined1 local_1d7;
  undefined1 local_138 [56];
  undefined1 local_100 [200];
  
  bVar21 = true;
  lVar11 = FUN_1422312c0();
  pwVar20 = (wchar_t *)0x0;
  if (lVar11 != 0) {
    lVar12 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      puVar19 = *(undefined4 **)(lVar11 + 0xd60);
      puVar3 = puVar19 + (longlong)*(int *)(lVar11 + 0xd68) * 2;
      if (puVar19 != puVar3) {
        do {
          local_res20 = *puVar19;
          local_res24 = puVar19[1];
          cVar9 = FWeakObjectPtr::IsValid(&local_res20);
          if (cVar9 != '\0') {
            lVar11 = FWeakObjectPtr::Get(&local_res20);
            lVar11 = *(longlong *)(lVar11 + 0x490);
            if ((lVar11 != 0) &&
               (cVar9 = UMovieSceneSequencePlayer::IsPlaying(lVar11), cVar9 != '\0')) {
              param_1[0x597] = lVar11;
              plStack_270 = (longlong *)((ulonglong)plStack_270 & 0xffffffff00000000);
              bVar21 = false;
              local_228 = FUN_140e2b170;
              uStack_220 = (ulonglong)plStack_270;
              pwVar13 = _guard_xfg_dispatch_icall_nop
                                  (L"&AOakCharacter_Player::OnCinematicStopped_RetryTeleportEffects"
                                   ,L"::");
              pwVar17 = pwVar20;
              while (pwVar8 = pwVar13, pwVar8 != (wchar_t *)0x0) {
                pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar8 + 1,L"::");
                pwVar17 = pwVar8;
              }
              FName::FName(&local_248,pwVar17 + 2,1);
              FUN_1407260e0(param_1[0x597] + 0x398,param_1,&local_228,local_248);
            }
          }
          puVar19 = puVar19 + 2;
        } while (puVar19 != puVar3);
        if (!bVar21) {
          return;
        }
      }
    }
  }
  if (param_1[0x596] == 0) {
    return;
  }
  lVar12 = FUN_142e20fc0();
  lVar11 = param_1[0x596];
  while( true ) {
    if (lVar11 == 0) {
      return;
    }
    if (lVar11 == lVar12) break;
    lVar11 = *(longlong *)(lVar11 + 0x30);
  }
  if (param_1[0x596] == 0) {
    return;
  }
  local_240 = FUN_142e27720();
  lVar11 = (**(code **)(*param_1 + 0x628))(param_1,local_240);
  if (lVar11 == 0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468703c8) && (_Init_thread_header(&DAT_1468703c8), DAT_1468703c8 == -1))
  {
    FName::FName(&DAT_1468703c0,L"EffectsOnly",1);
    _Init_thread_footer(&DAT_1468703c8);
  }
  FUN_142c62180(local_208);
  local_1d7 = 1;
  puVar14 = (undefined8 *)FUN_142c62570(local_138,&DAT_1468703c0,1);
  iVar10 = local_1e0;
  lVar12 = (longlong)local_1e0;
  local_1e0 = local_1e0 + 1;
  if (local_1dc < local_1e0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (&local_1e8,iVar10);
  }
  uVar15 = puVar14[1];
  lVar12 = lVar12 * 0x38;
  *(undefined8 *)(lVar12 + local_1e8) = *puVar14;
  ((undefined8 *)(lVar12 + local_1e8))[1] = uVar15;
  uVar15 = puVar14[3];
  puVar2 = (undefined8 *)(lVar12 + 0x10 + local_1e8);
  *puVar2 = puVar14[2];
  puVar2[1] = uVar15;
  uVar4 = *(undefined4 *)((longlong)puVar14 + 0x24);
  uVar5 = *(undefined4 *)(puVar14 + 5);
  uVar6 = *(undefined4 *)((longlong)puVar14 + 0x2c);
  puVar3 = (undefined4 *)(lVar12 + 0x20 + local_1e8);
  *puVar3 = *(undefined4 *)(puVar14 + 4);
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  *(undefined8 *)(lVar12 + 0x30 + local_1e8) = puVar14[6];
  if ((param_1[0x54f] != 0) && (param_1[0x550] != 0)) {
    piVar1 = (int *)(param_1[0x550] + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      local_260 = (longlong *)param_1[0x550];
      pwVar17 = pwVar20;
      if (local_260 != (longlong *)0x0) {
        LOCK();
        iVar10 = (int)local_260[1];
        bVar21 = iVar10 == 0;
        if (bVar21) {
          *(int *)(local_260 + 1) = 0;
          iVar10 = 0;
        }
        UNLOCK();
        while (!bVar21) {
          LOCK();
          bVar21 = iVar10 == (int)local_260[1];
          if (bVar21) {
            *(int *)(local_260 + 1) = iVar10 + 1;
          }
          UNLOCK();
          if (bVar21) {
            pwVar17 = (wchar_t *)param_1[0x54f];
            goto LAB_140e36224;
          }
          LOCK();
          iVar10 = (int)local_260[1];
          bVar21 = iVar10 == 0;
          if (bVar21) {
            *(int *)(local_260 + 1) = 0;
            iVar10 = 0;
          }
          UNLOCK();
        }
        pwVar17 = (wchar_t *)0x0;
        local_260 = (longlong *)0x0;
      }
LAB_140e36224:
      FUN_140483870(pwVar17 + 0x2c,param_1);
      if (local_260 != (longlong *)0x0) {
        LOCK();
        plVar16 = local_260 + 1;
        lVar12 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar12 == 1) {
          (**(code **)*local_260)(local_260);
          LOCK();
          piVar1 = (int *)((longlong)local_260 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*local_260 + 8))(local_260,1);
          }
        }
      }
    }
  }
  uVar15 = FUN_1405e0fd0(local_100,local_208);
  plVar16 = (longlong *)
            FUN_142c7bb40(lVar11,local_218,param_1[0x596],uVar15,
                          in_stack_fffffffffffffd78 & 0xffffffffffffff00);
  param_1[0x54f] = *plVar16;
  plVar16 = (longlong *)plVar16[1];
  plVar18 = (longlong *)param_1[0x550];
  if (plVar16 != plVar18) {
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      plVar18 = (longlong *)param_1[0x550];
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar10 == 1) && (plVar18 != (longlong *)0x0)) {
        (**(code **)(*plVar18 + 8))(plVar18,1);
      }
    }
    param_1[0x550] = (longlong)plVar16;
  }
  if (local_210 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_210 + 1;
    lVar11 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_210)(local_210);
      LOCK();
      piVar1 = (int *)((longlong)local_210 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_210 + 8))(local_210,1);
      }
    }
  }
  if ((param_1[0x54f] != 0) && (param_1[0x550] != 0)) {
    piVar1 = (int *)(param_1[0x550] + 8);
    LOCK();
    iVar10 = *piVar1;
    if (iVar10 == 0) {
      *piVar1 = 0;
      iVar10 = 0;
    }
    UNLOCK();
    if (0 < iVar10) {
      plStack_270 = (longlong *)param_1[0x550];
      local_258 = FUN_140e2e8f0;
      uStack_250 = 0;
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        iVar10 = (int)plStack_270[1];
        bVar21 = iVar10 == 0;
        if (bVar21) {
          *(int *)(plStack_270 + 1) = 0;
          iVar10 = 0;
        }
        UNLOCK();
        while (!bVar21) {
          LOCK();
          bVar21 = iVar10 == (int)plStack_270[1];
          if (bVar21) {
            *(int *)(plStack_270 + 1) = iVar10 + 1;
          }
          UNLOCK();
          if (bVar21) {
            pwVar20 = (wchar_t *)param_1[0x54f];
            goto LAB_140e363b4;
          }
          LOCK();
          iVar10 = (int)plStack_270[1];
          bVar21 = iVar10 == 0;
          if (bVar21) {
            *(int *)(plStack_270 + 1) = 0;
            iVar10 = 0;
          }
          UNLOCK();
        }
        pwVar20 = (wchar_t *)0x0;
        plStack_270 = (longlong *)0x0;
      }
LAB_140e363b4:
      TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                (pwVar20 + 0x2c,local_238,param_1,&local_258);
      if (plStack_270 != (longlong *)0x0) {
        LOCK();
        plVar16 = plStack_270 + 1;
        lVar11 = *plVar16;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_270)(plStack_270);
          LOCK();
          piVar1 = (int *)((longlong)plStack_270 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plStack_270 + 8))(plStack_270,1);
          }
        }
      }
      if (param_1[0x122] != 0) {
        FUN_142d15b40(param_1[0x122],0);
      }
    }
  }
  lVar11 = param_1[0x58e];
  if (lVar11 != 0) {
    local_res10[0] = 0;
    if (DAT_1468b6148 != 0) {
      FConfigCacheIni::GetFloat
                (DAT_1468b6148,L"/Script/OakGame.OakPlayerController",L"LateJoinFadeDuration",
                 local_res10,&DAT_1468e2410);
    }
    FUN_14145dba0(lVar11);
  }
  FUN_142c63c50(local_208);
  return;
}



// FUNCTION 140e36500 FUN_140e36500 body=125 status=ok
// SIG undefined FUN_140e36500(void)

void FUN_140e36500(longlong *param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  
  if ((((param_2 != 0) && (*(char *)(param_2 + 0x249) != '\0')) &&
      (cVar1 = FUN_140e250e0(param_1,*(undefined8 *)(param_2 + 0x10)), cVar1 == '\0')) &&
     (lVar2 = FUN_142dcdc10(param_1,*(undefined8 *)(param_2 + 0x10)), lVar2 != 0)) {
    (**(code **)(*param_1 + 0x430))(param_1,lVar2,0,param_3,1);
    FUN_1413f3e80(param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 140e36580 FUN_140e36580 body=78 status=ok
// SIG undefined FUN_140e36580(void)

void FUN_140e36580(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  if (param_1[0x7b] != param_2) {
    param_1[0x7b] = param_2;
    if (param_1[0x79] != 0) {
      cVar1 = FUN_1412edac0();
      if (cVar1 == '\0') {
        FUN_140e33e10(param_1,1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000140e365c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x260))(param_1);
    return;
  }
  return;
}



// FUNCTION 140e365d0 FUN_140e365d0 body=218 status=ok
// SIG undefined FUN_140e365d0(void)

void FUN_140e365d0(longlong param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && (param_2 < *(uint *)(param_1 + 0x26d8))) {
    lVar3 = (longlong)(int)param_2;
    plVar4 = *(longlong **)(param_1 + 0x26d0);
    if (param_3 != plVar4[lVar3]) {
      plVar1 = plVar4 + (int)*(uint *)(param_1 + 0x26d8);
      cVar2 = '\x03';
      if (plVar4 != plVar1) {
        do {
          if ((*plVar4 != 0) && (*plVar4 == param_3)) {
            *plVar4 = 0;
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar1);
        plVar4 = *(longlong **)(param_1 + 0x26d0);
        cVar2 = *(char *)(param_1 + 0x128);
      }
      if ((cVar2 == '\x03') && (*(longlong *)(param_1 + 0x2a60) != 0)) {
        if (plVar4[lVar3] != 0) {
          FUN_142d26ae0();
        }
        if (param_3 != 0) {
          FUN_142e438a0(*(undefined8 *)(param_1 + 0x2a60),param_3,0);
        }
      }
      *(longlong *)(lVar3 * 8 + *(longlong *)(param_1 + 0x26d0)) = param_3;
    }
  }
  return;
}



// FUNCTION 140e366c0 FUN_140e366c0 body=161 status=ok
// SIG undefined FUN_140e366c0(void)

void FUN_140e366c0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((char)param_1[0x25] == '\x03') {
    if (DAT_146b17150 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x148))();
      cVar2 = FUN_142880f60(DAT_146b17150,uVar3);
      if (cVar2 != '\0') {
        return;
      }
    }
    lVar4 = (**(code **)(*param_1 + 0x680))(param_1);
    if (lVar4 != 0) {
      lVar5 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined1 *)(lVar4 + 0x5e0) = 1;
      }
    }
    FUN_1413ffff0(param_1);
  }
  return;
}



// FUNCTION 140e36770 FUN_140e36770 body=116 status=ok
// SIG undefined FUN_140e36770(void)

void FUN_140e36770(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((char)param_1[0x25] == '\x03') {
    lVar2 = (**(code **)(*param_1 + 0x680))();
    if (lVar2 != 0) {
      lVar3 = UInputKeySelector::GetPrivateStaticClass();
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
        *(undefined1 *)(lVar2 + 0x5e0) = 0;
      }
    }
    FUN_141400030(param_1);
  }
  return;
}



// FUNCTION 140e367f0 FUN_140e367f0 body=56 status=ok
// SIG undefined FUN_140e367f0(void)

void FUN_140e367f0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  lVar2 = FUN_140aab5e0(uVar1);
  if (lVar2 != 0) {
    FUN_140ac16e0(lVar2,param_1,0);
    return;
  }
  return;
}



// FUNCTION 140e36860 FUN_140e36860 body=74 status=ok
// SIG undefined FUN_140e36860(void)

void FUN_140e36860(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = FUN_140e1ffe0();
  if (lVar1 != 0) {
    local_10 = *(undefined4 *)(param_2 + 1);
    local_18 = *param_2;
    FUN_142610200(lVar1,*(undefined8 *)(param_1 + 0xc20),&local_18);
  }
  return;
}



// FUNCTION 140e368b0 FUN_140e368b0 body=74 status=ok
// SIG undefined FUN_140e368b0(void)

void FUN_140e368b0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = FUN_140e20310();
  if (lVar1 != 0) {
    local_10 = *(undefined4 *)(param_2 + 1);
    local_18 = *param_2;
    FUN_142610200(lVar1,*(undefined8 *)(param_1 + 0xc20),&local_18);
  }
  return;
}



// FUNCTION 140e36900 FUN_140e36900 body=78 status=ok
// SIG undefined FUN_140e36900(void)

void FUN_140e36900(longlong param_1,byte param_2)

{
  if ((*(byte *)(param_1 + 0x80) & 1) != param_2) {
    FUN_140c57010();
    FUN_140e566f0(param_1 + 0x26f0);
    if (*(longlong *)(param_1 + 0x2ae0) != 0) {
      FUN_1409bec10(*(longlong *)(param_1 + 0x2ae0),param_2);
    }
  }
  return;
}



// FUNCTION 140e36950 FUN_140e36950 body=271 status=ok
// SIG undefined FUN_140e36950(void)

void FUN_140e36950(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined1 local_40;
  byte local_3f;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x960) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x960) + 0x2c70);
  }
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x978) != 0)) {
    local_3f = local_3f | 1;
    local_3c = 0x41800000;
    local_34 = *(undefined4 *)(param_1 + 0xc18);
    local_38 = 0x41100000;
    local_30 = 4;
    local_28 = 0;
    local_20 = 0;
    local_40 = 0x2e;
    local_48 = param_3;
    if (param_2 == '\0') {
      lVar1 = FUN_142da7d10(*(undefined8 *)(lVar2 + 0x978),param_3,0);
      if (lVar1 == 0) {
        return;
      }
      local_48 = param_4;
      FUN_142d9dd60(*(undefined8 *)(lVar2 + 0x978),param_3,0,0);
    }
    lVar2 = FUN_142db7ff0(*(undefined8 *)(lVar2 + 0x978),&local_48);
    if (lVar2 != 0) {
      FUN_142398d80(lVar2,*(undefined4 *)(param_1 + 0xc1c));
    }
  }
  return;
}



// FUNCTION 140e36a80 FUN_140e36a80 body=12 status=ok
// SIG undefined FUN_140e36a80(void)

void FUN_140e36a80(longlong param_1)

{
  FUN_140e5dd70(param_1 + 0x26f0);
  return;
}



// FUNCTION 140e36a90 FUN_140e36a90 body=12 status=ok
// SIG undefined FUN_140e36a90(void)

void FUN_140e36a90(longlong param_1)

{
  FUN_140e5e000(param_1 + 0x26f0);
  return;
}



// FUNCTION 140e36aa0 FUN_140e36aa0 body=217 status=ok
// SIG undefined FUN_140e36aa0(void)

void FUN_140e36aa0(longlong param_1,uint param_2,longlong param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(int)param_2;
  if (param_2 < *(uint *)(param_1 + 0x26d8)) {
    if ((*(byte *)(param_1 + 0x128) < 3) && (param_4 == '\0')) {
      FUN_141400ae0(param_1,param_2);
    }
    plVar2 = *(longlong **)(param_1 + 0x26d0);
    if (param_3 != plVar2[lVar3]) {
      plVar1 = plVar2 + *(int *)(param_1 + 0x26d8);
      if (plVar2 != plVar1) {
        do {
          if ((*plVar2 != 0) && (*plVar2 == param_3)) {
            *plVar2 = 0;
          }
          plVar2 = plVar2 + 1;
        } while (plVar2 != plVar1);
        plVar2 = *(longlong **)(param_1 + 0x26d0);
      }
      if ((*(char *)(param_1 + 0x128) == '\x03') && (*(longlong *)(param_1 + 0x2a60) != 0)) {
        if (plVar2[lVar3] != 0) {
          FUN_142d26ae0(*(longlong *)(param_1 + 0x2a60));
        }
        if (param_3 != 0) {
          FUN_142e438a0(*(undefined8 *)(param_1 + 0x2a60),param_3,0);
        }
      }
      *(longlong *)(lVar3 * 8 + *(longlong *)(param_1 + 0x26d0)) = param_3;
    }
  }
  return;
}



// FUNCTION 140e36b80 FUN_140e36b80 body=26 status=ok
// SIG undefined FUN_140e36b80(void)

void FUN_140e36b80(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x2ae8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140e36b92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x638))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 140e36ba0 FUN_140e36ba0 body=47 status=ok
// SIG undefined FUN_140e36ba0(void)

void FUN_140e36ba0(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x2680) != param_2) {
    *(longlong *)(param_1 + 0x2680) = param_2;
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x2688) = *(undefined4 *)(param_1 + 0x2678);
      return;
    }
    *(undefined4 *)(param_1 + 0x2688) = *(undefined4 *)(param_1 + 0x267c);
  }
  return;
}



// FUNCTION 140e36bd0 FUN_140e36bd0 body=79 status=ok
// SIG undefined FUN_140e36bd0(void)

void FUN_140e36bd0(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + 0x96e) != param_2) {
    *(byte *)(param_1 + 0x96e) = param_2;
    *(byte *)(param_1 + 0x96f) = param_2 ^ 1;
    uVar1 = 2;
    if (param_2 == 0) {
      FUN_14308fb00(param_1,2);
      uVar1 = 3;
    }
    FUN_143083d20(param_1,uVar1,0,0);
    return;
  }
  return;
}



// FUNCTION 140e36c20 FUN_140e36c20 body=105 status=ok
// SIG undefined FUN_140e36c20(void)

void FUN_140e36c20(longlong param_1,char param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x24d0) != param_2) {
    *(char *)(param_1 + 0x24d0) = param_2;
    if (*(longlong **)(param_1 + 0xe68) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0xe68) + 0x430))();
      plVar1 = *(longlong **)(param_1 + 0xe68);
      if (plVar1 != (longlong *)0x0) {
        if (*(char *)(param_1 + 0x24d0) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140e36c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x5a0))(plVar1,0,0);
          return;
        }
                    /* WARNING: Could not recover jumptable at 0x000140e36c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x7a8))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e36c90 FUN_140e36c90 body=24 status=ok
// SIG undefined FUN_140e36c90(void)

void FUN_140e36c90(longlong param_1,byte param_2)

{
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_142397540(*(longlong *)(param_1 + 0x2b8),param_2 ^ 1,1);
    return;
  }
  return;
}



// FUNCTION 140e36cb0 FUN_140e36cb0 body=358 status=ok
// SIG undefined FUN_140e36cb0(void)

void FUN_140e36cb0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = (**(code **)(*param_1 + 0x900))(param_1,0,0);
    if (lVar2 != 0) {
      lVar3 = FUN_142e5c1e0();
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
        *(undefined4 *)(lVar2 + 0x10c0) = 0;
        if (0x7fffffff < *(uint *)(lVar2 + 0x10c4)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(lVar2 + 0x10b8,0);
        }
      }
    }
    if (param_1[0x14b] == 0) {
      return;
    }
    FUN_142d2b2c0();
    if (param_1[0x14b] == 0) {
      return;
    }
    FUN_142d271f0(param_1[0x14b],param_2,0);
    return;
  }
  lVar2 = (**(code **)(*param_1 + 0x900))();
  if (lVar2 != 0) {
    lVar3 = FUN_142e5c1e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar2 + 0x10b8,param_1 + 0x138);
      goto LAB_140e36d33;
    }
  }
  lVar2 = 0;
LAB_140e36d33:
  lVar3 = param_1[0x14b];
  if (((lVar3 != 0) && (param_1[300] != 0)) && (*(longlong *)(param_1[300] + 0x2a60) != 0)) {
    FUN_142d1fad0();
    lVar3 = param_1[0x14b];
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_142d27460(lVar3,lVar2);
  return;
}



// FUNCTION 140e36e20 FUN_140e36e20 body=215 status=ok
// SIG undefined FUN_140e36e20(void)

void FUN_140e36e20(longlong param_1,char param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  
  bVar1 = false;
  if (((param_3 & 0xfffffffd) == 0) && (*(char *)(param_1 + 0x96d) != param_2)) {
    *(char *)(param_1 + 0x96d) = param_2;
    bVar1 = true;
    if (param_2 == '\0') {
      FUN_14308fb00(param_1,1);
    }
    else {
      FUN_143083d20();
    }
  }
  if ((param_3 < 2) && (*(char *)(param_1 + 0x96c) != param_2)) {
    *(char *)(param_1 + 0x96c) = param_2;
    if (param_2 == '\0') {
      FUN_14308fb00(param_1,0,0);
      return;
    }
    FUN_143083d20();
  }
  else if (!bVar1) {
    return;
  }
  if (param_2 != '\0') {
    plVar3 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x960) != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x960) + 0x2c70);
    }
    if ((plVar3 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar3 + 0x768))(plVar3), cVar2 != '\0')) {
      FUN_140ce9370(plVar3);
    }
  }
  return;
}



// FUNCTION 140e36f00 FUN_140e36f00 body=228 status=ok
// SIG undefined FUN_140e36f00(void)

void FUN_140e36f00(longlong *param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar4 = (**(code **)(*param_1 + 0x440))();
  if (lVar4 != 0) {
    lVar5 = FUN_1413f1920();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((param_3 < 0) || (*(int *)(lVar4 + 0x30) <= param_3)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) {
        iVar6 = (param_3 - *(int *)(lVar4 + 0x30)) + 1;
        iVar1 = *(int *)(lVar4 + 0x30);
        iVar3 = iVar1 + iVar6;
        *(int *)(lVar4 + 0x30) = iVar3;
        if (*(int *)(lVar4 + 0x34) < iVar3) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(lVar4 + 0x28);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar1 + *(longlong *)(lVar4 + 0x28)),0,(longlong)iVar6);
      }
      if ((param_3 < 0) || (*(int *)(lVar4 + 0x30) <= param_3)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        *(undefined1 *)((longlong)param_3 + *(longlong *)(lVar4 + 0x28)) = param_4;
      }
    }
  }
  return;
}



// FUNCTION 140e36ff0 FUN_140e36ff0 body=29 status=ok
// SIG undefined FUN_140e36ff0(void)

void FUN_140e36ff0(longlong param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x2318) != param_2)) {
    *(char *)(param_1 + 0x2318) = param_2;
    FUN_140e17e20();
    return;
  }
  return;
}



// FUNCTION 140e37010 FUN_140e37010 body=166 status=ok
// SIG undefined FUN_140e37010(void)

void FUN_140e37010(longlong param_1,float param_2)

{
  float fVar1;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468702a8) && (_Init_thread_header(&DAT_1468702a8), DAT_1468702a8 == -1))
  {
    FName::FName(&DAT_1468702a0,L"Playback",1);
    _Init_thread_footer(&DAT_1468702a8);
  }
  if (*(longlong *)(param_1 + 0x9b0) != 0) {
    fVar1 = 0.0;
    if ((0.0 <= param_2) && (fVar1 = param_2, 1.0 <= param_2)) {
      fVar1 = 1.0;
    }
    FUN_1425a2750(*(longlong *)(param_1 + 0x9b0),DAT_1468702a0,fVar1);
  }
  return;
}



// FUNCTION 140e370c0 FUN_140e370c0 body=92 status=ok
// SIG undefined FUN_140e370c0(void)

void FUN_140e370c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_18 [16];
  
  local_28 = *(undefined8 *)(param_1 + 0x450);
  local_20 = *(undefined4 *)(param_1 + 0x458);
  *(undefined4 *)(param_1 + 0x474) = param_2;
  puVar1 = (undefined8 *)
           FUN_142db9160(local_18,(undefined8 *)(param_1 + 0x440),param_2,&local_28,param_3);
  *(undefined8 *)(param_1 + 0x440) = *puVar1;
  *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(puVar1 + 1);
  return;
}



// FUNCTION 140e37120 FUN_140e37120 body=19 status=ok
// SIG undefined FUN_140e37120(void)

void FUN_140e37120(longlong param_1,undefined8 param_2)

{
  FUN_140e36950(param_1,param_2,*(undefined8 *)(param_1 + 0xbf8),*(undefined8 *)(param_1 + 0xc00));
  return;
}



// FUNCTION 140e37140 FUN_140e37140 body=19 status=ok
// SIG undefined FUN_140e37140(void)

void FUN_140e37140(longlong param_1,undefined8 param_2)

{
  FUN_140e36950(param_1,param_2,*(undefined8 *)(param_1 + 0xc08),*(undefined8 *)(param_1 + 0xc10));
  return;
}



// FUNCTION 140e37160 FUN_140e37160 body=834 status=ok
// SIG undefined FUN_140e37160(void)

void FUN_140e37160(undefined1 *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 local_c0 [24];
  undefined1 local_a8 [32];
  longlong local_88;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    *param_1 = 1;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0xa0);
    if (plVar1 != (longlong *)(param_2 + 0x80)) {
      iVar6 = *(int *)(param_1 + 0x10);
      if (iVar6 != 0) {
        plVar3 = (longlong *)(*plVar1 + 0x20);
        do {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 7;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = *(int *)(param_2 + 0x88);
      lVar4 = *(longlong *)(param_2 + 0x80);
      *(int *)(param_1 + 0x10) = iVar6;
      if ((iVar6 == 0) && (*(int *)(param_1 + 0x14) == 0)) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      else {
        TArray<FFullyLoadedPackagesInfo,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
        puVar9 = (undefined4 *)*plVar1;
        if (iVar6 != 0) {
          puVar7 = (undefined8 *)(puVar9 + 10);
          puVar8 = (undefined4 *)(lVar4 + 0xc);
          do {
            *puVar9 = puVar8[-3];
            puVar7[-1] = 0;
            *puVar7 = 0;
            *(undefined4 *)(puVar7 + -4) = 0xffffffff;
            *(undefined4 *)((longlong)puVar7 + -0x1c) = 0;
            puVar7[-2] = 0;
            *(undefined4 *)puVar7 = 0;
            if (0x7fffffff < *(uint *)((longlong)puVar7 + 4)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar7 + -1,0);
            }
            if ((undefined2 *)puVar7[-1] != (undefined2 *)0x0) {
              *(undefined2 *)puVar7[-1] = 0;
            }
            *(undefined4 *)(puVar7 + -3) = 0;
            *(undefined4 *)(puVar7 + -4) = puVar8[-1];
            *(undefined4 *)((longlong)puVar7 + -0x1c) = *puVar8;
            *(undefined4 *)(puVar7 + -3) = puVar8[1];
            FString::FString(local_c0,puVar8 + 5);
            FSoftObjectPath::operator=(puVar7 + -2);
            puVar9 = puVar9 + 0xe;
            *(undefined1 *)(puVar7 + 1) = *(undefined1 *)(puVar8 + 9);
            puVar8 = puVar8 + 0xe;
            puVar7 = puVar7 + 7;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
    }
    FUN_14099b910(param_1 + 0x18,param_2 + 0xf8);
    FUN_140e1d9f0(param_1 + 0x60);
    lVar4 = *(longlong *)(param_2 + 200);
    lVar5 = (longlong)*(int *)(param_2 + 0xd0) * 0xb0 + lVar4;
    for (; lVar4 != lVar5; lVar4 = lVar4 + 0xb0) {
      _guard_xfg_dispatch_icall_nop(local_a8,0,0x68);
      FUN_142ff9df0(lVar4);
      cVar2 = FUN_143003610(local_a8);
      if (cVar2 != '\0') {
        iVar6 = *(int *)(param_1 + 0x68);
        *(int *)(param_1 + 0x68) = iVar6 + 1;
        if (*(int *)(param_1 + 0x6c) < iVar6 + 1) {
          TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                    (param_1 + 0x60,iVar6);
        }
        FUN_140ce10b0((longlong)iVar6 * 0x80 + *(longlong *)(param_1 + 0x60));
      }
      if (local_58 != 0) {
        FMemory::Free();
      }
      if (local_68 != 0) {
        FMemory::Free();
      }
      if (local_78 != 0) {
        FMemory::Free();
      }
      if (local_88 != 0) {
        FMemory::Free();
      }
    }
    plVar1 = (longlong *)(param_1 + 0x70);
    if (plVar1 != (longlong *)(param_2 + 0x1d8)) {
      iVar6 = *(int *)(param_1 + 0x78);
      if (iVar6 != 0) {
        plVar3 = (longlong *)(*plVar1 + 8);
        do {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 3;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar6 = *(int *)(param_2 + 0x1e0);
      puVar9 = *(undefined4 **)(param_2 + 0x1d8);
      *(int *)(param_1 + 0x78) = iVar6;
      if ((iVar6 == 0) && (*(int *)(param_1 + 0x7c) == 0)) {
        *(undefined4 *)(param_1 + 0x7c) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar6);
        puVar8 = (undefined4 *)*plVar1;
        for (; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar9;
          FString::FString(puVar8 + 2,puVar9 + 2);
          puVar8 = puVar8 + 6;
          puVar9 = puVar9 + 6;
        }
      }
    }
  }
  return;
}



// FUNCTION 140e374b0 FUN_140e374b0 body=283 status=ok
// SIG undefined FUN_140e374b0(void)

void FUN_140e374b0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar3 = 0;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x3c8) + 0x4c0);
  }
  plVar2 = (longlong *)FUN_140e24a80();
  if (lVar3 != 0) {
    FUN_142398820(lVar3,1);
    local_18 = *(undefined4 *)(param_1 + 0x374);
    uStack_14 = *(undefined4 *)(param_1 + 0x378);
    uStack_10 = *(undefined4 *)(param_1 + 0x37c);
    uStack_c = *(undefined4 *)(param_1 + 0x380);
    FUN_1423972b0(lVar3,0,&local_18);
    local_18 = *(undefined4 *)(param_1 + 0x374);
    uStack_14 = *(undefined4 *)(param_1 + 0x378);
    uStack_10 = *(undefined4 *)(param_1 + 0x37c);
    uStack_c = *(undefined4 *)(param_1 + 0x380);
    FUN_1423972b0(lVar3,1,&local_18);
    local_18 = *(undefined4 *)(param_1 + 0x374);
    uStack_14 = *(undefined4 *)(param_1 + 0x378);
    uStack_10 = *(undefined4 *)(param_1 + 0x37c);
    uStack_c = *(undefined4 *)(param_1 + 0x380);
    FUN_1423972b0(lVar3,2,&local_18);
    local_18 = *(undefined4 *)(param_1 + 0x374);
    uStack_14 = *(undefined4 *)(param_1 + 0x378);
    uStack_10 = *(undefined4 *)(param_1 + 0x37c);
    uStack_c = *(undefined4 *)(param_1 + 0x380);
    FUN_1423972b0(lVar3,3,&local_18);
    if (plVar2 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar2 + 0x768))(plVar2);
      if (cVar1 != '\0') {
        local_18 = *(undefined4 *)(param_1 + 0x360);
        uStack_14 = *(undefined4 *)(param_1 + 0x364);
        uStack_10 = *(undefined4 *)(param_1 + 0x368);
        uStack_c = *(undefined4 *)(param_1 + 0x36c);
        bVar4 = 3;
        if (*(byte *)((longlong)plVar2 + 0x644) < 3) {
          bVar4 = *(byte *)((longlong)plVar2 + 0x644);
        }
        FUN_1423972b0(lVar3,bVar4,&local_18);
      }
    }
    FUN_142397420(lVar3,*(undefined4 *)(param_1 + 0x370));
  }
  return;
}



// FUNCTION 140e375d0 FUN_140e375d0 body=213 status=ok
// SIG undefined FUN_140e375d0(void)

undefined8 FUN_140e375d0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if ((((*(byte *)((longlong)param_1 + 0x24d1) & 4) == 0) ||
      (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 == 0)) ||
     (cVar1 = FUN_140e53810(param_1 + 0x4de), cVar1 == '\0')) {
    return 0;
  }
  if ((param_1[0x58e] != 0) && (cVar1 = FUN_1407c3030(param_1[0x58e] + 0x1560), cVar1 != '\0')) {
    return 0;
  }
  lVar3 = param_1[0x21c];
  if (lVar3 != 0) {
    cVar1 = FUN_140adac80(lVar3);
    if (cVar1 != '\0') {
      return 0;
    }
    cVar1 = FUN_140ada8e0(lVar3);
    if (cVar1 != '\0') {
      return 0;
    }
    cVar1 = FUN_140adaa20(lVar3);
    if (cVar1 != '\0') {
      return 0;
    }
  }
  iVar2 = FUN_142235230(param_1);
  if (iVar2 != 3) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = UWorld::GetGameState<APVPGameState>(uVar4);
    if (lVar3 == 0) {
      return 0;
    }
    if (*(int *)(lVar3 + 0x6d4) < 2) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140e376b0 FUN_140e376b0 body=75 status=ok
// SIG undefined FUN_140e376b0(void)

undefined1 FUN_140e376b0(longlong param_1,undefined4 param_2,int param_3)

{
  switch(param_2) {
  case 2:
    return *(undefined1 *)(param_1 + 9);
  case 3:
    if (param_3 != 0) goto switchD_140e376ca_caseD_7;
    break;
  case 4:
    if (param_3 != 2) goto switchD_140e376ca_caseD_7;
    break;
  case 5:
    if (param_3 == 0) {
      return *(undefined1 *)(param_1 + 9);
    }
  case 7:
switchD_140e376ca_caseD_7:
    return *(undefined1 *)(param_1 + 10);
  case 6:
    if (param_3 == 2) {
      return *(undefined1 *)(param_1 + 9);
    }
    goto switchD_140e376ca_caseD_7;
  }
  return *(undefined1 *)(param_1 + 8);
}



// FUNCTION 140e37730 FUN_140e37730 body=66 status=ok
// SIG undefined FUN_140e37730(void)

undefined1 FUN_140e37730(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1407c3030(param_1 + 0x25c8);
  if (cVar1 != '\0') {
    return 0;
  }
  uVar2 = FUN_14231d850(param_1,param_2);
  return uVar2;
}



// FUNCTION 140e37780 FUN_140e37780 body=48 status=ok
// SIG undefined FUN_140e37780(void)

undefined1 FUN_140e37780(longlong *param_1)

{
  char cVar1;
  
  cVar1 = FUN_140c58f40();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xc28))(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140e377b0 FUN_140e377b0 body=203 status=ok
// SIG undefined FUN_140e377b0(void)

ulonglong FUN_140e377b0(longlong *param_1)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  uint7 uVar5;
  
  uVar2 = FUN_142cd11c0();
  if ((char)uVar2 != '\0') {
    lVar3 = FUN_14222e280(param_1);
    uVar2 = 0;
    if (lVar3 != 0) {
      lVar4 = UInputKeySelector::GetPrivateStaticClass();
      uVar5 = (uint7)((ulonglong)(lVar4 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        uVar2 = (ulonglong)uVar5 << 8;
      }
      else {
        uVar2 = CONCAT71(uVar5,1);
      }
      if (((char)uVar2 != '\0') && (*(char *)(lVar3 + 0x5e0) != '\0')) goto LAB_140e3786e;
    }
    if (param_1[0x483] != 0) {
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      uVar2 = 0;
      if (lVar3 != 0) {
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        bVar1 = *(float *)(lVar3 + 0x790) - *(float *)(param_1[0x483] + 0x10d0) < 0.2;
        uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar1);
        if (bVar1) goto LAB_140e3786e;
      }
    }
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
LAB_140e3786e:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140e37880 FUN_140e37880 body=442 status=ok
// SIG undefined FUN_140e37880(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e37880(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar3 = param_1[0x2d];
  if (lVar3 == 0) {
    local_88 = _DAT_1468b5d90;
    local_80 = DAT_1468b5d98;
  }
  else {
    local_88 = *(undefined8 *)(lVar3 + 0x220);
    local_80 = *(undefined4 *)(lVar3 + 0x228);
  }
  plVar1 = (longlong *)param_1[0x98];
  uVar5 = (undefined4)local_88;
  uVar6 = (undefined4)((ulonglong)local_88 >> 0x20);
  local_70 = local_80;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_142a07000();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x420))(plVar1,local_58,param_1[0x465],0);
      uVar5 = local_48;
      uVar6 = uStack_44;
      local_70 = uStack_40;
    }
  }
  local_80 = 0x3f800000;
  local_60 = DAT_1468b5da8;
  local_88 = 0x3f8000003f800000;
  local_68 = DAT_1468b5da0;
  local_78 = CONCAT44(uVar6,uVar5);
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  local_90 = 0;
  local_98 = 0;
  local_a8 = &local_88;
  local_a0 = 1;
  FUN_14245fa90(uVar4,param_1[0x464],&local_78,&local_68);
  return;
}



// FUNCTION 140e37a40 FUN_140e37a40 body=442 status=ok
// SIG undefined FUN_140e37a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e37a40(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar3 = param_1[0x2d];
  if (lVar3 == 0) {
    local_88 = _DAT_1468b5d90;
    local_80 = DAT_1468b5d98;
  }
  else {
    local_88 = *(undefined8 *)(lVar3 + 0x220);
    local_80 = *(undefined4 *)(lVar3 + 0x228);
  }
  plVar1 = (longlong *)param_1[0x98];
  uVar5 = (undefined4)local_88;
  uVar6 = (undefined4)((ulonglong)local_88 >> 0x20);
  local_70 = local_80;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_142a07000();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x420))(plVar1,local_58,param_1[0x467],0);
      uVar5 = local_48;
      uVar6 = uStack_44;
      local_70 = uStack_40;
    }
  }
  local_80 = 0x3f800000;
  local_60 = DAT_1468b5da8;
  local_88 = 0x3f8000003f800000;
  local_68 = DAT_1468b5da0;
  local_78 = CONCAT44(uVar6,uVar5);
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  local_90 = 0;
  local_98 = 0;
  local_a8 = &local_88;
  local_a0 = 1;
  FUN_14245fa90(uVar4,param_1[0x466],&local_78,&local_68);
  return;
}



// FUNCTION 140e37c00 FUN_140e37c00 body=695 status=ok
// SIG undefined FUN_140e37c00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e37c00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [8];
  longlong *local_78;
  undefined8 local_68;
  longlong *plStack_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x78) == 0) {
    local_98 = param_4;
    local_90 = param_3;
    local_88 = param_2;
    FUN_140e25960(param_1,&local_a8);
    if ((local_a8 != 0) && (*(longlong *)(param_1 + 0xb0) != 0)) {
      uVar6 = FUN_142b54800();
      uVar4 = *(undefined8 *)(param_1 + 0xb0);
      puVar9 = (undefined8 *)(param_1 + 0x68);
      plVar5 = *(longlong **)(param_1 + 0xb8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      local_b8 = uVar4;
      plStack_b0 = plVar5;
      if (&local_b8 != puVar9) {
        local_b8 = *puVar9;
        plStack_b0 = *(longlong **)(param_1 + 0x70);
        *puVar9 = uVar4;
        *(longlong **)(param_1 + 0x70) = plVar5;
        local_68 = uVar4;
        plStack_60 = plVar5;
      }
      plVar5 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_b0 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
          }
        }
      }
      plVar5 = local_a0;
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
        UNLOCK();
      }
      plVar2 = (longlong *)(local_a8 + 0x108);
      plVar7 = (longlong *)FMemory::Realloc(0,0x40);
      plVar10 = (longlong *)0x0;
      local_78 = plVar7;
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = (longlong)&PTR_GetPoolName_144599888;
        plVar7[1] = param_1;
        *(undefined1 *)(plVar7 + 2) = uVar6;
        plVar7[3] = local_a8;
        plVar7[4] = (longlong)plVar5;
        lVar8 = FDelegateHandle::GenerateNewID();
        plVar7[6] = lVar8;
        *plVar7 = (longlong)&PTR_GetPoolName_1445998d0;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2,1);
        puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x20))(plVar7,local_80);
        iVar3 = *(int *)(local_a8 + 0x110);
        plVar10 = (longlong *)*puVar9;
        *(int *)(local_a8 + 0x110) = iVar3 + 1;
        if (*(int *)(local_a8 + 0x114) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2,iVar3);
        }
        puVar9 = (undefined8 *)((longlong)iVar3 * 0x10 + *plVar2);
        *puVar9 = plVar7;
        *(undefined4 *)(puVar9 + 1) = 4;
        plVar5 = (longlong *)0x0;
      }
      *(longlong **)(param_1 + 0x78) = plVar10;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        lVar8 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
      }
      FUN_140e3bb30(param_1,local_88,local_90,local_98);
    }
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_a0 + 1;
      lVar8 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e37ec0 FUN_140e37ec0 body=1372 status=ok
// SIG undefined FUN_140e37ec0(void)

void FUN_140e37ec0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  longlong local_1c0 [3];
  longlong local_1a8;
  uint uStack_1a4;
  longlong local_1a0 [5];
  undefined8 local_178;
  longlong *local_170;
  longlong local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *plStack_150;
  undefined1 local_148;
  longlong local_140 [2];
  longlong local_130 [2];
  longlong local_120 [2];
  longlong local_110 [2];
  longlong local_100;
  longlong *local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined1 local_e0 [8];
  longlong local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  longlong *local_88;
  longlong *plStack_80;
  undefined1 local_78 [8];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [24];
  
  local_1c0[0] = 0;
  local_1c0[1] = 0;
  local_1c0[2] = 0;
  local_1a8 = 0;
  local_1a0[0] = 0;
  local_1a0[1] = 0;
  local_1a0[2] = 0;
  local_1a0[3] = 0;
  uVar11 = 0;
  plVar7 = (longlong *)FUN_140e235a0(local_98,param_3 & 0xffffffff,param_3,param_4,0);
  if (local_1c0 + 2 != plVar7) {
    local_1c0[2] = *plVar7;
    *plVar7 = 0;
    local_1a8 = plVar7[1];
    plVar7[1] = 0;
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  lVar8 = *(longlong *)(param_1 + 0x68);
  if (lVar8 == 0) goto LAB_140e381e5;
  local_f8 = *(longlong **)(param_1 + 0x70);
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
    UNLOCK();
  }
  local_100 = lVar8;
  lVar8 = FUN_142b45e90();
  FUN_142b4a990(*(undefined8 *)(lVar8 + 0x18),&local_168,&local_100);
  plVar7 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (local_168 != 0) {
    TBaseMulticastDelegate<void>::Remove(local_168 + 0x108,*(undefined8 *)(param_1 + 0x78));
    uVar5 = uStack_1a4;
    if ((int)param_3 == 0) {
      uVar11 = 1;
      local_1a8 = (ulonglong)uStack_1a4 << 0x20;
      if (uVar5 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_1c0 + 2,0);
      }
      cVar6 = FWeakObjectPtr::IsValid(param_1 + 0x38);
      if (cVar6 != '\0') {
        local_f0 = *(undefined8 *)(param_1 + 0xb0);
        local_e8 = *(longlong *)(param_1 + 0xb8);
        if (local_e8 != 0) {
          LOCK();
          *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
          UNLOCK();
        }
        uVar10 = FWeakObjectPtr::Get(param_1 + 0x38);
        lVar8 = FUN_14244c070(uVar10,&local_f0);
        if (lVar8 == 0) {
LAB_140e38107:
          lVar8 = 0;
        }
        else {
          lVar9 = FUN_141432660();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (!bVar4) goto LAB_140e38107;
        }
        cVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x120))();
        if (cVar6 != '\0') {
          plStack_150 = (longlong *)FUN_140e107f0(param_1 + 0x38,param_1 + 0xb0);
          local_158 = plStack_150 + 2;
          SharedPointerInternals::EnableSharedFromThis(&local_158,local_158,local_158);
          local_88 = local_158;
          plStack_80 = plStack_150;
          if (plStack_150 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_150 + 1) = (int)plStack_150[1] + 1;
            UNLOCK();
          }
          FUN_140e57f40(lVar8,&local_88);
          plVar7 = plStack_150;
          if (plStack_150 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_150 + 1;
            lVar8 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*plStack_150)(plStack_150);
              LOCK();
              piVar2 = (int *)((longlong)plVar7 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar7 + 8))(plVar7,1);
              }
            }
          }
        }
      }
    }
    else if (((int)param_3 == 9) && (*(int *)(local_168 + 0x80) == 2)) {
      local_1a8 = (ulonglong)uStack_1a4 << 0x20;
      if (uVar5 != 0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_1c0 + 2,0);
      }
      FString::operator=(local_1a0,*(undefined8 *)(local_168 + 0x78));
      FString::operator=(local_1a0 + 2,*(longlong *)(local_168 + 0x78) + 0x10);
    }
  }
  if (local_160 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_160 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_160)(local_160);
      LOCK();
      piVar2 = (int *)((longlong)local_160 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_160 + 8))(local_160,1);
      }
    }
  }
LAB_140e381e5:
  *(undefined8 *)(param_1 + 0x78) = 0;
  local_170 = (longlong *)0x0;
  if ((undefined8 *)(param_1 + 0x68) != &local_178) {
    *(undefined8 *)(param_1 + 0x68) = 0;
    local_178 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x70,&local_170);
    plVar7 = local_170;
    if (local_170 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_170 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_170)(local_170);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_170 + 8))(local_170,1);
        }
      }
    }
  }
  local_148 = uVar11;
  FString::FString(local_140,local_1c0);
  FString::FString(local_130,local_1c0 + 2);
  FString::FString(local_120,local_1a0);
  FString::FString(local_110,local_1a0 + 2);
  if (*(char *)(param_1 + 0x40) == '\0') {
    local_78[0] = local_148;
    FString::FString(local_70,local_140);
    FString::FString(local_60,local_130);
    FString::FString(local_50,local_120);
    FString::FString(local_40,local_110);
    FUN_140e38c40(param_1,local_78);
  }
  else {
    local_e0[0] = local_148;
    FString::FString(local_d8,local_140);
    FString::FString(local_c8,local_130);
    FString::FString(local_b8,local_120);
    FString::FString(local_a8,local_110);
    uVar10 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
    FUN_140e10a30(uVar10,"Select_Display_Name_Notify_Response",local_e0);
    if (local_a8[0] != 0) {
      FMemory::Free();
    }
    if (local_b8[0] != 0) {
      FMemory::Free();
    }
    if (local_c8[0] != 0) {
      FMemory::Free();
    }
    if (local_d8[0] != 0) {
      FMemory::Free();
    }
  }
  if (local_110[0] != 0) {
    FMemory::Free();
  }
  if (local_120[0] != 0) {
    FMemory::Free();
  }
  if (local_130[0] != 0) {
    FMemory::Free();
  }
  if (local_140[0] != 0) {
    FMemory::Free();
  }
  if (local_1a0[2] != 0) {
    FMemory::Free();
  }
  if (local_1a0[0] != 0) {
    FMemory::Free();
  }
  if (local_1c0[2] != 0) {
    FMemory::Free();
  }
  if (local_1c0[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e38420 FUN_140e38420 body=537 status=ok
// SIG undefined FUN_140e38420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e38420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_50;
  longlong *plStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FUN_140e25960(param_1,&local_78);
  if ((local_78 != 0) && (lVar3 = *(longlong *)(param_1 + 0xb0), lVar3 != 0)) {
    plVar4 = (longlong *)(param_1 + 0xa0);
    plVar8 = *(longlong **)(param_1 + 0xb8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    local_88 = lVar3;
    plStack_80 = plVar8;
    if (&local_88 != plVar4) {
      local_88 = *plVar4;
      plStack_80 = *(longlong **)(param_1 + 0xa8);
      *plVar4 = lVar3;
      *(longlong **)(param_1 + 0xa8) = plVar8;
      local_50 = lVar3;
      plStack_48 = plVar8;
    }
    plVar4 = plStack_80;
    if (plStack_80 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_80 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_80)(plStack_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_80 + 8))(plStack_80,1);
        }
      }
    }
    lVar3 = local_78;
    plVar8 = (longlong *)(local_78 + 0x120);
    plVar4 = (longlong *)FMemory::Realloc(0,0x20);
    local_60 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar4[1] = param_1;
      *plVar4 = (longlong)&PTR_GetPoolName_144599918;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar4[3] = lVar5;
      *plVar4 = (longlong)&PTR_GetPoolName_144599960;
    }
    uVar7 = 0;
    if (plVar4 != (longlong *)0x0) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_68);
      iVar2 = *(int *)(lVar3 + 0x128);
      uVar7 = *puVar6;
      *(int *)(lVar3 + 0x128) = iVar2 + 1;
      if (*(int *)(lVar3 + 300) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar8);
      *puVar6 = plVar4;
      *(undefined4 *)(puVar6 + 1) = 2;
    }
    *(undefined8 *)(param_1 + 0xd0) = uVar7;
    FUN_142b6ea80(local_78,param_2,param_3,param_3);
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_70 + 1;
    lVar3 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return;
}



// FUNCTION 140e38640 FUN_140e38640 body=887 status=ok
// SIG undefined FUN_140e38640(void)

void FUN_140e38640(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong local_138;
  longlong *local_130;
  undefined1 local_128;
  longlong local_120 [9];
  longlong local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  longlong local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0 [2];
  longlong local_90 [2];
  longlong local_80;
  longlong *local_78;
  undefined1 local_70 [8];
  longlong local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  
  local_120[0] = 0;
  local_120[1] = 0;
  local_120[2] = 0;
  local_120[3] = 0;
  local_120[4] = 0;
  local_120[5] = 0;
  local_120[6] = 0;
  local_120[7] = 0;
  local_128 = 0;
  plVar6 = (longlong *)FUN_140e23890(local_28);
  if (local_120 + 2 != plVar6) {
    local_120[2] = *plVar6;
    *plVar6 = 0;
    local_120[3] = plVar6[1];
    plVar6[1] = 0;
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  plVar6 = (longlong *)(param_1 + 0xa0);
  lVar7 = *plVar6;
  if (lVar7 != 0) {
    local_d0 = *(longlong **)(param_1 + 0xa8);
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
      UNLOCK();
    }
    local_d8 = lVar7;
    lVar7 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar7 + 0x18),&local_80,&local_d8);
    plVar3 = local_d0;
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d0 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
    }
    if (local_80 != 0) {
      TBaseMulticastDelegate<void>::Remove(local_80 + 0x120,*(undefined8 *)(param_1 + 0xd0));
      if (param_2 == 0) {
        local_128 = 1;
        uVar5 = (ulonglong)local_120[3] >> 0x20;
        local_120[3] = local_120[3] & 0xffffffff00000000;
        if ((int)uVar5 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(local_120 + 2,0);
        }
      }
    }
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_78 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)local_78 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_78 + 8))(local_78,1);
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  local_130 = (longlong *)0x0;
  if (plVar6 != &local_138) {
    *plVar6 = 0;
    local_138 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0xa8,&local_130);
    plVar6 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_130 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_130 + 8))(local_130,1);
        }
      }
    }
  }
  local_c8 = local_128;
  FString::FString(local_c0,local_120);
  FString::FString(local_b0,local_120 + 2);
  FString::FString(local_a0,local_120 + 4);
  FString::FString(local_90,local_120 + 6);
  local_70[0] = local_c8;
  FString::FString(local_68,local_c0);
  FString::FString(local_58,local_b0);
  FString::FString(local_48,local_a0);
  FString::FString(local_38,local_90);
  uVar8 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  FUN_140e10a30(uVar8,"Signup_Notify_Response",local_70);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  if (local_a0[0] != 0) {
    FMemory::Free();
  }
  if (local_b0[0] != 0) {
    FMemory::Free();
  }
  if (local_c0[0] != 0) {
    FMemory::Free();
  }
  if (local_120[6] != 0) {
    FMemory::Free();
  }
  if (local_120[4] != 0) {
    FMemory::Free();
  }
  if (local_120[2] != 0) {
    FMemory::Free();
  }
  if (local_120[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e389c0 FUN_140e389c0 body=518 status=ok
// SIG undefined FUN_140e389c0(void)

undefined1 * FUN_140e389c0(longlong param_1,undefined1 *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28 [2];
  
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  local_48 = *(longlong *)(param_1 + 0x38);
  if (local_48 != 0) {
    local_40 = *(longlong **)(param_1 + 0x40);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    lVar3 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar3 + 0x18),&local_38,&local_48);
    plVar4 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    lVar3 = local_38;
    if (local_38 != 0) {
      pplVar7 = (longlong **)(local_38 + 0x88);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      local_28[0] = plVar4;
      if (plVar4 != (longlong *)0x0) {
        plVar4[1] = param_1;
        *plVar4 = (longlong)&DAT_143f3ed00;
        plVar4[2] = (longlong)FUN_140e34670;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar5;
        *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
      if (local_28 != pplVar7) {
        if (plVar4 == (longlong *)0x0) {
          if ((*(int *)(lVar3 + 0x90) != 0) && (plVar6 = *pplVar7, plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 0x28))(plVar6,0);
            if (*pplVar7 != (longlong *)0x0) {
              plVar6 = (longlong *)FMemory::Realloc(*pplVar7,0,0);
              *pplVar7 = plVar6;
            }
            *(undefined4 *)(lVar3 + 0x90) = 0;
          }
        }
        else {
          (**(code **)(*plVar4 + 0x30))(plVar4,pplVar7);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        local_28[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
        if (local_28[0] != (longlong *)0x0) {
          FMemory::Free(local_28[0]);
        }
      }
      FUN_142b66a80(local_38,param_3);
      *param_2 = 1;
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    return param_2;
  }
  return param_2;
}



// FUNCTION 140e38bd0 FUN_140e38bd0 body=111 status=ok
// SIG undefined FUN_140e38bd0(void)

void FUN_140e38bd0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong local_18 [2];
  
  *(undefined1 *)(param_1 + 0x40) = 0;
  FString::operator=(param_1 + 0x48);
  FString::operator=(param_1 + 0x58,param_3);
  local_18[0] = 0;
  local_18[1] = 0;
  FUN_140e37c00(param_1,param_2,param_3,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e38c40 FUN_140e38c40 body=107 status=ok
// SIG undefined FUN_140e38c40(void)

void FUN_140e38c40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  FUN_140e10a30(uVar1,"Signin_Notify_Response",param_2);
  if (*(longlong *)(param_2 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140e38cb0 FUN_140e38cb0 body=77 status=ok
// SIG undefined FUN_140e38cb0(void)

void FUN_140e38cb0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FString::operator=(param_1 + 0x80);
  FString::operator=(param_1 + 0x90,param_3);
  FUN_140e38420(param_1,param_2,param_3);
  return;
}



// FUNCTION 140e38d10 FUN_140e38d10 body=19 status=ok
// SIG undefined FUN_140e38d10(void)

void FUN_140e38d10(undefined8 param_1,undefined1 param_2)

{
  FUN_140e38d30(param_1,param_1,param_2,DAT_146870228);
  return;
}



// FUNCTION 140e38d30 FUN_140e38d30 body=1184 status=ok
// SIG undefined FUN_140e38d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140e38d30(longlong *param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_158 [32];
  uint local_138;
  uint local_130;
  undefined1 *local_128;
  char local_118;
  undefined1 local_117;
  undefined1 local_116 [6];
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  longlong local_f8;
  int local_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  longlong *local_c8;
  longlong *local_c0;
  undefined1 local_b0;
  ushort local_ae;
  undefined1 local_a8 [16];
  longlong *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  if (param_2 == (longlong *)0x0) {
    param_2 = param_1;
  }
  local_118 = param_3;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar7 = DAT_146b33f38;
  lVar12 = DAT_146b33f38 + 0xa0;
  lVar6 = FWeakObjectPtr::Get(lVar12);
  if (lVar6 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar7 + 0xa8)) {
      return 0;
    }
    local_110 = 0;
    if (*(longlong *)(lVar7 + 0xb0) == 0) {
      return 0;
    }
    lVar6 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar12,lVar6);
    if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar7 + 0xa8) = DAT_1464b56f4;
    }
    lVar6 = FWeakObjectPtr::Get(lVar12);
    if (lVar6 == 0) {
      return 0;
    }
  }
  lVar7 = FUN_1413bd170();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
      lVar7 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return 0;
  }
  uVar8 = FWmfMediaPlayer::GetSamples(lVar6);
  lVar7 = FUN_140c42900(param_1,uVar8);
  if (lVar7 != 0) {
    local_110 = lVar7;
    lVar12 = AWeaponBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
        != lVar12 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140e38ea4;
  }
  local_110 = 0;
LAB_140e38ea4:
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar7 != 0) {
    pbVar9 = (byte *)FUN_1412bf420(lVar6,&local_117);
    bVar2 = *pbVar9;
    local_108 = 0;
    local_100 = 0;
    lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar7 != 0) {
      uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar8,&local_f8);
      while( true ) {
        if ((local_f0 < 0) || (*(int *)(local_f8 + 8) <= local_f0)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) break;
        lVar7 = FWeakObjectPtr::Get();
        if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x488), lVar7 != 0)) {
          lVar12 = FUN_1413f82e0();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) &&
             (iVar5 = (**(code **)(*(longlong *)(lVar7 + 0x8b0) + 0x20))
                                ((longlong *)(lVar7 + 0x8b0),param_1), uVar4 = local_100, iVar5 != 2
             )) {
            lVar12 = (longlong)(int)local_100;
            iVar5 = (int)local_100 + 1;
            local_100 = CONCAT44(local_100._4_4_,iVar5);
            if (local_100._4_4_ < iVar5) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (&local_108,uVar4 & 0xffffffff);
            }
            *(longlong *)(local_108 + lVar12 * 8) = lVar7;
          }
        }
        local_f0 = local_f0 + 1;
      }
    }
    local_130 = (uint)bVar2;
    local_138 = local_138 & 0xffffff00;
    FUN_14307c640(local_78,param_2,param_4,&local_108);
    if (local_108 != 0) {
      FMemory::Free();
    }
    lVar7 = (**(code **)(*param_2 + 0x688))(param_2);
    plVar10 = param_1;
    if (lVar7 != 0) {
      plVar10 = (longlong *)(**(code **)(*param_2 + 0x688))(param_2);
    }
    plVar11 = (longlong *)FUN_1412c3120(lVar6,local_a8);
    lVar7 = 0;
    if (*plVar11 != 0) {
      lVar12 = FUN_1413ac760();
      for (lVar6 = *plVar11; (lVar7 = 0, lVar6 != 0 && (lVar7 = *plVar11, lVar6 != lVar12));
          lVar6 = *(longlong *)(lVar6 + 0x30)) {
      }
    }
    uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    FActorSpawnParameters::FActorSpawnParameters(local_d8);
    local_ae = local_ae | 4;
    local_b0 = 0;
    if ((lVar7 != 0) &&
       (local_c8 = param_2, local_c0 = plVar10, lVar7 = FUN_142550d00(uVar8,lVar7,local_78,local_d8)
       , lVar7 != 0)) {
      lVar6 = FUN_1413ac760();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if ((param_1[0x591] != 0) && (local_118 != '\0')) {
          local_128 = local_116;
          uStack_e0 = 0;
          uStack_90 = 0;
          local_130 = local_130 & 0xffffff00;
          local_138 = 0xbf800000;
          local_e8 = param_1;
          local_98 = param_1;
          FUN_142c8e590(local_88,param_1[0x591],&local_98,2);
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_80 + 1;
            lVar6 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_80)(local_80);
              LOCK();
              piVar1 = (int *)((longlong)local_80 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*local_80 + 8))(local_80,1);
              }
            }
          }
        }
        FUN_140b30a70(lVar7,local_110);
        UGameplayStatics::FinishSpawningActor(lVar7,local_78);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x4a2,0);
        return lVar7;
      }
    }
  }
  return 0;
}



// FUNCTION 140e391d0 FUN_140e391d0 body=18 status=ok
// SIG undefined FUN_140e391d0(void)

void FUN_140e391d0(undefined8 param_1)

{
  FUN_140e38d30(param_1,param_1,1,DAT_146870228);
  return;
}



// FUNCTION 140e391f0 FUN_140e391f0 body=893 status=ok
// SIG undefined FUN_140e391f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140e391f0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if ((param_2 == (longlong *)0x0) || (cVar3 = FUN_140bca8a0(param_2), cVar3 != '\0')) {
    return 0;
  }
  if ((*(int *)(param_1 + 0x288) != -1) || (*(longlong *)(param_1 + 0x290) != 0)) {
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  if (*(int *)(param_1 + 0x2c4) < 8) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x2b8,8);
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(int *)(param_1 + 0x2d4) < 8) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x2c8,8);
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(param_1 + 0x2b8,8);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed(param_1 + 0x2c8,8);
  lVar5 = (**(code **)(*param_2 + 0x148))(param_2);
  if (*(longlong *)(lVar5 + 400) == 0) {
    uVar8 = *(undefined8 *)(lVar5 + 0x3f8);
  }
  else {
    uVar8 = *(undefined8 *)(*(longlong *)(lVar5 + 400) + 0x90);
  }
  plVar9 = (longlong *)(param_1 + 0x298);
  if (((*(int *)(param_1 + 0x2a0) == 0) || ((longlong *)*plVar9 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)*plVar9 + 0x18))(), cVar3 == '\0')) {
    uStack_c0 = 0;
    local_c8 = FUN_140e1ca70;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar6 != (longlong *)0x0) {
      *plVar6 = (longlong)&PTR_FUN_1444f84e8;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = (undefined4)local_c8;
      *(undefined4 *)((longlong)plVar6 + 0x14) = local_c8._4_4_;
      *(undefined4 *)(plVar6 + 3) = uStack_c0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_bc;
      *(undefined1 *)(plVar6 + 4) = 0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar5;
      *plVar6 = (longlong)&PTR_FUN_1444f8530;
    }
    if (&local_c8 != plVar9) {
      if (plVar6 == (longlong *)0x0) {
        if ((*(int *)(param_1 + 0x2a0) != 0) &&
           (plVar2 = (longlong *)*plVar9, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar9 != 0) {
            lVar5 = FMemory::Realloc(*plVar9,0,0);
            *plVar9 = lVar5;
          }
          *(undefined4 *)(param_1 + 0x2a0) = 0;
        }
      }
      else {
        (**(code **)(*plVar6 + 0x30))(plVar6,plVar9);
      }
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      lVar5 = FMemory::Realloc(plVar6,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
  }
  lVar5 = DAT_146870208;
  cVar3 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar3 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar4 = GetCurrentThreadId();
    lVar7 = 4;
    if (DVar4 != DAT_1468c21c0) goto LAB_140e3943e;
  }
  lVar7 = 0;
LAB_140e3943e:
  uVar1 = *(undefined4 *)(lVar7 + lVar5);
  local_b8 = 0;
  local_b0 = 0;
  if (((plVar9 != &local_b8) && (*(int *)(param_1 + 0x2a0) != 0)) &&
     (plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0)) {
    (**(code **)(*plVar9 + 0x30))(plVar9,&local_b8);
  }
  FWeakObjectPtr::operator=(local_a8,0);
  local_d0 = 0xbf800000;
  local_d8 = 1;
  local_a0 = 0;
  local_68 = (longlong *)0x0;
  local_58 = 0;
  local_98 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar8,param_1 + 0x290,&local_b8,uVar1);
  if (local_58 != 0) {
    plVar9 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar9 = local_68;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
  return 1;
}



// FUNCTION 140e39570 FUN_140e39570 body=851 status=ok
// SIG undefined FUN_140e39570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e39570(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_118 [32];
  float local_f8;
  uint local_f0;
  undefined1 local_e8;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  (**(code **)(*param_1 + 0x918))(param_1,1);
  if ((char)param_1[199] == '\x01') {
    (**(code **)(*param_1 + 0x9c0))(param_1);
    return;
  }
  fVar8 = (float)(**(code **)(*param_1 + 0x7e8))();
  lVar4 = *param_1;
  uVar3 = (**(code **)(lVar4 + 0x7f0))(param_1);
  local_e8 = 0;
  local_f0 = local_f0 & 0xffffff00;
  local_f8 = fVar8;
  (**(code **)(lVar4 + 0x990))(param_1,&local_d8,uVar3,0x3f800000);
  plVar6 = local_d0;
  param_1[0x134] = (longlong)local_d8;
  plVar5 = (longlong *)param_1[0x135];
  if (local_d0 != plVar5) {
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_d0 + 0xc) = *(int *)((longlong)local_d0 + 0xc) + 1;
      UNLOCK();
      plVar5 = (longlong *)param_1[0x135];
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
    param_1[0x135] = (longlong)plVar6;
  }
  if (fVar8 <= 0.0) {
    if (local_d8 != (longlong *)0x0) {
      fVar8 = (float)(**(code **)(*local_d8 + 0x58))();
    }
    if (fVar8 <= 0.01) {
      fVar8 = 0.01;
    }
  }
  if ((local_d8 != (longlong *)0x0) &&
     (lVar4 = (**(code **)(*param_1 + 0x148))(param_1), lVar4 != 0)) {
    lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    if ((*(longlong *)(lVar4 + 400) != 0) && (*(longlong *)(*(longlong *)(lVar4 + 400) + 0xa0) != 0)
       ) {
      local_c8 = &LAB_140e15304;
      uVar7 = 0;
      uStack_c0 = 0;
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      if (*(longlong *)(lVar4 + 400) != 0) {
        uVar7 = *(undefined8 *)(*(longlong *)(lVar4 + 400) + 0xa0);
      }
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      local_b8 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(plVar5 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_bc;
        lVar4 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar4;
        *plVar5 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_a8 = 0;
      local_a0 = 0;
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,&local_a8);
      }
      FWeakObjectPtr::operator=(local_98,0);
      local_f0 = 0xbf800000;
      local_f8 = (float)((uint)local_f8 & 0xffffff00);
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar7,param_1 + 0xca,&local_a8,fVar8);
      if (local_48 != 0) {
        plVar6 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar6 = local_58;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        local_b8 = (longlong *)FMemory::Realloc(plVar5,0,0);
        if (local_b8 != (longlong *)0x0) {
          FMemory::Free(local_b8);
        }
      }
      goto LAB_140e3985a;
    }
  }
  (**(code **)(*param_1 + 0x9c0))(param_1);
LAB_140e3985a:
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_d0 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar1 = (int *)((longlong)local_d0 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_d0 + 8))(local_d0,1);
      }
    }
  }
  return;
}



// FUNCTION 140e398d0 FUN_140e398d0 body=700 status=ok
// SIG undefined FUN_140e398d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e398d0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  undefined1 auStack_118 [32];
  float local_f8;
  uint local_f0;
  undefined1 local_e8;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  *(undefined1 *)((longlong)param_1 + 0x661) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  if (*(char *)((longlong)param_1 + 0x639) == '\x01') {
    (**(code **)(*param_1 + 0x9c8))();
  }
  else {
    uVar3 = FUN_14307ba30();
    fVar8 = (float)FUN_14307c4a0(param_1);
    local_e8 = 0;
    local_f0 = local_f0 & 0xffffff00;
    local_f8 = fVar8;
    (**(code **)(*param_1 + 0x990))(param_1,&local_d8,uVar3,0x3f800000);
    plVar7 = local_d0;
    param_1[0x134] = (longlong)local_d8;
    plVar5 = (longlong *)param_1[0x135];
    if (local_d0 != plVar5) {
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_d0 + 0xc) = *(int *)((longlong)local_d0 + 0xc) + 1;
        UNLOCK();
        plVar5 = (longlong *)param_1[0x135];
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
      param_1[0x135] = (longlong)plVar7;
    }
    if (fVar8 <= 0.0) {
      if (local_d8 != (longlong *)0x0) {
        fVar8 = (float)(**(code **)(*local_d8 + 0x58))();
      }
      if (fVar8 <= 0.01) {
        fVar8 = 0.01;
      }
    }
    uStack_c0 = 0;
    local_c8 = &LAB_140e15310;
    uVar4 = AActor::GetWorldTimerManager(param_1);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    local_b8 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      *(undefined4 *)(plVar5 + 2) = (undefined4)local_c8;
      *(undefined4 *)((longlong)plVar5 + 0x14) = local_c8._4_4_;
      *(undefined4 *)(plVar5 + 3) = uStack_c0;
      *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_bc;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[5] = lVar6;
      *plVar5 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_a8 = 0;
    local_a0 = 0;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_f0 = 0xbf800000;
    local_f8 = (float)((uint)local_f8 & 0xffffff00);
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar4,param_1 + 0xce,&local_a8,fVar8);
    if (local_48 != 0) {
      plVar7 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar7 = local_58;
      }
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x10))(plVar7,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      local_b8 = (longlong *)FMemory::Realloc(plVar5,0,0);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free(local_b8);
      }
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_d0 + 1;
      lVar6 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_d0 + 8))(local_d0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e39b90 FUN_140e39b90 body=95 status=ok
// SIG undefined FUN_140e39b90(void)

void FUN_140e39b90(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  FUN_140c596e0();
  cVar3 = FUN_140e83450(param_1 + 0x790,param_2);
  if ((cVar3 != '\0') && (lVar1 = *(longlong *)(param_1 + -0x468), lVar1 != 0)) {
    uVar2 = UTextBlock::GetPrivateStaticClass();
    cVar3 = FUN_142c736c0(lVar1,uVar2);
    if (cVar3 != '\0') {
      FUN_140e26ad0(param_1 + -0xd88);
    }
  }
  return;
}



// FUNCTION 140e39bf0 FUN_140e39bf0 body=121 status=ok
// SIG undefined FUN_140e39bf0(void)

void FUN_140e39bf0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1422312c0();
  if (lVar1 != 0) {
    lVar1 = FUN_1422312c0(param_1);
    FUN_142880530(*(undefined8 *)(lVar1 + 0xa0),param_1 + 0x680);
    *(undefined8 *)(param_1 + 0x680) = 0;
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FUN_142c848a0(*(longlong *)(param_1 + 0x458),*(undefined8 *)(param_1 + 0x648));
    FUN_142c848a0(*(undefined8 *)(param_1 + 0x458),*(undefined8 *)(param_1 + 0x620));
    return;
  }
  return;
}



// FUNCTION 140e39c70 FUN_140e39c70 body=465 status=ok
// SIG undefined FUN_140e39c70(void)

void FUN_140e39c70(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  
  local_48 = *(longlong *)(param_1 + 0x38);
  if (local_48 != 0) {
    local_40 = *(longlong **)(param_1 + 0x40);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    lVar3 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar3 + 0x18),&local_58,&local_48);
    plVar4 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_40 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    if (local_58 != 0) {
      TBaseMulticastDelegate<void>::Remove(local_58 + 0x1b0,*(undefined8 *)(param_1 + 0x58));
      lVar3 = local_58;
      plVar8 = (longlong *)(local_58 + 0x1b0);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      local_38 = plVar4;
      if (plVar4 != (longlong *)0x0) {
        plVar4[1] = param_1;
        *plVar4 = (longlong)&DAT_143f3ed00;
        plVar4[2] = (longlong)FUN_140e39e50;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar5;
        *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
      uVar7 = 0;
      if (plVar4 != (longlong *)0x0) {
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar8,1);
        puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
        iVar2 = *(int *)(lVar3 + 0x1b8);
        uVar7 = *puVar6;
        *(int *)(lVar3 + 0x1b8) = iVar2 + 1;
        if (*(int *)(lVar3 + 0x1bc) < iVar2 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar2);
        }
        puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar8);
        *puVar6 = plVar4;
        *(undefined4 *)(puVar6 + 1) = 3;
      }
      *(undefined8 *)(param_1 + 0x58) = uVar7;
      FUN_142b64c90(local_58,param_2);
    }
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
  return;
}



// FUNCTION 140e39e50 FUN_140e39e50 body=604 status=ok
// SIG undefined FUN_140e39e50(void)

void FUN_140e39e50(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  void *local_78;
  ulonglong local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  void *local_40;
  int local_38;
  int local_34;
  void *local_30;
  undefined8 local_28;
  
  FUN_140e22ff0(&local_78);
  local_40 = (void *)0x0;
  local_34 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  local_48[0] = 0;
  iVar6 = (int)local_70;
  local_38 = iVar6;
  local_70._0_4_ = iVar6;
  if (iVar6 != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_70 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_40,local_78,(longlong)iVar6 * 2);
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    local_60 = *(longlong **)(param_1 + 0x40);
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
      iVar6 = (int)local_70;
    }
    local_68 = lVar4;
    lVar4 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar4 + 0x18),&local_58,&local_68);
    plVar5 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_60 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      iVar6 = (int)local_70;
      if ((int)lVar4 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        iVar6 = (int)local_70;
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
          iVar6 = (int)local_70;
        }
      }
    }
    if (local_58 != 0) {
      TBaseMulticastDelegate<void>::Remove(local_58 + 0x1b0,*(undefined8 *)(param_1 + 0x58));
      local_48[0] = param_2 == 0;
      if (param_2 == 0) {
        local_38 = 0;
        if (local_34 != 0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_40,0);
        }
        local_28 = CONCAT44(local_28._4_4_,iVar6);
        if ((iVar6 == 0) && (local_28._4_4_ == 0)) {
          local_28 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,iVar6);
          _guard_xfg_dispatch_icall_nop(local_30,local_78,(longlong)iVar6 * 2);
        }
        UFmodSingleShipComponent::SetKineticWaterComponentDynamicNull(local_58);
        FUN_140e282c0(param_1);
      }
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_50 + 1;
      lVar4 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x28) + 0xf8))();
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x198))(plVar5);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x50))(plVar5,"Submit_SHiFT_Code_Notify_Response",1);
    FUN_140e0f240(plVar5,local_48);
    (**(code **)(*plVar5 + 0x58))(plVar5);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e3a0c0 FUN_140e3a0c0 body=1141 status=ok
// SIG undefined FUN_140e3a0c0(void)

undefined8 FUN_140e3a0c0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  longlong *local_230;
  longlong *local_220;
  code *local_218;
  undefined4 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8 [8];
  undefined1 local_1f0 [8];
  longlong *local_1e8;
  undefined1 local_1d8 [49];
  undefined1 local_1a7;
  undefined1 local_108 [208];
  
  lVar9 = 0;
  local_208 = 0;
  local_200 = 0;
  lVar4 = FUN_1412c3780(&local_208,param_1);
  if (lVar4 == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_1412abc20(lVar4,param_1);
  }
  lVar4 = FUN_14222e280(param_1);
  if (lVar4 != 0) {
    lVar5 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (((bVar10) && (*(char *)(lVar4 + 0x5e0) != '\0')) && (param_1[0x484] != 0)) {
      FUN_142eb3990();
    }
  }
  if ((cVar2 == '\0') && (param_1[0x596] != 0)) {
    lVar5 = FUN_142e20fc0();
    for (lVar4 = param_1[0x596]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
      if (lVar4 == lVar5) {
        if (param_1[0x596] != 0) {
          uVar6 = FUN_142e27720();
          lVar4 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
          if (lVar4 == 0) {
            return 0;
          }
          lVar5 = param_1[0x58e];
          if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x978) != 0)) &&
             (*(longlong *)(lVar5 + 0x1a90) != 0)) {
            FUN_142d9dd60(*(longlong *)(lVar5 + 0x978),*(longlong *)(lVar5 + 0x1a90),DAT_14686e078,0
                         );
          }
          FUN_142c62180(local_1d8);
          local_1a7 = 1;
          if ((param_1[0x54f] == 0) || (param_1[0x550] == 0)) goto LAB_140e3a2fc;
          piVar1 = (int *)(param_1[0x550] + 8);
          LOCK();
          iVar3 = *piVar1;
          if (iVar3 == 0) {
            *piVar1 = 0;
            iVar3 = 0;
          }
          UNLOCK();
          if (iVar3 < 1) goto LAB_140e3a2fc;
          local_230 = (longlong *)param_1[0x550];
          lVar5 = lVar9;
          if (local_230 == (longlong *)0x0) goto LAB_140e3a2b4;
          LOCK();
          iVar3 = (int)local_230[1];
          bVar10 = iVar3 == 0;
          if (bVar10) {
            *(int *)(local_230 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x000140e3a287;
        }
        break;
      }
    }
  }
  uVar6 = (**(code **)(*param_1 + 0x500))(param_1,param_2,param_3,0,0);
  return uVar6;
joined_r0x000140e3a287:
  if (bVar10) goto LAB_140e3a2a7;
  LOCK();
  bVar10 = iVar3 == (int)local_230[1];
  if (bVar10) {
    *(int *)(local_230 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar10) {
    lVar5 = param_1[0x54f];
    goto LAB_140e3a2b4;
  }
  LOCK();
  iVar3 = (int)local_230[1];
  bVar10 = iVar3 == 0;
  if (bVar10) {
    *(int *)(local_230 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x000140e3a287;
LAB_140e3a2a7:
  lVar5 = 0;
  local_230 = (longlong *)0x0;
LAB_140e3a2b4:
  FUN_140483870(lVar5 + 0x58,param_1);
  if (local_230 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_230 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_230)(local_230);
      LOCK();
      piVar1 = (int *)((longlong)local_230 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_230 + 8))(local_230,1);
      }
    }
  }
LAB_140e3a2fc:
  uVar6 = FUN_1405e0fd0(local_108,local_1d8);
  plVar7 = (longlong *)FUN_142c7bb40(lVar4,local_1f0,param_1[0x596],uVar6,0);
  param_1[0x54f] = *plVar7;
  plVar7 = (longlong *)plVar7[1];
  plVar8 = (longlong *)param_1[0x550];
  if (plVar7 != plVar8) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = (longlong *)param_1[0x550];
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    param_1[0x550] = (longlong)plVar7;
  }
  if (local_1e8 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_1e8 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_1e8)(local_1e8);
      LOCK();
      piVar1 = (int *)((longlong)local_1e8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_1e8 + 8))(local_1e8,1);
      }
    }
  }
  if ((param_1[0x54f] != 0) && (param_1[0x550] != 0)) {
    piVar1 = (int *)(param_1[0x550] + 8);
    LOCK();
    iVar3 = *piVar1;
    if (iVar3 == 0) {
      *piVar1 = 0;
      iVar3 = 0;
    }
    UNLOCK();
    if (0 < iVar3) {
      local_220 = (longlong *)param_1[0x550];
      local_218 = FUN_140e2e8f0;
      uStack_210 = 0;
      if (local_220 != (longlong *)0x0) {
        LOCK();
        iVar3 = (int)local_220[1];
        bVar10 = iVar3 == 0;
        if (bVar10) {
          *(int *)(local_220 + 1) = 0;
          iVar3 = 0;
        }
        UNLOCK();
        while (!bVar10) {
          LOCK();
          bVar10 = iVar3 == (int)local_220[1];
          if (bVar10) {
            *(int *)(local_220 + 1) = iVar3 + 1;
          }
          UNLOCK();
          if (bVar10) {
            lVar9 = param_1[0x54f];
            goto LAB_140e3a444;
          }
          LOCK();
          iVar3 = (int)local_220[1];
          bVar10 = iVar3 == 0;
          if (bVar10) {
            *(int *)(local_220 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
        }
        lVar9 = 0;
        local_220 = (longlong *)0x0;
      }
LAB_140e3a444:
      TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                (lVar9 + 0x58,local_1f8,param_1,&local_218);
      if (local_220 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_220 + 1;
        lVar9 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*local_220)(local_220);
          LOCK();
          piVar1 = (int *)((longlong)local_220 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_220 + 8))(local_220,1);
          }
        }
      }
      if (param_1[0x122] != 0) {
        FUN_142d15b40(param_1[0x122],0);
      }
      param_1[0x598] = *param_2;
      *(int *)(param_1 + 0x599) = (int)param_2[1];
      *(undefined8 *)((longlong)param_1 + 0x2ccc) = *param_3;
      *(undefined4 *)((longlong)param_1 + 0x2cd4) = *(undefined4 *)(param_3 + 1);
      FUN_142c63c50(local_1d8);
      return 1;
    }
  }
  FUN_142c63c50(local_1d8);
  return 0;
}



// FUNCTION 140e3a540 FUN_140e3a540 body=637 status=ok
// SIG undefined FUN_140e3a540(void)

void FUN_140e3a540(longlong *param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  
  FUN_1422406d0();
  cVar2 = FUN_140e96340(param_1 + 0x2a3);
  if (cVar2 == '\0') {
    if ((char)param_1[0x49d] != '\0') {
      *(undefined1 *)(param_1 + 0x4ce) = 0;
      *(undefined1 *)(param_1 + 0x49d) = 0;
    }
  }
  else {
    lVar5 = param_1[0x2a3];
    lVar6 = (longlong)(int)param_1[0x2a4] * 0xf8 + lVar5;
    for (; lVar5 != lVar6; lVar5 = lVar5 + 0xf8) {
      lVar1 = *(longlong *)(lVar5 + 8);
      if ((lVar1 != 0) &&
         ((((cVar2 = FUN_14307ecd0(lVar1), cVar2 != '\0' ||
            (cVar2 = FUN_14307ebb0(lVar1), cVar2 != '\0')) ||
           (cVar2 = FUN_14307ec50(lVar1), cVar2 != '\0')) ||
          ((cVar2 = FUN_14307ede0(lVar1), cVar2 != '\0' ||
           (cVar2 = FUN_14307eaf0(lVar1), cVar2 != '\0')))))) {
        if ((char)param_1[0x49d] == '\0') {
          *(undefined1 *)(param_1 + 0x49d) = 1;
          *(undefined2 *)(param_1 + 0x4ce) = 1;
          param_1[0x4d0] = 0;
          *(undefined4 *)(param_1 + 0x4d1) = 0xbf800000;
        }
        goto LAB_140e3a636;
      }
    }
    if ((char)param_1[0x49d] != '\0') {
      *(undefined1 *)(param_1 + 0x49d) = 0;
      *(undefined1 *)(param_1 + 0x4ce) = 0;
    }
  }
LAB_140e3a636:
  FUN_140e3b670(param_1,param_2);
  cVar2 = FUN_140c491e0(param_1);
  if (cVar2 == '\0') {
    fVar8 = *(float *)(param_1 + 0x590) - param_2;
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0x590) = fVar8;
    bVar3 = *(float *)((longlong)param_1 + 0x2bb4) <= fVar8 &&
            fVar8 != *(float *)((longlong)param_1 + 0x2bb4);
  }
  else {
    fVar8 = *(float *)(param_1 + 0x590) + param_2;
    fVar7 = *(float *)(param_1 + 0x576) + 0.1;
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
    *(float *)(param_1 + 0x590) = fVar8;
    if (((char)param_1[0x578] != '\0') || (*(float *)(param_1 + 0x576) < fVar8)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  *(bool *)(param_1 + 0x578) = bVar3;
  FUN_140e3a7c0(param_1,param_2);
  cVar2 = (**(code **)(*param_1 + 0x778))(param_1);
  if (cVar2 == '\0') {
    lVar5 = (**(code **)(*param_1 + 0x690))(param_1);
    if (lVar5 == 0) goto LAB_140e3a794;
    cVar2 = FUN_140e53910(param_1 + 0x4de,DAT_146870868);
    cVar4 = FUN_140e375d0(param_1);
    if ((cVar2 == cVar4) || (cVar4 != '\0')) goto LAB_140e3a794;
  }
  else {
    cVar2 = FUN_140e53910(param_1 + 0x4de,DAT_146870868);
    cVar4 = FUN_140e375d0(param_1);
    if (cVar2 == cVar4) goto LAB_140e3a794;
    if (cVar4 != '\0') {
      FUN_140e1df50(param_1,0,DAT_146870868,0,1);
      goto LAB_140e3a794;
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x24d1) & 4) == 0) {
    FUN_140e3c160(param_1,0,DAT_146870868,1);
  }
LAB_140e3a794:
  FUN_140e60040(param_1 + 0x4de,param_2);
  FUN_140e3a9f0(param_1,param_2);
  return;
}



// FUNCTION 140e3a7c0 FUN_140e3a7c0 body=556 status=ok
// SIG undefined FUN_140e3a7c0(void)

void FUN_140e3a7c0(longlong param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    if (*(float *)(param_1 + 0x2af4) <= 0.0) {
      *(undefined4 *)(param_1 + 0x2afc) = 0;
      return;
    }
    plVar4 = (longlong *)FUN_140c46a10(param_1,0);
    if ((plVar4 != (longlong *)0x0) &&
       (plVar5 = (longlong *)(**(code **)(plVar4[0x8c] + 0x10))(plVar4 + 0x8c,(char)plVar4[0xd2]),
       plVar5 != (longlong *)0x0)) {
      iVar1 = (**(code **)(*plVar5 + 0x418))(plVar5);
      if (iVar1 < 1) {
        iVar1 = (**(code **)(*plVar5 + 0x440))(plVar5);
        iVar2 = (**(code **)(*plVar5 + 0x438))(plVar5);
        fVar9 = (float)iVar1;
        uVar6 = UMovieSceneAudioSection::GetPrivateStaticClass();
        lVar7 = (**(code **)(*plVar4 + 0x7f8))(plVar4,uVar6,(char)plVar4[0xd2]);
        fVar10 = fVar9;
        if (lVar7 != 0) {
          if (*(float *)(lVar7 + 0x1a4) <= 0.0) {
            iVar3 = 0;
          }
          else {
            fVar10 = 1.0 / *(float *)(lVar7 + 0x1a4);
            iVar3 = -((int)ROUND(-0.5 - (fVar10 + fVar10)) >> 1);
          }
          fVar10 = (float)*(int *)(lVar7 + 0x238) + (float)iVar3;
          if (fVar9 <= fVar10) {
            fVar10 = fVar9;
          }
          if (DAT_146b33f38 == 0) {
            FUN_142d7ebe0();
          }
          if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
            fVar10 = fVar10 * *(float *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x23c);
          }
        }
      }
      else {
        iVar1 = (**(code **)(*plVar5 + 0x418))();
        iVar2 = (**(code **)(*plVar5 + 0x420))(plVar5);
        fVar10 = (float)iVar1;
      }
      if (plVar5[0x30] != 0) {
        fVar10 = fVar10 * *(float *)(plVar5[0x30] + 0x68);
      }
      if (iVar1 <= iVar2) {
        return;
      }
      fVar10 = fVar10 * *(float *)(param_1 + 0x2af4) * param_2 + *(float *)(param_1 + 0x2afc);
      uVar8 = (ulonglong)fVar10;
      *(float *)(param_1 + 0x2afc) = fVar10;
      if ((int)uVar8 == 0) {
        return;
      }
      *(float *)(param_1 + 0x2afc) = fVar10 - (float)(uVar8 & 0xffffffff);
      (**(code **)(*plVar4 + 0x810))(plVar4,uVar8 & 0xffffffff,1,0);
      return;
    }
    *(undefined4 *)(param_1 + 0x2afc) = 0;
  }
  return;
}



// FUNCTION 140e3a9f0 FUN_140e3a9f0 body=348 status=ok
// SIG undefined FUN_140e3a9f0(void)

void FUN_140e3a9f0(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (*(int *)(param_1 + 0x2d00) != 0) {
    uVar7 = 0;
    plVar1 = (longlong *)(param_1 + 0x2cf8);
    pfVar5 = (float *)*plVar1;
    uVar8 = (longlong)*(int *)(param_1 + 0x2d00) & 0x3fffffffffffffff;
    if (pfVar5 + *(int *)(param_1 + 0x2d00) < pfVar5) {
      uVar8 = uVar7;
    }
    if (uVar8 != 0) {
      uVar9 = uVar7;
      if (0xf < uVar8) {
        do {
          uVar9 = uVar9 + 0x10;
          *pfVar5 = *pfVar5 - param_2;
          pfVar5[1] = pfVar5[1] - param_2;
          pfVar5[2] = pfVar5[2] - param_2;
          pfVar5[3] = pfVar5[3] - param_2;
          pfVar5[4] = pfVar5[4] - param_2;
          pfVar5[5] = pfVar5[5] - param_2;
          pfVar5[6] = pfVar5[6] - param_2;
          pfVar5[7] = pfVar5[7] - param_2;
          pfVar5[8] = pfVar5[8] - param_2;
          pfVar5[9] = pfVar5[9] - param_2;
          pfVar5[10] = pfVar5[10] - param_2;
          pfVar5[0xb] = pfVar5[0xb] - param_2;
          pfVar5[0xc] = pfVar5[0xc] - param_2;
          pfVar5[0xd] = pfVar5[0xd] - param_2;
          pfVar5[0xe] = pfVar5[0xe] - param_2;
          pfVar5[0xf] = pfVar5[0xf] - param_2;
          pfVar5 = pfVar5 + 0x10;
        } while (uVar9 != (uVar8 & 0xfffffffffffffff0));
      }
      for (; uVar9 != uVar8; uVar9 = uVar9 + 1) {
        *pfVar5 = *pfVar5 - param_2;
        pfVar5 = pfVar5 + 1;
      }
    }
    iVar3 = *(int *)(param_1 + 0x2d00);
    uVar8 = uVar7;
    if (0 < iVar3) {
      do {
        lVar2 = *plVar1;
        iVar6 = (int)uVar7;
        if (0.0 < *(float *)(uVar8 + lVar2)) {
          uVar7 = (ulonglong)(iVar6 + 1);
          uVar8 = uVar8 + 4;
        }
        else {
          iVar4 = (iVar3 - iVar6) + -1;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar2 + (longlong)iVar6 * 4),
                       (void *)(lVar2 + (longlong)(iVar3 - iVar4) * 4),(longlong)iVar4 << 2);
            iVar3 = *(int *)(param_1 + 0x2d00);
          }
          *(int *)(param_1 + 0x2d00) = iVar3 + -1;
          TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar1);
          iVar3 = *(int *)(param_1 + 0x2d00);
        }
      } while ((int)uVar7 < iVar3);
    }
    FUN_140e16ef0(param_1);
  }
  return;
}



// FUNCTION 140e3ab50 FUN_140e3ab50 body=2191 status=ok
// SIG undefined FUN_140e3ab50(void)

void FUN_140e3ab50(longlong param_1,float param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  longlong *local_e8;
  int local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined4 *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 *local_60;
  undefined8 local_58;
  undefined1 local_50 [40];
  
  FUN_142357eb0();
  local_78 = FUN_140e24a80(param_1);
  if ((*(char *)(param_1 + 0x3f8) == '\0') && (local_78 != 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0(0,local_78);
    }
    lVar11 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar11 != 0) {
      local_80 = *(longlong **)(lVar11 + 0x1098);
      plVar10 = local_80 + *(int *)(lVar11 + 0x10a0);
      local_70 = (code *)plVar10;
      if (local_80 != plVar10) {
        do {
          plVar1 = (longlong *)*local_80;
          if (((plVar1 != (longlong *)0x0) && (0 < (int)plVar1[0x69])) &&
             (cVar4 = (**(code **)(*plVar1 + 0x280))(plVar1,local_78), cVar4 == '\0')) {
            puVar13 = (undefined4 *)plVar1[0x68];
            puVar16 = puVar13 + (longlong)(int)plVar1[0x69] * 10;
            local_60 = puVar16;
            if (puVar13 != puVar16) {
              puVar13 = puVar13 + 1;
              local_a8 = 0;
              lVar11 = 0;
              do {
                local_d8 = puVar13[-1];
                local_d4 = *puVar13;
                local_d0 = puVar13[1];
                local_58 = *(undefined8 *)(puVar13 + 3);
                local_c0 = 0;
                local_b8 = 0;
                local_c8 = lVar11;
                local_88 = puVar13;
                FString::FString(local_50,puVar13 + 5);
                FSoftObjectPath::operator=(&local_c8,&local_58);
                lVar7 = FWeakObjectPtr::Get(&local_d8);
                puVar14 = puVar13;
                if (lVar7 == 0) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  if ((DAT_1464b56f4 != local_d0) && (local_a0 = 0, local_c8 != 0)) {
                    lVar7 = FUN_141796df0(&local_c8);
                    FWeakObjectPtr::operator=(&local_d8,lVar7);
                    if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      local_d0 = DAT_1464b56f4;
                    }
                    lVar7 = FWeakObjectPtr::Get(&local_d8);
                    if (lVar7 != 0) goto LAB_140e3ad45;
                  }
                }
                else {
LAB_140e3ad45:
                  lVar8 = FUN_14144e630();
                  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    lVar7 = FWeakObjectPtr::Get(&local_d8);
                    if (lVar7 == 0) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      if ((DAT_1464b56f4 != local_d0) && (local_98 = 0, local_c8 != 0)) {
                        lVar7 = FUN_141796df0(&local_c8);
                        FWeakObjectPtr::operator=(&local_d8,lVar7);
                        if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
                          LOCK();
                          if (DAT_1464b56f4 == 0) {
                            DAT_1464b56f4 = 0;
                          }
                          UNLOCK();
                          local_d0 = DAT_1464b56f4;
                        }
                        lVar7 = FWeakObjectPtr::Get(&local_d8);
                        if (lVar7 != 0) goto LAB_140e3adf9;
                      }
LAB_140e3ae2f:
                      lVar7 = 0;
                    }
                    else {
LAB_140e3adf9:
                      lVar8 = FUN_14144e630();
                      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                        bVar3 = false;
                      }
                      else {
                        bVar3 = true;
                      }
                      if (!bVar3) goto LAB_140e3ae2f;
                    }
                    local_b0 = *(longlong **)(lVar7 + 0xa8);
                    plVar10 = local_b0 + *(int *)(lVar7 + 0xb0);
                    local_90 = plVar10;
                    if (local_b0 != plVar10) {
                      do {
                        lVar11 = *local_b0;
                        if (lVar11 != 0) {
                          plVar15 = *(longlong **)(lVar11 + 0x38);
                          plVar1 = plVar15 + *(int *)(lVar11 + 0x40);
                          for (; plVar15 != plVar1; plVar15 = plVar15 + 1) {
                            lVar7 = *plVar15;
                            if (lVar7 != 0) {
                              lVar8 = FUN_14144ef80();
                              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) <
                                   *(int *)(lVar8 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                                bVar3 = false;
                              }
                              else {
                                bVar3 = true;
                              }
                              if ((bVar3) && (lVar7 = *(longlong *)(lVar7 + 0x88), lVar7 != 0)) {
                                lVar8 = FUN_1413e0560();
                                if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) <
                                     *(int *)(lVar8 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                                  bVar3 = false;
                                }
                                else {
                                  bVar3 = true;
                                }
                                if (bVar3) {
                                  plVar10 = (longlong *)(param_1 + 1000);
                                  plVar2 = (longlong *)*plVar10;
                                  iVar5 = *(int *)(param_1 + 0x3f0);
                                  for (plVar9 = plVar2; plVar9 != plVar2 + iVar5;
                                      plVar9 = plVar9 + 1) {
                                    if (*plVar9 == lVar7) {
                                      if ((int)((longlong)plVar9 - (longlong)plVar2 >> 3) != -1)
                                      goto LAB_140e3af6a;
                                      break;
                                    }
                                  }
                                  *(int *)(param_1 + 0x3f0) = iVar5 + 1;
                                  if (*(int *)(param_1 + 0x3f4) < iVar5 + 1) {
                                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::
                                    ResizeGrow(plVar10,iVar5);
                                  }
                                  *(longlong *)(*plVar10 + (longlong)iVar5 * 8) = lVar7;
                                }
                              }
                            }
LAB_140e3af6a:
                            plVar10 = local_90;
                          }
                          plVar15 = *(longlong **)(lVar11 + 0x48);
                          plVar1 = plVar15 + *(int *)(lVar11 + 0x50);
                          for (; plVar15 != plVar1; plVar15 = plVar15 + 1) {
                            lVar11 = *plVar15;
                            if (lVar11 != 0) {
                              lVar7 = FUN_14144ef80();
                              if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) <
                                   *(int *)(lVar7 + 0x90)) ||
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                bVar3 = false;
                              }
                              else {
                                bVar3 = true;
                              }
                              if ((bVar3) && (lVar11 = *(longlong *)(lVar11 + 0x88), lVar11 != 0)) {
                                lVar7 = FUN_1413e0560();
                                if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) <
                                     *(int *)(lVar7 + 0x90)) ||
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
                                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                                  bVar3 = false;
                                }
                                else {
                                  bVar3 = true;
                                }
                                if (bVar3) {
                                  plVar10 = (longlong *)(param_1 + 1000);
                                  plVar2 = (longlong *)*plVar10;
                                  iVar5 = *(int *)(param_1 + 0x3f0);
                                  for (plVar9 = plVar2; plVar9 != plVar2 + iVar5;
                                      plVar9 = plVar9 + 1) {
                                    if (*plVar9 == lVar11) {
                                      if ((int)((longlong)plVar9 - (longlong)plVar2 >> 3) != -1)
                                      goto LAB_140e3b07a;
                                      break;
                                    }
                                  }
                                  *(int *)(param_1 + 0x3f0) = iVar5 + 1;
                                  if (*(int *)(param_1 + 0x3f4) < iVar5 + 1) {
                                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::
                                    ResizeGrow(plVar10,iVar5);
                                  }
                                  *(longlong *)(*plVar10 + (longlong)iVar5 * 8) = lVar11;
                                }
                              }
                            }
LAB_140e3b07a:
                            plVar10 = local_90;
                          }
                        }
                        local_b0 = local_b0 + 1;
                        lVar11 = local_a8;
                        puVar14 = local_88;
                        puVar16 = local_60;
                      } while (local_b0 != plVar10);
                    }
                  }
                }
                if (local_c0 != 0) {
                  FMemory::Free();
                }
                puVar13 = puVar14 + 10;
                plVar10 = (longlong *)local_70;
                local_88 = puVar13;
              } while (puVar14 + 9 != puVar16);
            }
          }
          local_80 = local_80 + 1;
        } while (local_80 != plVar10);
      }
    }
    *(undefined1 *)(param_1 + 0x3f8) = 1;
  }
  plVar10 = (longlong *)FUN_140e24a80(param_1);
  if ((((((plVar10 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar10 + 0x768))(plVar10), cVar4 != '\0')) &&
        (*(char *)(param_1 + 0x408) != '\0')) &&
       (((plVar10 = (longlong *)FUN_140e24a80(param_1), plVar10 == (longlong *)0x0 ||
         (lVar11 = (**(code **)(*plVar10 + 0xfa8))(plVar10), lVar11 == 0)) ||
        (lVar11 = (**(code **)(*plVar10 + 0xfa8))(plVar10), *(int *)(lVar11 + 0x48) < 1)))) &&
      ((plVar10 = (longlong *)FUN_140e24a80(param_1), plVar10 != (longlong *)0x0 &&
       (cVar4 = (**(code **)(*plVar10 + 0x768))(plVar10), cVar4 != '\0')))) &&
     (cVar4 = FUN_140d02370(plVar10), cVar4 != '\0')) {
    lVar11 = FUN_140e50d60(param_1,*(undefined8 *)(param_1 + 0x2a0));
    if (lVar11 == 0) {
LAB_140e3b204:
      lVar11 = 0;
    }
    else {
      lVar7 = FUN_1413e0560();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140e3b204;
    }
    if (lVar11 != *(longlong *)(param_1 + 0x3e0)) {
      *(longlong *)(param_1 + 0x3e0) = lVar11;
      FUN_1412ed530(param_1,lVar11);
    }
    if (*(char *)(param_1 + 0x408) != '\0') {
      *(undefined1 *)(param_1 + 0x408) = 0;
    }
  }
  iVar5 = FUN_14233f450(param_1);
  if (iVar5 != 3) {
    return;
  }
  if (*(longlong *)(param_1 + 0x3c8) == 0) {
    param_2 = *(float *)(param_1 + 0x400) - param_2;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)(param_1 + 0x400) = param_2;
    if (0.0 < param_2) {
      return;
    }
    cVar4 = FUN_140e1aba0(param_1,0);
    if ((cVar4 != '\0') && (*(int *)(param_1 + 0x3fc) == -1)) {
      uStack_68 = 0;
      local_e8 = (longlong *)0x0;
      local_70 = FUN_140e2d210;
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      local_e0 = 3;
      local_e8 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_144089920;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        *(undefined4 *)(plVar10 + 2) = (undefined4)local_70;
        *(undefined4 *)((longlong)plVar10 + 0x14) = local_70._4_4_;
        *(undefined4 *)(plVar10 + 3) = uStack_68;
        *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_64;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar11;
        *plVar10 = (longlong)&PTR_FUN_144089968;
      }
      uVar6 = FUN_142d369f0(param_1 + 0x2a8,*(undefined8 *)(param_1 + 0x118),&local_e8);
      *(undefined4 *)(param_1 + 0x3fc) = uVar6;
      if (local_e0 != 0) {
        if (local_e8 == (longlong *)0x0) goto LAB_140e3b368;
        (**(code **)(*local_e8 + 0x28))(local_e8,0);
        if (local_e8 != (longlong *)0x0) {
          local_e8 = (longlong *)FMemory::Realloc(local_e8,0,0);
        }
        local_e0 = 0;
      }
      if (local_e8 != (longlong *)0x0) {
        FMemory::Free(local_e8);
      }
    }
LAB_140e3b368:
    *(undefined4 *)(param_1 + 0x400) = 0x40000000;
    return;
  }
  param_2 = *(float *)(param_1 + 0x404) - param_2;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0x404) = param_2;
  if (0.0 < param_2) {
    return;
  }
  cVar4 = FUN_1412edac0(param_1,*(undefined8 *)(param_1 + 0x3d8));
  if (cVar4 == '\0') {
    uVar12 = 1;
  }
  else {
    cVar4 = FUN_140e1aba0(param_1,0);
    if (cVar4 != '\0') goto LAB_140e3b3c0;
    uVar12 = 0;
  }
  FUN_140e33e10(param_1,uVar12);
LAB_140e3b3c0:
  *(undefined4 *)(param_1 + 0x404) = 0x40000000;
  return;
}



// FUNCTION 140e3b3e0 FUN_140e3b3e0 body=282 status=ok
// SIG undefined FUN_140e3b3e0(void)

void FUN_140e3b3e0(longlong param_1,float param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_48;
  float local_40;
  float local_30;
  
  FUN_142357eb0();
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x2c8);
  if (cVar1 != '\0') {
    lVar3 = FUN_140e20840(param_1,*(undefined8 *)(param_1 + 0x2d0));
    lVar4 = FUN_140e247a0(param_1,*(undefined8 *)(param_1 + 0x2c0));
    local_40 = 1.0;
    if (((*(char *)(param_1 + 0x2f0) != '\0') && (lVar3 != 0)) && (lVar4 != 0)) {
      plVar5 = (longlong *)FRuntimeFloatCurve::GetRichCurve(lVar3 + 0x60);
      iVar2 = (**(code **)(*plVar5 + 8))(plVar5);
      if (0 < iVar2) {
        param_2 = param_2 + *(float *)(param_1 + 0x2f4);
        *(float *)(param_1 + 0x2f4) = param_2;
        uVar6 = FRuntimeFloatCurve::GetRichCurve(lVar3 + 0x60);
        fVar7 = (float)FRichCurve::Eval(uVar6,param_2,0);
        local_40 = fVar7 * *(float *)(lVar4 + 0x38) + 1.0;
      }
    }
    local_48 = CONCAT44(local_40,local_40);
    local_30 = local_40;
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x2c8);
    FUN_14223cd40(uVar6,&local_48);
  }
  return;
}



// FUNCTION 140e3b500 FUN_140e3b500 body=362 status=ok
// SIG undefined FUN_140e3b500(void)

void FUN_140e3b500(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  
  FUN_142357eb0();
  if (0 < *(int *)(param_1 + 0x270)) {
    plVar9 = *(longlong **)(param_1 + 600);
    plVar1 = plVar9 + *(int *)(param_1 + 0x260);
    for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
      if ((*plVar9 != 0) && (plVar4 = (longlong *)FUN_142dcdc10(param_1), plVar4 != (longlong *)0x0)
         ) {
        lVar5 = FUN_141410430();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          puVar8 = *(undefined8 **)(param_1 + 0x268);
          puVar2 = puVar8 + (longlong)*(int *)(param_1 + 0x270) * 5;
          for (; puVar8 != puVar2; puVar8 = puVar8 + 5) {
            uVar6 = (ulonglong)*(float *)(puVar8 + 3);
            if ((longlong)uVar6 < 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = 0x7fffffff;
              if ((longlong)uVar6 < 0x7fffffff) {
                uVar7 = uVar6;
              }
            }
            (**(code **)(*plVar4 + 0x2a0))
                      (plVar4,uVar7 & 0xffffffff,*(undefined4 *)((longlong)puVar8 + 0x1c),puVar8 + 2
                       ,*puVar8,puVar8[1],*(undefined1 *)(puVar8 + 4),
                       *(undefined1 *)((longlong)puVar8 + 0x21));
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x270) = 0;
    if (*(int *)(param_1 + 0x274) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x268,0);
      return;
    }
  }
  return;
}



// FUNCTION 140e3b670 FUN_140e3b670 body=763 status=ok
// SIG undefined FUN_140e3b670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e3b670(longlong param_1,float param_2)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_408 [32];
  undefined8 local_3e8;
  float local_3e0;
  float local_3dc;
  float fStack_3d8;
  undefined1 local_3c8 [896];
  char local_48;
  ulonglong local_38;
  longlong lVar11;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_408;
  if (*(char *)(param_1 + 0x2670) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x128) == '\x01') {
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x490);
  lVar11 = 0;
  lVar10 = 0;
  if (lVar9 == 0) {
LAB_140e3b709:
    lVar9 = lVar11;
  }
  else {
    lVar6 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e3b709;
  }
  lVar6 = *(longlong *)(param_1 + 0x938);
  if ((lVar9 == 0) || (lVar6 == 0)) {
    *(undefined1 *)(param_1 + 0x2671) = 0;
    return;
  }
  FUN_142dc1ad0(local_3c8);
  cVar4 = FUN_142dcd6e0(lVar6,local_3c8,0);
  if (cVar4 != '\0') {
    lVar6 = FWeakObjectPtr::Get(local_3c8);
    lVar7 = FUN_142dd0030(local_3c8);
    if (lVar6 != 0) {
      lVar8 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140e3b8cd;
    }
    if (((*(longlong *)(param_1 + 0x908) != 0) && (lVar7 != 0)) &&
       (lVar11 = lVar10, local_48 == '\0')) {
      lVar10 = *(longlong *)(param_1 + 0x168);
      if (lVar10 == 0) {
        local_3e8 = _DAT_1468b5d90;
        local_3e0 = DAT_1468b5d98;
      }
      else {
        local_3e8 = *(undefined8 *)(lVar10 + 0x220);
        local_3e0 = *(float *)(lVar10 + 0x228);
      }
      fVar3 = local_3e0;
      uVar2 = local_3e8;
      lVar10 = *(longlong *)(lVar7 + 0x168);
      if (lVar10 == 0) {
        local_3e8 = _DAT_1468b5d90;
        local_3e0 = DAT_1468b5d98;
      }
      else {
        local_3e8 = *(undefined8 *)(lVar10 + 0x220);
        local_3e0 = *(float *)(lVar10 + 0x228);
      }
      fStack_3d8 = (float)((ulonglong)uVar2 >> 0x20);
      fStack_3d8 = (float)((ulonglong)local_3e8 >> 0x20) - fStack_3d8;
      local_3dc = (float)uVar2;
      local_3dc = (float)local_3e8 - local_3dc;
      if ((fStack_3d8 * fStack_3d8 + local_3dc * local_3dc +
           (local_3e0 - fVar3) * (local_3e0 - fVar3) <
           *(float *)(param_1 + 0x2674) * *(float *)(param_1 + 0x2674)) &&
         (*(char *)(lVar9 + 0x1378) != '\0')) {
        lVar11 = lVar7;
      }
    }
  }
LAB_140e3b8cd:
  lVar9 = *(longlong *)(param_1 + 0x2680);
  if (*(longlong *)(param_1 + 0x2680) != lVar11) {
    *(longlong *)(param_1 + 0x2680) = lVar11;
    if (lVar11 == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x267c);
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x2678);
    }
    *(undefined4 *)(param_1 + 0x2688) = uVar5;
    lVar9 = lVar11;
  }
  if ((0.0 <= *(float *)(param_1 + 0x2688)) &&
     (param_2 = *(float *)(param_1 + 0x2688) - param_2, *(float *)(param_1 + 0x2688) = param_2,
     param_2 < 0.0)) {
    *(bool *)(param_1 + 0x2671) = lVar9 != 0;
  }
  return;
}



// FUNCTION 140e3b970 FUN_140e3b970 body=59 status=ok
// SIG undefined FUN_140e3b970(void)

void FUN_140e3b970(longlong param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x24d1);
  if (((bVar1 & 2) == 0) && (0 < param_2)) {
    *(byte *)(param_1 + 0x24d1) = bVar1 | 2;
    FUN_141400b30(param_1,1);
    return;
  }
  if (((bVar1 & 2) != 0) && (param_2 == 0)) {
    *(byte *)(param_1 + 0x24d1) = bVar1 & 0xfd;
    FUN_141400b30();
    return;
  }
  return;
}



// FUNCTION 140e3b9b0 FUN_140e3b9b0 body=31 status=ok
// SIG undefined FUN_140e3b9b0(void)

undefined8 FUN_140e3b9b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x78))();
  *(bool *)param_3 = *piVar1 != 0;
  return 1;
}



// FUNCTION 140e3b9d0 FUN_140e3b9d0 body=34 status=ok
// SIG undefined FUN_140e3b9d0(void)

undefined8 FUN_140e3b9d0(longlong *param_1,undefined8 param_2,float *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x78))();
  *param_3 = (float)*piVar1;
  return 1;
}



// FUNCTION 140e3ba00 FUN_140e3ba00 body=47 status=ok
// SIG undefined FUN_140e3ba00(void)

void FUN_140e3ba00(longlong *param_1,undefined8 param_2,char *param_3,__uint64 *param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x78))();
                    /* WARNING: Could not recover jumptable at 0x000140e3ba28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  cohtml::CoherentToString<int>::Invoke(*piVar1,param_3,param_4);
  return;
}



// FUNCTION 140e3ba30 FUN_140e3ba30 body=238 status=ok
// SIG undefined FUN_140e3ba30(void)

void FUN_140e3ba30(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(char *)(param_1 + 0x240) == '\0') {
    lVar5 = FUN_140e814c0();
    if ((lVar5 != 0) &&
       (plVar6 = (longlong *)FUN_1409ab480(lVar5,local_res8,*(undefined8 *)(param_1 + 0x288)),
       *plVar6 != 0)) {
      lVar7 = FUN_14144bcb0();
      lVar5 = *plVar6;
      for (lVar3 = lVar5; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar7) goto LAB_140e3ba92;
      }
    }
    lVar5 = 0;
LAB_140e3ba92:
    lVar5 = FUN_140e20840(param_1,lVar5);
    if ((((lVar5 != 0) && (*(longlong *)(param_1 + 0x218) != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x920), lVar3 != 0)) &&
       ((cVar4 = FUN_142c736c0(lVar3,*(undefined8 *)(lVar5 + 0x40)), cVar4 == '\0' &&
        (FUN_140e8b4b0(param_1,local_18,*(undefined8 *)(lVar5 + 0x40),0),
        local_10 != (longlong *)0x0)))) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar5 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
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
  }
  return;
}



// FUNCTION 140e3bb20 thunk_FUN_141400bf0 body=5 status=ok
// SIG undefined thunk_FUN_141400bf0(void)

void thunk_FUN_141400bf0(void)

{
  FUN_141400bf0();
  return;
}



// FUNCTION 140e3bb30 FUN_140e3bb30 body=685 status=ok
// SIG undefined FUN_140e3bb30(void)

void FUN_140e3bb30(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined1 local_d0 [8];
  longlong *local_c8;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined1 local_88 [56];
  undefined1 local_50 [56];
  
  local_108 = param_1;
  local_100 = param_2;
  local_f8 = param_3;
  local_f0 = param_4;
  uVar6 = FWeakObjectPtr::Get(param_1 + 0x38);
  cVar4 = FUN_140bc9f60(uVar6);
  if ((cVar4 == '\0') || (1 < *(int *)(param_4 + 8))) {
    uVar6 = FWeakObjectPtr::Get(param_1 + 0x38);
    iVar5 = FUN_140bba450(uVar6);
    if ((iVar5 < 1) || (1 < *(int *)(param_4 + 8))) {
      FUN_140e25960(param_1,&local_118);
      if (local_118 != 0) {
        FUN_142b6e600(local_118,param_2,param_3,param_4);
      }
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_110 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar2 = (int *)((longlong)local_110 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_110 + 8))(local_110,1);
          }
        }
      }
    }
    else {
      uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_a0,
                         L"Signing into a new SHiFT account will kick all group members from your party. Are you sure you would like to proceed?"
                         ,L"Overlay",L"HostKickUsersMessage");
      uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                        (local_b8,L"Kick Networked Players?",L"Overlay",L"HostKickUsers");
      FUN_140b99a50(local_50,uVar7,uVar6);
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_b0 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar2 = (int *)((longlong)local_b0 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_b0 + 8))(local_b0,1);
          }
        }
      }
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)local_98 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_98 + 8))(local_98,1);
          }
        }
      }
      FUN_140e150b0(&local_108,local_50);
      FUN_140b9cdd0(local_50);
    }
  }
  else {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_d0,
                       L"Signing into a new SHiFT account will kick you from your current group. Are you sure you would like to proceed?"
                       ,L"Overlay",L"ClientKickUsersMessage");
    uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_e8,L"Quit Game?",L"Overlay",L"ClientKickUsers");
    FUN_140b99a50(local_88,uVar7,uVar6);
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_e0 + 8))(local_e0,1);
        }
      }
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c8 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)local_c8 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_c8 + 8))(local_c8,1);
        }
      }
    }
    FUN_140e150b0(&local_108,local_88);
    FUN_140b9cdd0(local_88);
  }
  return;
}



// FUNCTION 140e3bde0 FUN_140e3bde0 body=882 status=ok
// SIG undefined FUN_140e3bde0(void)

ulonglong FUN_140e3bde0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong **pplVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  char local_res10 [8];
  char local_res18 [8];
  undefined4 local_res20;
  undefined4 local_res24;
  longlong *local_218;
  longlong *plStack_210;
  undefined8 local_208;
  undefined1 local_200 [8];
  undefined1 local_1f8 [8];
  longlong *local_1f0;
  longlong *local_1e8;
  undefined1 local_1d8 [49];
  undefined1 local_1a7;
  undefined1 local_108 [208];
  
  local_res10[0] = '\0';
  cVar4 = FUN_140e1ad90(param_1,local_res10);
  if (cVar4 == '\0') {
    uVar5 = (**(code **)(*param_1 + 0x778))(param_1);
    cVar4 = local_res10[0];
    if ((char)uVar5 != '\0') {
      local_res18[0] = local_res10[0];
      uVar5 = TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (param_1 + 0x4cc,local_res18);
      lVar7 = param_1[0x58e];
      if (((lVar7 != 0) && (*(char *)(lVar7 + 0x1954) != '\0')) && (cVar4 == '\x04')) {
        uVar5 = FUN_140ab72e0(lVar7,0);
      }
    }
    return uVar5 & 0xffffffffffffff00;
  }
  local_218 = (longlong *)0x0;
  plStack_210 = (longlong *)0x0;
  if (param_1[0x4d7] != 0) {
    lVar6 = FUN_142e20fc0();
    for (lVar7 = param_1[0x4d7]; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
      if (lVar7 == lVar6) {
        if (param_1[0x4d7] != 0) {
          local_208 = FUN_142e27720();
          lVar7 = (**(code **)(*param_1 + 0x628))(param_1,local_208);
          if (lVar7 != 0) {
            FUN_142c62180(local_1d8);
            local_1a7 = 3;
            uVar8 = FUN_1405e0fd0(local_108,local_1d8);
            pplVar9 = (longlong **)FUN_142c7bb40(lVar7,local_1f8,param_1[0x4d7],uVar8,0);
            if (&local_218 != pplVar9) {
              local_218 = *pplVar9;
              *pplVar9 = (longlong *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_210,pplVar9 + 1);
            }
            if (local_1f0 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_1f0 + 1;
              lVar7 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar7 == 1) {
                (**(code **)*local_1f0)(local_1f0);
                LOCK();
                piVar1 = (int *)((longlong)local_1f0 + 0xc);
                iVar3 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar3 == 1) {
                  (**(code **)(*local_1f0 + 8))(local_1f0,1);
                }
              }
            }
            plVar2 = local_218;
            if (local_218 != (longlong *)0x0) {
              *(undefined2 *)(param_1 + 0x4ce) = 1;
              param_1[0x4d0] = 0;
              *(undefined4 *)(param_1 + 0x4d1) = 0xbf800000;
              FWeakObjectPtr::operator=(&local_res20,param_1);
              plVar10 = (longlong *)FMemory::Realloc(0,0x20);
              local_1e8 = plVar10;
              if (plVar10 != (longlong *)0x0) {
                *plVar10 = (longlong)&PTR_GetPoolName_144599c08;
                *(undefined4 *)(plVar10 + 1) = local_res20;
                *(undefined4 *)((longlong)plVar10 + 0xc) = local_res24;
                lVar7 = FDelegateHandle::GenerateNewID();
                plVar10[3] = lVar7;
                *plVar10 = (longlong)&PTR_GetPoolName_144599c50;
                FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar2 + 0xb,1);
                (**(code **)(*plVar10 + 0x20))(plVar10,local_200);
                iVar3 = (int)plVar2[0xc];
                *(int *)(plVar2 + 0xc) = iVar3 + 1;
                if (*(int *)((longlong)plVar2 + 100) < iVar3 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar2 + 0xb,iVar3);
                }
                puVar11 = (undefined8 *)((longlong)iVar3 * 0x10 + plVar2[0xb]);
                *puVar11 = plVar10;
                *(undefined4 *)(puVar11 + 1) = 2;
              }
            }
            FUN_142c63c50(local_1d8);
            if ((plVar2 != (longlong *)0x0) &&
               (cVar4 = (**(code **)(*plVar2 + 0x38))(plVar2), cVar4 == '\0')) {
              lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
              if (lVar7 == 0) {
                uVar12 = 0;
              }
              else {
                lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
                uVar12 = *(undefined4 *)(lVar7 + 0x790);
              }
              *(undefined4 *)((longlong)param_1 + 0x2c84) = uVar12;
              if (*(byte *)(param_1 + 0x25) < 3) {
                FUN_141400c30(param_1);
              }
              uVar5 = 1;
              goto LAB_140e3bec1;
            }
          }
        }
        break;
      }
    }
  }
  uVar5 = 0;
LAB_140e3bec1:
  plVar2 = plStack_210;
  if (plStack_210 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_210 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_210)(plStack_210);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_210 + 8))(plStack_210,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 140e3c160 FUN_140e3c160 body=171 status=ok
// SIG undefined FUN_140e3c160(void)

void FUN_140e3c160(longlong *param_1,ulonglong param_2,longlong param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  
  if (param_3 == 0) {
    param_3 = DAT_146870860;
  }
  FUN_140e61570(param_1 + 0x4de,param_2,param_3);
  if (param_4 != '\0') {
    cVar1 = FUN_140e66930(param_1 + 0x4de);
    if ((cVar1 != '\0') && (cVar1 = FUN_140e53810(param_1 + 0x4de), cVar1 != '\0')) {
      return;
    }
    if ((char)param_1[0x25] == '\x03') {
      *(undefined1 *)(param_1 + 0x556) = 0;
      *(char *)((longlong)param_1 + 0x2ab1) = (char)param_2;
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0x4a8))(param_1);
      if (lVar2 != 0) {
        FUN_141400c70(param_1,param_2 & 0xff);
      }
    }
  }
  return;
}



// FUNCTION 140e3c210 FUN_140e3c210 body=332 status=ok
// SIG undefined FUN_140e3c210(void)

void FUN_140e3c210(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_48 [24];
  longlong local_30;
  
  plVar1 = (longlong *)(param_1 + 0x188);
  lVar7 = *plVar1;
  lVar8 = (longlong)*(int *)(param_1 + 400) * 0x30 + lVar7;
  do {
    if (lVar7 == lVar8) {
LAB_140e3c2a9:
      lVar7 = *(longlong *)(param_1 + 0x120);
      if (lVar7 == 0) {
        lVar7 = FUN_1423407b0(param_1);
      }
      FUN_140e7e6f0(lVar7);
      uVar6 = FUN_140e13310(local_48,param_2,0);
      iVar3 = FUN_140e1f530(plVar1,uVar6);
      if (iVar3 == -1) {
        iVar3 = *(int *)(param_1 + 400);
        *(int *)(param_1 + 400) = iVar3 + 1;
        if (*(int *)(param_1 + 0x194) < iVar3 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        FUN_140e13260((longlong)iVar3 * 0x30 + *plVar1,uVar6);
      }
      if (local_30 != 0) {
        FMemory::Free();
      }
LAB_140e3c325:
      iVar3 = FUN_14233f450(param_1);
      if (iVar3 == 3) {
        FUN_140e16390(param_1,param_2);
      }
      return;
    }
    lVar4 = FUN_1405ec200(lVar7);
    if (lVar4 == 0) {
LAB_140e3c292:
      lVar4 = 0;
    }
    else {
      lVar5 = FUN_1414a9b90();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140e3c292;
    }
    if (lVar4 == param_2) {
      if (lVar7 != 0) goto LAB_140e3c325;
      goto LAB_140e3c2a9;
    }
    lVar7 = lVar7 + 0x30;
  } while( true );
}



// FUNCTION 140e3c360 FUN_140e3c360 body=236 status=ok
// SIG undefined FUN_140e3c360(void)

void FUN_140e3c360(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  int local_10;
  
  if (((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x148))(), lVar3 != 0)) &&
     (iVar2 = FUN_1428cf800(lVar3), iVar2 != 3)) {
    UWorld::GetPlayerControllerIterator(lVar3,&local_18);
    while( true ) {
      if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      lVar3 = FWeakObjectPtr::Get();
      if (lVar3 != 0) {
        lVar4 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if ((bVar1) && (lVar3 = *(longlong *)(lVar3 + 0xc68), lVar3 != 0)) {
          FUN_141305e60(lVar3,param_2);
          FUN_140e16390(lVar3,param_2);
        }
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}



// FUNCTION 140e3c450 FUN_140e3c450 body=808 status=ok
// SIG undefined FUN_140e3c450(void)

void FUN_140e3c450(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte bVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  byte bVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong *local_78;
  longlong *local_58;
  undefined8 local_50;
  
  plVar14 = *(longlong **)(param_1 + 0x528);
  plVar1 = plVar14 + *(int *)(param_1 + 0x530);
  do {
    if (plVar14 == plVar1) {
      return;
    }
    lVar2 = *plVar14;
    if (lVar2 != 0) {
      plVar4 = (longlong *)FWeakObjectPtr::Get(lVar2 + 0x5d8);
      if (plVar4 == (longlong *)0x0) {
LAB_140e3c506:
        plVar4 = (longlong *)0x0;
      }
      else {
        lVar5 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_140e3c506;
      }
      if (((param_2 == (longlong *)0x0) || (plVar4 == param_2)) && (plVar4 != (longlong *)0x0)) {
        uVar6 = FUN_142e035e0();
        lVar5 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar6);
        if (lVar5 != 0) {
          local_58 = (longlong *)0x0;
          local_50 = 0;
          uVar6 = FUN_142dcee70(param_1);
          TMultiMap<UObject_*,UObject_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,UObject_*,1>_>
          ::MultiFind<FDefaultAllocator>(uVar6,param_3,&local_58,0);
          local_78 = (longlong *)0x0;
          plVar4 = (longlong *)
                   ((ulonglong)((longlong)(local_58 + (int)local_50) + (7 - (longlong)local_58)) >>
                   3);
          if (local_58 + (int)local_50 < local_58) {
            plVar4 = (longlong *)0x0;
          }
          plVar7 = local_58;
          if (plVar4 != (longlong *)0x0) {
            do {
              iVar17 = 0;
              plVar11 = *(longlong **)(param_1 + 0x548);
              lVar5 = *plVar7;
              plVar8 = plVar11 + (longlong)*(int *)(param_1 + 0x550) * 5;
              for (; plVar11 != plVar8; plVar11 = plVar11 + 5) {
                if ((plVar11[1] == lVar2) && (*plVar11 == lVar5)) {
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                }
                if (bVar3) {
                  if (plVar11 != (longlong *)0x0) {
                    FUN_140fde540(lVar2,plVar11 + 2);
                    lVar10 = (longlong)*(int *)(param_1 + 0x550);
                    if (*(int *)(param_1 + 0x550) != 0) {
                      iVar15 = 0;
                      lVar12 = 0;
                      if (((*(longlong **)(param_1 + 0x548))[1] == lVar2) &&
                         (**(longlong **)(param_1 + 0x548) == lVar5)) {
                        bVar13 = 0;
                      }
                      else {
                        bVar13 = 1;
                      }
                      do {
                        lVar12 = lVar12 + 1;
                        iVar16 = iVar15 + 1;
                        if (lVar12 < lVar10) {
                          plVar8 = (longlong *)(*(longlong *)(param_1 + 0x548) + lVar12 * 0x28);
                          do {
                            if ((plVar8[1] == lVar2) && (*plVar8 == lVar5)) {
                              bVar9 = 0;
                            }
                            else {
                              bVar9 = 1;
                            }
                            if (bVar13 != bVar9) break;
                            iVar16 = iVar16 + 1;
                            lVar12 = lVar12 + 1;
                            plVar8 = plVar8 + 5;
                          } while (lVar12 < lVar10);
                        }
                        if (bVar13 != 0) {
                          if (iVar17 != iVar15) {
                            _guard_xfg_dispatch_icall_nop
                                      ((void *)(*(longlong *)(param_1 + 0x548) +
                                               (longlong)iVar17 * 0x28),
                                       (void *)(*(longlong *)(param_1 + 0x548) +
                                               (longlong)iVar15 * 0x28),
                                       (longlong)(iVar16 - iVar15) * 0x28);
                          }
                          iVar17 = iVar17 + (iVar16 - iVar15);
                        }
                        bVar13 = bVar13 ^ 1;
                        iVar15 = iVar16;
                      } while (lVar12 < lVar10);
                      *(int *)(param_1 + 0x550) = iVar17;
                    }
                  }
                  break;
                }
              }
              local_78 = (longlong *)((longlong)local_78 + 1);
              plVar7 = plVar7 + 1;
            } while (local_78 != plVar4);
          }
          if (local_58 != (longlong *)0x0) {
            FMemory::Free(local_58);
          }
        }
      }
    }
    plVar14 = plVar14 + 1;
  } while( true );
}



// FUNCTION 140e3c780 FUN_140e3c780 body=51 status=ok
// SIG undefined FUN_140e3c780(void)

void FUN_140e3c780(longlong param_1,undefined4 *param_2)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  local_18 = *param_2;
  local_14 = param_2[1];
  local_10 = *(undefined8 *)(param_2 + 2);
  FUN_143094570(param_1 + -0x458,&local_18,1);
  return;
}



// FUNCTION 140e3c7c0 FUN_140e3c7c0 body=436 status=ok
// SIG undefined FUN_140e3c7c0(void)

void FUN_140e3c7c0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x38) < DAT_1468702b8) {
    _Init_thread_header(&DAT_1468702b8);
    if (DAT_1468702b8 == -1) {
      FName::FName(&DAT_1468702b0,L"HP_Left",1);
      _Init_thread_footer(&DAT_1468702b8);
    }
  }
  if (*(int *)(lVar1 + 0x38) < DAT_1468702c8) {
    _Init_thread_header(&DAT_1468702c8);
    if (DAT_1468702c8 == -1) {
      FName::FName(&DAT_1468702c0,L"HP_Right",1);
      _Init_thread_footer(&DAT_1468702c8);
    }
  }
  FUN_142cd83a0(param_1,param_2);
  fVar2 = (float)FUN_142274b40(param_1,&DAT_1468702b0);
  fVar3 = (float)FUN_142274b40(param_1,&DAT_1468702c0);
  *(bool *)(*(longlong *)(param_1 + 0x6d8) + 0xcf0) = 0.0 < fVar2;
  *(bool *)(*(longlong *)(param_1 + 0x6d8) + 0xcf1) = 0.0 < fVar3;
  *(float *)(*(longlong *)(param_1 + 0x6d8) + 0xcfc) =
       1.0 - *(float *)(*(longlong *)(param_1 + 0x6d8) + 0xcf8);
  *(float *)(*(longlong *)(param_1 + 0x6d8) + 0xd00) =
       1.0 - *(float *)(*(longlong *)(param_1 + 0x6d8) + 0xcf4);
  fVar2 = ((1.0 - fVar3) + fVar2) * 0.5;
  if (0.0 <= fVar2) {
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    *(float *)(*(longlong *)(param_1 + 0x6d8) + 0xd04) = fVar2;
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0xd04) = 0;
  }
  return;
}



// FUNCTION 140e3c9d0 FUN_140e3c9d0 body=68 status=ok
// SIG undefined FUN_140e3c9d0(void)

void FUN_140e3c9d0(longlong param_1,longlong param_2)

{
  FUN_140c5ba40();
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_1 + 0x1748);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x1750);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x1754);
  }
  return;
}



// FUNCTION 140e3ca20 FUN_140e3ca20 body=1253 status=ok
// SIG undefined FUN_140e3ca20(void)

void FUN_140e3ca20(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong *plStack_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
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
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
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
  
  lVar13 = *(longlong *)(param_1 + 0x9c0);
  lVar11 = 0;
  if (lVar13 == 0) {
LAB_140e3cae3:
    plVar8 = &local_c8;
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
    lVar13 = lVar11;
  }
  else {
    lVar7 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140e3cae3;
    lVar7 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140e3cae3;
    bVar6 = true;
    bVar5 = false;
    plVar8 = (longlong *)FUN_142dcf3a0(lVar13,local_b8);
    lVar13 = *plVar8;
  }
  plVar4 = (longlong *)plVar8[1];
  plVar8[1] = 0;
  *plVar8 = 0;
  plVar8 = plStack_c0;
  if ((bVar5) && (plStack_c0 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_c0 + 8))(plStack_c0,1);
      }
    }
  }
  if ((bVar6) && (local_b0 != (longlong *)0x0)) {
    LOCK();
    plVar8 = local_b0 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  lVar7 = FUN_1422312c0(param_1);
  if (lVar7 == 0) {
LAB_140e3cbe3:
    lVar7 = lVar11;
  }
  else {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140e3cbe3;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar9 = DAT_146b33f38;
  lVar16 = DAT_146b33f38 + 0xa0;
  lVar10 = FWeakObjectPtr::Get(lVar16);
  if (lVar10 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar9 + 0xa8)) && (*(longlong *)(lVar9 + 0xb0) != 0)) {
      lVar10 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar16,lVar10);
      if ((lVar10 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar9 + 0xa8) = DAT_1464b56f4;
      }
      lVar10 = FWeakObjectPtr::Get(lVar16);
      if (lVar10 != 0) goto LAB_140e3cc7c;
    }
LAB_140e3ccb8:
    lVar10 = lVar11;
  }
  else {
LAB_140e3cc7c:
    lVar9 = FUN_1413bd170();
    if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140e3ccb8;
  }
  if ((((lVar13 != 0) && (lVar7 != 0)) && (lVar10 != 0)) && (param_3 != 0)) {
    lVar11 = ULevel::GetWorld(lVar10);
    local_d8 = (undefined4)lVar13;
    uStack_d4 = (undefined4)((ulonglong)lVar13 >> 0x20);
    uStack_d0 = SUB84(plVar4,0);
    uStack_cc = (undefined4)((ulonglong)plVar4 >> 0x20);
    if (param_3 == lVar11) {
      local_a8 = local_d8;
      uStack_a4 = uStack_d4;
      uStack_a0 = uStack_d0;
      uStack_9c = uStack_cc;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      uVar12 = FUN_140bb7440(lVar7);
      uVar15 = 0x11;
      puVar14 = &local_a8;
    }
    else {
      lVar13 = FDuplicateDataWriter::GetSerializeContext(lVar10);
      if (param_3 == lVar13) {
        local_98 = local_d8;
        uStack_94 = uStack_d4;
        uStack_90 = uStack_d0;
        uStack_8c = uStack_cc;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        uVar12 = FUN_140bb7440(lVar7);
        uVar15 = 0x12;
        puVar14 = &local_98;
      }
      else {
        lVar13 = UMovieSceneSection::GetChannelProxy(lVar10);
        if (param_3 == lVar13) {
          local_88 = local_d8;
          uStack_84 = uStack_d4;
          uStack_80 = uStack_d0;
          uStack_7c = uStack_cc;
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          uVar12 = FUN_140bb7440(lVar7);
          uVar15 = 0x13;
          puVar14 = &local_88;
        }
        else {
          lVar13 = FUN_140585ca0(lVar10);
          if (param_3 == lVar13) {
            local_78 = local_d8;
            uStack_74 = uStack_d4;
            uStack_70 = uStack_d0;
            uStack_6c = uStack_cc;
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            uVar12 = FUN_140bb7440(lVar7);
            uVar15 = 0x14;
            puVar14 = &local_78;
          }
          else {
            lVar13 = FWmfMediaPlayer::GetSamples(lVar10);
            if (param_3 == lVar13) {
              local_68 = local_d8;
              uStack_64 = uStack_d4;
              uStack_60 = uStack_d0;
              uStack_5c = uStack_cc;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              uVar12 = FUN_140bb7440(lVar7);
              uVar15 = 0x15;
              puVar14 = &local_68;
            }
            else {
              lVar13 = UWeapon::GetStatusEffectOriginStats(lVar10);
              if (param_3 == lVar13) {
                local_58 = local_d8;
                uStack_54 = uStack_d4;
                uStack_50 = uStack_d0;
                uStack_4c = uStack_cc;
                if (plVar4 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                  UNLOCK();
                }
                uVar12 = FUN_140bb7440(lVar7);
                uVar15 = 0x16;
                puVar14 = &local_58;
              }
              else {
                lVar13 = FUN_1412bf1c0(lVar10);
                if (param_3 == lVar13) {
                  local_48 = local_d8;
                  uStack_44 = uStack_d4;
                  uStack_40 = uStack_d0;
                  uStack_3c = uStack_cc;
                  if (plVar4 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                    UNLOCK();
                  }
                  uVar12 = FUN_140bb7440(lVar7);
                  uVar15 = 0x17;
                  puVar14 = &local_48;
                }
                else {
                  lVar13 = ULevel::GetLevelScriptActor(lVar10);
                  if (param_3 != lVar13) goto LAB_140e3cead;
                  local_38 = local_d8;
                  uStack_34 = uStack_d4;
                  uStack_30 = uStack_d0;
                  uStack_2c = uStack_cc;
                  if (plVar4 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                    UNLOCK();
                  }
                  uVar12 = FUN_140bb7440(lVar7);
                  uVar15 = 0x18;
                  puVar14 = &local_38;
                }
              }
            }
          }
        }
      }
    }
    FUN_140d9f870(uVar12,puVar14,uVar15);
  }
LAB_140e3cead:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar4 + 1;
    lVar13 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
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



// FUNCTION 140e3cf10 FUN_140e3cf10 body=850 status=ok
// SIG undefined FUN_140e3cf10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e3cf10(longlong param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 == 0) {
    lVar3 = FUN_1423407b0();
  }
  if ((lVar3 == 0) || (lVar3 = UWorld::GetGameState<APVPGameState>(lVar3), lVar3 == 0)) {
LAB_140e3d0f8:
    if (*(longlong *)(param_1 + 0x118) != 0) {
      local_b8 = (code *)0x0;
      local_a8 = FUN_140e3cf10;
      uStack_a0 = 0;
      uVar7 = AActor::GetWorldTimerManager();
      plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar6 != (longlong *)0x0) {
        *plVar6 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar6 + 1,param_1);
        *(undefined4 *)(plVar6 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)plVar6 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(plVar6 + 3) = uStack_a0;
        *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_9c;
        lVar3 = FDelegateHandle::GenerateNewID();
        plVar6[5] = lVar3;
        *plVar6 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_98 = 0;
      local_90 = 0;
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x30))(plVar6,&local_98);
      }
      FWeakObjectPtr::operator=(local_88,0);
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_80 = 0;
      local_48 = (longlong *)0x0;
      local_38 = 0;
      local_78 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar7,&local_b8,&local_98,0x3dcccccd);
      if (local_38 != 0) {
        plVar4 = local_68;
        if (local_48 != (longlong *)0x0) {
          plVar4 = local_48;
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x10))(plVar4,0);
        }
      }
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        lVar3 = FMemory::Realloc(plVar6,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
    }
    return;
  }
  iVar2 = FUN_14233f450(param_1);
  if ((iVar2 == 3) && (*(longlong *)(lVar3 + 0x5a0) != 0)) {
    plVar4 = (longlong *)UAssetRegistryImpl::OnPathAdded();
    plVar6 = (longlong *)*plVar4;
    plVar4 = plVar6 + (longlong)(int)plVar4[1] * 2;
    for (; plVar6 != plVar4; plVar6 = plVar6 + 2) {
      if (*plVar6 != 0) {
        FUN_141305e20(param_1,*(undefined8 *)(*plVar6 + 0x30));
      }
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x5a0);
  if (lVar3 == 0) goto LAB_140e3d0f8;
  lVar5 = FUN_141484230();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_140e3d0f8;
  local_b8 = FUN_140e2c410;
  uStack_b0 = 0;
  plVar4 = (longlong *)(lVar3 + 0x558);
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    *(undefined4 *)(plVar6 + 2) = (undefined4)local_b8;
    *(undefined4 *)((longlong)plVar6 + 0x14) = local_b8._4_4_;
    *(undefined4 *)(plVar6 + 3) = uStack_b0;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_ac;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar5;
    *plVar6 = (longlong)&PTR_FUN_143f77bd0;
  }
  if (&local_a8 != plVar4) {
    if (plVar6 == (longlong *)0x0) {
      if ((*(int *)(lVar3 + 0x560) != 0) &&
         (plVar6 = (longlong *)*plVar4, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar4 != 0) {
          lVar5 = FMemory::Realloc(*plVar4,0,0);
          *plVar4 = lVar5;
        }
        *(undefined4 *)(lVar3 + 0x560) = 0;
        FUN_140e2c410(param_1);
        return;
      }
      goto LAB_140e3d0af;
    }
    (**(code **)(*plVar6 + 0x30))(plVar6,plVar4);
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6,0);
    lVar3 = FMemory::Realloc(plVar6,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
LAB_140e3d0af:
  FUN_140e2c410(param_1);
  return;
}



// FUNCTION 140e3d270 FUN_140e3d270 body=371 status=ok
// SIG undefined FUN_140e3d270(void)

void FUN_140e3d270(longlong param_1,ulonglong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar6 = *(longlong *)(param_1 + 0x618);
  if (lVar6 == 0) {
    return;
  }
  if ((*(byte *)(lVar6 + 0x24c) >> 6 & 1) == (byte)(param_2 ^ 1)) {
    return;
  }
  FUN_142397540(lVar6,param_2 ^ 1,1);
  if ((char)param_2 == '\0') {
    return;
  }
  if (param_3 != '\0') {
    return;
  }
  lVar6 = param_1 + 0x5c8;
  lVar5 = FWeakObjectPtr::Get(lVar6);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x5d0)) && (*(longlong *)(param_1 + 0x5d8) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar6,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x5d0) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar6);
      if (lVar5 != 0) goto LAB_140e3d346;
    }
  }
  else {
LAB_140e3d346:
    lVar6 = FUN_1413e04a0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_140e3d37f;
  }
  lVar5 = 0;
LAB_140e3d37f:
  FUN_140e309a0(param_1,local_18,lVar5,param_1 + 0x670);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  return;
}



// FUNCTION 140e3d3f0 FUN_140e3d3f0 body=729 status=ok
// SIG undefined FUN_140e3d3f0(void)

undefined8 FUN_140e3d3f0(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar3 = param_1 + 0x578;
  lVar2 = FWeakObjectPtr::Get(lVar3);
  lVar7 = 0;
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x580)) && (*(longlong *)(param_1 + 0x588) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x580) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar3);
      if (lVar2 != 0) goto LAB_140e3d47a;
    }
  }
  else {
LAB_140e3d47a:
    UXSkinAnimationProfile::GetPrivateStaticClass();
  }
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x580)) && (*(longlong *)(param_1 + 0x588) != 0)) {
      lVar2 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar3,lVar2);
      if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x580) = DAT_1464b56f4;
      }
      lVar2 = FWeakObjectPtr::Get(lVar3);
      if (lVar2 != 0) goto LAB_140e3d4ef;
    }
  }
  else {
LAB_140e3d4ef:
    lVar3 = UXSkinAnimationProfile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e3d528;
  }
  lVar2 = lVar7;
LAB_140e3d528:
  if (param_2 == lVar2) {
    plVar8 = *(longlong **)(param_1 + 0x608);
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x610);
  }
  if (plVar8 != (longlong *)0x0) {
    lVar3 = *(longlong *)(param_1 + 0x5f0);
    lVar6 = (longlong)*(int *)(param_1 + 0x5f8) * 0x40 + lVar3;
    lVar2 = plVar8[0xe3];
    for (; lVar3 != lVar6; lVar3 = lVar3 + 0x40) {
      lVar4 = FWeakObjectPtr::Get(lVar3);
      if (lVar4 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *(int *)(lVar3 + 8)) && (*(longlong *)(lVar3 + 0x10) != 0)) {
          lVar4 = FUN_141796df0();
          FWeakObjectPtr::operator=(lVar3,lVar4);
          if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *(int *)(lVar3 + 8) = DAT_1464b56f4;
          }
          lVar4 = FWeakObjectPtr::Get(lVar3);
          if (lVar4 != 0) goto LAB_140e3d5e0;
        }
LAB_140e3d616:
        lVar4 = lVar7;
      }
      else {
LAB_140e3d5e0:
        lVar5 = UUGJournalKey::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) goto LAB_140e3d616;
      }
      if (lVar4 == param_3) {
        lVar7 = *(longlong *)(lVar3 + 0x28);
        break;
      }
    }
    if ((lVar2 != lVar7) && ((lVar7 != 0 || (param_4 != '\0')))) {
      FUN_140e39bf0(param_1);
      (**(code **)(*plVar8 + 0x930))(plVar8,lVar7,1);
      lVar3 = plVar8[0x33];
      lVar7 = plVar8[0x32];
      FUN_142359580(plVar8);
      (**(code **)(*plVar8 + 0x418))(plVar8,&DAT_14653218c);
      FUN_142382f60(plVar8,lVar7,&DAT_146af29ec,lVar3);
      FUN_14234b150(plVar8);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e3d6d0 FUN_140e3d6d0 body=1364 status=ok
// SIG undefined FUN_140e3d6d0(void)

void FUN_140e3d6d0(longlong param_1,char param_2,undefined1 param_3,char param_4)

{
  bool bVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  int local_38;
  
  plVar3 = (longlong *)FUN_140e80e50();
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  local_48 = AGFireballProjectile::GetPrivateStaticClass();
  lVar4 = (**(code **)(*plVar3 + 0x628))(plVar3,local_48);
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(lVar4 + 0x3b0) == 0) {
    return;
  }
  FUN_1409a7860(*(longlong *)(lVar4 + 0x3b0),&local_40);
  lVar9 = 0;
  if (local_38 != 0) {
    lVar9 = *local_40;
  }
  local_50 = lVar9;
  if (lVar9 != 0) {
    lVar5 = UUGLoadoutBarUW::GetPrivateStaticClass();
    do {
      if (lVar9 == lVar5) {
        lVar6 = FUN_140e353d0(param_1,lVar4,&local_50,1);
        lVar5 = *(longlong *)(param_1 + 0x688);
        lVar9 = param_1 + 0x578;
        lVar7 = FWeakObjectPtr::Get();
        if (lVar7 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(param_1 + 0x580)) && (*(longlong *)(param_1 + 0x588) != 0))
          {
            lVar7 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar9,lVar7);
            if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(param_1 + 0x580) = DAT_1464b56f4;
            }
            lVar7 = FWeakObjectPtr::Get(lVar9);
            if (lVar7 != 0) goto LAB_140e3d832;
          }
LAB_140e3d868:
          lVar7 = 0;
        }
        else {
LAB_140e3d832:
          lVar8 = UXSkinAnimationProfile::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_140e3d868;
        }
        FUN_140e3d3f0(param_1,lVar7,lVar6,1);
        if (param_4 != '\0') {
          *(longlong *)(param_1 + 0x688) = lVar6;
        }
        if ((lVar6 != lVar5) && (param_2 == '\0')) {
          lVar5 = FWeakObjectPtr::Get(lVar9);
          if (lVar5 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(param_1 + 0x580)) &&
               (*(longlong *)(param_1 + 0x588) != 0)) {
              lVar5 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar9,lVar5);
              if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(param_1 + 0x580) = DAT_1464b56f4;
              }
              lVar5 = FWeakObjectPtr::Get(lVar9);
              if (lVar5 != 0) goto LAB_140e3d90c;
            }
LAB_140e3d942:
            lVar5 = 0;
          }
          else {
LAB_140e3d90c:
            lVar9 = UXSkinAnimationProfile::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_140e3d942;
          }
          FUN_140e30210(param_1,lVar5,param_3);
        }
        lVar6 = FUN_140e353d0(param_1,lVar4,&local_50,0);
        lVar5 = *(longlong *)(param_1 + 0x690);
        lVar9 = param_1 + 0x5a0;
        lVar7 = FWeakObjectPtr::Get();
        if (lVar7 == 0) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          if ((DAT_1464b56f4 != *(int *)(param_1 + 0x5a8)) && (*(longlong *)(param_1 + 0x5b0) != 0))
          {
            lVar7 = FUN_141796df0();
            FWeakObjectPtr::operator=(lVar9,lVar7);
            if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
              LOCK();
              if (DAT_1464b56f4 == 0) {
                DAT_1464b56f4 = 0;
              }
              UNLOCK();
              *(int *)(param_1 + 0x5a8) = DAT_1464b56f4;
            }
            lVar7 = FWeakObjectPtr::Get(lVar9);
            if (lVar7 != 0) goto LAB_140e3d9f3;
          }
LAB_140e3da29:
          lVar7 = 0;
        }
        else {
LAB_140e3d9f3:
          lVar8 = UXSkinAnimationProfile::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (!bVar1) goto LAB_140e3da29;
        }
        FUN_140e3d3f0(param_1,lVar7,lVar6,1);
        if (param_4 != '\0') {
          *(longlong *)(param_1 + 0x690) = lVar6;
        }
        if ((lVar6 != lVar5) && (param_2 == '\0')) {
          lVar5 = FWeakObjectPtr::Get(lVar9);
          if (lVar5 == 0) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            if ((DAT_1464b56f4 != *(int *)(param_1 + 0x5a8)) &&
               (*(longlong *)(param_1 + 0x5b0) != 0)) {
              lVar5 = FUN_141796df0();
              FWeakObjectPtr::operator=(lVar9,lVar5);
              if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                *(int *)(param_1 + 0x5a8) = DAT_1464b56f4;
              }
              lVar5 = FWeakObjectPtr::Get(lVar9);
              if (lVar5 != 0) goto LAB_140e3dad2;
            }
LAB_140e3db08:
            lVar5 = 0;
          }
          else {
LAB_140e3dad2:
            lVar9 = UXSkinAnimationProfile::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) goto LAB_140e3db08;
          }
          FUN_140e30210(param_1,lVar5,param_3);
        }
        break;
      }
      lVar9 = *(longlong *)(lVar9 + 0x30);
    } while (lVar9 != 0);
  }
  lVar9 = param_1 + 0x5c8;
  lVar5 = FWeakObjectPtr::Get(lVar9);
  if (lVar5 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(param_1 + 0x5d0)) && (*(longlong *)(param_1 + 0x5d8) != 0)) {
      lVar5 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar9,lVar5);
      if ((lVar5 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(param_1 + 0x5d0) = DAT_1464b56f4;
      }
      lVar5 = FWeakObjectPtr::Get(lVar9);
      if (lVar5 != 0) goto LAB_140e3db9f;
    }
  }
  else {
LAB_140e3db9f:
    lVar9 = FUN_1413e04a0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e3dbd8;
  }
  lVar5 = 0;
LAB_140e3dbd8:
  uVar2 = FUN_1409a1e90(lVar4,lVar5);
  FUN_140e3d270(param_1,uVar2,param_2);
  if (local_40 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e3dc30 FUN_140e3dc30 body=466 status=ok
// SIG undefined FUN_140e3dc30(void)

void FUN_140e3dc30(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  longlong *local_18 [2];
  
  local_38 = *(longlong *)(param_1 + 0xb0);
  if (local_38 != 0) {
    local_30 = *(longlong **)(param_1 + 0xb8);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    lVar3 = FUN_142b45e90();
    FUN_142b4a990(*(undefined8 *)(lVar3 + 0x18),&local_28,&local_38);
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_30 + 1;
      lVar3 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
    }
    lVar3 = local_28;
    if (local_28 != 0) {
      pplVar7 = (longlong **)(local_28 + 0x88);
      plVar4 = (longlong *)FMemory::Realloc(0,0x30);
      local_18[0] = plVar4;
      if (plVar4 != (longlong *)0x0) {
        plVar4[1] = param_1;
        *plVar4 = (longlong)&DAT_143f3ed00;
        plVar4[2] = (longlong)FUN_140e340c0;
        lVar5 = FDelegateHandle::GenerateNewID();
        plVar4[4] = lVar5;
        *plVar4 = (longlong)&PTR_GetPoolName_143f3ed48;
      }
      if (local_18 != pplVar7) {
        if (plVar4 == (longlong *)0x0) {
          if ((*(int *)(lVar3 + 0x90) != 0) && (plVar6 = *pplVar7, plVar6 != (longlong *)0x0)) {
            (**(code **)(*plVar6 + 0x28))(plVar6,0);
            if (*pplVar7 != (longlong *)0x0) {
              plVar6 = (longlong *)FMemory::Realloc(*pplVar7,0,0);
              *pplVar7 = plVar6;
            }
            *(undefined4 *)(lVar3 + 0x90) = 0;
          }
        }
        else {
          (**(code **)(*plVar4 + 0x30))(plVar4,pplVar7);
        }
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        local_18[0] = (longlong *)FMemory::Realloc(plVar4,0,0);
        if (local_18[0] != (longlong *)0x0) {
          FMemory::Free(local_18[0]);
        }
      }
      FUN_142b66a80(local_28,param_2);
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_20 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
  }
  return;
}



// FUNCTION 140e3de10 FUN_140e3de10 body=40 status=ok
// SIG undefined FUN_140e3de10(void)

void FUN_140e3de10(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_140c5d9b0();
  uVar1 = FUN_140c46a10(param_1,0);
  FUN_1409a6d20(param_1,uVar1);
  return;
}



// FUNCTION 140e3de40 FUN_140e3de40 body=178 status=ok
// SIG undefined FUN_140e3de40(void)

ulonglong FUN_140e3de40(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar3 = *param_1;
  lVar1 = (longlong)(int)uVar2 * 0x20 + lVar3;
  if (lVar3 != lVar1) {
    lVar4 = lVar3;
    do {
      if (*(longlong *)(lVar4 + 0x10) == *(longlong *)(param_2 + 0x10)) {
        uVar5 = lVar4 - lVar3 >> 5;
        if ((int)uVar5 != -1) {
          return uVar5;
        }
        break;
      }
      lVar4 = lVar4 + 0x20;
    } while (lVar4 != lVar1);
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar2 + 1)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(param_1,uVar2);
  }
  puVar6 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x20);
  *puVar6 = 0xffffffffffffffff;
  *(undefined4 *)(puVar6 + 1) = 0xffffffff;
  puVar6[2] = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)puVar6 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  return (ulonglong)uVar2;
}



// FUNCTION 140e3df00 FUN_140e3df00 body=125 status=ok
// SIG undefined FUN_140e3df00(void)

undefined8 * FUN_140e3df00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  puVar1 = (undefined8 *)operator_new(0x28,param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(puVar1 + 1,param_2);
    puVar1[2] = param_3;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[4] = uVar2;
    *puVar1 = &PTR_FUN_143f4d1b8;
  }
  return param_1;
}



// FUNCTION 140e3df80 FUN_140e3df80 body=176 status=ok
// SIG undefined FUN_140e3df80(void)

longlong FUN_140e3df80(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *param_1;
  lVar6 = (longlong)(int)param_1[1] * 0x30 + lVar5;
  do {
    if (lVar5 == lVar6) {
      return 0;
    }
    lVar1 = *param_2;
    lVar3 = FUN_1405ec200(lVar5 + 8);
    if (lVar3 == 0) {
LAB_140e3dffe:
      lVar3 = 0;
    }
    else {
      lVar4 = FUN_1413b8910();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140e3dffe;
    }
    if (lVar3 == lVar1) {
      return lVar5;
    }
    lVar5 = lVar5 + 0x30;
  } while( true );
}



// FUNCTION 140e3e030 FUN_140e3e030 body=972 status=ok
// SIG undefined FUN_140e3e030(void)

void FUN_140e3e030(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  uint *puVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *local_b8;
  uint local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  undefined4 local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined8 uStack_80;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong *local_60;
  uint uStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  plVar14 = (longlong *)(param_1 + 0x2b0);
  iVar4 = *(int *)(param_1 + 0x2b8);
  iVar1 = *(int *)(param_1 + 0x2e4);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < iVar4 - iVar1) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  plVar12 = (longlong *)0x0;
  puStack_a0 = (uint *)(param_1 + 0x2c0);
  local_b8 = (longlong *)0x0;
  uVar2 = *(uint *)(param_1 + 0x2d8);
  uStack_ac = 0;
  local_a8 = 0;
  uStack_a4 = 1;
  uStack_94 = 0;
  uStack_90 = 0;
  if (uVar2 != 0) {
    puVar13 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar13 = puStack_a0;
    }
    uVar7 = *puVar13;
    plVar6 = plVar12;
    plVar10 = plVar12;
    while (uVar7 == 0) {
      iVar4 = (int)plVar6;
      uStack_90 = (int)plVar10 + 0x20;
      plVar10 = (longlong *)(ulonglong)uStack_90;
      local_a8 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_a8;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140e3e13d;
      uVar7 = puVar13[(longlong)iVar4 + 1];
    }
    uStack_a4 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uStack_a4 != 0) {
      for (; uStack_a4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_a4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_94 = (uStack_90 - iVar4) + 0x1f;
    if ((int)uVar2 < (int)uStack_94) {
LAB_140e3e13d:
      uStack_94 = uVar2;
    }
  }
  local_98 = 0xffffffff;
  uStack_74 = *(uint *)(param_1 + 0x2d8);
  uStack_80 = CONCAT44(uStack_a4,local_a8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_94;
  uStack_68 = CONCAT44(uStack_8c,uStack_90);
  uStack_78 = -1 << ((byte)uStack_74 & 0x1f);
  uVar11 = uStack_74 & 0xffffffe0;
  uStack_58 = local_a8;
  uStack_54 = uStack_a4;
  plVar6 = plVar12;
  plVar10 = plVar12;
  local_88 = plVar14;
  local_50 = puStack_a0;
  local_40 = uStack_68;
  local_60 = plVar14;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  uVar7 = uStack_74;
  if (uStack_74 != uVar2) {
    lVar9 = *(longlong *)(param_1 + 0x2d0);
    if (*(longlong *)(param_1 + 0x2d0) == 0) {
      lVar9 = param_1 + 0x2c0;
    }
    uVar7 = *(uint *)(lVar9 + (longlong)((int)uStack_74 >> 5) * 4) & uStack_78;
    iVar4 = (int)uStack_74 >> 5;
    while (uVar7 == 0) {
      uVar11 = uVar11 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140e3e225;
      uVar7 = *(uint *)(lVar9 + 4 + (longlong)iVar4 * 4);
      uStack_78 = 0xffffffff;
      iVar4 = iVar4 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
    iVar4 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    uStack_74 = (uVar11 - iVar4) + 0x1f;
    uVar7 = uStack_74;
    if ((int)uVar2 < (int)uStack_74) {
LAB_140e3e225:
      uStack_74 = uVar2;
      uVar7 = uVar2;
    }
  }
  while( true ) {
    if ((uStack_44 == uVar7) && (local_50 == puStack_a0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_60 == plVar14)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    iVar4 = (int)plVar10;
    if (!bVar3) break;
    lVar9 = *(longlong *)(*local_60 + (longlong)(int)uStack_44 * 0x10);
    if (lVar9 != 0) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar9;
      if (param_3 != '\0') {
        lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          local_b0 = iVar4 + 1;
          if ((int)plVar6 < (int)local_b0) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,plVar10);
            plVar6 = (longlong *)(ulonglong)uStack_ac;
            plVar12 = local_b8;
          }
          plVar10 = (longlong *)(ulonglong)local_b0;
          plVar12[iVar4] = lVar9;
        }
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_58);
  }
  if (param_3 != '\0') {
    uVar8 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 0;
    uStack_ac = 0;
    uVar15 = (ulonglong)((longlong)(plVar12 + iVar4) + (7 - (longlong)plVar12)) >> 3;
    if (plVar12 + iVar4 < plVar12) {
      uVar15 = uVar8;
    }
    plVar14 = plVar12;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140e3e030(*(longlong *)(*plVar14 + 0x2d8),&local_b8,1);
          uVar2 = local_b0;
          lVar9 = (longlong)(int)local_b0;
          if (local_b0 != 0) {
            iVar4 = (int)param_2[1];
            if (*(int *)((longlong)param_2 + 0xc) < (int)(iVar4 + local_b0)) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
              iVar4 = (int)param_2[1];
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*param_2 + (longlong)iVar4 * 8),local_b8,lVar9 << 3);
            *(uint *)(param_2 + 1) = (int)param_2[1] + uVar2;
            local_b0 = 0;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    FMemory::Free(plVar12);
  }
  return;
}



// FUNCTION 140e3e400 FUN_140e3e400 body=1073 status=ok
// SIG undefined FUN_140e3e400(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e3e400(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong **_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  char local_c8;
  longlong *local_c0;
  int local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  int local_90;
  int local_8c;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  longlong **local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  longlong **pplStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_2 + 0x28) = 0;
  local_c8 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x2c)) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_b4 = 1;
  local_c0 = (longlong *)(param_1 + 0x2b0);
  local_98 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_b0 = (uint *)(param_1 + 0x2c0);
  local_8c = 0;
  iVar13 = 0;
  local_b8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_b0;
    }
    uVar12 = *puVar10;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar5 = local_b8 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar5;
      if (bVar3) goto LAB_140e3e51a;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_b4 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_a4 = (iStack_a0 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_a4) {
LAB_140e3e51a:
      uStack_a4 = uVar1;
    }
  }
  local_a8 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_58 = CONCAT44(uStack_b4,local_b8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_a4;
  local_68 = (longlong **)CONCAT44(uStack_9c,iStack_a0);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_80 = local_b8;
  uStack_7c = uStack_b4;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_b0;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_140e3e5dd;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_140e3e5dd:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_78 = puStack_b0;
  local_60 = local_c0;
  puStack_50 = puStack_b0;
  pplStack_40 = local_68;
  local_88 = local_c0;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  while( true ) {
    if ((uStack_6c == uVar12) && (local_78 == puStack_b0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_88 == local_c0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x28) = iVar2 + 1;
        if (*(int *)(param_2 + 0x2c) < iVar2 + 1) {
          TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::
          ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x20);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_c8 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_90 = iVar13 + 1;
        if (iVar5 < local_90) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,iVar13);
          plVar11 = local_98;
          iVar5 = local_8c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_90;
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  if (local_c8 != '\0') {
    uVar8 = 0;
    pplStack_40 = (longlong **)0x0;
    local_38 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_140e3e400(*(longlong *)(*plVar14 + 0x2d8),&local_60,1);
          iVar13 = (int)local_38;
          lVar7 = (longlong)(int)local_38;
          if ((int)local_38 != 0) {
            iVar5 = *(int *)(param_2 + 0x28);
            if (*(int *)(param_2 + 0x2c) < (int)local_38 + iVar5) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                        (param_2);
              iVar5 = *(int *)(param_2 + 0x28);
            }
            _Src = &local_60;
            if (pplStack_40 != (longlong **)0x0) {
              _Src = pplStack_40;
            }
            lVar4 = *(longlong *)(param_2 + 0x20);
            if (*(longlong *)(param_2 + 0x20) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + iVar13;
            local_38 = local_38 & 0xffffffff00000000;
          }
        }
        plVar14 = plVar14 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar15);
      if (pplStack_40 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 140e3e840 FUN_140e3e840 body=462 status=ok
// SIG undefined FUN_140e3e840(void)

void FUN_140e3e840(undefined8 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  
  iVar9 = (param_2 + -2) / 2;
  if (-1 < iVar9) {
    iVar10 = iVar9 * 2 + 1;
    iVar2 = iVar10;
    iVar13 = iVar9;
joined_r0x000140e3e86a:
    do {
      if (iVar10 < param_2) {
        iVar10 = iVar9 * 2;
        iVar11 = iVar10 + 1;
        if (iVar10 + 2 < param_2) {
          if ((param_1[((longlong)iVar10 + 2) * 2] == 0) || (param_1[(longlong)iVar11 * 2] == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = *(int *)(param_1[((longlong)iVar10 + 2) * 2] + 0x70) <
                    *(int *)(param_1[(longlong)iVar11 * 2] + 0x70);
          }
          if (bVar1) {
            iVar11 = iVar10;
          }
          iVar11 = iVar11 + 1;
        }
        plVar15 = param_1 + (longlong)iVar9 * 2;
        plVar12 = param_1 + (longlong)iVar11 * 2;
        if (((*plVar15 != 0) && (*plVar12 != 0)) &&
           (*(int *)(*plVar15 + 0x70) < *(int *)(*plVar12 + 0x70))) {
          if (plVar15 != plVar12) {
            lVar3 = plVar12[1];
            lVar4 = *plVar15;
            lVar5 = plVar15[1];
            *plVar15 = *plVar12;
            plVar15[1] = lVar3;
            *plVar12 = lVar4;
            plVar12[1] = lVar5;
          }
          iVar10 = iVar11 * 2 + 1;
          iVar9 = iVar11;
          goto joined_r0x000140e3e86a;
        }
      }
      iVar10 = iVar2 + -2;
      iVar9 = iVar13 + -1;
      iVar2 = iVar10;
      iVar13 = iVar9;
    } while (-1 < iVar9);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar14 = param_1 + (longlong)param_2 * 2;
    do {
      if (param_1 != puVar14) {
        uVar6 = puVar14[1];
        uVar7 = *param_1;
        uVar8 = param_1[1];
        *param_1 = *puVar14;
        param_1[1] = uVar6;
        *puVar14 = uVar7;
        puVar14[1] = uVar8;
      }
      iVar9 = 0;
      if (1 < param_2) {
        do {
          iVar2 = iVar9 * 2;
          iVar10 = iVar2 + 1;
          if (iVar2 + 2 < param_2) {
            if ((param_1[((longlong)iVar2 + 2) * 2] == 0) || (param_1[(longlong)iVar10 * 2] == 0)) {
              bVar1 = false;
            }
            else {
              bVar1 = *(int *)(param_1[((longlong)iVar2 + 2) * 2] + 0x70) <
                      *(int *)(param_1[(longlong)iVar10 * 2] + 0x70);
            }
            if (bVar1) {
              iVar10 = iVar2;
            }
            iVar10 = iVar10 + 1;
          }
          plVar15 = param_1 + (longlong)iVar9 * 2;
          plVar12 = param_1 + (longlong)iVar10 * 2;
          if (((*plVar15 == 0) || (*plVar12 == 0)) ||
             (*(int *)(*plVar12 + 0x70) <= *(int *)(*plVar15 + 0x70))) break;
          if (plVar15 != plVar12) {
            lVar3 = plVar12[1];
            lVar4 = *plVar15;
            lVar5 = plVar15[1];
            *plVar15 = *plVar12;
            plVar15[1] = lVar3;
            *plVar12 = lVar4;
            plVar12[1] = lVar5;
          }
          iVar9 = iVar10;
        } while (iVar10 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar14 = puVar14 + -2;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140e3ea10 FUN_140e3ea10 body=448 status=ok
// SIG undefined FUN_140e3ea10(void)

void FUN_140e3ea10(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  
  iVar8 = (param_2 + -2) / 2;
  if (-1 < iVar8) {
    iVar9 = iVar8 * 2 + 1;
    iVar4 = iVar9;
    iVar10 = iVar8;
joined_r0x000140e3ea3a:
    do {
      if (iVar9 < param_2) {
        iVar9 = iVar8 * 2;
        iVar12 = iVar9 + 1;
        if (iVar9 + 2 < param_2) {
          if (*(int *)((longlong)param_1 + (longlong)iVar9 * 0x18 + 0x34) <
              *(int *)((longlong)param_1 + (longlong)iVar12 * 0x18 + 4)) {
            iVar12 = iVar9;
          }
          iVar12 = iVar12 + 1;
        }
        puVar11 = param_1 + (longlong)iVar12 * 3;
        puVar1 = param_1 + (longlong)iVar8 * 3;
        if (*(int *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 4) <
            *(int *)((longlong)puVar11 + 4)) {
          if (puVar1 != puVar11) {
            uVar5 = puVar11[1];
            uVar6 = *puVar1;
            uVar7 = puVar1[1];
            uVar3 = puVar1[2];
            *puVar1 = *puVar11;
            puVar1[1] = uVar5;
            puVar1[2] = puVar11[2];
            *puVar11 = uVar6;
            puVar11[1] = uVar7;
            puVar11[2] = uVar3;
          }
          iVar9 = iVar12 * 2 + 1;
          iVar8 = iVar12;
          goto joined_r0x000140e3ea3a;
        }
      }
      iVar9 = iVar4 + -2;
      iVar8 = iVar10 + -1;
      iVar4 = iVar9;
      iVar10 = iVar8;
    } while (-1 < iVar8);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 3;
    do {
      if (param_1 != puVar11) {
        uVar5 = puVar11[1];
        uVar6 = *param_1;
        uVar7 = param_1[1];
        uVar3 = param_1[2];
        *param_1 = *puVar11;
        param_1[1] = uVar5;
        param_1[2] = puVar11[2];
        *puVar11 = uVar6;
        puVar11[1] = uVar7;
        puVar11[2] = uVar3;
      }
      iVar8 = 0;
      if (1 < param_2) {
        do {
          iVar4 = iVar8 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < param_2) {
            if (*(int *)((longlong)param_1 + (longlong)iVar4 * 0x18 + 0x34) <
                *(int *)((longlong)param_1 + (longlong)iVar9 * 0x18 + 4)) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          puVar1 = param_1 + (longlong)iVar9 * 3;
          puVar2 = param_1 + (longlong)iVar8 * 3;
          if (*(int *)((longlong)puVar1 + 4) <=
              *(int *)((longlong)param_1 + (longlong)iVar8 * 0x18 + 4)) break;
          if (puVar2 != puVar1) {
            uVar5 = puVar1[1];
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            uVar3 = puVar2[2];
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            puVar2[2] = puVar1[2];
            *puVar1 = uVar6;
            puVar1[1] = uVar7;
            puVar1[2] = uVar3;
          }
          iVar8 = iVar9;
        } while (iVar9 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -3;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140e3ebd0 FUN_140e3ebd0 body=83 status=ok
// SIG undefined FUN_140e3ebd0(void)

longlong FUN_140e3ebd0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != plVar1 + (longlong)(int)param_1[1] * 3) {
    plVar2 = plVar1;
    do {
      if (*plVar2 == *param_2) {
        return ((longlong)plVar2 - (longlong)plVar1) / 0x18;
      }
      plVar2 = plVar2 + 3;
    } while (plVar2 != plVar1 + (longlong)(int)param_1[1] * 3);
  }
  return 0xffffffff;
}



// FUNCTION 140e3ec30 FUN_140e3ec30 body=679 status=ok
// SIG undefined FUN_140e3ec30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e3ec30(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  float fVar15;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x10 + -0x10 + param_1;
    fVar15 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar15 = fVar15 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar15 = _guard_xfg_dispatch_icall_nop(fVar15);
    local_318 = (undefined4)(longlong)(fVar15 + fVar15);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar9 = &local_328;
    do {
      plVar14 = (longlong *)*plVar9;
      plVar12 = (longlong *)plVar9[1];
      lVar1 = plVar9[2];
      local_338._0_4_ = (int)lVar1;
      lVar7 = ((longlong)plVar12 - (longlong)plVar14 >> 4) + 1;
      plVar13 = plVar14;
      if ((int)local_338 != 0) {
LAB_140e3ed00:
        if (8 < lVar7) {
          plVar14 = plVar13 + (lVar7 / 2) * 2;
          if (plVar14 != plVar13) {
            uVar3 = *(undefined4 *)((longlong)plVar13 + 4);
            lVar6 = plVar13[1];
            uVar4 = *(undefined4 *)((longlong)plVar13 + 0xc);
            lVar7 = *plVar14;
            lVar5 = plVar14[1];
            *(int *)plVar14 = (int)*plVar13;
            *(undefined4 *)((longlong)plVar14 + 4) = uVar3;
            *(int *)(plVar14 + 1) = (int)lVar6;
            *(undefined4 *)((longlong)plVar14 + 0xc) = uVar4;
            *plVar13 = lVar7;
            plVar13[1] = lVar5;
          }
          plVar10 = plVar12 + 2;
          plVar14 = plVar13;
LAB_140e3ed36:
          plVar8 = plVar14;
          plVar14 = plVar8 + 2;
          if (plVar14 <= plVar12) goto code_r0x000140e3ed3f;
          goto LAB_140e3ed57;
        }
        for (; plVar10 = plVar13, plVar14 = plVar13, plVar13 < plVar12; plVar12 = plVar12 + -2) {
          while (plVar8 = plVar10, plVar14 = plVar14 + 2, plVar14 <= plVar12) {
            if ((*plVar8 == 0) || (*plVar14 == 0)) {
              bVar2 = false;
            }
            else {
              bVar2 = *(int *)(*plVar8 + 0x70) < *(int *)(*plVar14 + 0x70);
            }
            plVar10 = plVar14;
            if (!bVar2) {
              plVar10 = plVar8;
            }
          }
          if (plVar8 != plVar12) {
            lVar5 = plVar12[1];
            lVar1 = *plVar8;
            lVar7 = plVar8[1];
            *plVar8 = *plVar12;
            plVar8[1] = lVar5;
            *plVar12 = lVar1;
            plVar12[1] = lVar7;
          }
        }
        goto LAB_140e3ee30;
      }
LAB_140e3ee21:
      local_338 = lVar1;
      FUN_140e3e840(plVar14,lVar7,param_3,param_4);
LAB_140e3ee30:
      plVar9 = plVar9 + -3;
    } while (&local_328 <= plVar9);
  }
  return;
code_r0x000140e3ed3f:
  if (((*plVar13 == 0) || (*plVar14 == 0)) ||
     (*(int *)(*plVar14 + 0x70) <= *(int *)(*plVar13 + 0x70))) goto LAB_140e3ed36;
LAB_140e3ed57:
  do {
    plVar11 = plVar10;
    plVar10 = plVar11 + -2;
    if (plVar10 <= plVar13) break;
  } while (((*plVar10 == 0) || (*plVar13 == 0)) ||
          (*(int *)(*plVar13 + 0x70) <= *(int *)(*plVar10 + 0x70)));
  if (plVar14 <= plVar10) {
    if (plVar14 != plVar10) {
      uVar3 = *(undefined4 *)((longlong)plVar11 + -0xc);
      lVar6 = plVar11[-1];
      uVar4 = *(undefined4 *)((longlong)plVar11 + -4);
      lVar7 = *plVar14;
      lVar5 = plVar8[3];
      *(int *)plVar14 = (int)*plVar10;
      *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
      *(int *)(plVar8 + 3) = (int)lVar6;
      *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
      *plVar10 = lVar7;
      plVar11[-1] = lVar5;
    }
    goto LAB_140e3ed36;
  }
  if (plVar13 != plVar10) {
    uVar3 = *(undefined4 *)((longlong)plVar11 + -0xc);
    lVar6 = plVar11[-1];
    uVar4 = *(undefined4 *)((longlong)plVar11 + -4);
    lVar7 = *plVar13;
    lVar5 = plVar13[1];
    *(int *)plVar13 = (int)*plVar10;
    *(undefined4 *)((longlong)plVar13 + 4) = uVar3;
    *(int *)(plVar13 + 1) = (int)lVar6;
    *(undefined4 *)((longlong)plVar13 + 0xc) = uVar4;
    *plVar10 = lVar7;
    plVar11[-1] = lVar5;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)plVar10 + (-0x10 - (longlong)plVar13) & 0xfffffffffffffff0U) <
      (longlong)((longlong)plVar12 - (longlong)plVar14 & 0xfffffffffffffff0U)) {
    if (plVar14 < plVar12) {
      *plVar9 = (longlong)plVar14;
      plVar9[1] = (longlong)plVar12;
      *(int *)(plVar9 + 2) = (int)local_338;
      plVar9 = plVar9 + 3;
    }
    if (plVar10 <= plVar13 + 2) goto LAB_140e3ee30;
    plVar12 = plVar11 + -4;
    plVar14 = plVar13;
  }
  else {
    if (plVar13 + 2 < plVar10) {
      *plVar9 = (longlong)plVar13;
      plVar9[1] = (longlong)(plVar11 + -4);
      *(int *)(plVar9 + 2) = (int)local_338;
      plVar9 = plVar9 + 3;
    }
    if (plVar12 <= plVar14) goto LAB_140e3ee30;
  }
  lVar7 = ((longlong)plVar12 - (longlong)plVar14 >> 4) + 1;
  plVar13 = plVar14;
  if ((int)local_338 == 0) goto LAB_140e3ee21;
  goto LAB_140e3ed00;
}



// FUNCTION 140e3eee0 FUN_140e3eee0 body=833 status=ok
// SIG undefined FUN_140e3eee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e3eee0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_1 + param_2 * 0x18 + -0x18;
    fVar18 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar18 = fVar18 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar18 = _guard_xfg_dispatch_icall_nop(fVar18);
    local_328 = (undefined4)(longlong)(fVar18 + fVar18);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar17 = &local_338;
    do {
      puVar16 = (undefined8 *)*plVar17;
      puVar11 = (undefined8 *)plVar17[1];
      lVar2 = plVar17[2];
      local_348._0_4_ = (int)lVar2;
      lVar10 = ((longlong)puVar11 - (longlong)puVar16) / 0x18 + 1;
      puVar15 = puVar16;
      if ((int)local_348 != 0) {
LAB_140e3efd0:
        if (8 < lVar10) {
          if (lVar10 < 0) {
            lVar10 = lVar10 + 1;
          }
          puVar16 = puVar15 + (lVar10 >> 1) * 3;
          if (puVar16 != puVar15) {
            uVar4 = *(undefined4 *)((longlong)puVar15 + 4);
            uVar5 = *(undefined4 *)(puVar15 + 1);
            uVar6 = *(undefined4 *)((longlong)puVar15 + 0xc);
            uVar7 = *puVar16;
            uVar8 = puVar16[1];
            uVar3 = puVar16[2];
            *(undefined4 *)puVar16 = *(undefined4 *)puVar15;
            *(undefined4 *)((longlong)puVar16 + 4) = uVar4;
            *(undefined4 *)(puVar16 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar16 + 0xc) = uVar6;
            puVar16[2] = puVar15[2];
            *puVar15 = uVar7;
            puVar15[1] = uVar8;
            puVar15[2] = uVar3;
          }
          puVar13 = puVar11 + 3;
          puVar16 = puVar15;
LAB_140e3f020:
          puVar12 = puVar16;
          puVar16 = puVar12 + 3;
          if (puVar16 <= puVar11) goto code_r0x000140e3f029;
          goto LAB_140e3f033;
        }
        for (; puVar16 = puVar15, puVar13 = puVar15, puVar15 < puVar11; puVar11 = puVar11 + -3) {
          while (puVar12 = puVar16, puVar16 = puVar13 + 3, puVar16 <= puVar11) {
            piVar1 = (int *)((longlong)puVar13 + 0x1c);
            puVar13 = puVar16;
            if (*piVar1 <= *(int *)((longlong)puVar12 + 4)) {
              puVar16 = puVar12;
            }
          }
          if (puVar12 != puVar11) {
            uVar7 = puVar11[1];
            uVar8 = *puVar12;
            uVar9 = puVar12[1];
            uVar3 = puVar12[2];
            *puVar12 = *puVar11;
            puVar12[1] = uVar7;
            puVar12[2] = puVar11[2];
            *puVar11 = uVar8;
            puVar11[1] = uVar9;
            puVar11[2] = uVar3;
          }
        }
        goto LAB_140e3f161;
      }
LAB_140e3f152:
      local_348 = lVar2;
      FUN_140e3ea10(puVar16,lVar10,param_3,param_4);
LAB_140e3f161:
      plVar17 = plVar17 + -3;
    } while (&local_338 <= plVar17);
  }
  return;
code_r0x000140e3f029:
  if (*(int *)((longlong)puVar12 + 0x1c) <= *(int *)((longlong)puVar15 + 4)) goto LAB_140e3f020;
LAB_140e3f033:
  do {
    puVar14 = puVar13;
    puVar13 = puVar14 + -3;
    if (puVar13 <= puVar15) break;
  } while (*(int *)((longlong)puVar15 + 4) <= *(int *)((longlong)puVar14 + -0x14));
  if (puVar16 <= puVar13) {
    if (puVar16 != puVar13) {
      uVar4 = *(undefined4 *)((longlong)puVar14 + -0x14);
      uVar5 = *(undefined4 *)(puVar14 + -2);
      uVar6 = *(undefined4 *)((longlong)puVar14 + -0xc);
      uVar7 = *puVar16;
      uVar8 = puVar12[4];
      uVar3 = puVar12[5];
      *(undefined4 *)puVar16 = *(undefined4 *)puVar13;
      *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar4;
      *(undefined4 *)(puVar12 + 4) = uVar5;
      *(undefined4 *)((longlong)puVar12 + 0x24) = uVar6;
      puVar12[5] = puVar14[-1];
      *puVar13 = uVar7;
      puVar14[-2] = uVar8;
      puVar14[-1] = uVar3;
    }
    goto LAB_140e3f020;
  }
  if (puVar15 != puVar13) {
    uVar4 = *(undefined4 *)((longlong)puVar14 + -0x14);
    uVar5 = *(undefined4 *)(puVar14 + -2);
    uVar6 = *(undefined4 *)((longlong)puVar14 + -0xc);
    uVar7 = *puVar15;
    uVar8 = puVar15[1];
    uVar3 = puVar15[2];
    *(undefined4 *)puVar15 = *(undefined4 *)puVar13;
    *(undefined4 *)((longlong)puVar15 + 4) = uVar4;
    *(undefined4 *)(puVar15 + 1) = uVar5;
    *(undefined4 *)((longlong)puVar15 + 0xc) = uVar6;
    puVar15[2] = puVar14[-1];
    *puVar13 = uVar7;
    puVar14[-2] = uVar8;
    puVar14[-1] = uVar3;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar10 = (longlong)puVar13 + (-0x18 - (longlong)puVar15);
  lVar10 = lVar10 / 6 + (lVar10 >> 0x3f);
  if ((lVar10 >> 2) - (lVar10 >> 0x3f) < ((longlong)puVar11 - (longlong)puVar16) / 0x18) {
    if (puVar16 < puVar11) {
      *plVar17 = (longlong)puVar16;
      plVar17[1] = (longlong)puVar11;
      *(int *)(plVar17 + 2) = (int)local_348;
      plVar17 = plVar17 + 3;
    }
    if (puVar13 <= puVar15 + 3) goto LAB_140e3f161;
    puVar11 = puVar14 + -6;
    puVar16 = puVar15;
  }
  else {
    if (puVar15 + 3 < puVar13) {
      *plVar17 = (longlong)puVar15;
      plVar17[1] = (longlong)(puVar14 + -6);
      *(int *)(plVar17 + 2) = (int)local_348;
      plVar17 = plVar17 + 3;
    }
    if (puVar11 <= puVar16) goto LAB_140e3f161;
  }
  lVar10 = ((longlong)puVar11 - (longlong)puVar16) / 0x18 + 1;
  puVar15 = puVar16;
  if ((int)local_348 == 0) goto LAB_140e3f152;
  goto LAB_140e3efd0;
}



// FUNCTION 140e3f230 FUN_140e3f230 body=1156 status=ok
// SIG undefined FUN_140e3f230(void)

undefined8 * FUN_140e3f230(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  uVar1 = FUN_140e48d10(param_2,DAT_146b31348);
  uVar1 = FUN_140e48d10(uVar1,DAT_146b31370);
  uVar1 = FUN_140e48d10(uVar1,DAT_146b31378);
  uVar1 = FUN_140e48d10(uVar1,DAT_146b31380);
  uVar1 = FUN_140e48d10(uVar1,DAT_146b31390);
  uVar1 = FUN_140e48d10(uVar1,DAT_14686c2a8);
  uVar1 = FUN_140e48d10(uVar1,DAT_14686c2b0);
  uVar1 = FUN_140e48d10(uVar1,DAT_14686c2b8);
  FUN_140c2e240(param_1,uVar1);
  *param_1 = &PTR_FUN_1445ad730;
  param_1[0x8b] = &PTR_LAB_1445ae3d0;
  param_1[0x116] = &PTR_LAB_1445ae428;
  param_1[0x117] = &PTR_LAB_1445ae450;
  param_1[0x118] = &PTR_LAB_1445ae4a8;
  param_1[0x119] = &PTR_LAB_1445ae4e0;
  param_1[0x11a] = &PTR_LAB_1445ae4f8;
  param_1[0x11b] = &PTR_LAB_1445ae540;
  param_1[0x11c] = &PTR_LAB_1445ae568;
  param_1[0x11d] = &PTR_LAB_1445ae590;
  param_1[0x11e] = &PTR_LAB_1445ae5d8;
  param_1[0x11f] = &PTR_LAB_1445ae5f0;
  param_1[0x1af] = &PTR_LAB_1445ae608;
  param_1[0x1b0] = &PTR_StartProfileThreadUsage_1445ae628;
  param_1[0x1b1] = &PTR_LAB_1445ae658;
  param_1[0x1b2] = &PTR_LAB_1445ae828;
  param_1[0x1b3] = &PTR_LAB_1445ae850;
  param_1[0x1b4] = &PTR_FUN_1445ae920;
  param_1[0x1b5] = &PTR_LAB_1445ae938;
  param_1[0x1b6] = &PTR_LAB_1445ae988;
  param_1[0x1b7] = &PTR_LAB_1445ae9a0;
  param_1[0x1b8] = &PTR_LAB_1445ae9b8;
  param_1[0x1b9] = &PTR_LAB_1445ae9d8;
  param_1[0x1c4] = &PTR_LAB_1445aea10;
  param_1[0x1c5] = &PTR_LAB_1445aea50;
  param_1[0x1c6] = &PTR_LAB_1445aea78;
  param_1[0x1c7] = &PTR_LAB_1445aea90;
  param_1[0x1c8] = &PTR_LAB_1445aeab8;
  param_1[0x1c9] = &PTR_LAB_1445aeae8;
  param_1[0x1ca] = &PTR_LAB_1445aeb10;
  param_1[0x45a] = 0;
  param_1[0x45b] = 0;
  *(undefined4 *)(param_1 + 0x457) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x22bc) = 0;
  param_1[0x459] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x45b) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x22dc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x45a,0);
  }
  if ((undefined2 *)param_1[0x45a] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x45a] = 0;
  }
  *(undefined4 *)(param_1 + 0x458) = 0;
  param_1[0x45f] = 0;
  param_1[0x460] = 0;
  *(undefined4 *)(param_1 + 0x45c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x22e4) = 0;
  param_1[0x45e] = 0;
  local_res8 = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  if ((*(int *)((longlong)param_1 + 0x2304) < 0) && (*(int *)((longlong)param_1 + 0x2304) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x45f,0);
  }
  if ((undefined2 *)param_1[0x45f] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x45f] = 0;
  }
  *(undefined4 *)(param_1 + 0x45d) = 0;
  param_1[0x462] = 0;
  param_1[0x465] = 0;
  *(undefined4 *)(param_1 + 0x466) = 0;
  param_1[0x467] = 0;
  param_1[0x468] = 0;
  param_1[0x469] = 0;
  *(undefined1 *)(param_1 + 0x46a) = 0;
  param_1[0x46d] = 0;
  *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) & 0xfb;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) & 0xbf;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  *(byte *)((longlong)param_1 + 0x13fc) = *(byte *)((longlong)param_1 + 0x13fc) | 8;
  *(undefined1 *)((longlong)param_1 + 0x13c2) = 1;
  FUN_14223c460(param_1,0);
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"CustomizationComponent",1);
  uVar1 = *puVar2;
  uVar3 = AInteractiveFoliageActor::GetPrivateStaticClass();
  uVar1 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x453] = uVar1;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"HeadMesh",1);
  uVar1 = *puVar2;
  uVar3 = FUN_142e5c1e0();
  uVar1 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x454] = uVar1;
  local_res8 = 0;
  FUN_142399e30(uVar1,param_1[0x98],0);
  *(byte *)(param_1[0x454] + 0x2ef) = *(byte *)(param_1[0x454] + 0x2ef) & 0xbf;
  *(byte *)(param_1[0x454] + 0x879) = *(byte *)(param_1[0x454] + 0x879) | 1;
  *(byte *)(param_1[0x98] + 0x2ef) = *(byte *)(param_1[0x98] + 0x2ef) & 0xbf;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"WeaponHoldMgr",1);
  uVar1 = *puVar2;
  uVar3 = FUN_1430a76d0();
  uVar1 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x456] = uVar1;
  return param_1;
}



// FUNCTION 140e3f6c0 FUN_140e3f6c0 body=313 status=ok
// SIG undefined FUN_140e3f6c0(void)

undefined8 * FUN_140e3f6c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  FUN_1426f5470();
  *param_1 = &PTR__scalar_deleting_destructor__1445af1f8;
  param_1[0xa5] = &PTR_LAB_1445afa10;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa6] = &PTR_FUN_143f740c8;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 1;
  param_1[0xbb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0xffffffff;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  uVar2 = FUN_141432a80();
  param_1[0xbb] = uVar2;
  puVar3 = (undefined8 *)FGuid::NewGuid(local_18);
  uVar2 = *puVar3;
  uVar1 = puVar3[1];
  *(uint *)((longlong)param_1 + 0x484) = *(uint *)((longlong)param_1 + 0x484) | 0x40;
  *param_1 = &PTR__scalar_deleting_destructor__1445afae0;
  param_1[0xa5] = &PTR_LAB_1445afa10;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = uVar1;
  return param_1;
}



// FUNCTION 140e3f800 FUN_140e3f800 body=88 status=ok
// SIG undefined FUN_140e3f800(void)

undefined8 * FUN_140e3f800(undefined8 *param_1)

{
  FUN_142fc7fd0();
  *param_1 = &PTR_FUN_1445b07f8;
  param_1[0x597] = 0;
  param_1[0x598] = 0;
  param_1[0x599] = 0;
  param_1[0x59a] = 0;
  param_1[0x59b] = 2;
  param_1[0x59c] = 0;
  param_1[0x59d] = 0;
  return param_1;
}



// FUNCTION 140e3f860 FUN_140e3f860 body=289 status=ok
// SIG undefined FUN_140e3f860(void)

undefined8 * FUN_140e3f860(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_18 [16];
  
  FUN_1426f5470();
  *param_1 = &PTR__scalar_deleting_destructor__1445af1f8;
  param_1[0xa5] = &PTR_LAB_1445afa10;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa6] = &PTR_FUN_143f740c8;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 1;
  param_1[0xbb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0xffffffff;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  uVar2 = FUN_141432a80();
  param_1[0xbb] = uVar2;
  puVar3 = (undefined8 *)FGuid::NewGuid(local_18);
  uVar2 = *puVar3;
  uVar1 = puVar3[1];
  *(uint *)((longlong)param_1 + 0x484) = *(uint *)((longlong)param_1 + 0x484) | 0x40;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = uVar1;
  return param_1;
}



// FUNCTION 140e3f990 FUN_140e3f990 body=647 status=ok
// SIG undefined FUN_140e3f990(void)

undefined8 * FUN_140e3f990(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1445ad048;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x41700000;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x3e800000;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x534) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined1 *)(param_1 + 0xae) = 0;
  *(undefined1 *)((longlong)param_1 + 0x584) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5fc) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x624) = 0;
  *(undefined1 *)(param_1 + 199) = 0;
  *(undefined1 *)((longlong)param_1 + 0x64c) = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  *(undefined4 *)((longlong)param_1 + 0x67c) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0xffffffff;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(byte *)(param_1 + 0xe7) = *(byte *)(param_1 + 0xe7) & 2;
  *(byte *)((longlong)param_1 + 0x739) = *(byte *)((longlong)param_1 + 0x739) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x73a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x73c) = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"RootComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) & 0xfb | 2;
  return param_1;
}



// FUNCTION 140e3fc20 FUN_140e3fc20 body=348 status=ok
// SIG undefined FUN_140e3fc20(void)

undefined8 * FUN_140e3fc20(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x11);
  *(undefined1 *)((longlong)param_1 + 0x12) = *(undefined1 *)((longlong)param_2 + 0x12);
  *(undefined1 *)((longlong)param_1 + 0x13) = *(undefined1 *)((longlong)param_2 + 0x13);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(undefined1 *)((longlong)param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x15);
  *(undefined1 *)((longlong)param_1 + 0x16) = *(undefined1 *)((longlong)param_2 + 0x16);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x1c) = *(undefined1 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x24) = *(undefined1 *)((longlong)param_2 + 0x24);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  puVar3 = (undefined8 *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy(param_1 + 5,iVar1,0);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = param_2 + 5;
    }
    puVar2 = (undefined8 *)param_1[9];
    if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
      puVar2 = param_1 + 5;
    }
    _guard_xfg_dispatch_icall_nop(puVar2,puVar3,(longlong)iVar1 << 2);
  }
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  puVar3 = (undefined8 *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
              (param_1 + 0xb,iVar1,0);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = param_2 + 0xb;
    }
    puVar2 = (undefined8 *)param_1[0xd];
    if ((undefined8 *)param_1[0xd] == (undefined8 *)0x0) {
      puVar2 = param_1 + 0xb;
    }
    _guard_xfg_dispatch_icall_nop(puVar2,puVar3,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 140e3fd80 FUN_140e3fd80 body=259 status=ok
// SIG undefined FUN_140e3fd80(void)

undefined1 * FUN_140e3fd80(undefined1 *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 local_38 [32];
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x2c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
  }
  if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if ((*(int *)(param_1 + 0x2c) < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x20,0);
    }
    if (*(undefined2 **)(param_1 + 0x20) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 0x20) = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_38,param_2);
    FSoftObjectPath::operator=(param_1 + 0x18,uVar1);
    FWeakObjectPtr::operator=(param_1 + 8,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    *(int *)(param_1 + 0x10) = DAT_1464b56f4;
  }
  *param_1 = param_3;
  return param_1;
}



// FUNCTION 140e3fe90 FUN_140e3fe90 body=185 status=ok
// SIG undefined FUN_140e3fe90(void)

undefined4 * FUN_140e3fe90(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_38;
  undefined1 local_30 [24];
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  if (0x7fffffff < (uint)param_1[0xb]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 8) = 0;
  }
  param_1[4] = 0;
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  local_38 = *(undefined8 *)(param_2 + 6);
  FString::FString(local_30,param_2 + 8);
  FSoftObjectPath::operator=(param_1 + 6,&local_38);
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



// FUNCTION 140e3ff50 FUN_140e3ff50 body=262 status=ok
// SIG undefined FUN_140e3ff50(void)

undefined4 *
FUN_140e3ff50(undefined4 *param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 local_38 [32];
  
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 1) = param_4;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  if (0x7fffffff < (uint)param_1[0xb]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
    **(undefined2 **)(param_1 + 8) = 0;
  }
  param_1[4] = 0;
  if (param_2 == 0) {
    param_1[2] = 0xffffffff;
    param_1[3] = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[10] = 0;
    if (((int)param_1[0xb] < 0) && (param_1[0xb] != 0)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
    }
    if (*(undefined2 **)(param_1 + 8) != (undefined2 *)0x0) {
      **(undefined2 **)(param_1 + 8) = 0;
    }
    param_1[4] = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_38,param_2);
    FSoftObjectPath::operator=(param_1 + 6,uVar1);
    FWeakObjectPtr::operator=(param_1 + 2,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    param_1[4] = DAT_1464b56f4;
  }
  return param_1;
}



// FUNCTION 140e40060 CVSToolsListBox body=52 status=ok
// SIG undefined CVSToolsListBox(CVSToolsListBox * this, CMFCToolBarsToolsPropertyPage * param_1)

/* Library Function - Single Match
    public: __cdecl CVSToolsListBox::CVSToolsListBox(class CMFCToolBarsToolsPropertyPage * __ptr64)
   __ptr64
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

CVSToolsListBox * __thiscall
CVSToolsListBox::CVSToolsListBox(CVSToolsListBox *this,CMFCToolBarsToolsPropertyPage *param_1)

{
  CVSToolsListBox(this,param_1);
  *(CMFCToolBarsToolsPropertyPage **)(this + 0x6d0) = param_1;
  *(undefined ***)this = &PTR_FUN_1445b02f8;
  return this;
}



// FUNCTION 140e400a0 FUN_140e400a0 body=44 status=ok
// SIG undefined FUN_140e400a0(void)

undefined8 * FUN_140e400a0(undefined8 *param_1)

{
  FUN_142cb2300();
  param_1[0xda] = 0;
  *param_1 = &PTR_FUN_1445b02f8;
  return param_1;
}



// FUNCTION 140e400d0 FUN_140e400d0 body=282 status=ok
// SIG undefined FUN_140e400d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e400d0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = 0;
  *(undefined1 *)((longlong)param_1 + 0x31) = 1;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)((longlong)param_1 + 0x20c) = DAT_1468b5d88._4_4_;
  *(undefined4 *)(param_1 + 0x42) = 0;
  uVar1 = uRam000000014687042c;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(uint *)((longlong)param_1 + 0x22c) = uVar1;
  uVar1 = uRam0000000146870424 & uRam0000000146870434;
  uVar2 = uRam0000000146870428 & uRam0000000146870438;
  uVar3 = uRam000000014687042c & uRam000000014687043c;
  *(uint *)(param_1 + 0x48) = _DAT_146870420 & _DAT_146870430;
  *(uint *)((longlong)param_1 + 0x244) = uVar1;
  *(uint *)(param_1 + 0x49) = uVar2;
  *(uint *)((longlong)param_1 + 0x24c) = uVar3;
  param_1[0x2f] = DAT_146870128;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x3c) = DAT_14629ccb8;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = DAT_14629ccbc;
  *(undefined4 *)(param_1 + 4) = 0x428c0000;
  *(undefined4 *)(param_1 + 2) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x43020000;
  return param_1;
}



// FUNCTION 140e401f0 FUN_140e401f0 body=75 status=ok
// SIG undefined FUN_140e401f0(void)

undefined8 * FUN_140e401f0(undefined8 *param_1)

{
  FUN_142dc1ed0();
  *(undefined1 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 8) = 0x1010101;
  *param_1 = &PTR_FUN_1443341a0;
  *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  *(undefined1 *)((longlong)param_1 + 0x47) = 1;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return param_1;
}



// FUNCTION 140e40240 FUN_140e40240 body=50 status=ok
// SIG undefined FUN_140e40240(void)

undefined8 * FUN_140e40240(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  param_1[6] = 0;
  *param_1 = &PTR_FUN_1445ac1f8;
  FText::FText(param_1 + 7);
  return param_1;
}



// FUNCTION 140e40280 FUN_140e40280 body=119 status=ok
// SIG undefined FUN_140e40280(void)

undefined8 * FUN_140e40280(undefined8 *param_1)

{
  FUN_142de3ca0();
  *param_1 = &PTR_FUN_1445b0370;
  param_1[5] = &PTR_LAB_1445b07c8;
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((longlong)param_1 + 0x1cc);
  *(undefined4 *)((longlong)param_1 + 0x5a4) = 0x43c80000;
  *(undefined4 *)(param_1 + 0xb5) = 0x44160000;
  return param_1;
}



// FUNCTION 140e40300 FUN_140e40300 body=459 status=ok
// SIG undefined FUN_140e40300(void)

undefined8 * FUN_140e40300(undefined8 *param_1)

{
  UFontFaceInterface::UFontFaceInterface();
  *param_1 = &PTR_FUN_1445acdc8;
  FText::FText(param_1 + 6);
  param_1[9] = 0;
  param_1[10] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 9,0);
  FGenericPlatformString::Memcpy(param_1[9],L"FALLEN",0xe);
  *(undefined4 *)((longlong)param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5f) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0xcc)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x18,0);
  }
  if ((undefined2 *)param_1[0x18] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x18] = 0;
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((*(int *)((longlong)param_1 + 0xf4) < 0) && (*(int *)((longlong)param_1 + 0xf4) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x1d,0);
  }
  if ((undefined2 *)param_1[0x1d] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x1d] = 0;
  }
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  if ((*(int *)((longlong)param_1 + 0x11c) < 0) && (*(int *)((longlong)param_1 + 0x11c) != 0)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x22,0);
  }
  if ((undefined2 *)param_1[0x22] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x22] = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return param_1;
}



// FUNCTION 140e404d0 FUN_140e404d0 body=288 status=ok
// SIG undefined FUN_140e404d0(void)

undefined8 * FUN_140e404d0(undefined8 *param_1)

{
  FUN_142326e40();
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 2;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0xffffffffffffffff;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *param_1 = &PTR_FUN_1445b10d8;
  param_1[5] = &PTR_LAB_1445b1500;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  return param_1;
}



// FUNCTION 140e405f0 FUN_140e405f0 body=229 status=ok
// SIG undefined FUN_140e405f0(void)

undefined8 * FUN_140e405f0(undefined8 *param_1)

{
  FUN_142cb26e0();
  *param_1 = &PTR_FUN_1445ac478;
  param_1[5] = &PTR_LAB_1445ac8e0;
  param_1[0x2f] = &PTR_LAB_1445ac910;
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x3c);
  FDifficultyFloat::FDifficultyFloat((longlong)param_1 + 0x1ec);
  FDifficultyFloat::FDifficultyFloat(param_1 + 0x3f);
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  FUN_14246fd50(param_1 + 0x3c,0x3f800000);
  FUN_14246fd50((longlong)param_1 + 0x1ec,0x3f800000);
  FUN_14246fd50(param_1 + 0x3f,0x3f800000);
  return param_1;
}



// FUNCTION 140e406e0 FUN_140e406e0 body=268 status=ok
// SIG undefined FUN_140e406e0(void)

undefined8 * FUN_140e406e0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1445aeda0;
  param_1[5] = &PTR_LAB_1445af1c8;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 2;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0xffffffffffffffff;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0xffffffff;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  return param_1;
}



// FUNCTION 140e407f0 FUN_140e407f0 body=104 status=ok
// SIG undefined FUN_140e407f0(void)

undefined8 * FUN_140e407f0(undefined8 *param_1)

{
  UPrimaryAssetLabel::UPrimaryAssetLabel();
  *param_1 = &PTR_FUN_1445aeb28;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FText::FText(param_1 + 0x12);
  FText::FText(param_1 + 0x15);
  FText::FText(param_1 + 0x18);
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  return param_1;
}



// FUNCTION 140e40860 FUN_140e40860 body=269 status=ok
// SIG undefined FUN_140e40860(void)

undefined8 * FUN_140e40860(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1445ac928;
  param_1[5] = &PTR_LAB_1445acd98;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 2;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4b) = 1;
  return param_1;
}



// FUNCTION 140e40970 FUN_140e40970 body=122 status=ok
// SIG undefined FUN_140e40970(void)

undefined8 * FUN_140e40970(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_1445b1530;
  param_1[5] = &PTR_LAB_1445b19d0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 2;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *(undefined4 *)(param_1 + 0x32) = 0xf;
  return param_1;
}



// FUNCTION 140e409f0 FUN_140e409f0 body=115 status=ok
// SIG undefined FUN_140e409f0(void)

void FUN_140e409f0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x5d8);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xc0;
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



// FUNCTION 140e40a70 FUN_140e40a70 body=167 status=ok
// SIG undefined FUN_140e40a70(void)

void FUN_140e40a70(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      iVar4 = (int)plVar3[1];
      lVar1 = *plVar3;
      if (iVar4 != 0) {
        do {
          if (*(longlong *)(lVar1 + 0x48) != 0) {
            FMemory::Free();
          }
          FUN_140e40d40(lVar1);
          lVar1 = lVar1 + 0x70;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar3;
      }
      if (lVar1 != 0) {
        FMemory::Free(lVar1);
      }
      plVar3 = plVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar3);
  return;
}



// FUNCTION 140e40b20 FUN_140e40b20 body=235 status=ok
// SIG undefined FUN_140e40b20(void)

void FUN_140e40b20(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x670);
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
  if (*(longlong *)(param_1 + 0x638) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x628) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x618);
  if (*(longlong *)(param_1 + 0x608) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x5f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x588) != 0) {
    FMemory::Free();
  }
  FUN_1409f5750(param_1 + 0x558);
  FUN_1404bf980(param_1 + 0x530);
  *(undefined ***)(param_1 + 0x528) = &PTR_FUN_144193ee0;
  FUN_1426f61d0(param_1);
  return;
}



// FUNCTION 140e40c10 FUN_140e40c10 body=295 status=ok
// SIG undefined FUN_140e40c10(void)

void FUN_140e40c10(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar9 = (longlong *)(lVar5 + 8);
    do {
      iVar7 = (int)plVar9[1];
      lVar5 = *plVar9;
      if (iVar7 != 0) {
        plVar8 = (longlong *)(lVar5 + 0x10);
        do {
          plVar4 = (longlong *)plVar8[3];
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
          plVar4 = (longlong *)*plVar8;
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
          plVar8 = plVar8 + 8;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        lVar5 = *plVar9;
      }
      if (lVar5 != 0) {
        FMemory::Free();
      }
      plVar9 = plVar9 + 3;
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



// FUNCTION 140e40d40 FUN_140e40d40 body=156 status=ok
// SIG undefined FUN_140e40d40(void)

void FUN_140e40d40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
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



// FUNCTION 140e40de0 FUN_140e40de0 body=453 status=ok
// SIG undefined FUN_140e40de0(void)

void FUN_140e40de0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x590);
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x328);
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
  plVar4 = *(longlong **)(param_1 + 0x2c8);
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
  plVar4 = *(longlong **)(param_1 + 0x268);
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
  plVar4 = *(longlong **)(param_1 + 0x208);
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
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  return;
}



// FUNCTION 140e40fb0 FUN_140e40fb0 body=78 status=ok
// SIG undefined FUN_140e40fb0(void)

undefined1 * FUN_140e40fb0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  local_28 = *(undefined8 *)(param_2 + 0x18);
  FString::FString(local_20,param_2 + 0x20);
  FSoftObjectPath::operator=(param_1 + 0x18,&local_28);
  return param_1;
}



// FUNCTION 140e41000 FUN_140e41000 body=84 status=ok
// SIG undefined FUN_140e41000(void)

undefined4 * FUN_140e41000(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 local_28;
  undefined1 local_20 [24];
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  local_28 = *(undefined8 *)(param_2 + 6);
  FString::FString(local_20,param_2 + 8);
  FSoftObjectPath::operator=(param_1 + 6,&local_28);
  return param_1;
}



// FUNCTION 140e41060 FUN_140e41060 body=476 status=ok
// SIG undefined FUN_140e41060(void)

undefined4 * FUN_140e41060(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  if (param_2 + 10 != param_1 + 10) {
    if (*(char *)(param_1 + 0xe) != '\0') {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    if (*(char *)(param_2 + 0xe) != '\0') {
      uVar2 = param_2[0xb];
      uVar3 = param_2[0xc];
      uVar4 = param_2[0xd];
      param_1[10] = param_2[10];
      param_1[0xb] = uVar2;
      param_1[0xc] = uVar3;
      param_1[0xd] = uVar4;
      *(undefined1 *)(param_1 + 0xe) = 1;
    }
  }
  if (param_2 + 0xf != param_1 + 0xf) {
    if (*(char *)(param_1 + 0x13) != '\0') {
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    if (*(char *)(param_2 + 0x13) != '\0') {
      uVar2 = param_2[0x10];
      uVar3 = param_2[0x11];
      uVar4 = param_2[0x12];
      param_1[0xf] = param_2[0xf];
      param_1[0x10] = uVar2;
      param_1[0x11] = uVar3;
      param_1[0x12] = uVar4;
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
  }
  if (param_2 + 0x14 != param_1 + 0x14) {
    if (*(char *)(param_1 + 0x18) != '\0') {
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
    if (*(char *)(param_2 + 0x18) != '\0') {
      uVar2 = param_2[0x15];
      uVar3 = param_2[0x16];
      uVar4 = param_2[0x17];
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = uVar2;
      param_1[0x16] = uVar3;
      param_1[0x17] = uVar4;
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
  }
  if (param_2 + 0x19 != param_1 + 0x19) {
    if (*(char *)(param_1 + 0x1d) != '\0') {
      *(undefined1 *)(param_1 + 0x1d) = 0;
    }
    if (*(char *)(param_2 + 0x1d) != '\0') {
      uVar2 = param_2[0x1a];
      uVar3 = param_2[0x1b];
      uVar4 = param_2[0x1c];
      param_1[0x19] = param_2[0x19];
      param_1[0x1a] = uVar2;
      param_1[0x1b] = uVar3;
      param_1[0x1c] = uVar4;
      *(undefined1 *)(param_1 + 0x1d) = 1;
    }
  }
  if (param_2 + 0x1e != param_1 + 0x1e) {
    if (*(char *)(param_1 + 0x22) != '\0') {
      *(undefined1 *)(param_1 + 0x22) = 0;
    }
    if (*(char *)(param_2 + 0x22) != '\0') {
      uVar2 = param_2[0x1f];
      uVar3 = param_2[0x20];
      uVar4 = param_2[0x21];
      param_1[0x1e] = param_2[0x1e];
      param_1[0x1f] = uVar2;
      param_1[0x20] = uVar3;
      param_1[0x21] = uVar4;
      *(undefined1 *)(param_1 + 0x22) = 1;
    }
  }
  if (param_2 + 0x23 != param_1 + 0x23) {
    if (*(char *)(param_1 + 0x27) != '\0') {
      *(undefined1 *)(param_1 + 0x27) = 0;
    }
    if (*(char *)(param_2 + 0x27) != '\0') {
      uVar2 = param_2[0x24];
      uVar3 = param_2[0x25];
      uVar4 = param_2[0x26];
      param_1[0x23] = param_2[0x23];
      param_1[0x24] = uVar2;
      param_1[0x25] = uVar3;
      param_1[0x26] = uVar4;
      *(undefined1 *)(param_1 + 0x27) = 1;
    }
  }
  plVar1 = (longlong *)(param_2 + 0x28);
  plVar5 = (longlong *)(param_1 + 0x28);
  if (plVar5 != plVar1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    *plVar5 = *plVar1;
    *plVar1 = 0;
    param_1[0x2a] = param_2[0x2a];
    param_1[0x2b] = param_2[0x2b];
    *(undefined8 *)(param_2 + 0x2a) = 0;
  }
  plVar1 = (longlong *)(param_1 + 0x2e);
  plVar5 = (longlong *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  if (plVar1 != plVar5) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = *plVar5;
    *plVar5 = 0;
    param_1[0x30] = param_2[0x30];
    param_1[0x31] = param_2[0x31];
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  return param_1;
}



// FUNCTION 140e41240 FUN_140e41240 body=261 status=ok
// SIG undefined FUN_140e41240(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_140e41240(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)param_1 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
  puVar1 = param_1 + 3;
  param_1[2] = param_2[2];
  uStack_30 = (longlong *)param_2[4];
  local_38 = param_2[3];
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar1) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar1;
    plVar6 = (longlong *)param_1[4];
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar1 = (undefined4)local_38;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_38._4_4_;
    *(undefined4 *)(param_1 + 4) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar6;
  }
  plVar6 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = uStack_30 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 140e41350 FUN_140e41350 body=225 status=ok
// SIG undefined FUN_140e41350(void)

longlong FUN_140e41350(undefined8 *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  if ((param_2 != 0) || (param_3 != 0)) {
    plVar2 = (longlong *)AEQSTestingPawn::GetNavAgentPropertiesRef(*(undefined8 *)*param_1);
    plVar6 = (longlong *)*plVar2;
    plVar2 = plVar6 + (int)plVar2[1];
    for (; plVar6 != plVar2; plVar6 = plVar6 + 1) {
      lVar1 = *plVar6;
      if (lVar1 != 0) {
        plVar3 = (longlong *)AEQSTestingPawn::GetNavAgentPropertiesRef(lVar1);
        plVar5 = (longlong *)*plVar3;
        plVar3 = plVar5 + (longlong)(int)plVar3[1] * 2;
        for (; plVar5 != plVar3; plVar5 = plVar5 + 2) {
          if (((longlong *)*plVar5 != (longlong *)0x0) &&
             (((param_3 != 0 &&
               (lVar4 = (**(code **)(*(longlong *)*plVar5 + 0x670))(), param_3 == lVar4)) ||
              ((param_2 != 0 &&
               (lVar4 = (**(code **)(*(longlong *)*plVar5 + 0x680))(), param_2 == lVar4)))))) {
            *param_4 = *plVar5;
            return lVar1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140e41440 FUN_140e41440 body=357 status=ok
// SIG undefined FUN_140e41440(void)

void FUN_140e41440(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar2 = *(longlong **)*param_1;
  lVar3 = plVar2[0x30];
  lVar6 = (longlong)(int)plVar2[0x31] * 0x38 + lVar3;
  lVar5 = lVar3;
  if (lVar3 != lVar6) {
    while (*(longlong *)(lVar5 + 0x10) != param_4) {
      lVar5 = lVar5 + 0x38;
      if (lVar5 == lVar6) {
        return;
      }
    }
    iVar4 = (int)((lVar5 - lVar3) / 0x38);
    if ((-1 < iVar4) && (iVar4 < (int)plVar2[0x5a])) {
      (**(code **)(*plVar2 + 0x260))();
      lVar5 = (longlong)iVar4 * 0x34;
      lVar3 = *(longlong *)(*(longlong *)*param_1 + 0x2c8);
      if (*(char *)(param_2 + 2) == '\0') {
        *(undefined1 *)(lVar5 + lVar3) = 1;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 + 1);
        *(undefined8 *)(lVar5 + 4 + lVar3) = *param_2;
        *(undefined4 *)(lVar5 + 0xc + lVar3) = uVar1;
        *(undefined1 *)(lVar5 + *(longlong *)(*(longlong *)*param_1 + 0x2c8)) = 0;
      }
      lVar3 = *(longlong *)(*(longlong *)*param_1 + 0x2c8);
      if (*(char *)(param_3 + 2) == '\0') {
        *(undefined1 *)(lVar5 + 1 + lVar3) = 1;
      }
      else {
        uVar1 = *(undefined4 *)(param_3 + 1);
        *(undefined8 *)(lVar5 + 0x10 + lVar3) = *param_3;
        *(undefined4 *)(lVar5 + 0x18 + lVar3) = uVar1;
        *(undefined1 *)(*(longlong *)(*(longlong *)*param_1 + 0x2c8) + 1 + lVar5) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140e415b0 FUN_140e415b0 body=172 status=ok
// SIG undefined FUN_140e415b0(void)

void FUN_140e415b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar5 = (longlong *)FWeakObjectPtr::Get();
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x310))(plVar5,0);
    if (plVar5[0x8b] != 0) {
      uVar6 = FWeakObjectPtr::Get(param_1 + 8);
      FUN_142c7bc00(plVar5[0x8b],local_18,uVar6,2);
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
      }
    }
    FUN_140e4b950(plVar5);
  }
  return;
}



// FUNCTION 140e41660 FUN_140e41660 body=185 status=ok
// SIG undefined FUN_140e41660(void)

void FUN_140e41660(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar3 = FWeakObjectPtr::Get(param_1 + 0x10);
  if ((((lVar3 != 0) && ((*(byte *)(lVar3 + 0x738) & 0x40) == 0)) &&
      (plVar4 = (longlong *)FWeakObjectPtr::Get(param_1), plVar4 != (longlong *)0x0)) &&
     ((**(code **)(*plVar4 + 0x310))(plVar4,0), plVar4[0x8b] != 0)) {
    uVar5 = FWeakObjectPtr::Get(param_1 + 8);
    FUN_142c7bc00(plVar4[0x8b],local_18,uVar5,2);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_10 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
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
  }
  return;
}



// FUNCTION 140e418f0 FUN_140e418f0 body=169 status=ok
// SIG undefined FUN_140e418f0(void)

longlong FUN_140e418f0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x2348);
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
  if (*(longlong *)(param_1 + 0x22f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x22d0) != 0) {
    FMemory::Free();
  }
  FUN_1409c4bb0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2390);
  }
  return param_1;
}



// FUNCTION 140e419a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
AARSharedWorldPlayerController::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140e40b20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x680);
  }
  return param_1;
}



// FUNCTION 140e419e0 FUN_140e419e0 body=109 status=ok
// SIG undefined FUN_140e419e0(void)

longlong FUN_140e419e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x2ce0) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2cc8);
  FUN_140e409f0(param_1 + 0x2cb8);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2c80);
  FUN_1426d55e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2cf0);
  }
  return param_1;
}



// FUNCTION 140e41a50 FUN_140e41a50 body=299 status=ok
// SIG undefined FUN_140e41a50(void)

longlong FUN_140e41a50(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x728);
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6d8) != 0) {
    FMemory::Free();
  }
  TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
            (param_1 + 0x6c0);
  FUN_14099a9b0(param_1 + 0x6b0);
  FUN_14099aa40(param_1 + 0x6a0);
  TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
            (param_1 + 0x690);
  FUN_14099a950(param_1 + 0x680);
  FUN_140b9d2b0(param_1 + 0x5b0);
  FUN_140b9d2b0(param_1 + 0x4e8);
  plVar4 = *(longlong **)(param_1 + 0x4d0);
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
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x758);
  }
  return param_1;
}


