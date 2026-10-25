// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1418c6710 FUN_1418c6710 body=362 status=ok
// SIG undefined FUN_1418c6710(void)

void FUN_1418c6710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if ((DAT_1469f45a0 != 0) && (DAT_1469f45a8 != (longlong *)0x0)) {
    LOCK();
    iVar5 = (int)DAT_1469f45a8[1];
    if (iVar5 == 0) {
      *(int *)(DAT_1469f45a8 + 1) = 0;
      iVar5 = 0;
    }
    plVar4 = DAT_1469f45a8;
    UNLOCK();
    if (0 < iVar5) {
      local_20 = DAT_1469f45a8;
      if (DAT_1469f45a8 == (longlong *)0x0) {
LAB_1418c679f:
        lVar7 = 0;
        if (plVar4 != (longlong *)0x0) {
          lVar7 = DAT_1469f45a0;
        }
      }
      else {
        LOCK();
        iVar5 = (int)DAT_1469f45a8[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(DAT_1469f45a8 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (!bVar8) {
          LOCK();
          bVar8 = iVar5 == (int)plVar4[1];
          if (bVar8) {
            *(int *)(plVar4 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar8) goto LAB_1418c679f;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar4 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
        local_20 = (longlong *)0x0;
        lVar7 = 0;
      }
      uVar3 = *(undefined8 *)(lVar7 + 0x18);
      lVar6 = FInputBindingManager::Get();
      TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
      ::Remove(lVar6 + 8,uVar3);
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1464bfcf0,lVar7 + 8);
      local_10 = (longlong *)0x0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_20,&local_10,param_3,param_4,0)
      ;
      plVar4 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
      plVar4 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1418c6880 FUN_1418c6880 body=362 status=ok
// SIG undefined FUN_1418c6880(void)

void FUN_1418c6880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong *local_20;
  undefined8 local_18;
  longlong *local_10;
  
  if ((DAT_1469f45b0 != 0) && (DAT_1469f45b8 != (longlong *)0x0)) {
    LOCK();
    iVar5 = (int)DAT_1469f45b8[1];
    if (iVar5 == 0) {
      *(int *)(DAT_1469f45b8 + 1) = 0;
      iVar5 = 0;
    }
    plVar4 = DAT_1469f45b8;
    UNLOCK();
    if (0 < iVar5) {
      local_20 = DAT_1469f45b8;
      if (DAT_1469f45b8 == (longlong *)0x0) {
LAB_1418c690f:
        lVar7 = 0;
        if (plVar4 != (longlong *)0x0) {
          lVar7 = DAT_1469f45b0;
        }
      }
      else {
        LOCK();
        iVar5 = (int)DAT_1469f45b8[1];
        bVar8 = iVar5 == 0;
        if (bVar8) {
          *(int *)(DAT_1469f45b8 + 1) = 0;
          iVar5 = 0;
        }
        UNLOCK();
        while (!bVar8) {
          LOCK();
          bVar8 = iVar5 == (int)plVar4[1];
          if (bVar8) {
            *(int *)(plVar4 + 1) = iVar5 + 1;
          }
          UNLOCK();
          if (bVar8) goto LAB_1418c690f;
          LOCK();
          iVar5 = (int)plVar4[1];
          bVar8 = iVar5 == 0;
          if (bVar8) {
            *(int *)(plVar4 + 1) = 0;
            iVar5 = 0;
          }
          UNLOCK();
        }
        local_20 = (longlong *)0x0;
        lVar7 = 0;
      }
      uVar3 = *(undefined8 *)(lVar7 + 0x18);
      lVar6 = FInputBindingManager::Get();
      TSet<TTuple<FName,FInputBindingManager::FContextEntry>,TDefaultMapHashableKeyFuncs<FName,FInputBindingManager::FContextEntry,0>,FDefaultSetAllocator>
      ::Remove(lVar6 + 8,uVar3);
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_1464bfcf0,lVar7 + 8);
      local_10 = (longlong *)0x0;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(&local_20,&local_10,param_3,param_4,0)
      ;
      plVar4 = local_10;
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
      plVar4 = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_20 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
          (**(code **)*local_20)(local_20);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_20 + 8))(local_20,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1418c69f0 FUN_1418c69f0 body=259 status=ok
// SIG undefined FUN_1418c69f0(void)

void FUN_1418c69f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  longlong local_18 [2];
  
  FUN_1418be2c0();
  plVar2 = (longlong *)(param_1 + 0x460);
  *(undefined2 *)(param_1 + 0x629) = 0;
  if ((*plVar2 != 0) && (*(longlong *)(param_1 + 0x468) != 0)) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x468) + 8);
    LOCK();
    iVar5 = *piVar1;
    if (iVar5 == 0) {
      *piVar1 = 0;
      iVar5 = 0;
    }
    UNLOCK();
    if (0 < iVar5) {
      plVar3 = *(longlong **)(param_1 + 0x468);
      plVar6 = plVar3;
      plVar7 = (longlong *)0x0;
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
            plVar6 = plVar3;
            if (plVar3 != (longlong *)0x0) {
              plVar7 = (longlong *)*plVar2;
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
      FUN_14199ffc0(plVar7,0);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        lVar4 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
  }
  if (plVar2 != local_18) {
    *plVar2 = 0;
    plVar2 = *(longlong **)(param_1 + 0x468);
    *(undefined8 *)(param_1 + 0x468) = 0;
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
  return;
}



// FUNCTION 1418c6b00 FUN_1418c6b00 body=123 status=ok
// SIG undefined FUN_1418c6b00(void)

void FUN_1418c6b00(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_18;
  longlong local_10;
  
  local_18 = *param_2;
  local_10 = param_2[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1418bd9f0(param_1 + 0x798,&local_18);
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 1418c6b80 UnregisterOnWindowActionNotification body=148 status=ok
// SIG undefined UnregisterOnWindowActionNotification(void)

void FSlateApplication::UnregisterOnWindowActionNotification(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 local_res8 [8];
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x508)) {
    lVar3 = 0;
    do {
      lVar1 = 0;
      if ((*(int *)(*(longlong *)(param_1 + 0x500) + 8 + lVar3) != 0) &&
         (plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x500) + lVar3), plVar2 != (longlong *)0x0
         )) {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
        lVar1 = *plVar2;
      }
      if (lVar1 == param_2) {
        FUN_1418bdc80(param_1 + 0x500,iVar4,1,1);
      }
      else {
        iVar4 = iVar4 + 1;
        lVar3 = lVar3 + 0x10;
      }
    } while (iVar4 < *(int *)(param_1 + 0x508));
  }
  return;
}



// FUNCTION 1418c6c20 FUN_1418c6c20 body=339 status=ok
// SIG undefined FUN_1418c6c20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1418c6c20(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong *local_190;
  undefined1 local_188 [8];
  undefined1 local_180 [320];
  longlong *local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  if (param_2 < (int)param_1[0x76]) {
    lVar5 = *param_1;
    uVar6 = FWidgetPath::FWidgetPath(local_188);
    (**(code **)(lVar5 + 0x118))(param_1,param_2,uVar6,2);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_38);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)local_40 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_40 + 8))(local_40);
        }
      }
    }
    FUN_140456b10(local_180);
    local_190 = (longlong *)0x0;
    puVar7 = (undefined8 *)((longlong)param_2 * 0x10 + param_1[0x75]);
    if (puVar7 != &local_198) {
      *puVar7 = 0;
      local_198 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(puVar7 + 1,&local_190);
      plVar1 = local_190;
      if (local_190 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_190 + 1;
        lVar5 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_190)(local_190);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          iVar4 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*local_190 + 8))(local_190,1);
          }
        }
      }
    }
    (**(code **)(*(longlong *)param_1[0xdb] + 0x28))((longlong *)param_1[0xdb],param_2);
  }
  return;
}



// FUNCTION 1418c6d80 RegisterPluginListener body=92 status=ok
// SIG undefined RegisterPluginListener(void)

void FAudioDevice::RegisterPluginListener(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>::Remove(param_1 + 0x120);
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



// FUNCTION 1418c6de0 FUN_1418c6de0 body=4965 status=ok
// SIG undefined FUN_1418c6de0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418c6de0(longlong *param_1,char param_2)

{
  int *piVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  DWORD DVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong **pplVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  longlong *plVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auStack_5a8 [32];
  undefined1 local_588;
  undefined8 *local_580;
  undefined4 local_578;
  char local_568;
  uint local_564;
  char local_560;
  char local_55f;
  longlong local_558;
  undefined1 local_548 [12];
  undefined4 uStack_53c;
  longlong local_538;
  longlong *plStack_530;
  longlong local_528;
  longlong *plStack_520;
  longlong *local_518;
  undefined8 local_510;
  longlong *local_508;
  undefined8 local_500;
  longlong *local_4f8 [2];
  longlong local_4e8;
  longlong *plStack_4e0;
  longlong *local_4d8;
  longlong *plStack_4d0;
  longlong *local_4c8;
  longlong *local_4c0;
  undefined8 local_4b8;
  longlong *local_4b0;
  undefined1 local_4a8 [16];
  float local_498;
  float local_494;
  float local_490;
  float local_48c;
  float local_488;
  float local_484;
  float local_480;
  float local_47c;
  longlong *local_478;
  longlong *plStack_470;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_460;
  undefined4 local_45c;
  longlong local_458;
  longlong *plStack_450;
  float local_448;
  float local_444;
  float local_440;
  float local_43c;
  float local_438;
  float local_434;
  float local_430;
  undefined8 local_42c;
  float local_424;
  float local_420;
  float local_41c;
  float local_418;
  undefined8 local_414;
  float local_40c;
  LARGE_INTEGER local_408;
  longlong *local_400;
  longlong *local_3f8;
  longlong *local_3f0;
  undefined8 local_3e8;
  longlong *plStack_3e0;
  undefined1 local_3d8 [8];
  undefined1 local_3d0 [8];
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [8];
  undefined1 local_3a8 [16];
  undefined1 local_398 [8];
  longlong *local_390;
  undefined1 local_388 [8];
  longlong *local_380;
  longlong local_378;
  longlong *plStack_370;
  undefined1 local_368 [16];
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 local_348 [8];
  undefined1 local_340 [288];
  undefined1 *local_220;
  int local_218;
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [320];
  longlong *local_a0;
  undefined1 local_98 [16];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_5a8;
  plVar22 = (longlong *)0x0;
  local_564 = 0;
  local_55f = param_2;
  local_518 = param_1;
  if ((int)param_1[0xaa] == 0) {
    if (param_1[0xa6] == 0) {
      return;
    }
    if (param_1[0xa7] == 0) {
      return;
    }
    piVar1 = (int *)(param_1[0xa7] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (iVar6 < 1) {
      return;
    }
    FUN_1418914c0(param_1);
    return;
  }
  cVar4 = FUN_1415ad720(&DAT_1468e2448);
  if (((((cVar4 == '\0') && (DAT_1468c21ae != '\0')) &&
       (DVar7 = GetCurrentThreadId(), DVar7 != DAT_1468c21c0)) ||
      ((DAT_1469eaf48 != (longlong *)0x0 &&
       (cVar4 = (**(code **)(*DAT_1469eaf48 + 0x70))(), cVar4 != '\0')))) ||
     ((param_1[0xb0] != 0 || (cVar4 = (**(code **)(*DAT_1469eaf48 + 0x58))(), cVar4 == '\0')))) {
    bVar23 = false;
  }
  else {
    bVar23 = true;
  }
  FWidgetPath::FWidgetPath(local_348);
  plVar21 = plVar22;
  if (bVar23) {
    lVar18 = *param_1;
    puVar9 = (undefined8 *)(**(code **)(lVar18 + 0x48))(param_1,&local_400);
    uVar10 = FUN_14189d7d0(param_1,local_3a8);
    local_588 = 1;
    (**(code **)(lVar18 + 0xd8))(param_1,local_1e8,*puVar9,uVar10);
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_3a8);
    cVar4 = FWidgetPath::IsValid(local_1e8);
    if (cVar4 == '\0') {
LAB_1418c6ffc:
      bVar23 = true;
      plVar11 = local_400;
    }
    else {
      plVar21 = (longlong *)param_1[0xa3];
      plVar11 = plVar21;
      plVar14 = plVar22;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        iVar6 = (int)plVar21[1];
        bVar23 = iVar6 == 0;
        if (bVar23) {
          *(int *)(plVar21 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
        while (plVar11 = plVar22, !bVar23) {
          LOCK();
          bVar23 = iVar6 == (int)plVar21[1];
          if (bVar23) {
            *(int *)(plVar21 + 1) = iVar6 + 1;
          }
          UNLOCK();
          if (bVar23) {
            plVar11 = plVar21;
            plVar14 = (longlong *)0x0;
            if (plVar21 != (longlong *)0x0) {
              plVar14 = (longlong *)param_1[0xa2];
            }
            break;
          }
          LOCK();
          iVar6 = (int)plVar21[1];
          bVar23 = iVar6 == 0;
          if (bVar23) {
            *(int *)(plVar21 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
        }
      }
      puVar9 = (undefined8 *)FUN_141845450(local_1e8,local_398);
      if ((plVar14 == (longlong *)0x0) || (plVar14 != (longlong *)*puVar9)) {
        local_400 = plVar11;
        plVar21 = (longlong *)0x3;
        goto LAB_1418c6ffc;
      }
      bVar23 = false;
      plVar21 = (longlong *)0x3;
    }
    if ((((ulonglong)plVar21 & 2) != 0) &&
       (plVar21 = (longlong *)(ulonglong)((uint)plVar21 & 0xfffffffd), local_390 != (longlong *)0x0)
       ) {
      LOCK();
      plVar14 = local_390 + 1;
      lVar18 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_390)(local_390);
        LOCK();
        piVar1 = (int *)((longlong)local_390 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_390 + 8))(local_390,1);
        }
      }
    }
    if ((((ulonglong)plVar21 & 1) != 0) &&
       (plVar21 = (longlong *)(ulonglong)((uint)plVar21 & 0xfffffffe), plVar11 != (longlong *)0x0))
    {
      LOCK();
      plVar14 = plVar11 + 1;
      lVar18 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar11 + 8))(plVar11,1);
        }
      }
    }
    if (bVar23) {
      FUN_1417f9710(local_348,local_1e8);
    }
    TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
    ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(local_98);
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_a0 + 1;
      lVar18 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)local_a0 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_a0 + 8))(local_a0,1);
        }
      }
    }
    FUN_140456b10(local_1e0);
  }
  fVar25 = -1.0;
  _local_548 = ZEXT816(0);
  local_568 = '\0';
  lVar18 = (longlong)(local_218 + -1);
  fVar29 = -1.0;
  fVar27 = -1.0;
  fVar30 = 0.0;
  local_528 = 0;
  plStack_520 = (longlong *)0x0;
  cVar4 = local_568;
  if (-1 < local_218 + -1) {
    local_558 = lVar18 * 0x48;
    cVar4 = '\0';
    fVar26 = -1.0;
    fVar28 = fVar27;
    do {
      puVar15 = local_340;
      if (local_220 != (undefined1 *)0x0) {
        puVar15 = local_220;
      }
      pfVar17 = (float *)(puVar15 + local_558);
      if (local_548._0_8_ == 0) {
        (**(code **)(**(longlong **)(pfVar17 + 0xe) + 0x198))
                  (*(longlong **)(pfVar17 + 0xe),&local_4d8);
        if ((local_4d8 != (longlong *)0x0) &&
           (cVar5 = (**(code **)(*local_4d8 + 0x18))(), cVar5 == '\0')) {
          local_508 = *(longlong **)(pfVar17 + 0x10);
          local_528 = *(longlong *)(pfVar17 + 0xe);
          if (local_508 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_508 + 1) = (int)local_508[1] + 1;
            UNLOCK();
          }
          local_510 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_520,&local_508);
          plVar11 = local_508;
          if (local_508 != (longlong *)0x0) {
            LOCK();
            plVar14 = local_508 + 1;
            lVar19 = *plVar14;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)lVar19 == 1) {
              (**(code **)*local_508)(local_508);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*local_508 + 8))(local_508,1);
              }
            }
          }
          local_358 = SUB84(local_4d8,0);
          uStack_354 = (undefined4)((ulonglong)local_4d8 >> 0x20);
          uStack_350 = SUB84(plStack_4d0,0);
          uStack_34c = (undefined4)((ulonglong)plStack_4d0 >> 0x20);
          if (plStack_4d0 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_4d0 + 1) = (int)plStack_4d0[1] + 1;
            UNLOCK();
          }
          local_4a8 = _local_548;
          puVar9 = local_548._8_8_;
          local_548._8_4_ = uStack_350;
          local_548._0_8_ = local_4d8;
          uStack_53c = uStack_34c;
          if (puVar9 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar9 + 1);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)*puVar9)(puVar9);
              LOCK();
              piVar1 = (int *)((longlong)puVar9 + 0xc);
              iVar6 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar6 == 1) {
                (**(code **)(*(longlong *)local_4a8._8_8_ + 8))(local_4a8._8_8_,1);
              }
            }
          }
        }
        plVar11 = plStack_4d0;
        if (plStack_4d0 != (longlong *)0x0) {
          LOCK();
          plVar14 = plStack_4d0 + 1;
          lVar19 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar19 == 1) {
            (**(code **)*plStack_4d0)(plStack_4d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
      }
      lVar19 = local_558;
      fVar24 = fVar26;
      fVar27 = fVar28;
      if ((*(byte *)(*(longlong *)(pfVar17 + 0xe) + 0x18) & 0x40) != 0) {
        fVar27 = pfVar17[1] * pfVar17[2];
        fVar24 = *pfVar17 * pfVar17[2];
        if (cVar4 == '\0') {
          cVar4 = '\x01';
          local_42c = 0;
          local_438 = pfVar17[3];
          local_434 = pfVar17[4];
          local_430 = fVar24;
          local_424 = fVar27;
          FSlateRotatedRect::ToBoundingRect(&local_438,&local_498);
          fVar25 = local_498;
          fVar24 = local_494;
          fVar27 = local_48c;
          fVar29 = local_490;
        }
        else {
          local_414 = 0;
          local_420 = pfVar17[3];
          local_41c = pfVar17[4];
          local_418 = fVar24;
          local_40c = fVar27;
          FSlateRotatedRect::ToBoundingRect(&local_420,&local_488);
          fVar27 = local_488;
          if (fVar25 <= local_488) {
            fVar27 = fVar25;
          }
          fVar25 = fVar27;
          fVar24 = local_484;
          if (fVar26 <= local_484) {
            fVar24 = fVar26;
          }
          fVar27 = local_480;
          if (local_480 <= fVar29) {
            fVar27 = fVar29;
          }
          fVar29 = fVar27;
          fVar27 = local_47c;
          if (local_47c <= fVar28) {
            fVar27 = fVar28;
          }
        }
      }
      local_558 = lVar19 + -0x48;
      lVar18 = lVar18 + -1;
      param_1 = local_518;
      fVar26 = fVar24;
      fVar28 = fVar27;
    } while (-1 < lVar18);
  }
  local_568 = cVar4;
  plVar11 = (longlong *)param_1[0xa7];
  plVar14 = plVar22;
  plVar16 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar11[1];
    bVar23 = iVar6 == 0;
    if (bVar23) {
      *(int *)(plVar11 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar16 = plVar22, !bVar23) {
      LOCK();
      bVar23 = iVar6 == (int)plVar11[1];
      if (bVar23) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar23) {
        plVar14 = (longlong *)0x0;
        plVar16 = plVar11;
        if (plVar11 != (longlong *)0x0) {
          plVar14 = (longlong *)param_1[0xa6];
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar23 = iVar6 == 0;
      if (bVar23) {
        *(int *)(plVar11 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  bVar23 = (longlong *)local_548._0_8_ != plVar14;
  local_560 = bVar23;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar16 + 1;
    lVar18 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  local_538 = 0;
  plStack_530 = (longlong *)0x0;
  if (bVar23) {
    if ((param_1[0xa4] != 0) && (param_1[0xa5] != 0)) {
      piVar1 = (int *)(param_1[0xa5] + 8);
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 0;
        iVar6 = 0;
      }
      UNLOCK();
      if (0 < iVar6) {
        plVar11 = (longlong *)param_1[0xa5];
        local_3e8 = 0;
        plStack_3e0 = (longlong *)0x0;
        plVar14 = plVar11;
        plVar16 = plVar22;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          iVar6 = (int)plVar11[1];
          bVar23 = iVar6 == 0;
          if (bVar23) {
            *(int *)(plVar11 + 1) = 0;
            iVar6 = 0;
          }
          UNLOCK();
          while (plVar14 = plVar22, !bVar23) {
            LOCK();
            bVar23 = iVar6 == (int)plVar11[1];
            if (bVar23) {
              *(int *)(plVar11 + 1) = iVar6 + 1;
            }
            UNLOCK();
            if (bVar23) {
              plVar14 = plVar11;
              plVar16 = (longlong *)0x0;
              if (plVar11 != (longlong *)0x0) {
                plVar16 = (longlong *)param_1[0xa4];
              }
              break;
            }
            LOCK();
            iVar6 = (int)plVar11[1];
            bVar23 = iVar6 == 0;
            if (bVar23) {
              *(int *)(plVar11 + 1) = 0;
              iVar6 = 0;
            }
            UNLOCK();
          }
        }
        (**(code **)(*plVar16 + 0xa8))(plVar16,&local_3e8);
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar11 = plVar14 + 1;
          lVar18 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar14 + 8))(plVar14,1);
            }
          }
        }
        plVar11 = plStack_3e0;
        if (plStack_3e0 != (longlong *)0x0) {
          LOCK();
          plVar14 = plStack_3e0 + 1;
          lVar18 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plStack_3e0)(plStack_3e0);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*plVar11 + 8))(plVar11,1);
            }
          }
        }
      }
    }
    uVar10 = local_548._0_8_;
    if ((longlong *)local_548._0_8_ == (longlong *)0x0) {
      uVar20 = (uint)plVar21 | 0x10;
      pplVar12 = &local_478;
      local_478 = (longlong *)0x0;
      plStack_470 = (longlong *)0x0;
      local_3f8 = plVar22;
      local_564 = uVar20;
    }
    else {
      (**(code **)(*(longlong *)local_548._0_8_ + 0x28))(local_548._0_8_);
      uVar20 = (uint)plVar21 | 0xc;
      local_564 = uVar20;
      local_4c8 = (longlong *)(*(code *)**(undefined8 **)uVar10)(uVar10,local_388);
      local_4c0 = (longlong *)local_4c8[1];
      local_4c8 = (longlong *)*local_4c8;
      if (local_4c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_4c0 + 1) = (int)local_4c0[1] + 1;
        UNLOCK();
      }
      pplVar12 = &local_4c8;
      local_3f8 = local_4c8;
    }
    local_3f0 = pplVar12[1];
    pplVar12[1] = (longlong *)0x0;
    plVar21 = plStack_470;
    *pplVar12 = (longlong *)0x0;
    if (((uVar20 & 0x10) != 0) &&
       (uVar20 = uVar20 & 0xffffffef, local_564 = uVar20, plStack_470 != (longlong *)0x0)) {
      LOCK();
      plVar11 = plStack_470 + 1;
      lVar18 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plStack_470)(plStack_470);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_470 + 8))(plStack_470,1);
        }
      }
    }
    plVar21 = local_4c0;
    if (((uVar20 & 8) != 0) &&
       (uVar20 = uVar20 & 0xfffffff7, local_564 = uVar20, local_4c0 != (longlong *)0x0)) {
      LOCK();
      plVar11 = local_4c0 + 1;
      lVar18 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_4c0)(local_4c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_4c0 + 8))(local_4c0,1);
        }
      }
    }
    if (((uVar20 & 4) != 0) && (local_564 = uVar20 & 0xfffffffb, local_380 != (longlong *)0x0)) {
      LOCK();
      plVar21 = local_380 + 1;
      lVar18 = *plVar21;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_380)(local_380);
        LOCK();
        piVar1 = (int *)((longlong)local_380 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_380 + 8))(local_380,1);
        }
      }
    }
    lVar18 = (longlong)(local_218 + -1);
    lVar19 = lVar18 * 0x48;
    do {
      if (lVar18 < 0) break;
      puVar15 = local_340;
      if (local_220 != (undefined1 *)0x0) {
        puVar15 = local_220;
      }
      cVar4 = (**(code **)(**(longlong **)(puVar15 + lVar19 + 0x38) + 0xa8))
                        (*(longlong **)(puVar15 + lVar19 + 0x38),&local_3f8);
      if (cVar4 != '\0') {
        local_4f8[0] = *(longlong **)(puVar15 + lVar19 + 0x40);
        local_538 = *(longlong *)(puVar15 + lVar19 + 0x38);
        if (local_4f8[0] != (longlong *)0x0) {
          LOCK();
          *(int *)(local_4f8[0] + 1) = (int)local_4f8[0][1] + 1;
          UNLOCK();
        }
        local_500 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_530,local_4f8);
        plVar21 = local_4f8[0];
        if (local_4f8[0] != (longlong *)0x0) {
          LOCK();
          plVar11 = local_4f8[0] + 1;
          lVar3 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar3 == 1) {
            (**(code **)*local_4f8[0])(local_4f8[0]);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar6 == 1) {
              (**(code **)(*local_4f8[0] + 8))(local_4f8[0],1);
            }
          }
        }
      }
      lVar18 = lVar18 + -1;
      lVar19 = lVar19 + -0x48;
    } while (cVar4 == '\0');
    plVar21 = local_3f0;
    if (local_3f0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_3f0 + 1;
      lVar18 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*local_3f0)(local_3f0);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
        }
      }
    }
    plVar21 = (longlong *)(ulonglong)local_564;
  }
  fVar25 = fVar27;
  if ((local_568 != '\0') && (cVar4 = FWidgetPath::IsValid(local_348), cVar4 != '\0')) {
    FUN_1418998c0(param_1 + 0x2c,&local_4e8,local_348);
    plVar11 = plStack_4e0;
    if (local_4e8 != 0) {
      local_378 = local_4e8;
      plStack_370 = plStack_4e0;
      if (plStack_4e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_4e0 + 1) = (int)plStack_4e0[1] + 1;
        UNLOCK();
      }
      lVar18 = FUN_14189f2b0(param_1 + 0x2c,local_368,&local_378,local_348);
      fVar25 = *(float *)(lVar18 + 8);
      if (*(float *)(lVar18 + 8) <= fVar29) {
        fVar25 = fVar29;
      }
      fVar29 = fVar25;
      fVar25 = *(float *)(lVar18 + 0xc);
      if (*(float *)(lVar18 + 0xc) <= fVar27) {
        fVar25 = fVar27;
      }
    }
    plVar14 = plStack_4e0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar11 + 1;
      lVar18 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar18 == 1) {
        (**(code **)*plStack_4e0)(plStack_4e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plStack_4e0 + 8))(plStack_4e0,1);
        }
      }
    }
  }
  plVar11 = (longlong *)param_1[0xa7];
  plVar14 = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar11[1];
    bVar23 = iVar6 == 0;
    if (bVar23) {
      *(int *)(plVar11 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar14 = plVar22, !bVar23) {
      LOCK();
      bVar23 = iVar6 == (int)plVar11[1];
      if (bVar23) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar23) {
        plVar14 = plVar11;
        if (((plVar11 != (longlong *)0x0) && ((longlong *)param_1[0xa6] != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*(longlong *)param_1[0xa6] + 0x20))(), cVar4 == '\0')) {
          bVar23 = true;
          plVar16 = local_518;
          goto LAB_1418c792d;
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar11[1];
      bVar23 = iVar6 == 0;
      if (bVar23) {
        *(int *)(plVar11 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  plVar16 = local_518;
  plVar11 = plVar14;
  if ((longlong *)local_548._0_8_ == (longlong *)0x0) {
LAB_1418c792a:
    bVar23 = false;
  }
  else {
    plVar14 = (longlong *)param_1[0xa7];
    plVar21 = (longlong *)(ulonglong)((uint)plVar21 | 0x20);
    plVar13 = plVar22;
    plVar16 = plVar14;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      iVar6 = (int)plVar14[1];
      bVar23 = iVar6 == 0;
      if (bVar23) {
        *(int *)(plVar14 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
      while (plVar16 = plVar22, !bVar23) {
        LOCK();
        bVar23 = iVar6 == (int)plVar14[1];
        if (bVar23) {
          *(int *)(plVar14 + 1) = iVar6 + 1;
        }
        UNLOCK();
        if (bVar23) {
          plVar13 = (longlong *)0x0;
          plVar16 = plVar14;
          if (plVar14 != (longlong *)0x0) {
            plVar13 = (longlong *)param_1[0xa6];
          }
          break;
        }
        LOCK();
        iVar6 = (int)plVar14[1];
        bVar23 = iVar6 == 0;
        if (bVar23) {
          *(int *)(plVar14 + 1) = 0;
          iVar6 = 0;
        }
        UNLOCK();
      }
    }
    if ((longlong *)local_548._0_8_ == plVar13) goto LAB_1418c792a;
    bVar23 = true;
  }
LAB_1418c792d:
  if ((((ulonglong)plVar21 & 0x20) != 0) && (plVar16 != (longlong *)0x0)) {
    LOCK();
    plVar21 = plVar16 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (bVar23) {
    pfVar17 = (float *)(**(code **)(*param_1 + 0x50))(param_1,local_3d8);
    fVar27 = DAT_1464bfd0c + pfVar17[1];
    *(float *)(param_1 + 0xad) = DAT_1464bfd08 + *pfVar17;
    *(float *)((longlong)param_1 + 0x56c) = fVar27;
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar11 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar21 = (longlong *)param_1[0xa3];
  plVar11 = plVar21;
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar21[1];
    bVar23 = iVar6 == 0;
    if (bVar23) {
      *(int *)(plVar21 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar11 = plVar22, !bVar23) {
      LOCK();
      bVar23 = iVar6 == (int)plVar21[1];
      if (bVar23) {
        *(int *)(plVar21 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar23) {
        plVar11 = plVar21;
        if ((plVar21 != (longlong *)0x0) && (param_1[0xa2] != 0)) {
          local_468 = (undefined4)param_1[0xad];
          local_464 = *(undefined4 *)((longlong)param_1 + 0x56c);
          lVar18 = *param_1;
          local_460 = local_468;
          local_45c = local_464;
          uVar10 = SWindow::GetDesiredSizeDesktopPixels(param_1[0xa2],local_3d0);
          local_578 = 1;
          local_580 = &DAT_1468b5d88;
          local_588 = 0;
          plVar11 = (longlong *)(**(code **)(lVar18 + 400))(param_1,local_3c8,&local_468,uVar10);
          param_1[0xad] = *plVar11;
          plVar11 = plVar21;
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar21[1];
      bVar23 = iVar6 == 0;
      if (bVar23) {
        *(int *)(plVar21 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  if (local_568 != '\0') {
    fVar27 = (fVar29 + _DAT_1464bfd10) - *(float *)(param_1 + 0xad);
    fVar29 = (fVar25 + _DAT_1464bfd14) - *(float *)((longlong)param_1 + 0x56c);
    if ((0.0 < fVar27) && (0.0 < fVar29)) {
      if (((char)param_1[0xae] == '\x02') || (((char)param_1[0xae] == '\0' && (fVar27 < fVar29)))) {
        *(undefined1 *)(param_1 + 0xae) = 2;
        *(float *)(param_1 + 0xad) = *(float *)(param_1 + 0xad) + fVar27;
      }
      else {
        *(undefined1 *)(param_1 + 0xae) = 1;
        *(float *)((longlong)param_1 + 0x56c) = *(float *)((longlong)param_1 + 0x56c) + fVar29;
      }
    }
  }
  if (local_560 == '\0') goto LAB_1418c7dc7;
  plVar21 = (longlong *)param_1[0xa7];
  plVar14 = plVar22;
  plVar16 = plVar21;
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    iVar6 = (int)plVar21[1];
    bVar23 = iVar6 == 0;
    if (bVar23) {
      *(int *)(plVar21 + 1) = 0;
      iVar6 = 0;
    }
    UNLOCK();
    while (plVar16 = plVar22, !bVar23) {
      LOCK();
      bVar23 = iVar6 == (int)plVar21[1];
      if (bVar23) {
        *(int *)(plVar21 + 1) = iVar6 + 1;
      }
      UNLOCK();
      if (bVar23) {
        plVar14 = (longlong *)0x0;
        plVar16 = plVar21;
        if (plVar21 != (longlong *)0x0) {
          plVar14 = (longlong *)param_1[0xa6];
        }
        break;
      }
      LOCK();
      iVar6 = (int)plVar21[1];
      bVar23 = iVar6 == 0;
      if (bVar23) {
        *(int *)(plVar21 + 1) = 0;
        iVar6 = 0;
      }
      UNLOCK();
    }
  }
  if ((local_548._0_8_ != 0) ||
     ((plVar14 != (longlong *)0x0 &&
      (cVar4 = (**(code **)(*plVar14 + 0x20))(plVar14), cVar4 == '\0')))) {
    FUN_1418914c0(param_1);
    if (local_538 == 0) {
      if (((int)param_1[0xaa] == 0) || (local_55f == '\0')) {
        local_4b0 = (longlong *)0x0;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = stack0xfffffffffffffac0;
        _local_548 = auVar2 << 0x40;
        local_4b8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(local_548 + 8,&local_4b0);
        plVar21 = local_4b0;
        if (local_4b0 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_4b0 + 1;
          lVar18 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*local_4b0)(local_4b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar21 = local_4b0;
joined_r0x0001418c7cd4:
            if (iVar6 == 1) {
              (**(code **)(*plVar21 + 8))(plVar21,1);
            }
          }
        }
      }
      else if (local_548._0_8_ != 0) {
        local_458 = local_548._0_8_;
        plStack_450 = stack0xfffffffffffffac0;
        if (stack0xfffffffffffffac0 != (longlong *)0x0) {
          LOCK();
          *(int *)(stack0xfffffffffffffac0 + 1) = (int)stack0xfffffffffffffac0[1] + 1;
          UNLOCK();
        }
        FUN_1418c4230(param_1,&local_458,param_1 + 0xad);
        plVar21 = plStack_450;
        if (plStack_450 != (longlong *)0x0) {
          LOCK();
          plVar14 = plStack_450 + 1;
          lVar18 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar18 == 1) {
            (**(code **)*plStack_450)(plStack_450);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            iVar6 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar21 = plStack_450;
            goto joined_r0x0001418c7cd4;
          }
        }
      }
    }
    else {
      param_1[0xa4] = local_538;
      plVar21 = (longlong *)param_1[0xa5];
      if (plStack_530 != plVar21) {
        if (plStack_530 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)plStack_530 + 0xc) = *(int *)((longlong)plStack_530 + 0xc) + 1;
          UNLOCK();
          plVar21 = (longlong *)param_1[0xa5];
        }
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar21 + 8))(plVar21,1);
          }
        }
        param_1[0xa5] = (longlong)plStack_530;
      }
    }
    param_1[0xa6] = local_548._0_8_;
    plVar21 = (longlong *)param_1[0xa7];
    if (stack0xfffffffffffffac0 != plVar21) {
      if (stack0xfffffffffffffac0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)stack0xfffffffffffffac0 + 0xc) =
             *(int *)((longlong)stack0xfffffffffffffac0 + 0xc) + 1;
        UNLOCK();
        plVar21 = (longlong *)param_1[0xa7];
      }
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
        }
      }
      param_1[0xa7] = (longlong)stack0xfffffffffffffac0;
    }
    param_1[0xa8] = local_528;
    plVar21 = (longlong *)param_1[0xa9];
    if (plStack_520 != plVar21) {
      if (plStack_520 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_520 + 0xc) = *(int *)((longlong)plStack_520 + 0xc) + 1;
        UNLOCK();
        plVar21 = (longlong *)param_1[0xa9];
      }
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        iVar6 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar21 + 8))(plVar21,1);
        }
      }
      param_1[0xa9] = (longlong)plStack_520;
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar21 = plVar16 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
LAB_1418c7dc7:
  if ((param_1[0xa2] != 0) && (param_1[0xa3] != 0)) {
    piVar1 = (int *)(param_1[0xa3] + 8);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 0;
      iVar6 = 0;
    }
    UNLOCK();
    if (0 < iVar6) {
      iVar6 = *DAT_1469f4538;
      fVar29 = *(float *)(DAT_1469f4590 + 0x494);
      QueryPerformanceCounter(&local_408);
      fVar25 = (float)((((double)local_408.QuadPart * DAT_1468b02f8 + 16777216.0) -
                       (double)*(float *)((longlong)param_1 + 0x554)) - (double)param_1[0xac]) /
               *(float *)(param_1 + 0xab);
      if (0.0 <= fVar25) {
        if (1.0 <= fVar25) {
          fVar25 = 1.0;
        }
      }
      else {
        fVar25 = 0.0;
      }
      plVar21 = (longlong *)param_1[0xa3];
      plVar14 = plVar21;
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        iVar8 = (int)plVar21[1];
        bVar23 = iVar8 == 0;
        if (bVar23) {
          *(int *)(plVar21 + 1) = 0;
          iVar8 = 0;
        }
        UNLOCK();
        while (plVar14 = plVar22, !bVar23) {
          LOCK();
          bVar23 = iVar8 == (int)plVar21[1];
          if (bVar23) {
            *(int *)(plVar21 + 1) = iVar8 + 1;
          }
          UNLOCK();
          if (bVar23) {
            plVar14 = plVar21;
            if (plVar21 != (longlong *)0x0) {
              plVar22 = (longlong *)param_1[0xa2];
              LOCK();
              *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
              UNLOCK();
              LOCK();
              plVar14 = plVar21 + 1;
              lVar18 = *plVar14;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              plVar14 = plVar21;
              if ((int)lVar18 == 1) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar21 + 8))(plVar21,1);
                }
              }
            }
            break;
          }
          LOCK();
          iVar8 = (int)plVar21[1];
          bVar23 = iVar8 == 0;
          if (bVar23) {
            *(int *)(plVar21 + 1) = 0;
            iVar8 = 0;
          }
          UNLOCK();
        }
      }
      SWindow::SetOpacity(plVar22,fVar25);
      if (fVar29 <= 1.0 / (float)iVar6) {
        fVar25 = 1.0 - fVar25;
        fVar30 = fVar25 * fVar25 * fVar25;
      }
      fVar29 = fVar30 * 30.0 + *(float *)(param_1 + 0xad);
      fVar25 = fVar30 * 5.0 + *(float *)((longlong)param_1 + 0x56c);
      pfVar17 = (float *)FUN_14183b310(plVar22,local_3c0);
      if ((fVar29 != *pfVar17) || (fVar25 != pfVar17[1])) {
        local_448 = fVar29;
        local_444 = fVar25;
        local_440 = fVar29;
        local_43c = fVar25;
        uVar10 = SWindow::GetDesiredSizeDesktopPixels(plVar22,local_3b8);
        local_588 = 0;
        puVar9 = (undefined8 *)
                 FSlateApplication::CalculateTooltipWindowPosition
                           (param_1,local_3b0,&local_448,uVar10);
        uVar10 = *puVar9;
        FUN_14185a3f0(plVar22,*puVar9);
        SWindow::MoveWindowTo(plVar22,uVar10);
      }
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        plVar22 = plVar14 + 1;
        lVar18 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar18 == 1) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar6 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar22 = plVar11 + 1;
    lVar18 = *plVar22;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar22 = plStack_530;
  if (plStack_530 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_530 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_530)(plStack_530);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_530 + 8))(plStack_530,1);
      }
    }
  }
  plVar22 = plStack_520;
  if (plStack_520 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_520 + 1;
    lVar18 = *plVar21;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)lVar18 == 1) {
      (**(code **)*plStack_520)(plStack_520);
      LOCK();
      piVar1 = (int *)((longlong)plVar22 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*plStack_520 + 8))(plStack_520,1);
      }
    }
  }
  puVar9 = stack0xfffffffffffffac0;
  if (stack0xfffffffffffffac0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(stack0xfffffffffffffac0 + 1);
    iVar6 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (**(code **)*stack0xfffffffffffffac0)(stack0xfffffffffffffac0);
      LOCK();
      piVar1 = (int *)((longlong)puVar9 + 0xc);
      iVar6 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)(*stack0xfffffffffffffac0 + 8))(stack0xfffffffffffffac0,1);
      }
    }
  }
  FUN_140458830(local_348);
  return;
}



// FUNCTION 1418c8150 FUN_1418c8150 body=177 status=ok
// SIG undefined FUN_1418c8150(void)

undefined1 FUN_1418c8150(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  
  plVar6 = *(longlong **)(param_1 + 0x50);
  plVar5 = plVar6;
  if (plVar6 != (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
    LOCK();
    iVar4 = (int)plVar6[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar6 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (!bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar6[1];
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar6;
        if ((plVar6 != (longlong *)0x0) && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0)) {
          uVar3 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
          goto LAB_1418c818d;
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar6 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  uVar3 = 1;
  plVar6 = plVar5;
LAB_1418c818d:
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar6 + 1;
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    return uVar3;
  }
  return uVar3;
}



// FUNCTION 1418c8210 FUN_1418c8210 body=1185 status=ok
// SIG undefined FUN_1418c8210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1418c8210(longlong param_1,longlong *param_2,undefined8 *param_3,undefined4 param_4,
             undefined4 param_5)

{
  int *piVar1;
  longlong **pplVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined4 local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  undefined1 local_218;
  undefined1 local_210;
  longlong local_208;
  undefined8 local_1f8;
  longlong *plStack_1f0;
  longlong *local_1e8 [2];
  longlong *local_1d8 [2];
  longlong *local_1c8;
  longlong *local_1c0;
  undefined8 local_1b0;
  longlong *plStack_1a8;
  undefined1 local_198 [272];
  longlong *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [24];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  lVar8 = FUN_141887200(local_198);
  plVar9 = (longlong *)FMemory::Realloc(0,0x20);
  local_1e8[0] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_GetPoolName_144d60f78;
    plVar9[1] = (longlong)FUN_1418ada30;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar9[3] = lVar10;
  }
  pplVar2 = (longlong **)(lVar8 + 0x118);
  if (local_1e8 != pplVar2) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(lVar8 + 0x120) != 0) && (plVar11 = *pplVar2, plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x28))(plVar11,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar11 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar11;
        }
        *(undefined4 *)(lVar8 + 0x120) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,pplVar2);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_1e8[0] = (longlong *)FMemory::Realloc(plVar9,0,0);
    if (local_1e8[0] != (longlong *)0x0) {
      FMemory::Free(local_1e8[0]);
    }
  }
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  local_1d8[0] = plVar9;
  if (plVar9 != (longlong *)0x0) {
    plVar9[1] = param_1;
    *plVar9 = (longlong)&DAT_143f3ed00;
    plVar9[2] = (longlong)FUN_1418ad5b0;
    lVar10 = FDelegateHandle::GenerateNewID();
    plVar9[4] = lVar10;
    *plVar9 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  pplVar2 = (longlong **)(lVar8 + 0x128);
  if (local_1d8 != pplVar2) {
    if (plVar9 == (longlong *)0x0) {
      if ((*(int *)(lVar8 + 0x130) != 0) && (plVar11 = *pplVar2, plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x28))(plVar11,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar11 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar11;
        }
        *(undefined4 *)(lVar8 + 0x130) = 0;
      }
    }
    else {
      (**(code **)(*plVar9 + 0x30))(plVar9,pplVar2);
    }
  }
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    local_1d8[0] = (longlong *)FMemory::Realloc(plVar9,0,0);
    if (local_1d8[0] != (longlong *)0x0) {
      FMemory::Free(local_1d8[0]);
    }
  }
  puVar3 = (undefined8 *)(lVar8 + 0x108);
  *(undefined4 *)(lVar8 + 0x13c) = param_5;
  *(undefined4 *)(lVar8 + 0x138) = param_4;
  plVar9 = (longlong *)param_3[1];
  uVar5 = *param_3;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_1f8 = uVar5;
  plStack_1f0 = plVar9;
  if (&local_1f8 != puVar3) {
    local_1f8 = *puVar3;
    plStack_1f0 = *(longlong **)(lVar8 + 0x110);
    *puVar3 = uVar5;
    *(longlong **)(lVar8 + 0x110) = plVar9;
    local_1b0 = uVar5;
    plStack_1a8 = plVar9;
  }
  plVar9 = plStack_1f0;
  if (plStack_1f0 != (longlong *)0x0) {
    LOCK();
    plVar11 = plStack_1f0 + 1;
    lVar10 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
      (**(code **)*plStack_1f0)(plStack_1f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_1f0 + 8))(plStack_1f0,1);
      }
    }
  }
  plVar11 = (longlong *)
            SharedPointerInternals::
            NewIntrusiveReferenceController<_anonymous_namespace_::SMenuContentWrapper>();
  plVar9 = plVar11 + 2;
  local_1c8 = plVar9;
  local_1c0 = plVar11;
  FUN_14068dd90(&local_1c8,plVar9);
  local_248 = 0x310;
  SWidget::SetDebugInfo
            (plVar9,"SMenuContentWrapper",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\Application\\MenuStack.cpp"
             ,0x295);
  local_238 = *(undefined4 *)(lVar8 + 0x90);
  local_208 = lVar8 + 0xf8;
  local_220 = lVar8 + 0xe8;
  local_210 = *(undefined1 *)(lVar8 + 0xf1);
  local_228 = lVar8 + 200;
  local_230 = lVar8 + 0x98;
  local_218 = *(undefined1 *)(lVar8 + 0xf0);
  local_240 = lVar8 + 0x78;
  local_248 = lVar8 + 0x60;
  SWidget::SWidgetConstruct(plVar9,lVar8,lVar8 + 0x30,lVar8 + 0x40);
  FUN_141892320(plVar9,lVar8);
  if (-1 < (char)plVar11[5]) {
    cVar6 = (**(code **)(*plVar9 + 0x1e8))(plVar9);
    if (cVar6 == '\0') {
      bVar7 = 0;
      goto LAB_1418c856d;
    }
  }
  bVar7 = 1;
LAB_1418c856d:
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar11 + 0x29) = *(byte *)((longlong)plVar11 + 0x29) | bVar7;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  *param_2 = (longlong)plVar9;
  param_2[1] = (longlong)plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar11 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
    LOCK();
    plVar9 = plVar11 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_70);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_80);
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_88 + 1;
    lVar8 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_88 + 8))(local_88,1);
      }
    }
  }
  FUN_140690b40(local_198);
  plVar9 = (longlong *)param_3[1];
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar9 + 1;
    lVar8 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1418c86c0 FUN_1418c86c0 body=271 status=ok
// SIG undefined FUN_1418c86c0(void)

undefined2 * FUN_1418c86c0(undefined2 *param_1,undefined8 *param_2,undefined4 *param_3)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  
  *param_1 = 0x119;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  plVar4 = (longlong *)param_2[1];
  uVar11 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d50130;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 1418c87d0 FUN_1418c87d0 body=273 status=ok
// SIG undefined FUN_1418c87d0(void)

undefined4 * FUN_1418c87d0(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  plVar4 = (longlong *)param_2[1];
  uVar11 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d67d80;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 1418c88f0 FUN_1418c88f0 body=273 status=ok
// SIG undefined FUN_1418c88f0(void)

undefined4 * FUN_1418c88f0(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 0;
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  plVar4 = (longlong *)param_2[1];
  uVar11 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d67dc0;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
  plVar4 = (longlong *)param_2[1];
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



// FUNCTION 1418c8a10 FUN_1418c8a10 body=345 status=ok
// SIG undefined FUN_1418c8a10(void)

longlong FUN_1418c8a10(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_28;
  longlong *local_20;
  
  local_20 = (longlong *)operator_new(0x20);
  if (local_20 != (longlong *)0x0) {
    *(undefined4 *)(local_20 + 1) = 1;
    *local_20 = (longlong)&PTR_FUN_144d6a680;
    *(undefined4 *)((longlong)local_20 + 0xc) = 1;
    local_20[2] = (longlong)&PTR_FUN_144d66ae8;
    local_20[3] = param_2[1];
  }
  local_28 = local_20 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
  plVar3 = local_20;
  plVar1 = local_28;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x100);
  *(int *)(param_1 + 0x100) = iVar4 + 1;
  if (*(int *)(param_1 + 0x104) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0xf8,iVar4);
  }
  plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0xf8));
  *plVar6 = (longlong)plVar1;
  plVar6[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
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
  plVar1 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_20)(local_20);
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
  *param_2 = &PTR_FUN_144d66ad8;
  return param_1;
}



// FUNCTION 1418c8b70 FUN_1418c8b70 body=348 status=ok
// SIG undefined FUN_1418c8b70(void)

undefined8 * FUN_1418c8b70(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_143f77e98;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
    *puVar10 = &PTR_GetPoolName_143f77ee0;
  }
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1418c8cd0 FUN_1418c8cd0 body=338 status=ok
// SIG undefined FUN_1418c8cd0(void)

undefined8 * FUN_1418c8cd0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d67f48;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1418c8e30 FUN_1418c8e30 body=338 status=ok
// SIG undefined FUN_1418c8e30(void)

undefined8 * FUN_1418c8e30(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d67ec8;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1418c8f90 FUN_1418c8f90 body=338 status=ok
// SIG undefined FUN_1418c8f90(void)

undefined8 * FUN_1418c8f90(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d67f08;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1418c90f0 FUN_1418c90f0 body=338 status=ok
// SIG undefined FUN_1418c90f0(void)

undefined8 * FUN_1418c90f0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d69d18;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1418c9250 FUN_1418c9250 body=351 status=ok
// SIG undefined FUN_1418c9250(void)

undefined8 *
FUN_1418c9250(undefined8 *param_1,longlong param_2,undefined4 *param_3,undefined4 param_4)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_28)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d6a5e0;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    *(undefined4 *)(puVar10 + 5) = param_4;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
    *puVar10 = &PTR_GetPoolName_144d6a628;
  }
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
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1418c93b0 FUN_1418c93b0 body=349 status=ok
// SIG undefined FUN_1418c93b0(void)

undefined8 * FUN_1418c93b0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  plVar8 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x10,local_18)
  ;
  plVar3 = (longlong *)plVar8[1];
  lVar11 = *plVar8 + -8;
  if (*plVar8 == 0) {
    lVar11 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_GetPoolName_144d50130;
    puVar9[1] = lVar11;
    puVar9[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
    *(undefined4 *)(puVar9 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar7;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[6] = uVar10;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return param_1;
}



// FUNCTION 1418c9510 FUN_1418c9510 body=349 status=ok
// SIG undefined FUN_1418c9510(void)

undefined8 * FUN_1418c9510(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  plVar8 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x10,local_18)
  ;
  plVar3 = (longlong *)plVar8[1];
  lVar11 = *plVar8 + -8;
  if (*plVar8 == 0) {
    lVar11 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_GetPoolName_144d69a28;
    puVar9[1] = lVar11;
    puVar9[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
    *(undefined4 *)(puVar9 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar7;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[6] = uVar10;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return param_1;
}



// FUNCTION 1418c9670 FUN_1418c9670 body=349 status=ok
// SIG undefined FUN_1418c9670(void)

undefined8 * FUN_1418c9670(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  plVar8 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x10,local_18)
  ;
  plVar3 = (longlong *)plVar8[1];
  lVar11 = *plVar8 + -8;
  if (*plVar8 == 0) {
    lVar11 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_GetPoolName_144043770;
    puVar9[1] = lVar11;
    puVar9[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
    *(undefined4 *)(puVar9 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar7;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[6] = uVar10;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return param_1;
}



// FUNCTION 1418c97d0 FUN_1418c97d0 body=349 status=ok
// SIG undefined FUN_1418c97d0(void)

undefined8 * FUN_1418c97d0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  plVar8 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x10,local_18)
  ;
  plVar3 = (longlong *)plVar8[1];
  lVar11 = *plVar8 + -8;
  if (*plVar8 == 0) {
    lVar11 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_GetPoolName_144d69d18;
    puVar9[1] = lVar11;
    puVar9[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
    *(undefined4 *)(puVar9 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar7;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[6] = uVar10;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return param_1;
}



// FUNCTION 1418c9930 FUN_1418c9930 body=352 status=ok
// SIG undefined FUN_1418c9930(void)

undefined8 *
FUN_1418c9930(undefined8 *param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  plVar8 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x10,local_28)
  ;
  plVar3 = (longlong *)plVar8[1];
  lVar11 = *plVar8 + -8;
  if (*plVar8 == 0) {
    lVar11 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_GetPoolName_144d69cd8;
    puVar9[1] = lVar11;
    puVar9[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
    *(undefined4 *)(puVar9 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar7;
    puVar9[5] = param_4;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[6] = uVar10;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return param_1;
}



// FUNCTION 1418c9a90 FUN_1418c9a90 body=579 status=ok
// SIG undefined FUN_1418c9a90(void)

undefined8 *
FUN_1418c9a90(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,longlong param_4)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar4 = (longlong *)param_2[1];
  uVar11 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  FText::FText(local_58,param_4);
  local_40 = *(undefined1 *)(param_4 + 0x18);
  local_38 = 0;
  local_30 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_38,param_4 + 0x20);
  puVar10 = (undefined8 *)operator_new(0x60,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    FText::FText(local_88,local_58);
    local_70 = local_40;
    local_68 = 0;
    local_60 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_68,&local_38);
    *puVar10 = &PTR_GetPoolName_144d69a68;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    FText::FText(puVar10 + 5,local_88);
    *(undefined1 *)(puVar10 + 8) = local_70;
    puVar10[9] = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar10 + 9,&local_68);
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[0xb] = uVar11;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_80 + 8))(local_80,1);
        }
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_38);
  if (local_50 != (longlong *)0x0) {
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4 + 0x20);
  plVar4 = *(longlong **)(param_4 + 8);
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



// FUNCTION 1418c9ce0 FUN_1418c9ce0 body=374 status=ok
// SIG undefined FUN_1418c9ce0(void)

undefined8 FUN_1418c9ce0(undefined8 param_1,longlong param_2,undefined4 *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [24];
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  FText::FText(local_38,param_4);
  local_20 = *(undefined1 *)(param_4 + 0x18);
  local_18 = 0;
  local_10 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,param_4 + 0x20);
  plVar5 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x10,local_48)
  ;
  if (*plVar5 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = *plVar5 + -8;
  }
  plVar5 = (longlong *)plVar5[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_60 = plVar5;
  FUN_1418c9a90(param_1,&local_68,&local_58,local_38);
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
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_40 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_4 + 0x20);
  plVar5 = *(longlong **)(param_4 + 8);
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
  return param_1;
}



// FUNCTION 1418c9e60 FUN_1418c9e60 body=353 status=ok
// SIG undefined FUN_1418c9e60(void)

undefined8 *
FUN_1418c9e60(undefined8 *param_1,longlong param_2,undefined4 *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  plVar8 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x10,local_28)
  ;
  plVar3 = (longlong *)plVar8[1];
  lVar11 = *plVar8 + -8;
  if (*plVar8 == 0) {
    lVar11 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_GetPoolName_144d6a690;
    puVar9[1] = lVar11;
    puVar9[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
    *(undefined4 *)(puVar9 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar7;
    *(undefined1 *)(puVar9 + 5) = param_4;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[6] = uVar10;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return param_1;
}



// FUNCTION 1418c9fd0 FUN_1418c9fd0 body=338 status=ok
// SIG undefined FUN_1418c9fd0(void)

undefined8 * FUN_1418c9fd0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d67d80;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1418ca130 FUN_1418ca130 body=338 status=ok
// SIG undefined FUN_1418ca130(void)

undefined8 * FUN_1418ca130(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d69218;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1418ca290 FUN_1418ca290 body=338 status=ok
// SIG undefined FUN_1418ca290(void)

undefined8 * FUN_1418ca290(undefined8 *param_1,longlong param_2,undefined4 *param_3)

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
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 local_18 [8];
  longlong *local_10;
  
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18)
  ;
  plVar4 = (longlong *)puVar10[1];
  uVar11 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar10 != (undefined8 *)0x0) {
    *puVar10 = &PTR_GetPoolName_144d69a28;
    puVar10[1] = uVar11;
    puVar10[2] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar10 + 3) = uVar5;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uVar6;
    *(undefined4 *)(puVar10 + 4) = uVar7;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uVar8;
    uVar11 = FDelegateHandle::GenerateNewID();
    puVar10[6] = uVar11;
  }
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
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar9 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  return param_1;
}



// FUNCTION 1418ca3f0 FUN_1418ca3f0 body=358 status=ok
// SIG undefined FUN_1418ca3f0(void)

undefined8 *
FUN_1418ca3f0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar3 = (longlong *)param_2[1];
  uVar12 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  uVar6 = *param_3;
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  plVar4 = (longlong *)param_4[1];
  uVar5 = *param_4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  puVar11 = (undefined8 *)operator_new(0x40,param_1);
  if (puVar11 != (undefined8 *)0x0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    *puVar11 = &PTR_GetPoolName_144d68c08;
    puVar11[1] = uVar12;
    puVar11[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar11 + 3) = uVar6;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = uVar7;
    *(undefined4 *)(puVar11 + 4) = uVar8;
    *(undefined4 *)((longlong)puVar11 + 0x24) = uVar9;
    puVar11[5] = uVar5;
    puVar11[6] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    uVar12 = FDelegateHandle::GenerateNewID();
    puVar11[7] = uVar12;
    if (plVar4 == (longlong *)0x0) goto LAB_1418ca4e3;
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
LAB_1418ca4e3:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar10 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar10 == 1) {
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
  plVar3 = (longlong *)param_4[1];
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
  return param_1;
}



// FUNCTION 1418ca560 FUN_1418ca560 body=524 status=ok
// SIG undefined FUN_1418ca560(void)

undefined8 *
FUN_1418ca560(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar3 = (longlong *)param_2[1];
  uVar14 = *param_2;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  uVar8 = *param_3;
  uVar9 = param_3[1];
  uVar10 = param_3[2];
  uVar11 = param_3[3];
  plVar4 = (longlong *)param_5[1];
  uVar5 = *param_5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)param_4[1];
  uVar7 = *param_4;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
  }
  puVar13 = (undefined8 *)operator_new(0x50,param_1);
  if (puVar13 != (undefined8 *)0x0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
    }
    *puVar13 = &PTR_GetPoolName_144d68bc8;
    puVar13[1] = uVar14;
    puVar13[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar13 + 3) = uVar8;
    *(undefined4 *)((longlong)puVar13 + 0x1c) = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar10;
    *(undefined4 *)((longlong)puVar13 + 0x24) = uVar11;
    puVar13[5] = uVar7;
    puVar13[6] = plVar6;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
    }
    puVar13[7] = uVar5;
    puVar13[8] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    uVar14 = FDelegateHandle::GenerateNewID();
    puVar13[9] = uVar14;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    if (plVar4 != (longlong *)0x0) {
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar6 + 8))(plVar6,1);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    lVar12 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar12 == 1) {
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
  plVar3 = (longlong *)param_4[1];
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
  plVar3 = (longlong *)param_5[1];
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
  return param_1;
}



// FUNCTION 1418ca770 FUN_1418ca770 body=389 status=ok
// SIG undefined FUN_1418ca770(void)

undefined8
FUN_1418ca770(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  longlong *local_10;
  
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_58 = *param_5;
  local_50 = param_5[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 0xc) = *(int *)(local_50 + 0xc) + 1;
    UNLOCK();
  }
  local_48 = *param_4;
  local_40 = param_4[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18);
  plVar4 = (longlong *)puVar6[1];
  local_38 = *puVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_30 = plVar4;
  FUN_1418ca560(param_1,&local_38,&local_28,&local_48,&local_58);
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
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_10 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
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
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = (longlong *)param_5[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return param_1;
}



// FUNCTION 1418ca900 FUN_1418ca900 body=353 status=ok
// SIG undefined FUN_1418ca900(void)

undefined8 *
FUN_1418ca900(undefined8 *param_1,longlong param_2,undefined4 *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 local_28 [8];
  longlong *local_20;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  plVar8 = (longlong *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 0x10,local_28)
  ;
  plVar3 = (longlong *)plVar8[1];
  lVar11 = *plVar8 + -8;
  if (*plVar8 == 0) {
    lVar11 = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  puVar9 = (undefined8 *)operator_new(0x38,param_1);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &PTR_GetPoolName_144d6a058;
    puVar9[1] = lVar11;
    puVar9[2] = plVar3;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(puVar9 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uVar5;
    *(undefined4 *)(puVar9 + 4) = uVar6;
    *(undefined4 *)((longlong)puVar9 + 0x24) = uVar7;
    *(undefined1 *)(puVar9 + 5) = param_4;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[6] = uVar10;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar11 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar3 + 1;
      lVar11 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
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
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    lVar11 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return param_1;
}



// FUNCTION 1418caa70 FUN_1418caa70 body=474 status=ok
// SIG undefined FUN_1418caa70(void)

undefined8 *
FUN_1418caa70(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 local_98;
  longlong *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined1 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [24];
  undefined1 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar4 = (longlong *)param_4[1];
  uVar5 = *param_4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  FText::FText(local_88,param_3);
  local_70 = *(undefined1 *)(param_3 + 0x18);
  local_68 = 0;
  local_60 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_68,param_3 + 0x20);
  lVar6 = operator_new(0x58,param_1);
  if (lVar6 != 0) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
      UNLOCK();
    }
    local_98 = uVar5;
    local_90 = plVar4;
    FText::FText(local_58,local_88);
    local_40 = local_70;
    local_38 = 0;
    local_30 = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(&local_38,&local_68);
    FUN_1418cd800(lVar6,param_2,local_58,&local_98);
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_68);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_80 + 8))(local_80,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3 + 0x20);
  plVar4 = *(longlong **)(param_3 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return param_1;
}



// FUNCTION 1418cac50 FUN_1418cac50 body=791 status=ok
// SIG undefined FUN_1418cac50(void)

int * FUN_1418cac50(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  void *_Dst;
  int iVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  bool local_res8;
  int local_res10 [2];
  
  iVar12 = 1;
  uVar16 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar14 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar14);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar14 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar14 * 0x28);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x28) = 0xffffffff;
    }
  }
  plVar10 = (longlong *)param_1[4];
  *param_2 = iVar14;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar10 +
                   (longlong)((int)(iVar14 + (iVar14 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar14 * 0x28);
  puVar3 = (ulonglong *)*param_3;
  puVar4 = (ulonglong *)param_3[1];
  *_Src = *puVar3;
  _Src[1] = puVar3[1];
  puVar3[1] = 0;
  *puVar3 = 0;
  _Src[2] = *puVar4;
  uVar5 = puVar4[1];
  _Src[3] = uVar5;
  if (uVar5 != 0) {
    LOCK();
    *(int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar13 != 1) {
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res10,_Src);
    local_res8 = local_res10[0] != -1;
    if (local_res8) {
      _Dst = (void *)(*param_1 + (longlong)local_res10[0] * 0x28);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x20);
      iVar12 = *param_2;
      bVar7 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar12;
      }
      lVar6 = *param_1;
      *(undefined4 *)(lVar6 + (longlong)iVar12 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar16 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar6 + 4 + (longlong)iVar12 * 0x28) = uVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar10 = (longlong *)param_1[4];
      *param_2 = local_res10[0];
      if (plVar10 == (longlong *)0x0) {
        plVar10 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar10 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar7 | 1U >> 0x20 - bVar7);
      goto LAB_1418caf3e;
    }
  }
  if (3 < uVar13) {
    uVar9 = (uVar13 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar14 = 0x20;
    cVar11 = '\0';
    if (uVar9 != 0) {
      iVar14 = 0x1f - iVar12;
    }
    uVar9 = (uVar13 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar11 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar14 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar13 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar15 = -(uVar9 + iVar12) ^ uVar9 >> 0xd;
    uVar13 = (iVar12 - uVar9) - uVar15 ^ uVar15 >> 0xc;
    uVar9 = (uVar9 - uVar13) - uVar15 ^ uVar13 << 0x10;
    uVar15 = (uVar15 - uVar9) - uVar13 ^ uVar9 >> 5;
    uVar13 = (uVar13 - uVar9) - uVar15 ^ uVar15 >> 3;
    uVar9 = (uVar9 - uVar13) - uVar15 ^ uVar13 << 10;
    uVar13 = ((uVar15 - uVar9) - uVar13 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar13;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<TSharedRef<FUniqueNetId_const_,0>,FString>,TDefaultMapHashableKeyFuncs<TSharedRef<FUniqueNetId_const_,0>,FString,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1418caf3e:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1418caf70 Emplace<TPairInitializer<FString_&&,FTextRange_&&>_> body=388 status=ok
// SIG undefined Emplace<TPairInitializer<FString_&&,FTextRange_&&>_>(void)

int * TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FTextRange_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  bool bVar8;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  puVar2 = (undefined8 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  bVar8 = false;
  *param_2 = local_38[0];
  *local_30 = 0;
  *local_30 = *puVar2;
  *puVar2 = 0;
  *(undefined4 *)(local_30 + 1) = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)((longlong)local_30 + 0xc) = *(undefined4 *)((longlong)puVar2 + 0xc);
  puVar2[1] = 0;
  local_30[2] = *puVar3;
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<FString,FAutomationTestBase_*>,TDefaultMapHashableKeyFuncs<FString,FAutomationTestBase_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,local_30);
    bVar8 = local_res8[0] != -1;
    if (bVar8) {
      plVar7 = (longlong *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      ::_guard_xfg_dispatch_icall_nop(plVar7,local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_1418cb0d1;
    }
  }
  cVar4 = TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar4 == '\0') {
    iVar1 = *param_2;
    if (*(int *)(local_30 + 1) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)*local_30;
    }
    uVar5 = FUN_140438070(puVar6);
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)((longlong)local_30 + 0x1c) = uVar5;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar1
    ;
  }
LAB_1418cb0d1:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar8;
  }
  return param_2;
}



// FUNCTION 1418cb100 FUN_1418cb100 body=848 status=ok
// SIG undefined FUN_1418cb100(void)

int * FUN_1418cb100(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  char cVar16;
  uint uVar17;
  void *_Dst;
  uint uVar18;
  ulonglong *_Src;
  bool local_res8;
  int local_48 [4];
  
  iVar15 = 1;
  uVar14 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar5 = *(int *)((longlong)iVar12 * 0x20 + 4 + *param_1);
    iVar1 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar5;
    *(int *)((longlong)param_1 + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar5 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar12;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar4 = (uint *)((longlong)plVar11 +
                   (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar4 = *puVar4 | 1 << ((byte)iVar12 & 0x1f);
  puVar6 = (ulonglong *)param_3[1];
  _Src = (ulonglong *)((longlong)iVar12 * 0x20 + *param_1);
  *_Src = *(ulonglong *)*param_3;
  _Src[1] = *puVar6;
  uVar7 = puVar6[1];
  _Src[2] = uVar7;
  if (uVar7 != 0) {
    LOCK();
    *(int *)(uVar7 + 8) = *(int *)(uVar7 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar18 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_48,*_Src);
    local_res8 = local_48[0] != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)local_48[0] * 0x20 + *param_1);
      plVar11 = *(longlong **)((longlong)_Dst + 0x10);
      iVar15 = local_48[0];
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar11 + 1;
        lVar9 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar9 == 1) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar3 = (int *)((longlong)plVar11 + 0xc);
          iVar12 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          iVar15 = local_48[0];
          if (iVar12 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11,1);
            iVar15 = local_48[0];
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      iVar12 = *param_2;
      bVar8 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar12;
      }
      puVar13 = (undefined4 *)((longlong)iVar12 * 0x20 + *param_1);
      *puVar13 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar14 = (undefined4)param_1[6];
      }
      puVar13[1] = uVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar15;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar4 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar4 = *puVar4 & ~(1 << bVar8 | 1U >> 0x20 - bVar8);
      goto LAB_1418cb421;
    }
  }
  if (3 < uVar18) {
    uVar10 = (uVar18 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar12 = 0x20;
    cVar16 = '\0';
    if (uVar10 != 0) {
      iVar12 = 0x1f - iVar15;
    }
    uVar10 = (uVar18 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar10 != 0) {
      cVar16 = '\x1f' - (char)iVar15;
    }
    iVar15 = 1 << (~(byte)((iVar12 << 0x1a) >> 0x1f) & 0x20U - cVar16 & 0x1f);
  }
  if (((int)uVar18 < 1) || (((int)param_1[9] != 0 && (iVar15 <= (int)param_1[9])))) {
    iVar15 = (int)(*_Src >> 4);
    uVar10 = 0x9e3779b9U - iVar15 ^ iVar15 << 8;
    uVar17 = -(uVar10 + iVar15) ^ uVar10 >> 0xd;
    uVar18 = (iVar15 - uVar10) - uVar17 ^ uVar17 >> 0xc;
    uVar10 = (uVar10 - uVar18) - uVar17 ^ uVar18 << 0x10;
    uVar17 = (uVar17 - uVar10) - uVar18 ^ uVar10 >> 5;
    uVar18 = (uVar18 - uVar10) - uVar17 ^ uVar17 >> 3;
    uVar10 = (uVar10 - uVar18) - uVar17 ^ uVar18 << 10;
    uVar18 = ((uVar17 - uVar10) - uVar18 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar18;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar18) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    TSet<TTuple<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>_>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,TArray<AIIdleShip_*,FDefaultAllocator>,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1418cb421:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1418cb450 FUN_1418cb450 body=1000 status=ok
// SIG undefined FUN_1418cb450(void)

int * FUN_1418cb450(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  void *_Dst;
  char cVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong *_Src;
  int iVar17;
  bool local_res8;
  
  iVar10 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar14 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x30);
    *(int *)(param_1 + 6) = iVar14;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x30) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  puVar2 = (ulonglong *)*param_3;
  lVar3 = param_3[1];
  _Src = (ulonglong *)((longlong)iVar11 * 0x30 + *param_1);
  *_Src = *puVar2;
  uVar4 = puVar2[1];
  _Src[1] = uVar4;
  if (uVar4 != 0) {
    LOCK();
    *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
    UNLOCK();
  }
  FText::FText(_Src + 2,lVar3);
  *(undefined4 *)(_Src + 5) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar16 != 1) {
    iVar11 = iVar17;
    if (uVar16 != 0) {
      iVar14 = (int)(*_Src >> 4);
      uVar13 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
      uVar9 = -(uVar13 + iVar14) ^ uVar13 >> 0xd;
      uVar15 = (iVar14 - uVar13) - uVar9 ^ uVar9 >> 0xc;
      uVar13 = (uVar13 - uVar15) - uVar9 ^ uVar15 << 0x10;
      uVar9 = (uVar9 - uVar13) - uVar15 ^ uVar13 >> 5;
      uVar15 = (uVar15 - uVar13) - uVar9 ^ uVar9 >> 3;
      uVar13 = (uVar13 - uVar15) - uVar9 ^ uVar15 << 10;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar14 = *(int *)((longlong)plVar8 +
                       (((longlong)(int)((uVar9 - uVar13) - uVar15) ^ (ulonglong)(uVar13 >> 0xf)) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar14 != -1) {
        do {
          iVar11 = iVar14;
          if (*(ulonglong *)(*param_1 + (longlong)iVar14 * 0x30) == *_Src) break;
          iVar14 = *(int *)(*param_1 + 0x28 + (longlong)iVar14 * 0x30);
          iVar11 = iVar17;
        } while (iVar14 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar11 * 0x30 + *param_1);
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                (_Dst);
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x28);
      iVar10 = *param_2;
      bVar5 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar10;
      }
      puVar7 = (undefined4 *)((longlong)iVar10 * 0x30 + *param_1);
      *puVar7 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      puVar7[1] = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar8 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_1418cb80f;
    }
  }
  if (3 < uVar16) {
    uVar9 = (uVar16 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar12 = '\0';
    if (uVar9 != 0) {
      iVar10 = 0x1f - iVar17;
    }
    uVar9 = (uVar16 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar9 != 0) {
      cVar12 = '\x1f' - (char)iVar17;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar17 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar17 ^ iVar17 << 8;
    uVar13 = -(uVar9 + iVar17) ^ uVar9 >> 0xd;
    uVar16 = (iVar17 - uVar9) - uVar13 ^ uVar13 >> 0xc;
    uVar9 = (uVar9 - uVar16) - uVar13 ^ uVar16 << 0x10;
    uVar13 = (uVar13 - uVar9) - uVar16 ^ uVar9 >> 5;
    uVar16 = (uVar16 - uVar9) - uVar13 ^ uVar13 >> 3;
    uVar9 = (uVar9 - uVar16) - uVar13 ^ uVar16 << 10;
    uVar16 = ((uVar13 - uVar9) - uVar16 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x2c) = uVar16;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 5) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<TSharedPtr<SWidget,0>,FText>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,0>,FText,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1418cb80f:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1418cb840 FUN_1418cb840 body=258 status=ok
// SIG undefined FUN_1418cb840(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1418cb840(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_1469f4620) &&
       (_Init_thread_header(&DAT_1469f4620), DAT_1469f4620 == -1)) {
      DAT_1469f4610 = 0;
      _DAT_1469f4618 = 0x16;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1469f4610,0);
      FGenericPlatformString::Memcpy(DAT_1469f4610,L"FDockingDragOperation",0x2c);
      atexit((_func_5014 *)&LAB_143e83380);
      _Init_thread_footer(&DAT_1469f4620);
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,&DAT_1469f4610);
    if (cVar3 != '\0') {
      *param_2 = *(undefined8 *)(param_1 + 0x70);
      lVar2 = *(longlong *)(param_1 + 0x78);
      param_2[1] = lVar2;
      if (lVar2 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1418cb950 FUN_1418cb950 body=66 status=ok
// SIG undefined FUN_1418cb950(void)

void FUN_1418cb950(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  lVar2 = *param_1;
  puVar1 = (undefined8 *)ISlateStyle::Join(local_res8);
  lVar2 = (**(code **)(lVar2 + 0x80))(param_1,DAT_1469eb160,*puVar1);
  if (lVar2 == 0) {
    FUN_141834930();
  }
  return;
}



// FUNCTION 1418cb9a0 FUN_1418cb9a0 body=66 status=ok
// SIG undefined FUN_1418cb9a0(void)

void FUN_1418cb9a0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  
  lVar2 = *param_1;
  puVar1 = (undefined8 *)ISlateStyle::Join(local_res8);
  lVar2 = (**(code **)(lVar2 + 0x80))(param_1,DAT_1469eb150,*puVar1);
  if (lVar2 == 0) {
    FUN_1418349b0();
  }
  return;
}



// FUNCTION 1418cb9f0 FUN_1418cb9f0 body=309 status=ok
// SIG undefined FUN_1418cb9f0(void)

longlong FUN_1418cb9f0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *local_58;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  uVar5 = FUN_14187ce90(&local_58,param_2,&local_48);
  FText::FText(local_38);
  local_20 = 1;
  local_18 = 0;
  local_10 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,uVar5);
  FText::operator=(param_1 + 0x278,local_38);
  *(undefined1 *)(param_1 + 0x290) = local_20;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x298,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
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
  if (local_50 != 0) {
    if (local_58 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_58 + 0x28))(local_58,0);
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)FMemory::Realloc(local_58,0,0);
    }
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return param_1;
}



// FUNCTION 1418cbb30 Image<SFlareButton> body=211 status=ok
// SIG undefined Image<SFlareButton>(void)

longlong SImage::FArguments::Image<SFlareButton>
                   (longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  uVar1 = FUN_1418c9930(&local_48,param_2,&local_38);
  local_20 = 1;
  local_28 = 0;
  local_18 = 0;
  local_10 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,uVar1);
  *(undefined8 *)(param_1 + 0x108) = local_28;
  *(undefined1 *)(param_1 + 0x110) = local_20;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x118,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return param_1;
}



// FUNCTION 1418cbc10 Image<SFlareButton> body=211 status=ok
// SIG undefined Image<SFlareButton>(void)

longlong SImage::FArguments::Image<SFlareButton>
                   (longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  uVar1 = FUN_14068c560(&local_48,param_2,&local_38);
  local_20 = 1;
  local_28 = 0;
  local_18 = 0;
  local_10 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_18,uVar1);
  *(undefined8 *)(param_1 + 0x108) = local_28;
  *(undefined1 *)(param_1 + 0x110) = local_20;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x118,&local_18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return param_1;
}



// FUNCTION 1418cbcf0 FUN_1418cbcf0 body=356 status=ok
// SIG undefined FUN_1418cbcf0(void)

ulonglong FUN_1418cbcf0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  uint uStackX_c;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  bVar10 = false;
  if (plVar2 != plVar2 + (longlong)(int)lVar3 * 4) {
    plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
    plVar6 = plVar2 + 3;
    plVar9 = plVar2;
    do {
      plVar7 = plVar8;
      if ((plVar6[-1] != 0) && (*plVar6 != 0)) {
        piVar1 = (int *)(*plVar6 + 8);
        LOCK();
        iVar5 = *piVar1;
        if (iVar5 == 0) {
          *piVar1 = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (((0 < iVar5) && (*plVar9 != 0)) && (plVar6[-2] != 0)) {
          piVar1 = (int *)(plVar6[-2] + 8);
          LOCK();
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            *piVar1 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) {
            plVar8 = (longlong *)*plVar6;
            bVar10 = true;
            plVar7 = plVar8;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              iVar5 = (int)plVar8[1];
              bVar11 = iVar5 == 0;
              if (bVar11) {
                *(int *)(plVar8 + 1) = 0;
                iVar5 = 0;
              }
              UNLOCK();
              while (plVar7 = (longlong *)0x0, !bVar11) {
                LOCK();
                bVar11 = iVar5 == (int)plVar8[1];
                if (bVar11) {
                  *(int *)(plVar8 + 1) = iVar5 + 1;
                }
                UNLOCK();
                if (bVar11) {
                  plVar7 = plVar8;
                  if ((plVar6[-1] != 0) && (plVar6[-1] == *param_2)) {
                    bVar11 = true;
                    goto LAB_1418cbdad;
                  }
                  break;
                }
                LOCK();
                iVar5 = (int)plVar8[1];
                bVar11 = iVar5 == 0;
                if (bVar11) {
                  *(int *)(plVar8 + 1) = 0;
                  iVar5 = 0;
                }
                UNLOCK();
              }
            }
          }
        }
      }
      bVar11 = false;
      plVar8 = plVar7;
LAB_1418cbdad:
      if ((bVar10) && (bVar10 = false, plVar8 != (longlong *)0x0)) {
        LOCK();
        plVar7 = plVar8 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8);
          }
        }
      }
      if (bVar11) {
        return (longlong)plVar9 - (longlong)plVar2 >> 5 & 0xffffffff;
      }
      plVar9 = plVar9 + 4;
      plVar6 = plVar6 + 4;
    } while (plVar9 != plVar2 + (longlong)(int)lVar3 * 4);
  }
  return 0xffffffff;
}



// FUNCTION 1418cbe60 FUN_1418cbe60 body=349 status=ok
// SIG undefined FUN_1418cbe60(void)

ulonglong FUN_1418cbe60(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  uint uStackX_c;
  
  plVar2 = (longlong *)*param_1;
  lVar3 = param_1[1];
  if (plVar2 != plVar2 + (longlong)(int)lVar3 * 4) {
    plVar8 = (longlong *)((ulonglong)uStackX_c << 0x20);
    plVar6 = plVar2;
    plVar9 = (longlong *)0x0;
    do {
      plVar7 = plVar8;
      if ((plVar6[2] != 0) && (plVar6[3] != 0)) {
        piVar1 = (int *)(plVar6[3] + 8);
        LOCK();
        iVar5 = *piVar1;
        if (iVar5 == 0) {
          *piVar1 = 0;
          iVar5 = 0;
        }
        UNLOCK();
        if (((0 < iVar5) && (*plVar6 != 0)) && (plVar6[1] != 0)) {
          piVar1 = (int *)(plVar6[1] + 8);
          LOCK();
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            *piVar1 = 0;
            iVar5 = 0;
          }
          UNLOCK();
          if (0 < iVar5) {
            plVar8 = (longlong *)plVar6[1];
            plVar9 = (longlong *)0x1;
            plVar7 = plVar8;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              iVar5 = (int)plVar8[1];
              bVar10 = iVar5 == 0;
              if (bVar10) {
                *(int *)(plVar8 + 1) = 0;
                iVar5 = 0;
              }
              UNLOCK();
              while (plVar7 = (longlong *)0x0, !bVar10) {
                LOCK();
                bVar10 = iVar5 == (int)plVar8[1];
                if (bVar10) {
                  *(int *)(plVar8 + 1) = iVar5 + 1;
                }
                UNLOCK();
                if (bVar10) {
                  plVar7 = plVar8;
                  if ((*plVar6 != 0) && (*plVar6 == *param_2)) {
                    bVar10 = true;
                    goto LAB_1418cbf1e;
                  }
                  break;
                }
                LOCK();
                iVar5 = (int)plVar8[1];
                bVar10 = iVar5 == 0;
                if (bVar10) {
                  *(int *)(plVar8 + 1) = 0;
                  iVar5 = 0;
                }
                UNLOCK();
              }
            }
          }
        }
      }
      bVar10 = false;
      plVar8 = plVar7;
LAB_1418cbf1e:
      if ((plVar9 != (longlong *)0x0) && (plVar9 = (longlong *)0x0, plVar8 != (longlong *)0x0)) {
        LOCK();
        plVar7 = plVar8 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar5 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      if (bVar10) {
        return (longlong)plVar6 - (longlong)plVar2 >> 5 & 0xffffffff;
      }
      plVar6 = plVar6 + 4;
    } while (plVar6 != plVar2 + (longlong)(int)lVar3 * 4);
  }
  return 0xffffffff;
}



// FUNCTION 1418cbfc0 FUN_1418cbfc0 body=238 status=ok
// SIG undefined FUN_1418cbfc0(void)

longlong FUN_1418cbfc0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  longlong local_20;
  undefined4 local_18;
  
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  plVar1 = (longlong *)FUN_1418c97d0(&local_48,param_2,&local_38);
  local_28._0_1_ = 0;
  local_28 = 0x100;
  local_20 = 0;
  local_18 = 0;
  local_28._1_1_ = 1;
  if (((plVar1 != &local_20) && ((int)plVar1[1] != 0)) &&
     (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_20);
  }
  *(undefined1 *)(param_1 + 0x138) = (undefined1)local_28;
  *(undefined1 *)(param_1 + 0x139) = local_28._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x140,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return param_1;
}



// FUNCTION 1418cc0b0 FUN_1418cc0b0 body=267 status=ok
// SIG undefined FUN_1418cc0b0(void)

undefined8 * FUN_1418cc0b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x450);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_FUN_144044b48;
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR__purecall_144043248;
      SBorder::SBorder(puVar2 + 3);
      *puVar1 = &PTR_StartProfileThreadUsage_144d68b40;
      puVar2[3] = &PTR_LAB_144043a48;
      puVar2[0x74] = 0;
      puVar2[0x75] = 0;
      *(undefined4 *)(puVar2 + 0x76) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x3b4) = 1;
      puVar2[0x79] = 0;
      *(undefined4 *)(puVar2 + 0x7a) = 0;
      puVar2[0x7b] = 0;
      *(undefined4 *)(puVar2 + 0x7c) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x3ec) = 0;
      puVar2[0x7e] = 0;
      *(undefined4 *)(puVar2 + 0x7f) = 0;
      puVar2[0x80] = 0;
      *(undefined4 *)(puVar2 + 0x81) = 0;
      puVar2[0x82] = 0;
      *(undefined4 *)(puVar2 + 0x83) = 0;
      puVar2[0x84] = 0;
      *(undefined4 *)(puVar2 + 0x85) = 0;
      puVar2[0x87] = 0;
      puVar2[0x88] = 0;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cc1c0 FUN_1418cc1c0 body=140 status=ok
// SIG undefined FUN_1418cc1c0(void)

undefined8 * FUN_1418cc1c0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x650);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_FUN_144d6a770;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1418cd620(puVar1,1);
      *(undefined1 *)(puVar2 + 0xc9) = 1;
      *puVar1 = &PTR_FUN_144d68f78;
      puVar2[0x60] = &PTR_LAB_144d691f8;
      puVar2[0x86] = &PTR_IsPromotedBuild_144d68ec8;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cc250 NewIntrusiveReferenceController<SBorder> body=77 status=ok
// SIG undefined NewIntrusiveReferenceController<SBorder>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SBorder>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x398);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144d61068;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cc2a0 FUN_1418cc2a0 body=77 status=ok
// SIG undefined FUN_1418cc2a0(void)

undefined8 * FUN_1418cc2a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(800);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144044b78;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1419618a0();
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cc2f0 NewIntrusiveReferenceController<SCheckBox> body=106 status=ok
// SIG undefined NewIntrusiveReferenceController<SCheckBox>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SCheckBox>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x4a8);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a7a0;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x498);
      SCheckBox::SCheckBox(_Dst);
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cc360 FUN_1418cc360 body=262 status=ok
// SIG undefined FUN_1418cc360(void)

undefined8 * FUN_1418cc360(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x2d0);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a800;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x2c0);
      FUN_1417f46d0(_Dst);
      *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xf7;
      *_Dst = &PTR__scalar_deleting_destructor__144d69820;
      *(undefined1 *)(puVar1 + 0x45) = 0;
      puVar1[0x46] = 0;
      *(undefined4 *)(puVar1 + 0x47) = 0;
      *(undefined2 *)(puVar1 + 0x48) = 0;
      puVar1[0x49] = 0;
      *(undefined4 *)(puVar1 + 0x4a) = 0;
      *(undefined2 *)(puVar1 + 0x4b) = 0;
      puVar1[0x4c] = 0;
      *(undefined4 *)(puVar1 + 0x4d) = 0;
      *(undefined2 *)(puVar1 + 0x4e) = 0;
      puVar1[0x4f] = 0;
      *(undefined4 *)(puVar1 + 0x50) = 0;
      *(undefined2 *)(puVar1 + 0x51) = 0;
      puVar1[0x52] = 0;
      *(undefined4 *)(puVar1 + 0x53) = 0;
      puVar1[0x54] = 0;
      *(undefined4 *)(puVar1 + 0x55) = 0;
      *(undefined1 *)(puVar1 + 0x57) = 0;
      puVar1[0x58] = 0;
      *(undefined4 *)(puVar1 + 0x59) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cc470 NewIntrusiveReferenceController<SComboButton> body=191 status=ok
// SIG undefined NewIntrusiveReferenceController<SComboButton>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SComboButton>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x368);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a7b0;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x358);
      FUN_141923690(_Dst);
      *_Dst = &PTR_FUN_144d693b0;
      puVar1[0x43] = &PTR_FUN_144d695d0;
      puVar1[99] = 0;
      *(undefined4 *)(puVar1 + 100) = 0;
      puVar1[0x65] = 0;
      puVar1[0x66] = 0;
      puVar1[0x6a] = 0;
      puVar1[0x6b] = 0;
      puVar1[0x68] = 0;
      puVar1[0x69] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cc530 FUN_1418cc530 body=149 status=ok
// SIG undefined FUN_1418cc530(void)

undefined8 * FUN_1418cc530(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x340);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a790;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x330);
      SMultiBlockBaseWidget::SMultiBlockBaseWidget(_Dst);
      *_Dst = &PTR_AsWidget_144d684c0;
      puVar1[3] = &PTR_LAB_144d684f8;
      puVar1[0x66] = 0;
      puVar1[0x67] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cc5d0 FUN_1418cc5d0 body=142 status=ok
// SIG undefined FUN_1418cc5d0(void)

undefined8 * FUN_1418cc5d0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x228);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144d6a720;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x218);
      FUN_1417f46d0(_Dst);
      *(byte *)(puVar1 + 5) = *(byte *)(puVar1 + 5) & 0xf7;
      *_Dst = &PTR_FUN_144d67b78;
      puVar1[0x43] = 0;
      puVar1[0x44] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cc660 NewIntrusiveReferenceController<SDockingSplitter> body=174 status=ok
// SIG undefined NewIntrusiveReferenceController<SDockingSplitter>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SDockingSplitter>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x338);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a700;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x328);
      FUN_1417f4470(_Dst);
      puVar1[0x60] = 0;
      puVar1[0x61] = 0;
      *(undefined4 *)(puVar1 + 0x62) = 0x3f800000;
      *_Dst = &PTR__scalar_deleting_destructor__144d60728;
      puVar1[99] = 0;
      puVar1[100] = 0;
      puVar1[0x65] = 0;
      puVar1[0x66] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cc710 NewIntrusiveReferenceController<SDockingTabWell> body=176 status=ok
// SIG undefined NewIntrusiveReferenceController<SDockingTabWell>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SDockingTabWell>(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x270);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2 + 2;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((longlong)puVar2 + 0xc) = 1;
    *puVar2 = &PTR_LAB_144d6a710;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_1417f46d0(puVar1);
      *puVar1 = &PTR_FUN_144d67970;
      puVar2[0x44] = puVar1;
      puVar2[0x45] = 0;
      puVar2[0x46] = 0;
      puVar2[0x43] = &PTR_Count_144d67948;
      *(undefined1 *)(puVar2 + 0x47) = 1;
      puVar2[0x48] = 0;
      puVar2[0x49] = 0;
      puVar2[0x4a] = 0;
      puVar2[0x4b] = 0;
    }
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cc7c0 NewIntrusiveReferenceController<SDockingTarget> body=138 status=ok
// SIG undefined NewIntrusiveReferenceController<SDockingTarget>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SDockingTarget>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x3c0);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144d6a6f0;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x3b0);
      SBorder::SBorder(_Dst);
      *_Dst = &PTR_FUN_144d67738;
      puVar1[0x75] = 0;
      puVar1[0x76] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cc850 FUN_1418cc850 body=492 status=ok
// SIG undefined FUN_1418cc850(void)

undefined8 * FUN_1418cc850(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x550);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a7c0;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x540);
      SBorder::SBorder(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__144d695f8;
      puVar1[0x74] = 0;
      puVar1[0x75] = 0;
      puVar1[0x76] = 0;
      puVar1[0x77] = 0;
      puVar1[0x78] = 0;
      puVar1[0x79] = 0;
      *(undefined1 *)(puVar1 + 0x7a) = 0;
      puVar1[0x7b] = 0;
      *(undefined4 *)(puVar1 + 0x7c) = 0;
      FUN_1417efd90(puVar1 + 0x7d);
      *(undefined1 *)(puVar1 + 0x87) = 0;
      puVar1[0x88] = 0;
      *(undefined4 *)(puVar1 + 0x89) = 0;
      puVar1[0x8a] = 0x3f800000;
      *(undefined4 *)(puVar1 + 0x8b) = 0x3f800000;
      *(undefined4 *)((longlong)puVar1 + 0x45c) = 0x3f800000;
      *(undefined1 *)(puVar1 + 0x8c) = 0;
      puVar1[0x8d] = 0;
      puVar1[0x8e] = 0;
      *(undefined1 *)(puVar1 + 0x8f) = 0;
      puVar1[0x90] = 0;
      *(undefined4 *)(puVar1 + 0x91) = 0;
      puVar1[0x92] = 0x3f800000;
      *(undefined4 *)(puVar1 + 0x93) = 0x3f800000;
      *(undefined4 *)((longlong)puVar1 + 0x49c) = 0x3f800000;
      *(undefined1 *)(puVar1 + 0x94) = 0;
      puVar1[0x95] = 0;
      puVar1[0x96] = 0;
      *(undefined1 *)(puVar1 + 0x97) = 0;
      puVar1[0x98] = 0;
      *(undefined4 *)(puVar1 + 0x99) = 0;
      puVar1[0x9a] = 0x3f800000;
      *(undefined4 *)(puVar1 + 0x9b) = 0x3f800000;
      *(undefined4 *)((longlong)puVar1 + 0x4dc) = 0x3f800000;
      *(undefined1 *)(puVar1 + 0x9c) = 0;
      puVar1[0x9d] = 0;
      puVar1[0x9e] = 0;
      *(undefined1 *)(puVar1 + 0x9f) = 0;
      puVar1[0xa0] = 0;
      *(undefined4 *)(puVar1 + 0xa1) = 0;
      puVar1[0xa2] = 0;
      puVar1[0xa3] = 0;
      puVar1[0xa4] = 0;
      puVar1[0xa5] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cca40 FUN_1418cca40 body=127 status=ok
// SIG undefined FUN_1418cca40(void)

undefined8 * FUN_1418cca40(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x330);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a7d0;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,800);
      SMultiBlockBaseWidget::SMultiBlockBaseWidget(_Dst);
      *_Dst = &PTR_AsWidget_144d69288;
      puVar1[3] = &PTR_LAB_144d66cc0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418ccac0 NewIntrusiveReferenceController<SSplitter> body=77 status=ok
// SIG undefined NewIntrusiveReferenceController<SSplitter>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144044b58;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      SHorizontalBox::SHorizontalBox();
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418ccb10 NewIntrusiveReferenceController<SMenuAnchor> body=77 status=ok
// SIG undefined NewIntrusiveReferenceController<SMenuAnchor>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SMenuAnchor>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x310);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144d6a7f0;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      FUN_141923690();
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418ccb60 NewIntrusiveReferenceController<SMenuEntryBlock> body=157 status=ok
// SIG undefined NewIntrusiveReferenceController<SMenuEntryBlock>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SMenuEntryBlock>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x370);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a7e0;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x360);
      SMultiBlockBaseWidget::SMultiBlockBaseWidget(_Dst);
      *_Dst = &PTR_AsWidget_144d68280;
      puVar1[3] = &PTR_LAB_144d682b8;
      puVar1[0x66] = 0;
      puVar1[0x67] = 0;
      puVar1[0x6a] = 0;
      puVar1[0x6b] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418ccc00 NewIntrusiveReferenceController<SMenuEntryButton> body=116 status=ok
// SIG undefined NewIntrusiveReferenceController<SMenuEntryButton>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SMenuEntryButton>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x4a0);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144d6a810;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x490);
      SButton::SButton(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__144d69aa8;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418ccc80 FUN_1418ccc80 body=127 status=ok
// SIG undefined FUN_1418ccc80(void)

undefined8 * FUN_1418ccc80(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x330);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a7d0;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,800);
      SMultiBlockBaseWidget::SMultiBlockBaseWidget(_Dst);
      *_Dst = &PTR_AsWidget_144d692f0;
      puVar1[3] = &PTR_LAB_144d66cc0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418ccd00 NewIntrusiveReferenceController<SMultiBlockDragHandle> body=153 status=ok
// SIG undefined NewIntrusiveReferenceController<SMultiBlockDragHandle>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SMultiBlockDragHandle>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x328);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a750;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x318);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR_FUN_144d68700;
      puVar1[0x60] = 0;
      puVar1[0x61] = 0;
      puVar1[0x62] = 0;
      puVar1[99] = 0;
      puVar1[100] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418ccda0 NewIntrusiveReferenceController<SMultiBoxWidget> body=317 status=ok
// SIG undefined NewIntrusiveReferenceController<SMultiBoxWidget>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SMultiBoxWidget>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x3f8);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a740;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,1000);
      FUN_1417f4470(_Dst);
      puVar1[0x60] = 0;
      puVar1[0x61] = 0;
      *_Dst = &PTR_FUN_144d66ec8;
      puVar1[0x62] = 0;
      puVar1[99] = 0;
      puVar1[100] = 0;
      puVar1[0x65] = 0;
      puVar1[0x66] = 0;
      puVar1[0x67] = 0;
      puVar1[0x68] = 0;
      puVar1[0x69] = 0;
      puVar1[0x6a] = 0;
      puVar1[0x6b] = 0;
      *(undefined4 *)(puVar1 + 0x6c) = 0xffffffff;
      puVar1[0x6d] = 0;
      puVar1[0x6e] = 0;
      puVar1[0x71] = 0;
      puVar1[0x72] = 0;
      *(undefined4 *)(puVar1 + 0x73) = 0xffffffff;
      *(undefined4 *)((longlong)puVar1 + 0x39c) = 0;
      puVar1[0x75] = 0;
      *(undefined4 *)(puVar1 + 0x76) = 0;
      puVar1[0x77] = 0;
      puVar1[0x78] = 0;
      puVar1[0x79] = 0;
      puVar1[0x7a] = 0;
      FText::FText(puVar1 + 0x7b);
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418ccee0 FUN_1418ccee0 body=224 status=ok
// SIG undefined FUN_1418ccee0(void)

undefined8 * FUN_1418ccee0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x3a0);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a840;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,0x390);
      FUN_1417f4470(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__144d6a098;
      puVar1[0x60] = 0;
      puVar1[0x61] = 0;
      puVar1[0x62] = 0;
      puVar1[99] = 0;
      FUN_1417efd90(puVar1 + 100);
      *(undefined1 *)(puVar1 + 0x6e) = 0;
      puVar1[0x6f] = 0;
      *(undefined4 *)(puVar1 + 0x70) = 0;
      puVar1[0x72] = 0;
      puVar1[0x73] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418ccfc0 NewIntrusiveReferenceController<SSubMenuButton> body=146 status=ok
// SIG undefined NewIntrusiveReferenceController<SSubMenuButton>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SSubMenuButton>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x4b0);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a820;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x4a0);
      SButton::SButton(_Dst);
      *_Dst = &PTR__scalar_deleting_destructor__144d69d58;
      *(undefined2 *)(puVar1 + 0x93) = 0;
      puVar1[0x94] = 0;
      *(undefined4 *)(puVar1 + 0x95) = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cd060 NewIntrusiveReferenceController<SBorder> body=77 status=ok
// SIG undefined NewIntrusiveReferenceController<SBorder>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SBorder>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x660);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_FUN_144043520;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cd0b0 NewIntrusiveReferenceController<SToolBarButtonBlock> body=162 status=ok
// SIG undefined NewIntrusiveReferenceController<SToolBarButtonBlock>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SToolBarButtonBlock>(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x358);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_DestroyObject_144d6a830;
    if (_Dst != (undefined8 *)0x0) {
      ::_guard_xfg_dispatch_icall_nop(_Dst,0,0x348);
      SMultiBlockBaseWidget::SMultiBlockBaseWidget(_Dst);
      *_Dst = &PTR_AsWidget_144d68010;
      puVar1[3] = &PTR_LAB_144d68048;
      *(undefined2 *)(puVar1 + 0x66) = 0x19;
      puVar1[0x67] = 0;
      *(undefined4 *)(puVar1 + 0x68) = 0;
      puVar1[0x6a] = 0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cd160 NewIntrusiveReferenceController<SSplitter> body=77 status=ok
// SIG undefined NewIntrusiveReferenceController<SSplitter>(void)

undefined8 * SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_DestroyObject_144d503e8;
    if (puVar1 != (undefined8 *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cd1b0 FUN_1418cd1b0 body=127 status=ok
// SIG undefined FUN_1418cd1b0(void)

undefined8 * FUN_1418cd1b0(void)

{
  undefined8 *_Dst;
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x330);
  if (puVar1 != (undefined8 *)0x0) {
    _Dst = puVar1 + 2;
    *(undefined4 *)(puVar1 + 1) = 1;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    *puVar1 = &PTR_LAB_144d6a7d0;
    if (_Dst != (undefined8 *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,0,800);
      SMultiBlockBaseWidget::SMultiBlockBaseWidget(_Dst);
      *_Dst = &PTR_AsWidget_144d69358;
      puVar1[3] = &PTR_LAB_144d66cc0;
    }
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1418cd230 OnCheckStateChanged<SMenuEntryBlock> body=138 status=ok
// SIG undefined OnCheckStateChanged<SMenuEntryBlock>(void)

longlong SCheckBox::FArguments::OnCheckStateChanged<SMenuEntryBlock>
                   (longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong *local_28;
  int local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  uVar1 = FUN_14068c3f0(&local_28,param_2,&local_18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x128,uVar1);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return param_1;
}



// FUNCTION 1418cd2c0 FUN_1418cd2c0 body=500 status=ok
// SIG undefined FUN_1418cd2c0(void)

longlong FUN_1418cd2c0(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar8 = (longlong *)param_4[1];
  local_48 = *param_4;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
  }
  local_40 = plVar8;
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_18);
  plVar7 = (longlong *)puVar6[1];
  local_38 = *puVar6;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_30 = plVar7;
  FUN_1418ca3f0(&local_58,&local_38,&local_28,&local_48);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_10 + 1;
    lVar5 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
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
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  plVar8 = local_58;
  pplVar3 = (longlong **)(param_1 + 0x188);
  if (&local_58 != pplVar3) {
    if ((local_50 == 0) || (local_58 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 400) != 0) && (plVar7 = *pplVar3, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*pplVar3 != (longlong *)0x0) {
          plVar7 = (longlong *)FMemory::Realloc(*pplVar3,0,0);
          *pplVar3 = plVar7;
        }
        *(undefined4 *)(param_1 + 400) = 0;
      }
    }
    else {
      (**(code **)(*local_58 + 0x30))(local_58,pplVar3);
    }
  }
  if (local_50 != 0) {
    if (plVar8 == (longlong *)0x0) goto LAB_1418cd476;
    (**(code **)(*plVar8 + 0x28))(plVar8,0);
    plVar8 = (longlong *)FMemory::Realloc(plVar8,0,0);
    local_58 = plVar8;
  }
  if (plVar8 != (longlong *)0x0) {
    FMemory::Free(plVar8);
  }
LAB_1418cd476:
  plVar8 = (longlong *)param_4[1];
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (plVar8 != (longlong *)0x0)) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  return param_1;
}



// FUNCTION 1418cd4c0 OnGetMenuContent<SMenuEntryBlock> body=138 status=ok
// SIG undefined OnGetMenuContent<SMenuEntryBlock>(void)

longlong SMenuAnchor::FArguments::OnGetMenuContent<SMenuEntryBlock>
                   (longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong *local_28;
  int local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  uVar1 = FUN_1418c9510(&local_28,param_2,&local_18);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x138,uVar1);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return param_1;
}



// FUNCTION 1418cd550 Visibility<SFlareCompanyInfo> body=203 status=ok
// SIG undefined Visibility<SFlareCompanyInfo>(void)

longlong TSlateBaseNamedArgs<SFlareButton>::Visibility<SFlareCompanyInfo>
                   (longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  longlong *local_48;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  uVar1 = FUN_1418ca900(&local_48,param_2,&local_38);
  local_28 = 0x119;
  local_20 = 0;
  local_18 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_20,uVar1);
  *(undefined1 *)(param_1 + 0x78) = (undefined1)local_28;
  *(undefined1 *)(param_1 + 0x79) = local_28._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x80,&local_20);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_20);
  if (local_40 != 0) {
    if (local_48 == (longlong *)0x0) {
      return param_1;
    }
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return param_1;
}



// FUNCTION 1418cd620 FUN_1418cd620 body=470 status=ok
// SIG undefined FUN_1418cd620(void)

undefined8 * FUN_1418cd620(undefined8 *param_1)

{
  FUN_1419a8fd0();
  *param_1 = &PTR__scalar_deleting_destructor__144d68c48;
  param_1[0x5e] = &PTR_LAB_144044268;
  param_1[0x84] = &PTR_IsPromotedBuild_144d68ec8;
  param_1[0x85] = param_1;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  param_1[0x8e] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0xffffffff;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc1] = 0;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  *(undefined2 *)(param_1 + 0xc3) = 0x101;
  param_1[0xc4] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x633) = 0;
  return param_1;
}



// FUNCTION 1418cd800 FUN_1418cd800 body=251 status=ok
// SIG undefined FUN_1418cd800(void)

undefined8 *
FUN_1418cd800(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  param_1[1] = param_2;
  *param_1 = &PTR_GetPoolName_144d6a500;
  FText::FText(param_1 + 2,param_3);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_3 + 0x18);
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 6,param_3 + 0x20);
  param_1[8] = *param_4;
  lVar4 = param_4[1];
  param_1[9] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  uVar6 = FDelegateHandle::GenerateNewID();
  param_1[10] = uVar6;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_3 + 0x20);
  plVar5 = *(longlong **)(param_3 + 8);
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
  plVar5 = (longlong *)param_4[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return param_1;
}



// FUNCTION 1418cd900 FUN_1418cd900 body=656 status=ok
// SIG undefined FUN_1418cd900(void)

longlong FUN_1418cd900(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0x43000000;
  *(undefined1 *)(param_1 + 0x154) = 1;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0x43000000;
  *(undefined1 *)(param_1 + 0x16c) = 1;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined2 *)(param_1 + 0x180) = 0x100;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 3;
  *(undefined1 *)(param_1 + 0x1dc) = 1;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined1 *)(param_1 + 0x208) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x209) = 1;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined2 *)(param_1 + 0x220) = 0;
  *(undefined1 *)(param_1 + 0x222) = 0;
  lVar1 = DAT_1469eb110;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    lVar4 = 4;
    if (DVar3 != DAT_1468c21c0) goto LAB_1418cdb34;
  }
  lVar4 = 0;
LAB_1418cdb34:
  *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(lVar4 + lVar1);
  *(undefined2 *)(param_1 + 0x228) = 0x101;
  *(undefined2 *)(param_1 + 0x230) = 0x101;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined1 *)(param_1 + 0x268) = 1;
  return param_1;
}



// FUNCTION 1418cdb90 FUN_1418cdb90 body=692 status=ok
// SIG undefined FUN_1418cdb90(void)

longlong FUN_1418cdb90(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = DAT_1469eb218;
  lVar4 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  plVar2 = DAT_1469eb140;
  puVar3 = (undefined8 *)FName::FName(local_res8,"Checkbox",1);
  local_res10 = *puVar3;
  local_res18 = local_res10;
  lVar4 = (**(code **)(*plVar2 + 0x80))(plVar2,DAT_1469eb150);
  if (lVar4 == 0) {
    lVar4 = FUN_1418349b0();
  }
  *(longlong *)(param_1 + 0x118) = lVar4;
  *(undefined1 *)(param_1 + 0x124) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined2 *)(param_1 + 0x138) = 0x100;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined1 *)(param_1 + 0x184) = 1;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1a4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1e4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined1 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined1 *)(param_1 + 0x218) = 1;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined1 *)(param_1 + 0x248) = 0;
  *(undefined1 *)(param_1 + 0x268) = 0;
  *(undefined1 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined8 *)(param_1 + 0x2b0) = 0;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  return param_1;
}



// FUNCTION 1418cde50 FArguments body=254 status=ok
// SIG undefined FArguments(void)

longlong SClippingHorizontalBox::FArguments::FArguments(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = DAT_1469eb140;
  *(undefined8 *)(param_1 + 0x128) = 0;
  return param_1;
}



// FUNCTION 1418cdf50 FArguments body=388 status=ok
// SIG undefined FArguments(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong SColorBlock::FArguments::FArguments(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *(undefined1 *)(param_1 + 0x118) = 1;
  *(undefined8 *)(param_1 + 0x108) = uVar1;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0x100;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined2 *)(param_1 + 0x148) = 0x100;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined2 *)(param_1 + 0x160) = 0x100;
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined2 *)(param_1 + 0x178) = 0x101;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0x41800000;
  *(undefined4 *)(param_1 + 0x1a4) = 0x41800000;
  *(undefined1 *)(param_1 + 0x1a8) = 1;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  return param_1;
}



// FUNCTION 1418ce0e0 FUN_1418ce0e0 body=759 status=ok
// SIG undefined FUN_1418ce0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1418ce0e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined1 local_58 [32];
  longlong *local_38;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  plVar2 = DAT_1469eb140;
  puVar8 = (undefined8 *)FName::FName(local_res8,"ComboButton",1);
  local_res10 = *puVar8;
  local_res18 = local_res10;
  lVar9 = (**(code **)(*plVar2 + 0x80))(plVar2,DAT_1469eb168);
  if (lVar9 == 0) {
    lVar9 = FUN_141834b00();
  }
  *(longlong *)(param_1 + 0x108) = lVar9;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = DAT_1469eb218;
  lVar9 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x120) = DAT_1469eb220;
  if (lVar9 != 0) {
    LOCK();
    piVar1 = (int *)(lVar9 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x128) = DAT_1469eb218;
  lVar9 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x130) = DAT_1469eb220;
  if (lVar9 != 0) {
    LOCK();
    piVar1 = (int *)(lVar9 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined2 *)(param_1 + 0x168) = 0x101;
  plVar2 = DAT_1469eb140;
  lVar9 = *DAT_1469eb140;
  puVar8 = (undefined8 *)FName::FName(local_res20,"InvertedForeground",1);
  puVar10 = (undefined4 *)(**(code **)(lVar9 + 0x30))(plVar2,local_58,*puVar8,0);
  uVar4 = puVar10[1];
  uVar5 = puVar10[2];
  uVar6 = puVar10[3];
  *(undefined4 *)(param_1 + 0x170) = *puVar10;
  *(undefined4 *)(param_1 + 0x174) = uVar4;
  *(undefined4 *)(param_1 + 0x178) = uVar5;
  *(undefined4 *)(param_1 + 0x17c) = uVar6;
  *(undefined1 *)(param_1 + 0x180) = *(undefined1 *)(puVar10 + 4);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(puVar10 + 6);
  lVar9 = *(longlong *)(puVar10 + 8);
  *(longlong *)(param_1 + 400) = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x198) = 1;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
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
  uVar7 = _DAT_1464aa6c8;
  *(undefined8 *)(param_1 + 0x1b0) = _DAT_1464aa6c0;
  *(undefined8 *)(param_1 + 0x1b8) = uVar7;
  *(undefined1 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined1 *)(param_1 + 0x1d8) = 1;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0x40a0000040a00000;
  *(undefined8 *)(param_1 + 0x1f8) = 0x40a0000040a00000;
  *(undefined1 *)(param_1 + 0x200) = 1;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x218) = 3;
  *(undefined1 *)(param_1 + 0x21c) = 1;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x234) = 2;
  *(undefined2 *)(param_1 + 0x239) = 0;
  return param_1;
}



// FUNCTION 1418ce3e0 FUN_1418ce3e0 body=581 status=ok
// SIG undefined FUN_1418ce3e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1418ce3e0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = DAT_1469eb218;
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x118) = DAT_1469eb218;
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x120) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x128) = DAT_1469eb218;
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x130) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x138) = DAT_1469eb218;
  lVar3 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x140) = DAT_1469eb220;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x148) = 0x40000000;
  *(undefined4 *)(param_1 + 0x14c) = 0x40000000;
  *(undefined4 *)(param_1 + 0x150) = 0x40000000;
  *(undefined4 *)(param_1 + 0x154) = 0x40000000;
  *(undefined1 *)(param_1 + 0x158) = 1;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined1 *)(param_1 + 0x170) = 1;
  FText::FText(param_1 + 0x178);
  *(undefined1 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  uVar4 = FUN_14183ac90();
  *(undefined8 *)(param_1 + 0x1a8) = uVar4;
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  uVar2 = uRam00000001468b5d80;
  uVar4 = _DAT_1468b5d78;
  *(undefined1 *)(param_1 + 0x220) = 1;
  *(undefined8 *)(param_1 + 0x210) = uVar4;
  *(undefined8 *)(param_1 + 0x218) = uVar2;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  return param_1;
}



// FUNCTION 1418ce630 FArguments body=247 status=ok
// SIG undefined FArguments(void)

longlong SDockingTabWell::FArguments::FArguments(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x118) = 1;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return param_1;
}



// FUNCTION 1418ce730 FArguments body=233 status=ok
// SIG undefined FArguments(void)

longlong SDockingTarget::FArguments::FArguments(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  return param_1;
}



// FUNCTION 1418ce820 FUN_1418ce820 body=1077 status=ok
// SIG undefined FUN_1418ce820(void)

longlong FUN_1418ce820(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"NormalEditableTextBox",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb188);
  if (lVar3 == 0) {
    lVar3 = FUN_141834c00();
  }
  *(longlong *)(param_1 + 0x108) = lVar3;
  FText::FText(param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  FText::FText(param_1 + 0x140);
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  FText::FText(param_1 + 0x170);
  *(undefined1 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  FUN_1417efd90(param_1 + 0x1a0);
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x210) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x214) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined4 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x250) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x254) = 0x3f800000;
  *(undefined1 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0;
  *(undefined1 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined4 *)(param_1 + 0x280) = 0;
  *(undefined2 *)(param_1 + 0x288) = 0x100;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  *(undefined2 *)(param_1 + 0x2a0) = 0x100;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  *(undefined2 *)(param_1 + 0x2b8) = 0x101;
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined4 *)(param_1 + 0x2c8) = 0;
  *(undefined2 *)(param_1 + 0x2d0) = 0x100;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  *(undefined2 *)(param_1 + 0x2e8) = 0x100;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x2f8) = 0;
  *(undefined2 *)(param_1 + 0x300) = 0x101;
  *(undefined8 *)(param_1 + 0x308) = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined1 *)(param_1 + 0x31c) = 1;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined2 *)(param_1 + 0x330) = 0x101;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined4 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  *(undefined4 *)(param_1 + 0x370) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined1 *)(param_1 + 0x37c) = 1;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined2 *)(param_1 + 0x390) = 0x100;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined1 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined4 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined1 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined1 *)(param_1 + 0x444) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x450) = 0;
  *(undefined1 *)(param_1 + 0x458) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined1 *)(param_1 + 0x464) = 1;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined2 *)(param_1 + 0x478) = 0x100;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(undefined1 *)(param_1 + 0x491) = 0;
  *(undefined1 *)(param_1 + 0x493) = 0;
  return param_1;
}



// FUNCTION 1418cec60 FUN_1418cec60 body=1130 status=ok
// SIG undefined FUN_1418cec60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1418cec60(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_488 [32];
  longlong local_468;
  longlong local_460;
  undefined4 local_458;
  longlong local_450;
  longlong local_448;
  longlong local_440;
  undefined1 local_438;
  undefined1 local_430;
  longlong local_428;
  undefined1 local_418 [8];
  longlong *local_410;
  undefined1 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  longlong *local_3e8;
  longlong *local_3e0;
  undefined1 local_3d0 [8];
  longlong *local_3c8;
  undefined1 local_3b8 [912];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_488;
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = DAT_1469eb218;
  lVar7 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar7 != 0) {
    LOCK();
    piVar1 = (int *)(lVar7 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_3d0,L"No Menu Content Assigned; use .MenuContent",L"SMenuAnchor",
                     L"NoMenuContent");
  FText::FText(local_418,uVar6);
  local_400 = 1;
  local_3f8 = 0;
  local_3f0 = 0;
  lVar7 = STextBlock::FArguments::FArguments(local_3b8);
  FText::operator=(lVar7 + 0x108,local_418);
  *(undefined1 *)(lVar7 + 0x120) = local_400;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x128,&local_3f8);
  plVar8 = (longlong *)operator_new(0x660);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144043520;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar2 = plVar8 + 2;
  local_3e8 = plVar2;
  local_3e0 = plVar8;
  FUN_14044f790(&local_3e8,plVar2);
  local_468 = 0x650;
  SWidget::SetDebugInfo
            (plVar2,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Public\\Widgets/Input/SMenuAnchor.h",
             0x25);
  local_458 = *(undefined4 *)(lVar7 + 0x90);
  local_428 = lVar7 + 0xf8;
  local_440 = lVar7 + 0xe8;
  local_430 = *(undefined1 *)(lVar7 + 0xf1);
  local_448 = lVar7 + 200;
  local_450 = lVar7 + 0x98;
  local_438 = *(undefined1 *)(lVar7 + 0xf0);
  local_460 = lVar7 + 0x78;
  local_468 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar2,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  FUN_1419b0120(plVar2,lVar7);
  if (-1 < (char)plVar8[5]) {
    cVar4 = (**(code **)(*plVar2 + 0x1e8))(plVar2);
    if (cVar4 == '\0') {
      bVar5 = 0;
      goto LAB_1418cef41;
    }
  }
  bVar5 = 1;
LAB_1418cef41:
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar5;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  *(longlong **)(param_1 + 0x128) = plVar2;
  *(longlong **)(param_1 + 0x130) = plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar8 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
    LOCK();
    plVar2 = plVar8 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
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
  FUN_140691150(local_3b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_3f8);
  if (local_410 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_410 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_410)(local_410);
      LOCK();
      piVar1 = (int *)((longlong)local_410 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_410 + 8))(local_410,1);
      }
    }
  }
  if (local_3c8 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_3c8 + 1;
    lVar7 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_3c8)(local_3c8);
      LOCK();
      piVar1 = (int *)((longlong)local_3c8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_3c8 + 8))(local_3c8,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x15c) = 1;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x171) = 0x10100;
  *(undefined1 *)(param_1 + 0x175) = 1;
  return param_1;
}



// FUNCTION 1418cf0d0 FUN_1418cf0d0 body=276 status=ok
// SIG undefined FUN_1418cf0d0(void)

longlong FUN_1418cf0d0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x110) = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  return param_1;
}



// FUNCTION 1418cf1f0 FArguments body=265 status=ok
// SIG undefined FArguments(void)

longlong SMultiBoxWidget::FArguments::FArguments(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = DAT_1464aa770;
  *(undefined4 *)(param_1 + 0x10c) = DAT_1464aa774;
  *(undefined1 *)(param_1 + 0x110) = 1;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  return param_1;
}



// FUNCTION 1418cf300 FUN_1418cf300 body=267 status=ok
// SIG undefined FUN_1418cf300(void)

longlong FUN_1418cf300(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  FUN_1417efd90(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  return param_1;
}



// FUNCTION 1418cf410 FArguments body=494 status=ok
// SIG undefined FArguments(void)

longlong SScrollBox::FArguments::FArguments(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"ScrollBox",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb200);
  if (lVar3 == 0) {
    lVar3 = FUN_141835050();
  }
  *(longlong *)(param_1 + 0x118) = lVar3;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"ScrollBar",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb1a0);
  if (lVar3 == 0) {
    lVar3 = FUN_141834fd0();
  }
  *(longlong *)(param_1 + 0x120) = lVar3;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 1;
  *(undefined1 *)(param_1 + 0x13c) = DAT_1464b9ee8;
  *(undefined2 *)(param_1 + 0x13d) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x144) = 0x40a00000;
  *(undefined2 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 1;
  return param_1;
}



// FUNCTION 1418cf600 FArguments body=374 status=ok
// SIG undefined FArguments(void)

longlong SSplitter::FArguments::FArguments(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  plVar1 = DAT_1469eb140;
  puVar2 = (undefined8 *)FName::FName(local_res8,"Splitter",1);
  local_res10 = *puVar2;
  local_res18 = local_res10;
  lVar3 = (**(code **)(*plVar1 + 0x80))(plVar1,DAT_1469eb1d8);
  if (lVar3 == 0) {
    lVar3 = FUN_1418351d0();
  }
  *(longlong *)(param_1 + 0x118) = lVar3;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0x40a00000;
  *(undefined4 *)(param_1 + 300) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x130) = 0x41a00000;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  return param_1;
}



// FUNCTION 1418cf780 FUN_1418cf780 body=346 status=ok
// SIG undefined FUN_1418cf780(void)

longlong FUN_1418cf780(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  FText::FText(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = DAT_1469eb218;
  lVar2 = DAT_1469eb220;
  *(longlong *)(param_1 + 0x150) = DAT_1469eb220;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined2 *)(param_1 + 0x158) = 0x100;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  return param_1;
}



// FUNCTION 1418cf8e0 FArguments body=233 status=ok
// SIG undefined FArguments(void)

longlong SToolBarButtonBlock::FArguments::FArguments(longlong param_1)

{
  FText::FText();
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x60) = 0x101;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x78) = DAT_1464b9ee8;
  *(undefined1 *)(param_1 + 0x79) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 200) = (undefined4)DAT_1468b5d88;
  *(undefined4 *)(param_1 + 0xcc) = DAT_1468b5d88._4_4_;
  *(undefined1 *)(param_1 + 0xd0) = 1;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined2 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined2 *)(param_1 + 0x109) = 0;
  *(undefined1 *)(param_1 + 0x10b) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  return param_1;
}



// FUNCTION 1418cf9d0 FUN_1418cf9d0 body=499 status=ok
// SIG undefined FUN_1418cf9d0(void)

undefined8 *
FUN_1418cf9d0(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined8 *param_4,
             undefined1 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  
  plVar4 = (longlong *)param_6[1];
  uVar5 = *param_6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar7 = DAT_1469f4670;
  *param_1 = &PTR__scalar_deleting_destructor__144d670d0;
  FUN_1418f3e60(param_1 + 1,param_2,uVar7,param_3);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_8;
  iVar3 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x24) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 3,iVar3);
  }
  puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + param_1[3]);
  *puVar8 = *param_4;
  lVar6 = param_4[1];
  puVar8[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 6);
  *(int *)(param_1 + 6) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x34) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 5,iVar3);
  }
  puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + param_1[5]);
  *puVar8 = uVar5;
  puVar8[1] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  *param_1 = &PTR_FUN_144d670f0;
  *(undefined1 *)(param_1 + 8) = param_5;
  FName::FName(&local_res8,&DAT_144d63f64,1);
  lVar6 = param_1[1];
  *(undefined8 *)(lVar6 + 0x58) = param_7;
  *(undefined8 *)(lVar6 + 0x60) = local_res8;
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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
  plVar4 = (longlong *)param_6[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
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



// FUNCTION 1418cfbd0 FUN_1418cfbd0 body=499 status=ok
// SIG undefined FUN_1418cfbd0(void)

undefined8 * FUN_1418cfbd0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_28;
  longlong *local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar5 = (longlong *)operator_new(0x50);
  local_20 = (longlong *)0x0;
  local_28 = local_20;
  if (plVar5 != (longlong *)0x0) {
    plVar5[2] = 0;
    plVar5[3] = 0;
    plVar5[7] = 0;
    plVar5[9] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    *(undefined4 *)(plVar5 + 6) = 0xffffffff;
    *(undefined4 *)((longlong)plVar5 + 0x34) = 0;
    plVar5[8] = 0;
    local_28 = plVar5;
  }
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_144d674c0;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)local_28;
    local_20 = plVar5;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_28,local_28,local_28);
  local_18 = 0;
  uStack_10 = 0;
  FUN_1418d0800(param_1,&local_18,&local_28);
  plVar5 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_20)(local_20);
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
  *param_1 = &PTR_FUN_144d67240;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 2;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 2;
  FText::FText(param_1 + 0x30);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xffffffff;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  return param_1;
}



// FUNCTION 1418cfdd0 FInertialScrollManager body=21 status=ok
// SIG undefined FInertialScrollManager(void)

undefined8 * FInertialScrollManager::FInertialScrollManager(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = param_2;
  return param_1;
}



// FUNCTION 1418cfdf0 FUN_1418cfdf0 body=322 status=ok
// SIG undefined FUN_1418cfdf0(void)

undefined8 *
FUN_1418cfdf0(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = *param_4;
  local_20 = param_4[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_18 = *param_3;
  local_10 = param_3[1];
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  FUN_1418cf9d0(param_1,3,param_2,&local_18,param_5,&local_28,param_6,0);
  *param_1 = &PTR__scalar_deleting_destructor__144d67110;
  param_1[9] = 0;
  FText::FText(param_1 + 10);
  *(undefined1 *)(param_1 + 0xd) = 0;
  FUN_1418d8fc0(param_1);
  plVar4 = (longlong *)param_3[1];
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
  plVar4 = (longlong *)param_4[1];
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
  return param_1;
}



// FUNCTION 1418cff40 FUN_1418cff40 body=538 status=ok
// SIG undefined FUN_1418cff40(void)

undefined8 *
FUN_1418cff40(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 *param_6,undefined1 param_7,undefined1 param_8,
             undefined8 *param_9,undefined1 param_10,undefined4 *param_11,undefined1 param_12)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_38 = *param_9;
  local_30 = param_9[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_28 = 0;
  uStack_20 = 0;
  FUN_1418d0450(0,&local_28,&local_38,*param_2,4);
  *param_1 = &PTR_FUN_144d68250;
  FText::FText(param_1 + 0x14,param_3);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_3 + 0x18);
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x18,param_3 + 0x20);
  FText::FText(param_1 + 0x1a,param_4);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_4 + 0x18);
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x1e,param_4 + 0x20);
  uVar6 = param_11[1];
  uVar7 = param_11[2];
  uVar8 = param_11[3];
  *(undefined4 *)(param_1 + 0x20) = *param_11;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar6;
  *(undefined4 *)(param_1 + 0x21) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar8;
  uVar6 = param_11[5];
  uVar7 = param_11[6];
  uVar8 = param_11[7];
  *(undefined4 *)(param_1 + 0x22) = param_11[4];
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar6;
  *(undefined4 *)(param_1 + 0x23) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar8;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x24,param_5);
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x151) = param_8;
  *(undefined1 *)(param_1 + 0x2b) = param_10;
  *(undefined4 *)((longlong)param_1 + 0x154) = 1;
  param_1[0x2c] = *param_6;
  lVar4 = param_6[1];
  param_1[0x2d] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x2e) = param_12;
  plVar5 = (longlong *)param_6[1];
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
  plVar5 = (longlong *)param_9[1];
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
  return param_1;
}



// FUNCTION 1418d0160 FUN_1418d0160 body=498 status=ok
// SIG undefined FUN_1418d0160(void)

undefined8 *
FUN_1418d0160(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong param_5,longlong param_6,undefined4 *param_7,undefined1 param_8,
             undefined1 param_9)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_38 = *param_4;
  local_30 = param_4[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1418d0450(param_1,&local_28,&local_38,*param_2,4);
  *param_1 = &PTR_FUN_144d68250;
  FText::FText(param_1 + 0x14,param_5);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_5 + 0x18);
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x18,param_5 + 0x20);
  FText::FText(param_1 + 0x1a,param_6);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_6 + 0x18);
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x1e,param_6 + 0x20);
  uVar5 = param_7[1];
  uVar6 = param_7[2];
  uVar7 = param_7[3];
  *(undefined4 *)(param_1 + 0x20) = *param_7;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar5;
  *(undefined4 *)(param_1 + 0x21) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar7;
  uVar5 = param_7[5];
  uVar6 = param_7[6];
  uVar7 = param_7[7];
  *(undefined4 *)(param_1 + 0x22) = param_7[4];
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar5;
  *(undefined4 *)(param_1 + 0x23) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar7;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2b) = param_8;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 1;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = param_9;
  plVar4 = (longlong *)param_3[1];
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
  plVar4 = (longlong *)param_4[1];
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
  return param_1;
}



// FUNCTION 1418d0360 FUN_1418d0360 body=225 status=ok
// SIG undefined FUN_1418d0360(void)

undefined8 *
FUN_1418d0360(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144d66c18;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 3);
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 5,param_2 + 0x10);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((((longlong *)(param_2 + 0x20) != param_1 + 7) && (*(int *)(param_2 + 0x28) != 0)) &&
     (plVar1 = *(longlong **)(param_2 + 0x20), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))();
  }
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 9,param_2 + 0x30);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x40);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_3;
  *(undefined4 *)(param_1 + 0x11) = param_4;
  param_1[0x12] = 0;
  return param_1;
}



// FUNCTION 1418d0450 FUN_1418d0450 body=277 status=ok
// SIG undefined FUN_1418d0450(void)

undefined8 *
FUN_1418d0450(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144d66c18;
  FUIAction::FUIAction(param_1 + 3);
  param_1[0xc] = *param_2;
  lVar4 = param_2[1];
  param_1[0xd] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[0xe] = *param_3;
  lVar4 = param_3[1];
  param_1[0xf] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x11) = param_5;
  param_1[0x10] = param_4;
  param_1[0x12] = 0;
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
  plVar5 = (longlong *)param_3[1];
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
  return param_1;
}



// FUNCTION 1418d0570 FUN_1418d0570 body=172 status=ok
// SIG undefined FUN_1418d0570(void)

undefined8 * FUN_1418d0570(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  param_1[2] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_3);
  return param_1;
}



// FUNCTION 1418d0620 FRichTextLine body=212 status=ok
// SIG undefined FRichTextLine(void)

longlong * IRichTextMarkupWriter::FRichTextLine::FRichTextLine(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = 0;
  iVar2 = (int)param_2[1];
  lVar3 = *param_2;
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return param_1;
  }
  TArray<FSimpleLinkNavModifier,FDefaultAllocator>::ResizeForCopy(param_1,iVar2,0);
  lVar4 = *param_1;
  lVar3 = lVar3 + 0x60;
  lVar1 = lVar4 + 0x3c;
  do {
    FString::FString(lVar4,lVar3 + -0x60);
    *(undefined8 *)(lVar1 + -0x2c) = 0;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined4 *)(lVar1 + 4) = 0xffffffff;
    *(undefined4 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::operator=(lVar1 + -0x2c,lVar3 + -0x50);
    FString::FString(lVar1 + 0x24,lVar3);
    lVar4 = lVar4 + 0x70;
    lVar1 = lVar1 + 0x70;
    lVar3 = lVar3 + 0x70;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return param_1;
}



// FUNCTION 1418d0700 FRichTextRun body=241 status=ok
// SIG undefined FRichTextRun(void)

undefined8 *
IRichTextMarkupWriter::FRichTextRun::FRichTextRun(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_1 + 2,param_2 + 2);
  if (param_2[10] == 0) {
    ::_guard_xfg_dispatch_icall_nop(param_1 + 9,param_2 + 9,4);
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  param_1[10] = param_2[10];
  param_2[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)(param_2 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xc] = param_2[0xc];
  param_2[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_2[0xd] = 0;
  return param_1;
}



// FUNCTION 1418d0800 FUN_1418d0800 body=686 status=ok
// SIG undefined FUN_1418d0800(void)

undefined8 * FUN_1418d0800(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 local_78;
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_40 [40];
  
  puVar10 = (undefined8 *)0x0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144d671e8;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = *param_3;
  lVar6 = param_3[1];
  param_1[0xe] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  param_1[0xf] = 0;
  puVar4 = param_1 + 0x13;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *puVar4 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = *param_2;
  lVar6 = param_2[1];
  param_1[0x16] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
    UNLOCK();
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  puVar7 = (undefined8 *)operator_new(8);
  puVar11 = puVar10;
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = param_1;
    puVar11 = puVar7;
  }
  puVar7 = (undefined8 *)operator_new(0x18);
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar7 + 1) = 1;
    *puVar7 = &PTR_FUN_144d50338;
    *(undefined4 *)((longlong)puVar7 + 0xc) = 1;
    puVar7[2] = puVar11;
    puVar10 = puVar7;
  }
  param_1[0x19] = puVar11;
  param_1[0x1a] = puVar10;
  SharedPointerInternals::EnableSharedFromThis(param_1 + 0x19,puVar11,puVar11);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  uVar8 = FSlateIcon::FSlateIcon(local_40);
  uVar9 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_58,L"Local Workspace Root",L"TabManager",L"LocalWorkspaceRoot");
  puVar10 = (undefined8 *)FWorkspaceItem::NewGroup(local_68,uVar9,uVar8,0);
  local_70 = (longlong *)puVar10[1];
  local_78 = *puVar10;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_70 + 1) = (int)local_70[1] + 1;
    UNLOCK();
  }
  if (puVar4 != &local_78) {
    *puVar4 = local_78;
    local_78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x14,&local_70);
  }
  plVar3 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_60 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)local_50 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1418d0ab0 FTextLineParseResults body=215 status=ok
// SIG undefined FTextLineParseResults(void)

undefined8 * FTextLineParseResults::FTextLineParseResults(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar3 = *(int *)(param_2 + 2);
  lVar1 = param_2[1];
  *(int *)(param_1 + 2) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    TArray<FSimpleLinkNavModifier,FDefaultAllocator>::ResizeForCopy(param_1 + 1,iVar3,0);
    lVar2 = param_1[1];
    puVar4 = (undefined8 *)(lVar1 + 0x18);
    lVar1 = lVar2 + 0x4c;
    do {
      FString::FString(lVar2,puVar4 + -3);
      *(undefined8 *)(lVar1 + -0x3c) = puVar4[-1];
      *(undefined8 *)(lVar1 + -0x34) = *puVar4;
      *(undefined8 *)(lVar1 + -0x2c) = 0;
      *(undefined8 *)(lVar1 + -0x24) = 0;
      *(undefined8 *)(lVar1 + -0xc) = 0;
      *(undefined8 *)(lVar1 + -4) = 0;
      *(undefined4 *)(lVar1 + 4) = 0xffffffff;
      *(undefined4 *)(lVar1 + 8) = 0;
      *(undefined8 *)(lVar1 + 0x14) = 0;
      *(undefined4 *)(lVar1 + 0x1c) = 0;
      TSet<TTuple<FString,FTextRange>,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>,FDefaultSetAllocator>
      ::operator=((undefined8 *)(lVar1 + -0x2c),puVar4 + 1);
      lVar2 = lVar2 + 0x70;
      lVar1 = lVar1 + 0x70;
      puVar4 = puVar4 + 0xe;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return param_1;
}



// FUNCTION 1418d0b90 FUN_1418d0b90 body=457 status=ok
// SIG undefined FUN_1418d0b90(void)

undefined8 *
FUN_1418d0b90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             longlong param_5,undefined4 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_38 = *param_3;
  local_30 = param_3[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1418d0450(param_1,&local_28,&local_38,0,6);
  *param_1 = &PTR__scalar_deleting_destructor__144d67fe0;
  FText::FText(param_1 + 0x14,param_4);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_4 + 0x18);
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x18,param_4 + 0x20);
  FText::FText(param_1 + 0x1a,param_5);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_5 + 0x18);
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x1e,param_5 + 0x20);
  uVar5 = param_6[1];
  uVar6 = param_6[2];
  uVar7 = param_6[3];
  *(undefined4 *)(param_1 + 0x20) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar5;
  *(undefined4 *)(param_1 + 0x21) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar7;
  uVar5 = param_6[5];
  uVar6 = param_6[6];
  uVar7 = param_6[7];
  *(undefined4 *)(param_1 + 0x22) = param_6[4];
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar5;
  *(undefined4 *)(param_1 + 0x23) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar7;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_6 + 8);
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x25,param_6 + 10);
  *(undefined1 *)((longlong)param_1 + 0x139) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 1;
  *(undefined2 *)(param_1 + 0x28) = 0;
  plVar4 = (longlong *)param_2[1];
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
  plVar4 = (longlong *)param_3[1];
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
  return param_1;
}



// FUNCTION 1418d0d60 FUnescapeHelper body=866 status=ok
// SIG undefined FUnescapeHelper(void)

longlong * FUnescapeHelper::FUnescapeHelper(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 5;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_28 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,L"quot",10);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  local_28 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  local_20 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_143f607d8,4);
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[2]);
  local_28 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  local_20 = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144d66ab4,6);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  local_28 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  local_20 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144d66abc,4);
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[2]);
  local_28 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  local_20 = 3;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144d66ac0,6);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  local_28 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  local_20 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144d66ac8,4);
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[2]);
  local_28 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  local_20 = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144d66ad0,8);
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + *param_1);
  local_28 = 0;
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  local_20 = 2;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  uVar2 = local_28;
  FGenericPlatformString::Memcpy(local_28,&DAT_144025e18,4);
  iVar1 = (int)param_1[3];
  *(int *)(param_1 + 3) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 2,iVar1);
  }
  puVar3 = (undefined8 *)((longlong)iVar1 * 0x10 + param_1[2]);
  *puVar3 = uVar2;
  *(undefined4 *)(puVar3 + 1) = (undefined4)local_20;
  *(undefined4 *)((longlong)puVar3 + 0xc) = local_20._4_4_;
  return param_1;
}



// FUNCTION 1418d10d0 FUN_1418d10d0 body=222 status=ok
// SIG undefined FUN_1418d10d0(void)

undefined8 *
FUN_1418d10d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  FUN_1418d0450(0,&local_18,&local_28,0,9);
  *param_1 = &PTR_FUN_144d69328;
  param_1[0x14] = *param_2;
  lVar4 = param_2[1];
  param_1[0x15] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  FText::FText(param_1 + 0x16,param_3);
  *(undefined1 *)(param_1 + 0x19) = param_4;
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
  return param_1;
}



// FUNCTION 1418d11b0 FWorkspaceItem body=121 status=ok
// SIG undefined FWorkspaceItem(void)

undefined8 *
FWorkspaceItem::FWorkspaceItem
          (undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_144d67130;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 3) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *(undefined4 *)(param_1 + 5) = param_3[4];
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  FText::FText(param_1 + 7);
  FText::FText(param_1 + 10);
  *(undefined1 *)(param_1 + 0xd) = param_4;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return param_1;
}



// FUNCTION 1418d1230 SButton body=221 status=ok
// SIG undefined SButton(void)

undefined8 * SButton::SButton(undefined8 *param_1)

{
  SBorder::SBorder();
  *param_1 = &PTR__scalar_deleting_destructor__1440432c0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  *(undefined4 *)(param_1 + 0x75) = 0;
  param_1[0x80] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)((longlong)param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0xffffffff;
  return param_1;
}



// FUNCTION 1418d1310 SCheckBox body=366 status=ok
// SIG undefined SCheckBox(void)

undefined8 * SCheckBox::SCheckBox(undefined8 *param_1)

{
  FUN_1417f4470();
  *param_1 = &PTR__scalar_deleting_destructor__144d672a8;
  *(undefined2 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  param_1[0x73] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x75) = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3e4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined1 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0xffffffff;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x8d) = 0xffffffff;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  return param_1;
}



// FUNCTION 1418d1480 FUN_1418d1480 body=73 status=ok
// SIG undefined FUN_1418d1480(void)

undefined8 * FUN_1418d1480(undefined8 *param_1)

{
  SHorizontalBox::SHorizontalBox();
  *param_1 = &PTR__scalar_deleting_destructor__144d68938;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x4e] = 0;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
  return param_1;
}



// FUNCTION 1418d14d0 SDockingNode body=59 status=ok
// SIG undefined SDockingNode(void)

undefined8 * SDockingNode::SDockingNode(undefined8 *param_1)

{
  FUN_1417f4470();
  *param_1 = &PTR_FUN_144d674e0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  return param_1;
}



// FUNCTION 1418d1510 SMultiBlockBaseWidget body=97 status=ok
// SIG undefined SMultiBlockBaseWidget(void)

undefined8 * SMultiBlockBaseWidget::SMultiBlockBaseWidget(undefined8 *param_1)

{
  *param_1 = &PTR__purecall_144d66c50;
  FUN_1417f4470(param_1 + 1);
  *param_1 = &PTR_AsWidget_144d66c88;
  param_1[1] = &PTR_LAB_144d66cc0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  return param_1;
}



// FUNCTION 1418d1580 FUN_1418d1580 body=121 status=ok
// SIG undefined FUN_1418d1580(void)

void FUN_1418d1580(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar4 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar5 = (longlong *)(lVar4 + 8);
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *param_1;
  }
  if (lVar4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1418d1600 ~TArray<IRichTextMarkupWriter::FRichTextRun,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<IRichTextMarkupWriter::FRichTextRun,FDefaultAllocator>(void)

void TArray<IRichTextMarkupWriter::FRichTextRun,FDefaultAllocator>::
     ~TArray<IRichTextMarkupWriter::FRichTextRun,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    do {
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FMemory::Free();
      }
      FRunInfo::~FRunInfo(lVar1);
      lVar1 = lVar1 + 0x70;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 1418d1660 FUN_1418d1660 body=161 status=ok
// SIG undefined FUN_1418d1660(void)

void FUN_1418d1660(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar4 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar5 = (longlong *)(lVar4 + 8);
    do {
      plVar3 = (longlong *)plVar5[2];
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
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar4 = *param_1;
  }
  if (lVar4 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1418d1710 ~TArray<FTextRunParseResults,FDefaultAllocator> body=185 status=ok
// SIG undefined ~TArray<FTextRunParseResults,FDefaultAllocator>(void)

void TArray<FTextRunParseResults,FDefaultAllocator>::~TArray<FTextRunParseResults,FDefaultAllocator>
               (longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    plVar1 = plVar3 + 0xc;
    do {
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(plVar1 + -8,0);
      if (plVar1[-4] != 0) {
        FMemory::Free();
      }
      if (plVar1[-8] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0xe;
      plVar1 = plVar1 + 0xe;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 != (longlong *)0x0) {
    FMemory::Free(plVar3);
    return;
  }
  return;
}



// FUNCTION 1418d17d0 ~FEOSUserInterface_CandidateEOSAccount body=89 status=ok
// SIG undefined ~FEOSUserInterface_CandidateEOSAccount(void)

void FEOSUserInterface_CandidateEOSAccount::~FEOSUserInterface_CandidateEOSAccount(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x18);
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



// FUNCTION 1418d1830 ~TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_> body=78 status=ok
// SIG undefined ~TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>(void)

void TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
     ::
     ~TMap<FString,FTextRange,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FTextRange,0>_>
               (longlong *param_1)

{
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,AHomeCharacter_*>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1,0);
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1418d1880 ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_> body=392 status=ok
// SIG undefined ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>(void)

void TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::
     ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
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
      if (bVar4) goto LAB_1418d1941;
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
LAB_1418d1941:
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
      UE::Core::Private::Tuple::
      TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
      ::
      ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
                ((longlong)iStack_1c * 0x30 + *param_1);
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1,0);
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



// FUNCTION 1418d1a10 FUN_1418d1a10 body=123 status=ok
// SIG undefined FUN_1418d1a10(void)

void FUN_1418d1a10(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x38);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x20);
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



// FUNCTION 1418d1a90 FUN_1418d1a90 body=96 status=ok
// SIG undefined FUN_1418d1a90(void)

void FUN_1418d1a90(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
  return;
}



// FUNCTION 1418d1af0 FUN_1418d1af0 body=361 status=ok
// SIG undefined FUN_1418d1af0(void)

void FUN_1418d1af0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x288) != '\0') {
    *(undefined1 *)(param_1 + 0x288) = 0;
  }
  if (*(char *)(param_1 + 0x268) != '\0') {
    *(undefined1 *)(param_1 + 0x268) = 0;
  }
  if (*(char *)(param_1 + 0x248) != '\0') {
    *(undefined1 *)(param_1 + 0x248) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x220);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x208);
  plVar4 = *(longlong **)(param_1 + 0x1f8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1c8);
  plVar4 = *(longlong **)(param_1 + 0x1b8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x188);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x170);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x140);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x128);
  if (*(char *)(param_1 + 0x124) != '\0') {
    *(undefined1 *)(param_1 + 0x124) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1418d1c60 FUN_1418d1c60 body=371 status=ok
// SIG undefined FUN_1418d1c60(void)

void FUN_1418d1c60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x239) != '\0') {
    *(undefined1 *)(param_1 + 0x239) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x220);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x208);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1e0);
  plVar4 = *(longlong **)(param_1 + 0x1d0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1a0);
  plVar4 = *(longlong **)(param_1 + 400);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x158);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x148);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x138);
  plVar4 = *(longlong **)(param_1 + 0x130);
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
  plVar4 = *(longlong **)(param_1 + 0x120);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1418d1de0 FUN_1418d1de0 body=425 status=ok
// SIG undefined FUN_1418d1de0(void)

void FUN_1418d1de0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x228);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x200);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x198);
  plVar4 = *(longlong **)(param_1 + 0x180);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x160);
  plVar4 = *(longlong **)(param_1 + 0x140);
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
  plVar4 = *(longlong **)(param_1 + 0x130);
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
  plVar4 = *(longlong **)(param_1 + 0x120);
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
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1418d1f90 FUN_1418d1f90 body=155 status=ok
// SIG undefined FUN_1418d1f90(void)

void FUN_1418d1f90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x128);
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
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1418d2030 FUN_1418d2030 body=847 status=ok
// SIG undefined FUN_1418d2030(void)

void FUN_1418d2030(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x493) != '\0') {
    *(undefined1 *)(param_1 + 0x493) = 0;
  }
  if (*(char *)(param_1 + 0x491) != '\0') {
    *(undefined1 *)(param_1 + 0x491) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x480);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x468);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x448);
  plVar4 = *(longlong **)(param_1 + 0x438);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x420);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3f8);
  plVar4 = *(longlong **)(param_1 + 1000);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3b8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x398);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x380);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x368);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x358);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x348);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x338);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 800);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x308);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2c0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2a8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x290);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x278);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x238);
  plVar4 = *(longlong **)(param_1 + 0x228);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1f8);
  plVar4 = *(longlong **)(param_1 + 0x1d8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 400);
  plVar4 = *(longlong **)(param_1 + 0x178);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x160);
  plVar4 = *(longlong **)(param_1 + 0x148);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x130);
  plVar4 = *(longlong **)(param_1 + 0x118);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1418d2380 FUN_1418d2380 body=207 status=ok
// SIG undefined FUN_1418d2380(void)

void FUN_1418d2380(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x171) != '\0') {
    *(undefined1 *)(param_1 + 0x171) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x160);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x148);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x138);
  plVar4 = *(longlong **)(param_1 + 0x130);
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
  plVar4 = *(longlong **)(param_1 + 0x110);
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
  FUN_140456c70(param_1);
  return;
}



// FUNCTION 1418d2450 ~USBZModularPartSlotBase body=96 status=ok
// SIG undefined ~USBZModularPartSlotBase(void)

void USBZModularPartSlotBase::~USBZModularPartSlotBase(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x58);
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
  FMultiBoxBuilder::~FMultiBoxBuilder(param_1);
  return;
}



// FUNCTION 1418d24b0 FUN_1418d24b0 body=325 status=ok
// SIG undefined FUN_1418d24b0(void)

void FUN_1418d24b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x80);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x50);
  plVar4 = *(longlong **)(param_1 + 0x38);
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



// FUNCTION 1418d2600 FUN_1418d2600 body=225 status=ok
// SIG undefined FUN_1418d2600(void)

void FUN_1418d2600(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d66c18;
  plVar4 = (longlong *)param_1[0xf];
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
  plVar4 = (longlong *)param_1[0xd];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 9);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 7);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 5);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}



// FUNCTION 1418d26f0 ~FMultiBoxBuilder body=108 status=ok
// SIG undefined ~FMultiBoxBuilder(void)

void FMultiBoxBuilder::~FMultiBoxBuilder(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d670d0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 5);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 3);
  plVar4 = (longlong *)param_1[2];
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



// FUNCTION 1418d2760 ~FRunInfo body=97 status=ok
// SIG undefined ~FRunInfo(void)

void FRunInfo::~FRunInfo(longlong *param_1)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 2,0);
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if (*param_1 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1418d27d0 FUN_1418d27d0 body=521 status=ok
// SIG undefined FUN_1418d27d0(void)

void FUN_1418d27d0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d671e8;
  plVar4 = (longlong *)param_1[0x22];
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
  plVar4 = (longlong *)param_1[0x20];
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1c);
  plVar4 = (longlong *)param_1[0x1a];
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
  plVar4 = (longlong *)param_1[0x18];
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
  plVar4 = (longlong *)param_1[0x16];
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
  plVar4 = (longlong *)param_1[0x14];
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x11);
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0xf);
  plVar4 = (longlong *)param_1[0xe];
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
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 3,0);
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  plVar4 = (longlong *)param_1[2];
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
  return;
}



// FUNCTION 1418d29e0 FUN_1418d29e0 body=238 status=ok
// SIG undefined FUN_1418d29e0(void)

void FUN_1418d29e0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d67130;
  plVar4 = (longlong *)param_1[0x11];
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0xe);
  plVar4 = (longlong *)param_1[0xb];
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
  plVar4 = (longlong *)param_1[8];
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
  plVar4 = (longlong *)param_1[2];
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
  return;
}



// FUNCTION 1418d2ad0 FUN_1418d2ad0 body=301 status=ok
// SIG undefined FUN_1418d2ad0(void)

void FUN_1418d2ad0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x490);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x430);
  if (*(char *)(param_1 + 0x41c) != '\0') {
    *(undefined1 *)(param_1 + 0x41c) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x408);
  plVar4 = *(longlong **)(param_1 + 0x3f8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3c8);
  plVar4 = *(longlong **)(param_1 + 0x3b8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x388);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x318);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x308);
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 1418d2c00 FUN_1418d2c00 body=111 status=ok
// SIG undefined FUN_1418d2c00(void)

void FUN_1418d2c00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x250);
  plVar4 = *(longlong **)(param_1 + 0x240);
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
  SBoxPanel::~SBoxPanel(param_1);
  return;
}



// FUNCTION 1418d2c70 ~SColorBlock body=106 status=ok
// SIG undefined ~SColorBlock(void)

void SColorBlock::~SColorBlock(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x2b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x290);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x280);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x268);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x250);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x238);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x220);
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 1418d2ce0 FUN_1418d2ce0 body=121 status=ok
// SIG undefined FUN_1418d2ce0(void)

void FUN_1418d2ce0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x348);
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
  plVar3 = *(longlong **)(param_1 + 800);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x308);
  FUN_141925220(param_1);
  return;
}



// FUNCTION 1418d2d60 ~USBZSettingsButton body=99 status=ok
// SIG undefined ~USBZSettingsButton(void)

void USBZSettingsButton::~USBZSettingsButton(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  FUN_1418d3420(param_1);
  return;
}



// FUNCTION 1418d2dd0 FUN_1418d2dd0 body=743 status=ok
// SIG undefined FUN_1418d2dd0(void)

void FUN_1418d2dd0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x5e0);
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
  plVar4 = *(longlong **)(param_1 + 0x5d0);
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
  plVar4 = *(longlong **)(param_1 + 0x5c0);
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
  FUN_1417f61f0(param_1 + 0x560);
  FUN_1417f61f0(param_1 + 0x508);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x490);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x480);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x470);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x460);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x450);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x430);
  plVar4 = *(longlong **)(param_1 + 0x418);
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
  plVar4 = *(longlong **)(param_1 + 0x408);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x3e0);
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
  plVar4 = *(longlong **)(param_1 + 0x3d0);
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
  plVar4 = *(longlong **)(param_1 + 0x3c0);
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
  plVar4 = *(longlong **)(param_1 + 0x3b0);
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
  plVar4 = *(longlong **)(param_1 + 0x3a0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x390);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_140691710(param_1);
  return;
}



// FUNCTION 1418d30c0 FUN_1418d30c0 body=163 status=ok
// SIG undefined FUN_1418d30c0(void)

void FUN_1418d30c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x248);
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
  plVar4 = *(longlong **)(param_1 + 0x238);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x218);
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 1418d3170 FUN_1418d3170 body=563 status=ok
// SIG undefined FUN_1418d3170(void)

void FUN_1418d3170(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x518);
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
  plVar4 = *(longlong **)(param_1 + 0x508);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4f0);
  plVar4 = *(longlong **)(param_1 + 0x4e0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x4b0);
  plVar4 = *(longlong **)(param_1 + 0x4a0);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x470);
  plVar4 = *(longlong **)(param_1 + 0x460);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x430);
  plVar4 = *(longlong **)(param_1 + 0x410);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3c8);
  plVar4 = *(longlong **)(param_1 + 0x3a8);
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
  plVar4 = *(longlong **)(param_1 + 0x398);
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
  FUN_140691710(param_1);
  return;
}



// FUNCTION 1418d33b0 FUN_1418d33b0 body=109 status=ok
// SIG undefined FUN_1418d33b0(void)

void FUN_1418d33b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x348);
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
  plVar3 = *(longlong **)(param_1 + 0x328);
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
  FUN_1418d3420(param_1);
  return;
}



// FUNCTION 1418d3420 FUN_1418d3420 body=138 status=ok
// SIG undefined FUN_1418d3420(void)

void FUN_1418d3420(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x310);
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
  plVar4 = *(longlong **)(param_1 + 0x300);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_140458b70(param_1 + 8);
  return;
}



// FUNCTION 1418d34b0 FUN_1418d34b0 body=137 status=ok
// SIG undefined FUN_1418d34b0(void)

void FUN_1418d34b0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x308);
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
  plVar4 = *(longlong **)(param_1 + 0x2f8);
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
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 1418d3540 FUN_1418d3540 body=432 status=ok
// SIG undefined FUN_1418d3540(void)

void FUN_1418d3540(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x3d0);
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
  plVar4 = *(longlong **)(param_1 + 0x3c0);
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
  plVar4 = *(longlong **)(param_1 + 0x3b0);
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
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  if (*(longlong *)(param_1 + 0x398) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FCachedResponse>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x358);
  UE::Core::Private::Tuple::
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
  ::
  ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,TSharedRef<FUniqueNetId_const_,1>,TSharedRef<TDelegate<void___cdecl(FUniqueNetId_const_&,bool),FDefaultDelegateUserPolicy>_const_,1>_>
            (param_1 + 0x330);
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
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x310);
  plVar4 = *(longlong **)(param_1 + 0x308);
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
  plVar4 = *(longlong **)(param_1 + 0x2f8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 1418d36f0 FUN_1418d36f0 body=265 status=ok
// SIG undefined FUN_1418d36f0(void)

void FUN_1418d36f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x388);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x368);
  plVar4 = *(longlong **)(param_1 + 0x348);
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
  plVar4 = *(longlong **)(param_1 + 0x308);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x2f8);
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
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 1418d3800 FUN_1418d3800 body=314 status=ok
// SIG undefined FUN_1418d3800(void)

void FUN_1418d3800(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x428);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar5)();
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
  if (*(int *)(param_1 + 0x410) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x400);
    if (*(longlong **)(param_1 + 0x400) == (longlong *)0x0) {
      plVar5 = (longlong *)(param_1 + 0x3e0);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (*(longlong *)(param_1 + 0x400) != 0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x368);
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 800) != '\0') {
    *(undefined1 *)(param_1 + 800) = 0;
  }
  plVar5 = *(longlong **)(param_1 + 0x310);
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
  plVar5 = *(longlong **)(param_1 + 0x300);
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
  FUN_140458b70(param_1);
  return;
}



// FUNCTION 1418d3940 ~SSplitter body=219 status=ok
// SIG undefined ~SSplitter(void)

void SSplitter::~SSplitter(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x250);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x240);
  plVar1 = (longlong *)(param_1 + 0x218);
  plVar2 = (longlong *)*plVar1;
  for (iVar4 = *(int *)(param_1 + 0x220); iVar4 != 0; iVar4 = iVar4 + -1) {
    lVar3 = *plVar2;
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3 + 0x50);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3 + 0x40);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar3 + 0x28);
    FSlotBase::~FSlotBase(lVar3);
    FMemory::Free(*plVar2);
    plVar2 = plVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (*plVar1 != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x208) = &PTR__purecall_143f48980;
  FUN_1417f85e0(param_1);
  return;
}



// FUNCTION 1418d3a20 ~SSubMenuButton body=106 status=ok
// SIG undefined ~SSubMenuButton(void)

void SSubMenuButton::~SSubMenuButton(longlong param_1)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x490);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x440);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x430);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x420);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x410);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3a0);
  FUN_140691710(param_1);
  return;
}



// FUNCTION 1418d3a90 FUN_1418d3a90 body=205 status=ok
// SIG undefined FUN_1418d3a90(void)

longlong * FUN_1418d3a90(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  
  if (param_1 != param_2) {
    iVar8 = (int)param_1[1];
    if (iVar8 != 0) {
      plVar6 = (longlong *)(*param_1 + 8);
      do {
        plVar3 = (longlong *)*plVar6;
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
        plVar6 = plVar6 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar8 = (int)param_2[1];
    puVar7 = (undefined8 *)*param_2;
    *(int *)(param_1 + 1) = iVar8;
    if ((iVar8 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar8);
      puVar5 = (undefined8 *)*param_1;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar5 = *puVar7;
        lVar4 = puVar7[1];
        puVar5[1] = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
          UNLOCK();
        }
        puVar5 = puVar5 + 2;
        puVar7 = puVar7 + 2;
      }
    }
  }
  return param_1;
}



// FUNCTION 1418d3b60 FUN_1418d3b60 body=142 status=ok
// SIG undefined FUN_1418d3b60(void)

undefined4 * FUN_1418d3b60(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  plVar1 = (longlong *)(param_1 + 2);
  if ((longlong *)(param_2 + 2) != plVar1) {
    if ((param_2[4] != 0) && (plVar2 = *(longlong **)(param_2 + 2), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
      return param_1;
    }
    if ((param_1[4] != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar3 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar3;
      }
      param_1[4] = 0;
    }
  }
  return param_1;
}



// FUNCTION 1418d3bf0 operator= body=138 status=ok
// SIG undefined operator=(void)

undefined4 *
TAttribute<enum_ESelectionMode::Type>::operator=(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  plVar1 = (longlong *)(param_1 + 2);
  if ((longlong *)(param_2 + 2) != plVar1) {
    if ((param_2[4] != 0) && (plVar2 = *(longlong **)(param_2 + 2), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
      return param_1;
    }
    if ((param_1[4] != 0) && (plVar2 = (longlong *)*plVar1, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x28))(plVar2,0);
      if (*plVar1 != 0) {
        lVar3 = FMemory::Realloc(*plVar1,0,0);
        *plVar1 = lVar3;
      }
      param_1[4] = 0;
    }
  }
  return param_1;
}



// FUNCTION 1418d3c80 FUN_1418d3c80 body=220 status=ok
// SIG undefined FUN_1418d3c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1418d3c80(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
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
  puVar4 = (undefined8 *)param_1[1];
  uStack_30 = (longlong *)param_2[1];
  local_38 = *param_2;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(uStack_30 + 1) = (int)uStack_30[1] + 1;
    UNLOCK();
  }
  if (&local_38 != puVar4) {
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
    uVar5 = *puVar4;
    plVar6 = (longlong *)puVar4[1];
    local_28 = (undefined4)local_38;
    uStack_24 = local_38._4_4_;
    uStack_20 = (undefined4)uStack_30;
    uStack_1c = uStack_30._4_4_;
    *(undefined4 *)puVar4 = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar4 + 4) = local_38._4_4_;
    *(undefined4 *)(puVar4 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)puVar4 + 0xc) = uStack_30._4_4_;
    local_38 = uVar5;
    uStack_30 = plVar6;
  }
  plVar6 = uStack_30;
  if (uStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*uStack_30)(uStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*uStack_30 + 8))(uStack_30,1);
      }
    }
    return *param_1;
  }
  return *param_1;
}



// FUNCTION 1418d3d60 FUN_1418d3d60 body=353 status=ok
// SIG undefined FUN_1418d3d60(void)

longlong * FUN_1418d3d60(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  
  lVar6 = *param_1;
  plVar7 = *(longlong **)(lVar6 + 0x318);
  plVar8 = plVar7 + (longlong)*(int *)(lVar6 + 800) * 2;
  if (plVar7 != plVar8) {
    do {
      plVar3 = (longlong *)plVar7[1];
      lVar6 = *plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (((*(int *)(lVar6 + 0xc0) != 0) && (*(longlong **)(lVar6 + 0xb8) != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x18))(), cVar4 != '\0')) {
        if (*(int *)(lVar6 + 0xc0) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(lVar6 + 0xb8);
        }
        (**(code **)(*plVar5 + 0x38))(plVar5,local_res8);
        *(undefined1 *)(lVar6 + 0xb0) = local_res8[0];
      }
      if (*(char *)(lVar6 + 0xb0) == DAT_1464b9ee8) {
        *param_2 = lVar6;
        param_2[1] = (longlong)plVar3;
        if (plVar3 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar3 + 1;
        lVar6 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return param_2;
        }
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 != 1) {
          return param_2;
        }
        (**(code **)(*plVar3 + 8))(plVar3,1);
        return param_2;
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar3 + 1;
        lVar6 = *plVar5;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)lVar6 == 1) {
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
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
    lVar6 = *param_1;
  }
  plVar7 = *(longlong **)(lVar6 + 0x318);
  *param_2 = *plVar7;
  lVar6 = plVar7[1];
  param_2[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1418d3ed0 FUN_1418d3ed0 body=255 status=ok
// SIG undefined FUN_1418d3ed0(void)

longlong * FUN_1418d3ed0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_141971ea0(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_1418d3f94;
    }
  }
  bVar4 = 1;
LAB_1418d3f94:
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1418d3fd0 FUN_1418d3fd0 body=255 status=ok
// SIG undefined FUN_1418d3fd0(void)

longlong * FUN_1418d3fd0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_14192dfa0(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_1418d4094;
    }
  }
  bVar4 = 1;
LAB_1418d4094:
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1418d40d0 FUN_1418d40d0 body=266 status=ok
// SIG undefined FUN_1418d40d0(void)

longlong * FUN_1418d40d0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_1418ec8e0(*param_1,param_3,*(undefined8 *)param_1[2],((undefined8 *)param_1[2])[1]);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_1418d419f;
    }
  }
  bVar4 = 1;
LAB_1418d419f:
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1418d41e0 FUN_1418d41e0 body=391 status=ok
// SIG undefined FUN_1418d41e0(void)

longlong * FUN_1418d41e0(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  byte bVar7;
  longlong *plVar8;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  plVar3 = (longlong *)(*(undefined8 **)param_1[2])[1];
  uVar4 = **(undefined8 **)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  lVar5 = *param_1;
  *(undefined8 *)(lVar5 + 0x208) = uVar4;
  plVar8 = *(longlong **)(lVar5 + 0x210);
  if (plVar3 != plVar8) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar5 + 0x210);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    *(longlong **)(lVar5 + 0x210) = plVar3;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar3 + 1;
    lVar5 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar3 = (longlong *)*param_1;
  if (-1 < (char)plVar3[3]) {
    cVar6 = (**(code **)(*plVar3 + 0x1e8))(plVar3);
    if (cVar6 == '\0') {
      bVar7 = 0;
      goto LAB_1418d432c;
    }
  }
  bVar7 = 1;
LAB_1418d432c:
  *(byte *)((longlong)plVar3 + 0x19) = *(byte *)((longlong)plVar3 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar3 + 0x19) = *(byte *)((longlong)plVar3 + 0x19) | bVar7;
  *param_2 = *param_1;
  lVar5 = param_1[1];
  param_2[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1418d4370 FUN_1418d4370 body=262 status=ok
// SIG undefined FUN_1418d4370(void)

longlong * FUN_1418d4370(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_1418ee1d0(*param_1,param_3,*(undefined8 *)param_1[2]);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_1418d443b;
    }
  }
  bVar4 = 1;
LAB_1418d443b:
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1418d4480 FUN_1418d4480 body=255 status=ok
// SIG undefined FUN_1418d4480(void)

longlong * FUN_1418d4480(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_141933410(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_1418d4544;
    }
  }
  bVar4 = 1;
LAB_1418d4544:
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1418d4580 FUN_1418d4580 body=616 status=ok
// SIG undefined FUN_1418d4580(void)

longlong * FUN_1418d4580(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  SWidget::SWidgetConstruct
            (*param_1 + 8,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  lVar9 = *param_1;
  *(undefined8 *)(lVar9 + 0x330) = 0;
  *(undefined8 *)(lVar9 + 0x338) = 0;
  plVar7 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar7 != (longlong *)0x0) {
    plVar7[1] = lVar9;
    *plVar7 = (longlong)&PTR_GetPoolName_144d6a4c0;
    *(undefined4 *)(plVar7 + 2) = 0x419013f0;
    *(undefined4 *)((longlong)plVar7 + 0x14) = 1;
    *(undefined4 *)(plVar7 + 3) = 0;
    *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_5c;
    lVar8 = FDelegateHandle::GenerateNewID();
    plVar7[5] = lVar8;
  }
  local_48 = 0;
  local_30 = 1;
  local_28 = 0;
  local_20 = 0;
  local_58 = 0x3f800000;
  uStack_54 = 0;
  uStack_50 = 0x3f800000;
  uStack_4c = 0x3f800000;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_28);
  }
  FUN_140692440(lVar9 + 0x2b8,&local_58);
  *(undefined1 *)(lVar9 + 0x2e0) = local_30;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x2e8,&local_28);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_28);
  plVar4 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_38 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plStack_38)(plStack_38);
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
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7,0);
    lVar9 = FMemory::Realloc(plVar7,0,0);
    if (lVar9 != 0) {
      FMemory::Free(lVar9);
    }
  }
  lVar9 = *param_1;
  if ((*(char *)(lVar9 + 0x20) < '\0') ||
     (cVar5 = (**(code **)(*(longlong *)(lVar9 + 8) + 0x1e8))(lVar9 + 8), cVar5 != '\0')) {
    bVar6 = 1;
  }
  else {
    bVar6 = 0;
  }
  *(byte *)(lVar9 + 0x21) = *(byte *)(lVar9 + 0x21) & 0xfe;
  *(byte *)(lVar9 + 0x21) = *(byte *)(lVar9 + 0x21) | bVar6;
  *param_2 = *param_1;
  lVar9 = param_1[1];
  param_2[1] = lVar9;
  if (lVar9 != 0) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1418d47f0 FUN_1418d47f0 body=255 status=ok
// SIG undefined FUN_1418d47f0(void)

longlong * FUN_1418d47f0(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  
  SWidget::SWidgetConstruct
            (*param_1,param_3,param_3 + 0x30,param_3 + 0x40,param_3 + 0x60,param_3 + 0x78,
             *(undefined4 *)(param_3 + 0x90),param_3 + 0x98,param_3 + 200,param_3 + 0xe8,
             *(undefined1 *)(param_3 + 0xf0),*(undefined1 *)(param_3 + 0xf1),param_3 + 0xf8);
  FUN_141978760(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  if (-1 < (char)plVar1[3]) {
    cVar3 = (**(code **)(*plVar1 + 0x1e8))(plVar1);
    if (cVar3 == '\0') {
      bVar4 = 0;
      goto LAB_1418d48b4;
    }
  }
  bVar4 = 1;
LAB_1418d48b4:
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) & 0xfe;
  *(byte *)((longlong)plVar1 + 0x19) = *(byte *)((longlong)plVar1 + 0x19) | bVar4;
  *param_2 = *param_1;
  lVar2 = param_1[1];
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1418d4940 FUN_1418d4940 body=78 status=ok
// SIG undefined FUN_1418d4940(void)

undefined8 FUN_1418d4940(undefined8 param_1,ulonglong param_2)

{
  FUN_1406907e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x640);
  }
  return param_1;
}



// FUNCTION 1418d4990 FUN_1418d4990 body=177 status=ok
// SIG undefined FUN_1418d4990(void)

undefined8 * FUN_1418d4990(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 9);
  plVar4 = (longlong *)param_1[6];
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
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 1418d4a50 FUN_1418d4a50 body=107 status=ok
// SIG undefined FUN_1418d4a50(void)

undefined8 * FUN_1418d4a50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  FUN_1418d1a90(param_1 + 5);
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
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 1418d4ac0 FUN_1418d4ac0 body=140 status=ok
// SIG undefined FUN_1418d4ac0(void)

undefined8 * FUN_1418d4ac0(undefined8 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[6];
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
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1418d4b50 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TBaseStaticDelegateInstance<FText___cdecl(void),TAttribute<FText>,TWeakPtr<FUICommandInfo_const_,0>_>
::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  FUN_1418d1a10(param_1 + 2);
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1418d4ba0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SSpinBox<double>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x650);
  }
  return param_1;
}



// FUNCTION 1418d4bd0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SUniformGridPanel>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x288);
  }
  return param_1;
}



// FUNCTION 1418d4c00 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<FOnlineSubsystemEOS>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x2d0);
  }
  return param_1;
}



// FUNCTION 1418d4c30 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SWorldWidgetScreenLayer>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x368);
  }
  return param_1;
}



// FUNCTION 1418d4c60 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SToolBarButtonBlock>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x340);
  }
  return param_1;
}



// FUNCTION 1418d4c90 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SOverlay>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x228);
  }
  return param_1;
}



// FUNCTION 1418d4cc0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SHorizontalBox>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x338);
  }
  return param_1;
}



// FUNCTION 1418d4cf0 FUN_1418d4cf0 body=43 status=ok
// SIG undefined FUN_1418d4cf0(void)

undefined8 * FUN_1418d4cf0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x270);
  }
  return param_1;
}



// FUNCTION 1418d4d20 FUN_1418d4d20 body=43 status=ok
// SIG undefined FUN_1418d4d20(void)

undefined8 * FUN_1418d4d20(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3c0);
  }
  return param_1;
}



// FUNCTION 1418d4d50 FUN_1418d4d50 body=43 status=ok
// SIG undefined FUN_1418d4d50(void)

undefined8 * FUN_1418d4d50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x550);
  }
  return param_1;
}



// FUNCTION 1418d4d80 FUN_1418d4d80 body=43 status=ok
// SIG undefined FUN_1418d4d80(void)

undefined8 * FUN_1418d4d80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 1418d4db0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SMultiBlockDragHandle>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x310);
  }
  return param_1;
}



// FUNCTION 1418d4de0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SListPanel>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 1418d4e10 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SCustomToolbarPreviewWidget>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x328);
  }
  return param_1;
}



// FUNCTION 1418d4e40 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SComboBox<TSharedPtr<FString,0>_>_>::
_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3f8);
  }
  return param_1;
}



// FUNCTION 1418d4e70 FUN_1418d4e70 body=43 status=ok
// SIG undefined FUN_1418d4e70(void)

undefined8 * FUN_1418d4e70(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3a0);
  }
  return param_1;
}



// FUNCTION 1418d4ea0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SProgressBar>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4b0);
  }
  return param_1;
}



// FUNCTION 1418d4ed0 `scalar_deleting_destructor' body=43 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
SharedPointerInternals::TIntrusiveReferenceController<SMixerLoginPane>::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_143f3edb0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x358);
  }
  return param_1;
}



// FUNCTION 1418d4f00 `scalar_deleting_destructor' body=66 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TSlotlessChildren<SDockTab>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 2);
  *param_1 = &PTR__purecall_143f48980;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1418d4f50 FUN_1418d4f50 body=52 status=ok
// SIG undefined FUN_1418d4f50(void)

undefined8 FUN_1418d4f50(undefined8 param_1,ulonglong param_2)

{
  FMultiBoxBuilder::~FMultiBoxBuilder();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1418d4f90 `scalar_deleting_destructor' body=241 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FDefaultRichTextMarkupParser::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[6];
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
  plVar4 = (longlong *)param_1[2];
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
  *param_1 = &PTR_FUN_143f47c98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1418d5090 FUN_1418d5090 body=43 status=ok
// SIG undefined FUN_1418d5090(void)

undefined8 * FUN_1418d5090(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d66ad8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1418d50c0 `scalar_deleting_destructor' body=190 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FDropPreviewBlock::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xb8);
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
  FUN_1418d2600(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1418d5180 `scalar_deleting_destructor' body=134 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FImagePixelData::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR__scalar_deleting_destructor__144d69390;
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
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1418d5210 FUN_1418d5210 body=357 status=ok
// SIG undefined FUN_1418d5210(void)

longlong FUN_1418d5210(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
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
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x1a8);
  plVar4 = *(longlong **)(param_1 + 0x1a0);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x188);
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
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x168);
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x150);
  plVar4 = *(longlong **)(param_1 + 0x148);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  FUN_1418d1660(param_1 + 0x130);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x120);
  FUN_1418d27d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x210);
  }
  return param_1;
}



// FUNCTION 1418d5380 `scalar_deleting_destructor' body=147 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FHeadingBlock::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc0);
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
  FUN_1418d2600(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1418d5420 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 USBZCosmeticsPartSlot::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  USBZModularPartSlotBase::~USBZModularPartSlotBase();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1418d5460 FUN_1418d5460 body=354 status=ok
// SIG undefined FUN_1418d5460(void)

longlong FUN_1418d5460(longlong param_1,ulonglong param_2)

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
  plVar4 = *(longlong **)(param_1 + 0x148);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x130);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x120);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xf0);
  plVar4 = *(longlong **)(param_1 + 0xd8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc0);
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
  FUN_1418d2600(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 1418d55d0 FUN_1418d55d0 body=143 status=ok
// SIG undefined FUN_1418d55d0(void)

undefined8 * FUN_1418d55d0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 5);
  *param_1 = &PTR__scalar_deleting_destructor__144d69390;
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
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 1418d5660 FUN_1418d5660 body=52 status=ok
// SIG undefined FUN_1418d5660(void)

undefined8 FUN_1418d5660(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d2600();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1418d56a0 FUN_1418d56a0 body=241 status=ok
// SIG undefined FUN_1418d56a0(void)

undefined8 * FUN_1418d56a0(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d66c48;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 9);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 7);
  plVar4 = (longlong *)param_1[6];
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
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1418d57a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FMultiBoxBuilder::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~FMultiBoxBuilder();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1418d57e0 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FPlainTextLayoutMarshaller::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144d6a2b0;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 3);
  *param_1 = &PTR_FUN_143f48658;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1418d5830 FUN_1418d5830 body=214 status=ok
// SIG undefined FUN_1418d5830(void)

undefined8 * FUN_1418d5830(undefined8 *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_144d6a2e8;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 8);
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 6);
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
  plVar4 = (longlong *)param_1[3];
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
  *param_1 = &PTR_FUN_143f48658;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1418d5910 FUN_1418d5910 body=52 status=ok
// SIG undefined FUN_1418d5910(void)

undefined8 FUN_1418d5910(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d27d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x120);
  }
  return param_1;
}



// FUNCTION 1418d5950 `scalar_deleting_destructor' body=242 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FToolBarButtonBlock::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x139) != '\0') {
    *(undefined1 *)(param_1 + 0x139) = 0;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x128);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xf0);
  plVar4 = *(longlong **)(param_1 + 0xd8);
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
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0xc0);
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
  FUN_1418d2600(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 1418d5a50 FUN_1418d5a50 body=243 status=ok
// SIG undefined FUN_1418d5a50(void)

undefined8 * FUN_1418d5a50(undefined8 *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_144d66b18;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x1b);
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0x19);
  TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>::
  ~TArray<TWeakPtr<FNavigationPath,1>,FDefaultAllocator>(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FMemory::Free();
  }
  FUN_1418f6a30(param_1 + 0xd,0);
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 3);
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
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 1418d5b50 FUN_1418d5b50 body=190 status=ok
// SIG undefined FUN_1418d5b50(void)

longlong FUN_1418d5b50(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0xb8);
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
  FUN_1418d2600(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1418d5c10 FUN_1418d5c10 body=52 status=ok
// SIG undefined FUN_1418d5c10(void)

undefined8 FUN_1418d5c10(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d29e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 1418d5c50 FUN_1418d5c50 body=43 status=ok
// SIG undefined FUN_1418d5c50(void)

undefined8 * FUN_1418d5c50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144d66ad8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1418d5c80 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SDefaultMovieBorder::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d2ad0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    ~SDefaultMovieBorder(param_1,0x498);
  }
  return param_1;
}



// FUNCTION 1418d5cd0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SUniformGridPanel::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d2c00();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x278);
  }
  return param_1;
}



// FUNCTION 1418d5d20 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SColorBlock::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~SColorBlock();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x2c0);
  }
  return param_1;
}



// FUNCTION 1418d5d70 FUN_1418d5d70 body=78 status=ok
// SIG undefined FUN_1418d5d70(void)

undefined8 FUN_1418d5d70(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d2ce0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x358);
  }
  return param_1;
}



// FUNCTION 1418d5dc0 FUN_1418d5dc0 body=78 status=ok
// SIG undefined FUN_1418d5dc0(void)

undefined8 FUN_1418d5dc0(undefined8 param_1,ulonglong param_2)

{
  USBZSettingsButton::~USBZSettingsButton();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 1418d5e10 FUN_1418d5e10 body=124 status=ok
// SIG undefined FUN_1418d5e10(void)

longlong FUN_1418d5e10(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x210);
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
  FUN_1417f85e0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x218);
  }
  return param_1;
}



// FUNCTION 1418d5e90 FUN_1418d5e90 body=124 status=ok
// SIG undefined FUN_1418d5e90(void)

longlong FUN_1418d5e90(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x2f8);
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
  FUN_140458b70(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x308);
  }
  return param_1;
}



// FUNCTION 1418d5f10 FUN_1418d5f10 body=78 status=ok
// SIG undefined FUN_1418d5f10(void)

undefined8 FUN_1418d5f10(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d30c0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 1418d5f60 FUN_1418d5f60 body=124 status=ok
// SIG undefined FUN_1418d5f60(void)

longlong FUN_1418d5f60(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x3a0);
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
  FUN_140691710(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x3b0);
  }
  return param_1;
}



// FUNCTION 1418d5fe0 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SComboButton::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d3170();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x540);
  }
  return param_1;
}



// FUNCTION 1418d6030 FUN_1418d6030 body=78 status=ok
// SIG undefined FUN_1418d6030(void)

undefined8 FUN_1418d6030(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d3420();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,800);
  }
  return param_1;
}



// FUNCTION 1418d6080 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 STableColumnHeader::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d33b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 1418d60d0 `scalar_deleting_destructor' body=153 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SMenuEntryButton::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x440);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x430);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x420);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x410);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x400);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x3a0);
  FUN_140691710(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x490);
  }
  return param_1;
}



// FUNCTION 1418d6170 FUN_1418d6170 body=78 status=ok
// SIG undefined FUN_1418d6170(void)

undefined8 FUN_1418d6170(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d34b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x318);
  }
  return param_1;
}



// FUNCTION 1418d61c0 FUN_1418d61c0 body=78 status=ok
// SIG undefined FUN_1418d61c0(void)

undefined8 FUN_1418d61c0(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d3540();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,1000);
  }
  return param_1;
}



// FUNCTION 1418d6210 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SDefaultMovieBorder::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_1418d36f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    ~SDefaultMovieBorder(param_1,0x390);
  }
  return param_1;
}



// FUNCTION 1418d6260 `scalar_deleting_destructor' body=78 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 SSubMenuButton::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  ~SSubMenuButton();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x4a0);
  }
  return param_1;
}



// FUNCTION 1418d62b0 `scalar_deleting_destructor' body=93 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong SToolBarButtonBlock::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x328);
  FUN_1418d3420(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      FMemory::Free();
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x348);
  }
  return param_1;
}



// FUNCTION 1418d6310 FUN_1418d6310 body=7038 status=ok
// SIG undefined FUN_1418d6310(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1418d6310(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined1 param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 uVar5;
  code *pcVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined1 auStack_1a78 [32];
  undefined8 *local_1a58;
  longlong local_1a50;
  undefined4 local_1a48;
  longlong local_1a40;
  longlong local_1a38;
  longlong local_1a30;
  undefined1 local_1a28;
  undefined1 local_1a20;
  longlong local_1a18;
  char local_1a08;
  undefined8 *local_1a00;
  longlong local_19f8;
  undefined1 local_19f0;
  undefined1 local_19ef;
  undefined1 local_19ee;
  undefined1 local_19ed;
  undefined1 local_19ec;
  undefined1 local_19eb;
  undefined1 local_19ea [2];
  longlong *local_19e8;
  undefined8 *local_19e0;
  longlong local_19d8;
  longlong local_19d0;
  code *local_19c8;
  undefined4 uStack_19c0;
  undefined4 uStack_19bc;
  undefined8 local_19b8;
  longlong *local_19b0;
  int local_19a8;
  longlong *local_19a0;
  int local_1998;
  undefined2 local_1990;
  undefined8 local_1988;
  undefined4 local_1980;
  undefined2 local_1978;
  undefined8 local_1970;
  undefined4 local_1968;
  code *local_1958;
  undefined4 uStack_1950;
  uint uStack_194c;
  undefined8 local_1948;
  longlong *local_1940;
  undefined1 local_1938;
  undefined1 local_1937;
  undefined8 local_1930;
  undefined4 local_1928;
  longlong local_1920;
  longlong local_1918;
  undefined1 *local_1910;
  longlong local_1908;
  longlong local_1900;
  undefined1 *local_18f8;
  undefined8 local_18f0;
  undefined8 local_18e8;
  undefined8 local_18e0;
  undefined8 local_18d8;
  undefined8 local_18d0;
  undefined8 local_18c8;
  longlong *plStack_18c0;
  longlong local_18b8;
  longlong local_18b0;
  undefined1 *local_18a8;
  longlong local_18a0;
  longlong local_1898;
  undefined1 *local_1890;
  undefined1 local_1888;
  undefined1 local_1887;
  undefined8 local_1880;
  undefined4 local_1878;
  longlong local_1870;
  longlong local_1868;
  undefined1 *local_1860;
  longlong local_1858;
  longlong local_1850;
  undefined1 *local_1848;
  undefined1 local_1840;
  undefined1 local_183f;
  undefined8 local_1838;
  undefined4 local_1830;
  longlong *local_1828;
  longlong *local_1820;
  undefined1 *local_1818;
  longlong *local_1810;
  longlong *local_1808;
  longlong *local_1800;
  longlong *local_17f8;
  longlong *local_17f0;
  longlong *local_17e8;
  undefined8 local_17e0;
  longlong local_17d8;
  undefined8 local_17d0;
  longlong local_17c8;
  longlong *local_17c0;
  longlong *local_17b8;
  undefined8 local_17b0;
  longlong local_17a8;
  undefined8 local_17a0;
  longlong local_1798;
  undefined8 local_1790;
  undefined8 local_1788;
  longlong *local_1780;
  longlong *local_1778;
  undefined8 local_1770;
  longlong local_1768;
  undefined8 local_1760;
  longlong local_1758;
  undefined8 local_1750;
  longlong local_1748;
  undefined8 local_1740;
  longlong *local_1738;
  undefined8 local_1730;
  longlong *local_1728;
  undefined8 local_1720;
  longlong *local_1718;
  undefined8 local_1710;
  longlong *local_1708;
  undefined8 local_1700;
  longlong *local_16f8;
  undefined8 local_16f0;
  longlong local_16e8;
  undefined8 local_16e0;
  undefined8 uStack_16d8;
  undefined1 local_16d0;
  undefined8 local_16c8;
  undefined4 local_16c0;
  undefined1 local_16b8 [24];
  undefined1 local_16a0;
  undefined8 local_1698;
  undefined4 local_1690;
  undefined1 local_1688 [24];
  undefined1 local_1670;
  undefined8 local_1668;
  undefined4 local_1660;
  undefined1 local_1658 [24];
  undefined1 local_1640;
  undefined8 local_1638;
  undefined4 local_1630;
  undefined8 local_1628;
  undefined8 uStack_1620;
  undefined1 local_1618;
  undefined8 local_1610;
  undefined8 uStack_1608;
  undefined1 local_1600;
  undefined8 local_15f8;
  undefined4 local_15f0;
  undefined8 local_15e8;
  undefined8 uStack_15e0;
  undefined1 local_15d8;
  undefined8 local_15d0;
  undefined8 uStack_15c8;
  undefined1 local_15c0;
  undefined8 local_15b8;
  undefined4 local_15b0;
  undefined8 local_15a8;
  undefined8 uStack_15a0;
  undefined1 local_1598;
  undefined8 local_1590;
  undefined8 uStack_1588;
  undefined1 local_1580;
  undefined8 local_1578;
  undefined4 local_1570;
  undefined8 local_1568;
  undefined8 uStack_1560;
  undefined1 local_1558;
  undefined8 local_1550;
  undefined4 local_1548;
  undefined1 local_1540 [16];
  undefined1 local_1530 [8];
  undefined1 local_1528 [8];
  undefined1 local_1520 [8];
  undefined8 local_1518;
  undefined8 local_1510;
  undefined1 local_1508 [8];
  longlong *local_1500;
  undefined1 local_14f8 [8];
  longlong *local_14f0;
  undefined1 local_14e8 [8];
  longlong *local_14e0;
  code *local_14d8;
  longlong lStack_14d0;
  code *local_14c8;
  undefined8 uStack_14c0;
  undefined1 local_14b8 [8];
  longlong *local_14b0;
  longlong *local_14a8;
  longlong *local_14a0;
  code *local_1488;
  undefined8 uStack_1480;
  undefined8 local_1478;
  longlong *plStack_1470;
  longlong *local_1468;
  longlong *local_1460;
  undefined1 local_1450 [8];
  longlong *local_1448;
  undefined1 local_1440 [8];
  longlong *local_1438;
  undefined1 local_1430 [8];
  longlong *local_1428;
  undefined1 local_1420 [16];
  undefined1 local_1410 [16];
  undefined1 local_1400 [16];
  undefined1 local_13f0 [24];
  undefined1 local_13d8 [8];
  longlong *local_13d0;
  undefined1 local_13c0 [24];
  undefined1 local_13a8 [264];
  longlong local_12a0;
  undefined1 local_1288 [264];
  longlong local_1180;
  undefined1 local_1168 [264];
  longlong local_1060;
  undefined1 local_1048 [264];
  longlong local_f40;
  undefined1 local_f28 [272];
  undefined1 local_e18 [768];
  undefined1 local_b18 [912];
  undefined1 local_788 [912];
  undefined1 local_3f8 [912];
  ulonglong local_68;
  undefined8 uStack_48;
  
  uStack_48 = 0x1418d632f;
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1a78;
  local_1a00 = param_4;
  local_19e0 = param_3;
  local_19d8 = param_1;
  local_19d0 = param_2;
  if (((DAT_1469f4658 != 0) && (DAT_1469f4650 != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(*DAT_1469f4650 + 0x18))(), cVar7 != '\0')) {
    plVar20 = (longlong *)0x0;
    if (DAT_1469f4658 != 0) {
      plVar20 = DAT_1469f4650;
    }
    DAT_1469f4648 = (**(code **)(*plVar20 + 0x38))();
  }
  if (DAT_1469f4648 == '\0') {
LAB_1418d63d1:
    local_1a08 = '\0';
  }
  else {
    local_19e8 = (longlong *)0x0;
    local_1a08 = '\x01';
    if (*(longlong *)(param_2 + 0x80) == 0) goto LAB_1418d63d1;
  }
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_1508);
  local_1750 = *puVar10;
  local_1748 = puVar10[1];
  if (local_1748 != 0) {
    LOCK();
    *(int *)(local_1748 + 8) = *(int *)(local_1748 + 8) + 1;
    UNLOCK();
  }
  if (local_1500 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_1500 + 1;
    lVar13 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_1500)(local_1500);
      LOCK();
      piVar1 = (int *)((longlong)local_1500 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_1500 + 8))(local_1500,1);
      }
    }
  }
  local_1a58 = (undefined8 *)CONCAT71(local_1a58._1_7_,param_6);
  puVar10 = (undefined8 *)FUN_141905390(param_2,local_14f8,&local_1750,param_5);
  (**(code **)(*(longlong *)*puVar10 + 8))((longlong *)*puVar10,&local_1948);
  if (local_14f0 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_14f0 + 1;
    lVar13 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_14f0)(local_14f0);
      LOCK();
      piVar1 = (int *)((longlong)local_14f0 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_14f0 + 8))(local_14f0,1);
      }
    }
  }
  plVar20 = local_1940;
  local_19f8 = local_1948;
  if (local_1940 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_1940 + 0xc) = *(int *)((longlong)local_1940 + 0xc) + 1;
    UNLOCK();
  }
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_2 + 8,local_14e8);
  plVar4 = (longlong *)puVar10[1];
  uVar12 = *puVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_19b8 = uVar12;
  if (local_14e0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_14e0 + 1;
    lVar13 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_14e0)(local_14e0);
      LOCK();
      piVar1 = (int *)((longlong)local_14e0 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_14e0 + 8))(local_14e0,1);
      }
    }
  }
  local_19e8 = *(longlong **)(*(longlong *)(local_19d8 + 0x300) + 0x58);
  FName::FName(&local_18f0,"MultiBox.DeleteButton",1);
  local_16d0 = 1;
  local_1958 = FUN_1419077c0;
  local_19c8 = FUN_1418fd630;
  uStack_1950 = 0;
  local_16c8 = 0;
  local_16c0 = 0;
  uStack_19c0 = 0;
  local_16e0 = 0;
  uStack_16d8 = 0;
  lStack_14d0 = (ulonglong)uStack_194c << 0x20;
  local_14d8 = FUN_1419077c0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar20 + 0xc) = *(int *)((longlong)plVar20 + 0xc) + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_1720 = uVar12;
  local_1718 = plVar4;
  lVar11 = FUN_14068f3e0(local_e18);
  lVar13 = local_19d8;
  uStack_1480 = CONCAT44(uStack_19bc,uStack_19c0);
  local_1740 = local_19f8;
  local_1488 = local_19c8;
  local_1738 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar20 + 0xc) = *(int *)((longlong)plVar20 + 0xc) + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_1a58 = &local_1740;
  local_1730 = uVar12;
  local_1728 = plVar4;
  uVar12 = FUN_1418ca770(&local_19b0,local_19d8,&local_1488,&local_1730);
  local_1978 = 0x119;
  local_1970 = 0;
  local_1968 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1970,uVar12);
  *(undefined1 *)(lVar11 + 0x78) = (undefined1)local_1978;
  *(undefined1 *)(lVar11 + 0x79) = local_1978._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x80,&local_1970);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1970);
  if (local_19a8 == 0) {
LAB_1418d66bf:
    if (local_19b0 != (longlong *)0x0) {
      FMemory::Free(local_19b0);
    }
  }
  else if (local_19b0 != (longlong *)0x0) {
    (**(code **)(*local_19b0 + 0x28))(local_19b0,0);
    if (local_19b0 != (longlong *)0x0) {
      local_19b0 = (longlong *)FMemory::Realloc(local_19b0,0,0);
    }
    local_19a8 = 0;
    goto LAB_1418d66bf;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar20 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plVar20 + 8))(plVar20,1);
    }
  }
  *(undefined1 *)(lVar11 + 0x140) = 1;
  *(undefined8 *)(lVar11 + 0x130) = local_16e0;
  *(undefined8 *)(lVar11 + 0x138) = uStack_16d8;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x148,&local_16c8);
  lVar13 = FUN_1418cd2c0(lVar11,lVar13,&local_14d8,&local_1720);
  local_1510 = local_18f0;
  local_1518 = local_18f0;
  lVar11 = (**(code **)(*local_19e8 + 0x80))(local_19e8,DAT_1469eb160);
  if (lVar11 == 0) {
    lVar11 = FUN_141834930();
  }
  *(longlong *)(lVar13 + 0x118) = lVar11;
  plVar14 = (longlong *)FUN_141880af0();
  plVar16 = plVar14 + 2;
  local_1958 = (code *)plVar14;
  local_1828 = plVar16;
  local_1820 = plVar14;
  FUN_14044f790(&local_1828,plVar16);
  local_1818 = &local_19f0;
  local_1a58 = (undefined8 *)0x488;
  SWidget::SetDebugInfo
            (plVar16,"SButton",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
             ,0x1f2);
  local_1a48 = *(undefined4 *)(lVar13 + 0x90);
  local_1a18 = lVar13 + 0xf8;
  local_1a30 = lVar13 + 0xe8;
  local_1a20 = *(undefined1 *)(lVar13 + 0xf1);
  local_1a38 = lVar13 + 200;
  local_1a40 = lVar13 + 0x98;
  local_1a28 = *(undefined1 *)(lVar13 + 0xf0);
  local_1a50 = lVar13 + 0x78;
  local_1a58 = (undefined8 *)(lVar13 + 0x60);
  SWidget::SWidgetConstruct(plVar16,lVar13,lVar13 + 0x30,lVar13 + 0x40);
  FUN_14192dae0(plVar16,lVar13);
  if (((char)plVar14[5] < '\0') || (cVar7 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar8;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  uStack_19c0 = 0;
  local_19c8 = FUN_1418fd630;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar20 + 0xc) = *(int *)((longlong)plVar20 + 0xc) + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_1800 = plVar16;
  local_17f8 = plVar14;
  lVar11 = STSDRichInlineImage::FArguments::FArguments(local_f28);
  lVar13 = local_19d8;
  uStack_14c0 = CONCAT44(uStack_19bc,uStack_19c0);
  local_1710 = local_19f8;
  local_14c8 = local_19c8;
  local_1708 = plVar20;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar20 + 0xc) = *(int *)((longlong)plVar20 + 0xc) + 1;
    UNLOCK();
  }
  local_1700 = local_19b8;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  local_1a58 = &local_1710;
  local_16f8 = plVar4;
  uVar12 = FUN_1418ca770(&local_19a0,local_19d8,&local_14c8,&local_1700);
  local_1990 = 0x119;
  local_1988 = 0;
  local_1980 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_1988,uVar12);
  *(undefined1 *)(lVar11 + 0x78) = (undefined1)local_1990;
  *(undefined1 *)(lVar11 + 0x79) = local_1990._1_1_;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x80,&local_1988);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1988);
  if (local_1998 != 0) {
    if (local_19a0 == (longlong *)0x0) goto LAB_1418d69ec;
    (**(code **)(*local_19a0 + 0x28))(local_19a0,0);
    if (local_19a0 != (longlong *)0x0) {
      local_19a0 = (longlong *)FMemory::Realloc(local_19a0,0,0);
    }
    local_1998 = 0;
  }
  if (local_19a0 != (longlong *)0x0) {
    FMemory::Free(local_19a0);
  }
LAB_1418d69ec:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar20 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plVar20 + 8))(plVar20,1);
    }
  }
  local_18e8 = *(undefined8 *)(*(longlong *)(*(longlong *)(lVar13 + 0x300) + 0x28) + 0x10);
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar13 + 8,local_14b8);
  local_18c8 = *puVar10;
  plStack_18c0 = (longlong *)puVar10[1];
  if (plStack_18c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_18c0 + 1) = (int)plStack_18c0[1] + 1;
    UNLOCK();
  }
  if (local_14b0 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_14b0 + 1;
    lVar13 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_14b0)(local_14b0);
      LOCK();
      piVar1 = (int *)((longlong)local_14b0 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_14b0 + 8))(local_14b0,1);
      }
    }
  }
  puVar10 = (undefined8 *)
            TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(local_19d0 + 8,local_1450);
  plVar14 = (longlong *)
            SharedPointerInternals::NewIntrusiveReferenceController<SMultiBlockDragHandle>();
  plVar16 = plVar14 + 2;
  local_14a8 = plVar16;
  local_14a0 = plVar14;
  FUN_14044f790(&local_14a8,plVar16);
  local_1a58 = (undefined8 *)0x318;
  SWidget::SetDebugInfo
            (plVar16,"SMultiBlockDragHandle",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
             ,0x1e9);
  local_1a48 = *(undefined4 *)(lVar11 + 0x90);
  local_1a18 = lVar11 + 0xf8;
  local_1a30 = lVar11 + 0xe8;
  local_1a20 = *(undefined1 *)(lVar11 + 0xf1);
  local_1a38 = lVar11 + 200;
  local_1a40 = lVar11 + 0x98;
  local_1a28 = *(undefined1 *)(lVar11 + 0xf0);
  local_1a58 = (undefined8 *)(lVar11 + 0x60);
  local_1a50 = lVar11 + 0x78;
  SWidget::SWidgetConstruct(plVar16,lVar11,lVar11 + 0x30,lVar11 + 0x40);
  local_16f0 = *puVar10;
  local_16e8 = puVar10[1];
  if (local_16e8 != 0) {
    LOCK();
    *(int *)(local_16e8 + 8) = *(int *)(local_16e8 + 8) + 1;
    UNLOCK();
  }
  local_1478 = local_18c8;
  plStack_1470 = plStack_18c0;
  if (plStack_18c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_18c0 + 1) = (int)plStack_18c0[1] + 1;
    UNLOCK();
  }
  local_1a58 = (undefined8 *)local_18e8;
  FUN_1418f17f0(plVar16,lVar11,&local_1478,&local_16f0);
  if (((char)plVar14[5] < '\0') || (cVar7 = (**(code **)(*plVar16 + 0x1e8))(plVar16), cVar7 != '\0')
     ) {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar14 + 0x29) = *(byte *)((longlong)plVar14 + 0x29) | bVar8;
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  puVar19 = (undefined8 *)0x0;
  local_1568 = 0x4000000000000000;
  uStack_1560 = 0x3f800000;
  local_1558 = 1;
  local_1550 = 0;
  local_1548 = 0;
  local_1810 = plVar16;
  local_1808 = plVar14;
  puVar15 = (undefined8 *)operator_new(0x50);
  puVar10 = puVar19;
  if (puVar15 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar15);
    *puVar15 = &PTR_FUN_1444d5278;
    *(undefined4 *)(puVar15 + 4) = 0;
    *(undefined8 *)((longlong)puVar15 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar15 + 0x34) = 0;
    *(undefined1 *)(puVar15 + 7) = 1;
    puVar15[8] = 0;
    *(undefined4 *)(puVar15 + 9) = 0;
    puVar10 = puVar15;
  }
  *(undefined2 *)((longlong)puVar10 + 0x24) = 0x103;
  *(undefined1 *)(puVar10 + 7) = 1;
  puVar10[5] = 0x4000000000000000;
  puVar10[6] = 0x3f800000;
  TBaseDelegate<FSlateBrush_const_*>::operator=(puVar10 + 8,&local_1550);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1550);
  puVar15 = (undefined8 *)operator_new(0x50);
  if (puVar15 != (undefined8 *)0x0) {
    FSlotBase::FSlotBase(puVar15);
    *(undefined4 *)(puVar15 + 4) = 0;
    *puVar15 = &PTR_FUN_1444d5278;
    *(undefined2 *)((longlong)puVar15 + 0x24) = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    *(undefined1 *)(puVar15 + 7) = 1;
    puVar15[8] = 0;
    *(undefined4 *)(puVar15 + 9) = 0;
    puVar19 = puVar15;
  }
  puVar15 = (undefined8 *)operator_new(0x50);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    FSlotBase::FSlotBase(puVar15);
    *puVar15 = &PTR_FUN_1444d5278;
    *(undefined4 *)(puVar15 + 4) = 0;
    *(undefined2 *)((longlong)puVar15 + 0x24) = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    *(undefined1 *)(puVar15 + 7) = 1;
    puVar15[8] = 0;
    *(undefined4 *)(puVar15 + 9) = 0;
  }
  local_19c8 = (code *)FUN_140801a00(puVar15,&local_1948);
  lVar13 = SOverlay::FArguments::FArguments(local_13a8);
  plVar16 = (longlong *)(lVar13 + 0x108);
  iVar9 = *(int *)(lVar13 + 0x110);
  local_19b8 = CONCAT44(local_19b8._4_4_,iVar9);
  *(int *)(lVar13 + 0x110) = iVar9 + 1;
  local_19f8 = lVar13;
  if (*(int *)(lVar13 + 0x114) < iVar9 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar9);
    iVar9 = (int)local_19b8;
  }
  *(code **)(*plVar16 + (longlong)iVar9 * 8) = local_19c8;
  local_19c8 = (code *)FUN_140801a00(puVar19,&local_1810);
  iVar9 = *(int *)(lVar13 + 0x110);
  *(int *)(lVar13 + 0x110) = iVar9 + 1;
  if (*(int *)(lVar13 + 0x114) < iVar9 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar9);
  }
  *(code **)(*plVar16 + (longlong)iVar9 * 8) = local_19c8;
  uVar12 = FUN_140801a00(puVar10,&local_1800);
  iVar9 = *(int *)(lVar13 + 0x110);
  *(int *)(lVar13 + 0x110) = iVar9 + 1;
  if (*(int *)(lVar13 + 0x114) < iVar9 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar16,iVar9);
  }
  *(undefined8 *)(*plVar16 + (longlong)iVar9 * 8) = uVar12;
  plVar16 = (longlong *)operator_new(0x240);
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_1440f90d0;
    if (plVar16 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4610();
    }
  }
  plVar2 = plVar16 + 2;
  local_1468 = plVar2;
  local_1460 = plVar16;
  FUN_14044f790(&local_1468,plVar2);
  local_1a58 = (undefined8 *)0x230;
  SWidget::SetDebugInfo
            (plVar2,"SOverlay",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
             ,0x1e0);
  local_1a18 = local_19f8 + 0xf8;
  local_1a30 = local_19f8 + 0xe8;
  local_1a38 = local_19f8 + 200;
  local_1a40 = local_19f8 + 0x98;
  local_1a50 = local_19f8 + 0x78;
  local_1a58 = (undefined8 *)(local_19f8 + 0x60);
  local_1a20 = *(undefined1 *)(local_19f8 + 0xf1);
  local_1a28 = *(undefined1 *)(local_19f8 + 0xf0);
  local_1a48 = *(undefined4 *)(local_19f8 + 0x90);
  SWidget::SWidgetConstruct(plVar2,local_19f8,local_19f8 + 0x30,local_19f8 + 0x40);
  SOverlay::Construct(plVar2,local_19f8);
  if (((char)plVar16[5] < '\0') || (cVar7 = (**(code **)(*plVar2 + 0x1e8))(plVar2), cVar7 != '\0'))
  {
    bVar8 = 1;
  }
  else {
    bVar8 = 0;
  }
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar8;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar16 + 1;
    lVar13 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
    LOCK();
    plVar3 = plVar16 + 1;
    lVar13 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (local_12a0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_13a8);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar14 + 1;
    lVar13 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    LOCK();
    plVar3 = plVar14 + 1;
    lVar13 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
    LOCK();
    plVar3 = plVar14 + 1;
    lVar13 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  plVar14 = plStack_18c0;
  if (plStack_18c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_18c0 + 1;
    lVar13 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plStack_18c0)(plStack_18c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar14 + 8))(plVar14,1);
      }
    }
  }
  if (local_1448 != (longlong *)0x0) {
    LOCK();
    plVar14 = local_1448 + 1;
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_1448)(local_1448);
      LOCK();
      piVar1 = (int *)((longlong)local_1448 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_1448 + 8))(local_1448,1);
      }
    }
  }
  FUN_140456c70(local_f28);
  pcVar6 = local_1958;
  if (local_1958 != (code *)0x0) {
    LOCK();
    plVar14 = (longlong *)((longlong)local_1958 + 8);
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (*(code *)**(undefined8 **)local_1958)(local_1958);
      LOCK();
      piVar1 = (int *)((longlong)pcVar6 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*(longlong *)pcVar6 + 8))(pcVar6,1);
      }
    }
    LOCK();
    plVar14 = (longlong *)((longlong)pcVar6 + 8);
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (*(code *)**(undefined8 **)pcVar6)(pcVar6);
      LOCK();
      piVar1 = (int *)((longlong)pcVar6 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*(longlong *)pcVar6 + 8))(pcVar6,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1828);
  FUN_140690f70(local_e18);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_16c8);
  puVar19 = local_19e0;
  puVar10 = local_1a00;
  switch(*(undefined4 *)(*(longlong *)(local_19d8 + 0x300) + 0x68)) {
  case 0:
  case 1:
  case 5:
    local_18e0 = *(undefined8 *)(local_19d0 + 0x80);
    uVar12 = FText::FromName(local_13d8,&local_18e0);
    FText::FText(local_16b8,uVar12);
    plVar14 = local_19e8;
    local_16a0 = 1;
    local_1698 = 0;
    local_1690 = 0;
    lVar13 = *local_19e8;
    puVar10 = (undefined8 *)FName::FName(local_1520,"MultiboxHookColor",1);
    puVar10 = (undefined8 *)(**(code **)(lVar13 + 0x28))(plVar14,*puVar10,0);
    local_1618 = 0;
    local_1628 = *puVar10;
    uStack_1620 = puVar10[1];
    uVar5 = DAT_1464b9ee9;
    if (local_1a08 != '\0') {
      uVar5 = DAT_1464b9ee8;
    }
    local_1600 = 1;
    local_15f8 = 0;
    local_15f0 = 0;
    local_1937 = 1;
    local_1930 = 0;
    local_1928 = 0;
    local_1610 = 0;
    uStack_1608 = 0;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    local_1938 = uVar5;
    local_17f0 = plVar2;
    local_17e8 = plVar16;
    lVar11 = STextBlock::FArguments::FArguments(local_b18);
    *(undefined1 *)(lVar11 + 0x78) = uVar5;
    *(undefined1 *)(lVar11 + 0x79) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x80,&local_1930);
    FUN_140692440(lVar11 + 0x1a8,&local_1628);
    *(undefined1 *)(lVar11 + 0x1d0) = local_1600;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x1d8,&local_15f8);
    FText::operator=(lVar11 + 0x108,local_16b8);
    *(undefined1 *)(lVar11 + 0x120) = local_16a0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x128,&local_1698);
    local_1918 = SharedPointerInternals::NewIntrusiveReferenceController<SBorder>();
    lVar13 = local_1918 + 0x10;
    local_1920 = lVar13;
    FUN_14044f790(&local_1920,lVar13);
    local_1910 = &local_19ef;
    local_1a58 = (undefined8 *)0x650;
    SWidget::SetDebugInfo
              (lVar13,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x208);
    puVar10 = (undefined8 *)FUN_140693250(&local_1920,local_1430,lVar11);
    local_17e0 = *puVar10;
    local_17d8 = puVar10[1];
    if (local_17d8 != 0) {
      LOCK();
      *(int *)(local_17d8 + 8) = *(int *)(local_17d8 + 8) + 1;
      UNLOCK();
    }
    lVar11 = FUN_1418c41f0();
    *(undefined1 *)(lVar11 + 0x20) = 2;
    local_1900 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
    lVar13 = local_1900 + 0x10;
    local_1908 = lVar13;
    FUN_14044f790(&local_1908,lVar13);
    local_18f8 = &local_19ee;
    local_1a58 = (undefined8 *)0x238;
    SWidget::SetDebugInfo
              (lVar13,"SVerticalBox",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x203);
    uVar12 = FUN_1418c41f0();
    uVar12 = FUN_1417f9c30(uVar12,&local_17f0);
    uVar17 = SVerticalBox::FSlot::AutoHeight(lVar11);
    uVar17 = FUN_1417f9c30(uVar17,&local_17e0);
    uVar18 = SCanvas::FArguments::FArguments(local_1288);
    uVar17 = SOverlay::FArguments::operator+(uVar18,uVar17);
    uVar12 = SOverlay::FArguments::operator+(uVar17,uVar12);
    puVar10 = (undefined8 *)FUN_1417fd340(&local_1908,local_1440,uVar12);
    puVar19 = local_19e0;
    local_17d0 = *puVar10;
    local_17c8 = puVar10[1];
    if (local_17c8 != 0) {
      LOCK();
      *(int *)(local_17c8 + 8) = *(int *)(local_17c8 + 8) + 1;
      UNLOCK();
    }
    uVar12 = FUN_140693c40(*local_19e0);
    uVar12 = SVerticalBox::FSlot::AutoHeight(uVar12);
    uVar12 = SHorizontalBox::FSlot::Padding(uVar12,0);
    FUN_140692760(uVar12,&local_17d0);
    if (local_1438 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_1438 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_1438)(local_1438);
        LOCK();
        piVar1 = (int *)((longlong)local_1438 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_1438 + 8))(local_1438,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1908);
    if (local_1180 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_1288);
    if (local_1428 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_1428 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_1428)(local_1428);
        LOCK();
        piVar1 = (int *)((longlong)local_1428 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar9 == 1) {
          (**(code **)(*local_1428 + 8))(local_1428,1);
        }
      }
    }
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1920);
    FUN_140691150(local_b18);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1930);
    FUN_14188ab30(&local_1628);
    TAttribute<FText>::~TAttribute<FText>(local_16b8);
    puVar10 = local_1a00;
    if (local_13d0 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_13d0 + 1;
      lVar13 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_13d0)(local_13d0);
        LOCK();
        piVar1 = (int *)((longlong)local_13d0 + 0xc);
        iVar9 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        puVar10 = local_1a00;
        if (iVar9 == 1) {
          (**(code **)(*local_13d0 + 8))(local_13d0,1);
          puVar10 = local_1a00;
        }
      }
    }
    break;
  case 2:
    local_18d8 = *(undefined8 *)(local_19d0 + 0x80);
    uVar12 = FText::FromName(local_13c0,&local_18d8);
    FText::FText(local_1688,uVar12);
    plVar14 = local_19e8;
    local_1670 = 1;
    local_1668 = 0;
    local_1660 = 0;
    lVar13 = *local_19e8;
    puVar10 = (undefined8 *)FName::FName(local_1528,"MultiboxHookColor",1);
    puVar10 = (undefined8 *)(**(code **)(lVar13 + 0x28))(plVar14,*puVar10,0);
    local_15d8 = 0;
    local_15e8 = *puVar10;
    uStack_15e0 = puVar10[1];
    uVar5 = DAT_1464b9ee9;
    if (local_1a08 != '\0') {
      uVar5 = DAT_1464b9ee8;
    }
    local_15c0 = 1;
    local_15b8 = 0;
    local_15b0 = 0;
    local_1887 = 1;
    local_1880 = 0;
    local_1878 = 0;
    local_15d0 = 0;
    uStack_15c8 = 0;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    local_1888 = uVar5;
    local_17c0 = plVar2;
    local_17b8 = plVar16;
    lVar11 = STextBlock::FArguments::FArguments(local_788);
    *(undefined1 *)(lVar11 + 0x78) = uVar5;
    *(undefined1 *)(lVar11 + 0x79) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x80,&local_1880);
    FUN_140692440(lVar11 + 0x1a8,&local_15e8);
    *(undefined1 *)(lVar11 + 0x1d0) = local_15c0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x1d8,&local_15b8);
    FText::operator=(lVar11 + 0x108,local_1688);
    *(undefined1 *)(lVar11 + 0x120) = local_1670;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x128,&local_1668);
    local_1898 = SharedPointerInternals::NewIntrusiveReferenceController<SBorder>();
    lVar13 = local_1898 + 0x10;
    local_18a0 = lVar13;
    FUN_14044f790(&local_18a0,lVar13);
    local_1890 = &local_19ed;
    local_1a58 = (undefined8 *)0x650;
    SWidget::SetDebugInfo
              (lVar13,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x21f);
    puVar10 = (undefined8 *)FUN_140693250(&local_18a0,local_1410,lVar11);
    local_17b0 = *puVar10;
    local_17a8 = puVar10[1];
    if (local_17a8 != 0) {
      LOCK();
      *(int *)(local_17a8 + 8) = *(int *)(local_17a8 + 8) + 1;
      UNLOCK();
    }
    lVar11 = FUN_1418c41f0();
    *(undefined1 *)(lVar11 + 0x20) = 2;
    local_18b0 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
    lVar13 = local_18b0 + 0x10;
    local_18b8 = lVar13;
    FUN_14044f790(&local_18b8,lVar13);
    local_18a8 = &local_19ec;
    local_1a58 = (undefined8 *)0x238;
    SWidget::SetDebugInfo
              (lVar13,"SVerticalBox",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x21a);
    uVar12 = FUN_1418c41f0();
    uVar12 = FUN_1417f9c30(uVar12,&local_17c0);
    uVar17 = SVerticalBox::FSlot::AutoHeight(lVar11);
    uVar17 = FUN_1417f9c30(uVar17,&local_17b0);
    uVar18 = SCanvas::FArguments::FArguments(local_1168);
    uVar17 = SOverlay::FArguments::operator+(uVar18,uVar17);
    uVar12 = SOverlay::FArguments::operator+(uVar17,uVar12);
    puVar19 = (undefined8 *)FUN_1417fd340(&local_18b8,local_1420,uVar12);
    puVar10 = local_1a00;
    local_17a0 = *puVar19;
    local_1798 = puVar19[1];
    if (local_1798 != 0) {
      LOCK();
      *(int *)(local_1798 + 8) = *(int *)(local_1798 + 8) + 1;
      UNLOCK();
    }
    uVar12 = SVerticalBox::AddSlot(*local_1a00);
    uVar12 = SVerticalBox::FSlot::AutoHeight(uVar12);
    local_1a58 = (undefined8 *)CONCAT44(local_1a58._4_4_,0x3f800000);
    uVar12 = SVerticalBox::FSlot::Padding(uVar12,0,0x3f800000,0);
    FUN_1417f9c30(uVar12,&local_17a0);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1420);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_18b8);
    if (local_1060 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_1168);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1410);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_18a0);
    FUN_140691150(local_788);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1880);
    FUN_14188ab30(&local_15e8);
    TAttribute<FText>::~TAttribute<FText>(local_1688);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_13c0);
    puVar19 = local_19e0;
    break;
  case 3:
    local_18d0 = *(undefined8 *)(local_19d0 + 0x80);
    uVar12 = FText::FromName(local_13f0,&local_18d0);
    FText::FText(local_1658,uVar12);
    plVar14 = local_19e8;
    local_1640 = 1;
    local_1638 = 0;
    local_1630 = 0;
    lVar13 = *local_19e8;
    puVar10 = (undefined8 *)FName::FName(local_1530,"MultiboxHookColor",1);
    puVar10 = (undefined8 *)(**(code **)(lVar13 + 0x28))(plVar14,*puVar10,0);
    local_1598 = 0;
    local_15a8 = *puVar10;
    uStack_15a0 = puVar10[1];
    uVar5 = DAT_1464b9ee9;
    if (local_1a08 != '\0') {
      uVar5 = DAT_1464b9ee8;
    }
    local_1580 = 1;
    local_1578 = 0;
    local_1570 = 0;
    local_183f = 1;
    local_1838 = 0;
    local_1830 = 0;
    local_1590 = 0;
    uStack_1588 = 0;
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    local_1840 = uVar5;
    local_1780 = plVar2;
    local_1778 = plVar16;
    lVar11 = STextBlock::FArguments::FArguments(local_3f8);
    *(undefined1 *)(lVar11 + 0x78) = uVar5;
    *(undefined1 *)(lVar11 + 0x79) = 1;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x80,&local_1838);
    FUN_140692440(lVar11 + 0x1a8,&local_15a8);
    *(undefined1 *)(lVar11 + 0x1d0) = local_1580;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x1d8,&local_1578);
    FText::operator=(lVar11 + 0x108,local_1658);
    *(undefined1 *)(lVar11 + 0x120) = local_1640;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x128,&local_1638);
    local_1850 = SharedPointerInternals::NewIntrusiveReferenceController<SBorder>();
    lVar13 = local_1850 + 0x10;
    local_1858 = lVar13;
    FUN_14044f790(&local_1858,lVar13);
    local_1848 = &local_19eb;
    local_1a58 = (undefined8 *)0x650;
    SWidget::SetDebugInfo
              (lVar13,"STextBlock",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x23b);
    puVar10 = (undefined8 *)FUN_140693250(&local_1858,local_1540,lVar11);
    local_1770 = *puVar10;
    local_1768 = puVar10[1];
    if (local_1768 != 0) {
      LOCK();
      *(int *)(local_1768 + 8) = *(int *)(local_1768 + 8) + 1;
      UNLOCK();
    }
    uVar12 = FUN_1418c41f0();
    lVar11 = SVerticalBox::FSlot::AutoHeight(uVar12);
    *(undefined1 *)(lVar11 + 0x21) = 2;
    local_1868 = SharedPointerInternals::NewIntrusiveReferenceController<SSplitter>();
    lVar13 = local_1868 + 0x10;
    local_1870 = lVar13;
    FUN_14044f790(&local_1870,lVar13);
    local_1860 = local_19ea;
    local_1a58 = (undefined8 *)0x238;
    SWidget::SetDebugInfo
              (lVar13,"SHorizontalBox",
               "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBox.cpp"
               ,0x236);
    uVar12 = FUN_1418c41f0();
    uVar12 = FUN_140692760(uVar12,&local_1780);
    uVar17 = FUN_140692760(lVar11,&local_1770);
    uVar18 = SCanvas::FArguments::FArguments(local_1048);
    uVar17 = SOverlay::FArguments::operator+(uVar18,uVar17);
    uVar12 = SOverlay::FArguments::operator+(uVar17,uVar12);
    puVar19 = (undefined8 *)FUN_140693150(&local_1870,local_1400,uVar12);
    puVar10 = local_1a00;
    local_1760 = *puVar19;
    local_1758 = puVar19[1];
    if (local_1758 != 0) {
      LOCK();
      *(int *)(local_1758 + 8) = *(int *)(local_1758 + 8) + 1;
      UNLOCK();
    }
    uVar12 = SVerticalBox::AddSlot(*local_1a00);
    uVar12 = SVerticalBox::FSlot::AutoHeight(uVar12);
    local_1a58 = (undefined8 *)((ulonglong)local_1a58 & 0xffffffff00000000);
    uVar12 = SVerticalBox::FSlot::Padding(uVar12,0x3f800000,0,0x3f800000);
    FUN_1417f9c30(uVar12,&local_1760);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1400);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1870);
    if (local_f40 != 0) {
      FMemory::Free();
    }
    FUN_140456c70(local_1048);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_1540);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1858);
    FUN_140691150(local_3f8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1838);
    FUN_14188ab30(&local_15a8);
    TAttribute<FText>::~TAttribute<FText>(local_1658);
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_13f0);
    puVar19 = local_19e0;
    break;
  case 4:
    if (plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
    }
    plVar14 = (longlong *)(local_19d8 + 0x310);
    iVar9 = *(int *)(local_19d8 + 0x318);
    *(int *)(local_19d8 + 0x318) = iVar9 + 1;
    if (*(int *)(local_19d8 + 0x31c) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar9);
    }
    plVar14 = (longlong *)((longlong)iVar9 * 0x10 + *plVar14);
    *plVar14 = (longlong)plVar2;
    plVar14[1] = (longlong)plVar16;
    local_1788 = 0;
    local_1790 = 0;
    TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1790);
    puVar19 = local_19e0;
    puVar10 = local_1a00;
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    lVar13 = *plVar14;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar20 + 0xc);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)(*plVar20 + 8))(plVar20,1);
    }
  }
  if (local_1940 != (longlong *)0x0) {
    LOCK();
    plVar20 = local_1940 + 1;
    lVar13 = *plVar20;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*local_1940)(local_1940);
      LOCK();
      piVar1 = (int *)((longlong)local_1940 + 0xc);
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*local_1940 + 8))(local_1940,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar19);
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(puVar10);
  return;
}



// FUNCTION 1418d7eb0 FUN_1418d7eb0 body=961 status=ok
// SIG undefined FUN_1418d7eb0(void)

void FUN_1418d7eb0(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  longlong **pplVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *local_f8 [2];
  undefined1 *local_e8;
  undefined4 uStack_e0;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  
  plVar11 = (longlong *)param_2[1];
  local_98 = *param_2;
  local_a0 = 0;
  local_a8 = local_98;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    local_a8 = *param_2;
    local_a0 = param_2[1];
  }
  local_c8 = &LAB_141918f10;
  local_d8 = &LAB_1418ff520;
  uStack_d0 = 0;
  uStack_c0 = 0;
  local_e8 = &LAB_1418d48f0;
  uStack_e0 = 0;
  plVar8 = (longlong *)0x0;
  lVar6 = local_a8;
  if (local_a0 != 0) {
    LOCK();
    *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
    UNLOCK();
    plVar8 = (longlong *)param_2[1];
    lVar6 = *param_2;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
  }
  local_90 = plVar11;
  plVar5 = (longlong *)FMemory::Realloc(0,0x40);
  local_f8[0] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_GetPoolName_144d6a3f0;
    plVar5[1] = lVar6;
    plVar5[2] = (longlong)plVar8;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
      UNLOCK();
    }
    *(undefined4 *)(plVar5 + 3) = (undefined4)local_c8;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = local_c8._4_4_;
    *(undefined4 *)(plVar5 + 4) = uStack_c0;
    *(undefined4 *)((longlong)plVar5 + 0x24) = uStack_bc;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[6] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_144d6a438;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar8 + 1;
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    plVar5 = local_f8[0];
    if ((int)lVar6 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar5 = local_f8[0];
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
        plVar5 = local_f8[0];
      }
    }
  }
  local_b8 = *param_2;
  local_b0 = param_2[1];
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
    UNLOCK();
    plVar5 = local_f8[0];
  }
  uVar9 = *(undefined8 *)(param_1 + 0x308);
  puVar7 = (undefined4 *)FUN_1418c87d0(local_68,&local_b8,&local_d8);
  lVar6 = FUN_14196a7e0(uVar9,param_3);
  *(undefined4 *)(lVar6 + 0x38) = *puVar7;
  *(undefined1 *)(lVar6 + 0x3c) = *(undefined1 *)(puVar7 + 1);
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar6 + 0x40,puVar7 + 2);
  pplVar2 = (longlong **)(lVar6 + 0x50);
  if (local_f8 != pplVar2) {
    if (plVar5 == (longlong *)0x0) {
      if ((*(int *)(lVar6 + 0x58) != 0) && (plVar8 = *pplVar2, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*pplVar2 != (longlong *)0x0) {
          plVar8 = (longlong *)FMemory::Realloc(*pplVar2,0,0);
          *pplVar2 = plVar8;
        }
        *(undefined4 *)(lVar6 + 0x58) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x30))(plVar5,pplVar2);
    }
  }
  uVar9 = FUN_1418c88f0(local_50,&local_a8,&local_e8);
  uVar9 = SSplitter::FSlot::SizeRule(lVar6,uVar9);
  FUN_140801a00(uVar9,&local_98);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_60);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    local_f8[0] = (longlong *)FMemory::Realloc(plVar5,0,0);
    if (local_f8[0] != (longlong *)0x0) {
      FMemory::Free(local_f8[0]);
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_48);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar11 + 1;
    lVar6 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  plVar11 = (longlong *)(param_1 + 0x318);
  if (param_3 == -1) {
    iVar3 = *(int *)(param_1 + 800);
    *(int *)(param_1 + 800) = iVar3 + 1;
    if (*(int *)(param_1 + 0x324) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar3);
    }
    plVar11 = (longlong *)((longlong)iVar3 * 0x10 + *plVar11);
    *plVar11 = *param_2;
    lVar6 = param_2[1];
    plVar11[1] = lVar6;
  }
  else {
    iVar3 = *(int *)(param_1 + 800);
    *(int *)(param_1 + 800) = iVar3 + 1;
    if (*(int *)(param_1 + 0x324) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar11,iVar3);
    }
    lVar12 = (longlong)param_3 * 0x10;
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar11 + lVar12 + 0x10),(void *)(*plVar11 + lVar12),
               (longlong)(iVar3 - param_3) << 4);
    lVar4 = *plVar11;
    *(longlong *)(lVar12 + lVar4) = *param_2;
    lVar6 = param_2[1];
    *(longlong *)(lVar12 + 8 + lVar4) = lVar6;
  }
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  param_2 = (longlong *)*param_2;
  puVar10 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_78)
  ;
  local_88 = *puVar10;
  local_80 = puVar10[1];
  if (local_80 != 0) {
    LOCK();
    *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
    UNLOCK();
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_70 + 1;
    lVar6 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  (**(code **)(*param_2 + 0x210))(param_2,&local_88);
  return;
}



// FUNCTION 1418d8280 FUN_1418d8280 body=645 status=ok
// SIG undefined FUN_1418d8280(void)

void FUN_1418d8280(longlong *param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  undefined8 *local_68;
  longlong *local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x10))(param_1,param_6,0);
  puVar8 = (undefined8 *)operator_new(0x178);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    lVar7 = param_1[8];
    FUN_1418d0360(puVar8,param_5,param_6,4);
    *puVar8 = &PTR_FUN_144d68250;
    FText::FText(puVar8 + 0x14,param_2);
    *(undefined1 *)(puVar8 + 0x17) = *(undefined1 *)(param_2 + 0x18);
    puVar8[0x18] = 0;
    *(undefined4 *)(puVar8 + 0x19) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar8 + 0x18,param_2 + 0x20);
    FText::FText(puVar8 + 0x1a,param_3);
    *(undefined1 *)(puVar8 + 0x1d) = *(undefined1 *)(param_3 + 0x18);
    puVar8[0x1e] = 0;
    *(undefined4 *)(puVar8 + 0x1f) = 0;
    TBaseDelegate<FSlateBrush_const_*>::operator=(puVar8 + 0x1e,param_3 + 0x20);
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    uVar5 = param_4[3];
    *(undefined4 *)(puVar8 + 0x20) = *param_4;
    *(undefined4 *)((longlong)puVar8 + 0x104) = uVar3;
    *(undefined4 *)(puVar8 + 0x21) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x10c) = uVar5;
    uVar6 = *(undefined8 *)(param_4 + 6);
    puVar8[0x22] = *(undefined8 *)(param_4 + 4);
    puVar8[0x23] = uVar6;
    puVar8[0x24] = 0;
    *(undefined4 *)(puVar8 + 0x25) = 0;
    puVar8[0x26] = 0;
    *(undefined4 *)(puVar8 + 0x27) = 0;
    puVar8[0x28] = 0;
    puVar8[0x29] = 0;
    *(undefined2 *)(puVar8 + 0x2a) = 0;
    *(undefined4 *)((longlong)puVar8 + 0x154) = param_7;
    *(char *)(puVar8 + 0x2b) = (char)lVar7;
    puVar8[0x2c] = 0;
    puVar8[0x2d] = 0;
    *(undefined1 *)(puVar8 + 0x2e) = 1;
  }
  plVar11 = (longlong *)0x0;
  local_68 = puVar8;
  plVar9 = (longlong *)operator_new(0x18);
  if (plVar9 != (longlong *)0x0) {
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
    *plVar9 = (longlong)&PTR_FUN_143f3f2e0;
    plVar9[2] = (longlong)puVar8;
    plVar11 = plVar9;
  }
  local_60 = plVar11;
  FUN_14044f790(&local_68,puVar8);
  local_48 = 0;
  uStack_40 = 0;
  puVar10 = (undefined8 *)
            FUN_1418fc070(local_res8,param_1[7],param_8,&local_48,*(undefined4 *)(param_1[1] + 0x50)
                         );
  puVar8[0x12] = *puVar10;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  local_58 = puVar8;
  local_50 = plVar11;
  FMultiBox::AddMultiBlock(param_1[1],&local_58);
  (**(code **)(*param_1 + 0x10))(param_1,param_6,1);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar11 + 1;
    lVar7 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  return;
}



// FUNCTION 1418d8510 FUN_1418d8510 body=566 status=ok
// SIG undefined FUN_1418d8510(void)

void FUN_1418d8510(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  undefined8 local_res18 [2];
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar9;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_res18[0] = param_3;
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x10))(param_1,param_3,0);
  lVar5 = operator_new(0x178);
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    lVar8 = (longlong)(int)param_1[4] * 0x10 + param_1[3];
    local_68 = *(undefined8 *)(lVar8 + -0x10);
    local_60 = *(longlong *)(lVar8 + -8);
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    local_58 = *param_2;
    local_50 = param_2[1];
    if (local_50 != 0) {
      LOCK();
      *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
      UNLOCK();
    }
    lVar5 = FUN_1418d0160(lVar5,local_res18,&local_58,&local_68,param_4,param_5,param_6,
                          (char)param_1[8],1);
    uVar9 = (undefined4)((ulonglong)param_4 >> 0x20);
  }
  local_48 = lVar5;
  plVar6 = (longlong *)operator_new(0x18);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar6 + 1) = 1;
    *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
    *plVar6 = (longlong)&PTR_FUN_143f3f2e0;
    plVar6[2] = lVar5;
  }
  local_40 = plVar6;
  FUN_14044f790(&local_48,lVar5);
  uVar4 = *(undefined4 *)(param_1[1] + 0x50);
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  puVar7 = (undefined8 *)
           FUN_1418fc070(local_res8,param_1[7],param_7,&local_38,CONCAT44(uVar9,uVar4));
  *(undefined8 *)(lVar5 + 0x90) = *puVar7;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_28 = lVar5;
  local_20 = plVar6;
  FMultiBox::AddMultiBlock(param_1[1],&local_28);
  (**(code **)(*param_1 + 0x10))(param_1,local_res18[0],1);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return;
}



// FUNCTION 1418d8750 FUN_1418d8750 body=549 status=ok
// SIG undefined FUN_1418d8750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1418d8750(longlong *param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
             longlong *param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar5 = (longlong *)operator_new(0x38);
  local_60 = (longlong *)0x0;
  plVar7 = local_60;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = 0;
    plVar5[3] = 0;
    plVar5[4] = 0;
    *plVar5 = (longlong)&PTR_FUN_144d693a0;
    plVar5[5] = 0;
    *(undefined4 *)(plVar5 + 6) = 0;
    plVar7 = plVar5;
  }
  local_68 = plVar7;
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    plVar5[2] = (longlong)plVar7;
    local_60 = plVar5;
  }
  SharedPointerInternals::EnableSharedFromThis(&local_68,plVar7,plVar7);
  local_68[1] = param_3;
  *(undefined4 *)(local_68 + 2) = param_4;
  plVar7 = (longlong *)param_5[1];
  lVar3 = *param_5;
  plVar5 = local_68 + 3;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
  }
  local_58 = lVar3;
  plStack_50 = plVar7;
  if (&local_58 != plVar5) {
    local_58 = *plVar5;
    plStack_50 = (longlong *)local_68[4];
    *plVar5 = lVar3;
    local_68[4] = (longlong)plVar7;
    local_48 = lVar3;
    plStack_40 = plVar7;
  }
  plVar7 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_50 + 1;
    lVar3 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plStack_50 + 8))(plStack_50,1);
      }
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(local_68 + 5,param_6);
  plVar5 = local_60;
  plVar7 = local_68;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
  }
  iVar2 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar2);
  }
  plVar4 = local_60;
  puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *param_1);
  *puVar6 = plVar7;
  puVar6[1] = plVar5;
  *param_2 = local_68;
  param_2[1] = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
    UNLOCK();
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_60 + 1;
      lVar3 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_60)(local_60);
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
  }
  return param_2;
}



// FUNCTION 1418d8980 AddMultiBlock body=450 status=ok
// SIG undefined AddMultiBlock(void)

void FMultiBox::AddMultiBlock(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar7 = *(longlong **)(*param_2 + 0x78);
  lVar2 = *(longlong *)(*param_2 + 0x70);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar7 + 1;
    lVar8 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
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
  if (lVar2 != 0) {
    plVar7 = *(longlong **)(*param_2 + 0x78);
    lVar2 = *(longlong *)(*param_2 + 0x70);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    plVar3 = *(longlong **)(param_1 + 0x38);
    lVar8 = (longlong)*(int *)(param_1 + 0x40);
    for (plVar6 = plVar3; plVar6 != plVar3 + lVar8 * 2; plVar6 = plVar6 + 2) {
      if (*plVar6 == lVar2) {
        if ((int)((longlong)plVar6 - (longlong)plVar3 >> 4) != -1) {
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar7 + 1;
            lVar2 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar2 == 1) {
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
          goto LAB_1418d8a62;
        }
        break;
      }
    }
    iVar5 = *(int *)(param_1 + 0x40) + 1;
    *(int *)(param_1 + 0x40) = iVar5;
    if (*(int *)(param_1 + 0x44) < iVar5) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x38);
    }
    lVar4 = *(longlong *)(param_1 + 0x38);
    *(longlong *)(lVar4 + lVar8 * 0x10) = lVar2;
    *(longlong **)(lVar4 + 8 + lVar8 * 0x10) = plVar7;
  }
LAB_1418d8a62:
  iVar5 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar5 + 1;
  if (*(int *)(param_1 + 0x54) < iVar5 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow((longlong *)(param_1 + 0x48),iVar5);
  }
  plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(param_1 + 0x48));
  *plVar7 = *param_2;
  lVar2 = param_2[1];
  plVar7[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar7 + 1;
    lVar2 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001418d8ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 8))(plVar7,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418d8b50 FUN_1418d8b50 body=531 status=ok
// SIG undefined FUN_1418d8b50(void)

undefined8 * FUN_1418d8b50(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong *local_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (DAT_1469f4590 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  local_68 = 0xbf800000;
  uStack_64 = 0xbf800000;
  uStack_60 = 0xbf800000;
  uStack_5c = 0xbf800000;
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    plVar9 = (longlong *)0x0;
    piVar1 = (int *)(param_1[1] + 8);
    LOCK();
    iVar4 = *piVar1;
    if (iVar4 == 0) {
      *piVar1 = 0;
      iVar4 = 0;
    }
    UNLOCK();
    if (0 < iVar4) {
      plVar2 = (longlong *)param_1[1];
      plVar8 = plVar2;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar10 = iVar4 == 0;
        if (bVar10) {
          *(int *)(plVar2 + 1) = 0;
          iVar4 = 0;
        }
        UNLOCK();
        while (plVar8 = plVar9, !bVar10) {
          LOCK();
          bVar10 = iVar4 == (int)plVar2[1];
          if (bVar10) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
          }
          UNLOCK();
          if (bVar10) {
            plVar8 = plVar2;
            if (plVar2 != (longlong *)0x0) {
              plVar9 = (longlong *)*param_1;
            }
            break;
          }
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar10 = iVar4 == 0;
          if (bVar10) {
            *(int *)(plVar2 + 1) = 0;
            iVar4 = 0;
          }
          UNLOCK();
        }
      }
      plVar2 = DAT_1469f4590;
      uVar5 = SWindow::GetRectInScreen(plVar9,local_48);
      puVar6 = (undefined4 *)FSlateApplication::GetWorkArea(plVar2,local_38,uVar5);
      local_68 = *puVar6;
      uStack_64 = puVar6[1];
      uStack_60 = puVar6[2];
      uStack_5c = puVar6[3];
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar8 + 1;
        lVar3 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar8 + 8))(plVar8,1);
          }
        }
      }
      goto LAB_1418d8c70;
    }
  }
  puVar6 = (undefined4 *)(**(code **)(*DAT_1469f4590 + 0xb8))(0xbf800000,local_28);
  local_68 = *puVar6;
  uStack_64 = puVar6[1];
  uStack_60 = puVar6[2];
  uStack_5c = puVar6[3];
LAB_1418d8c70:
  FUN_1418f55b0(param_1,&local_78,&local_68);
  puVar7 = (undefined8 *)(**(code **)(*local_78 + 0x208))(local_78,local_58,param_3);
  *param_2 = *puVar7;
  lVar3 = puVar7[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_50 + 1;
    lVar3 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  plVar9 = local_70;
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_70 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1418d8d70 AddScrollSample body=391 status=ok
// SIG undefined AddScrollSample(void)

void FInertialScrollManager::AddScrollSample(longlong *param_1,undefined4 param_2,double param_3)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  double *pdVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  
  iVar7 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar7 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar7 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar7);
  }
  pdVar5 = (double *)((longlong)iVar7 * 0x10 + *param_1);
  if (pdVar5 != (double *)0x0) {
    *pdVar5 = param_3;
    *(undefined4 *)(pdVar5 + 1) = param_2;
  }
  iVar7 = (int)param_1[1] + -1;
  fVar12 = 0.0;
  uVar10 = 0;
  uVar11 = 0;
  if (-1 < iVar7) {
    lVar6 = (longlong)iVar7 << 4;
    lVar8 = (longlong)(int)param_1[1] << 4;
    lVar9 = lVar6;
    do {
      lVar3 = *param_1;
      dVar1 = *(double *)(lVar6 + lVar3);
      if (param_3 - dVar1 < (double)param_1[3] || param_3 - dVar1 == (double)param_1[3]) {
        if ((dVar1 < (double)CONCAT44(uVar11,uVar10)) || ((double)CONCAT44(uVar11,uVar10) == 0.0)) {
          uVar10 = SUB84(dVar1,0);
          uVar11 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        fVar12 = fVar12 + *(float *)(lVar6 + 8 + lVar3);
      }
      else {
        iVar2 = (int)param_1[1];
        iVar4 = (iVar2 - iVar7) + -1;
        if (iVar4 != 0) {
          ::_guard_xfg_dispatch_icall_nop
                    ((void *)(lVar3 + lVar9),(void *)(lVar8 + lVar3),(longlong)iVar4 << 4);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        TArray<FDelegateBase,FHeapAllocator>::ResizeShrink(param_1);
      }
      lVar8 = lVar8 + -0x10;
      lVar9 = lVar9 + -0x10;
      lVar6 = lVar6 + -0x10;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
    if (0.0 <= (double)CONCAT44(uVar11,uVar10) && (double)CONCAT44(uVar11,uVar10) != 0.0) {
      param_3 = param_3 - (double)CONCAT44(uVar11,uVar10);
      goto LAB_1418d8ea9;
    }
  }
  param_3 = 0.0;
LAB_1418d8ea9:
  if (param_3 <= 0.0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    *(float *)(param_1 + 2) = (float)((double)fVar12 / param_3);
  }
  return;
}



// FUNCTION 1418d8f00 FUN_1418d8f00 body=180 status=ok
// SIG undefined FUN_1418d8f00(void)

void FUN_1418d8f00(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  longlong local_18;
  longlong local_10;
  
  local_18 = param_2;
  local_10 = param_3;
  FUN_1418cb450(param_1 + 0x358,local_res8,&local_18,0);
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



// FUNCTION 1418d8fc0 FUN_1418d8fc0 body=1081 status=ok
// SIG undefined FUN_1418d8fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1418d8fc0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong **pplVar11;
  undefined1 auStack_4e8 [32];
  ulonglong local_4c8;
  longlong local_4c0;
  undefined4 local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  undefined1 local_498;
  undefined1 local_490;
  longlong local_488;
  longlong *local_478;
  longlong *local_470;
  longlong local_468 [2];
  undefined1 local_458;
  undefined1 local_457;
  undefined8 local_450;
  undefined4 local_448;
  undefined8 local_440;
  longlong *local_438;
  undefined1 local_430 [8];
  longlong *local_428;
  undefined1 local_418;
  undefined8 local_410;
  undefined4 local_408;
  longlong *local_400;
  longlong *local_3f8;
  undefined1 local_3e8 [8];
  longlong *local_3e0;
  undefined1 local_3c8 [912];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_4e8;
  local_468[1] = 0xd;
  local_468[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_468,0);
  local_4c8 = CONCAT62(local_4c8._2_6_,0x3f);
  FGenericPlatformString::Convert<char,wchar_t>(local_468[0],0xd,"Search Start");
  uVar8 = FText::FromString(local_3e8,local_468);
  FText::FText(local_430,uVar8);
  uVar5 = DAT_1464b9ee8;
  local_458 = DAT_1464b9ee8;
  local_418 = 1;
  local_410 = 0;
  local_408 = 0;
  local_457 = 1;
  local_450 = 0;
  local_448 = 0;
  lVar9 = STextBlock::FArguments::FArguments(local_3c8);
  *(undefined1 *)(lVar9 + 0x78) = uVar5;
  *(undefined1 *)(lVar9 + 0x79) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x80,&local_450);
  FText::operator=(lVar9 + 0x108,local_430);
  *(undefined1 *)(lVar9 + 0x120) = local_418;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_410);
  plVar10 = (longlong *)operator_new(0x660);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144043520;
    if (plVar10 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar1 = plVar10 + 2;
  local_400 = plVar1;
  local_3f8 = plVar10;
  FUN_14044f790(&local_400,plVar1);
  local_4c8 = 0x650;
  SWidget::SetDebugInfo
            (plVar1,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Slate\\Private\\Framework\\MultiBox\\MultiBoxBuilder.cpp"
             ,0x126);
  local_4b8 = *(undefined4 *)(lVar9 + 0x90);
  local_488 = lVar9 + 0xf8;
  local_4a0 = lVar9 + 0xe8;
  local_490 = *(undefined1 *)(lVar9 + 0xf1);
  local_4a8 = lVar9 + 200;
  local_4b0 = lVar9 + 0x98;
  local_498 = *(undefined1 *)(lVar9 + 0xf0);
  local_4c8 = lVar9 + 0x60;
  local_4c0 = lVar9 + 0x78;
  SWidget::SWidgetConstruct(plVar1,lVar9,lVar9 + 0x30,lVar9 + 0x40);
  FUN_1419b0120(plVar1,lVar9);
  if (((char)plVar10[5] < '\0') || (cVar6 = (**(code **)(*plVar1 + 0x1e8))(plVar1), cVar6 != '\0'))
  {
    bVar7 = 1;
  }
  else {
    bVar7 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar7;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  lVar9 = *(longlong *)(param_1 + 8);
  pplVar11 = (longlong **)(lVar9 + 0x18);
  local_478 = plVar1;
  local_470 = plVar10;
  if (pplVar11 != &local_478) {
    *pplVar11 = plVar1;
    local_478 = (longlong *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(lVar9 + 0x20,&local_470);
  }
  plVar1 = local_470;
  if (local_470 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_470 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_470)(local_470);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_470 + 8))(local_470,1);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  FUN_140691150(local_3c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_450);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_410);
  if (local_428 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_428 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_428)(local_428);
      LOCK();
      piVar3 = (int *)((longlong)local_428 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_428 + 8))(local_428,1);
      }
    }
  }
  if (local_3e0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_3e0 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_3e0)(local_3e0);
      LOCK();
      piVar3 = (int *)((longlong)local_3e0 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_3e0 + 8))(local_3e0,1);
      }
    }
  }
  if (local_468[0] != 0) {
    FMemory::Free();
  }
  plVar10 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x20);
  local_440 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  local_438 = plVar10;
  uVar8 = FUN_1404b03b0();
  local_4c8 = local_4c8 & 0xffffffffffffff00;
  FUN_1418d9bc0(param_1,&local_440,uVar8,0);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar3 = (int *)((longlong)plVar10 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  return;
}



// FUNCTION 1418d9400 FUN_1418d9400 body=457 status=ok
// SIG undefined FUN_1418d9400(void)

void FUN_1418d9400(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 local_res8;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x18))();
  lVar4 = operator_new(0x178);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar6 = (longlong)(int)param_1[4] * 0x10 + param_1[3];
    local_res8 = 0;
    local_48 = *(undefined8 *)(lVar6 + -0x10);
    local_40 = *(longlong *)(lVar6 + -8);
    if (local_40 != 0) {
      LOCK();
      *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
      UNLOCK();
    }
    lVar6 = (longlong)(int)param_1[6] * 0x10 + param_1[5];
    local_38 = *(undefined8 *)(lVar6 + -0x10);
    local_30 = *(longlong *)(lVar6 + -8);
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    lVar4 = FUN_1418cff40(lVar4,&local_res8,param_2,param_3,param_4,&local_38,1,param_5,&local_48,
                          (char)param_1[8],param_6,param_7);
  }
  local_28 = lVar4;
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = lVar4;
  }
  local_20 = plVar5;
  FUN_14044f790(&local_28,lVar4);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_18 = lVar4;
  local_10 = plVar5;
  FMultiBox::AddMultiBlock(param_1[1],&local_18);
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



// FUNCTION 1418d95d0 FUN_1418d95d0 body=212 status=ok
// SIG undefined FUN_1418d95d0(void)

undefined8 *
FUN_1418d95d0(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar4 = *(int *)(param_1 + 0x28);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  *(int *)(param_1 + 0x28) = iVar4 + 1;
  local_18 = param_4;
  if (*(int *)(param_1 + 0x2c) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1 + 0x20,iVar4);
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  puVar3 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x18);
  *puVar3 = local_38;
  puVar3[1] = uStack_34;
  puVar3[2] = uStack_30;
  puVar3[3] = uStack_2c;
  *(ulonglong *)(lVar5 + 0x10 + (longlong)iVar4 * 0x18) = CONCAT44(uStack_14,local_18);
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,&local_38)
  ;
  *param_2 = *puVar7;
  lVar5 = puVar7[1];
  param_2[1] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)CONCAT44(uStack_2c,uStack_30);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 1418d96b0 FUN_1418d96b0 body=991 status=ok
// SIG undefined FUN_1418d96b0(void)

void FUN_1418d96b0(longlong param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [8];
  longlong *local_60;
  undefined1 local_58 [8];
  longlong *local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar7 = (longlong *)0x0;
  puVar6 = (undefined8 *)(param_1 + 0x208);
  iVar3 = 0;
  if (param_3 == -1) {
    lVar11 = *(longlong *)(param_1 + 0x210);
    if ((lVar11 != 0) && (*(char *)(param_1 + 0x228) != '\0')) {
      FUN_141847700();
      lVar11 = *(longlong *)(param_1 + 0x210);
    }
    if ((lVar11 != 0) && (*param_2 != DAT_1469eb218)) {
      puVar5 = (undefined8 *)
               TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(lVar11 + 8,local_78);
      local_98 = *puVar5;
      local_90 = puVar5[1];
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
        UNLOCK();
      }
      FUN_1418034a0(*param_2,&local_98);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_70 + 1;
        lVar11 = *plVar9;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)lVar11 == 1) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_70 + 8))(local_70,1);
          }
        }
      }
    }
    iVar3 = *(int *)(param_1 + 0x220);
    *(int *)(param_1 + 0x220) = iVar3 + 1;
    if (*(int *)(param_1 + 0x224) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x218,iVar3);
    }
    plVar9 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x218));
    *plVar9 = *param_2;
    lVar11 = param_2[1];
    plVar9[1] = lVar11;
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    iVar3 = (**(code **)*puVar6)(puVar6);
    iVar3 = iVar3 + -1;
  }
  else {
    iVar4 = (**(code **)*puVar6)(puVar6);
    if ((-1 < param_3) && (iVar3 = iVar4, param_3 < iVar4)) {
      iVar3 = param_3;
    }
    FUN_141901000(puVar6,param_2,iVar3);
  }
  FUN_1418dd2f0(param_1,iVar3);
  puVar6 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_68);
  plVar9 = (longlong *)puVar6[1];
  uVar2 = *puVar6;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_60 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_60 + 8))(local_60,1);
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
  }
  local_88 = uVar2;
  local_80 = plVar9;
  FUN_141959560(*param_2,&local_88);
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar9 + 1;
    lVar11 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  plVar9 = *(longlong **)(param_1 + 0x238);
  plVar10 = plVar9;
  plVar12 = plVar7;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar9[1];
    bVar13 = iVar3 == 0;
    if (bVar13) {
      *(int *)(plVar9 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar10 = plVar7, !bVar13) {
      LOCK();
      bVar13 = iVar3 == (int)plVar9[1];
      if (bVar13) {
        *(int *)(plVar9 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar13) {
        plVar10 = plVar9;
        plVar12 = (longlong *)0x0;
        if ((plVar9 != (longlong *)0x0) &&
           (plVar12 = *(longlong **)(param_1 + 0x230), plVar7 = (longlong *)0x0,
           plVar12 != (longlong *)0x0)) {
          plVar8 = (longlong *)(**(code **)(*plVar12 + 0x220))(plVar12,local_58);
          plVar7 = (longlong *)0x1;
          if (*plVar8 != 0) {
            bVar13 = true;
            goto LAB_1418d990d;
          }
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar9[1];
      bVar13 = iVar3 == 0;
      if (bVar13) {
        *(int *)(plVar9 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  bVar13 = false;
  plVar9 = plVar10;
LAB_1418d990d:
  if ((plVar7 != (longlong *)0x0) && (local_50 != (longlong *)0x0)) {
    LOCK();
    plVar7 = local_50 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_50 + 8))(local_50,1);
      }
    }
  }
  if (bVar13) {
    puVar6 = (undefined8 *)(**(code **)(*plVar12 + 0x220))(plVar12,local_38);
    plVar7 = (longlong *)FUN_1418ff8c0(*puVar6,local_48);
    (**(code **)(*(longlong *)**(undefined8 **)(*plVar7 + 200) + 0x30))
              ((longlong *)**(undefined8 **)(*plVar7 + 200),param_2);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_40 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_30 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar9 + 1;
    lVar11 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
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
  return;
}



// FUNCTION 1418d9a90 FUN_1418d9a90 body=295 status=ok
// SIG undefined FUN_1418d9a90(void)

void FUN_1418d9a90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong local_28;
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_1418d96b0(param_1[0x6a]);
  cVar4 = FUN_141847f30(param_1 + 0x78);
  if (cVar4 != '\0') {
    iVar5 = (*(code *)**(undefined8 **)(param_1[0x6a] + 0x208))();
    if (1 < iVar5) {
      uVar6 = TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 1,local_18);
      FUN_141852100(param_1 + 0x78,uVar6,0,0);
      if (local_10 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_10 + 1;
        lVar3 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*local_10)(local_10);
          LOCK();
          piVar2 = (int *)((longlong)local_10 + 0xc);
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 == 1) {
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  if ((char)param_1[0x76] != '\0') {
    SOverlay::RemoveSlot(param_1[0x74],0xffffffff);
    *(undefined1 *)(param_1 + 0x76) = 0;
  }
  (**(code **)(*param_1 + 0x220))(param_1,&local_28);
  if (local_28 != 0) {
    *(undefined1 *)(local_28 + 0x358) = 0;
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return;
}



// FUNCTION 1418d9bc0 FUN_1418d9bc0 body=364 status=ok
// SIG undefined FUN_1418d9bc0(void)

void FUN_1418d9bc0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  longlong *local_10;
  
  (**(code **)(*param_1 + 0x18))();
  lVar4 = operator_new(0xd0);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    local_30 = param_2[1];
    local_38 = *param_2;
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    lVar4 = FUN_1418d10d0(lVar4,&local_38,param_3,param_4);
  }
  local_28 = lVar4;
  plVar5 = (longlong *)operator_new(0x18);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_143f3f2e0;
    plVar5[2] = lVar4;
  }
  local_20 = plVar5;
  FUN_14044f790(&local_28,lVar4);
  *(undefined1 *)(lVar4 + 0x98) = param_5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_18 = lVar4;
  local_10 = plVar5;
  FMultiBox::AddMultiBlock(param_1[1],&local_18);
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


