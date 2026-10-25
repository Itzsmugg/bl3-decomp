// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140cfc0b0 FUN_140cfc0b0 body=354 status=ok
// SIG undefined FUN_140cfc0b0(void)

void FUN_140cfc0b0(longlong param_1,undefined1 *param_2,float *param_3,float *param_4,float *param_5
                  ,float *param_6)

{
  float fVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_146b17150 != 0) && (lVar4 = FUN_142874ac0(), lVar4 != 0)) {
    lVar5 = FUN_141424dd0();
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
      uVar3 = FUN_142486990(lVar4);
      *param_2 = uVar3;
      fVar1 = *(float *)(param_1 + 0x1224);
      fVar7 = *(float *)(param_1 + 0x1220);
      fVar6 = (float)FUN_140cb6ff0(lVar4);
      if ((fVar7 <= fVar6) && (fVar7 = fVar6, fVar1 <= fVar6)) {
        fVar7 = fVar1;
      }
      *param_3 = fVar7;
      fVar1 = *(float *)(param_1 + 0x1238);
      fVar7 = *(float *)(param_1 + 0x1234);
      fVar6 = (float)FUN_140cb62b0(lVar4);
      if ((fVar7 <= fVar6) && (fVar7 = fVar6, fVar1 <= fVar6)) {
        fVar7 = fVar1;
      }
      *param_4 = fVar7;
      fVar1 = *(float *)(param_1 + 0x1240);
      fVar7 = *(float *)(param_1 + 0x123c);
      fVar6 = (float)FUN_140cb62a0(lVar4);
      if ((fVar7 <= fVar6) && (fVar7 = fVar6, fVar1 <= fVar6)) {
        fVar7 = fVar1;
      }
      *param_5 = fVar7;
      fVar1 = *(float *)(param_1 + 0x122c);
      fVar7 = *(float *)(param_1 + 0x1228);
      fVar6 = (float)UCharacterMovementComponent::K2_GetWalkableFloorZ(lVar4);
      if ((fVar7 <= fVar6) && (fVar7 = fVar6, fVar1 <= fVar6)) {
        fVar7 = fVar1;
      }
      *param_6 = fVar7;
    }
  }
  return;
}



// FUNCTION 140cfc220 FUN_140cfc220 body=126 status=ok
// SIG undefined FUN_140cfc220(void)

undefined8 * FUN_140cfc220(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x460);
  if (lVar1 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar2 = *(undefined8 *)(lVar1 + 0x5ec);
      *param_2 = *(undefined8 *)(lVar1 + 0x5e4);
      param_2[1] = uVar2;
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140cfc2a0 FUN_140cfc2a0 body=708 status=ok
// SIG undefined FUN_140cfc2a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140cfc2a0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined **local_60 [2];
  longlong local_50;
  int local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar8 = FUN_1404b03b0();
  FText::FText(param_2,uVar8);
  lVar4 = *(longlong *)(param_1 + 0x130);
  if (lVar4 != 0) {
    lVar9 = UUGGameViewportClient::StaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar8 = FUN_14067a440(lVar4);
      lVar9 = *(longlong *)(param_1 + 0x5b8);
      if (lVar9 != 0) {
        lVar10 = FUN_140681420();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((bVar5) && (lVar9 = FUN_14067a470(lVar9,uVar8), lVar9 != 0)) {
          lVar10 = *param_3;
          if (*(int *)(lVar4 + 0x210) != *(int *)(lVar4 + 0x23c)) {
            lVar11 = *(longlong *)(lVar4 + 0x248);
            if (*(longlong *)(lVar4 + 0x248) == 0) {
              lVar11 = lVar4 + 0x240;
            }
            iVar7 = *(int *)(lVar11 + ((longlong)((int)((ulonglong)lVar10 >> 0x20) + (int)lVar10) &
                                      (longlong)*(int *)(lVar4 + 0x250) - 1U) * 4);
            if (iVar7 != -1) {
              do {
                lVar11 = *(longlong *)(lVar4 + 0x208) + (longlong)iVar7 * 0x18;
                if (*(longlong *)(*(longlong *)(lVar4 + 0x208) + (longlong)iVar7 * 0x18) == lVar10)
                {
                  if (iVar7 != -1) goto LAB_140cfc414;
                  break;
                }
                iVar7 = *(int *)(lVar11 + 0x10);
              } while (iVar7 != -1);
            }
          }
          lVar11 = 0;
LAB_140cfc414:
          FUN_140679a20(lVar9,local_60,*(undefined8 *)(lVar11 + 8));
          lVar4 = local_50;
          if (local_40 != '\0') {
            lVar9 = local_50 + (longlong)local_48 * 0x18;
            for (lVar10 = local_50; lVar10 != lVar9; lVar10 = lVar10 + 0x18) {
              cVar3 = *(char *)(param_1 + 0x958);
              cVar6 = FKey::IsGamepadKey(lVar10);
              if (cVar6 == cVar3) {
                iVar7 = (int)((lVar10 - lVar4) / 0x18);
                if (iVar7 != -1) {
                  local_88 = 0xbf800000;
                  uVar8 = FUN_142ee98f0(local_78,local_50 + (longlong)iVar7 * 0x18,param_1,
                                        (cVar3 != '\0') + '\x01');
                  FText::operator=(param_2,uVar8);
                  if (local_70 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_70 + 1;
                    lVar4 = *plVar1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)lVar4 == 1) {
                      (**(code **)*local_70)(local_70);
                      LOCK();
                      piVar2 = (int *)((longlong)local_70 + 0xc);
                      iVar7 = *piVar2;
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (iVar7 == 1) {
                        (**(code **)(*local_70 + 8))(local_70,1);
                      }
                    }
                  }
                }
                break;
              }
            }
            if (local_40 != '\0') {
              local_40 = 0;
              local_60[0] = &PTR__scalar_deleting_destructor__1440385f8;
              TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
              ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(&local_50);
            }
          }
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140cfc570 FUN_140cfc570 body=318 status=ok
// SIG undefined FUN_140cfc570(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140cfc570(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar4 = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = DAT_146b33f38;
  lVar5 = DAT_146b33f38 + 0xa0;
  lVar2 = FWeakObjectPtr::Get(lVar5);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar3 + 0xa8)) {
      return 0;
    }
    local_28 = 0;
    if (*(longlong *)(lVar3 + 0xb0) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0xa8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar5);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_1413bd170();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && (*(longlong *)(lVar2 + 0x210) != 0)) {
    uVar4 = FUN_142caac20(lVar2 + 0x218,local_20,param_2);
    uVar4 = FUN_142cc45a0(uVar4,0);
  }
  return uVar4;
}



// FUNCTION 140cfc6e0 FUN_140cfc6e0 body=196 status=ok
// SIG undefined FUN_140cfc6e0(void)

undefined8 FUN_140cfc6e0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x848);
  if (lVar3 == 0) {
    return 0;
  }
  lVar2 = FUN_1413f82e0();
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
  lVar3 = (**(code **)(*(longlong *)(lVar3 + 0xd80) + 0x18))();
  if (lVar3 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    lVar2 = FUN_1430228e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140cfc782;
  }
  param_2 = 0;
LAB_140cfc782:
  uVar4 = FUN_142ff7c90(lVar3,param_2);
  return uVar4;
}



// FUNCTION 140cfc7b0 FUN_140cfc7b0 body=24 status=ok
// SIG undefined FUN_140cfc7b0(void)

void FUN_140cfc7b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1850) != 0) {
    FUN_140ad6100(*(longlong *)(param_1 + 0x1850),param_1);
    return;
  }
  return;
}



// FUNCTION 140cfc7d0 FUN_140cfc7d0 body=67 status=ok
// SIG undefined FUN_140cfc7d0(void)

undefined4 FUN_140cfc7d0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x768))();
    if (cVar1 != '\0') {
      lVar2 = FUN_140cff230(param_1);
      if (lVar2 != 0) {
        return *(undefined4 *)(lVar2 + 0x398);
      }
    }
  }
  return 0;
}



// FUNCTION 140cfc820 FUN_140cfc820 body=39 status=ok
// SIG undefined FUN_140cfc820(void)

undefined4 FUN_140cfc820(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x9a0);
  if (lVar1 == 0) {
    lVar1 = FUN_140cfcaa0();
    if (lVar1 == 0) {
      return 0;
    }
  }
  return *(undefined4 *)(lVar1 + 0x28);
}



// FUNCTION 140cfc850 FUN_140cfc850 body=130 status=ok
// SIG undefined FUN_140cfc850(void)

undefined8 FUN_140cfc850(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14686e130) {
    _Init_thread_header(&DAT_14686e130);
    if (DAT_14686e130 == -1) {
      FName::FName(&DAT_14686e128,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_14686e130);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_14686e128);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x28);
  }
  return 0;
}



// FUNCTION 140cfc8e0 FUN_140cfc8e0 body=439 status=ok
// SIG undefined FUN_140cfc8e0(void)

longlong FUN_140cfc8e0(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar4 = FUN_1422312c0();
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
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
      plVar8 = *(longlong **)(lVar4 + 0xac8);
      plVar1 = plVar8 + (longlong)*(int *)(lVar4 + 0xad0) * 3;
      for (; plVar8 != plVar1; plVar8 = plVar8 + 3) {
        if (((*plVar8 == 0) || (cVar3 = FUN_142c48f60(*plVar8,param_1,0), cVar3 != '\0')) &&
           (plVar8[2] != 0)) {
          lVar5 = ANavVolume::GetPrivateStaticClass();
          for (lVar4 = plVar8[2]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
            if (lVar4 == lVar5) {
              if (plVar8[2] != 0) {
                lVar4 = 0;
                if (plVar8[2] != 0) {
                  lVar7 = ANavVolume::GetPrivateStaticClass();
                  for (lVar5 = plVar8[2];
                      (lVar4 = 0, lVar5 != 0 && (lVar4 = plVar8[2], lVar5 != lVar7));
                      lVar5 = *(longlong *)(lVar5 + 0x30)) {
                  }
                }
                uVar6 = GetTransientPackage();
                FUN_1417846f0(uVar6,
                              L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                             );
                lVar4 = FUN_1417985e0(lVar4,uVar6,0,0,0,0,0,0,0);
                return lVar4;
              }
              break;
            }
          }
        }
      }
    }
  }
  uVar6 = ANavVolume::GetPrivateStaticClass();
  lVar4 = UGameplayStatics::CreateSaveGameObject(uVar6);
  if (lVar4 != 0) {
    lVar5 = ANavVolume::GetPrivateStaticClass();
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
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 140cfcaa0 FUN_140cfcaa0 body=609 status=ok
// SIG undefined FUN_140cfcaa0(void)

longlong FUN_140cfcaa0(undefined8 param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  lVar4 = FUN_1422312c0();
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
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
      plVar10 = *(longlong **)(lVar4 + 0xac8);
      plVar1 = plVar10 + (longlong)*(int *)(lVar4 + 0xad0) * 3;
      if (plVar10 != plVar1) {
        plVar9 = plVar10 + 1;
        lVar4 = 0;
        do {
          if (((*plVar10 == 0) || (cVar3 = FUN_142c48f60(*plVar10,param_1,0), cVar3 != '\0')) &&
             (*plVar9 != 0)) {
            lVar6 = FUN_1414707f0();
            for (lVar5 = *plVar9; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
              if (lVar5 == lVar6) {
                if (*plVar9 != 0) {
                  lVar5 = FUN_1414707f0();
                  for (lVar4 = *plVar9; (lVar6 = 0, lVar4 != 0 && (lVar6 = *plVar9, lVar4 != lVar5))
                      ; lVar4 = *(longlong *)(lVar4 + 0x30)) {
                  }
                  uVar7 = GetTransientPackage();
                  FUN_1417846f0(uVar7,
                                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                               );
                  lVar4 = FUN_1417985e0(lVar6,uVar7,0,0,0,0,0,0,0);
                }
                break;
              }
            }
          }
          plVar10 = plVar10 + 3;
          plVar9 = plVar9 + 3;
        } while (plVar10 != plVar1);
        if (lVar4 != 0) goto LAB_140cfcca4;
      }
    }
  }
  uVar7 = FUN_1414707f0();
  uVar8 = GetTransientPackage();
  FUN_1417846f0(uVar8,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  lVar4 = FUN_1417985e0(uVar7,uVar8,0,0,0,0,0,0,0);
LAB_140cfcca4:
  lVar5 = FUN_140d3b890(lVar4);
  if ((*(int *)(lVar5 + 8) < 2) && (lVar5 = FUN_140d3b6b0(lVar4 + 0x50), lVar5 != 0)) {
    uVar7 = FText::ToString(lVar5 + 0x90);
    FUN_140d4d360(lVar4,uVar7);
  }
  return lVar4;
}



// FUNCTION 140cfcd10 FUN_140cfcd10 body=451 status=ok
// SIG undefined FUN_140cfcd10(void)

undefined8 *
FUN_140cfcd10(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  
  lVar7 = FUN_1422312c0();
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      FUN_142dcf3a0(param_1,&local_38);
      if (local_38 != 0) {
        local_28 = local_38;
        plStack_20 = plStack_30;
        local_48 = 0;
        local_40 = 0;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
          UNLOCK();
        }
        FUN_140d79f00(*(undefined8 *)(lVar7 + 0x478),&local_28,param_3,param_4,&local_48);
        plVar3 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_20 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_20)(plStack_20);
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
        *param_2 = local_48;
        *(undefined4 *)(param_2 + 1) = (undefined4)local_40;
        uVar6 = local_40._4_4_;
        local_40 = 0;
        local_48 = 0;
        *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
        if (plStack_30 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        plVar3 = plStack_30 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 != 1) {
          return param_2;
        }
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plStack_30 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 != 1) {
          return param_2;
        }
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
        return param_2;
      }
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_30 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_30)(plStack_30);
          LOCK();
          piVar2 = (int *)((longlong)plStack_30 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_30 + 8))(plStack_30,1);
          }
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140cfcee0 FUN_140cfcee0 body=36 status=ok
// SIG undefined FUN_140cfcee0(void)

undefined8 FUN_140cfcee0(longlong param_1,undefined8 param_2)

{
  FUN_140cfcd10(param_1 + -0x980,param_2,1,0);
  return param_2;
}



// FUNCTION 140cfcf10 FUN_140cfcf10 body=59 status=ok
// SIG undefined FUN_140cfcf10(void)

ulonglong FUN_140cfcf10(longlong param_1,longlong param_2)

{
  longlong *in_RAX;
  longlong *plVar1;
  
  if (param_2 != 0) {
    in_RAX = *(longlong **)(param_1 + 0x1900);
    plVar1 = in_RAX + (longlong)*(int *)(param_1 + 0x1908) * 2;
    for (; in_RAX != plVar1; in_RAX = in_RAX + 2) {
      if (*in_RAX == param_2) {
        return CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX[1] != '\0') + '\x01');
      }
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140cfcf50 FUN_140cfcf50 body=45 status=ok
// SIG undefined FUN_140cfcf50(void)

void FUN_140cfcf50(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140cfbfb0();
  if (lVar1 != 0) {
    FUN_140aabae0(lVar1 + 0x340,param_2);
    return;
  }
  return;
}



// FUNCTION 140cfcf80 FUN_140cfcf80 body=348 status=ok
// SIG undefined FUN_140cfcf80(void)

undefined8 FUN_140cfcf80(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x990);
  uVar5 = 0;
  if (lVar1 == 0) {
    return 0;
  }
  lVar3 = FUN_1413ffe00();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = DAT_146b33f38;
  lVar6 = DAT_146b33f38 + 0xa0;
  lVar4 = FWeakObjectPtr::Get(lVar6);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar3 + 0xa8)) {
      return 0;
    }
    if (*(longlong *)(lVar3 + 0xb0) == 0) {
      return 0;
    }
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0xa8) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar6);
    if (lVar4 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_1413bd170();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    uVar5 = ULevel::GetLevelScriptActor(lVar4);
    uVar5 = FUN_140c42900(lVar1,uVar5);
  }
  return uVar5;
}



// FUNCTION 140cfd0e0 FUN_140cfd0e0 body=348 status=ok
// SIG undefined FUN_140cfd0e0(void)

undefined8 FUN_140cfd0e0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x990);
  uVar5 = 0;
  if (lVar1 == 0) {
    return 0;
  }
  lVar3 = FUN_1413ffe00();
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = DAT_146b33f38;
  lVar6 = DAT_146b33f38 + 0xa0;
  lVar4 = FWeakObjectPtr::Get(lVar6);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar3 + 0xa8)) {
      return 0;
    }
    if (*(longlong *)(lVar3 + 0xb0) == 0) {
      return 0;
    }
    lVar4 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0xa8) = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(lVar6);
    if (lVar4 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_1413bd170();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    uVar5 = FUN_1412bf1c0(lVar4);
    uVar5 = FUN_140c42900(lVar1,uVar5);
  }
  return uVar5;
}



// FUNCTION 140cfd240 FUN_140cfd240 body=172 status=ok
// SIG undefined FUN_140cfd240(void)

longlong FUN_140cfd240(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x990);
  if (lVar1 != 0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar1 = *(longlong *)(lVar1 + 0x2a60), lVar1 != 0)) {
      lVar4 = *(longlong *)(lVar1 + 0x2a0);
      lVar1 = lVar4 + (longlong)*(int *)(lVar1 + 0x2a8) * 0x28;
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
        lVar2 = *(longlong *)(lVar4 + 0x10);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xf0) == param_2)) {
          return lVar2;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140cfd2f0 FUN_140cfd2f0 body=425 status=ok
// SIG undefined FUN_140cfd2f0(void)

longlong FUN_140cfd2f0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x990);
  if (lVar5 == 0) {
    return 0;
  }
  lVar2 = FUN_1413ffe00();
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = DAT_146b33f38;
  lVar6 = DAT_146b33f38 + 0xa0;
  lVar3 = FWeakObjectPtr::Get(lVar6);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar2 + 0xa8)) {
      return 0;
    }
    if (*(longlong *)(lVar2 + 0xb0) == 0) {
      return 0;
    }
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar6,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar2 + 0xa8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar6);
    if (lVar3 == 0) {
      return 0;
    }
  }
  lVar2 = FUN_1413bd170();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = FWmfMediaPlayer::GetSamples(lVar3);
    lVar5 = FUN_140c42900(lVar5,uVar4);
    if (lVar5 != 0) {
      lVar2 = AWeaponBase::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
           ) != lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return lVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 140cfd4c0 FUN_140cfd4c0 body=474 status=ok
// SIG undefined FUN_140cfd4c0(void)

longlong FUN_140cfd4c0(longlong param_1,char param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x990);
  lVar6 = 0;
  lVar3 = 0;
  if (lVar4 != 0) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar3 = DAT_146b33f38;
      lVar5 = DAT_146b33f38 + 0xa0;
      lVar2 = FWeakObjectPtr::Get(lVar5);
      if (lVar2 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if (DAT_1464b56f4 == *(int *)(lVar3 + 0xa8)) {
          return 0;
        }
        if (*(longlong *)(lVar3 + 0xb0) == 0) {
          return 0;
        }
        lVar2 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar5,lVar2);
        if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar3 + 0xa8) = DAT_1464b56f4;
        }
        lVar2 = FWeakObjectPtr::Get(lVar5);
        if (lVar2 == 0) {
          return 0;
        }
      }
      lVar3 = FUN_1413bd170();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar3 = lVar6;
      if (bVar1) {
        if (param_2 == '\x01') {
          lVar6 = ULevel::GetWorld(lVar2);
        }
        else if (param_2 == '\x02') {
          lVar6 = FDuplicateDataWriter::GetSerializeContext(lVar2);
        }
        else if (param_2 == '\x03') {
          lVar6 = UMovieSceneSection::GetChannelProxy(lVar2);
        }
        else {
          if (param_2 != '\x04') {
            return 0;
          }
          lVar6 = FUN_140585ca0(lVar2);
        }
        if ((lVar6 != 0) && (lVar4 = FUN_140c42900(lVar4,lVar6), lVar4 != 0)) {
          lVar6 = FUN_1430b3b80();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            lVar3 = lVar4;
          }
        }
      }
    }
  }
  return lVar3;
}



// FUNCTION 140cfd6a0 FUN_140cfd6a0 body=8 status=ok
// SIG undefined FUN_140cfd6a0(void)

undefined8 FUN_140cfd6a0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x14c0);
}



// FUNCTION 140cfd6b0 FUN_140cfd6b0 body=294 status=ok
// SIG undefined FUN_140cfd6b0(void)

undefined4 FUN_140cfd6b0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong local_48;
  longlong *local_40;
  undefined **local_38;
  longlong local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  uVar5 = 0;
  FUN_142dcf3a0(param_1,&local_48);
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar7 = FUN_140d3a420(uVar6);
  if ((local_48 != 0) && (lVar7 != 0)) {
    local_30 = local_48;
    local_28 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
    }
    local_20 = 0;
    local_38 = &PTR_FUN_143f740c8;
    local_18 = 0;
    uVar5 = FUN_140d3adc0(lVar7,&local_38);
    local_38 = &PTR_FUN_143f740c8;
    if (local_20 != 0) {
      FMemory::Free();
    }
    plVar3 = local_28;
    local_38 = &PTR_FUN_143f73d18;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_28)(local_28);
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
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return uVar5;
}



// FUNCTION 140cfd7e0 FUN_140cfd7e0 body=81 status=ok
// SIG undefined FUN_140cfd7e0(void)

undefined8 FUN_140cfd7e0(undefined8 param_1)

{
  int local_res10 [6];
  
  local_res10[0] = 0;
  FUN_142710360(param_1,local_res10);
  if (local_res10[0] == 1) {
    return 0x1000;
  }
  if (local_res10[0] != 2) {
    if (local_res10[0] != 3) {
      return 0x800;
    }
    return 0x40000;
  }
  return 0x20000;
}



// FUNCTION 140cfd840 FUN_140cfd840 body=199 status=ok
// SIG undefined FUN_140cfd840(void)

longlong FUN_140cfd840(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x990);
  lVar5 = 0;
  if (lVar1 != 0) {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar1 = *(longlong *)(lVar1 + 0x2a60), lVar1 != 0)) {
      lVar4 = *(longlong *)(lVar1 + 0x2a0);
      lVar1 = lVar4 + (longlong)*(int *)(lVar1 + 0x2a8) * 0x28;
      lVar5 = 0;
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x28) {
        lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x110);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0xf0) == param_2)) {
          lVar5 = lVar2;
        }
      }
    }
  }
  return lVar5;
}



// FUNCTION 140cfd910 FUN_140cfd910 body=597 status=ok
// SIG undefined FUN_140cfd910(void)

void FUN_140cfd910(undefined8 param_1,int param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar16;
  ulonglong uVar17;
  float fVar18;
  ulonglong uVar15;
  
  iVar16 = (int)param_3[1];
  if (iVar16 != 0) {
    uVar5 = 0;
    uVar15 = 9999;
    iVar14 = 9999;
    uVar9 = 0xffffffffffffffff;
    uVar17 = uVar9;
    if (0 < iVar16) {
      lVar2 = *param_3;
      uVar12 = 0xffffffffffffffe4;
      uVar11 = 9999;
      uVar10 = 0x445a4;
      uVar7 = uVar5;
      uVar13 = uVar5;
      do {
        iVar1 = *(int *)(uVar7 + lVar2);
        if (iVar1 == param_2) {
          lVar6 = (longlong)(int)uVar5 * 0x1c;
          uVar3 = ((undefined8 *)(lVar6 + lVar2))[1];
          *param_4 = *(undefined8 *)(lVar6 + lVar2);
          param_4[1] = uVar3;
          param_4[2] = *(undefined8 *)(lVar6 + 0x10 + lVar2);
          *(undefined4 *)(param_4 + 3) = *(undefined4 *)(lVar6 + 0x18 + lVar2);
          return;
        }
        if (((uVar11 == 9999) || (iVar1 < *(int *)(lVar2 + uVar10))) && (param_2 < iVar1)) {
          uVar10 = uVar7;
          uVar11 = uVar13;
          uVar15 = uVar5;
        }
        iVar14 = (int)uVar15;
        if (((uVar9 == 0xffffffffffffffff) || (*(int *)(uVar12 + lVar2) < iVar1)) &&
           (iVar1 < param_2)) {
          uVar9 = uVar13;
          uVar12 = uVar7;
          uVar17 = uVar5;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        uVar13 = uVar13 + 1;
        uVar7 = uVar7 + 0x1c;
      } while ((int)uVar4 < iVar16);
    }
    lVar2 = *param_3;
    iVar16 = (int)uVar17;
    if (iVar14 == 9999) {
      lVar6 = (longlong)iVar16 * 0x1c;
      uVar3 = ((undefined8 *)(lVar6 + lVar2))[1];
      *param_4 = *(undefined8 *)(lVar6 + lVar2);
      param_4[1] = uVar3;
      param_4[2] = *(undefined8 *)(lVar6 + 0x10 + lVar2);
      *(undefined4 *)(param_4 + 3) = *(undefined4 *)(lVar6 + 0x18 + lVar2);
    }
    else {
      lVar6 = (longlong)iVar14 * 0x1c;
      if (iVar16 == -1) {
        uVar3 = ((undefined8 *)(lVar6 + lVar2))[1];
        *param_4 = *(undefined8 *)(lVar6 + lVar2);
        param_4[1] = uVar3;
        param_4[2] = *(undefined8 *)(lVar6 + 0x10 + lVar2);
        *(undefined4 *)(param_4 + 3) = *(undefined4 *)(lVar6 + 0x18 + lVar2);
      }
      else {
        lVar8 = (longlong)iVar16 * 0x1c;
        fVar18 = (float)(param_2 - *(int *)(lVar2 + lVar8)) /
                 (float)(*(int *)(lVar6 + lVar2) - *(int *)(lVar2 + lVar8));
        *(float *)((longlong)param_4 + 4) =
             (*(float *)(lVar6 + 4 + lVar2) - *(float *)(lVar2 + 4 + lVar8)) * fVar18 +
             *(float *)(lVar2 + 4 + lVar8);
        lVar2 = *param_3;
        *(float *)(param_4 + 1) =
             (*(float *)(lVar6 + 8 + lVar2) - *(float *)(lVar2 + 8 + lVar8)) * fVar18 +
             *(float *)(lVar2 + 8 + lVar8);
        lVar2 = *param_3;
        *(float *)((longlong)param_4 + 0xc) =
             (*(float *)(lVar6 + 0xc + lVar2) - *(float *)(lVar2 + 0xc + lVar8)) * fVar18 +
             *(float *)(lVar2 + 0xc + lVar8);
        lVar2 = *param_3;
        *(float *)(param_4 + 2) =
             (*(float *)(lVar6 + 0x10 + lVar2) - *(float *)(lVar2 + 0x10 + lVar8)) * fVar18 +
             *(float *)(lVar2 + 0x10 + lVar8);
        lVar2 = *param_3;
        *(float *)((longlong)param_4 + 0x14) =
             (*(float *)(lVar6 + 0x14 + lVar2) - *(float *)(lVar2 + 0x14 + lVar8)) * fVar18 +
             *(float *)(lVar2 + 0x14 + lVar8);
        lVar2 = *param_3;
        *(float *)(param_4 + 3) =
             (*(float *)(lVar6 + 0x18 + lVar2) - *(float *)(lVar2 + 0x18 + lVar8)) * fVar18 +
             *(float *)(lVar2 + 0x18 + lVar8);
      }
    }
  }
  return;
}



// FUNCTION 140cfdb70 FUN_140cfdb70 body=93 status=ok
// SIG undefined FUN_140cfdb70(void)

ulonglong FUN_140cfdb70(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x460);
  if (lVar2 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      return (ulonglong)*(byte *)(lVar2 + 0x599);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140cfdbd0 FUN_140cfdbd0 body=1301 status=ok
// SIG undefined FUN_140cfdbd0(void)

void FUN_140cfdbd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_142dcee80();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_14686e178) && (_Init_thread_header(&DAT_14686e178), DAT_14686e178 == -1)) {
    uVar1 = FUN_14145f370();
    FUN_14145f370();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedCameraModeState",1);
    DAT_14686e170 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686e178);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686e170 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686e170 + 0x40) + (short)iVar3;
      local_24 = 2;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686e170 + 0x30));
  }
  if ((*piVar5 < DAT_14686e188) && (_Init_thread_header(&DAT_14686e188), DAT_14686e188 == -1)) {
    uVar1 = FUN_14145f370();
    FUN_14145f370();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bInfiniteAmmo",1);
    DAT_14686e180 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686e188);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686e180 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686e180 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686e180 + 0x30));
  }
  if ((*piVar5 < DAT_14686e198) && (_Init_thread_header(&DAT_14686e198), DAT_14686e198 == -1)) {
    uVar1 = FUN_14145f370();
    FUN_14145f370();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GearSoldByFriendActor",1);
    DAT_14686e190 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686e198);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686e190 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686e190 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686e190 + 0x30));
  }
  if ((*piVar5 < DAT_14686e1a8) && (_Init_thread_header(&DAT_14686e1a8), DAT_14686e1a8 == -1)) {
    uVar1 = FUN_14145f370();
    FUN_14145f370();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TradeManager",1);
    DAT_14686e1a0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686e1a8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686e1a0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686e1a0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686e1a0 + 0x30));
  }
  if ((*piVar5 < DAT_14686e1b8) && (_Init_thread_header(&DAT_14686e1b8), DAT_14686e1b8 == -1)) {
    uVar1 = FUN_14145f370();
    FUN_14145f370();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CustomReplicatedActor",1);
    DAT_14686e1b0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686e1b8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686e1b0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686e1b0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686e1b0 + 0x30));
  }
  if ((*piVar5 < DAT_14686e1c8) && (_Init_thread_header(&DAT_14686e1c8), DAT_14686e1c8 == -1)) {
    uVar1 = FUN_14145f370();
    FUN_14145f370();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MoxxisEventTier",1);
    DAT_14686e1c0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686e1c8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_14686e1c0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686e1c0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_14686e1c0 + 0x30));
  }
  if ((*piVar5 < DAT_14686e1d8) && (_Init_thread_header(&DAT_14686e1d8), DAT_14686e1d8 == -1)) {
    uVar1 = FUN_14145f370();
    FUN_14145f370();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReRolledInventoryActor",1);
    DAT_14686e1d0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_14686e1d8);
  }
  if (0 < *(int *)(DAT_14686e1d0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_14686e1d0 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_14686e1d0 + 0x30));
  }
  return;
}



// FUNCTION 140cfe0f0 SupportsKeyboardFocus body=8 status=ok
// SIG undefined SupportsKeyboardFocus(void)

undefined1 SVirtualWindow::SupportsKeyboardFocus(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xaa8);
}



// FUNCTION 140cfe100 FUN_140cfe100 body=711 status=ok
// SIG undefined FUN_140cfe100(void)

longlong * FUN_140cfe100(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong **pplVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 local_res8 [8];
  longlong *local_78;
  uint local_70;
  uint local_6c;
  undefined8 local_68 [2];
  longlong local_58 [2];
  longlong local_48 [2];
  undefined1 local_38 [16];
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140cfe3d0();
  lVar10 = *(longlong *)(param_1 + 0xe58);
  lVar14 = (longlong)*(int *)(param_1 + 0xe60) * 0xb8 + lVar10;
  do {
    if (lVar10 == lVar14) {
      plVar4 = (longlong *)0x0;
      FUN_140aab580(param_1 + 0x1a40,param_1,param_2);
      local_res8[0] = 0;
      FUN_140cdea80(*param_2,(longlong)(int)param_2[1],0,local_res8);
      lVar10 = FUN_140cff230(param_1);
      if (lVar10 != 0) {
        local_68[0] = 0;
        uVar7 = 0;
        FUN_140cdd500(local_68,*param_2,(int)param_2[1],0,0);
        pplVar13 = (longlong **)(lVar10 + 0x3c0);
        local_78 = (longlong *)0x0;
        local_6c = 0;
        plVar11 = *pplVar13;
        plVar12 = plVar11 + (longlong)*(int *)(lVar10 + 0x3c8) * 2;
        plVar6 = plVar4;
        plVar15 = plVar4;
        for (; iVar5 = (int)plVar4, plVar11 != plVar12; plVar11 = plVar11 + 2) {
          FString::FString(local_48,plVar11);
          FString::FString(local_58,local_48);
          FString::FString(local_38,local_58);
          lVar14 = FUN_140cdd9b0(local_68,local_38);
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if (lVar14 != 0) {
            local_70 = iVar5 + 1;
            if ((int)plVar15 < (int)local_70) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_78,plVar4);
              plVar15 = (longlong *)(ulonglong)local_6c;
              plVar6 = local_78;
            }
            plVar4 = (longlong *)(ulonglong)local_70;
            FString::FString(plVar6 + (longlong)iVar5 * 2,plVar11);
          }
          uVar7 = SUB84(plVar15,0);
        }
        FUN_140ce1a60(local_68);
        if (pplVar13 != &local_78) {
          iVar8 = *(int *)(lVar10 + 0x3c8);
          plVar4 = *pplVar13;
          if (iVar8 != 0) {
            do {
              if (*plVar4 != 0) {
                FMemory::Free();
              }
              plVar4 = plVar4 + 2;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            plVar4 = *pplVar13;
          }
          if (plVar4 != (longlong *)0x0) {
            FMemory::Free(plVar4);
          }
          *pplVar13 = plVar6;
          plVar6 = (longlong *)0x0;
          *(int *)(lVar10 + 0x3c8) = iVar5;
          plVar4 = (longlong *)0x0;
          *(undefined4 *)(lVar10 + 0x3cc) = uVar7;
        }
        uVar2 = (uint)plVar4;
        plVar11 = plVar6;
        while (uVar2 != 0) {
          if (*plVar11 != 0) {
            FMemory::Free();
          }
          plVar11 = plVar11 + 2;
          uVar2 = (int)plVar4 - 1;
          plVar4 = (longlong *)(ulonglong)uVar2;
        }
        if (plVar6 != (longlong *)0x0) {
          FMemory::Free(plVar6);
        }
      }
      return param_2;
    }
    cVar1 = FUN_140b2f430(lVar10);
    if (cVar1 != '\0') {
      lVar3 = *param_2;
      iVar5 = (int)param_2[1];
      lVar9 = (longlong)iVar5 * 0xb8 + lVar3;
      if (lVar3 != lVar9) {
        do {
          cVar1 = FUN_140b17750(lVar3,lVar10);
          if (cVar1 != '\0') goto LAB_140cfe1bd;
          lVar3 = lVar3 + 0xb8;
        } while (lVar3 != lVar9);
        iVar5 = (int)param_2[1];
      }
      *(int *)(param_2 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar5);
      }
      FUN_140ce1220((longlong)iVar5 * 0xb8 + *param_2,lVar10);
    }
LAB_140cfe1bd:
    lVar10 = lVar10 + 0xb8;
  } while( true );
}



// FUNCTION 140cfe3d0 FUN_140cfe3d0 body=885 status=ok
// SIG undefined FUN_140cfe3d0(void)

void FUN_140cfe3d0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong local_138;
  int local_130;
  longlong local_128;
  longlong *plStack_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong *plStack_100;
  char local_f8 [8];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined2 local_48;
  
  lVar7 = FUN_140cff230();
  if (lVar7 != 0) {
    lVar8 = FUN_142b45e90();
    FUN_140d3ccb0(*(undefined8 *)(lVar8 + 0x18),&local_118);
    FUN_142dcf3a0(param_1,&local_128);
    if ((local_118 != 0) && (local_128 != 0)) {
      local_108 = local_128;
      plStack_100 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_120 + 1) = (int)plStack_120[1] + 1;
        UNLOCK();
      }
      FUN_142b48dd0(local_118,&local_138,&local_108);
      plVar3 = plStack_100;
      if (plStack_100 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_100 + 1;
        lVar8 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar8 == 1) {
          (**(code **)*plStack_100)(plStack_100);
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
      for (lVar8 = local_138; lVar8 != (longlong)local_130 * 0x90 + local_138; lVar8 = lVar8 + 0x90)
      {
        local_f8[0] = '\0';
        FText::FText(local_f0);
        FText::FText(local_d8);
        FText::FText(local_c0);
        local_a8 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = (undefined2 *)0x0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = &PTR_FUN_143f740c8;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        FUN_140b307e0(local_f8,lVar8);
        cVar4 = FUN_140b2f430(local_f8);
        if (cVar4 != '\0') {
          if ((local_f8[0] - 1U & 0xfd) == 0) {
            FUN_140d0e4a0(param_1,local_f8);
          }
          puVar11 = *(undefined8 **)(lVar7 + 0x3c0);
          puVar14 = puVar11 + (longlong)*(int *)(lVar7 + 0x3c8) * 2;
          for (; puVar11 != puVar14; puVar11 = puVar11 + 2) {
            puVar10 = &DAT_143f3eda8;
            if ((int)local_88 != 0) {
              puVar10 = local_90;
            }
            if (*(int *)(puVar11 + 1) == 0) {
              puVar9 = &DAT_143f3eda8;
            }
            else {
              puVar9 = (undefined2 *)*puVar11;
            }
            iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
            if (iVar6 == 0) {
              uVar5 = 0;
              goto LAB_140cfe5fa;
            }
          }
          uVar5 = 1;
LAB_140cfe5fa:
          lVar12 = *param_2;
          iVar6 = (int)param_2[1];
          local_48 = CONCAT11(local_48._1_1_,uVar5);
          lVar13 = (longlong)iVar6 * 0xb8 + lVar12;
          if (lVar12 != lVar13) {
            do {
              cVar4 = FUN_140b17750(lVar12,local_f8);
              if (cVar4 != '\0') goto LAB_140cfe66f;
              lVar12 = lVar12 + 0xb8;
            } while (lVar12 != lVar13);
            iVar6 = (int)param_2[1];
          }
          *(int *)(param_2 + 1) = iVar6 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 1) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::
            ResizeGrow(param_2,iVar6);
          }
          FUN_140ce1220((longlong)iVar6 * 0xb8 + *param_2,local_f8);
        }
LAB_140cfe66f:
        FUN_140ce29d0(local_f8);
      }
      FUN_140ce1bb0(&local_138);
    }
    if (plStack_120 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_120 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_120)(plStack_120);
        LOCK();
        piVar2 = (int *)((longlong)plStack_120 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_120 + 8))(plStack_120,1);
        }
      }
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_110 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)local_110 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_110 + 8))(local_110,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140cfe750 FUN_140cfe750 body=207 status=ok
// SIG undefined FUN_140cfe750(void)

int FUN_140cfe750(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x990);
  iVar1 = *(int *)(lVar2 + 0x378);
  if (lVar3 != 0) {
    lVar6 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && (*(longlong *)(lVar2 + 0x380) != 0)) {
      iVar5 = FUN_140e50ca0(lVar3 + 0x2950);
      return iVar5 * *(int *)(lVar2 + 0x37c) + iVar1;
    }
  }
  return iVar1;
}



// FUNCTION 140cfe820 FUN_140cfe820 body=113 status=ok
// SIG undefined FUN_140cfe820(void)

longlong FUN_140cfe820(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x848);
  if (lVar1 != 0) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x1d18), lVar1 != 0)) &&
       (*(longlong *)(param_1 + 0x488) == lVar1)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 140cfe8a0 FUN_140cfe8a0 body=102 status=ok
// SIG undefined FUN_140cfe8a0(void)

undefined8 FUN_140cfe8a0(longlong param_1)

{
  bool bVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_1422312c0(param_1 + -0x980);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
                    /* WARNING: Could not recover jumptable at 0x000140cfe8f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar2 + 0x3c0))(plVar2);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140cfe910 FUN_140cfe910 body=1471 status=ok
// SIG undefined FUN_140cfe910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_140cfe910(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined1 auStack_2d8 [32];
  undefined2 local_2b8;
  longlong *local_2a8;
  longlong *local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  longlong *local_278;
  LARGE_INTEGER local_270;
  undefined1 *local_268 [2];
  undefined1 local_258 [32];
  undefined8 local_238;
  undefined4 local_228;
  undefined1 *local_218 [2];
  undefined1 local_208 [32];
  undefined8 local_1e8;
  undefined4 local_1d8;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8 [16];
  longlong local_1a8 [4];
  longlong *local_188;
  int local_178;
  undefined1 *local_168 [2];
  longlong local_158 [4];
  longlong *local_138;
  int local_128;
  LARGE_INTEGER local_118 [24];
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_2d8;
  if (param_1[0x152] == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1468509e4) &&
       (_Init_thread_header(&DAT_1468509e4), DAT_1468509e4 == -1)) {
      uVar11 = FCommandLine::Get();
      DAT_1468509e0 = FParse::Param(uVar11,L"nullrhi");
      _Init_thread_footer(&DAT_1468509e4);
    }
    if (((DAT_1468b616c == '\0') || (DAT_1468b616d != '\0')) && (DAT_1468509e0 == '\0')) {
      iVar2 = *(int *)((longlong)param_1 + 0xc);
      plVar10 = (longlong *)0x0;
      plVar8 = plVar10;
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar12 = iVar2 >> 0x1f & 0xffff;
        uVar4 = iVar2 + uVar12;
        plVar8 = (longlong *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                 (longlong)(int)((uVar4 & 0xffff) - uVar12) * 0x18);
      }
      if ((((*(uint *)(plVar8 + 1) >> 0x1d & 1) == 0) &&
          (lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 != 0)) &&
         ((char)param_1[0x153] == '\0')) {
        FWeakObjectPtr::operator=(&local_298,param_1);
        local_238 = 0;
        local_228 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_258);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_FUN_1444f8920;
          puVar7[1] = param_1;
          *(undefined4 *)(puVar7 + 2) = local_298;
          *(undefined4 *)((longlong)puVar7 + 0x14) = local_294;
        }
        local_290 = 0;
        local_268[0] = &LAB_140cee970;
        local_288 = 0x23;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_290,0);
        local_2b8 = 0x3f;
        FGenericPlatformString::Convert<char,wchar_t>
                  (local_290,0x23,"AOakPlayerController::GetMenuStack");
        FUN_140cdf730(local_118,&local_290,local_268);
        QueryPerformanceCounter(&local_270);
        local_118[0] = local_270;
        lVar6 = operator_new(0x18);
        plVar8 = plVar10;
        if (lVar6 != 0) {
          plVar8 = (longlong *)FUN_140cdf810(lVar6);
        }
        plVar9 = (longlong *)operator_new(0x18);
        if (plVar9 != (longlong *)0x0) {
          *(undefined4 *)(plVar9 + 1) = 1;
          *plVar9 = (longlong)&PTR_DestroyObject_1444f8938;
          *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
          plVar9[2] = (longlong)plVar8;
          plVar10 = plVar9;
        }
        local_2a8 = plVar8;
        local_2a0 = plVar10;
        SharedPointerInternals::EnableSharedFromThis(&local_2a8,plVar8,plVar8);
        *(undefined1 *)(local_2a8 + 2) = 1;
        local_278 = (longlong *)local_2a8[1];
        local_58 = *local_2a8;
        if (local_278 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_278 + 1) = (int)local_278[1] + 1;
          UNLOCK();
        }
        local_280 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(local_50,&local_278);
        plVar10 = local_278;
        if (local_278 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_278 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_278)(local_278);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)(*local_278 + 8))(local_278,1);
            }
          }
        }
        local_138 = (longlong *)0x0;
        local_128 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_158);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_FUN_1444f8620;
          puVar7[1] = local_118;
        }
        local_168[0] = &LAB_140cee980;
        local_1c8 = local_2a8;
        local_1c0 = local_2a0;
        if (local_2a0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2a0 + 1) = (int)local_2a0[1] + 1;
          UNLOCK();
        }
        TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_1b8,local_168);
        local_1e8 = 0;
        local_1d8 = 0;
        puVar7 = (undefined8 *)FUN_140438ef0(0x70,local_208);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &PTR_CopyToEmptyStorage_1444f8578;
          puVar7[2] = local_1c8;
          puVar7[3] = local_1c0;
          if (local_1c0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
            UNLOCK();
          }
          TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(puVar7 + 4,local_1b8);
        }
        local_218[0] = &LAB_140cee8d0;
        if (local_178 != 0) {
          plVar10 = local_1a8;
          if (local_188 != (longlong *)0x0) {
            plVar10 = local_188;
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10,0);
          }
        }
        if (local_188 != (longlong *)0x0) {
          FMemory::Free();
        }
        plVar10 = local_1c0;
        if (local_1c0 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_1c0 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_1c0)(local_1c0);
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
        if (local_128 != 0) {
          plVar10 = local_158;
          if (local_138 != (longlong *)0x0) {
            plVar10 = local_138;
          }
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x10))(plVar10,0);
          }
        }
        if (local_138 != (longlong *)0x0) {
          FMemory::Free();
        }
        plVar10 = local_2a0;
        if (local_2a0 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_2a0 + 1;
          lVar6 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar6 == 1) {
            (**(code **)*local_2a0)(local_2a0);
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
        FUN_142032330(local_218);
        if (local_58 != 0) {
          while ((local_58 != 0 && (*(char *)(local_58 + 0x58) == '\0'))) {
            cVar3 = FUN_1415ad720(&DAT_1468e2448);
            if ((cVar3 == '\0') &&
               ((DAT_1468c21ae != '\0' && (DVar5 = GetCurrentThreadId(), DVar5 != DAT_1468c21c0))))
            {
              lVar6 = FUN_14203ca70();
              if (lVar6 != 0) {
                FUN_1420714f0(lVar6);
              }
            }
            else {
              FUN_142036de0();
            }
            if (local_58 == 0) break;
            if (*(char *)(local_58 + 0x58) == '\0') {
              (**(code **)(**(longlong **)(local_58 + 0x50) + 0x20))
                        (*(longlong **)(local_58 + 0x50),5,0);
            }
          }
        }
        FUN_140ce1dc0(local_118);
      }
      lVar6 = param_1[0x152];
    }
    else {
      lVar6 = param_1[0x152];
    }
  }
  else {
    lVar6 = param_1[0x152];
  }
  return lVar6;
}



// FUNCTION 140cfeee0 FUN_140cfeee0 body=135 status=ok
// SIG undefined FUN_140cfeee0(void)

undefined4 FUN_140cfeee0(void)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_18;
  int local_10;
  
  lVar2 = FUN_140cff230();
  if (lVar2 != 0) {
    lVar2 = FUN_140d3b770(lVar2,&local_18);
    uVar1 = *(undefined4 *)(lVar2 + 8);
    lVar2 = local_18;
    for (; local_10 != 0; local_10 = local_10 + -1) {
      FUN_1404bf980(lVar2 + 0x28);
      FUN_1404bf980(lVar2);
      lVar2 = lVar2 + 0x58;
    }
    if (local_18 != 0) {
      FMemory::Free(local_18);
    }
    return uVar1;
  }
  return 0;
}



// FUNCTION 140cfef70 FUN_140cfef70 body=557 status=ok
// SIG undefined FUN_140cfef70(void)

ulonglong FUN_140cfef70(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong local_res10;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  longlong local_40;
  longlong local_38 [2];
  
  uVar11 = 0;
  if (*(longlong *)(param_1 + 0xc98) == 0) {
    return 0;
  }
  local_88 = 0;
  local_80 = 0x5d;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  uVar2 = local_88;
  FGenericPlatformString::Memcpy
            (local_88,
             L"/Game/GameData/Challenges/EridianWriting/Challenge_EridianWriting.Challenge_EridianWriting_C"
             ,0xba);
  local_70 = (undefined4)local_80;
  local_6c = local_80._4_4_;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_78 = uVar2;
  FUN_1417978e0(&local_68,&local_78);
  local_40 = local_68;
  local_50 = 0xffffffff;
  local_4c = 0;
  FString::FString(local_38,&local_60);
  uVar3 = FWeakObjectPtr::Get(&local_50);
  uVar9 = uVar11;
  if (uVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == local_4c._4_4_) || (local_40 == 0)) goto LAB_140cff0e3;
    lVar4 = FUN_141796df0(&local_40);
    FWeakObjectPtr::operator=(&local_50,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_4c = CONCAT44(DAT_1464b56f4,(undefined4)local_4c);
    }
    uVar3 = FWeakObjectPtr::Get(&local_50);
    if (uVar3 == 0) goto LAB_140cff0e3;
  }
  lVar4 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(uVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(uVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar5 = FUN_142dfdfe0();
    uVar8 = uVar3;
    do {
      uVar9 = uVar3;
      if (uVar8 == uVar5) break;
      uVar8 = *(ulonglong *)(uVar8 + 0x30);
      uVar9 = uVar11;
    } while (uVar8 != 0);
  }
LAB_140cff0e3:
  plVar6 = (longlong *)FUN_142dcf390(*(undefined8 *)(param_1 + 0xc98));
  lVar4 = *plVar6;
  lVar10 = (longlong)(int)plVar6[1] * 0x80 + lVar4;
  uVar3 = uVar11;
  do {
    if (lVar4 == lVar10) {
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      if (local_60 != 0) {
        FMemory::Free();
      }
      return uVar3;
    }
    if (*(char *)(lVar4 + 0x51) != '\0') {
      FUN_140852e70(lVar4,&local_res10);
      uVar8 = uVar11;
      if (local_res10 != 0) {
        uVar7 = FUN_142dfdfe0();
        for (uVar5 = local_res10;
            (uVar8 = uVar11, uVar5 != 0 && (uVar8 = local_res10, uVar5 != uVar7));
            uVar5 = *(ulonglong *)(uVar5 + 0x30)) {
        }
      }
      for (; uVar8 != 0; uVar8 = *(ulonglong *)(uVar8 + 0x30)) {
        if (uVar8 == uVar9) {
          uVar3 = (ulonglong)((int)uVar3 + 1);
          break;
        }
      }
    }
    lVar4 = lVar4 + 0x80;
  } while( true );
}



// FUNCTION 140cff1a0 GetAtmosphericFogSceneInfo body=8 status=ok
// SIG undefined GetAtmosphericFogSceneInfo(void)

undefined8 FScene::GetAtmosphericFogSceneInfo(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x11f8);
}



// FUNCTION 140cff1b0 FUN_140cff1b0 body=116 status=ok
// SIG undefined FUN_140cff1b0(void)

longlong FUN_140cff1b0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0xa88) != 0) {
    return *(longlong *)(param_1 + 0xa88);
  }
  lVar2 = UWidgetComponent::GetRenderTarget();
  if (lVar2 != 0) {
    lVar3 = FUN_14142a560();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140cff20f;
  }
  lVar2 = 0;
LAB_140cff20f:
  *(longlong *)(param_1 + 0xa88) = lVar2;
  return lVar2;
}



// FUNCTION 140cff230 FUN_140cff230 body=398 status=ok
// SIG undefined FUN_140cff230(void)

longlong FUN_140cff230(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if (param_1[0x10b] == 0) {
    FUN_142dcf3a0(param_1,&local_28);
    if (local_28 != 0) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar7 = FUN_140d3a420(uVar6);
      if (lVar7 != 0) {
        local_18 = local_28;
        plStack_10 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
          UNLOCK();
        }
        lVar7 = FUN_140d3a750(lVar7,&local_18);
        plVar3 = plStack_10;
        param_1[0x10b] = lVar7;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_10 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_10)(plStack_10);
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
        TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x271);
      }
    }
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  lVar7 = param_1[0x10b];
  if (lVar7 == 0) {
    lVar7 = FUN_140cfc8e0(param_1);
    param_1[0x10b] = lVar7;
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x271);
    lVar7 = param_1[0x10b];
  }
  if (param_1[0x249] == lVar7) {
    return param_1[0x249];
  }
  if (lVar7 != 0) {
    lVar8 = ANavVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140cff3a9;
  }
  lVar7 = 0;
LAB_140cff3a9:
  param_1[0x249] = lVar7;
  return lVar7;
}



// FUNCTION 140cff3c0 FUN_140cff3c0 body=1241 status=ok
// SIG undefined FUN_140cff3c0(void)

void FUN_140cff3c0(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  int local_res8 [4];
  int local_res18 [2];
  undefined1 local_res20 [8];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
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
  float local_e8 [6];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  
  pfVar3 = (float *)(**(code **)(*param_1 + 0x1058))(param_1,local_res20);
  fStack_150 = 0.0;
  fStack_14c = 1.0;
  fStack_130 = 0.5;
  fStack_12c = 1.0;
  local_158 = (*pfVar3 + *pfVar3) - 1.0;
  fStack_154 = 1.0 - (pfVar3[1] + pfVar3[1]);
  local_138 = local_158;
  fStack_134 = fStack_154;
  cVar1 = (**(code **)(*param_1 + 0x768))(param_1);
  if (cVar1 == '\0') {
    local_res8[0] = *(int *)((longlong)param_1 + 0x1494);
    local_res18[0] = (int)param_1[0x293];
  }
  else {
    FUN_142dcfa90(param_1,local_res8,local_res18);
  }
  if ((local_res8[0] == 0) || (local_res18[0] == 0)) {
    local_res8[0] = 0x500;
    local_res18[0] = 0x2d0;
  }
  if (((char)param_1[0x25] != '\x03') &&
     ((local_res8[0] != *(int *)((longlong)param_1 + 0x1494) ||
      (local_res18[0] != (int)param_1[0x293])))) {
    *(int *)((longlong)param_1 + 0x1494) = local_res8[0];
    *(int *)(param_1 + 0x293) = local_res18[0];
    FUN_141460dc0(param_1);
  }
  iVar2 = FUN_142708650(param_1);
  fVar5 = (float)FUN_14271a5d0(param_1);
  fStack_f0 = DAT_1464aaa4c;
  if (fVar5 <= 0.001) {
    fVar5 = 0.001;
  }
  if (((local_res18[0] < local_res8[0]) && (iVar2 == 2)) || (iVar2 == 1)) {
    fVar8 = 1.0;
    fVar7 = (float)local_res8[0] / (float)local_res18[0];
  }
  else {
    fVar7 = 1.0;
    fVar8 = (float)local_res18[0] / (float)local_res8[0];
  }
  fVar5 = _guard_xfg_dispatch_icall_nop(fVar5 * 0.008726646);
  local_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0x3f800000;
  local_128 = (1.0 / fVar5) * fVar8;
  fStack_114 = (1.0 / fVar5) * fVar7;
  fStack_124 = 0.0;
  fStack_120 = 0.0;
  local_e8[1] = 0.0;
  local_e8[2] = 0.0;
  local_e8[3] = 0.0;
  local_f8 = 0.0;
  fStack_f4 = 0.0;
  fStack_ec = 0.0;
  local_b8 = 0;
  uStack_b4 = 0;
  fStack_b0 = fStack_f0;
  uStack_ac = 0;
  fStack_11c = 0.0;
  fStack_118 = 0.0;
  fStack_110 = 0.0;
  fStack_10c = 0.0;
  local_e8[4] = 0.0;
  uStack_d0 = 0;
  uStack_cc = 0;
  local_e8[0] = local_128;
  local_e8[5] = fStack_114;
  FMatrix::InverseFast(local_e8,&local_128);
  fVar5 = fStack_14c * local_f8 + fStack_150 * local_108 +
          fStack_154 * fStack_118 + local_158 * local_128;
  fVar8 = fStack_14c * fStack_f4 + fStack_150 * fStack_104 +
          fStack_154 * fStack_114 + local_158 * fStack_124;
  fVar9 = fStack_14c * fStack_f0 + fStack_150 * fStack_100 +
          fStack_154 * fStack_110 + local_158 * fStack_120;
  fVar7 = fStack_14c * fStack_ec + fStack_150 * fStack_fc +
          fStack_154 * fStack_10c + local_158 * fStack_11c;
  local_158 = fStack_12c * local_f8 + fStack_130 * local_108 +
              fStack_134 * fStack_118 + local_138 * local_128;
  fStack_154 = fStack_12c * fStack_f4 + fStack_130 * fStack_104 +
               fStack_134 * fStack_114 + local_138 * fStack_124;
  fStack_150 = fStack_12c * fStack_f0 + fStack_130 * fStack_100 +
               fStack_134 * fStack_110 + local_138 * fStack_120;
  fStack_14c = fStack_12c * fStack_ec + fStack_130 * fStack_fc +
               fStack_134 * fStack_10c + local_138 * fStack_11c;
  if (fVar7 != 0.0) {
    fVar7 = 1.0 / fVar7;
    fVar5 = fVar7 * fVar5;
    fVar8 = fVar7 * fVar8;
    fVar9 = fVar7 * fVar9;
  }
  if (fStack_14c != 0.0) {
    fVar7 = 1.0 / fStack_14c;
    local_158 = local_158 * fVar7;
    fStack_154 = fStack_154 * fVar7;
    fStack_150 = fStack_150 * fVar7;
  }
  local_158 = local_158 - fVar5;
  fStack_154 = fStack_154 - fVar8;
  fStack_150 = fStack_150 - fVar9;
  fVar7 = fStack_154 * fStack_154 + local_158 * local_158 + fStack_150 * fStack_150;
  if (fVar7 != 1.0) {
    if (fVar7 < 1e-08) {
      fStack_154 = DAT_1468b5d94;
      fStack_150 = DAT_1468b5d98;
      local_158 = DAT_1468b5d90;
    }
    else {
      auVar6 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar9 = auVar6._0_4_;
      fVar9 = fVar9 + fVar9 * (0.5 - fVar7 * 0.5 * fVar9 * fVar9);
      fVar9 = fVar9 + fVar9 * (0.5 - fVar7 * 0.5 * fVar9 * fVar9);
      local_158 = local_158 * fVar9;
      fStack_154 = fStack_154 * fVar9;
      fStack_150 = fStack_150 * fVar9;
    }
  }
  local_140 = fStack_154;
  _local_148 = CONCAT44(local_158,fStack_150);
  puVar4 = (undefined8 *)FVector::Rotation(&local_148,&local_158);
  *param_4 = *puVar4;
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar4 + 1);
  *param_3 = (ulonglong)(uint)fVar5 << 0x20;
  *(float *)(param_3 + 1) = fVar8;
  return;
}



// FUNCTION 140cff8a0 FUN_140cff8a0 body=131 status=ok
// SIG undefined FUN_140cff8a0(void)

undefined8 FUN_140cff8a0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = *(longlong *)(param_1 + 0xa90);
  if (((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x48))) &&
     (plVar1 = *(longlong **)
                (*(longlong *)(lVar3 + 0x40) + -8 + (longlong)*(int *)(lVar3 + 0x48) * 8),
     plVar1 != (longlong *)0x0)) {
    lVar3 = (**(code **)(*plVar1 + 0x278))();
    if (lVar3 != 0) {
      lVar4 = FUN_141358f70();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = FUN_140f66280(lVar3);
        return uVar5;
      }
    }
  }
  return 0;
}



// FUNCTION 140cff930 FUN_140cff930 body=214 status=ok
// SIG undefined FUN_140cff930(void)

void FUN_140cff930(longlong *param_1,undefined8 param_2,float *param_3)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(*param_1 + 0x7a8))();
  pfVar2 = (float *)(**(code **)(*param_1 + 0x1058))(param_1,local_res8);
  if (((*pfVar2 != 0.5) || (pfVar2[1] != 0.5)) && ((longlong *)param_1[0xa5] != (longlong *)0x0)) {
    fVar3 = (float)(**(code **)(*(longlong *)param_1[0xa5] + 0x778))();
    if (fVar3 != *(float *)(param_1 + 0x294)) {
      FUN_140cff3c0(param_1,fVar3,(longlong)param_1 + 0x14a4,param_1 + 0x296);
      *(float *)(param_1 + 0x294) = fVar3;
    }
    lVar1 = param_1[0x296];
    fVar3 = *(float *)(param_1 + 0x297);
    *param_3 = (float)lVar1 + *param_3;
    param_3[1] = (float)((ulonglong)lVar1 >> 0x20) + param_3[1];
    param_3[2] = fVar3 + param_3[2];
  }
  return;
}



// FUNCTION 140cffa10 FUN_140cffa10 body=93 status=ok
// SIG undefined FUN_140cffa10(void)

undefined8 FUN_140cffa10(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x848);
  if (lVar1 != 0) {
    lVar3 = FUN_1413ffe00();
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
      return *(undefined8 *)(lVar1 + 0x2ad0);
    }
  }
  return 0;
}



// FUNCTION 140cffa70 thunk_FUN_140cff230 body=5 status=ok
// SIG undefined thunk_FUN_140cff230(void)

longlong thunk_FUN_140cff230(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lStack_28;
  longlong *plStack_20;
  longlong lStack_18;
  longlong *plStack_10;
  
  if (param_1[0x10b] == 0) {
    FUN_142dcf3a0(param_1,&lStack_28);
    if (lStack_28 != 0) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar7 = FUN_140d3a420(uVar6);
      if (lVar7 != 0) {
        lStack_18 = lStack_28;
        plStack_10 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
          UNLOCK();
        }
        lVar7 = FUN_140d3a750(lVar7,&lStack_18);
        plVar3 = plStack_10;
        param_1[0x10b] = lVar7;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_10 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_10)(plStack_10);
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
        TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x271);
      }
    }
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  lVar7 = param_1[0x10b];
  if (lVar7 == 0) {
    lVar7 = FUN_140cfc8e0(param_1);
    param_1[0x10b] = lVar7;
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x271);
    lVar7 = param_1[0x10b];
  }
  if (param_1[0x249] == lVar7) {
    return param_1[0x249];
  }
  if (lVar7 != 0) {
    lVar8 = ANavVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140cff3a9;
  }
  lVar7 = 0;
LAB_140cff3a9:
  param_1[0x249] = lVar7;
  return lVar7;
}



// FUNCTION 140cffa80 FUN_140cffa80 body=104 status=ok
// SIG undefined FUN_140cffa80(void)

undefined8 * FUN_140cffa80(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (1 < *(int *)(param_1 + 0xa80)) {
    FString::FString(param_2,param_1 + 0xa78);
    return param_2;
  }
  if (*(longlong *)(param_1 + 0xa58) != 0) {
    uVar1 = FText::ToString(*(longlong *)(param_1 + 0xa58) + 0xa8);
    FString::FString(param_2,uVar1);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140cffaf0 FUN_140cffaf0 body=258 status=ok
// SIG undefined FUN_140cffaf0(void)

longlong * FUN_140cffaf0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong local_18;
  int local_10;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = FUN_140cff230();
  if (lVar1 == 0) {
    return param_2;
  }
  plVar2 = (longlong *)FUN_140d3b770(lVar1,&local_18);
  lVar1 = local_18;
  iVar3 = local_10;
  if (param_2 != plVar2) {
    iVar3 = (int)param_2[1];
    lVar1 = *param_2;
    if (iVar3 != 0) {
      do {
        FUN_1404bf980(lVar1 + 0x28);
        FUN_1404bf980(lVar1);
        lVar1 = lVar1 + 0x58;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      lVar1 = *param_2;
    }
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
    *param_2 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_2 + 1) = (int)plVar2[1];
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar2 + 0xc);
    plVar2[1] = 0;
    lVar1 = local_18;
    iVar3 = local_10;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_1404bf980(lVar1 + 0x28);
    FUN_1404bf980(lVar1);
    lVar1 = lVar1 + 0x58;
  }
  if (local_18 != 0) {
    FMemory::Free(local_18);
  }
  return param_2;
}



// FUNCTION 140cffc10 FUN_140cffc10 body=1153 status=ok
// SIG undefined FUN_140cffc10(void)

void FUN_140cffc10(longlong param_1,undefined1 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  ulonglong local_res8;
  longlong local_38 [2];
  
  bVar16 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_14270d930();
  lVar7 = FUN_140b825a0(param_1);
  if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x598), lVar7 != 0)) {
    plVar1 = (longlong *)*param_3;
    iVar15 = (int)param_3[1];
    for (plVar8 = plVar1; plVar8 != plVar1 + iVar15; plVar8 = plVar8 + 1) {
      if (*plVar8 == lVar7) {
        if ((int)((longlong)plVar8 - (longlong)plVar1 >> 3) != -1) goto LAB_140cffcaa;
        break;
      }
    }
    *(int *)(param_3 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar15 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar15);
    }
    *(longlong *)(*param_3 + (longlong)iVar15 * 8) = lVar7;
  }
LAB_140cffcaa:
  lVar7 = *(longlong *)(param_1 + 0x460);
  if (lVar7 != 0) {
    plVar1 = (longlong *)*param_3;
    iVar15 = (int)param_3[1];
    for (plVar8 = plVar1; plVar8 != plVar1 + iVar15; plVar8 = plVar8 + 1) {
      if (*plVar8 == lVar7) {
        if ((int)((longlong)plVar8 - (longlong)plVar1 >> 3) != -1) goto LAB_140cffd0a;
        break;
      }
    }
    *(int *)(param_3 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_3 + 0xc) < iVar15 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar15);
    }
    *(longlong *)(*param_3 + (longlong)iVar15 * 8) = lVar7;
  }
LAB_140cffd0a:
  plVar8 = *(longlong **)(param_1 + 0x158);
  plVar1 = plVar8 + *(int *)(param_1 + 0x160);
  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    plVar11 = (longlong *)*plVar8;
    if (plVar11 != (longlong *)0x0) {
      lVar7 = AAFGameState::GetPrivateStaticClass();
      if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar2 = (longlong *)*param_3;
        iVar15 = (int)param_3[1];
        for (plVar9 = plVar2; plVar9 != plVar2 + iVar15; plVar9 = plVar9 + 1) {
          if ((longlong *)*plVar9 == plVar11) {
            if ((int)((longlong)plVar9 - (longlong)plVar2 >> 3) != -1) goto LAB_140cffdc2;
            break;
          }
        }
        *(int *)(param_3 + 1) = iVar15 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar15 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar15);
        }
        *(longlong **)(*param_3 + (longlong)iVar15 * 8) = plVar11;
LAB_140cffdc2:
        (**(code **)(*plVar11 + 0x650))(plVar11,param_2,param_3);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x990) == 0) goto LAB_140cffec1;
  lVar7 = *(longlong *)(param_1 + 0x848);
  if (lVar7 == 0) {
LAB_140cffe4f:
    lVar10 = *(longlong *)(param_1 + 0x990);
  }
  else {
    lVar10 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140cffe4f;
    lVar10 = *(longlong *)(param_1 + 0x990);
    if ((lVar10 != *(longlong *)(param_1 + 0x848)) && (*(longlong *)(lVar7 + 0x1d18) == lVar10))
    goto LAB_140cffec1;
  }
  plVar1 = (longlong *)*param_3;
  iVar15 = (int)param_3[1];
  for (plVar8 = plVar1; plVar8 != plVar1 + iVar15; plVar8 = plVar8 + 1) {
    if (*plVar8 == lVar10) {
      if ((int)((longlong)plVar8 - (longlong)plVar1 >> 3) != -1) goto LAB_140cffeaa;
      break;
    }
  }
  *(int *)(param_3 + 1) = iVar15 + 1;
  if (*(int *)((longlong)param_3 + 0xc) < iVar15 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar15);
  }
  *(longlong *)(*param_3 + (longlong)iVar15 * 8) = lVar10;
LAB_140cffeaa:
  (**(code **)(**(longlong **)(param_1 + 0x990) + 0x650))
            (*(longlong **)(param_1 + 0x990),param_2,param_3);
LAB_140cffec1:
  plVar1 = *(longlong **)(param_1 + 0x848);
  if (plVar1 != (longlong *)0x0) {
    lVar7 = FUN_1413f82e0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      plVar8 = (longlong *)*param_3;
      iVar15 = (int)param_3[1];
      for (plVar11 = plVar8; plVar11 != plVar8 + iVar15; plVar11 = plVar11 + 1) {
        if ((longlong *)*plVar11 == plVar1) {
          if ((int)((longlong)plVar11 - (longlong)plVar8 >> 3) != -1) goto LAB_140cfff5b;
          break;
        }
      }
      *(int *)(param_3 + 1) = iVar15 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar15 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar15);
      }
      *(longlong **)(*param_3 + (longlong)iVar15 * 8) = plVar1;
LAB_140cfff5b:
      (**(code **)(*plVar1 + 0x650))(plVar1,param_2,param_3);
      lVar7 = FUN_140c41a30(plVar1);
      if (lVar7 != 0) {
        uVar12 = FUN_140c41a30(plVar1);
        FUN_142ffe1a0(uVar12,param_2,param_3);
      }
    }
  }
  iVar15 = (int)param_3[1] + -1;
  if (-1 < iVar15) {
    lVar7 = (longlong)iVar15 * 8;
    lVar14 = (longlong)(int)param_3[1] << 3;
    lVar10 = lVar7;
    do {
      if ((*(longlong *)(lVar7 + *param_3) == 0) ||
         (lVar3 = *(longlong *)(*(longlong *)(lVar7 + *param_3) + 0x10), lVar3 == 0)) {
LAB_140d00011:
        bVar4 = false;
      }
      else {
        local_res8 = *(ulonglong *)(lVar3 + 0x18);
        bVar16 = true;
        FName::ToString(&local_res8,local_38);
        cVar5 = FString::StartsWith(local_38,L"IO_Operative_ShoulderCannon",1);
        if (cVar5 == '\0') goto LAB_140d00011;
        bVar4 = true;
      }
      if ((bVar16) && (bVar16 = false, local_38[0] != 0)) {
        FMemory::Free();
      }
      if (bVar4) {
        iVar6 = (int)param_3[1];
        iVar13 = (iVar6 - iVar15) + -1;
        if (iVar13 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_3 + lVar10),(void *)(*param_3 + lVar14),(longlong)iVar13 << 3);
          iVar6 = (int)param_3[1];
        }
        *(int *)(param_3 + 1) = iVar6 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_3);
      }
      lVar14 = lVar14 + -8;
      lVar10 = lVar10 + -8;
      lVar7 = lVar7 + -8;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
  }
  return;
}



// FUNCTION 140d000a0 FUN_140d000a0 body=81 status=ok
// SIG undefined FUN_140d000a0(void)

undefined8 FUN_140d000a0(undefined8 param_1)

{
  int local_res10 [6];
  
  local_res10[0] = 0;
  FUN_142710360(param_1,local_res10);
  if (local_res10[0] == 1) {
    return 0x400;
  }
  if (local_res10[0] != 2) {
    if (local_res10[0] != 3) {
      return 0x200;
    }
    return 0x10000;
  }
  return 0x8000;
}



// FUNCTION 140d00100 FUN_140d00100 body=128 status=ok
// SIG undefined FUN_140d00100(void)

undefined8 FUN_140d00100(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8 [4];
  
  local_res8[0] = *(longlong *)(param_1 + 0xf18);
  if (local_res8[0] != 0) {
    uVar1 = AActor::GetWorldTimerManager();
    lVar2 = FTimerManager::FindTimer(uVar1,local_res8,0);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 1) != '\x02')) {
      local_res8[0] = *(longlong *)(param_1 + 0xf18);
      uVar1 = AActor::GetWorldTimerManager(param_1);
      uVar3 = FTimerManager::FindTimer(uVar1,local_res8,0);
      uVar1 = FTimerManager::InternalGetTimerRemaining(uVar1,uVar3);
      return uVar1;
    }
  }
  return 0xbf800000;
}



// FUNCTION 140d00180 FUN_140d00180 body=13 status=ok
// SIG undefined FUN_140d00180(void)

int FUN_140d00180(longlong param_1)

{
  return *(int *)(param_1 + 0xa40) + *(int *)(param_1 + 0xa3c);
}



// FUNCTION 140d00190 FUN_140d00190 body=40 status=ok
// SIG undefined FUN_140d00190(void)

undefined8 FUN_140d00190(void)

{
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  return *(undefined8 *)(DAT_146b33f38 + 0x90);
}



// FUNCTION 140d001c0 FUN_140d001c0 body=176 status=ok
// SIG undefined FUN_140d001c0(void)

float FUN_140d001c0(longlong param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  if ((DAT_146b17150 != 0) && (lVar4 = FUN_142874ac0(), lVar4 != 0)) {
    lVar5 = FUN_141424dd0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      fVar1 = *(float *)(param_1 + 0x1218);
      fVar2 = *(float *)(param_1 + 0x121c);
      fVar6 = (float)UCharacterMovementComponent::K2_GetWalkableFloorAngle(lVar4);
      if ((fVar1 <= fVar6) && (fVar1 = fVar6, fVar2 <= fVar6)) {
        fVar1 = fVar2;
      }
      return fVar1;
    }
  }
  return 0.0;
}



// FUNCTION 140d00290 FUN_140d00290 body=213 status=ok
// SIG undefined FUN_140d00290(void)

uint FUN_140d00290(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  
  plVar2 = *(longlong **)(param_1 + 0x528);
  uVar5 = 0;
  if (plVar2 != (longlong *)0x0) {
    lVar7 = FUN_142fd5420();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      uVar5 = (**(code **)(*plVar2 + 0x8c0))(plVar2);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x1490);
  local_res8[0] = 0;
  FUN_142710360(param_1,local_res8);
  if (local_res8[0] == 1) {
    uVar6 = 0x60c00;
  }
  else if (local_res8[0] == 2) {
    uVar6 = 0x49800;
  }
  else if (local_res8[0] == 3) {
    uVar6 = 0x31800;
  }
  else {
    uVar6 = 0x61200;
  }
  uVar5 = uVar5 | uVar1 | uVar6;
  cVar4 = FUN_1407c3030(param_1 + 0xd58);
  if (cVar4 != '\0') {
    uVar5 = uVar5 & 0xfffffffe;
  }
  return uVar5;
}



// FUNCTION 140d00370 FUN_140d00370 body=216 status=ok
// SIG undefined FUN_140d00370(void)

longlong FUN_140d00370(longlong param_1,byte param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((int)(uint)param_2 < *(int *)(param_1 + 0x1370)) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1368) + (ulonglong)param_2 * 8), lVar4 != 0))
  {
    return lVar4;
  }
  if (param_2 == 0) {
    return *(longlong *)(param_1 + 0x1200);
  }
  lVar4 = *(longlong *)(param_1 + 0x488);
  if (lVar4 != 0) {
    uVar2 = FUN_1430a8880();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar2);
    if ((plVar3 != (longlong *)0x0) &&
       (lVar4 = (**(code **)(*plVar3 + 0xf0))(plVar3,param_2), lVar4 != 0)) {
      lVar4 = *(longlong *)(lVar4 + 0x6d0);
      if (lVar4 != 0) {
        lVar5 = FUN_1413e4fc0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          return lVar4;
        }
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140d00450 FUN_140d00450 body=8 status=ok
// SIG undefined FUN_140d00450(void)

undefined8 FUN_140d00450(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1a88);
}



// FUNCTION 140d00460 GetSecondDoorComponent body=8 status=ok
// SIG undefined GetSecondDoorComponent(void)

undefined8 UMediumDoorComponent::GetSecondDoorComponent(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xd50);
}



// FUNCTION 140d00470 FUN_140d00470 body=31 status=ok
// SIG undefined FUN_140d00470(void)

undefined1 FUN_140d00470(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if (lVar1 != 0) {
    return *(undefined1 *)(lVar1 + 0x178);
  }
  return 0;
}



// FUNCTION 140d00490 FUN_140d00490 body=806 status=ok
// SIG undefined FUN_140d00490(void)

ulonglong FUN_140d00490(longlong param_1)

{
  bool bVar1;
  char cVar2;
  ulonglong in_RAX;
  longlong lVar3;
  longlong lVar4;
  uint7 uVar7;
  ulonglong uVar5;
  longlong lVar6;
  char *pcVar8;
  longlong lVar9;
  
  if (*(longlong *)(param_1 + 0xa88) == 0) goto LAB_140d007ad;
  lVar4 = *(longlong *)(param_1 + 0xac8);
  if (lVar4 == 0) goto LAB_140d00668;
  lVar9 = lVar4 + 0x470;
  lVar3 = FWeakObjectPtr::Get(lVar9);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar4 + 0x478)) && (*(longlong *)(lVar4 + 0x480) != 0)) {
      lVar3 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar9,lVar3);
      if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar4 + 0x478) = DAT_1464b56f4;
      }
      lVar3 = FWeakObjectPtr::Get(lVar9);
      if (lVar3 != 0) goto LAB_140d00550;
    }
LAB_140d0059a:
    lVar4 = *(longlong *)(param_1 + 0xac8);
    lVar9 = lVar4 + 0x4c0;
    lVar3 = FWeakObjectPtr::Get(lVar9);
    if (lVar3 == 0) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      if ((DAT_1464b56f4 != *(int *)(lVar4 + 0x4c8)) && (*(longlong *)(lVar4 + 0x4d0) != 0)) {
        lVar3 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar9,lVar3);
        if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar4 + 0x4c8) = DAT_1464b56f4;
        }
        lVar3 = FWeakObjectPtr::Get(lVar9);
        if (lVar3 != 0) goto LAB_140d0061e;
      }
    }
    else {
LAB_140d0061e:
      lVar4 = UScrollBar::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (cVar2 = FUN_140eb28a0(*(undefined8 *)(lVar3 + 0x598)), cVar2 != '\0'))
      goto LAB_140d00755;
    }
LAB_140d00668:
    lVar4 = FUN_1422312c0(param_1);
    in_RAX = 0;
    if (lVar4 != 0) {
      lVar3 = FUN_14141f270();
      uVar7 = (uint7)((ulonglong)(lVar3 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        in_RAX = (ulonglong)uVar7 << 8;
      }
      else {
        in_RAX = CONCAT71(uVar7,1);
      }
      if ((char)in_RAX != '\0') {
        lVar3 = *(longlong *)(lVar4 + 0xd60);
        in_RAX = (ulonglong)*(int *)(lVar4 + 0xd68);
        lVar4 = lVar3 + in_RAX * 8;
        for (; lVar3 != lVar4; lVar3 = lVar3 + 8) {
          uVar5 = FWeakObjectPtr::Get(lVar3);
          in_RAX = uVar5;
          if ((uVar5 != 0) && (*(char *)(uVar5 + 0x488) != '\0')) {
            lVar9 = *(longlong *)(uVar5 + 0x490);
            if (lVar9 == 0) {
LAB_140d0072b:
              lVar9 = 0;
            }
            else {
              lVar6 = FUN_1407eff40();
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) goto LAB_140d0072b;
            }
            in_RAX = FUN_140eb28a0(lVar9);
            if ((char)in_RAX != '\0') {
              lVar3 = FUN_140bbc530(uVar5);
              in_RAX = 0;
              if (lVar3 != 0) goto LAB_140d00755;
              break;
            }
          }
        }
      }
    }
  }
  else {
LAB_140d00550:
    lVar4 = UScrollBar::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (cVar2 = FUN_140eb28a0(*(undefined8 *)(lVar3 + 0x598)), cVar2 == '\0'))
    goto LAB_140d0059a;
LAB_140d00755:
    pcVar8 = (char *)(*(longlong *)(param_1 + 0xa88) + 0x708);
    cVar2 = *pcVar8;
    in_RAX = 0;
    if (cVar2 == '\0') {
      in_RAX = FUN_140ec03e0(pcVar8,2);
    }
    else if (cVar2 == '\x02') {
      FUN_1407eef20(lVar3,1);
      in_RAX = FRootMotionMovementParams::Clear(*(longlong *)(param_1 + 0xa88) + 0x708);
    }
  }
LAB_140d007ad:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140d007c0 FUN_140d007c0 body=443 status=ok
// SIG undefined FUN_140d007c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d007c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0xf90))(param_1,1);
  lVar2 = (**(code **)(*param_1 + 0xfa8))(param_1);
  if (lVar2 != 0) {
    uVar3 = FUN_141387d00();
    cVar1 = FUN_142ef5b10(lVar2,uVar3);
    if (cVar1 == '\0') {
      local_98 = FUN_140d007c0;
      uStack_90 = 0;
      plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar4 + 1,param_1);
        *(undefined4 *)(plVar4 + 2) = (undefined4)local_98;
        *(undefined4 *)((longlong)plVar4 + 0x14) = local_98._4_4_;
        *(undefined4 *)(plVar4 + 3) = uStack_90;
        *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_8c;
        lVar2 = FDelegateHandle::GenerateNewID();
        plVar4[5] = lVar2;
        *plVar4 = (longlong)&PTR_FUN_143f77bd0;
      }
      uVar3 = AActor::GetWorldTimerManager(param_1);
      local_88 = 0;
      local_80 = 0;
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x30))(plVar4,&local_88);
      }
      FWeakObjectPtr::operator=(local_78,0);
      local_70 = 0;
      local_68 = AK::MemoryMgr::StartProfileThreadUsage;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      FUN_142880af0(uVar3,&local_88);
      if (local_28 != 0) {
        plVar5 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar5 = local_38;
        }
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 0x10))(plVar5,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4,0);
        lVar2 = FMemory::Realloc(plVar4,0,0);
        if (lVar2 != 0) {
          FMemory::Free(lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d00980 FUN_140d00980 body=733 status=ok
// SIG undefined FUN_140d00980(void)

void FUN_140d00980(longlong *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  cVar2 = APlayerController::IsPrimaryPlayer();
  if ((cVar2 == '\0') && (lVar3 = (**(code **)(*param_1 + 0x148))(param_1), lVar3 != 0)) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = UWorld::GetGameState<APVPGameState>(uVar4);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x618) != 0)) {
      return;
    }
  }
  if (*(char *)((longlong)param_1 + 0x1844) < '\0') {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0xfa8))(param_1);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xc2) != '\0')) {
    lVar6 = param_1[0x12e];
    if (lVar6 != 0) {
      lVar5 = FUN_141410f00();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (*(char *)(lVar6 + 0x43) == '\0')) goto LAB_140d00a56;
    }
    FUN_142f0fca0(lVar3,0);
  }
LAB_140d00a56:
  lVar3 = FUN_1422312c0(param_1);
  if (lVar3 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = FUN_140bca8a0(lVar3);
      if (cVar2 != '\0') {
        return;
      }
      cVar2 = FUN_1411ea8f0(lVar3 + 0x7a0);
      if (cVar2 != '\0') {
        return;
      }
    }
  }
  lVar3 = param_1[0x12e];
  if (lVar3 != 0) {
    lVar6 = FUN_141410f00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(lVar3 + 0x43) != '\0')) {
      lVar3 = (**(code **)(*param_1 + 0xfa8))(param_1);
      if (lVar3 == 0) {
        return;
      }
      uVar4 = AArchVisCharacter::StaticClass();
      cVar2 = FUN_142ef5b10(lVar3,uVar4);
      if (cVar2 == '\0') {
        return;
      }
      lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar3 == 0) {
        return;
      }
      lVar3 = *(longlong *)(lVar3 + 400);
      if (lVar3 == 0) {
        return;
      }
      lVar6 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        return;
      }
      cVar2 = FUN_140bc2c90(lVar3);
      if (cVar2 == '\0') {
        return;
      }
    }
  }
  lVar3 = (**(code **)(param_1[0x130] + 0x10))();
  if (lVar3 != 0) {
    lVar6 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar6 = (**(code **)(*param_1 + 0xfa8))(param_1), lVar6 != 0)) {
      uVar4 = FUN_141387d00();
      cVar2 = FUN_142ef5b10(lVar6,uVar4);
      if ((cVar2 == '\0') && ((param_2 != '\0' || (*(int *)(lVar6 + 0x48) == 0)))) {
        FUN_142f02280(lVar6,*(undefined8 *)(lVar3 + 0x3b8));
        (**(code **)(*param_1 + 0xce8))(param_1);
      }
    }
  }
  return;
}



// FUNCTION 140d00c60 FUN_140d00c60 body=24 status=ok
// SIG undefined FUN_140d00c60(void)

longlong FUN_140d00c60(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xa90);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0x48))) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 140d00c80 FUN_140d00c80 body=97 status=ok
// SIG undefined FUN_140d00c80(void)

ulonglong FUN_140d00c80(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x848);
  if (lVar2 != 0) {
    lVar3 = FUN_1413ffe00();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if (((char)in_RAX != '\0') && (0 < *(int *)(lVar2 + 0x2a08))) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140d00cf0 FUN_140d00cf0 body=47 status=ok
// SIG undefined FUN_140d00cf0(void)

undefined1 FUN_140d00cf0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x1728) != '\0') {
    return 1;
  }
  lVar1 = FUN_140b825a0();
  if (lVar1 != 0) {
    return *(undefined1 *)(lVar1 + 0x768);
  }
  return 0;
}



// FUNCTION 140d00d20 FUN_140d00d20 body=250 status=ok
// SIG undefined FUN_140d00d20(void)

undefined1 FUN_140d00d20(longlong param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1422312c0();
  if (lVar3 != 0) {
    lVar4 = FUN_14141f270();
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
      cVar2 = FUN_140bca8a0(lVar3);
      if (cVar2 == '\0') {
        lVar3 = *(longlong *)(param_1 + 0x460);
        if (lVar3 != 0) {
          lVar4 = UInputKeySelector::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            return *(undefined1 *)(lVar3 + 0x5d6);
          }
        }
      }
      else {
        lVar3 = FUN_140cfbfb0(param_1);
        if (lVar3 != 0) {
          cVar2 = FWebMMovieStreamer::IsLastMovieInPlaylist(lVar3);
          if (cVar2 == '\0') {
            cVar2 = FUN_140d3db00(lVar3);
            if (cVar2 != '\0') {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140d00e20 FUN_140d00e20 body=45 status=ok
// SIG undefined FUN_140d00e20(void)

void FUN_140d00e20(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if (lVar1 != 0) {
    FUN_140ab3f00(lVar1 + 0x4c0,param_2);
    return;
  }
  return;
}



// FUNCTION 140d00e50 FUN_140d00e50 body=100 status=ok
// SIG undefined FUN_140d00e50(void)

undefined8 FUN_140d00e50(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140cff230();
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x3c8) != 0) {
      return 1;
    }
    lVar1 = *(longlong *)(param_1 + 0xe58);
    lVar2 = (longlong)*(int *)(param_1 + 0xe60) * 0xb8 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0xb8) {
      if (*(char *)(lVar1 + 0xb0) == '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140d00ec0 FUN_140d00ec0 body=202 status=ok
// SIG undefined FUN_140d00ec0(void)

void FUN_140d00ec0(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  
  if (((char)param_1[0x25] == '\x03') &&
     (fVar1 = *(float *)(param_1 + 0x333), *(float *)(param_1 + 0x333) = fVar1 - param_2,
     fVar1 - param_2 <= 0.0)) {
    lVar2 = param_1[0x8c];
    *(undefined4 *)(param_1 + 0x333) = 0x3e800000;
    if (lVar2 != 0) {
      lVar6 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar6 = param_1[0x91], *(undefined1 *)(lVar2 + 0x5d7) = 0, lVar6 != 0)) {
        uVar4 = (**(code **)(*param_1 + 0x768))(param_1);
        cVar5 = FUN_140d01940(param_1,uVar4,lVar2);
        if (cVar5 != '\0') {
          *(undefined1 *)(lVar2 + 0x5d7) = 1;
        }
      }
    }
  }
  return;
}



// FUNCTION 140d00f90 FUN_140d00f90 body=107 status=ok
// SIG undefined FUN_140d00f90(void)

void FUN_140d00f90(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if ((((param_2 != 0) && (0 < param_3)) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0))
     && ((lVar1 = UWorld::GetAuthGameMode<ABaseGameMode>(lVar1), lVar1 != 0 &&
         (lVar1 = FUN_142d84360(lVar1), lVar1 != 0)))) {
    FUN_142dd18b0(lVar1,param_1,param_2,param_3);
  }
  return;
}



// FUNCTION 140d01000 FUN_140d01000 body=271 status=ok
// SIG undefined FUN_140d01000(void)

void FUN_140d01000(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = UWidgetComponent::GetRenderTarget();
  if (lVar2 != 0) {
    lVar3 = FUN_142f27b90();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (lVar3 = (**(code **)(*(longlong *)(param_1 + 0x980) + 0x10))(), lVar3 != 0)) {
      lVar4 = FUN_1414d9130();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (((bVar1) && (*(longlong *)(lVar2 + 0x5e8) == 0)) &&
         (lVar2 = FUN_1405ec200(lVar3 + 0x10b8), lVar2 != 0)) {
        lVar3 = UTextureRenderTargetCube::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          FUN_142f0da10(param_1,lVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d01110 FUN_140d01110 body=444 status=ok
// SIG undefined FUN_140d01110(void)

void FUN_140d01110(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  
  if (((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) == 0) ||
     (cVar3 = (**(code **)(*param_1 + 0x768))(), cVar3 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar7 = 0;
  if ((bVar2) && (lVar5 = FUN_140cff230(param_1), iVar7 = 0, lVar5 != 0)) {
    iVar7 = *(int *)(lVar5 + 0x398);
  }
  iVar8 = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar5 != 0) {
    iVar8 = *(int *)(lVar5 + 0x378);
    lVar1 = param_1[0x132];
    if (lVar1 != 0) {
      lVar6 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (*(longlong *)(lVar5 + 0x380) != 0)) {
        iVar4 = FUN_140e50ca0(lVar1 + 0x2950);
        iVar8 = iVar8 + *(int *)(lVar5 + 0x37c) * iVar4;
      }
    }
  }
  fVar9 = 0.0;
  if ((0 < iVar7) && (0 < iVar8)) {
    iVar4 = iVar7;
    if (iVar7 <= iVar8) {
      iVar4 = iVar8;
    }
    iVar8 = iVar4;
    fVar9 = (float)iVar7 / (float)iVar8;
  }
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (((lVar5 == 0) || (lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 == 0)) ||
     (cVar3 = FUN_140cb68f0(lVar5), cVar3 != '\x01')) {
    iVar7 = 0;
    fVar9 = 0.0;
  }
  if (param_2 != 0) {
    lVar5 = FUN_1413c30f0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *(int *)(param_2 + 0x550) = iVar7;
      *(int *)(param_2 + 0x554) = iVar8;
      FUN_1413c4b20(param_2,fVar9);
    }
  }
  FUN_141460280(param_1,param_2,iVar7,iVar8);
  return;
}



// FUNCTION 140d012d0 FUN_140d012d0 body=237 status=ok
// SIG undefined FUN_140d012d0(void)

undefined1
FUN_140d012d0(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  if (*(longlong *)(param_1 + 0xa90) != 0) {
    uVar6 = FKey::IsMouseButton(param_2);
    FUN_142f0e0a0(*(undefined8 *)(param_1 + 0xa90),uVar6);
  }
  local_48 = *param_2;
  local_40 = param_2[1];
  local_38 = param_2[2];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_142dd2ca0(param_1,&local_48,param_3,param_4,param_5,param_6);
  plVar4 = (longlong *)param_2[2];
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
  return uVar6;
}



// FUNCTION 140d013c0 FUN_140d013c0 body=903 status=ok
// SIG undefined FUN_140d013c0(void)

undefined1
FUN_140d013c0(longlong *param_1,longlong *param_2,int param_3,undefined4 param_4,undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  if (((((param_3 == 1) && (lVar8 = *param_2, lVar8 != DAT_1469ea618)) && (lVar8 != DAT_1469ea630))
      && (((lVar8 != DAT_1469ea660 && (lVar8 != DAT_1469ea648)) &&
          ((lVar8 != DAT_1469ea678 && ((lVar8 != DAT_1469ea690 && (lVar8 != DAT_1469ea6a8)))))))) &&
     (lVar8 != DAT_1469ea6c0)) {
    *(undefined1 *)(param_1 + 0x158) = 1;
  }
  if (param_1[0x152] != 0) {
    uVar6 = FKey::IsMouseButton(param_2);
    FUN_142f0e0a0(param_1[0x152],uVar6);
  }
  cVar7 = FKey::IsGamepadKey(param_2);
  if (((cVar7 == '\0') || (DAT_146af29d4 != '\0')) &&
     (cVar7 = FWeakObjectPtr::IsValid(param_1 + 0x196), cVar7 != '\0')) {
    cVar7 = (**(code **)(param_1[0x130] + 0x20))();
    if (((cVar7 != '\0') && (param_1[0x152] != 0)) &&
       ((lVar8 = FUN_140cddc40(), lVar8 == 0 && (lVar8 = FUN_140cde000(param_1[0x152]), lVar8 == 0))
       )) {
      if (*param_2 == param_1[0x1c0]) {
        if (param_3 == 0) {
          FUN_14100fed0(param_1);
          uVar9 = FUN_1414198e0();
          lVar8 = (**(code **)(*param_1 + 0x628))(param_1,uVar9);
          if (lVar8 != 0) {
            local_98 = *param_2;
            local_90 = param_2[1];
            local_88 = param_2[2];
            if (local_88 != 0) {
              LOCK();
              *(int *)(local_88 + 8) = *(int *)(local_88 + 8) + 1;
              UNLOCK();
            }
            FUN_140cc0f50(lVar8,&local_98);
            FKey::~FKey(param_2);
            return 1;
          }
        }
        goto LAB_140d01687;
      }
      if (*param_2 == param_1[0x1c3]) {
        if (param_3 == 0) {
          FUN_140d13f50(param_1,1);
          local_38 = FUN_1414198e0();
          lVar8 = (**(code **)(*param_1 + 0x628))(param_1,local_38);
          if (lVar8 != 0) {
            local_80 = *param_2;
            local_78 = param_2[1];
            local_70 = param_2[2];
            if (local_70 != 0) {
              LOCK();
              *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
              UNLOCK();
            }
            FUN_140cc0f50(lVar8,&local_80);
            FKey::~FKey(param_2);
            return 1;
          }
        }
        else if (param_3 == 1) {
          FUN_140d13f50(param_1,0);
          FKey::~FKey(param_2);
          return 1;
        }
        goto LAB_140d01687;
      }
    }
    lVar8 = FUN_14270bb10(param_1);
    if (lVar8 != 0) {
      uVar4 = *(undefined4 *)(lVar8 + 0x108);
      uVar9 = FWeakObjectPtr::Get(param_1 + 0x196);
      cVar7 = FUN_142ef13b0(uVar9,uVar4);
      if (cVar7 != '\0') {
        local_68 = *param_2;
        uVar4 = *(undefined4 *)(lVar8 + 0x108);
        local_60 = param_2[1];
        local_58 = param_2[2];
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
        }
        uVar9 = FWeakObjectPtr::Get(param_1 + 0x196);
        cVar7 = FUN_142ef09f0(uVar9,&local_68,param_3,uVar4);
        if (cVar7 != '\0') {
LAB_140d01687:
          FKey::~FKey(param_2);
          return 1;
        }
      }
    }
  }
  local_50 = *param_2;
  local_48 = param_2[1];
  local_40 = param_2[2];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_142dd2df0(param_1,&local_50,param_3,param_4,param_5);
  plVar5 = (longlong *)param_2[2];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  return uVar6;
}



// FUNCTION 140d01750 FUN_140d01750 body=11 status=ok
// SIG undefined FUN_140d01750(void)

byte FUN_140d01750(longlong param_1)

{
  return *(byte *)(param_1 + 0x1844) >> 7;
}



// FUNCTION 140d01780 FUN_140d01780 body=55 status=ok
// SIG undefined FUN_140d01780(void)

undefined8 FUN_140d01780(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1880);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1888) * 2;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
    if (*plVar1 == param_2) goto LAB_140d017b0;
  }
  plVar1 = (longlong *)0x0;
LAB_140d017b0:
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),plVar1 != (longlong *)0x0);
}



// FUNCTION 140d017c0 FUN_140d017c0 body=55 status=ok
// SIG undefined FUN_140d017c0(void)

undefined8 FUN_140d017c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1890);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1898) * 2;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
    if (*plVar1 == param_2) goto LAB_140d017f0;
  }
  plVar1 = (longlong *)0x0;
LAB_140d017f0:
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),plVar1 != (longlong *)0x0);
}



// FUNCTION 140d01800 FUN_140d01800 body=51 status=ok
// SIG undefined FUN_140d01800(void)

undefined8 FUN_140d01800(longlong *param_1)

{
  float *pfVar1;
  undefined1 local_res8 [32];
  
  pfVar1 = (float *)(**(code **)(*param_1 + 0x1058))(param_1,local_res8);
  if ((*pfVar1 == 0.5) && (pfVar1[1] == 0.5)) {
    return 0;
  }
  return 1;
}



// FUNCTION 140d01840 FUN_140d01840 body=54 status=ok
// SIG undefined FUN_140d01840(void)

ulonglong FUN_140d01840(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1860);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1868) * 2;
  while( true ) {
    if (plVar1 == plVar2) {
      return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 2;
  }
  return (ulonglong)*(byte *)(plVar1 + 1);
}



// FUNCTION 140d01880 FUN_140d01880 body=55 status=ok
// SIG undefined FUN_140d01880(void)

undefined8 FUN_140d01880(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1860);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1868) * 2;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
    if (*plVar1 == param_2) goto LAB_140d018b0;
  }
  plVar1 = (longlong *)0x0;
LAB_140d018b0:
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),plVar1 != (longlong *)0x0);
}



// FUNCTION 140d018c0 FUN_140d018c0 body=30 status=ok
// SIG undefined FUN_140d018c0(void)

undefined1 FUN_140d018c0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if (lVar1 != 0) {
    return *(undefined1 *)(lVar1 + 0x30);
  }
  return 1;
}



// FUNCTION 140d018e0 FUN_140d018e0 body=59 status=ok
// SIG undefined FUN_140d018e0(void)

undefined8 FUN_140d018e0(longlong *param_1)

{
  char cVar1;
  
  if ((char)param_1[0x25] == '\x03') {
    cVar1 = APlayerController::IsPrimaryPlayer();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x768))(param_1);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140d01920 IsInitialized body=8 status=ok
// SIG undefined IsInitialized(void)

undefined1 UEngine::IsInitialized(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0xa50);
}



// FUNCTION 140d01940 FUN_140d01940 body=560 status=ok
// SIG undefined FUN_140d01940(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_140d01940(longlong *param_1,char param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  lVar9 = 0;
  lVar5 = lVar9;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar8 = iVar1 >> 0x1f & 0xffff;
    uVar4 = iVar1 + uVar8;
    lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
            (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
  }
  if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 1) & 0x18000) != 0) {
    return 0;
  }
  lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar5 == 0) {
    return 0;
  }
  if ((*(byte *)(lVar5 + 0x830) & 4) != 0) {
    return 0;
  }
  if (param_2 == '\0') {
    cVar2 = *(char *)((longlong)param_1 + 0x199c);
  }
  else {
    lVar5 = FUN_1422312c0(param_1);
    if (lVar5 == 0) goto LAB_140d01a55;
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140d01a55;
    uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar2 = FUN_140bca6d0(lVar5,uVar7);
  }
  if (cVar2 != '\0') {
    return 0;
  }
LAB_140d01a55:
  cVar2 = FUN_140d01f30(param_1);
  if (cVar2 != '\0') {
    return 0;
  }
  if (*(char *)((longlong)param_1 + 0x1a04) != '\0') {
    return 0;
  }
  if (*(char *)((longlong)param_1 + 0x1a05) != '\0') {
    return 0;
  }
  if (param_3 == 0) {
    param_3 = param_1[0x8c];
    if (param_3 == 0) {
      return 0;
    }
    lVar5 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
         ) != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return 0;
    }
  }
  if (((((*(byte *)(param_3 + 0x484) & 0x31) == 0) && (param_1[0x12e] == 0)) &&
      (((longlong *)param_1[0x132] == (longlong *)0x0 ||
       (cVar2 = (**(code **)(*(longlong *)param_1[0x132] + 0x950))(), cVar2 == '\0')))) &&
     (cVar2 = FUN_1407c3030(param_1 + 0x1e6), cVar2 == '\0')) {
    if (param_1[0x132] != 0) {
      lVar9 = *(longlong *)(param_1[0x132] + 0x10e0);
    }
    if ((lVar9 == 0) ||
       ((cVar2 = FUN_140adaa20(lVar9), cVar2 == '\0' &&
        (cVar2 = FUN_140adaa20(lVar9), cVar2 == '\0')))) {
      if ((param_2 != '\0') || (param_1[0xa2] != 0)) {
        return 1;
      }
    }
    else {
      FUN_140cfb650(param_1);
    }
  }
  return 0;
}



// FUNCTION 140d01b90 FUN_140d01b90 body=73 status=ok
// SIG undefined FUN_140d01b90(void)

undefined8 FUN_140d01b90(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar1 = UWorld::GetGameState<APVPGameState>(uVar2);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x618) != 0)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d01be0 FUN_140d01be0 body=171 status=ok
// SIG undefined FUN_140d01be0(void)

ulonglong FUN_140d01be0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x488);
  if (lVar2 != 0) {
    lVar3 = FUN_14148cad0();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(lVar2 + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(lVar2 + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') goto LAB_140d01c71;
  }
  lVar2 = *(longlong *)(param_1 + 0x488);
  if (lVar2 != 0) {
    lVar3 = FUN_1414bbb50();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(lVar2 + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(lVar2 + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
LAB_140d01c71:
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140d01c90 FUN_140d01c90 body=55 status=ok
// SIG undefined FUN_140d01c90(void)

undefined1 FUN_140d01c90(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1407c3030(param_1 + 0xf30);
  if (cVar1 == '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0xfc8);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140d01cd0 FUN_140d01cd0 body=59 status=ok
// SIG undefined FUN_140d01cd0(void)

ulonglong FUN_140d01cd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1870);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1878) * 2;
  do {
    if (plVar1 == plVar2) {
LAB_140d01cfe:
      return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
    }
    if (*plVar1 == param_2) {
      if (plVar1 != (longlong *)0x0) {
        return (ulonglong)*(byte *)(plVar1 + 1);
      }
      goto LAB_140d01cfe;
    }
    plVar1 = plVar1 + 2;
  } while( true );
}



// FUNCTION 140d01d10 FUN_140d01d10 body=55 status=ok
// SIG undefined FUN_140d01d10(void)

undefined8 FUN_140d01d10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1870);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1878) * 2;
  for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
    if (*plVar1 == param_2) goto LAB_140d01d40;
  }
  plVar1 = (longlong *)0x0;
LAB_140d01d40:
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),plVar1 != (longlong *)0x0);
}



// FUNCTION 140d01d50 FUN_140d01d50 body=87 status=ok
// SIG undefined FUN_140d01d50(void)

undefined1 FUN_140d01d50(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140cff230();
  if (lVar2 == 0) {
    return 1;
  }
  cVar1 = FUN_142dd3d20(param_1);
  if (cVar1 != '\0') {
    return *(undefined1 *)(lVar2 + 0x154);
  }
  return *(undefined1 *)(lVar2 + 0x170);
}



// FUNCTION 140d01db0 FUN_140d01db0 body=382 status=ok
// SIG undefined FUN_140d01db0(void)

undefined8 FUN_140d01db0(undefined8 param_1,longlong *param_2)

{
  void *_Src;
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_48;
  int local_40;
  longlong *local_38;
  int local_30;
  longlong local_28 [4];
  
  uVar1 = FUN_14301f8f0();
  lVar2 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
  if (lVar2 == 0) {
    return 0;
  }
  plVar4 = (longlong *)0x0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  FUN_142ffd340(&local_48,lVar2,local_28,0,0);
  if (local_40 == 0) {
    uVar1 = 0;
  }
  else {
    local_30 = *(int *)(lVar2 + 0x238);
    lVar5 = (longlong)local_30;
    _Src = *(void **)(lVar2 + 0x230);
    local_38 = (longlong *)0x0;
    if (local_30 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_38,local_30,0);
      plVar4 = local_38;
      _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar5 << 3);
    }
    for (plVar6 = plVar4; plVar6 != plVar4 + local_30; plVar6 = plVar6 + 1) {
      if (*plVar6 != 0) {
        for (plVar3 = local_48; plVar3 != local_48 + local_40; plVar3 = plVar3 + 1) {
          if (*plVar3 == *plVar6) {
            uVar1 = 1;
            goto LAB_140d01eca;
          }
        }
      }
    }
    uVar1 = 0;
LAB_140d01eca:
    if (plVar4 != (longlong *)0x0) {
      FMemory::Free(plVar4);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return uVar1;
}



// FUNCTION 140d01f30 FUN_140d01f30 body=420 status=ok
// SIG undefined FUN_140d01f30(void)

undefined8 FUN_140d01f30(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  bool bVar12;
  longlong local_38 [4];
  undefined2 *local_18;
  undefined8 local_10;
  
  bVar12 = false;
  plVar6 = (longlong *)UGameMapsSettings::GetPrivateStaticClass();
  lVar7 = plVar6[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar6 + 0x368))(plVar6);
    lVar7 = plVar6[0x1f];
  }
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  local_38[0] = 0;
  local_38[1] = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  lVar2 = local_38[0];
  FGenericPlatformString::Memcpy(local_38[0],&DAT_143f73c90,4);
  if (*(longlong *)(lVar7 + 0x50) == 0) {
    local_38[2] = 0;
    local_38[3] = 0;
  }
  else {
    FName::ToString((longlong *)(lVar7 + 0x50),local_38 + 2);
  }
  FUN_1404e14f0(local_38 + 2,local_38,0,local_38 + 4,0,0);
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (lVar2 != 0) {
    FMemory::Free(lVar2);
  }
  lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
  puVar3 = local_18;
  if (lVar7 != 0) {
    uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar4 = UWorld::IsInSeamlessTravel(uVar8);
    if (cVar4 == '\0') {
      uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      puVar9 = (undefined8 *)FUN_1428cc8c0(uVar8,local_38 + 2);
      puVar10 = &DAT_143f3eda8;
      puVar11 = &DAT_143f3eda8;
      if ((int)local_10 != 0) {
        puVar11 = puVar3;
      }
      if (*(int *)(puVar9 + 1) != 0) {
        puVar10 = (undefined2 *)*puVar9;
      }
      bVar12 = true;
      iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,puVar11);
      if (iVar5 == 0) goto LAB_140d0208c;
      bVar1 = false;
    }
    else {
LAB_140d0208c:
      bVar1 = true;
    }
    if ((bVar12) && (local_38[2] != 0)) {
      FMemory::Free();
    }
    if (bVar1) {
      uVar8 = 1;
      goto LAB_140d020ae;
    }
  }
  uVar8 = 0;
LAB_140d020ae:
  if (puVar3 != (undefined2 *)0x0) {
    FMemory::Free(puVar3);
  }
  return uVar8;
}



// FUNCTION 140d020e0 FUN_140d020e0 body=224 status=ok
// SIG undefined FUN_140d020e0(void)

undefined8 FUN_140d020e0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  cVar3 = FUN_1407c3030(param_1 + 0xf30);
  if (cVar3 != '\0') {
    return 1;
  }
  if (((*(longlong **)(param_1 + 0x990) != (longlong *)0x0) &&
      (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x990) + 0x950))(), cVar3 != '\0')) &&
     (cVar3 = FUN_140cfdb70(param_1), cVar3 == '\0')) {
    return 1;
  }
  lVar4 = *(longlong *)(param_1 + 0xa90);
  if (((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x48))) &&
     ((plVar1 = *(longlong **)
                 (*(longlong *)(lVar4 + 0x40) + -8 + (longlong)*(int *)(lVar4 + 0x48) * 8),
      plVar1 != (longlong *)0x0 && (lVar4 = (**(code **)(*plVar1 + 0x278))(), lVar4 != 0)))) {
    lVar5 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (uVar6 = FUN_142eb6ef0(lVar4 + 0x4d8), (uVar6 & 0xfd) != 0)) {
      return 1;
    }
  }
  uVar7 = FUN_142dd3800(param_1);
  return uVar7;
}



// FUNCTION 140d021e0 FUN_140d021e0 body=42 status=ok
// SIG undefined FUN_140d021e0(void)

ulonglong FUN_140d021e0(undefined8 param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_140cff230();
  if (lVar1 != 0) {
    return (ulonglong)*(byte *)(lVar1 + 0x36);
  }
  uVar2 = FUN_1427101a0(param_1);
  return uVar2;
}



// FUNCTION 140d02210 FUN_140d02210 body=46 status=ok
// SIG undefined FUN_140d02210(void)

undefined1 FUN_140d02210(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_1407c3030(param_1 + 0xf30);
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_142dd3860(param_1);
  return uVar2;
}



// FUNCTION 140d02240 FUN_140d02240 body=93 status=ok
// SIG undefined FUN_140d02240(void)

ulonglong FUN_140d02240(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x848);
  if (lVar2 != 0) {
    lVar3 = FUN_1413ffe00();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar4 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < iVar1) ||
       (uVar4 = *(ulonglong *)(*(longlong *)(lVar2 + 0x10) + 0x88),
       *(longlong *)(uVar4 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      in_RAX = uVar4 & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(uVar4 >> 8),1);
    }
    if ((char)in_RAX != '\0') {
      uVar4 = FUN_140e27b70(lVar2);
      return uVar4;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140d022a0 FUN_140d022a0 body=78 status=ok
// SIG undefined FUN_140d022a0(void)

bool FUN_140d022a0(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_140d14ea0();
  if (cVar1 != '\0') {
    lVar2 = FUN_140d00370(param_1,param_2);
    if (lVar2 != 0) {
      return 0.0 < *(float *)(lVar2 + 0x88);
    }
  }
  return false;
}



// FUNCTION 140d022f0 FUN_140d022f0 body=24 status=ok
// SIG undefined FUN_140d022f0(void)

longlong FUN_140d022f0(longlong param_1)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x58) == '\0')) {
    return (ulonglong)uVar2 << 8;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 140d02310 FUN_140d02310 body=19 status=ok
// SIG undefined FUN_140d02310(void)

ulonglong FUN_140d02310(longlong param_1)

{
  longlong lVar1;
  ulonglong in_RAX;
  
  if (*(longlong *)(param_1 + 0x990) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x990) + 0xe68);
  if (lVar1 != 0) {
    return (ulonglong)(*(uint *)(lVar1 + 0x2ac0) >> 2) & 0xffffffffffffff01;
  }
  return 0;
}



// FUNCTION 140d02330 FUN_140d02330 body=49 status=ok
// SIG undefined FUN_140d02330(void)

undefined1 FUN_140d02330(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if ((lVar1 != 0) && ((0.0 < *(float *)(lVar1 + 0x238) || (0.0 < *(float *)(lVar1 + 0x244))))) {
    return 1;
  }
  return 0;
}



// FUNCTION 140d02370 FUN_140d02370 body=31 status=ok
// SIG undefined FUN_140d02370(void)

bool FUN_140d02370(longlong param_1)

{
  if (*(byte *)(param_1 + 0x128) < 3) {
    return *(char *)(param_1 + 0x9b8) == '\0';
  }
  return *(char *)(param_1 + 0xa4d) == '\0';
}



// FUNCTION 140d02390 FUN_140d02390 body=81 status=ok
// SIG undefined FUN_140d02390(void)

void FUN_140d02390(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((longlong *)param_1[0x132] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140d023ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0x132] + 0xa60))();
    return;
  }
  uVar1 = FUN_1412d7930();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  if (lVar2 != 0) {
    FUN_141274560(lVar2);
    return;
  }
  return;
}



// FUNCTION 140d023f0 FUN_140d023f0 body=235 status=ok
// SIG undefined FUN_140d023f0(void)

void FUN_140d023f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(longlong *)(param_1 + 0x990) != 0) {
    lVar4 = FUN_140cff230();
    if (((lVar4 != 0) && (*(char *)(lVar4 + 0x42) != '\0')) && (*(longlong *)(param_1 + 0x990) != 0)
       ) {
      cVar3 = FUN_140c469d0();
      if (cVar3 != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x990) + 0x8e0))(*(longlong **)(param_1 + 0x990),0);
      }
    }
    plVar6 = *(longlong **)(param_1 + 0x990);
    if ((*(byte *)((longlong)plVar6 + 0x56c) & 1) != 0) {
      (**(code **)(*plVar6 + 0x8e0))(plVar6,0);
      plVar6 = *(longlong **)(param_1 + 0x990);
      if (((*(byte *)((longlong)plVar6 + 0x56c) & 1) != 0) &&
         ((*(byte *)(param_1 + 0xd24) & 2) == 0)) goto LAB_140d0247b;
    }
    (**(code **)(*plVar6 + 0x870))();
  }
LAB_140d0247b:
  lVar4 = *(longlong *)(param_1 + 0x460);
  if (lVar4 != 0) {
    lVar5 = UInputKeySelector::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(lVar4 + 0x599) != '\0')) {
      FUN_140d0da30(param_1,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
    }
  }
  return;
}



// FUNCTION 140d02500 FUN_140d02500 body=16 status=ok
// SIG undefined FUN_140d02500(void)

void FUN_140d02500(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x858) = 0;
  FUN_140ce6870();
  return;
}



// FUNCTION 140d02510 FUN_140d02510 body=138 status=ok
// SIG undefined FUN_140d02510(void)

void FUN_140d02510(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_140cfbfb0();
  if (lVar2 != 0) {
    if ((((*(char *)(param_1 + 0x128) == '\x03') &&
         (cVar1 = APlayerController::IsPrimaryPlayer(param_1), cVar1 != '\0')) &&
        (cVar1 = FUN_140d01b90(param_1), cVar1 == '\0')) &&
       (lVar3 = FUN_140b825a0(param_1), lVar3 != 0)) {
      FUN_140ccce90(lVar3,*(int *)(lVar2 + 0x140) + 1);
      *(undefined4 *)(lVar3 + 0x74c) = *(undefined4 *)(lVar2 + 0x144);
    }
    FUN_140ce7700(param_1,lVar2,1);
  }
  return;
}



// FUNCTION 140d025a0 FUN_140d025a0 body=536 status=ok
// SIG undefined FUN_140d025a0(void)

ulonglong FUN_140d025a0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  longlong *local_48;
  int local_40;
  code *local_38;
  longlong *plStack_30;
  code *local_28;
  longlong *plStack_20;
  
  if (*(char *)((longlong)param_1 + 0xa4d) != '\0') {
    return in_RAX & 0xffffffffffffff00;
  }
  FUN_142dcf3a0(param_1,&local_38);
  if (local_38 != (code *)0x0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar4 = (longlong *)FUN_140d3a420(uVar3);
    if (plVar4 != (longlong *)0x0) {
      *(undefined1 *)((longlong)param_1 + 0xa4d) = 1;
      local_28 = FUN_140d05510;
      plStack_20 = (longlong *)((ulonglong)plStack_20 & 0xffffffff00000000);
      local_48 = (longlong *)0x0;
      plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
      local_40 = 3;
      local_48 = plVar5;
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_1444f8208;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        plVar5[2] = (longlong)local_28;
        plVar5[3] = (longlong)plStack_20;
        lVar6 = FDelegateHandle::GenerateNewID();
        plVar5[5] = lVar6;
        *plVar5 = (longlong)&PTR_FUN_1444f8250;
      }
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x120))(plVar4,local_res8,&local_48);
      param_1[0x24b] = *plVar5;
      if (local_40 == 0) {
LAB_140d026e8:
        if (local_48 != (longlong *)0x0) {
          FMemory::Free(local_48);
        }
      }
      else if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x28))(local_48,0);
        if (local_48 != (longlong *)0x0) {
          local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
        }
        local_40 = 0;
        goto LAB_140d026e8;
      }
      local_28 = local_38;
      plStack_20 = plStack_30;
      if (plStack_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
        UNLOCK();
      }
      FUN_140d46ef0(plVar4,&local_28,param_2,0);
      plVar4 = plStack_20;
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_20 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
          (**(code **)*plStack_20)(plStack_20);
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
      uVar7 = 1;
      goto LAB_140d02766;
    }
  }
  uVar7 = 0;
LAB_140d02766:
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_30 + 1;
    lVar6 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plStack_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140d027c0 FUN_140d027c0 body=170 status=ok
// SIG undefined FUN_140d027c0(void)

void FUN_140d027c0(longlong *param_1)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 0x1e4) = 1;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    uVar4 = *(undefined4 *)(lVar3 + 0x790);
  }
  *(undefined4 *)((longlong)param_1 + 0xf24) = uVar4;
  if (((param_1[0x132] != 0) && (lVar3 = *(longlong *)(param_1[0x132] + 0xe68), lVar3 != 0)) &&
     (cVar2 = FUN_142cbb8e0(lVar3 + 0x1950), cVar2 != '\0')) {
    if ((((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) != 0) &&
        (cVar2 = (**(code **)(*param_1 + 0x768))(param_1), cVar2 != '\0')) &&
       (cVar2 = FUN_140cf8da0(param_1), cVar2 == '\0')) {
      return;
    }
    pbVar1 = (byte *)(*(longlong *)(param_1[0x132] + 0xe68) + 0x1968);
    *pbVar1 = *pbVar1 | 8;
  }
  return;
}



// FUNCTION 140d02880 FUN_140d02880 body=52 status=ok
// SIG undefined FUN_140d02880(void)

void FUN_140d02880(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1860);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1868) * 2;
  if (plVar1 != plVar2) {
    while (*plVar1 != param_2) {
      plVar1 = plVar1 + 2;
      if (plVar1 == plVar2) {
        return;
      }
    }
    *(undefined1 *)(plVar1 + 1) = 0;
  }
  return;
}



// FUNCTION 140d028c0 FUN_140d028c0 body=52 status=ok
// SIG undefined FUN_140d028c0(void)

void FUN_140d028c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x1900);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1908) * 2;
    if (plVar1 != plVar2) {
      while (*plVar1 != param_2) {
        plVar1 = plVar1 + 2;
        if (plVar1 == plVar2) {
          return;
        }
      }
      *(undefined1 *)(plVar1 + 1) = 1;
    }
  }
  return;
}



// FUNCTION 140d02900 FUN_140d02900 body=52 status=ok
// SIG undefined FUN_140d02900(void)

void FUN_140d02900(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x1870);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x1878) * 2;
  if (plVar1 != plVar2) {
    while (*plVar1 != param_2) {
      plVar1 = plVar1 + 2;
      if (plVar1 == plVar2) {
        return;
      }
    }
    *(undefined1 *)(plVar1 + 1) = 0;
  }
  return;
}



// FUNCTION 140d02940 FUN_140d02940 body=257 status=ok
// SIG undefined FUN_140d02940(void)

void FUN_140d02940(longlong param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  char *local_res18;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar3 = FUN_140cff230();
  if (lVar3 != 0) {
    if (1 < *(int *)(param_2 + 0x70)) {
      local_res18 = param_2 + 0x68;
      TArray<FString,FDefaultAllocator>::RemoveAll<<lambda_0089088ead215b5f35713e72b81bce1f>_>
                (lVar3 + 0x3c0,&local_res18);
    }
    if (*param_2 == '\x04') {
      lVar3 = *(longlong *)(param_1 + 0xe58);
      lVar4 = (longlong)*(int *)(param_1 + 0xe60) * 0xb8 + lVar3;
      for (; lVar3 != lVar4; lVar3 = lVar3 + 0xb8) {
        cVar1 = FUN_140b17750(lVar3,param_2);
        if (cVar1 != '\0') {
          *(undefined1 *)(lVar3 + 0xb0) = 1;
        }
      }
    }
    else if (*param_2 == '\x05') {
      local_18 = 0;
      local_10 = 0;
      cVar1 = FUN_1416791b0(param_2 + 0x50,0,&local_18);
      if ((cVar1 != '\0') && (lVar3 = FUN_140aac430(param_1 + 0x1a40,&local_18), lVar3 != 0)) {
        FUN_140abc6c0(param_1,lVar3);
      }
    }
    uVar2 = FUN_140d00e50(param_1);
    FUN_140d133d0(param_1,uVar2);
  }
  return;
}



// FUNCTION 140d02a50 FUN_140d02a50 body=415 status=ok
// SIG undefined FUN_140d02a50(void)

ulonglong FUN_140d02a50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  ulonglong in_RAX;
  longlong lVar7;
  longlong lVar8;
  uint7 uVar10;
  ulonglong uVar9;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  if ((char)param_1[0x25] == '\x03') {
    in_RAX = APlayerController::IsPrimaryPlayer();
    if ((char)in_RAX == '\0') goto LAB_140d02a7f;
    in_RAX = (**(code **)(*param_1 + 0x768))(param_1);
    if ((char)in_RAX == '\0') goto LAB_140d02a7f;
    uVar9 = CONCAT71((int7)(in_RAX >> 8),1);
  }
  else {
LAB_140d02a7f:
    uVar9 = in_RAX & 0xffffffffffffff00;
  }
  if ((char)uVar9 == '\0') {
    FUN_142dcf3a0(param_1,&local_28);
    if (local_28 == 0) {
      bVar5 = 1;
LAB_140d02ba7:
      if (plStack_20 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_20 + 1;
        lVar7 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plStack_20)(plStack_20);
          LOCK();
          piVar2 = (int *)((longlong)plStack_20 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plStack_20 + 8))(plStack_20,1);
          }
        }
      }
      return (ulonglong)bVar5;
    }
    lVar7 = FUN_1422312c0(param_1);
    uVar9 = 0;
    if (lVar7 != 0) {
      lVar8 = FUN_14141f270();
      uVar10 = (uint7)((ulonglong)(lVar8 + 0x88) >> 8);
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        uVar9 = (ulonglong)uVar10 << 8;
      }
      else {
        uVar9 = CONCAT71(uVar10,1);
      }
      if ((char)uVar9 != '\0') {
        local_18 = local_28;
        plStack_10 = plStack_20;
        if (plStack_20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
          UNLOCK();
        }
        bVar5 = FUN_140bcdde0(lVar7,&local_18);
        plVar3 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_10 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plStack_10)(plStack_10);
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
        goto LAB_140d02ba7;
      }
    }
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_20 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      uVar6 = (int)lVar7 - 1;
      uVar9 = (ulonglong)uVar6;
      if (uVar6 == 0) {
        uVar9 = (**(code **)*plStack_20)(plStack_20);
        LOCK();
        piVar2 = (int *)((longlong)plStack_20 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          uVar9 = (**(code **)(*plStack_20 + 8))(plStack_20,1);
        }
      }
    }
  }
  return uVar9 & 0xffffffffffffff00;
}



// FUNCTION 140d02c00 FUN_140d02c00 body=56 status=ok
// SIG undefined FUN_140d02c00(void)

void FUN_140d02c00(longlong param_1,int param_2)

{
  int local_res10 [6];
  
  if (param_2 - 1U < 0x2d) {
    local_res10[0] = param_2;
    TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
              (param_1 + 0x1af0,local_res10);
    FUN_140cf0040(param_1);
    return;
  }
  return;
}



// FUNCTION 140d02c40 FUN_140d02c40 body=490 status=ok
// SIG undefined FUN_140d02c40(void)

void FUN_140d02c40(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  if (((*(longlong **)(param_1 + 0x990) == (longlong *)0x0) ||
      (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x990) + 0x950))(), cVar5 == '\0')) ||
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x990) + 0x10e0), lVar2 == 0)) {
    piVar8 = (int *)(param_1 + 0x1800);
    if (((*piVar8 != 0) || (*(int *)(param_1 + 0x1804) != 0)) ||
       ((*(int *)(param_1 + 0x1808) != 0 ||
        ((*(int *)(param_1 + 0x180c) != 0 || (*(int *)(param_1 + 0x1810) != 0)))))) {
      FUN_14145ec10(param_1,piVar8);
      *(undefined8 *)(param_1 + 0x180c) = 0;
      *(undefined8 *)(param_1 + 0x1804) = 0;
      *piVar8 = 0;
    }
    return;
  }
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&AOakPlayerController::ResurrectedDuringCombat",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  plVar10 = (longlong *)(lVar2 + 0x12f8);
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_20);
  }
  piVar8 = (int *)*plVar10;
  iVar1 = *(int *)(lVar2 + 0x1300);
  piVar9 = piVar8;
  do {
    if (piVar9 == piVar8 + (longlong)iVar1 * 4) {
LAB_140d02d94:
      iVar1 = *(int *)(lVar2 + 0x1300);
      *(int *)(lVar2 + 0x1300) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x1304) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
      *piVar8 = local_28;
      piVar8[1] = local_24;
      *(longlong *)(piVar8 + 2) = local_20;
LAB_140d02dcd:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      return;
    }
    if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_20)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_140d02dcd;
      goto LAB_140d02d94;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 140d02e30 FUN_140d02e30 body=13 status=ok
// SIG undefined FUN_140d02e30(void)

void FUN_140d02e30(longlong param_1,int param_2,char param_3)

{
  if (param_3 == '\x01') {
    *(int *)(param_1 + 0x1800) = *(int *)(param_1 + 0x1800) + param_2;
  }
  return;
}



// FUNCTION 140d02e40 FUN_140d02e40 body=52 status=ok
// SIG undefined FUN_140d02e40(void)

void FUN_140d02e40(longlong param_1,longlong param_2)

{
  FUN_142dd44d0();
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0x214) & 1) != 0)) {
    *(int *)(param_1 + 0x1804) = *(int *)(param_1 + 0x1804) + 1;
  }
  return;
}



// FUNCTION 140d02e80 FUN_140d02e80 body=51 status=ok
// SIG undefined FUN_140d02e80(void)

void FUN_140d02e80(longlong param_1,longlong param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_2 != 0) {
    *(int *)(param_1 + 0x1808) = *(int *)(param_1 + 0x1808) + 1;
    FUN_14145de20(param_1);
  }
  return;
}



// FUNCTION 140d02ec0 FUN_140d02ec0 body=7 status=ok
// SIG undefined FUN_140d02ec0(void)

void FUN_140d02ec0(longlong param_1)

{
  *(int *)(param_1 + 0x180c) = *(int *)(param_1 + 0x180c) + 1;
  return;
}



// FUNCTION 140d02ed0 FUN_140d02ed0 body=7 status=ok
// SIG undefined FUN_140d02ed0(void)

void FUN_140d02ed0(longlong param_1)

{
  *(int *)(param_1 + 0x1810) = *(int *)(param_1 + 0x1810) + 1;
  return;
}



// FUNCTION 140d02ee0 FUN_140d02ee0 body=30 status=ok
// SIG undefined FUN_140d02ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d02ee0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_128 [32];
  longlong *plStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *plStack_b0;
  longlong *plStack_a0;
  longlong *plStack_90;
  undefined4 auStack_88 [4];
  longlong *plStack_78;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [8];
  longlong *plStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong uStack_30;
  
  if ((int)param_1[0x194] != 1) {
    if ((int)param_1[0x194] == 0) {
      *(undefined4 *)(param_1 + 0x194) = 2;
    }
    return;
  }
  uStack_30 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  auStack_88[0] = 0;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 == 0) {
    lVar7 = 0;
LAB_140cf828a:
    uStack_f0 = (longlong *)0x0;
    lVar11 = 0;
    plStack_b0 = (longlong *)0x0;
    uStack_f8 = (longlong *)0x0;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    lVar7 = UWorld::GetGameState<APVPGameState>();
    if ((lVar7 == 0) || (lVar11 = *(longlong *)(lVar7 + 0x558), lVar11 == 0)) goto LAB_140cf828a;
    lVar8 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140cf828a;
    uStack_f0 = *(longlong **)(lVar11 + 0x4c0);
    bVar4 = true;
    bVar3 = false;
    uStack_f8 = *(longlong **)(lVar11 + 0x4b8);
    plStack_a0 = uStack_f0;
    if (uStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
      UNLOCK();
    }
  }
  plVar10 = plStack_b0;
  if (uStack_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
    UNLOCK();
  }
  if ((bVar3) && (plStack_b0 != (longlong *)0x0)) {
    LOCK();
    plVar14 = plStack_b0 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_b0 + 8))(plStack_b0,1);
      }
    }
  }
  plVar10 = plStack_a0;
  if ((bVar4) && (plStack_a0 != (longlong *)0x0)) {
    LOCK();
    plVar14 = plStack_a0 + 1;
    lVar8 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_a0 + 8))(plStack_a0,1);
      }
    }
  }
  lVar8 = FUN_1422312c0(param_1);
  if (lVar8 != 0) {
    lVar9 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140cf838d;
  }
  lVar8 = 0;
LAB_140cf838d:
  if ((uStack_f8 != (longlong *)0x0) && (lVar8 != 0)) {
    (**(code **)(*uStack_f8 + 8))(uStack_f8,auStack_88);
    cVar5 = FUN_140bcac80();
    plVar10 = uStack_f0;
    if (cVar5 == '\0') {
      if (lVar11 == 0) {
        plVar14 = (longlong *)0x0;
        bVar4 = false;
        bVar3 = true;
        plStack_78 = (longlong *)0x0;
        plVar13 = (longlong *)0x0;
      }
      else {
        plVar14 = *(longlong **)(lVar11 + 0x540);
        plVar13 = *(longlong **)(lVar11 + 0x538);
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
          UNLOCK();
        }
        bVar4 = true;
        bVar3 = false;
        plStack_90 = plVar14;
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      uStack_d8._0_4_ = SUB84(plVar13,0);
      uStack_40 = (undefined4)uStack_d8;
      uStack_d8._4_4_ = (undefined4)((ulonglong)plVar13 >> 0x20);
      uStack_3c = uStack_d8._4_4_;
      uStack_d0._0_4_ = SUB84(plVar14,0);
      uStack_38 = (undefined4)uStack_d0;
      uStack_d0._4_4_ = (undefined4)((ulonglong)plVar14 >> 0x20);
      uStack_34 = uStack_d0._4_4_;
      uStack_d8 = uStack_f8;
      uStack_d0 = uStack_f0;
      uStack_f8 = plVar13;
      if (uStack_f0 != (longlong *)0x0) {
        LOCK();
        plVar13 = uStack_f0 + 1;
        lVar11 = *plVar13;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          puVar12 = (undefined8 *)*uStack_f0;
          uStack_f0 = plVar14;
          (*(code *)*puVar12)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar14 = uStack_f0;
          if (iVar6 == 1) {
            (**(code **)(*uStack_d0 + 8))(uStack_d0,1);
            plVar14 = uStack_f0;
          }
        }
      }
      uStack_f0 = plVar14;
      plVar10 = plStack_78;
      if ((bVar3) && (plStack_78 != (longlong *)0x0)) {
        LOCK();
        plVar14 = plStack_78 + 1;
        lVar11 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_78)(plStack_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_78 + 8))(plStack_78,1);
          }
        }
      }
      plVar10 = plStack_90;
      if ((bVar4) && (plStack_90 != (longlong *)0x0)) {
        LOCK();
        plVar14 = plStack_90 + 1;
        lVar11 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*plStack_90)(plStack_90);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plStack_90 + 8))(plStack_90,1);
          }
        }
      }
    }
  }
  if ((((param_1[0x285] != 0) && (lVar8 != 0)) && (lVar7 != 0)) && (uStack_f8 != (longlong *)0x0)) {
    lStack_e8 = 0;
    uStack_e0 = 0;
    if ((*(char *)(lVar7 + 0x6c1) == '\0') && (*(char *)(lVar7 + 0x6c2) != '\0')) {
      iVar6 = FUN_140cb6860(lVar7);
    }
    else {
      iVar6 = -1;
    }
    uStack_68 = (undefined4)uStack_f8;
    uStack_64 = uStack_f8._4_4_;
    uStack_60 = (undefined4)uStack_f0;
    uStack_5c = uStack_f0._4_4_;
    if (uStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
      UNLOCK();
    }
    plStack_108 = &lStack_e8;
    FUN_140d79f00(*(undefined8 *)(lVar8 + 0x478),&uStack_68,0,1);
    plVar10 = (longlong *)CONCAT44(uStack_5c,uStack_60);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar14 = plVar10 + 1;
      lVar7 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
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
    if ((iVar6 < 1) || ((int)uStack_e0 < 2)) {
      lVar7 = *(longlong *)(lVar8 + 0x478);
      uStack_c8 = FUN_140d052c0;
      uStack_c0 = 0;
      plVar14 = (longlong *)(lVar7 + 0x1e0);
      plVar10 = (longlong *)FMemory::Realloc(0,0x30);
      plStack_50 = plVar10;
      if (plVar10 != (longlong *)0x0) {
        *plVar10 = (longlong)&PTR_FUN_143fcfec0;
        FWeakObjectPtr::operator=(plVar10 + 1,param_1);
        *(undefined4 *)(plVar10 + 2) = (undefined4)uStack_c8;
        *(undefined4 *)((longlong)plVar10 + 0x14) = uStack_c8._4_4_;
        *(undefined4 *)(plVar10 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar10 + 0x1c) = uStack_bc;
        lVar11 = FDelegateHandle::GenerateNewID();
        plVar10[5] = lVar11;
        *plVar10 = (longlong)&PTR_FUN_143fcff08;
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,1);
        (**(code **)(*plVar10 + 0x20))(plVar10,auStack_58);
        iVar6 = *(int *)(lVar7 + 0x1e8);
        *(int *)(lVar7 + 0x1e8) = iVar6 + 1;
        if (*(int *)(lVar7 + 0x1ec) < iVar6 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar6);
        }
        puVar12 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar14);
        *puVar12 = plVar10;
        *(undefined4 *)(puVar12 + 1) = 3;
      }
      uStack_c8 = (code *)uStack_f8;
      uStack_c0 = (undefined4)uStack_f0;
      uStack_bc = uStack_f0._4_4_;
      if (uStack_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(uStack_f0 + 1) = (int)uStack_f0[1] + 1;
        UNLOCK();
      }
      FUN_140d938f0(*(undefined8 *)(lVar8 + 0x478),&uStack_c8);
      plVar10 = (longlong *)CONCAT44(uStack_bc,uStack_c0);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar10 + 1;
        lVar7 = *plVar14;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar10 + 8))(plVar10,1);
          }
        }
      }
    }
    else {
      FUN_140cf09b0(param_1);
    }
    if (lStack_e8 != 0) {
      FMemory::Free();
    }
  }
  plVar10 = uStack_f0;
  if (uStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar14 = uStack_f0 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_f0)(uStack_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*uStack_f0 + 8))(uStack_f0,1);
      }
    }
  }
  return;
}



// FUNCTION 140d02f00 FUN_140d02f00 body=701 status=ok
// SIG undefined FUN_140d02f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d02f00(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  cVar3 = *(char *)(param_1 + 0x17fc);
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0x17fc) = 0;
    FUN_140d02c40();
    *(char *)(param_1 + 0x17fc) = cVar3;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar9 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar9 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x550);
  }
  lVar5 = FUN_1422312c0(param_1);
  if (lVar5 != 0) {
    lVar6 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140d02fc4;
  }
  lVar5 = 0;
LAB_140d02fc4:
  if ((((lVar9 != 0) && (lVar5 != 0)) && (param_2 < *(int *)(lVar9 + 0x68))) &&
     (*(int *)(lVar9 + 0x68) <= param_3)) {
    if (((*(char *)(lVar9 + 0x6c) == '\0') || (cVar3 = FUN_140bc2c90(lVar5), cVar3 != '\0')) ||
       (iVar4 = FUN_14046e5c0(lVar5), iVar4 != 1)) {
      if (*(longlong *)(lVar9 + 0x58) != 0) {
        FUN_1411d2fe0(lVar5,param_1);
      }
    }
    else if (*(longlong *)(lVar9 + 0x60) != 0) {
      uVar1 = *(undefined4 *)(lVar9 + 0x70);
      local_c8 = FUN_140d031c0;
      uStack_c0 = 0;
      uVar7 = AActor::GetWorldTimerManager(param_1);
      plVar8 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar8 != (longlong *)0x0) {
        *plVar8 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar8 + 1,param_1);
        *(undefined4 *)(plVar8 + 2) = (undefined4)local_c8;
        *(undefined4 *)((longlong)plVar8 + 0x14) = local_c8._4_4_;
        *(undefined4 *)(plVar8 + 3) = uStack_c0;
        *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_bc;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar8[5] = lVar9;
        *plVar8 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_b8 = 0;
      local_b0 = 0;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x30))(plVar8,&local_b8);
      }
      FWeakObjectPtr::operator=(local_a8,0);
      local_d0 = 0xbf800000;
      local_d8 = 0;
      local_a0 = 0;
      local_68 = (longlong *)0x0;
      local_58 = 0;
      local_98 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar7,param_1 + 0x17e8,&local_b8,uVar1);
      if (local_58 != 0) {
        plVar10 = local_88;
        if (local_68 != (longlong *)0x0) {
          plVar10 = local_68;
        }
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x10))(plVar10,0);
        }
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        lVar9 = FMemory::Realloc(plVar8,0,0);
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d031c0 FUN_140d031c0 body=264 status=ok
// SIG undefined FUN_140d031c0(void)

void FUN_140d031c0(longlong param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_res8;
  
  if (*(longlong *)(param_1 + 0x17e8) != 0) {
    local_res8 = *(longlong *)(param_1 + 0x17e8);
    uVar2 = AActor::GetWorldTimerManager();
    lVar3 = FTimerManager::FindTimer(uVar2,&local_res8,0);
    if ((lVar3 == 0) || (*(char *)(lVar3 + 1) == '\x02')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = AActor::GetWorldTimerManager(param_1);
      FUN_142880530(uVar2,param_1 + 0x17e8);
      *(undefined8 *)(param_1 + 0x17e8) = 0;
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x550);
  }
  lVar4 = FUN_1422312c0(param_1);
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140d0329f;
  }
  lVar4 = 0;
LAB_140d0329f:
  if ((lVar3 != 0) && (lVar4 != 0)) {
    SubCharacterCatapult::RestoreSnapshot(lVar4,param_1,*(undefined8 *)(lVar3 + 0x60));
  }
  return;
}



// FUNCTION 140d032d0 FUN_140d032d0 body=11 status=ok
// SIG undefined FUN_140d032d0(void)

void FUN_140d032d0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x1840) = 0;
  return;
}



// FUNCTION 140d032e0 FUN_140d032e0 body=294 status=ok
// SIG undefined FUN_140d032e0(void)

void FUN_140d032e0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_28 [2];
  longlong local_20;
  undefined4 local_18;
  undefined4 local_14;
  
  lVar4 = *(longlong *)(param_1 + 0x848);
  if (lVar4 == 0) goto LAB_140d033d7;
  lVar3 = FUN_1413f82e0();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) || (lVar4 = (**(code **)(*(longlong *)(lVar4 + 0xd80) + 0x18))(), lVar4 == 0))
  goto LAB_140d033d7;
  lVar3 = *param_3;
  lVar2 = param_3[1];
  if (lVar3 == 0) {
LAB_140d033a0:
    lVar3 = 0;
  }
  else {
    lVar5 = FUN_1430228e0();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140d033a0;
  }
  local_28[0] = 0xffffffff;
  local_14 = 0;
  local_20 = lVar3;
  local_18 = (int)lVar2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (lVar4 + 0x318,local_28);
LAB_140d033d7:
  *(undefined1 *)(param_1 + 0xa51) = 1;
  if (*(byte *)(param_1 + 0x128) < 3) {
    FUN_141460fc0(param_1,*param_3,(int)param_3[1]);
  }
  return;
}



// FUNCTION 140d03410 FUN_140d03410 body=1199 status=ok
// SIG undefined FUN_140d03410(void)

void FUN_140d03410(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  wchar_t *pwVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  undefined8 local_res8;
  code *local_38;
  ulonglong uStack_30;
  
  if ((char)param_1[0x25] == '\x03') {
    if (param_2 == (longlong *)param_1[0x2fa]) {
      return;
    }
    iVar5 = FUN_140a77c90((longlong *)param_1[0x2fa],param_2,(int)param_1[0x323]);
    if (iVar5 != -1) {
      *(int *)(param_1 + 0x323) = iVar5;
    }
    cVar4 = FUN_1407cd900(param_1);
    pwVar13 = (wchar_t *)0x0;
    pwVar8 = pwVar13;
    if ((cVar4 == '\0') && (lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 != 0)) {
      uVar7 = (**(code **)(*param_1 + 0x148))(param_1);
      pwVar8 = (wchar_t *)UWorld::GetGameState<APVPGameState>(uVar7);
    }
    plVar1 = (longlong *)param_1[0x2fa];
    if (plVar1 != (longlong *)0x0) {
      uVar7 = FUN_1414aa4c0();
      lVar6 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar7);
      if (lVar6 != 0) {
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&AOakPlayerController::NotifyExperienceAdded",L"::");
        pwVar11 = pwVar13;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar11 = pwVar3;
        }
        FName::FName(&local_res8,pwVar11 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x218,param_1,local_res8);
        pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakPlayerController::NotifyLevelUp",L"::");
        pwVar11 = pwVar13;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar11 = pwVar3;
        }
        FName::FName(&local_res8,pwVar11 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x208,param_1,local_res8);
        cVar4 = (**(code **)(*param_1 + 0x768))(param_1);
        if (cVar4 != '\0') {
          pwVar9 = _guard_xfg_dispatch_icall_nop
                             (L"&AOakPlayerController::NotifyUncappedExperienceAdded",L"::");
          pwVar11 = pwVar13;
          while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
            pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
            pwVar11 = pwVar3;
          }
          FName::FName(&local_res8,pwVar11 + 2,1);
          TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar6 + 0x228,param_1,local_res8);
        }
      }
      if (pwVar8 != (wchar_t *)0x0) {
        cVar4 = USkeletalMeshComponent::GetAnimationMode(pwVar8);
        if (cVar4 != '\0') {
          FUN_140c5e130(param_1[0x2fa],0,DAT_14686e010);
        }
        lVar6 = param_1[0x2fa];
        if (lVar6 != 0) {
          lVar10 = FUN_1413ffe00();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_140e36ff0(lVar6,0);
          }
        }
      }
    }
    param_1[0x2fa] = (longlong)param_2;
    if (param_2 != (longlong *)0x0) {
      uVar7 = FUN_1414aa4c0();
      lVar6 = (**(code **)(*param_2 + 0x628))(param_2,uVar7);
      if (lVar6 != 0) {
        uStack_30 = uStack_30 & 0xffffffff00000000;
        local_38 = FUN_140d02e30;
        pwVar9 = _guard_xfg_dispatch_icall_nop
                           (L"&AOakPlayerController::NotifyExperienceAdded",L"::");
        pwVar11 = pwVar13;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar11 = pwVar3;
        }
        FName::FName(&local_res8,pwVar11 + 2,1);
        FUN_1407260e0(lVar6 + 0x218,param_1,&local_38,local_res8);
        uStack_30 = uStack_30 & 0xffffffff00000000;
        local_38 = FUN_140d02f00;
        pwVar9 = _guard_xfg_dispatch_icall_nop(L"&AOakPlayerController::NotifyLevelUp",L"::");
        pwVar11 = pwVar13;
        while (pwVar3 = pwVar9, pwVar3 != (wchar_t *)0x0) {
          pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
          pwVar11 = pwVar3;
        }
        FName::FName(&local_res8,pwVar11 + 2,1);
        FUN_1407260e0(lVar6 + 0x208,param_1,&local_38,local_res8);
        cVar4 = (**(code **)(*param_1 + 0x768))(param_1);
        if (cVar4 != '\0') {
          uStack_30 = uStack_30 & 0xffffffff00000000;
          local_38 = FUN_140d03be0;
          pwVar11 = _guard_xfg_dispatch_icall_nop
                              (L"&AOakPlayerController::NotifyUncappedExperienceAdded",L"::");
          while (pwVar9 = pwVar11, pwVar9 != (wchar_t *)0x0) {
            pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar9 + 1,L"::");
            pwVar13 = pwVar9;
          }
          FName::FName(&local_res8,pwVar13 + 2,1);
          FUN_1407260e0(lVar6 + 0x228,param_1,&local_38,local_res8);
        }
      }
      if (pwVar8 != (wchar_t *)0x0) {
        cVar4 = USkeletalMeshComponent::GetAnimationMode(pwVar8);
        if (cVar4 != '\0') {
          FUN_140c5e130(param_1[0x2fa],1,DAT_14686e010);
        }
        if (((char)pwVar8[0x508] != '\0') && (lVar6 = param_1[0x2fa], lVar6 != 0)) {
          lVar12 = FUN_1413ffe00();
          lVar10 = *(longlong *)(lVar6 + 0x10);
          if ((*(int *)(lVar10 + 0x90) < *(int *)(lVar12 + 0x90)) ||
             (*(longlong *)(*(longlong *)(lVar10 + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
              lVar12 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_140e36ff0(lVar6,CONCAT71((int7)((ulonglong)lVar10 >> 8),1));
          }
        }
      }
    }
  }
  FUN_140ce6870(param_1);
  return;
}



// FUNCTION 140d038c0 FUN_140d038c0 body=164 status=ok
// SIG undefined FUN_140d038c0(void)

void FUN_140d038c0(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_141477a30();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140d0390d;
  }
  param_2 = 0;
LAB_140d0390d:
  *(longlong *)(param_1 + 0x20) = param_2;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    DAT_14686e300 = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x338) = 1;
    FUN_140d0bcd0(param_1 + -0x988,*(undefined8 *)(param_1 + 0x18));
    FUN_142cccfb0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18));
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x338) = 0;
    DAT_14686e300 = 0;
  }
  return;
}



// FUNCTION 140d03970 FUN_140d03970 body=618 status=ok
// SIG undefined FUN_140d03970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d03970(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar3 = FUN_142dd0650(param_2);
  iVar1 = *(int *)(lVar3 + 8);
  if ((bool)*(char *)((longlong)param_1 + 0x17fc) != 0 < iVar1) {
    *(bool *)((longlong)param_1 + 0x17fc) = 0 < iVar1;
    if (iVar1 < 1) {
      lVar3 = param_1[0x2f9];
      local_b8 = FUN_140d02c40;
      uStack_b0 = 0;
      uVar4 = AActor::GetWorldTimerManager(param_1);
      plVar5 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar5 != (longlong *)0x0) {
        *plVar5 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar5 + 1,param_1);
        *(undefined4 *)(plVar5 + 2) = (undefined4)local_b8;
        *(undefined4 *)((longlong)plVar5 + 0x14) = local_b8._4_4_;
        *(undefined4 *)(plVar5 + 3) = uStack_b0;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_ac;
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
      local_c0 = 0xbf800000;
      local_c8 = 0;
      local_90 = 0;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      local_88 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar4,param_1 + 0x2fc,&local_a8,(int)lVar3);
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
        lVar3 = FMemory::Realloc(plVar5,0,0);
        if (lVar3 != 0) {
          FMemory::Free(lVar3);
        }
      }
    }
    else if (param_1[0x2fc] != 0) {
      uVar4 = AActor::GetWorldTimerManager(param_1);
      FUN_142880530(uVar4,param_1 + 0x2fc);
      param_1[0x2fc] = 0;
    }
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar3 = *(longlong *)(lVar3 + 0x148);
  if (lVar3 != 0) {
    lVar6 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140d03bb8;
  }
  lVar3 = 0;
LAB_140d03bb8:
  FUN_140cc89e0(lVar3);
  return;
}



// FUNCTION 140d03be0 FUN_140d03be0 body=15 status=ok
// SIG undefined FUN_140d03be0(void)

void FUN_140d03be0(longlong param_1,int param_2)

{
  FUN_140e6f470(param_1 + 0x1b10,(longlong)param_2);
  return;
}



// FUNCTION 140d03bf0 FUN_140d03bf0 body=142 status=ok
// SIG undefined FUN_140d03bf0(void)

void FUN_140d03bf0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_58 [40];
  undefined1 local_30 [40];
  
  uVar1 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_58,param_3);
  uVar2 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_30,param_2);
  FUN_140ced640(param_1 + 0x1168,uVar2,uVar1);
  if (*(char *)(param_1 + 0xa4e) == '\0') {
    *(undefined1 *)(param_1 + 0xa4c) = 1;
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_3 + 0x18) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d03c80 FUN_140d03c80 body=159 status=ok
// SIG undefined FUN_140d03c80(void)

void FUN_140d03c80(longlong param_1,char param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_2 != '\0') {
    if (*(longlong *)(param_1 + 0xc90) != 0) {
      FUN_140e46d60();
    }
    if (*(longlong *)(param_1 + 0xc70) != 0) {
      FUN_140e75cc0();
    }
  }
  FUN_140cedc20(param_1,0);
  lVar1 = *(longlong *)(param_1 + 0x850);
  if (lVar1 != 0) {
    lVar3 = AGTutorialStepVideo::GetPrivateStaticClass();
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
      FUN_140a90e80(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 140d03d20 FUN_140d03d20 body=8 status=ok
// SIG undefined FUN_140d03d20(void)

void FUN_140d03d20(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) & 0xdf;
  return;
}



// FUNCTION 140d03d30 FUN_140d03d30 body=8 status=ok
// SIG undefined FUN_140d03d30(void)

void FUN_140d03d30(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) | 0x20;
  return;
}



// FUNCTION 140d03d40 FUN_140d03d40 body=8 status=ok
// SIG undefined FUN_140d03d40(void)

void FUN_140d03d40(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) & 0x7f;
  return;
}



// FUNCTION 140d03d50 FUN_140d03d50 body=8 status=ok
// SIG undefined FUN_140d03d50(void)

void FUN_140d03d50(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) | 0x80;
  return;
}



// FUNCTION 140d03d60 FUN_140d03d60 body=8 status=ok
// SIG undefined FUN_140d03d60(void)

void FUN_140d03d60(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) & 0xfb;
  return;
}



// FUNCTION 140d03d70 FUN_140d03d70 body=8 status=ok
// SIG undefined FUN_140d03d70(void)

void FUN_140d03d70(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) | 4;
  return;
}



// FUNCTION 140d03d80 FUN_140d03d80 body=85 status=ok
// SIG undefined FUN_140d03d80(void)

void FUN_140d03d80(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x1430) != 0) {
    cVar1 = FUN_140cfdb70();
    if ((cVar1 != '\0') && (param_2 != *(longlong *)(param_1 + 0xd38))) {
      FUN_142fccb00(*(undefined8 *)(param_1 + 0x1430),*(undefined8 *)(param_1 + 0xd38),0xbf800000,0)
      ;
    }
  }
  return;
}



// FUNCTION 140d03de0 FUN_140d03de0 body=15 status=ok
// SIG undefined FUN_140d03de0(void)

void FUN_140d03de0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140e875d0(param_1 + 0x1b10,param_3);
  return;
}



// FUNCTION 140d03df0 FUN_140d03df0 body=468 status=ok
// SIG undefined FUN_140d03df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d03df0(longlong param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
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
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  fVar1 = *(float *)(param_1 + 0xd30);
  if (fVar1 <= 0.0) {
    if (-1e-08 < fVar1) {
      FUN_140d086a0();
    }
  }
  else {
    uStack_a0 = 0;
    local_a8 = FUN_140d086a0;
    uVar2 = AActor::GetWorldTimerManager();
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar4;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar2,param_1 + 0xf18,&local_98,fVar1);
    if (local_38 != 0) {
      plVar5 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar5 = local_48;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar4 = FMemory::Realloc(plVar3,0,0);
      if (lVar4 != 0) {
        FMemory::Free(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 140d03fd0 FUN_140d03fd0 body=355 status=ok
// SIG undefined FUN_140d03fd0(void)

void FUN_140d03fd0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined8 local_res8;
  undefined8 local_res18;
  undefined2 *local_18;
  int local_10;
  
  lVar4 = param_1[0x18d];
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 == 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if ((*(longlong *)(lVar3 + 0x30) != 0) &&
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0xc0), lVar3 != 0)) {
    local_res18 = *(undefined8 *)(lVar3 + 0x18);
    FName::ToString(&local_res18,&local_18);
    puVar5 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar5 = local_18;
    }
    FName::FName(&local_res8,puVar5,1);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar2 = FUN_142235230(param_1);
    if (iVar2 != 3) {
      FUN_140e1c770(lVar4,local_res8,1);
      iVar2 = FUN_142235230(param_1);
      if (iVar2 != 0) {
        FUN_141305e20(lVar4,local_res8);
      }
    }
  }
  lVar4 = (**(code **)(param_1[0x130] + 0x10))();
  if (lVar4 != 0) {
    lVar3 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140d040e9;
  }
  lVar4 = 0;
LAB_140d040e9:
  lVar3 = (**(code **)(*param_1 + 0xfa8))(param_1);
  if (((lVar3 != 0) && (lVar4 != 0)) && (param_1[0x93] != 0)) {
    FUN_142ee8830(lVar3);
    FUN_142f02a50(lVar3,*(undefined8 *)(lVar4 + 0x1108));
  }
  return;
}



// FUNCTION 140d04140 FUN_140d04140 body=150 status=ok
// SIG undefined FUN_140d04140(void)

void FUN_140d04140(longlong param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x1a18) != 0) {
    pwVar3 = _guard_xfg_dispatch_icall_nop
                       (L"&AOakPlayerController::OnCinematicStopped_RetryFadeIn",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res8,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove
              (*(longlong *)(param_1 + 0x1a18) + 0x398,param_1,local_res8);
    *(undefined8 *)(param_1 + 0x1a18) = 0;
  }
  FUN_14145dba0(param_1);
  return;
}



// FUNCTION 140d041e0 FUN_140d041e0 body=49 status=ok
// SIG undefined FUN_140d041e0(void)

void FUN_140d041e0(longlong *param_1)

{
  undefined1 uVar1;
  
  if ((char)param_1[0x25] != '\x03') {
    uVar1 = (**(code **)(*param_1 + 0x820))();
    FUN_141460d00(param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 140d04220 FUN_140d04220 body=734 status=ok
// SIG undefined FUN_140d04220(void)

void FUN_140d04220(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (2 < *(byte *)(param_1 + 0x25)) {
    return;
  }
  cVar2 = FUN_140cfdb70();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x768))(param_1);
    if ((cVar2 != '\0') && (param_1[0x151] != 0)) {
      FUN_142ee4370(param_1);
      FUN_142f0e9c0(param_1[0x151],0);
    }
    if (param_1[0x286] != 0) {
      FUN_142fcc0b0(param_1[0x286],param_1[0x1a7],0xbf800000,0);
    }
    lVar4 = param_1[0x1a9];
    if (lVar4 == 0) {
      return;
    }
    lVar7 = FUN_142956f50();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar7 = 0;
    if (bVar1) {
      lVar7 = lVar4;
    }
    FUN_142712050(param_1,lVar7);
    return;
  }
  if (param_1[0x286] != 0) {
    FUN_142fccb00(param_1[0x286],param_1[0x1a7],0xbf800000,0);
  }
  FUN_140cee250(param_1);
  lVar4 = param_1[0x1a9];
  lVar7 = 0;
  if (lVar4 != 0) {
    lVar3 = FUN_142956f50();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    lVar3 = lVar7;
    if (bVar1) {
      lVar3 = lVar4;
    }
    FUN_142713b70(param_1,lVar3);
  }
  cVar2 = (**(code **)(*param_1 + 0x768))(param_1);
  if (cVar2 == '\0') {
    return;
  }
  if (param_1[0x151] == 0) {
    return;
  }
  FUN_142ee4370(param_1);
  lVar4 = FUN_1426e2bc0(param_1[0xa5]);
  if (lVar4 == 0) {
LAB_140d04338:
    lVar4 = lVar7;
  }
  else {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140d04338;
  }
  param_1[0x15d] = lVar4;
  if (lVar4 != 0) goto LAB_140d043e1;
  plVar5 = (longlong *)FUN_1426e2bc0(param_1[0xa5]);
  if (plVar5 == (longlong *)0x0) {
LAB_140d043d7:
    lVar4 = lVar7;
  }
  else {
    lVar4 = FUN_1413ffe00();
    if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((!bVar1) || (lVar4 = (**(code **)(*plVar5 + 0x680))(plVar5), lVar4 == 0))
    goto LAB_140d043d7;
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140d043d7;
  }
  param_1[0x15d] = lVar4;
LAB_140d043e1:
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar4 = UWorld::GetGameState<APVPGameState>(uVar6);
    if (lVar4 != 0) {
      FUN_142f0e9c0(param_1[0x151],*(undefined8 *)(lVar4 + 0xa78));
      FUN_142f02570(param_1,*(undefined8 *)(lVar4 + 0xa80),0);
      return;
    }
  }
  return;
}



// FUNCTION 140d04500 FUN_140d04500 body=112 status=ok
// SIG undefined FUN_140d04500(void)

void FUN_140d04500(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x19a0);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x19a0);
    FUN_14145fc40(param_1,uVar1,*(undefined4 *)(param_1 + 0x19b0),*(undefined4 *)(param_1 + 0x19b4))
    ;
  }
  if (*(longlong *)(param_1 + 0x1428) != 0) {
    FUN_1411e79a0(*(longlong *)(param_1 + 0x1428),*(undefined8 *)(param_1 + 0x19a8));
    *(undefined8 *)(param_1 + 0x19a8) = 0;
  }
  return;
}



// FUNCTION 140d04570 FUN_140d04570 body=105 status=ok
// SIG undefined FUN_140d04570(void)

void FUN_140d04570(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((int)param_1[0x194] == 2) {
LAB_140d045bf:
    FUN_140cf81c0(param_1);
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar1 = UWorld::GetGameState<APVPGameState>(uVar2);
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x6c0) == '\0') {
        return;
      }
      *(undefined4 *)(param_1 + 0x194) = 1;
      goto LAB_140d045bf;
    }
  }
  *(undefined4 *)(param_1 + 0x194) = 1;
  return;
}



// FUNCTION 140d045e0 FUN_140d045e0 body=8 status=ok
// SIG undefined FUN_140d045e0(void)

void FUN_140d045e0(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) & 0xbf;
  return;
}



// FUNCTION 140d045f0 FUN_140d045f0 body=8 status=ok
// SIG undefined FUN_140d045f0(void)

void FUN_140d045f0(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) | 0x40;
  return;
}



// FUNCTION 140d04600 FUN_140d04600 body=401 status=ok
// SIG undefined FUN_140d04600(void)

void FUN_140d04600(longlong param_1,longlong param_2,undefined1 *param_3,undefined8 *param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((*(longlong *)(param_1 + 0xcc0) != 0) && (*(longlong *)(param_1 + 0xcc0) != param_2)) {
    UTTLAnimalAnimInstance::AnimNotify_Attack_End();
  }
  if (param_2 != 0) {
    local_88 = *param_4;
    local_80 = *(undefined4 *)(param_4 + 1);
    FUN_142def170(param_2,param_1,param_3[1],&local_88,param_5);
  }
  *(longlong *)(param_1 + 0xcc0) = param_2;
  FUN_140ce30d0(param_1 + 0xcc8,param_3);
  FUN_142de2fd0(&local_70);
  local_70 = *param_3;
  local_6f = param_3[1];
  local_6e = param_3[2];
  local_6d = param_3[3];
  local_6c = param_3[4];
  local_6b = param_3[5];
  local_6a = param_3[6];
  local_78 = param_2;
  FText::operator=(local_68,param_3 + 8);
  local_50 = *(undefined8 *)(param_3 + 0x20);
  local_30 = *param_4;
  local_48 = *(undefined8 *)(param_3 + 0x28);
  local_40 = *(undefined8 *)(param_3 + 0x30);
  local_38 = *(undefined8 *)(param_3 + 0x38);
  local_28 = *(undefined4 *)(param_4 + 1);
  local_24 = param_5;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xaf8,&local_78);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  return;
}



// FUNCTION 140d047a0 FUN_140d047a0 body=44 status=ok
// SIG undefined FUN_140d047a0(void)

void FUN_140d047a0(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(param_1 + 0xd08) = *param_3;
  *(undefined4 *)(param_1 + 0xd10) = uVar1;
  if (*(longlong *)(param_1 + 0xcc0) != 0) {
    FUN_142def0b0(*(longlong *)(param_1 + 0xcc0),(undefined8 *)(param_1 + 0xd08),param_4);
    return;
  }
  return;
}



// FUNCTION 140d047d0 FUN_140d047d0 body=235 status=ok
// SIG undefined FUN_140d047d0(void)

void FUN_140d047d0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_142de2fd0(&local_50);
  local_50 = *param_3;
  local_4f = param_3[1];
  local_4e = param_3[2];
  local_4d = param_3[3];
  local_4c = param_3[4];
  local_4b = param_3[5];
  local_4a = param_3[6];
  local_58 = param_2;
  FText::operator=(local_48,param_3 + 8);
  local_30 = *(undefined8 *)(param_3 + 0x20);
  local_28 = *(undefined8 *)(param_3 + 0x28);
  local_20 = *(undefined8 *)(param_3 + 0x30);
  local_18 = *(undefined8 *)(param_3 + 0x38);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xb08,&local_58);
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
  return;
}



// FUNCTION 140d048c0 FUN_140d048c0 body=418 status=ok
// SIG undefined FUN_140d048c0(void)

void FUN_140d048c0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_88 [32];
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  
  *(undefined1 *)(param_1 + 0xa51) = 1;
  if (param_2 == 0) {
    return;
  }
  lVar4 = *(longlong *)(param_2 + 0xf0);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = lVar4 + 0x78;
  lVar3 = FWeakObjectPtr::Get(lVar5);
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar4 + 0x80)) || (*(longlong *)(lVar4 + 0x88) == 0))
    goto LAB_140d049c5;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar4 + 0x80) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar5);
    if (lVar3 == 0) goto LAB_140d049c5;
  }
  lVar4 = FUN_142e1f230();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1414601b0(param_1,lVar3,1);
  }
LAB_140d049c5:
  if (*(longlong *)(param_2 + 0x150) != 0) {
    _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
    cVar2 = FUN_140e4a730(param_2,local_88);
    if (cVar2 != '\0') {
      FUN_140ced8a0(param_1,*(undefined8 *)(param_2 + 0x150),local_88);
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
    if (local_58 != 0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140d04a70 FUN_140d04a70 body=86 status=ok
// SIG undefined FUN_140d04a70(void)

void FUN_140d04a70(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) & 0xfd;
  if ((*(longlong *)(param_1 + 0x978) != 0) && (*(longlong *)(param_1 + 0x1848) != 0)) {
    FUN_142d9dd60(*(longlong *)(param_1 + 0x978),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x1848) + 0x6f0),0,0);
  }
  *(undefined8 *)(param_1 + 0x1848) = 0;
  return;
}



// FUNCTION 140d04ad0 FUN_140d04ad0 body=259 status=ok
// SIG undefined FUN_140d04ad0(void)

void FUN_140d04ad0(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_38;
  byte local_30;
  byte local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) | 2;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x978) != 0)) {
    local_2f = local_2f | 1;
    local_2c = 0x41800000;
    local_24 = 0x42c80000;
    local_28 = 0x41100000;
    local_18 = 0;
    local_10 = 0;
    local_20 = 5;
    local_30 = 0x2e;
    local_38 = param_2;
    lVar3 = FUN_1422312c0();
    if (lVar3 != 0) {
      lVar4 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = FUN_140bca8a0(lVar3);
        if (cVar2 != '\0') {
          local_30 = local_30 & 0xfb;
        }
      }
    }
    plVar5 = (longlong *)FUN_142db7ff0(*(undefined8 *)(param_1 + 0x978),&local_38);
    *(longlong **)(param_1 + 0x1848) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x350))(plVar5,0,0,0);
    }
  }
  return;
}



// FUNCTION 140d04be0 FUN_140d04be0 body=17 status=ok
// SIG undefined FUN_140d04be0(void)

void FUN_140d04be0(longlong param_1)

{
  if (*(char *)(param_1 + 0xa4e) == '\0') {
    *(undefined1 *)(param_1 + 0xa4c) = 1;
  }
  return;
}



// FUNCTION 140d04c00 FUN_140d04c00 body=755 status=ok
// SIG undefined FUN_140d04c00(void)

void FUN_140d04c00(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 local_res20 [8];
  longlong local_68;
  longlong *local_60;
  undefined8 *local_58;
  int local_50;
  longlong local_48;
  longlong *local_40;
  
  lVar7 = FUN_142b45e90();
  FUN_140d3ccb0(*(undefined8 *)(lVar7 + 0x18),&local_48);
  lVar7 = local_48;
  if (local_48 == 0) goto LAB_140d04ea2;
  lVar3 = *(longlong *)(param_1 + 0xe78);
  plVar14 = (longlong *)(local_48 + 0x28);
  iVar10 = 0;
  if (0 < *(int *)(local_48 + 0x30)) {
    lVar13 = 0;
    do {
      plVar11 = (longlong *)(*plVar14 + lVar13);
      if ((((int)plVar11[1] != 0) && (plVar8 = (longlong *)*plVar11, plVar8 != (longlong *)0x0)) &&
         (plVar8 = (longlong *)(**(code **)(*plVar8 + 0x20))(plVar8,local_res20), *plVar8 == lVar3))
      {
        if (((int)plVar11[1] != 0) && (plVar8 = (longlong *)*plVar11, plVar8 != (longlong *)0x0)) {
          (**(code **)(*plVar8 + 0x28))(plVar8,0);
          if (*plVar11 != 0) {
            lVar7 = FMemory::Realloc(*plVar11,0,0);
            *plVar11 = lVar7;
          }
          *(undefined4 *)(plVar11 + 1) = 0;
        }
        break;
      }
      iVar10 = iVar10 + 1;
      lVar13 = lVar13 + 0x10;
    } while (iVar10 < *(int *)(lVar7 + 0x30));
  }
  FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,0);
  *(undefined8 *)(param_1 + 0xe78) = 0;
  if (*param_2 == 0) goto LAB_140d04ea2;
  lVar7 = FUN_140cff230(param_1);
  if (lVar7 != 0) {
    local_68 = *param_2;
    bVar4 = false;
    local_60 = (longlong *)param_2[1];
    if (local_60 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_60 + 1) = (int)local_60[1] + 1;
      UNLOCK();
    }
    FUN_142b48dd0(local_48,&local_58,&local_68);
    plVar14 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_60 + 1;
      lVar3 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar10 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*plVar14 + 8))(plVar14,1);
        }
      }
    }
    if (local_58 == local_58 + (longlong)local_50 * 0x12) {
LAB_140d04e49:
      cVar5 = FUN_140d00e50(param_1);
      if (cVar5 != '\0') goto LAB_140d04e69;
      uVar9 = 0;
    }
    else {
      plVar14 = (longlong *)(lVar7 + 0x3b0);
      plVar11 = (longlong *)(lVar7 + 0x3c0);
      puVar12 = local_58 + 1;
      do {
        cVar5 = TArray<FString,FDefaultAllocator>::Contains<FString>(plVar14,puVar12);
        cVar6 = TArray<FString,FDefaultAllocator>::Contains<FString>(plVar11,puVar12);
        if ((cVar5 == '\0') || (cVar6 != '\0')) {
          iVar10 = *(int *)(lVar7 + 0x3b8);
          bVar4 = true;
          *(int *)(lVar7 + 0x3b8) = iVar10 + 1;
          if (*(int *)(lVar7 + 0x3bc) < iVar10 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar10);
          }
          FString::FString((longlong)iVar10 * 0x10 + *plVar14,puVar12);
          iVar10 = *(int *)(lVar7 + 0x3c8);
          *(int *)(lVar7 + 0x3c8) = iVar10 + 1;
          if (*(int *)(lVar7 + 0x3cc) < iVar10 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar10);
          }
          FString::FString((longlong)iVar10 * 0x10 + *plVar11,puVar12);
        }
        puVar2 = puVar12 + 0x11;
        puVar12 = puVar12 + 0x12;
      } while (puVar2 != local_58 + (longlong)local_50 * 0x12);
      if (!bVar4) goto LAB_140d04e49;
LAB_140d04e69:
      uVar9 = 1;
    }
    FUN_140d133d0(param_1,uVar9);
    FUN_140ce1bb0(&local_58);
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0xbf8);
LAB_140d04ea2:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_40 + 1;
    lVar7 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      iVar10 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140d04f00 FUN_140d04f00 body=120 status=ok
// SIG undefined FUN_140d04f00(void)

void FUN_140d04f00(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && (lVar1 = *(longlong *)(param_1 + 0x848), lVar1 != 0)
     ) {
    lVar3 = FUN_1413f82e0();
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
      FUN_140c5e130(lVar1,param_2,DAT_14686e010);
    }
  }
  return;
}



// FUNCTION 140d04f80 FUN_140d04f80 body=830 status=ok
// SIG undefined FUN_140d04f80(void)

void FUN_140d04f80(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_60;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  plVar10 = (longlong *)0x0;
  if ((char)param_1[0x25] == '\x03') {
    if ((param_1[0x135] == 0) && (plVar11 = (longlong *)param_1[0xa1], plVar11 != (longlong *)0x0))
    {
      lVar7 = FUN_1429c30a0();
      if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar7 = (**(code **)(*plVar11 + 0x280))(plVar11);
        if (lVar7 != 0) {
          plVar11 = (longlong *)plVar11[0x32e];
        }
        lVar7 = FUN_1425b9f20(plVar11,5,1,0xffffffff);
        param_1[0x135] = lVar7;
        local_40 = 0;
        local_48 = param_1;
        uVar8 = UDamageableInterface::GetPrivateStaticClass();
        local_40 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar8);
        FUN_142cd0120(param_1[0x135],&local_48);
      }
    }
    lVar7 = FUN_1422312c0(param_1);
    if (lVar7 != 0) {
      lVar9 = FUN_142e4e4a0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        FUN_142d5e700(lVar7,param_1);
      }
    }
    cVar6 = (**(code **)(*param_1 + 0x768))(param_1);
    if ((cVar6 == '\0') && (lVar7 = FUN_1422312c0(param_1), lVar7 != 0)) {
      lVar9 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        lVar9 = param_1[0x8c];
        if (lVar9 == 0) {
          bVar5 = false;
          bVar4 = true;
          local_60 = (longlong *)0x0;
          plVar11 = plVar10;
        }
        else {
          plVar11 = *(longlong **)(lVar9 + 0x4b8);
          bVar5 = true;
          bVar4 = false;
          plVar10 = *(longlong **)(lVar9 + 0x4c0);
          local_50 = plVar10;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
        }
        if ((bVar4) && (local_60 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_60 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*local_60 + 8))(local_60,1);
            }
          }
        }
        if ((bVar5) && (local_50 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar9 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar9 == 1) {
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
        if (plVar11 != (longlong *)0x0) {
          local_78 = SUB84(plVar11,0);
          uStack_74 = (undefined4)((ulonglong)plVar11 >> 0x20);
          uStack_70 = SUB84(plVar10,0);
          uStack_6c = (undefined4)((ulonglong)plVar10 >> 0x20);
          local_38 = local_78;
          uStack_34 = uStack_74;
          uStack_30 = uStack_70;
          uStack_2c = uStack_6c;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          FUN_140bd86d0(lVar7,&local_38);
          plVar11 = (longlong *)CONCAT44(uStack_2c,uStack_30);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar11 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11,1);
              }
            }
          }
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar10 + 1;
          lVar7 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar2 = (int *)((longlong)plVar10 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10,1);
            }
          }
        }
      }
    }
  }
  FUN_14145df30(param_1);
  return;
}



// FUNCTION 140d052c0 FUN_140d052c0 body=340 status=ok
// SIG undefined FUN_140d052c0(void)

void FUN_140d052c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *local_20;
  
  lVar9 = 0;
  lVar5 = (**(code **)(*param_1 + 0x148))();
  lVar7 = lVar9;
  if (lVar5 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar7 = UWorld::GetGameState<APVPGameState>(uVar6);
  }
  lVar5 = FUN_1422312c0(param_1);
  if (lVar5 == 0) {
LAB_140d05390:
    lVar5 = 0;
  }
  else {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140d05390;
    if ((lVar7 != 0) && (lVar7 = *(longlong *)(lVar7 + 0x558), lVar7 != 0)) {
      lVar8 = *(longlong *)(lVar7 + 0x4b8);
      lVar9 = 1;
      local_20 = *(longlong **)(lVar7 + 0x4c0);
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      if (*param_2 == lVar8) {
        bVar4 = true;
        goto LAB_140d05396;
      }
    }
  }
  bVar4 = false;
LAB_140d05396:
  if ((lVar9 != 0) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
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
  if (bVar4) {
    FUN_140cf81c0(param_1);
    FUN_140483870(*(longlong *)(lVar5 + 0x478) + 0x1e0,param_1);
  }
  return;
}



// FUNCTION 140d05420 FUN_140d05420 body=235 status=ok
// SIG undefined FUN_140d05420(void)

void FUN_140d05420(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && (lVar4 = param_1[0x109], lVar4 != 0)) {
    lVar3 = FUN_1413f82e0();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (lVar4 = (**(code **)(*(longlong *)(lVar4 + 0xd80) + 0x18))(), lVar4 != 0)) &&
       (*(char *)(lVar4 + 0x368) == '\0')) {
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if (*(longlong *)(DAT_146b33f38 + 0x58) == 0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = *(float *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x388);
      }
      if (*(float *)(lVar2 + 0x790) - *(float *)(param_1 + 0x29d) < fVar5) {
        return;
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0xa4e) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa4c) = 1;
  }
  return;
}



// FUNCTION 140d05510 FUN_140d05510 body=457 status=ok
// SIG undefined FUN_140d05510(void)

void FUN_140d05510(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  longlong param_5)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined2 *puVar11;
  char local_28 [8];
  longlong local_20;
  longlong *local_18;
  
  FUN_142dcf3a0(param_1,&local_20);
  if (local_20 != 0) {
    cVar3 = (*(code *)**(undefined8 **)*param_2)();
    if (cVar3 != '\0') {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar7 = (longlong *)FUN_140d3a420(uVar6);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x128))(plVar7,param_1 + 0x24b);
      }
      if ((param_4 == '\0') || (param_5 == 0)) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      *(char *)((longlong)param_1 + 0xa4f) = cVar3;
      if (cVar3 == '\0') {
        param_5 = FUN_140cfcaa0(param_1);
      }
      *(undefined1 *)((longlong)param_1 + 0xa4d) = 0;
      if (param_5 != 0) {
        if (*(int *)(param_3 + 1) == 0) {
          puVar11 = &DAT_143f3eda8;
        }
        else {
          puVar11 = (undefined2 *)*param_3;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,PTR_DAT_14629a5a8);
        if ((iVar5 == 0) && (param_1[0x134] != 0)) {
          cVar4 = FWebMMovieStreamer::IsLastMovieInPlaylist();
          if (cVar4 == '\0') {
            uVar10 = *(undefined4 *)(param_1[0x134] + 0x28);
          }
          else {
            uVar10 = 1;
          }
          *(undefined4 *)(param_5 + 0x28) = uVar10;
        }
        FUN_140ce7700(param_1,param_5,1);
        lVar8 = FUN_1422312c0(param_1);
        if (lVar8 != 0) {
          lVar9 = FUN_14141f270();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            FUN_140bce120(lVar8);
          }
        }
      }
      if (param_1[0x132] != 0) {
        local_28[0] = cVar3;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1[0x132] + 0x10f0,local_28);
      }
    }
  }
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_18 + 1;
    lVar8 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar1 = (int *)((longlong)local_18 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_18 + 8))(local_18,1);
      }
    }
  }
  return;
}



// FUNCTION 140d056e0 FUN_140d056e0 body=490 status=ok
// SIG undefined FUN_140d056e0(void)

void FUN_140d056e0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  if (((param_1[0x152] != 0) && (param_3 != 0)) && (lVar7 = FUN_14270bb10(), param_3 == lVar7)) {
    FUN_142ee3cb0(param_1[0x152]);
    return;
  }
  lVar7 = FUN_1422312c0(param_1);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (cVar6 = FUN_140bca8a0(lVar7), cVar6 == '\0')) &&
       (cVar6 = FUN_140d01b90(), cVar6 == '\0')) {
      if (param_1[0x152] == 0) {
        lVar7 = 0;
        bVar2 = false;
      }
      else {
        lVar8 = FUN_140cdda60();
        lVar7 = param_1[0x152];
        bVar2 = false;
        if (lVar8 != 0) {
          bVar2 = true;
        }
      }
      if (lVar7 != 0) {
        bVar5 = false;
        bVar4 = false;
        iVar10 = 0;
        if (0 < *(int *)(lVar7 + 0x48)) {
          lVar8 = 0;
          do {
            if ((lVar8 < 0) || (*(int *)(lVar7 + 0x48) <= iVar10)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (((bVar3) &&
                (plVar1 = *(longlong **)(*(longlong *)(lVar7 + 0x40) + lVar8 * 8),
                plVar1 != (longlong *)0x0)) &&
               (lVar7 = (**(code **)(*plVar1 + 0x278))(), lVar7 != 0)) {
              lVar9 = UEditableTextBoxWidgetStyle::StaticClass();
              if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if ((bVar3) && (cVar6 = FUN_1410c59d0(), bVar4 = bVar5, cVar6 == '\0')) {
                bVar5 = true;
                bVar4 = true;
              }
            }
            lVar7 = param_1[0x152];
            iVar10 = iVar10 + 1;
            lVar8 = lVar8 + 1;
          } while (iVar10 < *(int *)(lVar7 + 0x48));
          if (bVar4) {
            return;
          }
        }
      }
      FUN_14145d7f0(param_1);
      if (bVar2) {
        if (param_1[0x152] != 0) {
          FUN_142f13950(param_1[0x152],0);
        }
        (**(code **)(*param_1 + 0xf90))(param_1,0);
      }
    }
  }
  return;
}



// FUNCTION 140d058d0 FUN_140d058d0 body=104 status=ok
// SIG undefined FUN_140d058d0(void)

void FUN_140d058d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0xa4e) == '\0') {
    *(undefined1 *)(param_1 + 0xa4c) = 1;
  }
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
    lVar3 = FUN_14141f270();
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
      thunk_FUN_140bf3c30(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140d05940 FUN_140d05940 body=768 status=ok
// SIG undefined FUN_140d05940(void)

void FUN_140d05940(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68 [3];
  longlong *local_50;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  plVar9 = (longlong *)0x0;
  lVar7 = FUN_14270bb10();
  lVar8 = FUN_1422312c0(param_1);
  if (lVar7 == 0) {
    if (lVar8 != 0) {
      lVar7 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar7 = *(longlong *)(param_1 + 0x460);
        if (lVar7 == 0) {
          bVar6 = false;
          bVar5 = true;
          local_50 = (longlong *)0x0;
          plVar10 = plVar9;
        }
        else {
          plVar10 = *(longlong **)(lVar7 + 0x4b8);
          bVar6 = true;
          bVar5 = false;
          plVar9 = *(longlong **)(lVar7 + 0x4c0);
          local_40 = plVar9;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
        }
        plVar3 = local_50;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
        }
        if ((bVar5) && (local_50 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_50 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_50 + 8))(local_50,1);
            }
          }
        }
        plVar3 = local_40;
        if ((bVar6) && (local_40 != (longlong *)0x0)) {
          LOCK();
          plVar1 = local_40 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*local_40 + 8))(local_40,1);
            }
          }
        }
        if (plVar10 != (longlong *)0x0) {
          local_78 = SUB84(plVar10,0);
          uStack_74 = (undefined4)((ulonglong)plVar10 >> 0x20);
          uStack_70 = SUB84(plVar9,0);
          uStack_6c = (undefined4)((ulonglong)plVar9 >> 0x20);
          local_38 = local_78;
          uStack_34 = uStack_74;
          uStack_30 = uStack_70;
          uStack_2c = uStack_6c;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
            UNLOCK();
          }
          FUN_140bd8880(lVar8,&local_38);
          plVar10 = (longlong *)CONCAT44(uStack_2c,uStack_30);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar10 + 1;
            lVar7 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              iVar4 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar10 + 8))(plVar10,1);
              }
            }
          }
        }
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar9 + 1;
          lVar7 = *plVar10;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            iVar4 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar9 + 8))(plVar9,1);
            }
          }
        }
      }
    }
    goto LAB_140d05bd1;
  }
  if (lVar8 == 0) {
LAB_140d059cc:
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_140d0dc60(param_1,local_68);
    if (local_68[0] != 0) {
      FMemory::Free();
    }
  }
  else {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d059cc;
    FUN_140be3520(lVar8);
    FUN_140be97d0(lVar8);
  }
  if (*(longlong *)(param_1 + 0xc80) != 0) {
    AK::MemoryMgr::StartProfileThreadUsage((long)*(longlong *)(param_1 + 0xc80));
  }
LAB_140d05bd1:
  lVar7 = *(longlong *)(param_1 + 0x990);
  if (lVar7 != 0) {
    lVar8 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      FUN_141400cf0(lVar7);
    }
  }
  FUN_142711430(param_1,param_2);
  return;
}



// FUNCTION 140d05c40 FUN_140d05c40 body=31 status=ok
// SIG undefined FUN_140d05c40(void)

void FUN_140d05c40(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff1b0();
  if (lVar1 != 0) {
    FUN_140c68260(lVar1);
    return;
  }
  return;
}



// FUNCTION 140d05c60 FUN_140d05c60 body=91 status=ok
// SIG undefined FUN_140d05c60(void)

void FUN_140d05c60(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x848);
  if (lVar1 != 0) {
    lVar3 = FUN_1413ffe00();
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
      FUN_140e1eea0(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140d05cc0 FUN_140d05cc0 body=91 status=ok
// SIG undefined FUN_140d05cc0(void)

void FUN_140d05cc0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x848);
  if (lVar1 != 0) {
    lVar3 = FUN_1413ffe00();
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
      FUN_140e1de10(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 140d05d20 FUN_140d05d20 body=1292 status=ok
// SIG undefined FUN_140d05d20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d05d20(longlong *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong *local_120;
  undefined4 local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 local_f8 [48];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  plVar11 = (longlong *)0x0;
  local_118 = 0;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  plVar13 = plVar11;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    plVar13 = *(longlong **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x550);
  }
  lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar8 == 0) || (plVar14 = *(longlong **)(lVar8 + 400), plVar14 == (longlong *)0x0)) {
LAB_140d05ddf:
    plVar14 = plVar11;
  }
  else {
    lVar9 = FUN_14141f270();
    if ((*(int *)(plVar14[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar14[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140d05ddf;
  }
  if ((plVar13 == (longlong *)0x0) || (plVar14 == (longlong *)0x0)) goto LAB_140d061b4;
  if (((char)plVar13[10] != '\0') &&
     ((cVar6 = FUN_140bc2c90(plVar14), cVar6 == '\0' && (iVar7 = FUN_14046e5c0(plVar14), iVar7 == 1)
      ))) {
    if ((param_2 < 0) || (bVar3 = true, (int)plVar13[9] <= param_2)) {
      bVar3 = false;
    }
    if (bVar3) {
      *(int *)(param_1 + 0x2ff) = param_2;
      uVar2 = *(undefined4 *)((longlong)plVar13 + 0x54);
      local_138 = FUN_140d06230;
      uStack_130 = (longlong *)((ulonglong)uStack_130 & 0xffffffff00000000);
      uVar10 = AActor::GetWorldTimerManager(param_1);
      plVar11 = (longlong *)FMemory::Realloc(0,0x30);
      if (plVar11 != (longlong *)0x0) {
        *plVar11 = (longlong)&PTR_FUN_143f77b88;
        FWeakObjectPtr::operator=(plVar11 + 1,param_1);
        *(undefined4 *)(plVar11 + 2) = (undefined4)local_138;
        *(undefined4 *)((longlong)plVar11 + 0x14) = local_138._4_4_;
        *(undefined4 *)(plVar11 + 3) = (undefined4)uStack_130;
        *(undefined4 *)((longlong)plVar11 + 0x1c) = uStack_130._4_4_;
        lVar9 = FDelegateHandle::GenerateNewID();
        plVar11[5] = lVar9;
        *plVar11 = (longlong)&PTR_FUN_143f77bd0;
      }
      local_c8 = 0;
      local_c0 = 0;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x30))(plVar11,&local_c8);
      }
      FWeakObjectPtr::operator=(local_b8,0);
      local_150 = 0xbf800000;
      local_158 = 0;
      local_b0 = 0;
      local_78 = (longlong *)0x0;
      local_68 = 0;
      local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
      FUN_142880850(uVar10,param_1 + 0x2fe,&local_c8,uVar2);
      if (local_68 != 0) {
        plVar13 = local_98;
        if (local_78 != (longlong *)0x0) {
          plVar13 = local_78;
        }
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x10))(plVar13,0);
        }
      }
      if (local_78 != (longlong *)0x0) {
        FMemory::Free();
      }
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x28))(plVar11,0);
        lVar9 = FMemory::Realloc(plVar11,0,0);
        if (lVar9 != 0) {
          FMemory::Free(lVar9);
        }
      }
    }
    goto LAB_140d061b4;
  }
  if ((param_2 < 0) || ((int)plVar13[7] <= param_2)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) goto LAB_140d061b4;
  FUN_1411d2fe0(plVar14,param_1,*(undefined8 *)(plVar13[6] + (longlong)param_2 * 8));
  lVar9 = param_1[0xa1];
  if (lVar9 == 0) {
LAB_140d0602f:
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
    local_120 = (longlong *)0x0;
    local_148 = plVar11;
  }
  else {
    lVar12 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8)
        != lVar12 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140d0602f;
    bVar5 = true;
    bVar4 = true;
    bVar3 = false;
    lVar9 = FUN_142547b50(lVar9,local_f8);
    plVar11 = *(longlong **)(lVar9 + 0x10);
    local_148 = *(longlong **)(lVar9 + 8);
    uStack_130 = plVar11;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
  }
  plVar13 = local_120;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  uStack_140 = plVar11;
  if ((bVar3) && (local_120 != (longlong *)0x0)) {
    LOCK();
    plVar11 = local_120 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_120)(local_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*local_120 + 8))(local_120,1);
      }
    }
  }
  plVar11 = uStack_130;
  if ((bVar4) && (uStack_130 != (longlong *)0x0)) {
    LOCK();
    plVar13 = uStack_130 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*uStack_130)(uStack_130);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*uStack_130 + 8))(uStack_130,1);
      }
    }
  }
  if (bVar5) {
    FUN_1404bf980(local_f8);
  }
  if ((local_148 != (longlong *)0x0) &&
     (cVar6 = (**(code **)(*param_1 + 0x768))(param_1), cVar6 != '\0')) {
    local_108 = (undefined4)local_148;
    uStack_104 = local_148._4_4_;
    uStack_100 = (undefined4)uStack_140;
    uStack_fc = uStack_140._4_4_;
    if (uStack_140 != (longlong *)0x0) {
      LOCK();
      *(int *)(uStack_140 + 1) = (int)uStack_140[1] + 1;
      UNLOCK();
    }
    uVar10 = FUN_140bb7220(plVar14);
    FUN_140d6cde0(uVar10,&local_108);
    plVar11 = (longlong *)CONCAT44(uStack_fc,uStack_100);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar11 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
  }
  plVar11 = uStack_140;
  if (uStack_140 != (longlong *)0x0) {
    LOCK();
    plVar13 = uStack_140 + 1;
    lVar9 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*uStack_140)(uStack_140);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar7 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*uStack_140 + 8))(uStack_140,1);
      }
    }
  }
LAB_140d061b4:
  iVar7 = FUN_142235230(param_1);
  if ((((iVar7 != 3) && (cVar6 = (**(code **)(*param_1 + 0x768))(param_1), cVar6 != '\0')) &&
      (cVar6 = APlayerController::IsPrimaryPlayer(param_1), cVar6 != '\0')) &&
     ((lVar8 != 0 && (lVar8 = UWorld::GetGameState<APVPGameState>(lVar8), lVar8 != 0)))) {
    *(int *)(lVar8 + 0x74c) = param_2 + 1;
  }
  return;
}



// FUNCTION 140d06230 FUN_140d06230 body=902 status=ok
// SIG undefined FUN_140d06230(void)

void FUN_140d06230(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong local_res8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_70;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  plVar11 = (longlong *)0x0;
  local_res8 = local_res8 & 0xffffffff00000000;
  if (param_1[0x2fe] != 0) {
    local_res8 = param_1[0x2fe];
    uVar8 = AActor::GetWorldTimerManager();
    lVar9 = FTimerManager::FindTimer(uVar8,&local_res8,0);
    if ((lVar9 == 0) || (*(char *)(lVar9 + 1) == '\x02')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar8 = AActor::GetWorldTimerManager(param_1);
      FUN_142880530(uVar8,param_1 + 0x2fe);
      param_1[0x2fe] = 0;
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  plVar12 = plVar11;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    plVar12 = *(longlong **)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x550);
  }
  lVar9 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar9 == 0) || (plVar13 = *(longlong **)(lVar9 + 400), plVar13 == (longlong *)0x0)) {
LAB_140d0632c:
    plVar13 = plVar11;
  }
  else {
    lVar9 = FUN_14141f270();
    if ((*(int *)(plVar13[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar13[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_140d0632c;
  }
  if (plVar12 == (longlong *)0x0) {
    return;
  }
  if (plVar13 == (longlong *)0x0) {
    return;
  }
  SubCharacterCatapult::RestoreSnapshot
            (plVar13,param_1,*(undefined8 *)(plVar12[8] + (longlong)(int)param_1[0x2ff] * 8));
  lVar9 = param_1[0xa1];
  if (lVar9 != 0) {
    lVar10 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
      lVar9 = FUN_142547b50(lVar9,local_48);
      plVar11 = *(longlong **)(lVar9 + 0x10);
      plVar12 = *(longlong **)(lVar9 + 8);
      local_60 = plVar11;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
      }
      goto LAB_140d063e4;
    }
  }
  bVar6 = false;
  bVar5 = false;
  bVar4 = true;
  local_70 = (longlong *)0x0;
  plVar12 = plVar11;
LAB_140d063e4:
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  if ((bVar4) && (local_70 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if ((bVar5) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_60 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (bVar6) {
    local_48[0] = &PTR_FUN_143f740c8;
    if (local_30 != 0) {
      FMemory::Free();
    }
    local_48[0] = &PTR_FUN_143f73d18;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
  }
  if ((plVar12 != (longlong *)0x0) &&
     (cVar7 = (**(code **)(*param_1 + 0x768))(param_1), cVar7 != '\0')) {
    local_88 = SUB84(plVar12,0);
    uStack_84 = (undefined4)((ulonglong)plVar12 >> 0x20);
    uStack_80 = SUB84(plVar11,0);
    uStack_7c = (undefined4)((ulonglong)plVar11 >> 0x20);
    local_58 = local_88;
    uStack_54 = uStack_84;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    uVar8 = FUN_140bb7220(plVar13);
    FUN_140d6cde0(uVar8,&local_58);
    plVar12 = (longlong *)CONCAT44(uStack_4c,uStack_50);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar13 = plVar12 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar11 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 140d065c0 FUN_140d065c0 body=264 status=ok
// SIG undefined FUN_140d065c0(void)

void FUN_140d065c0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 local_res18 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = FUN_140cfbfb0();
  if ((lVar1 != 0) && (param_2 <= *(int *)(lVar1 + 0x144))) {
    *(int *)(lVar1 + 0x140) = param_2;
    if (*(char *)((longlong)param_1 + 0xa4e) == '\0') {
      *(undefined1 *)((longlong)param_1 + 0xa4c) = 1;
    }
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar2 = UWorld::GetGameState<APVPGameState>(uVar3);
      if ((((lVar2 != 0) && (FUN_140ccce90(lVar2,param_2 + 1), *(longlong *)(lVar2 + 0x598) != 0))
          && (-1 < param_2)) && (param_2 < *(int *)(lVar1 + 0x158))) {
        local_28 = 0;
        lVar1 = (longlong)param_2 * 0x38 + *(longlong *)(lVar1 + 0x150);
        local_20 = 0;
        local_18 = 0;
        FUN_140c598a0(lVar1,&local_28);
        puVar4 = (undefined8 *)FUN_140d3bd80(lVar1,local_res18);
        FUN_142f62640(*(undefined8 *)(lVar2 + 0x598),&local_28,*puVar4);
        TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>::
        ~TArray<FGameplayCueNotifyData,TSizedDefaultAllocator<32>_>(&local_28);
      }
    }
  }
  return;
}



// FUNCTION 140d066d0 FUN_140d066d0 body=8 status=ok
// SIG undefined FUN_140d066d0(void)

void FUN_140d066d0(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) & 0xef;
  return;
}



// FUNCTION 140d066e0 FUN_140d066e0 body=8 status=ok
// SIG undefined FUN_140d066e0(void)

void FUN_140d066e0(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) | 0x10;
  return;
}



// FUNCTION 140d06700 FUN_140d06700 body=747 status=ok
// SIG undefined FUN_140d06700(void)

void FUN_140d06700(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int *piVar12;
  int *piVar13;
  int *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  bVar5 = false;
  bVar4 = false;
  cVar8 = (**(code **)(*param_1 + 0x768))();
  if (cVar8 != '\0') {
    plVar10 = (longlong *)FUN_142dcf3a0(param_1,local_38);
    bVar5 = true;
    bVar4 = false;
    if (*plVar10 != 0) {
      puVar11 = (undefined8 *)FUN_142dcf3a0(param_1,local_48);
      bVar5 = true;
      bVar4 = true;
      cVar8 = (*(code *)**(undefined8 **)*puVar11)((undefined8 *)*puVar11,*param_2);
      if (cVar8 != '\0') {
        bVar6 = true;
        goto LAB_140d06771;
      }
    }
  }
  bVar6 = false;
LAB_140d06771:
  if ((bVar4) && (local_40 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_40 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar12 = (int *)((longlong)local_40 + 0xc);
      iVar9 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_40 + 8))(local_40,1);
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_30 + 1;
    lVar7 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar12 = (int *)((longlong)local_30 + 0xc);
      iVar9 = *piVar12;
      *piVar12 = *piVar12 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  if (bVar6) {
    Online::GetVoiceInterface(&local_58,0);
    if (local_58 != (longlong *)0x0) {
      (**(code **)(*local_58 + 0x28))(local_58,param_1 + 0x35d);
      param_1[0x35d] = 0;
      local_68 = (int *)0x0;
      local_60 = 0;
      iVar9 = (**(code **)(*local_58 + 0x40))(local_58,param_2,&local_68);
      if (iVar9 == 2) {
        *(undefined4 *)(param_1 + 0x35f) = 0;
        if (*(int *)((longlong)param_1 + 0x1afc) != 0) {
          TArray<float,FDefaultAllocator>::ResizeTo(param_1 + 0x35e,0);
        }
        piVar13 = local_68 + (longlong)(int)local_60 * 0x1a;
        for (piVar12 = local_68; piVar12 != piVar13; piVar12 = piVar12 + 0x1a) {
          if (((char)piVar12[0x14] != '\0') && (*piVar12 - 1U < 0x2d)) {
            TArray<unsigned_int,FDefaultAllocator>::AddUniqueImpl<unsigned_int_const_&>
                      (param_1 + 0x35e,piVar12);
          }
        }
        FUN_140cf0040(param_1);
      }
      if ((int)local_60 != 0) {
        plVar10 = (longlong *)(local_68 + 10);
        iVar9 = (int)local_60;
        do {
          plVar3 = (longlong *)plVar10[3];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar12 = (int *)((longlong)plVar3 + 0xc);
              iVar2 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar3 = (longlong *)*plVar10;
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar12 = (int *)((longlong)plVar3 + 0xc);
              iVar2 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar3 = (longlong *)plVar10[-3];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar3 + 1;
            lVar7 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar7 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar12 = (int *)((longlong)plVar3 + 0xc);
              iVar2 = *piVar12;
              *piVar12 = *piVar12 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
          }
          plVar10 = plVar10 + 0xd;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      if (local_68 != (int *)0x0) {
        FMemory::Free();
      }
    }
    plVar10 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_50 + 1;
      lVar7 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar12 = (int *)((longlong)plVar10 + 0xc);
        iVar9 = *piVar12;
        *piVar12 = *piVar12 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_50 + 8))(local_50,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d069f0 FUN_140d069f0 body=91 status=ok
// SIG undefined FUN_140d069f0(void)

void FUN_140d069f0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x19b8);
  if ((*(int *)(param_1 + 0x19d0) != 0) && (*(longlong **)(param_1 + 0x19c8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x19c8) + 0x18))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x19d0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x19c8);
      }
      (**(code **)(*plVar3 + 0x40))(plVar3,uVar1);
    }
  }
  return;
}



// FUNCTION 140d06a60 FUN_140d06a60 body=48 status=ok
// SIG undefined FUN_140d06a60(void)

void FUN_140d06a60(longlong param_1)

{
  longlong local_18;
  longlong local_10;
  
  local_10 = *(longlong *)(param_1 + 0x1c48);
  if (local_10 != 0) {
    local_18 = param_1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1c50,&local_18);
  }
  return;
}



// FUNCTION 140d06ad0 FUN_140d06ad0 body=625 status=ok
// SIG undefined FUN_140d06ad0(void)

void FUN_140d06ad0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,char param_4,
                  longlong param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  wint_t *pwVar10;
  undefined2 *puVar11;
  undefined1 local_58 [8];
  longlong *local_50;
  int local_48;
  code *local_38;
  longlong *plStack_30;
  code *local_28;
  undefined8 uStack_20;
  
  FUN_142dcf3a0(param_1,&local_38);
  if ((local_38 != (code *)0x0) && (cVar3 = (*(code *)**(undefined8 **)*param_2)(), cVar3 != '\0'))
  {
    if (*(int *)(param_3 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*param_3;
    }
    pwVar10 = &DAT_1443179c0;
    do {
      wVar4 = *(wint_t *)((longlong)(puVar11 + -0xa218bce0) + (longlong)pwVar10);
      if ((wVar4 == 0) && (*pwVar10 == 0)) goto LAB_140d06b7e;
      if (wVar4 != *pwVar10) {
        wVar4 = towlower(wVar4);
        wVar5 = towlower(*pwVar10);
        if (wVar4 != wVar5) goto LAB_140d06b70;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
  goto LAB_140d06ced;
LAB_140d06b70:
  if (wVar4 != wVar5) goto LAB_140d06ced;
LAB_140d06b7e:
  uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar7 = (longlong *)FUN_140d3a420(uVar6);
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x128))(plVar7,param_1 + 0x24c);
  }
  if ((param_4 == '\0') || (plVar7 == (longlong *)0x0)) {
    local_28 = local_38;
    uStack_20 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
    }
    FUN_140ced540(param_1 + 0x27a,&local_28,0);
    goto LAB_140d06ced;
  }
  param_1[0x24d] = param_5;
  uStack_20 = (longlong *)((ulonglong)uStack_20._4_4_ << 0x20);
  local_28 = FUN_140d06d50;
  local_50 = (longlong *)0x0;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_48 = 3;
  local_50 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    *plVar8 = (longlong)&PTR_FUN_1443193b0;
    FWeakObjectPtr::operator=(plVar8 + 1,param_1);
    plVar8[2] = (longlong)local_28;
    plVar8[3] = (longlong)uStack_20;
    lVar9 = FDelegateHandle::GenerateNewID();
    plVar8[5] = lVar9;
    *plVar8 = (longlong)&PTR_FUN_1443193f8;
  }
  plVar8 = (longlong *)(**(code **)(*plVar7 + 0x180))(plVar7,local_58,&local_50);
  param_1[0x24c] = *plVar8;
  if (local_48 == 0) {
LAB_140d06c99:
    if (local_50 != (longlong *)0x0) {
      FMemory::Free(local_50);
    }
  }
  else if (local_50 != (longlong *)0x0) {
    (**(code **)(*local_50 + 0x28))(local_50,0);
    if (local_50 != (longlong *)0x0) {
      local_50 = (longlong *)FMemory::Realloc(local_50,0,0);
    }
    local_48 = 0;
    goto LAB_140d06c99;
  }
  FUN_140d3db90(plVar7,param_2);
LAB_140d06ced:
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_30 + 1;
    lVar9 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plStack_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140d06d50 FUN_140d06d50 body=665 status=ok
// SIG undefined FUN_140d06d50(void)

void FUN_140d06d50(longlong *param_1,undefined8 *param_2,char param_3,longlong *param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  longlong *local_68;
  int local_60;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong local_20;
  
  uVar1 = (**(code **)(*param_1 + 0x148))();
  plVar2 = (longlong *)FUN_140d3a420(uVar1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,param_1 + 0x24c);
  }
  if ((param_3 == '\0') || (plVar2 == (longlong *)0x0)) {
    local_28 = *param_2;
    local_20 = param_2[1];
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    FUN_140ced540(param_1 + 0x27a,&local_28,0);
    return;
  }
  FUN_140d3b100(param_1[0x24d],&local_58);
  lVar5 = *param_4;
  lVar6 = (longlong)(int)param_4[1] * 0x1a0 + lVar5;
  if (lVar5 != lVar6) {
    piVar4 = (int *)(lVar5 + 0x188);
    do {
      if (((piVar4[-2] == local_58 && piVar4[-1] == local_54) && piVar4[1] == local_4c) &&
          local_50 == *piVar4) {
        local_38 = (code *)*param_2;
        uStack_30 = param_2[1];
        if (uStack_30 != 0) {
          LOCK();
          *(int *)(uStack_30 + 8) = *(int *)(uStack_30 + 8) + 1;
          UNLOCK();
        }
        FUN_140ced540(param_1 + 0x27a,&local_38,0);
        param_1[0x24d] = 0;
        return;
      }
      lVar5 = lVar5 + 0x1a0;
      piVar4 = piVar4 + 0x68;
    } while (lVar5 != lVar6);
  }
  uVar1 = FUN_140cff230(param_1);
  FUN_140d3dfa0(param_1[0x24d],uVar1);
  lVar5 = *(longlong *)(param_1[0x24d] + 0x478);
  *(undefined8 *)(param_1[0x24d] + 0x478) = 0;
  if (lVar5 != 0) {
    FUN_140ce2ac0(lVar5);
    FMemory::operator_delete(lVar5,0x100);
  }
  uStack_30._0_4_ = 0;
  local_68 = (longlong *)0x0;
  *(undefined4 *)(param_1[0x24d] + 0x28) = 0;
  local_38 = FUN_140d07780;
  plVar3 = (longlong *)FMemory::Realloc(0,0x30);
  local_60 = 3;
  local_68 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    *plVar3 = (longlong)&PTR_FUN_144060be0;
    FWeakObjectPtr::operator=(plVar3 + 1,param_1);
    *(undefined4 *)(plVar3 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar3 + 0x14) = local_38._4_4_;
    *(undefined4 *)(plVar3 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_30._4_4_;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar3[5] = lVar5;
    *plVar3 = (longlong)&PTR_FUN_144060c28;
  }
  plVar3 = (longlong *)(**(code **)(*plVar2 + 0x140))(plVar2,local_res8,&local_68);
  param_1[0x24e] = *plVar3;
  if (local_60 != 0) {
    if (local_68 == (longlong *)0x0) goto LAB_140d06f76;
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
LAB_140d06f76:
  local_48[0] = 0;
  local_48[1] = 0;
  FUN_140d58bd0(plVar2,param_2,local_48,param_1[0x24d]);
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d06ff0 FUN_140d06ff0 body=34 status=ok
// SIG undefined FUN_140d06ff0(void)

void FUN_140d06ff0(longlong param_1)

{
  FUN_140aa8e90(param_1 + 0x1a40);
  FUN_140d19010(param_1);
  return;
}



// FUNCTION 140d07020 FUN_140d07020 body=58 status=ok
// SIG undefined FUN_140d07020(void)

void FUN_140d07020(longlong *param_1)

{
  char cVar1;
  
  if (param_1[0x152] != 0) {
    cVar1 = (**(code **)(*param_1 + 0x768))();
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140d0704d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf90))(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140d07060 FUN_140d07060 body=670 status=ok
// SIG undefined FUN_140d07060(void)

void FUN_140d07060(longlong *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 local_res8;
  
  *(byte *)((longlong)param_1 + 0x1844) = *(byte *)((longlong)param_1 + 0x1844) & 0xfe;
  *(byte *)((longlong)param_1 + 0x1845) = *(byte *)((longlong)param_1 + 0x1845) & 0xfe;
  lVar4 = param_1[0xa5];
  if (lVar4 != 0) {
    lVar3 = FUN_142fd5420();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_142fcc0b0(lVar4,DAT_14686e058,0xbf800000,0);
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
        lVar4 = param_1[0xa5];
        uVar1 = *(undefined4 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0xc14);
        if (lVar4 != 0) {
          lVar3 = FUN_142fd5420();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (*(longlong *)(lVar4 + 0x2ca0) != 0)) &&
             (lVar4 = FUN_1404b75e0(), lVar4 != 0)) {
            lVar3 = AGPoisonSplashProjectile::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              *(undefined4 *)(lVar4 + 0xc4) = uVar1;
              *(undefined1 *)(lVar4 + 0xc3) = 0;
            }
          }
        }
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar4 = FUN_140b5b830(uVar5);
  if (lVar4 != 0) {
    FUN_140b75c90(lVar4);
  }
  local_res8 = DAT_14686e058;
  FUN_142dbb5d0(param_1 + 0x20d,&local_res8);
  uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar4 = FUN_140e4ba40(uVar5);
  if (lVar4 != 0) {
    FUN_140e5a0a0(lVar4);
  }
  if (param_1[0x18a] != 0) {
    FUN_142df2a70(param_1[0x18a],0,DAT_14686e058);
  }
  if ((char)param_1[0x20c] != '\0') {
    *(undefined1 *)(param_1 + 0x20c) = 0;
    FUN_140ce9370(param_1);
  }
  if (param_1[0x132] != 0) {
    plVar6 = (longlong *)(param_1[0x132] + 0xd88);
    (**(code **)(*plVar6 + 0x108))(plVar6,DAT_14686e058,0xffffffff,1);
  }
  lVar4 = param_1[0x109];
  if (lVar4 != 0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (lVar4 != param_1[0x132]) {
        (**(code **)(*(longlong *)(lVar4 + 0xd88) + 0x108))
                  ((longlong *)(lVar4 + 0xd88),DAT_14686e058,0xffffffff,1);
      }
      lVar4 = FUN_140e21bd0(lVar4);
      if (lVar4 != 0) {
        FUN_14130a170(lVar4);
      }
    }
  }
  return;
}



// FUNCTION 140d07300 FUN_140d07300 body=965 status=ok
// SIG undefined FUN_140d07300(void)

void FUN_140d07300(longlong *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_638 [2];
  undefined1 local_628 [1552];
  
  *(byte *)((longlong)param_1 + 0x1844) = *(byte *)((longlong)param_1 + 0x1844) | 1;
  lVar4 = param_1[0x132];
  if (lVar4 != 0) {
    FUN_140c5a150(lVar4,1);
    (**(code **)(*(longlong *)(lVar4 + 0xd88) + 0x100))
              ((longlong *)(lVar4 + 0xd88),DAT_14686e058,0xffffffff,1,1,1);
    lVar4 = FUN_140c41820(param_1[0x132]);
    if (lVar4 != 0) {
      FUN_141215170(lVar4);
    }
  }
  lVar4 = param_1[0x109];
  if (lVar4 != 0) {
    lVar5 = FUN_1413ffe00();
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
      if (lVar4 != param_1[0x132]) {
        FUN_140c5a150(lVar4,1);
        (**(code **)(*(longlong *)(lVar4 + 0xd88) + 0x100))
                  ((longlong *)(lVar4 + 0xd88),DAT_14686e058,0xffffffff,1,1,1);
      }
      goto LAB_140d0740f;
    }
  }
  lVar4 = 0;
LAB_140d0740f:
  bVar2 = true;
  if ((lVar4 != 0) && (lVar5 = FUN_142ceefa0(lVar4), lVar5 != 0)) {
    lVar6 = FUN_141448000();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (bVar3 = bVar2,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
       != lVar6 + 0x88)) {
      bVar3 = false;
    }
    if ((bVar3) && (bVar2 = true, (*(uint *)(lVar5 + 0x620) & 0x8000) == 0)) {
      bVar2 = false;
    }
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar5 = *(longlong *)(DAT_146b33f38 + 0x58);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0xc18) != '\0')) {
    *(byte *)((longlong)param_1 + 0x1845) = *(byte *)((longlong)param_1 + 0x1845) | 1;
  }
  lVar6 = param_1[0xa5];
  if (lVar6 != 0) {
    lVar7 = FUN_142fd5420();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if (bVar2) {
        FUN_142fccb00(lVar6,DAT_14686e058,0xbf800000,0);
      }
      else if (lVar5 != 0) {
        lVar6 = FUN_140a25aa0(local_628,lVar5 + 0x610);
        uVar1 = *(undefined4 *)(lVar5 + 0xc10);
        lVar5 = param_1[0xa5];
        if (lVar5 != 0) {
          lVar7 = FUN_142fd5420();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (((bVar2) && (*(longlong *)(lVar5 + 0x2ca0) != 0)) &&
             (lVar5 = FUN_1404b75e0(), lVar5 != 0)) {
            lVar7 = AGPoisonSplashProjectile::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              *(undefined4 *)(lVar5 + 0xc4) = uVar1;
              *(undefined1 *)(lVar5 + 0xc3) = 1;
              FUN_140a296b0(lVar5 + 0xd0,lVar6);
            }
          }
        }
        if (*(longlong *)(lVar6 + 0x5e8) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(lVar6 + 0x5d8) != 0) {
          FMemory::Free();
        }
      }
    }
  }
  local_638[0] = DAT_14686e058;
  FUN_142dafbc0(param_1 + 0x20d,local_638);
  uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar5 = FUN_140e4ba40(uVar8);
  if (lVar5 != 0) {
    FUN_140e5a0a0(lVar5);
  }
  if (param_1[0x18a] != 0) {
    FUN_142df2a70(param_1[0x18a],1,DAT_14686e058);
  }
  if ((char)param_1[0x20c] != '\x01') {
    *(undefined1 *)(param_1 + 0x20c) = 1;
    FUN_140ce9370(param_1);
  }
  if ((lVar4 != 0) && (lVar4 = FUN_140e21bd0(lVar4), lVar4 != 0)) {
    FUN_14130a130(lVar4);
  }
  return;
}



// FUNCTION 140d076d0 FUN_140d076d0 body=47 status=ok
// SIG undefined FUN_140d076d0(void)

void FUN_140d076d0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x90) != '\0')) {
    FUN_140ff7b90(param_1);
    return;
  }
  return;
}



// FUNCTION 140d07700 FUN_140d07700 body=94 status=ok
// SIG undefined FUN_140d07700(void)

void FUN_140d07700(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = AGImpulseWindProjectile::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return;
    }
  }
  FUN_141460510(param_1);
  return;
}



// FUNCTION 140d07760 FUN_140d07760 body=8 status=ok
// SIG undefined FUN_140d07760(void)

void FUN_140d07760(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) & 0xf7;
  return;
}



// FUNCTION 140d07770 FUN_140d07770 body=8 status=ok
// SIG undefined FUN_140d07770(void)

void FUN_140d07770(longlong param_1)

{
  *(byte *)(param_1 + 0x1844) = *(byte *)(param_1 + 0x1844) | 8;
  return;
}



// FUNCTION 140d07780 FUN_140d07780 body=272 status=ok
// SIG undefined FUN_140d07780(void)

void FUN_140d07780(longlong *param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  FUN_142dcf3a0(param_1,&local_38);
  if (local_38 != 0) {
    cVar4 = (*(code *)**(undefined8 **)*param_2)();
    if (cVar4 != '\0') {
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar6 = (longlong *)FUN_140d3a420(uVar5);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x148))(plVar6,param_1 + 0x24e);
      }
      if (param_4 == '\0') {
        local_28 = local_38;
        plStack_20 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
          UNLOCK();
        }
        uVar5 = 0;
        plVar6 = &local_28;
      }
      else {
        local_18 = local_38;
        plStack_10 = plStack_30;
        if (plStack_30 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
          UNLOCK();
        }
        uVar5 = 1;
        plVar6 = &local_18;
      }
      FUN_140ced540(param_1 + 0x27a,plVar6,uVar5);
    }
  }
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_30 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar1 = (int *)((longlong)plStack_30 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_30 + 8))(plStack_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140d07890 FUN_140d07890 body=434 status=ok
// SIG undefined FUN_140d07890(void)

void FUN_140d07890(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar4 = FUN_1422312c0();
  if (lVar4 != 0) {
    lVar5 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (cVar3 = FUN_140bca8a0(lVar4), cVar3 != '\0')) {
      return;
    }
  }
  lVar4 = (**(code **)(param_1[0x130] + 0x10))();
  if (lVar4 != 0) {
    lVar5 = FUN_1414d9130();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140d07948;
  }
  lVar4 = 0;
LAB_140d07948:
  lVar5 = (**(code **)(*param_1 + 0xfa8))(param_1);
  lVar6 = FUN_14270bb10(param_1);
  if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 0x3b8) != 0)) && (lVar5 != 0)) && (lVar6 != 0)) {
    if (*(int *)(lVar5 + 0x48) == 0) {
      lVar4 = FUN_142f02280(lVar5);
    }
    else {
      uVar7 = FUN_141387d00();
      cVar3 = FUN_142ef5b10(lVar5,uVar7);
      if (cVar3 != '\0') {
        return;
      }
      if (*(int *)(lVar5 + 0x48) < 1) {
        return;
      }
      plVar1 = *(longlong **)
                (*(longlong *)(lVar5 + 0x40) + -8 + (longlong)*(int *)(lVar5 + 0x48) * 8);
      if (plVar1 == (longlong *)0x0) {
        return;
      }
      lVar4 = (**(code **)(*plVar1 + 0x278))();
    }
    if (lVar4 != 0) {
      lVar5 = FUN_141387d00();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((bVar2) && (lVar4 != 0)) {
        FUN_14112a420(lVar4,param_2,*(undefined4 *)(lVar6 + 0x108));
      }
    }
  }
  return;
}



// FUNCTION 140d07a50 FUN_140d07a50 body=52 status=ok
// SIG undefined FUN_140d07a50(void)

void FUN_140d07a50(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,"Inventory",1);
  FUN_140d07ee0(param_1,*puVar1,0);
  return;
}



// FUNCTION 140d07a90 FUN_140d07a90 body=52 status=ok
// SIG undefined FUN_140d07a90(void)

void FUN_140d07a90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  puVar1 = (undefined8 *)FName::FName(local_res10,"MissionLog",1);
  FUN_140d07ee0(param_1,*puVar1,0);
  return;
}



// FUNCTION 140d07ad0 FUN_140d07ad0 body=47 status=ok
// SIG undefined FUN_140d07ad0(void)

void FUN_140d07ad0(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x90) != '\0')) {
    FUN_14100fed0(param_1);
    return;
  }
  return;
}



// FUNCTION 140d07b00 FUN_140d07b00 body=340 status=ok
// SIG undefined FUN_140d07b00(void)

void FUN_140d07b00(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_28 [8];
  longlong *local_20;
  
  FText::FText(local_28);
  cVar5 = FUN_1407c3030(param_1 + 0x2bf);
  if (cVar5 == '\0') {
    cVar5 = FUN_140ceef30(param_1,local_28);
    if (cVar5 != '\0') {
      lVar6 = (**(code **)(param_1[0x130] + 0x10))();
      if (lVar6 != 0) {
        lVar7 = FUN_1414d9130();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          lVar7 = (**(code **)(*param_1 + 0xfa8))(param_1);
          if (lVar7 != 0) {
            lVar7 = (**(code **)(*param_1 + 0xfa8))(param_1);
            if (*(int *)(lVar7 + 0x48) == 0) {
              uVar8 = (**(code **)(*param_1 + 0xfa8))(param_1);
              lVar6 = FUN_142f02280(uVar8,*(undefined8 *)(lVar6 + 0x450));
              if (lVar6 != 0) {
                lVar7 = FUN_141393180();
                if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                if (bVar4) {
                  FUN_14105d490(lVar6,0);
                }
              }
            }
          }
        }
      }
    }
  }
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
  return;
}



// FUNCTION 140d07c60 FUN_140d07c60 body=626 status=ok
// SIG undefined FUN_140d07c60(void)

void FUN_140d07c60(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  longlong local_38;
  longlong *plStack_30;
  longlong local_28;
  longlong *plStack_20;
  longlong *local_18;
  longlong *plStack_10;
  
  FUN_142dcf3a0(param_1,&local_48);
  lVar7 = FUN_1422312c0(param_1);
  if (lVar7 == 0) goto LAB_140d07e89;
  lVar8 = FUN_14141f270();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((!bVar5) || (local_48 == 0)) goto LAB_140d07e89;
  lVar8 = FUN_14270bb10(param_1);
  if (lVar8 == 0) {
LAB_140d07d31:
    lVar8 = 0;
  }
  else {
    lVar9 = FUN_141432660();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d07d31;
  }
  local_28 = local_48;
  plStack_20 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_140bcaa10(lVar7,&local_28);
  local_38 = local_48;
  plStack_30 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  plStack_50 = (longlong *)operator_new(0xa0);
  if (plStack_50 == (longlong *)0x0) {
    plStack_50 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plStack_50 + 1) = 1;
    *(undefined4 *)((longlong)plStack_50 + 0xc) = 1;
    *plStack_50 = (longlong)&PTR_FUN_1444f84d8;
    FUN_140ddbea0(plStack_50 + 2,lVar7,&local_38,uVar6);
  }
  local_58 = plStack_50 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_58,local_58,local_58);
  local_18 = local_58;
  plStack_10 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
    UNLOCK();
  }
  FUN_140e57f40(lVar8,&local_18);
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_50)(plStack_50);
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
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
LAB_140d07e89:
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plStack_40 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  return;
}



// FUNCTION 140d07ee0 FUN_140d07ee0 body=191 status=ok
// SIG undefined FUN_140d07ee0(void)

void FUN_140d07ee0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [24];
  
  FText::FText(local_38);
  cVar5 = FUN_140ceef30(param_1,local_38);
  if (cVar5 == '\0') {
    cVar5 = FText::IsEmpty(local_38);
    if (cVar5 == '\0') {
      uVar6 = FText::FText(local_20,local_38);
      FUN_140cf8780(param_1,uVar6);
    }
  }
  else {
    FUN_14109eab0(param_1,param_2,param_3);
    (**(code **)(*param_1 + 0xce8))(param_1);
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140d07fa0 FUN_140d07fa0 body=289 status=ok
// SIG undefined FUN_140d07fa0(void)

void FUN_140d07fa0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar2 = (**(code **)(*param_1 + 0x768))();
  if (cVar2 == '\0') {
    return;
  }
  if (param_1[0x285] != 0) {
    FUN_1411e79a0(param_1[0x285],param_1[0x28f]);
    param_1[0x28f] = 0;
  }
  lVar3 = (**(code **)(*param_1 + 0xfa8))(param_1);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = (**(code **)(param_1[0x130] + 0x10))();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_1414d9130();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  FUN_142ee3cb0(lVar3);
  lVar3 = FUN_142f12780(lVar3,*(undefined8 *)(lVar4 + 0x458));
  if (lVar3 != 0) {
    lVar4 = ABuilder::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140d0809d;
  }
  lVar3 = 0;
LAB_140d0809d:
  param_1[0x15a] = lVar3;
  if (lVar3 != 0) {
    FUN_140f8f000(lVar3);
  }
  return;
}



// FUNCTION 140d080d0 FUN_140d080d0 body=246 status=ok
// SIG undefined FUN_140d080d0(void)

void FUN_140d080d0(longlong param_1,undefined4 param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x528);
  if (lVar3 != 0) {
    lVar2 = FUN_142fd5420();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar3 + 0x2ca0) != 0)) {
      lVar3 = FUN_1404b75e0();
      if (lVar3 != 0) {
        lVar2 = AGPoisonSplashProjectile::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          *(undefined4 *)(lVar3 + 0xc4) = param_2;
          *(undefined1 *)(lVar3 + 0xc3) = 1;
          FUN_140a296b0(lVar3 + 0xd0,param_3);
        }
      }
    }
  }
  if (*(longlong *)(param_3 + 0x5e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_3 + 0x5d8) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d081d0 FUN_140d081d0 body=357 status=ok
// SIG undefined FUN_140d081d0(void)

void FUN_140d081d0(longlong param_1,ulonglong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x1370);
  uVar3 = (uint)param_2 & 0xff;
  if (param_3 != 0) {
    if (iVar2 <= (int)uVar3) {
      iVar4 = (uVar3 - iVar2) + 1;
      iVar1 = iVar2 + iVar4;
      *(int *)(param_1 + 0x1370) = iVar1;
      if (*(int *)(param_1 + 0x1374) < iVar1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x1368);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*(longlong *)(param_1 + 0x1368) + (longlong)iVar2 * 8),0,
                 (longlong)iVar4 << 3);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x1368) + (param_2 & 0xff) * 8) = param_3;
    if (*(int *)(param_1 + 0x1360) <= (int)uVar3) {
      FUN_140ce4c30(param_1 + 0x1318,(uVar3 - *(int *)(param_1 + 0x1360)) + 1);
    }
    lVar6 = *(longlong *)(param_1 + 0x1358);
    if (*(longlong *)(param_1 + 0x1358) == 0) {
      lVar6 = param_1 + 0x1318;
    }
    *(undefined4 *)(lVar6 + 4 + (param_2 & 0xff) * 0x14) = param_4;
    return;
  }
  if ((int)uVar3 < iVar2) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x1368) + (param_2 & 0xff) * 8) = 0;
    iVar2 = *(int *)(param_1 + 0x1370) + -1;
    if (-1 < iVar2) {
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x1368) + (longlong)iVar2 * 8);
      iVar1 = -1;
      do {
        lVar6 = *plVar5;
        plVar5 = plVar5 + -1;
        iVar4 = iVar2;
        if (lVar6 == 0) {
          iVar4 = iVar1;
        }
        iVar2 = iVar2 + -1;
        iVar1 = iVar4;
      } while (-1 < iVar2);
      if (iVar4 != -1) {
        *(undefined4 *)(param_1 + 0x1370) = 0;
        if (*(int *)(param_1 + 0x1374) < iVar4 + 1) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x1368);
        }
      }
    }
  }
  return;
}



// FUNCTION 140d08340 FUN_140d08340 body=839 status=ok
// SIG undefined FUN_140d08340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d08340(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int *piVar17;
  undefined8 *puVar18;
  
  *param_3 = *param_2;
  *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_2 + 2);
  puVar18 = *(undefined8 **)(param_2 + 4);
  puVar16 = puVar18 + (int)param_2[6];
  if (puVar18 != puVar16) {
    plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    plVar1 = (longlong *)(param_3 + 4);
    do {
      iVar3 = param_3[6];
      uVar13 = *puVar18;
      iVar4 = param_3[6];
      param_3[6] = iVar3 + 1;
      if ((int)param_3[7] < iVar3 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar1,iVar3);
      }
      puVar9 = (undefined8 *)((longlong)iVar3 * 0x40 + *plVar1);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      uVar10 = FUN_14301f8f0();
      lVar11 = AGameStateBase::OnRep_GameModeClass(uVar13,uVar10);
      if (lVar11 != 0) {
        lVar12 = FUN_14301f8f0();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          piVar17 = (int *)(*plVar2 + 0x38);
          if ((*piVar17 < DAT_14686e148) &&
             (_Init_thread_header(&DAT_14686e148), DAT_14686e148 == -1)) {
            _DAT_14686e140 = 7;
            DAT_14686e138 = 0;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14686e138,0);
            FGenericPlatformString::Memcpy(DAT_14686e138,L"Common",0xe);
            atexit((_func_5014 *)&LAB_143e51550);
            _Init_thread_footer(&DAT_14686e148);
          }
          if (((*(longlong *)(lVar11 + 0x210) == 0) ||
              (lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x210) + 0xb8), lVar12 == 0)) ||
             (*(int *)(lVar12 + 0x60) < 2)) {
            puVar9 = &DAT_14686e138;
          }
          else {
            puVar9 = (undefined8 *)(lVar12 + 0x58);
          }
          lVar12 = (longlong)iVar4 * 0x40;
          puVar15 = (undefined8 *)(*plVar1 + 0x10 + lVar12);
          if (puVar15 != puVar9) {
            iVar3 = *(int *)(puVar9 + 1);
            pvVar5 = (void *)*puVar9;
            *(int *)(puVar15 + 1) = iVar3;
            if ((iVar3 == 0) && (*(int *)((longlong)puVar15 + 0xc) == 0)) {
              *(undefined4 *)((longlong)puVar15 + 0xc) = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar15,iVar3);
              _guard_xfg_dispatch_icall_nop((void *)*puVar15,pvVar5,(longlong)iVar3 * 2);
            }
          }
          if ((*piVar17 < DAT_14686e168) &&
             (_Init_thread_header(&DAT_14686e168), DAT_14686e168 == -1)) {
            uVar13 = FUN_1404b03b0();
            FText::FText(&DAT_14686e150,uVar13);
            atexit(FUN_143e516a0);
            _Init_thread_footer(&DAT_14686e168);
          }
          if ((*(longlong *)(lVar11 + 0x210) == 0) ||
             (lVar6 = *(longlong *)(*(longlong *)(lVar11 + 0x210) + 0xb8),
             puVar14 = (undefined *)(lVar6 + 0x70), lVar6 == 0)) {
            puVar14 = &DAT_14686e150;
          }
          FText::operator=(*plVar1 + 0x20 + lVar12,puVar14);
          lVar6 = *plVar1;
          uVar8 = FSceneViewport::GetMouseY(lVar11);
          *(undefined4 *)(lVar12 + 0x38 + lVar6) = uVar8;
          lVar11 = *(longlong *)(lVar11 + 0x208);
          if (lVar11 != 0) {
            puVar9 = (undefined8 *)(*plVar1 + lVar12);
            if (puVar9 != (undefined8 *)(lVar11 + 0xe0)) {
              iVar3 = *(int *)(lVar11 + 0xe8);
              pvVar5 = *(void **)(lVar11 + 0xe0);
              *(int *)(puVar9 + 1) = iVar3;
              if ((iVar3 == 0) && (*(int *)((longlong)puVar9 + 0xc) == 0)) {
                *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar9,iVar3);
                _guard_xfg_dispatch_icall_nop((void *)*puVar9,pvVar5,(longlong)iVar3 * 2);
              }
            }
          }
        }
      }
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar16);
  }
  return;
}



// FUNCTION 140d08690 FUN_140d08690 body=12 status=ok
// SIG undefined FUN_140d08690(void)

void FUN_140d08690(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140d08695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf90))(param_1,0);
  return;
}



// FUNCTION 140d086a0 FUN_140d086a0 body=257 status=ok
// SIG undefined FUN_140d086a0(void)

void FUN_140d086a0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_res8;
  
  if (param_1[0x1e3] != 0) {
    local_res8 = param_1[0x1e3];
    uVar4 = AActor::GetWorldTimerManager();
    lVar5 = FTimerManager::FindTimer(uVar4,&local_res8,0);
    if ((lVar5 == 0) || (*(char *)(lVar5 + 1) == '\x02')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = AActor::GetWorldTimerManager(param_1);
      FUN_142880530(uVar4,param_1 + 0x1e3);
      param_1[0x1e3] = 0;
    }
  }
  if ((char)param_1[0x25] == '\x03') {
    lVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    plVar1 = *(longlong **)(lVar5 + 0x140);
    if (plVar1 != (longlong *)0x0) {
      lVar5 = FUN_141425c60();
      if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        (**(code **)(*plVar1 + 0xa28))(plVar1,param_1);
      }
    }
  }
  if (param_1[0x132] != 0) {
    cVar3 = (**(code **)(*param_1 + 0x768))(param_1);
    if (cVar3 != '\0') {
      FUN_140c3a7e0(param_1[0x132]);
    }
  }
  return;
}



// FUNCTION 140d087b0 FUN_140d087b0 body=406 status=ok
// SIG undefined FUN_140d087b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_140d087b0(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  undefined8 *local_340;
  code **local_338;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 *local_318;
  undefined1 *puStack_310;
  undefined8 local_308;
  undefined2 local_300;
  undefined8 local_2f8;
  longlong *local_2f0;
  undefined1 local_2e0 [72];
  code *local_298 [2];
  longlong local_288 [4];
  longlong *local_268;
  int local_258;
  undefined1 local_248 [520];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_368;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0xd8) == 0) {
    *param_2 = 0;
    param_2[2] = 0;
    param_2[1] = 0xffffffff;
  }
  else {
    local_2f8 = *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0xd8) + 0x100);
    local_298[0] = AK::MemoryMgr::StartProfileThreadUsage;
    local_318 = &local_2f8;
    local_268 = (longlong *)0x0;
    puStack_310 = local_2e0;
    local_258 = 0;
    local_308 = 0;
    local_300 = 0;
    local_328 = 0xffffffff00000000;
    local_320 = 0;
    local_2f0 = param_1;
    FUN_1405e1200(local_248,&local_318);
    uVar1 = FUN_1405e15d0(local_2e0,param_3);
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    local_338 = local_298;
    local_340 = &local_308;
    local_348 = &local_328;
    FUN_1405f2e30(param_2,uVar2,uVar1,local_248);
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_258 != 0) {
      plVar3 = local_288;
      if (local_268 != (longlong *)0x0) {
        plVar3 = local_268;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_268 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 140d08950 FUN_140d08950 body=104 status=ok
// SIG undefined FUN_140d08950(void)

void FUN_140d08950(longlong param_1,uint param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_2 < 4) && (lVar1 = *(longlong *)(param_1 + 0x848), lVar1 != 0)) {
    lVar3 = FUN_1413ffe00();
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
      FUN_141400960(lVar1,param_2);
    }
  }
  return;
}



// FUNCTION 140d089c0 FUN_140d089c0 body=189 status=ok
// SIG undefined FUN_140d089c0(void)

void FUN_140d089c0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  undefined4 local_20;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if (lVar2 != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if ((*(longlong *)(DAT_146b33f38 + 0x58) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x580), lVar1 != 0)) {
      local_40 = 0;
      local_48 = 0;
      local_20 = 0;
      local_30 = 0;
      local_38 = 0;
      FUN_1405a1e30(local_28,lVar2,lVar1,&local_38,0x42480000,&local_48);
      FUN_140591060(local_28);
    }
  }
  return;
}



// FUNCTION 140d08a80 FUN_140d08a80 body=292 status=ok
// SIG undefined FUN_140d08a80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d08a80(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 *local_268;
  undefined1 *puStack_260;
  undefined8 local_258;
  longlong *local_250;
  undefined1 local_240 [8];
  undefined8 *local_238;
  undefined1 *puStack_230;
  undefined1 local_228 [520];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = *(longlong *)(DAT_146b33f38 + 0xd8);
  if (lVar1 != 0) {
    local_278 = 0;
    local_270 = 0;
    local_258 = *(undefined8 *)(lVar1 + 0x100);
    local_268 = &local_258;
    puStack_260 = local_240;
    local_250 = param_1;
    local_238 = local_268;
    puStack_230 = puStack_260;
    FUN_1405e1200(local_228,&local_238);
    local_278 = CONCAT44(0xffffffff,(undefined4)local_278);
    local_270 = 0;
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    local_288 = 0;
    local_290 = &local_278;
    local_298 = 0;
    FUN_1405f8040(&local_268,uVar2,*(undefined8 *)(lVar1 + 0x178),local_228);
    if (local_20 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 140d08bb0 FUN_140d08bb0 body=1126 status=ok
// SIG undefined FUN_140d08bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d08bb0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined1 auStack_498 [32];
  longlong *local_478;
  longlong *local_470;
  longlong *local_460;
  longlong *local_450;
  undefined **local_448;
  longlong *local_440;
  longlong *local_438;
  longlong local_430;
  undefined8 local_428;
  undefined4 local_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined **local_408 [2];
  longlong *local_3f8;
  longlong local_3f0;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  lVar8 = *(longlong *)(param_1 + 0x508);
  plVar13 = (longlong *)0x0;
  local_420 = 0;
  if (lVar8 == 0) {
LAB_140d08c63:
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
    local_460 = (longlong *)0x0;
    local_470 = plVar13;
    local_478 = plVar13;
  }
  else {
    lVar7 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140d08c63;
    bVar5 = true;
    bVar4 = true;
    bVar3 = false;
    lVar8 = FUN_142547b50(lVar8,local_408);
    local_470 = *(longlong **)(lVar8 + 0x10);
    local_478 = *(longlong **)(lVar8 + 8);
    local_450 = local_470;
    if (local_470 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_470 + 1) = (int)local_470[1] + 1;
      UNLOCK();
    }
  }
  plVar9 = local_460;
  if (local_470 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_470 + 1) = (int)local_470[1] + 1;
    UNLOCK();
  }
  if ((bVar3) && (local_460 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_460 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_460)(local_460);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_460 + 8))(local_460,1);
      }
    }
  }
  plVar9 = local_450;
  if ((bVar4) && (local_450 != (longlong *)0x0)) {
    LOCK();
    plVar10 = local_450 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_450)(local_450);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_450 + 8))(local_450,1);
      }
    }
  }
  if (bVar5) {
    local_408[0] = &PTR_FUN_143f740c8;
    if (local_3f0 != 0) {
      FMemory::Free();
    }
    local_408[0] = &PTR_FUN_143f73d18;
    if (local_3f8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_3f8 + 1;
      lVar8 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_3f8)(local_3f8);
        LOCK();
        piVar1 = (int *)((longlong)local_3f8 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_3f8 + 8))(local_3f8,1);
        }
      }
    }
  }
  if (local_478 == (longlong *)0x0) goto LAB_140d08fb2;
  plVar9 = plVar13;
  if (*(int *)(param_3 + 0x108) != 0) {
    lVar8 = *(longlong *)(param_3 + 0x100);
    *(undefined8 *)(param_1 + 0xd18) = *(undefined8 *)(lVar8 + 0x14);
    *(undefined4 *)(param_1 + 0xd20) = *(undefined4 *)(lVar8 + 0x1c);
    plVar9 = (longlong *)FWeakObjectPtr::Get(*(longlong *)(param_3 + 0x100) + 0x6c);
    if (plVar9 != (longlong *)0x0) {
      lVar8 = FUN_1413f82e0();
      if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (cVar6 = (**(code **)(*plVar9 + 0x950))(plVar9), cVar6 != '\0')) {
        plVar9 = (longlong *)0x0;
      }
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x910);
  plVar10 = plVar13;
  if (lVar8 == 0) {
LAB_140d08e47:
    lVar8 = *(longlong *)(param_1 + 0xc50);
    if (lVar8 != 0) {
      plVar10 = *(longlong **)(lVar8 + 0x5b0);
      plVar11 = plVar10;
      if (plVar10 != (longlong *)0x0) goto LAB_140d08ea1;
      if (lVar8 != 0) {
        lVar8 = FUN_142de95d0();
        plVar11 = plVar13;
        if (lVar8 != 0) {
          plVar11 = *(longlong **)(lVar8 + 0x118);
        }
        if (plVar11 != (longlong *)0x0) goto LAB_140d08ea1;
      }
    }
    if (plVar9 != (longlong *)0x0) {
      uVar12 = UGameplayTagAssetInterface::GetPrivateStaticClass();
      lVar8 = UObjectBaseUtility::GetInterfaceAddress(plVar9,uVar12);
      plVar11 = plVar9;
      if (lVar8 != 0) goto LAB_140d08ea1;
    }
  }
  else {
    FUN_142dc1ad0(local_3d8);
    FUN_142dcd6e0(lVar8,local_3d8,0);
    plVar10 = (longlong *)FUN_142dd0030(local_3d8);
    plVar11 = plVar10;
    if (plVar10 == (longlong *)0x0) goto LAB_140d08e47;
LAB_140d08ea1:
    lVar8 = FUN_1412d7880();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    plVar10 = plVar11;
    if ((bVar3) && ((longlong *)plVar11[0x9c] != (longlong *)0x0)) {
      plVar10 = (longlong *)plVar11[0x9c];
    }
  }
  if (plVar10 == (longlong *)0x0) {
LAB_140d08eff:
    plVar10 = plVar13;
  }
  else {
    uVar12 = UGameplayTagAssetInterface::GetPrivateStaticClass();
    lVar8 = UObjectBaseUtility::GetInterfaceAddress(plVar10,uVar12);
    if (lVar8 == 0) goto LAB_140d08eff;
  }
  local_440 = local_478;
  local_438 = local_470;
  if (local_470 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_470 + 1) = (int)local_470[1] + 1;
    UNLOCK();
  }
  local_418 = *(undefined8 *)(param_1 + 0xd18);
  local_410 = *(undefined4 *)(param_1 + 0xd20);
  local_448 = &PTR_FUN_143f740c8;
  local_430 = 0;
  local_428 = 0;
  FUN_14145ffa0(param_1,&local_448,plVar10,&local_418);
  local_448 = &PTR_FUN_143f740c8;
  if (local_430 != 0) {
    FMemory::Free();
  }
  plVar13 = local_438;
  local_448 = &PTR_FUN_143f73d18;
  if (local_438 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_438 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_438)(local_438);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
LAB_140d08fb2:
  plVar13 = local_470;
  if (local_470 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_470 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_470)(local_470);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_470 + 8))(local_470,1);
      }
    }
  }
  return;
}



// FUNCTION 140d09020 FUN_140d09020 body=36 status=ok
// SIG undefined FUN_140d09020(void)

void FUN_140d09020(longlong param_1,longlong param_2)

{
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0xb68,local_res10);
  }
  return;
}



// FUNCTION 140d09050 FUN_140d09050 body=14 status=ok
// SIG undefined FUN_140d09050(void)

void FUN_140d09050(longlong param_1)

{
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1 + 0xb78,0);
  return;
}



// FUNCTION 140d09060 FUN_140d09060 body=3029 status=ok
// SIG undefined FUN_140d09060(void)

void FUN_140d09060(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Src;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  char *pcVar17;
  longlong lVar18;
  int iVar19;
  longlong *plVar20;
  int iVar21;
  char *pcVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong *local_118;
  undefined8 local_110;
  longlong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  long lStack_f0;
  undefined4 uStack_ec;
  WriteBytesMem local_e8 [16];
  longlong local_d8;
  longlong *local_c8;
  undefined1 local_a8 [32];
  longlong local_88;
  longlong local_78;
  longlong local_68;
  longlong local_58;
  
  if (param_2 != 0) {
    FUN_14172cc40(param_2,1);
    if (param_1[0x193] != 0) {
      thunk_FUN_140e310e0(param_1[0x193],param_2 + 0x508);
    }
    uVar6 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
    lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
    if (lVar7 != 0) {
      plVar8 = (longlong *)FUN_142274b30(lVar7);
      plVar20 = (longlong *)(param_2 + 0x360);
      TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_>::Empty(plVar20,(int)plVar8[1]);
      iVar19 = (int)plVar8[1];
      uVar24 = 0;
      local_118 = (longlong *)0x0;
      local_110 = 0;
      if (0 < iVar19) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_118,iVar19);
        iVar19 = (int)plVar8[1];
        uVar24 = local_110 & 0xffffffff;
      }
      plVar8 = (longlong *)*plVar8;
      plVar13 = plVar8 + (longlong)iVar19 * 2;
      plVar15 = local_118;
      for (; plVar8 != plVar13; plVar8 = plVar8 + 2) {
        lVar7 = *plVar8;
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x60) != '\0')) {
          iVar19 = (int)uVar24;
          for (plVar11 = plVar15; plVar11 != plVar15 + iVar19; plVar11 = plVar11 + 1) {
            if (*plVar11 == lVar7) goto LAB_140d091d2;
          }
          iVar21 = *(int *)(param_2 + 0x368);
          *(int *)(param_2 + 0x368) = iVar21 + 1;
          if (*(int *)(param_2 + 0x36c) < iVar21 + 1) {
            TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar20,iVar21);
          }
          FUN_140d1f3a0((longlong)iVar21 * 0x30 + *plVar20,*plVar8,(int)plVar8[1]);
          uVar23 = iVar19 + 1;
          local_110 = CONCAT44(local_110._4_4_,uVar23);
          if (local_110._4_4_ < (int)uVar23) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_118,uVar24);
            plVar15 = local_118;
            uVar23 = (uint)local_110;
          }
          uVar24 = (ulonglong)uVar23;
          plVar15[iVar19] = *plVar8;
        }
LAB_140d091d2:
      }
      if (plVar15 != (longlong *)0x0) {
        FMemory::Free(plVar15);
      }
    }
    lVar7 = param_1[0x109];
    if (lVar7 != 0) {
      lVar9 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        if ((*(byte *)(lVar7 + 0x94) & 0x18) == 0x10) {
          iVar19 = *(int *)(lVar7 + 0xc);
          if (iVar19 < (int)DAT_1469e91c4) {
            uVar12 = iVar19 >> 0x1f & 0xffff;
            uVar23 = iVar19 + uVar12;
            lVar9 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar23 >> 0x10) * 8) +
                    (longlong)(int)((uVar23 & 0xffff) - uVar12) * 0x18;
          }
          else {
            lVar9 = 0;
          }
          if (((*(uint *)(lVar9 + 8) >> 0x1d & 1) == 0) &&
             (lVar9 = FUN_140c41a30(lVar7), lVar9 != 0)) {
            iVar19 = *(int *)(lVar9 + 0xc);
            if (iVar19 < (int)DAT_1469e91c4) {
              uVar12 = iVar19 >> 0x1f & 0xffff;
              uVar23 = iVar19 + uVar12;
              lVar14 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar23 >> 0x10) * 8) +
                       (longlong)(int)((uVar23 & 0xffff) - uVar12) * 0x18;
            }
            else {
              lVar14 = 0;
            }
            if ((((*(uint *)(lVar14 + 8) >> 0x1d & 1) == 0) &&
                ((*(byte *)(lVar9 + 200) & 0x20) != 0)) &&
               ((*(char *)(lVar7 + 0x2340) != '\0' || (*(int *)(param_2 + 0x388) < 1)))) {
              plVar20 = (longlong *)(param_2 + 0x380);
              local_118 = (longlong *)0x0;
              iVar21 = 0;
              iVar19 = 0;
              local_110 = 0;
              lVar14 = *plVar20;
              lVar18 = (longlong)*(int *)(param_2 + 0x388) * 0x80 + lVar14;
              for (; lVar14 != lVar18; lVar14 = lVar14 + 0x80) {
                if (*(char *)(lVar14 + 0x78) != '\0') {
                  local_110._4_4_ = (int)(local_110 >> 0x20);
                  local_110 = CONCAT44(local_110._4_4_,iVar19 + 1);
                  if (iVar21 < iVar19 + 1) {
                    TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::ResizeGrow
                              (&local_118,iVar19);
                  }
                  FUN_140ce10b0(local_118 + (longlong)iVar19 * 0x10,lVar14);
                  iVar19 = (uint)local_110;
                  iVar21 = local_110._4_4_;
                }
              }
              local_108 = 0;
              local_100 = 0;
              FUN_142fde510(local_e8);
              FUN_142ff7ce0(lVar9,0,&local_108);
              plVar8 = (longlong *)(param_2 + 0x370);
              *(undefined4 *)(param_2 + 0x378) = 0;
              if (*(int *)(param_2 + 0x37c) != (int)local_100) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar8,local_100 & 0xffffffff);
              }
              lVar14 = local_108 + (longlong)(int)local_100 * 4;
              for (lVar18 = local_108; lVar18 != lVar14; lVar18 = lVar18 + 4) {
                cVar4 = FUN_142ffa4f0(lVar9,lVar18,local_e8);
                if (cVar4 != '\0') {
                  local_f8 = local_d8;
                  lStack_f0 = AK::WriteBytesMem::Count(local_e8);
                  iVar19 = *(int *)(param_2 + 0x378);
                  *(int *)(param_2 + 0x378) = iVar19 + 1;
                  if (*(int *)(param_2 + 0x37c) < iVar19 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar19);
                  }
                  puVar1 = (undefined4 *)(*plVar8 + (longlong)iVar19 * 0x10);
                  *puVar1 = (undefined4)local_f8;
                  puVar1[1] = local_f8._4_4_;
                  puVar1[2] = lStack_f0;
                  puVar1[3] = uStack_ec;
                }
              }
              FUN_142ffa060(lVar9,0,&local_108);
              uVar24 = local_100;
              iVar19 = *(int *)(param_2 + 0x388);
              iVar21 = (int)local_100;
              if (iVar19 != 0) {
                plVar15 = (longlong *)(*plVar20 + 0x50);
                do {
                  if (plVar15[2] != 0) {
                    FMemory::Free();
                  }
                  if (*plVar15 != 0) {
                    FMemory::Free();
                  }
                  if (plVar15[-2] != 0) {
                    FMemory::Free();
                  }
                  if (plVar15[-4] != 0) {
                    FMemory::Free();
                  }
                  if (plVar15[-10] != 0) {
                    FMemory::Free();
                  }
                  plVar15 = plVar15 + 0x10;
                  iVar19 = iVar19 + -1;
                } while (iVar19 != 0);
              }
              *(undefined4 *)(param_2 + 0x388) = 0;
              if (*(int *)(param_2 + 0x38c) != iVar21) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>::
                ResizeTo(plVar20,uVar24 & 0xffffffff);
              }
              lVar14 = local_108 + (longlong)(int)local_100 * 4;
              for (lVar18 = local_108; lVar18 != lVar14; lVar18 = lVar18 + 4) {
                cVar4 = FUN_142ffa4f0(lVar9,lVar18,local_e8);
                plVar15 = local_c8;
                if ((cVar4 != '\0') && (local_c8 != (longlong *)0x0)) {
                  uVar6 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
                  lVar10 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar6);
                  plVar15 = local_c8;
                  if (lVar10 == 0) {
                    FUN_14301f8f0();
                    lVar10 = (**(code **)(*plVar15 + 0x628))(plVar15);
                    if (lVar10 != 0) {
                      _guard_xfg_dispatch_icall_nop(local_a8,0,0x68);
                      FUN_142ff3000(lVar10,local_a8);
                      iVar19 = *(int *)(param_2 + 0x388);
                      *(int *)(param_2 + 0x388) = iVar19 + 1;
                      if (*(int *)(param_2 + 0x38c) < iVar19 + 1) {
                        TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDefaultAllocator>::
                        ResizeGrow(plVar20,iVar19);
                      }
                      FUN_142fde550(*plVar20 + (longlong)iVar19 * 0x80,local_a8);
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
                  }
                }
              }
              plVar15 = (longlong *)param_1[0x34d];
              plVar13 = plVar15 + (longlong)(int)param_1[0x34e] * 2;
              for (; plVar15 != plVar13; plVar15 = plVar15 + 2) {
                lVar9 = *plVar15;
                if (lVar9 == 0) {
LAB_140d09664:
                  local_f8 = 0;
                }
                else {
                  lVar14 = FUN_1430228e0();
                  if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar14 + 0x90) * 8) != lVar14 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  local_f8 = lVar9;
                  if (!bVar3) goto LAB_140d09664;
                }
                lStack_f0 = (long)plVar15[1];
                iVar19 = *(int *)(param_2 + 0x378);
                *(int *)(param_2 + 0x378) = iVar19 + 1;
                if (*(int *)(param_2 + 0x37c) < iVar19 + 1) {
                  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar8,iVar19);
                }
                puVar1 = (undefined4 *)(*plVar8 + (longlong)iVar19 * 0x10);
                *puVar1 = (undefined4)local_f8;
                puVar1[1] = local_f8._4_4_;
                puVar1[2] = lStack_f0;
                puVar1[3] = uStack_ec;
              }
              iVar19 = (uint)local_110;
              if ((uint)local_110 != 0) {
                iVar21 = *(int *)(param_2 + 0x388);
                if (*(int *)(param_2 + 0x38c) < (int)((uint)local_110 + iVar21)) {
                  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<128,8>_>,FDefaultAllocator>
                  ::ResizeTo(plVar20);
                  iVar21 = *(int *)(param_2 + 0x388);
                }
                puVar16 = (undefined8 *)((longlong)iVar21 * 0x80 + *plVar20);
                plVar20 = local_118 + 2;
                iVar21 = iVar19;
                do {
                  *puVar16 = 0;
                  iVar2 = (int)plVar20[-1];
                  _Src = (void *)plVar20[-2];
                  *(int *)(puVar16 + 1) = iVar2;
                  if (iVar2 == 0) {
                    *(undefined4 *)((longlong)puVar16 + 0xc) = 0;
                  }
                  else {
                    TArray<unsigned_char,FDefaultAllocator>::ResizeForCopy(puVar16,iVar2,0);
                    _guard_xfg_dispatch_icall_nop((void *)*puVar16,_Src,(longlong)iVar2);
                  }
                  FUN_140a4f390(puVar16 + 2,plVar20);
                  plVar8 = plVar20 + 0xd;
                  plVar20 = plVar20 + 0x10;
                  *(char *)(puVar16 + 0xf) = (char)*plVar8;
                  puVar16 = puVar16 + 0x10;
                  iVar21 = iVar21 + -1;
                } while (iVar21 != 0);
                *(int *)(param_2 + 0x388) = *(int *)(param_2 + 0x388) + iVar19;
              }
              if (local_108 != 0) {
                FMemory::Free(local_108);
              }
              if ((uint)local_110 != 0) {
                plVar20 = local_118 + 10;
                iVar19 = (uint)local_110;
                do {
                  if (plVar20[2] != 0) {
                    FMemory::Free();
                  }
                  if (*plVar20 != 0) {
                    FMemory::Free();
                  }
                  if (plVar20[-2] != 0) {
                    FMemory::Free();
                  }
                  if (plVar20[-4] != 0) {
                    FMemory::Free();
                  }
                  if (plVar20[-10] != 0) {
                    FMemory::Free();
                  }
                  plVar20 = plVar20 + 0x10;
                  iVar19 = iVar19 + -1;
                } while (iVar19 != 0);
              }
              if (local_118 != (longlong *)0x0) {
                FMemory::Free();
              }
            }
          }
        }
        lVar9 = FUN_1413ffe00();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          plVar20 = (longlong *)(param_2 + 0x3e0);
          iVar19 = *(int *)(param_2 + 1000);
          if (iVar19 != 0) {
            plVar8 = (longlong *)(*plVar20 + 8);
            do {
              if (*plVar8 != 0) {
                FMemory::Free();
              }
              plVar8 = plVar8 + 3;
              iVar19 = iVar19 + -1;
            } while (iVar19 != 0);
          }
          *(undefined4 *)(param_2 + 1000) = 0;
          if (*(int *)(param_2 + 0x3ec) != 0) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
            ResizeTo(plVar20,0);
          }
          FUN_140e59870(lVar7 + 0x2950,plVar20,1);
        }
      }
    }
    plVar20 = (longlong *)(param_2 + 0x3f0);
    iVar19 = *(int *)(param_2 + 0x3f8);
    if (iVar19 != 0) {
      plVar8 = (longlong *)(*plVar20 + 0x20);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 6;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    *(undefined4 *)(param_2 + 0x3f8) = 0;
    if (*(int *)(param_2 + 0x3fc) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(plVar20,0);
    }
    plVar8 = (longlong *)param_1[0x30c];
    plVar15 = plVar8 + (longlong)(int)param_1[0x30d] * 2;
    for (; plVar8 != plVar15; plVar8 = plVar8 + 2) {
      if ((*plVar8 != 0) && (*(char *)(*plVar8 + 0x108) == '\0')) {
        iVar19 = *(int *)(param_2 + 0x3f8);
        *(int *)(param_2 + 0x3f8) = iVar19 + 1;
        if (*(int *)(param_2 + 0x3fc) < iVar19 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar20,iVar19);
        }
        FUN_140e3fd80((longlong)iVar19 * 0x30 + *plVar20,*plVar8,(char)plVar8[1]);
      }
    }
    plVar20 = (longlong *)(param_2 + 0x400);
    *(undefined4 *)(param_2 + 0x408) = 0;
    if (*(int *)(param_2 + 0x40c) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar20,0);
    }
    plVar8 = (longlong *)param_1[0x30e];
    plVar15 = plVar8 + (longlong)(int)param_1[0x30f] * 2;
    for (; plVar8 != plVar15; plVar8 = plVar8 + 2) {
      if (*plVar8 != 0) {
        iVar19 = *(int *)(param_2 + 0x408);
        *(int *)(param_2 + 0x408) = iVar19 + 1;
        if (*(int *)(param_2 + 0x40c) < iVar19 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar20,iVar19);
        }
        lVar7 = plVar8[1];
        plVar13 = (longlong *)((longlong)iVar19 * 0x10 + *plVar20);
        *plVar13 = *plVar8;
        *(char *)(plVar13 + 1) = (char)lVar7;
      }
    }
    plVar20 = (longlong *)(param_2 + 0x440);
    iVar19 = *(int *)(param_2 + 0x448);
    if (iVar19 != 0) {
      plVar8 = (longlong *)(*plVar20 + 0x20);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 6;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    *(undefined4 *)(param_2 + 0x448) = 0;
    if (*(int *)(param_2 + 0x44c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeTo(plVar20,0);
    }
    plVar8 = (longlong *)param_1[0x310];
    plVar15 = plVar8 + (longlong)(int)param_1[0x311] * 2;
    for (; plVar8 != plVar15; plVar8 = plVar8 + 2) {
      if (*plVar8 != 0) {
        iVar19 = *(int *)(param_2 + 0x448);
        *(int *)(param_2 + 0x448) = iVar19 + 1;
        if (*(int *)(param_2 + 0x44c) < iVar19 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar20,iVar19);
        }
        FUN_140a4ef20((longlong)iVar19 * 0x30 + *plVar20,*plVar8,(char)plVar8[1]);
      }
    }
    plVar20 = (longlong *)(param_2 + 0x450);
    iVar19 = *(int *)(param_2 + 0x458);
    if (iVar19 != 0) {
      plVar8 = (longlong *)(*plVar20 + 8);
      do {
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        plVar8 = plVar8 + 3;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    *(undefined4 *)(param_2 + 0x458) = 0;
    if (*(int *)(param_2 + 0x45c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (plVar20,0);
    }
    plVar8 = (longlong *)param_1[0x312];
    plVar15 = plVar8 + (longlong)(int)param_1[0x313] * 2;
    for (; plVar8 != plVar15; plVar8 = plVar8 + 2) {
      if (*plVar8 != 0) {
        iVar19 = *(int *)(param_2 + 0x458);
        *(int *)(param_2 + 0x458) = iVar19 + 1;
        if (*(int *)(param_2 + 0x45c) < iVar19 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar20,iVar19);
        }
        FUN_140a7a0b0(*plVar20 + (longlong)iVar19 * 0x18,*plVar8,(char)plVar8[1]);
      }
    }
    if (param_1[399] != 0) {
      FUN_140e59230(param_1[399],param_2 + 0x410);
    }
    uVar5 = FUN_1404cf9f0(param_1 + 0x362);
    *(undefined4 *)(param_2 + 0x460) = uVar5;
    *(undefined4 *)(param_2 + 0x464) = *(undefined4 *)((longlong)param_1 + 0x1c04);
    *(int *)(param_2 + 0x468) = (int)param_1[0x381];
    FUN_140e8b920(param_1 + 0x362,param_2 + 0x470,param_2 + 0x480);
    plVar20 = (longlong *)(param_2 + 0x3a0);
    FUN_140cf9010(plVar20,0);
    pcVar17 = (char *)param_1[0x1cb];
    pcVar22 = pcVar17 + (longlong)(int)param_1[0x1cc] * 0xb8;
    for (; pcVar17 != pcVar22; pcVar17 = pcVar17 + 0xb8) {
      if ((*pcVar17 == '\x04') && (cVar4 = FUN_140b2f430(pcVar17), cVar4 != '\0')) {
        iVar19 = *(int *)(param_2 + 0x3a8);
        *(int *)(param_2 + 0x3a8) = iVar19 + 1;
        if (*(int *)(param_2 + 0x3ac) < iVar19 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar20,iVar19);
        }
        FUN_140ce1220((longlong)iVar19 * 0xb8 + *plVar20,pcVar17);
      }
    }
    *(int *)(param_2 + 0x518) = (int)param_1[0x38e];
    lVar7 = param_1[0xb7];
    if (lVar7 != 0) {
      lVar9 = FUN_14146c5e0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        FUN_14067f6f0(lVar7);
      }
    }
  }
  return;
}



// FUNCTION 140d09c40 FUN_140d09c40 body=7002 status=ok
// SIG undefined FUN_140d09c40(void)

void FUN_140d09c40(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  long lVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong *plVar32;
  longlong *plVar33;
  undefined4 *puVar34;
  byte bVar35;
  uint uVar36;
  ulonglong uVar37;
  uint *puVar38;
  undefined8 *puVar39;
  uint *puVar40;
  longlong *local_res8;
  longlong local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  uint *local_168;
  ulonglong local_160;
  longlong *local_158;
  longlong local_150;
  longlong local_148;
  undefined1 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  uint local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8 [32];
  longlong local_a8;
  longlong local_98;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_58 [24];
  
  uVar29 = 0;
  local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
  local_e8 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140d4d1d0(param_2,param_1[0x14b]);
  FUN_140d4d360(param_2,param_1 + 0x14f);
  *(int *)(param_2 + 0x38) = (int)param_1[0x148] + *(int *)((longlong)param_1 + 0xa3c);
  lVar12 = param_1[0x8c];
  if (lVar12 == 0) {
LAB_140d09cf0:
    local_188._0_4_ = 0;
    local_188._4_4_ = 0;
    uStack_180._0_4_ = 0;
    uStack_180._4_4_ = 0;
  }
  else {
    lVar11 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_140d09cf0;
    local_188._0_4_ = *(undefined4 *)(lVar12 + 0x5e4);
    local_188._4_4_ = *(undefined4 *)(lVar12 + 0x5e8);
    uStack_180._0_4_ = *(undefined4 *)(lVar12 + 0x5ec);
    uStack_180._4_4_ = *(undefined4 *)(lVar12 + 0x5f0);
  }
  FUN_140d4ca70(param_2,&local_188);
  if ((((char)param_1[0x25] == '\x03') &&
      (cVar6 = APlayerController::IsPrimaryPlayer(param_1), cVar6 != '\0')) &&
     (cVar6 = (**(code **)(*param_1 + 0x768))(param_1), cVar6 != '\0')) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    uVar13 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar12 = FUN_140b80130(uVar13);
    if (lVar12 != 0) {
      FUN_140b88870(lVar12,param_2);
      *(undefined4 *)(param_2 + 0x3c) = 0;
    }
  }
  else {
    *(int *)(param_2 + 0x3c) = (int)param_1[0x149] + *(int *)((longlong)param_1 + 0xa44);
  }
  plVar33 = (longlong *)param_1[0x109];
  if (plVar33 != (longlong *)0x0) {
    local_158 = plVar33;
    lVar12 = FUN_1413f82e0();
    if ((*(int *)(plVar33[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar33[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
        lVar12 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      uVar13 = FUN_142e1a5a0();
      lVar11 = (**(code **)(*plVar33 + 0x628))(plVar33,uVar13);
      lVar12 = local_res10;
      param_2 = local_res10;
      if (lVar11 != 0) {
        plVar33 = (longlong *)(local_res10 + 0x80);
        local_178 = (longlong *)0x0;
        uStack_170 = 0;
        lVar20 = *plVar33;
        uVar37 = (ulonglong)*(int *)(local_res10 + 0x88);
        lVar30 = uVar37 * 0x38 + lVar20;
        uVar31 = uVar29;
        uVar28 = uVar29;
        if (lVar20 != lVar30) {
          do {
            if (*(char *)(lVar20 + 0x30) != '\0') {
              iVar8 = (int)uVar28 + 1;
              uStack_170 = CONCAT44(uStack_170._4_4_,iVar8);
              if ((int)uVar31 < iVar8) {
                TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
                ResizeGrow(&local_178,uVar28);
              }
              FUN_140ce1460(local_178 + (longlong)(int)uVar28 * 7,lVar20);
              uVar31 = uStack_170 >> 0x20;
              uVar28 = uStack_170 & 0xffffffff;
            }
            lVar20 = lVar20 + 0x38;
          } while (lVar20 != lVar30);
          uVar37 = (ulonglong)*(uint *)(lVar12 + 0x88);
        }
        if ((int)uVar37 != 0) {
          plVar21 = (longlong *)(*plVar33 + 0x20);
          do {
            if (*plVar21 != 0) {
              FMemory::Free();
            }
            plVar21 = plVar21 + 7;
            uVar36 = (int)uVar37 - 1;
            uVar37 = (ulonglong)uVar36;
          } while (uVar36 != 0);
        }
        *(undefined4 *)(lVar12 + 0x88) = 0;
        if (*(int *)(lVar12 + 0x8c) != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeTo(plVar33,0);
        }
        plVar21 = (longlong *)FUN_1418fce90(lVar11);
        lVar11 = *plVar21;
        lVar20 = (longlong)(int)plVar21[1] * 0xf8 + lVar11;
        for (; lVar11 != lVar20; lVar11 = lVar11 + 0xf8) {
          if (((*(longlong *)(lVar11 + 8) != 0) &&
              (lVar30 = *(longlong *)(*(longlong *)(lVar11 + 8) + 0x30), lVar30 != 0)) &&
             (*(char *)(lVar30 + 0x49) != '\0')) {
            local_138 = FUN_142d5fed0(lVar11);
            local_120 = 0;
            local_118 = (longlong *)0x0;
            local_110 = 0;
            local_130 = 0xffffffff;
            uStack_12c = 0;
            uStack_128 = 0;
            local_res18 = (longlong *)0x0;
            local_108 = local_108 & 0xffffffffffffff00;
            FUN_140d4d2a0(&local_138,lVar30);
            iVar8 = *(int *)(lVar12 + 0x88);
            *(int *)(lVar12 + 0x88) = iVar8 + 1;
            if (*(int *)(lVar12 + 0x8c) < iVar8 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
              ResizeGrow(plVar33,iVar8);
            }
            FUN_140ce1460((longlong)iVar8 * 0x38 + *plVar33,&local_138);
            if (local_118 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
        }
        iVar8 = (int)uStack_170;
        if ((int)uStack_170 != 0) {
          iVar27 = *(int *)(lVar12 + 0x88);
          if (*(int *)(lVar12 + 0x8c) < (int)uStack_170 + iVar27) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeTo(plVar33);
            iVar27 = *(int *)(lVar12 + 0x88);
          }
          local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar8);
          local_168 = (uint *)((longlong)iVar27 * 0x38 + *plVar33);
          puVar38 = (uint *)((longlong)local_178 + 0xc);
          local_res20 = (longlong *)0x0;
          puVar14 = local_168 + 0xb;
          do {
            *local_168 = puVar38[-3];
            puVar14[-3] = 0;
            puVar14[-2] = 0;
            puVar14[-1] = 0;
            puVar14[0] = 0;
            puVar14[-9] = 0xffffffff;
            puVar14[-8] = 0;
            puVar14[-5] = 0;
            puVar14[-4] = 0;
            puVar14[-1] = 0;
            if (0x7fffffff < *puVar14) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar14 + -3,0);
            }
            if (*(undefined2 **)(puVar14 + -3) != (undefined2 *)0x0) {
              **(undefined2 **)(puVar14 + -3) = 0;
            }
            puVar14[-7] = 0;
            puVar14[-9] = puVar38[-1];
            puVar14[-8] = *puVar38;
            puVar14[-7] = puVar38[1];
            local_150 = *(longlong *)(puVar38 + 3);
            FString::FString(&local_148,puVar38 + 5);
            FSoftObjectPath::operator=(puVar14 + -5);
            puVar40 = puVar38 + 9;
            puVar38 = puVar38 + 0xe;
            local_168 = local_168 + 0xe;
            *(char *)(puVar14 + 1) = (char)*puVar40;
            puVar14 = puVar14 + 0xe;
            iVar27 = (int)local_res18 + -1;
            local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar27);
          } while (iVar27 != 0);
          *(int *)(lVar12 + 0x88) = *(int *)(lVar12 + 0x88) + iVar8;
          if ((int)uStack_170 != 0) {
            plVar33 = local_178 + 4;
            iVar8 = (int)uStack_170;
            do {
              if (*plVar33 != 0) {
                FMemory::Free();
              }
              plVar33 = plVar33 + 7;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
        }
        param_2 = local_res10;
        param_1 = local_res8;
        if (local_178 != (longlong *)0x0) {
          FMemory::Free();
          param_2 = local_res10;
          param_1 = local_res8;
        }
      }
      goto LAB_140d0a0b4;
    }
  }
  local_158 = (longlong *)0x0;
LAB_140d0a0b4:
  uVar13 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar12 = FUN_140e7e6f0(uVar13);
  if ((lVar12 != 0) && (cVar6 = FUN_140e74930(lVar12,param_1), cVar6 != '\0')) {
    plVar21 = (longlong *)FUN_140e81e80(lVar12);
    plVar33 = (longlong *)(param_2 + 0x90);
    local_188 = (longlong *)0x0;
    lVar12 = *plVar33;
    uVar28 = (ulonglong)*(int *)(param_2 + 0x98);
    lVar11 = uVar28 * 0x38 + lVar12;
    uStack_180 = 0;
    uVar31 = uVar29;
    if (lVar12 != lVar11) {
      do {
        uVar28 = uStack_180;
        if (*(char *)(lVar12 + 0x34) != '\0') {
          lVar20 = (longlong)(int)(uint)uStack_180;
          iVar8 = (uint)uStack_180 + 1;
          uStack_180 = CONCAT44(uStack_180._4_4_,iVar8);
          if ((int)uVar31 < iVar8) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeGrow(&local_188,uVar28 & 0xffffffff);
          }
          FUN_140ce13a0(local_188 + lVar20 * 7,lVar12);
          uVar31 = uStack_180 >> 0x20;
        }
        lVar12 = lVar12 + 0x38;
      } while (lVar12 != lVar11);
      uVar28 = (ulonglong)*(uint *)(param_2 + 0x98);
    }
    lVar12 = plVar21[1];
    if ((int)uVar28 != 0) {
      plVar22 = (longlong *)(*plVar33 + 0x20);
      do {
        if (*plVar22 != 0) {
          FMemory::Free();
        }
        plVar22 = plVar22 + 7;
        uVar36 = (int)uVar28 - 1;
        uVar28 = (ulonglong)uVar36;
      } while (uVar36 != 0);
    }
    *(undefined4 *)(param_2 + 0x98) = 0;
    if (*(int *)(param_2 + 0x9c) != (int)lVar12) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                (plVar33,(int)lVar12);
    }
    puVar15 = (undefined8 *)*plVar21;
    puVar39 = puVar15 + (longlong)(int)plVar21[1] * 2;
    for (; puVar15 != puVar39; puVar15 = puVar15 + 2) {
      iVar8 = *(int *)(param_2 + 0x98);
      *(int *)(param_2 + 0x98) = iVar8 + 1;
      if (*(int *)(param_2 + 0x9c) < iVar8 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeGrow(plVar33,iVar8);
      }
      FUN_140d21b30((longlong)iVar8 * 0x38 + *plVar33,*puVar15,*(undefined4 *)(puVar15 + 1),
                    *(undefined4 *)((longlong)puVar15 + 0xc));
    }
    iVar8 = (uint)uStack_180;
    uVar31 = (ulonglong)local_res20 >> 0x20;
    local_res20 = (longlong *)CONCAT44((int)uVar31,(uint)uStack_180);
    if ((uint)uStack_180 != 0) {
      iVar27 = *(int *)(param_2 + 0x98);
      if (*(int *)(param_2 + 0x9c) < (int)((uint)uStack_180 + iVar27)) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar33);
        iVar27 = *(int *)(param_2 + 0x98);
      }
      local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar8);
      puVar38 = (uint *)((longlong)iVar27 * 0x38 + *plVar33);
      local_168 = (uint *)0x0;
      puVar40 = (uint *)((longlong)local_188 + 0xc);
      puVar14 = puVar38 + 0xb;
      do {
        *puVar38 = puVar40[-3];
        puVar14[-10] = puVar40[-2];
        puVar14[-3] = 0;
        puVar14[-2] = 0;
        puVar14[-1] = 0;
        puVar14[0] = 0;
        puVar14[-9] = 0xffffffff;
        puVar14[-8] = 0;
        puVar14[-5] = 0;
        puVar14[-4] = 0;
        puVar14[-1] = 0;
        if (0x7fffffff < *puVar14) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar14 + -3,0);
        }
        if (*(undefined2 **)(puVar14 + -3) != (undefined2 *)0x0) {
          **(undefined2 **)(puVar14 + -3) = 0;
        }
        puVar14[-7] = 0;
        puVar14[-9] = puVar40[-1];
        puVar14[-8] = *puVar40;
        puVar14[-7] = puVar40[1];
        local_150 = *(longlong *)(puVar40 + 3);
        FString::FString(&local_148,puVar40 + 5);
        FSoftObjectPath::operator=(puVar14 + -5);
        puVar38 = puVar38 + 0xe;
        puVar14[1] = puVar40[9];
        puVar1 = puVar40 + 10;
        puVar40 = puVar40 + 0xe;
        *(char *)(puVar14 + 2) = (char)*puVar1;
        puVar14 = puVar14 + 0xe;
        iVar8 = (int)local_res18 + -1;
        local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar8);
      } while (iVar8 != 0);
      *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + (int)local_res20;
      param_2 = local_res10;
    }
    if ((uint)uStack_180 != 0) {
      plVar33 = local_188 + 4;
      iVar8 = (uint)uStack_180;
      do {
        if (*plVar33 != 0) {
          FMemory::Free();
        }
        plVar33 = plVar33 + 7;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    param_1 = local_res8;
    if (local_188 != (longlong *)0x0) {
      FMemory::Free();
      param_1 = local_res8;
    }
  }
  plVar33 = local_158;
  if (local_158 != (longlong *)0x0) {
    uVar13 = FUN_1414aa4c0();
    lVar12 = (**(code **)(*plVar33 + 0x628))(plVar33,uVar13);
    if (lVar12 != 0) {
      iVar8 = *(int *)(lVar12 + 0x1d8);
      if (*(int *)(lVar12 + 0x1d8) < (int)param_1[0x147]) {
        iVar8 = (int)param_1[0x147];
      }
      *(int *)(param_2 + 0xa0) = iVar8;
    }
  }
  uVar13 = UGeometryCacheTrackStreamable::GetPrivateStaticClass();
  lVar12 = (**(code **)(*param_1 + 0x628))(param_1,uVar13);
  if (lVar12 != 0) {
    plVar21 = (longlong *)FUN_142274b30(lVar12);
    plVar33 = (longlong *)(param_2 + 0xa8);
    TArray<FNiagaraVariable,TSizedDefaultAllocator<32>_>::Empty(plVar33,(int)plVar21[1]);
    iVar8 = (int)plVar21[1];
    local_188 = (longlong *)0x0;
    uStack_180 = 0;
    uVar31 = uVar29;
    if (0 < iVar8) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(&local_188,iVar8);
      iVar8 = (int)plVar21[1];
      uVar31 = uStack_180 & 0xffffffff;
    }
    plVar21 = (longlong *)*plVar21;
    plVar32 = plVar21 + (longlong)iVar8 * 2;
    plVar22 = local_188;
    for (; plVar21 != plVar32; plVar21 = plVar21 + 2) {
      lVar12 = *plVar21;
      if ((lVar12 != 0) && (*(char *)(lVar12 + 0x60) == '\0')) {
        iVar8 = (int)uVar31;
        for (plVar24 = plVar22; plVar24 != plVar22 + iVar8; plVar24 = plVar24 + 1) {
          if (*plVar24 == lVar12) goto LAB_140d0a4a5;
        }
        iVar27 = *(int *)(param_2 + 0xb0);
        *(int *)(param_2 + 0xb0) = iVar27 + 1;
        if (*(int *)(param_2 + 0xb4) < iVar27 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar33,iVar27);
        }
        FUN_140d1f3a0((longlong)iVar27 * 0x30 + *plVar33,*plVar21,(int)plVar21[1]);
        uVar36 = iVar8 + 1;
        uStack_180 = CONCAT44(uStack_180._4_4_,uVar36);
        if (uStack_180._4_4_ < (int)uVar36) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_188,uVar31);
          plVar22 = local_188;
          uVar36 = (uint)uStack_180;
        }
        uVar31 = (ulonglong)uVar36;
        plVar22[iVar8] = *plVar21;
      }
LAB_140d0a4a5:
    }
    plVar33 = local_158;
    param_1 = local_res8;
    if (plVar22 != (longlong *)0x0) {
      FMemory::Free(plVar22);
      plVar33 = local_158;
      param_1 = local_res8;
    }
  }
  if (plVar33 != (longlong *)0x0) {
    uVar13 = FUN_1414add30();
    lVar11 = (**(code **)(*plVar33 + 0x628))(plVar33,uVar13);
    lVar12 = local_res10;
    if (lVar11 != 0) {
      FUN_140e59770(lVar11,local_res10);
    }
    uVar13 = AGFireballProjectile::GetPrivateStaticClass();
    lVar11 = (**(code **)(*plVar33 + 0x628))(plVar33,uVar13);
    if (lVar11 != 0) {
      local_134 = 0;
      local_130 = 0;
      uStack_12c = 0;
      uStack_128 = 0;
      uStack_124 = 0;
      local_120 = 0;
      local_118 = (longlong *)0x0;
      local_110 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      FUN_14099b6f0(lVar12 + 0xf8,&local_138);
      FUN_14099a9b0(&local_100);
      FUN_14099aa40(&local_110);
      TArray<FSpawnGenerator,FDefaultAllocator>::~TArray<FSpawnGenerator,FDefaultAllocator>
                (&local_120);
      FUN_14099a950(&local_130);
      FUN_1409b4c90(lVar11,lVar12 + 0xf8);
    }
    lVar11 = FUN_140c430a0(plVar33,0);
    if (lVar11 != 0) {
      *(undefined1 *)(lVar11 + 0x368) = 0;
      lVar20 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar20 != 0) {
        *(undefined4 *)(param_1 + 0x29d) = *(undefined4 *)(lVar20 + 0x790);
      }
      plVar33 = (longlong *)(lVar12 + 200);
      local_188 = (longlong *)0x0;
      lVar20 = *plVar33;
      lVar30 = (longlong)*(int *)(lVar12 + 0xd0) * 0xb0 + lVar20;
      uStack_180 = 0;
      local_res18 = plVar33;
      uVar31 = uVar29;
      for (; lVar20 != lVar30; lVar20 = lVar20 + 0xb0) {
        if (*(char *)(lVar20 + 0x78) != '\0') {
          iVar8 = (int)uVar31 + 1;
          uStack_180._4_4_ = (int)(uStack_180 >> 0x20);
          uStack_180 = CONCAT44(uStack_180._4_4_,iVar8);
          if ((int)uVar29 < iVar8) {
            TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow
                      (&local_188,uVar31);
          }
          FUN_140ce1130(local_188 + (longlong)(int)uVar31 * 0x16,lVar20);
          uVar29 = uStack_180 >> 0x20;
          uVar31 = uStack_180 & 0xffffffff;
        }
      }
      local_168 = (uint *)0x0;
      local_160 = 0;
      FUN_142fde510(&local_138);
      FUN_142ff7ce0(lVar11,0,&local_168);
      plVar21 = (longlong *)(lVar12 + 0xb8);
      *(undefined4 *)(lVar12 + 0xc0) = 0;
      if (*(int *)(lVar12 + 0xc4) != (int)local_160) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(plVar21,local_160 & 0xffffffff);
      }
      puVar14 = local_168 + (int)local_160;
      for (puVar38 = local_168; puVar38 != puVar14; puVar38 = puVar38 + 1) {
        cVar6 = FUN_142ffa4f0(lVar11,puVar38,&local_138);
        if (cVar6 != '\0') {
          local_178 = (longlong *)CONCAT44(uStack_124,uStack_128);
          lVar9 = AK::WriteBytesMem::Count((WriteBytesMem *)&local_138);
          iVar8 = *(int *)(lVar12 + 0xc0);
          uStack_170 = CONCAT44(uStack_170._4_4_,lVar9);
          *(int *)(lVar12 + 0xc0) = iVar8 + 1;
          if (*(int *)(lVar12 + 0xc4) < iVar8 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar21,iVar8);
          }
          puVar34 = (undefined4 *)(*plVar21 + (longlong)iVar8 * 0x10);
          *puVar34 = (undefined4)local_178;
          puVar34[1] = local_178._4_4_;
          puVar34[2] = (int)uStack_170;
          puVar34[3] = uStack_170._4_4_;
        }
      }
      local_178 = (longlong *)0x0;
      uStack_170 = 0;
      uVar29 = local_160 >> 0x20;
      local_160 = local_160 & 0xffffffff00000000;
      if ((int)uVar29 != 0) {
        TArray<float,FDefaultAllocator>::ResizeTo(&local_168,0);
      }
      FUN_142ffa060(lVar11,0,&local_168);
      uVar29 = local_160;
      iVar8 = *(int *)(lVar12 + 0xd0);
      iVar27 = (int)local_160;
      plVar21 = (longlong *)*plVar33;
      if (iVar8 != 0) {
        plVar22 = plVar21 + 10;
        do {
          if (plVar22[10] != 0) {
            FMemory::Free();
          }
          if (plVar22[2] != 0) {
            FMemory::Free();
          }
          if (*plVar22 != 0) {
            FMemory::Free();
          }
          if (plVar22[-2] != 0) {
            FMemory::Free();
          }
          if (plVar22[-4] != 0) {
            FMemory::Free();
          }
          if (*plVar21 != 0) {
            FMemory::Free();
          }
          plVar21 = plVar21 + 0x16;
          plVar22 = plVar22 + 0x16;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      *(undefined4 *)(lVar12 + 0xd0) = 0;
      iVar8 = (int)local_160;
      if (*(int *)(lVar12 + 0xd4) != iVar27) {
        TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(plVar33,uVar29 & 0xffffffff);
        iVar8 = (int)local_160;
      }
      if (0 < iVar8) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_178,iVar8);
        iVar8 = (int)local_160;
      }
      puVar14 = local_168 + iVar8;
      for (puVar38 = local_168; puVar38 != puVar14; puVar38 = puVar38 + 1) {
        cVar6 = FUN_142ffa4f0(lVar11,puVar38,&local_138);
        plVar21 = local_118;
        if ((cVar6 != '\0') && (local_118 != (longlong *)0x0)) {
          uVar13 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
          lVar12 = (**(code **)(*plVar21 + 0x628))(plVar21,uVar13);
          plVar21 = local_118;
          if (lVar12 == 0) {
            FUN_14301f8f0();
            lVar12 = (**(code **)(*plVar21 + 0x628))(plVar21);
            if (lVar12 != 0) {
              _guard_xfg_dispatch_icall_nop(local_c8,0,0x68);
              FUN_142ff3000(lVar12,local_c8);
              iVar8 = (int)plVar33[1];
              *(int *)(plVar33 + 1) = iVar8 + 1;
              if (*(int *)((longlong)plVar33 + 0xc) < iVar8 + 1) {
                TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow
                          (plVar33,iVar8);
              }
              lVar20 = *(longlong *)(local_res10 + 200) + (longlong)iVar8 * 0xb0;
              FUN_142fde660(lVar20);
              *(undefined8 *)(lVar20 + 0x80) = 0;
              *(undefined8 *)(lVar20 + 0x98) = 0;
              *(undefined8 *)(lVar20 + 0xa0) = 0;
              *(undefined8 *)(lVar20 + 0xa8) = 0;
              *(undefined4 *)(lVar20 + 0x88) = 0xffffffff;
              *(undefined4 *)(lVar20 + 0x8c) = 0;
              FSoftObjectPath::Reset();
              *(undefined4 *)(lVar20 + 0x90) = 0;
              lVar20 = *(longlong *)(local_res10 + 200) + (longlong)iVar8 * 0xb0;
              FUN_143001d10(lVar20,local_c8);
              *(undefined4 *)(lVar20 + 0x80) = local_110._4_4_;
              if ((local_108 & 1) != 0) {
                *(uint *)(lVar20 + 0x84) = *(uint *)(lVar20 + 0x84) | 1;
              }
              if ((local_108 & 2) != 0) {
                *(uint *)(lVar20 + 0x84) = *(uint *)(lVar20 + 0x84) | 2;
              }
              if ((local_108 & 4) != 0) {
                *(uint *)(lVar20 + 0x84) = *(uint *)(lVar20 + 0x84) | 4;
              }
              cVar6 = FUN_140cdf600(lVar12);
              if (cVar6 != '\0') {
                FUN_140b40850(lVar20,*(undefined8 *)(lVar12 + 0x3f8));
              }
              uVar29 = uStack_170;
              lVar12 = (longlong)(int)uStack_170;
              iVar8 = (int)uStack_170 + 1;
              uStack_170 = CONCAT44(uStack_170._4_4_,iVar8);
              if (uStack_170._4_4_ < iVar8) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_178,uVar29 & 0xffffffff);
              }
              local_178[lVar12] = (longlong)local_118;
              if (local_78 != 0) {
                FMemory::Free();
              }
              if (local_88 != 0) {
                FMemory::Free();
              }
              if (local_98 != 0) {
                FMemory::Free();
              }
              plVar33 = local_res18;
              if (local_a8 != 0) {
                FMemory::Free();
                plVar33 = local_res18;
              }
            }
          }
        }
      }
      lVar11 = (**(code **)(*local_158 + 0xbe8))();
      lVar12 = local_res10;
      plVar33 = (longlong *)(local_res10 + 0xd8);
      iVar8 = *(int *)(lVar11 + 0xb8);
      iVar27 = *(int *)(local_res10 + 0xe0);
      if (iVar27 != 0) {
        plVar21 = (longlong *)(*plVar33 + 0x20);
        do {
          if (plVar21[5] != 0) {
            FMemory::Free();
          }
          if (*plVar21 != 0) {
            FMemory::Free();
          }
          plVar21 = plVar21 + 0xb;
          iVar27 = iVar27 + -1;
        } while (iVar27 != 0);
      }
      *(undefined4 *)(lVar12 + 0xe0) = 0;
      if (*(int *)(lVar12 + 0xe4) != iVar8) {
        TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(plVar33,iVar8);
      }
      plVar22 = local_178;
      lVar20 = *(longlong *)(lVar11 + 0xb0);
      lVar11 = (longlong)*(int *)(lVar11 + 0xb8) * 0x40 + lVar20;
      plVar21 = local_158;
      for (; local_158 = plVar21, lVar20 != lVar11; lVar20 = lVar20 + 0x40) {
        if (*(longlong *)(lVar20 + 0x20) != 0) {
          plVar21 = *(longlong **)(lVar20 + 0x10);
          if (plVar21 != (longlong *)0x0) {
            uVar13 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
            lVar30 = (**(code **)(*plVar21 + 0x628))(plVar21,uVar13);
            if (lVar30 == 0) {
              if (plVar22 != plVar22 + (int)uStack_170) {
                plVar21 = plVar22;
                do {
                  if (*plVar21 == *(longlong *)(lVar20 + 0x10)) {
                    uVar10 = (undefined4)((longlong)plVar21 - (longlong)plVar22 >> 3);
                    goto LAB_140d0aaca;
                  }
                  plVar21 = plVar21 + 1;
                } while (plVar21 != plVar22 + (int)uStack_170);
              }
            }
          }
          uVar10 = 0xffffffff;
LAB_140d0aaca:
          FUN_140d1f110(local_c8,*(undefined8 *)(lVar20 + 0x20),*(undefined8 *)(lVar20 + 0x28),
                        uVar10,*(undefined1 *)(lVar20 + 0x18));
          iVar8 = *(int *)(lVar12 + 0xe0);
          *(int *)(lVar12 + 0xe0) = iVar8 + 1;
          if (*(int *)(lVar12 + 0xe4) < iVar8 + 1) {
            TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar33,iVar8);
          }
          FUN_140ce0ed0((longlong)iVar8 * 0x58 + *plVar33,local_c8);
          if (local_80 != 0) {
            FMemory::Free();
          }
          if (local_a8 != 0) {
            FMemory::Free();
          }
        }
        plVar21 = local_158;
      }
      plVar33 = (longlong *)(**(code **)(*plVar21 + 0xbf0))(plVar21);
      lVar11 = local_res10;
      plVar22 = (longlong *)(local_res10 + 0xe8);
      lVar12 = plVar33[1];
      *(undefined4 *)(local_res10 + 0xf0) = 0;
      if (*(int *)(local_res10 + 0xf4) != (int)lVar12) {
        TArray<float,FDefaultAllocator>::ResizeTo(plVar22);
      }
      plVar32 = local_178;
      uVar29 = 0;
      if (0 < (int)plVar33[1]) {
LAB_140d0ab90:
        plVar23 = (longlong *)(uVar29 * 0xf8 + *plVar33);
        plVar24 = plVar32;
        if ((*plVar23 != 0) && (plVar3 = (longlong *)plVar23[1], plVar3 != (longlong *)0x0)) {
          uVar13 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
          lVar12 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar13);
          if (lVar12 != 0) goto LAB_140d0ac3e;
          for (; plVar24 != plVar32 + (int)uStack_170; plVar24 = plVar24 + 1) {
            if (*plVar24 == plVar23[1]) goto LAB_140d0ac35;
          }
LAB_140d0abf3:
          uVar10 = 0xffffffff;
          goto LAB_140d0abf8;
        }
LAB_140d0ac3e:
        cVar6 = FUN_140c343c0(plVar21);
        if (((cVar6 != '\0') &&
            (lVar12 = (**(code **)(*plVar21 + 0xbe0))(plVar21,uVar29), lVar12 != 0)) &&
           (cVar6 = FUN_140cdf4c0(lVar12), cVar6 != '\0')) {
          uVar13 = FUN_140c428a0(plVar21);
          plVar23 = (longlong *)FUN_140e7fd70(uVar13,lVar12);
          if ((plVar23 != (longlong *)0x0) && (cVar6 = FUN_140cdf470(plVar23), cVar6 != '\0')) {
            uVar13 = UReplicationGraphNode_ConnectionDormanyNode::GetPrivateStaticClass();
            lVar12 = (**(code **)(*plVar23 + 0x628))(plVar23,uVar13);
            if (lVar12 == 0) {
              for (; plVar24 != plVar32 + (int)uStack_170; plVar24 = plVar24 + 1) {
                if ((longlong *)*plVar24 == plVar23) goto LAB_140d0ac35;
              }
              goto LAB_140d0abf3;
            }
          }
        }
        iVar8 = *(int *)(lVar11 + 0xf0);
        *(int *)(lVar11 + 0xf0) = iVar8 + 1;
        if (*(int *)(lVar11 + 0xf4) < iVar8 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar22,iVar8);
        }
        *(undefined4 *)(*plVar22 + (longlong)iVar8 * 4) = 0xffffffff;
        goto LAB_140d0ad0a;
      }
LAB_140d0ad1d:
      plVar33 = local_res18;
      iVar8 = (uint)uStack_180;
      if ((uint)uStack_180 != 0) {
        iVar27 = (int)local_res18[1];
        if (*(int *)((longlong)local_res18 + 0xc) < (int)(iVar27 + (uint)uStack_180)) {
          TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(local_res18);
          iVar27 = (int)plVar33[1];
        }
        lVar11 = (longlong)iVar27 * 0xb0 + *plVar33;
        puVar34 = (undefined4 *)((longlong)local_188 + 0x84);
        lVar12 = lVar11 + 0xac;
        iVar27 = iVar8;
        do {
          FUN_140ce10b0(lVar11,puVar34 + -0x21);
          *(undefined4 *)(lVar12 + -0x2c) = puVar34[-1];
          *(undefined4 *)(lVar12 + -0x28) = *puVar34;
          *(undefined4 *)(lVar12 + -0x14) = 0;
          *(undefined4 *)(lVar12 + -0x10) = 0;
          *(undefined8 *)(lVar12 + -0xc) = 0;
          *(undefined8 *)(lVar12 + -4) = 0;
          *(undefined4 *)(lVar12 + -0x24) = 0xffffffff;
          *(undefined4 *)(lVar12 + -0x20) = 0;
          FSoftObjectPath::Reset();
          *(undefined4 *)(lVar12 + -0x1c) = 0;
          TSoftObjectPtr<UCurveLinearColor>::operator=(lVar12 + -0x24,puVar34 + 1);
          lVar11 = lVar11 + 0xb0;
          lVar12 = lVar12 + 0xb0;
          puVar34 = puVar34 + 0x2c;
          iVar27 = iVar27 + -1;
        } while (iVar27 != 0);
        *(int *)(plVar33 + 1) = (int)plVar33[1] + iVar8;
      }
      if (local_178 != (longlong *)0x0) {
        FMemory::Free(local_178);
      }
      if (local_168 != (uint *)0x0) {
        FMemory::Free();
      }
      FUN_140ce19b0(&local_188);
    }
  }
  plVar33 = local_res8;
  cVar6 = (**(code **)(*local_res8 + 0x768))(local_res8);
  lVar12 = local_res10;
  if ((cVar6 != '\0') && (plVar33[0x18c] != 0)) {
    FUN_140c4fba0(plVar33[0x18c],local_res10);
  }
  lVar11 = (**(code **)(*plVar33 + 0x148))(plVar33);
  if (lVar11 != 0) {
    uVar13 = (**(code **)(*plVar33 + 0x148))(plVar33);
    puVar14 = (uint *)UWorld::GetGameState<APVPGameState>(uVar13);
    local_168 = puVar14;
    if ((puVar14 != (uint *)0x0) && (*(longlong *)(puVar14 + 0x168) != 0)) {
      iVar8 = FUN_140cb6340(puVar14);
      iVar8 = iVar8 + -1;
      local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar8);
      puVar15 = (undefined8 *)FUN_140d3a500(lVar12,iVar8);
      plVar21 = (longlong *)plVar33[0x353];
      local_res20 = plVar21 + (longlong)(int)plVar33[0x354] * 2;
      uVar36 = local_e8;
      if (plVar21 != local_res20) {
        do {
          lVar12 = *plVar21;
          uStack_d8 = plVar21[1];
          local_e0 = lVar12;
          if (lVar12 == 0) {
LAB_140d0af4a:
            bVar5 = false;
          }
          else {
            uVar36 = uVar36 | 1;
            puVar16 = (undefined8 *)UObjectBaseUtility::GetPathName(lVar12,&local_178,0);
            puVar25 = (undefined8 *)*puVar15;
            puVar39 = puVar25 + (longlong)*(int *)(puVar15 + 1) * 3;
            for (; puVar25 != puVar39; puVar25 = puVar25 + 3) {
              if (*(int *)(puVar16 + 1) == 0) {
                puVar19 = &DAT_143f3eda8;
              }
              else {
                puVar19 = (undefined2 *)*puVar16;
              }
              if (*(int *)(puVar25 + 1) == 0) {
                puVar18 = &DAT_143f3eda8;
              }
              else {
                puVar18 = (undefined2 *)*puVar25;
              }
              iVar8 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar18,puVar19);
              if (iVar8 == 0) goto LAB_140d0af4a;
            }
            bVar5 = true;
          }
          if (((uVar36 & 1) != 0) && (uVar36 = 0, local_178 != (longlong *)0x0)) {
            FMemory::Free();
          }
          if (bVar5) {
            plVar33 = (longlong *)UObjectBaseUtility::GetPathName(lVar12,local_58,0);
            FString::FString(&local_150,plVar33);
            local_140 = uStack_d8._3_1_;
            if (*plVar33 != 0) {
              FMemory::Free();
            }
            FUN_140cdcdb0(puVar15,&local_150);
            if (local_150 != 0) {
              FMemory::Free();
            }
          }
          plVar21 = plVar21 + 2;
        } while (plVar21 != local_res20);
        puVar14 = local_168;
        plVar33 = local_res8;
        iVar8 = (int)local_res18;
      }
      local_188 = (longlong *)0x0;
      uStack_180 = 0;
      FUN_142f41be0(*(undefined8 *)(puVar14 + 0x168),plVar33,&local_188);
      lVar12 = local_res10;
      FUN_140d4ce20(local_res10,&local_188,iVar8);
      uVar13 = FUN_140d3b050(lVar12,iVar8);
      FUN_140cc2bc0(puVar14,uVar13,plVar33);
      if (local_188 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
  }
  uVar29 = 0;
  uVar13 = UEnvQueryTest_Random::StaticClass();
  lVar11 = (**(code **)(*plVar33 + 0x628))(plVar33,uVar13);
  if (lVar11 != 0) {
    FUN_140e31350(lVar11,lVar12 + 0x170);
  }
  uVar13 = UBlueprintGeneratedClass::GetPrivateStaticClass();
  lVar11 = (**(code **)(*plVar33 + 0x628))(plVar33,uVar13);
  if (lVar11 != 0) {
    FUN_140e8b980(lVar11,lVar12 + 400,lVar12 + 0x1a0,lVar12 + 0x1b0,lVar12 + 0x1c0);
  }
  cVar6 = (**(code **)(*plVar33 + 0x768))(plVar33);
  if ((cVar6 != '\0') && (plVar33[0x193] != 0)) {
    FUN_140e310c0(plVar33[0x193],lVar12 + 0x1c8);
    ULowEntryExtendedStandardLibrary::DateTime_ToIso8601(plVar33[0x193],lVar12 + 0x2c8);
  }
  plVar21 = local_158;
  if ((local_158 != (longlong *)0x0) && (cVar6 = FUN_140cdf420(local_158), cVar6 != '\0')) {
    FUN_140cf9160(lVar12 + 0x1d8,0);
    FUN_140e59870(plVar21 + 0x52a,lVar12 + 0x1d8,0);
    uVar13 = FUN_142e43690();
    lVar11 = (**(code **)(*plVar21 + 0x628))(plVar21,uVar13);
    plVar33 = local_res8;
    if (lVar11 != 0) {
      lVar20 = lVar12 + 0x1e8;
      TArray<FString,FDefaultAllocator>::Empty(lVar20,0);
      lVar26 = *(longlong *)(lVar11 + 0x2a0);
      lVar30 = lVar26 + (longlong)*(int *)(lVar11 + 0x2a8) * 0x28;
      for (; lVar26 != lVar30; lVar26 = lVar26 + 0x28) {
        if (*(longlong *)(lVar26 + 0x10) != 0) {
          uVar13 = FSoftObjectPath::FSoftObjectPath(&local_150);
          uVar13 = FSoftObjectPath::ToString(uVar13,&local_e0);
          TArray<FString,FDefaultAllocator>::AddUniqueImpl<FString>(lVar20,uVar13);
          if (local_e0 != 0) {
            FMemory::Free();
          }
          if (local_148 != 0) {
            FMemory::Free();
          }
        }
      }
      plVar33 = (longlong *)(lVar12 + 0x208);
      *(undefined4 *)(lVar12 + 0x210) = 0;
      if (*(int *)(lVar12 + 0x214) != 0) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
                  (plVar33,0);
      }
      local_res18 = (longlong *)((ulonglong)local_res18 & 0xffffffff00000000);
      lVar30 = lVar12;
      if (0 < *(int *)(lVar11 + 0x2d0)) {
        local_res20 = (longlong *)0x0;
        uVar31 = uVar29;
        do {
          local_168 = *(uint **)(lVar11 + 0x180);
          iVar8 = *(int *)(lVar12 + 0x210);
          lVar26 = (longlong)iVar8;
          lVar30 = *(longlong *)(lVar11 + 0x2c8);
          *(int *)(lVar12 + 0x210) = iVar8 + 1;
          if (*(int *)(lVar12 + 0x214) < iVar8 + 1) {
            TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar33,iVar8);
          }
          uVar7 = *(undefined1 *)(lVar30 + uVar31);
          uVar2 = *(undefined1 *)(lVar30 + 1 + uVar31);
          lVar4 = *plVar33;
          puVar15 = (undefined8 *)((longlong)(local_168 + 4) + (longlong)local_res20);
          local_res20 = local_res20 + 7;
          *(undefined8 *)(lVar4 + lVar26 * 0x28) = *puVar15;
          *(undefined8 *)(lVar4 + 8 + lVar26 * 0x28) = *(undefined8 *)(lVar30 + 4 + uVar31);
          *(undefined4 *)(lVar4 + 0x10 + lVar26 * 0x28) = *(undefined4 *)(lVar30 + 0xc + uVar31);
          *(undefined8 *)(lVar4 + 0x14 + lVar26 * 0x28) = *(undefined8 *)(lVar30 + 0x10 + uVar31);
          uVar10 = *(undefined4 *)(lVar30 + 0x18 + uVar31);
          uVar31 = uVar31 + 0x34;
          *(undefined1 *)(lVar4 + 0x20 + lVar26 * 0x28) = uVar7;
          iVar8 = (int)local_res18 + 1;
          *(undefined4 *)(lVar4 + 0x1c + lVar26 * 0x28) = uVar10;
          *(undefined1 *)(lVar4 + 0x21 + lVar26 * 0x28) = uVar2;
          local_res18 = (longlong *)CONCAT44(local_res18._4_4_,iVar8);
          plVar21 = local_158;
          lVar30 = local_res10;
        } while (iVar8 < *(int *)(lVar11 + 0x2d0));
      }
      iVar8 = (int)plVar21[0x4db];
      plVar22 = (longlong *)(lVar30 + 0x1f8);
      iVar27 = *(int *)(lVar30 + 0x200);
      if (iVar27 < iVar8) {
        *(int *)(lVar30 + 0x200) = iVar8;
        if (*(int *)(lVar30 + 0x204) < iVar8) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar22);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*plVar22 + (longlong)iVar27 * 4),0,(longlong)(iVar8 - iVar27) << 2);
      }
      else if (iVar8 < iVar27) {
        TArray<int,FDefaultAllocator>::RemoveAtImpl(plVar22,iVar8,iVar27 - iVar8,1);
      }
      plVar32 = local_158;
      uVar31 = uVar29;
      uVar28 = uVar29;
      plVar33 = local_res8;
      lVar12 = local_res10;
      if (0 < (int)plVar21[0x4db]) {
        do {
          *(undefined4 *)(uVar29 + *plVar22) = 0xffffffff;
          if (*(longlong *)(uVar31 + plVar32[0x4da]) != 0) {
            uVar13 = FSoftObjectPath::FSoftObjectPath(&local_150);
            FSoftObjectPath::ToString(uVar13,&local_188);
            if (local_148 != 0) {
              FMemory::Free();
            }
            lVar12 = *plVar22;
            uVar10 = TArray<FString,FDefaultAllocator>::Find(lVar20,&local_188);
            *(undefined4 *)(lVar12 + uVar29) = uVar10;
            if (local_188 != (longlong *)0x0) {
              FMemory::Free();
            }
          }
          uVar36 = (int)uVar28 + 1;
          uVar29 = uVar29 + 4;
          uVar31 = uVar31 + 8;
          uVar28 = (ulonglong)uVar36;
          plVar33 = local_res8;
          lVar12 = local_res10;
        } while ((int)uVar36 < (int)plVar32[0x4db]);
      }
    }
  }
  uVar29 = 0;
  FUN_140a52100(lVar12 + 0x218,plVar33 + 0x323);
  FUN_140a51f90(lVar12 + 0x240,plVar33 + 0x328);
  FUN_140ce2f10(lVar12 + 0x2e8,plVar33 + 0x32a);
  lVar11 = local_res10;
  plVar21 = (longlong *)(local_res10 + 0x250);
  *(char *)(lVar12 + 0x260) = (char)plVar33[0x322];
  lVar12 = plVar33[0x321];
  iVar8 = *(int *)(local_res10 + 600);
  if (iVar8 != 0) {
    plVar33 = (longlong *)(*plVar21 + 0x20);
    do {
      if (*plVar33 != 0) {
        FMemory::Free();
      }
      plVar33 = plVar33 + 6;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(undefined4 *)(lVar11 + 600) = 0;
  if (*(int *)(lVar11 + 0x25c) != (int)lVar12) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar21,(int)lVar12);
  }
  plVar33 = local_res8;
  local_188 = (longlong *)0x0;
  uStack_180 = 0;
  uVar31 = uVar29;
  if (0 < (int)local_res8[0x321]) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&local_188);
    uVar31 = uStack_180 & 0xffffffff;
  }
  plVar22 = (longlong *)plVar33[800];
  plVar32 = plVar22 + (longlong)(int)plVar33[0x321] * 2;
  plVar33 = local_188;
  do {
    if (plVar22 == plVar32) {
      if (plVar33 != (longlong *)0x0) {
        FMemory::Free(plVar33);
      }
      lVar12 = local_res10;
      TSet<TTuple<FName,FNameArray>,TDefaultMapHashableKeyFuncs<FName,FNameArray,0>,FDefaultSetAllocator>
      ::Empty(local_res10 + 0x268,0);
      plVar33 = local_res8;
      local_188 = (undefined8 *)0x0;
      uStack_180 = 0;
      TMapBase<AActor_*,TArray<FHitResult,FDefaultAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor_*,TArray<FHitResult,FDefaultAllocator>,0>_>
      ::GenerateKeyArray<FDefaultAllocator>(local_res8 + 0x315,&local_188);
      puVar25 = local_188;
      puVar15 = local_188 + (int)(uint)uStack_180;
      for (puVar39 = local_188; puVar39 != puVar15; puVar39 = puVar39 + 1) {
        TSet<TTuple<FName,TArray<FAssetData_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAssetData_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
        ::FindId(plVar33 + 0x315,&local_res8,*puVar39);
        if ((((int)local_res8 != -1) &&
            (lVar11 = (longlong)(int)local_res8 * 0x20 + plVar33[0x315], lVar11 != 0)) &&
           (lVar11 = lVar11 + 8, lVar11 != 0)) {
          local_188 = puVar39;
          uStack_180 = lVar11;
          FUN_140cdd700(lVar12 + 0x268,&local_res18,&local_188,0);
        }
      }
      if (puVar25 != (undefined8 *)0x0) {
        FMemory::Free(puVar25);
      }
      if ((((char)plVar33[0x25] == '\x03') &&
          (cVar6 = APlayerController::IsPrimaryPlayer(plVar33), cVar6 != '\0')) &&
         (cVar6 = (**(code **)(*plVar33 + 0x768))(plVar33), cVar6 != '\0')) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((bVar5) && (lVar12 = FUN_140b825a0(plVar33), lVar12 != 0)) {
        uVar7 = ASBZPlayerState::IsMaskOnAnimated(lVar12);
        *(undefined1 *)(local_res10 + 0x310) = uVar7;
      }
      lVar12 = local_res10;
      uVar13 = (**(code **)(*plVar33 + 0x148))(plVar33);
      plVar21 = (longlong *)FUN_140c12480(uVar13);
      if ((plVar21 != (longlong *)0x0) &&
         (lVar11 = (**(code **)(*plVar21 + 0x2b8))(plVar21), lVar11 != 0)) {
        FUN_1408e6f40(lVar11,lVar12 + 0x318);
      }
      if (plVar33[399] != 0) {
        FUN_140e59390(plVar33[399],lVar12 + 0x350);
      }
      uVar13 = (**(code **)(*plVar33 + 0x148))(plVar33);
      pbVar17 = (byte *)FUN_140cb6000(&local_res10,uVar13);
      *(uint *)(lVar12 + 0x3a4) = (uint)*pbVar17;
      uVar13 = (**(code **)(*plVar33 + 0x148))(plVar33);
      bVar35 = FUN_140596bf0(uVar13);
      lVar11 = *(longlong *)(lVar12 + 0x330);
      plVar21 = plVar33 + 0x351;
      *(uint *)(lVar12 + 0x3a8) = (uint)bVar35;
      if ((lVar11 == 0) && (*plVar21 != 0)) {
        *(longlong *)(lVar12 + 0x330) = *plVar21;
      }
      else if ((*plVar21 == 0) && (lVar11 != 0)) {
        *plVar21 = lVar11;
      }
      if (plVar33[400] != 0) {
        uVar29 = FUN_1412994e0();
      }
      if ((*plVar21 != 0) && (uVar29 != 0)) {
        FUN_1424a68c0(uVar29);
      }
      AK::MemoryMgr::StartProfileThreadUsage((long)lVar12);
      return;
    }
    if (*plVar22 != 0) {
      iVar8 = (int)uVar31;
      for (plVar24 = plVar33; plVar24 != plVar33 + iVar8; plVar24 = plVar24 + 1) {
        if (*plVar24 == *plVar22) goto LAB_140d0b552;
      }
      iVar27 = *(int *)(lVar11 + 600);
      *(int *)(lVar11 + 600) = iVar27 + 1;
      if (*(int *)(lVar11 + 0x25c) < iVar27 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar21,iVar27);
      }
      FUN_140d1efa0((longlong)iVar27 * 0x30 + *plVar21,*plVar22,(char)plVar22[1]);
      uVar36 = iVar8 + 1;
      uStack_180 = CONCAT44(uStack_180._4_4_,uVar36);
      if (uStack_180._4_4_ < (int)uVar36) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_188,uVar31);
        plVar33 = local_188;
        uVar36 = (uint)uStack_180;
      }
      uVar31 = (ulonglong)uVar36;
      plVar33[iVar8] = *plVar22;
    }
LAB_140d0b552:
    plVar22 = plVar22 + 2;
  } while( true );
LAB_140d0ac35:
  uVar10 = (undefined4)((longlong)plVar24 - (longlong)plVar32 >> 3);
LAB_140d0abf8:
  iVar8 = *(int *)(lVar11 + 0xf0);
  *(int *)(lVar11 + 0xf0) = iVar8 + 1;
  if (*(int *)(lVar11 + 0xf4) < iVar8 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar22,iVar8);
  }
  *(undefined4 *)(*plVar22 + (longlong)iVar8 * 4) = uVar10;
LAB_140d0ad0a:
  bVar35 = (char)uVar29 + 1;
  uVar29 = (ulonglong)bVar35;
  if ((int)plVar33[1] <= (int)(uint)bVar35) goto LAB_140d0ad1d;
  goto LAB_140d0ab90;
}



// FUNCTION 140d0b7a0 FUN_140d0b7a0 body=133 status=ok
// SIG undefined FUN_140d0b7a0(void)

void FUN_140d0b7a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  thunk_FUN_1427120b0();
  lVar1 = *(longlong *)(param_1 + 0x460);
  if (lVar1 != 0) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(bool *)(lVar1 + 0x5d6) = param_2 != 0, param_2 != 0)) {
      FUN_140cfb650(param_1);
    }
  }
  return;
}



// FUNCTION 140d0b830 FUN_140d0b830 body=222 status=ok
// SIG undefined FUN_140d0b830(void)

void FUN_140d0b830(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined2 *local_18;
  int local_10;
  
  iVar3 = FUN_142235230();
  if (iVar3 == 3) {
    FUN_140d18c40(param_1);
  }
  if ((((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0xc0), lVar1 != 0)) &&
     (lVar2 = *(longlong *)(param_1 + 0xc68), lVar2 != 0)) {
    local_res10 = *(undefined8 *)(lVar1 + 0x18);
    FName::ToString(&local_res10,&local_18);
    puVar4 = &DAT_143f3eda8;
    if (local_10 != 0) {
      puVar4 = local_18;
    }
    FName::FName(&local_res8,puVar4,1);
    if (local_18 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    iVar3 = FUN_142235230(param_1);
    if (iVar3 != 3) {
      FUN_140e1c770(lVar2,local_res8,1);
      iVar3 = FUN_142235230(param_1);
      if (iVar3 != 0) {
        FUN_141305e20(lVar2,local_res8);
      }
    }
  }
  return;
}



// FUNCTION 140d0b910 FUN_140d0b910 body=253 status=ok
// SIG undefined FUN_140d0b910(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140d0b910(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8 [912];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_3e8;
  lVar1 = *(longlong *)(param_1 + 0x910);
  if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x11f8) != 0)) {
    FUN_142dc1ad0(local_3c8);
    if (*(longlong *)(param_1 + 0x920) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x920) + 0x180);
    }
    uVar2 = FFileTable::GetUsedSize(*(undefined8 *)(param_1 + 0x11f8));
    FUN_142dd1b20(local_3c8,uVar3,uVar2);
    FUN_142dcbb60(lVar1,local_3c8);
  }
  FUN_142dd6620(param_1,param_2,param_3);
  if (*(longlong *)(param_1 + 0x1430) != 0) {
    FUN_142fcc4a0(*(longlong *)(param_1 + 0x1430),param_2,param_3);
  }
  FUN_140d1aed0(param_1,param_2,param_3);
  return;
}



// FUNCTION 140d0ba10 FUN_140d0ba10 body=224 status=ok
// SIG undefined FUN_140d0ba10(void)

void FUN_140d0ba10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong local_38;
  undefined1 local_30;
  byte local_2f;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  FUN_142712830();
  iVar3 = FUN_140a77c90(0,*(undefined8 *)(param_1 + 0x498),*(undefined4 *)(param_1 + 0x1918));
  if (iVar3 != -1) {
    *(int *)(param_1 + 0x1918) = iVar3;
  }
  lVar1 = *(longlong *)(param_1 + 0x488);
  if (((lVar1 != 0) && (lVar2 = *(longlong *)(param_1 + 0x460), lVar2 != 0)) &&
     (*(longlong *)(lVar1 + 0x478) != lVar2)) {
    *(longlong *)(lVar1 + 0x478) = lVar2;
  }
  FUN_140d18c40(param_1);
  if ((*(longlong *)(param_1 + 0x978) != 0) &&
     (local_38 = *(longlong *)(param_1 + 0x1a90), local_38 != 0)) {
    local_2f = local_2f & 0xfe;
    local_2c = 0x41800000;
    local_24 = 0x42c80000;
    local_28 = 0x41100000;
    local_10 = 0;
    local_20 = 5;
    local_18 = DAT_14686e078;
    local_30 = 0xe;
    FUN_142db7ff0(*(longlong *)(param_1 + 0x978),&local_38);
  }
  *(undefined1 *)(param_1 + 0xa98) = 0;
  return;
}



// FUNCTION 140d0baf0 FUN_140d0baf0 body=478 status=ok
// SIG undefined FUN_140d0baf0(void)

void FUN_140d0baf0(longlong *param_1,undefined8 param_2,int param_3,byte param_4)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 local_10;
  uint local_c;
  
  if (((char)param_1[0x25] != '\x03') && (lVar4 = param_1[0x8c], lVar4 != 0)) {
    lVar3 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(lVar4 + 0x599) != '\0')) {
      *(undefined1 *)(lVar4 + 0x599) = 0;
      FUN_140d04220(param_1);
      local_c = local_c & 0xfffffffe;
      local_18 = 0;
      local_10 = 0x40000000;
      local_14 = 1;
      (**(code **)(*param_1 + 0xe18))(param_1,param_1[0x91],&local_18);
    }
  }
  if (param_1[0x285] != 0) {
    FUN_1411f8f20();
  }
  if ((param_1[0x151] != 0) && (*(longlong *)(param_1[0x151] + 0x5e8) != 0)) {
    FUN_142eb3570();
  }
  if (param_1[0x152] != 0) {
    *(byte *)(param_1 + 0x153) = param_4 ^ 1;
    FUN_1407665e0(param_1[0x152] + 0x138,param_1);
    FUN_142ee8350(param_1[0x152]);
    param_1[0x152] = 0;
  }
  *(undefined1 *)(param_1 + 0x105) = 1;
  FUN_142dd6670(param_1,param_2,param_3,param_4);
  lVar4 = FUN_1422312c0(param_1);
  if (lVar4 != 0) {
    lVar3 = FUN_14141f270();
    uVar2 = DAT_1469f4590;
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
      FSlateApplication::PollGameDeviceState(DAT_1469f4590);
      FUN_14189a240(uVar2);
      if ((param_3 != 0) || (param_4 != 0)) {
        FUN_1411fbe40(lVar4 + 0x7a0,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140d0bcd0 FUN_140d0bcd0 body=386 status=ok
// SIG undefined FUN_140d0bcd0(void)

void FUN_140d0bcd0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_28;
  undefined4 uStack_1c;
  
  if (param_2 != 0) {
    plVar4 = *(longlong **)(param_1 + 0x1a68);
    plVar5 = plVar4 + (longlong)*(int *)(param_1 + 0x1a70) * 2;
    for (; plVar4 != plVar5; plVar4 = plVar4 + 2) {
      local_28 = *plVar4;
      if (local_28 == 0) {
LAB_140d0bd64:
        local_28 = 0;
      }
      else {
        lVar3 = FUN_1430228e0();
        if ((*(int *)(*(longlong *)(local_28 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(local_28 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140d0bd64;
      }
      lVar3 = plVar4[1];
      iVar6 = *(int *)(param_2 + 0xc0);
      *(int *)(param_2 + 0xc0) = iVar6 + 1;
      if (*(int *)(param_2 + 0xc4) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2 + 0xb8,iVar6);
      }
      puVar1 = (undefined4 *)(*(longlong *)(param_2 + 0xb8) + (longlong)iVar6 * 0x10);
      *puVar1 = (undefined4)local_28;
      puVar1[1] = local_28._4_4_;
      puVar1[2] = (int)lVar3;
      puVar1[3] = uStack_1c;
    }
    lVar3 = FUN_140cff230(param_1);
    if (lVar3 != 0) {
      plVar4 = (longlong *)(param_2 + 0x390);
      if (plVar4 != (longlong *)(lVar3 + 0x508)) {
        iVar6 = *(int *)(param_2 + 0x398);
        if (iVar6 != 0) {
          plVar5 = (longlong *)(*plVar4 + 0x20);
          do {
            if (plVar5[5] != 0) {
              FMemory::Free();
            }
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            FUN_140ce1840(plVar5 + -2);
            plVar5 = plVar5 + 0xc;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        FUN_140cdd300(plVar4,*(longlong *)(lVar3 + 0x508),*(undefined4 *)(lVar3 + 0x510),
                      *(undefined4 *)(param_2 + 0x39c),0);
      }
    }
  }
  return;
}



// FUNCTION 140d0be70 FUN_140d0be70 body=260 status=ok
// SIG undefined FUN_140d0be70(void)

void FUN_140d0be70(longlong *param_1,undefined4 param_2,char param_3)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  bVar2 = false;
  if ((char)param_1[0x25] == '\x03') {
    uVar5 = (**(code **)(*param_1 + 0x148))();
    lVar7 = UGameplayStatics::GetGameMode(uVar5);
    if (lVar7 != 0) {
      lVar6 = FUN_14293bdd0();
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
        bVar2 = 1 < *(int *)(lVar7 + 0x510);
      }
    }
  }
  else {
    bVar2 = true;
  }
  bVar3 = true;
  lVar7 = FUN_14270bb10(param_1);
  if (((lVar7 != 0) && (*(longlong *)(lVar7 + 0x70) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(lVar7 + 0x70) + 0xb0), plVar1 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*plVar1 + 0x68))();
    bVar3 = true;
    if (cVar4 == '\0') {
      bVar3 = false;
    }
  }
  if (((param_3 == '\0') && (((char)param_1[0x20c] == '\0' || (bVar2)))) && (bVar3)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  FUN_142712bf0(param_1,param_2,uVar8);
  return;
}



// FUNCTION 140d0bf80 FUN_140d0bf80 body=162 status=ok
// SIG undefined FUN_140d0bf80(void)

void FUN_140d0bf80(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_18;
  ulonglong local_10;
  
  puVar1 = PTR_DAT_14629a5a8;
  local_18 = 0;
  local_10 = 0;
  if ((PTR_DAT_14629a5a8 != (undefined *)0x0) && (*(short *)PTR_DAT_14629a5a8 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_14629a5a8 + lVar3 * 2) != 0);
    uVar2 = (int)lVar3 + 1;
    local_10 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,puVar1,(longlong)(int)uVar2 * 2);
  }
  FUN_140d025a0(param_1,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d0c030 FUN_140d0c030 body=162 status=ok
// SIG undefined FUN_140d0c030(void)

void FUN_140d0c030(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong local_18;
  ulonglong local_10;
  
  puVar1 = PTR_DAT_14629a5a8;
  local_18 = 0;
  local_10 = 0;
  if ((PTR_DAT_14629a5a8 != (undefined *)0x0) && (*(short *)PTR_DAT_14629a5a8 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_14629a5a8 + lVar3 * 2) != 0);
    uVar2 = (int)lVar3 + 1;
    local_10 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    }
    FGenericPlatformString::Memcpy(local_18,puVar1,(longlong)(int)uVar2 * 2);
  }
  FUN_140d0dc60(param_1,&local_18);
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d0c0e0 FUN_140d0c0e0 body=25 status=ok
// SIG undefined FUN_140d0c0e0(void)

void FUN_140d0c0e0(longlong *param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140d0c0f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xca8))(param_1,-(param_2 * *(float *)(param_1 + 0x29a)));
  return;
}



// FUNCTION 140d0c100 FUN_140d0c100 body=138 status=ok
// SIG undefined FUN_140d0c100(void)

void FUN_140d0c100(longlong *param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = 0.15;
  if ((0.15 <= param_2) || (param_2 <= -0.15)) {
    if (0.0 < param_2) {
      fVar2 = -0.15;
    }
    fVar2 = (param_2 + fVar2) * 1.1764705;
  }
  else {
    fVar2 = 0.0;
  }
  lVar1 = FUN_140cff230();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x2b) != '\0')) {
    fVar2 = -fVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d0c183. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc98))(param_1,-(fVar2 * *(float *)((longlong)param_1 + 0x14cc)));
  return;
}



// FUNCTION 140d0c190 FUN_140d0c190 body=18 status=ok
// SIG undefined FUN_140d0c190(void)

void FUN_140d0c190(longlong *param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140d0c19b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xca8))(param_1,param_2 * *(float *)(param_1 + 0x29a));
  return;
}



// FUNCTION 140d0c1b0 FUN_140d0c1b0 body=131 status=ok
// SIG undefined FUN_140d0c1b0(void)

void FUN_140d0c1b0(longlong *param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = 0.15;
  if ((0.15 <= param_2) || (param_2 <= -0.15)) {
    if (0.0 < param_2) {
      fVar2 = -0.15;
    }
    fVar2 = (param_2 + fVar2) * 1.1764705;
  }
  else {
    fVar2 = 0.0;
  }
  lVar1 = FUN_140cff230();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x2c) != '\0')) {
    fVar2 = -fVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d0c22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xca0))(param_1,fVar2 * *(float *)((longlong)param_1 + 0x14cc));
  return;
}



// FUNCTION 140d0c240 FUN_140d0c240 body=74 status=ok
// SIG undefined FUN_140d0c240(void)

void FUN_140d0c240(longlong *param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140cff230();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x35) != '\0')) {
    param_2 = -param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000140d0c283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc98))(param_1,param_2 * *(float *)((longlong)param_1 + 0x14d4));
  return;
}



// FUNCTION 140d0c290 FUN_140d0c290 body=18 status=ok
// SIG undefined FUN_140d0c290(void)

void FUN_140d0c290(longlong *param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140d0c29b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xca8))(param_1,param_2 * *(float *)(param_1 + 0x29b));
  return;
}



// FUNCTION 140d0c2b0 FUN_140d0c2b0 body=18 status=ok
// SIG undefined FUN_140d0c2b0(void)

void FUN_140d0c2b0(longlong *param_1,float param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000140d0c2bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xca0))(param_1,param_2 * *(float *)((longlong)param_1 + 0x14d4));
  return;
}



// FUNCTION 140d0c2d0 FUN_140d0c2d0 body=1037 status=ok
// SIG undefined FUN_140d0c2d0(void)

void FUN_140d0c2d0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 local_res10 [8];
  longlong local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar8 = DAT_146b33f38;
  lVar10 = DAT_146b33f38 + 0xa0;
  lVar7 = FWeakObjectPtr::Get(lVar10);
  if (lVar7 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar8 + 0xa8)) {
      return;
    }
    if (*(longlong *)(lVar8 + 0xb0) == 0) {
      return;
    }
    lVar7 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar10,lVar7);
    if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar8 + 0xa8) = DAT_1464b56f4;
    }
    lVar7 = FWeakObjectPtr::Get(lVar10);
    if (lVar7 == 0) {
      return;
    }
  }
  lVar8 = FUN_1413bd170();
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
      lVar8 + 0x88)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    uVar9 = FUN_14301f8f0();
    lVar8 = (**(code **)(*param_2 + 0x628))(param_2,uVar9);
    if (lVar8 != 0) {
      if (*(longlong *)(lVar7 + 0x210) != 0) {
        iVar5 = FUN_140cfc570(param_1,param_2);
        iVar6 = (**(code **)(*param_1 + 0x1028))(param_1,*(undefined8 *)(lVar7 + 0x210));
        if (iVar6 < iVar5) {
          return;
        }
      }
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      lVar8 = DAT_146b33f38;
      lVar10 = DAT_146b33f38 + 0xa0;
      lVar7 = FWeakObjectPtr::Get(lVar10);
      if (lVar7 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if (DAT_1464b56f4 == *(int *)(lVar8 + 0xa8)) {
          return;
        }
        if (*(longlong *)(lVar8 + 0xb0) == 0) {
          return;
        }
        lVar7 = FUN_141796df0();
        FWeakObjectPtr::operator=(lVar10,lVar7);
        if ((lVar7 != 0) || (DAT_1469e7e10 == '\0')) {
          LOCK();
          if (DAT_1464b56f4 == 0) {
            DAT_1464b56f4 = 0;
          }
          UNLOCK();
          *(int *)(lVar8 + 0xa8) = DAT_1464b56f4;
        }
        lVar7 = FWeakObjectPtr::Get(lVar10);
        if (lVar7 == 0) {
          return;
        }
      }
      lVar8 = FUN_1413bd170();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        uVar9 = FUN_14301f8f0();
        lVar8 = (**(code **)(*param_2 + 0x628))(param_2,uVar9);
        if (lVar8 != 0) {
          FUN_14145d5e0(param_1);
          param_1[0x388] = (longlong)param_2;
          iVar5 = FUN_140cfc570(param_1,param_2);
          FUN_142ffd340(local_48,lVar8,param_3,param_4,1);
          uStack_60 = 0;
          local_68._0_4_ = SUB84(param_2,0);
          local_68._4_4_ = (undefined4)((ulonglong)param_2 >> 0x20);
          local_80 = 0;
          local_78 = 0;
          local_38 = (undefined4)local_68;
          uStack_34 = local_68._4_4_;
          uStack_30 = 0;
          uStack_2c = 0;
          local_68 = param_2;
          FUN_142c90ad0(lVar7 + 0x250,&local_80,param_2,&local_38,0,local_res10);
          lVar8 = FUN_140b88f70(lVar8,local_48);
          param_1[0x389] = lVar8;
          if (lVar8 != 0) {
            if (*(longlong *)(lVar7 + 0x210) != 0) {
              (**(code **)(*param_1 + 0x1030))(param_1,-iVar5);
            }
            FUN_14223d380(param_1[0x389],1);
            local_50 = param_1[0x389];
            local_58 = param_1;
            TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                      (param_1 + 0x38a,&local_58);
            (**(code **)(*param_1 + 0x260))(param_1);
          }
          FUN_142ca9970(&local_80,1);
          if ((int)local_78 != 0) {
            plVar11 = (longlong *)(local_80 + 8);
            iVar5 = (int)local_78;
            do {
              plVar3 = (longlong *)*plVar11;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar3 + 1;
                lVar8 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
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
              plVar11 = plVar11 + 2;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          if (local_80 != 0) {
            FMemory::Free();
          }
          if (local_48[0] != 0) {
            FMemory::Free();
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140d0c6e0 FUN_140d0c6e0 body=431 status=ok
// SIG undefined FUN_140d0c6e0(void)

void FUN_140d0c6e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 local_98 [2];
  undefined8 local_90;
  longlong lStack_88;
  ulonglong local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  longlong lStack_68;
  ulonglong local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38 [2];
  undefined8 local_30;
  longlong local_28;
  int local_20;
  undefined4 local_1c;
  
  local_78[0] = 0;
  local_60 = 0;
  local_98[0] = 0;
  local_80 = 0;
  local_70 = 0;
  lStack_68 = 0;
  local_90 = 0;
  lStack_88 = 0;
  FUN_140d08340(0,param_3,local_78);
  FUN_140d08340(param_1,param_4,local_98);
  iVar4 = (int)local_80;
  local_58[0] = local_98[0];
  local_50 = local_90;
  local_48 = 0;
  local_40 = (int)local_80;
  if ((int)local_80 == 0) {
    local_3c = 0;
  }
  else {
    TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(&local_48,local_80 & 0xffffffff,0);
    lVar3 = local_48 + 0x20;
    lVar2 = lStack_88 + 0x20;
    do {
      FString::FString(lVar3 + -0x20,lVar2 + -0x20);
      FString::FString(lVar3 + -0x10,lVar2 + -0x10);
      FText::FText(lVar3,lVar2);
      puVar1 = (undefined4 *)(lVar2 + 0x18);
      lVar2 = lVar2 + 0x40;
      *(undefined4 *)(lVar3 + 0x18) = *puVar1;
      lVar3 = lVar3 + 0x40;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = (int)local_60;
  local_38[0] = local_78[0];
  local_30 = local_70;
  local_28 = 0;
  local_20 = (int)local_60;
  if ((int)local_60 == 0) {
    local_1c = 0;
  }
  else {
    TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(&local_28,local_60 & 0xffffffff,0);
    lVar2 = local_28 + 0x20;
    lVar3 = lStack_68 + 0x20;
    do {
      FString::FString(lVar2 + -0x20,lVar3 + -0x20);
      FString::FString(lVar2 + -0x10,lVar3 + -0x10);
      FText::FText(lVar2,lVar3);
      puVar1 = (undefined4 *)(lVar3 + 0x18);
      lVar3 = lVar3 + 0x40;
      *(undefined4 *)(lVar2 + 0x18) = *puVar1;
      lVar2 = lVar2 + 0x40;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_141461710(param_1,param_2,local_38,local_58);
  FUN_140ce1790(&lStack_88);
  FUN_140ce1790(&lStack_68);
  return;
}



// FUNCTION 140d0c890 FUN_140d0c890 body=797 status=ok
// SIG undefined FUN_140d0c890(void)

void FUN_140d0c890(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 local_res10;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  FUN_142dd7000();
  lVar11 = param_1[0xa1];
  if (lVar11 == 0) {
    return;
  }
  lVar7 = ULocalPlayer::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
      != lVar7 + 0x88)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    return;
  }
  lVar7 = FUN_1422312c0(param_1);
  if (lVar7 != 0) {
    lVar8 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (bVar6) goto LAB_140d0c950;
  }
  lVar7 = 0;
LAB_140d0c950:
  if (param_1[0x285] == 0) {
    uVar9 = GetTransientPackage();
    FUN_1417846f0(uVar9,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar10 = UUGCampaignMutator::GetPrivateStaticClass();
    lVar8 = FUN_1417985e0(uVar10,uVar9,0,0,0,0,0,0,0);
    param_1[0x285] = lVar8;
    FUN_1411e9110(lVar8,param_1);
  }
  lVar8 = FUN_142547b50(lVar11,local_48);
  lVar11 = *(longlong *)(lVar8 + 8);
  plVar4 = *(longlong **)(lVar8 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_48[0] = &PTR_FUN_143f740c8;
  if (local_30 != 0) {
    FMemory::Free();
  }
  local_48[0] = &PTR_FUN_143f73d18;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_38 + 1;
    lVar8 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  if (lVar11 != 0) {
    uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar8 = FUN_140d3a420(uVar9);
    if (lVar8 != 0) {
      local_68 = (undefined4)lVar11;
      uStack_64 = (undefined4)((ulonglong)lVar11 >> 0x20);
      uStack_60 = SUB84(plVar4,0);
      uStack_5c = (undefined4)((ulonglong)plVar4 >> 0x20);
      local_58 = local_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      lVar11 = FUN_140d3a750(lVar8,&local_58);
      plVar5 = (longlong *)CONCAT44(uStack_4c,uStack_50);
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
      if (lVar11 != 0) {
        param_1[0x10b] = lVar11;
        FUN_140ce6870(param_1);
        TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x271);
      }
    }
  }
  FName::FName(&local_res10,"NOT AVAILABLE",1);
  lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
  if (*(longlong *)(lVar11 + 0x38) != 0) {
    lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    local_res10 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar11 + 0x38) + 0x10) + 0x18);
  }
  FUN_140bf3f60(lVar7,0,&local_res10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar11 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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



// FUNCTION 140d0cbb0 FUN_140d0cbb0 body=507 status=ok
// SIG undefined FUN_140d0cbb0(void)

void FUN_140d0cbb0(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res20 [8];
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    uVar8 = 0;
    if (param_2 != (longlong *)0x0) {
      uVar2 = FUN_142e79d90();
      lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
      if ((lVar3 != 0) && (lVar5 = *(longlong *)(param_1 + 0x17d8), lVar5 != 0)) {
        uVar10 = uVar8;
        uVar12 = uVar8;
        if (0 < *(int *)(lVar3 + 0x370)) {
          do {
            plVar11 = (longlong *)(*(longlong *)(lVar3 + 0x368) + uVar12);
            if ((((int)plVar11[1] != 0) &&
                (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) &&
               (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_res8),
               *plVar4 == lVar5)) {
              if (((int)plVar11[1] != 0) &&
                 (plVar4 = (longlong *)*plVar11, plVar4 != (longlong *)0x0)) {
                (**(code **)(*plVar4 + 0x28))(plVar4,0);
                if (*plVar11 != 0) {
                  lVar5 = FMemory::Realloc(*plVar11,0,0);
                  *plVar11 = lVar5;
                }
                *(undefined4 *)(plVar11 + 1) = 0;
              }
              break;
            }
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
            uVar12 = uVar12 + 0x10;
          } while ((int)uVar9 < *(int *)(lVar3 + 0x370));
        }
        FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(lVar3 + 0x368),0)
        ;
        *(undefined8 *)(param_1 + 0x17d8) = 0;
      }
    }
    if (param_3 != (longlong *)0x0) {
      uVar2 = FUN_142e79d90();
      lVar3 = (**(code **)(*param_3 + 0x628))(param_3,uVar2);
      if (lVar3 != 0) {
        FWeakObjectPtr::operator=(&local_res8,param_1);
        plVar11 = (longlong *)(lVar3 + 0x368);
        plVar4 = (longlong *)FMemory::Realloc(0,0x20);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_GetPoolName_1444f8890;
          *(undefined4 *)(plVar4 + 1) = local_res8;
          *(undefined4 *)((longlong)plVar4 + 0xc) = local_resc;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar4[3] = lVar5;
          *plVar4 = (longlong)&PTR_GetPoolName_1444f88d8;
          FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar11,1);
          puVar6 = (ulonglong *)(**(code **)(*plVar4 + 0x20))(plVar4,local_res20);
          iVar1 = *(int *)(lVar3 + 0x370);
          uVar8 = *puVar6;
          *(int *)(lVar3 + 0x370) = iVar1 + 1;
          if (*(int *)(lVar3 + 0x374) < iVar1 + 1) {
            TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar1);
          }
          puVar7 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar11);
          *puVar7 = plVar4;
          *(undefined4 *)(puVar7 + 1) = 2;
        }
        *(ulonglong *)(param_1 + 0x17d8) = uVar8;
        FUN_140d03970(param_1,lVar3);
      }
    }
  }
  return;
}



// FUNCTION 140d0cdc0 FUN_140d0cdc0 body=8 status=ok
// SIG undefined FUN_140d0cdc0(void)

void FUN_140d0cdc0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x1149) = 1;
  return;
}



// FUNCTION 140d0cdd0 FUN_140d0cdd0 body=34 status=ok
// SIG undefined FUN_140d0cdd0(void)

void FUN_140d0cdd0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lStackX_8;
  
  if (*(longlong *)(param_1 + 0xa88) == 0) {
    return;
  }
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa88) + 0x658);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  lVar6 = (**(code **)(*plVar3 + 0x148))();
  if (lVar6 != 0) {
    lVar6 = (**(code **)(*plVar3 + 0x148))(plVar3);
    lVar6 = *(longlong *)(lVar6 + 0x148);
    if (lVar6 != 0) {
      lVar7 = FUN_141424d10();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        plVar9 = *(longlong **)(lVar6 + 0x9e8);
        plVar1 = plVar9 + *(int *)(lVar6 + 0x9f0);
        for (; plVar9 != plVar1; plVar9 = plVar9 + 1) {
          lStackX_8 = *plVar9;
          if (lStackX_8 != 0) {
            plVar8 = (longlong *)plVar3[0xcb];
            plVar2 = plVar8 + (int)plVar3[0xcc];
            for (; plVar8 != plVar2; plVar8 = plVar8 + 1) {
              if (*plVar8 == lStackX_8) goto LAB_1410a2cfb;
            }
            lVar6 = FWeakObjectPtr::Get(plVar3 + 0xbb);
            if (lVar6 != 0) {
              lVar7 = FUN_14145f370();
              if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if ((((bVar4) && (lVar6 = FUN_140cff230(lVar6), lVar6 != 0)) &&
                  (cVar5 = FUN_140d288b0(lVar6), cVar5 != '\0')) &&
                 ((TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
                   AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar3 + 0xcb,&lStackX_8),
                  plVar3[0xcd] == 0 && (lVar6 = FUN_140eccbe0(plVar3), lVar6 != 0)))) {
                FUN_140ccd600(lVar6,1);
              }
            }
          }
LAB_1410a2cfb:
        }
      }
    }
  }
  return;
}



// FUNCTION 140d0cdf0 FUN_140d0cdf0 body=78 status=ok
// SIG undefined FUN_140d0cdf0(void)

undefined1 FUN_140d0cdf0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_140cff230();
  if (lVar2 != 0) {
    cVar1 = FUN_140ab8500(lVar2 + 0x4c0,param_2);
    if (cVar1 != '\0') {
      *(undefined1 *)(param_1 + 0xa51) = 1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140d0ce40 FUN_140d0ce40 body=487 status=ok
// SIG undefined FUN_140d0ce40(void)

void FUN_140d0ce40(longlong *param_1)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  wchar_t *pwVar7;
  undefined8 local_res8;
  code *local_18;
  ulonglong uStack_10;
  
  if ((((*(uint *)((longlong)param_1 + 0x4cc) >> 1 & 1) != 0) &&
      (cVar3 = (**(code **)(*param_1 + 0x768))(), cVar3 != '\0')) && (param_1[0x132] != 0)) {
    lVar4 = FUN_140c430a0(param_1[0x132],0);
    if (lVar4 != 0) {
      local_18 = FUN_140d05420;
      uStack_10 = uStack_10 & 0xffffffff00000000;
      plVar5 = (longlong *)
               TBaseMulticastDelegate<void>::AddUObject<UHelloNeighborGameInstance>
                         (lVar4 + 0x2c0,&local_res8,param_1,&local_18);
      param_1[0x29c] = *plVar5;
    }
    plVar5 = (longlong *)param_1[0x132];
    uVar6 = FUN_1414aa4c0();
    lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
    if (lVar4 != 0) {
      uStack_10 = uStack_10 & 0xffffffff00000000;
      local_18 = FUN_140d04be0;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakPlayerController::OnLevelChanged",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar7, pwVar1 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res8,pwVar2 + 2,1);
      FUN_1407260e0(lVar4 + 0x1b0,param_1,&local_18,local_res8);
    }
    if (param_1[0x18c] != 0) {
      uStack_10 = uStack_10 & 0xffffffff00000000;
      local_18 = FUN_140d058d0;
      pwVar7 = _guard_xfg_dispatch_icall_nop(L"&AOakPlayerController::OnMissionDataChanged",L"::");
      pwVar2 = (wchar_t *)0x0;
      while (pwVar1 = pwVar7, pwVar1 != (wchar_t *)0x0) {
        pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
        pwVar2 = pwVar1;
      }
      FName::FName(&local_res8,pwVar2 + 2,1);
      FUN_1407260e0(param_1[0x18c] + 0x178,param_1,&local_18,local_res8);
    }
  }
  return;
}



// FUNCTION 140d0d030 FUN_140d0d030 body=422 status=ok
// SIG undefined FUN_140d0d030(void)

void FUN_140d0d030(longlong *param_1,int param_2,int param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + 0x68 + (longlong)param_2 * 0xb8);
    iVar6 = param_3;
    do {
      FUN_1404bf980(plVar7 + 4);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      if (plVar7[-3] != 0) {
        FMemory::Free();
      }
      plVar3 = (longlong *)plVar7[-5];
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
      plVar3 = (longlong *)plVar7[-8];
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
      plVar3 = (longlong *)plVar7[-0xb];
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
      plVar7 = plVar7 + 0x17;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = (int)param_1[1];
    iVar5 = (iVar6 - param_2) - param_3;
    if (iVar5 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0xb8),
                 (void *)((longlong)(param_2 + param_3) * 0xb8 + *param_1),(longlong)iVar5 * 0xb8);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 - param_3;
    if (param_4 != '\0') {
      TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140d0d1e0 FUN_140d0d1e0 body=29 status=ok
// SIG undefined FUN_140d0d1e0(void)

void FUN_140d0d1e0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x14a0) = 0xbf800000;
  *(undefined1 *)(param_1 + 0x1814) = 0;
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x8e0);
  return;
}



// FUNCTION 140d0d200 NewProp_bSkipWallChecks_SetBit body=8 status=ok
// SIG undefined NewProp_bSkipWallChecks_SetBit(void)

void Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xa51) = 1;
  return;
}



// FUNCTION 140d0d210 FUN_140d0d210 body=275 status=ok
// SIG undefined FUN_140d0d210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140d0d210(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x1308);
  if (*(longlong *)(param_1 + 0x1308) == 0) {
    lVar3 = param_1 + 0x1290;
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x1310) * 0x3c + lVar3;
  if (lVar3 != lVar2) {
    puVar1 = (undefined8 *)(lVar3 + 0x20);
    do {
      lVar3 = lVar3 + 0x3c;
      *(undefined8 *)((longlong)puVar1 + -0x1c) = _DAT_1468b5d90;
      *(undefined4 *)((longlong)puVar1 + -0x14) = DAT_1468b5d98;
      *puVar1 = _DAT_1468b5d90;
      *(undefined4 *)(puVar1 + 1) = DAT_1468b5d98;
      puVar1[-2] = DAT_1468b5da0;
      *(undefined4 *)(puVar1 + -1) = DAT_1468b5da8;
      *(undefined8 *)((longlong)puVar1 + 0xc) = DAT_1468b5da0;
      *(undefined4 *)((longlong)puVar1 + 0x14) = DAT_1468b5da8;
      *(undefined4 *)((longlong)puVar1 + -4) = 0xbf800000;
      *(undefined4 *)(puVar1 + 3) = 0xbf800000;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x3c);
    } while (lVar3 != lVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x1358);
  if (*(longlong *)(param_1 + 0x1358) == 0) {
    lVar3 = param_1 + 0x1318;
  }
  lVar2 = lVar3 + (longlong)*(int *)(param_1 + 0x1360) * 0x14;
  if (lVar3 != lVar2) {
    puVar1 = (undefined8 *)(lVar3 + 8);
    do {
      lVar3 = lVar3 + 0x14;
      *puVar1 = DAT_1468b5da0;
      *(undefined4 *)(puVar1 + 1) = DAT_1468b5da8;
      puVar1 = (undefined8 *)((longlong)puVar1 + 0x14);
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 140d0d330 FUN_140d0d330 body=145 status=ok
// SIG undefined FUN_140d0d330(void)

void FUN_140d0d330(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0xcc;
  lVar2 = param_1[0x287];
  if (param_1[0x287] == 0) {
    lVar2 = 0xcc;
    if (param_1[0x289] != 0) {
      lVar2 = param_1[0x289];
    }
  }
  local_res8 = 0;
  (**(code **)(*param_1 + 0xe98))(param_1,lVar2);
  cVar1 = (**(code **)(*param_1 + 0xfb8))(param_1);
  if (cVar1 != '\0') {
    FName::FName(&local_res8,L"Photo_Offset",1);
    if (param_1[0x286] != 0) {
      FUN_142fccb00(param_1[0x286],local_res8,0,1);
    }
  }
  return;
}



// FUNCTION 140d0d3f0 FUN_140d0d3f0 body=142 status=ok
// SIG undefined FUN_140d0d3f0(void)

void FUN_140d0d3f0(longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xb8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xb8,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 140d0d480 FUN_140d0d480 body=266 status=ok
// SIG undefined FUN_140d0d480(void)

void FUN_140d0d480(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x48);
  if (uVar1 < 4) {
    uVar5 = 3;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x4c) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x14,0);
    uVar5 = (uint)(uVar2 / 0x14);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x4c) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x40);
  if (uVar5 < 4) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x14);
    pvVar3 = *(void **)((longlong)param_1 + 0x40);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x14,0);
        *(void **)((longlong)param_1 + 0x40) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x14);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x14;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar4;
  return;
}



// FUNCTION 140d0d590 FUN_140d0d590 body=255 status=ok
// SIG undefined FUN_140d0d590(void)

void FUN_140d0d590(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x80);
  if (uVar1 < 3) {
    uVar5 = 2;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x84) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x3c,0);
    uVar5 = (uint)(uVar2 / 0x3c);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x84) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x78);
  if (uVar5 < 3) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x3c);
    pvVar3 = *(void **)((longlong)param_1 + 0x78);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x3c,0);
        *(void **)((longlong)param_1 + 0x78) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x3c);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x3c;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x78) = uVar4;
  return;
}



// FUNCTION 140d0d690 ResizeShrink body=171 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar6 - iVar5);
  if ((0x3fff < uVar2 * 0xb8) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0xb8,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 7);
      }
      goto LAB_140d0d70a;
    }
    if (iVar5 == 0) goto LAB_140d0d70a;
  }
  iVar5 = iVar6;
LAB_140d0d70a:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0xb8,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 140d0d740 ResizeTo body=130 status=ok
// SIG undefined ResizeTo(void)

void TArray<FOnlineSessionSearchResult,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xb8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if (iVar4 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xb8,0);
      *param_1 = lVar3;
    }
  }
  return;
}



// FUNCTION 140d0d7d0 FUN_140d0d7d0 body=45 status=ok
// SIG undefined FUN_140d0d7d0(void)

void FUN_140d0d7d0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  if (param_2 != '\0') {
    FUN_142dafbc0();
    return;
  }
  FUN_142dbb5d0(param_1 + 0xd58,local_res18);
  return;
}



// FUNCTION 140d0d800 FUN_140d0d800 body=73 status=ok
// SIG undefined FUN_140d0d800(void)

void FUN_140d0d800(longlong *param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  if ((char)param_1[0x25] == '\x03') {
    local_res10[0] = param_2;
    FUN_142dafbc0(param_1 + 0x2e6,local_res10);
    if ((char)param_1[0x2e5] == '\0') {
      *(undefined1 *)(param_1 + 0x2e5) = 1;
      (**(code **)(*param_1 + 0x600))(param_1);
    }
  }
  return;
}



// FUNCTION 140d0d850 FUN_140d0d850 body=89 status=ok
// SIG undefined FUN_140d0d850(void)

void FUN_140d0d850(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  
  if ((char)param_1[0x25] == '\x03') {
    local_res10[0] = param_2;
    FUN_142dbb5d0(param_1 + 0x2e6,local_res10);
    cVar1 = FUN_1407c3030(param_1 + 0x2e6);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0x2e5) = 0;
      (**(code **)(*param_1 + 0x600))(param_1);
    }
  }
  return;
}



// FUNCTION 140d0d8b0 FUN_140d0d8b0 body=185 status=ok
// SIG undefined FUN_140d0d8b0(void)

void FUN_140d0d8b0(longlong param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x528);
  if (lVar3 != 0) {
    lVar2 = FUN_142fd5420();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(longlong *)(lVar3 + 0x2ca0) != 0)) {
      lVar3 = FUN_1404b75e0();
      if (lVar3 != 0) {
        lVar2 = AGPoisonSplashProjectile::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar2 + 0x90) * 8) != lVar2 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          *(undefined4 *)(lVar3 + 0xc4) = param_2;
          *(undefined1 *)(lVar3 + 0xc3) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 140d0d970 FUN_140d0d970 body=189 status=ok
// SIG undefined FUN_140d0d970(void)

void FUN_140d0d970(longlong param_1,char param_2)

{
  longlong lVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 local_res8;
  
  if ((*(char *)(param_1 + 0x17fc) == '\0') && (param_2 == '\0')) {
    if ((*(longlong *)(param_1 + 0x990) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x990) + 0x10e0), lVar1 != 0)) {
      pwVar4 = _guard_xfg_dispatch_icall_nop
                         (L"&AOakPlayerController::ResurrectedDuringCombat",L"::");
      pwVar3 = (wchar_t *)0x0;
      while (pwVar2 = pwVar4, pwVar2 != (wchar_t *)0x0) {
        pwVar4 = _guard_xfg_dispatch_icall_nop(pwVar2 + 1,L"::");
        pwVar3 = pwVar2;
      }
      FName::FName(&local_res8,pwVar3 + 2,1);
      TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar1 + 0x12f8,param_1,local_res8);
    }
    FUN_140d02c40(param_1);
    return;
  }
  return;
}



// FUNCTION 140d0da30 FUN_140d0da30 body=554 status=ok
// SIG undefined FUN_140d0da30(void)

void FUN_140d0da30(longlong *param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  uint local_3c;
  longlong local_38;
  int local_30;
  
  lVar7 = param_1[0x8c];
  if (lVar7 != 0) {
    lVar4 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (*(char *)(lVar7 + 0x599) != '\0')) {
      if (*(byte *)(param_1 + 0x25) < 3) {
        FUN_1414609f0(param_1,param_2);
        return;
      }
      bVar1 = false;
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar5,&local_38);
      plVar8 = (longlong *)0x0;
      while( true ) {
        if ((local_30 < 0) || (*(int *)(local_38 + 8) <= local_30)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        plVar6 = plVar8;
        if (!bVar2) break;
        plVar6 = (longlong *)FWeakObjectPtr::Get();
        if (plVar6 == (longlong *)0x0) {
LAB_140d0db5a:
          plVar6 = (longlong *)0x0;
        }
        else {
          lVar7 = FUN_14145f370();
          if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
              != lVar7 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140d0db5a;
        }
        plVar9 = plVar8;
        if (plVar6 == param_1) {
LAB_140d0dbd6:
          local_30 = local_30 + 1;
          plVar8 = plVar9;
        }
        else {
          cVar3 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                            (plVar6,param_1 + 0x1a8);
          if (cVar3 == '\0') {
            if ((((plVar6 == (longlong *)0x0) || (plVar6[0x91] == 0)) ||
                (cVar3 = FUN_140cfdb70(), cVar3 != '\0')) || (plVar6[0x8c] == 0)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if ((bVar2) && (plVar9 = plVar6, param_2 != '\0')) {
              if (bVar1) break;
              if (plVar8 != (longlong *)0x0) {
                plVar9 = plVar8;
              }
            }
            goto LAB_140d0dbd6;
          }
          bVar1 = true;
          if (param_2 != '\0') goto LAB_140d0dbd6;
          plVar6 = plVar8;
          if (plVar8 != (longlong *)0x0) goto LAB_140d0dbf1;
          local_30 = local_30 + 1;
        }
      }
      if (plVar6 == (longlong *)0x0) {
        return;
      }
LAB_140d0dbf1:
      local_3c = local_3c & 0xfffffffe;
      local_48 = 0;
      local_40 = 0x40000000;
      local_44 = 1;
      (**(code **)(*param_1 + 0xe18))(param_1,plVar6[0x109],&local_48);
      FWeakObjectPtr::operator=(param_1 + 0x1a8,plVar6);
    }
  }
  return;
}



// FUNCTION 140d0dc60 FUN_140d0dc60 body=757 status=ok
// SIG undefined FUN_140d0dc60(void)

undefined8 FUN_140d0dc60(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined **local_48 [2];
  longlong *local_38;
  longlong local_30;
  
  if (((((*(char *)((longlong)param_1 + 0xa4d) == '\0') &&
        (*(char *)((longlong)param_1 + 0xa4e) == '\0')) && (param_1[0x91] != 0)) &&
      ((2 < *(byte *)(param_1 + 0x25) ||
       (cVar5 = FUN_140e1cef0(param_1 + 0x137,param_1), cVar5 != '\0')))) &&
     (lVar8 = param_1[0xa1], lVar8 != 0)) {
    lVar7 = ULocalPlayer::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) {
      return 0;
    }
    lVar7 = param_1[0x134];
    if (lVar7 == 0) {
      lVar7 = FUN_140cfcaa0(param_1);
      param_1[0x134] = lVar7;
    }
    FUN_140d09c40(param_1,lVar7);
    lVar8 = FUN_142547b50(lVar8,local_48);
    plVar4 = *(longlong **)(lVar8 + 0x10);
    lVar8 = *(longlong *)(lVar8 + 8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    local_48[0] = &PTR_FUN_143f740c8;
    if (local_30 != 0) {
      FMemory::Free();
    }
    local_48[0] = &PTR_FUN_143f73d18;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_38 + 8))(local_38,1);
        }
      }
    }
    if ((lVar8 != 0) && (lVar7 = FUN_1422312c0(param_1), lVar7 != 0)) {
      lVar9 = FUN_14141f270();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8
           ) != lVar9 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        local_78 = (undefined4)lVar8;
        uStack_74 = (undefined4)((ulonglong)lVar8 >> 0x20);
        uStack_70 = SUB84(plVar4,0);
        uStack_6c = (undefined4)((ulonglong)plVar4 >> 0x20);
        local_58 = local_78;
        uStack_54 = uStack_74;
        uStack_50 = uStack_70;
        uStack_4c = uStack_6c;
        local_68 = (longlong *)0x0;
        local_60 = 0;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        FUN_140be9e80(lVar7,&local_58,param_2,param_1[0x134],&local_68);
        if (local_60 != 0) {
          if (local_68 == (longlong *)0x0) goto LAB_140d0deaf;
          (**(code **)(*local_68 + 0x28))(local_68,0);
          if (local_68 != (longlong *)0x0) {
            local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
          }
          local_60 = 0;
        }
        if (local_68 != (longlong *)0x0) {
          FMemory::Free(local_68);
        }
LAB_140d0deaf:
        lVar8 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar8 != 0) {
          *(undefined4 *)((longlong)param_1 + 0x1a2c) = *(undefined4 *)(lVar8 + 0x798);
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar4 + 1;
          lVar8 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar8 == 1) {
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
        return 1;
      }
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
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
  return 0;
}



// FUNCTION 140d0df60 FUN_140d0df60 body=614 status=ok
// SIG undefined FUN_140d0df60(void)

undefined8 FUN_140d0df60(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  longlong *local_68;
  int local_60;
  code *local_58;
  ulonglong uStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong *plStack_30;
  longlong *local_28;
  longlong *plStack_20;
  
  FUN_142dcf3a0(param_1,&local_48);
  uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  plVar5 = (longlong *)FUN_140d3a420(uVar4);
  cVar3 = (**(code **)(*local_48 + 0x20))();
  if ((cVar3 == '\0') || (plVar5 == (longlong *)0x0)) {
    local_28 = local_48;
    plStack_20 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    FUN_140ced540(param_1 + 0x27a,&local_28,0);
    uVar4 = 0;
    goto LAB_140d0e176;
  }
  *(undefined1 *)((longlong)param_1 + 0xa4d) = 1;
  uStack_50 = uStack_50 & 0xffffffff00000000;
  local_68 = (longlong *)0x0;
  local_58 = FUN_140d06ad0;
  plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_60 = 3;
  local_68 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    *plVar6 = (longlong)&PTR_FUN_1444f8208;
    FWeakObjectPtr::operator=(plVar6 + 1,param_1);
    plVar6[2] = (longlong)local_58;
    plVar6[3] = uStack_50;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar6[5] = lVar7;
    *plVar6 = (longlong)&PTR_FUN_1444f8250;
  }
  plVar6 = (longlong *)(**(code **)(*plVar5 + 0x120))(plVar5,local_res8,&local_68);
  param_1[0x24c] = *plVar6;
  if (local_60 == 0) {
LAB_140d0e089:
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
    goto LAB_140d0e089;
  }
  local_58 = (code *)0x0;
  uStack_50 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,&DAT_1443179c0,0xc);
  local_38 = local_48;
  plStack_30 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  FUN_140d46ef0(plVar5,&local_38,&local_58,0);
  plVar5 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_30 + 1;
    lVar7 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_30)(plStack_30);
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
  if (local_58 != (code *)0x0) {
    FMemory::Free();
  }
  uVar4 = 1;
LAB_140d0e176:
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_40 + 1;
    lVar7 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plStack_40 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  return uVar4;
}



// FUNCTION 140d0e1d0 FUN_140d0e1d0 body=705 status=ok
// SIG undefined FUN_140d0e1d0(void)

undefined8 FUN_140d0e1d0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *local_68;
  int local_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong *plStack_40;
  longlong *local_38;
  longlong local_28;
  longlong *plStack_20;
  longlong local_18;
  longlong *plStack_10;
  
  lVar5 = FUN_140cfbfb0();
  FUN_142dcf3a0(param_1,&local_48);
  lVar6 = FUN_1422312c0(param_1);
  if (lVar6 == 0) {
LAB_140d0e251:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140d0e251;
  }
  lVar7 = FUN_140cff230(param_1);
  if ((((local_48 == 0) || (lVar6 == 0)) || (lVar5 == 0)) ||
     ((lVar7 == 0 || (cVar4 = FUN_140d277e0(lVar5,lVar7), cVar4 == '\0')))) {
    local_18 = local_48;
    plStack_10 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
      UNLOCK();
    }
    FUN_140ced540(param_1 + 0x13b8,&local_18,0);
    uVar9 = 0;
    goto LAB_140d0e438;
  }
  local_68 = (longlong *)0x0;
  local_60 = 0;
  local_58 = param_1;
  lStack_50 = lVar5;
  plVar8 = (longlong *)FMemory::Realloc(0,0x30);
  local_38 = plVar8;
  if (plVar8 == (longlong *)0x0) {
    if (((local_60 != 0) && (local_68 != (longlong *)0x0)) &&
       ((**(code **)(*local_68 + 0x28))(local_68,0), local_68 != (longlong *)0x0)) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
  }
  else {
    *plVar8 = (longlong)&PTR_GetPoolName_1444f86c8;
    plVar8[1] = local_58;
    plVar8[2] = lStack_50;
    lVar7 = FDelegateHandle::GenerateNewID();
    plVar8[4] = lVar7;
    *plVar8 = (longlong)&PTR_GetPoolName_1444f8710;
    FUN_140cf7330(plVar8,&local_68);
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    local_38 = (longlong *)FMemory::Realloc(plVar8,0,0);
    if (local_38 != (longlong *)0x0) {
      FMemory::Free(local_38);
    }
  }
  local_58 = 0;
  lStack_50 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,&DAT_1443179c0,0xc);
  local_28 = local_48;
  plStack_20 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  FUN_140be9e80(lVar6,&local_28,&local_58,lVar5,&local_68);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_60 == 0) {
LAB_140d0e3f4:
    if (local_68 != (longlong *)0x0) {
      FMemory::Free(local_68);
    }
  }
  else if (local_68 != (longlong *)0x0) {
    (**(code **)(*local_68 + 0x28))(local_68,0);
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)FMemory::Realloc(local_68,0,0);
    }
    local_60 = 0;
    goto LAB_140d0e3f4;
  }
  uVar9 = 1;
LAB_140d0e438:
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_40 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plStack_40 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  return uVar9;
}



// FUNCTION 140d0e4a0 FUN_140d0e4a0 body=458 status=ok
// SIG undefined FUN_140d0e4a0(void)

void FUN_140d0e4a0(longlong param_1,longlong param_2)

{
  bool bVar1;
  void *_Src;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  void **ppvVar7;
  void *local_98;
  ulonglong local_90;
  undefined4 local_78 [8];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
  ppvVar7 = (void **)(param_2 + 0x50);
  FUN_142fde710(&local_98,ppvVar7);
  FUN_143001780(local_78,&local_98);
  if (local_90 != 0) {
    FMemory::Free();
  }
  cVar2 = FUN_143003610(local_78);
  if (cVar2 != '\0') {
    lVar6 = *(longlong *)(param_1 + 0x848);
    plVar5 = (longlong *)0x0;
    if (lVar6 != 0) {
      lVar4 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        plVar5 = *(longlong **)(lVar6 + 0x2ad0);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 0x408))();
      local_78[0] = FUN_140b815b0(param_1,local_78,uVar3);
      local_98 = (void *)0x0;
      local_90 = 0;
      cVar2 = FUN_142ff5c90(local_78,&local_98,1);
      _Src = local_98;
      if ((cVar2 != '\0') && (ppvVar7 != &local_98)) {
        lVar6 = (longlong)(int)local_90;
        *(int *)(param_2 + 0x58) = (int)local_90;
        if (((int)local_90 == 0) && (*(int *)(param_2 + 0x5c) == 0)) {
          *(undefined4 *)(param_2 + 0x5c) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(ppvVar7,local_90 & 0xffffffff);
          _guard_xfg_dispatch_icall_nop(*ppvVar7,_Src,lVar6 * 2);
        }
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
    }
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140d0e670 FUN_140d0e670 body=315 status=ok
// SIG undefined FUN_140d0e670(void)

void FUN_140d0e670(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_38 [48];
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 0x670))(param_2);
    if (lVar3 != 0) {
      lVar4 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) goto LAB_140d0e6ce;
    }
  }
  lVar3 = 0;
LAB_140d0e6ce:
  cVar2 = FUN_140cef4d0(param_1);
  if ((cVar2 != '\0') && (lVar3 != 0)) {
    cVar2 = FUN_140cef4d0(lVar3);
    if (cVar2 != '\0') {
      lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
      if (lVar4 != 0) {
        uVar5 = FActorSpawnParameters::FActorSpawnParameters(local_38);
        uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        lVar4 = FUN_140cdf6f0(uVar6,uVar5);
        param_1[0x28e] = lVar4;
        uVar5 = FActorSpawnParameters::FActorSpawnParameters(local_38);
        uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        uVar5 = FUN_140cdf6f0(uVar6,uVar5);
        *(undefined8 *)(lVar3 + 0x1470) = uVar5;
        FUN_140e84430(param_1[0x28e],param_1,lVar3);
        FUN_140d07fa0(param_1);
        FUN_140e84430(*(undefined8 *)(lVar3 + 0x1470),lVar3,param_1);
        FUN_140d07fa0(lVar3);
      }
    }
  }
  return;
}


